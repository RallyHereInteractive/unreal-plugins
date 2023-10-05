
#include "RH_SessionData.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "RH_SessionHelpers.h"
#include "RH_Integration.h"
#include "TimerManager.h"
#include "Misc/EngineVersion.h"
#include "Engine/LocalPlayer.h"
#include "Engine/GameInstance.h"
#include "RH_PlatformSessionSyncer.h"

#include "RH_GameInstanceSubsystem.h"
#include "RH_GameInstanceSessionSubsystem.h"

// needed for offline sessions to mimic some API behavior
#include "RH_LocalPlayerSubsystem.h"
#include "RH_LocalPlayerSessionSubsystem.h"

DEFINE_LOG_CATEGORY(LogRHSession);

URH_SessionView::URH_SessionView(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

TMap<FString, FString> URH_SessionView::GetBrowserCustomData() const
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

void URH_SessionView::ImportAPISession(const FRH_APISessionWithETag& newSessionData, const FRHAPI_SessionTemplate& newTemplate)
{
	typedef TMap<FGuid, FRH_SessionMemberStatusState> MemberStateList;
	auto RecordMemberStates = [](const FRHAPI_Session& MemberSessionData, MemberStateList& MemberStates)
	{
		const auto& Teams = MemberSessionData.GetTeams();
		for (int32 i = 0; i < Teams.Num(); ++i)
		{
			const auto& Team = Teams[i];
			for (const auto& Player : Team.GetPlayers())
			{
				FRH_SessionMemberStatusState State;
				State.bIsValid = true;
				State.TeamId = i;
				State.PlayerUuid = Player.GetPlayerUuid();
				State.Status = Player.GetStatus();

				MemberStates.Add(State.PlayerUuid, State);
			}
		}
	};

	auto PadMemberStates = [](MemberStateList& From, MemberStateList& To)
	{
		for (const auto& Pair : From)
		{
			if (!To.Contains(Pair.Key))
			{
				FRH_SessionMemberStatusState State;
				State.bIsValid = false;
				State.PlayerUuid = Pair.Key;
				To.Add(State.PlayerUuid, State);
			}
		}
	};

	bool bRecordStates = OnSessionMemberStateChangedDelegate.IsBound() || BLUEPRINT_OnSessionMemberStateChangedDelegate.IsBound();

	// record states before we overwrite old data
	MemberStateList OldMemberStates, NewMemberStates;
	if (bRecordStates)
	{
		// record the memberhsip states of the old and new data
		RecordMemberStates(SessionData.Data, OldMemberStates);
		RecordMemberStates(newSessionData.Data, NewMemberStates);

		// pad out the above by adding invalid entries for missing players, to make comparing easier
		PadMemberStates(OldMemberStates, NewMemberStates);
		PadMemberStates(NewMemberStates, OldMemberStates);
	}

	// simple copy for now
	SessionData = newSessionData;
	ImportTemplate(newTemplate);

	{
		SCOPED_NAMED_EVENT(RallyHere_BroadcastSessionUpdated, FColor::Purple);
		BLUEPRINT_OnSessionUpdatedDelegate.Broadcast(this);
		OnSessionUpdatedDelegate.Broadcast(this);
	}

	if (bRecordStates)
	{
		// look for state differences and dispatch notifications
		for (const auto& Pair : NewMemberStates)
		{
			const auto& NewValue = Pair.Value;
			const auto& OldValue = OldMemberStates.FindChecked(Pair.Key);
			if (NewValue != OldValue)
			{
				SCOPED_NAMED_EVENT(RallyHere_BroadcastMemberStateChanged, FColor::Purple);
				OnSessionMemberStateChangedDelegate.Broadcast(this, OldValue, NewValue);
				BLUEPRINT_OnSessionMemberStateChangedDelegate.Broadcast(this, OldValue, NewValue);
			}
		}
	}

	// reset our poll timer - simplest way is to stop and start the clock again
	if (Poller.IsValid())
	{
		Poller->DeferPollTimer();
	}
}

void URH_SessionView::ImportTemplate(const FRHAPI_SessionTemplate& newTemplate)
{
	Template = newTemplate;
}

void URH_SessionView::Expire(const FRH_OnSessionExpiredDelegate& Delegate)
{
	UE_LOG(LogRHSession, Log, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());

	// stop polling for a session we are in the process of shutting down
	StopPolling();
	if (Poller.IsValid())
	{
		Poller.Reset();
	}

	Delegate.ExecuteIfBound(this);
}

TScriptInterface<IRH_SessionOwnerInterface> URH_SessionView::GetSessionOwner() const
{
	return TScriptInterface<IRH_SessionOwnerInterface>(GetOuter());
}

void URH_SessionView::StartPolling()
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());

	if (!Poller.IsValid())
	{
		Poller = FRH_PollControl::CreateAutoPoller();
	}

	static FName SessionPollTimerName(TEXT("SingleSession"));

	Poller->StartPoll(FRH_PollFunc::CreateUObject(this, &URH_OnlineSession::PollForUpdate), SessionPollTimerName);
}

