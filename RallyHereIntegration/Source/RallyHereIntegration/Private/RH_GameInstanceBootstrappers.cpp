
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
#include "Engine/LocalPlayer.h"
#include "Misc/CoreDelegates.h"

#include "RH_SessionHelpers.h"
#include "RH_BootstrappingHelpers.h"
#include "OnlineSubsystemUtils.h"
#include "HttpManager.h"
#include "GameFramework/GameModeBase.h"
#include <IPAddress.h>
#include "Interfaces/IPv4/IPv4Address.h"

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
	if (FParse::Value(FCommandLine::Get(), TEXT("rhbootstrapmode="), BootstrapCommandlineModeString))
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
			PrivateConnStr = TEXT("unreal://") + PublicConnStr;
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

	if (FParse::Value(FCommandLine::Get(), TEXT("rhmaxrecyclecount="), MaxRecycleCount))
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] - Max recycle count overridden by commandline to %d"), ANSI_TO_TCHAR(__FUNCTION__), MaxRecycleCount);
	}

	SetTerminationSignalHandler();
	
	UpdateBootstrapStep(ERH_ServerBootstrapFlowStep::Unstarted);

	// start login to API as a server
	check(IsRunningDedicatedServer());
	if (IsRunningDedicatedServer() && BootstrapMode != ERH_ServerBootstrapMode::Disabled)
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

		void TerminationSignalHandler()
		{
			if (!bHasReceivedTermSignal)
			{
				bHasReceivedTermSignal = true;

				UE_LOG(LogRallyHereIntegration, Warning, TEXT("Termination signal received, marking for spindown rather than exiting"));
			}
		}

		bool IsSoftStopRequested() { return bHasReceivedTermSignal; }

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

void URH_GameInstanceServerBootstrapper::UpdateBootstrapStep(ERH_ServerBootstrapFlowStep NewStep)
{
	ERH_ServerBootstrapFlowStep OldStep = BootstrapStep;
	BootstrapStep = NewStep;

	if (OldStep != NewStep && UE_LOG_ACTIVE(LogRallyHereIntegration, Verbose))
	{
		FString OldStepName = RH_GETENUMSTRING("/Script/RallyHereIntegration", "ERH_ServerBootstrapFlowStep", OldStep);
		FString NewStepName = RH_GETENUMSTRING("/Script/RallyHereIntegration", "ERH_ServerBootstrapFlowStep", NewStep);

		UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] - Updating bootstrap step [%s] -> [%s]"), ANSI_TO_TCHAR(__FUNCTION__), *OldStepName, *NewStepName);
	}
}

void URH_GameInstanceServerBootstrapper::OnBootstrappingFailed()
{
	// only place we should ever set failed
	UpdateBootstrapStep(ERH_ServerBootstrapFlowStep::Failed);

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
	UpdateBootstrapStep(ERH_ServerBootstrapFlowStep::Complete);
	UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] - Server bootstrapping complete"), ANSI_TO_TCHAR(__FUNCTION__));
}

