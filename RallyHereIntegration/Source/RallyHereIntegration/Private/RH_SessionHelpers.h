
#pragma once

#include "RH_SessionData.h"
#include "RallyHereAPIHelpers.h"
#include "OnlineSubsystem.h"

// auth context support
class FRH_SessionHelper : public FRH_AsyncTaskHelper
{
protected:
	FRH_SessionHelper(FRH_SessionOwnerPtr InSessionOwner, int32 InPriority)
		: FRH_AsyncTaskHelper(InPriority)
		, SessionOwner(InSessionOwner)
	{
	}

	TSharedPtr<RallyHereAPI::FAuthContext> GetAuthContext() const
	{
		if (SessionOwner.IsValid())
		{
			return SessionOwner->GetSessionAuthContext();
		}

		return nullptr;
	}

	FRH_SessionOwnerPtr SessionOwner;
};

// Boilerplate class that supports running the RHSession's internal poll and waiting on a result (deduplicated and throttled, but requires a pre-existing RHSession)
class FRH_SessionPollHelper : public FRH_SessionHelper
{
protected:
	FRH_SessionPollHelper(FRH_SessionOwnerPtr InSessionOwner, const FString& InSessionId, int32 InPriority)
		: FRH_SessionHelper(InSessionOwner, InPriority)
		, SessionId(InSessionId)
	{
	}


	void DoSessionLookup()
	{
		if (SessionOwner.IsValid())
		{
			auto* PolledSession = Cast<URH_JoinedSession>(SessionOwner->GetSessionById(SessionId));

			if (PolledSession != nullptr)
			{
				PolledSession->AddDeferredPoll(FRH_DeferredSessionPoll(FRH_DeferredSessionPoll::Type::Modification, FRH_PollCompleteFunc::CreateSP(this, &FRH_SessionPollHelper::OnSessionPollComplete)));
			}
			else
			{
				Failed(TEXT("Could not find session"));
			}
		}
		else
		{
			Failed(TEXT("Session owner is invalid"));
		}
	}

	void OnSessionPollComplete(bool bSuccess, bool)
	{
		if (bSuccess && SessionOwner.IsValid())
		{
			RHSession = Cast<URH_JoinedSession>(SessionOwner->GetSessionById(SessionId));
			Completed(RHSession.IsValid());	// add or update can fail in some edge cases, try to be graceful
		}
		else
		{
			Failed("Session Poll Failed");
		}
	}

	FString SessionId;
	TWeakObjectPtr<URH_JoinedSession> RHSession;
};

// Boilerplate class that does a full lookup of session data from the API (no-deduplicaiton or throttling, but does not require a pre-existing RHSession)
class FRH_SessionLookupHelper : public FRH_SessionHelper
{
public:
	FRH_SessionLookupHelper(FRH_SessionOwnerPtr InSessionOwner, const FString& InSessionId, int32 InPriority)
		: FRH_SessionHelper(InSessionOwner, InPriority)
		, SessionId(InSessionId)
	{
	}

protected:

	void DoSessionLookup()
	{
		if (!SessionOwner.IsValid())
		{
			Failed(TEXT("Session owner is invalid"));
			return;
		}

		// Read session data
		RallyHereAPI::Traits_GetSessionById::Request Request;
		Request.AuthContext = GetAuthContext();
		Request.SessionId = SessionId;
		Request.IfNoneMatch = SessionOwner->GetETagForSession(SessionId);

		auto HttpRequest = RallyHereAPI::Traits_GetSessionById::DoCall(RH_APIs::GetSessionsAPI(), Request, RallyHereAPI::Traits_GetSessionById::Delegate::CreateSP(this, &FRH_SessionLookupHelper::OnSessionLookup), TaskPriority);
		if (!HttpRequest)
		{
			Failed(TEXT("Could not create http request to lookup session"));
		}
	}

