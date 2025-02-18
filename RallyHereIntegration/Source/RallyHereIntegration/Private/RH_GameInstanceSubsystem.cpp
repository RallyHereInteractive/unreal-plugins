// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RH_GameInstanceSubsystem.h"
#include "RallyHereIntegrationModule.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "Misc/CoreDelegates.h"
#include "GameFramework/GameModeBase.h"
#include "RH_LocalPlayer.h"

#include "RH_Events.h"

// subsystem includes
#include "RH_GameInstanceSessionSubsystem.h"
#include "RH_GameInstanceBootstrappers.h"
#include "RH_PlayerInfoSubsystem.h"
#include "RH_CatalogSubsystem.h"
#include "RH_ConfigSubsystem.h"
#include "RH_EntitlementSubsystem.h"
#include "RH_SettingsSubsystem.h"
#include "RH_MatchSubsystem.h"
#include "RH_RemoteFileSubsystem.h"
#include "RH_GuideSubsystem.h"

#include "RH_SessionBrowser.h"
#include "RH_MatchmakingBrowser.h"


bool URH_GameInstanceSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	if (!bEnabled)
	{
		return false;
	}

	TArray<UClass*> ChildClasses;
	GetDerivedClasses(GetClass(), ChildClasses, false);

	if (ChildClasses.Num() > 0)
	{
		UE_LOG(LogRallyHereIntegration, Display, TEXT("Found %i derived classes when attemping to create (%s), skipping creation"), ChildClasses.Num(), *GetClass()->GetName());
		return false;
	}

	return true;
}

void URH_GameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	const auto* Settings = GetDefault<URH_IntegrationSettings>();

	// Create Subsystem plugins
	if (bEnableGameSessions)
	{
		SessionSubsystem = AddSubsystemPlugin<URH_GameInstanceSessionSubsystem>(Settings->GameInstanceSessionInfoSubsystemClass);

		if (IsServerBootstrappingEnabled())
		{
			ServerBootstrapper = AddSubsystemPlugin<URH_GameInstanceServerBootstrapper>(Settings->GameInstanceServerBootstrapperClass);
		}
		else if (IsClientBootstrappingEnabled())
		{
			ClientBootstrapper = AddSubsystemPlugin<URH_GameInstanceClientBootstrapper>(Settings->GameInstanceClientBootstrapperClass);
		}
	}

	if (!IsRunningDedicatedServer())
	{
		// Register for application activated event (returning from suspension on consoles)
		AppSuspendHandle = FCoreDelegates::ApplicationWillEnterBackgroundDelegate.AddUObject(this, &URH_GameInstanceSubsystem::AppSuspendCallback);
		AppResumeHandle = FCoreDelegates::ApplicationHasEnteredForegroundDelegate.AddUObject(this, &URH_GameInstanceSubsystem::AppResumeCallback);

		AppDeactivatedHandle = FCoreDelegates::ApplicationWillDeactivateDelegate.AddUObject(this, &URH_GameInstanceSubsystem::AppDeactivatedCallback);
		AppReactivatedHandle = FCoreDelegates::ApplicationHasReactivatedDelegate.AddUObject(this, &URH_GameInstanceSubsystem::AppReactivatedCallback);
	}

	PlayerInfoSubsystem = AddSubsystemPlugin<URH_PlayerInfoSubsystem>(Settings->PlayerInfoSubsystemClass);
	CatalogSubsystem = AddSubsystemPlugin<URH_CatalogSubsystem>(Settings->CatalogSubsystemClass);
	ConfigSubsystem = AddSubsystemPlugin<URH_ConfigSubsystem>(Settings->ConfigSubsystemClass);
	SettingsSubsystem = AddSubsystemPlugin<URH_SettingsSubsystem>(Settings->SettingsSubsystemClass);
	MatchSubsystem = AddSubsystemPlugin<URH_MatchSubsystem>(Settings->MatchSubsystemClass);
	RemoteFileSubsystem = AddSubsystemPlugin<URH_RemoteFileSubsystem>(Settings->RemoteFileSubsystemClass);
	GuideSubsystem = AddSubsystemPlugin<URH_GuideSubsystem>(Settings->GuideSubsystemClass);

	if (bEnableSessionBrowser)
	{
		SessionSearchCache = AddSubsystemPlugin<URH_SessionBrowserCache>(Settings->SessionBrowserCacheClass);
	}
	if (bEnableMatchmakingBrowser)
	{
		MatchmakingCache = AddSubsystemPlugin<URH_MatchmakingBrowserCache>(Settings->MatchmakingBrowserCacheClass);
	}

	// Initialize all plugins
	for (auto Plugin : SubsystemPlugins)
	{
		Plugin->Initialize();
	}

	QueryIpAddressIfNeeded();
}

