// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RH_GameInstanceSessionSubsystem.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_LocalPlayerSubsystem.h"
#include "RH_MatchSubsystem.h"
#include "RallyHereIntegrationModule.h"
#include "RH_ConfigSubsystem.h"
#include "Engine/GameInstance.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "GameFramework/GameModeBase.h"
#include "Misc/CoreDelegates.h"
#include "SessionsAPI.h"
#include "RH_Beacons.h"
#include "RH_LocalPlayer.h"
#include "RH_Events.h"

// used to validate state of local players before joining an instance
#include "Engine/LocalPlayer.h"
#include "RH_LocalPlayerSessionSubsystem.h"
#include "RH_GameInstanceBootstrappers.h"

// used to look up local IP as a temporary method for determining join IP
#include <SocketSubsystem.h>
#include <IPAddress.h>

#include "GameFramework/GameStateBase.h"
#include "Interfaces/IPv4/IPv4Address.h"


//==================================================================


void URH_GameInstanceSessionSubsystem::Initialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Initialize();

	if (!InstanceHealthPoller.IsValid())
	{
		InstanceHealthPoller = FRH_PollControl::CreateAutoPoller();
	}

	if (!BackfillPoller.IsValid())
	{
		BackfillPoller = FRH_PollControl::CreateAutoPoller();
	}

	FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &URH_GameInstanceSessionSubsystem::OnMapLoadComplete);
	if (GEngine != nullptr)
	{
		GEngine->OnNetworkFailure().AddUObject(this, &URH_GameInstanceSessionSubsystem::OnNetworkFailure);
		GEngine->OnTravelFailure().AddUObject(this, &URH_GameInstanceSessionSubsystem::OnTravelFailure);
	}

	FGameModeEvents::GameModePreLoginEvent.AddUObject(this, &URH_GameInstanceSessionSubsystem::GameModePreloginEvent);
	FGameModeEvents::GameModePostLoginEvent.AddUObject(this, &URH_GameInstanceSessionSubsystem::GameModePostLoginEvent);
	FGameModeEvents::GameModeLogoutEvent.AddUObject(this, &URH_GameInstanceSessionSubsystem::GameModeLogoutEvent);
}

void URH_GameInstanceSessionSubsystem::Deinitialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Deinitialize();

	// explicitly do not sync state to null, just clear pointers
	DesiredSession = nullptr;
	ActiveSessionState.ResetState();
	InstanceHealthPoller.Reset();
	BackfillPoller.Reset();

	FWorldDelegates::OnPostWorldInitialization.RemoveAll(this);
	if (GEngine != nullptr)
	{
		GEngine->OnNetworkFailure().RemoveAll(this);
		GEngine->OnTravelFailure().RemoveAll(this);
	}

	FGameModeEvents::GameModePreLoginEvent.RemoveAll(this);
	FGameModeEvents::GameModePostLoginEvent.RemoveAll(this);
	FGameModeEvents::GameModeLogoutEvent.RemoveAll(this);
}

void URH_GameInstanceSessionSubsystem::OnMapLoadComplete(UWorld* pWorld)
{
	const UGameInstance* pGameInstance = GetGameInstanceSubsystem()->GetGameInstance();
	check(pGameInstance != nullptr);	// if this is somehow nullptr, this object should not exist, and we are in a very broken state

	const FWorldContext* pWorldContext = pGameInstance->GetWorldContext();
	if (pWorldContext == nullptr || pWorldContext->World() != pWorld)
	{
		// not for our world
		return;
	}

	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	auto ActiveSession = GetActiveSession();
	if (ActiveSession != nullptr)
	{
		// this can happen if a map load fails to create the UWorld
		if (pWorld == nullptr)
		{
			// in this case, the engine should abort the load and load a new map with the ?closed or ?failed flags, handled below.  We will handle it in that case, as too many things depend on the UWorld reference (rather than the Context)
			return;
		}

		const FURL& URL = pWorld->URL;

		const bool bHasSessionId = URL.HasOption(RH_SESSION_PARAMETER_NAME);
		const FString SessionId = URL.GetOption(RH_SESSION_PARAMETER_NAME, TEXT(""));

		const bool bHasInstanceId = URL.HasOption(RH_INSTANCE_PARAMETER_NAME);
		const FString InstanceId = URL.GetOption(RH_INSTANCE_PARAMETER_NAME, TEXT(""));

		if (URL.HasOption(TEXT("closed")) || URL.HasOption(TEXT("failed")) 
			|| !bHasSessionId || SessionId != ActiveSession->GetSessionId()
			|| !bHasInstanceId || !ActiveSession->GetInstanceData() || InstanceId != ActiveSession->GetInstanceData()->GetInstanceId()
			)
		{
			StartLeaveInstanceFlow(true);
			return;
		}

		if (IsLocallyHostedSession(ActiveSession) && GetDefault<URH_IntegrationSettings>()->bAutoMakeSessionsJoinableOnHostMapLoadComplete)
		{
			if (!MakeActiveSessionJoinable(pWorld))
			{
				UE_LOG(LogRallyHereIntegration, Error, TEXT("Failed to make session joinable, leaving instance"));
				StartLeaveInstanceFlow();
			}
		}
	}
}

bool URH_GameInstanceSessionSubsystem::MakeActiveSessionJoinable(UWorld* pWorld)
{
	auto ActiveSession = GetActiveSession();
	if (ActiveSession == nullptr || !IsLocallyHostedSession(ActiveSession))
	{
		return false;
	}

	// instance info updates are not really properly using optional flags, so get a default object and pass it
	FRHAPI_InstanceInfoUpdate InstanceInfo = ActiveSession->GetInstanceUpdateInfoDefaults();
	// make sure we send version in case we are updating joinability.  Its possible the default object above will not have received it yet
	InstanceInfo.SetVersion(URH_JoinedSession::GetClientVersionForSession());

	FString PublicConnStr;
	FString PrivateConnStr;

	// if dedicated server, look up the server's join parameters, else inspect locally (TODO - find a better lookup for a public IP for P2P)
	if (GetGameInstanceSubsystem()->GetServerBootstrapper() != nullptr && GetGameInstanceSubsystem()->GetServerBootstrapper()->DetermineJoinParameters(PublicConnStr, PrivateConnStr))
	{
		InstanceInfo.JoinParams_IsSet = true;
		InstanceInfo.GetJoinParams().PublicConnStr = PublicConnStr;
		InstanceInfo.GetJoinParams().PrivateConnStr = PrivateConnStr;
	}
	else
	{
		// fall back to local LAN detection
		auto* NetDriver = pWorld->GetNetDriver();
		auto LocalAddr = NetDriver ? NetDriver->GetLocalAddr() : nullptr;
		if (NetDriver != nullptr && NetDriver->IsServer() && LocalAddr.IsValid() && LocalAddr->GetPort() > 0)
		{
			bool bCanBind = false;
			if (LocalAddr->IsValid()) // validity check for the address not the shared ref
			{
				const auto LocalIPModified = LocalAddr->Clone();
				// world URL should have the port that was opened for listen
				LocalIPModified->SetPort(LocalAddr->GetPort());

				// temp - parse as IPv4 to determine if it should be public or private
				FIPv4Address tempIPv4;
				if (FIPv4Address::Parse(LocalIPModified->ToString(false), tempIPv4) && tempIPv4.IsSiteLocalAddress())
				{
					InstanceInfo.JoinParams_IsSet = true;
					InstanceInfo.GetJoinParams().PublicConnStr.Empty();
					InstanceInfo.GetJoinParams().PrivateConnStr = TEXT("unreal://") + LocalIPModified->ToString(true);
				}
				else
				{
					// add unreal protocol name
					InstanceInfo.JoinParams_IsSet = true;
					InstanceInfo.GetJoinParams().PublicConnStr = TEXT("unreal://") + LocalIPModified->ToString(true);
					InstanceInfo.GetJoinParams().PrivateConnStr.Empty();
				}
			}
		}
	}

	// if match id is set, push it into the join params
	if (GetActiveMatchId().Len())
	{
		InstanceInfo.SetMatchId(GetActiveMatchId());
		InstanceInfo.GetJoinParams().CustomData_IsSet = true;
		InstanceInfo.JoinParams_IsSet = true;
	}

	// if it is a beacon, convert world to beacon mode
	if (ActiveSession && ActiveSession->IsBeaconSession())
	{
		CreateBeaconHost(pWorld, pWorld->URL.Port, true);
	}

	const bool bRequireConnectivity = IsRunningDedicatedServer(); //|| World->URL.HasOption(TEXT("listen"));
	if (!bRequireConnectivity || InstanceInfo.GetJoinParams().PublicConnStr.Len() > 0 || InstanceInfo.GetJoinParams().PrivateConnStr.Len() > 0)
	{
		InstanceInfo.SetJoinStatus(ERHAPI_InstanceJoinableStatus::Joinable);
		if (!InstanceInfo.GetJoinParams().GetCustomData().Contains(RH_SessionCustomDataKeys::SessionSecurityTokenName))
		{
			FString SecurityToken = FGuid::NewGuid().ToString();

			ActiveSessionState.FallbackSecurityToken = SecurityToken;

			InstanceInfo.GetJoinParams().GetCustomData().Add(RH_SessionCustomDataKeys::SessionSecurityTokenName, SecurityToken);
			InstanceInfo.GetJoinParams().CustomData_IsSet = true;
			InstanceInfo.JoinParams_IsSet = true;
		}

		// bind a delegate to leave the instance if we fail to make it joinable
		auto Delegate = FRH_OnSessionUpdatedDelegate::CreateWeakLambda(this, [this](bool bSuccess, URH_SessionView* Session, const FRH_ErrorInfo& ErrorInfo)
			{
				// if the update failed, leave the instance, since it is not in a valid playable state
				if (!bSuccess && Session != nullptr && Session == GetActiveSession())
				{
					StartLeaveInstanceFlow();
				}
			});
		
		ActiveSession->UpdateInstanceInfo(InstanceInfo, Delegate);

		return true;
	}
	else
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("Session %s could not find a valid connection string on the host"), *ActiveSession->GetSessionId());

		return false;
	}
}

