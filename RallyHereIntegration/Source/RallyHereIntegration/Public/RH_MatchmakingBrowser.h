// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineBaseTypes.h"
#include "Templates/SharedPointer.h"
#include "Delegates/Delegate.h"
#include "Delegates/DelegateCombinations.h"

#include "RH_Common.h"
#include "RH_SubsystemPluginBase.h"

#include "RH_MatchmakingBrowser.generated.h"

class URH_MatchmakingBrowserCache;

/** @ingroup MatchmakingBrowser
 */

/**
 * @brief Struct to define queue search parameters.
 */
USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_QueueSearchParams
{
	GENERATED_USTRUCT_BODY()
	/** @brief The Cursor location to start the search. */
	UPROPERTY()
	int32 Cursor;
	/** @brief The size of page to return from the search. */
	UPROPERTY()
	int32 PageSize;
	/** @brief Defautl constructor. */
	FRH_QueueSearchParams()
		:	Cursor(0)
		,	PageSize(10)
	{}
	/** @brief Gets a description of the search params for debugging. */
	FString GetDescription() const
	{
		return FString::Printf(TEXT("Queue Page: #%d @%d"), Cursor, PageSize);
	}
};

/** @ingroup MatchmakingBrowser
 */

/**
 * @brief Struct to define queue search results.
 */
USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_QueueSearchResult
{
	GENERATED_USTRUCT_BODY()
	/** @brief The params used to make the search request. */
	UPROPERTY()
	FRH_QueueSearchParams SearchParams;
	/** @brief The queues returned by the search request. */
	UPROPERTY()
	TArray<TWeakObjectPtr<URH_MatchmakingQueueInfo>> Queues;
	/** @brief Gets a description of the search result for debugging. */
	FString GetDescription() const
	{
		return FString::Printf(TEXT("Queue Count: %d, Search: {%s}"), Queues.Num(), *SearchParams.GetDescription());
	}
};

// delegate for queue search complete
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OnQueueSearchCompleteDynamicDelegate, bool, bSuccess, const FRH_QueueSearchResult&, SearchResult, const FRH_ErrorInfo&, ErrorInfo);
DECLARE_DELEGATE_ThreeParams(FRH_OnQueueSearchCompleteDelegate, bool, const FRH_QueueSearchResult&, const FRH_ErrorInfo&);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnQueueSearchCompleteDelegateBlock, FRH_OnQueueSearchCompleteDelegate, FRH_OnQueueSearchCompleteDynamicDelegate, bool, const FRH_QueueSearchResult&, const FRH_ErrorInfo&);

// delegate for matchmaking template search complete
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OnGetMatchmakingTemplateGroupCompleteDynamicDelegate, bool, bSuccess, URH_MatchmakingTemplateGroupInfo*, Result, const FRH_ErrorInfo&, ErrorInfo);
DECLARE_DELEGATE_ThreeParams(FRH_OnGetMatchmakingTemplateGroupCompleteDelegate, bool, const URH_MatchmakingTemplateGroupInfo*, const FRH_ErrorInfo&);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnGetMatchmakingTemplateGroupCompleteDelegateBlock, FRH_OnGetMatchmakingTemplateGroupCompleteDelegate, FRH_OnGetMatchmakingTemplateGroupCompleteDynamicDelegate, bool, URH_MatchmakingTemplateGroupInfo*, const FRH_ErrorInfo&);

// delegate for matchmaking profile search complete
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OnGetMatchmakingProfileCompleteDynamicDelegate, bool, bSuccess, URH_MatchmakingProfileInfo*, Result, const FRH_ErrorInfo&, ErrorInfo);
DECLARE_DELEGATE_ThreeParams(FRH_OnGetMatchmakingProfileCompleteDelegate, bool, const URH_MatchmakingProfileInfo*, const FRH_ErrorInfo&);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnGetMatchmakingProfileCompleteDelegateBlock, FRH_OnGetMatchmakingProfileCompleteDelegate, FRH_OnGetMatchmakingProfileCompleteDynamicDelegate, bool, URH_MatchmakingProfileInfo*, const FRH_ErrorInfo&);