void URH_GameInstanceSubsystem::Deinitialize()
{
    UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	// deinitialize all plugins
	for (auto Plugin : SubsystemPlugins)
	{
		Plugin->Deinitialize();
	}
	SubsystemPlugins.Reset();

	SessionSubsystem = nullptr;
	ServerBootstrapper = nullptr;
	ClientBootstrapper = nullptr;
	PlayerInfoSubsystem = nullptr;
	CatalogSubsystem = nullptr;
	ConfigSubsystem = nullptr;
	SettingsSubsystem = nullptr;
	MatchSubsystem = nullptr;
	RemoteFileSubsystem = nullptr;
	GuideSubsystem = nullptr;
	SessionSearchCache = nullptr;
	MatchmakingCache = nullptr;

	if (AppSuspendHandle.IsValid())
	{
		FCoreDelegates::ApplicationWillEnterBackgroundDelegate.Remove(AppSuspendHandle);
	}
	if (AppResumeHandle.IsValid())
	{
		FCoreDelegates::ApplicationHasEnteredForegroundDelegate.Remove(AppResumeHandle);
	}
	if (AppDeactivatedHandle.IsValid())
	{
		FCoreDelegates::ApplicationWillDeactivateDelegate.Remove(AppDeactivatedHandle);
	}
	if (AppReactivatedHandle.IsValid())
	{
		FCoreDelegates::ApplicationHasReactivatedDelegate.Remove(AppReactivatedHandle);
	}
}

void URH_GameInstanceSubsystem::CustomEndpoint(const FRH_CustomEndpointRequestWrapper& RequestWrapper, const RallyHereAPI::FDelegate_CustomEndpointSend& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	typedef RallyHereAPI::Traits_CustomEndpointSend BaseType;

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.EndpointId = RequestWrapper.EndpointId;
	if (RequestWrapper.ContentType.Len() > 0)
	{
		Request.ContentType = RequestWrapper.ContentType;
	}
	if (RequestWrapper.Body.GetValue().IsValid())
	{
		Request.Body = RequestWrapper.Body;
	}

	BaseType::DoCall(RH_APIs::GetAPIs().GetCustom(), Request, Delegate, RequestWrapper.Priority);

}

void URH_GameInstanceSubsystem::CustomEndpoint(const FRH_CustomEndpointRequestWrapper& Request, const FRH_CustomEndpointDelegateBlock& Delegate)
{
	auto InternalDelegate = RallyHereAPI::FDelegate_CustomEndpointSend::CreateLambda([Delegate](const RallyHereAPI::FResponse_CustomEndpointSend& Resp)
		{
			FRH_CustomEndpointResponseWrapper ResponseWrapper(Resp);
			Delegate.ExecuteIfBound(ResponseWrapper);
		});
	CustomEndpoint(Request, InternalDelegate);
}