UEngine* URH_GameInstanceSessionSubsystem::GetPEXEngine() const
{
	return GetGameInstanceSubsystem()->GetGameInstance()->GetEngine();
}
UWorld* URH_GameInstanceSessionSubsystem::GetPEXWorld() const
{
	return GetGameInstanceSubsystem()->GetWorld();	
}

FString URH_GameInstanceSessionSubsystem::GetPEXMatchId() const
{
	return GetActiveMatchId();
}

FGuid URH_GameInstanceSessionSubsystem::GetPEXPlayerId() const
{
	auto ActiveSession = GetActiveSession();
	
	// if a local player is the host, use their ID for the PEX reporting (this assumes that the host player uuid is in fact a match for a local player)
	if (IsLocallyHostedSession(ActiveSession))
	{
		auto Instance = ActiveSession->GetInstanceData();
		if (Instance != nullptr)
		{
			return Instance->GetHostPlayerUuid();	
		}
	}
	
	// otherwise use the active session's owner for the PEX reporting
	if (ActiveSession != nullptr)
	{
		auto Owner = ActiveSession->GetSessionOwner();
		if (Owner != nullptr)
		{
			return Owner->GetPlayerUuid();
		}
	}

	return FGuid();
}
FRH_RemoteFileApiDirectory URH_GameInstanceSessionSubsystem::GetPEXRemoteFileDirectory() const
{
	// if we have a server bootstrapper, use its directory, as it will check if uploading is enabled or disabled
	if (GetGameInstanceSubsystem()->GetServerBootstrapper() != nullptr)
	{
		return GetGameInstanceSubsystem()->GetServerBootstrapper()->GetAutoUploadDirectory(true);
	}
	return URH_MatchSubsystem::GetMatchDeveloperFileDirectory(GetActiveMatchId());
}
bool URH_GameInstanceSessionSubsystem::GetPEXIsHost() const
{
	return ActiveSessionState.bIsHost;
}

template<typename T>
void PreparePexReportSessionData(T& Report, const FRHAPI_Session& SessionData)
{
	Report.SetServerId(FPlatformProcess::ComputerName());
	Report.SetVersion(URH_JoinedSession::GetClientVersionForSession());

	// use the activation session info, as it should be the most consistent
	check(SessionData.IsInstanceSet());
	const auto& InstanceData = SessionData.GetInstance();

	if (auto RegionId = SessionData.GetRegionIdOrNull())
	{
		Report.SetRegionId(*RegionId);
	}

	/*
	if (SessionData.GetTeams().Num() > 0)
	{
		Report.SetExpectedTeamSize(SessionData.GetTeams()[0].GetMaxSize());
		int32 TotalPlayers = 0;
		for (const auto& Team : SessionData.GetTeams())
		{
			TotalPlayers += Team.GetMaxSize();
		}
		Report.SetExpectedPlayerCount(TotalPlayers);
	}
	*/

	if (auto AllocationId = InstanceData.GetAllocationIdOrNull())
	{
		Report.SetAllocationId(*AllocationId);
	}
	if (auto HostPlayerUuid = InstanceData.GetHostPlayerUuidOrNull())
	{
		Report.SetHostPlayerUuid(*HostPlayerUuid);
	}
	if (auto ProfileId = InstanceData.GetMatchMakingProfileIdOrNull())
	{
		Report.SetMatchmakingProfileId(*ProfileId);
	}

	const auto& StartupParams = InstanceData.GetInstanceStartupParams();
	Report.SetMapName(StartupParams.GetMap());
	if (auto GameMode = StartupParams.GetModeOrNull())
	{
		Report.SetGameMode(*GameMode);
	}
}

void URH_GameInstanceSessionSubsystem::ModifyPEXHostSummary(FRHAPI_PexHostRequest& Report) const
{
	if (ActiveSessionState.ActivationTime.GetTicks() > 0)
	{
		const auto Duration = FDateTime::UtcNow() - ActiveSessionState.ActivationTime;
		FRHAPI_PexCount Count;
		Count.SetCount(Duration.GetTotalSeconds());
		Report.SetMatchDuration(Count);
	}

	PreparePexReportSessionData(Report, ActiveSessionState.ActivationSessionInfo);
}

void URH_GameInstanceSessionSubsystem::SubmitPEXHostSummary(FRHAPI_PexHostRequest&& Report) const
{
	// match id should have been set before calling this function!
	check (Report.MatchId.Len() > 0);

	// modify the report to add in the session data and other game level data
	ModifyPEXHostSummary(Report);
	
	typedef RallyHereAPI::Traits_CreatePexHost BaseType;
	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.PexHostRequest = Report;
	
	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate(),
		FRH_GenericSuccessWithErrorDelegate::CreateLambda([](bool bSucess, const FRH_ErrorInfo& ErrorInfo)
			{
				if (!bSucess)
				{
					if (ErrorInfo.bIsRHCommonError)
					{
						UE_LOG(LogRallyHereIntegration, Error, TEXT("Failed to submit PEX host summary.  Error Code: %s"), *ErrorInfo.RHCommonError.ErrorCode);
					}
					else
					{
						UE_LOG(LogRallyHereIntegration, Error, TEXT("Failed to submit PEX host summary: %s"), *ErrorInfo.ResponseContent);
					}
				}
				else
				{
					UE_LOG(LogRallyHereIntegration, Log, TEXT("Submitted PEX host summary successfully"));
				}
			}),
		GetDefault<URH_IntegrationSettings>()->PexReportPriority
	);
	
	Helper->Start(RH_APIs::GetAPIs().GetPlayerExperience(), Request);
}

void URH_GameInstanceSessionSubsystem::ModifyPEXClientSummary(FRHAPI_PexClientRequest& Report) const
{
	if (ActiveSessionState.ActivationTime.GetTicks() > 0)
	{
		const auto Duration = FDateTime::UtcNow() - ActiveSessionState.ActivationTime;
		FRHAPI_PexCount Count;
		Count.SetCount(Duration.GetTotalSeconds());
		Report.SetMatchDuration(Count);
	}

	PreparePexReportSessionData(Report, ActiveSessionState.ActivationSessionInfo);
}

void URH_GameInstanceSessionSubsystem::SubmitPEXClientSummary(FRHAPI_PexClientRequest&& Report) const
{
	// match id should have been set before calling this function!
	check (Report.MatchId.Len() > 0);

	// modify the report to add in the session data and other game level data
	ModifyPEXClientSummary(Report);
	
	typedef RallyHereAPI::Traits_CreatePexPlayer BaseType;
	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.PexClientRequest = Report;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate(),
		FRH_GenericSuccessWithErrorDelegate::CreateLambda([](bool bSucess, const FRH_ErrorInfo& ErrorInfo)
			{
				if (!bSucess)
				{
					if (ErrorInfo.bIsRHCommonError)
					{
						UE_LOG(LogRallyHereIntegration, Error, TEXT("Failed to submit PEX player summary.  Error Code: %s"), *ErrorInfo.RHCommonError.ErrorCode);
					}
					else
					{
						UE_LOG(LogRallyHereIntegration, Error, TEXT("Failed to submit PEX player summary: %s"), *ErrorInfo.ResponseContent);
					}
				}
				else
				{
					UE_LOG(LogRallyHereIntegration, Log, TEXT("Submitted PEX player summary successfully"));
				}
			}),
		GetDefault<URH_IntegrationSettings>()->PexReportPriority
	);
	
	Helper->Start(RH_APIs::GetAPIs().GetPlayerExperience(), Request);
}

void URH_GameInstanceSessionSubsystem::OnNetworkFailure(UWorld* World, UNetDriver* NetDriver, ENetworkFailure::Type FailureType, const FString& ErrorString)
{
	// Stub in case it is needed, the default engine handler should close the map which we detect above
}

void URH_GameInstanceSessionSubsystem::OnTravelFailure(UWorld* World, ETravelFailure::Type FailureType, const FString& ErrorString)
{
	const UGameInstance* pGameInstance = GetGameInstanceSubsystem()->GetGameInstance();
	check(pGameInstance != nullptr);	// if this is somehow nullptr, this object should not exist, and we are in a very broken state

	const FWorldContext* pWorldContext = pGameInstance->GetWorldContext();
	if (pWorldContext == nullptr || pWorldContext->World() != World)
	{
		// not for our world
		return;
	}

	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *ErrorString);

	if (GetActiveSession() != nullptr)
	{
		StartLeaveInstanceFlow(true);
	}
}

