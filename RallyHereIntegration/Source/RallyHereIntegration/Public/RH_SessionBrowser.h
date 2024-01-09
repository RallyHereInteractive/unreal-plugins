// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineBaseTypes.h"
#include "Templates/SharedPointer.h"
#include "Delegates/Delegate.h"
#include "Delegates/DelegateCombinations.h"
#include "RH_SubsystemPluginBase.h"

#include "RH_SessionData.h"

#include "RH_SessionBrowser.generated.h"

/** @ingroup Session
 *  @{
 */

/**
 * @brief Struct containing the search paramaters for Session Browsers.
 */
USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_SessionBrowserSearchParams
{
	GENERATED_USTRUCT_BODY()
	/**
	 * @brief The Type of Session to search for.
	 */
	UPROPERTY()
	FString SessionType;
	/**
	 * @brief The Region ID of Session to search for.
	 */
	UPROPERTY()
	FString RegionId;
	/**
	 * @brief If specified, skip search lookup and instead query these specific session ids
	 */
	UPROPERTY()
	TArray<FString> SessionIds;
	/**
	 * @brief The indicator of what page to request of results.
	 */
	UPROPERTY()
	int32 Cursor;
	/**
	 * @brief The size of each page of results.
	 */
	UPROPERTY()
	int32 PageSize;
	/**
	 * @brief Whether to query and cache the session data from the search result
	 */
	UPROPERTY()
	bool bCacheSessionDetails;

	/**
	 * @brief Default constructor.
	 */
	FRH_SessionBrowserSearchParams()
		:	Cursor(0)
		,	PageSize(-1)
		,	bCacheSessionDetails(false)
	{}

	/**
	 * @brief Returns display of search params for toolings/logging.
	 */
	FString GetDescription() const
	{
		return FString::Printf(TEXT("%s: %s #%d @%d"), *SessionType, *RegionId, Cursor, PageSize);
	}
};

/**
 * @brief Struct containint the results of a Session Browser search.
 */
USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_SessionBrowserSearchResult
{
	GENERATED_USTRUCT_BODY()
	/**
	 * @brief The paramaters used to make the search.
	 */
	UPROPERTY()
	FRH_SessionBrowserSearchParams SearchParams;
	/**
	 * @brief Array of session infos found by the search
	 */
	UPROPERTY()
	TArray<FRHAPI_BrowserSessionInfo> SessionInfos;
	/**
	 * @brief Array of sessions found by the search if bCacheSessionDetails was true
	 */
	UPROPERTY()
	TArray<TWeakObjectPtr<URH_SessionView>> Sessions;
	/**
	 * @brief Cursor to use to request the next page of data
	 */
	UPROPERTY()
	int32 NextPageCursor;
	/**
	 * @brief Returns summary of search results for tooling/logging.
	 */
	FString GetDescription() const
	{
		return FString::Printf(TEXT("Session Count: %d, Search: {%s}"), Sessions.Num(), *SearchParams.GetDescription());
	}

	FRH_SessionBrowserSearchResult()
		:	NextPageCursor(0)
	{}
};

/** @} */

// generic delegate for multiple types of session events
UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_OnSessionSearchCompleteDynamicDelegate, bool, bSuccess, const FRH_SessionBrowserSearchResult&, SearchResult);
DECLARE_DELEGATE_TwoParams(FRH_OnSessionSearchCompleteDelegate, bool, const FRH_SessionBrowserSearchResult&);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnSessionSearchCompleteDelegateBlock, FRH_OnSessionSearchCompleteDelegate, FRH_OnSessionSearchCompleteDynamicDelegate, bool, const FRH_SessionBrowserSearchResult&);

/** @ingroup Session
 *  @{
 */