	void OnSessionLookup(const RallyHereAPI::Traits_GetSessionById::Response& Resp)
	{
		if (!SessionOwner.IsValid())
		{
			Failed(TEXT("Session owner is invalid"));
			return;
		}

		if (Resp.IsSuccessful())
		{
			SessionCache = FRH_APISessionWithETag(Resp.Content, Resp.ETag);
			
			CheckTemplateForSessionCache();
		}
		else if (Resp.GetHttpResponseCode() == (EHttpResponseCodes::NotModified))
		{
			// defer the poll, as we received an update here that said we are up to date
			auto* RHSessionView = SessionOwner->GetSessionById(SessionId);
			if (RHSessionView != nullptr)
			{
				RHSessionView->DeferPolling();
			}
			RHSession = Cast<URH_JoinedSession>(RHSessionView);
			Completed(RHSession.IsValid());	// add or update can fail in some edge cases, try to be graceful
		}
		else if (Resp.GetHttpResponseCode() == EHttpResponseCodes::NotFound && Resp.GetJsonResponse().IsValid())
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
						SCOPED_NAMED_EVENT(RallyHere_BroadcastSessionNotFound, FColor::Purple);
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

	void CheckTemplateForSessionCache()
	{
		if (!SessionOwner.IsValid())
		{
			Failed(TEXT("Session owner is invalid"));
			return;
		}

		FRHAPI_SessionTemplate Template;
		if (SessionOwner->GetTemplate(SessionCache.Data.Type, Template))
		{
			// template is already loaded, so go ahead with import
			OnReadyForSessionImport();
		}
		else
		{
			RallyHereAPI::Traits_GetSessionTemplateByType::Request Request;
			Request.AuthContext = GetAuthContext();
			Request.SessionType = SessionCache.Data.Type;

			auto HttpRequest = RallyHereAPI::Traits_GetSessionTemplateByType::DoCall(RH_APIs::GetSessionsAPI(), Request, RallyHereAPI::Traits_GetSessionTemplateByType::Delegate::CreateSP(this, &FRH_SessionLookupHelper::OnSessionTemplateLookup), TaskPriority);
		}
	}

	void OnSessionTemplateLookup(const RallyHereAPI::Traits_GetSessionTemplateByType::Response& Resp)
	{
		if (!SessionOwner.IsValid())
		{
			Failed(TEXT("Session owner is invalid"));
			return;
		}

		if (Resp.IsSuccessful())
		{
			SessionOwner->ImportAPITemplate(Resp.Content);
			OnReadyForSessionImport();
		}
		else
		{
			Failed(FString::Printf(TEXT("Failed to lookup session type %s for session %s"), *SessionCache.Data.Type, *SessionId));
		}
	}

	void OnReadyForSessionImport()
	{
		if (!SessionOwner.IsValid())
		{
			Failed(TEXT("Session owner is invalid"));
			return;
		}

		SessionOwner->ImportAPISession(SessionCache);
		RHSession = Cast<URH_JoinedSession>(SessionOwner->GetSessionById(SessionId));

		Completed(RHSession.IsValid());	// add or update can fail in some edge cases, try to be graceful
	}

	FString SessionId;
	TWeakObjectPtr<URH_JoinedSession> RHSession;
	FRH_APISessionWithETag SessionCache;
};


// Generic lambda-capable class for doing a request, checking return type, and then doing a session read
template<typename BaseType>
class FRH_SessionRequestAndModifyHelper : public FRH_SessionPollHelper
{
public:
	FRH_SessionRequestAndModifyHelper(FRH_SessionOwnerPtr InSessionOwner, const FString& InSessionId, FRH_OnSessionUpdatedDelegateBlock InDelegate = FRH_OnSessionUpdatedDelegateBlock(), int32 InPriority = DefaultRallyHereAPIPriority)
		: FRH_SessionPollHelper(InSessionOwner, InSessionId, InPriority)
		, Delegate(InDelegate)
	{
	}

	virtual void Start(const typename BaseType::Request& InRequest)
	{
		Started();
		if (SessionOwner.IsValid() && GetAuthContext().IsValid())
		{
			auto HttpRequest = BaseType::DoCall(RH_APIs::GetSessionsAPI(), InRequest, BaseType::Delegate::CreateSP(this, &FRH_SessionRequestAndModifyHelper::OnRequestById), TaskPriority);
			if (!HttpRequest)
			{
				Failed(TEXT("Could not create http request"));
			}
		}
		else
		{
			Failed(TEXT("Improper Session Owner or Auth Context"));
		}
	}
protected:

