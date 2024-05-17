// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RH_GameInstanceBootstrappers.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_GameInstanceSessionSubsystem.h"
#include "RH_LocalPlayerSubsystem.h"
#include "RH_LocalPlayerSessionSubsystem.h"
#include "RH_RemoteFileSubsystem.h"
#include "RH_MatchSubsystem.h"
#include "RH_Events.h"
#include "RH_PlayerInfoSubsystem.h"
#include "RallyHereIntegrationModule.h"
#include "RH_Diagnostics.h"
#include "RH_Integration.h"
#include "RallyHereAPIHttpRequester.h"
#include "RH_ConfigSubsystem.h"
#include "Engine/GameInstance.h"
#include "Engine/LocalPlayer.h"
#include "Misc/CoreDelegates.h"
#include "Misc/CommandLine.h"
#include "HAL/PlatformOutputDevices.h"
#include "RH_SessionHelpers.h"
#include "RH_BootstrappingHelpers.h"

#include "OnlineSubsystemUtils.h"
#include "HttpManager.h"
#include "TimerManager.h"
#include "GameFramework/GameModeBase.h"
#include <IPAddress.h>
#include "Interfaces/IPv4/IPv4Address.h"

#if UE_TRACE_ENABLED
#include "ProfilingDebugging/TraceAuxiliary.h"
#endif

#include "RH_GameHostProviderGHA.h"

#if PLATFORM_UNIX
#include <signal.h>
#endif // PLATFORM_UNIX

URH_BootstrappingSettings::URH_BootstrappingSettings(const FObjectInitializer& ObjectInitlaizer)
	: Super(ObjectInitlaizer)
{
	PollIntervalFinalizer = 1.f;
	PollLogIntervalFinalizer = 1;
	MaxPollCountFinalizer = 10;
}

URH_GameInstanceServerBootstrapper::URH_GameInstanceServerBootstrapper()
	: Super()
{
	DefaultBootstrapMode = ERH_ServerBootstrapMode::Disabled;
	BootstrapMode = ERH_ServerBootstrapMode::Disabled;
	BootstrapStep = ERH_ServerBootstrapFlowStep::Unstarted;

	MaxRecycleCount = 0;

	DefaultAutoCreateSessionType = TEXT("");

	bMultiSessionServerMode = false;
	bReplaceSIGTERMHandler = true;
}

bool URH_GameInstanceServerBootstrapper::GetCommandlineBootstrapModeOverride(ERH_ServerBootstrapMode& mode)
{
	// note - mirror changes to this function below in Initialize, which provides more error handling
	FString BootstrapCommandlineModeString;
	if (
#if ALLOW_RH_COMMANDLINE_ARGS_WITHOUT_PREFIX
		FParse::Value(FCommandLine::Get(), TEXT("rhbootstrapmode="), BootstrapCommandlineModeString) ||
#endif
		FParse::Value(FCommandLine::Get(), TEXT("rh.bootstrapmode="), BootstrapCommandlineModeString))
	{
		auto BootstrapCommandlineMode = RH_GETENUMFROMSTRING("/Script/RallyHereIntegration", "ERH_ServerBootstrapMode", BootstrapCommandlineModeString);
		if (BootstrapCommandlineMode != INDEX_NONE)
		{
			mode = static_cast<ERH_ServerBootstrapMode>(BootstrapCommandlineMode);
			return true;
		}
		else
		{
			mode = ERH_ServerBootstrapMode::GameHostProvider;
			return true;
		}
	}

	return false;
}

bool URH_GameInstanceServerBootstrapper::DetermineJoinParameters(FString& PublicConnStr, FString& PrivateConnStr)
{
	if (BootstrappingResult.AllocationInfo.PublicHost.IsSet())
	{
		if (BootstrappingResult.AllocationInfo.PublicPort.IsSet())
		{
			PublicConnStr = FString::Printf(TEXT("%s:%s"), *BootstrappingResult.AllocationInfo.PublicHost.GetValue(), *BootstrappingResult.AllocationInfo.PublicPort.GetValue());
		}
		else
		{
			PublicConnStr = BootstrappingResult.AllocationInfo.PublicHost.GetValue();
		}

		// temp - parse as IPv4 to determine if it should be public or private
		FIPv4Address tempIPv4;
		if (FIPv4Address::Parse(BootstrappingResult.AllocationInfo.PublicHost.GetValue(), tempIPv4) && tempIPv4.IsSiteLocalAddress())
		{
			PrivateConnStr = PublicConnStr;
			PublicConnStr.Empty();
		}
		else
		{
			PrivateConnStr.Empty();
		}

		// add unreal protocol name
		if (PublicConnStr.Len() > 0)
		{
			PublicConnStr = TEXT("unreal://") + PublicConnStr;
		}
		if (PrivateConnStr.Len() > 0)
		{
			PrivateConnStr = TEXT("unreal://") + PrivateConnStr;
		}

		return true;
	}

	return false;
}

void URH_GameInstanceServerBootstrapper::Initialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Initialize();

	BootstrapMode = DefaultBootstrapMode;

	FString BootstrapCommandlineModeString;
	ERH_ServerBootstrapMode BootstrapCommandlineMode = ERH_ServerBootstrapMode::GameHostProvider;
	if (GetCommandlineBootstrapModeOverride(BootstrapCommandlineMode))
	{
		BootstrapMode = (ERH_ServerBootstrapMode)BootstrapCommandlineMode;
		UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] - default bootstrap mode overridden by commandline to %s"), ANSI_TO_TCHAR(__FUNCTION__)
			, *RH_GETENUMSTRING("/Script/RallyHereIntegration", "ERH_ServerBootstrapMode", BootstrapMode));
	}

	if (
#if ALLOW_RH_COMMANDLINE_ARGS_WITHOUT_PREFIX
		FParse::Value(FCommandLine::Get(), TEXT("rhmaxrecyclecount="), MaxRecycleCount) ||
#endif
		FParse::Value(FCommandLine::Get(), TEXT("rh.maxrecyclecount="), MaxRecycleCount))
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] - Max recycle count overridden by commandline to %d"), ANSI_TO_TCHAR(__FUNCTION__), MaxRecycleCount);
	}

	SetTerminationSignalHandler();

#if UE_TRACE_ENABLED
	FTraceAuxiliary::OnTraceStopped.AddWeakLambda(this, [this](FTraceAuxiliary::EConnectionType TraceType, const FString& TraceDestination)
		{
			if (TraceType == FTraceAuxiliary::EConnectionType::File)
			{
				// upload the trace file
				ConditionalAutoUploadTraceFile(TraceDestination);
			};
		});
#endif

	UpdateBootstrapStep(ERH_ServerBootstrapFlowStep::Unstarted);

	// start login to API as a server
	check(IsRunningDedicatedServer());
	if (IsRunningDedicatedServer() && BootstrapMode != ERH_ServerBootstrapMode::Disabled)
	{
		// this mode assumes that the session subsystem exists
		auto* RHGameInstanceSubsystem = GetGameInstanceSubsystem();
		if (!RHGameInstanceSubsystem->GetSessionSubsystem())
		{
			OnBootstrappingFailed(FString::Printf(TEXT("[%s] - Could not find session subsystem"), ANSI_TO_TCHAR(__FUNCTION__)));
			return;
		}

		RHGameInstanceSubsystem->GetSessionSubsystem()->OnActiveSessionChanged.AddUObject(this, &URH_GameInstanceServerBootstrapper::OnActiveSessionChanged);

		UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] - Beginning RH Server Bootstrapping"), ANSI_TO_TCHAR(__FUNCTION__));

		// create our auth context
		{
			AuthContext = MakeShared<RallyHereAPI::FAuthContext>(RH_APIs::GetAPIs().GetAuth());
			AuthContext->OnLogout().AddUObject(this, &URH_GameInstanceServerBootstrapper::OnLoggedOut);
			AuthContext->SetRefreshTokenExpiredDelegate(RallyHereAPI::FAuthContextLoginRefreshTokenExpired::CreateUObject(this, &URH_GameInstanceServerBootstrapper::OnRefreshTokenExpired));
			GetGameInstanceSubsystem()->SetAuthContext(AuthContext);
		}

		BeginServerLogin();

#if RH_FROM_ENGINE_VERSION(5,3)
		FCoreDelegates::GetApplicationWillTerminateDelegate().AddUObject(this, &URH_GameInstanceServerBootstrapper::ApplicationTerminationNotify);
#else
		FCoreDelegates::ApplicationWillTerminateDelegate.AddUObject(this, &URH_GameInstanceServerBootstrapper::ApplicationTerminationNotify);