void URH_GameInstanceSessionSubsystem::SetActiveSession(URH_JoinedSession* JoinedSession)
{
	static FName HealthPollTimerName(TEXT("SessionInstanceHealth"));
	static FName BackfillPollTimerName(TEXT("SessionBackfill"));

	const auto* Settings = GetDefault<URH_IntegrationSettings>();
	auto* MatchSubsystem = GetGameInstanceSubsystem()->GetMatchSubsystem();

	auto OldSession = GetActiveSession();
	if (OldSession != nullptr)
	{
		check(OldSession->IsActive());
		OldSession->SetActive(false);
		if (Settings->bAutoWatchPlayersOnSessionActive)
		{
			OldSession->SetWatchingPlayers(false); // TODO - maybe should be incrementing/decrementing watch counter?
		}

		if (InstanceHealthPoller.IsValid())
		{
			InstanceHealthPoller->StopPoll();
		}
		if (BackfillPoller.IsValid())
		{
			BackfillPoller->StopPoll();
		}

		// reset any polling override as needed for instance health
		auto* PollControl = FRH_PollControl::Get();
		if (PollControl)
		{
			PollControl->ClearPollingIntervalOverride(HealthPollTimerName);
		}

		if (Settings->bAutoCloseMatchOnSessionInactive && ActiveSessionState.bIsHost)
		{
			// Send a match update that the match is now in the closed state
			if (MatchSubsystem != nullptr && !ActiveSessionState.MatchId.IsEmpty())
			{
				const auto& MatchId = ActiveSessionState.MatchId;
				// send an update with the close state and end time
				FRHAPI_MatchRequest UpdateRequest;
				UpdateRequest.SetEndTimestamp(FDateTime::UtcNow());
				UpdateRequest.SetState(ERHAPI_MatchState::Closed);

				// if we can calculate a duration, do so
				if (ActiveSessionState.ActivationTime.GetTicks() > 0)
				{
					const auto Duration = FDateTime::UtcNow() - ActiveSessionState.ActivationTime;
					UpdateRequest.SetDurationSeconds(Duration.GetTotalSeconds());
				}
				
				MatchSubsystem->UpdateMatch(MatchId, UpdateRequest);

				// Trigger the bootstrapper log file upload if configured
				if (GetGameInstanceSubsystem()->GetServerBootstrapper() != nullptr)
				{
					GetGameInstanceSubsystem()->GetServerBootstrapper()->ConditionalAutoUploadLogFile();
				}
			}
		}
	}

	// write PEX Summary
	if (ActiveSessionState.PlayerExperienceCollector != nullptr)
	{
		ActiveSessionState.PlayerExperienceCollector->WriteSummary();
	}

	// clear transient flags for new tracking
	ActiveSessionState.ResetState();

	if (JoinedSession != nullptr)
	{
		// set the new active session
		check(!JoinedSession->IsActive());
		ActiveSessionState.Session = JoinedSession;
		ActiveSessionState.ActivationSessionInfo = JoinedSession->GetSessionData();
		ActiveSessionState.ActivationTime = FDateTime::UtcNow();

		auto*& ActiveSession = ActiveSessionState.Session;

		JoinedSession->SetActive(true);
		if (Settings->bAutoWatchPlayersOnSessionActive)
		{
			JoinedSession->SetWatchingPlayers(true);
		}

		// if this instance is locally hosted, set up host specific logic
		if (ActiveSession->GetInstanceData() != nullptr && IsLocallyHostedInstance(*ActiveSession->GetInstanceData()))
		{
			ActiveSessionState.bIsHost = true;
			
			// if automatic matches are enabled, create one now
			if (Settings->bAutoCreateMatches)
			{
				CreateMatchForSession(ActiveSession);
			}

			// instance health polling kickoff and config check
			if (GetShouldKeepInstanceHealthAlive())
			{
				// initiate polling
				if (InstanceHealthPoller.IsValid())
				{
					InstanceHealthPoller->StartPoll(FRH_PollFunc::CreateUObject(this, &URH_GameInstanceSessionSubsystem::PollInstanceHealth), HealthPollTimerName, true);
				}

				// kick off a check to determine if we need to override our health interval
				auto* PollControl = FRH_PollControl::Get();
				if (PollControl)
				{
					typedef RallyHereAPI::Traits_InstanceHealthConfig BaseType;

					BaseType::Request Request = {};
					Request.AuthContext = GetAuthContext();

					auto PollTimerNameCopy = HealthPollTimerName;
					auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
						BaseType::Delegate::CreateLambda([PollTimerNameCopy](const BaseType::Response& Resp)
							{
								auto* PollControl = FRH_PollControl::Get();
								const auto Content = Resp.TryGetDefaultContentAsPointer();
								if (PollControl && Resp.IsSuccessful() && Content != nullptr)
								{
									float NewInterval = Content->CadenceSeconds;
									UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] - Updating %s timer to %f interval"), ANSI_TO_TCHAR(__FUNCTION__), *PollTimerNameCopy.ToString(), NewInterval);

									FRH_PollTimerSetting NewSetting = PollControl->GetPollTimerSetting(PollTimerNameCopy);
									NewSetting.TimerName = PollTimerNameCopy;	// make sure we set the timer name, as this could be the default configuration
									NewSetting.Interval = NewInterval;
									PollControl->SetPollingIntervalOverride(NewSetting);
								}
							}),
						FRH_GenericSuccessWithErrorDelegate(),
						GetDefault<URH_IntegrationSettings>()->SessionInstanceHealthUpdatePriority
					);

					Helper->Start(RH_APIs::GetSessionsAPI(), Request);
				}
			}

			// backfill polling kickoff and config check
			if (GetShouldKeepBackfillAlive())
			{
				// initiate polling
				if (BackfillPoller.IsValid())
				{
					BackfillPoller->StartPoll(FRH_PollFunc::CreateUObject(this, &URH_GameInstanceSessionSubsystem::PollBackfill), BackfillPollTimerName, false);
				}

				// kick off a check to determine if we need to override our health interval
				auto* PollControl = FRH_PollControl::Get();
				if (PollControl)
				{
					typedef RallyHereAPI::Traits_BackfillConfig BaseType;

					BaseType::Request Request = {};
					Request.AuthContext = GetAuthContext();

					auto PollTimerNameCopy = BackfillPollTimerName;
					auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
						BaseType::Delegate::CreateLambda([PollTimerNameCopy](const BaseType::Response& Resp)
							{
								auto* PollControl = FRH_PollControl::Get();
								const auto Content = Resp.TryGetDefaultContentAsPointer();
								if (PollControl && Resp.IsSuccessful() && Content != nullptr)
								{
									const auto CadenceSeconds = Content->Timeout;
									UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] - Updating %s timer to %f interval"), ANSI_TO_TCHAR(__FUNCTION__), *PollTimerNameCopy.ToString(), CadenceSeconds);

									FRH_PollTimerSetting NewSetting = PollControl->GetPollTimerSetting(PollTimerNameCopy);
									NewSetting.TimerName = PollTimerNameCopy;	// make sure we set the timer name, as this could be the default configuration
									NewSetting.Interval = CadenceSeconds;
									PollControl->SetPollingIntervalOverride(NewSetting);
								}
							}),
						FRH_GenericSuccessWithErrorDelegate(),
						GetDefault<URH_IntegrationSettings>()->SessionInstanceHealthUpdatePriority
					);

					Helper->Start(RH_APIs::GetSessionsAPI(), Request);
				}
			}
		}
		else if (ActiveSession->GetInstanceData() != nullptr)
		{
			check (!IsLocallyHostedInstance(*ActiveSession->GetInstanceData()));

			ActiveSessionState.bIsHost = false;
			
			// if this is not a locally hosted match and a match id is present in the session at this time, cache it to mirror server caching time
			const auto& JoinParams = ActiveSession->GetInstanceData()->GetJoinParams();
			const auto CustomData = JoinParams.GetCustomDataOrNull();
			const auto MatchIdPtr = ActiveSession->GetInstanceData()->GetMatchIdOrNull();
			if (MatchIdPtr != nullptr)
			{
				ActiveSessionState.MatchId = *MatchIdPtr;
			}
		}
		
		// initialize a PEX collector if able
		ActiveSessionState.PlayerExperienceCollector = CreatePEXCollector();
	}

	// fire delegates to allow registration of handler objects
	OnActiveSessionChanged.Broadcast(OldSession, ActiveSessionState.Session);
	BLUEPRINT_OnActiveSessionChanged.Broadcast(OldSession, ActiveSessionState.Session);
}


bool URH_GameInstanceSessionSubsystem::GenerateHostURL(const URH_JoinedSession* Session, FURL& lastURL, FURL& outURL) const
{
	if (Session == nullptr)
	{
		return false;
	}

	const auto Instance = Session->GetInstanceData();
	if (Instance == nullptr)
	{
		return false;
	}

	const auto InstanceStartupParams = Instance->GetInstanceStartupParamsOrNull();
	if (!InstanceStartupParams)
	{
		return false;
	}

	FString FormattedURLString = InstanceStartupParams->Map;
	if (const auto Mode = InstanceStartupParams->GetModeOrNull())
	{
		FormattedURLString += FString::Printf(TEXT("?game=%s"), **Mode);
	}

	// append misc params directly, assume they are formated as desired
	FormattedURLString += InstanceStartupParams->GetMiscParams();

	FURL TravelURL(&lastURL, *FormattedURLString, TRAVEL_Absolute);

	// add the RH Session ID to the URL.  This is used to identify if a map loaded was on behalf of the session, for tracking reasons (ex: enable it to be joined once load completes)
	TravelURL.AddOption(*FString::Printf(TEXT("%s%s"), RH_SESSION_PARAMETER_NAME, *Session->GetSessionId()));

	// add the RH Instance Id to the URL.  This is used to identify if a map loaded was on behalf of the instance, for tracking reasons (ex: enable it to be joined once load completes)
	TravelURL.AddOption(*FString::Printf(TEXT("%s%s"), RH_INSTANCE_PARAMETER_NAME, *Instance->GetInstanceId()));

	if (!IsRunningDedicatedServer())	// dedicated servers always listen
	{
		if (!Session->IsOffline())		// temporary check until we have a template setting for joinability type
		{
			TravelURL.AddOption(TEXT("Listen"));
		}
	}

	if (TravelURL.Valid && TravelURL.Map.Len() > 0)
	{
		outURL = TravelURL;
		return true;
	}
	return false;
}

