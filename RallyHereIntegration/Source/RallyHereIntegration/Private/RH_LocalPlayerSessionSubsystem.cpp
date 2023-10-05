#include "RH_LocalPlayerSessionSubsystem.h"
#include "RH_PlayerInfoSubsystem.h"
#include "RH_GameInstanceSubsystem.h"
#include "RallyHereIntegrationModule.h"
#include "OnlineSubsystem.h"
#include "RH_LocalPlayerSubsystem.h"
#include "RH_OnlineSubsystemNames.h"
#include "Engine/LocalPlayer.h"
#include "RH_PlayerNotifications.h"
#include "RH_PlatformSessionSyncer.h"
#include "Interfaces/OnlineGameActivityInterface.h"

URH_LocalPlayerSessionSubsystem::URH_LocalPlayerSessionSubsystem()
	: Super()
{
}

void URH_LocalPlayerSessionSubsystem::Initialize()
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Initialize();

	Poller = FRH_PollControl::CreateAutoPoller();

	InitPropertiesWithDefaultValues();

	// OSS bindings
	auto* OSS = GetOSS();
	if (OSS != nullptr && OSS->GetSessionInterface() != nullptr)
	{
		OSS->GetSessionInterface()->AddOnSessionUserInviteAcceptedDelegate_Handle(FOnSessionUserInviteAcceptedDelegate::CreateUObject(this, &URH_LocalPlayerSessionSubsystem::OnPlatformSessionInviteAccepted));
		OSS->GetSessionInterface()->AddOnCreateSessionCompleteDelegate_Handle(FOnCreateSessionCompleteDelegate::CreateUObject(this, &URH_LocalPlayerSessionSubsystem::OnPlatformSessionCreated));
		OSS->GetSessionInterface()->AddOnJoinSessionCompleteDelegate_Handle(FOnJoinSessionCompleteDelegate::CreateUObject(this, &URH_LocalPlayerSessionSubsystem::OnPlatformSessionJoined));
		OSS->GetSessionInterface()->AddOnStartSessionCompleteDelegate_Handle(FOnStartSessionCompleteDelegate::CreateUObject(this, &URH_LocalPlayerSessionSubsystem::OnPlatformSessionStarted));
		OSS->GetSessionInterface()->AddOnEndSessionCompleteDelegate_Handle(FOnEndSessionCompleteDelegate::CreateUObject(this, &URH_LocalPlayerSessionSubsystem::OnPlatformSessionEnded));
		OSS->GetSessionInterface()->AddOnDestroySessionCompleteDelegate_Handle(FOnDestroySessionCompleteDelegate::CreateUObject(this, &URH_LocalPlayerSessionSubsystem::OnPlatformSessionDestroyed));

		OSS->GetSessionInterface()->AddOnSessionParticipantsChangeDelegate_Handle(FOnSessionParticipantsChangeDelegate::CreateUObject(this, &URH_LocalPlayerSessionSubsystem::OnPlatformSessionParticipantChange));
		OSS->GetSessionInterface()->AddOnSessionParticipantRemovedDelegate_Handle(FOnSessionParticipantRemovedDelegate::CreateUObject(this, &URH_LocalPlayerSessionSubsystem::OnPlatformSessionParticipantRemoved));
	}
	if (OSS != nullptr && OSS->GetGameActivityInterface() != nullptr)
	{
		OSS->GetGameActivityInterface()->AddOnGameActivityActivationRequestedDelegate_Handle(FOnGameActivityActivationRequestedDelegate::CreateUObject(this, &URH_LocalPlayerSessionSubsystem::OnPlatformActivityActivation));
	}
}