#endif
	}
	else
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] - RH Server Bootstrapping disabled"), ANSI_TO_TCHAR(__FUNCTION__));
		UpdateBootstrapStep(ERH_ServerBootstrapFlowStep::Complete);
	}
}

void URH_GameInstanceServerBootstrapper::Deinitialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Deinitialize();

	BestEffortLeaveSession();

	// end any running analytics
	if (AnalyticsProvider.IsValid())
	{
		// emit a correlation end event
		{
			RHStandardEvents::FCorrelationEndEvent CorrelationEndEvent;

			CorrelationEndEvent.Reason = TEXT("Shutdown");

			if (AnalyticsStartTime.IsSet())
			{
				CorrelationEndEvent.DurationSeconds = (FDateTime::UtcNow() - AnalyticsStartTime.GetValue()).GetTotalSeconds();
			}
			AnalyticsStartTime.Reset();

			CorrelationEndEvent.EmitTo(AnalyticsProvider);
		}

		AnalyticsProvider->EndSession();
		AnalyticsProvider.Reset();
	}

	// dispose of any existing game host adapter
	GameHostProvider.Reset();
}

void URH_GameInstanceServerBootstrapper::BestEffortLeaveSession()
{
	// fire leave and expire on our way out to try to do cleanup, then clear out local pointer
	if (RHSession != nullptr)
	{
		RHSession->StopPolling();
		//RHSession->Leave(false);
		// rather than leaving via the helper, invoke the API directly.
		// This is to fix an assert on shutdown where the helper has its callback bindings removed, so it does not complete and release the reference to the http request object

		// can only call the leave session by id self endpoint if we have an auth context with a player
		if (	AuthContext.IsValid() && AuthContext->IsLoggedIn()
			&&	AuthContext->GetLoginResult().IsSet() && AuthContext->GetLoginResult()->GetActivePlayerUuidOrNull() != nullptr
			&&	RHSession->GetSessionId().Len() > 0)
		{
			RallyHereAPI::Traits_LeaveSessionByIdSelf::Request Request;
			Request.AuthContext = GetAuthContext();
			Request.SessionId = RHSession->GetSessionId();

			RallyHereAPI::Traits_LeaveSessionByIdSelf::DoCall(RH_APIs::GetSessionsAPI(), Request, RallyHereAPI::Traits_LeaveSessionByIdSelf::Delegate(), GetDefault<URH_IntegrationSettings>()->SessionLeavePriority);
		}

		RHSession->Expire(FRH_OnSessionExpiredDelegate());
		RHSession->OnSessionUpdatedDelegate.RemoveAll(this);
		RHSession->OnSessionNotFoundDelegate.RemoveAll(this);
		RHSession = nullptr;
	}
}

// SIGTERM (Unix) handlers - these do not immediately shutdown, but rather prevent recycling
namespace RallyHere
{
	namespace TermSignalHandler
	{
		uint8 ExitStatusOverride = 0;
		bool bHasReceivedTermSignal = false;
		bool bHasNotifiedProvider = false;

		void TerminationSignalHandler()
		{
			if (!bHasReceivedTermSignal)
			{
				bHasReceivedTermSignal = true;

				UE_LOG(LogRallyHereIntegration, Warning, TEXT("Termination signal received, marking for spindown rather than exiting"));
			}
		}

		void ProviderTerminationSignalHandler()
		{
			if (!bHasReceivedTermSignal)
			{
				bHasNotifiedProvider = true;	// if signal came from provider, we do not need to notify it again
				bHasReceivedTermSignal = true;

				UE_LOG(LogRallyHereIntegration, Warning, TEXT("Termination signal received, marking for spindown rather than exiting"));
			}
		}

		// whether a soft stop has been requested
		bool IsSoftStopRequested() { return bHasReceivedTermSignal; }

		// simple gate to ensure we only notify the provider once.  Will return true if this is the one and only time provider should be notified
		bool CheckShouldNotifyProvider() { bool bOldValue = bHasNotifiedProvider; bHasNotifiedProvider = true; return bOldValue; }

#if PLATFORM_UNIX
		namespace Unix
		{
			struct sigaction OldTermAction = {};

			void UnixSignalHandler(int32 Signal, siginfo_t* Info, void* Context)
			{
				if (Signal == SIGTERM)
				{
					// do not set exit status override for SIGTERM, as we use it for normal shutdown
					//ExitStatusOverride = static_cast<uint8>(128 + Signal);

					TerminationSignalHandler();

					if (OldTermAction.sa_flags & SA_SIGINFO)
					{
						if (OldTermAction.sa_sigaction)
						{
							OldTermAction.sa_sigaction(Signal, Info, Context);
						}
					}
					else
					{
						if (OldTermAction.sa_handler)
						{
							OldTermAction.sa_handler(Signal);
						}
					}
				}
			}

			void SetTermSignalHandler(bool bReplaceSIGTERMHandler)
			{
				struct sigaction Action;
				FMemory::Memzero(Action);
				Action.sa_sigaction = &UnixSignalHandler;
				sigfillset(&Action.sa_mask);
				Action.sa_flags = SA_SIGINFO | SA_RESTART | SA_ONSTACK;
				if (!bReplaceSIGTERMHandler)
				{
					sigaction(SIGTERM, nullptr, &OldTermAction);
				}
				sigaction(SIGTERM, &Action, nullptr);
			}
		}
#endif
		void SetTermSignalHandler(bool bReplaceSIGTERMHandler)
		{
			static bool bHasSetTerminationHandler = false;
			if (!bHasSetTerminationHandler)
			{
				bHasSetTerminationHandler = true;
#if PLATFORM_UNIX
				Unix::SetTermSignalHandler(bReplaceSIGTERMHandler);
#endif
			}
		}
	}
}

void URH_GameInstanceServerBootstrapper::SetTerminationSignalHandler()
{
	RallyHere::TermSignalHandler::SetTermSignalHandler(GetDefault<URH_GameInstanceServerBootstrapper>()->bReplaceSIGTERMHandler);
}

// SIGKILL / CTRL-C (Windows) handlers - these are indicating an IMMEDIATE shutdown
void URH_GameInstanceServerBootstrapper::ApplicationTerminationNotify()
{
	if (IsInGameThread())
	{
		HandleAppTerminatedGameThread();
	}
	else
	{
		const FGraphEventRef Task = FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
			FSimpleDelegateGraphTask::FDelegate::CreateUObject(this, &URH_GameInstanceServerBootstrapper::HandleAppTerminatedGameThread),
			QUICK_USE_CYCLE_STAT(FRH_TerminationNotify, STATGROUP_TaskGraphTasks),
			nullptr,
			ENamedThreads::GameThread);

		// wait on the task to ensure we process the full termination?
		FTaskGraphInterface::Get().WaitUntilTaskCompletes(Task);
	}
}

void URH_GameInstanceServerBootstrapper::HandleAppTerminatedGameThread()
{
	// make sure this was invoked if it was not previously
	RallyHere::TermSignalHandler::TerminationSignalHandler();

	// attempt to leave current session if still in one
	BestEffortLeaveSession();
}

void URH_GameInstanceServerBootstrapper::UpdateBootstrapStep(ERH_ServerBootstrapFlowStep NewStep)
{
	ERH_ServerBootstrapFlowStep OldStep = BootstrapStep;
	BootstrapStep = NewStep;

	if (OldStep != NewStep)
	{
		if (UE_LOG_ACTIVE(LogRallyHereIntegration, Verbose))
		{
			UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] - Updating bootstrap step [%s] -> [%s]"), ANSI_TO_TCHAR(__FUNCTION__), *UEnum::GetValueAsString(OldStep), *UEnum::GetValueAsString(NewStep));
		}

		OnBootstrapStepChanged.Broadcast(OldStep, NewStep);
		BLUEPRINT_OnBootstrapStepChanged.Broadcast(OldStep, NewStep);
	}
}

