---
title: URH_CatalogBlueprintLibrary Class
---Inherits from UBlueprintFunctionLibrary

Catalog Blueprint Library with helper methods for API structs.

## Summary
| Kind | View | Description |
|------|------|-------------|
|bool|[GetUnitPrice](/unreal-plugins/all/classurh__catalogblueprintlibrary/#classURH__CatalogBlueprintLibrary_1aa95be845d582d7a468d2a09e0f5fabe9)(const TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > & PriceBreakpoints, int32 CurrencyItemId, int32 Quantity, int32 & Price)|Gets the price of an item at a given quantity for a given currency type.|
|bool|[IsCouponApplicableForItem](/unreal-plugins/all/classurh__catalogblueprintlibrary/#classURH__CatalogBlueprintLibrary_1acacf88243e21d68b17d2785cc152e755)([URH_CatalogItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem) * CouponItem, const [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) & LootItem)|Gets if the coupon item can be used to discount a vendor item.|
|bool|[IsCouponApplicableForLootId](/unreal-plugins/all/classurh__catalogblueprintlibrary/#classURH__CatalogBlueprintLibrary_1abcd28fecba55cf68efceaffa13ecd671)([URH_CatalogItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem) * CouponItem, int32 LootId)|Gets if the coupon item can be used to discount a vendor item.|
|int32|[GetCouponDiscountedPrice](/unreal-plugins/all/classurh__catalogblueprintlibrary/#classURH__CatalogBlueprintLibrary_1af20f4ec5484447d03eb51a2a8b6b4ada)([URH_CatalogItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem) * CouponItem, int32 Price)|Gets the modified price based on the discount precentage of the coupon.|
|int64|[GetXpAtLevel](/unreal-plugins/all/classurh__catalogblueprintlibrary/#classURH__CatalogBlueprintLibrary_1a68eec2e997fc2987515293402f2eac8c)(const [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) & XpTable, int32 XpLevel)|Gets the Xp required for a level of this Xp Table at a specific level.|
|int32|[GetLevelAtXp](/unreal-plugins/all/classurh__catalogblueprintlibrary/#classURH__CatalogBlueprintLibrary_1a79e4c6c0e05720c73d86d4f434c08ff2)(const [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) & XpTable, int64 XpPoints)|Gets the current level at a specific amount of Xp for this Xp Table.|
|bool|[GetVendorItemById](/unreal-plugins/all/classurh__catalogblueprintlibrary/#classURH__CatalogBlueprintLibrary_1ab9cc4ce38f8764bbc5fafff035156edf)(const [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) & Vendor, int32 LootId, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) & LootItem)|Gets a loot item of a vendor by its loot id.|
## Public Static Functions



### `GetUnitPrice` <a id="classURH__CatalogBlueprintLibrary_1aa95be845d582d7a468d2a09e0f5fabe9"></a>

bool GetUnitPrice(const TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > & PriceBreakpoints, int32 CurrencyItemId, int32 Quantity, int32 & Price)

#### Parameters

| Type | Name |
|------|------|
|const TArray< [FRHAPI_PriceBreakpoint](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint) > &|PriceBreakpoints|
|int32|CurrencyItemId|
|int32|Quantity|
|int32 &|Price|

#### Description

Gets the price of an item at a given quantity for a given currency type.


#### Parameters

PriceBreakpoints
: The set of breakpoints being searched. 
CurrencyItemId
: The currency type being looked for. 
Quantity
: The quantity being looked for. 
Price
: The price of the item at the given quantity and currency type. 

#### Returns
If true, a valid price has been found 



### `IsCouponApplicableForItem` <a id="classURH__CatalogBlueprintLibrary_1acacf88243e21d68b17d2785cc152e755"></a>

bool IsCouponApplicableForItem([URH_CatalogItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem) * CouponItem, const [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) & LootItem)

#### Parameters

| Type | Name |
|------|------|
|[URH_CatalogItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem) *|CouponItem|
|const [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) &|LootItem|

#### Description

Gets if the coupon item can be used to discount a vendor item.


#### Parameters

Coupon
: Item The item that is being used as a coupon. 
LootItem
: The item being checked if it can be discounted. 

#### Returns
If true, the coupon can be used to discount the item. 



### `IsCouponApplicableForLootId` <a id="classURH__CatalogBlueprintLibrary_1abcd28fecba55cf68efceaffa13ecd671"></a>

bool IsCouponApplicableForLootId([URH_CatalogItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem) * CouponItem, int32 LootId)

#### Parameters

| Type | Name |
|------|------|
|[URH_CatalogItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem) *|CouponItem|
|int32|LootId|

#### Description

Gets if the coupon item can be used to discount a vendor item.


#### Parameters

Coupon
: Item The item that is being used as a coupon. 
LootId
: The Loot id ot the vendor item being checked if it can be discounted. 

#### Returns
If true, the coupon can be used to discount the item. 



### `GetCouponDiscountedPrice` <a id="classURH__CatalogBlueprintLibrary_1af20f4ec5484447d03eb51a2a8b6b4ada"></a>

int32 GetCouponDiscountedPrice([URH_CatalogItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem) * CouponItem, int32 Price)

#### Parameters

| Type | Name |
|------|------|
|[URH_CatalogItem](/unreal-plugins/all/classurh__catalogitem/#classURH__CatalogItem) *|CouponItem|
|int32|Price|

#### Description

Gets the modified price based on the discount precentage of the coupon.


#### Parameters

Coupon
: Item The item that is being used as a coupon. 
Price
: The price of the item being discounted. 

#### Returns
The modified price, note this doesn't verify if the coupon is valid for the item. 



### `GetXpAtLevel` <a id="classURH__CatalogBlueprintLibrary_1a68eec2e997fc2987515293402f2eac8c"></a>

int64 GetXpAtLevel(const [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) & XpTable, int32 XpLevel)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) &|XpTable|
|int32|XpLevel|

#### Description

Gets the Xp required for a level of this Xp Table at a specific level.


#### Parameters

XpTable
: The Xp Table being searched. 
XpLevel
: The Level being searched for. 

#### Returns
If found, the Xp required for the level, otherwise -1. 



### `GetLevelAtXp` <a id="classURH__CatalogBlueprintLibrary_1a79e4c6c0e05720c73d86d4f434c08ff2"></a>

int32 GetLevelAtXp(const [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) & XpTable, int64 XpPoints)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) &|XpTable|
|int64|XpPoints|

#### Description

Gets the current level at a specific amount of Xp for this Xp Table.


#### Parameters

XpTable
: The Xp Table being searched. 
XpPoints
: The amount of Xp that is being used to determine the level. 

#### Returns
If found, the level for the provided Xp, otherwise 0. 



### `GetVendorItemById` <a id="classURH__CatalogBlueprintLibrary_1ab9cc4ce38f8764bbc5fafff035156edf"></a>

bool GetVendorItemById(const [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) & Vendor, int32 LootId, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) & LootItem)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_Vendor](/unreal-plugins/all/structfrhapi__vendor/#structFRHAPI__Vendor) &|Vendor|
|int32|LootId|
|[FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) &|LootItem|

#### Description

Gets a loot item of a vendor by its loot id.


#### Parameters

Vendor
: The Vendor being searched. 
LootId
: The Loot Id being searched for. 
LootItem
: The item if found. 

#### Returns
If found, returns true. 




