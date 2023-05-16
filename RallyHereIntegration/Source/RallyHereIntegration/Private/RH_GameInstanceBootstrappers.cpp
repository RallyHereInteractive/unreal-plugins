
#include "RH_GameInstanceBootstrappers.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_GameInstanceSessionSubsystem.h"
#include "RH_LocalPlayerSubsystem.h"
#include "RH_LocalPlayerSessionSubsystem.h"
#include "RH_PlayerInfoSubsystem.h"
#include "RH_CatalogSubsystem.h"
#include "RallyHereIntegrationModule.h"
#include "RH_ConfigSubsystem.h"
#include "Engine/GameInstance.h"

#include "RH_SessionHelpers.h"
#include "RH_BootstrappingHelpers.h"
#include "RH_ServerMetricsHelpers.h"

#include "HttpManager.h"

#if PLATFORM_UNIX
#include <signal.h>
#endif // PLATFORM_UNIX

URH_SidecarSettings::URH_SidecarSettings(const FObjectInitializer& ObjectInitlaizer)
	: Super(ObjectInitlaizer)
{
	PollIntervalSidecar = 1.f;
	PollLogIntervalSidecar = 20;

	PollIntervalFinalizer = 1.f;
	PollLogIntervalFinalizer = 1;
	MaxPollCountFinalizer = 10;
}

URH_GameInstanceServerBootstrapper::URH_GameInstanceServerBootstrapper()
{
	BootstrapMode = ERHAPI_ServerBootstrapMode::Disabled;
	BootstrapStep = ERHAPI_ServerBootstrapFlowStep::Unstarted;

	MaxRecycleCount = 0;

	DefaultAutoCreateSessionType = TEXT("");

	bMultiSessionServerMode = true;
	bReplaceSIGTERMHandler = true;
}

bool URH_GameInstanceServerBootstrapper::GetCommandlineBootstrapModeOverride(ERHAPI_ServerBootstrapMode& mode)
{
	// note - mirror changes to this function below in Initialize, which provides more error handling
	FString BootstrapCommandlineModeString;
	if (FParse::Value(FCommandLine::Get(), TEXT("rhbootstrapmode="), BootstrapCommandlineModeString))
	{
		auto BootstrapCommandlineMode = RH_GETENUMFROMSTRING("/Script/RallyHereIntegration", "ERHAPI_ServerBootstrapMode", BootstrapCommandlineModeString);
		if (BootstrapCommandlineMode != INDEX_NONE)
		{
			mode = static_cast<ERHAPI_ServerBootstrapMode>(BootstrapCommandlineMode);
			return true;
		}
	}

	return false;
}

void URH_GameInstanceServerBootstrapper::Initialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Initialize();

	BootstrapMode = DefaultBootstrapMode;
	FString BootstrapCommandlineModeString;
	if (FParse::Value(FCommandLine::Get(), TEXT("rhbootstrapmode="), BootstrapCommandlineModeString))
	{
		auto BootstrapCommandlineMode = RH_GETENUMFROMSTRING("/Script/RallyHereIntegration", "ERHAPI_ServerBootstrapMode", BootstrapCommandlineModeString);
		if (BootstrapCommandlineMode != INDEX_NONE)
		{
			BootstrapMode = (ERHAPI_ServerBootstrapMode)BootstrapCommandlineMode;
			UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] - default bootstrap mode overridden by commandline to %s"), ANSI_TO_TCHAR(__FUNCTION__)
				, *RH_GETENUMSTRING("/Script/RallyHereIntegration", "ERHAPI_ServerBootstrapMode", BootstrapMode));
		}
		else
		{
			UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - commandline bootstrap mode %s does not match an enum value"), ANSI_TO_TCHAR(__FUNCTION__)
				, *BootstrapCommandlineModeString);

			OnBootstrappingFailed();
			return;
		}
	}

	if (FParse::Value(FCommandLine::Get(), TEXT("rhmaxrecyclecount="), MaxRecycleCount))
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] - Max recycle count overridden by commandline to %d"), ANSI_TO_TCHAR(__FUNCTION__), MaxRecycleCount);
	}

	SetTerminationSignalHandler();
	
	UpdateBootstrapStep(ERHAPI_ServerBootstrapFlowStep::Unstarted);

	// start login to API as a server
	check(IsRunningDedicatedServer());
	if (IsRunningDedicatedServer() && BootstrapMode != ERHAPI_ServerBootstrapMode::Disabled)
	{
		// this mode assumes that the session subsystem exists
		auto* RHGameInstanceSubsystem = GetGameInstanceSubsystem();
		if (!RHGameInstanceSubsystem->GetSessionSubsystem())
		{
			UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Could not find session subsystem"), ANSI_TO_TCHAR(__FUNCTION__));
			OnBootstrappingFailed();
			return;
		}

		UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] - Beginning RH Server Bootstrapping"), ANSI_TO_TCHAR(__FUNCTION__));

		// create our auth context
		AuthContext = MakeShared<RallyHereAPI::FAuthContext>(RH_APIs::GetAPIs().GetAuth());
		GetGameInstanceSubsystem()->SetAuthContext(AuthContext);

		InitServerMetrics();

		BeginServerLogin();

		FCoreDelegates::ApplicationWillTerminateDelegate.AddUObject(this, &URH_GameInstanceServerBootstrapper::ApplicationTerminationNotify);
	}
	else
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] - RH Server Bootstrapping disabled"), ANSI_TO_TCHAR(__FUNCTION__));
		UpdateBootstrapStep(ERHAPI_ServerBootstrapFlowStep::Complete);
	}
}

