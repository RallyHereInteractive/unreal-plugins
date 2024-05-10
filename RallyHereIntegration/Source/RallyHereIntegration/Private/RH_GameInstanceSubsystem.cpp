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
#include "RH_SettingsSubsystem.h"
#include "RH_MatchSubsystem.h"
#include "RH_RemoteFileSubsystem.h"

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

	UE_LOG(LogRallyHereIntegration, Display, TEXT("Found %i derived classes when attemping to create (%s), skipping creation"), ChildClasses.Num(), *GetClass()->GetName());

	// Only create an instance if there is no override implementation defined elsewhere
	return ChildClasses.Num() == 0;
}

void URH_GameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	const auto* Settings = GetDefault<URH_IntegrationSettings>();

	// Create Subsystem plugins
	if (bEnableGameSessions)
	{
		SessionSubsystem = AddSubsystemPlugin<URH_GameInstanceSessionSubsystem>(Settings->GameInstanceSessionInfoSubsystemClass);

		if (DEFAULT_IsServerBootstrappingEnabled())
		{
			ServerBootstrapper = AddSubsystemPlugin<URH_GameInstanceServerBootstrapper>(Settings->GameInstanceServerBootstrapperClass);
		}
		else if (DEFAULT_IsClientBootstrappingEnabled())
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

		FTaskGraphInterface::Get().WaitUntilTaskCompletes(Task);
	}
}

void URH_GameInstanceSubsystem::AppReactivatedCallbackInGameThread()
{
	UE_LOG(LogRallyHereIntegration, Log, TEXT("URH_GameInstanceSubsystem::AppReactivatedCallbackInGameThread()"));
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

	FTaskGraphInterface::Get().WaitUntilTaskCompletes(Task);
}

void URH_GameInstanceSubsystem::AppResumeCallbackInGameThread()
{
	UE_LOG(LogRallyHereIntegration, Log, TEXT("URH_GameInstanceSubsystem::AppResumeCallbackInGameThread()"));
}
