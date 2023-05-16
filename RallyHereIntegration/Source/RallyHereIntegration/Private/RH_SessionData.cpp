
#include "RH_SessionData.h"
#include "RH_SessionHelpers.h"
#include "RH_Integration.h"
#include "TimerManager.h"

// needed for offline sessions to mimic some API behavior
#include "RH_LocalPlayerSubsystem.h"
#include "RH_LocalPlayerSessionSubsystem.h"

DEFINE_LOG_CATEGORY(LogRHSession);

URH_SessionView::URH_SessionView(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

TMap<FString, FString> URH_SessionView::GetBrowserData() const
{
	const auto Session = GetSessionData();
	if (const auto Browser = Session.GetBrowserOrNull())
	{
		return Browser->GetCustomData(TMap<FString, FString>());
	}
	return TMap<FString, FString>();
}

TMap<FString, FString> URH_SessionView::GetCustomData() const
{
	const auto Session = GetSessionData();
	return Session.GetCustomData(TMap<FString, FString>());
}

bool URH_SessionView::GetCustomDataValue(const FString& Key, FString& Value) const
{
	auto Session = GetSessionData();
	if (const auto CustomData = Session.GetCustomDataOrNull())
	{
		const auto FoundValue = CustomData->Find(Key);
		if (FoundValue)
		{
			Value = *FoundValue;
			return true;
		}
	}
	return false;
}

TMap<FString, FString> URH_SessionView::GetInstanceCustomData() const
{
	auto Session = GetSessionData();
	if (const auto Instance = Session.GetInstanceOrNull())
	{
		return Instance->GetCustomData(TMap<FString, FString>());
	}
	return TMap<FString, FString>();
}

bool URH_SessionView::GetInstanceCustomDataValue(const FString& Key, FString& Value) const
{
	auto Session = GetSessionData();
	if (const auto Instance = Session.GetInstanceOrNull())
	{
		if (const auto CustomData = Instance->GetCustomDataOrNull())
		{
			const auto FoundValue = CustomData->Find(Key);
			if (FoundValue)
			{
				Value = *FoundValue;
				return true;
			}
		}
	}
	return false;
}

void URH_SessionView::ImportAPISession(const FRH_APISessionWithETag& newSessionData, const FRH_SessionTemplate& newTemplate)
{
	// simple copy for now
	SessionData = newSessionData;
	ImportTemplate(newTemplate);

	BLUEPRINT_OnSessionUpdatedDelegate.Broadcast(this);
	OnSessionUpdatedDelegate.Broadcast(this);
}

void URH_SessionView::ImportTemplate(const FRH_SessionTemplate& newTemplate)
{
	Template = newTemplate;
}

void URH_SessionView::Expire(FRH_OnSessionExpiredDelegate Delegate)
{
	UE_LOG(LogRHSession, Log, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());

	Delegate.ExecuteIfBound(this);
}

//////////////////////////////////////////////////////////////////////////////////

URH_InvitedSession::URH_InvitedSession(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

TScriptInterface<IRH_SessionOwnerInterface> URH_InvitedSession::GetSessionOwner() const
{
	return TScriptInterface<IRH_SessionOwnerInterface>(GetOuter());
}

void URH_InvitedSession::Join(FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	URH_OnlineSession::JoinById(GetSessionId(), GetSessionOwner(), Delegate);
}

void URH_InvitedSession::Leave(FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	DoRequestViaHelper<RallyHereAPI::Traits_LeaveSessionByIdSelf>(GetSessionId(), GetSessionOwner(), Delegate);
}

//////////////////////////////////////////////////////////////////////////////////

URH_JoinedSession::URH_JoinedSession(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bIsActive = false;
}

TScriptInterface<IRH_SessionOwnerInterface> URH_JoinedSession::GetSessionOwner() const
{
	return TScriptInterface<IRH_SessionOwnerInterface>(GetOuter());
}

FString URH_JoinedSession::GetClientVersionForSession()
{
	// TODO - make sample provider class that can be overridden at project level, that provides current string and checks compatibility

	// put compatibility and current changelists first, to better conform to SymVer.
	static FString SessionVersion = FString::Printf(TEXT("%d.%d.%d+%s"), FEngineVersion::CompatibleWith().GetChangelist(), FEngineVersion::Current().GetChangelist(), 0, *FEngineVersion::Current().ToString(EVersionComponent::Patch));
	return SessionVersion;
}

ERHAPI_Input URH_JoinedSession::GetClientInputTypeForSession()
{
	// TODO - make sample provider class that can be overridden at project level
#if PLATFORM_DESKTOP
	return ERHAPI_Input::Kbm;
#elif PLATFORM_ANDROID || PLATFORM_IOS
	return ERHAPI_Input::Touch;
#else
	return ERHAPI_Input::Gamepad;
#endif
}

void URH_JoinedSession::ImportAPISession(const FRH_APISessionWithETag& newSessionData, const FRH_SessionTemplate& newTemplate)
{
	// suspend watch since we may be getting a player update
	bool bWasWatchingPlayers = bWatchingPlayers;
	if (bWasWatchingPlayers)
	{
		SetWatchingPlayers(false);
	}

	Super::ImportAPISession(newSessionData, newTemplate);

	// restore watches
	SetWatchingPlayers(bWasWatchingPlayers);
}

void URH_JoinedSession::SetWatchingPlayers(bool bWatch)
{
	if (bWatch != bWatchingPlayers)
	{
		bWatchingPlayers = bWatch;

		auto SessionOwner = GetSessionOwner();
		if (SessionOwner != nullptr)
		{
			auto RHPS = GetSessionOwner()->GetPlayerInfoSubsystem();
			if (RHPS != nullptr)
			{
				if (bWatchingPlayers)
				{
					for (const auto& Team : GetSessionData().Teams)
					{
						for (const auto& Player : Team.Players)
						{
							// request a player info to exist in cache
							auto* PlayerInfo = RHPS->GetOrCreatePlayerInfo(Player.PlayerUuid);
							if (PlayerInfo != nullptr)
							{
								// add watch to presence system
								auto* Presence = PlayerInfo->GetPresence();
								if (Presence != nullptr)
								{
									// bind to listen callback
									Presence->OnPresenceUpdatedDelegate.AddUObject(this, &URH_JoinedSession::OnWatchedPlayerPresenceUpdated);

									// kick a request for an update
									Presence->RequestUpdate();
								}
							}
						}
					}

				}
				else
				{
					// remove watch from presence system
					for (const auto& Team : GetSessionData().Teams)
					{
						for (const auto& Player : Team.Players)
						{
							// request a player info to exist in cache
							auto* PlayerInfo = RHPS->GetOrCreatePlayerInfo(Player.PlayerUuid);
							if (PlayerInfo != nullptr)
							{
								// remove watch to presence system
								auto* Presence = PlayerInfo->GetPresence();
								if (Presence != nullptr)
								{
									// unbind to listen callback
									Presence->OnPresenceUpdatedDelegate.RemoveAll(this);
								}
							}
						}
					}
				}
			}
		}
	}
}

void URH_JoinedSession::Expire(FRH_OnSessionExpiredDelegate Delegate)
{
	// stop watching players
	SetWatchingPlayers(false);

	// call super last, as it will fire delegate
	Super::Expire(Delegate);
}

FRHAPI_SessionUpdate URH_JoinedSession::GetSessionUpdateInfoDefaults() const
{
	auto Session = GetSessionData();

	FRHAPI_SessionUpdate Update;

	Update.SetSiteId(Session.GetSiteId(INDEX_NONE));
	if (Session.GetCustomData(Update.GetCustomData()))
	{
		Update.CustomData_IsSet = true;
	}

	return Update;
}

FRHAPI_InstanceInfoUpdate URH_JoinedSession::GetInstanceUpdateInfoDefaults() const
{
	FRHAPI_InstanceInfoUpdate Update;
	const auto* InstanceData = GetInstanceData();
	if (InstanceData != nullptr)
	{
		if (InstanceData->GetAllocationId(Update.GetAllocationId()))
		{
			Update.AllocationId_IsSet = true;
		}
		
		Update.SetJoinStatus(InstanceData->JoinStatus);
		if (InstanceData->GetJoinParams(Update.GetJoinParams()))
		{
			Update.JoinParams_IsSet = true;
		}
		
		if (InstanceData->GetCustomData(Update.GetCustomData()))
		{
			Update.CustomData_IsSet = true;
		}

		if (InstanceData->GetVersion(Update.GetVersion()))
		{
			Update.Version_IsSet = true;
		}
		else
		{
			Update.SetVersion(GetClientVersionForSession());
		}
	}

	return Update;
}

//////////////////////////////////////////////////////////////////////////////////

URH_OfflineSession::URH_OfflineSession(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void URH_OfflineSession::InvitePlayer(const FGuid& PlayerId, int32 Team, FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	// currently not supported for offline sessions
	Delegate.ExecuteIfBound(false, this);
}

void URH_OfflineSession::KickPlayer(const FGuid& PlayerId, FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	// currently not supported for offline sessions
	Delegate.ExecuteIfBound(false, this);
}

void URH_OfflineSession::SetLeader(const FGuid& PlayerId, FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	// currently not supported for offline sessions
	Delegate.ExecuteIfBound(false, this);
}

void URH_OfflineSession::ChangePlayerTeam(const FGuid& PlayerUuid, int32 Team, FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	FRH_APISessionWithETag UpdateWrapper(SessionData);
	auto& Update = UpdateWrapper.Data;
	
	bool bFoundPlayer = false;
	FRHAPI_SessionPlayer Player;

	// remove player from old team
	for (int i=0; i < Update.Teams.Num(); ++i)
	{
		auto& SessionTeam = Update.Teams[i];
		for (auto& TeamPlayer : SessionTeam.Players)
		{
			if (TeamPlayer.PlayerUuid == PlayerUuid)
			{
				if (Team == i)
				{
					// already on the correct team
					Delegate.ExecuteIfBound(true, this);
					return;
				}
				else
				{
					bFoundPlayer = true;
					// copy data to stack so we can insert it later
					Player = TeamPlayer;
					SessionTeam.Players.RemoveAtSwap(i);

					break;
				}
			}
		}
	}

	if (bFoundPlayer)
	{
		// make sure we have enough teams
		if (Team >= Update.Teams.Num())
		{
			Update.Teams.AddDefaulted(Team - Update.Teams.Num() + 1);
		}
		// insert them into their new team
		Update.Teams[Team].Players.Add(Player);
	}

	ImportSessionUpdateToAllPlayers(UpdateWrapper);

	Delegate.ExecuteIfBound(true, this);
}

void URH_OfflineSession::Leave(bool bFromOSS, FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	// for now, empty player list to remove all players from the session, then import to clean up
	FRH_APISessionWithETag UpdateWrapper(SessionData);
	auto& Update = UpdateWrapper.Data;
	Update.Teams.Empty();
	ImportSessionUpdateToAllPlayers(UpdateWrapper);

	Delegate.ExecuteIfBound(true, this);
}

void URH_OfflineSession::RequestInstance(const FRHAPI_InstanceStartupParams& InstanceStartupParams, ERHAPI_HostType HostType, const FString& InstanceId, const TMap<FString, FString>& CustomData, FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());
	if (GetSessionData().GetInstanceOrNull())
	{
		UE_LOG(LogRHSession, Log, TEXT("[%s] - Failed because instance already exists"), ANSI_TO_TCHAR(__FUNCTION__));
		Delegate.ExecuteIfBound(false, this);
		return;
	}

	URH_LocalPlayerSessionSubsystem* pLPSubsystem = Cast<URH_LocalPlayerSessionSubsystem>(GetSessionOwner().GetObject());

	if (pLPSubsystem != nullptr)
	{
		FRH_APISessionWithETag UpdateWrapper(SessionData);
		auto& Update = UpdateWrapper.Data;

		{
			FRHAPI_Instance Instance = {};

			/* Unique ID */
			Instance.SetInstanceId(InstanceId);
			/* Type of the host */
			Instance.HostType = ERHAPI_HostType::Player;
			/* Player UUID of the host, if the host is not a dedicated server */
			Instance.SetHostPlayerUuid(pLPSubsystem->GetLocalPlayerSubsystem()->GetPlayerUuid());
			/* Is the instance joinable at this time? */
			Instance.JoinStatus = ERHAPI_InstanceJoinableStatus::Pending;
			/* Parameters to join the instance */
			//Instance.JoinParams;
			/* Parameters used by the instance to startup.  For UE5 this will contain the map and gamemode */
			//Instance.InstanceStartupParams;

			/* Product Client Version number.  Used for compatibility checking with players */
			Instance.SetVersion(URH_JoinedSession::GetClientVersionForSession());
			/* Time the Instance was created, in UTC */
			Instance.Created = FDateTime::UtcNow();
			/* instance-defined custom data */
			Instance.SetCustomData(CustomData);

			Update.SetInstance(Instance);
		}

		ImportSessionUpdateToAllPlayers(UpdateWrapper);

		Delegate.ExecuteIfBound(true, this);
	}
	else
	{
		UE_LOG(LogRHSession, Log, TEXT("[%s] - Failed because owner was not a local player subsystem"), ANSI_TO_TCHAR(__FUNCTION__));

		Delegate.ExecuteIfBound(false, this);
	}
}
void URH_OfflineSession::EndInstance(FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());
	if (!GetSessionData().GetInstanceOrNull())
	{
		UE_LOG(LogRHSession, Log, TEXT("[%s] - Failed because instance does not exist"), ANSI_TO_TCHAR(__FUNCTION__));
		Delegate.ExecuteIfBound(false, this);
		return;
	}

	FRH_APISessionWithETag UpdateWrapper(SessionData);
	auto& Update = UpdateWrapper.Data;

	Update.ClearInstance();

	ImportSessionUpdateToAllPlayers(UpdateWrapper);

	Delegate.ExecuteIfBound(true, this);
}

void URH_OfflineSession::StartMatch(FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());
	if (GetSessionData().GetMatchOrNull())
	{
		UE_LOG(LogRHSession, Log, TEXT("[%s] - Failed because match already exists"), ANSI_TO_TCHAR(__FUNCTION__));
		Delegate.ExecuteIfBound(false, this);
		return;
	}

	FRH_APISessionWithETag UpdateWrapper(SessionData);
	auto& Update = UpdateWrapper.Data;

	{
		FRHAPI_Match Match = {};

		/* Unique ID */
		Match.MatchId = FGuid::NewGuid().ToString();
		/* Time the match was created, in UTC */
		Match.Created = FDateTime::UtcNow();
		/* instance-defined custom data */
		Match.ClearCustomData();

		Update.SetMatch(Match);
	}

	ImportSessionUpdateToAllPlayers(UpdateWrapper);

	Delegate.ExecuteIfBound(true, this);
}
void URH_OfflineSession::EndMatch(FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());
	if (!GetSessionData().GetMatchOrNull())
	{
		UE_LOG(LogRHSession, Log, TEXT("[%s] - Failed because match does not exist"), ANSI_TO_TCHAR(__FUNCTION__));
		Delegate.ExecuteIfBound(false, this);
		return;
	}

	FRH_APISessionWithETag UpdateWrapper(SessionData);
	auto& Update = UpdateWrapper.Data;

	Update.ClearMatch();

	ImportSessionUpdateToAllPlayers(UpdateWrapper);

	Delegate.ExecuteIfBound(true, this);
}