bool URH_GameInstanceSessionSubsystem::GenerateJoinURL(const URH_JoinedSession* Session, FURL& lastURL, FURL& outURL) const
{
	if (Session == nullptr)
	{
		return false;
	}

	auto* Instance = Session->GetInstanceData();
	if (Instance == nullptr)
	{
		return false;
	}

	if (Instance->JoinStatus != ERHAPI_InstanceJoinableStatus::Joinable)
	{
		return false;
	}

	const auto JoinParams = Instance->GetJoinParamsOrNull();
	if (!JoinParams || (JoinParams->PublicConnStr.Len() == 0 && JoinParams->PrivateConnStr.Len() == 0))
	{
		return false;
	}

	// TODO - determine private vs public connection
	bool bUsePublic = JoinParams->PublicConnStr.Len() > 0;
	{
		// rule out the default address, which is the Any address in IPv4
		FIPv4Address Addr;
		if (FIPv4Address::Parse(JoinParams->PublicConnStr, Addr) && Addr == FIPv4Address::Any)
		{
			bUsePublic = false;
		}
	}
	const FString FormattedURLString = bUsePublic ? JoinParams->PublicConnStr : JoinParams->PrivateConnStr;

	FURL TravelURL(&lastURL, *FormattedURLString, TRAVEL_Absolute);

	// add the RH Session ID to the URL.  This is used to identify if a map loaded was on behalf of the session, for tracking reasons (ex: enable it to be joined once load completes)
	TravelURL.AddOption(*FString::Printf(TEXT("%s%s"), RH_SESSION_PARAMETER_NAME, *Session->GetSessionId()));

	// add the RH Instance Id to the URL.  This is used to identify if a map loaded was on behalf of the instance, for tracking reasons (ex: enable it to be joined once load completes)
	TravelURL.AddOption(*FString::Printf(TEXT("%s%s"), RH_INSTANCE_PARAMETER_NAME, *Instance->GetInstanceId()));

	if (TravelURL.Valid && TravelURL.Host.Len() > 0)
	{
		outURL = TravelURL;
		return true;
	}

	return false;
}

bool URH_GameInstanceSessionSubsystem::ValidateIncomingConnection(UNetConnection* Connection, FString& ErrorMessage) const
{
	RHStandardEvents::FInstanceLoginReceivedEvent Event;

	const auto* pWorld = GetWorld();	// actors that are not default objects always have a world
	const auto* pSession = GetActiveSession();
	const auto* pSettings = GetDefault<URH_IntegrationSettings>();

	if (Connection != nullptr)
	{
		Event.ConnectionString = Connection->RequestURL; // todo: sanitize?
		auto Platform = RH_GetPlatformFromOSSName(Connection->PlayerId.GetType());
		if (Platform.IsSet())
		{
			Event.PlatformId = EnumToString(Platform.GetValue());
		}
		Event.PlatformUserId = Connection->PlayerId.ToString();
	}

	if (pSession != nullptr)
	{
		Event.SessionId = pSession->GetSessionId();
		if (pSession->GetInstanceData() != nullptr)
		{
			Event.InstanceId = pSession->GetInstanceData()->GetInstanceId();
		}
	}

	ON_SCOPE_EXIT
	{
		auto Provider = GetGameInstanceSubsystem()->GetAnalyticsProvider();
		if (Provider != nullptr)
		{
			Event.IsSuccess = ErrorMessage.Len() == 0;

			Event.EmitTo(Provider);
		}
	};

	// if error message is already set, something else already failed
	if (ErrorMessage.Len() > 0)
	{
		return false;
	}

	if (Connection == nullptr)
	{
		ErrorMessage = TEXT("Connection is null");
		return false;
	}

	// find the player connection and import any player options desired
	FString RequestURL = Connection->RequestURL;

	auto* pRH_Conn = Cast<IRH_IpConnectionInterface>(Connection);
	if (pRH_Conn != nullptr)
	{
		bool bFound = false;
		bool bValid = false;;
		pRH_Conn->ImportPlayerOptionsfromURL(bFound, bValid);

		Event.UserId = pRH_Conn->GetRHPlayerUuid();

		if (pSettings->bRequireImportedPlayerIdsForJoining && !bFound)
		{
			ErrorMessage = TEXT("Could not import player options from URL");
			return false;
		}

		//if it is a game type of world, check required id flag (for now, editor may not have valid IDs for PIE, etc)
		if (pWorld->WorldType == EWorldType::Game)
		{
			if (pSettings->bRequireValidPlayerIdsForJoining && !bValid)
			{
				ErrorMessage = TEXT("Imported player ids are not valid");
				return false;
			}
		}
	}

	if (ErrorMessage.Len() == 0 && pSettings->bUseSecurityTokenForJoining)
	{
		// temporary url to parse out the token
		const FURL TempURL(nullptr, *RequestURL, TRAVEL_Absolute);
		const FString LoginSecurityToken = TempURL.GetOption(TEXT("RHSecurityToken="), TEXT(""));

		// see if a security token was specified for the currently active session
		const FString* SessionSecurityToken = nullptr;
		const TOptional<FString> FallbackSessionSecurityToken = GetFallbackSessionSecurityToken();
		if (pSession != nullptr && pSession->GetInstanceData() != nullptr)
		{
			if (const auto JoinParams = pSession->GetInstanceData()->GetJoinParamsOrNull())
			{
				if (const auto CustomData = JoinParams->GetCustomDataOrNull())
				{
					SessionSecurityToken = CustomData->Find(RH_SessionCustomDataKeys::SessionSecurityTokenName);
				}
			}
		}

		if (SessionSecurityToken != nullptr)
		{
			if (*SessionSecurityToken != LoginSecurityToken)
			{
				ErrorMessage = TEXT("RH Security Token mismatch");
				return false;
			}
		}
		// this token is used to cover cases where clients attempt to connect before the server reads its own session data update to add the token
		else if (FallbackSessionSecurityToken.IsSet())
		{
			if (FallbackSessionSecurityToken.GetValue() != LoginSecurityToken)
			{
				ErrorMessage = TEXT("RH Security Token (fallback) mismatch");
				return false;
			}
		}
		else if (IsRunningDedicatedServer() && GetGameInstanceSubsystem()->GetServerBootstrapper() != nullptr && GetGameInstanceSubsystem()->GetServerBootstrapper()->IsBootstrapModeEnabled())
		{
			// if we are running a dedicated server and the server bootstrapper is enabled, failing to find a token probably means that the server is not part of a valid joinable session
			ErrorMessage = TEXT("Security token could not be validated");
			return false;
		}
	}

	return true;
}

void URH_GameInstanceSessionSubsystem::GameModePreloginEvent(class AGameModeBase* GameMode, const FUniqueNetIdRepl& NewPlayer, FString& ErrorMessage)
{
	// find the player connection and import any player options desired
	auto* pWorld = GetWorld();
	FString RequestURL;
	if (pWorld->NetDriver != nullptr && pWorld->NetDriver->ClientConnections.Num() > 0)
	{
		const auto NetDriver = pWorld->NetDriver;
		for (int i = NetDriver->ClientConnections.Num() - 1; i >= 0; --i)
		{
			auto Client = NetDriver->ClientConnections[i];
			if (Client->PlayerId == NewPlayer && Client->ClientLoginState == EClientLoginState::LoggingIn)
			{
				ValidateIncomingConnection(Client, ErrorMessage);
				break;
			}
		}
	}
}

void URH_GameInstanceSessionSubsystem::GameModePostLoginEvent(class AGameModeBase* GameMode, APlayerController* NewPlayer)
{
	RHStandardEvents::FInstanceJoinReceivedEvent Event;

	Event.IsSuccess = NewPlayer != nullptr;

	const auto* pWorld = GetWorld();	// actors that are not default objects always have a world
	const auto* pSession = GetActiveSession();

	if (pSession != nullptr)
	{
		Event.SessionId = pSession->GetSessionId();
		if (pSession->GetInstanceData() != nullptr)
		{
			Event.InstanceId = pSession->GetInstanceData()->GetInstanceId();
		}
	}

	TOptional<FGuid> PlayerId;
	if (NewPlayer != nullptr)
	{
		auto* pRH_Conn = Cast<IRH_IpConnectionInterface>(NewPlayer->Player);
		auto* pRH_LocalPlayer = Cast<IRH_LocalPlayerInterface>(NewPlayer->Player);

		if (pRH_Conn != nullptr)
		{
			PlayerId = pRH_Conn->GetRHPlayerUuid();
		}
		else if (pRH_LocalPlayer != nullptr)
		{
			PlayerId = pRH_LocalPlayer->GetRHPlayerUuid();
		}
	}
	if (PlayerId.IsSet() && !PlayerId->IsValid())
	{
		PlayerId.Reset();
	}

	if (PlayerId.IsSet() && PlayerId->IsValid())
	{
		Event.UserId = PlayerId;
	}

	auto Provider = GetGameInstanceSubsystem()->GetAnalyticsProvider();
	if (Provider != nullptr)
	{
		Event.EmitTo(Provider);
	}

	if (NewPlayer != nullptr && PlayerId.IsSet())
	{
		// lookup if an existing context exists for the player, else make a new one
		auto* PlayerContext = ActiveSessionState.PlayerContexts.FindByPredicate([PlayerId](const FRH_ActiveSessionStatePlayerContext& Context) { return Context.RHPlayerId == PlayerId.GetValue(); });
		if (PlayerContext == nullptr)
		{
			// create a new context for the player
			FRH_ActiveSessionStatePlayerContext NewContext;
			NewContext.RHPlayerId = PlayerId.GetValue();
			auto Index = ActiveSessionState.PlayerContexts.Add(NewContext);
			PlayerContext = &ActiveSessionState.PlayerContexts[Index];
		}

		// update the context with the new controller, and set join time
		PlayerContext->Controller = NewPlayer;
		PlayerContext->JoinedTime = FDateTime::UtcNow();

		// update the match player
		auto Settings = GetDefault<URH_IntegrationSettings>();
		auto pMatchSubsystem = GetGameInstanceSubsystem()->GetMatchSubsystem();
		auto MatchId = GetActiveMatchId();
		if (pMatchSubsystem != nullptr && !MatchId.IsEmpty() && Settings->bAutoAddConnectedPlayersToMatches)
		{
			FRHAPI_MatchPlayerRequest MatchPlayer;

			MatchPlayer.SetPlayerUuid(PlayerContext->RHPlayerId);
			MatchPlayer.SetJoinedMatchTimestamp(PlayerContext->JoinedTime);

			pMatchSubsystem->UpdateMatchPlayer(MatchId, PlayerContext->RHPlayerId, MatchPlayer);
		}
	}
}

