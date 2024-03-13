---
title: URH_CatalogItem Class
---Inherits from UObject

class used to define a Catalog Item.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[ETag](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1a8c1dbd0b72804d0d46c41cd75108f53e)|The identifier for the versioning of the item.|
|[FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item)|[APIItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1a40e0d83cfeae3ff06466990602707b94)|Copy of the underlying Catalog item.|
|int32|[ItemId](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1a51b19d9d9500568414f08f3a4d4b48a7)|The Item Id.|
|ERHAPI_ItemType|[Type](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1a9c8c53126818d45b2bee7bd751830646)|The Item Type.|
|int32|[RefItemId](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1ae19d06a33a2b51b52910c08cd970389a)|The Ref Item Id.|
|int32|[AvailabilityFlags](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1a8331f819c80a760b623008ac44f9fbc6)|The Availability Flags.|
|int32|[EntitledLootId](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1a45cd555e4715d475b2a85b083dc6e4a0)|The Entitled Loot Id.|
|int32|[LevelXpTableId](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1a09044459692284b35f3b599ac64fb660)|The Associated Xp Table Id.|
|int32|[LevelVendorId](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1a8b89f8d9ef537973df84b16cc6fd6ff2)|The Associated Loot Table if an Xp Table is used.|
|int32|[CouponDiscountCurrencyItemId](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1adf7af4689022331b187bb68ef863bd72)|The Item Id this can be used to discount purchases with when used as a coupon.|
|float|[CouponDiscountPercentage](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1a3a6ec629d4bc492ff8e08cb8c8557f77)|The percentage of discount this gives when used as a coupon.|
|bool|[CouponConsumeOnUse](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1af8501ed83fb42d01ff8ba1029af0f6b1)|If set, then when used as a coupon, remove this from inventory.|
|FString|[ItemInventoryBucketUseRuleSetId](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1a362245491036e7f9386962ebfeca2041)|The inventory use ruleset this item uses.|
|TArray< int32 >|[CouponDiscountLoot](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1ab5baca34a2c43db4b6f03785904ffa77)|List of Loot Table Items this item can be used as a coupon for.|
|int32|[GetItemId](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1adc17f68c9aa87328bf2eeecf65007e99)()|Gets the Item Id.|
|ERHAPI_ItemType|[GetType](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1af11d6a3b4504a9b72a644133b8595ae6)()|Gets the Item Type.|
|int32|[GetRefItemId](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1afd536fcb04d8a38c06c4e8a186e473c0)()|Gets the Item Id of the referenced item.|
|int32|[GetAvailabilityFlags](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1a72c9fe1bfa8b972d5a82df1be4ffb8d3)()|Gets item availability flags.|
|int32|[GetEntitledLootId](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1a9313556688e5404f87e676c1673bc9af)()|Gets the entitled loot id.|
|int32|[GetLevelXpTableId](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1a4ee0060eff0c511de8165e31e4abe396)()|Gets the Xp Table associated with the item.|
|int32|[GetLevelVendorId](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1aecd9574fcd55a6f7040f742e5958acc9)()|Gets the Vendor that grants rewards based on inventory count of the item.|
|int32|[GetCouponDiscountCurrencyItemId](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1a7df15d0f40f33e7fbd3d854b698e0f19)()|Gets the Item Id of the currency type this can discount.|
|float|[GetCouponDiscountPercentage](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1a6ec70c25672e2b19483d6039a204c2d7)()|Gets the precentage of the discount this item applies.|
|bool|[GetCouponConsumeOnUse](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1a50948a1e6a63de0412fbcdcabbec0444)()|Gets if it will be consumed when used.|
|const FString &|[GetItemInventoryBucketUseRulesetId](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1aef908daa419235deec14de0e75e58b5d)()|Gets the set of rules of what platforms this item is available on.|
|const TArray< int32 > &|[GetCouponDiscountLoot](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1a85ca1c0692135f88ea428114e8c0a2be)()|Gets the list of loot ids this coupon can be applied to.|
|void|[InitializeFromCatalogItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1aa6fc917f2e111109946c7aee565618d3)(const [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) & CatalogItem, int32 InItemId)|Sets up the fata in the Catalog Item.|
|void|[Clear](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem_1af65ba6d8b9f24d27e9cce6ac341bae61)()|Clears all the data for the item.|
## Public Attributes



### `ETag` <a id="classURH__CatalogItem_1a8c1dbd0b72804d0d46c41cd75108f53e"></a>

`FString URH_CatalogItem::ETag`

The identifier for the versioning of the item.




### `APIItem` <a id="classURH__CatalogItem_1a40e0d83cfeae3ff06466990602707b94"></a>

`FRHAPI_Item URH_CatalogItem::APIItem`

Copy of the underlying Catalog item.





## Protected Attributes



### `ItemId` <a id="classURH__CatalogItem_1a51b19d9d9500568414f08f3a4d4b48a7"></a>

`int32 URH_CatalogItem::ItemId`

The Item Id.




### `Type` <a id="classURH__CatalogItem_1a9c8c53126818d45b2bee7bd751830646"></a>

`ERHAPI_ItemType URH_CatalogItem::Type`

The Item Type.




### `RefItemId` <a id="classURH__CatalogItem_1ae19d06a33a2b51b52910c08cd970389a"></a>

`int32 URH_CatalogItem::RefItemId`

The Ref Item Id.