// delegate for instance request template search complete
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OnGetInstanceRequestTemplateCompleteDynamicDelegate, bool, bSuccess, URH_InstanceRequestTemplate*, Result, const FRH_ErrorInfo&, ErrorInfo);
DECLARE_DELEGATE_ThreeParams(FRH_OnGetInstanceRequestTemplateCompleteDelegate, bool, const URH_InstanceRequestTemplate*, const FRH_ErrorInfo&);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnGetInstanceRequestTemplateCompleteDelegateBlock, FRH_OnGetInstanceRequestTemplateCompleteDelegate, FRH_OnGetInstanceRequestTemplateCompleteDynamicDelegate, bool, URH_InstanceRequestTemplate*, const FRH_ErrorInfo&);

// delegate for region search complete
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_FourParams(FRH_OnRegionSearchCompleteDynamicDelegate, bool, bSuccess, const TArray<FRHAPI_Region>&, Result, int32, Cursor, const FRH_ErrorInfo&, ErrorInfo);
DECLARE_DELEGATE_FourParams(FRH_OnRegionSearchCompleteDelegate, bool, const TArray<FRHAPI_Region>&, int32 Cursor, const FRH_ErrorInfo&);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnRegionSearchCompleteDelegateBlock, FRH_OnRegionSearchCompleteDelegate, FRH_OnRegionSearchCompleteDynamicDelegate, bool, const TArray<FRHAPI_Region>&, int32, const FRH_ErrorInfo&);

// multicast delegates for region search complete
DECLARE_MULTICAST_DELEGATE_OneParam(FRegionSettingsUpdatedDelegate, URH_MatchmakingBrowserCache*);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRegionSettingsUpdatedDynamicDelegate, URH_MatchmakingBrowserCache*, Result);

/** @defgroup MatchmakingBrowser RallyHere Matchmaking Browser
 *  @{
 */

/**
 * @brief Class to define a matchmaking queue.
 */
UCLASS(BlueprintType)
class RALLYHEREINTEGRATION_API URH_MatchmakingQueueInfo : public UObject
{
	GENERATED_BODY()
	/** @brief The configuration of the queue. */
	FRHAPI_QueueConfigV2 QueueInfo;
	/** @brief ETag of last queue info update. */
	FString ETag;
public:
	/** @brief Gets the queue info. */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	const FRHAPI_QueueConfigV2& GetQueueInfo() const { return QueueInfo; }
	/** @brief Gets the Etag for the queue info. */
	const FString& GetETag() const { return ETag; }

	/** @brief The ID for the queue, should not be used for display purposes */
	UFUNCTION(BlueprintPure, Category="Matchmaking|Queues")
	const FString& GetQueueId() const { return QueueInfo.QueueId; }
	/** @brief Flag for whether or not the queue is active, and can be joined or sessions created from it */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	bool IsActive() const { return QueueInfo.GetActive(); }
	/**
	 * @brief Imports queue info from an API call.
	 * @param [in] APIQueue Queue info from API call.
	 * @param [in] InETag ETag from API call.
	 */
	void ImportAPIQueue(const FRHAPI_QueueConfigV2& APIQueue, const FString& InETag)
	{
		QueueInfo = APIQueue;
		ETag = InETag;
	}
	/** @brief Gets a description of the queue, display its id for debugging. */
	FString GetDescription() const
	{
		return FString::Printf(TEXT("Queue: %s"), *GetQueueId());
	}
};

/**
 * @brief Class to organize a matchmaking Templates information.
 */
UCLASS()
class RALLYHEREINTEGRATION_API URH_MatchmakingTemplateGroupInfo : public UObject
{
	GENERATED_BODY()
	/** @brief The configuration of the template. */
	FRHAPI_MatchMakingTemplateGroupV2 TemplateInfo;
	/** @brief ETag of last template update. */
	FString ETag;
public:
	/** @brief Gets the template info. */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	const FRHAPI_MatchMakingTemplateGroupV2& GetInfo() const { return TemplateInfo; }
	/** @brief Gets the Etag for the template info. */
	const FString& GetETag() const { return ETag; }

