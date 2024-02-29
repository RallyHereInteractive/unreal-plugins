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

void URH_GameInstanceSessionSubsystem::OnMapLoadComplete(UWorld* World)
{
	const UGameInstance* pGameInstance = GetGameInstanceSubsystem()->GetGameInstance();
	check(pGameInstance != nullptr);	// if this is somehow nullptr, this object should not exist, and we are in a very broken state

	const FWorldContext* pWorldContext = pGameInstance->GetWorldContext();
	if (pWorldContext == nullptr || pWorldContext->World() != World)
	{
		// not for our world
		return;
	}

	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	auto ActiveSession = GetActiveSession();
	if (ActiveSession != nullptr)
	{
		// this can happen if a map load fails to create the UWorld
		if (World == nullptr)
		{
			// in this case, the engine should abort the load and load a new map with the ?closed or ?failed flags, handled below.  We will handle it in that case, as too many things depend on the UWorld reference (rather than the Context)
			return;
		}

		const FURL& URL = World->URL;

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

		if (IsLocallyHostedSession(ActiveSession))
		{
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
				auto* NetDriver = World->GetNetDriver();
				if (NetDriver != nullptr && NetDriver->IsServer() && NetDriver->GetSocketSubsystem() != nullptr && World->URL.Port > 0)
				{
					bool bCanBind = false;
					const TSharedRef<FInternetAddr> LocalIp = NetDriver->GetSocketSubsystem()->GetLocalHostAddr(*GLog, bCanBind);
					if (LocalIp->IsValid()) // validity check for the address not the shared ref
					{
						const auto LocalIPModified = LocalIp->Clone();
						// world URL should have the port that was opened for listen
						LocalIPModified->SetPort(World->URL.Port);

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


			// if it is a beacon, convert world to beacon mode
			if (ActiveSession && ActiveSession->IsBeaconSession())
			{
				CreateBeaconHost(World, World->URL.Port, true);
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

				ActiveSession->UpdateInstanceInfo(InstanceInfo);
			}
			else
			{
				UE_LOG(LogRallyHereIntegration, Error, TEXT("Session %d could not find a valid connection string on the host"));
				StartLeaveInstanceFlow();
			}

		}
	}
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
		OldSession->SetWatchingPlayers(false); // TODO - maybe should be incrementing/decrementing watch counter?
		OldSession = nullptr;

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

		if (Settings->bAutoCloseMatchOnSessionInactive)
		{
			// Send a match update that the match is now in the closed state
			if (MatchSubsystem != nullptr && MatchSubsystem->HasActiveMatchId())
			{
				// send an update with the close state and end time
				FRHAPI_MatchRequest UpdateRequest;
				UpdateRequest.SetEndTimestamp(FDateTime::UtcNow());
				UpdateRequest.SetState(ERHAPI_MatchState::Closed);

				// if we can calculate a duration, do so.  Grab the cached match data since it should have been cached at least once on creation
				FRHAPI_MatchWithPlayers OldMatch;
				if (MatchSubsystem->GetMatch(MatchSubsystem->GetActiveMatchId(), OldMatch))
				{
					const auto StartTime = OldMatch.GetStartTimestampOrNull();
					if (StartTime != nullptr)
					{
						const auto Duration = FDateTime::UtcNow() - *StartTime;
						UpdateRequest.SetDurationSeconds(Duration.GetTotalSeconds());
					}
				}

				MatchSubsystem->UpdateMatch(MatchSubsystem->GetActiveMatchId(), UpdateRequest);

				// clear out the active match id
				MatchSubsystem->SetActiveMatchId(FString());
			}
		}
	}

	// clear transient flags for new tracking
	ActiveSessionState.ResetState();

	if (JoinedSession != nullptr)
	{
		// set the new active session
		check(!JoinedSession->IsActive());
		ActiveSessionState.Session = JoinedSession;

		auto*& ActiveSession = ActiveSessionState.Session;

		JoinedSession->SetActive(true);
		JoinedSession->SetWatchingPlayers(true);

		// if this instance is locally hosted, set up host specific logic
		if (ActiveSession->GetInstanceData() != nullptr && IsLocallyHostedInstance(*ActiveSession->GetInstanceData()))
		{

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
								if (PollControl && Resp.IsSuccessful())
								{
									float NewInterval = Resp.Content.CadenceSeconds;
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
								if (PollControl && Resp.IsSuccessful())
								{
									const auto CadenceSeconds = Resp.Content.Timeout;
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

			Event.EmitTo(Provider.Get());
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
		for (auto Client : pWorld->NetDriver->ClientConnections)
		{
			if (Client->PlayerId == NewPlayer)
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
		Event.EmitTo(Provider.Get());
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
		if (pMatchSubsystem != nullptr && pMatchSubsystem->HasActiveMatchId() && Settings->bAutoAddConnectedPlayersToMatches)
		{
			FRHAPI_MatchPlayerRequest MatchPlayer;

			MatchPlayer.SetPlayerUuid(PlayerContext->RHPlayerId);
			MatchPlayer.SetJoinedMatchTimestamp(PlayerContext->JoinedTime);

			pMatchSubsystem->UpdateMatchPlayer(pMatchSubsystem->GetActiveMatchId(), PlayerContext->RHPlayerId, MatchPlayer);
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
		Event.EmitTo(Provider.Get());
	}

	// update the match player
	if (PlayerContext != nullptr)
	{
		auto Settings = GetDefault<URH_IntegrationSettings>();
		auto pMatchSubsystem = GetGameInstanceSubsystem()->GetMatchSubsystem();
		if (pMatchSubsystem != nullptr && pMatchSubsystem->HasActiveMatchId() && Settings->bAutoAddConnectedPlayersToMatches)
		{
			FRHAPI_MatchPlayerRequest MatchPlayer;
			MatchPlayer.SetPlayerUuid(PlayerContext->RHPlayerId);
			MatchPlayer.SetLeftMatchTimestamp(PlayerContext->LeaveTime);
			MatchPlayer.SetDurationSeconds(PlayerContext->DurationSeconds);

			pMatchSubsystem->UpdateMatchPlayer(pMatchSubsystem->GetActiveMatchId(), PlayerContext->RHPlayerId, MatchPlayer);
		}
	}
}

void URH_GameInstanceSessionSubsystem::CreateMatchForSession(const URH_JoinedSession* Session) const
{
	const auto* Settings = GetDefault<URH_IntegrationSettings>();
	auto* pMatchSubsystem = GetGameInstanceSubsystem()->GetMatchSubsystem();

	const auto* InstanceData = Session->GetInstanceData();

	// Send a match create request to the match subsystem
	if (pMatchSubsystem != nullptr)
	{
		// send an update with initial data satte
		FRHAPI_MatchRequest UpdateRequest;
		UpdateRequest.SetStartTimestamp(FDateTime::UtcNow());
		UpdateRequest.SetState(ERHAPI_MatchState::Pending);

		// set the allocation id
		{
			if (InstanceData != nullptr)
			{
				TArray<FRHAPI_MatchAllocation> Allocations;
				{
					FRHAPI_MatchAllocation NewAllocation;
					NewAllocation.SetAllocationId(InstanceData->GetInstanceId());
					Allocations.Add(NewAllocation);
				}
				UpdateRequest.SetAllocations(Allocations);
			}
		}

		// set the session id
		{
			TArray<FRHAPI_MatchSession> Sessions;
			{
				FRHAPI_MatchSession NewSession;
				NewSession.SetSessionId(Session->GetSessionId());

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
		if (InstanceData != nullptr)
		{
			TArray<FRHAPI_MatchInstance> Instances;
			{
				FRHAPI_MatchInstance NewInstance;
				
				NewInstance.SetInstanceId(InstanceData->GetInstanceId());

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
		pMatchSubsystem->CreateMatch(UpdateRequest, true);
	}
}

bool URH_GameInstanceSessionSubsystem::GetShouldKeepInstanceHealthAlive_Implementation() const
{
	return true;
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
		&&	IsLocallyHostedInstance(*ActiveSession->GetInstanceData())
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
	if (ActiveSession == nullptr || ActiveSession->GetInstanceData() == nullptr)
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

	// notify analytics that we are starting to join a session
	EmitJoinInstanceStartedEvent(DesiredSession);

	// wrapper the delegate to fire the completed analytics event to match the started event
	FRH_GameInstanceSessionSyncDelegate Delegate = FRH_GameInstanceSessionSyncDelegate::CreateWeakLambda(this, [this, InDelegate](URH_JoinedSession* Session, bool bSuccess, const FString& Error)
		{
			// notify analytics that we are done joining a session
			EmitJoinInstanceCompletedEvent(DesiredSession, bSuccess, Error);

			// fire delegate
			InDelegate.ExecuteIfBound(Session, bSuccess, Error);
		});

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
	if (Session->IsActive())
	{
		// session is already active, cannot join it
		UE_CLOG(bLog, LogRallyHereIntegration, Verbose, TEXT("[%s] - Session already active"), ANSI_TO_TCHAR(__FUNCTION__));
		return false;
	}

	const auto* Instance = Session->GetInstanceData();
	if (Instance == nullptr)
	{
		// session has no instance to join
		UE_CLOG(bLog, LogRallyHereIntegration, Verbose, TEXT("[%s] - Session has no instance"), ANSI_TO_TCHAR(__FUNCTION__));
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
			UE_CLOG(bLog, LogRallyHereIntegration, Verbose, TEXT("[%s] - player %s not in session"), ANSI_TO_TCHAR(__FUNCTION__), *playerId.ToString());
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
			UE_CLOG(bLog, LogRallyHereIntegration, Verbose, TEXT("[%s] - Locally hosted session cannot generated host URL"), ANSI_TO_TCHAR(__FUNCTION__));
			return false;
		}
	}
	else
	{
		// specifically call out joinable state errors
		if (Instance->GetJoinStatus() != ERHAPI_InstanceJoinableStatus::Joinable)
		{
			UE_CLOG(bLog, LogRallyHereIntegration, Verbose, TEXT("[%s] - Instance is not in joinable state"), ANSI_TO_TCHAR(__FUNCTION__));
			return false;
		}

		FURL JoinURL;
		if (!GenerateJoinURL(Session, pWorldContext->LastURL, JoinURL))
		{
			UE_CLOG(bLog, LogRallyHereIntegration, Verbose, TEXT("[%s] - Could not generate join URL"), ANSI_TO_TCHAR(__FUNCTION__));
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

			// now that the active session has been set, grab a reference to it for correctness
			auto ActiveSession = GetActiveSession();

			// set status to pending before starting travel (it will run asyncnrhonously on the http thread while travelling)
			FRHAPI_InstanceInfoUpdate InstanceInfo = ActiveSession->GetInstanceUpdateInfoDefaults();
			InstanceInfo.SetJoinStatus(ERHAPI_InstanceJoinableStatus::Pending);
			InstanceInfo.SetVersion(URH_JoinedSession::GetClientVersionForSession());
			ActiveSession->UpdateInstanceInfo(InstanceInfo);

			bool bTravelStarted = pWorldContext->World()->ServerTravel(hostURL.ToString(false), true, false);

			if (bTravelStarted)
			{
				Delegate.ExecuteIfBound(ActiveSession, true, TEXT("Travel Started"));
			}
			else
			{
				Delegate.ExecuteIfBound(ActiveSession, false, TEXT("Failed to start travel"));
			}
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

		FString JoinURLString;
		{
			// since we allow hostnames, which parse incorrectly in the engine when using the default port, temporarily change the default port so taht we can generate the URL properly but contain the default port
			TGuardValue<int32> PortGuard(FURL::UrlConfig.DefaultPort, -1); // DefaultPort is a signed in, this should never match, causing it to always be emitted into the string
			JoinURLString = JoinURL.ToString(true);
		}

		GEngine->SetClientTravel(pWorldContext->World(), *JoinURLString, TRAVEL_Absolute);

		Delegate.ExecuteIfBound(GetActiveSession(), true, TEXT("Travel started"));
		return true;
	}
	else
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("Could not join session because URL could not be generated correctly"));
	}

	Delegate.ExecuteIfBound(DesiredSession, false, TEXT("Could not generate URL to join"));

	return false;
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

void URH_GameInstanceSessionSubsystem::MarkInstanceFubar(const FString& Reason, const FRH_GenericSuccessWithErrorBlock& Delegate)
{
	if (ActiveSessionState.Session != nullptr && !ActiveSessionState.bHasBeenMarkedFubar)
	{
		ActiveSessionState.bHasBeenMarkedFubar = true;
		typedef RallyHereAPI::Traits_ReportFubar BaseType;

		BaseType::Request Request = {};
		Request.AuthContext = GetAuthContext();
		Request.SessionId = ActiveSessionState.Session->GetSessionId();
		Request.InstanceFubar.SetRegion(ActiveSessionState.Session->GetSessionData().GetRegionId());
		//Request.InstanceFubar.SetMatchmakingProfileId()
		Request.InstanceFubar.SetError(Reason);

		auto* Instance = ActiveSessionState.Session->GetInstanceData();
		if (Instance != nullptr)
		{
			Request.InstanceFubar.SetInstanceId(Instance->GetInstanceId());

			if (Instance->HostType == ERHAPI_HostType::Player)
			{
				Request.InstanceFubar.SetInstanceSourceProvider(ERHAPI_InstanceSourceProvider::Player);
			}
			else
			{
				// not sure how to determine other host types
			}
		}

		auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
			BaseType::Delegate(),
			Delegate,
			GetDefault<URH_IntegrationSettings>()->SessionInstanceMarkFubarPriority
		);

		Helper->Start(RH_APIs::GetSessionsAPI(), Request);
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
		Event.EmitTo(pGameInstanceSubsystem->GetAnalyticsProvider().Get());
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
					Event.EmitTo(pLPSubsystem->GetAnalyticsProvider().Get());
				}
			}
		}
	}
}

void URH_GameInstanceSessionSubsystem::EmitJoinInstanceStartedEvent(const URH_JoinedSession* Session) const
{
	RHStandardEvents::FInstanceJoinStartEvent Event;

	UGameInstance* pGameInstance = GetGameInstanceSubsystem()->GetGameInstance();

	if (Session != nullptr)
	{
		Event.SessionId = Session->GetSessionId();
		const auto* Instance = Session->GetInstanceData();
		if (Instance != nullptr)
		{
			Event.InstanceId = Instance->GetInstanceId();

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
	}

	EmitEventToAllProvidersOnce(pGameInstance, Event);
}

void URH_GameInstanceSessionSubsystem::EmitJoinInstanceCompletedEvent(const URH_JoinedSession* Session, bool bSuccess, const FString& Error) const
{
	RHStandardEvents::FInstanceJoinCompleteEvent Event;

	UGameInstance* pGameInstance = GetGameInstanceSubsystem()->GetGameInstance();

	if (Session != nullptr)
	{
		Event.SessionId = Session->GetSessionId();
		const auto* Instance = Session->GetInstanceData();
		if (Instance != nullptr)
		{
			Event.InstanceId = Instance->GetInstanceId();
		}
	}

	Event.IsSuccess = bSuccess;
	Event.Reason = Error;

	EmitEventToAllProvidersOnce(pGameInstance, Event);
}

void URH_GameInstanceSessionSubsystem::EmitLeaveInstanceEvent(const URH_JoinedSession* Session, const FString& Reason) const
{
	RHStandardEvents::FInstanceLeftEvent Event;

	UGameInstance* pGameInstance = GetGameInstanceSubsystem()->GetGameInstance();

	if (Session != nullptr)
	{
		Event.SessionId = Session->GetSessionId();
		const auto* Instance = Session->GetInstanceData();
		if (Instance != nullptr)
		{
			Event.InstanceId = Instance->GetInstanceId();
		}
	}

	Event.Reason = Reason;

	EmitEventToAllProvidersOnce(pGameInstance, Event);
}