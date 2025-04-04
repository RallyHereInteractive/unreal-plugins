---
title: Catalog
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`URH_CatalogItem`](#classURH__CatalogItem) | class used to define a Catalog Item.
`class `[`URH_CatalogSubsystem`](#classURH__CatalogSubsystem) | Class used to help track and interact with the catalog to get Items, Vendors, and their data.
`class `[`URH_CatalogBlueprintLibrary`](#classURH__CatalogBlueprintLibrary) | Catalog Blueprint Library with helper methods for API structs.
`struct `[`FRHVendorGetRequest`](#structFRHVendorGetRequest) | Vendor Request struct used to encapsulate a request to get a vendors and the callback delegate.
`struct `[`FRH_VendorRequestState`](#structFRH__VendorRequestState) | Vendor Request struct used to encapsulate a request to get a vendors and the callback delegate.

## class `URH_CatalogItem` <a id="classURH__CatalogItem"></a>

```
class URH_CatalogItem
  : public UObject
```

class used to define a Catalog Item.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`ETag`](#classURH__CatalogItem_1a8c1dbd0b72804d0d46c41cd75108f53e) | The identifier for the versioning of the item.
`public `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` `[`APIItem`](#classURH__CatalogItem_1a40e0d83cfeae3ff06466990602707b94) | Copy of the underlying Catalog item.
`public inline int32 `[`GetItemId`](#classURH__CatalogItem_1adc17f68c9aa87328bf2eeecf65007e99)`() const` | Gets the Item Id.
`public inline ERHAPI_ItemType `[`GetType`](#classURH__CatalogItem_1af11d6a3b4504a9b72a644133b8595ae6)`() const` | Gets the Item Type.
`public inline int32 `[`GetRefItemId`](#classURH__CatalogItem_1afd536fcb04d8a38c06c4e8a186e473c0)`() const` | Gets the Item Id of the referenced item.
`public inline int32 `[`GetAvailabilityFlags`](#classURH__CatalogItem_1a72c9fe1bfa8b972d5a82df1be4ffb8d3)`() const` | Gets item availability flags.
`public inline int32 `[`GetEntitledLootId`](#classURH__CatalogItem_1a9313556688e5404f87e676c1673bc9af)`() const` | Gets the entitled loot id.
`public inline int32 `[`GetLevelXpTableId`](#classURH__CatalogItem_1a4ee0060eff0c511de8165e31e4abe396)`() const` | Gets the Xp Table associated with the item.
`public inline int32 `[`GetLevelVendorId`](#classURH__CatalogItem_1aecd9574fcd55a6f7040f742e5958acc9)`() const` | Gets the Vendor that grants rewards based on inventory count of the item.
`public inline int32 `[`GetCouponDiscountCurrencyItemId`](#classURH__CatalogItem_1a7df15d0f40f33e7fbd3d854b698e0f19)`() const` | Gets the Item Id of the currency type this can discount.
`public inline float `[`GetCouponDiscountPercentage`](#classURH__CatalogItem_1a6ec70c25672e2b19483d6039a204c2d7)`() const` | Gets the precentage of the discount this item applies.
`public inline bool `[`GetCouponConsumeOnUse`](#classURH__CatalogItem_1a50948a1e6a63de0412fbcdcabbec0444)`() const` | Gets if it will be consumed when used.
`public inline const FString & `[`GetItemInventoryBucketUseRulesetId`](#classURH__CatalogItem_1ac9d4b5dd2b2541e81613d741dd2e6e28)`() const` | Gets the set of rules of what platforms this item is available on.
`public inline const TArray< int32 > & `[`GetCouponDiscountLoot`](#classURH__CatalogItem_1a516c520f43c7fdf4fb9c0bc3a54652ae)`() const` | Gets the list of loot ids this coupon can be applied to.
`public inline void `[`InitializeFromCatalogItem`](#classURH__CatalogItem_1aa6fc917f2e111109946c7aee565618d3)`(const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & CatalogItem,int32 InItemId)` | Sets up the fata in the Catalog Item.
`public inline void `[`Clear`](#classURH__CatalogItem_1af65ba6d8b9f24d27e9cce6ac341bae61)`()` | Clears all the data for the item.
`protected int32 `[`ItemId`](#classURH__CatalogItem_1a51b19d9d9500568414f08f3a4d4b48a7) | The Item Id.
`protected ERHAPI_ItemType `[`Type`](#classURH__CatalogItem_1a9c8c53126818d45b2bee7bd751830646) | The Item Type.
`protected int32 `[`RefItemId`](#classURH__CatalogItem_1ae19d06a33a2b51b52910c08cd970389a) | The Ref Item Id.
`protected int32 `[`AvailabilityFlags`](#classURH__CatalogItem_1a8331f819c80a760b623008ac44f9fbc6) | The Availability Flags.
`protected int32 `[`EntitledLootId`](#classURH__CatalogItem_1a45cd555e4715d475b2a85b083dc6e4a0) | The Entitled Loot Id.
`protected int32 `[`LevelXpTableId`](#classURH__CatalogItem_1a09044459692284b35f3b599ac64fb660) | The Associated Xp Table Id.
`protected int32 `[`LevelVendorId`](#classURH__CatalogItem_1a8b89f8d9ef537973df84b16cc6fd6ff2) | The Associated Loot Table if an Xp Table is used.
`protected int32 `[`CouponDiscountCurrencyItemId`](#classURH__CatalogItem_1adf7af4689022331b187bb68ef863bd72) | The Item Id this can be used to discount purchases with when used as a coupon.
`protected float `[`CouponDiscountPercentage`](#classURH__CatalogItem_1a3a6ec629d4bc492ff8e08cb8c8557f77) | The percentage of discount this gives when used as a coupon.
`protected bool `[`CouponConsumeOnUse`](#classURH__CatalogItem_1af8501ed83fb42d01ff8ba1029af0f6b1) | If set, then when used as a coupon, remove this from inventory.
`protected FString `[`ItemInventoryBucketUseRuleSetId`](#classURH__CatalogItem_1a362245491036e7f9386962ebfeca2041) | The inventory use ruleset this item uses.
`protected TArray< int32 > `[`CouponDiscountLoot`](#classURH__CatalogItem_1ab5baca34a2c43db4b6f03785904ffa77) | List of Loot Table Items this item can be used as a coupon for.

### Members

#### `public FString `[`ETag`](#classURH__CatalogItem_1a8c1dbd0b72804d0d46c41cd75108f53e) <a id="classURH__CatalogItem_1a8c1dbd0b72804d0d46c41cd75108f53e"></a>

The identifier for the versioning of the item.

#### `public `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` `[`APIItem`](#classURH__CatalogItem_1a40e0d83cfeae3ff06466990602707b94) <a id="classURH__CatalogItem_1a40e0d83cfeae3ff06466990602707b94"></a>

Copy of the underlying Catalog item.

#### `public inline int32 `[`GetItemId`](#classURH__CatalogItem_1adc17f68c9aa87328bf2eeecf65007e99)`() const` <a id="classURH__CatalogItem_1adc17f68c9aa87328bf2eeecf65007e99"></a>

Gets the Item Id.

#### `public inline ERHAPI_ItemType `[`GetType`](#classURH__CatalogItem_1af11d6a3b4504a9b72a644133b8595ae6)`() const` <a id="classURH__CatalogItem_1af11d6a3b4504a9b72a644133b8595ae6"></a>

Gets the Item Type.

#### `public inline int32 `[`GetRefItemId`](#classURH__CatalogItem_1afd536fcb04d8a38c06c4e8a186e473c0)`() const` <a id="classURH__CatalogItem_1afd536fcb04d8a38c06c4e8a186e473c0"></a>

Gets the Item Id of the referenced item.

#### `public inline int32 `[`GetAvailabilityFlags`](#classURH__CatalogItem_1a72c9fe1bfa8b972d5a82df1be4ffb8d3)`() const` <a id="classURH__CatalogItem_1a72c9fe1bfa8b972d5a82df1be4ffb8d3"></a>

Gets item availability flags.

#### `public inline int32 `[`GetEntitledLootId`](#classURH__CatalogItem_1a9313556688e5404f87e676c1673bc9af)`() const` <a id="classURH__CatalogItem_1a9313556688e5404f87e676c1673bc9af"></a>

Gets the entitled loot id.

#### `public inline int32 `[`GetLevelXpTableId`](#classURH__CatalogItem_1a4ee0060eff0c511de8165e31e4abe396)`() const` <a id="classURH__CatalogItem_1a4ee0060eff0c511de8165e31e4abe396"></a>

Gets the Xp Table associated with the item.

#### `public inline int32 `[`GetLevelVendorId`](#classURH__CatalogItem_1aecd9574fcd55a6f7040f742e5958acc9)`() const` <a id="classURH__CatalogItem_1aecd9574fcd55a6f7040f742e5958acc9"></a>

Gets the Vendor that grants rewards based on inventory count of the item.

#### `public inline int32 `[`GetCouponDiscountCurrencyItemId`](#classURH__CatalogItem_1a7df15d0f40f33e7fbd3d854b698e0f19)`() const` <a id="classURH__CatalogItem_1a7df15d0f40f33e7fbd3d854b698e0f19"></a>

Gets the Item Id of the currency type this can discount.

#### `public inline float `[`GetCouponDiscountPercentage`](#classURH__CatalogItem_1a6ec70c25672e2b19483d6039a204c2d7)`() const` <a id="classURH__CatalogItem_1a6ec70c25672e2b19483d6039a204c2d7"></a>

Gets the precentage of the discount this item applies.

#### `public inline bool `[`GetCouponConsumeOnUse`](#classURH__CatalogItem_1a50948a1e6a63de0412fbcdcabbec0444)`() const` <a id="classURH__CatalogItem_1a50948a1e6a63de0412fbcdcabbec0444"></a>

Gets if it will be consumed when used.

#### `public inline const FString & `[`GetItemInventoryBucketUseRulesetId`](#classURH__CatalogItem_1ac9d4b5dd2b2541e81613d741dd2e6e28)`() const` <a id="classURH__CatalogItem_1ac9d4b5dd2b2541e81613d741dd2e6e28"></a>

Gets the set of rules of what platforms this item is available on.

#### `public inline const TArray< int32 > & `[`GetCouponDiscountLoot`](#classURH__CatalogItem_1a516c520f43c7fdf4fb9c0bc3a54652ae)`() const` <a id="classURH__CatalogItem_1a516c520f43c7fdf4fb9c0bc3a54652ae"></a>

Gets the list of loot ids this coupon can be applied to.

#### `public inline void `[`InitializeFromCatalogItem`](#classURH__CatalogItem_1aa6fc917f2e111109946c7aee565618d3)`(const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & CatalogItem,int32 InItemId)` <a id="classURH__CatalogItem_1aa6fc917f2e111109946c7aee565618d3"></a>

Sets up the fata in the Catalog Item.

#### Parameters
* `CatalogItem` The API layer item to initialize from. 

* `InItemId` The Item Id.

#### `public inline void `[`Clear`](#classURH__CatalogItem_1af65ba6d8b9f24d27e9cce6ac341bae61)`()` <a id="classURH__CatalogItem_1af65ba6d8b9f24d27e9cce6ac341bae61"></a>

Clears all the data for the item.

#### `protected int32 `[`ItemId`](#classURH__CatalogItem_1a51b19d9d9500568414f08f3a4d4b48a7) <a id="classURH__CatalogItem_1a51b19d9d9500568414f08f3a4d4b48a7"></a>

The Item Id.

#### `protected ERHAPI_ItemType `[`Type`](#classURH__CatalogItem_1a9c8c53126818d45b2bee7bd751830646) <a id="classURH__CatalogItem_1a9c8c53126818d45b2bee7bd751830646"></a>

The Item Type.

#### `protected int32 `[`RefItemId`](#classURH__CatalogItem_1ae19d06a33a2b51b52910c08cd970389a) <a id="classURH__CatalogItem_1ae19d06a33a2b51b52910c08cd970389a"></a>

The Ref Item Id.

#### `protected int32 `[`AvailabilityFlags`](#classURH__CatalogItem_1a8331f819c80a760b623008ac44f9fbc6) <a id="classURH__CatalogItem_1a8331f819c80a760b623008ac44f9fbc6"></a>

The Availability Flags.

#### `protected int32 `[`EntitledLootId`](#classURH__CatalogItem_1a45cd555e4715d475b2a85b083dc6e4a0) <a id="classURH__CatalogItem_1a45cd555e4715d475b2a85b083dc6e4a0"></a>

The Entitled Loot Id.

#### `protected int32 `[`LevelXpTableId`](#classURH__CatalogItem_1a09044459692284b35f3b599ac64fb660) <a id="classURH__CatalogItem_1a09044459692284b35f3b599ac64fb660"></a>

The Associated Xp Table Id.

#### `protected int32 `[`LevelVendorId`](#classURH__CatalogItem_1a8b89f8d9ef537973df84b16cc6fd6ff2) <a id="classURH__CatalogItem_1a8b89f8d9ef537973df84b16cc6fd6ff2"></a>

The Associated Loot Table if an Xp Table is used.

#### `protected int32 `[`CouponDiscountCurrencyItemId`](#classURH__CatalogItem_1adf7af4689022331b187bb68ef863bd72) <a id="classURH__CatalogItem_1adf7af4689022331b187bb68ef863bd72"></a>

The Item Id this can be used to discount purchases with when used as a coupon.

#### `protected float `[`CouponDiscountPercentage`](#classURH__CatalogItem_1a3a6ec629d4bc492ff8e08cb8c8557f77) <a id="classURH__CatalogItem_1a3a6ec629d4bc492ff8e08cb8c8557f77"></a>

The percentage of discount this gives when used as a coupon.

#### `protected bool `[`CouponConsumeOnUse`](#classURH__CatalogItem_1af8501ed83fb42d01ff8ba1029af0f6b1) <a id="classURH__CatalogItem_1af8501ed83fb42d01ff8ba1029af0f6b1"></a>

If set, then when used as a coupon, remove this from inventory.

#### `protected FString `[`ItemInventoryBucketUseRuleSetId`](#classURH__CatalogItem_1a362245491036e7f9386962ebfeca2041) <a id="classURH__CatalogItem_1a362245491036e7f9386962ebfeca2041"></a>

The inventory use ruleset this item uses.

#### `protected TArray< int32 > `[`CouponDiscountLoot`](#classURH__CatalogItem_1ab5baca34a2c43db4b6f03785904ffa77) <a id="classURH__CatalogItem_1ab5baca34a2c43db4b6f03785904ffa77"></a>

List of Loot Table Items this item can be used as a coupon for.

## class `URH_CatalogSubsystem` <a id="classURH__CatalogSubsystem"></a>

```
class URH_CatalogSubsystem
  : public URH_GameInstanceSubsystemPlugin
  : public FTickableGameObject
```

Class used to help track and interact with the catalog to get Items, Vendors, and their data.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FRH_CatalogItemUpdatedDelegate `[`OnCatalogItemAdded`](#classURH__CatalogSubsystem_1a60e2593b662b6023fda6401228bea592) | Delegate that fires whenever a catalog item is added to the cashed catalog items.
`public virtual void `[`Initialize`](#classURH__CatalogSubsystem_1a4743c425eba445a9c55c5263b43605a9)`()` | Initialize the subsystem.
`public virtual void `[`Deinitialize`](#classURH__CatalogSubsystem_1afef8ec5b86a36a604805bf32a279773c)`()` | Safely tears down the subsystem.
`public void `[`GetCatalogAll`](#classURH__CatalogSubsystem_1ae79063c7c03378e80d0e14f24688df3e)`(const FRH_CatalogCallBlock & Delegate)` | Gets the entire catalog at once.
`public void `[`GetCatalogXpAll`](#classURH__CatalogSubsystem_1a412ea83cfb2fb9aafcbefc2a49f6557d)`(const FRH_CatalogCallBlock & Delegate)` | Gets all of the xp tables in the catalog.
`public void `[`GetCatalogItem`](#classURH__CatalogSubsystem_1a71028a2a6b3ea3eafddca54b677749e6)`(int32 ItemId,const FRH_CatalogCallBlock & Delegate)` | Gets a specific item from the catalog.
`public void `[`GetCatalogInventoryBucketUseRuleSetsAll`](#classURH__CatalogSubsystem_1a7a231220866a163574c95c0191111608)`(const FRH_CatalogCallBlock & Delegate)` | Gets all of the inventory bucket rulesets from the catalog.
`public void `[`GetCatalogPricePointsAll`](#classURH__CatalogSubsystem_1a1d664d4dfd15ef90b7d5f9eb4dd03d84)`(const FRH_CatalogCallBlock & Delegate)` | Gets all of the price points from the catalog.
`public void `[`GetCatalogTimeFramesAll`](#classURH__CatalogSubsystem_1acc8cbc32148f99f291d6942fc06ff420)`(const FRH_CatalogCallBlock & Delegate)` | Gets all of the time frames from the catalog.
`public void `[`GetCatalogVendor`](#classURH__CatalogSubsystem_1a1c391d9be422da9d41cd9139184d082a)`(const `[`FRHVendorGetRequest`](Catalog.md#structFRHVendorGetRequest)` & VendorRequest)` | Gets the vendors requested as well as their sub vendors.
`public void `[`GetCatalogVendorsAll`](#classURH__CatalogSubsystem_1ab4903e2a1b6805d3e278b561882b09ad)`(const FRH_CatalogCallBlock & Delegate)` | Gets the all catalog vendors.
`public bool `[`GetXpTable`](#classURH__CatalogSubsystem_1ada2141a6424f5ac1b9260569040f107c)`(int32 XpTableId,`[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` & XpTable) const` | Gets a cached Xp Table.
`public inline bool `[`GetVendorItemByLootId`](#classURH__CatalogSubsystem_1a76b6de7e6855b091c7fb2c86c7b33739)`(int32 LootId,`[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` & LootItem) const` | Gets a cached vendor item by its loot id.
`public inline `[`URH_CatalogItem`](Catalog.md#classURH__CatalogItem)` * `[`GetCatalogItemByItemId`](#classURH__CatalogSubsystem_1aa69398be03874c33398b96e523c72863)`(int32 ItemId) const` | Gets a cached catalog item by its item id.
`public inline bool `[`GetVendorById`](#classURH__CatalogSubsystem_1a17ffa20cdeea67b34ba968f9509ca3c3)`(int32 VendorId,`[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` & Vendor) const` | Gets a cached vendor by its vendor id.
`public inline bool `[`GetPricePointById`](#classURH__CatalogSubsystem_1ae055f143927ec26a0ada9072a1f609bd)`(const FGuid & PricePointGuid,`[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` & PricePoint) const` | Gets a cached price point by its price point guid.
`public inline bool `[`GetPricePointById`](#classURH__CatalogSubsystem_1a102f2ca24bc0de032bbadccc2748faf3)`(int32 TimeFrameId,`[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` & TimeFrame) const` | Gets a cached time frame by its Time Frame Id.
`public bool `[`CanRulesetUsePlatformForBucket`](#classURH__CatalogSubsystem_1af7b597a0de2ea0386b81c5ae52eecb0e)`(const FString & InventoryBucketRulesetId,ERHAPI_InventoryBucket TargetBucket,ERHAPI_InventoryBucket ItemInventoryBucket) const` | Checks if the ruleset can use the platform for the bucket.
`public inline const TMap< int32, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & `[`GetVendors`](#classURH__CatalogSubsystem_1a8aee4777f8cf2ad75a728f32f53d8689)`() const` | Gets the cached vendors.
`public inline const TMap< int32, `[`URH_CatalogItem`](Catalog.md#classURH__CatalogItem)` * > & `[`GetCatalogItems`](#classURH__CatalogSubsystem_1a8e2a7314ac7b8dab327e50f6673ee53c)`() const` | Gets the cached catalog items.
`public inline const TMap< int32, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & `[`GetXpTables`](#classURH__CatalogSubsystem_1a68a4899eba2ef6e09dfff3457453473d)`() const` | Gets the xp tables.
`public inline const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & `[`GetInventoryBucketUseRuleSets`](#classURH__CatalogSubsystem_1acb80d482d68e915f7d6ae5f512c00784)`() const` | Gets the cached inventory bucket rule sets.
`public inline const TMap< FGuid, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & `[`GetPricePoints`](#classURH__CatalogSubsystem_1a49203f3840ba095c3fad79c6473e7309)`() const` | Gets the cached price points.
`public inline const TMap< int32, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & `[`GetTimeFrames`](#classURH__CatalogSubsystem_1a018753e1a3c65f6ac2151f358f0a7392)`() const` | Gets the cached time frames.
`public inline virtual FString `[`GetDefaultCatalogFileExportPath`](#classURH__CatalogSubsystem_1a23932307af9e67376c78fc0452318e2d)`() const` | 
`public void `[`ExportCatalogToFile`](#classURH__CatalogSubsystem_1ac3af3d8cf0c669fd7b0f0b24d6641575)`(const FString & FilePath,const FRH_GenericSuccessWithErrorBlock & Delegate) const` | Retrieve all catalog data and save it to a file.
`public void `[`ImportCatalogFromFile`](#classURH__CatalogSubsystem_1ade8cc078f3c2a8a26737f4eca9b294e7)`(const FString & FilePath,const FRH_CatalogCallBlock & Delegate)` | Retrieve all catalog data from a file and load it into the catalog.
`protected TArray< `[`FRH_VendorRequestState`](Catalog.md#structFRH__VendorRequestState)` > `[`VendorRequests`](#classURH__CatalogSubsystem_1a47050a4e6bd28f63daf5efa2879507cc) | Array of active vendor requests that are in flight and not responded ot yet.
`protected TMap< int32, TWeakPtr< `[`FRH_AsyncTaskHelper`](Common.md#classFRH__AsyncTaskHelper)` > > `[`InFlightVendorRequests`](#classURH__CatalogSubsystem_1a38d97ecb70a4b341ec475ae2fabd6d15) | Map of all vendor requests that are in flight
`protected TMap< int32, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > `[`XpTables`](#classURH__CatalogSubsystem_1a659700dd6e8da2c852227489dce93c2a) | Xp Table Id to Xp Table Map.
`protected TMap< int32, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > `[`CatalogVendors`](#classURH__CatalogSubsystem_1ac2c9e75cab5a2282cd7eabcb76d206d7) | Vendor Id to Vendor Map.
`protected TMap< int32, `[`URH_CatalogItem`](Catalog.md#classURH__CatalogItem)` * > `[`CatalogItems`](#classURH__CatalogSubsystem_1a4ef4e31b1427345e2d4cf252142eb7ce) | Item Id to Catalog Item Map.
`protected TMap< int32, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > `[`CatalogLootItems`](#classURH__CatalogSubsystem_1a59522a6a14340b0183038eb9afeb32a4) | Loot Id to Catalog Vendor Item Map.
`protected TMap< int32, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > `[`TimeFrames`](#classURH__CatalogSubsystem_1a7903aa3c86221227f123eb1243febf96) | Timeframe Id to Timeframe Map.
`protected TMap< FGuid, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > `[`CatalogPricePoints`](#classURH__CatalogSubsystem_1a4121dd65bdf66c3d8bb1e0052f02e38c) | Price Point ID to Price Points.
`protected TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > `[`InventoryBucketUseRuleSets`](#classURH__CatalogSubsystem_1a2a9ad401aa84679f58df5890a81a70ad) | Inventory Bucket to Inventory Bucket Use Ruleset Map.
`protected TOptional< FString > `[`GetCatalogAllETag`](#classURH__CatalogSubsystem_1a2afc344bc584a1386e97396f8d09d5a1) | ETag of last GetCatalogAll call response.
`protected TOptional< FString > `[`GetCatalogXpAllETag`](#classURH__CatalogSubsystem_1ad175a18a4269df821470bedb02fb1311) | ETag of last GetCatalogXpAll call response.
`protected TOptional< FString > `[`GetCatalogPricePointsAllETag`](#classURH__CatalogSubsystem_1ac3e4a166ea225df77362bae21123d59b) | ETag of last GetCatalogPricePointsAll call response.
`protected TOptional< FString > `[`GetCatalogVendorsAllETag`](#classURH__CatalogSubsystem_1ae430f8bdbdf53105e786fecf43e580ab) | ETag of last GetCatalogVendorsAll call response.
`protected TOptional< FString > `[`GetCatalogTimeFramesAllETag`](#classURH__CatalogSubsystem_1acca5d440762e246fe4d6f90ad2470e26) | ETag of last GetCatalogTimeFramesAll call response.
`protected TOptional< FString > `[`GetCatalogInventoryBucketUseRuleSetsAllETag`](#classURH__CatalogSubsystem_1ae959ddd04f62604ce6edab0396fa8312) | ETag of last GetCatalogInventoryBucketUseRuleSetsAll call response.
`protected TMap< int32, TArray< FRH_CatalogCallBlock > > `[`PendingGetCatalogItemCalls`](#classURH__CatalogSubsystem_1a72a9e161cf234e6843e9b601e7bd925e) | Array of GetCatalogItemCalls yet to be sent to the API layer.
`protected TMap< int32, TArray< FRH_CatalogCallBlock > > `[`SubmittedGetCatalogItemCalls`](#classURH__CatalogSubsystem_1a661262ecd1024e523d6ab788f8e5ce22) | Array of GetCatalogItemCalls yet being executed by the API layer at this time.
`protected void `[`GetCatalogVendorSingle`](#classURH__CatalogSubsystem_1a4a686b1ffd6f371f6729e55046aeda94)`(int32 VendorId,const FRH_GenericSuccessWithErrorBlock & Delegate)` | Makes an API call for a single vendor Id.
`protected virtual void `[`OnGetCatalogVendorResponseUpdate`](#classURH__CatalogSubsystem_1aae9b116d796903410f650fae153a9653)`(const TGetCatalogVendor::Response & Resp,int32 VendorId)` | Handles the response to a successful Get Catalog Vendor call, updates local cache.
`protected virtual void `[`OnGetCatalogVendorResponseComplete`](#classURH__CatalogSubsystem_1aa39b048866d0ca14be929c57def620d3)`(bool bSuccess,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` & ErrorInfo,int32 VendorId,FRH_GenericSuccessWithErrorBlock Delegate)` | Handles the response to a Get Catalog Vendor call, handles completion and processing of any followup requests.
`protected virtual void `[`ProcessVendorRequests`](#classURH__CatalogSubsystem_1affb7cb5f9008dc7a34273f3131981108)`()` | Processes the current vendor request list, kicking off any new requests that are needed, and completing existing requests that are done.
`protected virtual void `[`OnGetCatalogVendorsAllResponse`](#classURH__CatalogSubsystem_1ac3c4b548a43cfc37012c4d87f48d841a)`(const TGetCatalogVendorsAll::Response & Resp,const FRH_CatalogCallBlock Delegate)` | Handles the response to a Get Catalog Vendor All call.
`protected virtual void `[`OnGetCatalogAllResponse`](#classURH__CatalogSubsystem_1a4b7fa3b1e25ad75fa9b5746358606d8f)`(const TGetCatalogAll::Response & Resp,const FRH_CatalogCallBlock Delegate)` | Handles the response to a Get Catalog All call.
`protected virtual void `[`OnGetCatalogXpAllResponse`](#classURH__CatalogSubsystem_1adb23a545351426a6803d6fbd9b21b6ef)`(const TGetCatalogXpAll::Response & Resp,const FRH_CatalogCallBlock Delegate)` | Handles the response to a Get Catalog Xp All call.
`protected virtual void `[`OnGetCatalogItemResponse`](#classURH__CatalogSubsystem_1a203b5ee176ba1f147306b32706c93b66)`(const TGetCatalogItem::Response & Resp,int32 ItemId)` | Handles the response to a Get Catalog Item call.
`protected virtual void `[`OnGetCatalogInventoryBucketUseRuleSetsAllResponse`](#classURH__CatalogSubsystem_1a4205a89be06622188225bfb72e3ff951)`(const TGetCatalogInventoryBucketUseRuleSetsAll::Response & Resp,const FRH_CatalogCallBlock Delegate)` | Handles the response to a Get Catalog Inventory Bucked Use Rule Sets All call.
`protected virtual void `[`OnGetCatalogPricePointsAllResponse`](#classURH__CatalogSubsystem_1aab6a2dbd4ce611b316b781c346b72e82)`(const TGetCatalogPricePointsAll::Response & Resp,const FRH_CatalogCallBlock Delegate)` | Handles the response to a Get Catalog Price Points All call.
`protected virtual void `[`OnGetCatalogTimeFramesAllResponse`](#classURH__CatalogSubsystem_1ae6674c35a5c047efb22d2513a5a96a56)`(const TGetCatalogTimeFramesAll::Response & Resp,const FRH_CatalogCallBlock Delegate)` | Handles the response to a Get Catalog Time Frames All call.
`protected void `[`ParseAllXpTables`](#classURH__CatalogSubsystem_1a0da0440c219f11a65af436c93c6c7e76)`(const `[`FRHAPI_XpTables`](RHAPI_XpTables.md#structFRHAPI__XpTables)` & Content)` | Parses Xp Tables response into the Xp Table Map.
`protected void `[`ParseAllInventoryBucketUseRuleSets`](#classURH__CatalogSubsystem_1ad4785e6bfefa75c2d71e15e9050bbd2e)`(const `[`FRHAPI_InventoryBucketUseRuleSets`](RHAPI_InventoryBucketUseRuleSets.md#structFRHAPI__InventoryBucketUseRuleSets)` & Content)` | Parses Inventory Bucket Use Rule Sets response into the Inventory Bucket Use Ruleset Map.
`protected `[`URH_CatalogItem`](Catalog.md#classURH__CatalogItem)` * `[`ParseCatalogItem`](#classURH__CatalogSubsystem_1af777b480ca759d12227c7621e0f9f051)`(const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & CatalogItem,int32 ItemId)` | Parse a Catalog item into the class for it and stores it in the Catalog Items Map.
`protected virtual void `[`InitPropertiesWithDefaultValues`](#classURH__CatalogSubsystem_1a381093c63e6e9c4ed6b66bfe04b7901d)`()` | Initializes the subsystem with defaults for its cached data.
`protected virtual void `[`Tick`](#classURH__CatalogSubsystem_1a3516a7d39bcbf01f5d2706ea9afc1f28)`(float DeltaTime)` | Kick off pending requests to the API layer.
`protected inline virtual bool `[`IsTickable`](#classURH__CatalogSubsystem_1af205f84045baf67b117220fec2015ca0)`() const` | Determine if there are pending requests.
`protected inline virtual TStatId `[`GetStatId`](#classURH__CatalogSubsystem_1ac27e9ac9430094c764f9e68580a21f5e)`() const` | Gets the catalog subsystem stat Id.
`typedef `[`TGetCatalogAll`](#classURH__CatalogSubsystem_1a1cf3a5efca0964238be8bde13cdc27f2) | Type Define for Get Catalog calls.
`typedef `[`TGetCatalogXpAll`](#classURH__CatalogSubsystem_1a9f1bf618dbf35a16731771f43eb7b14d) | Type Define for Get Catalog Xp calls.
`typedef `[`TGetCatalogInventoryBucketUseRuleSetsAll`](#classURH__CatalogSubsystem_1aac9d74ede66689a3da316964f45d1cbd) | Type Define for Get Catalog Inventory Bucket Use Rule Set calls.
`typedef `[`TGetCatalogPricePointsAll`](#classURH__CatalogSubsystem_1ac28fcb22f4619e06d5249cf8ff76f105) | Type Define for Get Catalog Price Point calls.
`typedef `[`TGetCatalogTimeFramesAll`](#classURH__CatalogSubsystem_1aad12c4198dae13e2f6c8a8d76511d511) | Type Define for Get Catalog Time Frame calls.
`typedef `[`TGetCatalogVendor`](#classURH__CatalogSubsystem_1a80dd740594cfa64af2675aeb86bc87e8) | Type Define for Get Catalog Vendor calls.
`typedef `[`TGetCatalogVendorsAll`](#classURH__CatalogSubsystem_1aaf8a27ead9394b0bad26a875bef93a69) | Type Define for Get Catalog Vendor All calls.
`typedef `[`TGetCatalogItem`](#classURH__CatalogSubsystem_1a81351c9b4871f7529a992d978cbc7f6d) | Type Define for Get Catalog Item calls.

### Members

#### `public FRH_CatalogItemUpdatedDelegate `[`OnCatalogItemAdded`](#classURH__CatalogSubsystem_1a60e2593b662b6023fda6401228bea592) <a id="classURH__CatalogSubsystem_1a60e2593b662b6023fda6401228bea592"></a>

Delegate that fires whenever a catalog item is added to the cashed catalog items.

#### `public virtual void `[`Initialize`](#classURH__CatalogSubsystem_1a4743c425eba445a9c55c5263b43605a9)`()` <a id="classURH__CatalogSubsystem_1a4743c425eba445a9c55c5263b43605a9"></a>

Initialize the subsystem.

#### `public virtual void `[`Deinitialize`](#classURH__CatalogSubsystem_1afef8ec5b86a36a604805bf32a279773c)`()` <a id="classURH__CatalogSubsystem_1afef8ec5b86a36a604805bf32a279773c"></a>

Safely tears down the subsystem.

#### `public void `[`GetCatalogAll`](#classURH__CatalogSubsystem_1ae79063c7c03378e80d0e14f24688df3e)`(const FRH_CatalogCallBlock & Delegate)` <a id="classURH__CatalogSubsystem_1ae79063c7c03378e80d0e14f24688df3e"></a>

Gets the entire catalog at once.

#### Parameters
* `Delegate` Callback when the API call is complete.

#### `public void `[`GetCatalogXpAll`](#classURH__CatalogSubsystem_1a412ea83cfb2fb9aafcbefc2a49f6557d)`(const FRH_CatalogCallBlock & Delegate)` <a id="classURH__CatalogSubsystem_1a412ea83cfb2fb9aafcbefc2a49f6557d"></a>

Gets all of the xp tables in the catalog.

#### Parameters
* `Delegate` Callback when the API call is complete.

#### `public void `[`GetCatalogItem`](#classURH__CatalogSubsystem_1a71028a2a6b3ea3eafddca54b677749e6)`(int32 ItemId,const FRH_CatalogCallBlock & Delegate)` <a id="classURH__CatalogSubsystem_1a71028a2a6b3ea3eafddca54b677749e6"></a>

Gets a specific item from the catalog.

#### Parameters
* `ItemId` The item id of the item to get. 

* `Delegate` Callback when the API call is complete.

#### `public void `[`GetCatalogInventoryBucketUseRuleSetsAll`](#classURH__CatalogSubsystem_1a7a231220866a163574c95c0191111608)`(const FRH_CatalogCallBlock & Delegate)` <a id="classURH__CatalogSubsystem_1a7a231220866a163574c95c0191111608"></a>

Gets all of the inventory bucket rulesets from the catalog.

#### Parameters
* `Delegate` Callback when the API call is complete.

#### `public void `[`GetCatalogPricePointsAll`](#classURH__CatalogSubsystem_1a1d664d4dfd15ef90b7d5f9eb4dd03d84)`(const FRH_CatalogCallBlock & Delegate)` <a id="classURH__CatalogSubsystem_1a1d664d4dfd15ef90b7d5f9eb4dd03d84"></a>

Gets all of the price points from the catalog.

#### Parameters
* `Delegate` Callback when the API call is complete.

#### `public void `[`GetCatalogTimeFramesAll`](#classURH__CatalogSubsystem_1acc8cbc32148f99f291d6942fc06ff420)`(const FRH_CatalogCallBlock & Delegate)` <a id="classURH__CatalogSubsystem_1acc8cbc32148f99f291d6942fc06ff420"></a>

Gets all of the time frames from the catalog.

#### Parameters
* `Delegate` Callback when the API call is complete.

#### `public void `[`GetCatalogVendor`](#classURH__CatalogSubsystem_1a1c391d9be422da9d41cd9139184d082a)`(const `[`FRHVendorGetRequest`](Catalog.md#structFRHVendorGetRequest)` & VendorRequest)` <a id="classURH__CatalogSubsystem_1a1c391d9be422da9d41cd9139184d082a"></a>

Gets the vendors requested as well as their sub vendors.

#### Parameters
* `VendorRequest` The vendor request data for the call with list of vendors and callback on complete. 

* `bRecurseSubvendors` Whether to recursively request subvendors, DEPRECATED

#### `public void `[`GetCatalogVendorsAll`](#classURH__CatalogSubsystem_1ab4903e2a1b6805d3e278b561882b09ad)`(const FRH_CatalogCallBlock & Delegate)` <a id="classURH__CatalogSubsystem_1ab4903e2a1b6805d3e278b561882b09ad"></a>

Gets the all catalog vendors.

#### Parameters
* `Delegate` Callback when the API call is complete.

#### `public bool `[`GetXpTable`](#classURH__CatalogSubsystem_1ada2141a6424f5ac1b9260569040f107c)`(int32 XpTableId,`[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` & XpTable) const` <a id="classURH__CatalogSubsystem_1ada2141a6424f5ac1b9260569040f107c"></a>

Gets a cached Xp Table.

#### Parameters
* `XpTableId` The xp table id of the xp table to get. 

* `XpTable` The xp table to be returned. 

#### Returns
If true, the Xp Table was found.

#### `public inline bool `[`GetVendorItemByLootId`](#classURH__CatalogSubsystem_1a76b6de7e6855b091c7fb2c86c7b33739)`(int32 LootId,`[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` & LootItem) const` <a id="classURH__CatalogSubsystem_1a76b6de7e6855b091c7fb2c86c7b33739"></a>

Gets a cached vendor item by its loot id.

#### Parameters
* `LootId` The Loot Id used to look up the vendor item. 

* `LootItem` The loot item to be returned. 

#### Returns
If true, the loot item was found.

#### `public inline `[`URH_CatalogItem`](Catalog.md#classURH__CatalogItem)` * `[`GetCatalogItemByItemId`](#classURH__CatalogSubsystem_1aa69398be03874c33398b96e523c72863)`(int32 ItemId) const` <a id="classURH__CatalogSubsystem_1aa69398be03874c33398b96e523c72863"></a>

Gets a cached catalog item by its item id.

#### Parameters
* `ItemId` The Item Id used to look up the catalog item. 

#### Returns
The catalog item if found, otherwise nullptr.

#### `public inline bool `[`GetVendorById`](#classURH__CatalogSubsystem_1a17ffa20cdeea67b34ba968f9509ca3c3)`(int32 VendorId,`[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` & Vendor) const` <a id="classURH__CatalogSubsystem_1a17ffa20cdeea67b34ba968f9509ca3c3"></a>

Gets a cached vendor by its vendor id.

#### Parameters
* `VendorId` The Vendor Id used to look up the vendor. 

* `Vendor` The vendor to be returned. 

#### Returns
If true, the vendor was found.

#### `public inline bool `[`GetPricePointById`](#classURH__CatalogSubsystem_1ae055f143927ec26a0ada9072a1f609bd)`(const FGuid & PricePointGuid,`[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` & PricePoint) const` <a id="classURH__CatalogSubsystem_1ae055f143927ec26a0ada9072a1f609bd"></a>

Gets a cached price point by its price point guid.

#### Parameters
* `PricePointGuid` The price point guid used to look up the vendor. 

* `PricePoint` The price point to be returned. 

#### Returns
If true, the price point was found.

#### `public inline bool `[`GetPricePointById`](#classURH__CatalogSubsystem_1a102f2ca24bc0de032bbadccc2748faf3)`(int32 TimeFrameId,`[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` & TimeFrame) const` <a id="classURH__CatalogSubsystem_1a102f2ca24bc0de032bbadccc2748faf3"></a>

Gets a cached time frame by its Time Frame Id.

#### Parameters
* `TimeFrameId` The id used to look up the time frame. 

* `TimeFrame` The time frame to be returned. 

#### Returns
If true, the time frame was found.

#### `public bool `[`CanRulesetUsePlatformForBucket`](#classURH__CatalogSubsystem_1af7b597a0de2ea0386b81c5ae52eecb0e)`(const FString & InventoryBucketRulesetId,ERHAPI_InventoryBucket TargetBucket,ERHAPI_InventoryBucket ItemInventoryBucket) const` <a id="classURH__CatalogSubsystem_1af7b597a0de2ea0386b81c5ae52eecb0e"></a>

Checks if the ruleset can use the platform for the bucket.

#### Parameters
* `InventoryBucketRulesetId` The ruleset bucket to be used to evaluate the usage. 

* `TargetBucket` The bucket that should be used to evaluate the usage. 

* `ItemInventoryBucket` The bucket the item is in that is being evaluated. 

#### Returns
If true, the item can be used for the specified bucket.

#### `public inline const TMap< int32, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > & `[`GetVendors`](#classURH__CatalogSubsystem_1a8aee4777f8cf2ad75a728f32f53d8689)`() const` <a id="classURH__CatalogSubsystem_1a8aee4777f8cf2ad75a728f32f53d8689"></a>

Gets the cached vendors.

#### `public inline const TMap< int32, `[`URH_CatalogItem`](Catalog.md#classURH__CatalogItem)` * > & `[`GetCatalogItems`](#classURH__CatalogSubsystem_1a8e2a7314ac7b8dab327e50f6673ee53c)`() const` <a id="classURH__CatalogSubsystem_1a8e2a7314ac7b8dab327e50f6673ee53c"></a>

Gets the cached catalog items.

#### `public inline const TMap< int32, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & `[`GetXpTables`](#classURH__CatalogSubsystem_1a68a4899eba2ef6e09dfff3457453473d)`() const` <a id="classURH__CatalogSubsystem_1a68a4899eba2ef6e09dfff3457453473d"></a>

Gets the xp tables.

#### `public inline const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & `[`GetInventoryBucketUseRuleSets`](#classURH__CatalogSubsystem_1acb80d482d68e915f7d6ae5f512c00784)`() const` <a id="classURH__CatalogSubsystem_1acb80d482d68e915f7d6ae5f512c00784"></a>

Gets the cached inventory bucket rule sets.

#### `public inline const TMap< FGuid, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > & `[`GetPricePoints`](#classURH__CatalogSubsystem_1a49203f3840ba095c3fad79c6473e7309)`() const` <a id="classURH__CatalogSubsystem_1a49203f3840ba095c3fad79c6473e7309"></a>

Gets the cached price points.

#### `public inline const TMap< int32, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & `[`GetTimeFrames`](#classURH__CatalogSubsystem_1a018753e1a3c65f6ac2151f358f0a7392)`() const` <a id="classURH__CatalogSubsystem_1a018753e1a3c65f6ac2151f358f0a7392"></a>

Gets the cached time frames.

#### `public inline virtual FString `[`GetDefaultCatalogFileExportPath`](#classURH__CatalogSubsystem_1a23932307af9e67376c78fc0452318e2d)`() const` <a id="classURH__CatalogSubsystem_1a23932307af9e67376c78fc0452318e2d"></a>

#### `public void `[`ExportCatalogToFile`](#classURH__CatalogSubsystem_1ac3af3d8cf0c669fd7b0f0b24d6641575)`(const FString & FilePath,const FRH_GenericSuccessWithErrorBlock & Delegate) const` <a id="classURH__CatalogSubsystem_1ac3af3d8cf0c669fd7b0f0b24d6641575"></a>

Retrieve all catalog data and save it to a file.

#### Parameters
* `FilePath` The file path to save the catalog data to. 

* `Delegate` Callback when the API call is complete and the file is written.

#### `public void `[`ImportCatalogFromFile`](#classURH__CatalogSubsystem_1ade8cc078f3c2a8a26737f4eca9b294e7)`(const FString & FilePath,const FRH_CatalogCallBlock & Delegate)` <a id="classURH__CatalogSubsystem_1ade8cc078f3c2a8a26737f4eca9b294e7"></a>

Retrieve all catalog data from a file and load it into the catalog.

#### Parameters
* `FilePath` The file path to load the catalog data from. 

* `Delegate` Callback when the API call is complete and the file is read.

#### `protected TArray< `[`FRH_VendorRequestState`](Catalog.md#structFRH__VendorRequestState)` > `[`VendorRequests`](#classURH__CatalogSubsystem_1a47050a4e6bd28f63daf5efa2879507cc) <a id="classURH__CatalogSubsystem_1a47050a4e6bd28f63daf5efa2879507cc"></a>

Array of active vendor requests that are in flight and not responded ot yet.

#### `protected TMap< int32, TWeakPtr< `[`FRH_AsyncTaskHelper`](Common.md#classFRH__AsyncTaskHelper)` > > `[`InFlightVendorRequests`](#classURH__CatalogSubsystem_1a38d97ecb70a4b341ec475ae2fabd6d15) <a id="classURH__CatalogSubsystem_1a38d97ecb70a4b341ec475ae2fabd6d15"></a>

Map of all vendor requests that are in flight

#### `protected TMap< int32, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > `[`XpTables`](#classURH__CatalogSubsystem_1a659700dd6e8da2c852227489dce93c2a) <a id="classURH__CatalogSubsystem_1a659700dd6e8da2c852227489dce93c2a"></a>

Xp Table Id to Xp Table Map.

#### `protected TMap< int32, `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` > `[`CatalogVendors`](#classURH__CatalogSubsystem_1ac2c9e75cab5a2282cd7eabcb76d206d7) <a id="classURH__CatalogSubsystem_1ac2c9e75cab5a2282cd7eabcb76d206d7"></a>

Vendor Id to Vendor Map.

#### `protected TMap< int32, `[`URH_CatalogItem`](Catalog.md#classURH__CatalogItem)` * > `[`CatalogItems`](#classURH__CatalogSubsystem_1a4ef4e31b1427345e2d4cf252142eb7ce) <a id="classURH__CatalogSubsystem_1a4ef4e31b1427345e2d4cf252142eb7ce"></a>

Item Id to Catalog Item Map.

#### `protected TMap< int32, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > `[`CatalogLootItems`](#classURH__CatalogSubsystem_1a59522a6a14340b0183038eb9afeb32a4) <a id="classURH__CatalogSubsystem_1a59522a6a14340b0183038eb9afeb32a4"></a>

Loot Id to Catalog Vendor Item Map.

#### `protected TMap< int32, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > `[`TimeFrames`](#classURH__CatalogSubsystem_1a7903aa3c86221227f123eb1243febf96) <a id="classURH__CatalogSubsystem_1a7903aa3c86221227f123eb1243febf96"></a>

Timeframe Id to Timeframe Map.

#### `protected TMap< FGuid, `[`FRHAPI_PricePoint`](RHAPI_PricePoint.md#structFRHAPI__PricePoint)` > `[`CatalogPricePoints`](#classURH__CatalogSubsystem_1a4121dd65bdf66c3d8bb1e0052f02e38c) <a id="classURH__CatalogSubsystem_1a4121dd65bdf66c3d8bb1e0052f02e38c"></a>

Price Point ID to Price Points.

#### `protected TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > `[`InventoryBucketUseRuleSets`](#classURH__CatalogSubsystem_1a2a9ad401aa84679f58df5890a81a70ad) <a id="classURH__CatalogSubsystem_1a2a9ad401aa84679f58df5890a81a70ad"></a>

Inventory Bucket to Inventory Bucket Use Ruleset Map.

#### `protected TOptional< FString > `[`GetCatalogAllETag`](#classURH__CatalogSubsystem_1a2afc344bc584a1386e97396f8d09d5a1) <a id="classURH__CatalogSubsystem_1a2afc344bc584a1386e97396f8d09d5a1"></a>

ETag of last GetCatalogAll call response.

#### `protected TOptional< FString > `[`GetCatalogXpAllETag`](#classURH__CatalogSubsystem_1ad175a18a4269df821470bedb02fb1311) <a id="classURH__CatalogSubsystem_1ad175a18a4269df821470bedb02fb1311"></a>

ETag of last GetCatalogXpAll call response.

#### `protected TOptional< FString > `[`GetCatalogPricePointsAllETag`](#classURH__CatalogSubsystem_1ac3e4a166ea225df77362bae21123d59b) <a id="classURH__CatalogSubsystem_1ac3e4a166ea225df77362bae21123d59b"></a>

ETag of last GetCatalogPricePointsAll call response.

#### `protected TOptional< FString > `[`GetCatalogVendorsAllETag`](#classURH__CatalogSubsystem_1ae430f8bdbdf53105e786fecf43e580ab) <a id="classURH__CatalogSubsystem_1ae430f8bdbdf53105e786fecf43e580ab"></a>

ETag of last GetCatalogVendorsAll call response.

#### `protected TOptional< FString > `[`GetCatalogTimeFramesAllETag`](#classURH__CatalogSubsystem_1acca5d440762e246fe4d6f90ad2470e26) <a id="classURH__CatalogSubsystem_1acca5d440762e246fe4d6f90ad2470e26"></a>

ETag of last GetCatalogTimeFramesAll call response.

#### `protected TOptional< FString > `[`GetCatalogInventoryBucketUseRuleSetsAllETag`](#classURH__CatalogSubsystem_1ae959ddd04f62604ce6edab0396fa8312) <a id="classURH__CatalogSubsystem_1ae959ddd04f62604ce6edab0396fa8312"></a>

ETag of last GetCatalogInventoryBucketUseRuleSetsAll call response.

#### `protected TMap< int32, TArray< FRH_CatalogCallBlock > > `[`PendingGetCatalogItemCalls`](#classURH__CatalogSubsystem_1a72a9e161cf234e6843e9b601e7bd925e) <a id="classURH__CatalogSubsystem_1a72a9e161cf234e6843e9b601e7bd925e"></a>

Array of GetCatalogItemCalls yet to be sent to the API layer.

#### `protected TMap< int32, TArray< FRH_CatalogCallBlock > > `[`SubmittedGetCatalogItemCalls`](#classURH__CatalogSubsystem_1a661262ecd1024e523d6ab788f8e5ce22) <a id="classURH__CatalogSubsystem_1a661262ecd1024e523d6ab788f8e5ce22"></a>

Array of GetCatalogItemCalls yet being executed by the API layer at this time.

#### `protected void `[`GetCatalogVendorSingle`](#classURH__CatalogSubsystem_1a4a686b1ffd6f371f6729e55046aeda94)`(int32 VendorId,const FRH_GenericSuccessWithErrorBlock & Delegate)` <a id="classURH__CatalogSubsystem_1a4a686b1ffd6f371f6729e55046aeda94"></a>

Makes an API call for a single vendor Id.

#### Parameters
* `VendorId` The Vendor to request.

#### `protected virtual void `[`OnGetCatalogVendorResponseUpdate`](#classURH__CatalogSubsystem_1aae9b116d796903410f650fae153a9653)`(const TGetCatalogVendor::Response & Resp,int32 VendorId)` <a id="classURH__CatalogSubsystem_1aae9b116d796903410f650fae153a9653"></a>

Handles the response to a successful Get Catalog Vendor call, updates local cache.

#### Parameters
* `Resp` Response given for the call 

* `VendorId` The Vendor Id that was requested.

#### `protected virtual void `[`OnGetCatalogVendorResponseComplete`](#classURH__CatalogSubsystem_1aa39b048866d0ca14be929c57def620d3)`(bool bSuccess,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` & ErrorInfo,int32 VendorId,FRH_GenericSuccessWithErrorBlock Delegate)` <a id="classURH__CatalogSubsystem_1aa39b048866d0ca14be929c57def620d3"></a>

Handles the response to a Get Catalog Vendor call, handles completion and processing of any followup requests.

#### Parameters
* `bSuccess` If the call was successful. 

* `ErrorInfo` The error information if the call failed. 

* `VendorId` The Vendor Id that was requested. 

* `Delegate` Delegate passed in for original call to respond to when call completes.

#### `protected virtual void `[`ProcessVendorRequests`](#classURH__CatalogSubsystem_1affb7cb5f9008dc7a34273f3131981108)`()` <a id="classURH__CatalogSubsystem_1affb7cb5f9008dc7a34273f3131981108"></a>

Processes the current vendor request list, kicking off any new requests that are needed, and completing existing requests that are done.

#### `protected virtual void `[`OnGetCatalogVendorsAllResponse`](#classURH__CatalogSubsystem_1ac3c4b548a43cfc37012c4d87f48d841a)`(const TGetCatalogVendorsAll::Response & Resp,const FRH_CatalogCallBlock Delegate)` <a id="classURH__CatalogSubsystem_1ac3c4b548a43cfc37012c4d87f48d841a"></a>

Handles the response to a Get Catalog Vendor All call.

#### Parameters
* `Resp` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes.

#### `protected virtual void `[`OnGetCatalogAllResponse`](#classURH__CatalogSubsystem_1a4b7fa3b1e25ad75fa9b5746358606d8f)`(const TGetCatalogAll::Response & Resp,const FRH_CatalogCallBlock Delegate)` <a id="classURH__CatalogSubsystem_1a4b7fa3b1e25ad75fa9b5746358606d8f"></a>

Handles the response to a Get Catalog All call.

#### Parameters
* `Resp` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes.

#### `protected virtual void `[`OnGetCatalogXpAllResponse`](#classURH__CatalogSubsystem_1adb23a545351426a6803d6fbd9b21b6ef)`(const TGetCatalogXpAll::Response & Resp,const FRH_CatalogCallBlock Delegate)` <a id="classURH__CatalogSubsystem_1adb23a545351426a6803d6fbd9b21b6ef"></a>

Handles the response to a Get Catalog Xp All call.

#### Parameters
* `Resp` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes.

#### `protected virtual void `[`OnGetCatalogItemResponse`](#classURH__CatalogSubsystem_1a203b5ee176ba1f147306b32706c93b66)`(const TGetCatalogItem::Response & Resp,int32 ItemId)` <a id="classURH__CatalogSubsystem_1a203b5ee176ba1f147306b32706c93b66"></a>

Handles the response to a Get Catalog Item call.

#### Parameters
* `Resp` Response given for the call. 

* `ItemId` The Item Id being requested.

#### `protected virtual void `[`OnGetCatalogInventoryBucketUseRuleSetsAllResponse`](#classURH__CatalogSubsystem_1a4205a89be06622188225bfb72e3ff951)`(const TGetCatalogInventoryBucketUseRuleSetsAll::Response & Resp,const FRH_CatalogCallBlock Delegate)` <a id="classURH__CatalogSubsystem_1a4205a89be06622188225bfb72e3ff951"></a>

Handles the response to a Get Catalog Inventory Bucked Use Rule Sets All call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes.

#### `protected virtual void `[`OnGetCatalogPricePointsAllResponse`](#classURH__CatalogSubsystem_1aab6a2dbd4ce611b316b781c346b72e82)`(const TGetCatalogPricePointsAll::Response & Resp,const FRH_CatalogCallBlock Delegate)` <a id="classURH__CatalogSubsystem_1aab6a2dbd4ce611b316b781c346b72e82"></a>

Handles the response to a Get Catalog Price Points All call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes.

#### `protected virtual void `[`OnGetCatalogTimeFramesAllResponse`](#classURH__CatalogSubsystem_1ae6674c35a5c047efb22d2513a5a96a56)`(const TGetCatalogTimeFramesAll::Response & Resp,const FRH_CatalogCallBlock Delegate)` <a id="classURH__CatalogSubsystem_1ae6674c35a5c047efb22d2513a5a96a56"></a>

Handles the response to a Get Catalog Time Frames All call.

#### Parameters
* `Resp` Response given for the call 

* `Delegate` Delegate passed in for original call to respond to when call completes.

#### `protected void `[`ParseAllXpTables`](#classURH__CatalogSubsystem_1a0da0440c219f11a65af436c93c6c7e76)`(const `[`FRHAPI_XpTables`](RHAPI_XpTables.md#structFRHAPI__XpTables)` & Content)` <a id="classURH__CatalogSubsystem_1a0da0440c219f11a65af436c93c6c7e76"></a>

Parses Xp Tables response into the Xp Table Map.

#### Parameters
* `Content` Xp Tables to parse.

#### `protected void `[`ParseAllInventoryBucketUseRuleSets`](#classURH__CatalogSubsystem_1ad4785e6bfefa75c2d71e15e9050bbd2e)`(const `[`FRHAPI_InventoryBucketUseRuleSets`](RHAPI_InventoryBucketUseRuleSets.md#structFRHAPI__InventoryBucketUseRuleSets)` & Content)` <a id="classURH__CatalogSubsystem_1ad4785e6bfefa75c2d71e15e9050bbd2e"></a>

Parses Inventory Bucket Use Rule Sets response into the Inventory Bucket Use Ruleset Map.

#### Parameters
* `Content` Inventory Bucket Use Rule Sets to parse.

#### `protected `[`URH_CatalogItem`](Catalog.md#classURH__CatalogItem)` * `[`ParseCatalogItem`](#classURH__CatalogSubsystem_1af777b480ca759d12227c7621e0f9f051)`(const `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` & CatalogItem,int32 ItemId)` <a id="classURH__CatalogSubsystem_1af777b480ca759d12227c7621e0f9f051"></a>

Parse a Catalog item into the class for it and stores it in the Catalog Items Map.

#### Parameters
* `CatalogItem` Item to be parsed. 

* `ItemId` Item Id of the item being parsed. 

#### Returns
The Catalog Item as its class.

#### `protected virtual void `[`InitPropertiesWithDefaultValues`](#classURH__CatalogSubsystem_1a381093c63e6e9c4ed6b66bfe04b7901d)`()` <a id="classURH__CatalogSubsystem_1a381093c63e6e9c4ed6b66bfe04b7901d"></a>

Initializes the subsystem with defaults for its cached data.

#### `protected virtual void `[`Tick`](#classURH__CatalogSubsystem_1a3516a7d39bcbf01f5d2706ea9afc1f28)`(float DeltaTime)` <a id="classURH__CatalogSubsystem_1a3516a7d39bcbf01f5d2706ea9afc1f28"></a>

Kick off pending requests to the API layer.

#### `protected inline virtual bool `[`IsTickable`](#classURH__CatalogSubsystem_1af205f84045baf67b117220fec2015ca0)`() const` <a id="classURH__CatalogSubsystem_1af205f84045baf67b117220fec2015ca0"></a>

Determine if there are pending requests.

#### `protected inline virtual TStatId `[`GetStatId`](#classURH__CatalogSubsystem_1ac27e9ac9430094c764f9e68580a21f5e)`() const` <a id="classURH__CatalogSubsystem_1ac27e9ac9430094c764f9e68580a21f5e"></a>

Gets the catalog subsystem stat Id.

#### `typedef `[`TGetCatalogAll`](#classURH__CatalogSubsystem_1a1cf3a5efca0964238be8bde13cdc27f2) <a id="classURH__CatalogSubsystem_1a1cf3a5efca0964238be8bde13cdc27f2"></a>

Type Define for Get Catalog calls.

#### `typedef `[`TGetCatalogXpAll`](#classURH__CatalogSubsystem_1a9f1bf618dbf35a16731771f43eb7b14d) <a id="classURH__CatalogSubsystem_1a9f1bf618dbf35a16731771f43eb7b14d"></a>

Type Define for Get Catalog Xp calls.

#### `typedef `[`TGetCatalogInventoryBucketUseRuleSetsAll`](#classURH__CatalogSubsystem_1aac9d74ede66689a3da316964f45d1cbd) <a id="classURH__CatalogSubsystem_1aac9d74ede66689a3da316964f45d1cbd"></a>

Type Define for Get Catalog Inventory Bucket Use Rule Set calls.

#### `typedef `[`TGetCatalogPricePointsAll`](#classURH__CatalogSubsystem_1ac28fcb22f4619e06d5249cf8ff76f105) <a id="classURH__CatalogSubsystem_1ac28fcb22f4619e06d5249cf8ff76f105"></a>

Type Define for Get Catalog Price Point calls.

#### `typedef `[`TGetCatalogTimeFramesAll`](#classURH__CatalogSubsystem_1aad12c4198dae13e2f6c8a8d76511d511) <a id="classURH__CatalogSubsystem_1aad12c4198dae13e2f6c8a8d76511d511"></a>

Type Define for Get Catalog Time Frame calls.

#### `typedef `[`TGetCatalogVendor`](#classURH__CatalogSubsystem_1a80dd740594cfa64af2675aeb86bc87e8) <a id="classURH__CatalogSubsystem_1a80dd740594cfa64af2675aeb86bc87e8"></a>

Type Define for Get Catalog Vendor calls.

#### `typedef `[`TGetCatalogVendorsAll`](#classURH__CatalogSubsystem_1aaf8a27ead9394b0bad26a875bef93a69) <a id="classURH__CatalogSubsystem_1aaf8a27ead9394b0bad26a875bef93a69"></a>

Type Define for Get Catalog Vendor All calls.

#### `typedef `[`TGetCatalogItem`](#classURH__CatalogSubsystem_1a81351c9b4871f7529a992d978cbc7f6d) <a id="classURH__CatalogSubsystem_1a81351c9b4871f7529a992d978cbc7f6d"></a>

Type Define for Get Catalog Item calls.

## class `URH_CatalogBlueprintLibrary` <a id="classURH__CatalogBlueprintLibrary"></a>

```
class URH_CatalogBlueprintLibrary
  : public UBlueprintFunctionLibrary
```

Catalog Blueprint Library with helper methods for API structs.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------

### Members

## struct `FRHVendorGetRequest` <a id="structFRHVendorGetRequest"></a>

Vendor Request struct used to encapsulate a request to get a vendors and the callback delegate.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FRH_CatalogCallBlock `[`Delegate`](#structFRHVendorGetRequest_1ac3903422f9becf0ec9efbf01336b2e34) | Delegate callback when all vendors have been fetched.
`public TArray< int32 > `[`VendorIds`](#structFRHVendorGetRequest_1ab2be5bbe02318acf5d90f7c90d4002d4) | Array of outstanding vendor requests to complete this vendor get.
`public bool `[`bRecurseSubvendors`](#structFRHVendorGetRequest_1a6f729ac572de32c23ff55bd96cbeedac) | 
`public bool `[`bSkipCachedVendors`](#structFRHVendorGetRequest_1a699a1c691f104b0cf02561646336ab79) | 
`public inline  `[`FRHVendorGetRequest`](#structFRHVendorGetRequest_1a0a8a4ff4b74254933725968cb46869cb)`()` | Default Constructor.
`public inline  `[`FRHVendorGetRequest`](#structFRHVendorGetRequest_1a3ae63c4382710be88bac03888a0a1471)`(const TArray< int32 > & InVendorIds)` | Constructor with vendor Id List.
`public inline  `[`FRHVendorGetRequest`](#structFRHVendorGetRequest_1a3db335a857c4d1ead61bb82410e2b0a6)`(const FRH_CatalogCallBlock & InDelegate,const TArray< int32 > & InVendorIds)` | Constructor with vendor Id List and callback delegate.

### Members

#### `public FRH_CatalogCallBlock `[`Delegate`](#structFRHVendorGetRequest_1ac3903422f9becf0ec9efbf01336b2e34) <a id="structFRHVendorGetRequest_1ac3903422f9becf0ec9efbf01336b2e34"></a>

Delegate callback when all vendors have been fetched.

#### `public TArray< int32 > `[`VendorIds`](#structFRHVendorGetRequest_1ab2be5bbe02318acf5d90f7c90d4002d4) <a id="structFRHVendorGetRequest_1ab2be5bbe02318acf5d90f7c90d4002d4"></a>

Array of outstanding vendor requests to complete this vendor get.

#### `public bool `[`bRecurseSubvendors`](#structFRHVendorGetRequest_1a6f729ac572de32c23ff55bd96cbeedac) <a id="structFRHVendorGetRequest_1a6f729ac572de32c23ff55bd96cbeedac"></a>

#### `public bool `[`bSkipCachedVendors`](#structFRHVendorGetRequest_1a699a1c691f104b0cf02561646336ab79) <a id="structFRHVendorGetRequest_1a699a1c691f104b0cf02561646336ab79"></a>

#### `public inline  `[`FRHVendorGetRequest`](#structFRHVendorGetRequest_1a0a8a4ff4b74254933725968cb46869cb)`()` <a id="structFRHVendorGetRequest_1a0a8a4ff4b74254933725968cb46869cb"></a>

Default Constructor.

#### `public inline  `[`FRHVendorGetRequest`](#structFRHVendorGetRequest_1a3ae63c4382710be88bac03888a0a1471)`(const TArray< int32 > & InVendorIds)` <a id="structFRHVendorGetRequest_1a3ae63c4382710be88bac03888a0a1471"></a>

Constructor with vendor Id List.

#### Parameters
* `InVendorIds` List of vendor Ids to get.

#### `public inline  `[`FRHVendorGetRequest`](#structFRHVendorGetRequest_1a3db335a857c4d1ead61bb82410e2b0a6)`(const FRH_CatalogCallBlock & InDelegate,const TArray< int32 > & InVendorIds)` <a id="structFRHVendorGetRequest_1a3db335a857c4d1ead61bb82410e2b0a6"></a>

Constructor with vendor Id List and callback delegate.

#### Parameters
* `InDelegate` Delegate to call when vendor fetch completes. 

* `InVendorIds` List of vendor Ids to get.

## struct `FRH_VendorRequestState` <a id="structFRH__VendorRequestState"></a>

Vendor Request struct used to encapsulate a request to get a vendors and the callback delegate.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TWeakObjectPtr< class `[`URH_CatalogSubsystem`](Catalog.md#classURH__CatalogSubsystem)` > `[`Catalog`](#structFRH__VendorRequestState_1a0a1f6bced6ff93a5bc2fe024d808692b) | 
`public `[`FRHVendorGetRequest`](Catalog.md#structFRHVendorGetRequest)` `[`Request`](#structFRH__VendorRequestState_1a7a43cfaf8c7fc1549be0865758ba73e6) | Array of outstanding vendor requests to complete this vendor get.
`public TArray< int32 > `[`VendorsReceived`](#structFRH__VendorRequestState_1aaca5a9f19792328506320e52dd8adf4c) | A list of vendors received since this request was made.
`public inline  `[`FRH_VendorRequestState`](#structFRH__VendorRequestState_1a433024cb122241e730d7f74e089555c7)`()` | Default Constructor.
`public inline  `[`FRH_VendorRequestState`](#structFRH__VendorRequestState_1ad105807265a74ba9fdd22a5b0dde609b)`(class `[`URH_CatalogSubsystem`](Catalog.md#classURH__CatalogSubsystem)` * InCatalog,const `[`FRHVendorGetRequest`](Catalog.md#structFRHVendorGetRequest)` & InRequest)` | Constructor with a request and a subsystem.
`public inline void `[`NotifyVendorReceived`](#structFRH__VendorRequestState_1ac15f3cc597ad59ca9c4a8c9f0771d8dc)`(int32 VendorId,const `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` & Vendor)` | Notify that a vendor has been received.
`public inline bool `[`NotifyVendorFailure`](#structFRH__VendorRequestState_1ab5f49e5f9ca93b57001c5f4e331bd607)`(int32 VendorId)` | Notify that a vendor has failed to be received.
`public TArray< int32 > `[`GetAllKnownVendorIds`](#structFRH__VendorRequestState_1ac05513f597b43a4fca4904dabc697c2a)`() const` | Get a list of all currently known vendors associated with this request.
`public TArray< int32 > `[`GetAwaitedVendorIds`](#structFRH__VendorRequestState_1a5bf934f157ac507c37c8e22f8fc0e1e1)`() const` | Get a list of all currently known vendors this request is waiting on.
`public inline bool `[`IsComplete`](#structFRH__VendorRequestState_1a3f383f30f310b24875dc6ed547cca620)`(TArray< int32 > & OutAwaitedVendors) const` | Check if all vendors have been received, and fire delegate if so.

### Members

#### `public TWeakObjectPtr< class `[`URH_CatalogSubsystem`](Catalog.md#classURH__CatalogSubsystem)` > `[`Catalog`](#structFRH__VendorRequestState_1a0a1f6bced6ff93a5bc2fe024d808692b) <a id="structFRH__VendorRequestState_1a0a1f6bced6ff93a5bc2fe024d808692b"></a>

#### `public `[`FRHVendorGetRequest`](Catalog.md#structFRHVendorGetRequest)` `[`Request`](#structFRH__VendorRequestState_1a7a43cfaf8c7fc1549be0865758ba73e6) <a id="structFRH__VendorRequestState_1a7a43cfaf8c7fc1549be0865758ba73e6"></a>

Array of outstanding vendor requests to complete this vendor get.

#### `public TArray< int32 > `[`VendorsReceived`](#structFRH__VendorRequestState_1aaca5a9f19792328506320e52dd8adf4c) <a id="structFRH__VendorRequestState_1aaca5a9f19792328506320e52dd8adf4c"></a>

A list of vendors received since this request was made.

#### `public inline  `[`FRH_VendorRequestState`](#structFRH__VendorRequestState_1a433024cb122241e730d7f74e089555c7)`()` <a id="structFRH__VendorRequestState_1a433024cb122241e730d7f74e089555c7"></a>

Default Constructor.

#### `public inline  `[`FRH_VendorRequestState`](#structFRH__VendorRequestState_1ad105807265a74ba9fdd22a5b0dde609b)`(class `[`URH_CatalogSubsystem`](Catalog.md#classURH__CatalogSubsystem)` * InCatalog,const `[`FRHVendorGetRequest`](Catalog.md#structFRHVendorGetRequest)` & InRequest)` <a id="structFRH__VendorRequestState_1ad105807265a74ba9fdd22a5b0dde609b"></a>

Constructor with a request and a subsystem.

#### Parameters
* `InCatalog` The Catalog Subsystem to use. 

* `InRequest` The request to use.

#### `public inline void `[`NotifyVendorReceived`](#structFRH__VendorRequestState_1ac15f3cc597ad59ca9c4a8c9f0771d8dc)`(int32 VendorId,const `[`FRHAPI_Vendor`](RHAPI_Vendor.md#structFRHAPI__Vendor)` & Vendor)` <a id="structFRH__VendorRequestState_1ac15f3cc597ad59ca9c4a8c9f0771d8dc"></a>

Notify that a vendor has been received.

#### Parameters
* `VendorId` The VendorID received 

* `Vendor` The Vendor data received

#### `public inline bool `[`NotifyVendorFailure`](#structFRH__VendorRequestState_1ab5f49e5f9ca93b57001c5f4e331bd607)`(int32 VendorId)` <a id="structFRH__VendorRequestState_1ab5f49e5f9ca93b57001c5f4e331bd607"></a>

Notify that a vendor has failed to be received.

#### Parameters
* `VendorId` The VendorID that failed 

#### Returns
Whether the vendor was awaited and the request should be failed

#### `public TArray< int32 > `[`GetAllKnownVendorIds`](#structFRH__VendorRequestState_1ac05513f597b43a4fca4904dabc697c2a)`() const` <a id="structFRH__VendorRequestState_1ac05513f597b43a4fca4904dabc697c2a"></a>

Get a list of all currently known vendors associated with this request.

#### `public TArray< int32 > `[`GetAwaitedVendorIds`](#structFRH__VendorRequestState_1a5bf934f157ac507c37c8e22f8fc0e1e1)`() const` <a id="structFRH__VendorRequestState_1a5bf934f157ac507c37c8e22f8fc0e1e1"></a>

Get a list of all currently known vendors this request is waiting on.

#### `public inline bool `[`IsComplete`](#structFRH__VendorRequestState_1a3f383f30f310b24875dc6ed547cca620)`(TArray< int32 > & OutAwaitedVendors) const` <a id="structFRH__VendorRequestState_1a3f383f30f310b24875dc6ed547cca620"></a>

Check if all vendors have been received, and fire delegate if so.

#### Parameters
* `OutAwaitedVendors` List of vendors that are still awaited 

#### Returns
If all vendors have been received

