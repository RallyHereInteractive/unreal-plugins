
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

#include "RH_MatchmakingBrowser.generated.h"

UCLASS(BlueprintType)
class RALLYHEREINTEGRATION_API URH_MatchmakingQueueInfo : public UObject
{
	GENERATED_BODY()

	FRHAPI_QueueConfig QueueInfo;

	FString ETag;
public:

	const FRHAPI_QueueConfig& GetQueueInfo() const { return QueueInfo; }
	const FString& GetETag() const { return ETag; }

	/* The ID for the queue, should not be used for display purposes */
	UFUNCTION(BlueprintPure, Category="Matchmaking|Queues")
	const FString& GetQueueId() const { return QueueInfo.QueueId; }

	/* Flag for whether or not the queue is active, and can be joined or sessions created from it */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	bool IsActive() const { return QueueInfo.Active; }
	/* Which rank this queue should use MMR from to make matches from, and update at the end of match (1v1 MMR or 2v2 MMR for example) */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	int32 GetRankingType() const { return QueueInfo.RankingType; }
	/* The number of sides a game in this queue will have (2 in a 1v1 and 3 in a 1v1v1 for example */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	int32 GetNumSides() const { return QueueInfo.NumSides; }
	/* The maximum number of players that can be on each team */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	int32 GetMaxPlayersPerSide() const { return QueueInfo.MaxPlayersPerSide; }
	/* The minimum number of players that can be on each team */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	int32 GetMinPlayersPerSide() const { return QueueInfo.MinPlayersPerSide; }
	/* The maximum size of a group that can join this queue */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	int32 GetMaxQueueGroupSize() const { return QueueInfo.MaxQueueGroupSize; }
	/* ID for which group of matchmaking templates/rules will be used when joining this queue */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	const FGuid& GetMatchMakingTemplateGroupId() const { return QueueInfo.MatchMakingTemplateGroupId; }

	void ImportAPIQueue(const FRHAPI_QueueConfig& APIQueue, const FString& InETag)
	{
		QueueInfo = APIQueue;
		ETag = InETag;
	}

	FString GetDescription() const
	{
		return FString::Printf(TEXT("Queue: %s"), *GetQueueId());
	}
};

USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_QueueSearchParams
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
	int32 Cursor;

	UPROPERTY()
	int32 PageSize;

	FRH_QueueSearchParams()
		:	Cursor(0)
		,	PageSize(10)
	{}

	FString GetDescription() const
	{
		return FString::Printf(TEXT("Queue Page: #%d @%d"), Cursor, PageSize);
	}
};

USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_QueueSearchResult
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
	FRH_QueueSearchParams SearchParams;

	UPROPERTY()
	TArray<TWeakObjectPtr<URH_MatchmakingQueueInfo>> Queues;

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

UCLASS()
class RALLYHEREINTEGRATION_API URH_MatchmakingTemplateGroupInfo : public UObject
{
	GENERATED_BODY()

	FRHAPI_MatchMakingTemplateGroup TemplateInfo;
	FString ETag;
public:

	const FRHAPI_MatchMakingTemplateGroup& GetInfo() const { return TemplateInfo; }
	const FString& GetETag() const { return ETag; }

	/* ID for this set of potential matchmaking templates */
	UFUNCTION(BlueprintPure, Category="Matchmaking|Queues")
	const FGuid& GetTemplateGroupId() const { return TemplateInfo.TemplateGroupId; }

	/* List of the different matchmaking templates that could be used. The config is chosen based on a set of rules in each MatchMakingTemplate object. If there are no rules, it's the default template */
	//UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	//const TArray<RallyHereAPI::FMatchMakingTemplate>& GetTemplateOptions() const { return TemplateInfo.TemplateOptions; }
	/* Set of all the item ids that are required to validate every rule contained in this template group */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	TSet<int32> GetRequiredItemIds() const { return TemplateInfo.GetRequiredItemIds(TSet<int32>()); }