void URH_GameInstanceServerBootstrapper::Deinitialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Deinitialize();

	BestEffortLeaveSession();
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
		{
			RallyHereAPI::Traits_LeaveSessionByIdSelf::Request Request;
			Request.AuthContext = GetAuthContext();
			Request.SessionId = RHSession->GetSessionId();

			RallyHereAPI::Traits_LeaveSessionByIdSelf::DoCall(RH_APIs::GetSessionAPI(), Request);
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
		uint8 ExitStatusOverride = INDEX_NONE;
		bool bHasReceivedTermSignal = false;

		void TerminationSignalHandler()
		{
			if (!bHasReceivedTermSignal)
			{
				bHasReceivedTermSignal = true;

				UE_LOG(LogRallyHereIntegration, Warning, TEXT("Termination signal received, marking for spindown rather than exiting"));
			}
		}

		bool HasReceivedTermSignal() { return bHasReceivedTermSignal; }

#if PLATFORM_UNIX
		namespace Unix
		{
			struct sigaction OldTermAction = {};

			void UnixSignalHandler(int32 Signal, siginfo_t* Info, void* Context)
			{
				if (Signal == SIGTERM)
				{
					ExitStatusOverride = static_cast<uint8>(128 + Signal);
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

void URH_GameInstanceServerBootstrapper::UpdateBootstrapStep(ERHAPI_ServerBootstrapFlowStep NewStep)
{
	ERHAPI_ServerBootstrapFlowStep OldStep = BootstrapStep;
	BootstrapStep = NewStep;

	if (OldStep != NewStep && UE_LOG_ACTIVE(LogRallyHereIntegration, Verbose))
	{
		FString OldStepName = RH_GETENUMSTRING("/Script/RallyHereIntegration", "ERHAPI_ServerBootstrapFlowStep", OldStep);
		FString NewStepName = RH_GETENUMSTRING("/Script/RallyHereIntegration", "ERHAPI_ServerBootstrapFlowStep", NewStep);

		UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] - Updating bootstrap step [%s] -> [%s]"), ANSI_TO_TCHAR(__FUNCTION__), *OldStepName, *NewStepName);
	}
}

void URH_GameInstanceServerBootstrapper::OnBootstrappingFailed()
{
	// only place we should ever set failed
	UpdateBootstrapStep(ERHAPI_ServerBootstrapFlowStep::Failed);

	// attempt to cleanup session state and mark closed
	if (RHSession != nullptr)
	{
		if (RHSession->GetInstanceData() != nullptr)
		{
			// mark instance as closed 
			FRHAPI_InstanceInfoUpdate InstanceInfo = RHSession->GetInstanceUpdateInfoDefaults();
			InstanceInfo.SetJoinStatus(ERHAPI_InstanceJoinableStatus::Closed);
			RHSession->UpdateInstanceInfo(InstanceInfo);
		}

		BestEffortLeaveSession();
	}

	if (!bMultiSessionServerMode)
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Server bootstrapping failed - bootstrap error is fatal"), ANSI_TO_TCHAR(__FUNCTION__));

		// attempt to fully flush HTTP system before we shut down
		FHttpModule::Get().GetHttpManager().Flush(EHttpFlushReason::FullFlush);

		if (RallyHere::TermSignalHandler::ExitStatusOverride != INDEX_NONE)
		{
			FPlatformMisc::RequestExitWithStatus(false, RallyHere::TermSignalHandler::ExitStatusOverride);
		}
		else
		{
			RequestEngineExit(TEXT("Server bootstrapper failed"));
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
	UpdateBootstrapStep(ERHAPI_ServerBootstrapFlowStep::Complete);
	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] - Server bootstrapping complete"), ANSI_TO_TCHAR(__FUNCTION__));
}

void URH_GameInstanceServerBootstrapper::BeginServerLogin()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	UpdateBootstrapStep(ERHAPI_ServerBootstrapFlowStep::LoggingIn);
	auto Helper = MakeShared<FRH_ServerLoginHelper>(AuthContext, FRH_ServerBootstrapLoginDelegate::CreateUObject(this, &URH_GameInstanceServerBootstrapper::OnServerLoginComplete));
	Helper->Start();
}

void URH_GameInstanceServerBootstrapper::OnServerLoginComplete(bool bSuccess)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	if (bSuccess)
	{
		if (BootstrapMode == ERHAPI_ServerBootstrapMode::LoginOnly)
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
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - RallyHere login was unsuccessful"), ANSI_TO_TCHAR(__FUNCTION__));
		OnBootstrappingFailed();
	}
}

void URH_GameInstanceServerBootstrapper::Recycle()
{
	++CurrentRecycleCount;
	// we can only recycle if RHSession has been properly cleared
	check(RHSession == nullptr);

	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s]  - Recycling [%d]"), ANSI_TO_TCHAR(__FUNCTION__), CurrentRecycleCount);

	UpdateBootstrapStep(ERHAPI_ServerBootstrapFlowStep::Recycling);
	SidecarResult = {};

	// we have already logged in, restart registration
	BeginRegistration();
}