void URH_LocalPlayerSessionSubsystem::Deinitialize()
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Deinitialize();

	if (Poller.IsValid())
	{
		Poller->StopPoll();
		Poller.Reset();
	}

	// this should not be necessary in normal flow, but worth doing in case of abnormal cases
	if (GetLocalPlayerSubsystem()->GetPlayerNotifications() != nullptr)
	{
		GetLocalPlayerSubsystem()->GetPlayerNotifications()->OnNotificationStreamedByAPI.FindOrAdd(TEXT("session")).RemoveAll(this);
	}

	// OSS bindings
	auto* OSS = GetOSS();
	if (OSS != nullptr && OSS->GetSessionInterface() != nullptr)
	{
		OSS->GetSessionInterface()->ClearOnSessionUserInviteAcceptedDelegates(this);
		OSS->GetSessionInterface()->ClearOnCreateSessionCompleteDelegates(this);
		OSS->GetSessionInterface()->ClearOnJoinSessionCompleteDelegates(this);

		OSS->GetSessionInterface()->ClearOnSessionParticipantsChangeDelegates(this);
		OSS->GetSessionInterface()->ClearOnSessionParticipantRemovedDelegates(this);
	}
	if (OSS != nullptr && OSS->GetGameActivityInterface() != nullptr)
	{
		OSS->GetGameActivityInterface()->ClearOnGameActivityActivationRequestedDelegates(this);
	}

}

void URH_LocalPlayerSessionSubsystem::OnUserChanged(const FGuid& OldPlayerUuid, class URH_PlayerInfo* OldLocalPlayerInfo)
{
	UE_LOG(LogRHSession, Log, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::OnUserChanged(OldPlayerUuid, OldLocalPlayerInfo);

	StopPolling();

	// clean up any deferred session updates we never processed
	DeferredSessionUpdates.Empty();

	// remove all active sessions to clean them up (asynchronous!)
	TArray<URH_SessionView*> SessionsArray = GetSessions();
	for (auto Session : SessionsArray)
	{
		RemoveSession(Session);
	}
	
	// ensure sessions array has been cleared out by the above
	check(Sessions.Num() == 0);

	// clear out old notification binding
	if (OldLocalPlayerInfo != nullptr)
	{
		OldLocalPlayerInfo->GetPlayerNotifications()->OnNotificationStreamedByAPI.FindOrAdd(TEXT("session")).RemoveAll(this);
	}

	InitPropertiesWithDefaultValues();

	// add new notification binding
	if (GetLocalPlayerSubsystem()->GetPlayerNotifications() != nullptr)
	{
		GetLocalPlayerSubsystem()->GetPlayerNotifications()->OnNotificationStreamedByAPI.FindOrAdd(TEXT("session")).AddUObject(this, &URH_LocalPlayerSessionSubsystem::HandleNotification);
	}

	URH_SessionView::PollAllSessions(this, true, true, FRH_OnPollAllSessionsDelegate::CreateUObject(this, &URH_LocalPlayerSessionSubsystem::HandlePollAllSessionsComplete));	// immediate update
	StartPolling();		// start poll timer
}

void URH_LocalPlayerSessionSubsystem::InitPropertiesWithDefaultValues()
{
	// intentionally empty for now.  Assume it is valid to have sessions in the expiring list, as we may be cleaning up old user sessions for this local player
}

void URH_LocalPlayerSessionSubsystem::HandleNotification(const FRHAPI_Notification& Notification, const FString& APIName, const TArray<FString>& APIParams)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	if (APIName == TEXT("session"))	// double checking, but this should be implied
	{
		// extract the session ID from the URL
		// the first API param should be the API version
		// the second API param should be the object type
		if (APIParams.Num() >= 3 && APIParams[0] == TEXT("v1") && APIParams[1] == TEXT("session"))
		{
			// the third API param should be the session ID
			const FString& SessionId = APIParams[2];
			const FString ETag = Notification.GetEtag();

			auto* Session = GetSessionById(SessionId);
			if (Session != nullptr)
			{
				Session->AddDeferredPoll(FRH_DeferredSessionPoll(FRH_DeferredSessionPoll::Type::Notification, FRH_PollCompleteFunc(), ETag));
			}
			else
			{
				// this may be a session we need to know about but do not know about yet, do an immediate poll to find out
				ForcePollForUpdate();
			}
		}
	}
}

void URH_LocalPlayerSessionSubsystem::HandlePollAllSessionsComplete(bool bSuccess, const TArray<FString>& SessionIds)
{
	SCOPED_NAMED_EVENT(RallyHere_BroadcastLoginPollSessionsComplete, FColor::Purple);
	OnLoginPollSessionsCompleteDelegate.Broadcast(bSuccess);
	BLUEPRINT_OnLoginPollSessionsCompleteDelegate.Broadcast(bSuccess);
}