	/* ID for which instance launch template this queue will use */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	const TArray<FGuid> GetPossibleInstanceLaunchTemplateIds() const
	{
		TArray<FGuid> Result;
		for (auto TemplateOption : TemplateInfo.TemplateOptions)
		{
			for (auto Profile : TemplateOption.Profiles)
			{
				Result.Add(Profile.InstanceLaunchTemplateId);
			}
		}

		return Result;
	}

	void ImportAPITemplateGroup(const FRHAPI_MatchMakingTemplateGroup& APITemplateGroup, const FString& InETag)
	{
		TemplateInfo = APITemplateGroup;
		ETag = InETag;
	}

	FString GetDescription() const
	{
		return FString::Printf(TEXT("Matchmaking Template Group: %s"), *GetTemplateGroupId().ToString(EGuidFormats::DigitsWithHyphens));
	}
};

// generic delegate for multiple types of session events
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_OnGetMatchmakingTemplateGroupCompleteDynamicDelegate, bool, bSuccess, URH_MatchmakingTemplateGroupInfo*, Result);
DECLARE_DELEGATE_TwoParams(FRH_OnGetMatchmakingTemplateGroupCompleteDelegate, bool, const URH_MatchmakingTemplateGroupInfo*);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnGetMatchmakingTemplateGroupCompleteDelegateBlock, FRH_OnGetMatchmakingTemplateGroupCompleteDelegate, FRH_OnGetMatchmakingTemplateGroupCompleteDynamicDelegate, bool, URH_MatchmakingTemplateGroupInfo*);


UCLASS()
class RALLYHEREINTEGRATION_API URH_InstanceLaunchTemplate : public UObject
{
	GENERATED_BODY()

	FRHAPI_InstanceLaunchTemplate TemplateInfo;
	FString ETag;
public:

	const FRHAPI_InstanceLaunchTemplate& GetInfo() const { return TemplateInfo; }
	const FString& GetETag() const { return ETag; }

	/* ID to uniquely identify this instance launch template */
	UFUNCTION(BlueprintPure, Category="Matchmaking|Queues")
	const FGuid& GetInstanceLaunchTemplateId() const { return TemplateInfo.InstanceLaunchTemplateId; }

	//UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	//const RallyHereAPI::FMapSelectionList& GetMapSelectionList() const { return TemplateInfo.MapSelectionList; }

	/* Custom data that will be passed to the session during the instance launch request */
	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	const TMap<FString, FString>& GetCustomData() const { return TemplateInfo.CustomData; }

	void ImportAPIInstanceLaunchTemplate(const FRHAPI_InstanceLaunchTemplate& APITemplate, const FString& InETag)
	{
		TemplateInfo = APITemplate;
		ETag = InETag;
	}

	FString GetDescription() const
	{
		return FString::Printf(TEXT("Instance Launch Template: %s"), *GetInstanceLaunchTemplateId().ToString(EGuidFormats::DigitsWithHyphens));
	}
};

// generic delegate for multiple types of session events
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_OnGetInstanceLaunchTemplateCompleteDynamicDelegate, bool, bSuccess, URH_InstanceLaunchTemplate*, Result);
DECLARE_DELEGATE_TwoParams(FRH_OnGetInstanceLaunchTemplateCompleteDelegate, bool, const URH_InstanceLaunchTemplate*);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnGetInstanceLaunchTemplateCompleteDelegateBlock, FRH_OnGetInstanceLaunchTemplateCompleteDelegate, FRH_OnGetInstanceLaunchTemplateCompleteDynamicDelegate, bool, URH_InstanceLaunchTemplate*);



