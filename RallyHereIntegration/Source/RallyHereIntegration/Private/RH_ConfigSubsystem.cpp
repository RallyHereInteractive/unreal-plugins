// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RH_ConfigSubsystem.h"

#include "RallyHereIntegrationModule.h"
#include "Misc/ConfigCacheIni.h"
#include "Engine/World.h"
#include "TimerManager.h"

#include "Engine/GameInstance.h"
#include "RH_GameInstanceSubsystem.h"
#include "Modules/ModuleManager.h"
#include "OnlineHotfixManager.h"

URH_ConfigSubsystem::URH_ConfigSubsystem(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	KickBeforeHint = FDateTime::MinValue();
}

void URH_ConfigSubsystem::Initialize()
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Initialize();

	InitPropertiesWithDefaultValues();

	KVsPoller = FRH_PollControl::CreateAutoPoller();

	if (GetDefault<URH_IntegrationSettings>()->bAutomaticallyPollConfigurationData)
	{
		// start timer to check for updates
		StartKVsRefreshTimer();
	}

	// bind callback that checks if we are automatically applying hotfix data on kvs change.  Check is internal so it can itself be hotfixed
	OnKVsUpdated.AddLambda([](URH_ConfigSubsystem* pConfig)
	{
		if (GetDefault<URH_IntegrationSettings>()->bAutomaticallyApplyHotfixData)
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

	if (KVsPoller.IsValid())
	{
		KVsPoller->StopPoll();
		KVsPoller.Reset();
	}
}

void URH_ConfigSubsystem::InitPropertiesWithDefaultValues()
{
	KVs.Empty();
	
	// Load Default Feature Flags
	FKeyValueSink Visitor;
	Visitor.BindLambda([&](const FString& Key, const FString& Value) { KVs.Add(Key, Value); });
	GConfig->ForEachEntry(Visitor, TEXT("RallyHereFeatures"), GRallyHereIntegrationIni);
}

void URH_ConfigSubsystem::FetchKVs(const FRH_GenericSuccessWithErrorBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	GetKVsAPIType::Request Request;
	Request.IfNoneMatch = KVsETag;
	Request.AuthContext = GetAuthContext();
	Request.SetDisableAuthRequirement(true);	// auth is optional for this request, but not passing a valid auth context will cause it to fail client side without this flag

	auto Helper = MakeShared<FRH_SimpleQueryHelper<GetKVsAPIType>>(
		GetKVsAPIType::Delegate::CreateUObject(this, &URH_ConfigSubsystem::OnFetchKVs),
		Delegate,
		GetDefault<URH_IntegrationSettings>()->FetchAppSettingsPriority);

	Helper->Start(RH_APIs::GetConfigAPI(), Request);
}

void URH_ConfigSubsystem::PollKVs(const FRH_PollCompleteFunc& Delegate)
{
	// fetch with the above delegate wrappered into a lambda to convert the type
	FetchKVs(FRH_GenericSuccessWithErrorDelegate::CreateLambda([Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo) {Delegate.ExecuteIfBound(bSuccess, true); }));
}


void URH_ConfigSubsystem::OnFetchKVs(const GetKVsAPIType::Response& Resp)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	// todo - check for differences / use ETag
	const auto Content = Resp.TryGetDefaultContentAsPointer();
	if (Resp.IsSuccessful() && Content != nullptr)
	{
		// clear out old KVs
		KVs.Reset();

		// Load Default Feature Flags
		FKeyValueSink Visitor;
		Visitor.BindLambda([&](const FString& Key, const FString& Value) { KVs.Add(Key, Value); });
		GConfig->ForEachEntry(Visitor, TEXT("RallyHereFeatures"), GRallyHereIntegrationIni);

		// process KVs
		const auto ResponseKVs = Content->GetKvsOrNull();
		if (ResponseKVs != nullptr)
		{
			for (const auto& KV : *ResponseKVs)
			{
				KVs.Add(KV.Key, KV.Value);
			}
		}

		if (auto RespKickBeforeHint = Content->GetKickBeforeHintOrNull())
		{
			KickBeforeHint = Content->GetKickBeforeHint();	
		}
		else
		{
			KickBeforeHint = FDateTime::MinValue();
		}
		
		KVsETag = Resp.TryGetDefaultHeaderAsOptional_ETag().Get(TEXT(""));

		{
			SCOPED_NAMED_EVENT(RallyHere_BroadcastAppSettingsUpdated, FColor::Purple);

PRAGMA_DISABLE_DEPRECATION_WARNINGS
			AppSettingsUpdatedDelegate.Broadcast(this);

			OnSettingsUpdated.Broadcast(this);
			BLUEPRINT_OnSettingsUpdated.Broadcast(this);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

			// broadcast to any listeners
			OnKVsUpdated.Broadcast(this);
			BLUEPRINT_OnKVsUpdated.Broadcast(this);
		}

		if (KVsPoller.IsValid())
		{
			KVsPoller->DeferPollTimer();
		}

		// if we have not yet received a server time update, and we successfully retrieved KVs, try to retrieve time.  This allows us to piggyback the time update on the kv update until it succeeds once
		// and uses the kv success as a good indicator of API health (otherwise, an initial kickoff could fail once and leave us in a bad state)
		FDateTime ServerTime;
		if (GetDefault<URH_IntegrationSettings>()->bAutomaticallyPollConfigurationData && !GetServerTime(ServerTime))
		{
			// kick off time update
			RefreshServerTimeCache();
		}
	}
}

void URH_ConfigSubsystem::StartKVsRefreshTimer()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	static FName PollTimerName(TEXT("AppSettings"));

	if (KVsPoller.IsValid())
	{
		// immediate update, since KVs does not need to wait for login and we want it very early
		KVsPoller->StartPoll(FRH_PollFunc::CreateUObject(this, &URH_ConfigSubsystem::PollKVs), PollTimerName, true);
	}
}

void URH_ConfigSubsystem::StopKVsRefreshTimer()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	if (KVsPoller.IsValid())
	{
		KVsPoller->StopPoll();
	}
}

void URH_ConfigSubsystem::RefreshServerTimeCache(const FRH_GenericSuccessWithErrorBlock& Delegate)
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
	if (IsRunningDedicatedServer() || IsRunningGame())
	{
		bool bOldAutomaticallyApplyHotfixData = GetDefault<URH_IntegrationSettings>()->bAutomaticallyApplyHotfixData;

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

bool URH_ConfigSubsystem::GetHotfixTestValue() const
{
	return GetDefault<URH_IntegrationSettings>()->bHotfixTestValue;
}