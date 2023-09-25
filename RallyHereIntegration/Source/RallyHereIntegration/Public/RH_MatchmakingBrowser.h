#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineBaseTypes.h"
#include "Templates/SharedPointer.h"
#include "Delegates/Delegate.h"
#include "Delegates/DelegateCombinations.h"

#include "RH_Common.h"
#include "RH_SubsystemPluginBase.h"
#include "QueuesAPI.h"
#include "SiteAPI.h"

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

// generic delegate for multiple types of session events
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_OnQueueSearchCompleteDynamicDelegate, bool, bSuccess, const FRH_QueueSearchResult&, SearchResult);
DECLARE_DELEGATE_TwoParams(FRH_OnQueueSearchCompleteDelegate, bool, const FRH_QueueSearchResult&);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnQueueSearchCompleteDelegateBlock, FRH_OnQueueSearchCompleteDelegate, FRH_OnQueueSearchCompleteDynamicDelegate, bool, const FRH_QueueSearchResult&);

// generic delegate for multiple types of session events
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_OnGetMatchmakingTemplateGroupCompleteDynamicDelegate, bool, bSuccess, URH_MatchmakingTemplateGroupInfo*, Result);
DECLARE_DELEGATE_TwoParams(FRH_OnGetMatchmakingTemplateGroupCompleteDelegate, bool, const URH_MatchmakingTemplateGroupInfo*);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnGetMatchmakingTemplateGroupCompleteDelegateBlock, FRH_OnGetMatchmakingTemplateGroupCompleteDelegate, FRH_OnGetMatchmakingTemplateGroupCompleteDynamicDelegate, bool, URH_MatchmakingTemplateGroupInfo*);

// generic delegate for multiple types of session events
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_OnGetInstanceLaunchTemplateCompleteDynamicDelegate, bool, bSuccess, URH_InstanceLaunchTemplate*, Result);
DECLARE_DELEGATE_TwoParams(FRH_OnGetInstanceLaunchTemplateCompleteDelegate, bool, const URH_InstanceLaunchTemplate*);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnGetInstanceLaunchTemplateCompleteDelegateBlock, FRH_OnGetInstanceLaunchTemplateCompleteDelegate, FRH_OnGetInstanceLaunchTemplateCompleteDynamicDelegate, bool, URH_InstanceLaunchTemplate*);

// generic delegate for multiple types of session events
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_OnRegionSearchCompleteDynamicDelegate, bool, bSuccess, const TArray<FRHAPI_SiteSettings>&, Result);
DECLARE_DELEGATE_TwoParams(FRH_OnRegionSearchCompleteDelegate, bool, const TArray<FRHAPI_SiteSettings>&);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnRegionSearchCompleteDelegateBlock, FRH_OnRegionSearchCompleteDelegate, FRH_OnRegionSearchCompleteDynamicDelegate, bool, const TArray<FRHAPI_SiteSettings>&);

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
	FRHAPI_QueueConfig QueueInfo;
	/** @brief ETag of last queue info update. */
	FString ETag;
public:
	/** @brief Gets the queue info. */
	const FRHAPI_QueueConfig& GetQueueInfo() const { return QueueInfo; }
	/** @brief Gets the Etag for the queue info. */
	const FString& GetETag() const { return ETag; }

	/** @brief The ID for the queue, should not be used for display purposes */
	UFUNCTION(BlueprintPure, Category="Matchmaking|Queues")
	const FString& GetQueueId() const { return QueueInfo.QueueId; }

	/** @brief Flag for whether or not the queue is active, and can be joined or sessions created from it */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	bool IsActive() const { return QueueInfo.Active; }
	/** @brief Which rank this queue should use MMR from to make matches from, and update at the end of match (1v1 MMR or 2v2 MMR for example) */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	int32 GetRankingType() const { return QueueInfo.RankingType; }
	/** @brief The number of sides a game in this queue will have (2 in a 1v1 and 3 in a 1v1v1 for example */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	int32 GetNumSides() const { return QueueInfo.NumSides; }
	/** @brief The maximum number of players that can be on each team */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	int32 GetMaxPlayersPerSide() const { return QueueInfo.MaxPlayersPerSide; }
	/** @brief The minimum number of players that can be on each team */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	int32 GetMinPlayersPerSide() const { return QueueInfo.MinPlayersPerSide; }
	/** @brief The maximum size of a group that can join this queue */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	int32 GetMaxQueueGroupSize() const { return QueueInfo.MaxQueueGroupSize; }
	/** @brief ID for which group of matchmaking templates/rules will be used when joining this queue */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	const FGuid& GetMatchMakingTemplateGroupId() const { return QueueInfo.MatchMakingTemplateGroupId; }
	/**
	 * @brief Imports queue info from an API call.
	 * @param [in] APIQueue Queue info from API call.
	 * @param [in] InETag ETag from API call.
	 */
	void ImportAPIQueue(const FRHAPI_QueueConfig& APIQueue, const FString& InETag)
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
	FRHAPI_MatchMakingTemplateGroup TemplateInfo;
	/** @brief ETag of last template update. */
	FString ETag;
