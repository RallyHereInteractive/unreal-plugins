#include "RH_ConfigSubsystem.h"

#include "RallyHereIntegrationModule.h"
#include "Misc/ConfigCacheIni.h"
#include "Engine/World.h"
#include "TimerManager.h"

#include "RH_GameInstanceSubsystem.h"
#include "Modules/ModuleManager.h"
#include "OnlineHotfixManager.h"

URH_ConfigSubsystem::URH_ConfigSubsystem(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bAutomaticallyPollConfigurationData = true;
	bAutomaticallyApplyHotfixData = false;
	bHotfixTestValue = false;
}

void URH_ConfigSubsystem::Initialize()
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Initialize();

	InitPropertiesWithDefaultValues();

	AppSettingsPoller = FRH_PollControl::CreateAutoPoller();
	
	if (bAutomaticallyPollConfigurationData)
	{
		// start timer to check for updates
		StartAppSettingsRefreshTimer();
	}

	// bind callback that checks if we are automatically applying hotfix data on settings change.  Check is internal so it can itself be hotfixed
	OnSettingsUpdated.AddLambda([](URH_ConfigSubsystem* pConfig)
	{
		if (pConfig->bAutomaticallyApplyHotfixData)
		{
			pConfig->TriggerHotfixProcessing();
		}
	});

}

void URH_ConfigSubsystem::Deinitialize()
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Deinitialize();
	InitPropertiesWithDefaultValues();

	if (AppSettingsPoller.IsValid())
	{
		AppSettingsPoller->StopPoll();
		AppSettingsPoller.Reset();
	}
}

void URH_ConfigSubsystem::InitPropertiesWithDefaultValues()
{
	AppSettings.Empty();
	
	// Load Default Feature Flags
	FKeyValueSink Visitor;
	Visitor.BindLambda([&](const FString& Key, const FString& Value) { AppSettings.Add(Key, Value); });
	GConfig->ForEachEntry(Visitor, TEXT("RallyHereFeatures"), GRallyHereIntegrationIni);
}

void URH_ConfigSubsystem::FetchAppSettings(const FRH_GenericSuccessWithErrorBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	typedef RallyHereAPI::Traits_GetAppSettingsClient BaseType;

	BaseType::Request Request;
	Request.IfNoneMatch = AppSettingsETag;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateUObject(this, &URH_ConfigSubsystem::OnFetchAppSettings),
		Delegate,
		GetDefault<URH_IntegrationSettings>()->FetchAppSettingsPriority);

	Helper->Start(RH_APIs::GetConfigAPI(), Request);
}

void URH_ConfigSubsystem::PollAppSettings(const FRH_PollCompleteFunc& Delegate)
{
	// fetch with the above delegate wrappered into a lambda to convert the type
	FetchAppSettings(FRH_GenericSuccessWithErrorDelegate::CreateLambda([Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo) {Delegate.ExecuteIfBound(bSuccess, true); }));
}


void URH_ConfigSubsystem::OnFetchAppSettings(const RallyHereAPI::FResponse_GetAppSettingsClient& Resp)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	
	// todo - check for differences / use ETag
	if (Resp.IsSuccessful())
	{
		// Load Default Feature Flags
		FKeyValueSink Visitor;
		Visitor.BindLambda([&](const FString& Key, const FString& Value) { AppSettings.Add(Key, Value); });
		GConfig->ForEachEntry(Visitor, TEXT("RallyHereFeatures"), GRallyHereIntegrationIni);

		for (const auto& AppSetting : Resp.Content)
		{
			AppSettings.Add(AppSetting.Key, AppSetting.Value);
		}

		AppSettingsETag = Resp.ETag.Get(TEXT(""));

		{
			SCOPED_NAMED_EVENT(RallyHere_BroadcastAppSettingsUpdated, FColor::Purple);
			AppSettingsUpdatedDelegate.Broadcast(this);
			OnSettingsUpdated.Broadcast(this);
			BLUEPRINT_OnSettingsUpdated.Broadcast(this);
		}

		if (AppSettingsPoller.IsValid())
		{
			AppSettingsPoller->DeferPollTimer();
		}

		// if we have not yet received a server time update, and we successfully retrieved appsettings, try to retrieve time.  This allows us to piggyback the time update on the appsettings update until it succeeds once
		// and uses the appsettings success as a good indicator of API health (otherwise, an initial kickoff could fail once and leave us in a bad state)
		FDateTime ServerTime;
		if (bAutomaticallyPollConfigurationData && !GetServerTime(ServerTime))
		{
			// kick off time update
			RefreshServerTimeCache();
		}
	}
}

void URH_ConfigSubsystem::StartAppSettingsRefreshTimer()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	static FName PollTimerName(TEXT("AppSettings"));

	if (AppSettingsPoller.IsValid())
	{
		// immediate update, since app settings does not need to wait for login and we want it very early
		AppSettingsPoller->StartPoll(FRH_PollFunc::CreateUObject(this, &URH_ConfigSubsystem::PollAppSettings), PollTimerName, true);
	}
}

void URH_ConfigSubsystem::StopAppSettingsRefreshTimer()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	if (AppSettingsPoller.IsValid())
	{
		AppSettingsPoller->StopPoll();
	}
}

void URH_ConfigSubsystem::RefreshServerTimeCache(FRH_GenericSuccessWithErrorBlock Delegate)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	typedef RallyHereAPI::Traits_GetUtcTime BaseType;

	BaseType::Request Request;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this](const BaseType::Response& Resp)
			{
				if (Resp.IsSuccessful())
				{
					ServerTimeCache.ImportAPITime(Resp);

					FDateTime LocalTime = ServerTimeCache.GetLocalTime();
					FDateTime ServerTime;
					ServerTimeCache.GetServerTime(ServerTime);
					FTimespan Drift;
					ServerTimeCache.GetServerTimeDrift(Drift);

					UE_LOG(LogRallyHereIntegration, Log, TEXT("Received time from server, local time %s, server time %s, drift %s"), *LocalTime.ToString(), *ServerTime.ToString(), *Drift.ToString())
				}
			}),
		Delegate,
		GetDefault<URH_IntegrationSettings>()->FetchAppSettingsPriority);

	Helper->Start(RH_APIs::GetAPIs().GetTime(), Request);
}

void URH_ConfigSubsystem::TriggerHotfixProcessing()
{
	// do not apply when running editor or commandlet, even if configured to apply automatically.  We do not want to accidentally change data the editor is using
	if (!IsRunningDedicatedServer() || IsRunningGame())
	{
		bool bOldAutomaticallyApplyHotfixData = bAutomaticallyApplyHotfixData;

		UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
		URH_GameInstanceSubsystem* pGISS = GetGameInstanceSubsystem();
		if (pGISS != nullptr)
		{
			UGameInstance* OwningGameInstance = pGISS->GetGameInstance();
			if (OwningGameInstance != nullptr)
			{
				UWorld* const MyWorld = OwningGameInstance->GetWorld();
				if (MyWorld != nullptr)
				{
					UOnlineHotfixManager* HotfixManager = UOnlineHotfixManager::Get(MyWorld);
					if (HotfixManager != nullptr)
					{
						// this must be configured in the Engine.ini files to use rally here delivered hotfix data
						// [/Script/Hotfix.OnlineHotfixManager]
						// OSSName = Hotfix
						check(HotfixManager->OSSName == TEXT("Hotfix"));
						HotfixManager->StartHotfixProcess();
					}
				}
			}
		}
	}
}