void URH_GameInstanceServerBootstrapper::BeginServerLogin()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	UpdateBootstrapStep(ERH_ServerBootstrapFlowStep::LoggingIn);

	// update the auth context with the current client id and secret in case it changed since prior logins
	AuthContext->SetClientId(FRallyHereIntegrationModule::Get().GetClientId());
	AuthContext->SetClientSecret(FRallyHereIntegrationModule::Get().GetClientSecret());

	if (!AuthContext.IsValid() && AuthContext->GetRefreshToken().Len() > 0)
	{
		// just refresh the login
		auto Helper = MakeShared<FRH_ServerLoginUserHelper>(AuthContext, FRH_ServerBootstrapLoginDelegate::CreateUObject(this, &URH_GameInstanceServerBootstrapper::OnServerLoginComplete));
		Helper->Start(ERHAPI_GrantType::Refresh, AuthContext->GetRefreshToken());
	}
	else
	{
		auto* LoginOSS = GetOSS();
		if (LoginOSS != nullptr)
		{
			// if we can determine a grant type for this OSS, use the OSS login
			if (RH_GetGrantTypeFromOSSName(LoginOSS->GetSubsystemName()).IsSet())
			{
				BeginOSSLogin();
			}
			else if (LoginOSS->GetSubsystemName() == NULL_SUBSYSTEM)
			{
				// special case for null subsystem - login without a user credential
				auto Helper = MakeShared<FRH_ServerLoginNullHelper>(AuthContext, FRH_ServerBootstrapLoginDelegate::CreateUObject(this, &URH_GameInstanceServerBootstrapper::OnServerLoginComplete));
				Helper->Start();
			}
			else
			{
				UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] Unable to find grant type for OSS '%s'."),
					ANSI_TO_TCHAR(__FUNCTION__), *LoginOSS->GetSubsystemName().ToString());
				OnServerLoginComplete(false);
			}
		}
		else
		{
			UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] Unable to find login OSS."),
				ANSI_TO_TCHAR(__FUNCTION__));
			OnServerLoginComplete(false);
		}
	}
}

void URH_GameInstanceServerBootstrapper::BeginOSSLogin()
{
	auto* OSS = GetOSS();

	auto Identity = OSS ? OSS->GetIdentityInterface() : nullptr;
	if (!Identity.IsValid())
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Could not find login OSS to use for server authentication"), ANSI_TO_TCHAR(__FUNCTION__));
		OnServerLoginComplete(false);
		return;
	}

	if (OnOSSLoginCompleteDelegateHandle.IsValid())
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] OSS Login already pending"), ANSI_TO_TCHAR(__FUNCTION__));
		OnServerLoginComplete(false);
		return;
	}

	int32 ControllerId = 0;

	OnOSSLoginCompleteDelegateHandle = Identity->AddOnLoginCompleteDelegate_Handle(
		ControllerId, FOnLoginCompleteDelegate::CreateUObject(this, &URH_GameInstanceServerBootstrapper::OnOSSLoginComplete));
	if (!Identity->AutoLogin(ControllerId))
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] Autologin failed"), ANSI_TO_TCHAR(__FUNCTION__));
		OnServerLoginComplete(false);
	}
}

void URH_GameInstanceServerBootstrapper::OnOSSLoginComplete(int32 ControllerId, bool bSuccessful, const FUniqueNetId& UniqueId, const FString& ErrorMessage)
{
	auto* OSS = GetOSS();

	auto Identity = OSS ? OSS->GetIdentityInterface() : nullptr;
	if (OSS == nullptr || !Identity.IsValid())
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Could not find login OSS to use for server authentication"), ANSI_TO_TCHAR(__FUNCTION__));
		OnServerLoginComplete(false);
		return;
	}

	// clear the delegate, because the controller id may change next time
	Identity->ClearOnLoginCompleteDelegate_Handle(ControllerId, OnOSSLoginCompleteDelegateHandle);
	OnOSSLoginCompleteDelegateHandle.Reset();

	if (!bSuccessful)
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] OSS Login Failed: %s"), ANSI_TO_TCHAR(__FUNCTION__), *ErrorMessage);
		OnServerLoginComplete(false);
		return;
	}

	auto UniqueIdPtr = Identity->GetUniquePlayerId(ControllerId);
	if (Identity->GetLoginStatus(*UniqueIdPtr) != ELoginStatus::LoggedIn)
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] OSS User Not Logged In: %s"), ANSI_TO_TCHAR(__FUNCTION__), *ErrorMessage);
		OnServerLoginComplete(false);
		return;
	}

	auto GrantType = RH_GetGrantTypeFromOSSName(OSS->GetSubsystemName());
	if (!GrantType.IsSet())
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] Unable to find grant type for OSS '%s'."),
			ANSI_TO_TCHAR(__FUNCTION__), *OSS->GetSubsystemName().ToString());
		OnServerLoginComplete(false);
		return;
	}

	// start a RH login helper
	auto Helper = MakeShared<FRH_ServerLoginUserHelper>(AuthContext, FRH_ServerBootstrapLoginDelegate::CreateUObject(this, &URH_GameInstanceServerBootstrapper::OnServerLoginComplete));
	Helper->Start(GrantType.GetValue(), Identity->GetAuthToken(ControllerId));
}