/**
 * @brief Simple container class to hold session view data, does not have its own auth context, relies upon getting it from elsewhere during calls, so that it can be used to cache across multiple players.
 */
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_SessionBrowserCache : public URH_SandboxedSubsystemPlugin, public IRH_SessionOwnerInterface
{
	GENERATED_BODY()
public:
	/**
	 * @brief Default constructor.
	 */
	URH_SessionBrowserCache();
	/**
	 * @brief Makes a call to search for session browsers.
	 * @param [in] params The search paramaters to use.
	 * @param [in] Delegate Callback delegate for when the search is completed.
	 */
	void Search(const FRH_SessionBrowserSearchParams& params, const FRH_OnSessionSearchCompleteDelegateBlock& Delegate = FRH_OnSessionSearchCompleteDelegateBlock());
	UFUNCTION(BlueprintCallable, Category = "Session Browser", meta = (DisplayName = "Search For Sessions", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_Search(const FRH_SessionBrowserSearchParams& params, FRH_OnSessionSearchCompleteDynamicDelegate Delegate) { Search(params, Delegate); }

	/**
	 * @brief Clears the cached sessions, and optionally the cached templates.
	 * @param bClearTemplates If true, clear the templates as well.
	 */
	void ClearCache(bool bClearTemplates = false)
	{
		Sessions.Reset();
		if (bClearTemplates) Templates.Reset();
	}

	// IRH_SessionOwnerInterface implementation
	/**
	* Gets the auth context to use for API calls for the session owner.
	*/
	virtual FAuthContextPtr GetSessionAuthContext() const override;
	/**
	 * @brief Adds a session into the session cache.
	 * @param Session The session to add.
	 */
	virtual void ImportAPISession(const FRH_APISessionWithETag& Session) override;
	/**
	 * @brief Adds a new session template type to the templates.
	 * @param Template The template ot add.
	 */
	virtual void ImportAPITemplate(const FRHAPI_SessionTemplate& Template) override;


	/**
	 * @brief Updates the list of sessions to only those that are active.
	 * @param [in] SessionIds The list of sessions that we are reconciling against.
	 * @param [in] ETag The ETag to use for the update.
	 */
	virtual void ReconcileAPISessions(const TArray<FString>& SessionIds, const TOptional<FString>& ETag = TOptional<FString>()) {}

	/**
	 * @brief Updates the list of session templates to those that are active.
	 * @param [in] InTemplates The list of templates that we are reconciling against.
	 * @param [in] ETag The ETag to use for the update.
	 */
	virtual void ReconcileAPITemplates(const TArray<FString>& InTemplates, const TOptional<FString>& ETag = TOptional<FString>()) {}


	/**
	 * @brief Gets the PlayerInfo Subsystem.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session")
	virtual class URH_PlayerInfoSubsystem* GetPlayerInfoSubsystem() const override;
	/**
	 * @brief Gets the Online Subsystem to use for OSS calls
	 */
	virtual IOnlineSubsystem* GetOSS() const override { return nullptr; }
	/**
	 * @brief Gets the Online Subsystem Unique Id to use for OSS calls
	 */
	virtual FUniqueNetIdWrapper GetOSSUniqueId() const override { return {}; }

	/**
	 * @brief Gets the etag to use for a "Get all Templates" type query.
	 */
	virtual TOptional<FString> GetETagForAllTemplatesPoll() const override
	{
		return AllTemplatesETag;
	}
	/**
	 * @brief Gets the etag to use for a "Get all Sessions" type query.
	 */
	 // gets the etag to use for a "Get all sessions" type query
	virtual TOptional<FString> GetETagForAllSessionsPoll() const override
	{
		return TOptional<FString>();
	}
	/**
	 * @brief Used to get all sessions, primarily for get all sessions polling where etag matches.
	 */
	virtual TArray<URH_SessionView*> GetAllSessionsForPolling() const override
	{
		TArray<URH_SessionView*> Result;
		return Result;
	}

	/**
	 * @brief Gets a session by its id.
	 * @param [in] SessionId The Session Id to get.
	 * @return The Session with the given Id.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session")
	virtual URH_SessionView* GetSessionById(const FString& SessionId) const override
	{
		auto ptr = Sessions.Find(SessionId);
		return ptr != nullptr ? (*ptr) : nullptr;
	}
	/**
	 * @brief Gets a session template by type
	 * @param [in] Type the Type of template to get.
	 * @param [out] Template The session template being retrieved.
	 * @return If true, the template was found.
	 */
	UFUNCTION(BlueprintCallable, Category = "Session")
	virtual bool GetTemplate(const FString& Type, FRHAPI_SessionTemplate& Template) const override;
	/**
	 * @brief Gets the platform synchronization object using the rally here session id
	 */
	UFUNCTION(BlueprintPure, Category = "Session")
	virtual URH_PlatformSessionSyncer* GetPlatformSyncerByRHSessionId(const FString& SessionId) const override { return nullptr; }
	/**
	 * @brief Gets the platform synchronization object using the platform session id
	 */
	UFUNCTION(BlueprintPure, Category = "Session")
	virtual URH_PlatformSessionSyncer* GetPlatformSyncerByPlatformSessionId(const FUniqueNetIdRepl& PlatformSessionId) const override { return nullptr; }
private:
	UPROPERTY(VisibleInstanceOnly, Category = "Session")
	TMap<FString, FRHAPI_SessionTemplate> Templates;

	/** @brief ETag of last QueryAllSessionTemplates call response. */
	TOptional<FString> AllTemplatesETag;

	UPROPERTY(VisibleInstanceOnly, Category = "Session")
	TMap<FString, URH_SessionView*> Sessions;
};

/** @} */