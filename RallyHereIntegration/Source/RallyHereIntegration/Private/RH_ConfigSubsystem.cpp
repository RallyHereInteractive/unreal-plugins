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
	SiteSettingsPoller = FRH_PollControl::CreateAutoPoller();

	// start timer to check for updates
	if (bAutomaticallyPollConfigurationData)
	{
		StartAppSettingsRefreshTimer();
	}

	// bind callback that checks if we are automatically applying hotfix data on settings change.  Check is internal so it can itself be hotfixed
	AppSettingsUpdatedDelegate.AddLambda([](URH_ConfigSubsystem* pConfig)
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
	if (SiteSettingsPoller.IsValid())
	{
		SiteSettingsPoller->StopPoll();
		SiteSettingsPoller.Reset();
	}
}

void URH_ConfigSubsystem::InitPropertiesWithDefaultValues()
{
	AppSettings.Empty();
	SiteSettings.Empty();
	
	// Load Default Feature Flags
	FKeyValueSink Visitor;
	Visitor.BindLambda([&](const FString& Key, const FString& Value) { AppSettings.Add(Key, Value); });
	GConfig->ForEachEntry(Visitor, TEXT("RallyHereFeatures"), GRallyHereIntegrationIni);
}

void URH_ConfigSubsystem::FetchAppSettings(const FRH_GenericSuccessDelegate& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	typedef RallyHereAPI::Traits_GetAppSettingsClient BaseType;

	BaseType::Request Request;
	Request.IfNoneMatch = AppSettingsETag;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateUObject(this, &URH_ConfigSubsystem::OnFetchAppSettings),
		Delegate
		);

	Helper->Start(RH_APIs::GetConfigAPI(), Request);
}

void URH_ConfigSubsystem::PollAppSettings(const FRH_PollCompleteFunc& Delegate)
{
	// fetch with the above delegate wrappered into a lambda to convert the type
	FetchAppSettings(FRH_GenericSuccessDelegate::CreateLambda([Delegate](bool bSuccess) {Delegate.ExecuteIfBound(bSuccess, true); }));
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

		AppSettingsUpdatedDelegate.Broadcast(this);

		if (AppSettingsPoller.IsValid())
		{
			AppSettingsPoller->DeferPollTimer();
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

void URH_ConfigSubsystem::FetchSiteSettings(const FRH_GenericSuccessDelegate& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	typedef RallyHereAPI::Traits_GetSiteSettings BaseType;

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	//Request.IfNoneMatch = AppSettingsETag;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateUObject(this, &URH_ConfigSubsystem::OnFetchSiteSettings),
		Delegate
	);

	Helper->Start(RH_APIs::GetAPIs().GetSite(), Request);
}

void URH_ConfigSubsystem::PollSiteSettings(const FRH_PollCompleteFunc& Delegate)
{
	auto AuthContext = GetAuthContext();
	if (!AuthContext.IsValid() || !AuthContext->IsLoggedIn())
	{
		Delegate.ExecuteIfBound(false, true);
		return;
	}

	// fetch with the above delegate wrappered into a lambda to convert the type
	FetchSiteSettings(FRH_GenericSuccessDelegate::CreateLambda([Delegate](bool bSuccess) {Delegate.ExecuteIfBound(bSuccess, true); }));
}

void URH_ConfigSubsystem::OnFetchSiteSettings(const RallyHereAPI::FResponse_GetSiteSettings& Resp)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	// TODO - check for differences / use ETag
	if (Resp.IsSuccessful())
	{
		SiteSettings.Reset();
		for (auto Site : Resp.Content)
		{
			SiteSettings.Add(Site.GetSiteId(), Site);
		}
	}

	SiteSettingsUpdatedDelegate.Broadcast(this);

	if (SiteSettingsPoller.IsValid())
	{
		SiteSettingsPoller->DeferPollTimer();
	}
}

void URH_ConfigSubsystem::StartSiteSettingsRefreshTimer()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	static FName PollTimerName(TEXT("SiteSettings"));

	if (SiteSettingsPoller.IsValid())
	{
		SiteSettingsPoller->StartPoll(FRH_PollFunc::CreateUObject(this, &URH_ConfigSubsystem::PollSiteSettings), PollTimerName);
	}
}

void URH_ConfigSubsystem::StopSiteSettingsRefreshTimer()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	if (SiteSettingsPoller.IsValid())
	{
		SiteSettingsPoller->StopPoll();
	}
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