#include "RH_MatchmakingBrowser.h"
#include "RallyHereIntegrationModule.h"
#include "RH_OnlineSubsystemNames.h"
#include "QueuesAPI.h"


URH_MatchmakingBrowserCache::URH_MatchmakingBrowserCache()
{
}

typedef TWeakObjectPtr<URH_MatchmakingBrowserCache> MatchmakingBrowserCachePtr;

class FRH_QueueBrowserSearchHelper : public FRH_AsyncTaskHelper
{
public:
	FRH_QueueBrowserSearchHelper(MatchmakingBrowserCachePtr InMatchmakingOwner, FAuthContextPtr InAuthContext, FRH_OnQueueSearchCompleteDelegateBlock InDelegate)
		: FRH_AsyncTaskHelper()
		, MatchmakingOwner(InMatchmakingOwner)
		, AuthContext(InAuthContext)
		, Delegate(InDelegate)
	{
	}

	virtual void Start(const FRH_QueueSearchParams& InSearchParams)
	{
		Started();

		SearchParams = InSearchParams;
		DoQuery();
	}
protected:
	typedef RallyHereAPI::Traits_GetAllQueueInfo QueryType;

	void DoQuery()
	{
		QueryType::Request Request;
		Request.AuthContext = AuthContext;
		Request.Cursor = SearchParams.Cursor;
		Request.PageSize = SearchParams.PageSize;
		// todo - ETag

		HttpRequest = QueryType::DoCall(RH_APIs::GetQueuesAPI(), Request, QueryType::Delegate::CreateSP(this, &FRH_QueueBrowserSearchHelper::OnQueryComplete), GetDefault<URH_IntegrationSettings>()->GetAllQueueInfoPriority);
		if (!HttpRequest)
		{
			Failed(TEXT("Could not create http request to query queues"));
		}
	}

	void OnQueryComplete(const QueryType::Response& Resp)
	{
		HttpRequest = nullptr;
		if (Resp.IsSuccessful() && MatchmakingOwner.IsValid())
		{
			QueueIds.Reset(Resp.Content.Queues.Num());

			if (Resp.Content.Queues.Num() <= 0)
			{
				Completed(true);
				return;
			}

			for (const auto& Queue : Resp.Content.Queues)
			{
				QueueIds.Add(Queue.QueueId);
				if (MatchmakingOwner != nullptr)
				{
					MatchmakingOwner->ImportAPIQueue(Queue, Resp.ETag.Get(TEXT("")));
				}
			}

			Completed(true);
		}
		else
		{
			Failed(TEXT("Query All Queues Failed"));
		}
	}

	virtual FString GetName() const override
	{
		static FString Name(TEXT("FRH_QueueBrowserSearchHelper"));
		return Name;
	}
	virtual void ExecuteCallback(bool bSuccess) const override
	{
		FRH_QueueSearchResult Result;
		Result.SearchParams = SearchParams;
		if (MatchmakingOwner.IsValid() && bSuccess)
		{
		for (const auto& QueueId : QueueIds)
		{
				URH_MatchmakingQueueInfo* RHQueue = MatchmakingOwner->GetQueue(QueueId);
			if (RHQueue != nullptr)
			{
				Result.Queues.Add(RHQueue);
			}
		}
		}
		Delegate.ExecuteIfBound(bSuccess, Result);
	}

	MatchmakingBrowserCachePtr MatchmakingOwner;
	FAuthContextPtr AuthContext;
	FRH_OnQueueSearchCompleteDelegateBlock Delegate;

	FRH_QueueSearchParams SearchParams;

	FHttpRequestPtr HttpRequest;
	TArray<FString> QueueIds;
};

void URH_MatchmakingBrowserCache::SearchQueues(const FRH_QueueSearchParams& params, FRH_OnQueueSearchCompleteDelegateBlock Delegate)
{
	auto Helper = MakeShared<FRH_QueueBrowserSearchHelper>(this, GetAuthContext(), Delegate);
	Helper->Start(params);
}

void URH_MatchmakingBrowserCache::ImportAPIQueue(const FRHAPI_QueueConfig& APIQueue, const FString& ETag)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] : %s"), ANSI_TO_TCHAR(__FUNCTION__), *APIQueue.QueueId);

	auto existingPtr = QueueCache.Find(APIQueue.QueueId);
	URH_MatchmakingQueueInfo* QueueWrapper = existingPtr ? *existingPtr : nullptr;

	if (QueueWrapper == nullptr)
	{
		QueueWrapper = NewObject<URH_MatchmakingQueueInfo>(this);
		QueueCache.Add(APIQueue.QueueId, QueueWrapper);
	}

	QueueWrapper->ImportAPIQueue(APIQueue, ETag);
}