void URH_GameInstanceSessionSubsystem::GameModeLogoutEvent(class AGameModeBase* GameMode, AController* Exiting)
{
	RHStandardEvents::FInstanceClientDisconnectEvent Event;

	const auto* pWorld = GetWorld();	// actors that are not default objects always have a world
	const auto* pSession = GetActiveSession();

	if (pSession != nullptr)
	{
		Event.SessionId = pSession->GetSessionId();
		if (pSession->GetInstanceData() != nullptr)
		{
			Event.InstanceId = pSession->GetInstanceData()->GetInstanceId();
		}
	}

	// lookup the player context using the controller reference (as the local player or connection may be gone)
	auto* PlayerContext = ActiveSessionState.PlayerContexts.FindByPredicate([Exiting](const FRH_ActiveSessionStatePlayerContext& Context) { return Context.Controller == Exiting; });
	if (PlayerContext != nullptr)
	{
		// clear the controller reference, as it will be invalid soon
		PlayerContext->Controller = nullptr;

		// update the context with the leave time
		PlayerContext->LeaveTime = FDateTime::UtcNow();

		// calculate the duration, add to duration connected in case this is not the only time this player has been connected
		PlayerContext->DurationSeconds += (PlayerContext->LeaveTime - PlayerContext->JoinedTime).GetTotalSeconds();

		// update the event with the player id
		Event.UserId = PlayerContext->RHPlayerId;
	}

	// emit the event
	auto Provider = GetGameInstanceSubsystem()->GetAnalyticsProvider();
	if (Provider != nullptr)
	{
		Event.EmitTo(Provider);
	}

	// update the match player
	if (PlayerContext != nullptr)
	{
		auto Settings = GetDefault<URH_IntegrationSettings>();
		auto pMatchSubsystem = GetGameInstanceSubsystem()->GetMatchSubsystem();
		auto MatchId = GetActiveMatchId();
		if (pMatchSubsystem != nullptr && !MatchId.IsEmpty() && Settings->bAutoAddConnectedPlayersToMatches)
		{
			FRHAPI_MatchPlayerRequest MatchPlayer;
			MatchPlayer.SetPlayerUuid(PlayerContext->RHPlayerId);
			MatchPlayer.SetLeftMatchTimestamp(PlayerContext->LeaveTime);
			MatchPlayer.SetDurationSeconds(PlayerContext->DurationSeconds);

			pMatchSubsystem->UpdateMatchPlayer(MatchId, PlayerContext->RHPlayerId, MatchPlayer);
		}
	}
}

void URH_GameInstanceSessionSubsystem::CreateMatchForSession(const URH_JoinedSession* Session, const FString& InMatchId)
{
	const auto* Settings = GetDefault<URH_IntegrationSettings>();
	auto* pMatchSubsystem = GetGameInstanceSubsystem()->GetMatchSubsystem();

	if (pMatchSubsystem == nullptr)
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("Match subsystem is not available, cannot create match"));
		return;
	}
	else if (Session == nullptr)
	{
		UE_LOG(LogRallyHereIntegration, Error, TEXT("Session is null, cannot create match"));
		return;
	}
	
	const auto* InstanceData = Session->GetInstanceData();

	// create the match id we will use to track the match
	const auto MatchId = InMatchId.Len() > 0 ? InMatchId : FGuid::NewGuid().ToString(EGuidFormats::DigitsWithHyphens);

	UE_LOG(LogRallyHereIntegration, Log, TEXT("Creating match for session %s with match id %s"), *Session->GetSessionId(), *MatchId);

	// update the state object with the active match id, to lock it in (all future calls will use this value)
	ActiveSessionState.MatchId = MatchId;
	
	// Send a match create request to the match subsystem
	{
		// send an update with initial data satte
		FRHAPI_MatchRequest UpdateRequest;
		UpdateRequest.SetStartTimestamp(FDateTime::UtcNow());
		UpdateRequest.SetState(ERHAPI_MatchState::Pending);

		// set the session id
		const FString SessionId = Session->GetSessionId();
		{
			TArray<FRHAPI_MatchSession> Sessions;
			{
				FRHAPI_MatchSession NewSession;
				NewSession.SetSessionId(SessionId);

				if (InstanceData != nullptr)
				{
					auto ProfileId = InstanceData->GetMatchMakingProfileIdOrNull();
					if (ProfileId != nullptr)
					{
						NewSession.SetMatchmakingProfileId(*ProfileId);
					}
				}
				Sessions.Add(NewSession);
			}
			UpdateRequest.SetSessions(Sessions);
		}

		// set the Instance id
		FString InstanceId;
		if (InstanceData != nullptr)
		{
			InstanceId = InstanceData->GetInstanceId();
			TArray<FRHAPI_MatchInstance> Instances;
			{
				FRHAPI_MatchInstance NewInstance;
				
				NewInstance.SetInstanceId(InstanceId);

				auto* HostPlayerId = InstanceData->GetHostPlayerUuidOrNull();
				if (HostPlayerId != nullptr)
				{
					NewInstance.SetHostPlayerUuid(*HostPlayerId);
				}
				auto* RegionId = Session->GetSessionData().GetRegionIdOrNull();
				if (RegionId != nullptr)
				{
					NewInstance.SetRegionId(*RegionId);
				}
				//NewInstance.SetLaunchRequestTemplateId(InstanceData->GetInstanceStartupParams().launchtemplate)
				NewInstance.SetMap(InstanceData->GetInstanceStartupParams().Map);
				auto* GameMode = InstanceData->GetInstanceStartupParams().GetModeOrNull();
				if (GameMode != nullptr)
				{
					NewInstance.SetGameMode(*GameMode);
				}
				// assume match host type can be converted directly by name from instance host type
				ERHAPI_MatchHostType HostType;
				if (EnumFromString(EnumToString(InstanceData->GetHostType()), HostType))
				{
					NewInstance.SetHostType(HostType);
				}

				Instances.Add(NewInstance);
			}
			UpdateRequest.SetInstances(Instances);
		}

		// set the allocation id
		if (InstanceData != nullptr)
		{
			const auto AllocationId = InstanceData->GetAllocationIdOrNull();
			if (AllocationId != nullptr)
			{
				TArray<FRHAPI_MatchAllocation> Allocations;
				{
					FRHAPI_MatchAllocation NewAllocation;
					NewAllocation.SetAllocationId(InstanceData->GetAllocationId());
					Allocations.Add(NewAllocation);
				}
				UpdateRequest.SetAllocations(Allocations);
			}
		}
		
		// scan through all known local and remote players for connected players, and add them.  We do not set much state since we cannot determine much here
		auto* pWorld = GetGameInstanceSubsystem()->GetGameInstance()->GetWorld();
		if (Settings->bAutoAddConnectedPlayersToMatches && pWorld != nullptr)
		{
			TArray<FRHAPI_MatchPlayerRequest> Players;
			// add existing local players
			for (auto LP : GetGameInstanceSubsystem()->GetGameInstance()->GetLocalPlayers())
			{
				auto* pRH_LP = Cast<IRH_LocalPlayerInterface>(LP);
				if (pRH_LP != nullptr)
				{
					FRHAPI_MatchPlayerRequest NewPlayer;
					const auto& PlayerId = pRH_LP->GetRHPlayerUuid();
					NewPlayer.SetPlayerUuid(PlayerId);
					NewPlayer.SetJoinedMatchTimestamp(FDateTime::UtcNow());
					Players.Add(NewPlayer);
				}
			}

			// add existing remote players			
			FString RequestURL;
			if (pWorld->NetDriver != nullptr && pWorld->NetDriver->ClientConnections.Num() > 0)
			{
				for (auto Connection : pWorld->NetDriver->ClientConnections)
				{
					auto* pRH_Conn = Cast<IRH_IpConnectionInterface>(Connection);
					if (pRH_Conn != nullptr)
					{
						FRHAPI_MatchPlayerRequest NewPlayer;
						const auto& PlayerId = pRH_Conn->GetRHPlayerUuid();
						NewPlayer.SetPlayerUuid(PlayerId);
						NewPlayer.SetJoinedMatchTimestamp(FDateTime::UtcNow());
						Players.Add(NewPlayer);
					}
				}
			}
			UpdateRequest.SetPlayers(Players);
		}

		// create the match and set as active
		pMatchSubsystem->UpdateMatch(GetActiveMatchId(), UpdateRequest, FRH_OnMatchUpdateCompleteDelegate::CreateWeakLambda(this, [this, WeakSession = MakeWeakObjectPtr(Session), SessionId, InstanceId](bool bSuccess, const FRHAPI_MatchWithPlayers& Match, const FRH_ErrorInfo& ErrorInfo)
			{
				if (bSuccess)
				{
					// emit an audit event to session hinting at the match id
					if (WeakSession.IsValid())
					{
						auto Session = WeakSession.Get();
						
						FRHAPI_CreateAuditRequest AuditRequest;
						AuditRequest.SetSessionId(Session->GetSessionId());
						if (!InstanceId.IsEmpty())
						{
							AuditRequest.SetInstanceId(InstanceId);
						}

						const auto MatchId = Match.GetMatchIdOrNull();
						if (MatchId != nullptr)
						{
							AuditRequest.SetMatchId(*MatchId);
						}

						AuditRequest.SetEventName(TEXT("create_match"));

						Session->EmitAuditEvent(AuditRequest);
					}
				}
			}));
	}
}