URH_PlayerInfoSubsystem* URH_LocalPlayerSessionSubsystem::GetPlayerInfoSubsystem() const
{
	auto* LP = GetLocalPlayerSubsystem();
	if (LP != nullptr)
	{
		return LP->GetPlayerInfoSubsystem();
	}
	return nullptr;
}

IOnlineSubsystem* URH_LocalPlayerSessionSubsystem::GetOSS() const
{
	return GetLocalPlayerSubsystem()->GetOSS();
}

FUniqueNetIdWrapper URH_LocalPlayerSessionSubsystem::GetOSSUniqueId() const
{
	return GetLocalPlayerSubsystem()->GetOSSUniqueId();
}

FGuid URH_LocalPlayerSessionSubsystem::GetPlayerUuid() const
{
	return GetLocalPlayerSubsystem()->GetPlayerUuid();
}

TArray<URH_SessionView*> URH_LocalPlayerSessionSubsystem::GetSessionsByType(const FString& Type) const
{
	TArray<URH_SessionView*> SessionsArray = GetSessions();
	auto ptr = SessionsArray.RemoveAll(
		[Type](const URH_SessionView* In) { return In->GetSessionData().Type != Type; }
	);

	return SessionsArray;
}

TArray<URH_InvitedSession*> URH_LocalPlayerSessionSubsystem::GetInvitedSessionsByType(const FString& Type) const
{
	TArray<URH_SessionView*> SessionsArray = GetSessions();
	TArray<URH_InvitedSession*> InvitedSessionsArray;
	for (auto* Session : SessionsArray)
	{
		if (Session->GetSessionData().Type == Type && Session->IsA(URH_InvitedSession::StaticClass()))
		{
			InvitedSessionsArray.Add(Cast<URH_InvitedSession>(Session));
		}
	}

	return InvitedSessionsArray;
}

TArray<URH_JoinedSession*> URH_LocalPlayerSessionSubsystem::GetJoinedSessionsByType(const FString& Type) const
{
	TArray<URH_SessionView*> SessionsArray = GetSessions();
	TArray<URH_JoinedSession*> JoinedSessionsArray;
	for (auto* Session : SessionsArray)
	{
		if (Session->GetSessionData().Type == Type && Session->IsA(URH_JoinedSession::StaticClass()))
		{
			JoinedSessionsArray.Add(Cast<URH_JoinedSession>(Session));
		}
	}

	return JoinedSessionsArray;
}

URH_JoinedSession* URH_LocalPlayerSessionSubsystem::GetFirstActiveSession() const
{
	TArray<URH_SessionView*> SessionsArray = GetSessions();
	auto ptr = SessionsArray.FindByPredicate(
		[](const URH_SessionView* In) {
			const URH_JoinedSession* SessionData = Cast<const URH_JoinedSession>(In);
			if (SessionData != nullptr)
			{
				return SessionData->IsActive();
			}
			return false;
		}
	);

	return ptr ? Cast<URH_JoinedSession>(*ptr) : nullptr;
}

