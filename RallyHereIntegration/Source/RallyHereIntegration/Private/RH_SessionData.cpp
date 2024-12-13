// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

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

#include "RH_PlayerInfoSubsystem.h"
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

bool URH_SessionView::GetPlatformSession(ERHAPI_Platform Platform, FRHAPI_PlatformSession& OutPlatformSession) const
{
	const auto* PlatformSessionArrayPtr = GetSessionData().GetPlatformSessionOrNull();
	if (PlatformSessionArrayPtr != nullptr)
	{
		auto& PlatformSessionArray = *PlatformSessionArrayPtr;

		for (auto& PlatformSession : PlatformSessionArray)
		{
			if (PlatformSession.GetPlatform() == Platform)
			{
				OutPlatformSession = PlatformSession;
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
				State.TeamId = Team.GetTeamId(i);
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

	// copy the new data into our local storage
	SessionData = newSessionData;

	// import the template
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

	FRH_OnSessionUpdatedDelegate CompletionDelegate = FRH_OnSessionUpdatedDelegate::CreateWeakLambda(this, [this, Delegate](bool bSuccess, URH_SessionView* Session, const FRH_ErrorInfo& ErrorInfo)
		{
			// notify poller that execution is done
			Delegate.ExecuteIfBound(bSuccess, true);

			// notify any waiting polls that we are done, and clear the list
			for (auto& Poll : WaitingPolls)
			{
				Poll.TriggerDelegates(bSuccess, false, ErrorInfo);
			}
			WaitingPolls.Empty();

			// any deferred polls with a matching etag can also be notified and cleared
			// this allows modifications and notifications to race to add the poll request, but avoid polling a second time if one arrives while other's poll is already running
			for (int i = DeferredPolls.Num() - 1; i >= 0; --i)
			{
				if (DeferredPolls[i].ETag.IsSet() && DeferredPolls[i].ETag.GetValue() == GetETag())
				{
					DeferredPolls[i].TriggerDelegates(bSuccess, false, ErrorInfo);
					DeferredPolls.RemoveAt(i);
				}
			}

			// check if we need to kick off a new poll
			CheckDeferredPolls();
		});

	auto Helper = MakeShared<FRH_SessionPollOnlyHelper>(MakeWeakInterface(GetSessionOwner()), GetSessionId(), CompletionDelegate, GetDefault<URH_IntegrationSettings>()->SessionPollPriority);
	Helper->Start();
}

void URH_SessionView::ForcePollForUpdate(bool bClearEtag, const FRH_GenericSuccessWithErrorBlock& Delegate)
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
	
	AddDeferredPoll(FRH_DeferredSessionPoll(FRH_DeferredSessionPoll::Type::Forced, Delegate, ETag));
}


void URH_SessionView::AddDeferredPoll(const FRH_DeferredSessionPoll& DeferredPoll)
{
	// only store latest notification poll
	if (DeferredPoll.PollType == FRH_DeferredSessionPoll::Type::Notification)
	{
		// strip any existing notification polls we can, as this one supersedes them
		for (int i = DeferredPolls.Num() - 1; i >= 0; --i)
		{
			// we cannot strip notifications polls with a delegate, as that would prevent the delegate from being called
			if (DeferredPolls[i].PollType == FRH_DeferredSessionPoll::Type::Notification && !DeferredPolls[i].IsDelegateBound())
			{
				DeferredPolls.RemoveAt(i);
			}
		}
	}

	// if the ETag matches, we don't need to poll unless forcing it
	if (DeferredPoll.ETag.IsSet() && DeferredPoll.ETag == GetETag() && DeferredPoll.PollType != FRH_DeferredSessionPoll::Type::Forced)
	{
		// make sure we notify the delegate, as we are not going to poll since this request is already complete
		DeferredPoll.TriggerDelegates(true, false, FRH_ErrorInfo());
		return;
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
		// copy deferred polls into waiting list, which will be notified upon completion
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
	UE_LOG(LogRHSession, Log, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());

	FRH_SessionLeaveHelper::BaseType::Request Request;
	Request.AuthContext = GetSessionOwner()->GetSessionAuthContext();
	Request.SessionId = GetSessionId();

	auto Helper = MakeShared<FRH_SessionLeaveHelper>(MakeWeakInterface(GetSessionOwner()), GetSessionId(), Delegate, GetDefault<URH_IntegrationSettings>()->SessionLeavePriority);
	Helper->Start(Request);
}

void URH_InvitedSession::QueryInviterBlockedOnPlatformAsync(const FRH_OnSessionPlayerIsBlockedDelegateBlock& Delegate)
{
	auto SessionOwner = GetSessionOwner();
	if (SessionOwner == nullptr)
	{
		Delegate.ExecuteIfBound(false);
		return;
	}

	if (!SessionOwner->GetPlayerUuid().IsValid())
	{
		Delegate.ExecuteIfBound(false);
		return;
	}

	const FRHAPI_SessionPlayer* pSessionPlayer = GetSessionPlayer(SessionOwner->GetPlayerUuid());
	if (pSessionPlayer == nullptr)
	{
		Delegate.ExecuteIfBound(false);
		return;
	}

	const FGuid InviterId = pSessionPlayer->GetInvitingPlayerUuid(FGuid());
	URH_PlatformSessionSyncer::IsSessionPlayerBlockedOnPlatformAsync(MakeWeakInterface(SessionOwner), InviterId, FRH_OnSessionPlayerIsBlockedDelegate::CreateWeakLambda(this, [Delegate](bool bIsInviterBlocked)
		{
			Delegate.ExecuteIfBound(bIsInviterBlocked);
		}));
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
	return RH_VersionStrings::GetVersionForSession();
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
									Presence->OnUpdatedDelegate.AddWeakLambda(this, [this](URH_PlayerInfoSubobject* Subobj)
										{
											// notify listeners
											auto Presence = Cast<URH_PlayerPresence>(Subobj);
											if (Presence != nullptr)
											{
												OnSessionMemberPresenceChangedDelegate.Broadcast(this, Presence);
												BLUEPRINT_OnSessionMemberPresenceChangedDelegate.Broadcast(this, Presence);
											}
										});

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
									Presence->OnUpdatedDelegate.RemoveAll(this);
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
	FRHAPI_SessionUpdate Update;

	// left for backwards compatiblity, but all elements are now optional, so should default to "not set"

	return Update;
}

FRHAPI_InstanceInfoUpdate URH_JoinedSession::GetInstanceUpdateInfoDefaults() const
{
	FRHAPI_InstanceInfoUpdate Update;

	// left for backwards compatiblity, but all elements are now optional, so should default to "not set"

	// look up the "bound" allocation id, as it is required for the update when running via an allocation
	auto SessionOwner = GetSessionOwner();
	auto AllocationId = SessionOwner->GetBoundAllocationId();
	if (AllocationId.IsSet())
	{
		Update.SetAllocationId(AllocationId.GetValue());
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

void URH_JoinedSession::QueryPlayerBlockedOnPlatformAsync(const FGuid& PlayerUuid, const FRH_OnSessionPlayerIsBlockedDelegateBlock& Delegate)
{
	auto SessionOwner = GetSessionOwner();
	if (SessionOwner == nullptr)
	{
		Delegate.ExecuteIfBound(false);
		return;
	}

	if (!SessionOwner->GetPlayerUuid().IsValid())
	{
		Delegate.ExecuteIfBound(false);
		return;
	}

	URH_PlatformSessionSyncer::IsSessionPlayerBlockedOnPlatformAsync(MakeWeakInterface(SessionOwner), PlayerUuid, FRH_OnSessionPlayerIsBlockedDelegate::CreateWeakLambda(this, [Delegate](bool bIsInviterBlocked)
		{
			Delegate.ExecuteIfBound(bIsInviterBlocked);
		}));
}

//////////////////////////////////////////////////////////////////////////////////

URH_OfflineSession::URH_OfflineSession(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void URH_OfflineSession::InvitePlayer(const FGuid& PlayerId, int32 Team, const TMap<FString, FString>& CustomData, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	// currently not supported for offline sessions
	Delegate.ExecuteIfBound(false, this, FRH_ErrorInfo());
}

void URH_OfflineSession::KickPlayer(const FGuid& PlayerId, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	// currently not supported for offline sessions
	Delegate.ExecuteIfBound(false, this, FRH_ErrorInfo());
}

void URH_OfflineSession::InviteOtherSession(const FString& InvitedSessionId, const FRHAPI_SessionInviteRequest& SessionInviteRequest, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	// currently not supported for offline sessions
	Delegate.ExecuteIfBound(false, this, FRH_ErrorInfo());
}

void URH_OfflineSession::KickOtherSession(const FString& KickedSessionId, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	// currently not supported for offline sessions
	Delegate.ExecuteIfBound(false, this, FRH_ErrorInfo());
}


void URH_OfflineSession::SetLeader(const FGuid& PlayerId, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	// currently not supported for offline sessions
	Delegate.ExecuteIfBound(false, this, FRH_ErrorInfo());
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
		const auto PlayerList = SessionTeam.GetPlayers();
		for (int j = 0; j < PlayerList.Num(); ++j)
		{
			const auto& TeamPlayer = PlayerList[j];
			if (TeamPlayer.GetPlayerUuid() == PlayerUuid)
			{
				const int32 TeamIndex = i;
				if (Team == SessionTeam.GetTeamId(TeamIndex))
				{
					// already on the correct team
					Delegate.ExecuteIfBound(true, this, FRH_ErrorInfo());
					return;
				}
				else
				{
					bFoundPlayer = true;
					// copy data to stack so we can insert it later
					Player = TeamPlayer;
					// remove the player from the team
					SessionTeam.GetPlayers().RemoveAtSwap(j);

					break;
				}
			}
		}
	}

	if (bFoundPlayer)
	{
		// look for a team with a matching id
		FRHAPI_SessionTeam* ExistingTeam = nullptr;
		for (int i = 0; i < Update.Teams.Num(); ++i)
		{
			const int32 TeamIndex = i;
			if (Update.Teams[i].GetTeamId(TeamIndex) == Team)
			{
				ExistingTeam = &Update.Teams[i];
				break;
			}
		}
		if (ExistingTeam == nullptr)
		{
			// add a new team with the appropriate id
			auto Index = Update.Teams.AddDefaulted();
			ExistingTeam = &Update.Teams[Index];
			ExistingTeam->SetTeamId(Team);
		}
		check(ExistingTeam != nullptr);
		// insert them into their new team
		auto PlayersList = ExistingTeam->GetPlayers();
		PlayersList.Add(Player);
		ExistingTeam->SetPlayers(PlayersList);		
	}

	ImportSessionUpdateToAllPlayers(UpdateWrapper);

	Delegate.ExecuteIfBound(true, this, FRH_ErrorInfo());
}


void URH_OfflineSession::SwapPlayerTeams(const FGuid& PlayerUuidA, const FGuid& PlayerUuidB, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	// ensure session has both players to swap
	const auto PlayerA = GetSessionPlayer(PlayerUuidA);
	const auto PlayerB = GetSessionPlayer(PlayerUuidB);

	if (PlayerA == nullptr || PlayerB == nullptr)
	{
		Delegate.ExecuteIfBound(false, this, FRH_ErrorInfo());
		return;
	}
	
	const auto PlayerATeam = GetSessionPlayerTeamId(PlayerUuidA);
	const auto PlayerBTeam = GetSessionPlayerTeamId(PlayerUuidB);
	
	if (PlayerATeam == INDEX_NONE || PlayerBTeam == INDEX_NONE)
	{
		Delegate.ExecuteIfBound(false, this, FRH_ErrorInfo());
		return;
	}
	
	FRH_APISessionWithETag UpdateWrapper(SessionData);
	auto& Update = UpdateWrapper.Data;

	auto RemovePlayerFromTeam = [&Update](const FGuid& PlayerUuid, int32 TeamNum) -> bool
	{
		for (int i = 0; i < Update.Teams.Num(); ++i)
		{
			auto& SessionTeam = Update.Teams[i];
			const auto Index = i; 
			if (SessionTeam.GetTeamId(Index) == TeamNum)
			{
				const auto PlayerList = SessionTeam.GetPlayers();
				for (int j = 0; j < PlayerList.Num(); ++j)
				{
					const auto& TeamPlayer = PlayerList[j];
					if (TeamPlayer.GetPlayerUuid() == PlayerUuid)
					{
						// remove the player from the team
						SessionTeam.GetPlayers().RemoveAtSwap(j);
						return true;
					}
				}
			}
		}

		return false;
	};

	const bool bRemovedA = RemovePlayerFromTeam(PlayerUuidA, PlayerATeam);
	const bool bRemovedB = RemovePlayerFromTeam(PlayerUuidB, PlayerBTeam);

	if (!bRemovedA || !bRemovedB)
	{
		Delegate.ExecuteIfBound(false, this, FRH_ErrorInfo());
		return;
	}

	auto AddPlayerToTeam = [&Update](const FRHAPI_SessionPlayer& Player, int32 TeamNum) -> bool
	{
		// look for a team with a matching id
		FRHAPI_SessionTeam* ExistingTeam = nullptr;
		for (int i = 0; i < Update.Teams.Num(); ++i)
		{
			const int32 TeamIndex = i;
			if (Update.Teams[i].GetTeamId(TeamIndex) == TeamNum)
			{
				ExistingTeam = &Update.Teams[i];
				break;
			}
		}
		if (ExistingTeam == nullptr)
		{
			// this should not happen, since we verified both teams were present, but is here for safety
			return false;
		}
		check(ExistingTeam != nullptr);
		// insert them into their new team
		auto PlayersList = ExistingTeam->GetPlayers();
		PlayersList.Add(Player);
		ExistingTeam->SetPlayers(PlayersList);

		return true;
	};

	const bool bAddedA = AddPlayerToTeam(*PlayerA, PlayerBTeam);
	const bool bAddedB = AddPlayerToTeam(*PlayerB, PlayerATeam);

	if (!bAddedA || !bAddedB)
	{
		Delegate.ExecuteIfBound(false, this, FRH_ErrorInfo());
		return;
	}
	
	ImportSessionUpdateToAllPlayers(UpdateWrapper);

	Delegate.ExecuteIfBound(true, this, FRH_ErrorInfo());
}

void URH_OfflineSession::UpdatePlayerCustomData(const FGuid& PlayerUuid, const TMap<FString, FString>& CustomData, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	FRH_APISessionWithETag UpdateWrapper(SessionData);
	auto& Update = UpdateWrapper.Data;

	for (auto& SessionTeam : Update.Teams)
	{
		for (auto& TeamPlayer : SessionTeam.Players)
		{
			if (TeamPlayer.PlayerUuid == PlayerUuid)
			{
				TeamPlayer.SetCustomData(CustomData);
				ImportSessionUpdateToAllPlayers(UpdateWrapper);
				Delegate.ExecuteIfBound(true, this, FRH_ErrorInfo());
				return;
			}
		}
	}

	Delegate.ExecuteIfBound(false, this, FRH_ErrorInfo());
}

void URH_OfflineSession::Leave(bool bFromOSS, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	// for now, empty player list to remove all players from the session, then import to clean up
	FRH_APISessionWithETag UpdateWrapper(SessionData);
	auto& Update = UpdateWrapper.Data;
	Update.Teams.Empty();
	ImportSessionUpdateToAllPlayers(UpdateWrapper);

	Delegate.ExecuteIfBound(true, this, FRH_ErrorInfo());
}

void URH_OfflineSession::RequestInstance(const FRHAPI_InstanceRequest& InstanceRequest, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());
	if (GetSessionData().GetInstanceOrNull())
	{
		UE_LOG(LogRHSession, Log, TEXT("[%s] - Failed because instance already exists"), ANSI_TO_TCHAR(__FUNCTION__));
		Delegate.ExecuteIfBound(false, this, FRH_ErrorInfo());
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
			Instance.SetHostType(ERHAPI_HostType::Player);
			/* Player UUID of the host, if the host is not a dedicated server */
			Instance.SetHostPlayerUuid(pLPSubsystem->GetLocalPlayerSubsystem()->GetPlayerUuid());
			/* Is the instance joinable at this time? */
			Instance.SetJoinStatus(ERHAPI_InstanceJoinableStatus::Pending);
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
			Instance.SetCreated(FDateTime::UtcNow());
			/* instance-defined custom data */
			if (const auto* CustomData = InstanceRequest.GetCustomDataOrNull())
			{
				Instance.SetCustomData(*CustomData);
			}

			Update.SetInstance(Instance);
		}

		ImportSessionUpdateToAllPlayers(UpdateWrapper);

		Delegate.ExecuteIfBound(true, this, FRH_ErrorInfo());
	}
	else
	{
		UE_LOG(LogRHSession, Log, TEXT("[%s] - Failed because owner was not a local player subsystem"), ANSI_TO_TCHAR(__FUNCTION__));

		Delegate.ExecuteIfBound(false, this, FRH_ErrorInfo());
	}
}
void URH_OfflineSession::EndInstance(const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());
	if (!GetSessionData().GetInstanceOrNull())
	{
		UE_LOG(LogRHSession, Log, TEXT("[%s] - Failed because instance does not exist"), ANSI_TO_TCHAR(__FUNCTION__));
		Delegate.ExecuteIfBound(false, this, FRH_ErrorInfo());
		return;
	}

	FRH_APISessionWithETag UpdateWrapper(SessionData);
	auto& Update = UpdateWrapper.Data;

	Update.ClearInstance();

	ImportSessionUpdateToAllPlayers(UpdateWrapper);

	Delegate.ExecuteIfBound(true, this, FRH_ErrorInfo());
}

void URH_OfflineSession::GenerateVoipLoginToken(const FRH_OnSessionGetVoipTokenDelegateBlock& Delegate)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	// offline sessions do not support voip
	Delegate.ExecuteIfBound(false, FRHAPI_VoipTokenResponse(), FRH_ErrorInfo());
}
void URH_OfflineSession::GenerateVoipActionToken(ERHAPI_VivoxSessionActionSingle VivoxAction, ERHAPI_VoipSessionType VoipSessionType, const FRH_OnSessionGetVoipTokenDelegateBlock& Delegate)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	// offline sessions do not support voip
	Delegate.ExecuteIfBound(false, FRHAPI_VoipTokenResponse(), FRH_ErrorInfo());
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

	Delegate.ExecuteIfBound(true, this, FRH_ErrorInfo());
}


