// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "MatchAPI.h"
#include "RH_Common.h"
#include "RH_SubsystemPluginBase.h"
#include "RH_MatchSubsystem.generated.h"

class URH_SettingsSubsystem;

/** @defgroup Match RallyHere Match
 *  @{
 */
USTRUCT(BlueprintType)
struct FRH_MatchSearchParams
{
	GENERATED_USTRUCT_BODY()

	/** @brief The maximum number of elements to be returned per call, ignored if 0 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Matchmaking|Search")
	int32 PageSize;
	
	/** @brief The instance id to search on, ignored if empty */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Matchmaking|Search")
	FString InstanceId;
	
	/** @brief The allocation id to search on, ignored if empty */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Matchmaking|Search")
	FString AllocationId;
	
	/** @brief The session id to search on, ignored if empty */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Matchmaking|Search")
	FString SessionId;
	
	/** @brief The host player id to search on, ignored if empty */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Matchmaking|Search")
	FString HostPlayerUuid;
	
	/** @brief The region id to search on, ignored if empty */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Matchmaking|Search")
	FString RegionId;
	
	/** @brief Cursor to designate where you are in iterating through values. Start with '0', and pass this on subsequent calls to continue iteration */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Matchmaking|Search")
	FString Cursor;

	FRH_MatchSearchParams()
		: PageSize(0)
	{}

	/**
	 * @brief Returns summary of params for tooling/logging.
	 */
	FString GetDescription() const
	{
		return FString::Printf(TEXT("PageSize: %d, InstanceId: %s, AllocationId: %s, SessionId: %s, HostPlayerUuid: %s, RegionId: %s, Cursor: %s"),
						PageSize, *InstanceId, *AllocationId, *SessionId, *HostPlayerUuid, *RegionId, *Cursor);
	}

	/**
	 * @brief Converts the search params to an API request.
	 */
	RallyHereAPI::FRequest_GetMatches ToAPIRequest(FAuthContextPtr AuthContext) const
	{
		RallyHereAPI::FRequest_GetMatches Request;
		Request.AuthContext = AuthContext;
		Request.PageSize = PageSize;
		Request.InstanceId = InstanceId;
		Request.AllocationId = AllocationId;
		Request.SessionId = SessionId;
		Request.HostPlayerUuid = HostPlayerUuid;
		Request.RegionId = RegionId;
		Request.Cursor = Cursor;
		return Request;
	}
};

/**
 * @brief Struct containint the results of a Session Browser search.
 */
USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_MatchSearchResult
{
	GENERATED_USTRUCT_BODY()

	/**
	 * @brief The paramaters used to make the search.
	 */
	UPROPERTY()
	FRH_MatchSearchParams SearchParams;
	
	/**
	 * @brief Array of match results found by the search
	 */
	UPROPERTY()
	TArray<FRHAPI_MatchWithPlayers> Matches;
	
	/**
	 * @brief Cursor to use to request the next page of data
	 */
	UPROPERTY()
	FString NextPageCursor;
	
	/**
	 * @brief Returns summary of search results for tooling/logging.
	 */
	FString GetDescription() const
	{
		return FString::Printf(TEXT("Match Count: %d, Search: {%s}"), Matches.Num(), *SearchParams.GetDescription());
	}

	FRH_MatchSearchResult()
	{}
};

// delegate for match search events
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OnMatchSearchCompleteDynamicDelegate, bool, bSuccess, const FRH_MatchSearchResult&, SearchResult, const FRH_ErrorInfo&, ErrorInfo);
DECLARE_DELEGATE_ThreeParams(FRH_OnMatchSearchCompleteDelegate, bool, const FRH_MatchSearchResult&, const FRH_ErrorInfo&);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnMatchSearchCompleteDelegateBlock, FRH_OnMatchSearchCompleteDelegate, FRH_OnMatchSearchCompleteDynamicDelegate, bool, const FRH_MatchSearchResult&, const FRH_ErrorInfo&);

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OnMatchLookupCompleteDynamicDelegate, bool, bSuccess, const FRHAPI_MatchWithPlayers&, SearchResult, const FRH_ErrorInfo&, ErrorInfo);
DECLARE_DELEGATE_ThreeParams(FRH_OnMatchLookupCompleteDelegate, bool, const FRHAPI_MatchWithPlayers&, const FRH_ErrorInfo&);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnMatchLookupCompleteDelegateBlock, FRH_OnMatchLookupCompleteDelegate, FRH_OnMatchLookupCompleteDynamicDelegate, bool, const FRHAPI_MatchWithPlayers&, const FRH_ErrorInfo&);

