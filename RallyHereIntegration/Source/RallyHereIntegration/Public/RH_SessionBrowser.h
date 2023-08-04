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
	 * @brief Default constructor.
	 */
	FRH_SessionBrowserSearchParams()
		:	Cursor(INDEX_NONE)
		,	PageSize(-1)
	{}
	/**
	 * @brief Returns display of search params for toolings/logging.
	 */
	FString GetDescription() const
	{
		return FString::Printf(TEXT("%s: #%d @%d"), *SessionType, Cursor, PageSize);
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
	 * @brief Array of sessions found by the search.
	 */
	UPROPERTY()
	TArray<TWeakObjectPtr<URH_SessionView>> Sessions;
	/**
	 * @brief Returns summary of search results for tooling/logging.
	 */
	FString GetDescription() const
	{
		return FString::Printf(TEXT("Session Count: %d, Search: {%s}"), Sessions.Num(), *SearchParams.GetDescription());
	}
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
class RALLYHEREINTEGRATION_API URH_SessionBrowserCache : public URH_GameInstanceSubsystemPlugin
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
	void Search(const FRH_SessionBrowserSearchParams& params, FRH_OnSessionSearchCompleteDelegateBlock Delegate = FRH_OnSessionSearchCompleteDelegateBlock());
	UFUNCTION(BlueprintCallable, Category = "Session Browser", meta = (DisplayName = "Search For Sessions", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_Search(const FRH_SessionBrowserSearchParams& params, FRH_OnSessionSearchCompleteDynamicDelegate Delegate) { Search(params, Delegate); }
	/**
	 * @brief Gets a cached session by Session Id.
	 * @param SessionId The Session Id of the requested session.
	 */
	UFUNCTION(BlueprintPure, Category = "Session Browser")
	URH_SessionView* GetSessionById(const FString& SessionId) const
	{
		auto ptr = Sessions.Find(SessionId);
		return ptr != nullptr ? (*ptr) : nullptr;
	}
	/**
	 * @brief Gets the ETag for a session by Session Id.
	 * @param SessionId The Session Id of the requested session.
	 */
	TOptional<FString> GetETagForSession(const FString& SessionId) const
	{
		const auto* Session = GetSessionById(SessionId);
		if (Session != nullptr)
		{
			return Session->GetETag();
		}
		return TOptional<FString>();
	}
	/**
	 * @brief Gets the session template for a given session type.
	 * @param [in] Type The session type to get the template for.
	 * @param [out] Template The session template for the given type.
	 * @return True if the template was found, false otherwise.
	 */
	UFUNCTION(BlueprintPure, Category = "Session")
	bool GetTemplate(const FString& Type, FRHAPI_SessionTemplate& Template) const;
	/**
	 * @brief Adds a session into the session cache.
	 * @param Session The session to add.
	 */
	void ImportAPISession(const FRH_APISessionWithETag& Session);
	/**
	 * @brief Adds a new session template type to the templates.
	 * @param Template The template ot add.
	 */
	void ImportAPITemplate(const FRHAPI_SessionTemplate& Template);
	/**
	 * @brief Clears the cached sessions, and optionally the cached templates.
	 * @param bClearTemplates If true, clear the templates as well.
	 */
	void ClearCache(bool bClearTemplates = false)
	{
		Sessions.Reset();
		if (bClearTemplates) Templates.Reset();
	}

private:
	UPROPERTY(VisibleInstanceOnly, Category = "Session")
	TMap<FString, FRHAPI_SessionTemplate> Templates;

	UPROPERTY(VisibleInstanceOnly, Category = "Session")
	TMap<FString, URH_SessionView*> Sessions;
};

/** @} */