// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#include "RH_MatchmakingBrowser.h"
#include "RallyHereIntegrationModule.h"
#include "RH_OnlineSubsystemNames.h"
#include "SessionsAPI.h"


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
				const auto Content = Resp.TryGetDefaultContentAsPointer();
				if (Resp.IsSuccessful() && Content != nullptr)
				{
					for (const auto& Queue : Content->Queues)
					{
						ImportAPIQueue(Queue, Resp.TryGetDefaultHeaderAsOptional_ETag().Get(TEXT("")));

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

	Helper->Start(RH_APIs::GetSessionsAPI(), Request);
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
	typedef RallyHereAPI::Traits_GetMatchMakingTemplatesV2 BaseType;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this](const BaseType::Response& Resp)
			{
				const auto Content = Resp.TryGetDefaultContentAsPointer();
				if (Resp.IsSuccessful() && Content != nullptr)
				{
					ImportAPIMatchmakingTemplateGroup(*Content, Resp.TryGetDefaultHeaderAsOptional_ETag().Get(TEXT("")));
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

	Helper->Start(RH_APIs::GetSessionsAPI(), Request);
}

void URH_MatchmakingBrowserCache::ImportAPIMatchmakingTemplateGroup(const FRHAPI_MatchMakingTemplateGroupV2& APITemplate, const FString& ETag)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] : %s"), ANSI_TO_TCHAR(__FUNCTION__), *APITemplate.GetMatchMakingTemplateGroupId().ToString(EGuidFormats::DigitsWithHyphens));

	auto existingPtr = MatchmakingTemplateGroupCache.Find(APITemplate.GetMatchMakingTemplateGroupId());
	auto* Wrapper = existingPtr ? *existingPtr : nullptr;

	if (Wrapper == nullptr)
	{
		Wrapper = NewObject<URH_MatchmakingTemplateGroupInfo>(this);
		MatchmakingTemplateGroupCache.Add(APITemplate.GetMatchMakingTemplateGroupId(), Wrapper);
	}

	Wrapper->ImportAPITemplateGroup(APITemplate, ETag);

	// import the profiles to the profile cache, since we have them anyways
	for (const auto& Options : APITemplate.GetTemplateOptions())
	{
		for (const auto& Profile : Options.GetProfiles())
		{
			ImportAPIMatchmakingProfile(Profile, FString());
		}
	}
}

void URH_MatchmakingBrowserCache::SearchMatchmakingProfile(const FString& ProfileId, const FRH_OnGetMatchmakingProfileCompleteDelegateBlock& Delegate)
{
	typedef RallyHereAPI::Traits_GetMatchMakingProfileV2 BaseType;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this](const BaseType::Response& Resp)
			{
				const auto Content = Resp.TryGetDefaultContentAsPointer();
				if (Resp.IsSuccessful() && Content != nullptr)
				{
					ImportAPIMatchmakingProfile(*Content, Resp.TryGetDefaultHeaderAsOptional_ETag().Get(TEXT("")));
				}
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, ProfileId, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, GetMatchmakingProfile(ProfileId), ErrorInfo);
			}),
		GetDefault<URH_IntegrationSettings>()->GetMatchmakingTemplatePriority
	);

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.MatchMakingProfileId = ProfileId;

	const auto* Existing = GetMatchmakingProfile(ProfileId);
	if (Existing != nullptr)
	{
		// if we have an etag, use it
		if (Existing->GetETag().Len() > 0)
		{
			Request.IfNoneMatch = Existing->GetETag();
		}
	}

	Helper->Start(RH_APIs::GetSessionsAPI(), Request);
}

void URH_MatchmakingBrowserCache::ImportAPIMatchmakingProfile(const FRHAPI_MatchMakingProfileV2& APIProfile, const FString& ETag)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] : %s"), ANSI_TO_TCHAR(__FUNCTION__), *APIProfile.GetMatchMakingProfileId());

	auto existingPtr = MatchmakingProfileCache.Find(APIProfile.GetMatchMakingProfileId());
	auto* Wrapper = existingPtr ? *existingPtr : nullptr;

	if (Wrapper == nullptr)
	{
		Wrapper = NewObject<URH_MatchmakingProfileInfo>(this);
		MatchmakingProfileCache.Add(APIProfile.GetMatchMakingProfileId(), Wrapper);
	}

	Wrapper->ImportAPIProfile(APIProfile, ETag);
}

void URH_MatchmakingBrowserCache::SearchInstanceRequestTemplate(const FGuid& TemplateId, const FRH_OnGetInstanceRequestTemplateCompleteDelegateBlock& Delegate)
{
	typedef RallyHereAPI::Traits_GetInstanceRequestTemplate BaseType;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this](const BaseType::Response& Resp)
			{
				const auto Content = Resp.TryGetDefaultContentAsPointer();
				if (Resp.IsSuccessful() && Content != nullptr)
				{
					ImportAPIInstanceRequestTemplate(*Content, Resp.TryGetDefaultHeaderAsOptional_ETag().Get(TEXT("")));
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

	Helper->Start(RH_APIs::GetSessionsAPI(), Request);
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

void URH_MatchmakingBrowserCache::SearchRegions(int32 Cursor, const FRH_OnRegionSearchCompleteDelegateBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	typedef RallyHereAPI::Traits_GetAllRegions BaseType;

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	if (Cursor != 0)
	{
		Request.Cursor = Cursor;
	}

	LastRegionCursor = 0;

	auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
		BaseType::Delegate::CreateWeakLambda(this, [this](const BaseType::Response& Resp)
			{
				const auto Content = Resp.TryGetDefaultContentAsPointer();
				if (Resp.IsSuccessful() && Content != nullptr)
				{
					// merge the regions in to the cache
					for (auto Region : Content->GetRegions())
					{
						ImportAPIRegion(Region);
					}

					// stash cursor for callback
					LastRegionCursor = Content->GetCursor();

					{
						SCOPED_NAMED_EVENT(RallyHere_BroadcastRegionsUpdated, FColor::Purple);
						OnRegionsUpdated.Broadcast(this);
						OnRegionsUpdatedNative.Broadcast(this);
					}
				}
			}),
		FRH_GenericSuccessWithErrorDelegate::CreateWeakLambda(this, [this, Delegate](bool bSuccess, const FRH_ErrorInfo& ErrorInfo)
			{
				Delegate.ExecuteIfBound(bSuccess, GetAllRegions(), LastRegionCursor, ErrorInfo);
			}),
		GetDefault<URH_IntegrationSettings>()->GetRegionsPriority
	);

	Helper->Start(RH_APIs::GetSessionsAPI(), Request);
}

void URH_MatchmakingBrowserCache::ImportAPIRegion(const FRHAPI_Region& APIRegion)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] : %s"), ANSI_TO_TCHAR(__FUNCTION__), *APIRegion.GetRegionId());

	RegionsCache.Add(APIRegion.GetRegionId(), APIRegion);
}