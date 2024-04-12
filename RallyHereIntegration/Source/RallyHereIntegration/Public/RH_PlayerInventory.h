// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RH_Common.h"
#include "RH_Properties.h"
#include "RH_CatalogSubsystem.h"
#include "RH_GameInstanceSessionSubsystem.h"
#include "Misc/Optional.h"
#include "RH_Polling.h"

#include "RH_PlayerInventory.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_OneParam(FRH_OnInventoryUpdateDynamicDelegate, bool, bSuccess);
DECLARE_DELEGATE_OneParam(FRH_OnInventoryUpdateDelegate, bool);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnInventoryUpdateDelegateBlock, FRH_OnInventoryUpdateDelegate, FRH_OnInventoryUpdateDynamicDelegate, bool);

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_PromoCodeResultDynamicDelegate, const URH_PlayerInfo*, PlayerInfo, const FString&, PromoCode, const FRHAPI_PlayerOrder&, OrderResult);
DECLARE_DELEGATE_ThreeParams(FRH_PromoCodeResultDelegate, const URH_PlayerInfo*, const FString&, const FRHAPI_PlayerOrder&);
DECLARE_RH_DELEGATE_BLOCK(FRH_PromoCodeResultBlock, FRH_PromoCodeResultDelegate, FRH_PromoCodeResultDynamicDelegate, const URH_PlayerInfo*, const FString&, const FRHAPI_PlayerOrder&)

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OrderResultDynamicDelegate, const URH_PlayerInfo*, PlayerInfo, TArray<URH_PlayerOrderEntry*>, OrderEntries, const FRHAPI_PlayerOrder&, OrderResult);
DECLARE_DELEGATE_ThreeParams(FRH_OrderResultDelegate, const URH_PlayerInfo*, TArray<URH_PlayerOrderEntry*>, const FRHAPI_PlayerOrder&);
DECLARE_RH_DELEGATE_BLOCK(FRH_OrderResultBlock, FRH_OrderResultDelegate, FRH_OrderResultDynamicDelegate, const URH_PlayerInfo*, TArray<URH_PlayerOrderEntry*>, const FRHAPI_PlayerOrder&)

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_OneParam(FRH_OrderDetailsDynamicDelegate, const TArray<FRHAPI_PlayerOrder>&, OrderResults);
DECLARE_DELEGATE_OneParam(FRH_OrderDetailsDelegate, const TArray<FRHAPI_PlayerOrder>&);
DECLARE_RH_DELEGATE_BLOCK(FRH_OrderDetailsBlock, FRH_OrderDetailsDelegate, FRH_OrderDetailsDynamicDelegate, const TArray<FRHAPI_PlayerOrder>&)

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_OneParam(FRH_GetInventoryCountDynamicDelegate, int32, InstanceCount);
DECLARE_DELEGATE_OneParam(FRH_GetInventoryCountDelegate, int32);
DECLARE_RH_DELEGATE_BLOCK(FRH_GetInventoryCountBlock, FRH_GetInventoryCountDelegate, FRH_GetInventoryCountDynamicDelegate, int32)

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_OneParam(FRH_GetInventoryStateDynamicDelegate, bool, IsValid);
DECLARE_DELEGATE_OneParam(FRH_GetInventoryStateDelegate, bool);
DECLARE_RH_DELEGATE_BLOCK(FRH_GetInventoryStateBlock, FRH_GetInventoryStateDelegate, FRH_GetInventoryStateDynamicDelegate, bool)

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRH_InventoryUpdatedDynamicDelegate, const TArray<int32>&, ItemIds);
DECLARE_DELEGATE_TwoParams(FRH_InventoryUpdatedDelegate, const TArray<int32>&, URH_PlayerInfo*);

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_OneParam(FRH_OnInventorySessionUpdateDynamicDelegate, bool, bSuccess);
DECLARE_DELEGATE_OneParam(FRH_OnInventorySessionUpdateDelegate, bool);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnInventorySessionUpdateDelegateBlock, FRH_OnInventorySessionUpdateDelegate, FRH_OnInventorySessionUpdateDynamicDelegate, bool);

class URH_PlayerOrderEntry;
class URH_PlayerInfo;

/** @defgroup Inventory RallyHere Inventory
 *  @{
 */

/**
 * @brief Base class to handle pending orders waiting for a final response.
 */
UCLASS(Within = RH_PlayerInventory)
class RALLYHEREINTEGRATION_API URH_PendingOrder : public UObject
{
	typedef RallyHereAPI::Traits_GetPlayerUuidOrderById TGetOrderById;

	GENERATED_UCLASS_BODY()

public:
	/**
	 * @brief Polls to see if the order has completed.
	 * @param Delegate Callback if the poll is successful.
	 * @return True if a call was made.
	 */
	bool RequestOrders(const FRH_GenericSuccessWithErrorBlock& Delegate);
	UE_DEPRECATED(5.0, "Please use the version with the error delegate")
	FORCEINLINE bool RequestOrders(const FRH_GenericSuccessBlock& Delegate)
	{
		return RequestOrders(RH_ConvertGenericSucessDelegateBlock(Delegate));
	}
	/**
	 * @brief Id of the pending order.
	 */
	UPROPERTY(Transient)
	FString OrderId;

protected:
	/**
	 * @brief Triggers a broadcasts when the order is sucessfully processed.
	 * @param [in] PlayerInventory The Inventory Subystem to help will callback params.
	 * @param [in] Content The results of the order being processed.
	 */
	virtual void BroadcastComplete(URH_PlayerInventory* PlayerInventory, const FRHAPI_PlayerOrder& Content) {};
	/**
	* @brief Handles the response to a Get Player Order call.
	* @param [in] Resp Response given for the call.
	*/
	virtual void RequestOrdersResponse(const TGetOrderById::Response& Resp);
	/**
	 * @brief Gets the Player Inventory.
	 */
	URH_PlayerInventory* GetPlayerInventory() const;
};

/**
 * @brief Class to handle pending promo code redemptions.
 */
UCLASS(Within = RH_PlayerInventory)
class RALLYHEREINTEGRATION_API URH_PendingPromoCodeOrder : public URH_PendingOrder
{
	GENERATED_UCLASS_BODY()

public:
	/**
	 * @brief Promo code attempting to be redeemed.
	 */
	UPROPERTY(Transient)
	FString PromoCode;
	/**
	 * @brief Delegate callback with the promo code results.
	 */
	FRH_PromoCodeResultBlock PromoCodeResultsDelegate;
	/**
	 * @brief Initalized the pending request.
	 * @param [in] InOrderId OrderId of the pending order.
	 * @param [in] InPromoCode Promo code being redeemed in the order.
	 * @param [in] InPromoCodeDelegate Callback delegate to fire when complete.
	 */
	void Init(const FString& InOrderId, const FString& InPromoCode, const FRH_PromoCodeResultBlock& InPromoCodeDelegate = FRH_PromoCodeResultBlock())
	{
		OrderId = InOrderId;
		PromoCode = InPromoCode;
		PromoCodeResultsDelegate = InPromoCodeDelegate;
	}

protected:
	/**
	* @brief Triggers a broadcasts when the order is sucessfully processed.
	* @param [in] PlayerInventory The Inventory Subystem to help will callback params.
	* @param [in] Content The results of the order being processed.
	*/
	virtual void BroadcastComplete(URH_PlayerInventory* PlayerInventory, const FRHAPI_PlayerOrder& Content) override;
};