void URH_OfflineSession::UpdateSessionInfo(const FRHAPI_SessionUpdate& SessionInfoUpdate, FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());
	
	FRH_APISessionWithETag UpdateWrapper(SessionData);
	auto& Update = UpdateWrapper.Data;

	{
		int32 SiteId;
		if (SessionInfoUpdate.GetSiteId(SiteId) && SiteId != INDEX_NONE)
		{
			Update.SetSiteId(SessionInfoUpdate.GetSiteId());
		}
		else
		{
			Update.ClearSiteId();
		}
		
		if (SessionInfoUpdate.GetCustomData(Update.GetCustomData()))
		{
			Update.CustomData_IsSet = true;
		}
	}

	ImportSessionUpdateToAllPlayers(UpdateWrapper);

	Delegate.ExecuteIfBound(true, this);
}


void URH_OfflineSession::UpdateInstanceInfo(const FRHAPI_InstanceInfoUpdate& InstanceInfoUpdate, FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());
	if (!GetSessionData().GetInstanceOrNull())
	{
		UE_LOG(LogRHSession, Log, TEXT("[%s] - Failed because instance does not exist"), ANSI_TO_TCHAR(__FUNCTION__));
		Delegate.ExecuteIfBound(false, this);
		return;
	}

	FRH_APISessionWithETag UpdateWrapper(SessionData);
	auto& Update = UpdateWrapper.Data;

	{
		Update.Instance_IsSet = true;
		InstanceInfoUpdate.GetJoinStatus(Update.GetInstance().JoinStatus);
		if (InstanceInfoUpdate.GetJoinParams(Update.GetInstance().GetJoinParams()))
		{
			Update.GetInstance().JoinParams_IsSet = true;
		}

		if (InstanceInfoUpdate.GetVersion(Update.GetInstance().GetVersion()))
		{
			Update.GetInstance().Version_IsSet = true;
		}

		if (InstanceInfoUpdate.GetCustomData(Update.GetInstance().GetCustomData()))
		{
			Update.GetInstance().CustomData_IsSet = true;
		}
	}

	ImportSessionUpdateToAllPlayers(UpdateWrapper);

	Delegate.ExecuteIfBound(true, this);
}