void URH_GameInstanceServerBootstrapper::OnBootstrappingFailed(const FString& ErrorReason)
{
	UE_LOG(LogRallyHereIntegration, Error, TEXT("Bootstrapping Failure: %s"), *ErrorReason);

	// only place we should ever set failed
	UpdateBootstrapStep(ERH_ServerBootstrapFlowStep::Failed);

	// attempt to cleanup session state and mark closed
	if (RHSession != nullptr)
	{
		if (RHSession->GetInstanceData() != nullptr)
		{
			// mark instance as closed
			FRHAPI_InstanceInfoUpdate InstanceInfo = RHSession->GetInstanceUpdateInfoDefaults();

			if (BootstrappingResult.AllocationInfo.AllocationId.IsSet())
			{
				InstanceInfo.SetAllocationId(BootstrappingResult.AllocationInfo.AllocationId.GetValue());
			}

			InstanceInfo.SetJoinStatus(ERHAPI_InstanceJoinableStatus::Closed);
			RHSession->UpdateInstanceInfo(InstanceInfo);
		}

		BestEffortLeaveSession();
	}

	if (!bMultiSessionServerMode)
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Server bootstrapping failed - bootstrap error is fatal"), ANSI_TO_TCHAR(__FUNCTION__));

		// make sure log file request is completed before flushing
		ConditionalAutoUploadLogFile();

		// attempt to fully flush HTTP system before we shut down
		// flush requests to ensure we do not have any pending requests
		auto HttpRequester = RallyHereAPI::FRallyHereAPIHttpRequester::Get();
		if (HttpRequester != nullptr)
		{
			HttpRequester->FlushRequestQueue();
		}

#if RH_FROM_ENGINE_VERSION(5,0)
		FHttpModule::Get().GetHttpManager().Flush(EHttpFlushReason::FullFlush);
#else
		FHttpModule::Get().GetHttpManager().Flush(false);
#endif

		auto GameInstance = GetGameInstanceSubsystem()->GetGameInstance();

		auto ShutdownServer = []()
		{
			if (RallyHere::TermSignalHandler::ExitStatusOverride != 0)
			{
				FPlatformMisc::RequestExitWithStatus(false, RallyHere::TermSignalHandler::ExitStatusOverride);
			}
			else
			{
				RequestEngineExit(TEXT("Server bootstrapper failed"));
			}
		};

		// write a diagnostic with potential information about the failure
		if (GameInstance != nullptr)
		{
			UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Writing diagnostic report"), ANSI_TO_TCHAR(__FUNCTION__));
			auto World = GameInstance != nullptr ? GameInstance->GetWorld() : nullptr;

			FRH_DiagnosticReportOptions Options;
			Options.World = World;
			Options.bWriteToFile = true;

			const FString BootstrapStepString = RH_GETENUMSTRING("/Script/RallyHereIntegration", "ERH_ServerBootstrapFlowStep", GetBootstrapStep());
			Options.CustomMetadata.SetStringField(TEXT("shutdown_reason"), 
				FString::Printf(TEXT("Bootstrapping Failure on %s: %s"), *BootstrapStepString, *ErrorReason)
			);

			if (BootstrappingResult.AllocationInfo.AllocationId.IsSet())
			{
				Options.CustomMetadata.SetStringField(TEXT("allocation_id"), BootstrappingResult.AllocationInfo.AllocationId.GetValue());
			}
			if (BootstrappingResult.Session.IsSet())
			{
				Options.CustomMetadata.SetStringField(TEXT("session_id"), BootstrappingResult.Session.GetValue().Data.GetSessionId());
				const auto Instance = BootstrappingResult.Session.GetValue().Data.GetInstanceOrNull();
				if (Instance)
				{
					Options.CustomMetadata.SetStringField(TEXT("instance_id"), Instance->GetInstanceId());
				}
			}

			Options.OutputFilename = TEXT("BootstrapFailure-") + FDateTime::Now().ToString() + TEXT(".json");

			// we want to exit once the report is complete
			Options.OnReportComplete.BindLambda([ShutdownServer](const TSharedRef<const FRH_DiagnosticReportGenerator>& FinalReport)
				{
					ShutdownServer();
				});

			FRallyHereIntegrationModule::Get().GetDiagnostics()->GenerateReport(Options);

			// set a 5 second backup timer to initiate shutdown in case report has an error itself
			FTimerHandle DummyHandle;
			GameInstance->GetTimerManager().SetTimer(DummyHandle, FTimerDelegate::CreateLambda([ShutdownServer]()
				{
					ShutdownServer();
				}),
				5.f, false);
		}
		else
		{
			UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Could not write diagnostic report, no game instance"), ANSI_TO_TCHAR(__FUNCTION__));

			ShutdownServer();
		}
	}
	else
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] - Server bootstrapping failed"), ANSI_TO_TCHAR(__FUNCTION__));
	}
}

void URH_GameInstanceServerBootstrapper::OnBootstrappingComplete()
{
	// only place we should ever set complete
	UpdateBootstrapStep(ERH_ServerBootstrapFlowStep::Complete);
	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] - Server bootstrapping complete"), ANSI_TO_TCHAR(__FUNCTION__));
}

void URH_GameInstanceServerBootstrapper::BeginServerLogin()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	UpdateBootstrapStep(ERH_ServerBootstrapFlowStep::LoggingIn);

	// if we are already login, just continue (refresh may be triggered during a call if needed)
	if (AuthContext->IsLoggedIn())
	{
		OnServerLoginComplete(true);
	}
	else
	{
		auto LoginOSS = GetOSS();

		auto Helper = MakeShared<FRH_ServerLoginHelper>(
			AuthContext,
			LoginOSS,
			FRH_GenericSuccessWithErrorDelegate::CreateUObject(this, &URH_GameInstanceServerBootstrapper::OnServerLoginComplete));

		Helper->Start();
	}
}

void URH_GameInstanceServerBootstrapper::OnServerLoginComplete(bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	if (bSuccess)
	{
		if (BootstrapMode == ERH_ServerBootstrapMode::LoginOnly)
		{
			OnBootstrappingComplete();
		}
		else
		{
			Recycle();
		}
	}
	else
	{
		OnBootstrappingFailed(FString::Printf(TEXT("[%s] - RallyHere login was unsuccessful (Error Code %d, Error Response: [%s]")
			, ANSI_TO_TCHAR(__FUNCTION__)
			, ErrorInfo.ResponseCode
			, *ErrorInfo.ResponseContent
		));
	}
}

void URH_GameInstanceServerBootstrapper::Recycle()
{
	++CurrentRecycleCount;
	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s]  - Recycling [%d]"), ANSI_TO_TCHAR(__FUNCTION__), CurrentRecycleCount);

	UpdateBootstrapStep(ERH_ServerBootstrapFlowStep::Recycling);
	BootstrappingResult = {};

	// we can only recycle if RHSession has been properly cleared
	check(RHSession == nullptr);

	// make sure we do not have an active host providing context
	check(!GameHostProvider.IsValid());

	// check that there is no running analytics provider
	check(!AnalyticsProvider.IsValid());

	// dispose of the previous game host adapter
	GameHostProvider.Reset();

	// if a match is marked as active in the match subsystem, clear it out so that we do not write any data to it on initialization
	auto MatchSubsystem = GetGameInstanceSubsystem()->GetMatchSubsystem();
	if (MatchSubsystem != nullptr && MatchSubsystem->HasActiveMatchId())
	{
		MatchSubsystem->SetActiveMatchId(TEXT(""));
	}

	// we have already logged in, restart registration
	BeginRegistration();
}


void URH_GameInstanceServerBootstrapper::BeginRegistration()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	UpdateBootstrapStep(ERH_ServerBootstrapFlowStep::Registration);

	// create our analytics provider and initialize it
	{
		AnalyticsProvider = RHStandardEvents::AutoCreateAnalyticsProvider();

		if (AnalyticsProvider.IsValid())
		{
			AnalyticsStartTime = FDateTime::UtcNow();
			AnalyticsProvider->StartSession();

			// emit the auto correlation start event
			RHStandardEvents::FCorrelationStartEvent::AutoEmit(AnalyticsProvider, GetGameInstanceSubsystem()->GetGameInstance());

			// emit the auto client device event
			RHStandardEvents::FClientDeviceEvent::AutoEmit(AnalyticsProvider, GetGameInstanceSubsystem()->GetGameInstance());

			GetGameInstanceSubsystem()->SetAnalyticsProvider(AnalyticsProvider);
		}
	}

	auto CreateGameHostProvider = [this]() -> IRH_GameHostProviderInterface*
	{
		FString arguments = FCommandLine::Get();

		// if no rally here url was provided on the commandline, look it up and inject it (GHA does not know about environment lookups)
		FString CommandlineURL;
		if (!FParse::Value(*arguments, TEXT("rallyhereurl="), CommandlineURL))
		{
			arguments += TEXT(" -rallyhereurl=") + FRallyHereIntegrationModule::Get().GetBaseURL();
		}
		if (!FParse::Value(*arguments, TEXT("rhuseragent="), CommandlineURL))
		{
			arguments += TEXT(" -rhuseragent=") + FPlatformHttp::GetDefaultUserAgent();
		}

		UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] - Create game host provider: %s"), ANSI_TO_TCHAR(__FUNCTION__), *arguments);

