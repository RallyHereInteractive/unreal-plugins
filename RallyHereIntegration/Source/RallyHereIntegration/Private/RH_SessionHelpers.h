
#pragma once

#include "RH_SessionData.h"

// auth context support
class FRH_SessionHelper : public FRH_AsyncTaskHelper
{
protected:
	FRH_SessionHelper(FRH_SessionOwnerPtr InSessionOwner)
		: FRH_AsyncTaskHelper()
		, SessionOwner(InSessionOwner)
	{
	}
	FAuthContextPtr GetAuthContext() const;

	FRH_SessionOwnerPtr SessionOwner;
};

// Boilerplate class that does a session lookup and completion, for use after modifying a session
class FRH_SessionModifierHelper : public FRH_SessionHelper
{
protected:
	FRH_SessionModifierHelper(FRH_SessionOwnerPtr InSessionOwner, const FString& InSessionId)
		: FRH_SessionHelper(InSessionOwner)
		, SessionId(InSessionId)
	{
	}

	void DoSessionLookup();
	void OnSessionLookup(const RallyHereAPI::Traits_GetSessionById::Response& Resp);

	FString SessionId;
	TWeakObjectPtr<URH_JoinedSession> RHSession;
	FHttpRequestPtr HttpRequest;
};

// Generic lambda-capable class for doing a request, checking return type, and then doing a session read
template<typename BaseType>
class FRH_SessionRequestAndModifyHelper : public FRH_SessionModifierHelper
{
public:
	FRH_SessionRequestAndModifyHelper(FRH_SessionOwnerPtr InSessionOwner, const FString& InSessionId, FRH_OnSessionUpdatedDelegateBlock InDelegate = FRH_OnSessionUpdatedDelegateBlock())
		: FRH_SessionModifierHelper(InSessionOwner, InSessionId)
		, Delegate(InDelegate)
	{
	}