/**
 * @brief Class to handle pending inventory update calls.
 */
UCLASS(Within = RH_PlayerInventory)
class RALLYHEREINTEGRATION_API URH_PendingInventoryUpdateOrder : public URH_PendingOrder
{
	GENERATED_UCLASS_BODY()

public:
	/**
	 * @brief Delegate callback with inventory update results.
	 */
	FRH_OnInventoryUpdateDelegateBlock InventoryUpdateDelegate;
	/**
	 * @brief Initalized the pending request.
	 * @param [in] InOrderId OrderId of the pending order.
	 * @param [in] InInventoryUpdateDelegate Callback delegate to fire when complete.
	 */
	void Init(const FString& InOrderId, const FRH_OnInventoryUpdateDelegateBlock& InInventoryUpdateDelegate = FRH_OnInventoryUpdateDelegateBlock())
	{
		OrderId = InOrderId;
		InventoryUpdateDelegate = InInventoryUpdateDelegate;
	}

protected:
	/**
	* @brief Triggers a broadcasts when the order is sucessfully processed.
	* @param [in] PlayerInventory The Inventory Subystem to help will callback params.
	* @param [in] Content The results of the order being processed.
	*/
	virtual void BroadcastComplete(URH_PlayerInventory* PlayerInventory, const FRHAPI_PlayerOrder& Content) override;
};

/**
 * @brief Class to handle pending player orders.
 */
UCLASS(Within = RH_PlayerInventory)
class RALLYHEREINTEGRATION_API URH_PendingPlayerOrder : public URH_PendingOrder
{
	GENERATED_UCLASS_BODY()

public:
	/**
	* @brief Delegate callback with player order results.
	*/
	FRH_OrderResultBlock OrderResultDelegate;
	/**
	 * @brief List of all the order entries submitted in the order.
	 */
	UPROPERTY(Transient)
	TArray<URH_PlayerOrderEntry*> OrderEntries;
	/**
	* @brief Initalized the pending request.
	* @param [in] InOrderId OrderId of the pending order.
	* @param [in] InOrderEntries Order entries submitted with the order
	* @param [in] InOrderResultDelegate Callback delegate to fire when complete.
	*/
	void Init(const FString& InOrderId, const TArray<URH_PlayerOrderEntry*>& InOrderEntries, const FRH_OrderResultBlock& InOrderResultDelegate = FRH_OrderResultBlock())
	{
		OrderId = InOrderId;
		OrderEntries.Append(InOrderEntries);
		OrderResultDelegate = InOrderResultDelegate;
	}

protected:
	/**
	* @brief Triggers a broadcasts when the order is sucessfully processed.
	* @param [in] PlayerInventory The Inventory Subystem to help will callback params.
	* @param [in] Content The results of the order being processed.
	*/
	virtual void BroadcastComplete(URH_PlayerInventory* PlayerInventory, const FRHAPI_PlayerOrder& Content) override;
};

/**
 * @brief Class to handle pending order details orders.
 */
UCLASS(Within = RH_PlayerInventory)
class RALLYHEREINTEGRATION_API URH_PendingOrderDetailsOrder : public URH_PendingOrder
{
	GENERATED_UCLASS_BODY()

public:
	/**
	* @brief Delegate callback with player order results.
	*/
	FRH_OrderDetailsBlock OrderDetailsDelegate;
	/**
	* @brief Initalized the pending request.
	* @param [in] InOrderId OrderId of the pending order.
	* @param [in] InOrderResultDelegate Callback delegate to fire when complete.
	*/
	void Init(const FString& InOrderId, const FRH_OrderDetailsBlock& InOrderDetailDelegate = FRH_OrderDetailsBlock())
	{
		OrderId = InOrderId;
		OrderDetailsDelegate = InOrderDetailDelegate;
	}
protected:
	/**
	* @brief Triggers a broadcasts when the order is sucessfully processed.
	* @param [in] PlayerInventory The Inventory Subystem to help will callback params.
	* @param [in] Content The results of the order being processed.
	*/
	virtual void BroadcastComplete(URH_PlayerInventory* PlayerInventory, const FRHAPI_PlayerOrder& Content) override;
};

/**
 * @brief Class to track watches on players orders.
 */
UCLASS(Within = RH_PlayerInventory)
class RALLYHEREINTEGRATION_API URH_PlayerOrderWatch : public UObject
{
	typedef RallyHereAPI::Traits_GetPlayerUuidOrders TGetOrders;

	GENERATED_BODY()

public:
	/**
	 * @brief Gets the players orders.
	 * @param Delegate Callback with the players orders.
	 * @return True if the call was made.
	 */
	bool RequestOrders(const FRH_GenericSuccessWithErrorBlock& Delegate);
	UE_DEPRECATED(5.0, "Please use the version with the error delegate")
	FORCEINLINE bool RequestOrders(const FRH_GenericSuccessBlock& Delegate)
	{
		return RequestOrders(RH_ConvertGenericSucessDelegateBlock(Delegate));
	}
	/**
	 * @brief List of delegates listening for order.
	 */
	TArray<FRH_OrderDetailsBlock> Delegates;

protected:
	/**
	* @brief Handles the response to a Get Player Order call.
	* @param [in] Resp Response given for the call.
	*/
	virtual void RequestOrdersResponse(const TGetOrders::Response& Resp);
	/** Cursor location of last player orders response. */
	UPROPERTY()
	FString Cursor;
	/**
	 * @brief Gets the Player Inventory.
	 */
	URH_PlayerInventory* GetPlayerInventory() const;
};

/**
 * @brief Player Order Entry class defines the data of an Order used to submit one to the InventoryAPI
 */