void URH_OfflineSession::UpdateBrowserInfo(bool bEnable, const TMap<FString, FString>& CustomData, FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());
	
	FRH_APISessionWithETag UpdateWrapper(SessionData);
	auto& Update = UpdateWrapper.Data;

	if (bEnable)
	{
		FRHAPI_Browser BrowserInfo = GetSessionData().GetBrowser(FRHAPI_Browser());
		BrowserInfo.SetCustomData(CustomData);

		Update.SetBrowser(BrowserInfo);
	}
	else
	{
		Update.ClearBrowser();
	}

	ImportSessionUpdateToAllPlayers(UpdateWrapper);

	Delegate.ExecuteIfBound(true, this);
}

// this is necessary right now as each player stores session data separately
void URH_OfflineSession::ImportSessionUpdateToAllPlayers(const FRH_APISessionWithETag& Update)
{
	if (const URH_LocalPlayerSessionSubsystem* pLPSubsystem = Cast<URH_LocalPlayerSessionSubsystem>(GetSessionOwner().GetObject()))
	{
		if (const auto LPOwner = pLPSubsystem->GetLocalPlayerSubsystem()->GetLocalPlayer())
		{
			if (const auto GameInstance = LPOwner->GetGameInstance())
			{
				auto& LocalPlayers = GameInstance->GetLocalPlayers();

				for (const auto LP : LocalPlayers)
				{
					auto RHLPSubsystem = LP->GetSubsystem<URH_LocalPlayerSubsystem>();
					if (RHLPSubsystem && RHLPSubsystem->GetSessionSubsystem())
					{
						RHLPSubsystem->GetSessionSubsystem()->ImportAPISession(Update);
					}
				}
			}
		}
	}
}