void URH_GameInstanceSubsystem::QueryIpAddressIfNeeded(bool bForce, FSimpleDelegate Delegate)
{
	if (bForce || LastKnownIPAddressQueryState == IP_QUERY_STATE_NONE || LastKnownIPAddressQueryState == IP_QUERY_STATE_COMPLETE_FAILURE)
	{	
		const auto& IntegrationSettings = GetDefault<URH_IntegrationSettings>();
		if (IntegrationSettings->ClientDeviceIpEndpoint.Len() > 0 && ensure(FModuleManager::Get().IsModuleLoaded("HTTP")))
		{
			LastKnownIPAddressQueryState = IP_QUERY_STATE_IN_PROGRESS;
			// add the delegate to the list of deferred callbacks
			LastKnownIpAddressUpdateDelegates.Add(Delegate);
			
			// use the custom API's retry manager
			auto HttpRetryManager = RH_APIs::GetAPIs().GetCustom()->GetHttpRetryManager();

			// Create/send Http request for an event
			TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = HttpRetryManager->CreateRequest(FHttpRetrySystem::FRetryLimitCountSetting(),
				FHttpRetrySystem::FRetryTimeoutRelativeSecondsSetting(),
				FHttpRetrySystem::FRetryResponseCodes(),
				FHttpRetrySystem::FRetryVerbs(),
				FHttpRetrySystem::FRetryDomainsPtr()
			);

			HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
			HttpRequest->SetURL(IntegrationSettings->ClientDeviceIpEndpoint);
			HttpRequest->SetVerb(TEXT("GET"));

			HttpRequest->OnProcessRequestComplete().BindWeakLambda(this, [this](FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bProcessedSuccess) mutable
				{
					if (bProcessedSuccess && HttpResponse != nullptr && EHttpResponseCodes::IsOk(HttpResponse->GetResponseCode()))
					{
						LastKnownIPAddress = HttpResponse->GetContentAsString().TrimStartAndEnd();
						LastKnownIPAddressQueryState = IP_QUERY_STATE_COMPLETE_SUCCESS;

						// write through to global cache
						FRallyHereIntegrationModule::Get().SetLastKnownIPAddress(LastKnownIPAddress);
					}
					else
					{
						LastKnownIPAddressQueryState = IP_QUERY_STATE_COMPLETE_FAILURE;
					}
					
					OnLastKnownIpAddressUpdated.Broadcast();

					for (auto& Delegate : LastKnownIpAddressUpdateDelegates)
					{
						Delegate.ExecuteIfBound();
					}
					LastKnownIpAddressUpdateDelegates.Empty();
				});

			HttpRequest->ProcessRequest();
		}
		else
		{
			// if no endpoint is configured, just mark as success so we don't keep trying
			LastKnownIPAddressQueryState = IP_QUERY_STATE_COMPLETE_SUCCESS;

			// execute the broadcast delegate as state changed
			OnLastKnownIpAddressUpdated.Broadcast();
			// execute the callback delegate
			Delegate.ExecuteIfBound();
		}
	}
	else if (LastKnownIPAddressQueryState == IP_QUERY_STATE_IN_PROGRESS)
	{
		// already in progress, just wait for the callback
		LastKnownIpAddressUpdateDelegates.Add(Delegate);
	}
	else // IP_QUERY_STATE_COMPLETE_SUCCESS
	{
		// already has completed, just call the waiting delegate
		Delegate.ExecuteIfBound();
	}
}

void URH_GameInstanceSubsystem::AppSuspendCallback()
{
	UE_LOG(LogRallyHereIntegration, Log, TEXT("URH_GameInstanceSubsystem::AppSuspendCallback()"));
	// This delegate can be called from 'any' thread, so do the Logoff() call on the game thread
	DECLARE_CYCLE_STAT(TEXT("URH_GameInstanceSubsystem::AppSuspendCallback"), STAT_GameInstanceSubsystem_AppSuspendCallback, STATGROUP_TaskGraphTasks);

	const FGraphEventRef Task = FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateUObject(this, &URH_GameInstanceSubsystem::AppSuspendCallbackInGameThread),
		GET_STATID(STAT_GameInstanceSubsystem_AppSuspendCallback),
		nullptr,
		ENamedThreads::GameThread);

	FTaskGraphInterface::Get().WaitUntilTaskCompletes(Task);
}

void URH_GameInstanceSubsystem::AppSuspendCallbackInGameThread()
{
	UE_LOG(LogRallyHereIntegration, Log, TEXT("URH_GameInstanceSubsystem::AppSuspendCallbackInGameThread()"));
}

