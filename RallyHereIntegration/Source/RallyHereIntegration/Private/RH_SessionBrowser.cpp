// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RH_SessionBrowser.h"
#include "RallyHereIntegrationModule.h"
#include "RH_OnlineSubsystemNames.h"
#include "SessionsAPI.h"
#include "RH_GameInstanceSubsystem.h"


URH_SessionBrowserCache::URH_SessionBrowserCache()
{
}

class FRH_SessionBrowserSearchHelper : public FRH_AsyncTaskHelper
{
public:
	FRH_SessionBrowserSearchHelper(FRH_SessionOwnerPtr InSessionOwner, FAuthContextPtr InAuthContext, FRH_OnSessionSearchCompleteDelegateBlock InDelegate)
		: FRH_AsyncTaskHelper()
		, SessionOwner(InSessionOwner)
		, AuthContext(InAuthContext)
		, Delegate(InDelegate)
		, NextPageCursor(0)
		, bMissingTemplates(false)
	{
	}

	virtual void Start(const FRH_SessionBrowserSearchParams& InSearchParams)
	{
		Started();

		SearchParams = InSearchParams;
		RemainingSessionIds = SearchParams.SessionIds;

		if (RemainingSessionIds.Num() > 0)
		{
			// if specific session ids are specified, skip search and just look them up
			QueryNextSession();
		}
		else
		{
			// perform search
			QueryAllSessions();
		}
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
		if (SearchParams.RegionId.Len() > 0) Request.RegionId = SearchParams.RegionId;

		HttpRequest = QuerySessionByType::DoCall(RH_APIs::GetSessionsAPI(), Request, QuerySessionByType::Delegate::CreateSP(this, &FRH_SessionBrowserSearchHelper::OnQueryAllSessions), GetDefault<URH_IntegrationSettings>()->SessionGetByTypePriority);
		if (!HttpRequest)
		{
			Failed(TEXT("Could not create http request to query sessions"));
		}
	}

	void OnQueryAllSessions(const QuerySessionByType::Response& Resp)
	{
		HttpRequest = nullptr;
		const auto Content = Resp.TryGetDefaultContentAsPointer();
		if (Resp.IsSuccessful() && SessionOwner.IsValid() && Content != nullptr)
		{
			RemainingSessionIds.Empty();

			SessionInfos = Content->GetBrowserSessions();
			NextPageCursor = Content->GetCursor();

			if (SessionInfos.Num() <= 0)
			{
				Completed(true);
				return;
			}

			for (auto BrowserSession : SessionInfos)
			{
				RemainingSessionIds.Add(BrowserSession.SessionId);
			}

			QueryNextSession();
		}
		else
		{
			Failed(TEXT("Query All Lookup Failed"));
		}
	}