UCLASS(BlueprintType)
class RALLYHEREINTEGRATION_API URH_PlayerOrderEntry : public UObject
{
	GENERATED_BODY()
public:
	/**
	* @brief Gets the Fill Type of the order.
	*/
	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Entry")
	ERHAPI_PlayerOrderEntryType GetFillType() const { return FillType; }
	/**
	* @brief Gets the Loot Item the order is for.
	*/
	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Entry")
	const FRHAPI_Loot& GetLootItem() const { return LootItem; }
	/**
	* @brief Gets the Loot Id of the loot item.
	*/
	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Entry")
	const int32& GetLootId() const { return LootId; }
	/**
	* @brief Gets the amount of the loot item the order is for.
	*/
	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Entry")
	int32 GetQuantity() const { return Quantity; }
	/**
	 * @brief Gets the id that the client can provide for the order for record keeping.
	 */
	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Entry")
	const FString& GetExternalTransactionId() const { return ExternalTransactionId; }
	/**
	 * @brief Gets the item id of the item being used to pay for the order.
	 */
	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Entry")
	const int32& GetPriceItemId() const { return PriceItemId; }
	/**
	 * @brief Gets the amount of the item being used for payment, this is verified to match the expected price.
	 */
	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Entry")
	int32 GetPrice() const { return Price; }
	/**
	 * @brief Gets the item id of a coupon item being used if one is being applied for an item discount.
	 */
	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Entry")
	const int32& GetCouponItemId() const { return CouponItemId; }
	/**
	* @brief Adds custom data to the order entry.
	* @param [in] Key The key for the custom data.
	* @param [in] Value The value for the custom data.
	*/
	void AddCustomData(const FString& Key, const FString& Value)
	{
		CustomData.Emplace(Key, Value);
	}
	/**
	 * @brief The Fill Type of this order Entry
	 */
	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Player Order Entry")
	ERHAPI_PlayerOrderEntryType FillType;
	/**
	 * @brief The Loot Item the order is for.
	 */
	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Player Order Entry")
	FRHAPI_Loot LootItem;
	/**
	* @brief The Loot Id of the loot item.
	*/
	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Player Order Entry")
	int32 LootId;
	/**
	* @brief The amount of the loot item the order is for.
	*/
	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Player Order Entry")
	int32 Quantity;
	/**
	* @brief The id that the client can provide for the order for record keeping.
	*/
	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Player Order Entry")
	FString ExternalTransactionId;
	/**
	* @brief The item id of the item being used to pay for the order.
	*/
	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Player Order Entry")
	int32 PriceItemId;
	/**
	* @brief The amount of the item being used for payment, this is verified to match the expected price.
	*/
	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Player Order Entry")
	int32 Price;
	/**
	* @brief The item id of a coupon item being used if one is being applied for an item discount.
	*/
	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Player Order Entry")
	int32 CouponItemId;
	/**
	* @brief Custom data for the given order to be placed on the item.
	*/
	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Player Order Entry")
	TMap<FString, FString> CustomData;
};

/**
 * @brief Struct for tracking an inventory session.
 */
USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_InventorySession
{
	GENERATED_BODY()
	/** @brief The Session Id. */
	UPROPERTY(BlueprintReadOnly, Category = "Inventory Subsystem | Inventory Session")
	FString SessionId;
	/** @brief The platform associated with the session. */
	UPROPERTY(BlueprintReadOnly, Category = "Inventory Subsystem | Inventory Session")
	ERHAPI_Platform SessionPlatform;
	/** @brief The Order Id associated with any loot that may have been created when the session was created. */
	UPROPERTY(BlueprintReadOnly, Category = "Inventory Subsystem | Inventory Session")
	FString OrderId;
	/** @brief Array of durable loot that was applied to the inventory by the session. */
	UPROPERTY(BlueprintReadOnly, Category = "Inventory Subsystem | Inventory Session")
	TArray<int32> AppliedDurableLoot;
	/** @brief Default constructor. */
	FRH_InventorySession() :
		SessionId(TEXT("")),
		SessionPlatform(ERHAPI_Platform::Anon), // #RHTODO: Do we need a none option in this enum
		OrderId(TEXT(""))
	{

	}
};

