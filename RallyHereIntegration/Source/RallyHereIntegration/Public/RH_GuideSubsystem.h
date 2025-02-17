// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "Async/TaskGraphInterfaces.h"
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InventoryAPI.h"
#include "RH_Common.h"
#include "RH_Properties.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RallyHereIntegrationModule.h"
#include "RH_SubsystemPluginBase.h"
#include "Tickable.h"

#include "RH_GuideSubsystem.generated.h"

struct FRHAPI_GuideFull;

/** @defgroup GuideSubsystem RallyHere Guide Subsystem
 *  @{
 */

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_GuideSearchCallDynamicDelegate, bool, bSuccess, const FRH_ErrorInfo&, ErrorInfo, int32, SearchGuideHandle);
DECLARE_DELEGATE_ThreeParams(FRH_GuideSearchCallDelegate, bool, const FRH_ErrorInfo&, int32);
DECLARE_RH_DELEGATE_BLOCK(FRH_GuideSearchCallBlock, FRH_GuideSearchCallDelegate, FRH_GuideSearchCallDynamicDelegate, bool, const FRH_ErrorInfo&, int32);

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_GuideUpdateCallDynamicDelegate, bool, bSuccess, const FRH_ErrorInfo&, ErrorInfo, FGuid, GuideID);
DECLARE_DELEGATE_ThreeParams(FRH_GuideUpdateCallDelegate, bool, const FRH_ErrorInfo&, FGuid);
DECLARE_RH_DELEGATE_BLOCK(FRH_GuideUpdateCallBlock, FRH_GuideUpdateCallDelegate, FRH_GuideUpdateCallDynamicDelegate, bool, const FRH_ErrorInfo&, FGuid);

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_GuideGetCallDynamicDelegate, bool, bSuccess, const FRH_ErrorInfo&, ErrorInfo, const FRHAPI_GuideFull&, Guide);
DECLARE_DELEGATE_ThreeParams(FRH_GuideGetCallDelegate, bool, const FRH_ErrorInfo&, const FRHAPI_GuideFull&);
DECLARE_RH_DELEGATE_BLOCK(FRH_GuideGetCallBlock, FRH_GuideGetCallDelegate, FRH_GuideGetCallDynamicDelegate, bool, const FRH_ErrorInfo&, const FRHAPI_GuideFull&);

USTRUCT(BlueprintType)
struct FRH_GuideSearchRequest
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	ERHAPI_SearchGuideSort SortBy;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	ERHAPI_SortDirection Sort;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	int32 PageSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	bool bDoOwnerSearch;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	ERHAPI_GuideEntityType OwnerEntityType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString OwnerEntityId;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Language;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString GuideType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString GameVersion;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Name;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref1;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref2;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref3;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref4;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref5;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref6;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref7;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref8;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref9;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref10;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref11;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref12;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref13;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref14;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref15;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref16;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref17;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref18;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref19;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref20;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref21;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref22;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref23;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref24;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref25;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref26;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref27;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref28;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref29;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref30;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref31;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Guide|Search")
	FString Ref32;

	FRH_GuideSearchRequest()
	{
		Sort = ERHAPI_SortDirection::Desc;
		SortBy = ERHAPI_SearchGuideSort::Created;
	}
};

USTRUCT()
struct FRH_GuideSearch
{
	GENERATED_BODY()
	
	typedef RallyHereAPI::Traits_SearchGuides TSearchGuides;

	TArray<FRHAPI_SearchGuideResponse> ResultPages;
	FRH_GuideSearchRequest InputRequest;
	RallyHereAPI::Traits_SearchGuides::Request SearchRequest;
	int32 Handle;
	bool bRequestInProgress;
};


/**
 * @brief Class used to help track and interact with the catalog to get Items, Vendors, and their data.
 */
UCLASS(Config = RallyHereIntegration, BlueprintType)
class RALLYHEREINTEGRATION_API URH_GuideSubsystem : public URH_GameInstanceSubsystemPlugin
{
	GENERATED_BODY()

public:
	/** @brief Type Define for API Calls. */
	typedef RallyHereAPI::Traits_SearchGuides TSearchGuides;
	typedef RallyHereAPI::Traits_GetGuideById TGetGuideById;
	typedef RallyHereAPI::Traits_CreateGuide TCreateGuide;
	typedef RallyHereAPI::Traits_UpdateGuideById TUpdateGuideById;
	typedef RallyHereAPI::Traits_DeleteGuideById TDeleteGuideById;