// delegates for match create/update events
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OnMatchUpdateCompleteDynamicDelegate, bool, bSuccess, const FRHAPI_MatchWithPlayers&, Match, const FRH_ErrorInfo&, ErrorInfo);
DECLARE_DELEGATE_ThreeParams(FRH_OnMatchUpdateCompleteDelegate, bool, const FRHAPI_MatchWithPlayers&, const FRH_ErrorInfo&);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnMatchUpdateCompleteDelegateBlock, FRH_OnMatchUpdateCompleteDelegate, FRH_OnMatchUpdateCompleteDynamicDelegate, bool, const FRHAPI_MatchWithPlayers&, const FRH_ErrorInfo&);

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OnMatchPlayerUpdatedCompleteDynamicDelegate, bool, bSuccess, const FRHAPI_MatchPlayerWithMatch&, Match, const FRH_ErrorInfo&, ErrorInfo);
DECLARE_DELEGATE_ThreeParams(FRH_OnMatchPlayerUpdateCompleteDelegate, bool, const FRHAPI_MatchPlayerWithMatch&, const FRH_ErrorInfo&);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnMatchPlayerUpdateCompleteDelegateBlock, FRH_OnMatchPlayerUpdateCompleteDelegate, FRH_OnMatchPlayerUpdatedCompleteDynamicDelegate, bool, const FRHAPI_MatchPlayerWithMatch&, const FRH_ErrorInfo&);

// delegates for match segment create/update events
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OnMatchSegmentUpdateCompleteDynamicDelegate, bool, bSuccess, const FRHAPI_MatchSegmentWithPlayers&, MatchSegment, const FRH_ErrorInfo&, ErrorInfo);
DECLARE_DELEGATE_ThreeParams(FRH_OnMatchSegmentUpdateCompleteDelegate, bool, const FRHAPI_MatchSegmentWithPlayers&, const FRH_ErrorInfo&);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnMatchSegmentUpdateCompleteDelegateBlock, FRH_OnMatchSegmentUpdateCompleteDelegate, FRH_OnMatchSegmentUpdateCompleteDynamicDelegate, bool, const FRHAPI_MatchSegmentWithPlayers&, const FRH_ErrorInfo&);


/**
 * @brief Match Subsystem used for match API calls.
 */
UCLASS(Config=RallyHereIntegration)
class RALLYHEREINTEGRATION_API URH_MatchSubsystem : public URH_GameInstanceSubsystemPlugin
{
	GENERATED_UCLASS_BODY()
public:

	/**
	 * @brief Initialize the subsystem.
	 */
	virtual void Initialize() override;
	/**
	 * @brief Safely tears down the subsystem.
	 */
	virtual void Deinitialize() override;

	// MATCH CACHE AND LOOKUP
public:
	/**
	 * @brief Search for Matches.
	 * @param [in] params The search params to use for the given search.
	 * @param [in] Delegate Callback with the results of the search.
	 */
	virtual void SearchMatches(const FRH_MatchSearchParams& params, const FRH_OnMatchSearchCompleteDelegateBlock& Delegate = FRH_OnMatchSearchCompleteDelegateBlock());
	UFUNCTION(BlueprintCallable, Category = "Matches", meta = (DisplayName = "Search Matches", AutoCreateRefTerm = "params,Delegate"))
	void BLUEPRINT_SearchMatches(const FRH_MatchSearchParams& params, const FRH_OnMatchSearchCompleteDynamicDelegate& Delegate) { SearchMatches(params, Delegate); }