	void OnRequestById(const typename BaseType::Response& Resp)
	{
		if (Resp.IsSuccessful())
		{
			DoSessionLookup();	// this will re-read the session, and attempt to import it.  The import will detect that we left the session and adjust accordingly
		}
		else
		{
			Failed(TEXT("Request Failed"));
		}
	}

	virtual FString GetName() const override
	{
		static FString Name = FString::Printf(TEXT("FRH_SessionRequestAndModifyHelper - %s"), *BaseType::Name);
		return Name;
	}
	virtual void ExecuteCallback(bool bSuccess) const override
	{
		Delegate.ExecuteIfBound(bSuccess, RHSession.Get());
	}

	FRH_OnSessionUpdatedDelegateBlock Delegate;
};


template<typename BaseType>
void DoRequestViaHelper(const FString& SessionId, TScriptInterface<IRH_SessionOwnerInterface> SessionOwner, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock(), int32 Priority = DefaultRallyHereAPIPriority)
{
	UE_LOG(LogRHSession, Log, TEXT("[%s::%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *BaseType::Name, *SessionId);
	typename BaseType::Request Request;
	Request.AuthContext = SessionOwner->GetSessionAuthContext();
	Request.SessionId = SessionId;

	auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(SessionOwner), SessionId, Delegate, Priority);
	Helper->Start(Request);
}

// Simple wrapper class that runs the lookup helper only
class FRH_SessionPollOnlyHelper : public FRH_SessionLookupHelper
{
public:

public:
	FRH_SessionPollOnlyHelper(FRH_SessionOwnerPtr InSessionOwner, const FString& InSessionId, FRH_OnSessionUpdatedDelegateBlock InDelegate = FRH_OnSessionUpdatedDelegateBlock(), int32 InPriority = DefaultRallyHereAPIPriority)
		: FRH_SessionLookupHelper(InSessionOwner, InSessionId, InPriority)
		, Delegate(InDelegate)
	{
	}

	virtual void Start()
	{
		Started();

		DoSessionLookup();
	}

protected:
	virtual FString GetName() const override
	{
		static FString Name(TEXT("FRH_SessionPollHelper"));
		return Name;
	}
	virtual void ExecuteCallback(bool bSuccess) const override
	{
		Delegate.ExecuteIfBound(bSuccess, RHSession.Get());
	}

	FRH_OnSessionUpdatedDelegateBlock Delegate;
};

class FRH_SessionPollAllHelper : public FRH_SessionHelper
{
public:
	FRH_SessionPollAllHelper(FRH_SessionOwnerPtr InSessionOwner, bool bInPollMembership, bool bInPollAllSessions, FRH_OnPollAllSessionsDelegate InDelegate, int32 InPriority)
		: FRH_SessionHelper(InSessionOwner, InPriority)
		, bPollMembership(bInPollMembership)
		, bPollAllSessions(bInPollAllSessions)
		, Delegate(InDelegate)
	{
	}

	virtual void Start()
	{
		Started();

		QueryAllTemplates();
	}
protected:

	void QueryAllTemplates()
	{
		if (!SessionOwner.IsValid())
		{
			Failed(TEXT("Session owner is invalid"));
			return;
		}

		// Read template data
		RallyHereAPI::Traits_GetAllSessionTemplates::Request Request;
		Request.AuthContext = GetAuthContext();
		Request.IfNoneMatch = SessionOwner->GetETagForAllTemplatesPoll();

		HttpRequest = RallyHereAPI::Traits_GetAllSessionTemplates::DoCall(RH_APIs::GetSessionsAPI(), Request, RallyHereAPI::Traits_GetAllSessionTemplates::Delegate::CreateSP(this, &FRH_SessionPollAllHelper::OnQueryAllTemplates), TaskPriority);
		if (!HttpRequest)
		{
			Failed(TEXT("Could not create http request to lookup session"));
		}
	}

	void OnQueryAllTemplates(const RallyHereAPI::Traits_GetAllSessionTemplates::Response& Resp)
	{
		HttpRequest = nullptr;
		if (Resp.IsSuccessful() && SessionOwner.IsValid())
		{
			TArray<FRHAPI_SessionTemplate> TemplatesArray;
			if (const auto Templates = Resp.Content.GetTemplatesOrNull())
			{
				Templates->GenerateValueArray(TemplatesArray);
			}

			TArray<FString> TemplateNames;
			TemplateNames.Reserve(TemplatesArray.Num());
			for (auto Template : TemplatesArray)
			{
				SessionOwner->ImportAPITemplate(Template);
				TemplateNames.Add(Template.SessionType);
			}

			// reconcile the templates into the owner before querying sessions
			SessionOwner->ReconcileAPITemplates(TemplateNames, Resp.ETag);

			if (!bPollMembership)
			{
				// if only templates are requested (an optimization in some cases), complete now
				Completed(true);
			}
			else
			{
				QueryAllSessions();
			}
		}
		else if (Resp.GetHttpResponseCode() == EHttpResponseCodes::NotModified)
		{
			if (!bPollMembership)
			{
				// if only templates are requested (an optimization in some cases), complete now
				Completed(true);
			}
			else
			{
				QueryAllSessions();
			}
		}
		else
		{
			Failed(TEXT("Query All Templates Lookup Failed"));
		}
	}

	void QueryAllSessions()
	{
		if (!SessionOwner.IsValid())
		{
			Failed(TEXT("Session owner is invalid"));
			return;
		}

		// Read session data
		RallyHereAPI::Traits_GetPlayerSessionsSelf::Request Request;
		Request.AuthContext = GetAuthContext();
		// for now - do not use ETag here, as we do not have a convenient way to get the list of sessions to poll for.  Since we want to poll all those sessions for updates, we need the full list to poll
		Request.IfNoneMatch = SessionOwner->GetETagForAllSessionsPoll();

		HttpRequest = RallyHereAPI::Traits_GetPlayerSessionsSelf::DoCall(RH_APIs::GetSessionsAPI(), Request, RallyHereAPI::Traits_GetPlayerSessionsSelf::Delegate::CreateSP(this, &FRH_SessionPollAllHelper::OnQueryAllSessions), TaskPriority);
		if (!HttpRequest)
		{
			Failed(TEXT("Could not create http request to lookup session"));
		}
	}

	void OnQueryAllSessions(const RallyHereAPI::Traits_GetPlayerSessionsSelf::Response& Resp)
	{
		HttpRequest = nullptr;
		
		if (!SessionOwner.IsValid())
		{
			Failed(TEXT("Session owner is invalid"));
			return;
		}

		if (Resp.IsSuccessful())
		{
			SessionIds.Empty();

			auto* SessionsMap = Resp.Content.GetSessionsOrNull();

			if (SessionsMap == nullptr || SessionsMap->Num() <= 0)
			{
				// if successful but no session list, assume no sessions presently which is a success
			}
			else
			{
				for (auto pair : *SessionsMap)
				{
					const auto SessionIdSet = pair.Value.GetSessionIdsOrNull();
					if (SessionIdSet && SessionIdSet->Num() > 0)
					{
						SessionIds.Append(SessionIdSet->Array());
					}

					const auto PendingInvites = pair.Value.GetPendingInvitesOrNull();
					if (PendingInvites && PendingInvites->Num() > 0)
					{
						TArray<FString> InviteSessionIds;
						PendingInvites->GenerateKeyArray(InviteSessionIds);
						SessionIds.Append(InviteSessionIds);
					}
				}
			}

			NewAllSessionsETag = Resp.ETag;

			RemainingSessionIds = SessionIds;
			QueryNextSession();
		}
		else if (Resp.GetHttpResponseCode() == EHttpResponseCodes::NotModified)
		{
			TArray<URH_SessionView*> SessionsToPoll = SessionOwner->GetAllSessionsForPolling();
			for (auto Session : SessionsToPoll)
			{
				SessionIds.Add(Session->GetSessionId());
			}

			NewAllSessionsETag = SessionOwner->GetETagForAllSessionsPoll();

			RemainingSessionIds = SessionIds;
			QueryNextSession();
		}
		else
		{
			Failed(TEXT("Query All Sessions Lookup Failed"));
		}
	}

	void QueryNextSession()
	{
		if (RemainingSessionIds.Num() > 0)
		{
			FString SessionId = RemainingSessionIds.Pop(false);

			UE_LOG(LogRHSession, VeryVerbose, TEXT("%s querying next session %s"), *GetName(), *SessionId);
			DoSessionLookup(SessionId);
		}
		else
		{
			ReconcileSessionsWithOwner();
		}
	}

	void DoSessionLookup(const FString& SessionId)
	{
		if (!SessionOwner.IsValid())
		{
			Failed(TEXT("Session owner is invalid"));
			return;
		}

		if (!bPollAllSessions)
		{
			// if we are not polling all sessions, only poll new sessions
			auto Session = SessionOwner->GetSessionById(SessionId);
			if (Session != nullptr)
			{
				// this session already exists, poll the next session
				QueryNextSession();
				return;
			}
		}

		// Read session data
		RallyHereAPI::FRequest_GetSessionById Request;
		Request.AuthContext = GetAuthContext();
		Request.SessionId = SessionId;
		Request.IfNoneMatch = SessionOwner->GetETagForSession(SessionId);

		LastSessionLookupId = SessionId;

		HttpRequest = RH_APIs::GetSessionsAPI().GetSessionById(Request, RallyHereAPI::Traits_GetSessionById::Delegate::CreateSP(this, &FRH_SessionPollAllHelper::OnSessionLookup));
		if (!HttpRequest)
		{
			Failed(TEXT("Could not create http request to lookup session"));
		}
	}

	void OnSessionLookup(const RallyHereAPI::Traits_GetSessionById::Response& Resp)
	{
		HttpRequest = nullptr;

		if (!SessionOwner.IsValid())
		{
			Failed(TEXT("Session owner is invalid"));
			return;
		}

		if (Resp.IsSuccessful())
		{
			// import the new session
			SessionOwner->ImportAPISession(FRH_APISessionWithETag(Resp.Content, Resp.ETag));
		}
		else if (Resp.GetHttpResponseCode() == EHttpResponseCodes::NotModified)
		{
			// session has not changed, but we can defer the poll
			auto* RHSession = SessionOwner->GetSessionById(LastSessionLookupId);
			if (RHSession != nullptr)
			{
				RHSession->DeferPolling();
			}
		}
		else if (Resp.GetHttpResponseCode() == EHttpResponseCodes::NotFound)
		{
			// Session association still exists, but session no longer exists, attempt to clean up the local state, do not track the call
			RallyHereAPI::FRequest_LeaveSessionByIdSelf Request;
			Request.AuthContext = GetAuthContext();
			Request.SessionId = LastSessionLookupId;

			RH_APIs::GetSessionsAPI().LeaveSessionByIdSelf(Request);
		}
		else if (Resp.GetHttpResponseCode() == EHttpResponseCodes::ServerError)
		{
			// we cannot not determine if the session is valid or not, and we have nothing to import.  Our ETag processing will prevent requerying that session as well (as it assumes we will have session objects querying themselves).
			// therefore, clear our new ETag, so that we will do a full requery on the next cycle
			NewAllSessionsETag.Reset();
		}

		// continue looking at sessions since failures on lookups are allowed.  This can happen if, for example, the session was removed between the initial poll and now (or if the session is bugged)
		QueryNextSession();
	}

	void ReconcileSessionsWithOwner()
	{
		if (!SessionOwner.IsValid())
		{
			Failed(TEXT("Session owner is invalid"));
			return;
		}

		SessionOwner->ReconcileAPISessions(SessionIds, NewAllSessionsETag);

		Completed(true);
	}

	virtual FString GetName() const override
	{
		static FString Name(TEXT("FRH_SessionPollAllHelper"));
		return Name;
	}
	virtual void ExecuteCallback(bool bSuccess) const override
	{
		Delegate.ExecuteIfBound(bSuccess, SessionIds);
	}

	bool bPollMembership, bPollAllSessions;
	FRH_OnPollAllSessionsDelegate Delegate;
	FHttpRequestPtr HttpRequest;
	TArray<FString> SessionIds, RemainingSessionIds;
	TOptional<FString> NewAllSessionsETag;
	FString LastSessionLookupId;
};


class FRH_SessionCreateOrJoinByTypeHelper : public FRH_SessionLookupHelper
{
	typedef RallyHereAPI::Traits_CreateOrJoinSession BaseType;
public:
	FRH_SessionCreateOrJoinByTypeHelper(FRH_SessionOwnerPtr InSessionOwner, const FRHAPI_CreateOrJoinRequest& InCreateParams, FRH_OnSessionUpdatedDelegateBlock InDelegate = FRH_OnSessionUpdatedDelegateBlock(), int32 InPriority = DefaultRallyHereAPIPriority)
		: FRH_SessionLookupHelper(InSessionOwner, FString(), InPriority)
		, CreateParams(InCreateParams)
		, Delegate(InDelegate)
	{
	}

	virtual void Start()
	{
		Started();
		if (SessionOwner.IsValid() && GetAuthContext().IsValid())
		{
			BaseType::Request Request;
			Request.AuthContext = GetAuthContext();

			Request.CreateOrJoinRequest = CreateParams;

			auto HttpRequest = BaseType::DoCall(RH_APIs::GetSessionsAPI(), Request, BaseType::Delegate::CreateSP(this, &FRH_SessionCreateOrJoinByTypeHelper::OnCreated), TaskPriority);
			if (!HttpRequest)
			{
				Failed(TEXT("Could not create http request"));
			}
		}
		else
		{
			Failed(TEXT("Improper Session Owner or Auth Context"));
		}
	}
protected:
	void OnCreated(const BaseType::Response& Resp)
	{
		if (Resp.IsSuccessful())
		{
			// set our new session id
			SessionId = Resp.Content.SessionId;
			DoSessionLookup();	// this will re-read the session, and attempt to import it.  The import will detect that we left the session and adjust accordingly
		}
		else
		{
			Failed(TEXT("Request Failed"));
		}
	}

	virtual FString GetName() const override
	{
		static FString Name(TEXT("FRH_SessionCreateOrJoinByTypeHelper"));
		return Name;
	}
	virtual void ExecuteCallback(bool bSuccess) const override
	{
		Delegate.ExecuteIfBound(bSuccess, RHSession.Get());
	}

	FRHAPI_CreateOrJoinRequest CreateParams;
	FRH_OnSessionUpdatedDelegateBlock Delegate;
};


class FRH_SessionJoinByIdHelper : public FRH_SessionLookupHelper
{
	typedef RallyHereAPI::Traits_JoinSessionByIdSelf BaseType;
public:
	FRH_SessionJoinByIdHelper(FRH_SessionOwnerPtr InSessionOwner, FRH_OnSessionUpdatedDelegateBlock InDelegate = FRH_OnSessionUpdatedDelegateBlock(), int32 InPriority = DefaultRallyHereAPIPriority)
		: FRH_SessionLookupHelper(InSessionOwner, FString(), InPriority)
		, Delegate(InDelegate)
	{
	}

	virtual void Start(const FString& InSessionId)
	{
		// backwards compatible hook
		Start(InSessionId, URH_OnlineSession::GetJoinDetailDefaults(SessionOwner.GetObject()));
	}

	virtual void Start(const FString& InSessionId, const FRHAPI_SelfSessionPlayerUpdateRequest& JoinDetails)
	{
		Started();

		if (!SessionOwner.IsValid())
		{
			Failed(TEXT("Session owner is invalid"));
			return;
		}

		SessionId = InSessionId;

		if (SessionOwner.IsValid() && GetAuthContext().IsValid())
		{
			BaseType::Request Request;
			Request.AuthContext = SessionOwner->GetSessionAuthContext();
			Request.SessionId = SessionId;
			Request.SelfSessionPlayerUpdateRequest = JoinDetails;

			auto HttpRequest = BaseType::DoCall(RH_APIs::GetSessionsAPI(), Request, BaseType::Delegate::CreateSP(this, &FRH_SessionJoinByIdHelper::OnJoined), TaskPriority);
			if (!HttpRequest)
			{
				Failed(TEXT("Could not create http request"));
			}
		}
		else
		{
			Failed(TEXT("Improper Session Owner or Auth Context"));
		}
	}
protected:
	void OnJoined(const BaseType::Response& Resp)
	{
		if (Resp.IsSuccessful())
		{
			DoSessionLookup();
		}
		else
		{
			Failed(TEXT("Request Failed"));
		}
	}

	virtual FString GetName() const override
	{
		static FString Name(TEXT("FRH_SessionCreateOrJoinByTypeHelper"));
		return Name;
	}
	virtual void ExecuteCallback(bool bSuccess) const override
	{
		Delegate.ExecuteIfBound(bSuccess, RHSession.Get());
	}

	FRH_OnSessionUpdatedDelegateBlock Delegate;
};


class FRH_SessionJoinByPlatformIdHelper : public FRH_SessionLookupHelper
{
	typedef RallyHereAPI::Traits_JoinSessionByPlatformSessionIdSelf BaseType;
public:
	FRH_SessionJoinByPlatformIdHelper(FRH_SessionOwnerPtr InSessionOwner, FRH_OnSessionUpdatedDelegateBlock InDelegate = FRH_OnSessionUpdatedDelegateBlock(), int32 InPriority = DefaultRallyHereAPIPriority)
		: FRH_SessionLookupHelper(InSessionOwner, FString(), InPriority)
		, Delegate(InDelegate)
	{
	}

	// backwards compatible hook
	virtual void Start(const ERHAPI_Platform& Platform, const FString& PlatformSessionIdStr)
	{
		Start(Platform, PlatformSessionIdStr, URH_OnlineSession::GetJoinDetailDefaults(SessionOwner.GetObject()));
	}

	virtual void Start(const ERHAPI_Platform& Platform, const FString& PlatformSessionIdStr, const FRHAPI_SelfSessionPlayerUpdateRequest& JoinDetails)
	{
		Started();

		if (SessionOwner.IsValid() && GetAuthContext().IsValid())
		{
			BaseType::Request Request;
			Request.AuthContext = GetAuthContext();
			Request.Platform = Platform;
			Request.PlatformSessionIdBase64 = RallyHereAPI::Base64UrlEncode(PlatformSessionIdStr);

			Request.SelfSessionPlayerUpdateRequest = JoinDetails;

			auto HttpRequest = BaseType::DoCall(RH_APIs::GetSessionsAPI(), Request, BaseType::Delegate::CreateSP(this, &FRH_SessionJoinByPlatformIdHelper::OnJoined), TaskPriority);
			if (!HttpRequest)
			{
				Failed(TEXT("Could not create http request"));
			}
		}
		else
		{
			Failed(TEXT("Improper Session Owner or Auth Context"));
		}
	}
protected:
	void OnJoined(const BaseType::Response& Resp)
	{
		if (Resp.IsSuccessful())
		{
			// set our new session id
			SessionId = Resp.Content.SessionId;

			// the response has the full session info, so set the cache and continue on to the template check
			SessionCache = FRH_APISessionWithETag(Resp.Content, Resp.ETag);

			CheckTemplateForSessionCache();
		}
		else
		{
			Failed(TEXT("Request Failed"));
		}
	}

	virtual FString GetName() const override
	{
		static FString Name(TEXT("FRH_SessionCreateOrJoinByTypeHelper"));
		return Name;
	}
	virtual void ExecuteCallback(bool bSuccess) const override
	{
		Delegate.ExecuteIfBound(bSuccess, RHSession.Get());
	}

	FRH_OnSessionUpdatedDelegateBlock Delegate;
};
