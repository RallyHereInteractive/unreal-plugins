#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RH_Common.h"
#include "RH_CatalogSubsystem.h"
#include "RH_GameInstanceSessionSubsystem.h"
#include "Misc/Optional.h"
#include "RH_Polling.h"

#include "RH_InventorySubsystem.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_OneParam(FRH_OnInventoryUpdateDyanmicDelegate, bool, bSuccess);
DECLARE_DELEGATE_OneParam(FRH_OnInventoryUpdateDelegate, bool);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnInventoryUpdateDelegateBlock, FRH_OnInventoryUpdateDelegate, FRH_OnInventoryUpdateDyanmicDelegate, bool);

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_PromoCodeResultDynamicDelegate, const URH_PlayerInfo*, PlayerInfo, const FString&, PromoCode, URH_PlayerOrderResult*, OrderResult);
DECLARE_DELEGATE_ThreeParams(FRH_PromoCodeResultDelegate, const URH_PlayerInfo*, const FString&, URH_PlayerOrderResult*);
DECLARE_RH_DELEGATE_BLOCK(FRH_PromoCodeResultBlock, FRH_PromoCodeResultDelegate, FRH_PromoCodeResultDynamicDelegate, const URH_PlayerInfo*, const FString&, URH_PlayerOrderResult*)

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OrderResultDynamicDelegate, const URH_PlayerInfo*, PlayerInfo, TArray<URH_PlayerOrderEntry*>, OrderEntries, URH_PlayerOrderResult*, OrderResult);
DECLARE_DELEGATE_ThreeParams(FRH_OrderResultDelegate, const URH_PlayerInfo*, TArray<URH_PlayerOrderEntry*>, URH_PlayerOrderResult*);
DECLARE_RH_DELEGATE_BLOCK(FRH_OrderResultBlock, FRH_OrderResultDelegate, FRH_OrderResultDynamicDelegate, const URH_PlayerInfo*, TArray<URH_PlayerOrderEntry*>, URH_PlayerOrderResult*)

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_OneParam(FRH_OrderDetailsDynamicDelegate, TArray<URH_PlayerOrderResult*>, OrderResults);
DECLARE_DELEGATE_OneParam(FRH_OrderDetailsDelegate, TArray<URH_PlayerOrderResult*>);
DECLARE_RH_DELEGATE_BLOCK(FRH_OrderDetailsBlock, FRH_OrderDetailsDelegate, FRH_OrderDetailsDynamicDelegate, TArray<URH_PlayerOrderResult*>)

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

class URH_PlayerOrderEntry;
class URH_PlayerInfo;

UCLASS(BlueprintType, Within = RH_InventorySubsystem)
class RALLYHEREINTEGRATION_API URH_PendingOrder : public UObject
{
	typedef RallyHereAPI::Traits_GetPlayerUuidOrderById TGetOrderById;

	GENERATED_UCLASS_BODY()

public:

	bool RequestOrders(FRH_GenericSuccessBlock Delegate);
	void RequestOrdersResponse(const TGetOrderById::Response& Resp);

	UPROPERTY(Transient)
	FString OrderId;

	UPROPERTY(Transient)
	FString PromoCode;

	UPROPERTY()
	FDateTime LastPollTime;

	FRH_OrderResultBlock OrderResultDelegate;
	FRH_OnInventoryUpdateDelegateBlock InventoryUpdateDelegate;
	FRH_PromoCodeResultBlock PromoCodeResultsDelegate;

	UPROPERTY(Transient)
	TArray<URH_PlayerOrderEntry*> OrderEntries;

	UPROPERTY(Transient)
	bool bHasActiveOrderRequest;

	URH_InventorySubsystem* GetInventorySubsystem() const;

	void Init(const FString& InOrderId, const TArray<URH_PlayerOrderEntry*>& InOrderEntries, FRH_OrderResultBlock InOrderResultDelegate)
	{
		OrderId = InOrderId;
		OrderEntries.Append(InOrderEntries);
		OrderResultDelegate = InOrderResultDelegate;
	}