class FRH_TemplateGroupSearchHelper : public FRH_AsyncTaskHelper
{
public:
	FRH_TemplateGroupSearchHelper(MatchmakingBrowserCachePtr InMatchmakingOwner, FAuthContextPtr InAuthContext, FRH_OnGetMatchmakingTemplateGroupCompleteDelegateBlock InDelegate)
		: FRH_AsyncTaskHelper()
		, MatchmakingOwner(InMatchmakingOwner)
		, AuthContext(InAuthContext)
		, Delegate(InDelegate)
	{
	}

	virtual void Start(const FGuid& InSearchTemplateGroupId)
	{
		Started();

		SearchTemplateGroupId = InSearchTemplateGroupId;
		DoQuery();
	}
protected:
	typedef RallyHereAPI::Traits_GetMatchMakingTemplates QueryType;

	void DoQuery()
	{
		QueryType::Request Request;
		Request.AuthContext = AuthContext;
		Request.TemplateGroupId = SearchTemplateGroupId;
		// todo - ETag

		HttpRequest = QueryType::DoCall(RH_APIs::GetQueuesAPI(), Request, QueryType::Delegate::CreateSP(this, &FRH_TemplateGroupSearchHelper::OnQueryComplete), GetDefault<URH_IntegrationSettings>()->GetMatchmakingTemplatePriority);
		if (!HttpRequest)
		{
			Failed(TEXT("Could not create http request to query templates"));
		}
	}

	void OnQueryComplete(const QueryType::Response& Resp)
	{
		HttpRequest = nullptr;
		if (Resp.IsSuccessful() && MatchmakingOwner.IsValid())
		{
			MatchmakingOwner->ImportAPITemplateGroup(Resp.Content, Resp.ETag.Get(TEXT("")));
			TemplateGroup = MatchmakingOwner->GetMatchmakingTemplateGroup(Resp.Content.TemplateGroupId);

			Completed(true);
	}
	else
	{
			Failed(TEXT("Query Failed"));
		}
	}

	virtual FString GetName() const override
	{
		static FString Name(TEXT("FRH_TemplateGroupSearchHelper"));
		return Name;
	}
	virtual void ExecuteCallback(bool bSuccess) const override
	{
		Delegate.ExecuteIfBound(bSuccess, TemplateGroup.Get());
	}

	MatchmakingBrowserCachePtr MatchmakingOwner;
	FAuthContextPtr AuthContext;
	FRH_OnGetMatchmakingTemplateGroupCompleteDelegateBlock Delegate;

	FGuid SearchTemplateGroupId;
	TWeakObjectPtr<URH_MatchmakingTemplateGroupInfo> TemplateGroup;

	FHttpRequestPtr HttpRequest;
	
	
};

void URH_MatchmakingBrowserCache::SearchMatchmakingTemplateGroup(const FGuid& TemplateId, FRH_OnGetMatchmakingTemplateGroupCompleteDelegateBlock Delegate)
{
	auto Helper = MakeShared<FRH_TemplateGroupSearchHelper>(this, GetAuthContext(), Delegate);
	Helper->Start(TemplateId);
}

void URH_MatchmakingBrowserCache::ImportAPITemplateGroup(const FRHAPI_MatchMakingTemplateGroup& APITemplate, const FString& ETag)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] : %s"), ANSI_TO_TCHAR(__FUNCTION__), *APITemplate.TemplateGroupId.ToString(EGuidFormats::DigitsWithHyphens));

	auto existingPtr = TemplateGroupCache.Find(APITemplate.TemplateGroupId);
	URH_MatchmakingTemplateGroupInfo* TemplateWrapper = existingPtr ? *existingPtr : nullptr;

	if (TemplateWrapper == nullptr)
	{
		TemplateWrapper = NewObject<URH_MatchmakingTemplateGroupInfo>(this);
		TemplateGroupCache.Add(APITemplate.TemplateGroupId, TemplateWrapper);
	}
	
	TemplateWrapper->ImportAPITemplateGroup(APITemplate, ETag);
}


class FRH_InstanceLaunchTemplateSearchHelper : public FRH_AsyncTaskHelper
{
public:
	FRH_InstanceLaunchTemplateSearchHelper(MatchmakingBrowserCachePtr InMatchmakingOwner, FAuthContextPtr InAuthContext, FRH_OnGetInstanceLaunchTemplateCompleteDelegateBlock InDelegate)
		: FRH_AsyncTaskHelper()
		, MatchmakingOwner(InMatchmakingOwner)
		, AuthContext(InAuthContext)
		, Delegate(InDelegate)
	{
	}