void URH_OfflineSession::UpdateInstanceInfo(const FRHAPI_InstanceInfoUpdate& InstanceInfoUpdate, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());
	if (!GetSessionData().GetInstanceOrNull())
	{
		UE_LOG(LogRHSession, Log, TEXT("[%s] - Failed because instance does not exist"), ANSI_TO_TCHAR(__FUNCTION__));
		Delegate.ExecuteIfBound(false, this, FRH_ErrorInfo());
		return;
	}

	FRH_APISessionWithETag UpdateWrapper(SessionData);
	auto& Update = UpdateWrapper.Data;

	{
		Update.Instance_IsSet = true;
		auto& Instance = Update.Instance_Optional;
		
		InstanceInfoUpdate.GetJoinStatus(Instance.JoinStatus);
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

	Delegate.ExecuteIfBound(true, this, FRH_ErrorInfo());
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

	Delegate.ExecuteIfBound(true, this, FRH_ErrorInfo());
}

void URH_OfflineSession::UpdateInstanceHealth(ERHAPI_InstanceHealthStatus HealthStatus, const FRH_GenericSuccessWithErrorBlock& Delegate)
{
	UE_LOG(LogRHSession, VeryVerbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());
	if (!GetSessionData().GetInstanceOrNull())
	{
		UE_LOG(LogRHSession, Log, TEXT("[%s] - Failed because instance does not exist"), ANSI_TO_TCHAR(__FUNCTION__));
		Delegate.ExecuteIfBound(false, FRH_ErrorInfo());
		return;
	}

	FRH_APISessionWithETag UpdateWrapper(SessionData);
	auto& Update = UpdateWrapper.Data;

	{
		Update.GetInstance().SetInstanceHealth(HealthStatus);
	}

	ImportSessionUpdateToAllPlayers(UpdateWrapper);

	Delegate.ExecuteIfBound(true, FRH_ErrorInfo());
}