#ifdef WITH_RALLYHERE_GAME_HOST_ADAPTER
		if (auto* GHAInterface = IRH_GameHostProviderInterface::Create<FRH_GameHostProviderGHA>(arguments))
		{
			return GHAInterface;
		}
		else 
#endif
		if (BootstrapMode == ERH_ServerBootstrapMode::AutoCreate)
		{
			return IRH_GameHostProviderInterface::Create<FRH_GameHostProviderFallbackAutoCreate>(arguments);
		}
		else
		{
			UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - GameHostAdapter provider could not be loaded, and not in autocreate mode"), ANSI_TO_TCHAR(__FUNCTION__));
			return nullptr;
		}
	};

	GameHostProvider.Reset(CreateGameHostProvider());
	if (!GameHostProvider.IsValid() || !GameHostProvider->IsValid())
	{
		GameHostProvider.Reset();
		OnBootstrappingFailed(FString::Printf(TEXT("[%s] - Could not create game host provider"), ANSI_TO_TCHAR(__FUNCTION__)));
		return;
	}

	// bind callbacks
	GameHostProvider->OnProviderSoftStopRequested.BindStatic(&RallyHere::TermSignalHandler::ProviderTerminationSignalHandler);
	GameHostProvider->OnProviderHardStopRequested.BindWeakLambda(this, [this]()
		{
			OnBootstrappingFailed(FString::Printf(TEXT("[%s] - hard stop requested from game host provider"), ANSI_TO_TCHAR(__FUNCTION__)));
		});

	GameHostProvider->OnProviderConnectComplete.BindUObject(this, &URH_GameInstanceServerBootstrapper::OnConnectComplete);
	GameHostProvider->OnProviderRegisterComplete.BindUObject(this, &URH_GameInstanceServerBootstrapper::OnRegisterComplete);
	GameHostProvider->OnProviderReservationComplete.BindUObject(this, &URH_GameInstanceServerBootstrapper::OnReservationComplete);
	GameHostProvider->OnProviderSelfAllocateComplete.BindUObject(this, &URH_GameInstanceServerBootstrapper::OnSelfAllocateComplete);
	GameHostProvider->OnProviderAllocationComplete.BindUObject(this, &URH_GameInstanceServerBootstrapper::OnAllocationComplete);

	GameHostProvider->OnProviderStats.BindUObject(this, &URH_GameInstanceServerBootstrapper::OnGameHostProviderStats);

	BeginConnecting();
}

void URH_GameInstanceServerBootstrapper::BeginConnecting()
{
	if (GameHostProvider.IsValid() && GameHostProvider->IsValid())
	{
		GameHostProvider->BeginConnecting();
	}
	else
	{
		OnBootstrappingFailed(FString::Printf(TEXT("[%s] attempting to connect without a valid game host provider"), ANSI_TO_TCHAR(__FUNCTION__)));
	}
}

void URH_GameInstanceServerBootstrapper::OnConnectComplete(bool bSuccess)
{
	if (!bSuccess)
	{
		OnBootstrappingFailed(FString::Printf(TEXT("[%s] GameHostProvider Failed to connect to provider"), ANSI_TO_TCHAR(__FUNCTION__)));
		return;
	}

	if (BootstrapMode == ERH_ServerBootstrapMode::AutoCreate)
	{
		BeginReservation();
	}
	else
	{
		BeginRegister();
	}
}

void URH_GameInstanceServerBootstrapper::BeginRegister()
{
	if (GameHostProvider.IsValid() && GameHostProvider->IsValid())
	{
		GameHostProvider->BeginRegister();
	}
	else
	{
		OnBootstrappingFailed(FString::Printf(TEXT("[%s] attempting to register without a valid game host provider"), ANSI_TO_TCHAR(__FUNCTION__)));
		return;
	}
}

void URH_GameInstanceServerBootstrapper::OnRegisterComplete(bool bSuccess)
{
	if (!bSuccess)
	{
		OnBootstrappingFailed(FString::Printf(TEXT("[%s] GameHostProvider failed to register"), ANSI_TO_TCHAR(__FUNCTION__)));
		return;
	}
}

void URH_GameInstanceServerBootstrapper::OnAllocationComplete(ERH_AllocationStatus Status, const FRH_GameHostAllocationInfo& AllocationInfo)
{
	// We can be cancelled in a destructor so make no calls which expect the shared ptr to be valid
	if (Status == ERH_AllocationStatus::Cancelled)
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] Cancelled"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}
	else if (Status == ERH_AllocationStatus::Failed)
	{
		if (BootstrapStep != ERH_ServerBootstrapFlowStep::Complete)
		{
			OnBootstrappingFailed(FString::Printf(TEXT("[%s] GameHostProvider Failed to successfully get an allocation"), ANSI_TO_TCHAR(__FUNCTION__)));
		}
		else
		{
			UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] GameHostProvider Spurious allocation failure code after allocated"), ANSI_TO_TCHAR(__FUNCTION__));
		}
		return;
	}
	else if (Status == ERH_AllocationStatus::TimedOut)
	{
		OnBootstrappingFailed(FString::Printf(TEXT("[%s] Exceeded maximum amount of time polling"), ANSI_TO_TCHAR(__FUNCTION__)));
		return;
	}

	if (!AllocationInfo.IsValid())
	{
		OnBootstrappingFailed(FString::Printf(TEXT("[%s] Invalid allocation info"), ANSI_TO_TCHAR(__FUNCTION__)));
		return;
	}

	BootstrappingResult = AllocationInfo;

	UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] Poll response was successful and has allocation id %s session id %s"), *GetName(), *BootstrappingResult.AllocationInfo.AllocationId.Get(TEXT("<UNSET>")), *BootstrappingResult.AllocationInfo.SessionId.Get(TEXT("<UNSET>")));
	auto Helper = MakeShared<FRH_SessionBootstrappingFinalizer>(
		AuthContext,
		BootstrappingResult,
		FRH_ServerBootstrapFinalizerDelegate::CreateUObject(this, &URH_GameInstanceServerBootstrapper::OnRegistrationFinalizerComplete));
	Helper->Start();
}

void URH_GameInstanceServerBootstrapper::BeginReservation()
{
	if (GameHostProvider.IsValid() && GameHostProvider->IsValid())
	{
		GameHostProvider->BeginReservation();
	}
	else
	{
		OnBootstrappingFailed(FString::Printf(TEXT("[%s] attempting to reserve without a valid game host provider"), ANSI_TO_TCHAR(__FUNCTION__)));
	}
}

void URH_GameInstanceServerBootstrapper::OnReservationComplete(bool bSuccess)
{
	if (!bSuccess)
	{
		OnBootstrappingFailed(FString::Printf(TEXT("[%s] GameHostProvider failed to reserve"), ANSI_TO_TCHAR(__FUNCTION__)));
		return;
	}

	bool bStartedHelper = false;
	FString SessionType = DefaultAutoCreateSessionType;

	if (
#if ALLOW_RH_COMMANDLINE_ARGS_WITHOUT_PREFIX
		FParse::Value(FCommandLine::Get(), TEXT("rhsessiontype="), SessionType) ||
#endif
		FParse::Value(FCommandLine::Get(), TEXT("rh.sessiontype="), SessionType))
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] - default session type overridden by commandline to %s"), ANSI_TO_TCHAR(__FUNCTION__), *SessionType);
	}

	if (SessionType.Len() > 0 && AuthContext.IsValid())
	{
		// create a session and return us the session id
		typedef RallyHereAPI::Traits_CreateOrJoinSession BaseType;
		BaseType::Request Request;
		Request.AuthContext = AuthContext;
		Request.CreateOrJoinRequest.SetSessionType(SessionType);
		Request.CreateOrJoinRequest.SetClientVersion(URH_JoinedSession::GetClientVersionForSession());
		Request.CreateOrJoinRequest.ClientSettings.SetPlatform(ERHAPI_Platform::Basic);
		Request.CreateOrJoinRequest.ClientSettings.SetInput(URH_JoinedSession::GetClientInputTypeForSession());

		auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
			BaseType::Delegate::CreateWeakLambda(this, [this](const BaseType::Response& Resp)
				{
					if (Resp.IsSuccessful())
					{
						BootstrappingResult.AllocationInfo.SessionId = Resp.Content.GetSessionId();
					}
				}),
			FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this](bool bSuccess, const FRH_ErrorInfo& Error)
				{
					if (bSuccess && BootstrappingResult.IsValid())
					{
						UE_LOG(LogRallyHereIntegration, Log, TEXT("Session created successfully: %s"), *BootstrappingResult.AllocationInfo.SessionId.Get(TEXT("<INVALID>")))

						// finalize the result
						auto Helper = MakeShared<FRH_SessionBootstrappingFinalizer>(
							AuthContext,
							BootstrappingResult,
							FRH_ServerBootstrapFinalizerDelegate::CreateUObject(this, &URH_GameInstanceServerBootstrapper::OnRegistrationFinalizerComplete));
						Helper->Start();
					}
					else
					{
						OnBootstrappingFailed(FString::Printf(TEXT("[%s] - session creation failed"), ANSI_TO_TCHAR(__FUNCTION__)));
					}
				}),
			GetDefault<URH_IntegrationSettings>()->SessionJoinPriority
		);

		Helper->Start(RH_APIs::GetSessionsAPI(), Request);
		bStartedHelper = true;
	}

	if (!bStartedHelper)
	{
		OnBootstrappingFailed(FString::Printf(TEXT("[%s] - Could not start auto create bootstrapping finalizer helper"), ANSI_TO_TCHAR(__FUNCTION__)));
		return;
	}
}