//////////////////////////////////////////////////////////////////////////////////

URH_OnlineSession::URH_OnlineSession(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void URH_OnlineSession::ImportAPISession(const FRH_APISessionWithETag& newSessionData, const FRH_SessionTemplate& newTemplate)
{
	Super::ImportAPISession(newSessionData, newTemplate);

	// reset our poll timer - simplest way is to stop and start the clock again
	if (Poller.IsValid())
	{
		Poller->DeferPollTimer();
	}
}

void URH_OnlineSession::Expire(FRH_OnSessionExpiredDelegate Delegate)
{
	// stop polling for a session we are in the process of shutting down
	StopPolling();
	if (Poller.IsValid())
	{
		Poller.Reset();
	}

	// call super last, as it will fire delegate
	Super::Expire(Delegate);
}

void URH_OnlineSession::StartPolling()
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());

	if (!Poller.IsValid())
	{
		Poller = FRH_PollControl::CreateAutoPoller();
	}

	static FName SessionPollTimerName(TEXT("SingleSession"));

	Poller->StartPoll(FRH_PollFunc::CreateUObject(this, &URH_OnlineSession::PollForUpdate), SessionPollTimerName);
}

void URH_OnlineSession::StopPolling()
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());

	if (Poller.IsValid())
	{
		Poller->StopPoll();
	}
}