	/** @brief ID for this set of potential matchmaking templates */
	UFUNCTION(BlueprintPure, Category="Matchmaking|Queues")
	const FGuid& GetTemplateGroupId() const { return TemplateInfo.GetMatchMakingTemplateGroupId(); }

	///** @brief List of the different matchmaking templates that could be used. The config is chosen based on a set of rules in each MatchMakingTemplate object. If there are no rules, it's the default template */
	//UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	//const TArray<RallyHereAPI::FMatchMakingTemplate>& GetTemplateOptions() const { return TemplateInfo.TemplateOptions; }
	/** @brief Set of all the item ids that are required to validate every rule contained in this template group */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	TSet<int32> GetRequiredItemIds() const { return TemplateInfo.GetRequiredItemIds(TSet<int32>()); }

	/** @brief ID for which instance launch template this queue will use */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	const TArray<FGuid> GetPossibleInstanceRequestTemplateIds() const
	{
		TArray<FGuid> Result;
		for (auto TemplateOption : TemplateInfo.TemplateOptions)
		{
			for (auto Profile : TemplateOption.Profiles)
			{
				Result.Add(Profile.GetInstanceRequestTemplateId());
			}
		}

		return Result;
	}
	/**
	 * @brief Imports template info from an API call.
	 * @param [in] APITemplateGroup Template info from API call.
	 * @param [in] InETag ETag from API call.
	 */
	void ImportAPITemplateGroup(const FRHAPI_MatchMakingTemplateGroupV2& APITemplateGroup, const FString& InETag)
	{
		TemplateInfo = APITemplateGroup;
		ETag = InETag;
	}
	/** @brief Gets a description of the template, display its id for debugging. */
	FString GetDescription() const
	{
		return FString::Printf(TEXT("Matchmaking Template Group: %s"), *GetTemplateGroupId().ToString(EGuidFormats::DigitsWithHyphens));
	}
};


/**
 * @brief Class to organize a matchmaking Profiles information.
 */
UCLASS()
class RALLYHEREINTEGRATION_API URH_MatchmakingProfileInfo : public UObject
{
	GENERATED_BODY()
	/** @brief The configuration of the profile. */
	FRHAPI_MatchMakingProfileV2 ProfileInfo;
	/** @brief ETag of last template update. */
	FString ETag;
public:
	/** @brief Gets the template info. */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	const FRHAPI_MatchMakingProfileV2& GetProfile() const { return ProfileInfo; }
	/** @brief Gets the Etag for the template info. */
	const FString& GetETag() const { return ETag; }

	/** @brief ID for this set of potential matchmaking templates */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	const FString& GetProfileId() const { return ProfileInfo.GetMatchMakingProfileId(); }

	/**
	 * @brief Imports profile  info from an API call.
	 * @param [in] APIProfile Profile info from API call.
	 * @param [in] InETag ETag from API call.
	 */
	void ImportAPIProfile(const FRHAPI_MatchMakingProfileV2& APIProfile, const FString& InETag)
	{
		ProfileInfo = APIProfile;
		ETag = InETag;
	}
	/** @brief Gets a description of the template, display its id for debugging. */
	FString GetDescription() const
	{
		return FString::Printf(TEXT("Matchmaking Profile: %s"), *GetProfileId());
	}
};

/**
 * @brief Class to organize a Instance Request Templates information.
 */
UCLASS()
class RALLYHEREINTEGRATION_API URH_InstanceRequestTemplate : public UObject
{
	GENERATED_BODY()
	/** @brief The configuration of the template. */
	FRHAPI_InstanceRequestTemplate TemplateInfo;
	/** @brief ETag of last template update. */
	FString ETag;
public:
	/** @brief Gets the template info. */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	const FRHAPI_InstanceRequestTemplate& GetInfo() const { return TemplateInfo; }
	/** @brief Gets the Etag for the template info. */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	const FString& GetETag() const { return ETag; }