void URH_GameInstanceServerBootstrapper::BeginSelfAllocate()
{
	if (GameHostProvider.IsValid() && GameHostProvider->IsValid())
	{
		GameHostProvider->BeginSelfAllocate();
	}
	else
	{
		OnBootstrappingFailed(FString::Printf(TEXT("[%s] attempting to self allocate without a valid game host provider"), ANSI_TO_TCHAR(__FUNCTION__)));
		return;
	}
}

void URH_GameInstanceServerBootstrapper::OnSelfAllocateComplete(bool bSuccess)
{
	if (!bSuccess)
	{
		OnBootstrappingFailed(FString::Printf(TEXT("[%s] GameHostProvider failed to allocate"), ANSI_TO_TCHAR(__FUNCTION__)));
		return;
	}
}


void URH_GameInstanceServerBootstrapper::OnRegistrationFinalizerComplete(bool bSuccess, const FRH_BootstrappingResult& Result)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	if (bSuccess && Result.IsComplete() && Result.Session.IsSet())
	{
		// cache off our bootstrapping result
		BootstrappingResult = Result;

		const auto& APISession = BootstrappingResult.Session.GetValue();
		const auto& Template = BootstrappingResult.Template.GetValue();

		UpdateBootstrapStep(ERH_ServerBootstrapFlowStep::WaitingForSession);

		// make sure template is imported and up to date
		ImportAPITemplate(Template);
		// make sure session is imported and up to date
		ImportAPISession(BootstrappingResult.Session.GetValue());

		if (RHSession != nullptr && RHSession->IsOnline() && RHSession->GetSessionId() == APISession.Data.SessionId)
		{
			// create default instance data if needed
			if (RHSession->GetInstanceData() != nullptr)
			{
				OnSessionInstanceCreationCompleted(true, RHSession, FRH_ErrorInfo());
			}
			else
			{
				// allocated session instances (determined by having an allocation id) should always have instance data
				check(!BootstrappingResult.AllocationInfo.AllocationId.IsSet());

				// if an instance was not created for the session, create one
				FURL TempURL = FURL();

				// harvest current map url (generally will have been specified from boot URL
				auto WorldContext = GetGameInstanceSubsystem()->GetGameInstance()->GetWorldContext();
				if (WorldContext != nullptr && WorldContext->World() != nullptr)
				{
					TempURL = WorldContext->World()->URL;
				}

				const FString MapNameString = TempURL.Map;	// this is a simple temporary workaround to get the default map without adding dependencies on the map settings module
				const FString ModeNameString = TempURL.GetOption(TEXT("game="), TEXT(""));

				FRHAPI_InstanceRequest InstanceRequest;

				FRHAPI_InstanceStartupParams InstanceStartupParams;
				InstanceStartupParams.Map = MapNameString;
				if (ModeNameString.Len() > 0)
				{
					InstanceStartupParams.SetMode(ModeNameString);
				}

				InstanceRequest.SetInstanceStartupParams(InstanceStartupParams);
				InstanceRequest.SetHostType(ERHAPI_HostType::Player); // TODO - make dedicated instance type

				RHSession->RequestInstance(InstanceRequest, FRH_OnSessionUpdatedDelegate::CreateUObject(this, &URH_GameInstanceServerBootstrapper::OnSessionInstanceCreationCompleted));
			}
		}
		else
		{
			OnBootstrappingFailed(FString::Printf(TEXT("[%s] - Bootstrapping finalizer returned valid FSession %s, but failed or does not match imported session %s"),
				ANSI_TO_TCHAR(__FUNCTION__), *APISession.Data.SessionId, RHSession != nullptr ? *RHSession->GetSessionId() : TEXT("<UNKONWN>")));
			return;
		}
	}
	else
	{
		OnBootstrappingFailed(FString::Printf(TEXT("[%s] - Bootstrapping finalizer failed"), ANSI_TO_TCHAR(__FUNCTION__)));
		return;
	}
}

void URH_GameInstanceServerBootstrapper::OnSessionInstanceCreationCompleted(bool bSuccess, URH_SessionView* CreatedRHSession, const FRH_ErrorInfo& ErrorInfo)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	if (bSuccess
		&& CreatedRHSession != nullptr
		&& CreatedRHSession->IsOnline()
		&& CreatedRHSession == RHSession	// session should have automatically been imported!
		&& CreatedRHSession->GetInstanceData() != nullptr
		)
	{
		SyncToSession();
		if (BootstrapMode == ERH_ServerBootstrapMode::AutoCreate)
		{
			BeginSelfAllocate();
		}
	}
	else
	{
		OnBootstrappingFailed(FString::Printf(TEXT("[%s] - Instance creation failed"), ANSI_TO_TCHAR(__FUNCTION__)));
		return;
	}
}


void URH_GameInstanceServerBootstrapper::SyncToSession()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	auto* SessionSubsystem = GetGameInstanceSubsystem()->GetSessionSubsystem();

	if (SessionSubsystem != nullptr && RHSession != nullptr)
	{
		RHSession->StartPolling(); // rather than bootstrapper polling all sessions, tell session to poll internally
		RHSession->OnSessionUpdatedDelegate.AddUObject(this, &URH_GameInstanceServerBootstrapper::OnSessionUpdated);
		RHSession->OnSessionNotFoundDelegate.AddUObject(this, &URH_GameInstanceServerBootstrapper::OnSessionNotFound);
		UpdateBootstrapStep(ERH_ServerBootstrapFlowStep::SyncingToSession);
		SessionSubsystem->SyncToSession(RHSession, FRH_GameInstanceSessionSyncDelegate::CreateUObject(this, &URH_GameInstanceServerBootstrapper::OnSyncToSessionComplete));
	}
	else if (RHSession == nullptr)
	{
		// this should have been detected much earlier
		OnBootstrappingFailed(FString::Printf(TEXT("[%s] - Session to sync to does not exist"), ANSI_TO_TCHAR(__FUNCTION__)));
		return;
	}
	else
	{
		// this should have been detected much earlier
		OnBootstrappingFailed(FString::Printf(TEXT("[%s] - Could not find session subsystem"), ANSI_TO_TCHAR(__FUNCTION__)));
		return;
	}
}

void URH_GameInstanceServerBootstrapper::OnSyncToSessionComplete(URH_JoinedSession* Session, bool bSuccess, const FString& Error)
{
	const FString LogString = FString::Printf(TEXT("[%s] %s (%s - %s)"), 
		ANSI_TO_TCHAR(__FUNCTION__), 
		Session ? *Session->GetSessionId() : TEXT("<UNKNOWN>"), 
		bSuccess ? TEXT("Success") : TEXT("Failure"),
		*Error
	);

	if (bSuccess && Session == RHSession && RHSession->IsActive())
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("%s"), *LogString);
		OnBootstrappingComplete();
	}
	else
	{
		OnBootstrappingFailed(LogString);
		return;
	}
}

void URH_GameInstanceServerBootstrapper::OnActiveSessionChanged(URH_JoinedSession* OldSession, URH_JoinedSession* NewSession)
{
	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	// if the session we are managing is no longer the active session, we should cleanup
	if (RHSession != nullptr && !RHSession->IsActive())
	{
		ensure(RHSession == OldSession);
		ensure(NewSession == nullptr);

		CleanupAfterSessionUnsynced();
	}
}