URH_PEXCollector* URH_GameInstanceSessionSubsystem::CreatePEXCollector()
{
	auto PEXCollector = NewObject<URH_PEXCollector>(this);

	if (PEXCollector->Init(this))
	{
		return PEXCollector;
	}

	return nullptr;
}


bool URH_GameInstanceSessionSubsystem::GetShouldKeepInstanceHealthAlive_Implementation() const
{
	const auto ActiveSession = GetActiveSession();
	if (ActiveSession != nullptr
		&& GetActiveSession()->IsOnline()
		&& IsLocallyHostedInstance(*ActiveSession->GetInstanceData()))
	{
		return true;
	}

	return false;
}

ERHAPI_InstanceHealthStatus URH_GameInstanceSessionSubsystem::GetInstanceHealthStatusToReport_Implementation() const
{
	return ERHAPI_InstanceHealthStatus::Healthy;
}

void URH_GameInstanceSessionSubsystem::PollInstanceHealth(const FRH_PollCompleteFunc& Delegate)
{
	// make sure the active session is locally hosted
	auto* ActiveSession = GetActiveSession();
	if (	ActiveSession != nullptr
		&&	ActiveSession->GetInstanceData() != nullptr
		&&	GetShouldKeepInstanceHealthAlive()
		)
	{
		ActiveSession->UpdateInstanceHealth(GetInstanceHealthStatusToReport(), 
			FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
				{
					if (!bSuccess && ErrorInfo.ResponseCode == EHttpResponseCodes::NotFound)
					{
						UE_LOG(LogRHSession, Warning, TEXT("[%s] - Instance health not found, polling session"), ANSI_TO_TCHAR(__FUNCTION__))

						// its possible the session has closed this instance or is gone, in which case, poll the session immediately to trigger logic faster rather than waiting on cleanup on next poll cycle
						auto ActiveSession = GetActiveSession();
						if (ActiveSession != nullptr)
						{
							ActiveSession->ForcePollForUpdate();
						}
					}

					Delegate.ExecuteIfBound(bSuccess, GetShouldKeepInstanceHealthAlive());
				}
			));
	}
	else
	{
		// stop the timer if no active session and instance
		Delegate.ExecuteIfBound(false, false);
	}
}

bool URH_GameInstanceSessionSubsystem::GetShouldKeepBackfillAlive_Implementation() const
{
	auto* ActiveSession = GetActiveSession();
	if (ActiveSession == nullptr || ActiveSession->GetInstanceData() == nullptr || ActiveSession->IsOffline())
	{
		return false;
	}

	// if session has no backfill info, then we cannot backfill it
	const auto BackfillInfo = ActiveSession->GetSessionData().GetBackfillOrNull();
	if (!BackfillInfo || BackfillInfo->GetBackfillId().IsEmpty())
	{
		return false;
	}

	// if a backfill termination was requested, we should not keep it alive
	if (IsBackfillTerminated())
	{
		return false;
	}

	// check if instance is in a state where we do not want to keep backfill alive
	auto JoinStatus = ActiveSession->GetInstanceData()->GetJoinStatus();
	switch (JoinStatus)
	{
	case ERHAPI_InstanceJoinableStatus::Closed:
		return false;
	}

	return true;
}

void URH_GameInstanceSessionSubsystem::PollBackfill(const FRH_PollCompleteFunc& Delegate)
{
	// make sure the active session is locally hosted, and that we want to keep backfill alive
	auto* ActiveSession = GetActiveSession();
	if (	ActiveSession != nullptr
		&&	ActiveSession->GetInstanceData() != nullptr 
		&&	IsLocallyHostedInstance(*ActiveSession->GetInstanceData())
		&&	GetShouldKeepBackfillAlive()
		)
	{
		// send acknowledge if instance is joinable, else just cycle polling
		if (ActiveSession->GetInstanceData()->GetJoinStatus() == ERHAPI_InstanceJoinableStatus::Joinable)
		{
			ActiveSession->AcknowledgeBackfill(true,
				FRH_OnSessionUpdatedDelegate::CreateWeakLambda(this, [this, Delegate](bool bSuccess, URH_SessionView* Session, const FRH_ErrorInfo& ErrorInfo)
					{
						if (!bSuccess && ErrorInfo.ResponseCode == EHttpResponseCodes::NotFound)
						{
							UE_LOG(LogRHSession, Warning, TEXT("[%s] - Backfill not found, polling session"), ANSI_TO_TCHAR(__FUNCTION__))
							// its possible the session has closed this instance or the backfill data is not present, so poll the session to get an updated state.  This should prevent new backfill requests via the state checks in GetShouldKeepBackfillAlive()
							auto ActiveSession = GetActiveSession();
							if (ActiveSession != nullptr)
							{
								ActiveSession->ForcePollForUpdate();
							}
						}

						Delegate.ExecuteIfBound(bSuccess, GetShouldKeepBackfillAlive());
					}
			));
		}
		else
		{
			Delegate.ExecuteIfBound(false, GetShouldKeepBackfillAlive());
		}
	}
	else
	{
		// stop the timer if no active session and instance
		Delegate.ExecuteIfBound(false, false);
	}
}

void URH_GameInstanceSessionSubsystem::TerminateBackfill()
{
	UE_LOG(LogRHSession, Log, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	if (!ActiveSessionState.bIsBackfillTerminated)
	{
		ActiveSessionState.bIsBackfillTerminated = true;

		// attempt to delete the backfill request if able to
		auto* ActiveSession = GetActiveSession();
		if (ActiveSession != nullptr)
		{
			ActiveSession->DeleteBackfill();
		}
	}
}

ARH_OnlineBeaconHost* URH_GameInstanceSessionSubsystem::CreateBeaconHost(UWorld* pWorld, uint32 Port, bool bShutdownWorldNetDriver)
{
	if (pWorld == nullptr)
	{
		return nullptr;
	}

	if (bShutdownWorldNetDriver)
	{
		GEngine->ShutdownWorldNetDriver(pWorld);
	}

	auto* pBeaconHost = pWorld->SpawnActor<ARH_OnlineBeaconHost>();

	// change port to specified port
	pBeaconHost->ListenPort = Port;
	pBeaconHost->InitHost();

	// fire delegates to allow registration of handler objects
	{
		SCOPED_NAMED_EVENT(RallyHere_BroadcastBeaconCreated, FColor::Purple);
		OnBeaconCreated.Broadcast(pBeaconHost);
		BLUEPRINT_OnBeaconCreated.Broadcast(pBeaconHost);
	}

	pBeaconHost->PauseBeaconRequests(false);

	return pBeaconHost;
}

void URH_GameInstanceSessionSubsystem::SyncToSession(URH_JoinedSession* SessionInfo, const FRH_GameInstanceSessionSyncBlock& InDelegate)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	// swap our session data for the update
	DesiredSession = SessionInfo;

	FRH_GameInstanceSessionSyncBlock Delegate = InDelegate;

	// if we are transitioning to a session, emit analytics events
	if (SessionInfo != nullptr)
	{
		// notify analytics that we are starting to join a session
		EmitJoinInstanceStartedEvent(DesiredSession);

		// wrapper the delegate to fire the completed analytics event to match the started event
		Delegate = FRH_GameInstanceSessionSyncDelegate::CreateWeakLambda(this, [this, InDelegate](URH_JoinedSession* Session, bool bSuccess, const FString& Error)
			{
				// notify analytics that we are done joining a session
				EmitJoinInstanceCompletedEvent(DesiredSession, bSuccess, Error);

				// fire delegate
				InDelegate.ExecuteIfBound(Session, bSuccess, Error);
			});
	}

	const FRHAPI_InstanceInfo* newInstanceData = DesiredSession != nullptr ? DesiredSession->GetInstanceData() : nullptr;

	// if we are in a session, and we do not want to be, start leaving (regardless of destination)
	auto pOldActiveSession = GetActiveSession();
	if (pOldActiveSession != nullptr && pOldActiveSession != DesiredSession)
	{
		// leave instance flow will call join flow on the desired session
		StartLeaveInstanceFlow(false, true, Delegate);
	}
	// if we have a session to join and are not in one
	else if (pOldActiveSession == nullptr && DesiredSession != nullptr)
	{
		StartJoinInstanceFlow(Delegate);
	}
	// we are already in the correct instance
	else
	{
		check(pOldActiveSession == DesiredSession);
		Delegate.ExecuteIfBound(DesiredSession, true, TEXT("Already in session"));
	}
}

