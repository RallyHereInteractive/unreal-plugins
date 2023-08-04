#include "RH_SessionBrowser.h"
#include "RallyHereIntegrationModule.h"
#include "RH_OnlineSubsystemNames.h"
#include "SessionsAPI.h"


URH_SessionBrowserCache::URH_SessionBrowserCache()
{
}

typedef TWeakObjectPtr<URH_SessionBrowserCache> SessionBrowserCachePtr;
class FRH_SessionBrowserSearchHelper : public FRH_AsyncTaskHelper
{
public:
	FRH_SessionBrowserSearchHelper(SessionBrowserCachePtr InSessionOwner, FAuthContextPtr InAuthContext, FRH_OnSessionSearchCompleteDelegateBlock InDelegate)
		: FRH_AsyncTaskHelper()
		, SessionOwner(InSessionOwner)
		, AuthContext(InAuthContext)
		, Delegate(InDelegate)
	{
		bMissingTemplates = false;
	}

	virtual void Start(const FRH_SessionBrowserSearchParams& InSearchParams)
	{
		Started();

		SearchParams = InSearchParams;
		QueryAllSessions();
	}
protected:
	typedef RallyHereAPI::Traits_GetBrowserSessionsByType QuerySessionByType;
	typedef RallyHereAPI::Traits_GetAllSessionTemplates QueryTemplates;

	void QueryAllSessions()
	{
		QuerySessionByType::Request Request;
		Request.AuthContext = AuthContext;
		Request.SessionType = SearchParams.SessionType;
		if (SearchParams.Cursor >= 0) Request.Cursor = SearchParams.Cursor;
		if (SearchParams.PageSize > 0) Request.PageSize = SearchParams.PageSize;

		HttpRequest = QuerySessionByType::DoCall(RH_APIs::GetSessionsAPI(), Request, QuerySessionByType::Delegate::CreateSP(this, &FRH_SessionBrowserSearchHelper::OnQueryAllSessions), GetDefault<URH_IntegrationSettings>()->SessionGetByTypePriority);
		if (!HttpRequest)
		{
			Failed(TEXT("Could not create http request to query sessions"));
		}
	}