void URH_GameInstanceServerBootstrapper::BeginRegistration()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	UpdateBootstrapStep(ERHAPI_ServerBootstrapFlowStep::RunningSidecar);

	bool bStartedHelper = false;
	switch (BootstrapMode)
	{
	case ERHAPI_ServerBootstrapMode::Scripted:
		{
			// kick sidecar off, which will return us a session id we are part of
			auto Helper = MakeShared<FRH_ServerBootstrappingSidecarScripted>(AuthContext, FRH_ServerBootstrapSidecarDelegate::CreateUObject(this, &URH_GameInstanceServerBootstrapper::OnRegistrationSidecarComplete));
			Helper->Start();
			bStartedHelper = true;
		}
		break;
	case ERHAPI_ServerBootstrapMode::AutoCreate:
		{
			FString SessionType = DefaultAutoCreateSessionType;

			if (FParse::Value(FCommandLine::Get(), TEXT("rhsessiontype="), SessionType))
			{
				UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] - default session type overridden by commandline to %s"), ANSI_TO_TCHAR(__FUNCTION__), *SessionType);
			}

			if (SessionType.Len() > 0)
			{
				// kick autocreate sidecar off, which will create a session and return us the session id
				auto Helper = MakeShared<FRH_ServerBootstrappingSidecarAutoCreate>(AuthContext, FRH_ServerBootstrapSidecarDelegate::CreateUObject(this, &URH_GameInstanceServerBootstrapper::OnRegistrationSidecarComplete));
				Helper->Start(SessionType);
				bStartedHelper = true;
			}
		}
		break;
	case ERHAPI_ServerBootstrapMode::SIC:
		{
			// kick autocreate sidecar off, which will create a session and return us the session id
			auto Helper = MakeShared<FRH_ServerBootstrappingSidecarSIC>(AuthContext, FRH_ServerBootstrapSidecarDelegate::CreateUObject(this, &URH_GameInstanceServerBootstrapper::OnRegistrationSidecarComplete));
			Helper->Start();
			bStartedHelper = true;
		}
		break;
	case ERHAPI_ServerBootstrapMode::Multiplay:
	{
		// kick autocreate sidecar off, which will create a session and return us the session id
		auto Helper = MakeShared<FRH_ServerBootstrappingSidecarMultiplay>(AuthContext, FRH_ServerBootstrapSidecarDelegate::CreateUObject(this, &URH_GameInstanceServerBootstrapper::OnRegistrationSidecarComplete));
		Helper->Start();
		bStartedHelper = true;
	}
	break;
	}
	
	if (!bStartedHelper)
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Could not start sidecar helper"), ANSI_TO_TCHAR(__FUNCTION__));
		OnBootstrappingFailed();
	}
}