	virtual void Start(const typename BaseType::Request& InRequest)
	{
		Started();
		if (SessionOwner.IsValid() && GetAuthContext().IsValid())
		{
			HttpRequest = BaseType::DoCall(RH_APIs::GetSessionAPI(), InRequest, BaseType::Delegate::CreateSP(this, &FRH_SessionRequestAndModifyHelper::OnRequestById));
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
		HttpRequest = nullptr;
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
void DoRequestViaHelper(const FString& SessionId, TScriptInterface<IRH_SessionOwnerInterface> SessionOwner, FRH_OnSessionUpdatedDelegateBlock Delegate = FRH_OnSessionUpdatedDelegateBlock())
{
	UE_LOG(LogRHSession, Log, TEXT("[%s::%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *BaseType::Name, *SessionId);
	typename BaseType::Request Request;
	Request.AuthContext = SessionOwner->GetSessionAuthContext();
	Request.SessionId = SessionId;

	auto Helper = MakeShared<FRH_SessionRequestAndModifyHelper<BaseType>>(MakeWeakInterface(SessionOwner), SessionId, Delegate);
	Helper->Start(Request);
}

class FRH_SessionPollHelper : public FRH_SessionModifierHelper
{
public:
	FRH_SessionPollHelper(FRH_SessionOwnerPtr InSessionOwner, const FString& InSessionId, FRH_OnSessionUpdatedDelegateBlock InDelegate = FRH_OnSessionUpdatedDelegateBlock())
		: FRH_SessionModifierHelper(InSessionOwner, InSessionId)
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
	FRH_SessionPollAllHelper(FRH_SessionOwnerPtr InSessionOwner, bool bInTemplatesOnly, FRH_OnPollAllSessionsDelegate InDelegate)
		: FRH_SessionHelper(InSessionOwner)
		, bTemplatesOnly(bInTemplatesOnly)
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
		// Read template data
		RallyHereAPI::Traits_GetAllSessionTemplates::Request Request;
		Request.AuthContext = GetAuthContext();

		HttpRequest = RallyHereAPI::Traits_GetAllSessionTemplates::DoCall(RH_APIs::GetSessionAPI(), Request, RallyHereAPI::Traits_GetAllSessionTemplates::Delegate::CreateSP(this, &FRH_SessionPollAllHelper::OnQueryAllTemplates));
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

			TArray<FRH_APISessionTemplateWithETag> TemplatesWithETagArray;
			TemplatesWithETagArray.Reserve(TemplatesArray.Num());
			for (auto Template : TemplatesArray)
			{
				TemplatesWithETagArray.Add(FRH_APISessionTemplateWithETag(Template, Resp.ETag));
			}

			// reconcile the templates into the owner before querying sessions
			SessionOwner->ReconcileAPITemplates(TemplatesWithETagArray, TArray<FString>());

			if (bTemplatesOnly)
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
			Failed(TEXT("Query All Lookup Failed"));
		}
	}

	void QueryAllSessions()
	{
		// Read session data
		RallyHereAPI::Traits_GetPlayerSessionsSelf::Request Request;
		Request.AuthContext = GetAuthContext();

		HttpRequest = RallyHereAPI::Traits_GetPlayerSessionsSelf::DoCall(RH_APIs::GetSessionAPI(), Request, RallyHereAPI::Traits_GetPlayerSessionsSelf::Delegate::CreateSP(this, &FRH_SessionPollAllHelper::OnQueryAllSessions));
		if (!HttpRequest)
		{
			Failed(TEXT("Could not create http request to lookup session"));
		}
	}

	void OnQueryAllSessions(const RallyHereAPI::Traits_GetPlayerSessionsSelf::Response& Resp)
	{
		HttpRequest = nullptr;
		if (Resp.IsSuccessful() && SessionOwner.IsValid())
		{
			SessionIds.Empty();

			auto* SessionsMap = Resp.Content.GetSessionsOrNull();

			// if successful but no session list, assume no sessions presently which is a success
			if (SessionsMap == nullptr || SessionsMap->Num() <= 0)
			{
				Completed(true);
				return;
			}

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

			RemainingSessionIds = SessionIds;
			QueryNextSession();
		}
		else
		{
			Failed(TEXT("Query All Lookup Failed"));
		}
	}

	void QueryNextSession()
	{
		if (RemainingSessionIds.Num() > 0)
		{
			FString SessionId = RemainingSessionIds.Pop(false);

			UE_LOG(LogRHSession, VeryVerbose, TEXT("Querying next - %s"), *SessionId);
			DoSessionLookup(SessionId);
		}
		else
		{
			ReconcileSessionsWithOwner();
		}
	}

	void DoSessionLookup(const FString& SessionId)
	{
		// Read session data
		RallyHereAPI::FRequest_GetSessionById Request;
		Request.AuthContext = GetAuthContext();
		Request.SessionId = SessionId;

#if SESSIONS_SUPPORT_ETAGS
		if (SessionOwner.IsValid())
		{
			Request.IfNoneMatch = SessionOwner->GetETagForSession(SessionId);
		}
#endif

		LastSessionLookupId = SessionId;

		HttpRequest = RH_APIs::GetSessionAPI().GetSessionById(Request, RallyHereAPI::Traits_GetSessionById::Delegate::CreateSP(this, &FRH_SessionPollAllHelper::OnSessionLookup));
		if (!HttpRequest)
		{
			Failed(TEXT("Could not create http request to lookup session"));
		}
	}

	void OnSessionLookup(const RallyHereAPI::Traits_GetSessionById::Response& Resp)
	{
		HttpRequest = nullptr;
		if (Resp.IsSuccessful())
		{
			Sessions.Add(FRH_APISessionWithETag(Resp.Content, Resp.ETag));
		}
		else if (Resp.GetHttpResponseCode() == EHttpResponseCodes::NotModified)
		{
			SessionsNotModified.Add(LastSessionLookupId);
		}
		else if (Resp.GetHttpResponseCode() == EHttpResponseCodes::NotFound)
		{
			// Session association still exists, but session no longer exists, attempt to clean up the local state, do not track the call
			RallyHereAPI::FRequest_LeaveSessionByIdSelf Request;
			Request.AuthContext = GetAuthContext();
			Request.SessionId = LastSessionLookupId;

			RH_APIs::GetSessionAPI().LeaveSessionByIdSelf(Request);
		}

		// continue looking at sessions since failures on lookups are allowed.  This can happen if, for example, the session was removed between the initial poll and now (or if the session is bugged)
		QueryNextSession();
	}

	void ReconcileSessionsWithOwner()
	{
		SessionOwner->ReconcileAPISessions(Sessions, SessionsNotModified);

		Completed(true);
	}

	virtual FString GetName() const override
	{
		static FString Name(TEXT("FRH_SessionPollAllHelper"));
		return Name;
	}
	virtual void ExecuteCallback(bool bSuccess) const override
	{
		TArray<URH_SessionView*> RHSessions;
		for (auto SessionId : SessionIds)
		{
			URH_SessionView* RHSession = SessionOwner->GetSessionById(SessionId);
			if (RHSession != nullptr)
			{
				RHSessions.Add(RHSession);
			}
		}
		Delegate.ExecuteIfBound(bSuccess, RHSessions);
	}

	bool bTemplatesOnly;
	FRH_OnPollAllSessionsDelegate Delegate;
	FHttpRequestPtr HttpRequest;
	TArray<FString> SessionIds, RemainingSessionIds;
	FString LastSessionLookupId;
	TArray<FRH_APISessionWithETag> Sessions;
	TArray<FString> SessionsNotModified;
};


class FRH_SessionCreateOrJoinByTypeHelper : public FRH_SessionModifierHelper
{
	typedef RallyHereAPI::Traits_CreateOrJoinSession BaseType;
public:
	FRH_SessionCreateOrJoinByTypeHelper(FRH_SessionOwnerPtr InSessionOwner, const FRH_SessionCreateParams& InCreateParams, FRH_OnSessionUpdatedDelegateBlock InDelegate = FRH_OnSessionUpdatedDelegateBlock())
		: FRH_SessionModifierHelper(InSessionOwner, FString())
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

			Request.CreateOrJoinRequest.SessionType = CreateParams.SessionType;
			if (CreateParams.SiteId != INDEX_NONE)
			{
				Request.CreateOrJoinRequest.SetSiteId(CreateParams.SiteId);
			}

			Request.CreateOrJoinRequest.ClientVersion = URH_JoinedSession::GetClientVersionForSession();

			const auto OSS = SessionOwner->GetOSS();
			Request.CreateOrJoinRequest.ClientSettings.PlatformId = RH_GetPlatformIdFromOSSName(OSS ? OSS->GetSubsystemName() : NAME_None).Get(ERHAPI_PlatformID::Anon);
			Request.CreateOrJoinRequest.ClientSettings.Input = URH_JoinedSession::GetClientInputTypeForSession();

			HttpRequest = BaseType::DoCall(RH_APIs::GetSessionAPI(), Request, BaseType::Delegate::CreateSP(this, &FRH_SessionCreateOrJoinByTypeHelper::OnCreated));
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
		HttpRequest = nullptr;
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

	FRH_SessionCreateParams CreateParams;
	FRH_OnSessionUpdatedDelegateBlock Delegate;
};