	/**
	 * @brief Lookup a specific match
	 */
	virtual void GetMatchAsync(const FString& MatchId, bool bIgnoreCache, const FRH_OnMatchLookupCompleteDelegateBlock& Delegate = FRH_OnMatchLookupCompleteDelegateBlock());
	UFUNCTION(BlueprintCallable, Category = "Matches", meta = (DisplayName = "Get Match (Async)", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetMatchAsync(const FString& MatchId, bool bIgnoreCache, const FRH_OnMatchLookupCompleteDynamicDelegate& Delegate) { GetMatchAsync(MatchId, bIgnoreCache, Delegate); }

	/**
	 * @brief Lookup a specific match from the cache
	 */
	UFUNCTION(BlueprintCallable, Category = "Matches", meta = (DisplayName = "Get Match", AutoCreateRefTerm = "OutMatch"))
	bool GetMatch(const FString& MatchId, FRHAPI_MatchWithPlayers& OutMatch)
	{
		const FRHAPI_MatchWithPlayers* Match = MatchesCache.Find(MatchId);
		if (Match != nullptr)
		{
			OutMatch = *Match;
			return true;
		}
		return false;
	
	}

	/**
	 * @brief Get all matches from the cache
	 */
	UFUNCTION(BlueprintCallable, Category = "Matches", meta = (DisplayName = "Get All Matches"))
	const TMap<FString, FRHAPI_MatchWithPlayers>& GetAllMatches() const
	{
		return MatchesCache;
	}

	/**
	 * @brief Clear the match cache
	 */
	UFUNCTION(BlueprintCallable, Category = "Matches", meta = (DisplayName = "Clear Matches Cache"))
	void ClearMatchesCache()
	{
		MatchesCache.Empty();
	}

protected:
	UPROPERTY(VisibleInstanceOnly, Category = "Session")
	TMap<FString, FRHAPI_MatchWithPlayers> MatchesCache;


	// ACTIVE MATCH AND MATCH CREATION/UPDATING
public:
	/**
	 * @brief Get the active match ID
	 */
	UFUNCTION(BlueprintCallable, Category = "Matches")
	virtual const FString GetActiveMatchId() const { return ActiveMatchId.Get(FString()); }
	/**
	 * @brief Set the active match
	 */
	UFUNCTION(BlueprintCallable, Category = "Matches")
	virtual void SetActiveMatchId(const FString& MatchId)
	{
		if (MatchId.IsEmpty())
		{
			ActiveMatchId.Reset();
		}
		else
		{
			ActiveMatchId = MatchId;
		}
	}
	/**
	 * @brief Gets whether the active match exists
	 */
	UFUNCTION(BlueprintCallable, Category = "Matches")
	bool HasActiveMatchId() const { return ActiveMatchId.IsSet(); }

	/**
	 * @brief Get the active match ID
	 */
	UFUNCTION(BlueprintCallable, Category = "Matches")
	virtual const FString GetActiveMatchSegmentId() const { return ActiveMatchSegmentId.Get(FString()); }
	/**
	 * @brief Set the active match
	 */
	UFUNCTION(BlueprintCallable, Category = "Matches")
	virtual void SetActiveMatchSegmentId(const FString& MatchSegmentId)
	{
		if (MatchSegmentId.IsEmpty())
		{
			ActiveMatchSegmentId.Reset();
		}
		else
		{
			ActiveMatchSegmentId = MatchSegmentId;
		}
	}
	/**
	 * @brief Gets whether the active match exists
	 */
	UFUNCTION(BlueprintCallable, Category = "Matches")
	bool HasActiveMatchSegmentId() const { return ActiveMatchSegmentId.IsSet(); }
	
	/**
	 * @brief Create a match (POST)
	 * @param [in] Match The match to create
	 * @param [in] Players The players to add to the match
	 * @param [in] bSetActiveMatchId Whether to set the match as the active match
	 * @param [in] Delegate Callback with the results of the match creation
	 */
	virtual void CreateMatch(const FRHAPI_MatchRequest& Match, bool bSetActive = true, const FRH_OnMatchUpdateCompleteDelegateBlock& Delegate = FRH_OnMatchUpdateCompleteDelegateBlock());
	UFUNCTION(BlueprintCallable, Category = "Matches", meta = (DisplayName = "Create Match", AutoCreateRefTerm = "Match,Delegate"))
	void BLUEPRINT_CreateMatch(const FRHAPI_MatchRequest& Match, bool bSetActive, const FRH_OnMatchUpdateCompleteDynamicDelegate& Delegate) { CreateMatch(Match, bSetActive, Delegate); }

	/**
	 * @brief Update a match (PATCH)
	 * @param [in] MatchId The match to update
	 * @param [in] Match The match to update
	 * @param [in] Delegate Callback with the results of the match update
	 */
	virtual void UpdateMatch(const FString& MatchId, const FRHAPI_MatchRequest& Match, const FRH_OnMatchUpdateCompleteDelegateBlock& Delegate = FRH_OnMatchUpdateCompleteDelegateBlock());
	UFUNCTION(BlueprintCallable, Category = "Matches", meta = (DisplayName = "Update Match", AutoCreateRefTerm = "Match,Delegate"))
	void BLUEPRINT_UpdateMatch(const FString& MatchId, const FRHAPI_MatchRequest& Match, const FRH_OnMatchUpdateCompleteDynamicDelegate& Delegate) { UpdateMatch(MatchId, Match, Delegate); }

	/**
	 * @brief Update a player in a match (PATCH w/ UPSERT)
	 * @param [in] MatchId The match to update
	 * @param [in] PlayerId The player id to update
	 * @param [in] Player The player data request to update
	 * @param [in] Delegate Callback with the results of the player update
	 */
	virtual void UpdateMatchPlayer(const FString& MatchId, const FGuid& PlayerId, const FRHAPI_MatchPlayerRequest& Player, const FRH_OnMatchPlayerUpdateCompleteDelegateBlock& Delegate = FRH_OnMatchPlayerUpdateCompleteDelegateBlock());
	UFUNCTION(BlueprintCallable, Category = "Matches", meta = (DisplayName = "Update Match Player", AutoCreateRefTerm = "Player,Delegate"))
	void BLUEPRINT_UpdateMatchPlayer(const FString& MatchId, const FGuid& PlayerId, const FRHAPI_MatchPlayerRequest& Player, const FRH_OnMatchPlayerUpdatedCompleteDynamicDelegate& Delegate) { UpdateMatchPlayer(MatchId, PlayerId, Player, Delegate); }

	/**
	 * @brief Create a match segment (POST)
	 * @param [in] MatchId The match to create the segment in
	 * @param [in] Segment The match to create
	 * @param [in] Players The players to add to the match
	 * @param [in] bSetActiveMatchId Whether to set the match as the active match
	 * @param [in] Delegate Callback with the results of the match creation
	 */
	virtual void CreateMatchSegment(const FString& MatchId, const FRHAPI_MatchSegmentRequest& Segment, bool bSetActive = true, const FRH_OnMatchSegmentUpdateCompleteDelegateBlock& Delegate = FRH_OnMatchSegmentUpdateCompleteDelegateBlock());
	UFUNCTION(BlueprintCallable, Category = "Matches", meta = (DisplayName = "Create Match Segment", AutoCreateRefTerm = "Segment,Delegate"))
	void BLUEPRINT_CreateMatchSegment(const FString& MatchId, const FRHAPI_MatchSegmentRequest& Segment, bool bSetActive, const FRH_OnMatchSegmentUpdateCompleteDynamicDelegate& Delegate) { CreateMatchSegment(MatchId, Segment, bSetActive, Delegate); }

	/**
	 * @brief Update a match segment (PATCH w/ UPSERT)
	 * @param [in] MatchId The match to update
	 * @param [in] MatchSegmentId The match segment to update
	 * @param [in] Match The match to update
	 * @param [in] Delegate Callback with the results of the match update
	 */
	virtual void UpdateMatchSegment(const FString& MatchId, const FString& MatchSegmentId, const FRHAPI_MatchSegmentRequest& Match, const FRH_OnMatchSegmentUpdateCompleteDelegateBlock& Delegate = FRH_OnMatchSegmentUpdateCompleteDelegateBlock());
	UFUNCTION(BlueprintCallable, Category = "Matches", meta = (DisplayName = "Update Match Segment", AutoCreateRefTerm = "Segment,Delegate"))
	void BLUEPRINT_UpdateMatchSegment(const FString& MatchId, const FString& MatchSegmentId, const FRHAPI_MatchSegmentRequest& Match, const FRH_OnMatchSegmentUpdateCompleteDynamicDelegate& Delegate) { UpdateMatchSegment(MatchId, MatchSegmentId, Match, Delegate); }

protected:

	/** @brief Structure containing context information for match update calls */
	struct FMatchUpdateCallContext
	{
		FString MatchId, MatchSegmentId;
		TOptional<FRHAPI_MatchWithPlayers> Match;
		TOptional<FRHAPI_MatchSegmentWithPlayers> MatchSegment;
		bool bUpdateActive;

		FMatchUpdateCallContext()
			: bUpdateActive(false)
		{}

		FMatchUpdateCallContext(const FString& InMatchId)
			: MatchId(InMatchId)
			, bUpdateActive(false)
		{}
	};

	/** @brief Structure containing context information for match player update calls */
	struct FMatchUpdatePlayerCallContext
	{
		FString MatchId;
		FGuid PlayerId;
		TOptional<FRHAPI_MatchPlayerWithMatch> MatchPlayer;
		bool bUpdateActive;

		FMatchUpdatePlayerCallContext()
			: bUpdateActive(false)
		{}

		FMatchUpdatePlayerCallContext(const FString& InMatchId)
			: MatchId(InMatchId)
			, bUpdateActive(false)
		{}
	};

	/**
	 * @brief The last match created with bSetActive = true, for ease of use
	 */
	TOptional<FString> ActiveMatchId;

	/**
	 * @brief The last match created with bSetActive = true, for ease of use
	 */
	TOptional<FString> ActiveMatchSegmentId;

};

/** @} */