URH_SessionView* URH_LocalPlayerSessionSubsystem::CreateOrUpdateRHSession(const FRH_APISessionWithETag& SessionWrapper, const ERHAPI_SessionPlayerStatus& LocalPlayerStatus)
{
	auto& Session = SessionWrapper.Data;

	bool bIsOffline = false;
	if (auto* CustomData = Session.GetCustomDataOrNull())
	{
		auto* OfflineFlag = CustomData->Find(RH_SessionCustomDataKeys::OfflineFlag);
		if (OfflineFlag != nullptr && FCString::ToBool(**OfflineFlag))
		{
			bIsOffline = true;
		}
	}

	URH_SessionView* RHSession = nullptr;
	const auto ExistingPtr = Sessions.Find(Session.SessionId);
	URH_SessionView* ExistingRHSession = ExistingPtr ? *ExistingPtr : nullptr;

	// Lookup template from the cache, this should be always existing due to checks in the Import logic
	FRHAPI_SessionTemplate Template;
	if (!GetTemplate(Session.Type, Template))
	{
		return nullptr;
	}

	if (LocalPlayerStatus == ERHAPI_SessionPlayerStatus::Invited)
	{
		// existing session, if it exists, SHOULD NOT be a fully hydrated session.  This should be handled by the preprocessing layer
		ensure(!ExistingRHSession || !ExistingRHSession->IsA(URH_JoinedSession::StaticClass()));

		RHSession = ExistingRHSession != nullptr ? ExistingRHSession : NewObject<URH_InvitedSession>(this);
	}
	else
	{
		// existing session, if it exists, SHOULD be a fully hydrated session.  This should be handled by the preprocessing layer
		ensure(!ExistingRHSession || ExistingRHSession->IsA(URH_JoinedSession::StaticClass()));
		if (bIsOffline)
		{
			RHSession = ExistingRHSession != nullptr ? ExistingRHSession : NewObject<URH_OfflineSession>(this);
		}
		else
		{
			RHSession = ExistingRHSession != nullptr ? ExistingRHSession : NewObject<URH_OnlineSession>(this);
		}
	}

	if (RHSession != nullptr && !Sessions.Contains(Session.SessionId))
	{
		Sessions.Add(Session.SessionId, RHSession);

		// add a listener to remove the session locally if it is not found
		RHSession->OnSessionNotFoundDelegate.AddWeakLambda(this, [this](URH_SessionView* Session)
			{
				RemoveSessionById(Session->GetSessionId());
			});
	}

	if (RHSession != nullptr)
	{
		RHSession->ImportAPISession(SessionWrapper, Template);

		if (ExistingRHSession != nullptr)
		{
			SCOPED_NAMED_EVENT(RallyHere_BroadcastSessionUpdated, FColor::Purple);
			BLUEPRINT_OnSessionUpdatedDelegate.Broadcast(RHSession);
			OnSessionUpdatedDelegate.Broadcast(RHSession);
		}
		else
		{
			{
				SCOPED_NAMED_EVENT(RallyHere_BroadcastSessionAdded, FColor::Purple);
				BLUEPRINT_OnSessionAddedDelegate.Broadcast(RHSession);
				OnSessionAddedDelegate.Broadcast(RHSession);
			}

			// if this is an online session, start listening for updates now that it is in the tracking list
			if (RHSession->IsOnline())
			{
				RHSession->StartPolling();
			}
		}
	}

	// this must be done after the import above
	if (RHSession != nullptr)
	{
		auto JoinedSession = Cast<URH_JoinedSession>(RHSession);
		if (JoinedSession != nullptr)
		{
			CreatePlatformSyncer(JoinedSession);
		}
	}

	return RHSession;
}

bool URH_LocalPlayerSessionSubsystem::LocalPlayerStatusFromSession(const FRHAPI_Session& Session, ERHAPI_SessionPlayerStatus& Status) const
{
	FGuid PlayerUuid = GetLocalPlayerSubsystem()->GetPlayerUuid();
	bool bContainsPlayer = false;
	for (auto& Team : Session.Teams)
	{
		for (auto& Player : Team.Players)
		{
			if (Player.PlayerUuid == PlayerUuid)
			{
				Status = Player.Status;
				return true;
			}
		}
	}

	return false;
}

bool URH_LocalPlayerSessionSubsystem::PreprocessAPISessionImport(const FRHAPI_Session& Session, ERHAPI_SessionPlayerStatus& Status)
{
	// if the player is not in this session, make sure we are not tracking them
	if (!LocalPlayerStatusFromSession(Session, Status))
	{
		// clean up the session if we are in it
		RemoveSessionById(Session.SessionId);
		return false;
	}

	// block importing a session we do not have the template for
	FRHAPI_SessionTemplate Template;
	if (!GetTemplate(Session.Type, Template))
	{
		// clean up the session if we are in it
		RemoveSessionById(Session.SessionId);
		return false;
	}

	URH_SessionView* ExistingSession = GetSessionById(Session.SessionId);
	if (ExistingSession != nullptr)
	{
		ERHAPI_SessionPlayerStatus ExistingStatus;
		if (LocalPlayerStatusFromSession(ExistingSession->GetSessionData(), ExistingStatus) && ExistingStatus != Status)
		{
			// if we transitioned from invited to a member or vice versa, expire the old session and potentially defer the update until expiration finishes
			if (Status == ERHAPI_SessionPlayerStatus::Invited || ExistingStatus == ERHAPI_SessionPlayerStatus::Invited)
			{
				RemoveSession(ExistingSession);
			}
		}
	}

	// check for reasons to defer
	if (ExpiringSessions.Contains(Session.SessionId))
	{
		DeferredSessionUpdates.Add(Session.SessionId, Session);
		return false;
	}

	return true;
}