void URH_SessionView::StopPolling()
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());

	if (Poller.IsValid())
	{
		Poller->StopPoll();
	}
}

void URH_SessionView::DeferPolling()
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());

	if (Poller.IsValid())
	{
		Poller->DeferPollTimer();
	}
}

float URH_SessionView::GetPollTimeRemaining()
{
	if (Poller.IsValid())
	{
		return Poller->GetTimeRemaining();
	}

	return -1.f;
}

void URH_SessionView::PollForUpdate(const FRH_PollCompleteFunc& Delegate)
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
			// notify poller that execution is done
			Delegate.ExecuteIfBound(bSuccess, true);

			// notify any waiting polls that we are done
			for (auto& Poll : WaitingPolls)
			{
				Poll.Delegate.ExecuteIfBound(bSuccess, false);
			}

			// check if we need to kick off a new poll
			CheckDeferredPolls();
		});

	auto Helper = MakeShared<FRH_SessionPollOnlyHelper>(MakeWeakInterface(GetSessionOwner()), GetSessionId(), CompletionDelegate, GetDefault<URH_IntegrationSettings>()->SessionPollPriority);
	Helper->Start();
}

void URH_SessionView::ForcePollForUpdate(bool bClearEtag)
{
	UE_LOG(LogRHSession, Log, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());
	TOptional<FString> ETag;
	if (bClearEtag)
	{
		ETag = FString();
	}
	else
	{
		ETag = GetETag();
	}
	AddDeferredPoll(FRH_DeferredSessionPoll(FRH_DeferredSessionPoll::Type::Forced, FRH_PollCompleteFunc(), ETag));
}


void URH_SessionView::AddDeferredPoll(const FRH_DeferredSessionPoll& DeferredPoll)
{
	if (DeferredPoll.PollType == FRH_DeferredSessionPoll::Type::Notification)
	{
		// remove any existing notification polls, as this one supercedes them
		for (int i = DeferredPolls.Num() - 1; i >= 0; --i)
		{
			if (DeferredPolls[i].PollType == FRH_DeferredSessionPoll::Type::Notification)
			{
				DeferredPolls.RemoveAt(i);
			}
		}

		if (DeferredPoll.ETag == GetETag())
		{
			// if the ETag matches, we don't need to poll
			return;
		}
	}

	DeferredPolls.Add(DeferredPoll);
	CheckDeferredPolls();
}
void URH_SessionView::CheckDeferredPolls()
{
	// if no polls are deferred, do nothing
	if (DeferredPolls.Num() == 0)
	{
		return;
	}

	// check if poller is active (it will not have a registered delegate if it is not)
	if (Poller.IsValid() && Poller->IsActive())
	{
		// if the poller is executing, wait until it finishes
		if (Poller->IsExecuting())
		{
			return;
		}

		// copy deferred polls into waiting list, which will be notified upon completiong
		WaitingPolls = DeferredPolls;
		DeferredPolls.Empty();

		// treat a poll request with a set but empty etag as a request to clear the ETag before the poll ("our data is outdated")
		for (auto& Poll : WaitingPolls)
		{
			if (Poll.ETag.IsSet() && Poll.ETag.GetValue().IsEmpty())
			{
				// clear the ETag
				SessionData.ETag.Reset();
				break;
			}
		}

		// execute the poll
		Poller->ExecutePoll();
	}
	else
	{
		// copy deferred polls into waiting list, which will be notified upon completiong
		WaitingPolls = DeferredPolls;
		DeferredPolls.Empty();

		// treat a poll request with a set but empty etag as a request to clear the ETag before the poll ("our data is outdated")
		for (auto& Poll : WaitingPolls)
		{
			if (Poll.ETag.IsSet() && Poll.ETag.GetValue().IsEmpty())
			{
				// clear the ETag
				SessionData.ETag.Reset();
				break;
			}
		}

		// manually run poll
		PollForUpdate(FRH_PollCompleteFunc());
	}
}