void URH_OfflineSession::AcknowledgeBackfill(bool bEnable, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	UE_LOG(LogRHSession, VeryVerbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());
	Delegate.ExecuteIfBound(false, this, FRH_ErrorInfo());
}

void URH_OfflineSession::DeleteBackfill(const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	UE_LOG(LogRHSession, VeryVerbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());
	Delegate.ExecuteIfBound(false, this, FRH_ErrorInfo());
}

void URH_OfflineSession::EmitAuditEvent(const FRHAPI_CreateAuditRequest& AuditEvent, const FRH_GenericSuccessWithErrorBlock& Delegate) const
{
	UE_LOG(LogRHSession, VeryVerbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());
	Delegate.ExecuteIfBound(false, FRH_ErrorInfo());
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

	// inject to the base object some defaults for ease of use
	if (CreateParamsCopy.GetClientVersion().IsEmpty())
	{
		CreateParamsCopy.SetClientVersion(GetClientVersionForSession());
	}
	if (!CreateParamsCopy.ClientSettings.IsPlatformSet())
	{
		CreateParamsCopy.ClientSettings.SetPlatform(RH_GetPlatformFromOSSName(OSS ? OSS->GetSubsystemName() : NAME_None).Get(ERHAPI_Platform::Anon));
	}
	CreateParamsCopy.ClientSettings.SetInput(GetClientInputTypeForSession());

	// inject to the player object too, if it is set
	auto CopyPlayerData = CreateParamsCopy.GetPlayerOrNull();
	if (CopyPlayerData)
	{
		// default to the leader if not otherwise specified
		if (!CopyPlayerData->IsStatusSet())
		{
			CopyPlayerData->SetStatus(ERHAPI_SessionPlayerStatus::Leader);
		}
		if (CopyPlayerData->GetClientVersion().IsEmpty())
		{
			CopyPlayerData->SetClientVersion(GetClientVersionForSession());
		}
		if (!CopyPlayerData->ClientSettings.IsPlatformSet())
		{
			CopyPlayerData->ClientSettings.SetPlatform(RH_GetPlatformFromOSSName(OSS ? OSS->GetSubsystemName() : NAME_None).Get(ERHAPI_Platform::Anon));
		}
		CopyPlayerData->ClientSettings.SetInput(GetClientInputTypeForSession());
	}

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


void URH_OnlineSession::InviteOtherSession(const FString& InvitedSessionId, const FRHAPI_SessionInviteRequest& SessionInviteRequest, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	typedef RallyHereAPI::Traits_InviteSessionToSession BaseType;
	auto SessionId = GetSessionId();
	auto SessionOwner = GetSessionOwner();
	UE_LOG(LogRHSession, Log, TEXT("[%s::%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *BaseType::Name, *SessionId);
	BaseType::Request Request;
	Request.AuthContext = SessionOwner->GetSessionAuthContext();
	Request.SessionId = GetSessionId();
	Request.InvitedSessionId = InvitedSessionId;
	Request.SessionInviteRequest = SessionInviteRequest;

	auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(SessionOwner), SessionId, Delegate, GetDefault<URH_IntegrationSettings>()->SessionInvitePriority);
	Helper->Start(Request);
}

void URH_OnlineSession::KickOtherSession(const FString& KickedSessionId, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	// TODO - check that players is already in this session?

	typedef RallyHereAPI::Traits_KickSessionFromSession BaseType;
	auto SessionId = GetSessionId();
	auto SessionOwner = GetSessionOwner();
	UE_LOG(LogRHSession, Log, TEXT("[%s::%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *BaseType::Name, *SessionId);
	BaseType::Request Request;
	Request.AuthContext = SessionOwner->GetSessionAuthContext();
	Request.SessionId = GetSessionId();
	Request.KickedSessionId = KickedSessionId;

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

void URH_OnlineSession::SwapPlayerTeams(const FGuid& PlayerUuidA, const FGuid& PlayerUuidB, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	// TODO - check that players is in this session?

	typedef RallyHereAPI::Traits_SwapPlayersInSession BaseType;
	auto SessionId = GetSessionId();
	auto SessionOwner = GetSessionOwner();
	UE_LOG(LogRHSession, Log, TEXT("[%s::%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *BaseType::Name, *SessionId);
	BaseType::Request Request;
	Request.AuthContext = SessionOwner->GetSessionAuthContext();
	Request.SessionId = GetSessionId();
	Request.PlayerSwapRequest.Players.Add(PlayerUuidA);
	Request.PlayerSwapRequest.Players.Add(PlayerUuidB);

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
	UE_LOG(LogRHSession, Log, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());

	FRH_SessionLeaveHelper::BaseType::Request Request;
	Request.AuthContext = GetSessionOwner()->GetSessionAuthContext();
	Request.SessionId = GetSessionId();

	auto Helper = MakeShared<FRH_SessionLeaveHelper>(MakeWeakInterface(GetSessionOwner()), GetSessionId(), Delegate, GetDefault<URH_IntegrationSettings>()->SessionLeavePriority);
	Helper->Start(Request);
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

void URH_OnlineSession::GenerateVoipLoginToken(const FRH_OnSessionGetVoipTokenDelegateBlock& Delegate)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	
	typedef RallyHereAPI::Traits_GetVoipLoginToken BaseType;
	BaseType::Request Request;
	Request.AuthContext = GetSessionOwner()->GetSessionAuthContext();
	
	struct FRH_VoipLoginTokenResponseContext
	{
		TOptional<FRHAPI_VoipTokenResponse> Resp;
	};
	auto ResponseContext = MakeShared<FRH_VoipLoginTokenResponseContext>();

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateLambda([ResponseContext](const BaseType::Response& Resp)
		{
			ResponseContext->Resp = Resp.TryGetDefaultContentAsOptional();
		}),
		FRH_GenericSuccessWithErrorDelegate::CreateLambda([ResponseContext, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
		{
			if (bSuccess && ResponseContext->Resp.IsSet())
			{
				Delegate.ExecuteIfBound(bSuccess, ResponseContext->Resp.GetValue(), ErrorInfo);
			}
			else
			{
				Delegate.ExecuteIfBound(false, FRHAPI_VoipTokenResponse(), ErrorInfo);
			}
		}),
		GetDefault<URH_IntegrationSettings>()->SessionVoipLoginTokenPriority);

	Helper->Start(RH_APIs::GetSessionsAPI(), Request);
}

void URH_OnlineSession::GenerateVoipActionToken(ERHAPI_VivoxSessionActionSingle VivoxAction, ERHAPI_VoipSessionType VoipSessionType, const FRH_OnSessionGetVoipTokenDelegateBlock& Delegate)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	typedef RallyHereAPI::Traits_GetVoipActionTokenMe BaseType;
	BaseType::Request Request;
	Request.AuthContext = GetSessionOwner()->GetSessionAuthContext();
	Request.SessionId = GetSessionId();
	Request.VivoxAction = VivoxAction;
	Request.VoipSessionType = VoipSessionType;

	struct FRH_VoipLoginTokenResponseContext
	{
		TOptional<FRHAPI_VoipTokenResponse> Resp;
	};
	auto ResponseContext = MakeShared<FRH_VoipLoginTokenResponseContext>();

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateLambda([ResponseContext](const BaseType::Response& Resp)
			{
				ResponseContext->Resp = Resp.TryGetDefaultContentAsOptional();
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateLambda([ResponseContext, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				if (bSuccess)
				{
					Delegate.ExecuteIfBound(bSuccess, ResponseContext->Resp.GetValue(), ErrorInfo);
				}
				else
				{
					Delegate.ExecuteIfBound(false, FRHAPI_VoipTokenResponse(), ErrorInfo);
				}
			}),
		GetDefault<URH_IntegrationSettings>()->SessionVoipActionTokenPriority);

	Helper->Start(RH_APIs::GetSessionsAPI(), Request);
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
		// NOTE - this assumes that local state is up to date!
		auto BrowserData = GetSessionData().GetBrowserOrNull();
		if (BrowserData != nullptr)
		{
			// if the browser data is already set, we need to update it
			typedef RallyHereAPI::Traits_UpdateBrowserInfo BaseType;
			BaseType::Request Request;
			Request.AuthContext = GetSessionOwner()->GetSessionAuthContext();
			Request.SessionId = GetSessionId();
			Request.BrowserInfo.SetCustomData(CustomData);

			const auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(GetSessionOwner()), GetSessionId(), Delegate, GetDefault<URH_IntegrationSettings>()->SessionUpdateBrowserInfoPriority);
			Helper->Start(Request);
		}
		else
		{
			// if the browser data is not set, we need to create it
			typedef RallyHereAPI::Traits_PostBrowserInfo BaseType;
			BaseType::Request Request;
			Request.AuthContext = GetSessionOwner()->GetSessionAuthContext();
			Request.SessionId = GetSessionId();
			Request.BrowserInfo.SetCustomData(CustomData);

			const auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(GetSessionOwner()), GetSessionId(), Delegate, GetDefault<URH_IntegrationSettings>()->SessionUpdateBrowserInfoPriority);
			Helper->Start(Request);
		}
	}
	else
	{
		// NOTE - this does not assume that local state is up to date!
		DoRequestViaHelper<RallyHereAPI::Traits_DeleteBrowserInfo>(GetSessionId(), GetSessionOwner(), Delegate, GetDefault<URH_IntegrationSettings>()->SessionDeleteBrowserInfoPriority);
	}
}

void URH_OnlineSession::UpdateInstanceHealth(ERHAPI_InstanceHealthStatus HealthStatus, const FRH_GenericSuccessWithErrorBlock& Delegate)
{
	UE_LOG(LogRHSession, VeryVerbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());

	typedef RallyHereAPI::Traits_InstanceHealthCheck BaseType;

	BaseType::Request Request = {};
	Request.AuthContext = GetSessionOwner()->GetSessionAuthContext();
	Request.SessionId = GetSessionId();
	Request.InstanceHealthStatusUpdate.SetInstanceHealth(HealthStatus);

	auto BoundInstanceId = GetSessionOwner()->GetBoundInstanceId();
	if (BoundInstanceId.IsSet())
	{
		Request.InstanceHealthStatusUpdate.SetInstanceId(BoundInstanceId.GetValue());
	}
	else if (const auto* Instance = GetSessionData().GetInstanceOrNull())
	{
		Request.InstanceHealthStatusUpdate.SetInstanceId(Instance->GetInstanceId());
	}

	// we use the simple query helper since this intentionally does not modify the session, to prevent excess reads on the poll
	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate(),
		Delegate,
		GetDefault<URH_IntegrationSettings>()->SessionInstanceHealthUpdatePriority
	);

	Helper->Start(RH_APIs::GetSessionsAPI(), Request);
}

void URH_OnlineSession::AcknowledgeBackfill(bool bEnable, const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	UE_LOG(LogRHSession, VeryVerbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());
	if (bEnable)
	{
		typedef RallyHereAPI::Traits_AcknowledgeBackfillRequest BaseType;
		BaseType::Request Request;
		Request.AuthContext = GetSessionOwner()->GetSessionAuthContext();
		Request.SessionId = GetSessionId();

		auto BoundInstanceId = GetSessionOwner()->GetBoundInstanceId();
		if (BoundInstanceId.IsSet())
		{
			Request.AcknowledgeBackfillRequest.SetInstanceId(BoundInstanceId.GetValue());
		}
		else if (const auto* Instance = GetSessionData().GetInstanceOrNull())
		{
			Request.AcknowledgeBackfillRequest.SetInstanceId(Instance->GetInstanceId());
		}

		const auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(GetSessionOwner()), GetSessionId(), Delegate, GetDefault<URH_IntegrationSettings>()->SessionUpdateBrowserInfoPriority);
		Helper->Start(Request);
	}
	else
	{
		Delegate.ExecuteIfBound(false, this, FRH_ErrorInfo());
	}
}

void URH_OnlineSession::DeleteBackfill(const FRH_OnSessionUpdatedDelegateBlock& Delegate)
{
	typedef RallyHereAPI::Traits_DeleteBackfillRequest BaseType;
	BaseType::Request Request;
	Request.AuthContext = GetSessionOwner()->GetSessionAuthContext();
	Request.SessionId = GetSessionId();

	auto BoundInstanceId = GetSessionOwner()->GetBoundInstanceId();
	if (BoundInstanceId.IsSet())
	{
		Request.BaseBackfillRequest.SetInstanceId(BoundInstanceId.GetValue());
	}
	else if (const auto* Instance = GetSessionData().GetInstanceOrNull())
	{
		Request.BaseBackfillRequest.SetInstanceId(Instance->GetInstanceId());
	}

	const auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(GetSessionOwner()), GetSessionId(), Delegate, GetDefault<URH_IntegrationSettings>()->SessionUpdateBrowserInfoPriority);
	Helper->Start(Request);
}

void URH_OnlineSession::EmitAuditEvent(const FRHAPI_CreateAuditRequest& AuditEvent, const FRH_GenericSuccessWithErrorBlock& Delegate) const
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *GetSessionId());
	typedef RallyHereAPI::Traits_CreateSessionAudit BaseType;
	BaseType::Request Request;
	Request.AuthContext = GetSessionOwner()->GetSessionAuthContext();
	Request.CreateAuditRequest = AuditEvent;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(BaseType::Delegate(), Delegate, GetDefault<URH_IntegrationSettings>()->SessionAuditPriority);

	Helper->Start(RH_APIs::GetSessionsAPI(), Request);
}


