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

#include "RH_CatalogSubsystem.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_OneParam(FRH_CatalogCallDynamicDelegate, bool, bSuccess);
DECLARE_DELEGATE_OneParam(FRH_CatalogCallDelegate, bool);
DECLARE_RH_DELEGATE_BLOCK(FRH_CatalogCallBlock, FRH_CatalogCallDelegate, FRH_CatalogCallDynamicDelegate, bool)

DECLARE_DELEGATE_OneParam(FRH_CatalogItemUpdatedDelegate, URH_CatalogItem*);

/** @defgroup Catalog RallyHere Catalog
 *  @{
 */

 /**
 * @brief Vendor Request struct used to encapsulate a request to get a vendors and the callback delegate
 */
USTRUCT(BlueprintType)
struct FRHVendorGetRequest
{
	GENERATED_BODY()

public:
	/**
	* @brief Delegate callback when all vendors have been fetched.
	*/
	FRH_CatalogCallBlock Delegate;

	/**
	* @brief Array of outstanding vendor requests to complete this vendor get.
	*/
	UPROPERTY(BlueprintReadWrite, Transient, Category = "Catalog Subsystem | Vendor Get Request")
	TArray<int32> VendorIds;

	UPROPERTY(BlueprintReadWrite, Transient, Category = "Catalog Subsystem | Vendor Get Request")
	bool bRecurseSubvendors;
	UPROPERTY(BlueprintReadWrite, Transient, Category = "Catalog Subsystem | Vendor Get Request")
	bool bSkipCachedVendors;
	
	/**
	* @brief Default Constructor.
	*/
	FRHVendorGetRequest()
		: Delegate(FRH_CatalogCallBlock())
		, bRecurseSubvendors(true)
		, bSkipCachedVendors(true)
	{
	}

	/**
	* @brief Constructor with vendor Id List.
	* @param [in] InVendorIds List of vendor Ids to get.
	*/
	FRHVendorGetRequest(const TArray<int32>& InVendorIds)
		: Delegate(FRH_CatalogCallBlock())
		, bRecurseSubvendors(true)
		, bSkipCachedVendors(true)
	{
		VendorIds.Append(InVendorIds);
	}

	/**
	* @brief Constructor with vendor Id List and callback delegate.
	* @param [in] InDelegate Delegate to call when vendor fetch completes.
	* @param [in] InVendorIds List of vendor Ids to get.
	*/
	FRHVendorGetRequest(const FRH_CatalogCallBlock& InDelegate, const TArray<int32>& InVendorIds)
		: Delegate(InDelegate)
		, bRecurseSubvendors(true)
		, bSkipCachedVendors(true)
	{
		VendorIds.Append(InVendorIds);
	}
};


/**
* @brief Vendor Request struct used to encapsulate a request to get a vendors and the callback delegate
*/
USTRUCT(BlueprintType)
struct FRH_VendorRequestState
{
	GENERATED_BODY()

public:
	TWeakObjectPtr<class URH_CatalogSubsystem> Catalog;
	
	/**
	* @brief Array of outstanding vendor requests to complete this vendor get.
	*/
	UPROPERTY(BlueprintReadWrite, Transient, Category = "Catalog Subsystem | Vendor Get Request")
	FRHVendorGetRequest Request;

	/** @brief A list of vendors received since this request was made */
	TArray<int32> VendorsReceived;
	
	/**
	* @brief Default Constructor.
	*/
	FRH_VendorRequestState()
		: Request()
	{
	}

	/**
	* @brief Constructor with a request and a subsystem
	* @param [in] InCatalog The Catalog Subsystem to use.
	* @param [in] InRequest The request to use.
	*/
	FRH_VendorRequestState(class URH_CatalogSubsystem* InCatalog, const FRHVendorGetRequest& InRequest)
		: Catalog(InCatalog)
		, Request(InRequest)
	{
	}

	/**
	 * @brief Notify that a vendor has been received.
	 * @param [in] VendorId The VendorID received
	 * @param [in] Vendor The Vendor data received
	 */
	void NotifyVendorReceived(int32 VendorId, const FRHAPI_Vendor& Vendor)
	{
		VendorsReceived.Add(VendorId);
	}
	/**
	 * @brief Notify that a vendor has failed to be received.
	 * @param [in] VendorId The VendorID that failed
	 * @return Whether the vendor was awaited and the request should be failed
	 */
	bool NotifyVendorFailure(int32 VendorId)
	{
		if (GetAwaitedVendorIds().Contains(VendorId))
		{
			return true;
		}

		return false;
	}