void URH_LocalPlayerSessionSubsystem::ImportAPISession(const FRH_APISessionWithETag& SessionWrapper)
{
	auto& Session = SessionWrapper.Data;
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] : %s"), ANSI_TO_TCHAR(__FUNCTION__), *Session.SessionId);

	// if this session is currently expiring, let it expire before we process it again.  Add to deferred list
	ERHAPI_SessionPlayerStatus Status = ERHAPI_SessionPlayerStatus::Invited;
	if (!PreprocessAPISessionImport(Session, Status))
	{
		return;
	}

	URH_SessionView* RHSession = CreateOrUpdateRHSession(SessionWrapper, Status);

	// TODO - if this session was previously expiring... panic?
	check(!ExpiringSessions.Contains(Session.SessionId));
}

void URH_LocalPlayerSessionSubsystem::ReconcileAPISessions(const TArray<FString>& SessionIds, const TOptional<FString>& ETag)
{
	// build a list of sessions not in the list
	TArray<FString> SessionIdsToRemove;

	// remove any templates as needed
	for (const auto& Pair : Sessions)
	{
		if (!Pair.Value->IsOffline() && !SessionIds.Contains(Pair.Key))
		{
			SessionIdsToRemove.Add(Pair.Key);
		}
	}

	for (const auto& SessionId : SessionIdsToRemove)
	{
		RemoveSessionById(SessionId);
	}

	AllSessionsETag = ETag;

	// defer next update cycle
	if (Poller.IsValid())
	{
		Poller->DeferPollTimer();
	}
}


void URH_LocalPlayerSessionSubsystem::ImportAPITemplate(const FRHAPI_SessionTemplate& Template)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] : %s"), ANSI_TO_TCHAR(__FUNCTION__), *Template.SessionType);

	Templates.Add(Template.SessionType, Template);

	// inform each session of the relevant type of the template update
	for (auto pair : Sessions)
	{
		if (pair.Value->GetSessionType() == Template.SessionType)
		{
			pair.Value->ImportTemplate(Template);
		}
	}
}

void URH_LocalPlayerSessionSubsystem::ReconcileAPITemplates(const TArray<FString>& TemplateNames, const TOptional<FString>& ETag)
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

	for (const auto& TemplateName : TemplatesToRemove)
	{
		Templates.Remove(TemplateName);
	}

	AllTemplatesETag = ETag;
}

void URH_LocalPlayerSessionSubsystem::RemoveSessionById(const FString& SessionId)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] : %s"), ANSI_TO_TCHAR(__FUNCTION__), *SessionId);

	if (Sessions.Contains(SessionId))
	{
		UE_LOG(LogRHSession, Log, TEXT("Expiring session %s"), *SessionId);
		auto* RHSession = Sessions.FindAndRemoveChecked(SessionId);

		{
			SCOPED_NAMED_EVENT(RallyHere_BroadcastSessionRemoved, FColor::Purple);
			BLUEPRINT_OnSessionRemovedDelegate.Broadcast(RHSession);
			OnSessionRemovedDelegate.Broadcast(RHSession);
		}
		
		ExpiringSessions.Add(SessionId, RHSession);
		RHSession->Expire(FRH_OnSessionExpiredDelegate::CreateUObject(this, &URH_LocalPlayerSessionSubsystem::OnExpirationComplete));
	}
	else if (DeferredSessionUpdates.Contains(SessionId))
	{
		UE_LOG(LogRHSession, Log, TEXT("Removing session %s from deferred list as the session itself was removed"), *SessionId);
		DeferredSessionUpdates.FindAndRemoveChecked(SessionId);
	}
	else
	{
		UE_LOG(LogRHSession, Warning, TEXT("Attempting to remove session %s that is not in the sessions map"), *SessionId);
	}
}