public:
	/** @brief Gets the template info. */
	const FRHAPI_MatchMakingTemplateGroup& GetInfo() const { return TemplateInfo; }
	/** @brief Gets the Etag for the template info. */
	const FString& GetETag() const { return ETag; }

	/** @brief ID for this set of potential matchmaking templates */
	UFUNCTION(BlueprintPure, Category="Matchmaking|Queues")
	const FGuid& GetTemplateGroupId() const { return TemplateInfo.TemplateGroupId; }

	///** @brief List of the different matchmaking templates that could be used. The config is chosen based on a set of rules in each MatchMakingTemplate object. If there are no rules, it's the default template */
	//UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	//const TArray<RallyHereAPI::FMatchMakingTemplate>& GetTemplateOptions() const { return TemplateInfo.TemplateOptions; }
	/** @brief Set of all the item ids that are required to validate every rule contained in this template group */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	TSet<int32> GetRequiredItemIds() const { return TemplateInfo.GetRequiredItemIds(TSet<int32>()); }

	/** @brief ID for which instance launch template this queue will use */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	const TArray<FGuid> GetPossibleInstanceLaunchTemplateIds() const
	{
		TArray<FGuid> Result;
		for (auto TemplateOption : TemplateInfo.TemplateOptions)
		{
			for (auto Profile : TemplateOption.Profiles)
			{
				Result.Add(Profile.GetInstanceLaunchTemplateId());
			}
		}

		return Result;
	}
	/**
	 * @brief Imports template info from an API call.
	 * @param [in] APITemplateGroup Template info from API call.
	 * @param [in] InETag ETag from API call.
	 */
	void ImportAPITemplateGroup(const FRHAPI_MatchMakingTemplateGroup& APITemplateGroup, const FString& InETag)
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
 * @brief Class to organize a Instance Launch Templates information.
 */
UCLASS()
class RALLYHEREINTEGRATION_API URH_InstanceLaunchTemplate : public UObject
{
	GENERATED_BODY()
	/** @brief The configuration of the template. */
	FRHAPI_InstanceLaunchTemplate TemplateInfo;
	/** @brief ETag of last template update. */
	FString ETag;
public:
	/** @brief Gets the template info. */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	const FRHAPI_InstanceLaunchTemplate& GetInfo() const { return TemplateInfo; }
	/** @brief Gets the Etag for the template info. */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	const FString& GetETag() const { return ETag; }

	/** @brief ID to uniquely identify this instance launch template */
	UFUNCTION(BlueprintPure, Category="Matchmaking|Queues")
	const FGuid& GetInstanceLaunchTemplateId() const { return TemplateInfo.InstanceLaunchTemplateId; }