/**
* @brief Inventory Item struct for defining cached inventory items and making inventory write calls.
*/
USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_ItemInventory
{
	GENERATED_BODY()

	/**
	* @brief Unique Id of the inventory record.
	*/
	UPROPERTY(Transient, EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory Subsystem | Item Inventory")
	FGuid InventoryId;
	/**
	* @brief The ownership type of the record.
	*/
	UPROPERTY(Transient, EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory Subsystem | Item Inventory")
	ERHAPI_InventoryType InventoryType;
	/**
	* @brief The item id of the record.
	*/
	UPROPERTY(Transient, EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory Subsystem | Item Inventory")
	int32 ItemId;
	/**
	* @brief Amount of the record.
	*/
	UPROPERTY(Transient, EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory Subsystem | Item Inventory")
	int32 Count;
	/**
	* @brief If the record is a rental, when the rental expires.
	*/
	TOptional<FDateTime> Expires;
	/**
	* @brief The time that the record was first recorded.
	*/
	UPROPERTY(Transient, EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory Subsystem | Item Inventory")
	FDateTime Acquired;
	/**
	* @brief Custom data that is stored on the record.
	*/
	UPROPERTY(Transient, EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory Subsystem | Item Inventory")
	TMap<FString, FString> CustomData;
	/**
	* @brief The bucket that the inventory record is in.
	*/
	UPROPERTY(Transient, EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory Subsystem | Item Inventory")
	ERHAPI_InventoryBucket Bucket;

	/**
	* @brief Default constructor.
	*/
	FRH_ItemInventory() :
		InventoryId(FGuid()),
		InventoryType(ERHAPI_InventoryType::Persistent),
		ItemId(int32()),
		Count(0),
		Acquired(FDateTime::MinValue()),
		Bucket(ERHAPI_InventoryBucket::None)
	{
		CustomData.Empty();
	}

	/**
	* @brief Adds custom data to the inventory record.
	* @param [in] Key The key for the custom data.
	* @param [in] Value The value for the custom data.
	*/
	void AddCustomData(const FString& Key, const FString& Value)
	{
		CustomData.Emplace(Key, Value);
	}

	/**
	* @brief Removes custom data to the inventory record.
	* @param [in] Key The key for the custom data.
	* @return The number of elements removed.
	*/
	int32 RemoveCustomData(const FString& Key)
	{
		return CustomData.Remove(Key);
	}

	/**
	* @brief Gets custom data by key from the inventory record.
	* @param [in] Key The key for the custom data.
	* @return The value for the custome data.
	*/
	FORCEINLINE FString FindCustomDataWithKey(const FString& Key) const
	{
		return CustomData.FindRef(Key);
	}

	/**
	* @brief Initializes an inventory record from an Inventory Record API response.
	* @param [in] ItemIdOfInventory The Item Id for the record.
	* @param [in] Inventory The inventory record from the API call.
	*/
	void Init(const int32& ItemIdOfInventory, const FRHAPI_InventoryRecord& Inventory)
	{
		InventoryId = Inventory.InventoryId;
		InventoryType = Inventory.Type;
		ItemId = ItemIdOfInventory;
		Count = Inventory.Count;
		if (const auto InvExpires = Inventory.GetExpiresOrNull())
		{
			Expires = *InvExpires;
		}
		Acquired = Inventory.Acquired;
		CustomData = {};
		if (const auto InvCustomData = Inventory.GetCustomDataOrNull())
		{
			CustomData = *InvCustomData;
		}

		if (const auto InvBucket = Inventory.GetBucketOrNull())
		{
			Bucket = *InvBucket;
		}
		else
		{
			Bucket = ERHAPI_InventoryBucket::None;
		}
	}

	/**
	* @brief Equals operator override for comparison.
	*/
	bool operator==(const FRH_ItemInventory& Other) const
	{
		return InventoryId == Other.InventoryId;
	}
};

/**
* @brief Base Inventory Operation struct for defining shared input data for Inventory Modification API calls.
*/
USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_BaseInventoryOperation
{
	GENERATED_BODY()

	/**
	* @brief The amount of the inventory operation.
	*/
	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Inventory Operation")
	int32 Count;
	/**
	* @brief The item id for the inventory operation.
	*/
	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Inventory Operation")
	int32 ItemId;
	/**
	* @brief The custom data for the inventory operation.
	*/
	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Inventory Operation")
	TMap<FString, FString> CustomData;
	/**
	* @brief The bucket for the inventory operation.
	*/
	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Inventory Operation")
	ERHAPI_InventoryBucket Bucket;
	/**
	* @brief The expiriation date of the inventory operation.
	*/
	TOptional<FDateTime> Expires;
	/**
	* @brief If set, then the the expiration date will be considered for the inventory operation.
	*/
	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Inventory Operation")
	bool InventoryShouldExpire;

	/**
	* @brief Default constructor.
	*/
	FRH_BaseInventoryOperation() :
		Count(0),
		ItemId(0),
		Bucket(ERHAPI_InventoryBucket::None),
		InventoryShouldExpire(false)
	{
		CustomData.Empty();
	}

	/**
	* @brief Initializes an inventory operation with the data from an Inventory Item.
	* @params [in] ItemInventory The item inventory to initialize the operation with.
	* @return If true, the operation was initialized successfully.
	*/
	bool InitFromItemInventory(const FRH_ItemInventory& ItemInventory)
	{
		Count = ItemInventory.Count;
		ItemId = ItemInventory.ItemId;
		CustomData = ItemInventory.CustomData;
		Bucket = ItemInventory.Bucket;
		Expires = ItemInventory.Expires;
		return true;
	}
};

/**
* @brief Create Inventory Operation struct for setting up data to Create an Inventory record.
*/
USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_CreateInventory: public FRH_BaseInventoryOperation
{
	GENERATED_BODY()
	/**
	* @brief The amount of the inventory operation, defaults to 1.
	*/
	int32 Count = 1;
	/**
	* @brief The item id for the inventory operation, defaults to Persistent.
	*/
	ERHAPI_CreateInventoryType InventoryType = ERHAPI_CreateInventoryType::Persistent;

	/**
	* @brief Initializes an inventory operation with the data from an Inventory Item.
	* @params [in] ItemInventory The item inventory to initialize the operation with.
	* @return If true, the operation was initialized successfully.
	*/
	bool InitFromItemInventory(const FRH_ItemInventory& ItemInventory)
	{
		if (ItemInventory.InventoryType == ERHAPI_InventoryType::AlwaysOwned)
		{
			return false;
		}

		Super::InitFromItemInventory(ItemInventory);
		InventoryType = static_cast<ERHAPI_CreateInventoryType>(ItemInventory.InventoryType);
		return true;
	}
};

/**
* @brief Update Inventory Operation struct for setting up data to Update an Inventory record.
*/
USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_UpdateInventory: public FRH_BaseInventoryOperation
{
	GENERATED_BODY()
	/**
	* @brief Unique Id of the inventory record being operated on.
	*/
	FGuid InventoryId;
	/**
	* @brief The amount of the inventory operation, defaults to 0.
	*/
	int32 Count = 0;

	/**
	* @brief Initializes an inventory operation with the data from an Inventory Item.
	* @params [in] ItemInventory The item inventory to initialize the operation with.
	* @return If true, the operation was initialized successfully.
	*/
	bool InitFromItemInventory(const FRH_ItemInventory& ItemInventory)
	{
		Super::InitFromItemInventory(ItemInventory);
		InventoryId = ItemInventory.InventoryId;
		return true;
	}
};

/**
 * @brief Inventory Subsystem created per player for tracking and updating player inventory.
 */
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_PlayerInventory : public UObject
{
	GENERATED_BODY()
public:
	typedef RallyHereAPI::Traits_CreateNewPlayerUuidOrder TCreateOrder;

	/**
	 * @brief Initialize the subobject.
	 */
	void Initialize();

	/**
	 * @brief Gets the player info set on the subsystem.
	 * @return The set player info.
	 */
	URH_PlayerInfo* GetPlayerInfo() const { return PlayerInfo; }

	/**
	 * @brief Gets the associated player infos Unique Player Id.
	 * @return The set player infos Unique Player Id.
	 */
	const FGuid GetRHPlayerUuid() const;

	/**
	 * @brief Gets the Auth Context that has authority to operate on this players inventory.
	 * @return The local or instance Auth Context.
	 */
	const FAuthContextPtr GetAuthContext() const;

	/**
	 * @brief Sets the Player Info owner of the subsystem.
	 */
	void SetPlayerInfo(URH_PlayerInfo* InPlayerInfo) { PlayerInfo = InPlayerInfo; }

	/**
	* @brief Gets the Players Inventory Count of the item for the connected platform, async pulls needed item data if it isn't already cached.
	* @param [in] ItemId The id of the item requesting count of.
	* @param [in] Delegate Callback with the count of the inventory item.
	*/
	void GetInventoryCount(const int32& ItemId, const FRH_GetInventoryCountBlock& Delegate = FRH_GetInventoryCountBlock()) const;
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Get Inventory Count", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetInventoryCount(const int32& ItemId, const FRH_GetInventoryCountDynamicDelegate& Delegate) { GetInventoryCount(ItemId, Delegate); }
	/**
	* @brief Gets if the player owns at least one of the item for the connected platform, async pulls needed item data if it isn't already cached.
	* @param [in] ItemId The id of the item requesting count of.
	* @param [in] Delegate Callback with the state of the items ownership.
	*/
	void IsInventoryItemOwned(const int32& ItemId, const FRH_GetInventoryStateBlock& Delegate = FRH_GetInventoryStateBlock()) const;
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Is Inventory Item Owned", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_IsInventoryItemOwned(const int32& ItemId, const FRH_GetInventoryStateDynamicDelegate& Delegate) { IsInventoryItemOwned(ItemId, Delegate); }

	/**
	* @brief Gets if the player has rented at least one of the item for the connected platform, async pulls needed item data if it isn't already cached.
	* @param [in] ItemId The id of the item requesting count of.
	* @param [in] Delegate Callback with the state of the items rented status.
	*/
	void IsInventoryItemRented(const int32& ItemId, const FRH_GetInventoryStateBlock& Delegate = FRH_GetInventoryStateBlock()) const;
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Is Inventory Item Rented", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_IsInventoryItemRented(const int32& ItemId, const FRH_GetInventoryStateDynamicDelegate& Delegate) { IsInventoryItemRented(ItemId, Delegate); }
	/**
	* @brief Gets the active inventory session for the player.
	* @return The active inventory session.
	*/
	UFUNCTION(BlueprintGetter, Category = "Inventory Subsystem")
	const FRH_InventorySession& GetCachedInventorySession() const { return InventorySession; }

	/**
	* @brief Gets the cached inventory for the player.
	* @return Array of inventory records.
	*/
	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem")
	const TArray<FRH_ItemInventory> GetAllCachedInventory() const;

	/**
	* @brief Gets the cached inventory records for an item id for the player.
	* @param [in] ItemId The id of the item requesting inventory records for.
	* @return Array of inventory records.
	*/
	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem")
	const TArray<FRH_ItemInventory> GetCachedInventoryForItem(const int32& ItemId) const;

	/**
	* @brief Gets the cached inventory records for multiple item ids for the player.
	* @param [in] ItemIds The ids of the item requesting inventory records for.
	* @return Array of inventory records.
	*/
	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem")
	const TArray<FRH_ItemInventory> GetCachedInventoryForItems(const TArray<int32>& ItemIds) const;

	/**
	* @brief Gets the cached inventory records for an inventory type for the player.
	* @param [in] Type The type of inventory records being requested.
	* @return Array of inventory records.
	*/
	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem")
	const TArray<FRH_ItemInventory> GetCachedInventoryForType(const ERHAPI_InventoryType& Type) const;

	/**
	* @brief Gets the cached inventory records for multiple item ids that have the given inventory type for the player.
	* @param [in] ItemIds The ids of the item requesting inventory records for.
	* @param [in] Type The type of inventory records being requested.
	* @return Array of inventory records.
	*/
	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem")
	const TArray<FRH_ItemInventory> GetCachedInventoryForItemsAndTypes(const TArray<int32>& ItemIds, const TArray<ERHAPI_InventoryType>& Types) const;

	/**
	* @brief Gets an exact cached inventory record for the player.
	* @param [in] InventoryId the Unique Id of the inventory record being requested.
	* @param [out] Item The inventory record requested.
	* @return If true, the inventory record was found.
	*/
	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem")
	bool GetCachedInventoryForInventoryId(const FGuid& InventoryId, FRH_ItemInventory& Item) const;

	/**
	* @brief Gets all order results that have come in for the player.
	* @return Array of order results.
	*/
	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem")
	const TArray<FRHAPI_PlayerOrder>& GetOrderResults() const { return CachedOrderResults; }

	/**
	* @brief Clears all cached inventory for the player.
	*/
	void ClearCachedInventory() { InventoryCache.Empty(); };

	/**
	* @brief Clears all cached order results for the player.
	*/
	void ClearOrderCache() { CachedOrderResults.Empty(); }

	/**
	* @brief Calls the Inventory API to get the players active Inventory Session.
	* @param [in] Delegate Callback delegate for getting the players session.
	*/
	void GetInventorySession(const FRH_OnInventorySessionUpdateDelegateBlock& Delegate = FRH_OnInventorySessionUpdateDelegate());
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Get Inventory Session", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetInventorySession(const FRH_OnInventorySessionUpdateDynamicDelegate& Delegate) { return GetInventorySession(Delegate); };

	/**
	* @brief Calls the Inventory API to get the create an Inventory Session for the player.
	* @param [in] Delegate Callback delegate for creating the players session.
	*/
	void CreateInventorySession(const TOptional<ERHAPI_Platform> Platform, const FRH_OnInventorySessionUpdateDelegateBlock& Delegate = FRH_OnInventorySessionUpdateDelegate());
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Create Inventory Session", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_CreateInventorySession(const FRH_OnInventorySessionUpdateDynamicDelegate& Delegate) { return CreateInventorySession({}, Delegate); };
	/**
	* @brief Calls the Inventory API to get the create an Inventory Session for the player for a given Platform.
	* @param [in] Delegate Callback delegate for creating the players session.
	*/
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Create Inventory Session For Platform", AutoCreateRefTerm = "PlatformName,Delegate"))
	void BLUEPRINT_CreateInventorySessionForPlatform(const ERHAPI_Platform Platform, const FRH_OnInventorySessionUpdateDynamicDelegate& Delegate) { return CreateInventorySession(Platform, Delegate); };

	/**
	* @brief Calls the Inventory API to get the the inventory for the player.
	* @param [in] ItemIds The Item Ids of inventory requested, if empty all inventory will be returned.
	* @param [in] Delegate Callback delegate for getting the inventory.
	*/
	void GetInventory(TArray<int32> ItemIds = TArray<int32>(), const FRH_OnInventoryUpdateDelegateBlock& Delegate = FRH_OnInventoryUpdateDelegate());
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Get Inventory", AutoCreateRefTerm = "ItemIds,Delegate"))
	void BLUEPRINT_GetInventory(TArray<int32> ItemIds, const FRH_OnInventoryUpdateDynamicDelegate& Delegate) { return GetInventory(ItemIds, Delegate); };

	/**
	* @brief Creates an order for the player, used for purchasing and other loot related actions
	* @param [in] FillType The type of player order being created
	* @param [in] OrderSource Where the order is being created from
	* @param [in] OrderEntries Array of orders being requested
	* @param [in] Delegate Callback delegate for the completion of the order request
	*/
	UE_DEPRECATED(5.0, "This function has been deprecated, use CreateNewPlayerOrder and set IsTransaction, as well as the FillType on the OrderEntries")
	void CreatePlayerOrder(ERHAPI_PlayerOrderEntryType FillType, ERHAPI_Source OrderSource, const TArray<URH_PlayerOrderEntry*>& OrderEntries, FRH_OrderResultBlock Delegate = FRH_OrderResultBlock())
	{
		for (URH_PlayerOrderEntry* Entry : OrderEntries)
		{
			Entry->FillType = FillType;
		}
		CreateNewPlayerOrder(OrderSource, false, OrderEntries, Delegate);
	}
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Create Player Order Deprecated", AutoCreateRefTerm = "Delegate", DeprecatedFunction, DeprecationMessage = "This function has been deprecated, use CreateNewPlayerOrder and set IsTransaction, as well as the FillType on the OrderEntries"))
	void BLUEPRINT_CreatePlayerOrder(ERHAPI_PlayerOrderEntryType FillType, ERHAPI_Source OrderSource, const TArray<URH_PlayerOrderEntry*>& OrderEntries, const FRH_OrderResultDynamicDelegate& Delegate)
	{
		for (URH_PlayerOrderEntry* Entry : OrderEntries)
		{
			Entry->FillType = FillType;
		}
		CreateNewPlayerOrder(OrderSource, false, OrderEntries, Delegate);
	}

	/**
	* @brief Creates an order for the player, used for purchasing and other loot related actions.
	* @param [in] OrderSource Where the order is being created from.
	* @param [in] OrderEntries Array of orders being requested.
	* @param [in] Delegate Callback delegate for the completion of the order request.
	*/
	UE_DEPRECATED(5.0, "This function has been deprecated, use CreateNewPlayerOrder and set IsTransaction, as well as the FillType on the OrderEntries")
	void CreateNewPlayerOrder(ERHAPI_Source OrderSource, const TArray<URH_PlayerOrderEntry*>& OrderEntries, const FRH_OrderResultBlock& Delegate = FRH_OrderResultBlock()) { CreateNewPlayerOrder(OrderSource, false, OrderEntries, Delegate); }
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Create New Player Order Deprecated", AutoCreateRefTerm = "Delegate", DeprecatedFunction, DeprecationMessage = "This function has been deprecated, use CreateNewPlayerOrder and set IsTransaction, as well as the FillType on the OrderEntries"))
	void BLUEPRINT_CreateNewPlayerOrder(ERHAPI_Source OrderSource, const TArray<URH_PlayerOrderEntry*>& OrderEntries, const FRH_OrderResultDynamicDelegate& Delegate) { CreateNewPlayerOrder(OrderSource, false, OrderEntries, Delegate); }

	/**
	* @brief Creates an order for the player, used for purchasing and other loot related actions.
	* @param [in] OrderSource Where the order is being created from.
	* @param [in] IsTransaction If true, all orders must succeed for any to be completed.
	* @param [in] OrderEntries Array of orders being requested.
	* @param [in] Delegate Callback delegate for the completion of the order request.
	*/
	void CreateNewPlayerOrder(ERHAPI_Source OrderSource, bool IsTransaction, const TArray<URH_PlayerOrderEntry*>& OrderEntries, const FRH_OrderResultBlock& Delegate = FRH_OrderResultBlock());
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Create New Player Order", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_CreateNewPlayerOrder2(ERHAPI_Source OrderSource, bool IsTransaction, const TArray<URH_PlayerOrderEntry*>& OrderEntries, const FRH_OrderResultDynamicDelegate& Delegate) { CreateNewPlayerOrder(OrderSource, IsTransaction, OrderEntries, Delegate); }

	/**
	* @brief Creates an order for the player that redeems a promotion code.
	* @param [in] PromoCode The Promo Code being redeemed.
	* @param [in] Delegate Callback delegate for the completion of the promo code redemption.
	*/
	void RedeemPromoCode(const FString& PromoCode, const FRH_PromoCodeResultBlock& Delegate = FRH_PromoCodeResultBlock());
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Redeem Promo Code", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_RedeemPromoCode(const FString& PromoCode, const FRH_PromoCodeResultDynamicDelegate& Delegate) { RedeemPromoCode(PromoCode, Delegate); }

	/**
	* @brief Sets a watch to start polling for orders for the player.
	* @param [in] Delegate Callback delegate whenever the player has any orders.
	*/
	void SetOrderWatch(const FRH_OrderDetailsBlock& Delegate);
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Set Order Watch", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_SetOrderWatch(const FRH_OrderDetailsDynamicDelegate& Delegate) { SetOrderWatch(Delegate); }

	/**
	* @brief Clears a watch for the player.
	*/
	void ClearOrderWatch(const FRH_OrderDetailsBlock& Delegate);
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Clear Order Watch", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_ClearOrderWatch(const FRH_OrderDetailsDynamicDelegate& Delegate) { ClearOrderWatch(Delegate); }

	/**
	* @brief Adds pending order monitoring for each processed entitlement.
	* @param [in] Entitlements Array of processed entitlements that need monitoring.
	* @param [in] Delegate Callback delegate when the inventory update completes.
	*/
	void AddPendingOrdersFromEntitlementsArray(const TArray<FRHAPI_PlatformEntitlement>& Entitlements, const FRH_OrderDetailsBlock& Delegate);
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Add Pending Orders From Entitlements Array", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_AddPendingOrdersFromEntitlementsArray(TArray<FRHAPI_PlatformEntitlement>& Entitlements, const FRH_OrderDetailsDynamicDelegate& Delegate) { AddPendingOrdersFromEntitlementsArray(Entitlements, Delegate); }

	/**
	* @brief Adds pending order monitoring for each processed entitlement.
	* @param [in] EntitlementResult Result from entitlement processing that needs monitoring.
	* @param [in] Delegate Callback delegate when the inventory update completes.
	*/
	void AddPendingOrdersFromEntitlementResult(const FRHAPI_PlatformEntitlementProcessResult& EntitlementResult, const FRH_OrderDetailsBlock& Delegate);
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Add Pending Orders From Entitlement Result", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_AddPendingOrdersFromEntitlementResult(const FRHAPI_PlatformEntitlementProcessResult& EntitlementResult, const FRH_OrderDetailsDynamicDelegate& Delegate) { AddPendingOrdersFromEntitlementResult(EntitlementResult, Delegate); }

	/**
	* @brief Used to pulse polling of watches and pending purchases.
	*/
	void CheckPollStatus();

	/**
	* @brief Requests direct inventory creation to the players inventory.
	* @param [in] ClientOrderReferenceId Client specified ref id for an inventory change.
	* @param [in] CreateInventories Array of items to be created in the players inventory.
	* @param [in] Source Where the order is being created from.
	* @param [in] Delegate Callback delegate when the inventory creation completes.
	*/
	void CreateInventory(const TOptional<FGuid>& ClientOrderReferenceId, const TArray<FRH_CreateInventory>& CreateInventories, const ERHAPI_Source Source = ERHAPI_Source::Client,
		const FRH_OnInventoryUpdateDelegateBlock& Delegate = FRH_OnInventoryUpdateDelegate());
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Create Inventory", AutoCreateRefTerm = "ClientOrderReferenceId,CreateInventories,Source,Delegate"))
	void BLUEPRINT_CreateInventory(const FGuid& ClientOrderReferenceId, const TArray<FRH_CreateInventory>& CreateInventories, const FRH_OnInventoryUpdateDynamicDelegate& Delegate, const ERHAPI_Source Source = ERHAPI_Source::Client)
	{
		return CreateInventory(ClientOrderReferenceId, CreateInventories, Source, Delegate);
	};

	/**
	* @brief Requests direct inventory creation to the players inventory.
	* @param [in] CreateInventories Array of items to be created in the players inventory.
	* @param [in] Source Where the order is being created from.
	* @param [in] Delegate Callback delegate when the inventory creation completes.
	*/
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Create Inventory Without Client Order Ref Id", AutoCreateRefTerm = "CreateInventories,Source,Delegate"))
	void BLUEPRINT_CreateInventoryWithoutClientOrderRefId(const TArray<FRH_CreateInventory>& CreateInventories, const FRH_OnInventoryUpdateDynamicDelegate& Delegate, const ERHAPI_Source Source = ERHAPI_Source::Client)
	{
		return CreateInventory({}, CreateInventories, Source, Delegate);
	};

	/**
	* @brief Requests direct inventory modifications to the players inventory.
	* @param [in] ClientOrderReferenceId Client specified ref id for an inventory change.
	* @param [in] UpdateInventories Array of items to be created in the players inventory.
	* @param [in] Source Where the order is being created from.
	* @param [in] Delegate Callback delegate when the inventory modification completes.
	*/
	void UpdateInventory(const TOptional<FGuid>& ClientOrderReferenceId, const TArray<FRH_UpdateInventory>& UpdateInventories, const ERHAPI_Source Source = ERHAPI_Source::Client,
		const FRH_OnInventoryUpdateDelegateBlock& Delegate = FRH_OnInventoryUpdateDelegate());
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Update Inventory", AutoCreateRefTerm = "ClientOrderReferenceId,UpdateInventories,Source,Delegate"))
	void BLUEPRINT_UpdateInventory(const FGuid& ClientOrderReferenceId, const TArray<FRH_UpdateInventory>& UpdateInventories, const FRH_OnInventoryUpdateDynamicDelegate& Delegate, const ERHAPI_Source Source = ERHAPI_Source::Client)
	{
		return UpdateInventory(ClientOrderReferenceId, UpdateInventories, Source, Delegate);
	};

	/**
	* @brief Requests direct inventory modifications to the players inventory.
	* @param [in] UpdateInventories Array of items to be created in the players inventory.
	* @param [in] Source Where the order is being created from.
	* @param [in] Delegate Callback delegate when the inventory modification completes.
	*/
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Update Inventory Without Client Order Ref Id", AutoCreateRefTerm = "UpdateInventories,Source,Delegate"))
	void BLUEPRINT_UpdateInventoryWithoutClientOrderRefId(const TArray<FRH_UpdateInventory>& UpdateInventories, const FRH_OnInventoryUpdateDynamicDelegate& Delegate, const ERHAPI_Source Source = ERHAPI_Source::Client)
	{
		return UpdateInventory({}, UpdateInventories, Source, Delegate);
	};

	/**
	* @brief Used by the PendingOrder to clear itself from the pending order list when it completes.
	* @param [in] OrderResult The pending order result to clear.
	*/
	void ClearPendingOrder(const FRHAPI_PlayerOrder& OrderResult);

	/**
	* @brief Parses a player order result API into a URH_PlayerOrderEntry.
	* @param [in] Content The PlayerOrder data to parse.
	*/
	void ParseOrderResult(const FRHAPI_PlayerOrder& Content);

	/**
	* @brief Delegate to listen to changes to the players cached inventory.
	*/
	FRH_InventoryUpdatedDelegate OnInventoryCacheUpdated;
	UPROPERTY(BlueprintReadWrite, BlueprintAssignable, Category = "Inventory Subsystem", meta = (DisplayName = "Bind On Inventory Cache Updated"))
	FRH_InventoryUpdatedDynamicDelegate OnInventoryCacheUpdatedBP;

protected:
	/** @brief Inventory cache map of Item Id to inventory records. */
	TMap<int32, TArray<FRH_ItemInventory>> InventoryCache;
	/** @brief Array of inventory orders that have recently been parsed to prevent double parsing orders through normal polling. */
	TArray<FString> ParsedInventoryOrders;
	/** @brief Poller for inventory updates. */
	FRH_AutoPollerPtr InventoryPoller;
	/** @brief Polled for pending inventory. */
	FRH_AutoPollerPtr PendingInventoryPoller;
	/** @brief Array of order results. */
	UPROPERTY(Transient)
	TArray<FRHAPI_PlayerOrder> CachedOrderResults;
	/** @brief Tracking for orders that come in for the player. */
	UPROPERTY(Transient)
	URH_PlayerOrderWatch* OrderWatch;
	/** @brief Array of orders that have been requested that have not been returned yet. */
	UPROPERTY(Transient)
	TArray<URH_PendingOrder*> PendingOrders;
	/** @brief The active inventory session. */
	UPROPERTY()
	FRH_InventorySession InventorySession;
	/** @brief The Player Info associated with this Inventory. */
	UPROPERTY(Transient)
	URH_PlayerInfo* PlayerInfo;
	/** @brief Tracking of Inventory Notifications. */
	UPROPERTY(transient)
	bool bReceivedInventoryNotification;
	/** @brief Tracking of Pending Inventory Notifications. */
	UPROPERTY(transient)
	bool bReceivedPendingInventoryNotification;
	/** @brief Gets if the inventory should be polled due to an active watch. */
	bool ShouldPollInventory() const
	{
		if (OrderWatch != nullptr && OrderWatch->Delegates.Num() > 0)
		{
			bool bDelegatesBound = false;
			for (const auto& Delegate : OrderWatch->Delegates)
			{
				if (Delegate.IsBound())
				{
					bDelegatesBound = true;
					break;
				}
			}
			return bDelegatesBound
		}
		return false;
	}
	/** @brief Gets if pending inventory should be polled due to outstanding orders. */
	bool ShouldPollPendingInventory() const
	{
		return PendingOrders.Num() > 0;
	}
	/**
	 * @brief Handles an incoming notification, checks if it is an invnetory notification, then operates if need be.
	 * @param Notification The notification to handle.
	 * @param APIName The name of the API that sent the notification.
	 * @param APIParams The parameters of the API that sent the notification.
	 */
	void HandleNotification(const FRHAPI_Notification& Notification, const FString& APIName, const TArray<FString>& APIParams);
	/**
	 * @brief Start a poll for inventory updates.
	 * @param Delegate Callback delegate for the polling.
	 */
	void PollInventory(const FRH_PollCompleteFunc& Delegate);
	/**
	 * @brief Start a poll for pending inventory updates.
	 * @param Delegate Callback delegate for the polling.
	 */
	void PollPendingInventory(const FRH_PollCompleteFunc& Delegate);
	/**
	 * @brief Helper function to broadcast inventory changes.
	 * @param ItemIds The item ids that have been updated.
	 */
	void BroadcastOnInventoryCacheUpdated(const TArray<int32>& ItemIds)
	{
		SCOPED_NAMED_EVENT(RallyHere_BroadcastInventoryCacheUpdated, FColor::Purple);
		OnInventoryCacheUpdated.ExecuteIfBound(ItemIds, PlayerInfo);
		OnInventoryCacheUpdatedBP.Broadcast(ItemIds);
	}
	/** @brief Callback that occurs whenever the local player this subsystem is associated with changes. */
	void OnUserChanged();
	/** @brief Initializes the subsystem with defaults for its cached data. */
	void InitPropertiesWithDefaultValues();
	/**
	 * @brief Adds instance specific data to an Player Order.
	 * @param PlayerOrderCreate The Player order to add the data to.
	 */
	void PopulateInstanceData(FRHAPI_PlayerOrderCreate& PlayerOrderCreate) const;
	/**
	* @brief Handles the response to a Create Player Order call.
	* @param [in] Resp Response given for the call.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	* @param [in] OrderEntries The Order Entries submitted with the create call.
	*/
	void CreatePlayerOrderResponse(const TCreateOrder::Response& Resp, const FRH_OrderResultBlock Delegate, const TArray<URH_PlayerOrderEntry*> OrderEntries);
	/**
	* @brief Handles the response to a Redeem Promo Code call.
	* @param [in] Resp Response given for the call.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	* @param [in] PromoCode The Code that was submitted to redeem.
	*/
	void RedeemPromoCodeResponse(const TCreateOrder::Response& Resp, const FRH_PromoCodeResultBlock Delegate, const FString PromoCode);
	/**
	* @brief Handles the response to a Create Inventory Session call.
	* @param [in] Resp Response given for the call.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	*/
	void HandleCreateInventorySession(const RallyHereAPI::FResponse_CreateNewInventorySessionByPlayerUuid& Response, const FRH_OnInventorySessionUpdateDelegateBlock Delegate);
	/**
	* @brief Handles the response to a Get Inventory Session call.
	* @param [in] Resp Response given for the call.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	*/
	void HandleGetInventorySession(const RallyHereAPI::FResponse_GetInventorySessionInfoByPlayerUuid& Response, const FRH_OnInventorySessionUpdateDelegateBlock Delegate);
	/**
	* @brief Handles the response to a Get Inventory call.
	* @param [in] Resp Response given for the call.
	* @param [in] ItemIds The Items Ids that inventory was requested of.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	*/
	void HandleGetInventory(const RallyHereAPI::FResponse_GetPlayerInventoryUuid& Response, const TArray<int32> ItemIds, const FRH_OnInventoryUpdateDelegateBlock Delegate);
	/**
	* @brief Handles the response to a Create Inventory call.
	* @param [in] Resp Response given for the call.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	*/
	void HandleCreateInventory(const RallyHereAPI::FResponse_CreatePlayerInventoryUuid& Response, const FRH_OnInventoryUpdateDelegateBlock Delegate);
	/**
	* @brief Handles the response to a Update Inventory call.
	* @param [in] Resp Response given for the call.
	* @param [in] Delegate Delegate passed in for original call to respond to when call completes.
	*/
	void HandleUpdateInventory(const RallyHereAPI::FResponse_ModifyManyPlayerInventoryUuid& Response, const FRH_OnInventoryUpdateDelegateBlock Delegate);
	/**
	 * @brief Converts the class of Order Entries to the struct used by the API system for calls.
	 * @param [out] Entries Struct based Order entries for submission.
	 * @param [in] OrderEntries Class based Order entries for conversion.
	 */
	void WriteOrderEntries(TArray<FRHAPI_PlayerOrderEntryCreate>& Entries, const TArray<URH_PlayerOrderEntry*>& OrderEntries);
	/**
	 * @brief Updates the cached inventory with data from an incoming order.
	 * @param OrderDetails The details of the incoming order.
	 */
	void UpdateInventoryFromOrderDetails(const TArray<FRHAPI_PlayerOrderDetail>& OrderDetails);
	/**
	 * @brief Internal helper function to complete Get Inventory Count.
	 * @param Item The Item to get the count of.
	 * @param Delegate Callback delegate to send the count to.
	 */
	void GetInventoryCount_INTERNAL(URH_CatalogItem* Item, const FRH_GetInventoryCountBlock& Delegate) const;
	/**
	 * @brief Internal helper function to complete Is Inventory Item Owned.
	 * @param Item The Item to get the ownership of.
	 * @param Delegate Callback delegate to send the ownership status to.
	 */
	void IsInventoryItemOwned_INTERNAL(URH_CatalogItem* Item, const FRH_GetInventoryStateBlock& Delegate) const;
	/**
	 * @brief Internal helper function to complete Is Inventory Item Rented.
	 * @param Item The Item to get the rental status of.
	 * @param Delegate Callback delegate to send the rental status to.
	 */
	void IsInventoryItemRented_INTERNAL(URH_CatalogItem* Item, const FRH_GetInventoryStateBlock& Delegate) const;
	/**
	 * @brief Helper function to get Game Instance Subsystem.
	 */
	URH_GameInstanceSubsystem* GetGameInstanceSubsystem() const;
	/**
	 * @brief Helper function to get Catalog Subsystem.
	 */
	URH_CatalogSubsystem* GetCatalogSubsystem() const;
};

/**
* @brief Inventory Blueprint Library with helper methods for inventory item struct.
*/
UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_InventoryBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	/**
	* @brief Checks if the inventory item has an expiration.
	* @param [in] ItemInventory The item inventory to check.
	* @return If true, the item has an expiritation.
	*/
	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem", meta = (DisplayName = "Check If Inventory Expires", AutoCreateRefTerm = "ItemInventory"))
	static bool CheckIfInventoryExpires(const FRH_ItemInventory& ItemInventory);
	/**
	* @brief Gets the inventory item expiration.
	* @param [in] ItemInventory The item inventory to get the expiration of.
	* @param [out] DateTimeOut The expiration date time.
	* @return If true, the item has an expiritation to return.
	*/
	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem", meta = (DisplayName = "Get Inventory Expiration", AutoCreateRefTerm = "ItemInventory,DateTimeOut"))
	static bool GetInventoryExpiration(const FRH_ItemInventory& ItemInventory, FDateTime& DateTimeOut);
	/**
	* @brief Adds custom data onto an inventory item.
	* @param [in] ItemInventory The item inventory to get the expiration of.
	* @param [in] Key The key for the custom data.
	* @param [in] Value The value for the custom data.
	*/
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Add Custom Data To Item Inventory", AutoCreateRefTerm = "ItemInventory,Key,Value"))
	static void AddCustomDataToItemInventory(FRH_ItemInventory& ItemInventory, const FString& Key, const FString& Value);
	/**
	* @brief Removes custom data on an inventory item.
	* @param [in] ItemInventory The item inventory to get the expiration of.
	* @param [in] Key The key for the custom data.
	*/
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Remove Custom Data From Item Inventory", AutoCreateRefTerm = "ItemInventory,Key"))
	static void RemoveCustomDataFromItemInventory(FRH_ItemInventory& ItemInventory, const FString& Key);
	/**
	* @brief Gets custom data onto an inventory item.
	* @param [in] ItemInventory The item inventory to get the expiration of.
	* @param [in] Key The key for the custom data.
	* @return The value for the custom data.
	*/
	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem", meta = (DisplayName = "Get Custom Data On Item Inventory", AutoCreateRefTerm = "ItemInventory,Key"))
	static FString FindCustomDataOnItemInventory(const FRH_ItemInventory& ItemInventory, const FString& Key);
	/**
	* @brief Initializes a Create Inventory struct with an item inventory.
	* @param [in] CreateInventory The create inventory struct to initilize.
	* @param [in] ItemInventory The item inventory to use for initilization.
	* @return If true, the struct was intialized with the data.
	*/
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "InitCreateInventoryWithItemInventoryValuesy", AutoCreateRefTerm = "CreateInventory,ItemInventory"))
	static bool InitCreateInventoryWithItemInventoryValues(FRH_CreateInventory CreateInventory, const FRH_ItemInventory& ItemInventory);
	/**
	* @brief Initializes a Update Inventory struct with an item inventory.
	* @param [in] UpdateInventory The update inventory struct to initilize.
	* @param [in] ItemInventory The item inventory to use for initilization.
	* @return If true, the struct was intialized with the data.
	*/
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "InitUpdateInventoryWithItemInventoryValuesy", AutoCreateRefTerm = "UpdateInventory,ItemInventory"))
	static bool InitUpdateInventoryWithItemInventoryValues(FRH_UpdateInventory UpdateInventory, const FRH_ItemInventory& ItemInventory);
};

/** @} */