void URH_LocalPlayerSessionSubsystem::OnExpirationComplete(URH_SessionView* RHSession)
{
	const FString& SessionId = RHSession->GetSessionId();

	UE_LOG(LogRHSession, Verbose, TEXT("[%s] : %s"), ANSI_TO_TCHAR(__FUNCTION__), *SessionId);

	if (ExpiringSessions.Contains(SessionId))
	{
		UE_LOG(LogRHSession, Log, TEXT("Expired session %s"), *SessionId);
		ExpiringSessions.FindAndRemoveChecked(SessionId);

		// remove the platform syncer
		auto* PlatformSyncer = GetPlatformSyncerByRHSessionId(SessionId);
		if (PlatformSyncer != nullptr)
		{
			// at this point, cleanup should be complete
			check(PlatformSyncer->IsCleanupComplete());
			PlatformSyncers.Remove(SessionId);

			// copy the map to iterate it, in case of further removals
			auto SyncerMap = PlatformSyncers;
			for (auto& Pair : SyncerMap)
			{
				// put the syncer into unsynchronized state by faking an update - this is to resolve some race conditions around removal and joining on platforms such as Epic where some session types can only be valid for one session at a time on the platform but not on the RH side
				Pair.Value->OnRHSessionUpdated(Pair.Value->GetRHSession());
			}
		}

		{
			SCOPED_NAMED_EVENT(RallyHere_BroadcastSessionExpirationComplete, FColor::Purple);
			BLUEPRINT_OnSessionExpirationCompleteDelegate.Broadcast(RHSession);
			OnSessionExpirationCompleteDelegate.Broadcast(RHSession);
		}

		if (DeferredSessionUpdates.Contains(SessionId))
		{
			UE_LOG(LogRHSession, Log, TEXT("Expired session %s was in deferred list, preprocessing"), *SessionId);
			// process the deferred session now that it is no longer expiring
			ImportAPISession(DeferredSessionUpdates.FindAndRemoveChecked(SessionId));
		}
	}
	else
	{
		UE_LOG(LogRHSession, Warning, TEXT("Expired session %s was not in the expiring sesions map"), *SessionId);
	}
}

bool URH_LocalPlayerSessionSubsystem::GetTemplate(const FString& Type, FRHAPI_SessionTemplate& Template) const
{
	auto ptr = Templates.Find(Type);
	if (ptr != nullptr)
	{
		Template = *ptr;
		return true;
	}
	return false;
}

void URH_LocalPlayerSessionSubsystem::SearchForSessions(const FRH_SessionBrowserSearchParams& params, const FRH_OnSessionSearchCompleteDelegateBlock& Delegate)
{
	auto pGameInstance = GetLocalPlayerSubsystem()->GetLocalPlayer()->GetGameInstance();
	bool bSearched = false;
	if (pGameInstance != nullptr)
	{
		auto pRHGI = pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
		if (pRHGI != nullptr)
		{
			auto pSearchCache = pRHGI->GetSessionSearchCache();
			if (pSearchCache != nullptr)
			{
				pSearchCache->Search(params, Delegate);
				bSearched = true;
			}
		}
	}

	if (!bSearched)
	{
		FRH_SessionBrowserSearchResult emptyResult;
		Delegate.ExecuteIfBound(false, emptyResult);
	}
}


void URH_LocalPlayerSessionSubsystem::StartPolling()
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	static FName SessionPollTimerName(TEXT("LocalPlayerAllSessions"));

	if (Poller.IsValid())
	{
		Poller->StartPoll(FRH_PollFunc::CreateUObject(this, &URH_LocalPlayerSessionSubsystem::PollForUpdate), SessionPollTimerName);
	}
}

void URH_LocalPlayerSessionSubsystem::StopPolling()
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	if (Poller.IsValid())
	{
		Poller->StopPoll();
	}
}

void URH_LocalPlayerSessionSubsystem::PollForUpdate(const FRH_PollCompleteFunc& Delegate)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	auto AuthContext = GetAuthContext();
	if (!AuthContext.IsValid() || !AuthContext->IsLoggedIn())
	{
		Delegate.ExecuteIfBound(false, true);
		return;
	}

	auto CompletionDelegate = FRH_OnPollAllSessionsDelegate::CreateWeakLambda(this, [this, Delegate](bool bSuccess, const TArray<FString>& SessionIds)
	{
		Delegate.ExecuteIfBound(bSuccess, true);
	});

	URH_SessionView::PollAllSessions(this, true, false, CompletionDelegate);
}