void URH_GameInstanceServerBootstrapper::OnRegistrationSidecarComplete(bool bSuccess, FRH_SidecarResult Result)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	if (bSuccess && Result.IsComplete() && Result.Session.IsSet())
	{
		// cache off our sidecar result
		SidecarResult = Result;

		const auto& APISession = SidecarResult.Session.GetValue();
		const auto& Template = SidecarResult.Template.GetValue();

		UpdateBootstrapStep(ERHAPI_ServerBootstrapFlowStep::WaitingForSession);

		// make sure template is imported and up to date
		ImportAPITemplate(Template);
		// make sure session is imported and up to date
		ImportAPISession(SidecarResult.Session.GetValue());
		
		if (RHSession != nullptr && RHSession->IsOnline() && RHSession->GetSessionId() == APISession.Data.SessionId)
		{
			// create default instance data if needed
			if (RHSession->GetInstanceData() != nullptr)
			{
				OnSessionInstanceCreationCompleted(true, RHSession);
			}
			else
			{
				// allocated session instances (determined by having an allocation id) should always have instance data
				check(!SidecarResult.AllocationId.IsSet())

				// if an instance was not created for the session, create one
				TMap<FString, FString> CustomData;
				FURL TempURL = FURL();

				// harvest current map url (generally will have been specified from boot URL
				auto WorldContext = GetGameInstanceSubsystem()->GetGameInstance()->GetWorldContext();
				if (WorldContext != nullptr && WorldContext->World() != nullptr)
				{
					TempURL = WorldContext->World()->URL;
				}

				const FString MapNameString = TempURL.Map;	// this is a simple temporary workaround to get the default map without adding dependencies on the map settings module
				const FString ModeNameString = TempURL.GetOption(TEXT("game="), TEXT(""));

				FRHAPI_InstanceStartupParams SpawnParams;
				SpawnParams.Map = MapNameString;
				if (ModeNameString.Len() > 0)
				{
					SpawnParams.SetMode(ModeNameString);
				}

				// TODO - make dedicated instance!
				RHSession->RequestPlayerInstance(SpawnParams, CustomData, FRH_OnSessionUpdatedDelegate::CreateUObject(this, &URH_GameInstanceServerBootstrapper::OnSessionInstanceCreationCompleted));
			}
		}
		else
		{
			UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Sidecar returned valid FSession %s, but failed or does not match imported session %s"), 
				ANSI_TO_TCHAR(__FUNCTION__), *APISession.Data.SessionId, RHSession != nullptr ? *RHSession->GetSessionId() : TEXT("<UNKONWN>"));
			OnBootstrappingFailed();
		}
	}
	else
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Sidecar registration failed"), ANSI_TO_TCHAR(__FUNCTION__));
		OnBootstrappingFailed();
	}
}

void URH_GameInstanceServerBootstrapper::OnSessionInstanceCreationCompleted(bool bSuccess, URH_JoinedSession* CreatedRHSession)
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
	}
	else
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Instance creation failed"), ANSI_TO_TCHAR(__FUNCTION__));
		OnBootstrappingFailed();
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
		UpdateBootstrapStep(ERHAPI_ServerBootstrapFlowStep::SyncingToSession);
		SessionSubsystem->SyncToSession(RHSession, FRH_GameInstanceSessionSyncDelegate::CreateUObject(this, &URH_GameInstanceServerBootstrapper::OnSyncToSessionComplete));
	}
	else if (RHSession == nullptr)
	{
		// this should have been detected much earlier
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Session to sync to does not exist"), ANSI_TO_TCHAR(__FUNCTION__));
		OnBootstrappingFailed();
	}
	else
	{
		// this should have been detected much earlier
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Could not find session subsystem"), ANSI_TO_TCHAR(__FUNCTION__));
		OnBootstrappingFailed();
	}
}

