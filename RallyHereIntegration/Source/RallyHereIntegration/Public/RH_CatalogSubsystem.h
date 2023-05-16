#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InventoryAPI.h"
#include "RH_Common.h"
#include "RallyHereIntegrationModule.h"
#include "RH_SubsystemPluginBase.h"

#include "RH_CatalogSubsystem.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_OneParam(FRH_CatalogCallDynamicDelegate, bool, bSuccess);
DECLARE_DELEGATE_OneParam(FRH_CatalogCallDelegate, bool);
DECLARE_RH_DELEGATE_BLOCK(FRH_CatalogCallBlock, FRH_CatalogCallDelegate, FRH_CatalogCallDynamicDelegate, bool)

DECLARE_DELEGATE_OneParam(FRH_CatalogItemUpdatedDelegate, URH_CatalogItem*);

USTRUCT(BlueprintType)
struct FRHVendorGetRequest
{
	GENERATED_BODY()

public:
	FRH_CatalogCallBlock Delegate;

	UPROPERTY(BlueprintReadWrite, Transient, Category = "Catalog Subsystem | Vendor Get Request")
	TArray<int32> VendorIds;

	//default constructor
	FRHVendorGetRequest()
		: Delegate(FRH_CatalogCallBlock())
	{
	}

	FRHVendorGetRequest(TArray<int32> InVendorIds)
		: Delegate(FRH_CatalogCallBlock())
	{
		VendorIds.Append(InVendorIds);
	}

	FRHVendorGetRequest(FRH_CatalogCallBlock InDelegate, TArray<int32> InVendorIds)
		: Delegate(InDelegate)
	{
		VendorIds.Append(InVendorIds);
	}
};

class URH_CatalogVendor;
class URH_CatalogItem;