void URH_LocalPlayerSessionSubsystem::ForcePollForUpdate(bool bClearETag)
{
	UE_LOG(LogRHSession, Log, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	if (bClearETag)
	{
		AllSessionsETag.Reset();
	}

	if (Poller.IsValid())
	{
		Poller->ExecutePoll();
	}
	else
	{
		PollForUpdate(FRH_PollCompleteFunc());
	}
}

float URH_LocalPlayerSessionSubsystem::GetPollTimeRemaining() const
{
	return Poller.IsValid() ? Poller->GetTimeRemaining() : -1.f;
}

// Platform Session Support

URH_PlatformSessionSyncer* URH_LocalPlayerSessionSubsystem::GetPlatformSyncerByPlatformSessionId(const FUniqueNetIdRepl& PlatformSessionId) const
{
	TArray<URH_PlatformSessionSyncer*> PlatformSyncersArray;
	PlatformSyncers.GenerateValueArray(PlatformSyncersArray);
	auto ptr = PlatformSyncersArray.FindByPredicate(
		[PlatformSessionId](const URH_PlatformSessionSyncer* In) {
			if (In != nullptr)
			{
				const auto* PlatformSession = In->GetPlatformSession();
				if (PlatformSession != nullptr && PlatformSession->SessionInfo)
				{
					const auto SessionInfo = PlatformSession->SessionInfo;
					if (SessionInfo.IsValid() && SessionInfo->IsValid())
					{
						return SessionInfo->GetSessionId() == PlatformSessionId;
					}
				}
			}
			return false;
		}
	);

	return ptr != nullptr ? *ptr : nullptr;
}

URH_PlatformSessionSyncer* URH_LocalPlayerSessionSubsystem::CreatePlatformSyncer(URH_JoinedSession* JoinedSession)
{
	// this function is conditional - it tries to early out when it can to not created extraneous objects
	auto SessionId = JoinedSession->GetSessionId();
	auto PlatformSyncer = GetPlatformSyncerByRHSessionId(SessionId);

	if (PlatformSyncer == nullptr)
	{
		// do sanity checking before object creation while we can
		FString SessionType;
		if (JoinedSession != nullptr && JoinedSession->GetTemplate().GetEngineSessionType(SessionType))
		{
			// for now, only support RH sessions owned by a local player session subsystem
			auto* OSS = GetOSS();
			if (OSS != nullptr && OSS->GetSessionInterface() != nullptr && RH_GetPlatformFromOSSName(OSS->GetSubsystemName()).IsSet())
			{
				PlatformSyncer = NewObject<URH_PlatformSessionSyncer>(this);
				if (PlatformSyncer->Initialize(SessionId, this))
				{
					PlatformSyncers.Add(SessionId, PlatformSyncer);
				}
			}
		}
	}

	return PlatformSyncer;
}

bool URH_LocalPlayerSessionSubsystem::FilterOSSCallbackUser(const int32 ControllerId)
{
	auto* LPSS = GetLocalPlayerSubsystem();
	if (ControllerId != INVALID_CONTROLLERID && LPSS->GetLocalPlayer()->GetControllerId() != ControllerId)
	{		
		return true;
	}

	return false;
}

bool URH_LocalPlayerSessionSubsystem::FilterOSSCallbackUser(const FUniqueNetId& LocalUserId)
{
	auto* LPSS = GetLocalPlayerSubsystem();
	if (LPSS->GetOSSUniqueId() == LocalUserId)
	{
		return true;
	}

	return false;
}

void URH_LocalPlayerSessionSubsystem::OnPlatformActivityActivation(const FUniqueNetId& LocalUserId, const FString& ActivityId, const FOnlineSessionSearchResult* SessionInfo)
{
	// validate that this is for our user
	if (FilterOSSCallbackUser(LocalUserId))
	{
		UE_LOG(LogRHSession, VeryVerbose, TEXT("[%s] : Ignoring invite to %s because user is filtered"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}
	if (!SessionInfo)
	{
		UE_LOG(LogRHSession, VeryVerbose, TEXT("[%s] : Ignoring invite to %s because it has no session dat"), ANSI_TO_TCHAR(__FUNCTION__));
		return;
	}

	FString SessionIdStr = SessionInfo->GetSessionIdStr();

	// we have received a notification that the user accepted an invitation from the system.  We need to attempt to join that session (at which point we will resynchronize with it via the RHSession)
	
	// we need to join the session
	URH_PlatformSessionSyncer::JoinRHSessionByPlatformSession(this, *SessionInfo, URH_OnlineSession::GetJoinDetailDefaults(this), FRH_GenericSuccessWithErrorBlock());
}

void URH_LocalPlayerSessionSubsystem::OnPlatformSessionInviteAccepted(const bool bSuccesful, const int32 ControllerId, FUniqueNetIdPtr InvitingUserId, const FOnlineSessionSearchResult& Session)
{
	FString SessionIdStr = Session.GetSessionIdStr();

	// validate that this is for our user
	if (FilterOSSCallbackUser(ControllerId))
	{
		UE_LOG(LogRHSession, VeryVerbose, TEXT("[%s] : Ignoring invite to %s because user is filtered"), ANSI_TO_TCHAR(__FUNCTION__), *SessionIdStr);
		return;
	}

	// we have received a notification that the user accepted an invitation from the system.  We need to attempt to join that session (at which point we will resynchronize with it via the RHSession)
	UE_LOG(LogRHSession, Log, TEXT("[%s] : %s"), ANSI_TO_TCHAR(__FUNCTION__), *SessionIdStr);

	if (bSuccesful)
	{
		// we need to join the session
		URH_PlatformSessionSyncer::JoinRHSessionByPlatformSession(this, Session, URH_OnlineSession::GetJoinDetailDefaults(this), FRH_GenericSuccessWithErrorBlock());
	}
}

void URH_LocalPlayerSessionSubsystem::OnPlatformSessionCreated(FName SessionName, bool bSuccess)
{
	auto* Syncer = GetPlatformSyncerByRHSessionId(SessionName.ToString());
	if (Syncer != nullptr)
	{
		Syncer->OnPlatformSessionCreated(bSuccess);
	}
}

void URH_LocalPlayerSessionSubsystem::OnPlatformSessionJoined(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{
	auto* Syncer = GetPlatformSyncerByRHSessionId(SessionName.ToString());
	if (Syncer != nullptr)
	{
		Syncer->OnPlatformSessionJoined(Result);
	}
}

void URH_LocalPlayerSessionSubsystem::OnPlatformSessionStarted(FName SessionName, bool bSuccess)
{
	auto* Syncer = GetPlatformSyncerByRHSessionId(SessionName.ToString());
	if (Syncer != nullptr)
	{
		Syncer->OnPlatformSessionStarted(bSuccess);
	}
}

void URH_LocalPlayerSessionSubsystem::OnPlatformSessionEnded(FName SessionName, bool bSuccess)
{
	auto* Syncer = GetPlatformSyncerByRHSessionId(SessionName.ToString());
	if (Syncer != nullptr)
	{
		Syncer->OnPlatformSessionEnded(bSuccess);
	}
}

void URH_LocalPlayerSessionSubsystem::OnPlatformSessionDestroyed(FName SessionName, bool bSuccess)
{
	auto* Syncer = GetPlatformSyncerByRHSessionId(SessionName.ToString());
	if (Syncer != nullptr)
	{
		Syncer->OnPlatformSessionDestroyed(bSuccess);
	}
}

void URH_LocalPlayerSessionSubsystem::OnPlatformSessionParticipantChange(FName SessionName, const FUniqueNetId& UniqueNetId, bool bJoined)
{
	auto* Syncer = GetPlatformSyncerByRHSessionId(SessionName.ToString());
	if (Syncer != nullptr)
	{
		if (FilterOSSCallbackUser(UniqueNetId))
		{
			// the local user left a OSS session, update the RH Session
			auto RHSession = Syncer->GetRHSession();
			if (RHSession != nullptr)
			{
				RHSession->Leave(true);
			}
		}
	}
}

void URH_LocalPlayerSessionSubsystem::OnPlatformSessionParticipantRemoved(FName SessionName, const FUniqueNetId& UniqueNetId)
{
	// this function is specifically for players kicked, but just treat it as a participant being removed
	OnPlatformSessionParticipantChange(SessionName, UniqueNetId, false);
}