	/**
	 * @brief Get a list of all currently known vendors associated with this request
	 */
	TArray<int32> GetAllKnownVendorIds() const;
	/**
	 * @brief Get a list of all currently known vendors this request is waiting on
	 */
	TArray<int32> GetAwaitedVendorIds() const;
	/**
	 * @brief Check if all vendors have been received, and fire delegate if so
	 * @param OutAwaitedVendors List of vendors that are still awaited
	 * @return If all vendors have been received
	 */
	bool IsComplete(TArray<int32>& OutAwaitedVendors) const
	{
		OutAwaitedVendors = GetAwaitedVendorIds();
		return OutAwaitedVendors.Num() == 0;
	}
};

/**
 * @brief class used to define a Catalog Item.
 */
UCLASS(BlueprintType)
class RALLYHEREINTEGRATION_API URH_CatalogItem : public UObject
{
	GENERATED_BODY()
public:
	/**
	 * @brief Gets the Item Id.
	 */
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	int32 GetItemId() const { return ItemId; }
	/**
	 * @brief Gets the Item Type.
	 */
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	ERHAPI_ItemType GetType() const { return Type; }
	/**
	 * @brief Gets the Item Id of the referenced item.
	 */
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	int32 GetRefItemId() const { return RefItemId; }
	/**
	 * @brief Gets item availability flags.
	 */
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	int32 GetAvailabilityFlags() const { return AvailabilityFlags; }
	/**
	 * @brief Gets the entitled loot id.
	 */
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	int32 GetEntitledLootId() const { return EntitledLootId; }
	/**
	 * @brief Gets the Xp Table associated with the item.
	 */
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	int32 GetLevelXpTableId() const { return LevelXpTableId; }
	/**
	 * @brief Gets the Vendor that grants rewards based on inventory count of the item.
	 */
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	int32 GetLevelVendorId() const { return LevelVendorId; }
	/**
	 * @brief Gets the Item Id of the currency type this can discount.
	 */
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	int32 GetCouponDiscountCurrencyItemId() const { return CouponDiscountCurrencyItemId; }
	/**
	 * @brief Gets the precentage of the discount this item applies.
	 */
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	float GetCouponDiscountPercentage() const { return CouponDiscountPercentage; }
	/**
	 * @brief Gets if it will be consumed when used.
	 */
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	bool GetCouponConsumeOnUse() const { return CouponConsumeOnUse; }
	/**
	 * @brief Gets the set of rules of what platforms this item is available on.
	 */
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	const FString& GetItemInventoryBucketUseRulesetId() const { return ItemInventoryBucketUseRuleSetId; }
	/**
	 * @brief Gets the list of loot ids this coupon can be applied to.
	 */
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	const TArray<int32>& GetCouponDiscountLoot() const { return CouponDiscountLoot; }
	/**
	 * @brief The identifier for the versioning of the item.
	 */
	UPROPERTY(Transient)
	FString ETag;
	/**
	 * @brief Copy of the underlying Catalog item.
	 */
	UPROPERTY(Transient)
	FRHAPI_Item APIItem;
	/**
	 * @brief Sets up the fata in the Catalog Item.
	 * @param CatalogItem The API layer item to initialize from.
	 * @param InItemId The Item Id.
	 */
	void InitializeFromCatalogItem(const FRHAPI_Item& CatalogItem, int32 InItemId)
	{
		ItemId = InItemId;

		int32 inId = 0;

		CatalogItem.GetType(Type);
		CatalogItem.GetRefItemId(inId);
		RefItemId = inId;
		CatalogItem.GetAvailabilityFlags(AvailabilityFlags);
		inId = 0;
		CatalogItem.GetEntitledLootId(inId);
		EntitledLootId = inId;
		CatalogItem.GetLevelXpTableId(LevelXpTableId);
		CatalogItem.GetLevelVendorId(LevelVendorId);
		inId = 0;
		CatalogItem.GetCouponDiscountCurrencyItemId(inId);
		CouponDiscountCurrencyItemId = inId;
		CatalogItem.GetCouponDiscountPercentage(CouponDiscountPercentage);
		CatalogItem.GetCouponConsumeOnUse(CouponConsumeOnUse);
		CatalogItem.GetInventoryBucketUseRuleSetId(ItemInventoryBucketUseRuleSetId);

		if (const auto InCouponDiscountLoot = CatalogItem.GetCouponDiscountLootOrNull())
		{
			CouponDiscountLoot.Append(*InCouponDiscountLoot);
		}
		APIItem = CatalogItem;
	}

