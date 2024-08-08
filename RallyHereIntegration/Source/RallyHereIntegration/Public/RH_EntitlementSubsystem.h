// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include <optional>

#include "EntitlementsAPI.h"
#include "InventoryAPI.h"
#include "OnlineError.h"
#include "OnlineSubsystem.h"
#include "TimerManager.h"
#include "RallyHereIntegrationModule.h"
#include "RH_Common.h"
#include "Interfaces/OnlineIdentityInterface.h"
#include "Interfaces/OnlinePurchaseInterface.h"
#include "RH_SubsystemPluginBase.h"
#include "RH_Polling.h"
#include "RH_EntitlementSubsystem.generated.h"

class URH_LocalPlayerSubsystem;

DECLARE_DELEGATE_TwoParams(FRH_ProcessEntitlementCompletedDelegate, bool /*Success*/, FRHAPI_PlatformEntitlementProcessResult)
DECLARE_DELEGATE_RetVal(ERHAPI_PlatformRegion, FRH_GetPlatformRegionDelegate)

/** @defgroup Entitlement RallyHere Entitlement
 *  @{
 */

/**
 * @brief Subsystem for handling requesting and processing entitlements from the online subsystem.
 */
UCLASS(Config=RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_EntitlementSubsystem : public URH_LocalPlayerSubsystemPlugin
{
	GENERATED_BODY()
public:
	/**
	* @brief Initialize the subsystem.
	*/
	virtual void Initialize();
	/**
	* @brief Safely tears down the subsystem.
	*/
	virtual void Deinitialize();
	/**
	* @brief Notification that the user changed for the owning local player subsystem
	*/
	virtual void OnUserChanged(const FGuid& OldPlayerUuid, class URH_PlayerInfo* OldLocalPlayerInfo) override;
	/**
	* @brief Handle a notification from the inventory API
	* @param [in] Notification The notification to handle
	* @param [in] APIName The name of the API that sent the notification
	* @param [in] APIParams The parameters for the API that sent the notification
	*/
	void HandleNotification(const FRHAPI_Notification& Notification, const FString& APIName, const TArray<FString>& APIParams);
	/**
	 * @private
	 * @brief Start Async Task to Process Entitlements for the users connected OSS.
	 * @param [in] EntitlementProcessorCompleteDelegate Delegate callback for when the entitlement process is complete.
	 * @param [in] PlatformRegionDelegate Delegate callback for getting the platform region.
	 */
	UE_DEPRECATED(5.0, "Use SubmitEntitlementsForLoggedInOSS with optional region parameter")
	void SubmitEntitlementsForLoggedInOSS(const FRH_ProcessEntitlementCompletedDelegate& EntitlementProcessorCompleteDelegate,
		const FRH_GetPlatformRegionDelegate& PlatformRegionDelegate)
	{
		TOptional<ERHAPI_PlatformRegion> Region;
		if (PlatformRegionDelegate.IsBound())
		{
			Region = PlatformRegionDelegate.Execute();
		}
		SubmitEntitlementsForLoggedInOSS(EntitlementProcessorCompleteDelegate, Region);
	}
	/**
	 * @brief Start Async Task to Process Entitlements for the users connected OSS.
	 * @param [in] EntitlementProcessorCompleteDelegate Delegate callback for when the entitlement process is complete.
	 * @param [in] Region The platform region to use for entitlements.
	 */
	virtual void SubmitEntitlementsForLoggedInOSS(const FRH_ProcessEntitlementCompletedDelegate& EntitlementProcessorCompleteDelegate = FRH_ProcessEntitlementCompletedDelegate(),
		TOptional<ERHAPI_PlatformRegion> Region = TOptional<ERHAPI_PlatformRegion>());
	/**
	 * @private
	 * @brief Start Async Task to Process Entitlements for a specific platform (non-OSS based)
	 * @param [in] Platform The platform to process entitlements for.
	 * @param [in] EntitlementProcessorCompleteDelegate Delegate callback for when the entitlement process is complete.
	 * @param [in] PlatformRegionDelegate Delegate callback for getting the platform region.
	 */
	UE_DEPRECATED(5.0, "Use SubmitEntitlementsForPlatform with optional region parameter")
	void SubmitEntitlementsForPlatform(ERHAPI_Platform Platform, const FRH_ProcessEntitlementCompletedDelegate& EntitlementProcessorCompleteDelegate,
		const FRH_GetPlatformRegionDelegate& PlatformRegionDelegate)
	{
		TOptional<ERHAPI_PlatformRegion> Region;
		if (PlatformRegionDelegate.IsBound())
		{
			Region = PlatformRegionDelegate.Execute();
		}
		SubmitEntitlementsForPlatform(Platform, EntitlementProcessorCompleteDelegate, Region);
	}
	/**
	 * @brief Start Async Task to Process Entitlements for a specific platform (non-OSS based)
	 * @param [in] Platform The platform to process entitlements for.
	 * @param [in] EntitlementProcessorCompleteDelegate Delegate callback for when the entitlement process is complete.
	 * @param [in] Region The platform region to use for entitlements.
	 */
	void SubmitEntitlementsForPlatform(ERHAPI_Platform Platform, const FRH_ProcessEntitlementCompletedDelegate& EntitlementProcessorCompleteDelegate = FRH_ProcessEntitlementCompletedDelegate(),
		TOptional<ERHAPI_PlatformRegion> Region = TOptional<ERHAPI_PlatformRegion>());
	/**
	* @brief Queries the OSS to get the store offers for the given offer ids.
	* @param [in] OfferIds List of SKUs to request offers for.
	* @param [in] Delegate callback for getting offers.
	*/
	void QueryStoreOffersById(const TArray<FString>& OfferIds, const FRH_GenericSuccessBlock& Delegate = FRH_GenericSuccessBlock());
	/**
	* @brief Response from OSS for Store Offer By Id Query.
	* @param [in] bSuccess If the call to the OSS was successful.
	* @param [in] Offers Offers returned by the OSS.
	* @param [in] Error The error if the call was not successful.
	* @param [in] Delegate callback for getting offers.
	*/
	void OnQueryStoreOffersById(bool bSuccess, const TArray<FUniqueOfferId>& Offers, const FString& Error, const FRH_GenericSuccessBlock Delegate);
	/**
	* @brief Helper function to get the cached store offers from the OSS.
	* @param [out] OutOffers The offers cached in the store OSS.
	*/
	void GetCachedStoreOffers(TArray<FOnlineStoreOfferRef>& OutOffers);
	/**
	 * @brief Gets the map of all processed entitlement results.
	 */
	TMap<FString, FRHAPI_PlatformEntitlementProcessResult>* GetEntitlementResults();
	/**
	 * @brief Sets the entitlement OSS Name.
	 * @param [in] InEntitlementOSSName The OSS name to use for entitlements.
	 */
	void SetEntitlementOSSName(const FName& InEntitlementOSSName);
	/**
	 * @brief Gets the set entitlement OSS Name.
	 */
	FName GetEntitlementOSSName();

	/** @brief Helper to the store subsystem subsystem. */
	IOnlineStoreV2Ptr GetStoreSubsystem() const;
protected:
	/** @brief Helper to get the engines Timer Manager. */
	FTimerManager& GetTimerManager();
	/** @brief Helper to the local player subsystem. */
	URH_LocalPlayerSubsystem* GetRH_LocalPlayerSubsystem() const;
	/** @brief Map of results from Entitlement Process calls. */
	TMap<FString, FRHAPI_PlatformEntitlementProcessResult> EntitlementProcessResultMap;
	/** @brief Helper to the online subsystem. */
	IOnlineSubsystem* GetOSS() const;
	/** @brief Helper to the online purchase subsystem. */
	IOnlinePurchasePtr GetPurchaseSubsystem() const;

	/** @brief Online Subsystem to use for entitlements.  If not provided, will use the default OSS */
	UPROPERTY(Config)
	FName EntitlementOSSName;
};

/** @} */