	/**
	 * @brief Initialize the subsystem.
	 */
	virtual void Initialize() override;
	/**
	 * @brief Safely tears down the subsystem.
	 */
	virtual void Deinitialize() override;

	/////////////////////////////////////////////////////////////////////////////////////////
	/// Searching for many guides
	/////////////////////////////////////////////////////////////////////////////////////////
	
	/**
	 * @brief Create a new SearchGuide, and return the handle. Does NOT start the search
	 * @param [in] InRequest Search parameters for the API call.
	 * @return SearchGuideHandle Handle to the search request, results
	 */
	int32 CreateSearchGuides(const FRH_GuideSearchRequest& InRequest);
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Guide Subsystem", meta = (DisplayName = "Create Search Guides", AutoCreateRefTerm = "Delegate"))
	int32 BLUEPRINT_CreateSearchGuides(const FRH_GuideSearchRequest& InRequest) { return CreateSearchGuides(InRequest); }

	/**
	 * @brief Request the next page of results for a search guide.
	 */
	bool RequestNextSearchGuidePage(int32 SearchGuideHandle, const FRH_GuideSearchCallBlock& Delegate = FRH_GuideSearchCallBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Guide Subsystem", meta = (DisplayName = "Search Next Guide Page", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_RequestNextSearchGuidePage(int32 SearchGuideHandle, const FRH_GuideSearchCallDynamicDelegate& Delegate) { RequestNextSearchGuidePage(SearchGuideHandle, Delegate); }

	/**
	 * @brief Clear the cached data for an existing guide search
	 */
	void ClearSearchGuide(int32 SearchGuideHandle) { Searches.Remove(SearchGuideHandle); }
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Guide Subsystem", meta = (DisplayName = "Clear Search Guide", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_ClearSearchGuide(int32 SearchGuideHandle) { ClearSearchGuide(SearchGuideHandle); }

	/**
	 * @brief Clear the cached data for all search guides
	 */
	void ClearAllSearchGuides() { Searches.Empty(); }
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Guide Subsystem", meta = (DisplayName = "Clear All Search Guides", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_ClearAllSearchGuides() { ClearAllSearchGuides(); }

	/**
	 * @brief Get the request info that was used to create the GuideSearch
	 * @param SearchGuideHandle 
	 * @return request info
	 */
	const FRH_GuideSearchRequest* GetSearchGuideRequest(int32 SearchGuideHandle) const;
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Guide Subsystem", meta = (DisplayName = "Get Search Guide Request", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_GetSearchGuideRequest(int32 SearchGuideHandle, FRH_GuideSearchRequest& OutRequest) const;

	/**
	 * @brief Get the responses for a GuideSearch
	 * @param SearchGuideHandle 
	 * @return array of pages containing the responses
	 */
	const TArray<FRHAPI_SearchGuideResponse>* GetSearchGuideResultPages(int32 SearchGuideHandle) const;
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Guide Subsystem", meta = (DisplayName = "Get Search Guide Result Pages", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_GetSearchGuideResultPages(int32 SearchGuideHandle, TArray<FRHAPI_SearchGuideResponse>& OutPages) const;
	
	/**
	 * @brief Get the searches and their handles
	 */
	const TMap<int32, FRH_GuideSearch>& GetSearches() const { return Searches; }

	/////////////////////////////////////////////////////////////////////////////////////////
	/// Working with full guides (create, read, update, delete)
	/////////////////////////////////////////////////////////////////////////////////////////
	/**
	 * @brief Get the searches and their handles
	 */
	const TMap<FGuid, FRHAPI_GuideFull>& GetCachedGuides() const { return Guides; }
	/**
	 * @brief Get a single guide that is already cached
	 */
	const FRHAPI_GuideFull* GetCachedGuide(const FGuid& GuideID) const;
	
	/**
	 * @brief Remove a guide from the local cache
	 * @param [in] GuideID ID of the guide
	 * @return if the guide was removed
	 */
	bool RemoveCachedGuide(const FGuid& GuideID);
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Guide Subsystem", meta = (DisplayName = "Remove Cached Guide", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_RemoveCachedGuide(const FGuid& GuideID) { return RemoveCachedGuide(GuideID); }
	
	/**
	 * @brief Get a guide that is already cached
	 * @param [in] GuideID ID of the guide to get
	 * @param [out] OutGuide The guide that was found
	 * @return if the guide was found
	 */
	bool GetGuide(const FGuid& GuideID, FRHAPI_GuideFull& OutGuide) const;
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Guide Subsystem", meta = (DisplayName = "Get Cached Guide", AutoCreateRefTerm = "Delegate"))
	bool BLUEPRINT_GetGuide(const FGuid& GuideID, FRHAPI_GuideFull& OutGuide) { return GetGuide(GuideID, OutGuide); }

	/**
	 * @brief Get a guide from the cache, or request it from the API
	 */
	void GetGuideAsync(const FGuid& GuideID, bool bIgnoreCache = false, const FRH_GuideGetCallBlock& Delegate = FRH_GuideGetCallBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Guide Subsystem", meta = (DisplayName = "Get Cached Guide (async)", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetGuideAsync(const FGuid& GuideID, bool bIgnoreCache, const FRH_GuideGetCallDynamicDelegate& Delegate) { return GetGuideAsync(GuideID, bIgnoreCache, Delegate); }
	
	/**
	 * @brief Create a new guide
	 */
	void CreateGuide(FRHAPI_GuideCreateRequest Request, const FRH_GuideUpdateCallBlock& Delegate = FRH_GuideUpdateCallBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Guide Subsystem", meta = (DisplayName = "Create Guide", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_CreateGuide(FRHAPI_GuideCreateRequest Request, const FRH_GuideUpdateCallDynamicDelegate& Delegate) { return CreateGuide(MoveTemp(Request), Delegate); }
	
	/**
	 * @brief Update a new guide
	 */
	void UpdateGuide(const FGuid& GuideID, FRHAPI_GuideCreateRequest Request, const FRH_GuideUpdateCallBlock& Delegate = FRH_GuideUpdateCallBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Guide Subsystem", meta = (DisplayName = "Update Guide", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_UpdateGuide(const FGuid& GuideID, FRHAPI_GuideCreateRequest Request, const FRH_GuideUpdateCallDynamicDelegate& Delegate) { return UpdateGuide(GuideID, MoveTemp(Request), Delegate); }

	/**
	 * @brief Delete a new guide
	 */
	void DeleteGuide(const FGuid& GuideID, const FRH_GuideUpdateCallBlock& Delegate = FRH_GuideUpdateCallBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Guide Subsystem", meta = (DisplayName = "Update Guide", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_DeleteGuide(const FGuid& GuideID, const FRH_GuideUpdateCallDynamicDelegate& Delegate) { return DeleteGuide(GuideID, Delegate); }
protected:
	void OnSearchGuidesResponse(const TSearchGuides::Response& Resp, FRH_GuideSearchCallBlock Delegate, int32 SearchGuideHandle);
	void OnGuideGetAsync(const TGetGuideById::Response& Resp, FRH_GuideGetCallBlock Delegate);
	void OnGuideCreate(const TCreateGuide::Response& Resp, FRH_GuideUpdateCallBlock Delegate);
	void OnGuideUpdate(const TUpdateGuideById::Response& Resp, FRH_GuideUpdateCallBlock Delegate, FGuid GuideID);
	void OnGuideDelete(const TDeleteGuideById::Response& Resp, FRH_GuideUpdateCallBlock Delegate, FGuid GuideID);
	
	UPROPERTY(Transient)
	TMap<FGuid, FRHAPI_GuideFull> Guides;
	
	UPROPERTY(Transient)
	TMap<int32, FRH_GuideSearch> Searches;

	UPROPERTY(Transient)
	int32 LastSearchGuideRequestHandle;
	
	/** @brief Initializes the subsystem with defaults for its cached data. */
	virtual void InitPropertiesWithDefaultValues();

	/** Gets the guide subsystem stat Id. */
	virtual TStatId GetStatId() const { RETURN_QUICK_DECLARE_CYCLE_STAT(URH_GuideSubsystem, STATGROUP_TaskGraphTasks); }
};

/** @} */