	/**
	 * @brief Clears all the data for the item.
	 */
	void Clear()
	{
		ItemId = int32();
		ETag = FString();
		Type = ERHAPI_ItemType::Unit;
		RefItemId = int32();
		AvailabilityFlags = 0;
		EntitledLootId = int32();
		LevelXpTableId = 0;
		LevelVendorId = 0;
		CouponDiscountCurrencyItemId = int32();
		CouponDiscountPercentage = 0.0;
		CouponConsumeOnUse = false;
		ItemInventoryBucketUseRuleSetId ={};
		CouponDiscountLoot.Empty();
	}

protected:
	/** @brief The Item Id. */
	UPROPERTY(Transient)
	int32 ItemId;
	/** @brief The Item Type. */
	UPROPERTY(Transient)
	ERHAPI_ItemType Type;
	/** @brief The Ref Item Id. */
	UPROPERTY(Transient)
	int32 RefItemId;
	/** @brief The Availability Flags. */
	UPROPERTY(Transient)
	int32 AvailabilityFlags;
	/** @brief The Entitled Loot Id. */
	UPROPERTY(Transient)
	int32 EntitledLootId;
	/** @brief The Associated Xp Table Id. */
	UPROPERTY(Transient)
	int32 LevelXpTableId;
	/** @brief The Associated Loot Table if an Xp Table is used. */
	UPROPERTY(Transient)
	int32 LevelVendorId;
	/** @brief The Item Id this can be used to discount purchases with when used as a coupon. */
	UPROPERTY(Transient)
	int32 CouponDiscountCurrencyItemId;
	/** @brief The percentage of discount this gives when used as a coupon. */
	UPROPERTY(Transient)
	float CouponDiscountPercentage;
	/** @brief If set, then when used as a coupon, remove this from inventory. */
	UPROPERTY(Transient)
	bool CouponConsumeOnUse;
	/** @brief The inventory use ruleset this item uses. */
	UPROPERTY(Transient)
	FString ItemInventoryBucketUseRuleSetId;
	/** @brief List of Loot Table Items this item can be used as a coupon for. */
	UPROPERTY(Transient)
	TArray<int32> CouponDiscountLoot;
};

/**
 * @brief Class used to help track and interact with the catalog to get Items, Vendors, and their data.
 */
UCLASS(Config = RallyHereIntegration, BlueprintType)
class RALLYHEREINTEGRATION_API URH_CatalogSubsystem : public URH_GameInstanceSubsystemPlugin, public FTickableGameObject
{
	GENERATED_BODY()

public:
	/** @brief Type Define for Get Catalog calls. */
	typedef RallyHereAPI::Traits_GetCatalogAll TGetCatalogAll;
	/** @brief Type Define for Get Catalog Xp calls. */
	typedef RallyHereAPI::Traits_GetCatalogXpAll TGetCatalogXpAll;
	/** @brief Type Define for Get Catalog Inventory Bucket Use Rule Set calls. */
	typedef RallyHereAPI::Traits_GetCatalogInventoryBucketUseRuleSetsAll TGetCatalogInventoryBucketUseRuleSetsAll;
	/** @brief Type Define for Get Catalog Price Point calls. */
	typedef RallyHereAPI::Traits_GetCatalogPricePointsAll TGetCatalogPricePointsAll;
	/** @brief Type Define for Get Catalog Time Frame calls. */
	typedef RallyHereAPI::Traits_GetCatalogTimeFramesAll TGetCatalogTimeFramesAll;
	/** @brief Type Define for Get Catalog Vendor calls. */
	typedef RallyHereAPI::Traits_GetCatalogVendor TGetCatalogVendor;
	/** @brief Type Define for Get Catalog Vendor All calls. */
	typedef RallyHereAPI::Traits_GetCatalogVendorsAll TGetCatalogVendorsAll;
	/** @brief Type Define for Get Catalog Item calls. */
	typedef RallyHereAPI::Traits_GetCatalogItem TGetCatalogItem;

