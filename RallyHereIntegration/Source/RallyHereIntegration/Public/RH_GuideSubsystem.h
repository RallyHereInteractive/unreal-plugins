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
class URH_GuideSearch;

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
	URH_GuideSearch* CreateGuideSearch(const struct FRH_GuideSearchRequest& InRequest);
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Guide Subsystem", meta = (DisplayName = "Create Guide Search", AutoCreateRefTerm = "Delegate"))
	URH_GuideSearch* BLUEPRINT_CreateGuideSearch(const struct FRH_GuideSearchRequest& InRequest) { return CreateGuideSearch(InRequest); }
	
	/**
	 * @brief Removed the cached data for an existing guide search by index
	 */
	void RemoveGuideSearchAt(int32 Index) { Searches.RemoveAt(Index); }
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Guide Subsystem", meta = (DisplayName = "Remove Guide Search By Index", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_RemoveGuideSearchAt(int32 Index) { RemoveGuideSearchAt(Index); }
	
	/**
	 * @brief Removed the cached data for an existing guide search
	 */
	void RemoveGuideSearch(URH_GuideSearch* GuideSearch) { Searches.Remove(GuideSearch); }
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Guide Subsystem", meta = (DisplayName = "Remove Guide Search", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_RemoveGuideSearch(URH_GuideSearch* GuideSearch) { RemoveGuideSearch(GuideSearch); }

	/**
	 * @brief Remove the cached data for all search guides
	 */
	void RemoveAllGuideSearches() { Searches.Empty(); }
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Guide Subsystem", meta = (DisplayName = "Remove All Search Guides", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_RemoveAllGuideSearches() { RemoveAllGuideSearches(); }

	/**
	 * @brief Get the searches and their handles
	 */
	UFUNCTION(BlueprintCallable, Category = "Guide Subsystem", meta = (DisplayName = "Get Guide Searches", AutoCreateRefTerm = "Delegate"))
	const TArray<URH_GuideSearch*>& GetGuideSearches() const { return Searches; }

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
	void OnGuideGetAsync(const TGetGuideById::Response& Resp, FRH_GuideGetCallBlock Delegate);
	void OnGuideCreate(const TCreateGuide::Response& Resp, FRH_GuideUpdateCallBlock Delegate);
	void OnGuideUpdate(const TUpdateGuideById::Response& Resp, FRH_GuideUpdateCallBlock Delegate, FGuid GuideID);
	void OnGuideDelete(const TDeleteGuideById::Response& Resp, FRH_GuideUpdateCallBlock Delegate, FGuid GuideID);
	
	UPROPERTY(Transient)
	TMap<FGuid, FRHAPI_GuideFull> Guides;
	
	UPROPERTY(Transient)
	TArray<URH_GuideSearch*> Searches;

	/** @brief Initializes the subsystem with defaults for its cached data. */
	virtual void InitPropertiesWithDefaultValues();

	/** Gets the guide subsystem stat Id. */
	virtual TStatId GetStatId() const { RETURN_QUICK_DECLARE_CYCLE_STAT(URH_GuideSubsystem, STATGROUP_TaskGraphTasks); }
};

/** @} */