UCLASS(BlueprintType)
class RALLYHEREINTEGRATION_API URH_CatalogPriceBreakpoint : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Price Breakpoint")
	int32 GetPriceItemId() const { return PriceItemId; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Price Breakpoint")
	int32 GetQuantity() const { return Quantity; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Price Breakpoint")
	int32 GetPrice() const { return Price; }	

	UPROPERTY(Transient)
	int32 PriceItemId;

	UPROPERTY(Transient)
	int32 Quantity;

	UPROPERTY(Transient)
	int32 Price;
};

UCLASS(BlueprintType)
class RALLYHEREINTEGRATION_API URH_CatalogPricePoint : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Price Point")
	FGuid GetPricePointId() const { return PricePointId; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Price Point")
	FString GetName() const { return Name; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Price Point")
	bool IsStrict() const { return StrictFlag; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Price Point")
	bool IsCap() const { return CapFlag; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Price Point")
	bool IsOnSale() const { return PreSalePriceBreakpoints.Num() > 0; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Price Point")
	TArray<URH_CatalogPriceBreakpoint*> GetCurrentPriceBreakpoints() const { return CurrentPriceBreakpoints; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Price Point")
	TArray<URH_CatalogPriceBreakpoint*> GetPreSalePriceBreakpoints() const { return PreSalePriceBreakpoints; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Price Point")
	int32 GetPresaleUnitPrice(int32 CurrencyItemId, int32 Quantity) const 
	{
		for (const auto* PriceBreakpoint : PreSalePriceBreakpoints)
		{
			if (PriceBreakpoint->PriceItemId == CurrencyItemId && 
				PriceBreakpoint->Quantity == Quantity)
			{
				return PriceBreakpoint->Price;
			}
		}

		return 0;
	}

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Price Point")
	int32 GetUnitPrice(int32 CurrencyItemId, int32 Quantity) const
	{
		for (const auto* PriceBreakpoint : CurrentPriceBreakpoints)
		{
			if (PriceBreakpoint->PriceItemId == CurrencyItemId &&
				PriceBreakpoint->Quantity == Quantity)
			{
				return PriceBreakpoint->Price;
			}
		}

		return 0;
	}

	UPROPERTY(Transient)
	FGuid PricePointId;

	UPROPERTY(Transient)
	FString Name;
	
	UPROPERTY(Transient)
	bool StrictFlag;

	UPROPERTY(Transient)
	bool CapFlag;

	UPROPERTY(Transient)
	TArray<URH_CatalogPriceBreakpoint*> CurrentPriceBreakpoints;

	UPROPERTY(Transient)
	TArray<URH_CatalogPriceBreakpoint*> PreSalePriceBreakpoints;

	UPROPERTY(Transient)
	FString ETag;

	void Clear()
	{
		ETag = FString();
		PricePointId.Invalidate();
		Name.Empty();
		StrictFlag = false;
		CapFlag = false;
		CurrentPriceBreakpoints.Empty();
		PreSalePriceBreakpoints.Empty();
	}
};


UCLASS(BlueprintType)
class RALLYHEREINTEGRATION_API URH_CatalogVendorItem : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor Item")
	int32 GetLootId() const { return LootId; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor Item")
	URH_CatalogVendor* GetParentVendor() const { return ParentVendor; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor Item")
	URH_CatalogItem* GetItem() const { return Item; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor Item")
	URH_CatalogVendor* GetSubVendor() const { return SubVendor; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor Item")
	int32 GetQuantity() const { return Quantity; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor Item")
	ERHAPI_InventorySelector GetInventorySelectorType() const { return InventorySelectorType; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor Item")
	ERHAPI_InventoryOperation GetInventoryOperation() const { return InventoryOperation; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor Item")
	bool IsActive() const { return Active; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor Item")
	int32 GetSortOrder() const { return SortOrder; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor Item")
	bool GetFillInNewOrder() const { return FillInNewOrder; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor Item")
	bool GetAllowPartialBundles() const { return AllowPartialBundles; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor Item")
	int32 GetRequiredItemId() const { return RequiredItemId; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor Item")
	int32 GetRequiredItemCount() const { return RequiredItemCount; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor Item")
	int32 GetStackLimit() const { return StackLimit; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor Item")
	int32 GetHardQuantityMaximum() const { return HardQuantityMaximum; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor Item")
	int32 GetDropWeight() const { return DropWeight; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor Item")
	int32 GetUiHint() const { return UiHint; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor Item")
	FDateTime GetEffectiveFrom() const { return EffectiveFrom; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor Item")
	ERHAPI_QuantityType GetQuantityType() const { return QuantityType; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor Item")
	int32 GetQuantityMultInventoryItemId() const { return QuantityMultInventoryItemId; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor Item")
	bool IsClaimableByClient() const { return ClaimableByClient; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor Item")
	int32 GetTimeFrameId() const { return TimeFrameId; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor Item")
	ERHAPI_InventoryBucket GetUseInventoryBucket() const { return UseInventoryBucket; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor Item")
	ERHAPI_XpQuantityTransform GetXpQuantityTransformType() const { return XpQuantityTransformType; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor Item")
	FGuid GetCurrentPricePointGuid() const { return CurrentPricePointGuid; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor Item")
	FGuid GetPreSalePricePointGuid() const { return PreSalePricePointGuid; }
	
	// Unique Id of this vendor item
	UPROPERTY(Transient)
	int32 LootId;

	// Vendor this item belongs to
	UPROPERTY(Transient)
	URH_CatalogVendor* ParentVendor;

	// Item this vendor item references
	UPROPERTY(Transient)
	URH_CatalogItem* Item;

	// Vendor this item references
	UPROPERTY(Transient)
	URH_CatalogVendor* SubVendor;

	// Quantity of this item
	UPROPERTY(Transient)
	int32 Quantity;

	// How this item is recorded in a players inventory (Own, Transient, Rental, etc.)
	UPROPERTY(Transient)
	ERHAPI_InventorySelector InventorySelectorType;

	// What recipe operation this vendor entry does for the referenced item/sub vendor
	UPROPERTY(Transient)
	ERHAPI_InventoryOperation InventoryOperation;

	// If the vendor item is currently active and obtainable
	UPROPERTY(Transient)
	bool Active;

	// The order in which a vendor is processed
	UPROPERTY(Transient)
	int32 SortOrder;

	// When dropped in a randomly sampled vendor, will this create a new order or fill inline?
	UPROPERTY(Transient)
	bool FillInNewOrder;

	// When dropped in a randomly sampled vendor, will the sub vendor allow dropping part of the the bundle?  False means it will only drop if the entire sub vendor can be given to the player
	UPROPERTY(Transient)
	bool AllowPartialBundles;

	// Item required to be owned/rented to drop this Loot in a randomly sampled vendor
	UPROPERTY(Transient)
	int32 RequiredItemId;

	// Amount of the RequiredItemId to be owned/rented to drop this Loot in a randomly sampled vendor
	UPROPERTY(Transient)
	int32 RequiredItemCount;

	// Amount of owned/rented of this Loot's item that will prevent this loot from droppping in a randomly sampled vendor
	UPROPERTY(Transient)
	int32 StackLimit;

	// Hard cap on quantity of an item this Loot can give. Disabled with 0
	UPROPERTY(Transient)
	int32 HardQuantityMaximum;

	// In a randomly sampled vendor, all itesm drop weights are added together and are the ration of the whole for this item to be selected
	UPROPERTY(Transient)
	int32 DropWeight;

	// Legacy id used for sales types
	UPROPERTY(Transient)
	int32 UiHint;

	// Time this vendor item becomes effective
	UPROPERTY(Transient)
	FDateTime EffectiveFrom;

	// Modifier for how the quantity of the vendor item is applied
	UPROPERTY(Transient)
	ERHAPI_QuantityType QuantityType;

	// If Set, this uses the quantity of the referenced item for data on the Quantity Type
	UPROPERTY(Transient)
	int32 QuantityMultInventoryItemId;

	// If Set, the client can claim this item, the server doesn't need to be the authority for it
	UPROPERTY(Transient)
	bool ClaimableByClient;

	// Used for Timeframe locked rentals to determine the period of the rental
	UPROPERTY(Transient)
	int32 TimeFrameId;

	// Bucket this uses for granting the item on
	UPROPERTY(Transient)
	ERHAPI_InventoryBucket UseInventoryBucket;

	// Transforms how this item grants qunatities
	UPROPERTY(Transient)
	ERHAPI_XpQuantityTransform XpQuantityTransformType;

	// Current Price point information for the vendor item
	UPROPERTY(Transient)
	FGuid CurrentPricePointGuid;

	// Previous Price point information for the vendor item
	UPROPERTY(Transient)
	FGuid PreSalePricePointGuid;

	UPROPERTY(Transient)
	FString ETag;

	void Clear()
	{
		LootId = 0;
		ParentVendor = nullptr;
		Item = nullptr;
		SubVendor = nullptr;
		Quantity = 0;
		InventorySelectorType = ERHAPI_InventorySelector::Invalid;
		InventoryOperation = ERHAPI_InventoryOperation::Invalid;
		Active = false;
		SortOrder = 0;
		FillInNewOrder = false;
		AllowPartialBundles = false;
		RequiredItemId = 0;
		RequiredItemCount = 0;
		StackLimit = 0;
		HardQuantityMaximum = 0;
		DropWeight = 0;
		UiHint = 0;
		EffectiveFrom = FDateTime();
		QuantityType = ERHAPI_QuantityType::Relative;
		QuantityMultInventoryItemId = 0;
		ClaimableByClient = false;
		TimeFrameId = 0;
		UseInventoryBucket = ERHAPI_InventoryBucket::None;
		XpQuantityTransformType = ERHAPI_XpQuantityTransform::None;
		CurrentPricePointGuid.Invalidate();
		PreSalePricePointGuid.Invalidate();
		ETag = "";
	}
};

UCLASS(BlueprintType)
class RALLYHEREINTEGRATION_API URH_CatalogItem : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	int32 GetItemId() const { return ItemId; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	ERHAPI_ItemType GetType() const { return Type; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	int32 GetRefItemId() const { return RefItemId; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	int32 GetAvailabilityFlags() const { return AvailabilityFlags; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	int32 GetEntitledLootId() const { return EntitledLootId; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	int32 GetLevelXpTableId() const { return LevelXpTableId; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	int32 GetLevelVendorId() const { return LevelVendorId; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	int32 GetCouponDiscountCurrencyItemId() const { return CouponDiscountCurrencyItemId; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	double GetCouponDiscountPercentage() const { return CouponDiscountPercentage; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	bool GetCouponConsumeOnUse() const { return CouponConsumeOnUse; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	FString GetItemInventoryBucketUseRulesetId() const { return ItemInventoryBucketUseRuleSetId; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	TArray<int32> GetCouponDiscountLoot() const { return CouponDiscountLoot; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	bool IsCouponApplicableForItem(URH_CatalogVendorItem* CatalogVendorItem) const { return CatalogVendorItem != nullptr ? IsCouponApplicableForLootId(CatalogVendorItem->GetLootId()) : false; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	bool IsCouponApplicableForLootId(int32 LootId) const { return CouponDiscountLoot.Contains(LootId); }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Item")
	int32 GetCouponDiscountedPrice(int32 Price) const { return FMath::CeilToInt32(Price * (1.f - GetCouponDiscountPercentage())); }

	// Id of the item
	UPROPERTY(Transient)
	int32 ItemId;

	UPROPERTY(Transient)
	ERHAPI_ItemType Type;

	UPROPERTY(Transient)
	int32 RefItemId;

	UPROPERTY(Transient)
	int32 AvailabilityFlags;

	UPROPERTY(Transient)
	int32 EntitledLootId;

	UPROPERTY(Transient)
	int32 LevelXpTableId;

	UPROPERTY(Transient)
	int32 LevelVendorId;

	UPROPERTY(Transient)
	int32 CouponDiscountCurrencyItemId;

	UPROPERTY(Transient)
	double CouponDiscountPercentage;

	UPROPERTY(Transient)
	bool CouponConsumeOnUse;

	UPROPERTY(Transient)
	FString ItemInventoryBucketUseRuleSetId;

	// List of Loot IDs this item can discount
	UPROPERTY(Transient)
	TArray<int32> CouponDiscountLoot;

	UPROPERTY(Transient)
	FString ETag;

	void Clear()
	{
		ItemId = 0;
		ETag = FString();
		Type = ERHAPI_ItemType::Unit;
		RefItemId = 0;
		AvailabilityFlags = 0;
		EntitledLootId = 0;
		LevelXpTableId = 0;
		LevelVendorId = 0;
		CouponDiscountCurrencyItemId = 0;
		CouponDiscountPercentage = 0.0;
		CouponConsumeOnUse = false;
		ItemInventoryBucketUseRuleSetId ={};
		CouponDiscountLoot.Empty();
	}
};

UCLASS(BlueprintType)
class RALLYHEREINTEGRATION_API URH_CatalogVendor : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor")
	int32 GetVendorId() const { return VendorId; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor")
	ERHAPI_VendorType GetVendorType() const { return VendorType; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Vendor")
	TMap<int32, URH_CatalogVendorItem*> GetVendorItems() const { return VendorItems; }

	URH_CatalogVendorItem* GetItemById(int32 LootId) const
	{
		if (auto const& findItem = VendorItems.Find(LootId))
		{
			return *findItem;
		}
		return nullptr;
	}

	// Unique Id of this vendor
	UPROPERTY(Transient)
	int32 VendorId;

	// The type of this vendor
	UPROPERTY(Transient)
	ERHAPI_VendorType VendorType;

	// Map if items by loot id in the vendor
	UPROPERTY(Transient)
	TMap<int32, URH_CatalogVendorItem*> VendorItems;

	UPROPERTY(Transient)
	FString ETag;

	void Clear()
	{
		VendorId = 0;
		VendorType = ERHAPI_VendorType::Recipe;
		VendorItems.Empty();
		ETag = "";
	}
};

UCLASS(BlueprintType)
class RALLYHEREINTEGRATION_API URH_InventoryBucketUseRuleSet : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	ERHAPI_InventoryBucket Bucket;

	UPROPERTY()
	TArray<ERHAPI_InventoryBucket> BucketUseOrder;

	UPROPERTY()
	FString ETag;
};

UCLASS(BlueprintType)
class RALLYHEREINTEGRATION_API URH_CatalogXpTable : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Xp Table")
	int32 GetXpTableId() const { return XpTableId; }

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Xp Table")
	TArray<int32> GetXpEntries() const { return XpEntries; }

	//This gets the number of level entries into this Xp Table.
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Xp Table")
	int32 GetLevelCount() const { return XpEntries.Num(); }

	//This will get the Xp required for a level of this Xp Table at a specific level.
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Xp Table")
	int64 GetXpAtLevel(int32 XpLevel) const { return (XpLevel < XpEntries.Num()) ? XpEntries[XpLevel] : INDEX_NONE; }

	//This will get the current level at a specific amount of Xp for this Xp Table.
	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem | Catalog Xp Table")
	int32 GetLevelAtXp(int64 XpPoints) const
	{
		for (int32 i = 0; i < XpEntries.Num(); ++i)
		{
			if (XpEntries[i] > XpPoints)
			{
				return i;
			}
		}

		return 0;
	}

	UPROPERTY()
	int32 XpTableId;

	UPROPERTY()
	TArray<int32> XpEntries;

	UPROPERTY()
	FString ETag;
};


UCLASS(Config = RallyHereIntegratLoadoutsultConfig, BlueprintType)
class RALLYHEREINTEGRATION_API URH_CatalogSubsystem : public URH_GameInstanceSubsystemPlugin
{
    GENERATED_BODY()

public:
	typedef RallyHereAPI::Traits_GetCatalogAll TGetCatalogAll;
	typedef RallyHereAPI::Traits_GetCatalogXpAll TGetCatalogXpAll;
	typedef RallyHereAPI::Traits_GetCatalogInventoryBucketUseRuleSetsAll TGetCatalogInventoryBucketUseRuleSetsAll;
	typedef RallyHereAPI::Traits_GetCatalogPricePointsAll TGetCatalogPricePointsAll;
	typedef RallyHereAPI::Traits_GetCatalogVendor TGetCatalogVendor;
	typedef RallyHereAPI::Traits_GetCatalogItem TGetCatalogItem;
	
    virtual void Initialize() override;
    virtual void Deinitialize() override;

	UFUNCTION(BlueprintCallable, Category = "Catalog Subsystem", meta = (DisplayName = "Get Catalog All", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetCatalogAll(const FRH_CatalogCallDynamicDelegate& Delegate) { GetCatalogAll(Delegate); }
	void GetCatalogAll(FRH_CatalogCallBlock Delegate = FRH_CatalogCallBlock());
	void OnGetCatalogAllResponse(const TGetCatalogAll::Response& Resp, FRH_CatalogCallBlock Delegate);

	UFUNCTION(BlueprintCallable, Category = "Catalog Subsystem", meta = (DisplayName = "Get Catalog Xp All", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetCatalogXpAll(const FRH_CatalogCallDynamicDelegate& Delegate) { GetCatalogXpAll(Delegate); }
	void GetCatalogXpAll(FRH_CatalogCallBlock Delegate = FRH_CatalogCallBlock());
	void OnGetCatalogXpAllResponse(const TGetCatalogXpAll::Response& Resp, FRH_CatalogCallBlock Delegate);

	UFUNCTION(BlueprintCallable, Category = "Catalog Subsystem", meta = (DisplayName = "Get Catalog Item", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetCatalogItem(int32 ItemId, const FRH_CatalogCallDynamicDelegate& Delegate) { GetCatalogItem(ItemId, Delegate); }
	void GetCatalogItem(int32 ItemId, FRH_CatalogCallBlock Delegate = FRH_CatalogCallBlock());
	void OnGetCatalogItemResponse(const TGetCatalogItem::Response& Resp, int32 ItemId, FRH_CatalogCallBlock Delegate);

	UFUNCTION(BlueprintCallable, Category = "Catalog Subsystem", meta = (DisplayName = "Get Catalog Inventory Bucket Use Rulesets All", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetCatalogInventoryBucketUseRuleSetsAll(const FRH_CatalogCallDynamicDelegate& Delegate) { GetCatalogInventoryBucketUseRuleSetsAll(Delegate); }
	void GetCatalogInventoryBucketUseRuleSetsAll(FRH_CatalogCallBlock Delegate = FRH_CatalogCallBlock());
	void OnGetCatalogInventoryBucketUseRuleSetsAllResponse(const TGetCatalogInventoryBucketUseRuleSetsAll::Response& Resp, FRH_CatalogCallBlock Delegate);

	UFUNCTION(BlueprintCallable, Category = "Catalog Subsystem", meta = (DisplayName = "Get Catalog Price Points All", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetCatalogPricePointsAll(const FRH_CatalogCallDynamicDelegate& Delegate) { GetCatalogPricePointsAll(Delegate); }
	void GetCatalogPricePointsAll(FRH_CatalogCallBlock Delegate = FRH_CatalogCallBlock());
	void OnGetCatalogPricePointsAllResponse(const TGetCatalogPricePointsAll::Response& Resp, FRH_CatalogCallBlock Delegate);

	UFUNCTION(BlueprintCallable, Category = "Catalog Subsystem", meta = (DisplayName = "Get Catalog Vendor", AutoCreateRefTerm = "Delegate"))
	void BLUEPRINT_GetCatalogVendor(const FRHVendorGetRequest& VendorRequest) { GetCatalogVendor(VendorRequest); }
	void GetCatalogVendor(const FRHVendorGetRequest& VendorRequest);

	UFUNCTION(BlueprintPure, Category = "Catalog Subsystem")
	URH_CatalogXpTable* GetXpTable(int32 XpTableId) const;

	URH_CatalogVendorItem* GetVendorItemByLootId(int32 LootId) const
	{
		if (auto const& findItem = CatalogVendorItems.Find(LootId))
		{
			return *findItem;
		}
		return nullptr;
	}

	URH_CatalogItem* GetCatalogItemByItemId(int32 ItemId) const
	{
		if (auto const& findItem = CatalogItems.Find(ItemId))
		{
			return *findItem;
		}
		return nullptr;
	}

	URH_CatalogVendor* GetVendorById(int32 VendorId) const
	{
		if (auto const& findVendor = CatalogVendors.Find(VendorId))
		{
			return *findVendor;
		}
		return nullptr;
	}

	URH_CatalogPricePoint* GetPricePointById(FGuid PricePointGuid) const
	{
		if (PricePointGuid.IsValid())
		{
			if (auto const& findPricePoint = CatalogPricePoints.Find(PricePointGuid))
			{
				return *findPricePoint;
			}
		}
		return nullptr;
	}

	bool CanRulesetUsePlatformForBucket(const FString& InventoryBucketRulesetId, ERHAPI_InventoryBucket TargetBucket, ERHAPI_InventoryPortal InventoryPlatform) const;
	bool CanRulesetUsePlatformForBucket(const FString& InventoryBucketRulesetId, ERHAPI_InventoryBucket TargetBucket, ERHAPI_InventoryBucket ItemInventoryBucket) const;

	TMap<int32, URH_CatalogVendor*> GetVendors() const { return CatalogVendors; }
	TMap<int32, URH_CatalogXpTable*> GetXpTables() const { return XpTables; }
	TMap<FString, TMap<ERHAPI_InventoryBucket, URH_InventoryBucketUseRuleSet*>> GetInventoryBucketUseRuleSets() const { return InventoryBucketUseRuleSets; }
	TMap<FGuid, URH_CatalogPricePoint*> GetPricePoints() const { return CatalogPricePoints; }

	FRH_CatalogItemUpdatedDelegate OnCatalogItemAdded;

	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector);

private:

	void GetCatalogVendorSingle(int32 VendorId);
	void OnGetCatalogVendorResponse(const TGetCatalogVendor::Response& Resp, int32 VendorId);

	UPROPERTY(Transient)
	TArray<FRHVendorGetRequest> VendorRequests;

	UPROPERTY(Transient)
	TArray<int32> EnqueuedVendorsToGet;

	UPROPERTY(Transient)
	bool bHasActiveVendorRequest;

	// Xp Table Id to Xp Table Map
	UPROPERTY(Transient)
	TMap<int32, URH_CatalogXpTable*> XpTables;

	// Vendor Id to Vendor Map
	UPROPERTY(Transient)
	TMap<int32, URH_CatalogVendor*> CatalogVendors;

	// Item Id to Catalog Item Map
	UPROPERTY(Transient)
	TMap<int32, URH_CatalogItem*> CatalogItems;

	// Loot Id to Catalog Vendor Item Map
	UPROPERTY(Transient)
	TMap<int32, URH_CatalogVendorItem*> CatalogVendorItems;

	// Price Point ID to Price Points
	UPROPERTY(Transient)
	TMap<FGuid, URH_CatalogPricePoint*> CatalogPricePoints;

	// Inventory Bucket to Inventory Bucket Use Ruleset Map
	// Reference counting is handled by AddStaticReference
	TMap<FString, TMap<ERHAPI_InventoryBucket, URH_InventoryBucketUseRuleSet*>> InventoryBucketUseRuleSets;

	FString GetCatalogAllETag;
	FString GetCatalogXpAllETag;
	FString GetCatalogPricePointsAllETag;
	FString GetCatalogInventoryBucketUseRuleSetsAllETag;

	void ParseAllXpTables(FRHAPI_XpTables Content);
	void ParseAllInventoryBucketUseRuleSets(FRHAPI_InventoryBucketUseRuleSets Content);
	void ParseAllPricePoints(FRHAPI_PricePoints Content);
	URH_CatalogVendor* ParseVendor(FRHAPI_Vendor CatalogVendor, int32 VendorId);
	URH_CatalogVendorItem* ParseCatalogVendorItem(FRHAPI_Loot LootItem, URH_CatalogVendor* ParentVendor = nullptr);
	URH_CatalogItem* ParseCatalogItem(FRHAPI_Item CatalogItem, int32 ItemId);

	void InitPropertiesWithDefaultValues();
};