	/**
	 * @brief Initialize the subsystem.
	 */
	virtual void Initialize() override;
	/**
	 * @brief Safely tears down the subsystem.
	 */
	virtual void Deinitialize() override;
	/**
	* @brief Gets the entire catalog at once.
	* @param [in] Delegate Callback when the API call is complete.
	*/
	void GetCatalogAll(const FRH_CatalogCallBlock& Delegate = FRH_CatalogCallBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Catalog Subsystem", meta = (DisplayName = "Get Catalog All", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetCatalogAll(const FRH_CatalogCallDynamicDelegate& Delegate) { GetCatalogAll(Delegate); }
	/**
	* @brief Gets all of the xp tables in the catalog.
	* @param [in] Delegate Callback when the API call is complete.
	*/
	void GetCatalogXpAll(const FRH_CatalogCallBlock& Delegate = FRH_CatalogCallBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Catalog Subsystem", meta = (DisplayName = "Get Catalog Xp All", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetCatalogXpAll(const FRH_CatalogCallDynamicDelegate& Delegate) { GetCatalogXpAll(Delegate); }
	/**
	* @brief Gets a specific item from the catalog.
	* @param [in] ItemId The item id of the item to get.
	* @param [in] Delegate Callback when the API call is complete.
	*/
	void GetCatalogItem(int32 ItemId, const FRH_CatalogCallBlock& Delegate = FRH_CatalogCallBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Catalog Subsystem", meta = (DisplayName = "Get Catalog Item", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetCatalogItem(int32 ItemId, const FRH_CatalogCallDynamicDelegate& Delegate) { GetCatalogItem(ItemId, Delegate); }
	/**
	* @brief Gets all of the inventory bucket rulesets from the catalog.
	* @param [in] Delegate Callback when the API call is complete.
	*/
	void GetCatalogInventoryBucketUseRuleSetsAll(const FRH_CatalogCallBlock& Delegate = FRH_CatalogCallBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Catalog Subsystem", meta = (DisplayName = "Get Catalog Inventory Bucket Use Rulesets All", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetCatalogInventoryBucketUseRuleSetsAll(const FRH_CatalogCallDynamicDelegate& Delegate) { GetCatalogInventoryBucketUseRuleSetsAll(Delegate); }
	/**
	* @brief Gets all of the price points from the catalog.
	* @param [in] Delegate Callback when the API call is complete.
	*/
	void GetCatalogPricePointsAll(const FRH_CatalogCallBlock& Delegate = FRH_CatalogCallBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Catalog Subsystem", meta = (DisplayName = "Get Catalog Price Points All", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetCatalogPricePointsAll(const FRH_CatalogCallDynamicDelegate& Delegate) { GetCatalogPricePointsAll(Delegate); }
	/**
	* @brief Gets all of the time frames from the catalog.
	* @param [in] Delegate Callback when the API call is complete.
	*/
	void GetCatalogTimeFramesAll(const FRH_CatalogCallBlock& Delegate = FRH_CatalogCallBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Catalog Subsystem", meta = (DisplayName = "Get Catalog Time Frames All", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetCatalogTimeFramesAll(const FRH_CatalogCallDynamicDelegate& Delegate) { GetCatalogTimeFramesAll(Delegate); }
	/**
	* @brief Gets the vendors requested as well as their sub vendors.
	* @param [in] VendorRequest The vendor request data for the call with list of vendors and callback on complete.
	* @param [in] bRecurseSubvendors Whether to recursively request subvendors, DEPRECATED
	*/
	void GetCatalogVendor(const FRHVendorGetRequest& VendorRequest);
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Catalog Subsystem", meta = (DisplayName = "Get Catalog Vendor", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetCatalogVendor(const FRHVendorGetRequest& VendorRequest) { GetCatalogVendor(VendorRequest); }
	/**
	* @brief Gets the all catalog vendors.
	* @param [in] Delegate Callback when the API call is complete.
	*/
	void GetCatalogVendorsAll(const FRH_CatalogCallBlock& Delegate = FRH_CatalogCallBlock());
	/** @private */
	UFUNCTION(BlueprintCallable, Category = "Catalog Subsystem", meta = (DisplayName = "Get Catalog Vendors All", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetCatalogVendorsAll(const FRH_CatalogCallDynamicDelegate& Delegate) { GetCatalogVendorsAll(Delegate); }
	/**
	* @brief Gets a cached Xp Table.
	* @param [in] XpTableId The xp table id of the xp table to get.
	* @param [out] XpTable The xp table to be returned.
	* @return If true, the Xp Table was found.
	*/
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem")
	bool GetXpTable(int32 XpTableId, FRHAPI_XpTable& XpTable) const;
	/**
	* @brief Gets a cached vendor item by its loot id.
	* @param [in] LootId The Loot Id used to look up the vendor item.
	* @param [out] LootItem The loot item to be returned.
	* @return If true, the loot item was found.
	*/
	bool GetVendorItemByLootId(int32 LootId, FRHAPI_Loot& LootItem) const
	{
		if (auto const& findItem = CatalogLootItems.Find(LootId))
		{
			LootItem = *findItem;
			return true;
		}
		return false;
	}
	/**
	* @brief Gets a cached catalog item by its item id.
	* @param [in] ItemId The Item Id used to look up the catalog item.
	* @return The catalog item if found, otherwise nullptr.
	*/
	URH_CatalogItem* GetCatalogItemByItemId(int32 ItemId) const
	{
		if (auto const& findItem = CatalogItems.Find(ItemId))
		{
			return *findItem;
		}
		return nullptr;
	}
	/**
	* @brief Gets a cached vendor by its vendor id.
	* @param [in] VendorId The Vendor Id used to look up the vendor.
	* @param [out] Vendor The vendor to be returned.
	* @return If true, the vendor was found.
	*/
	bool GetVendorById(int32 VendorId, FRHAPI_Vendor& Vendor) const
	{
		if (auto const& findVendor = CatalogVendors.Find(VendorId))
		{
			Vendor = *findVendor;
			return true;
		}
		return false;
	}
	/**
	* @brief Gets a cached price point by its price point guid.
	* @param [in] PricePointGuid The price point guid used to look up the vendor.
	* @param [out] PricePoint The price point to be returned.
	* @return If true, the price point was found.
	*/
	bool GetPricePointById(const FGuid& PricePointGuid, FRHAPI_PricePoint& PricePoint) const
	{
		if (PricePointGuid.IsValid())
		{
			if (auto const& findPricePoint = CatalogPricePoints.Find(PricePointGuid))
			{
				PricePoint = *findPricePoint;
				return true;
			}
		}
		return false;
	}
	/**
	* @brief Gets a cached time frame by its Time Frame Id.
	* @param [in] TimeFrameId The id used to look up the time frame.
	* @param [out] TimeFrame The time frame to be returned.
	* @return If true, the time frame was found.
	*/
	bool GetPricePointById(int32 TimeFrameId, FRHAPI_TimeFrame& TimeFrame) const
	{
		if (auto const& findPricePoint = TimeFrames.Find(TimeFrameId))
		{
			TimeFrame = *findPricePoint;
			return true;
		}
		return false;
	}
	/**
	* @brief Checks if the ruleset can use the platform for the bucket.
	* @param [in] InventoryBucketRulesetId The ruleset bucket to be used to evaluate the usage.
	* @param [in] TargetBucket The bucket that should be used to evaluate the usage.
	* @param [in] ItemInventoryBucket The bucket the item is in that is being evaluated.
	* @return If true, the item can be used for the specified bucket.
	*/
	bool CanRulesetUsePlatformForBucket(const FString& InventoryBucketRulesetId, ERHAPI_InventoryBucket TargetBucket, ERHAPI_InventoryBucket ItemInventoryBucket) const;
	/**
	* @brief Gets the cached vendors.
	*/
	const TMap<int32, FRHAPI_Vendor>& GetVendors() const { return CatalogVendors; }
	/**
	* @brief Gets the cached catalog items
	*/
	const TMap<int32, URH_CatalogItem*>& GetCatalogItems() const { return CatalogItems; }
	/**
	* @brief Gets the xp tables.
	*/
	const TMap<int32, FRHAPI_XpTable>& GetXpTables() const { return XpTables; }
	/**
	* @brief Gets the cached inventory bucket rule sets.
	*/
	const TMap<FString, FRHAPI_InventoryBucketUseRuleSet>& GetInventoryBucketUseRuleSets() const { return InventoryBucketUseRuleSets; }
	/**
	* @brief Gets the cached price points.
	*/
	const TMap<FGuid, FRHAPI_PricePoint>& GetPricePoints() const { return CatalogPricePoints; }
	/**
	* @brief Gets the cached time frames.
	*/
	const TMap<int32, FRHAPI_TimeFrame>& GetTimeFrames() const { return TimeFrames; }
	/**
	 * @brief Delegate that fires whenever a catalog item is added to the cashed catalog items.
	 */
	FRH_CatalogItemUpdatedDelegate OnCatalogItemAdded;
	
	virtual FString GetDefaultCatalogFileExportPath() const { return FPaths::ProjectConfigDir() / TEXT("catalog_data.json"); }
	/**
	 * @brief Retrieve all catalog data and save it to a file.
	 * @param [in] FilePath The file path to save the catalog data to. 
	 * @param [in] Delegate Callback when the API call is complete and the file is written. 
	 */
	void ExportCatalogToFile(const FString& FilePath = FString(), const FRH_GenericSuccessWithErrorBlock& Delegate = FRH_GenericSuccessWithErrorBlock()) const;
	/**
	 * @brief Retrieve all catalog data from a file and load it into the catalog.
	 * @param [in] FilePath The file path to load the catalog data from.
	 * @param [in] Delegate Callback when the API call is complete and the file is read.
	 */
	void ImportCatalogFromFile(const FString& FilePath = FString(), const FRH_CatalogCallBlock& Delegate = FRH_CatalogCallBlock());
	
protected:
	/**
	 * @brief Makes an API call for a single vendor Id.
	 * @param [in] VendorId The Vendor to request.
	 */
	void GetCatalogVendorSingle(int32 VendorId, const FRH_GenericSuccessWithErrorBlock& Delegate = FRH_GenericSuccessWithErrorBlock());
	/**
	* @brief Handles the response to a successful Get Catalog Vendor call, updates local cache
	* @param [in] Resp Response given for the call
	* @param [in] VendorId The Vendor Id that was requested.
	*/
	virtual void OnGetCatalogVendorResponseUpdate(const TGetCatalogVendor::Response& Resp, int32 VendorId);
	/**
	* @brief Handles the response to a Get Catalog Vendor call, handles completion and processing of any followup requests.
	* @param [in] bSuccess If the call was successful.
	* @param [in] ErrorInfo The error information if the call failed.
	* @param [in] VendorId The Vendor Id that was requested.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	*/
	virtual void OnGetCatalogVendorResponseComplete(bool bSuccess, const FRH_ErrorInfo& ErrorInfo, int32 VendorId, FRH_GenericSuccessWithErrorBlock Delegate);
	/**
	 * @brief Processes the current vendor request list, kicking off any new requests that are needed, and completing existing requests that are done.
	 */
	virtual void ProcessVendorRequests();
	/**
	* @brief Handles the response to a Get Catalog Vendor All call
	* @param [in] Resp Response given for the call
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	*/
	virtual void OnGetCatalogVendorsAllResponse(const TGetCatalogVendorsAll::Response& Resp, const FRH_CatalogCallBlock Delegate);
	/**
	* @brief Handles the response to a Get Catalog All call
	* @param [in] Resp Response given for the call
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	*/
	virtual void OnGetCatalogAllResponse(const TGetCatalogAll::Response& Resp, const FRH_CatalogCallBlock Delegate);
	/**
	* @brief Handles the response to a Get Catalog Xp All call
	* @param [in] Resp Response given for the call
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	*/
	virtual void OnGetCatalogXpAllResponse(const TGetCatalogXpAll::Response& Resp, const FRH_CatalogCallBlock Delegate);
	/**
	* @brief Handles the response to a Get Catalog Item call.
	* @param [in] Resp Response given for the call.
	* @param [in] ItemId The Item Id being requested.
	*/
	virtual void OnGetCatalogItemResponse(const TGetCatalogItem::Response& Resp, int32 ItemId);
	/**
	* @brief Handles the response to a Get Catalog Inventory Bucked Use Rule Sets All call.
	* @param [in] Resp Response given for the call.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	*/
	virtual void OnGetCatalogInventoryBucketUseRuleSetsAllResponse(const TGetCatalogInventoryBucketUseRuleSetsAll::Response& Resp, const FRH_CatalogCallBlock Delegate);
	/**
	* @brief Handles the response to a Get Catalog Price Points All call.
	* @param [in] Resp Response given for the call.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	*/
	virtual void OnGetCatalogPricePointsAllResponse(const TGetCatalogPricePointsAll::Response& Resp, const FRH_CatalogCallBlock Delegate);
	/**
	* @brief Handles the response to a Get Catalog Time Frames All call
	* @param [in] Resp Response given for the call
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	*/
	virtual void OnGetCatalogTimeFramesAllResponse(const TGetCatalogTimeFramesAll::Response& Resp, const FRH_CatalogCallBlock Delegate);
	/** @brief Array of active vendor requests that are in flight and not responded ot yet. */
	UPROPERTY(Transient)
	TArray<FRH_VendorRequestState> VendorRequests;
	/** Map of all vendor requests that are in flight */
	TMap<int32, TWeakPtr<FRH_AsyncTaskHelper>> InFlightVendorRequests;
	/** @brief Xp Table Id to Xp Table Map. */
	UPROPERTY(Transient)
	TMap<int32, FRHAPI_XpTable> XpTables;
	/** @brief Vendor Id to Vendor Map */
	UPROPERTY(Transient)
	TMap<int32, FRHAPI_Vendor> CatalogVendors;
	/** @brief Item Id to Catalog Item Map */
	UPROPERTY(Transient)
	TMap<int32, URH_CatalogItem*> CatalogItems;
	/** @brief Loot Id to Catalog Vendor Item Map */
	UPROPERTY(Transient)
	TMap<int32, FRHAPI_Loot> CatalogLootItems;
	/** @brief Timeframe Id to Timeframe Map */
	UPROPERTY(Transient)
	TMap<int32, FRHAPI_TimeFrame> TimeFrames;
	/** @brief Price Point ID to Price Points */
	UPROPERTY(Transient)
	TMap<FGuid, FRHAPI_PricePoint> CatalogPricePoints;
	/** @brief Inventory Bucket to Inventory Bucket Use Ruleset Map */
	TMap<FString, FRHAPI_InventoryBucketUseRuleSet> InventoryBucketUseRuleSets;
	/** @brief ETag of last GetCatalogAll call response */
	TOptional<FString> GetCatalogAllETag;
	/** @brief ETag of last GetCatalogXpAll call response */
	TOptional<FString> GetCatalogXpAllETag;
	/** @brief ETag of last GetCatalogPricePointsAll call response */
	TOptional<FString> GetCatalogPricePointsAllETag;
	/** @brief ETag of last GetCatalogVendorsAll call response */
	TOptional<FString> GetCatalogVendorsAllETag;
	/** @brief ETag of last GetCatalogTimeFramesAll call response */
	TOptional<FString> GetCatalogTimeFramesAllETag;
	/** @brief ETag of last GetCatalogInventoryBucketUseRuleSetsAll call response */
	TOptional<FString> GetCatalogInventoryBucketUseRuleSetsAllETag;
	/**
	 * @brief Array of GetCatalogItemCalls yet to be sent to the API layer.
	 */
	TMap<int32, TArray<FRH_CatalogCallBlock>> PendingGetCatalogItemCalls;
	/**
	 * @brief Array of GetCatalogItemCalls yet being executed by the API layer at this time.
	 */
	TMap<int32, TArray<FRH_CatalogCallBlock>> SubmittedGetCatalogItemCalls;
	/**
	 * @brief Parses Xp Tables response into the Xp Table Map.
	 * @param [in] Content Xp Tables to parse.
	 */
	void ParseAllXpTables(const FRHAPI_XpTables& Content);
	/**
	 * @brief Parses Inventory Bucket Use Rule Sets response into the Inventory Bucket Use Ruleset Map.
	 * @param [in] Content Inventory Bucket Use Rule Sets to parse.
	 */
	void ParseAllInventoryBucketUseRuleSets(const FRHAPI_InventoryBucketUseRuleSets& Content);
	/**
	 * @brief Parse a Catalog item into the class for it and stores it in the Catalog Items Map.
	 * @param [in] CatalogItem Item to be parsed.
	 * @param [in] ItemId Item Id of the item being parsed.
	 * @return The Catalog Item as its class.
	 */
	URH_CatalogItem* ParseCatalogItem(const FRHAPI_Item& CatalogItem, int32 ItemId);
	/** @brief Initializes the subsystem with defaults for its cached data. */
	virtual void InitPropertiesWithDefaultValues();

	// FTickableGameObject interface
	/** @brief Kick off pending requests to the API layer. */
	virtual void Tick(float DeltaTime);
	/** @brief Determine if there are pending requests. */
	virtual bool IsTickable() const { return PendingGetCatalogItemCalls.Num() > 0; }
	/** Gets the catalog subsystem stat Id. */
	virtual TStatId GetStatId() const { RETURN_QUICK_DECLARE_CYCLE_STAT(URH_CatalogSubsystem, STATGROUP_TaskGraphTasks); }
};

/**
* @brief Catalog Blueprint Library with helper methods for API structs.
*/
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_CatalogBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	* @brief Gets the price of an item at a given quantity for a given currency type.
	* @param [in] PriceBreakpoints The set of breakpoints being searched.
	* @param [in] CurrencyItemId The currency type being looked for.
	* @param [in] Quantity The quantity being looked for.
	* @param [out] Price The price of the item at the given quantity and currency type.
	* @return If true, a valid price has been found
	*/
	UE_DEPRECATED(5.0, "Please use GetUnitPrices that takes an array of currency ids")
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem", meta = (DisplayName = "Get Unit Price ", DeprecatedFunction, DeprecationMessage="Please use GetUnitPrice that takes an array of currency ids"))
	static bool GetUnitPrice(const TArray<FRHAPI_PriceBreakpoint>& PriceBreakpoints, int32 CurrencyItemId, int32 Quantity, int32& Price)
	{
		TArray<int32> CurrencyIds = { CurrencyItemId };
		TArray<FRHAPI_PriceBreakPointCurrency> PriceCurrencies = GetUnitPrices(PriceBreakpoints, CurrencyIds, Quantity);

		// this function should only be used in cases where there is only a single currency, or it could provide incorrect results
		ensure(PriceCurrencies.Num() <= 1);

		for (const auto& PriceCurrency : PriceCurrencies)
		{
			if (PriceCurrency.GetPriceItemId() == CurrencyItemId)
			{
				Price = PriceCurrency.GetPrice();
				return true;
			}
		}

		return false;
	}
	/**
	* @brief Gets the price of an item at a given quantity for a given set of currency types.
	* @param [in] PriceBreakpoints The set of breakpoints being searched.
	* @param [in] CurrencyIds The currency types being looked for (a price point must have all of the specified currencies).
	* @param [in] Quantity The quantity being looked for.
	* @return The array of price currencies for the given quantity if found, empty if not found
	*/
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem", meta = (DisplayName = "Get Unit Price "))
	static TArray<FRHAPI_PriceBreakPointCurrency> GetUnitPrices(const TArray<FRHAPI_PriceBreakpoint>& PriceBreakpoints, const TArray<int32>& CurrencyIds, int32 Quantity);
	/**
	* @brief Gets if the coupon item can be used to discount a vendor item.
	* @param [in] Coupon Item The item that is being used as a coupon.
	* @param [in] LootItem The item being checked if it can be discounted.
	* @return If true, the coupon can be used to discount the item.
	*/
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem")
	static bool IsCouponApplicableForItem(URH_CatalogItem* CouponItem, const FRHAPI_Loot& LootItem);
	/**
	* @brief Gets if the coupon item can be used to discount a vendor item.
	* @param [in] Coupon Item The item that is being used as a coupon.
	* @param [in] LootId The Loot id ot the vendor item being checked if it can be discounted.
	* @return If true, the coupon can be used to discount the item.
	*/
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem")
	static bool IsCouponApplicableForLootId(URH_CatalogItem* CouponItem, int32 LootId);
	/**
	* @brief Gets the modified price based on the discount precentage of the coupon.
	* @param [in] Coupon Item The item that is being used as a coupon.
	* @param [in] Price The price of the item being discounted.
	* @return The modified price, note this doesn't verify if the coupon is valid for the item.
	*/
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem")
	static int32 GetCouponDiscountedPrice(URH_CatalogItem* CouponItem, int32 Price);
	/**
	* @brief Gets the Xp required for a level of this Xp Table at a specific level.
	* @param [in] XpTable The Xp Table being searched.
	* @param [in] XpLevel The Level being searched for.
	* @return If found, the Xp required for the level, otherwise -1.
	*/
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem")
	static int64 GetXpAtLevel(const FRHAPI_XpTable& XpTable, int32 XpLevel);
	/**
	* @brief Gets the current level at a specific amount of Xp for this Xp Table.
	* @param [in] XpTable The Xp Table being searched.
	* @param [in] XpPoints The amount of Xp that is being used to determine the level.
	* @return If found, the level for the provided Xp, otherwise 0.
	*/
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem")
	static int32 GetLevelAtXp(const FRHAPI_XpTable& XpTable, int64 XpPoints);
	/**
	* @brief Gets a loot item of a vendor by its loot id.
	* @param [in] Vendor The Vendor being searched.
	* @param [in] LootId The Loot Id being searched for.
	* @param [out] LootItem The item if found.
	* @return If found, returns true.
	*/
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem")
	static bool GetVendorItemById(const FRHAPI_Vendor& Vendor, int32 LootId, FRHAPI_Loot& LootItem);
};

/** @} */