void URH_GameInstanceServerBootstrapper::OnSessionUpdated(URH_SessionView* Session)
{
	check(Session == RHSession);

	if (RHSession != nullptr)
	{
		bool bNoLongerValidInstance = false;

		if (RHSession->GetInstanceData() == nullptr)
		{
			UE_LOG(LogRHSession, Warning, TEXT("[%s] : Session update has no instance when we previously had one"), ANSI_TO_TCHAR(__FUNCTION__));
			bNoLongerValidInstance = true;
		}
		else if (RHSession->GetInstanceData()->GetJoinStatus() == ERHAPI_InstanceJoinableStatus::Closed)
		{
			// instance was marked as closed
			UE_LOG(LogRHSession, Warning, TEXT("[%s] : Session update has a closed instance"), ANSI_TO_TCHAR(__FUNCTION__));
			bNoLongerValidInstance = true;
		}
		else
		{
			const auto* InstanceAllocationId = RHSession->GetInstanceData()->GetAllocationIdOrNull();
			if (BootstrappingResult.AllocationInfo.AllocationId.IsSet()) // if this instance believes it is part of an allocation, make sure the session instance matches that allocation
			{
				if (InstanceAllocationId == nullptr)
				{
					UE_LOG(LogRHSession, Warning, TEXT("[%s] : Session updated but allocation for the session no longer matches (<UNSET> != %s)"), ANSI_TO_TCHAR(__FUNCTION__), *BootstrappingResult.AllocationInfo.AllocationId.GetValue());
					bNoLongerValidInstance = true;
				}
				else if (*InstanceAllocationId != BootstrappingResult.AllocationInfo.AllocationId.GetValue())
				{
					UE_LOG(LogRHSession, Warning, TEXT("[%s] : Session updated but allocation for the session no longer matches (%s != %s)"), ANSI_TO_TCHAR(__FUNCTION__), **InstanceAllocationId, *BootstrappingResult.AllocationInfo.AllocationId.GetValue());
					bNoLongerValidInstance = true;
				}
			}
			/* TODO - check dedicated server id
			if (Session.Instance->HostDedicatedServerId.IsSet() && )
			{
				UE_LOG(LogRHSession, Error, TEXT("[%s] : Session update has no instance when we previously had one, or allocation for the session no longer matches"), ANSI_TO_TCHAR(__FUNCTION__));
				bNoLongerValidInstance = true;
			}
			*/
		}

		if (bNoLongerValidInstance)
		{
			// our instance is no longer valid, clean ourselves up and potentially recycle
			CleanupAfterInstanceRemoval();
			return;
		}
	}
}

void URH_GameInstanceServerBootstrapper::OnSessionNotFound(URH_SessionView* Session)
{
	if (RHSession != nullptr && Session == RHSession)
	{
		CleanupAfterInstanceRemoval();
	}
}

void URH_GameInstanceServerBootstrapper::CleanupAfterLogout()
{
	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	if (GetBootstrapStep() == ERH_ServerBootstrapFlowStep::Cleanup)
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] - already in cleanup, ignoring"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}

	// reroute to instance removal cleanup to make sure session gets unsynced etc
	CleanupAfterInstanceRemoval();
}

void URH_GameInstanceServerBootstrapper::CleanupAfterSessionUnsynced()
{
	if (GetBootstrapStep() == ERH_ServerBootstrapFlowStep::Cleanup)
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] - already in cleanup, ignoring"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}

	UpdateBootstrapStep(ERH_ServerBootstrapFlowStep::Cleanup);

	// we are no longer synced to the session, so can immediately call cleanup sync complete
	OnCleanupSessionSyncComplete(nullptr, true, TEXT(""));
}

void URH_GameInstanceServerBootstrapper::CleanupAfterInstanceRemoval()
{
	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	if (GetBootstrapStep() == ERH_ServerBootstrapFlowStep::Cleanup)
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] - already in cleanup, ignoring"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}

	UpdateBootstrapStep(ERH_ServerBootstrapFlowStep::Cleanup);

	auto* SessionSubsystem = GetGameInstanceSubsystem()->GetSessionSubsystem();
	if (RHSession != nullptr && RHSession->IsActive() && SessionSubsystem != nullptr)
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] - session is active, unsyncing it and using unsync logic to trigger cleanup"), ANSI_TO_TCHAR(__FUNCTION__));
		
		// unsync the session and trigger cleanup on completion
		SessionSubsystem->SyncToSession(nullptr, FRH_GameInstanceSessionSyncDelegate::CreateUObject(this, &URH_GameInstanceServerBootstrapper::OnCleanupSessionSyncComplete));
	}
	else
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Session subsystem invalid or did not have session, moving to cleanup directly"), ANSI_TO_TCHAR(__FUNCTION__));
		Cleanup();
	}
}

void URH_GameInstanceServerBootstrapper::OnCleanupSessionSyncComplete(URH_JoinedSession* Session, bool bSuccess, const FString& Error)
{
	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] %s (%s - %s)"),
		ANSI_TO_TCHAR(__FUNCTION__),
		Session ? *Session->GetSessionId() : TEXT("<UNKNOWN>"),
		bSuccess ? TEXT("Success") : TEXT("Failure"),
		*Error
	);

	// proceed with cleanup
	Cleanup();
}

void URH_GameInstanceServerBootstrapper::Cleanup()
{
	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	// some other function should have put us into cleanup step by now, this function should not be called directly as it does not guard against re-entry
	ensure(GetBootstrapStep() == ERH_ServerBootstrapFlowStep::Cleanup);

	auto SessionSubsystem = GetGameInstanceSubsystem()->GetSessionSubsystem();
	if (SessionSubsystem != nullptr)
	{
		// make sure we are not synced to a session by this point
		ensure(SessionSubsystem->GetActiveSession() == nullptr);
	}

	// if session is still valid, make sure it is cleaned up as much as possible
	BestEffortLeaveSession();

	// make sure game host dapter is cleaned up
	GameHostProvider.Reset();

	// end any currently running analytics
	if (AnalyticsProvider.IsValid())
	{
		// emit a correlation end event
		{
			RHStandardEvents::FCorrelationEndEvent CorrelationEndEvent;

			CorrelationEndEvent.Reason = TEXT("Recycle");

			if (AnalyticsStartTime.IsSet())
			{
				CorrelationEndEvent.DurationSeconds = (FDateTime::UtcNow() - AnalyticsStartTime.GetValue()).GetTotalSeconds();
			}
			AnalyticsStartTime.Reset();

			CorrelationEndEvent.EmitTo(AnalyticsProvider);
		}

		AnalyticsProvider->EndSession();

		// immediate flush (generally EndSession() should flush, but do not assume)
		AnalyticsProvider->FlushEvents();

		AnalyticsProvider.Reset();
	}

	ConditionalRecycle();
}

bool URH_GameInstanceServerBootstrapper::ShouldRecycleAfterCleanup() const
{
	return !RallyHere::TermSignalHandler::IsSoftStopRequested() && CurrentRecycleCount < MaxRecycleCount;
}

void URH_GameInstanceServerBootstrapper::ConditionalRecycle()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	// recycle if allowed, otherwise shut down
	if (ShouldRecycleAfterCleanup())
	{
		Recycle();
	}
	else
	{
		if (bMultiSessionServerMode)
		{
			// TODO - cleanup game instance?
		}
		else
		{
			// attempt to fully flush HTTP system before we shut down
			// flush requests to ensure we do not have any pending requests
			auto HttpRequester = RallyHereAPI::FRallyHereAPIHttpRequester::Get();
			if (HttpRequester != nullptr)
			{
				HttpRequester->FlushRequestQueue();
			}

			// flush the HTTP manager
#if RH_FROM_ENGINE_VERSION(5,0)
			FHttpModule::Get().GetHttpManager().Flush(EHttpFlushReason::FullFlush);
#else
			FHttpModule::Get().GetHttpManager().Flush(false);
#endif


			if (RallyHere::TermSignalHandler::ExitStatusOverride != 0)
			{
				FPlatformMisc::RequestExitWithStatus(false, RallyHere::TermSignalHandler::ExitStatusOverride);
			}
			else
			{
				RequestEngineExit(TEXT("Server bootstrapper cleanup finished"));
			}
		}
	}
}

void URH_GameInstanceServerBootstrapper::OnLoggedOut(bool bRefreshTokenExpired)
{
	UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] - Lost authorization to API"), ANSI_TO_TCHAR(__FUNCTION__));
}