void URH_GameInstanceServerBootstrapper::OnServerLoginComplete(bool bSuccess)
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

	UpdateBootstrapStep(ERH_ServerBootstrapFlowStep::Recycling);
	BootstrappingResult = {};

	// dispose of the previous game host adapter
	GameHostProvider.Reset();

	// we have already logged in, restart registration
	BeginRegistration();
}


void URH_GameInstanceServerBootstrapper::BeginRegistration()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	UpdateBootstrapStep(ERH_ServerBootstrapFlowStep::Registration);

	auto CreateGameHostProvider = [this]() -> IRH_GameHostProviderInterface*
	{
		FString arguments = FCommandLine::Get();

		// if no rally here url was provided on the commandline, look it up and inject it (GHA does not know about sandbox lookups)
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

		if (auto* GHAInterface = IRH_GameHostProviderInterface::Create<FRH_GameHostProviderGHA>(arguments))
		{
			return GHAInterface;
		}
		else if (BootstrapMode == ERH_ServerBootstrapMode::AutoCreate)
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
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Could not create game host provider"), ANSI_TO_TCHAR(__FUNCTION__));
		OnBootstrappingFailed();
		return;
	}

	// bind callbacks
	GameHostProvider->OnProviderSoftStopRequested.BindStatic(&RallyHere::TermSignalHandler::TerminationSignalHandler);
	GameHostProvider->OnProviderHardStopRequested.BindWeakLambda(this, [this]()
		{
			UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - hard stop requested from game host provider"), ANSI_TO_TCHAR(__FUNCTION__));
			OnBootstrappingFailed();
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
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] attempting to connect without a valid game host provider"), ANSI_TO_TCHAR(__FUNCTION__));
		OnBootstrappingFailed();
	}
}

void URH_GameInstanceServerBootstrapper::OnConnectComplete(bool bSuccess)
{
	if (!bSuccess)
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] GameHostProvider Failed to connect to provider"), ANSI_TO_TCHAR(__FUNCTION__));
		OnBootstrappingFailed();
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
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] attempting to register without a valid game host provider"), ANSI_TO_TCHAR(__FUNCTION__));
		OnBootstrappingFailed();
	}
}

void URH_GameInstanceServerBootstrapper::OnRegisterComplete(bool bSuccess)
{
	if (!bSuccess)
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] GameHostProvider failed to register"), ANSI_TO_TCHAR(__FUNCTION__));
		OnBootstrappingFailed();
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
			UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] GameHostProvider Failed to successfully get an allocation"), ANSI_TO_TCHAR(__FUNCTION__));
			OnBootstrappingFailed();
		}
		else
		{
			UE_LOG(LogRallyHereIntegration, Log, TEXT("[%s] GameHostProvider Spurious allocation failure code after allocated"), ANSI_TO_TCHAR(__FUNCTION__));
		}
		return;
	}
	else if (Status == ERH_AllocationStatus::TimedOut)
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] Exceeded maximum amount of time polling"), ANSI_TO_TCHAR(__FUNCTION__));
		OnBootstrappingFailed();
		return;
	}

	if (!AllocationInfo.IsValid())
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] Invalid allocation info"), ANSI_TO_TCHAR(__FUNCTION__));
		OnBootstrappingFailed();
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
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] attempting to reserve without a valid game host provider"), ANSI_TO_TCHAR(__FUNCTION__));
		OnBootstrappingFailed();
	}
}