	void OnQueryAllSessions(const QuerySessionByType::Response& Resp)
	{
		HttpRequest = nullptr;
		if (Resp.IsSuccessful() && SessionOwner.IsValid())
		{
			SessionIds.Empty();

			for (auto BrowserSession : Resp.Content.BrowserSessions)
			{
				SessionIds.Add(BrowserSession.SessionId);
			}

			if (SessionIds.Num() <= 0)
			{
				Completed(true);
				return;
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
		else if (bMissingTemplates)
		{
			QueryAllTemplates();
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
		Request.AuthContext = AuthContext;
		Request.SessionId = SessionId;
		if (SessionOwner.IsValid())
		{
			Request.IfNoneMatch = SessionOwner->GetETagForSession(SessionId);
		}

		HttpRequest = RH_APIs::GetSessionsAPI().GetSessionById(Request, RallyHereAPI::Traits_GetSessionById::Delegate::CreateSP(this, &FRH_SessionBrowserSearchHelper::OnSessionLookup), GetDefault<URH_IntegrationSettings>()->SessionGetBySessionIdPriority);
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

			if (SessionOwner.IsValid())
			{
				// make sure we have the template
				FRHAPI_SessionTemplate temp;
				if (!SessionOwner->GetTemplate(Resp.Content.Type, temp))
				{
					bMissingTemplates = true;
				}
			}

			QueryNextSession();
		}
		else if (Resp.GetHttpResponseCode() == EHttpResponseCodes::NotModified)
		{
			// session hasn't changed, so we can skip it, it will get looked up during callback resolution
			QueryNextSession();
		}
		else
		{
			// rather than failing, continue looking at sessions.  This can happen if, for example, the session was removed between the initial poll and now (or if the session is bugged)
			QueryNextSession();
		}
	}

	void QueryAllTemplates()
	{
		// Read template data
		QueryTemplates::Request Request;
		Request.AuthContext = AuthContext;

		HttpRequest = QueryTemplates::DoCall(RH_APIs::GetSessionsAPI(), Request, QueryTemplates::Delegate::CreateSP(this, &FRH_SessionBrowserSearchHelper::OnQueryAllTemplates));
		if (!HttpRequest)
		{
			Failed(TEXT("Could not create http request to lookup session"));
		}
	}

	void OnQueryAllTemplates(const QueryTemplates::Response& Resp)
	{
		HttpRequest = nullptr;
		if (Resp.IsSuccessful() && SessionOwner.IsValid())
		{
			TArray<FRHAPI_SessionTemplate> TemplatesArray;
			if (const auto TemplatesMap = Resp.Content.GetTemplatesOrNull())
			{
				TemplatesMap->GenerateValueArray(TemplatesArray);
			}

			// reconcile the templates into the owner before querying sessions
			for (auto Template : TemplatesArray)
			{
				SessionOwner->ImportAPITemplate(Template);
			}

			bMissingTemplates = false;

			// for this helper, templates are only queried if needed.  If they were neeed (and we ended up here), proceed to reconcile
			ReconcileSessionsWithOwner();
		}
		else
		{
			Failed(TEXT("Query All Lookup Failed"));
		}
	}

	void ReconcileSessionsWithOwner()
	{
		if (SessionOwner.IsValid())
		{
			for (auto Session : Sessions)
			{
				SessionOwner->ImportAPISession(Session);
			}
		}
		
		Completed(true);
	}

	virtual FString GetName() const override
	{
		static FString Name(TEXT("FRH_SessionBrowserSearchHelper"));
		return Name;
	}
	virtual void ExecuteCallback(bool bSuccess) const override
	{
		FRH_SessionBrowserSearchResult Result;
		Result.SearchParams = SearchParams;
		for (auto SessionId : SessionIds)
		{
			URH_SessionView* RHSession = SessionOwner->GetSessionById(SessionId);
			if (RHSession != nullptr)
			{
				Result.Sessions.Add(RHSession);
			}
		}
		Delegate.ExecuteIfBound(bSuccess, Result);
	}

	SessionBrowserCachePtr SessionOwner;
	FAuthContextPtr AuthContext;
	FRH_OnSessionSearchCompleteDelegateBlock Delegate;

	FRH_SessionBrowserSearchParams SearchParams;

	FHttpRequestPtr HttpRequest;
	TArray<FString> SessionIds, RemainingSessionIds;
	TArray<FRH_APISessionWithETag> Sessions;
	bool bMissingTemplates;
};

void URH_SessionBrowserCache::Search(const FRH_SessionBrowserSearchParams& params, FRH_OnSessionSearchCompleteDelegateBlock Delegate)
{
	auto Helper = MakeShared<FRH_SessionBrowserSearchHelper>(this, GetAuthContext(), Delegate);
	Helper->Start(params);
}

void URH_SessionBrowserCache::ImportAPISession(const FRH_APISessionWithETag& SessionWrapper)
{
	auto& Session = SessionWrapper.Data;
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] : %s"), ANSI_TO_TCHAR(__FUNCTION__), *Session.SessionId);

	URH_SessionView* RHSession = nullptr;
	auto existingPtr = Sessions.Find(Session.SessionId);
	URH_SessionView* ExistingRHSession = existingPtr ? *existingPtr : nullptr;

	// Lookup template from the cache, this should be always existing due to checks in the Import logic
	FRHAPI_SessionTemplate Template;
	if (!GetTemplate(Session.Type, Template))
	{
		return;
	}

	// existing session, if it exists, SHOULD NOT be a fully hydrated session
	ensure(!ExistingRHSession || ExistingRHSession->IsA(URH_SessionView::StaticClass()));

	if (ExistingRHSession != nullptr)
	{
		RHSession = ExistingRHSession;
	}
	else
	{
		RHSession = NewObject<URH_SessionView>(this);
	}
	
	if (RHSession != nullptr)
	{
		RHSession->ImportAPISession(SessionWrapper, Template);
		Sessions.Add(RHSession->GetSessionId(), RHSession);
	}
}

bool URH_SessionBrowserCache::GetTemplate(const FString& Type, FRHAPI_SessionTemplate& Template) const
{
	auto ptr = Templates.Find(Type);
	if (ptr != nullptr)
	{
		Template = *ptr;
		return true;
	}
	return false;
}

void URH_SessionBrowserCache::ImportAPITemplate(const FRHAPI_SessionTemplate& Template)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] : %s"), ANSI_TO_TCHAR(__FUNCTION__), *Template.SessionType);

	Templates.Add(Template.SessionType, Template);
}