	virtual void Start(const FGuid& InSearchTemplateId)
	{
		Started();

		SearchTemplateId = InSearchTemplateId;
		DoQuery();
	}
protected:
	typedef RallyHereAPI::Traits_GetAllMapGameInfo QueryType;

	void DoQuery()
	{
		QueryType::Request Request;
		Request.AuthContext = AuthContext;
		Request.InstanceLaunchTemplateId = SearchTemplateId;
		// todo - ETag

		HttpRequest = QueryType::DoCall(RH_APIs::GetQueuesAPI(), Request, QueryType::Delegate::CreateSP(this, &FRH_InstanceLaunchTemplateSearchHelper::OnQueryComplete), GetDefault<URH_IntegrationSettings>()->GetMapGameInfoPriority);
		if (!HttpRequest)
		{
			Failed(TEXT("Could not create http request to query templates"));
		}
	}

	void OnQueryComplete(const QueryType::Response& Resp)
	{
		HttpRequest = nullptr;
		if (Resp.IsSuccessful() && MatchmakingOwner.IsValid())
		{
			MatchmakingOwner->ImportAPIInstanceLaunchTemplate(Resp.Content, Resp.ETag.Get(TEXT("")));
			Template = MatchmakingOwner->GetInstanceLaunchTemplate(Resp.Content.InstanceLaunchTemplateId);

			Completed(true);
		}
		else
		{
			Failed(TEXT("Query Failed"));
		}
	}

	virtual FString GetName() const override
	{
		static FString Name(TEXT("FRH_InstanceLaunchTemplateSearchHelper"));
		return Name;
	}
	virtual void ExecuteCallback(bool bSuccess) const override
	{
		Delegate.ExecuteIfBound(bSuccess, Template.Get());
	}

	MatchmakingBrowserCachePtr MatchmakingOwner;
	FAuthContextPtr AuthContext;
	FRH_OnGetInstanceLaunchTemplateCompleteDelegateBlock Delegate;

	FGuid SearchTemplateId;
	TWeakObjectPtr<URH_InstanceLaunchTemplate> Template;

	FHttpRequestPtr HttpRequest;


};

void URH_MatchmakingBrowserCache::SearchInstanceLaunchTemplate(const FGuid& TemplateId, FRH_OnGetInstanceLaunchTemplateCompleteDelegateBlock Delegate)
{
	auto Helper = MakeShared<FRH_InstanceLaunchTemplateSearchHelper>(this, GetAuthContext(), Delegate);
	Helper->Start(TemplateId);
}

void URH_MatchmakingBrowserCache::ImportAPIInstanceLaunchTemplate(const FRHAPI_InstanceLaunchTemplate& APITemplate, const FString& ETag)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] : %s"), ANSI_TO_TCHAR(__FUNCTION__), *APITemplate.InstanceLaunchTemplateId.ToString(EGuidFormats::DigitsWithHyphens));

	auto existingPtr = InstanceLaunchTemplateCache.Find(APITemplate.InstanceLaunchTemplateId);
	URH_InstanceLaunchTemplate* TemplateWrapper = existingPtr ? *existingPtr : nullptr;

	if (TemplateWrapper == nullptr)
	{
		TemplateWrapper = NewObject<URH_InstanceLaunchTemplate>(this);
		InstanceLaunchTemplateCache.Add(APITemplate.InstanceLaunchTemplateId, TemplateWrapper);
	}

	TemplateWrapper->ImportAPIInstanceLaunchTemplate(APITemplate, ETag);
}

void URH_MatchmakingBrowserCache::SearchRegions(FRH_OnRegionSearchCompleteDelegateBlock Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	typedef RallyHereAPI::Traits_GetSiteSettings BaseType;

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	//Request.IfNoneMatch = AppSettingsETag;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this](const BaseType::Response& Resp)
			{
				if (Resp.IsSuccessful())
				{
					RegionsCache = Resp.Content;

					{
						SCOPED_NAMED_EVENT(RallyHere_BroadcastRegionsUpdated, FColor::Purple);
						OnRegionsUpdated.Broadcast(this);
						OnRegionsUpdatedNative.Broadcast(this);
					}
				}
			}),
		FRH_GenericSuccessDelegate::CreateWeakLambda(this, [this, Delegate](bool bSuccess)
			{
				Delegate.ExecuteIfBound(bSuccess, GetAllRegions());
			}),
		GetDefault<URH_IntegrationSettings>()->GetSiteSettingsPriority
	);

	Helper->Start(RH_APIs::GetAPIs().GetSite(), Request);
}