void URH_GameInstanceServerBootstrapper::OnSyncToSessionComplete(bool bSuccess)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	if (bSuccess && RHSession->IsActive())
	{
		OnBootstrappingComplete();
	}
	else
	{
		OnBootstrappingFailed();
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
		else
		{
			if (RHSession->GetInstanceData()->GetAllocationId() != SidecarResult.AllocationId)
			{
				UE_LOG(LogRHSession, Warning, TEXT("[%s] : Session updated but allocation for the session no longer matches"), ANSI_TO_TCHAR(__FUNCTION__));
				bNoLongerValidInstance = true;
			}
			/* TODO - check dedicated server id
			else if (Session.Instance->HostDedicatedServerId.IsSet() && )
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

void URH_GameInstanceServerBootstrapper::CleanupAfterInstanceRemoval()
{
	auto* SessionSubsystem = GetGameInstanceSubsystem()->GetSessionSubsystem();

	if (SessionSubsystem != nullptr && RHSession != nullptr)
	{
		BestEffortLeaveSession();
		SessionSubsystem->SyncToSession(nullptr, FRH_GameInstanceSessionSyncDelegate::CreateUObject(this, &URH_GameInstanceServerBootstrapper::OnCleanupSessionSyncComplete));
	}
}

void URH_GameInstanceServerBootstrapper::OnCleanupSessionSyncComplete(bool bSuccess)
{
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
			if (RallyHere::TermSignalHandler::ExitStatusOverride != INDEX_NONE)
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

bool URH_GameInstanceServerBootstrapper::ShouldRecycleAfterCleanup() const
{
	return !RallyHere::TermSignalHandler::HasReceivedTermSignal()
		&& (CurrentRecycleCount < MaxRecycleCount || MaxRecycleCount <= 0)
		;
}

void URH_GameInstanceServerBootstrapper::InitServerMetrics()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	auto Helper = MakeShared<FRH_ServerMetricsHelper>(FRH_ServerBootstrapMetricsInitDelegate::CreateUObject(this, &URH_GameInstanceServerBootstrapper::OnServerMetricsInitComplete));
	Helper->Start();
}

void URH_GameInstanceServerBootstrapper::OnServerMetricsInitComplete(bool bSuccess)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
}

URH_SessionView* URH_GameInstanceServerBootstrapper::GetSessionById(const FString& SessionId) const
{
	if (RHSession != nullptr && RHSession->GetSessionId() == SessionId)
	{
		return RHSession;
	}
	return nullptr;
}

bool URH_GameInstanceServerBootstrapper::GetTemplate(const FString& Type, FRH_SessionTemplate& Template) const
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
	FRH_SessionTemplate Template;
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

void URH_GameInstanceServerBootstrapper::ReconcileAPISessions(const TArray<FRH_APISessionWithETag>& SessionsModified, const TArray<FString>& SessionsNotModified, bool bOnlineOnly)
{
	
}


void URH_GameInstanceServerBootstrapper::ImportAPITemplate(const FRH_APISessionTemplateWithETag& Template)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] : %s"), ANSI_TO_TCHAR(__FUNCTION__), *Template.Data.SessionType);

	FRH_SessionTemplate RHTemplate;
	RHTemplate.ImportAPITemplate(Template);

	Templates.Add(RHTemplate.SessionType, RHTemplate);

	// inform each session of the relevant type of the template update
	if (RHSession && RHSession->GetSessionType() == RHTemplate.SessionType)
	{
		RHSession->ImportTemplate(RHTemplate);
	}
}

void URH_GameInstanceServerBootstrapper::ReconcileAPITemplates(const TArray<FRH_APISessionTemplateWithETag>& TemplatesModified, const TArray<FString>& TemplatesNotModified, bool bOnlineOnly)
{
	// build a list of sessions not in the list
	TArray<FString> TemplatesToRemove;
	Templates.GenerateKeyArray(TemplatesToRemove);

	for (const auto& Template : TemplatesModified)
	{
		TemplatesToRemove.RemoveSwap(Template.Data.SessionType);
	}
	TemplatesToRemove.RemoveAll([&TemplatesNotModified](const FString& SessionType) { return TemplatesNotModified.Contains(SessionType); });

	// remove any sessions as needed
	for (const FString& SessionTypeToRemove : TemplatesToRemove)
	{
		FRH_SessionTemplate SessionTemplate;
		if (GetTemplate(SessionTypeToRemove, SessionTemplate))
		{
			if (!SessionTemplate.IsOffline() || !bOnlineOnly)
			{
				Templates.Remove(SessionTypeToRemove);
			}
		}
	}

	// import any new template updates
	for (const auto& Template : TemplatesModified)
	{
		ImportAPITemplate(Template);
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
		TemplateInfo.SessionType = FRH_SessionTemplate::OfflineName;
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
			if (SessionInfo.Teams.IsEmpty())
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