void URH_GameInstanceServerBootstrapper::OnRefreshTokenExpired(FSimpleDelegate CompletionCallback)
{
	UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	// if we are not in the middle of bootstrapping, we can just refresh the token
	if (BootstrapStep == ERH_ServerBootstrapFlowStep::Failed)
	{
		// if we have already failed bootstrapping, do not attempt a new login
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Refresh token expired, but we have failed bootstrapping, so do not refresh"), ANSI_TO_TCHAR(__FUNCTION__));
		CompletionCallback.ExecuteIfBound();
		return;
	}
	else if (BootstrapStep <= ERH_ServerBootstrapFlowStep::LoggingIn)
	{
		// if we have not yet gotten to the login step of bootstrapping, or are in the middle of it, do not attempt a new login to refresh
		CompletionCallback.ExecuteIfBound();
		return;
	}

	auto LoginOSS = GetOSS();

	auto Helper = MakeShared<FRH_ServerLoginHelper>(
		AuthContext,
		LoginOSS,
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, CompletionCallback](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				// fire completion callback to let auth context know that we are done
				CompletionCallback.ExecuteIfBound();

				if (bSuccess)
				{
					UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] - New login was successful"), ANSI_TO_TCHAR(__FUNCTION__));
				}
				else
				{
					UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Could not relogin after refresh token expired"), ANSI_TO_TCHAR(__FUNCTION__));

					// server is now logged out from the backend.  We do not want to change the bootstrapping state here, as it will should get caught (or potentially recovered from) other parts of the bootstrapping flow
					// instead, the logout delegate and IsLoggedIn() checks should be sufficient to catch this and handle it
					// however, if bootstrapping was complete and logged in, we should consider this similar to as if a session poll failed, meaning our allocation is no longer valid

					if (BootstrapStep == ERH_ServerBootstrapFlowStep::Complete)
					{
						CleanupAfterLogout();
					}
				}
			}));

	Helper->Start();
}

void URH_GameInstanceServerBootstrapper::Tick(float DeltaTime)
{
	// if a soft stop has been requested and we do not have a session yet, spin down - else wait for session to no longer exist before spinning down
	if (RallyHere::TermSignalHandler::IsSoftStopRequested() && RHSession == nullptr)
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] Soft stop requested found while ticking and unallocated, running cleanup"), ANSI_TO_TCHAR(__FUNCTION__));
		check(ShouldRecycleAfterCleanup() == false); // this is used by the next function, and must return false to properly spin down

		// trigger instance removal cleanup (even if not quite true) to unsync us
		OnCleanupSessionSyncComplete(RHSession, false, TEXT("Soft Stop Requested"));
		return;
	}

	// if a soft stop was requested, and the provider has not been notified, notify it
	if (RallyHere::TermSignalHandler::IsSoftStopRequested() && RallyHere::TermSignalHandler::CheckShouldNotifyProvider())
	{
		// notify provider that we are stopping
		if (GameHostProvider.IsValid())
		{
			GameHostProvider->NotifySoftStopRequested();
		}
	}
}

void URH_GameInstanceServerBootstrapper::OnGameHostProviderStats(FRH_GameHostProviderStats& Stats)
{
	// fill in basic information
	{
		// retrieve game state from world
		const auto* World = GetGameInstanceSubsystem()->GetGameInstance()->GetWorld();
		if (World != nullptr)
		{
			Stats.Map = World->GetMapName();
			if (auto* GameMode = World->GetAuthGameMode())
			{
				Stats.GameMode = GameMode->GetName();
				Stats.PlayerCount = GameMode->GetNumPlayers() + GameMode->GetNumSpectators();
			}
		}

		// retrieve session information
		if (RHSession != nullptr)
		{
			int32 TeamCount = RHSession->GetTemplate().GetNumTeams(1);
			int MaxPerTeam = RHSession->GetTemplate().GetPlayersPerTeam(1);
			Stats.MaxPlayerCount = TeamCount * MaxPerTeam;

			Stats.Private = !RHSession->GetSessionData().Joinable;
		}

		// retrieve health status from session subsystem
		auto pSessionSubsystem = GetGameInstanceSubsystem()->GetSessionSubsystem();
		if (pSessionSubsystem != nullptr && RHSession != nullptr && RHSession == pSessionSubsystem->GetActiveSession())
		{
			auto HealthStatus = pSessionSubsystem->GetInstanceHealthStatusToReport();
			if (HealthStatus != ERHAPI_InstanceHealthStatus::Unknown)
			{
				Stats.Healthy = HealthStatus == ERHAPI_InstanceHealthStatus::Healthy;
			}
		}
	}

	// if we have a delegate, use it to fill in the stats for additional information
	if (OnGameHostProviderStatsRequested.IsBound())
	{
		OnGameHostProviderStatsRequested.Execute(Stats);
	}
}

bool URH_GameInstanceServerBootstrapper::IsTickable() const
{
	return !HasAnyFlags(RF_ClassDefaultObject);
}

TStatId URH_GameInstanceServerBootstrapper::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(URH_GameInstanceServerBootstrapper, STATGROUP_TaskGraphTasks);
}

URH_SessionView* URH_GameInstanceServerBootstrapper::GetSessionById(const FString& SessionId) const
{
	if (RHSession != nullptr && RHSession->GetSessionId() == SessionId)
	{
		return RHSession;
	}
	return nullptr;
}

void URH_GameInstanceServerBootstrapper::RemoveSessionById(const FString& SessionId)
{
	if (RHSession != nullptr && RHSession->GetSessionId() == SessionId)
	{
		// generally not valid for something to remove our session, trigger cleanup if something tried to remove it
		CleanupAfterInstanceRemoval();
	}
}

bool URH_GameInstanceServerBootstrapper::GetTemplate(const FString& Type, FRHAPI_SessionTemplate& Template) const
{
	auto ptr = Templates.Find(Type);
	if (ptr != nullptr)
	{
		Template = *ptr;
		return true;
	}
	return false;
}

URH_PlayerInfoSubsystem* URH_GameInstanceServerBootstrapper::GetPlayerInfoSubsystem() const
{
	auto* GI = GetGameInstanceSubsystem()->GetGameInstance();
	if (GI != nullptr)
	{
		auto* RHGI = GI->GetSubsystem<URH_GameInstanceSubsystem>();
		if (RHGI != nullptr)
		{
			return RHGI->GetPlayerInfoSubsystem();
		}
	}
	return nullptr;
}

IOnlineSubsystem* URH_GameInstanceServerBootstrapper::GetOSS() const
{
	auto* OSS = IOnlineSubsystem::Get();
	if (OSS != nullptr)
	{
		// For PiE, we need to get at the specific instance of the subsystem for this particular player
		auto* WorldContext = GetGameInstanceSubsystem()->GetGameInstance()->GetWorldContext();
		if (WorldContext != nullptr)
		{
			const FName Name = Online::GetUtils()->GetOnlineIdentifier(*WorldContext, OSS->GetSubsystemName());
			if (Name != OSS->GetInstanceName())
			{
				if (IOnlineSubsystem* FoundOSS = IOnlineSubsystem::Get(Name))
				{
					OSS = FoundOSS;
				}
			}
		}
	}

	return OSS;
}

FUniqueNetIdWrapper URH_GameInstanceServerBootstrapper::GetOSSUniqueId() const
{
	return FUniqueNetIdRepl();
}

FPlatformUserId URH_GameInstanceServerBootstrapper::GetOSSPlatformUserId() const
{
	return FPlatformUserId();
}

void URH_GameInstanceServerBootstrapper::ImportAPISession(const FRH_APISessionWithETag& SessionWrapper)
{
	auto& Session = SessionWrapper.Data;
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] : %s"), ANSI_TO_TCHAR(__FUNCTION__), *Session.SessionId);

	// intercept update before importing it to the session, so we can check if some high level things changed that put us into a broken state.
	if (RHSession != nullptr && RHSession->GetSessionId() != Session.SessionId)
	{
		// panic - broke simplifying assumption, attempt to abandon the old session, but this likely will leave us in a bad state
		UE_LOG(LogRHSession, Error, TEXT("[%s] : New session %s found when current session is %s"), ANSI_TO_TCHAR(__FUNCTION__), *Session.SessionId, *RHSession->GetSessionId());
		BestEffortLeaveSession();
	}

	// Lookup template from the cache, this should be always existing due to checks in the Import logic
	FRHAPI_SessionTemplate Template;
	if (!GetTemplate(Session.Type, Template))
	{
		UE_LOG(LogRHSession, Error, TEXT("[%s] : New session %s has unknown template"), ANSI_TO_TCHAR(__FUNCTION__), *Session.SessionId);
		return;
	}

	// existing session, if it exists, SHOULD be a fully hydrated online session.  This should be handled by the preprocessing layer
	ensure(!RHSession || RHSession->IsA(URH_OnlineSession::StaticClass()));

	if (RHSession == nullptr)
	{
		RHSession = NewObject<URH_OnlineSession>(this);
	}

	if (RHSession != nullptr)
	{
		RHSession->ImportAPISession(SessionWrapper, Template);
	}
}