void URH_GameInstanceServerBootstrapper::OnReservationComplete(bool bSuccess)
{
	if (!bSuccess)
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] GameHostProvider failed to reserve"), ANSI_TO_TCHAR(__FUNCTION__));
		OnBootstrappingFailed();
		return;
	}

	bool bStartedHelper = false;
	FString SessionType = DefaultAutoCreateSessionType;

	if (FParse::Value(FCommandLine::Get(), TEXT("rhsessiontype="), SessionType))
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
						UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - session creation failed"), ANSI_TO_TCHAR(__FUNCTION__));
						OnBootstrappingFailed();
					}
				}),
			GetDefault<URH_IntegrationSettings>()->SessionJoinPriority
		);

		Helper->Start(RH_APIs::GetSessionsAPI(), Request);
		bStartedHelper = true;
	}
	
	if (!bStartedHelper)
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Could not start auto create bootstrapping finalizer helper"), ANSI_TO_TCHAR(__FUNCTION__));
		OnBootstrappingFailed();
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
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] attempting to self allocate without a valid game host provider"), ANSI_TO_TCHAR(__FUNCTION__));
		OnBootstrappingFailed();
	}
}

void URH_GameInstanceServerBootstrapper::OnSelfAllocateComplete(bool bSuccess)
{
	if (!bSuccess)
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] GameHostProvider failed to allocate"), ANSI_TO_TCHAR(__FUNCTION__));
		OnBootstrappingFailed();
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
				OnSessionInstanceCreationCompleted(true, RHSession);
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
			UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Bootstrapping finalizer returned valid FSession %s, but failed or does not match imported session %s"),
				ANSI_TO_TCHAR(__FUNCTION__), *APISession.Data.SessionId, RHSession != nullptr ? *RHSession->GetSessionId() : TEXT("<UNKONWN>"));
			OnBootstrappingFailed();
		}
	}
	else
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("[%s] - Bootstrapping finalizer failed"), ANSI_TO_TCHAR(__FUNCTION__));
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
		if (BootstrapMode == ERH_ServerBootstrapMode::AutoCreate)
		{
			BeginSelfAllocate();
		}
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
		UpdateBootstrapStep(ERH_ServerBootstrapFlowStep::SyncingToSession);
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

bool URH_GameInstanceServerBootstrapper::ShouldRecycleAfterCleanup() const
{
	return !RallyHere::TermSignalHandler::IsSoftStopRequested() && CurrentRecycleCount < MaxRecycleCount;
}

void URH_GameInstanceServerBootstrapper::Tick(float DeltaTime)
{
	// if a soft stop has been requested and we do not have a session yet, spin down - else wait for session to no longer exist before spinning down
	if (RallyHere::TermSignalHandler::IsSoftStopRequested() && RHSession == nullptr)
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("[%s] Soft stop requested found while ticking, running cleanup"), ANSI_TO_TCHAR(__FUNCTION__));
		check(ShouldRecycleAfterCleanup() == false); // this is used by the next function, and must return false to properly spin down

		// trigger instance removal cleanup (even if not quite true) to unsync us
		OnCleanupSessionSyncComplete(false);
		return;
	}
}

void URH_GameInstanceServerBootstrapper::OnGameHostProviderStats(FRH_GameHostProviderStats& Stats)
{
	const auto* World = GetGameInstanceSubsystem()->GetGameInstance()->GetWorld();
	if (World != nullptr)
	{
		Stats.Map = World->GetMapName();
		if (auto* GameMode = World->GetAuthGameMode())
		{
			Stats.GameMode = GameMode->GetName();
			Stats.PlayerCount = GameMode->GetNumPlayers();
		}
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
	/*
	UWorld* World = GetWorld();
	if (World != nullptr)
	{
		return FUniqueNetIdRepl(UOnlineEngineInterface::Get()->GetUniquePlayerIdWrapper(World, PlatformUserId));
	}
	*/

	return FUniqueNetIdRepl();
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