bool URH_GameInstanceSessionSubsystem::IsReadyToJoinInstance(const URH_JoinedSession* Session, bool bLog) const
{
	FString LogLine;
	bool bIsReady = IsReadyToJoinInstanceWithReason(Session, LogLine);
	if (bLog && LogLine.Len() > 0)
	{
		UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *LogLine);
	}
	return bIsReady;
}

bool URH_GameInstanceSessionSubsystem::IsReadyToJoinInstanceWithReason(const URH_JoinedSession* Session, FString& Error) const
{
	if (Session->IsActive())
	{
		// session is already active, cannot join it
		Error = FString::Printf(TEXT("[%s] - Session already active"), ANSI_TO_TCHAR(__FUNCTION__));
		return false;
	}

	const auto* Instance = Session->GetInstanceData();
	if (Instance == nullptr)
	{
		// session has no instance to join
		Error = FString::Printf(TEXT("[%s] - Session has no instance"), ANSI_TO_TCHAR(__FUNCTION__));
		return false;
	}

	// todo - ensure all local players are in the session
	// see if host player id is in the list of local players
	UGameInstance* pGameInstance = GetGameInstanceSubsystem()->GetGameInstance();

	const auto LocalPlayers = pGameInstance->GetLocalPlayers();
	for (auto LP : LocalPlayers)
	{
		auto pLPSubsystem = LP->GetSubsystem<URH_LocalPlayerSubsystem>();
		if (pLPSubsystem != nullptr && !pLPSubsystem->GetSessionSubsystem()->IsInSession(Session->GetSessionId()))
		{
			// someone is not in the session
			FGuid playerId = FGuid();
			RH_GetPlayerIdFromLocalPlayer(LP, &playerId);
			Error = FString::Printf(TEXT("[%s] - player %s not in session"), ANSI_TO_TCHAR(__FUNCTION__), *playerId.ToString());
			return false;
		}
	}

	auto pWorldContext = pGameInstance->GetWorldContext();

	if (IsLocallyHostedInstance(*Instance))
	{
		FURL hostURL;
		if (GenerateHostURL(Session, pWorldContext->LastURL, hostURL) && hostURL.Valid && hostURL.Map.Len() > 0)
		{
		}
		else
		{
			Error = FString::Printf(TEXT("[%s] - Locally hosted session cannot generated host URL"), ANSI_TO_TCHAR(__FUNCTION__));
			return false;
		}
	}
	else
	{
		// specifically call out joinable state errors
		if (Instance->GetJoinStatus() != ERHAPI_InstanceJoinableStatus::Joinable)
		{
			Error = FString::Printf(TEXT("[%s] - Instance is not in joinable state"), ANSI_TO_TCHAR(__FUNCTION__));
			return false;
		}

		FURL JoinURL;
		if (!GenerateJoinURL(Session, pWorldContext->LastURL, JoinURL))
		{
			Error = FString::Printf(TEXT("[%s] - Could not generate join URL"), ANSI_TO_TCHAR(__FUNCTION__));
			return false;
		}
	}

	return true;
}

const FRHAPI_InstanceInfo* URH_GameInstanceSessionSubsystem::GetInstance() const
{
	if (GetActiveSession() != nullptr)
	{
		return GetActiveSession()->GetSessionData().GetInstanceOrNull();
	}

	return nullptr;
}

bool URH_GameInstanceSessionSubsystem::IsLocallyHostedInstance(const FRHAPI_InstanceInfo& Instance) const
{
	// determine whether a local player is host player
	if (IsRunningDedicatedServer())
	{
		// TEMP DISABLED WHILE INSTANCE REGISTRATION IS BEING FINALIZED
		//check(Instance.HostType == ERHAPI_HostType::Dedicated);
		return true;
	}
	else if (Instance.HostType == ERHAPI_HostType::Player)
	{
		// see if host player id is in the list of local players
		UGameInstance* pGameInstance = GetGameInstanceSubsystem()->GetGameInstance();
		if (pGameInstance != nullptr)
		{
			const TArray<ULocalPlayer*> LocalPlayers = pGameInstance->GetLocalPlayers();
			for (auto player : LocalPlayers)
			{
				FGuid playerId;
				if (RH_GetPlayerIdFromLocalPlayer(player, &playerId)
					&& playerId == Instance.GetHostPlayerUuid())
				{
					return true;
				}
			}
		}
	}

	return false;
}

bool URH_GameInstanceSessionSubsystem::IsPlayerLocal(const FRHAPI_SessionPlayer& Player) const
{
	// see if host player id is in the list of local players
	const UGameInstance* pGameInstance = GetGameInstanceSubsystem()->GetGameInstance();
	if (pGameInstance != nullptr)
	{
		const TArray<ULocalPlayer*> LocalPlayers = pGameInstance->GetLocalPlayers();
		for (const auto LocalPlayer : LocalPlayers)
		{
			FGuid PlayerId;
			if (RH_GetPlayerIdFromLocalPlayer(LocalPlayer, &PlayerId)
				&& PlayerId == Player.PlayerUuid)
			{
				return true;
			}
		}
	}

	return false;
}

bool URH_GameInstanceSessionSubsystem::StartJoinInstanceFlow(const FRH_GameInstanceSessionSyncBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	if (DesiredSession == nullptr)
	{
		Delegate.ExecuteIfBound(DesiredSession, false, TEXT("Session does not exist"));
		return false;
	}
	if (DesiredSession->GetSessionData().GetInstanceOrNull() == nullptr)
	{
		Delegate.ExecuteIfBound(DesiredSession, false, TEXT("Instance does not exist"));
		return false;
	}
	else if (!IsReadyToJoinInstance(DesiredSession, true))
	{
		Delegate.ExecuteIfBound(DesiredSession, false, TEXT("Client not ready to join instance"));
		return false;
	}

	const FRHAPI_Session& Session = DesiredSession->GetSessionData();
	const FRHAPI_InstanceInfo& Instance = DesiredSession->GetSessionData().GetInstance();

	UE_LOG(LogRallyHereIntegration, Log, TEXT("Starting join of Instance under Session %s"), *Session.SessionId);

	// kick travel with flags
	UGameInstance* pGameInstance = GetGameInstanceSubsystem()->GetGameInstance();
	check(pGameInstance != nullptr);	// if this is somehow nullptr, this object should not exist, and we are in a very broken state

	FWorldContext* pWorldContext = pGameInstance->GetWorldContext();
	check(pWorldContext != nullptr && pWorldContext->World() != nullptr);	// if we are somehow travelling without a world context, we are in a broken state, and should not have gotten to this point

	if (IsLocallyHostedInstance(Instance))
	{
		FURL hostURL;
		if (GenerateHostURL(DesiredSession, pWorldContext->LastURL, hostURL) && hostURL.Valid && hostURL.Map.Len() > 0)
		{
			UE_LOG(LogRallyHereIntegration, Log, TEXT("Setting travel to %s"), *hostURL.ToString());

			// set state now before we start travel (which may fail in line)
			SetActiveSession(DesiredSession);

			// store the active session before travelling, in case it gets changed during travel.  We want to make sure we execute the delegate with the correct session reference
			auto ActiveSession = GetActiveSession();

			const bool bTravelStarted = HostTravel(pWorldContext->World(), hostURL);
			
			Delegate.ExecuteIfBound(ActiveSession, bTravelStarted, TEXT("Travel Started"));
			
			return true;
		}
		else
		{
			UE_LOG(LogRallyHereIntegration, Warning, TEXT("Could not host session because URL could not be generated correctly"));

			StartLeaveInstanceFlow(false, false, Delegate);
			return false;
		}
	}

	FURL JoinURL;
	if (GenerateJoinURL(DesiredSession, pWorldContext->LastURL, JoinURL))
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("Setting travel to %s"), *JoinURL.ToString());

		// set state now before we start travel (which may fail in line)
		SetActiveSession(DesiredSession);

		// store the active session before travelling, in case it gets changed during travel.  We want to make sure we execute the delegate with the correct session reference
		auto ActiveSession = GetActiveSession();

		bool bTravelStarted = ClientTravel(pWorldContext->World(), JoinURL);

		Delegate.ExecuteIfBound(GetActiveSession(), bTravelStarted, TEXT("Travel started"));
		return true;
	}
	else
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("Could not join session because URL could not be generated correctly"));
	}

	Delegate.ExecuteIfBound(DesiredSession, false, TEXT("Could not generate URL to join"));

	return false;
}

bool URH_GameInstanceSessionSubsystem::HostTravel(UWorld* pWorld, const FURL& HostURL)
{
	auto ActiveSession = GetActiveSession();
	check(ActiveSession != nullptr);
	
	// set status to pending before starting travel (it will run asyncnrhonously on the http thread while travelling)
	FRHAPI_InstanceInfoUpdate InstanceInfo = ActiveSession->GetInstanceUpdateInfoDefaults();
	InstanceInfo.SetJoinStatus(ERHAPI_InstanceJoinableStatus::Pending);
	InstanceInfo.SetVersion(URH_JoinedSession::GetClientVersionForSession());
	ActiveSession->UpdateInstanceInfo(InstanceInfo);

	return pWorld->ServerTravel(HostURL.ToString(false), true, false);
}

bool URH_GameInstanceSessionSubsystem::ClientTravel(UWorld* pWorld, const FURL& JoinURL)
{
	FString JoinURLString;
	{
		// since we allow hostnames, which parse incorrectly in the engine when using the default port, temporarily change the default port so taht we can generate the URL properly but contain the default port
		TGuardValue<int32> PortGuard(FURL::UrlConfig.DefaultPort, -1); // DefaultPort is a signed in, this should never match, causing it to always be emitted into the string
		JoinURLString = JoinURL.ToString(true);
	}

	GEngine->SetClientTravel(pWorld, *JoinURLString, TRAVEL_Absolute);

	return true;
}