void URH_OnlineSession::PollForUpdate(const FRH_PollCompleteFunc& Delegate)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());

	auto AuthContext = GetSessionOwner()->GetSessionAuthContext();
	if (!AuthContext.IsValid() || !AuthContext->IsLoggedIn())
	{
		Delegate.ExecuteIfBound(false, true);
		return;
	}

	FRH_OnSessionUpdatedDelegate CompletionDelegate = FRH_OnSessionUpdatedDelegate::CreateWeakLambda(this, [this, Delegate](bool bSuccess, URH_JoinedSession* Session)
	{
		Delegate.ExecuteIfBound(bSuccess, true);
	});

	auto Helper = MakeShared<FRH_SessionPollHelper>(MakeWeakInterface(GetSessionOwner()), GetSessionId());
	Helper->Start();
}

void URH_OnlineSession::ForcePollForUpdate()
{
	UE_LOG(LogRHSession, Log, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());
	if (Poller.IsValid())
	{
		Poller->ExecutePoll();
	}
	else
	{
		PollForUpdate(FRH_PollCompleteFunc());
	}
}

void URH_OnlineSession::CreateOrJoinByType(const FRH_SessionCreateParams& CreateParams, TScriptInterface<IRH_SessionOwnerInterface> SessionOwner, FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	UE_LOG(LogRHSession, Log, TEXT("[%s] - %s@%d"), ANSI_TO_TCHAR(__FUNCTION__), *CreateParams.SessionType, CreateParams.SiteId);
	auto Helper = MakeShared<FRH_SessionCreateOrJoinByTypeHelper>(MakeWeakInterface(SessionOwner), CreateParams, Delegate);
	Helper->Start();
}

