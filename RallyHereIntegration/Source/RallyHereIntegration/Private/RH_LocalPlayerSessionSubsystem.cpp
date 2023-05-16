#include "RH_LocalPlayerSessionSubsystem.h"
#include "RH_PlayerInfoSubsystem.h"
#include "RH_GameInstanceSubsystem.h"
#include "RallyHereIntegrationModule.h"
#include "OnlineSubsystem.h"
#include "RH_LocalPlayerSubsystem.h"
#include "RH_OnlineSubsystemNames.h"
#include "Engine/LocalPlayer.h"
#include "RH_NotificationSubsystem.h"

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

	if (GetLocalPlayerSubsystem()->GetNotificationSubsystem() != nullptr)
	{
		GetLocalPlayerSubsystem()->GetNotificationSubsystem()->OnNotificationStreamedByAPI.FindOrAdd(TEXT("session")).AddUObject(this, &URH_LocalPlayerSessionSubsystem::HandleNotification);
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
	if (GetLocalPlayerSubsystem()->GetNotificationSubsystem() != nullptr)
	{
		GetLocalPlayerSubsystem()->GetNotificationSubsystem()->OnNotificationStreamedByAPI.FindOrAdd(TEXT("session")).RemoveAll(this);
	}
}

void URH_LocalPlayerSessionSubsystem::OnUserChanged()
{
	UE_LOG(LogRHSession, Log, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::OnUserChanged();

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

	InitPropertiesWithDefaultValues();

	URH_OnlineSession::PollAllSessions(this, false, FRH_OnPollAllSessionsDelegate::CreateUObject(this, &URH_LocalPlayerSessionSubsystem::HandlePollAllSessionsComplete));	// immediate update
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
#if SESSIONS_SUPPORT_ETAGS
			const FString ETag = Notification.GetETag();
#else
			const FString ETag = FString();
#endif

			bool bShouldPoll = false;
			auto* Session = GetSessionById(SessionId);
			if (Session != nullptr)
			{
				if (Session->GetETag() != ETag || ETag.Len() <= 0)
				{
					// Session that we know about has changed, poll it
					bShouldPoll = true;
				}
			}
			else
			{
				// Session that we do not know about has been notified, poll it
				bShouldPoll = true;
			}

			if (bShouldPoll)
			{
				URH_OnlineSession::PollSingleSession(SessionId, this);
			}
		}
	}
}

void URH_LocalPlayerSessionSubsystem::HandlePollAllSessionsComplete(bool bSuccess, TArray<URH_SessionView*> SessionViews)
{
	OnLoginPollSessionsCompleteDelegate.Broadcast(bSuccess);
}

URH_PlayerInfoSubsystem* URH_LocalPlayerSessionSubsystem::GetPlayerInfoSubsystem() const
{
	auto* GI = GetLocalPlayerSubsystem()->GetLocalPlayer()->GetGameInstance();
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

IOnlineSubsystem* URH_LocalPlayerSessionSubsystem::GetOSS() const
{
	return GetLocalPlayerSubsystem()->GetOSS();
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
	FRH_SessionTemplate Template;
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
	}

	if (RHSession != nullptr)
	{
		RHSession->ImportAPISession(SessionWrapper, Template);

		if (ExistingRHSession != nullptr)
		{
			BLUEPRINT_OnSessionUpdatedDelegate.Broadcast(RHSession);
			OnSessionUpdatedDelegate.Broadcast(RHSession);
		}
		else
		{
			BLUEPRINT_OnSessionAddedDelegate.Broadcast(RHSession);
			OnSessionAddedDelegate.Broadcast(RHSession);
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
	FRH_SessionTemplate Template;
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

void URH_LocalPlayerSessionSubsystem::ReconcileAPISessions(const TArray<FRH_APISessionWithETag>& SessionsModified, const TArray<FString>& SessionNotModified, bool bOnlineOnly)
{
	// build a list of sessions not in the list
	TArray<FString> SessionIdsToRemove;
	Sessions.GenerateKeyArray(SessionIdsToRemove);

	for (const auto& Session : SessionsModified)
	{
		SessionIdsToRemove.RemoveSwap(Session.Data.SessionId);
	}
	SessionIdsToRemove.RemoveAll([&SessionNotModified](const FString& SessionId) { return SessionNotModified.Contains(SessionId); });

	// remove any sessions as needed
	for (const FString& SessionIdToRemove : SessionIdsToRemove)
	{
		auto Session = GetSessionById(SessionIdToRemove);
		if (Session != nullptr && (!Session->IsOffline() || !bOnlineOnly))
		{
			RemoveSessionById(SessionIdToRemove);
		}
	}

	// import any new session updates
	for (const auto& Session : SessionsModified)
	{
		ImportAPISession(Session);
	}

	// defer next update cycle
	if (Poller.IsValid())
	{
		Poller->DeferPollTimer();
	}
}


void URH_LocalPlayerSessionSubsystem::ImportAPITemplate(const FRH_APISessionTemplateWithETag& Template)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] : %s"), ANSI_TO_TCHAR(__FUNCTION__), *Template.Data.SessionType);

	FRH_SessionTemplate RHTemplate;
	RHTemplate.ImportAPITemplate(Template);

	Templates.Add(RHTemplate.SessionType, RHTemplate);

	// inform each session of the relevant type of the template update
	for (auto pair : Sessions)
	{
		if (pair.Value->GetSessionType() == RHTemplate.SessionType)
		{
			pair.Value->ImportTemplate(RHTemplate);
		}
	}
}

void URH_LocalPlayerSessionSubsystem::ReconcileAPITemplates(const TArray<FRH_APISessionTemplateWithETag>& TemplatesModified, const TArray<FString>& TemplatesNotModified, bool bOnlineOnly)
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

void URH_LocalPlayerSessionSubsystem::RemoveSessionById(const FString& SessionId)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] : %s"), ANSI_TO_TCHAR(__FUNCTION__), *SessionId);

	if (Sessions.Contains(SessionId))
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("Expiring session %s"), *SessionId);
		URH_SessionView* RHSession = Sessions.FindAndRemoveChecked(SessionId);

		BLUEPRINT_OnSessionRemovedDelegate.Broadcast(RHSession);
		OnSessionRemovedDelegate.Broadcast(RHSession);
		
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

bool URH_LocalPlayerSessionSubsystem::GetTemplate(const FString& Type, FRH_SessionTemplate& Template) const
{
	auto ptr = Templates.Find(Type);
	if (ptr != nullptr)
	{
		Template = *ptr;
		return true;
	}
	return false;
}

void URH_LocalPlayerSessionSubsystem::SearchForSessions(const FRH_SessionBrowserSearchParams& params, FRH_OnSessionSearchCompleteDelegateBlock Delegate)
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

	auto CompletionDelegate = FRH_OnPollAllSessionsDelegate::CreateWeakLambda(this, [this, Delegate](bool bSuccess, TArray<URH_SessionView*> InSessions)
	{
		Delegate.ExecuteIfBound(bSuccess, true);
	});

	URH_OnlineSession::PollAllSessions(this, false, CompletionDelegate);
}

void URH_LocalPlayerSessionSubsystem::ForcePollForUpdate()
{
	UE_LOG(LogRHSession, Log, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	if (Poller.IsValid())
	{
		Poller->ExecutePoll();
	}
	
}