	/** @brief ID to uniquely identify this instance launch template */
	UFUNCTION(BlueprintPure, Category="Matchmaking|Queues")
	const FGuid& GetInstanceRequestTemplateId() const { return TemplateInfo.InstanceRequestTemplateId; }

	/** @brief Custom data that will be passed to the session during the instance launch request */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	const TMap<FString, FString>& GetCustomData() const { return TemplateInfo.GetCustomData(); }
	/**
	 * @brief Imports template info from an API call.
	 * @param [in] APITemplate Template info from API call.
	 * @param [in] InETag ETag from API call.
	 */
	void ImportAPIInstanceLaunchTemplate(const FRHAPI_InstanceRequestTemplate& APITemplate, const FString& InETag)
	{
		TemplateInfo = APITemplate;
		ETag = InETag;
	}
	/** @brief Gets a description of the template, display its id for debugging. */
	FString GetDescription() const
	{
		return FString::Printf(TEXT("Instance Launch Template: %s"), *GetInstanceRequestTemplateId().ToString(EGuidFormats::DigitsWithHyphens));
	}
};

/**
 * @brief Simple container class to hold matchmaking data, does not have its own auth context, relies upon getting it from elsewhere during calls, so that it can be used to cache across multiple players
 */
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_MatchmakingBrowserCache : public URH_GameInstanceSubsystemPlugin
{
	GENERATED_BODY()
public:
	/**
	 * @brief Default constructor.
	 */
	URH_MatchmakingBrowserCache();
	/**
	 * @brief Search for queues.
	 * @param [in] params The search params to use for the given search.
	 * @param [in] Delegate Callback with the results of the search.
	 */
	void SearchQueues(const FRH_QueueSearchParams& params, const FRH_OnQueueSearchCompleteDelegateBlock& Delegate = FRH_OnQueueSearchCompleteDelegateBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Matchmaking|Queues", meta = (DisplayName = "Search Queues", AutoCreateRefTerm = "params,Delegate"))
	void BLUEPRINT_SearchQueues(const FRH_QueueSearchParams& params, const FRH_OnQueueSearchCompleteDynamicDelegate& Delegate) { SearchQueues(params, Delegate); }
	/**
	 * @brief Search for a matchmaking template.
	 * @param [in] TemplateId The matchmaking template to search for.
	 * @param [in] Delegate Callback with the results of the search.
	 */
	void SearchMatchmakingTemplateGroup(const FGuid& TemplateId, const FRH_OnGetMatchmakingTemplateGroupCompleteDelegateBlock& Delegate = FRH_OnGetMatchmakingTemplateGroupCompleteDelegateBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Matchmaking|Queues", meta = (DisplayName = "Get Matchmaking Template Group", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_SearchMatchmakingTemplateGroup(const FGuid& TemplateId, const FRH_OnGetMatchmakingTemplateGroupCompleteDynamicDelegate& Delegate) { SearchMatchmakingTemplateGroup(TemplateId, Delegate); }
	/**
	 * @brief Search for a matchmaking profiles.
	 * @param [in] ProfileId The matchmaking profile to search for.
	 * @param [in] Delegate Callback with the results of the search.
	 */
	void SearchMatchmakingProfile(const FString& ProfileId, const FRH_OnGetMatchmakingProfileCompleteDelegateBlock& Delegate = FRH_OnGetMatchmakingProfileCompleteDelegateBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Matchmaking|Queues", meta = (DisplayName = "Get Matchmaking Profile", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_SearchMatchmakingProfile(const FString& ProfileId, const FRH_OnGetMatchmakingProfileCompleteDynamicDelegate& Delegate) { SearchMatchmakingProfile(ProfileId, Delegate); }
	/**
	 * @brief Search for an instance launch template.
	 * @param [in] TemplateId The matchmaking template to search for.
	 * @param [in] Delegate Callback with the results of the search.
	 */
	void SearchInstanceRequestTemplate(const FGuid& TemplateId, const FRH_OnGetInstanceRequestTemplateCompleteDelegateBlock& Delegate = FRH_OnGetInstanceRequestTemplateCompleteDelegateBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Matchmaking|Queues", meta = (DisplayName = "Get Instance Request Template", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_SearchInstanceRequestTemplate(const FGuid& TemplateId, const FRH_OnGetInstanceRequestTemplateCompleteDynamicDelegate& Delegate) { SearchInstanceRequestTemplate(TemplateId, Delegate); }
	/**
	 * @brief Search for matchmaking regions.
	 * @param [in] Delegate Callback with the results of the search.
	 */
	void SearchRegions(int32 Cursor = 0, const FRH_OnRegionSearchCompleteDelegateBlock& Delegate = FRH_OnRegionSearchCompleteDelegateBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Matchmaking|Queues", meta = (DisplayName = "Get Matchmaking Template Group", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_SearchRegions(int32 Cursor, const FRH_OnRegionSearchCompleteDynamicDelegate& Delegate) { SearchRegions(Cursor, Delegate); }

	/** @brief Get a cached queue by Queue Id. */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	URH_MatchmakingQueueInfo* GetQueue(const FString& QueueId) const
	{
		auto ptr = QueueCache.Find(QueueId);
		return ptr != nullptr ? (*ptr) : nullptr;
	}
	/** @brief Get a cached matchmaking template by Template Id. */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	URH_MatchmakingTemplateGroupInfo* GetMatchmakingTemplateGroup(const FGuid& TemplateGroupId) const
	{
		auto ptr = MatchmakingTemplateGroupCache.Find(TemplateGroupId);
		return ptr != nullptr ? (*ptr) : nullptr;
	}
	/** @brief Get a cached matchmaking template by Template Id. */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	URH_MatchmakingProfileInfo* GetMatchmakingProfile(const FString& ProfileId) const
	{
		auto ptr = MatchmakingProfileCache.Find(ProfileId);
		return ptr != nullptr ? (*ptr) : nullptr;
	}
	/** @brief Get a cached instance request template by Template Id. */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	URH_InstanceRequestTemplate* GetInstanceRequestTemplate(const FGuid& InstanceRequestTemplateId) const
	{
		auto ptr = InstanceRequestTemplateCache.Find(InstanceRequestTemplateId);
		return ptr != nullptr ? (*ptr) : nullptr;
	}
	/** @brief Get a cached region by Region Id. */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Region")
	bool GetRegion(const FString& RegionId, FRHAPI_Region& OutRegion) const
	{
		auto ptr = RegionsCache.Find(RegionId);
		if (ptr != nullptr)
		{
			OutRegion = *ptr;
			return true;
		}
		return false;
	}

	/** @brief Get all cached queues. */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	FORCEINLINE TArray<URH_MatchmakingQueueInfo*> GetAllQueues() const
	{
		TArray<URH_MatchmakingQueueInfo*> Result;
		QueueCache.GenerateValueArray(Result);
		return Result;
	}
	/** @brief Get all cached matchmaking templates. */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	const TArray<URH_MatchmakingTemplateGroupInfo*> GetAllMatchmakingTemplateGroups() const
	{
		TArray<URH_MatchmakingTemplateGroupInfo*> Result;
		MatchmakingTemplateGroupCache.GenerateValueArray(Result);
		return Result;
	}
	/** @brief Get all cached matchmaking profiles. */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	const TArray<URH_MatchmakingProfileInfo*> GetAllMatchmakingProfiles() const
	{
		TArray<URH_MatchmakingProfileInfo*> Result;
		MatchmakingProfileCache.GenerateValueArray(Result);
		return Result;
	}
	/** @brief Get all cached instance request templates. */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	const TArray<URH_InstanceRequestTemplate*> GetAllInstanceRequestTemplates() const
	{
		TArray<URH_InstanceRequestTemplate*> Result;
		InstanceRequestTemplateCache.GenerateValueArray(Result);
		return Result;
	}
	/** @brief Get all cached matchmaking regions. */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Region")
	TArray<FRHAPI_Region> GetAllRegions() const
	{
		TArray<FRHAPI_Region> Result;
		RegionsCache.GenerateValueArray(Result);
		return Result;
	}
	/** @brief Delegate to listen for matchmaking regions updated. */
	FRegionSettingsUpdatedDelegate OnRegionsUpdatedNative;
	UPROPERTY(EditInstanceOnly, BlueprintAssignable, Category = "Matchmaking|Region")
	FRegionSettingsUpdatedDynamicDelegate OnRegionsUpdated;
	/** @brief Clears the cache of all queues and templates. */
	void ClearCache()
	{
		QueueCache.Reset();
		MatchmakingTemplateGroupCache.Reset();
		MatchmakingProfileCache.Reset();
		InstanceRequestTemplateCache.Reset();
	}
	/** @brief Clears the cache of regions. */
	void ClearRegionsCache()
	{
		RegionsCache.Reset();
	}
	/**
	 * @brief Imports queue info from an API call.
	 * @param [in] APIQueue Queue info from API call.
	 * @param [in] InETag ETag from API call.
	 */
	void ImportAPIQueue(const FRHAPI_QueueConfigV2& APIQueue, const FString& ETag);
	/**
	 * @brief Imports template info from an API call.
	 * @param [in] APITemplateGroup Template info from API call.
	 * @param [in] InETag ETag from API call.
	 */
	void ImportAPIMatchmakingTemplateGroup(const FRHAPI_MatchMakingTemplateGroupV2& APITemplateGroup, const FString& ETag);
	/**
	 * @brief Imports profile info from an API call.
	 * @param [in] APIProfile Profile info from API call.
	 * @param [in] InETag ETag from API call.
	 */
	void ImportAPIMatchmakingProfile(const FRHAPI_MatchMakingProfileV2& APIProfile, const FString& ETag);
	/**
	 * @brief Imports template info from an API call.
	 * @param [in] APITemplate Template info from API call.
	 * @param [in] InETag ETag from API call.
	 */
	void ImportAPIInstanceRequestTemplate(const FRHAPI_InstanceRequestTemplate& APITemplate, const FString& ETag);
	/**
	 * @brief Imports region info from an API call.
	 * @param [in] APIRegions Region info from API call.
	 */
	void ImportAPIRegion(const FRHAPI_Region& APIRegion);


protected:
	/** @brief Map of Queue Id to Queue Infos. */
	UPROPERTY(VisibleInstanceOnly, Category = "Matchmaking|Queue")
	TMap<FString, URH_MatchmakingQueueInfo*> QueueCache;
	/** @brief Map of Template Id to Matchmaking Template Group Infos. */
	UPROPERTY(VisibleInstanceOnly, Category = "Matchmaking|Queue")
	TMap<FGuid, URH_MatchmakingTemplateGroupInfo*> MatchmakingTemplateGroupCache;
	/** @brief Map of Matchmaking Profile Id to Profile Objects. */
	UPROPERTY(VisibleInstanceOnly, Category = "Matchmaking|Queue")
	TMap<FString, URH_MatchmakingProfileInfo*> MatchmakingProfileCache;
	/** @brief Map of Template Id to Instance Launch Template Infos. */
	UPROPERTY(VisibleInstanceOnly, Category = "Matchmaking|Queue")
	TMap<FGuid, URH_InstanceRequestTemplate*> InstanceRequestTemplateCache;
	/** @brief Array of Regions. */
	UPROPERTY(VisibleInstanceOnly, Category = "Matchmaking|Region")
	TMap<FString, FRHAPI_Region> RegionsCache;
	UPROPERTY(VisibleInstanceOnly, Category = "Matchmaking|Region")
	int32 LastRegionCursor;
};

/** @} */