### `AvailabilityFlags` <a id="classURH__CatalogItem_1a8331f819c80a760b623008ac44f9fbc6"></a>

`int32 URH_CatalogItem::AvailabilityFlags`

The Availability Flags.




### `EntitledLootId` <a id="classURH__CatalogItem_1a45cd555e4715d475b2a85b083dc6e4a0"></a>

`int32 URH_CatalogItem::EntitledLootId`

The Entitled Loot Id.




### `LevelXpTableId` <a id="classURH__CatalogItem_1a09044459692284b35f3b599ac64fb660"></a>

`int32 URH_CatalogItem::LevelXpTableId`

The Associated Xp Table Id.




### `LevelVendorId` <a id="classURH__CatalogItem_1a8b89f8d9ef537973df84b16cc6fd6ff2"></a>

`int32 URH_CatalogItem::LevelVendorId`

The Associated Loot Table if an Xp Table is used.




### `CouponDiscountCurrencyItemId` <a id="classURH__CatalogItem_1adf7af4689022331b187bb68ef863bd72"></a>

`int32 URH_CatalogItem::CouponDiscountCurrencyItemId`

The Item Id this can be used to discount purchases with when used as a coupon.




### `CouponDiscountPercentage` <a id="classURH__CatalogItem_1a3a6ec629d4bc492ff8e08cb8c8557f77"></a>

`float URH_CatalogItem::CouponDiscountPercentage`

The percentage of discount this gives when used as a coupon.




### `CouponConsumeOnUse` <a id="classURH__CatalogItem_1af8501ed83fb42d01ff8ba1029af0f6b1"></a>

`bool URH_CatalogItem::CouponConsumeOnUse`

If set, then when used as a coupon, remove this from inventory.




### `ItemInventoryBucketUseRuleSetId` <a id="classURH__CatalogItem_1a362245491036e7f9386962ebfeca2041"></a>

`FString URH_CatalogItem::ItemInventoryBucketUseRuleSetId`

The inventory use ruleset this item uses.




### `CouponDiscountLoot` <a id="classURH__CatalogItem_1ab5baca34a2c43db4b6f03785904ffa77"></a>

`TArray<int32> URH_CatalogItem::CouponDiscountLoot`

List of Loot Table Items this item can be used as a coupon for.





## Public Functions



### `GetItemId` <a id="classURH__CatalogItem_1adc17f68c9aa87328bf2eeecf65007e99"></a>

int32 GetItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Item Id.




### `GetType` <a id="classURH__CatalogItem_1af11d6a3b4504a9b72a644133b8595ae6"></a>

ERHAPI_ItemType GetType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Item Type.




### `GetRefItemId` <a id="classURH__CatalogItem_1afd536fcb04d8a38c06c4e8a186e473c0"></a>

int32 GetRefItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Item Id of the referenced item.




### `GetAvailabilityFlags` <a id="classURH__CatalogItem_1a72c9fe1bfa8b972d5a82df1be4ffb8d3"></a>

int32 GetAvailabilityFlags()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets item availability flags.




### `GetEntitledLootId` <a id="classURH__CatalogItem_1a9313556688e5404f87e676c1673bc9af"></a>

int32 GetEntitledLootId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the entitled loot id.




### `GetLevelXpTableId` <a id="classURH__CatalogItem_1a4ee0060eff0c511de8165e31e4abe396"></a>

int32 GetLevelXpTableId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Xp Table associated with the item.




### `GetLevelVendorId` <a id="classURH__CatalogItem_1aecd9574fcd55a6f7040f742e5958acc9"></a>

int32 GetLevelVendorId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Vendor that grants rewards based on inventory count of the item.




### `GetCouponDiscountCurrencyItemId` <a id="classURH__CatalogItem_1a7df15d0f40f33e7fbd3d854b698e0f19"></a>

int32 GetCouponDiscountCurrencyItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Item Id of the currency type this can discount.




### `GetCouponDiscountPercentage` <a id="classURH__CatalogItem_1a6ec70c25672e2b19483d6039a204c2d7"></a>

float GetCouponDiscountPercentage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the precentage of the discount this item applies.




### `GetCouponConsumeOnUse` <a id="classURH__CatalogItem_1a50948a1e6a63de0412fbcdcabbec0444"></a>

bool GetCouponConsumeOnUse()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if it will be consumed when used.




### `GetItemInventoryBucketUseRulesetId` <a id="classURH__CatalogItem_1aef908daa419235deec14de0e75e58b5d"></a>

const FString & GetItemInventoryBucketUseRulesetId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the set of rules of what platforms this item is available on.




### `GetCouponDiscountLoot` <a id="classURH__CatalogItem_1a85ca1c0692135f88ea428114e8c0a2be"></a>

const TArray< int32 > & GetCouponDiscountLoot()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the list of loot ids this coupon can be applied to.




### `InitializeFromCatalogItem` <a id="classURH__CatalogItem_1aa6fc917f2e111109946c7aee565618d3"></a>

void InitializeFromCatalogItem(const [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) & CatalogItem, int32 InItemId)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) &|CatalogItem|
|int32|InItemId|

#### Description

Sets up the fata in the Catalog Item.


#### Parameters

CatalogItem
: The API layer item to initialize from. 
InItemId
: The Item Id. 



### `Clear` <a id="classURH__CatalogItem_1af65ba6d8b9f24d27e9cce6ac341bae61"></a>

void Clear()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears all the data for the item.