//////////////////////////////////////////////////////////////////////////////////
// Automation tests
//////////////////////////////////////////////////////////////////////////////////

#if WITH_DEV_AUTOMATION_TESTS

#include "RH_AutomationTests.h"

struct FRH_SessionTestPayload
{
	FRH_SessionOwnerPtr SessionOwner;
	TWeakObjectPtr<URH_SessionView> Session;
	TWeakObjectPtr<URH_JoinedSession> JoinedSession;
	FString SessionType;
	FString RegionId;

	FRH_SessionTestPayload()
	{
		SessionOwner.Reset();
		Session.Reset();
		JoinedSession.Reset();

		SessionType = TEXT("party");
		RegionId = TEXT("1");
	}

	bool BeginTestBoilerplate(FAutomationTestBase* Test)
	{
		SessionOwner.Reset();
		Session.Reset();
		JoinedSession.Reset();

		auto LPSubsystem = RHAutomationTestUtils::GetRHLocalPlayerSubsystem(Test);
		if (LPSubsystem != nullptr)
		{
			SessionOwner = LPSubsystem->GetSessionSubsystem();
		}
		/*
		if (!SessionOwner.IsValid())
		{
			auto GISubsystem = RHAutomationTestUtils::GetRHGameInstanceSubsystem();
			if (GISubsystem.IsValid())
			{
				SessionOwner = GISubsystem->GetSessionSearchCache();
			}
		}
		*/
		if (Test->TestNotNull(TEXT("Session Owner"), SessionOwner.Get()))
		{
			return false;
		}
		if (Test->TestNotNull(TEXT("Auth Context"), SessionOwner->GetSessionAuthContext().Get()))
		{
			return false;
		}
		if (Test->TestTrue(TEXT("Logged in"), SessionOwner->GetSessionAuthContext()->IsLoggedIn()))
		{
			return false;
		}

		return true;
	}