void URH_GameInstanceSessionSubsystem::StartLeaveInstanceFlow(bool bAlreadyDisconnected, bool bCheckDesired, const FRH_GameInstanceSessionSyncBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	// kick travel to default map
	const UGameInstance* pGameInstance = GetGameInstanceSubsystem()->GetGameInstance();
	check(pGameInstance != nullptr);	// if this is somehow nullptr, this object should not exist, and we are in a very broken state

	auto ActiveSession = GetActiveSession();
	if (ActiveSession != nullptr && IsLocallyHostedSession(ActiveSession))
	{
		// instance info updates are not really properly using optional flags, so get a default object and pass it
		FRHAPI_InstanceInfoUpdate InstanceInfo = ActiveSession->GetInstanceUpdateInfoDefaults();

		// host has left the world
		InstanceInfo.SetJoinStatus(ERHAPI_InstanceJoinableStatus::Closed);

		ActiveSession->UpdateInstanceInfo(InstanceInfo);
	}

	// since we need to catch cases where we disconnected from a session without using the normal leave flow, route other disconnects through here but prevent recursion
	if (!bAlreadyDisconnected)
	{
		GEngine->HandleDisconnect(pGameInstance->GetWorld(), pGameInstance->GetWorld()->GetNetDriver());
	}

	EmitLeaveInstanceEvent(ActiveSession);

	// clear out active session.
	if (ActiveSession != nullptr)
	{
		SetActiveSession(nullptr);
	}

	if (bCheckDesired && DesiredSession != nullptr)
	{
		StartJoinInstanceFlow(Delegate);
	}
	else
	{
		Delegate.ExecuteIfBound(DesiredSession, true, TEXT("Travelled to null or did not want to travel after leaving a session"));
	}
}

// quick analytics hooks
template<typename EventType>
void EmitEventToAllProvidersOnce(UGameInstance* pGameInstance, const EventType& Event)
{
	const auto pGameInstanceSubsystem = pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
	TSharedPtr<IAnalyticsProvider> pGameInstanceProvider = nullptr;
	if (pGameInstanceSubsystem != nullptr)
	{
		pGameInstanceProvider = pGameInstanceSubsystem->GetAnalyticsProvider();
	}

	// emit to the shared provider if it exists
	if (pGameInstanceProvider.IsValid())
	{
		Event.EmitTo(pGameInstanceSubsystem->GetAnalyticsProvider());
	}

	// emit analytics update to all local players
	if (pGameInstance != nullptr)
	{
		const auto LocalPlayers = pGameInstance->GetLocalPlayers();
		for (auto LP : LocalPlayers)
		{
			auto pLPSubsystem = LP->GetSubsystem<URH_LocalPlayerSubsystem>();
			if (pLPSubsystem != nullptr && pLPSubsystem->GetAnalyticsProvider())
			{
				// do not re-emit to the game instance provider if its shared
				auto Provider = pLPSubsystem->GetAnalyticsProvider();
				if (Provider != pGameInstanceProvider)
				{
					Event.EmitTo(pLPSubsystem->GetAnalyticsProvider());
				}
			}
		}
	}
}

void URH_GameInstanceSessionSubsystem::EmitJoinInstanceStartedEvent(const URH_JoinedSession* Session) const
{
	UGameInstance* pGameInstance = GetGameInstanceSubsystem()->GetGameInstance();
	const auto* Instance = Session != nullptr ? Session->GetInstanceData() : nullptr;

	TOptional<FString> SessionId = Session != nullptr ? Session->GetSessionId() : TOptional<FString>();
	TOptional<FString> InstanceId = Session != nullptr && Session->GetInstanceData() != nullptr ? Session->GetInstanceData()->GetInstanceId() : TOptional<FString>();

	// if we have a session owner, use their bound instance id if it is set, as it is more accurate in case instance is swapped out
    auto SessionOwner = Session != nullptr ? Session->GetSessionOwner() : nullptr;
    InstanceId = SessionOwner != nullptr && SessionOwner->GetBoundInstanceId().IsSet() ? SessionOwner->GetBoundInstanceId() : InstanceId;
	
	{
		RHStandardEvents::FInstanceJoinStartEvent Event;
		
		Event.SessionId = SessionId;
		if (InstanceId.IsSet())
		{
			Event.InstanceId = InstanceId.GetValue();
		}

		if (Instance != nullptr)
		{
			// borrowed from IsReadyToJoinInstance() to minimally generate URLs
			auto pWorldContext = pGameInstance->GetWorldContext();

			if (IsLocallyHostedInstance(*Instance))
			{
				FURL hostURL;
				if (GenerateHostURL(Session, pWorldContext->LastURL, hostURL) && hostURL.Valid && hostURL.Map.Len() > 0)
				{
					Event.ConnectionString = hostURL.ToString(false);
				}
			}
			else
			{
				FURL JoinURL;
				if (GenerateJoinURL(Session, pWorldContext->LastURL, JoinURL))
				{
					Event.ConnectionString = JoinURL.ToString(false);
				}
			}

		}

		EmitEventToAllProvidersOnce(pGameInstance, Event);
	}

	
}

void URH_GameInstanceSessionSubsystem::EmitJoinInstanceCompletedEvent(const URH_JoinedSession* Session, bool bSuccess, const FString& Error) const
{
	UGameInstance* pGameInstance = GetGameInstanceSubsystem()->GetGameInstance();
	
	TOptional<FString> SessionId = Session != nullptr ? Session->GetSessionId() : TOptional<FString>();
	TOptional<FString> InstanceId = Session != nullptr && Session->GetInstanceData() != nullptr ? Session->GetInstanceData()->GetInstanceId() : TOptional<FString>();

	// if we have a session owner, use their bound instance id if it is set, as it is more accurate in case instance is swapped out
	auto SessionOwner = Session != nullptr ? Session->GetSessionOwner() : nullptr;
	InstanceId = SessionOwner != nullptr && SessionOwner->GetBoundInstanceId().IsSet() ? SessionOwner->GetBoundInstanceId() : InstanceId;
	TOptional<FGuid> PlayerUuid = SessionOwner != nullptr ? SessionOwner->GetPlayerUuid() : TOptional<FGuid>();
	
	{
		RHStandardEvents::FInstanceJoinCompleteEvent Event;
		Event.SessionId = SessionId;
		Event.InstanceId = InstanceId;
		Event.IsSuccess = bSuccess;
		Event.Reason = Error;

		EmitEventToAllProvidersOnce(pGameInstance, Event);
	}

	if (SessionId.IsSet())
	{
		FRHAPI_CreateAuditRequest Request;
		Request.SetSessionId(SessionId.GetValue());
		if (InstanceId.IsSet())
		{
			Request.SetInstanceId(InstanceId.GetValue());
		}
		if (PlayerUuid.IsSet() && PlayerUuid->IsValid())
		{
			Request.SetPlayerUuid(PlayerUuid.GetValue());
		}

		// make an event name that is recognizable and informative
		FString EventName = FString::Printf(TEXT("instance_join_%s"), bSuccess ? TEXT("success") : TEXT("failed"));
		if (!Error.IsEmpty())
		{
			EventName += TEXT(": ") + Error;
		}

		Request.SetEventName(EventName.Left(100)); // make sure it will fit in the field length on the API

		Session->EmitAuditEvent(Request);
	}
}

void URH_GameInstanceSessionSubsystem::EmitLeaveInstanceEvent(const URH_JoinedSession* Session, const FString& Reason) const
{
	UGameInstance* pGameInstance = GetGameInstanceSubsystem()->GetGameInstance();
	
	TOptional<FString> SessionId = Session != nullptr ? Session->GetSessionId() : TOptional<FString>();
	TOptional<FString> InstanceId = Session != nullptr && Session->GetInstanceData() != nullptr ? Session->GetInstanceData()->GetInstanceId() : TOptional<FString>();

	// if we have a session owner, use their bound instance id if it is set, as it is more accurate in case instance is swapped out
	auto SessionOwner = Session != nullptr ? Session->GetSessionOwner() : nullptr;
	InstanceId = SessionOwner != nullptr && SessionOwner->GetBoundInstanceId().IsSet() ? SessionOwner->GetBoundInstanceId() : InstanceId;
	TOptional<FGuid> PlayerUuid = SessionOwner != nullptr ? SessionOwner->GetPlayerUuid() : TOptional<FGuid>();
	
	{
		RHStandardEvents::FInstanceLeftEvent Event;
		Event.SessionId = SessionId;
		Event.InstanceId = InstanceId;
		Event.Reason = Reason;

		EmitEventToAllProvidersOnce(pGameInstance, Event);
	}

	if (SessionId.IsSet())
	{
		FRHAPI_CreateAuditRequest Request;
		Request.SetSessionId(SessionId.GetValue());
		if (InstanceId.IsSet())
		{
			Request.SetInstanceId(InstanceId.GetValue());
		}
		if (PlayerUuid.IsSet() && PlayerUuid->IsValid())
		{
			Request.SetPlayerUuid(PlayerUuid.GetValue());
		}

		// make an event name that is recognizable and informative
		FString EventName = FString::Printf(TEXT("instance_leave"));
		if (!Reason.IsEmpty())
		{
			EventName += TEXT(": ") + Reason;
		}

		Request.SetEventName(EventName.Left(100)); // make sure it will fit in the field length on the API

		Session->EmitAuditEvent(Request);
	}
}