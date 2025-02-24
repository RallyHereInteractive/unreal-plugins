// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "Async/TaskGraphInterfaces.h"
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GuideAPI.h"
#include "RallyHereAPIAuthContext.h"
#include "RH_Common.h"
#include "RH_Properties.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RallyHereIntegrationModule.h"
#include "Tickable.h"

#include "RH_GuideSearch.generated.h"

/** @defgroup GuideSearch RallyHere Guide Search
 *  @{
 */

/**
 * @brief Input to generate a RH_GuideSearch object from the RH_GuideSubsystem
 */
USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_GuideSearchRequest
{
	GENERATED_BODY()
	
	/** @brief Field to sort the results by */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	ERHAPI_SearchGuideSort SortBy;
	
	/** @brief Direction to sort the results */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	ERHAPI_SortDirection Sort;
	
	/** @brief Page Size of the request - 0 will use the default */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	int32 PageSize;

	/** @brief Should the owner be checked when searching? */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	bool bDoOwnerSearch;
	
	/** @brief Type of the entity that owns the guide */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	ERHAPI_GuideEntityType OwnerEntityType;
	
	/** @brief Unique ID of the entity that owns the guide (e.g. Player UUID) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString OwnerEntityId;
	
	/** @brief Language code for the guide (should be 3 characters) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Language;
	
	/** @brief Game-specific type of the guide */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString GuideType;
	
	/** @brief Game version the guide was created/modified for */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString GameVersion;
	
	/** @brief Display name for the guide */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Name;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref1;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref2;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref3;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref4;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref5;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref6;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref7;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref8;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref9;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref10;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref11;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref12;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref13;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref14;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref15;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref16;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref17;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref18;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref19;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref20;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref21;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref22;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref23;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref24;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref25;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref26;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref27;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref28;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref29;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref30;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref31;
	
	/** @brief Game-specific reference id */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref32;

	FRH_GuideSearchRequest()
	{
		Sort = ERHAPI_SortDirection::Desc;
		SortBy = ERHAPI_SearchGuideSort::Created;
		PageSize = 0;
		bDoOwnerSearch = false;
		OwnerEntityType = ERHAPI_GuideEntityType::Player;
	}
};


/** @brief Container for a Search request and its results */
UCLASS(Config = RallyHereIntegration, BlueprintType)
class RALLYHEREINTEGRATION_API URH_GuideSearch : public UObject
{
	GENERATED_BODY()

public:
	typedef RallyHereAPI::Traits_SearchGuides TSearchGuides;

	virtual void Initialize(const FRH_GuideSearchRequest& InRequest, TSharedPtr<RallyHereAPI::FAuthContext> InAuthContext);

	/**
	 * @brief Request the next page of results for a search guide.
	 * @param [in] Delegate Callback when the API call is complete.
	 * @return True if the request was attempted, false if a request is already in progress or the search is complete.
	 */
	virtual bool RequestNextPage(const FRH_GenericSuccessWithErrorBlock& Delegate = FRH_GenericSuccessWithErrorBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Guide Subsystem", meta = (DisplayName = "Search Next Guide Page", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_RequestNextPage(const FRH_GenericSuccessWithErrorDynamicDelegate& Delegate) { return RequestNextPage(Delegate); }

	/**
	 * @brief Are there more pages to request for this search?  If false, requesting additional pages will always fail
	 * @return True if the search has more pages to return, false if the last page has been received
	 */
	UFUNCTION(BlueprintPure, Category = "Guide | Search", meta= (DisplayName = "Has More Pages"))
	bool HasMorePages() const;
	
	/**
	 * @brief Paged search results
	 * @return Array of search result pages 
	 */
	UFUNCTION(BlueprintPure, Category = "Guide | Search", meta = (DisplayName = "Get Result Pages"))
	const TArray<FRHAPI_SearchGuideResponse>& GetResultPages() const { return ResultPages; }
	
	/**
	 * @brief Input that was used to generate these results
	 * @return Input request object
	 */
	UFUNCTION(BlueprintPure, Category = "Guide | Search", meta = (DisplayName = "Get Input Request"))
	const FRH_GuideSearchRequest& GetInputRequest() const { return InputRequest; }

	/**
	 * @brief Is there a request in progress?  If so, attempting to request a new page will fail.
	 * @return True if a request is in progress, false otherwise.
	 */
	UFUNCTION(BlueprintPure, Category = "Guide | Search", meta = (DisplayName = "Get Request In Progress"))
	bool GetRequestInProgress() const { return bRequestInProgress; }

protected:
	virtual FString* GetNextPageCursor() const;
	
	/** @brief Paged search results */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Guide|Search")
	TArray<FRHAPI_SearchGuideResponse> ResultPages;
	
	/** @brief Input that was used to generate these results */
	UPROPERTY(BlueprintReadOnly, BlueprintGetter = GetInputRequest, Category = "Guide|Search")
	FRH_GuideSearchRequest InputRequest;
	
	/** @brief Is there a request in progress?  If so, attempting to request a new page will fail. */
	UPROPERTY(BlueprintReadOnly, BlueprintGetter = GetRequestInProgress, Category = "Guide | Search")
	bool bRequestInProgress;
	
	/** @brief Cached request object that will be used for API calls */
	TSearchGuides::Request SearchRequest;
};

/** @} */