	void EndTestBoilerplate(FAutomationTestBase* Test)
	{
		// leave the joined session
		if (JoinedSession.IsValid())
		{
			JoinedSession->Leave(false);
		}

		// remove the session from the owning manager
		if (Session.IsValid() && SessionOwner.IsValid())
		{
			SessionOwner->RemoveSessionById(Session->GetSessionId());
		}

		SessionOwner.Reset();
		Session.Reset();
		JoinedSession.Reset();
	}
};

BEGIN_DEFINE_SPEC(FRH_SessionVoipSimple, "RHAutomation.Session.VOIP.Spec", EAutomationTestFlags::ClientContext | EAutomationTestFlags::ProductFilter | EAutomationTestFlags::MediumPriority)

FRH_SessionTestPayload TestPayload;

END_DEFINE_SPEC(FRH_SessionVoipSimple)

void FRH_SessionVoipSimple::Define()
{
	Describe("Session VOIP", [this]()
		{
			BeforeEach([this]()
				{
					TestPayload.BeginTestBoilerplate(this);
				});

			AfterEach([this]()
				{
					TestPayload.EndTestBoilerplate(this);
				});

			LatentIt("should create a test session and request voip login token", [this](const FDoneDelegate& Done)
				{					
					FRHAPI_CreateOrJoinRequest Params = {};
					Params.SetSessionType(TestPayload.SessionType);
					Params.SetRegionId(TestPayload.RegionId);
					Params.SetClientVersion(URH_JoinedSession::GetClientVersionForSession());

					URH_OnlineSession::CreateOrJoinByType(Params, TestPayload.SessionOwner.GetObject(), FRH_OnSessionUpdatedDelegate::CreateLambda([this, Done](bool bSuccess, URH_SessionView* NewSession, const FRH_ErrorInfo& ErrorInfo)
						{
							if (!TestTrue(TEXT("CreateSession"), bSuccess))
							{
								Done.Execute();
								return;
							}
							
							TestPayload.Session = NewSession;
							TestPayload.JoinedSession = Cast<URH_JoinedSession>(NewSession);
							if (!TestNotNull(TEXT("Session"), TestPayload.Session.Get()) || !TestNotNull(TEXT("JoinedSession"), TestPayload.JoinedSession.Get()))
							{
								Done.Execute();
								return;
							}
														
							TestPayload.JoinedSession->GenerateVoipLoginToken(FRH_OnSessionGetVoipTokenDelegate::CreateLambda([this, Done](bool bSuccess, const FRHAPI_VoipTokenResponse& Token, const FRH_ErrorInfo& ErrorInfo)
								{
									if (!TestTrue(TEXT("GenerateVoipLoginToken"), bSuccess))
									{
										Done.Execute();
										return;
									}
									if (!TestTrue(TEXT("TokenIsValid"), Token.GetToken().Len() > 0))
									{
										Done.Execute();
										return;	
									}

									Done.Execute();
								}));
						}));
				});

			auto ChannelTypeEnum = StaticEnum<ERHAPI_VoipSessionType>();
			for (int64 ChannelTypeEnumIndex = 0; ChannelTypeEnumIndex < ChannelTypeEnum->NumEnums(); ++ChannelTypeEnumIndex)
			{
				const auto ChannelType = (ERHAPI_VoipSessionType)ChannelTypeEnum->GetValueByIndex(ChannelTypeEnumIndex);
				const auto ChannelTypeName = ChannelTypeEnum->GetNameStringByIndex(ChannelTypeEnumIndex);

				// exclude the _MAX entry
				{
					bool bIndexIsMAXEntry = ChannelTypeEnum->ContainsExistingMax() && (ChannelTypeName.EndsWith(TEXT("_MAX"), ESearchCase::CaseSensitive));
					if (bIndexIsMAXEntry)
					{
						continue;
					}
				}

				auto ActionEnum = StaticEnum<ERHAPI_VivoxSessionActionSingle>();
				for (int64 ActionEnumIndex = 0; ActionEnumIndex < ActionEnum->NumEnums(); ++ActionEnumIndex)
				{
					const auto Action = (ERHAPI_VivoxSessionActionSingle)ActionEnum->GetValueByIndex(ActionEnumIndex);
					const auto ActionName = ActionEnum->GetNameStringByIndex(ActionEnumIndex);

					// exclude the _MAX entry
					{
						bool bIndexIsMAXEntry = ActionEnum->ContainsExistingMax() && (ActionName.EndsWith(TEXT("_MAX"), ESearchCase::CaseSensitive));
						if (bIndexIsMAXEntry)
						{
							continue;
						}
					}

					LatentIt(FString::Printf(TEXT("should create a test session and request voip %s token for the %s channel"), *ActionName, *ChannelTypeName), [this, Action, ChannelType](const FDoneDelegate& Done)
						{
							FRHAPI_CreateOrJoinRequest Params = {};
							Params.SetSessionType(TestPayload.SessionType);
							Params.SetRegionId(TestPayload.RegionId);
							Params.SetClientVersion(URH_JoinedSession::GetClientVersionForSession());

							URH_OnlineSession::CreateOrJoinByType(Params, TestPayload.SessionOwner.GetObject(), FRH_OnSessionUpdatedDelegate::CreateLambda([this, Action, ChannelType, Done](bool bSuccess, URH_SessionView* NewSession, const FRH_ErrorInfo& ErrorInfo)
								{
									if (!TestTrue(TEXT("CreateSession"), bSuccess))
									{
										Done.Execute();
										return;
									}

									TestPayload.Session = NewSession;
									TestPayload.JoinedSession = Cast<URH_JoinedSession>(NewSession);
									if (!TestNotNull(TEXT("Session"), TestPayload.Session.Get()) || !TestNotNull(TEXT("JoinedSession"), TestPayload.JoinedSession.Get()))
									{
										Done.Execute();
										return;
									}

									TestPayload.JoinedSession->GenerateVoipActionToken(Action, ChannelType, FRH_OnSessionGetVoipTokenDelegate::CreateLambda([this, Done](bool bSuccess, const FRHAPI_VoipTokenResponse& Token, const FRH_ErrorInfo& ErrorInfo)
										{
											if (!TestTrue(TEXT("GenerateVoipLoginToken"), bSuccess))
											{
												Done.Execute();
												return;
											}
											if (!TestTrue(TEXT("TokenIsValid"), Token.GetToken().Len() > 0))
											{
												Done.Execute();
												return;
											}

											Done.Execute();
										}));
								}));
						});
				}
			}
		});
}

#endif