void URH_GameInstanceServerBootstrapper::ReconcileAPISessions(const TArray<FString>& SessionIds, const TOptional<FString>& ETag)
{

}


void URH_GameInstanceServerBootstrapper::ImportAPITemplate(const FRHAPI_SessionTemplate& Template)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] : %s"), ANSI_TO_TCHAR(__FUNCTION__), *Template.SessionType);

	Templates.Add(Template.SessionType, Template);

	// inform each session of the relevant type of the template update
	if (RHSession && RHSession->GetSessionType() == Template.SessionType)
	{
		RHSession->ImportTemplate(Template);
	}
}

void URH_GameInstanceServerBootstrapper::ReconcileAPITemplates(const TArray<FString>& TemplateNames, const TOptional<FString>& ETag)
{
	// build a list of sessions not in the list
	TArray<FString> TemplatesToRemove;

	// remove any templates as needed
	for (const auto& Pair : Templates)
	{
		if (Pair.Key != RH_SessionCustomDataKeys::OfflineFlag && !TemplateNames.Contains(Pair.Key))
		{
			TemplatesToRemove.Add(Pair.Key);
		}
	}

	for (auto TemplateName : TemplatesToRemove)
	{
		Templates.Remove(TemplateName);
	}

	AllTemplatesETag = ETag;
}

bool URH_GameInstanceServerBootstrapper::CanAutoUploadServerFiles() const
{
	static bool bCommandlineParsed;
	static TOptional<bool> bCommandlineFlag;
	if (!bCommandlineParsed)
	{
		bCommandlineParsed = true;
		if (FParse::Param(FCommandLine::Get(), TEXT("rh.noautouploadserverfiles")))
		{
			bCommandlineFlag = false;
		}
		else if (FParse::Param(FCommandLine::Get(), TEXT("rh.autouploadserverfiles")))
		{
			bCommandlineFlag = true;
		}
	}
	if (bCommandlineFlag.IsSet())
	{
		return bCommandlineFlag.GetValue();
	}

	const auto Settings = GetDefault<URH_IntegrationSettings>();
	return Settings->bAutoUploadServerFiles;
}

FRH_RemoteFileApiDirectory URH_GameInstanceServerBootstrapper::GetAutoUploadDirectory(bool bDeveloperFile) const
{
	auto GISS = GetGameInstanceSubsystem();
	if (GISS != nullptr && GISS->GetMatchSubsystem() != nullptr)
	{
		if (bDeveloperFile)
		{
			return GISS->GetMatchSubsystem()->GetMatchDeveloperFileDirectory(GISS->GetMatchSubsystem()->GetActiveMatchId());
		}
		return GISS->GetMatchSubsystem()->GetMatchFileDirectory(GISS->GetMatchSubsystem()->GetActiveMatchId());
	}
	return FRH_RemoteFileApiDirectory();
}
void URH_GameInstanceServerBootstrapper::ConditionalAutoUploadLogFile() const
{
	const auto Settings = GetDefault<URH_IntegrationSettings>();
	if (CanAutoUploadServerFiles() && Settings->bAutoUploadLogFiles)
	{
		auto Directory = GetAutoUploadDirectory();
		auto GISS = GetGameInstanceSubsystem();
		if (GISS != nullptr && GISS->GetRemoteFileSubsystem() != nullptr && Directory.IsValid())
		{
			const FString LogSrcAbsolute = FPlatformOutputDevices::GetAbsoluteLogFilename();
			FString LogFilename = FPaths::GetCleanFilename(LogSrcAbsolute);

			// flush the log before uploading
			auto Log = FPlatformOutputDevices::GetLog();
			if (Log != nullptr)
			{
				Log->Flush();
			}

			return GISS->GetRemoteFileSubsystem()->UploadFile(Directory, LogFilename, LogSrcAbsolute);
		}
	}
}
void URH_GameInstanceServerBootstrapper::ConditionalAutoUploadTraceFile(const FString& TraceFile) const
{
	const auto Settings = GetDefault<URH_IntegrationSettings>();
	if (CanAutoUploadServerFiles() && Settings->bAutoUploadTraceFiles)
	{
		auto Directory = GetAutoUploadDirectory();
		auto GISS = GetGameInstanceSubsystem();
		if (GISS != nullptr && GISS->GetRemoteFileSubsystem() != nullptr && Directory.IsValid())
		{
			FString LogFilename = FPaths::GetCleanFilename(TraceFile);

			return GISS->GetRemoteFileSubsystem()->UploadFile(Directory, LogFilename, TraceFile);
		}
	}
}

//==================================================================

void URH_GameInstanceClientBootstrapper::Initialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Initialize();
}

void URH_GameInstanceClientBootstrapper::Deinitialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Deinitialize();
}

void URH_GameInstanceClientBootstrapper::CreateOfflineSession()
{
	UGameInstance* pGameInstance = GetGameInstanceSubsystem()->GetGameInstance();
	if (pGameInstance == nullptr)
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - No instance or host player to create offline map for"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}

	FDateTime CreationTime = FDateTime::UtcNow();
	FGuid HostPlayerUuid = FGuid();
	FString CreationVersion = URH_JoinedSession::GetClientVersionForSession();

	bool bListen = false;

	FRHAPI_SessionTemplate TemplateInfo = {};
	{
		TemplateInfo.SessionType = RH_SessionCustomDataKeys::OfflineFlag;
	}

	// generate fake data
	FRH_APISessionWithETag SessionWrapper;
	FRHAPI_Session& SessionInfo = SessionWrapper.Data;

	/* template type */
	SessionInfo.Type = RH_SessionCustomDataKeys::OfflineFlag; // todo
	/* unique ID for this session within its type */
	SessionInfo.SessionId = FGuid::NewGuid().ToString();
	/* Info about the current active instance for the session */
	// SessionInfo.Instance
	// SessionInfo.Match

	//TOptional<FMatchmaking> Matchmaking;
	//TOptional<FBrowser> Browser;
	/* Is this session freely joinable by players without an invite? */
	SessionInfo.Joinable = bListen;
	/* Players currently in the session */
	{
		const TArray<ULocalPlayer*> LocalPlayers = pGameInstance->GetLocalPlayers();
		for (auto player : LocalPlayers)
		{
			FRHAPI_SessionPlayer SessionPlayer = {};
			RH_GetPlayerIdFromLocalPlayer(player, &SessionPlayer.PlayerUuid);
			/* Status of the player in the session */
			SessionPlayer.Status = SessionPlayer.PlayerUuid == HostPlayerUuid ? ERHAPI_SessionPlayerStatus::Leader : ERHAPI_SessionPlayerStatus::Member;
			/* If the player is only a pending invite, this is the player that requested the invite */
			//TOptional<int32> InvitingPlayerId;
			/* player-defined custom data */
			//TOptional<TMap<FString, FString>> CustomData;
			/* Product Client Version number.  Used for compatibility checking with other players and instances */
			SessionPlayer.SetVersion(CreationVersion);
			/* When this player was invited to join the session */
			SessionPlayer.SetInvited(CreationTime);
			/* When this player was actually joined the session */
			SessionPlayer.SetJoined(CreationTime);

			// TODO adding everyone to one team for now
			if (SessionInfo.Teams.Num() <= 0)
			{
				SessionInfo.Teams.Add(FRHAPI_SessionTeam());
			}
			SessionInfo.Teams[0].Players.Add(SessionPlayer);
		}
	}

	/* Child Platform Sessions for this session.  A player joining one of the child platform sessions implicitly joins the parent session */
	//TOptional<TArray<FPlatformSession>> PlatformSession;
	/* Leader Player or instance defined custom data about this session */
	{
		TMap<FString, FString> CustomData;

		CustomData.Add(RH_SessionCustomDataKeys::OfflineFlag, TEXT("True"));

		SessionInfo.SetCustomData(CustomData);
	}


	/* Time the Session was created, in UTC */
	SessionInfo.Created = CreationTime;

	// todo?  disable polling of session data while we are faking it?

	// pass to session interface
	if (GetGameInstanceSubsystem()->GetSessionSubsystem())
	{
		auto LocalPlayers = GetGameInstanceSubsystem()->GetGameInstance()->GetLocalPlayers();
		for (auto LP : LocalPlayers)
		{
			// get the session subsystem from the local player
			auto itLPSubsystem = LP->GetSubsystem<URH_LocalPlayerSubsystem>();
			if (itLPSubsystem != nullptr)
			{
				// add the template
				itLPSubsystem->GetSessionSubsystem()->ImportAPITemplate(TemplateInfo);
				// add the session
				itLPSubsystem->GetSessionSubsystem()->ImportAPISession(SessionWrapper);
			}
		}
	}
}