// Simple container class to hold matchmaking data, does not have its own auth context, relies upon getting it from elsewhere during calls, so that it can be used to cache across multiple players
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_MatchmakingBrowserCache : public URH_GameInstanceSubsystemPlugin
{
	GENERATED_BODY()
public:
	URH_MatchmakingBrowserCache();

	UFUNCTION(BlueprintCallable, Category = "Matchmaking|Queues", meta = (DisplayName = "Search Queues", AutoCreateRefTerm = "params,Delegate"))
	void BLUEPRINT_SearchQueues(const FRH_QueueSearchParams& params, const FRH_OnQueueSearchCompleteDynamicDelegate& Delegate) { SearchQueues(params, Delegate); }
	void SearchQueues(const FRH_QueueSearchParams& params, FRH_OnQueueSearchCompleteDelegateBlock Delegate = FRH_OnQueueSearchCompleteDelegateBlock());

	UFUNCTION(BlueprintCallable, Category = "Matchmaking|Queues", meta = (DisplayName = "Get Matchmaking Template Group", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_SearchMatchmakingTemplateGroup(const FGuid& TemplateId, const FRH_OnGetMatchmakingTemplateGroupCompleteDynamicDelegate& Delegate) { SearchMatchmakingTemplateGroup(TemplateId, Delegate); }
	void SearchMatchmakingTemplateGroup(const FGuid& TemplateId, FRH_OnGetMatchmakingTemplateGroupCompleteDelegateBlock Delegate = FRH_OnGetMatchmakingTemplateGroupCompleteDelegateBlock());

	UFUNCTION(BlueprintCallable, Category = "Matchmaking|Queues", meta = (DisplayName = "Get Matchmaking Template Group", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_SearchInstanceLaunchTemplate(const FGuid& TemplateId, const FRH_OnGetInstanceLaunchTemplateCompleteDynamicDelegate& Delegate) { SearchInstanceLaunchTemplate(TemplateId, Delegate); }
	void SearchInstanceLaunchTemplate(const FGuid& TemplateId, FRH_OnGetInstanceLaunchTemplateCompleteDelegateBlock Delegate = FRH_OnGetInstanceLaunchTemplateCompleteDelegateBlock());

	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	URH_MatchmakingQueueInfo* GetQueue(const FString& QueueId) const
	{
		auto ptr = QueueCache.Find(QueueId);
		return ptr != nullptr ? (*ptr) : nullptr;
	}

	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	FORCEINLINE TArray<URH_MatchmakingQueueInfo*> GetAllQueues() const
	{
		TArray<URH_MatchmakingQueueInfo*> Result;
		QueueCache.GenerateValueArray(Result);
		return Result;
	}

	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	URH_MatchmakingTemplateGroupInfo* GetMatchmakingTemplateGroup(const FGuid& TemplateGroupId) const
	{
		auto ptr = TemplateGroupCache.Find(TemplateGroupId);
		return ptr != nullptr ? (*ptr) : nullptr;
	}

	UFUNCTION(BlueprintPure, Category = "Matchmaking|Queues")
	URH_InstanceLaunchTemplate* GetInstanceLaunchTemplate(const FGuid& InstanceLaunchTemplateId) const
	{
		auto ptr = InstanceLaunchTemplateCache.Find(InstanceLaunchTemplateId);
		return ptr != nullptr ? (*ptr) : nullptr;
	}

	void ClearCache()
	{
		QueueCache.Reset();
		TemplateGroupCache.Reset();
		InstanceLaunchTemplateCache.Reset();
	}

	void ImportAPIQueue(const FRHAPI_QueueConfig& APIQueue, const FString& ETag);
	void ImportAPITemplateGroup(const FRHAPI_MatchMakingTemplateGroup& APITemplateGroup, const FString& ETag);
	void ImportAPIInstanceLaunchTemplate(const FRHAPI_InstanceLaunchTemplate& APITemplate, const FString& ETag);

protected:
	UPROPERTY(VisibleInstanceOnly, Category = "Matchmaking|Queue")
	TMap<FString, URH_MatchmakingQueueInfo*> QueueCache;

	UPROPERTY(VisibleInstanceOnly, Category = "Matchmaking|Queue")
	TMap<FGuid, URH_MatchmakingTemplateGroupInfo*> TemplateGroupCache;

	UPROPERTY(VisibleInstanceOnly, Category = "Matchmaking|Queue")
	TMap<FGuid, URH_InstanceLaunchTemplate*> InstanceLaunchTemplateCache;
};