void URH_SessionView::PollSingleSession(const FString& SessionId, TScriptInterface<IRH_SessionOwnerInterface> SessionOwner, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *SessionId);

	auto Helper = MakeShared<FRH_SessionPollOnlyHelper>(MakeWeakInterface(SessionOwner), SessionId, Delegate, GetDefault<URH_IntegrationSettings>()->SessionPollPriority);
	Helper->Start();
}

void URH_SessionView::PollAllSessions(TScriptInterface<IRH_SessionOwnerInterface> SessionOwner, bool bPollMembership, bool bPollAllSessions, const FRH_OnPollAllSessionsDelegate& Delegate)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	auto Helper = MakeShared<FRH_SessionPollAllHelper>(MakeWeakInterface(SessionOwner), bPollMembership, bPollAllSessions, Delegate, GetDefault<URH_IntegrationSettings>()->SessionPollPriority);
	Helper->Start();
}


//////////////////////////////////////////////////////////////////////////////////

URH_InvitedSession::URH_InvitedSession(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void URH_InvitedSession::Join(const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	URH_OnlineSession::JoinById(GetSessionId(), GetSessionOwner(), Delegate);
}

void URH_InvitedSession::Leave(const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	DoRequestViaHelper<RallyHereAPI::Traits_LeaveSessionByIdSelf>(GetSessionId(), GetSessionOwner(), Delegate, GetDefault<URH_IntegrationSettings>()->SessionLeavePriority);
}

//////////////////////////////////////////////////////////////////////////////////

URH_JoinedSession::URH_JoinedSession(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bIsActive = false;
}

URH_PlatformSessionSyncer* URH_JoinedSession::GetPlatformSyncer() const
{
	return GetSessionOwner()->GetPlatformSyncerByRHSessionId(GetSessionId());
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

void URH_JoinedSession::ImportAPISession(const FRH_APISessionWithETag& newSessionData, const FRHAPI_SessionTemplate& newTemplate)
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

		const auto SessionOwner = GetSessionOwner();
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
							const auto* PlayerInfo = RHPS->GetOrCreatePlayerInfo(Player.PlayerUuid);
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

void URH_JoinedSession::Expire(const FRH_OnSessionExpiredDelegate& Delegate)
{
	// stop watching players
	SetWatchingPlayers(false);

	auto PlatformSyncer = GetPlatformSyncer();
	if (PlatformSyncer != nullptr)
	{
		// wait for platform syncer to clean up before triggering callback
		PlatformSyncer->Cleanup(FSimpleDelegate::CreateWeakLambda(this, [this, Delegate]()
			{
				Super::Expire(Delegate);
			}));
	}
	else
	{
		// call super last, as it will fire delegate
		Super::Expire(Delegate);
	}
}

FRHAPI_SessionUpdate URH_JoinedSession::GetSessionUpdateInfoDefaults() const
{
	auto Session = GetSessionData();

	FRHAPI_SessionUpdate Update;

	Update.SetRegionId(Session.GetRegionId(FString()));
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


AOnlineBeaconClient* URH_JoinedSession::CreateBeacon(ULocalPlayer* Player, TSubclassOf<AOnlineBeaconClient> BeaconClass, const FEncryptionData& EncryptionData)
{
	UE_LOG(LogRHSession, Log, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());

	auto* LPSS = Player != nullptr ? Player->GetSubsystem<URH_LocalPlayerSubsystem>() : nullptr;

	const auto* Instance = GetInstanceData();
	if (Instance != nullptr && LPSS != nullptr && IsBeaconSession())
	{
		// this function intentionally does not check the IsBeacon flag, as that is not necessarily required to work, and mostly is there for optimization purposes
		if (UWorld* World = GEngine->GetWorldFromContextObject(Player, EGetWorldErrorMode::LogAndReturnNull))
		{
			auto* GISS = World->GetGameInstance() != nullptr ? World->GetGameInstance()->GetSubsystem<URH_GameInstanceSubsystem>() : nullptr;
			auto GISession = GISS != nullptr ? GISS->GetSessionSubsystem() : nullptr;

			FURL ConnectURL, TempURL;

			if (GISession != nullptr && GISession->GenerateJoinURL(this, TempURL, ConnectURL))
			{
				ARH_OnlineBeaconClient* Beacon = World->SpawnActor<ARH_OnlineBeaconClient>(BeaconClass);
				if (Beacon != nullptr)
				{
					Beacon->SetEncryptionData(EncryptionData);

					// generate rally here login options
					ARH_OnlineBeaconClient* RHClient = Cast<ARH_OnlineBeaconClient>(Beacon);
					if (RHClient != nullptr)
					{
						FString LoginOptions;
						FString AuthPlayerUuid = LPSS->GetPlayerUuid().ToString();

						LoginOptions += FString::Printf(TEXT("?RHPlayerUuid=%s"), *AuthPlayerUuid);

						if (const auto JoinParams = Instance->GetJoinParamsOrNull())
						{
							if (const auto CustomData = JoinParams->GetCustomDataOrNull())
							{
								if (const FString* SecurityToken = CustomData->Find(RH_SessionCustomDataKeys::SessionSecurityTokenName))
								{
									LoginOptions += FString::Printf(TEXT("?RHSecurityToken=%s"), **SecurityToken);
								}
							}
						}

						RHClient->SetLoginOptions(LoginOptions);
					}

					if (Beacon->InitClient(ConnectURL))
					{
						LastBeacon = Beacon;
						return Beacon;
					}
					else
					{
						UE_LOG(LogRHSession, Warning, TEXT("[%s] - %s Beacon creation failed"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());
						World->DestroyActor(Beacon);
					}
				}
			}
		}
	}

	return nullptr;
}

bool URH_JoinedSession::IsBeaconSession() const
{
	const auto* Instance = GetInstanceData();
	if (Instance != nullptr)
	{
		const auto* StartupParams = Instance->GetInstanceStartupParamsOrNull();
		if (StartupParams != nullptr)
		{
			const auto* CustomData = StartupParams->GetCustomDataOrNull();
			if (CustomData != nullptr)
			{
				auto* Value = CustomData->Find(RH_SessionCustomDataKeys::BeaconFlag);
				if (Value != nullptr)
				{
					return Value->ToBool();
				}
			}
		}
	}
	return false;
}

//////////////////////////////////////////////////////////////////////////////////

URH_OfflineSession::URH_OfflineSession(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void URH_OfflineSession::InvitePlayer(const FGuid& PlayerId, int32 Team, const TMap<FString, FString>& CustomData, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	// currently not supported for offline sessions
	Delegate.ExecuteIfBound(false, this);
}

void URH_OfflineSession::KickPlayer(const FGuid& PlayerId, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	// currently not supported for offline sessions
	Delegate.ExecuteIfBound(false, this);
}

void URH_OfflineSession::SetLeader(const FGuid& PlayerId, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	// currently not supported for offline sessions
	Delegate.ExecuteIfBound(false, this);
}

void URH_OfflineSession::ChangePlayerTeam(const FGuid& PlayerUuid, int32 Team, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
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

void URH_OfflineSession::UpdatePlayerCustomData(const FGuid& PlayerUuid, const TMap<FString, FString>& CustomData, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	FRH_APISessionWithETag UpdateWrapper(SessionData);
	auto& Update = UpdateWrapper.Data;

	for (int i = 0; i < Update.Teams.Num(); ++i)
	{
		auto& SessionTeam = Update.Teams[i];
		for (auto& TeamPlayer : SessionTeam.Players)
		{
			if (TeamPlayer.PlayerUuid == PlayerUuid)
			{
				TeamPlayer.SetCustomData(CustomData);
				ImportSessionUpdateToAllPlayers(UpdateWrapper);
				Delegate.ExecuteIfBound(true, this);
				return;
			}
		}
	}

	Delegate.ExecuteIfBound(false, this);
}

void URH_OfflineSession::Leave(bool bFromOSS, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	// for now, empty player list to remove all players from the session, then import to clean up
	FRH_APISessionWithETag UpdateWrapper(SessionData);
	auto& Update = UpdateWrapper.Data;
	Update.Teams.Empty();
	ImportSessionUpdateToAllPlayers(UpdateWrapper);

	Delegate.ExecuteIfBound(true, this);
}

void URH_OfflineSession::RequestInstance(const FRHAPI_InstanceRequest& InstanceRequest, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
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
			FRHAPI_InstanceInfo Instance = {};

			/* Unique ID */
			if (const auto* InstanceId = InstanceRequest.GetInstanceIdOrNull())
			{
				Instance.SetInstanceId(*InstanceId);
			}
			/* Type of the host */
			Instance.HostType = ERHAPI_HostType::Player;
			/* Player UUID of the host, if the host is not a dedicated server */
			Instance.SetHostPlayerUuid(pLPSubsystem->GetLocalPlayerSubsystem()->GetPlayerUuid());
			/* Is the instance joinable at this time? */
			Instance.JoinStatus = ERHAPI_InstanceJoinableStatus::Pending;
			/* Parameters to join the instance */
			//Instance.JoinParams;
			/* Parameters used by the instance to startup.  For UE5 this will contain the map and gamemode */
			if (const auto* StartupParams = InstanceRequest.GetInstanceStartupParamsOrNull())
			{
				Instance.SetInstanceStartupParams(*StartupParams);
			}

			/* Product Client Version number.  Used for compatibility checking with players */
			Instance.SetVersion(URH_JoinedSession::GetClientVersionForSession());
			/* Time the Instance was created, in UTC */
			Instance.Created = FDateTime::UtcNow();
			/* instance-defined custom data */
			if (const auto* CustomData = InstanceRequest.GetCustomDataOrNull())
			{
				Instance.SetCustomData(*CustomData);
			}

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
void URH_OfflineSession::EndInstance(const FRH_OnSessionUpdatedDelegateBlock& Delegate)
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

void URH_OfflineSession::StartMatch(const FRH_OnSessionUpdatedDelegateBlock& Delegate)
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
		FRHAPI_MatchInfo Match = {};

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
void URH_OfflineSession::EndMatch(const FRH_OnSessionUpdatedDelegateBlock& Delegate)
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

void URH_OfflineSession::UpdateSessionInfo(const FRHAPI_SessionUpdate& SessionInfoUpdate, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());
	
	FRH_APISessionWithETag UpdateWrapper(SessionData);
	auto& Update = UpdateWrapper.Data;

	{
		FString RegionId;
		if (SessionInfoUpdate.GetRegionId(RegionId) && RegionId.Len() > 0)
		{
			Update.SetRegionId(RegionId);
		}
		else
		{
			Update.ClearRegionId();
		}
		
		if (SessionInfoUpdate.GetCustomData(Update.GetCustomData()))
		{
			Update.CustomData_IsSet = true;
		}
	}

	ImportSessionUpdateToAllPlayers(UpdateWrapper);

	Delegate.ExecuteIfBound(true, this);
}


void URH_OfflineSession::UpdateInstanceInfo(const FRHAPI_InstanceInfoUpdate& InstanceInfoUpdate, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
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

void URH_OfflineSession::UpdateBrowserInfo(bool bEnable, const TMap<FString, FString>& CustomData, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());
	
	FRH_APISessionWithETag UpdateWrapper(SessionData);
	auto& Update = UpdateWrapper.Data;

	if (bEnable)
	{
		FRHAPI_BrowserInfo BrowserInfo = GetSessionData().GetBrowser(FRHAPI_BrowserInfo());
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

void URH_OnlineSession::ImportAPISession(const FRH_APISessionWithETag& newSessionData, const FRHAPI_SessionTemplate& newTemplate)
{
	Super::ImportAPISession(newSessionData, newTemplate);
}

void URH_OnlineSession::Expire(const FRH_OnSessionExpiredDelegate& Delegate)
{
	// call super last, as it may fire delegate
	Super::Expire(Delegate);
}

void URH_OnlineSession::CreateOrJoinByType(const FRHAPI_CreateOrJoinRequest& CreateParams, TScriptInterface<IRH_SessionOwnerInterface> SessionOwner, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	UE_LOG(LogRHSession, Log, TEXT("[%s] - %s@%s"), ANSI_TO_TCHAR(__FUNCTION__), *CreateParams.GetSessionType(), *CreateParams.GetRegionId(TEXT("<UNSET>")));
	
	const auto OSS = SessionOwner->GetOSS();

	auto CreateParamsCopy = CreateParams;

	CreateParamsCopy.SetClientVersion(GetClientVersionForSession());
	CreateParamsCopy.ClientSettings.SetPlatform(RH_GetPlatformFromOSSName(OSS ? OSS->GetSubsystemName() : NAME_None).Get(ERHAPI_Platform::Anon));
	CreateParamsCopy.ClientSettings.SetInput(GetClientInputTypeForSession());

	auto Helper = MakeShared<FRH_SessionCreateOrJoinByTypeHelper>(MakeWeakInterface(SessionOwner), CreateParamsCopy, Delegate, GetDefault<URH_IntegrationSettings>()->SessionJoinPriority);
	Helper->Start();
}

void URH_OnlineSession::JoinQueue(const FRHAPI_QueueJoinRequest& JoinRequest, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	// todo - check if player is already in queue?  Data may be old or in flight

	typedef RallyHereAPI::Traits_JoinQueue BaseType;
	auto SessionId = GetSessionId();
	auto SessionOwner = GetSessionOwner();
	UE_LOG(LogRHSession, Log, TEXT("[%s::%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *BaseType::Name, *SessionId);
	BaseType::Request Request;
	Request.AuthContext = SessionOwner->GetSessionAuthContext();
	Request.SessionId = GetSessionId();
	Request.QueueJoinRequest = JoinRequest;

	auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(SessionOwner), SessionId, Delegate, GetDefault<URH_IntegrationSettings>()->SessionJoinPriority);
	Helper->Start(Request);
}
void URH_OnlineSession::LeaveQueue(const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	DoRequestViaHelper<RallyHereAPI::Traits_LeaveQueue>(GetSessionId(), GetSessionOwner(), Delegate, GetDefault<URH_IntegrationSettings>()->SessionLeaveQueuePriority);
}

FRHAPI_SelfSessionPlayerUpdateRequest URH_OnlineSession::GetJoinDetailDefaults(TScriptInterface<IRH_SessionOwnerInterface> SessionOwner)
{
	auto JoinDetails = FRHAPI_SelfSessionPlayerUpdateRequest();

	// ensure JoinDetails have minimum requirements.
	JoinDetails.SetClientVersion(URH_JoinedSession::GetClientVersionForSession());
	auto OSS = SessionOwner->GetOSS();
	JoinDetails.ClientSettings.SetPlatform(RH_GetPlatformFromOSSName(OSS ? OSS->GetSubsystemName() : NAME_None).Get(ERHAPI_Platform::Anon));
	JoinDetails.ClientSettings.SetInput(URH_JoinedSession::GetClientInputTypeForSession());

	return JoinDetails;
}

void URH_OnlineSession::JoinByIdEx(const FString& SessionId, const FRHAPI_SelfSessionPlayerUpdateRequest& JoinDetails, TScriptInterface<IRH_SessionOwnerInterface> SessionOwner, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	typedef RallyHereAPI::Traits_JoinSessionByIdSelf BaseType;
	UE_LOG(LogRHSession, Log, TEXT("[%s::%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *BaseType::Name, *SessionId);

	auto Helper = MakeShared<FRH_SessionJoinByIdHelper>(MakeWeakInterface(SessionOwner), Delegate, GetDefault<URH_IntegrationSettings>()->SessionJoinPriority);
	Helper->Start(SessionId, JoinDetails);
}

void URH_OnlineSession::InvitePlayer(const FGuid& PlayerUuid, int32 Team, const TMap<FString, FString>& CustomData, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
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
	if (CustomData.Num() > 0)
	{
		Request.SessionPlayerUpdateRequest.SetCustomData(CustomData);
	}

	auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(SessionOwner), SessionId, Delegate, GetDefault<URH_IntegrationSettings>()->SessionInvitePriority);
	Helper->Start(Request);
}

void URH_OnlineSession::KickPlayer(const FGuid& PlayerUuid, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
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

	auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(SessionOwner), SessionId, Delegate, GetDefault<URH_IntegrationSettings>()->SessionKickPriority);
	Helper->Start(Request);
}

void URH_OnlineSession::SetLeader(const FGuid& PlayerUuid, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
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

	auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(SessionOwner), SessionId, Delegate, GetDefault<URH_IntegrationSettings>()->SessionLeaderChangePriority);
	Helper->Start(Request);
}

void URH_OnlineSession::ChangePlayerTeam(const FGuid& PlayerUuid, int32 Team, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
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

	auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(SessionOwner), SessionId, Delegate, GetDefault<URH_IntegrationSettings>()->SessionChangeTeamsPriority);
	Helper->Start(Request);
}

void URH_OnlineSession::UpdatePlayerCustomData(const FGuid& PlayerUuid, const TMap<FString, FString>& CustomData, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
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
	Request.SessionPlayerUpdateRequest.SetCustomData(CustomData);

	auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(SessionOwner), SessionId, Delegate, GetDefault<URH_IntegrationSettings>()->SessionChangeTeamsPriority);
	Helper->Start(Request);
}

void URH_OnlineSession::Leave(bool bFromOSS, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	DoRequestViaHelper<RallyHereAPI::Traits_LeaveSessionByIdSelf>(GetSessionId(), GetSessionOwner(), Delegate, GetDefault<URH_IntegrationSettings>()->SessionLeavePriority);
}

void URH_OnlineSession::RequestInstance(const FRHAPI_InstanceRequest& InstanceRequest, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	typedef RallyHereAPI::Traits_CreateInstanceRequest BaseType;
	auto SessionId = GetSessionId();
	auto SessionOwner = GetSessionOwner();
	UE_LOG(LogRHSession, Log, TEXT("[%s::%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *BaseType::Name, *SessionId);
	BaseType::Request Request;
	Request.AuthContext = SessionOwner->GetSessionAuthContext();
	Request.SessionId = GetSessionId();
	Request.InstanceRequest = InstanceRequest;

	auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(SessionOwner), SessionId, Delegate, GetDefault<URH_IntegrationSettings>()->SessionRequestInstancePriority);
	Helper->Start(Request);
}
void URH_OnlineSession::EndInstance(const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	DoRequestViaHelper<RallyHereAPI::Traits_EndInstance>(GetSessionId(), GetSessionOwner(), Delegate, GetDefault<URH_IntegrationSettings>()->SessionEndInstancePriority);
}

void URH_OnlineSession::StartMatch(const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	DoRequestViaHelper<RallyHereAPI::Traits_StartMatch>(GetSessionId(), GetSessionOwner(), Delegate, GetDefault<URH_IntegrationSettings>()->SessionStartMatchPriority);
}
void URH_OnlineSession::EndMatch(const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	DoRequestViaHelper<RallyHereAPI::Traits_EndMatch>(GetSessionId(), GetSessionOwner(), Delegate, GetDefault<URH_IntegrationSettings>()->SessionEndMatchPriority);
}

void URH_OnlineSession::UpdateSessionInfo(const FRHAPI_SessionUpdate& Update, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	typedef RallyHereAPI::Traits_UpdateSessionById BaseType;
	BaseType::Request Request;
	Request.AuthContext = GetSessionOwner()->GetSessionAuthContext();
	Request.SessionId = GetSessionId();
	Request.SessionUpdate = Update;	

	auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(GetSessionOwner()), GetSessionId(), Delegate, GetDefault<URH_IntegrationSettings>()->SessionUpdateSessionInfoPriority);
	Helper->Start(Request);
}

void URH_OnlineSession::UpdateInstanceInfo(const FRHAPI_InstanceInfoUpdate& Update, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	typedef RallyHereAPI::Traits_UpdateInstanceInfo BaseType;
	BaseType::Request Request;
	Request.AuthContext = GetSessionOwner()->GetSessionAuthContext();
	Request.SessionId = GetSessionId();
	Request.InstanceInfoUpdate = Update;

	auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(GetSessionOwner()), GetSessionId(), Delegate, GetDefault<URH_IntegrationSettings>()->SessionUpdateInstanceInfoPriority);
	Helper->Start(Request);
}

void URH_OnlineSession::UpdateBrowserInfo(bool bEnable, const TMap<FString, FString>& CustomData, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());

	if (bEnable)
	{
		typedef RallyHereAPI::Traits_PostBrowserInfo BaseType;
		BaseType::Request Request;
		Request.AuthContext = GetSessionOwner()->GetSessionAuthContext();
		Request.SessionId = GetSessionId();
		Request.BrowserInfo.SetCustomData(CustomData);

		const auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(GetSessionOwner()), GetSessionId(), Delegate, GetDefault<URH_IntegrationSettings>()->SessionUpdateBrowserInfoPriority);
		Helper->Start(Request);
	}
	else
	{
		DoRequestViaHelper<RallyHereAPI::Traits_DeleteBrowserInfo>(GetSessionId(), GetSessionOwner(), Delegate, GetDefault<URH_IntegrationSettings>()->SessionDeleteBrowserInfoPriority);
	}
}