	void QueryNextSession()
	{
		if (SearchParams.bCacheSessionDetails && RemainingSessionIds.Num() > 0)
		{
#if RH_FROM_ENGINE_VERSION(5,5)
			FString SessionId = RemainingSessionIds.Pop(EAllowShrinking::No);
#else
			FString SessionId = RemainingSessionIds.Pop(false);
#endif

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

	typedef RallyHereAPI::Traits_GetSessionById GetSessionByIdType;
	void DoSessionLookup(const FString& SessionId)
	{
		if (!SessionOwner.IsValid())
		{
			Failed(TEXT("Session owner is invalid"));
			return;
		}

		// Read session data
		GetSessionByIdType::Request Request;
		Request.AuthContext = AuthContext;
		Request.SessionId = SessionId;
		Request.RefreshTtl = false; // for search looked up sessions, do not refresh TTL

		if (SessionOwner.IsValid())
		{
			FRH_ObjectVersionCheck::ApplyDefaultGetBehavior(Request, SessionOwner->GetETagForSession(SessionId));
		}

		HttpRequest = GetSessionByIdType::DoCall(RH_APIs::GetSessionsAPI(), Request, RallyHereAPI::Traits_GetSessionById::Delegate::CreateSP(this, &FRH_SessionBrowserSearchHelper::OnSessionLookup), GetDefault<URH_IntegrationSettings>()->SessionGetBySessionIdPriority);
		if (!HttpRequest)
		{
			Failed(TEXT("Could not create http request to lookup session"));
		}
	}

	void OnSessionLookup(const GetSessionByIdType::Response& Resp)
	{
		HttpRequest = nullptr;

		if (!SessionOwner.IsValid())
		{
			Failed(TEXT("Session owner is invalid"));
			return;
		}

		const auto Content = Resp.TryGetDefaultContentAsPointer();
		if (Resp.IsSuccessful() && Content != nullptr)
		{
			Sessions.Add(FRH_APISessionWithETag(*Content, Resp.TryGetDefaultHeaderAsOptional_ETag()));

			// make sure we have the template
			FRHAPI_SessionTemplate temp;
			if (!SessionOwner->GetTemplate(Content->GetType(), temp))
			{
				bMissingTemplates = true;
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

		if (!SessionOwner.IsValid())
		{
			Failed(TEXT("Session owner is invalid"));
			return;
		}

		const auto Content = Resp.TryGetDefaultContentAsPointer();
		if (Resp.IsSuccessful() && Content != nullptr)
		{
			TArray<FRHAPI_SessionTemplate> TemplatesArray;
			if (const auto TemplatesMap = Content->GetTemplatesOrNull())
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
		if (!SessionOwner.IsValid())
		{
			Failed(TEXT("Session owner is invalid"));
			return;
		}

		for (auto Session : Sessions)
		{
			SessionOwner->ImportAPISession(Session);
		}

		Completed(true);
	}

	virtual FString GetName() const override
	{
		static const FString Name(TEXT("FRH_SessionBrowserSearchHelper"));
		return Name;
	}
	virtual void ExecuteCallback(bool bSuccess) const override
	{
		FRH_SessionBrowserSearchResult Result;
		Result.SearchParams = SearchParams;
		Result.SessionInfos = SessionInfos;
		Result.NextPageCursor = NextPageCursor;

		// if caching was requested, add the sessions to the result
		if (SearchParams.bCacheSessionDetails)
		{
			for (auto SessionInfo : SessionInfos)
			{
				URH_SessionView* RHSession = SessionOwner->GetSessionById(SessionInfo.GetSessionId());
				if (RHSession != nullptr)
				{
					Result.Sessions.Add(RHSession);
				}
			}
		}

		Delegate.ExecuteIfBound(bSuccess, Result);
	}

	FRH_SessionOwnerPtr SessionOwner;
	FAuthContextPtr AuthContext;
	FRH_OnSessionSearchCompleteDelegateBlock Delegate;

	FRH_SessionBrowserSearchParams SearchParams;

	FHttpRequestPtr HttpRequest;
	TArray<FRHAPI_BrowserSessionInfo> SessionInfos;
	TArray<FString> RemainingSessionIds;
	TArray<FRH_APISessionWithETag> Sessions;
	int32 NextPageCursor;
	bool bMissingTemplates;
};

void URH_SessionBrowserCache::Search(const FRH_SessionBrowserSearchParams& params, const FRH_OnSessionSearchCompleteDelegateBlock& Delegate)
{
	auto Helper = MakeShared<FRH_SessionBrowserSearchHelper>(this, GetAuthContext(), Delegate);
	Helper->Start(params);
}

FAuthContextPtr URH_SessionBrowserCache::GetSessionAuthContext() const
{
	return GetAuthContext();
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

void URH_SessionBrowserCache::ImportAPITemplate(const FRHAPI_SessionTemplate& Template)
{
	UE_LOG(LogRHSession, Verbose, TEXT("[%s] : %s"), ANSI_TO_TCHAR(__FUNCTION__), *Template.SessionType);

	Templates.Add(Template.SessionType, Template);
}

URH_PlayerInfoSubsystem* URH_SessionBrowserCache::GetPlayerInfoSubsystem() const
{
	return GetGameInstanceSubsystem()->GetPlayerInfoSubsystem();
}

void URH_SessionBrowserCache::RemoveSessionById(const FString& SessionId)
{
	URH_SessionView* Session;
	if (Sessions.RemoveAndCopyValue(SessionId, Session))
	{
		Session->Expire(FRH_OnSessionExpiredDelegate());
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