void URH_OnlineSession::JoinQueue(const FString& QueueId, const TArray<FString> MatchmakingTags, const FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	// todo - check if player is already in queue?  Data may be old or in flight

	typedef RallyHereAPI::Traits_JoinQueue BaseType;
	auto SessionId = GetSessionId();
	auto SessionOwner = GetSessionOwner();
	UE_LOG(LogRHSession, Log, TEXT("[%s::%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *BaseType::Name, *SessionId);
	BaseType::Request Request;
	Request.AuthContext = SessionOwner->GetSessionAuthContext();
	Request.SessionId = GetSessionId();
	Request.QueueJoinRequest.QueueId = QueueId;
	if (MatchmakingTags.Num() > 0)
	{
		Request.QueueJoinRequest.SetAdditionalTags(MatchmakingTags);
	}

	auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(SessionOwner), SessionId, Delegate);
	Helper->Start(Request);
}
void URH_OnlineSession::LeaveQueue(const FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	DoRequestViaHelper<RallyHereAPI::Traits_LeaveQueue>(GetSessionId(), GetSessionOwner(), Delegate);
}

void URH_OnlineSession::PollSingleSession(const FString& SessionId, TScriptInterface<IRH_SessionOwnerInterface> SessionOwner, FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *SessionId);

	auto Helper = MakeShared<FRH_SessionPollHelper>(MakeWeakInterface(SessionOwner), SessionId, Delegate);
	Helper->Start();
}

