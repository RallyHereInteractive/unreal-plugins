#include "RH_MatchmakingBrowser.h"
#include "RallyHereIntegrationModule.h"
#include "RH_OnlineSubsystemNames.h"
#include "QueuesAPI.h"


URH_MatchmakingBrowserCache::URH_MatchmakingBrowserCache()
{
}

void URH_MatchmakingBrowserCache::SearchQueues(const FRH_QueueSearchParams& params, const FRH_OnQueueSearchCompleteDelegateBlock& Delegate)
{
	typedef RallyHereAPI::Traits_GetAllQueueInfoV2 BaseType;

	TSharedRef<FRH_QueueSearchResult> Result = MakeShareable(new FRH_QueueSearchResult);
	Result->SearchParams = params;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this, Result](const BaseType::Response& Resp)
			{
				if (Resp.IsSuccessful())
				{
					for (const auto& Queue : Resp.Content.Queues)
					{
						ImportAPIQueue(Queue, Resp.ETag.Get(TEXT("")));

						// add to the result
						auto* ImportedQueue = GetQueue(Queue.QueueId);
						if (ImportedQueue != nullptr)
						{
							Result->Queues.Add(ImportedQueue);
						}
					}
				}
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Result, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, Result.Get(), ErrorInfo);
			}),
		GetDefault<URH_IntegrationSettings>()->GetAllQueueInfoPriority
		);

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.Cursor = params.Cursor;
	Request.PageSize = params.PageSize;
	// todo: etag

	Helper->Start(RH_APIs::GetQueuesAPI(), Request);
}

void URH_MatchmakingBrowserCache::ImportAPIQueue(const FRHAPI_QueueConfigV2& APIQueue, const FString& ETag)
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

void URH_MatchmakingBrowserCache::SearchMatchmakingTemplateGroup(const FGuid& TemplateId, const FRH_OnGetMatchmakingTemplateGroupCompleteDelegateBlock& Delegate)
{
	typedef RallyHereAPI::Traits_SessiongetMatchMakingTemplates BaseType;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this](const BaseType::Response& Resp)
			{
				if (Resp.IsSuccessful())
				{
					ImportAPITemplateGroup(Resp.Content, Resp.ETag.Get(TEXT("")));
				}
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, TemplateId, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, GetMatchmakingTemplateGroup(TemplateId), ErrorInfo);
			}),
		GetDefault<URH_IntegrationSettings>()->GetMatchmakingTemplatePriority
		);

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.TemplateGroupId = TemplateId;

	const auto* Existing = GetMatchmakingTemplateGroup(TemplateId);
	if (Existing != nullptr)
	{
		// if we have an etag, use it
		if (Existing->GetETag().Len() > 0)
		{
			Request.IfNoneMatch = Existing->GetETag();
		}
	}

	Helper->Start(RH_APIs::GetQueuesAPI(), Request);
}

void URH_MatchmakingBrowserCache::ImportAPITemplateGroup(const FRHAPI_MatchMakingTemplateGroupV2& APITemplate, const FString& ETag)
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

void URH_MatchmakingBrowserCache::SearchInstanceRequestTemplate(const FGuid& TemplateId, const FRH_OnGetInstanceRequestTemplateCompleteDelegateBlock& Delegate)
{
	typedef RallyHereAPI::Traits_GetInstanceRequestTemplate BaseType;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this](const BaseType::Response& Resp)
			{
				if (Resp.IsSuccessful())
				{
					ImportAPIInstanceRequestTemplate(Resp.Content, Resp.ETag.Get(TEXT("")));
				}
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, TemplateId, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, GetInstanceRequestTemplate(TemplateId), ErrorInfo);
			}),
		GetDefault<URH_IntegrationSettings>()->GetMatchmakingTemplatePriority
		);

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.InstanceRequestTemplateId = TemplateId;

	const auto* Existing = GetMatchmakingTemplateGroup(TemplateId);
	if (Existing != nullptr)
	{
		// if we have an etag, use it
		if (Existing->GetETag().Len() > 0)
		{
			Request.IfNoneMatch = Existing->GetETag();
		}
	}

	Helper->Start(RH_APIs::GetQueuesAPI(), Request);
}

void URH_MatchmakingBrowserCache::ImportAPIInstanceRequestTemplate(const FRHAPI_InstanceRequestTemplate& APITemplate, const FString& ETag)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] : %s"), ANSI_TO_TCHAR(__FUNCTION__), *APITemplate.InstanceRequestTemplateId.ToString(EGuidFormats::DigitsWithHyphens));

	auto existingPtr = InstanceRequestTemplateCache.Find(APITemplate.InstanceRequestTemplateId);
	URH_InstanceRequestTemplate* TemplateWrapper = existingPtr ? *existingPtr : nullptr;

	if (TemplateWrapper == nullptr)
	{
		TemplateWrapper = NewObject<URH_InstanceRequestTemplate>(this);
		InstanceRequestTemplateCache.Add(APITemplate.InstanceRequestTemplateId, TemplateWrapper);
	}

	TemplateWrapper->ImportAPIInstanceLaunchTemplate(APITemplate, ETag);
}

void URH_MatchmakingBrowserCache::SearchRegions(const FRH_OnRegionSearchCompleteDelegateBlock& Delegate)
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
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, GetAllRegions(), ErrorInfo);
			}),
		GetDefault<URH_IntegrationSettings>()->GetSiteSettingsPriority
	);

	Helper->Start(RH_APIs::GetAPIs().GetSite(), Request);
}