void URH_GameInstanceSubsystem::AppDeactivatedCallback()
{
	UE_LOG(LogRallyHereIntegration, Log, TEXT("URH_GameInstanceSubsystem::AppDeactivatedCallback()"));
	// This delegate can be called from 'any' thread, so do the Logoff() call on the game thread
	DECLARE_CYCLE_STAT(TEXT("URH_GameInstanceSubsystem::AppDeactivatedCallback"), STAT_GameInstanceSubsystem_AppDeactivatedCallback, STATGROUP_TaskGraphTasks);

	if (IsInGameThread())
	{
		AppDeactivatedCallbackInGameThread();
	}
	else
	{
		const FGraphEventRef Task = FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
			FSimpleDelegateGraphTask::FDelegate::CreateUObject(this, &URH_GameInstanceSubsystem::AppDeactivatedCallbackInGameThread),
			GET_STATID(STAT_GameInstanceSubsystem_AppDeactivatedCallback),
			nullptr,
			ENamedThreads::GameThread);

		FTaskGraphInterface::Get().WaitUntilTaskCompletes(Task);
	}
}

void URH_GameInstanceSubsystem::AppDeactivatedCallbackInGameThread()
{
	UE_LOG(LogRallyHereIntegration, Log, TEXT("URH_GameInstanceSubsystem::AppDeactivatedCallbackInGameThread()"));
}

void URH_GameInstanceSubsystem::AppReactivatedCallback()
{
	UE_LOG(LogRallyHereIntegration, Log, TEXT("URH_GameInstanceSubsystem::AppReactivatedCallback()"));
	// This delegate can be called from 'any' thread, so do the Logoff() call on the game thread
	DECLARE_CYCLE_STAT(TEXT("URH_GameInstanceSubsystem::AppReactivatedCallback"), STAT_FPComClient_AppReactivatedCallback, STATGROUP_TaskGraphTasks);

	if (IsInGameThread())
	{
		AppReactivatedCallbackInGameThread();
	}
	else
	{
		const FGraphEventRef Task = FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
			FSimpleDelegateGraphTask::FDelegate::CreateUObject(this, &URH_GameInstanceSubsystem::AppReactivatedCallbackInGameThread),
			GET_STATID(STAT_FPComClient_AppReactivatedCallback),
			nullptr,
			ENamedThreads::GameThread);
	}
}

void URH_GameInstanceSubsystem::AppReactivatedCallbackInGameThread()
{
	UE_LOG(LogRallyHereIntegration, Log, TEXT("URH_GameInstanceSubsystem::AppReactivatedCallbackInGameThread()"));

	if (GetDefault<URH_IntegrationSettings>()->bAutoProcessPlatformEntitlementsOnReactivate)
	{
		for (auto LP : GetGameInstance()->GetLocalPlayers())
		{
			auto RHLP = LP->GetSubsystem<URH_LocalPlayerSubsystem>();
			if (RHLP != nullptr && RHLP->GetEntitlementSubsystem() != nullptr)
			{
				RHLP->GetEntitlementSubsystem()->SubmitEntitlementsForLoggedInOSS();
			}
		}
	}
}

void URH_GameInstanceSubsystem::AppResumeCallback()
{
	UE_LOG(LogRallyHereIntegration, Log, TEXT("URH_GameInstanceSubsystem::AppResumeCallback()"));
	// This delegate can be called from 'any' thread, so do the Logoff() call on the game thread
	DECLARE_CYCLE_STAT(TEXT("URH_GameInstanceSubsystem::AppResumeCallback"), STAT_RHClient_AppResumeCallback, STATGROUP_TaskGraphTasks);

	const FGraphEventRef Task = FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateUObject(this, &URH_GameInstanceSubsystem::AppResumeCallbackInGameThread),
		GET_STATID(STAT_RHClient_AppResumeCallback),
		nullptr,
		ENamedThreads::GameThread);
}

void URH_GameInstanceSubsystem::AppResumeCallbackInGameThread()
{
	UE_LOG(LogRallyHereIntegration, Log, TEXT("URH_GameInstanceSubsystem::AppResumeCallbackInGameThread()"));

	if (GetDefault<URH_IntegrationSettings>()->bAutoProcessPlatformEntitlementsOnResume)
	{
		for (auto LP : GetGameInstance()->GetLocalPlayers())
		{
			auto RHLP = LP->GetSubsystem<URH_LocalPlayerSubsystem>();
			if (RHLP != nullptr && RHLP->GetEntitlementSubsystem() != nullptr)
			{
				RHLP->GetEntitlementSubsystem()->SubmitEntitlementsForLoggedInOSS();
			}
		}
	}
}