void URH_OnlineSession::PollAllSessions(TScriptInterface<IRH_SessionOwnerInterface> SessionOwner, bool bTemplatesOnly, FRH_OnPollAllSessionsDelegate Delegate)
{
	UE_LOG(LogRHSession, Log, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	auto Helper = MakeShared<FRH_SessionPollAllHelper>(MakeWeakInterface(SessionOwner), bTemplatesOnly, Delegate);
	Helper->Start();
}

void URH_OnlineSession::JoinById(const FString& SessionId, TScriptInterface<IRH_SessionOwnerInterface> SessionOwner, FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	typedef RallyHereAPI::Traits_JoinSessionByIdSelf BaseType;
	UE_LOG(LogRHSession, Log, TEXT("[%s::%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *BaseType::Name, *SessionId);
	BaseType::Request Request;
	Request.AuthContext = SessionOwner->GetSessionAuthContext();
	Request.SessionId = SessionId;
	Request.SelfSessionPlayerUpdateRequest.ClientVersion = GetClientVersionForSession();

	const auto OSS = SessionOwner->GetOSS();
	Request.SelfSessionPlayerUpdateRequest.ClientSettings.PlatformId = RH_GetPlatformIdFromOSSName(OSS ? OSS->GetSubsystemName() : NAME_None).Get(ERHAPI_PlatformID::Anon);
	Request.SelfSessionPlayerUpdateRequest.ClientSettings.Input = GetClientInputTypeForSession();

	auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(SessionOwner), SessionId, Delegate);
	Helper->Start(Request);
}

void URH_OnlineSession::InvitePlayer(const FGuid& PlayerUuid, int32 Team, FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	// TODO - check that players is not already in this session?

	typedef RallyHereAPI::Traits_UpdateSessionPlayerByUuid BaseType;
	auto SessionId = GetSessionId();
	auto SessionOwner = GetSessionOwner();
	UE_LOG(LogRHSession, Log, TEXT("[%s::%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *BaseType::Name, *SessionId);
	BaseType::Request Request;
	Request.AuthContext = SessionOwner->GetSessionAuthContext();
	Request.SessionId = GetSessionId();
	Request.PlayerUuid = PlayerUuid;
	Request.SessionPlayerUpdateRequest.SetStatus(ERHAPI_SessionPlayerStatus::Invited);
	Request.SessionPlayerUpdateRequest.SetTeamId(Team);

	auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(SessionOwner), SessionId, Delegate);
	Helper->Start(Request);
}

void URH_OnlineSession::KickPlayer(const FGuid& PlayerUuid, FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	// TODO - check that players is already in this session?

	typedef RallyHereAPI::Traits_KickPlayerFromSessionByUuid BaseType;
	auto SessionId = GetSessionId();
	auto SessionOwner = GetSessionOwner();
	UE_LOG(LogRHSession, Log, TEXT("[%s::%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *BaseType::Name, *SessionId);
	BaseType::Request Request;
	Request.AuthContext = SessionOwner->GetSessionAuthContext();
	Request.SessionId = GetSessionId();
	Request.PlayerUuid = PlayerUuid;

	auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(SessionOwner), SessionId, Delegate);
	Helper->Start(Request);
}

void URH_OnlineSession::SetLeader(const FGuid& PlayerUuid, FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	// TODO - check that players is in this session?

	typedef RallyHereAPI::Traits_UpdateSessionPlayerByUuid BaseType;
	auto SessionId = GetSessionId();
	auto SessionOwner = GetSessionOwner();
	UE_LOG(LogRHSession, Log, TEXT("[%s::%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *BaseType::Name, *SessionId);
	BaseType::Request Request;
	Request.AuthContext = SessionOwner->GetSessionAuthContext();
	Request.SessionId = GetSessionId();
	Request.PlayerUuid = PlayerUuid;
	Request.SessionPlayerUpdateRequest.SetStatus(ERHAPI_SessionPlayerStatus::Leader);

	auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(SessionOwner), SessionId, Delegate);
	Helper->Start(Request);
}

void URH_OnlineSession::ChangePlayerTeam(const FGuid& PlayerUuid, int32 Team, FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	// TODO - check that players is in this session?

	typedef RallyHereAPI::Traits_UpdateSessionPlayerByUuid BaseType;
	auto SessionId = GetSessionId();
	auto SessionOwner = GetSessionOwner();
	UE_LOG(LogRHSession, Log, TEXT("[%s::%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *BaseType::Name, *SessionId);
	BaseType::Request Request;
	Request.AuthContext = SessionOwner->GetSessionAuthContext();
	Request.SessionId = GetSessionId();
	Request.PlayerUuid = PlayerUuid;
	Request.SessionPlayerUpdateRequest.SetTeamId(Team);

	auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(SessionOwner), SessionId, Delegate);
	Helper->Start(Request);
}

void URH_OnlineSession::Leave(bool bFromOSS, FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	DoRequestViaHelper<RallyHereAPI::Traits_LeaveSessionByIdSelf>(GetSessionId(), GetSessionOwner(), Delegate);
}

void URH_OnlineSession::RequestInstance(const FRHAPI_InstanceStartupParams& InstanceStartupParams, ERHAPI_HostType HostType, const FString& InstanceId, const TMap<FString, FString>& CustomData, FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	typedef RallyHereAPI::Traits_HandleInstanceRequest BaseType;
	auto SessionId = GetSessionId();
	auto SessionOwner = GetSessionOwner();
	UE_LOG(LogRHSession, Log, TEXT("[%s::%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *BaseType::Name, *SessionId);
	BaseType::Request Request;
	Request.AuthContext = SessionOwner->GetSessionAuthContext();
	Request.SessionId = GetSessionId();
	Request.InstanceRequest.SetInstanceStartupParams(InstanceStartupParams);
	Request.InstanceRequest.SetInstanceId(InstanceId);
	Request.InstanceRequest.HostType = HostType;
	Request.InstanceRequest.SetCustomData(CustomData);

	auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(SessionOwner), SessionId, Delegate);
	Helper->Start(Request);
}
void URH_OnlineSession::EndInstance(FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	DoRequestViaHelper<RallyHereAPI::Traits_EndInstance>(GetSessionId(), GetSessionOwner(), Delegate);
}

void URH_OnlineSession::StartMatch(FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	DoRequestViaHelper<RallyHereAPI::Traits_StartMatch>(GetSessionId(), GetSessionOwner(), Delegate);
}
void URH_OnlineSession::EndMatch(FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	DoRequestViaHelper<RallyHereAPI::Traits_EndMatch>(GetSessionId(), GetSessionOwner(), Delegate);
}

void URH_OnlineSession::UpdateSessionInfo(const FRHAPI_SessionUpdate& Update, FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	typedef RallyHereAPI::Traits_UpdateSessionById BaseType;
	BaseType::Request Request;
	Request.AuthContext = GetSessionOwner()->GetSessionAuthContext();
	Request.SessionId = GetSessionId();
	Request.SessionUpdate = Update;	

	auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(GetSessionOwner()), GetSessionId(), Delegate);
	Helper->Start(Request);
}

void URH_OnlineSession::UpdateInstanceInfo(const FRHAPI_InstanceInfoUpdate& Update, FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	typedef RallyHereAPI::Traits_UpdateInstanceInfo BaseType;
	BaseType::Request Request;
	Request.AuthContext = GetSessionOwner()->GetSessionAuthContext();
	Request.SessionId = GetSessionId();
	Request.InstanceInfoUpdate = Update;

	auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(GetSessionOwner()), GetSessionId(), Delegate);
	Helper->Start(Request);
}

void URH_OnlineSession::UpdateBrowserInfo(bool bEnable, const TMap<FString, FString>& CustomData, FRH_OnSessionUpdatedDelegateBlock Delegate)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());

	if (bEnable)
	{
		typedef RallyHereAPI::Traits_UpdateBrowserInfo BaseType;
		BaseType::Request Request;
		Request.AuthContext = GetSessionOwner()->GetSessionAuthContext();
		Request.SessionId = GetSessionId();
		Request.BrowserInfo.SetCustomData(CustomData);

		const auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(GetSessionOwner()), GetSessionId(), Delegate);
		Helper->Start(Request);
	}
	else
	{
		DoRequestViaHelper<RallyHereAPI::Traits_DeleteBrowserInfo>(GetSessionId(), GetSessionOwner(), Delegate);
	}
}

//////////////////////////////////////////////////////////////////////////////////

TSharedPtr<RallyHereAPI::FAuthContext> FRH_SessionHelper::GetAuthContext() const
{
	if (SessionOwner.IsValid())
	{
		return SessionOwner->GetSessionAuthContext();
	}

	return nullptr;
}

void FRH_SessionModifierHelper::DoSessionLookup()
{
	// Read session data
	RallyHereAPI::Traits_GetSessionById::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.SessionId = SessionId;

#if SESSIONS_SUPPORT_ETAGS
	if (SessionOwner.IsValid())
	{
		Request.IfNoneMatch = SessionOwner->GetETagForSession(SessionId);
	}
#endif

	HttpRequest = RallyHereAPI::Traits_GetSessionById::DoCall(RH_APIs::GetSessionAPI(), Request, RallyHereAPI::Traits_GetSessionById::Delegate::CreateSP(this, &FRH_SessionModifierHelper::OnSessionLookup));
	if (!HttpRequest)
	{
		Failed(TEXT("Could not create http request to lookup session"));
	}
}

void FRH_SessionModifierHelper::OnSessionLookup(const RallyHereAPI::Traits_GetSessionById::Response& Resp)
{
	HttpRequest = nullptr;
	if (Resp.IsSuccessful() && SessionOwner.IsValid())
	{
		SessionOwner->ImportAPISession(FRH_APISessionWithETag(Resp.Content, Resp.ETag));
		RHSession = Cast<URH_JoinedSession>(SessionOwner->GetSessionById(SessionId));

		Completed(RHSession.IsValid());	// add or update can fail in some edge cases, try to be graceful
	}
	else if (Resp.GetHttpResponseCode() == (EHttpResponseCodes::NotModified))
	{
		RHSession = Cast<URH_JoinedSession>(SessionOwner->GetSessionById(SessionId));
		Completed(RHSession.IsValid());	// add or update can fail in some edge cases, try to be graceful
	}
	else
	{
		if (Resp.GetHttpResponseCode() == EHttpResponseCodes::NotFound && Resp.GetJsonResponse().IsValid())
		{
			// this could be due to the API being down, or due to the session being missing, so check further
			const TSharedPtr<FJsonObject>* JsonObject = nullptr;
			FString ErrorCodeDesc;
			if (Resp.GetJsonResponse()->TryGetObject(JsonObject) && JsonObject != nullptr && JsonObject->Get()->TryGetStringField(TEXT("error_code"), ErrorCodeDesc))
			{
				if (ErrorCodeDesc == TEXT("session_not_found")) // todo - const somewhere?
				{
					auto* ExistingSession = Cast<URH_JoinedSession>(SessionOwner->GetSessionById(SessionId));
					if (ExistingSession != nullptr)
					{
						ExistingSession->BLUEPRINT_OnSessionNotFoundDelegate.Broadcast(ExistingSession);
						ExistingSession->OnSessionNotFoundDelegate.Broadcast(ExistingSession);
					}
					Failed(TEXT("Session Not Found"));
					return;
				}
			}
				
			Failed(TEXT("Lookup Failed"));
		}
		else
		{
			Failed(TEXT("Lookup Failed"));
		}
	}
}