	void Init(const FString& InOrderId, const FString& InPromoCode, FRH_PromoCodeResultBlock InPromoCodeDelegate)
	{
		OrderId = InOrderId;
		PromoCode = InPromoCode;
		PromoCodeResultsDelegate = InPromoCodeDelegate;
	}

	void Init(const FString& InOrderId, FRH_OnInventoryUpdateDelegateBlock InInventoryUpdateDelegate)
	{
		OrderId = InOrderId;
		InventoryUpdateDelegate = InInventoryUpdateDelegate;
	}
};

UCLASS(Within = RH_InventorySubsystem)
class RALLYHEREINTEGRATION_API URH_PlayerOrderWatch : public UObject
{
	typedef RallyHereAPI::Traits_GetPlayerUuidOrders TGetOrders;

	GENERATED_BODY()

public:
	bool RequestOrders(FRH_GenericSuccessBlock Delegate);
	void RequestOrdersResponse(const TGetOrders::Response& Resp);

	UPROPERTY()
	FDateTime LastPollTime;

	UPROPERTY()
	FString Cursor;

	TArray<FRH_OrderDetailsBlock> Delegates;

	URH_InventorySubsystem* GetInventorySubsystem() const;
};

UCLASS(BlueprintType)
class RALLYHEREINTEGRATION_API URH_PlayerOrderEntry : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Entry")
	URH_CatalogVendorItem* GetVendorItem() const { return VendorItem; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Entry")
	int32 GetLootId() const { return LootId; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Entry")
	int32 GetQuantity() const { return Quantity; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Entry")
	FString GetExternalTransactionId() const { return ExternalTransactionId; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Entry")
	int32 GetPriceItemId() const { return PriceItemId; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Entry")
	int32 GetPrice() const { return Price; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Entry")
	int32 GetCouponItemId() const { return CouponItemId; }

	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Player Order Entry")
	URH_CatalogVendorItem* VendorItem;

	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Player Order Entry")
	int32 LootId;

	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Player Order Entry")
	int32 Quantity;
	
	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Player Order Entry")
	FString ExternalTransactionId;

	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Player Order Entry")
	int32 PriceItemId;

	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Player Order Entry")
	int32 Price;

	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Player Order Entry")
	int32 CouponItemId;
};

class URH_PlayerOrderResultEntry;

UCLASS(BlueprintType, Within = RH_InventorySubsystem)
class RALLYHEREINTEGRATION_API URH_PlayerOrderResult : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Result")
	ERHAPI_Source GetSource() const { return Source; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Result")
	FGuid GetClientOrderReferenceId() const { return ClientOrderRefId; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Result")
	FString GetOrderId() const { return OrderId; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Result")
	FGuid GetPlayerUuid() const { return PlayerUuid; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Result")
	ERHAPI_InventoryPortal GetPlatformType() const { return PlatformType; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Result")
	FString GetPortalUserId() const { return PortalUserId; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Result")
	FString GetInstanceId() const { return InstanceId; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Result")
	FString GetMatchId() const { return MatchId; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Result")
	FDateTime GetCreatedTime() const { return CreatedTime; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Result")
	TArray<URH_PlayerOrderResultEntry*> GetOrderEntries() const { return OrderEntries; }

	UPROPERTY(Transient)
	ERHAPI_Source Source;

	UPROPERTY(Transient)
	FGuid ClientOrderRefId;

	UPROPERTY(Transient)
	FString OrderId;

	UPROPERTY(Transient)
	FGuid PlayerUuid;

	UPROPERTY(Transient)
	ERHAPI_InventoryPortal PlatformType;

	UPROPERTY(Transient)
	FString PortalUserId;

	UPROPERTY(Transient)
	FString InstanceId;

	UPROPERTY(Transient)
	FString MatchId;

	UPROPERTY(Transient)
	FDateTime CreatedTime;

	UPROPERTY(Transient)
	TArray<URH_PlayerOrderResultEntry*> OrderEntries;
};

UCLASS(BlueprintType, Within = RH_InventorySubsystem)
class RALLYHEREINTEGRATION_API URH_PlayerOrderResultEntry : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Result Entry")
	ERHAPI_PlayerOrderEntryType GetOrderEntryType() const { return OrderEntryType; }
	
	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Result Entry")
	URH_CatalogVendorItem* GetVendorItem() const { return VendorItem; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Result Entry")
	int32 GetLootId() const { return LootId; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Result Entry")
	int32 GetQuantity() const { return Quantity; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Result Entry")
	int32 GetPriceItemId() const { return PriceItemId; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Result Entry")
	int32 GetPrice() const { return Price; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Result Entry")
	int32 GetCouponItemId() const { return CouponItemId; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Result Entry")
	FString GetExternalTransactionId() const { return ExternalTransactionId; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Result Entry")
	FString GetExternalItemSku() const { return ExternalItemSku; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Result Entry")
	int32 GetPlayerPortalEventId() const { return PlayerPortalEventId; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Result Entry")
	FGuid GetInventoryId() const { return InventoryId; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Result Entry")
	int32 GetItemId() const { return ItemId; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Result Entry")
	FDateTime GetExpirationDateTime() const { return Expiration; }
	
	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Result Entry")
	TMap<FString, FString> GetCustomData() const { return CustomData; }

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem | Player Order Result Entry")
	ERHAPI_PlayerOrderEntryResult GetResult() const { return Result; }

	UPROPERTY(Transient)
	ERHAPI_PlayerOrderEntryType OrderEntryType;
	
	UPROPERTY(Transient)
	URH_CatalogVendorItem* VendorItem;

	UPROPERTY(Transient)
	int32 LootId;

	UPROPERTY(Transient)
	int32 Quantity;
	
	UPROPERTY(Transient)
	int32 PriceItemId;

	UPROPERTY(Transient)
	int32 Price;

	UPROPERTY(Transient)
	int32 CouponItemId;

	UPROPERTY(Transient)
	FString ExternalTransactionId;

	UPROPERTY(Transient)
	FString ExternalItemSku;

	UPROPERTY(Transient)
	int32 PlayerPortalEventId;

	UPROPERTY(Transient)
	FGuid InventoryId;

	UPROPERTY(Transient)
	int32 ItemId;

	UPROPERTY(Transient)
	FDateTime Expiration;

	UPROPERTY(Transient)
	TMap<FString, FString> CustomData;

	UPROPERTY(Transient)
	ERHAPI_PlayerOrderEntryResult Result;
};


USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_InventorySession 
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "Inventory Subsystem | Inventory Session")
	FString SessionId;

	UPROPERTY(BlueprintReadOnly, Category = "Inventory Subsystem | Inventory Session")
	ERHAPI_Platform SessionPlatform;

	UPROPERTY(BlueprintReadOnly, Category = "Inventory Subsystem | Inventory Session")
	FString OrderId;

	UPROPERTY(BlueprintReadOnly, Category = "Inventory Subsystem | Inventory Session")
	TArray<int32> AppliedDurableLoot;

	FRH_InventorySession() :
		SessionId(TEXT("")),
		SessionPlatform(ERHAPI_Platform::Anon), // #RHTODO: Do we need a none option in this enum
		OrderId(TEXT(""))
	{

	}
};

USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_ItemInventory
{
	GENERATED_BODY()

	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Item Inventory")
	FGuid InventoryId;

	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Item Inventory")
	ERHAPI_InventoryType InventoryType;

	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Item Inventory")
	int32 ItemId;

	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Item Inventory")
	int32 Count;

	TOptional<FDateTime> Expires;

	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Item Inventory")
	FDateTime Acquired;

	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Item Inventory")
	TMap<FString, FString> CustomData;

	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Item Inventory")
	ERHAPI_InventoryBucket Bucket;

	FRH_ItemInventory() :
		InventoryId(FGuid()),
		InventoryType(ERHAPI_InventoryType::Persistent),
		ItemId(0),
		Count(0),
		Acquired(FDateTime::MinValue()),
		Bucket(ERHAPI_InventoryBucket::None)
	{
		CustomData.Empty();
	}

	void AddCustomData(const FString& Key, const FString& Value)
	{
		CustomData.Emplace(Key, Value);
	}

	int32 RemoveCustomData(const FString& Key)
	{
		return CustomData.Remove(Key);
	}

	FString FindCustomDataWithKey(const FString& Key)
	{
		return CustomData.FindRef(Key);
	}
	
	void Init(const int32 ItemIdOfInventory, const FRHAPI_InventoryRecord& Inventory)
	{
		InventoryId = Inventory.InventoryId;
		InventoryType = Inventory.Type;
		ItemId = ItemIdOfInventory;
		Count = Inventory.Count;
		if (Inventory.Expires_IsSet)
		{
			Expires = Inventory.Expires_Optional;
		}
		Acquired = Inventory.Acquired;
		CustomData = {};
		if (Inventory.CustomData_IsSet)
		{
			CustomData = Inventory.CustomData_Optional;
		}
		
		if (Inventory.Bucket_IsSet)
		{
			Bucket = Inventory.Bucket_Optional;
		}
		else
		{
			Bucket = ERHAPI_InventoryBucket::None;
		}
	}

	bool operator==(const FRH_ItemInventory& Other) const
	{
		return InventoryId == Other.InventoryId;
	}
};

USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_BaseInventoryOperation
{
	GENERATED_BODY()

	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Inventory Operation")
	int32 Count;
	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Inventory Operation")
	int32 ItemId;
	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Inventory Operation")
	TMap<FString, FString> CustomData;
	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Inventory Operation")
	ERHAPI_InventoryBucket Bucket;
	
	TOptional<FDateTime> Expires;
	
	UPROPERTY(Transient, EditDefaultsOnly, Category = "Inventory Subsystem | Inventory Operation")
	bool InventoryShouldExpire;

	FRH_BaseInventoryOperation() :
		Count(0),
		ItemId(0),
		Bucket(ERHAPI_InventoryBucket::None),
		InventoryShouldExpire(false)
	{
		CustomData.Empty();
	}

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

USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_CreateInventory: public FRH_BaseInventoryOperation
{
	GENERATED_BODY()
	
	int32 Count = 1;
	ERHAPI_CreateInventoryType InventoryType = ERHAPI_CreateInventoryType::Persistent;

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

USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_UpdateInventory: public FRH_BaseInventoryOperation
{
	GENERATED_BODY()
	
	FGuid InventoryId;
	int32 Count = 0;

	bool InitFromItemInventory(const FRH_ItemInventory& ItemInventory)
	{
		Super::InitFromItemInventory(ItemInventory);
		InventoryId = ItemInventory.InventoryId;
		return true;
	}
};


UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_OneParam(FRH_OnInventorySessionUpdateDyanmicDelegate, bool, bSuccess);
DECLARE_DELEGATE_OneParam(FRH_OnInventorySessionUpdateDelegate, bool);
DECLARE_RH_DELEGATE_BLOCK(FRH_OnInventorySessionUpdateDelegateBlock, FRH_OnInventorySessionUpdateDelegate, FRH_OnInventorySessionUpdateDyanmicDelegate, bool);

UCLASS(Config = RallyHereIntegration, DefaultConfig)
class RALLYHEREINTEGRATION_API URH_InventorySubsystem : public UObject
{
	GENERATED_BODY()
public:
	typedef RallyHereAPI::Traits_CreateNewPlayerUuidOrder TCreateOrder;

	void Initialize();
	void Deinitialize();

	void SetPlayerInfo(URH_PlayerInfo* InPlayerInfo) { PlayerInfo = InPlayerInfo; }

	URH_PlayerInfo* GetPlayerInfo() const { return PlayerInfo; }
	FGuid GetRHPlayerUuid() const;

	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Get Inventory Count", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetInventoryCount(int32 ItemId, const FRH_GetInventoryCountDynamicDelegate& Delegate) { GetInventoryCount(ItemId, Delegate); }
	void GetInventoryCount(int32 ItemId, const FRH_GetInventoryCountBlock& Delegate = FRH_GetInventoryCountBlock());

	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Is Inventory Item Owned", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_IsInventoryItemOwned(int32 ItemId, const FRH_GetInventoryStateDynamicDelegate& Delegate) { IsInventoryItemOwned(ItemId, Delegate); }
	void IsInventoryItemOwned(int32 ItemId, const FRH_GetInventoryStateBlock& Delegate = FRH_GetInventoryStateBlock());

	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Is Inventory Item Rented", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_IsInventoryItemRented(int32 ItemId, const FRH_GetInventoryStateDynamicDelegate& Delegate) { IsInventoryItemRented(ItemId, Delegate); }
	void IsInventoryItemRented(int32 ItemId, const FRH_GetInventoryStateBlock& Delegate = FRH_GetInventoryStateBlock());

	UFUNCTION(BlueprintGetter, Category = "Inventory Subsystem")
	FRH_InventorySession GetCachedInventorySession() const { return InventorySession; }

	UFUNCTION(BlueprintGetter, Category = "Inventory Subsystem")
	TArray<FRH_ItemInventory> GetAllCachedInventory() const;
	
	UFUNCTION(BlueprintGetter, Category = "Inventory Subsystem")
	TArray<FRH_ItemInventory> GetCachedInventoryForItem(const int32 ItemId) const;
	
	UFUNCTION(BlueprintGetter, Category = "Inventory Subsystem")
	TArray<FRH_ItemInventory> GetCachedInventoryForItems(const TArray<int32>& ItemIds) const;
	
	UFUNCTION(BlueprintGetter, Category = "Inventory Subsystem")
	TArray<FRH_ItemInventory> GetCachedInventoryForType(const ERHAPI_InventoryType& Type) const;
	
	UFUNCTION(BlueprintGetter, Category = "Inventory Subsystem")
	TArray<FRH_ItemInventory> GetCachedInventoryForItemsAndTypes(const TArray<int32>& ItemIds, const TArray<ERHAPI_InventoryType>& Types) const;
	
	UFUNCTION(BlueprintGetter, Category = "Inventory Subsystem")
	bool GetCachedInventoryForInventoryId(const FGuid& InventoryId, FRH_ItemInventory& Out) const;

	UFUNCTION(BlueprintGetter, Category = "Inventory Subsystem")
	TArray<URH_PlayerOrderResult*> GetOrderResults() const { return CachedOrderResults; }

	void ClearCachedInventory() { InventoryCache.Empty(); };

	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Get Inventory Session", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetInventorySession(const FRH_OnInventorySessionUpdateDyanmicDelegate& Delegate) { return GetInventorySession(Delegate); };
	void GetInventorySession(const FRH_OnInventorySessionUpdateDelegateBlock& Delegate = FRH_OnInventorySessionUpdateDelegate());
	
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Create Inventory Session", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_CreateInventorySession(const FRH_OnInventorySessionUpdateDyanmicDelegate& Delegate) { return CreateInventorySession({}, Delegate); };
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Create Inventory Session For Platform", AutoCreateRefTerm = "PlatformName,Delegate"))
	void BLUEPRINT_CreateInventorySessionForPlatform(const ERHAPI_Platform Platform, const FRH_OnInventorySessionUpdateDyanmicDelegate& Delegate) { return CreateInventorySession(Platform, Delegate); };
	void CreateInventorySession(const TOptional<ERHAPI_Platform> Platform, const FRH_OnInventorySessionUpdateDelegateBlock& Delegate = FRH_OnInventorySessionUpdateDelegate());	

	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Get Inventory", AutoCreateRefTerm = "ItemIds,Delegate"))
	void BLUEPRINT_GetInventory(TArray<int32> ItemIds, const FRH_OnInventoryUpdateDyanmicDelegate& Delegate) { return GetInventory(ItemIds, Delegate); };
	void GetInventory(TArray<int32> ItemIds = TArray<int32>(), const FRH_OnInventoryUpdateDelegateBlock& Delegate = FRH_OnInventoryUpdateDelegate());

	//UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Create Player Order", AutoCreateRefTerm = "Delegate"))
	//void BLUEPRINT_CreatePlayerOrder(TSharedPtr<RallyHereAPI::FAuthContext> AuthContext, ERHAPI_PlayerOrderEntryType FillType, ERHAPI_Source OrderSource, TArray<URH_PlayerOrderEntry*> OrderEntries, const FRH_OrderResultDynamicDelegate& Delegate) { CreatePlayerOrder(AuthContext, FillType, OrderSource, OrderEntries, Delegate); }
	void CreatePlayerOrder(TSharedPtr<RallyHereAPI::FAuthContext> AuthContext, ERHAPI_PlayerOrderEntryType FillType, ERHAPI_Source OrderSource, TArray<URH_PlayerOrderEntry*> OrderEntries, FRH_OrderResultBlock Delegate = FRH_OrderResultBlock());
	void CreatePlayerOrderResponse(const TCreateOrder::Response& Resp, FRH_OrderResultBlock Delegate, TArray<URH_PlayerOrderEntry*> OrderEntries);

	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Redeem Promo Code", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_RedeemPromoCode(const FString& PromoCode, const FRH_PromoCodeResultDynamicDelegate& Delegate) { RedeemPromoCode(PromoCode, Delegate); }
	void RedeemPromoCode(const FString& PromoCode, FRH_PromoCodeResultBlock Delegate = FRH_PromoCodeResultBlock());
	void RedeemPromoCodeResponse(const TCreateOrder::Response& Resp, FRH_PromoCodeResultBlock Delegate, FString PromoCode);

	void ClearOrderCache() { CachedOrderResults.Empty(); }

	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Set Order Watch", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_SetOrderWatch(const FRH_OrderDetailsDynamicDelegate& Delegate) { SetOrderWatch(Delegate); }
	void SetOrderWatch(FRH_OrderDetailsBlock Delegate);

	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Clear Order Watch", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_ClearOrderWatch(const FRH_OrderDetailsDynamicDelegate& Delegate) { ClearOrderWatch(Delegate); }
	void ClearOrderWatch(FRH_OrderDetailsBlock Delegate);

	void ClearPendingOrder(URH_PlayerOrderResult* OrderResult);
	URH_PlayerOrderResult* ParseOrderResult(const FRHAPI_PlayerOrder& Content);

	void CheckPollStatus();

	FAuthContextPtr GetAuthContext() const;

	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Create Inventory", AutoCreateRefTerm = "ClientOrderReferenceId,CreateInventories,Source,Delegate"))
	void BLUEPRINT_CreateInventory(const FGuid ClientOrderReferenceId, const TArray<FRH_CreateInventory>& CreateInventories, const FRH_OnInventoryUpdateDyanmicDelegate& Delegate, const ERHAPI_Source Source = ERHAPI_Source::Client)
	{
		return CreateInventory(ClientOrderReferenceId, CreateInventories, Source, Delegate);
	};
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Create Inventory Without Client Order Ref Id", AutoCreateRefTerm = "CreateInventories,Source,Delegate"))
	void BLUEPRINT_CreateInventoryWithoutClientOrderRefId(const TArray<FRH_CreateInventory>& CreateInventories, const FRH_OnInventoryUpdateDyanmicDelegate& Delegate, const ERHAPI_Source Source = ERHAPI_Source::Client)
	{
		return CreateInventory({}, CreateInventories, Source, Delegate);
	};
	void CreateInventory(const TOptional<FGuid> ClientOrderReferenceId, const TArray<FRH_CreateInventory>& CreateInventories, const ERHAPI_Source Source = ERHAPI_Source::Client, 
		const FRH_OnInventoryUpdateDelegateBlock& Delegate = FRH_OnInventoryUpdateDelegate());

	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Update Inventory", AutoCreateRefTerm = "ClientOrderReferenceId,UpdateInventories,Source,Delegate"))
	void BLUEPRINT_UpdateInventory(const FGuid ClientOrderReferenceId, const TArray<FRH_UpdateInventory>& UpdateInventories, const FRH_OnInventoryUpdateDyanmicDelegate& Delegate, const ERHAPI_Source Source = ERHAPI_Source::Client)
	{
		return UpdateInventory(ClientOrderReferenceId, UpdateInventories, Source, Delegate);
	};
	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Update Inventory Without Client Order Ref Id", AutoCreateRefTerm = "UpdateInventories,Source,Delegate"))
	void BLUEPRINT_UpdateInventoryWithoutClientOrderRefId(const TArray<FRH_UpdateInventory>& UpdateInventories, const FRH_OnInventoryUpdateDyanmicDelegate& Delegate, const ERHAPI_Source Source = ERHAPI_Source::Client)
	{
		return UpdateInventory({}, UpdateInventories, Source, Delegate);
	};
	void UpdateInventory(const TOptional<FGuid> ClientOrderReferenceId, const TArray<FRH_UpdateInventory>& UpdateInventories, const ERHAPI_Source Source = ERHAPI_Source::Client,
		const FRH_OnInventoryUpdateDelegateBlock& Delegate = FRH_OnInventoryUpdateDelegate());
	
	UPROPERTY(BlueprintAssignable, Category = "Inventory Subsystem", meta = (DisplayName = "Bind On Inventory Cache Updated"))
	FRH_InventoryUpdatedDynamicDelegate OnInventoryCacheUpdatedBP;
	FRH_InventoryUpdatedDelegate OnInventoryCacheUpdated;

private:
	TMap<int32, TArray<FRH_ItemInventory>> InventoryCache;

	FRH_AutoPollerPtr InventoryPoller;
	FRH_AutoPollerPtr PendingInventoryPoller;

	UPROPERTY(Transient)
	TArray<URH_PlayerOrderResult*> CachedOrderResults;

	UPROPERTY(Transient)
	URH_PlayerOrderWatch* OrderWatch;

	UPROPERTY(Transient)
	TArray<URH_PendingOrder*> PendingOrders;

	UPROPERTY()
	FRH_InventorySession InventorySession;

	UPROPERTY(Transient)
	URH_PlayerInfo* PlayerInfo;

	bool ShouldPollInventory() const
	{
		return OrderWatch != nullptr && OrderWatch->Delegates.Num() > 0;
	}
	bool ShouldPollPendingInventory() const
	{
		return PendingOrders.Num() > 0;
	}

	void PollInventory(const FRH_PollCompleteFunc& Delegate);
	void PollPendingInventory(const FRH_PollCompleteFunc& Delegate);
	
	void BroadcastOnInventoryCacheUpdated(TArray<int32> ItemIds) 
	{
		OnInventoryCacheUpdated.ExecuteIfBound(ItemIds, PlayerInfo);
		OnInventoryCacheUpdatedBP.Broadcast(ItemIds);
	}

	void OnUserChanged();
	
	void InitPropertiesWithDefaultValues();
	
	void HandleCreateInventorySession(const RallyHereAPI::FResponse_CreateNewInventorySessionByPlayerUuid& Response, FRH_OnInventorySessionUpdateDelegateBlock Delegate);
	void HandleGetInventorySession(const RallyHereAPI::FResponse_GetInventorySessionInfoByPlayerUuid& Response, FRH_OnInventorySessionUpdateDelegateBlock Delegate);
	
	void HandleGetInventory(const RallyHereAPI::FResponse_GetPlayerInventoryUuid& Response, const TArray<int32> ItemIds, FRH_OnInventoryUpdateDelegateBlock Delegate);
	void HandleCreateInventory(const RallyHereAPI::FResponse_CreatePlayerInventoryUuid& Response, FRH_OnInventoryUpdateDelegateBlock Delegate);
	void HandleUpdateInventory(const RallyHereAPI::FResponse_ModifyManyPlayerInventoryUuid& Response, FRH_OnInventoryUpdateDelegateBlock Delegate);

	void WriteOrderEntries(TArray<FRHAPI_PlayerOrderEntryCreate>& Entries, TArray<URH_PlayerOrderEntry*> OrderEntries, ERHAPI_PlayerOrderEntryType FillType);
	void UpdateInventoryFromOrderDetails(const TArray<FRHAPI_PlayerOrderDetail>& OrderDetails);

	void GetInventoryCount_INTERNAL(URH_CatalogItem* Item, const FRH_GetInventoryCountBlock& Delegate);
	void IsInventoryItemOwned_INTERNAL(URH_CatalogItem* Item, const FRH_GetInventoryStateBlock& Delegate);
	void IsInventoryItemRented_INTERNAL(URH_CatalogItem* Item, const FRH_GetInventoryStateBlock& Delegate);

	URH_CatalogSubsystem* GetCatalogSubsystem();
};

UCLASS(Config = RallyHereIntegration, DefaultConfig)
class URH_InventoryBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem", meta = (DisplayName = "Check If Inventory Expires", AutoCreateRefTerm = "ItemInventory"))
	static bool CheckIfInventoryExpires(const FRH_ItemInventory& ItemInventory);
	
	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem", meta = (DisplayName = "Get Inventory Expiration", AutoCreateRefTerm = "ItemInventory,DateTimeOut"))
	static bool GetInventoryExpiration(const FRH_ItemInventory& ItemInventory, FDateTime& DateTimeOut);

	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Add Custom Data To Item Inventory", AutoCreateRefTerm = "ItemInventory,Key,Value"))
	static void AddCustomDataToItemInventory(FRH_ItemInventory& ItemInventory, const FString& Key, const FString& Value);

	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "Remove Custom Data From Item Inventory", AutoCreateRefTerm = "ItemInventory,Key"))
	static void RemoveCustomDataFromItemInventory(FRH_ItemInventory& ItemInventory, const FString& Key);

	UFUNCTION(BlueprintPure, Category = "Inventory Subsystem", meta = (DisplayName = "Get Custom Data On Item Inventory", AutoCreateRefTerm = "ItemInventory,Key"))
	static FString FindCustomDataOnItemInventory(FRH_ItemInventory& ItemInventory, const FString& Key);

	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "InitCreateInventoryWithItemInventoryValuesy", AutoCreateRefTerm = "CreateInventory,ItemInventory"))
	static bool InitCreateInventoryWithItemInventoryValues(FRH_CreateInventory CreateInventory, FRH_ItemInventory& ItemInventory);

	UFUNCTION(BlueprintCallable, Category = "Inventory Subsystem", meta = (DisplayName = "InitUpdateInventoryWithItemInventoryValuesy", AutoCreateRefTerm = "UpdateInventory,ItemInventory"))
	static bool InitUpdateInventoryWithItemInventoryValues(FRH_UpdateInventory UpdateInventory, FRH_ItemInventory& ItemInventory);
};