	/** @brief Custom data that will be passed to the session during the instance launch request */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	const TMap<FString, FString>& GetCustomData() const { return TemplateInfo.GetCustomData(); }
	/**
	 * @brief Imports template info from an API call.
	 * @param [in] APITemplate Template info from API call.
	 * @param [in] InETag ETag from API call.
	 */
	void ImportAPIInstanceLaunchTemplate(const FRHAPI_InstanceLaunchTemplate& APITemplate, const FString& InETag)
	{
		TemplateInfo = APITemplate;
		ETag = InETag;
	}
	/** @brief Gets a description of the template, display its id for debugging. */
	FString GetDescription() const
	{
		return FString::Printf(TEXT("Instance Launch Template: %s"), *GetInstanceLaunchTemplateId().ToString(EGuidFormats::DigitsWithHyphens));
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
	UFUNCTION(BlueprintCallable, Category = "Matchmaking|Queues", meta = (DisplayName = "Search Queues", AutoCreateRefTerm = "params,Delegate"))
	void BLUEPRINT_SearchQueues(const FRH_QueueSearchParams& params, const FRH_OnQueueSearchCompleteDynamicDelegate& Delegate) { SearchQueues(params, Delegate); }
	/**
	 * @brief Search for a matchmaking template.
	 * @param [in] TemplateId The matchmaking template to search for.
	 * @param [in] Delegate Callback with the results of the search.
	 */
	void SearchMatchmakingTemplateGroup(const FGuid& TemplateId, const FRH_OnGetMatchmakingTemplateGroupCompleteDelegateBlock& Delegate = FRH_OnGetMatchmakingTemplateGroupCompleteDelegateBlock());
	UFUNCTION(BlueprintCallable, Category = "Matchmaking|Queues", meta = (DisplayName = "Get Matchmaking Template Group", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_SearchMatchmakingTemplateGroup(const FGuid& TemplateId, const FRH_OnGetMatchmakingTemplateGroupCompleteDynamicDelegate& Delegate) { SearchMatchmakingTemplateGroup(TemplateId, Delegate); }
	/**
	 * @brief Search for an instance launch template.
	 * @param [in] TemplateId The matchmaking template to search for.
	 * @param [in] Delegate Callback with the results of the search.
	 */
	void SearchInstanceLaunchTemplate(const FGuid& TemplateId, const FRH_OnGetInstanceLaunchTemplateCompleteDelegateBlock& Delegate = FRH_OnGetInstanceLaunchTemplateCompleteDelegateBlock());
	UFUNCTION(BlueprintCallable, Category = "Matchmaking|Queues", meta = (DisplayName = "Get Matchmaking Template Group", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_SearchInstanceLaunchTemplate(const FGuid& TemplateId, const FRH_OnGetInstanceLaunchTemplateCompleteDynamicDelegate& Delegate) { SearchInstanceLaunchTemplate(TemplateId, Delegate); }
	/**
	 * @brief Search for matchmaking regions.
	 * @param [in] Delegate Callback with the results of the search.
	 */
	void SearchRegions(const FRH_OnRegionSearchCompleteDelegateBlock& Delegate = FRH_OnRegionSearchCompleteDelegateBlock());
	UFUNCTION(BlueprintCallable, Category = "Matchmaking|Queues", meta = (DisplayName = "Get Matchmaking Template Group", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_SearchRegions(const FRH_OnRegionSearchCompleteDynamicDelegate& Delegate) { SearchRegions(Delegate); }
	/** @brief Get a cached queue by Queue Id. */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	URH_MatchmakingQueueInfo* GetQueue(const FString& QueueId) const
	{
		auto ptr = QueueCache.Find(QueueId);
		return ptr != nullptr ? (*ptr) : nullptr;
	}
	/** @brief Get all cached queues. */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	FORCEINLINE TArray<URH_MatchmakingQueueInfo*> GetAllQueues() const
	{
		TArray<URH_MatchmakingQueueInfo*> Result;
		QueueCache.GenerateValueArray(Result);
		return Result;
	}
	/** @brief Get a cached matchmaking template by Template Id. */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	URH_MatchmakingTemplateGroupInfo* GetMatchmakingTemplateGroup(const FGuid& TemplateGroupId) const
	{
		auto ptr = TemplateGroupCache.Find(TemplateGroupId);
		return ptr != nullptr ? (*ptr) : nullptr;
	}
	/** @brief Get a cached instance launch template by Template Id. */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	URH_InstanceLaunchTemplate* GetInstanceLaunchTemplate(const FGuid& InstanceLaunchTemplateId) const
	{
		auto ptr = InstanceLaunchTemplateCache.Find(InstanceLaunchTemplateId);
		return ptr != nullptr ? (*ptr) : nullptr;
	}
	/** @brief Get all cached matchmaking regions. */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Region")
	const TArray<FRHAPI_SiteSettings>& GetAllRegions() const
	{
		return RegionsCache;
	}
	/** @brief Delegate to listen for matchmaking regions updated. */
	FRegionSettingsUpdatedDelegate OnRegionsUpdatedNative;
	UPROPERTY(EditInstanceOnly, BlueprintAssignable, Category = "Matchmaking|Region")
	FRegionSettingsUpdatedDynamicDelegate OnRegionsUpdated;
	/** @brief Clears the cache of all queues and templates. */
	void ClearCache()
	{
		QueueCache.Reset();
		TemplateGroupCache.Reset();
		InstanceLaunchTemplateCache.Reset();
	}
	/**
	 * @brief Imports queue info from an API call.
	 * @param [in] APIQueue Queue info from API call.
	 * @param [in] InETag ETag from API call.
	 */
	void ImportAPIQueue(const FRHAPI_QueueConfig& APIQueue, const FString& ETag);
	/**
	 * @brief Imports template info from an API call.
	 * @param [in] APITemplateGroup Template info from API call.
	 * @param [in] InETag ETag from API call.
	 */
	void ImportAPITemplateGroup(const FRHAPI_MatchMakingTemplateGroup& APITemplateGroup, const FString& ETag);
	/**
	 * @brief Imports template info from an API call.
	 * @param [in] APITemplate Template info from API call.
	 * @param [in] InETag ETag from API call.
	 */
	void ImportAPIInstanceLaunchTemplate(const FRHAPI_InstanceLaunchTemplate& APITemplate, const FString& ETag);

protected:
	/** @brief Map of Queue Id to Queue Infos. */
	UPROPERTY(VisibleInstanceOnly, Category = "Matchmaking|Queue")
	TMap<FString, URH_MatchmakingQueueInfo*> QueueCache;
	/** @brief Map of Template Id to Matchmaking Template Group Infos. */
	UPROPERTY(VisibleInstanceOnly, Category = "Matchmaking|Queue")
	TMap<FGuid, URH_MatchmakingTemplateGroupInfo*> TemplateGroupCache;
	/** @brief Map of Template Id to Instance Launch Template Infos. */
	UPROPERTY(VisibleInstanceOnly, Category = "Matchmaking|Queue")
	TMap<FGuid, URH_InstanceLaunchTemplate*> InstanceLaunchTemplateCache;
	/** @brief Array of Regions. */
	UPROPERTY(VisibleInstanceOnly, Category = "Matchmaking|Region")
	TArray<FRHAPI_SiteSettings> RegionsCache;
};

/** @} */