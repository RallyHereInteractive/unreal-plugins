---
title: URH_PlayerOrderEntry Class
---Inherits from UObject

Player Order Entry class defines the data of an Order used to submit one to the InventoryAPI.

## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_PlayerOrderEntryType|[FillType](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry_1a6324972122c3e217ef2f30b502f6be96)|The Fill Type of this order Entry.|
|[FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot)|[LootItem](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry_1ab8eb2ce399f6c87e100915af9550e452)|The Loot Item the order is for.|
|int32|[LootId](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry_1af7d201c7c164b7b74d10275a329c7b70)|The Loot Id of the loot item.|
|int32|[Quantity](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry_1a5aab19365ad5685ead597e6aade55bff)|The amount of the loot item the order is for.|
|FString|[ExternalTransactionId](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry_1a415d4db9bef6f060e98217c8806d2a0d)|The id that the client can provide for the order for record keeping.|
|int32|[PriceItemId](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry_1a5e0ac397f38aba73cb3429dcf68876e8)|The item id of the item being used to pay for the order.|
|int32|[Price](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry_1a3e4b6531988df83d2d9087c863658af7)|The amount of the item being used for payment, this is verified to match the expected price.|
|int32|[CouponItemId](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry_1a81d35b761d82023ac6b29c949d2f182f)|The item id of a coupon item being used if one is being applied for an item discount.|
|TMap< FString, FString >|[CustomData](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry_1a465d00f2f73358c3509caf95166df187)|Custom data for the given order to be placed on the item.|
|ERHAPI_PlayerOrderEntryType|[GetFillType](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry_1a14ca340eba40b938357e21e65c6fa439)()|Gets the Fill Type of the order.|
|const [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) &|[GetLootItem](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry_1aba95d130fe7f689319afdc0bb55e74ac)()|Gets the Loot Item the order is for.|
|const int32 &|[GetLootId](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry_1a9bae2b65520001d9a63d48b9a8d1fb20)()|Gets the Loot Id of the loot item.|
|int32|[GetQuantity](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry_1afdd804405384e6adb0adb7ecd310457f)()|Gets the amount of the loot item the order is for.|
|const FString &|[GetExternalTransactionId](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry_1a044f824678cd2a32199c7dad1538cb19)()|Gets the id that the client can provide for the order for record keeping.|
|const int32 &|[GetPriceItemId](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry_1a35d0954118cbfb8d9886c29fcfc59932)()|Gets the item id of the item being used to pay for the order.|
|int32|[GetPrice](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry_1aab86a728d3883a34a8e5e06de40d3057)()|Gets the amount of the item being used for payment, this is verified to match the expected price.|
|const int32 &|[GetCouponItemId](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry_1a0db41c510ffc7be86684f03d6ff26367)()|Gets the item id of a coupon item being used if one is being applied for an item discount.|
|void|[AddCustomData](/unreal-plugins/all/classurh__playerorderentry/#classURH__PlayerOrderEntry_1a61764974114c2ae68fc78d64bd9e692b)(const FString & Key, const FString & Value)|Adds custom data to the order entry.|
## Public Attributes



### `FillType` <a id="classURH__PlayerOrderEntry_1a6324972122c3e217ef2f30b502f6be96"></a>

`ERHAPI_PlayerOrderEntryType URH_PlayerOrderEntry::FillType`

The Fill Type of this order Entry.




### `LootItem` <a id="classURH__PlayerOrderEntry_1ab8eb2ce399f6c87e100915af9550e452"></a>

`FRHAPI_Loot URH_PlayerOrderEntry::LootItem`

The Loot Item the order is for.




### `LootId` <a id="classURH__PlayerOrderEntry_1af7d201c7c164b7b74d10275a329c7b70"></a>

`int32 URH_PlayerOrderEntry::LootId`

The Loot Id of the loot item.




### `Quantity` <a id="classURH__PlayerOrderEntry_1a5aab19365ad5685ead597e6aade55bff"></a>

`int32 URH_PlayerOrderEntry::Quantity`

The amount of the loot item the order is for.




### `ExternalTransactionId` <a id="classURH__PlayerOrderEntry_1a415d4db9bef6f060e98217c8806d2a0d"></a>

`FString URH_PlayerOrderEntry::ExternalTransactionId`

The id that the client can provide for the order for record keeping.




### `PriceItemId` <a id="classURH__PlayerOrderEntry_1a5e0ac397f38aba73cb3429dcf68876e8"></a>

`int32 URH_PlayerOrderEntry::PriceItemId`

The item id of the item being used to pay for the order.




### `Price` <a id="classURH__PlayerOrderEntry_1a3e4b6531988df83d2d9087c863658af7"></a>

`int32 URH_PlayerOrderEntry::Price`

The amount of the item being used for payment, this is verified to match the expected price.




### `CouponItemId` <a id="classURH__PlayerOrderEntry_1a81d35b761d82023ac6b29c949d2f182f"></a>

`int32 URH_PlayerOrderEntry::CouponItemId`

The item id of a coupon item being used if one is being applied for an item discount.




### `CustomData` <a id="classURH__PlayerOrderEntry_1a465d00f2f73358c3509caf95166df187"></a>

`TMap<FString, FString> URH_PlayerOrderEntry::CustomData`

Custom data for the given order to be placed on the item.





## Public Functions



### `GetFillType` <a id="classURH__PlayerOrderEntry_1a14ca340eba40b938357e21e65c6fa439"></a>

ERHAPI_PlayerOrderEntryType GetFillType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Fill Type of the order.




### `GetLootItem` <a id="classURH__PlayerOrderEntry_1aba95d130fe7f689319afdc0bb55e74ac"></a>

const [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) & GetLootItem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Loot Item the order is for.




### `GetLootId` <a id="classURH__PlayerOrderEntry_1a9bae2b65520001d9a63d48b9a8d1fb20"></a>

const int32 & GetLootId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Loot Id of the loot item.




### `GetQuantity` <a id="classURH__PlayerOrderEntry_1afdd804405384e6adb0adb7ecd310457f"></a>

int32 GetQuantity()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the amount of the loot item the order is for.




### `GetExternalTransactionId` <a id="classURH__PlayerOrderEntry_1a044f824678cd2a32199c7dad1538cb19"></a>

const FString & GetExternalTransactionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the id that the client can provide for the order for record keeping.




### `GetPriceItemId` <a id="classURH__PlayerOrderEntry_1a35d0954118cbfb8d9886c29fcfc59932"></a>

const int32 & GetPriceItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the item id of the item being used to pay for the order.




### `GetPrice` <a id="classURH__PlayerOrderEntry_1aab86a728d3883a34a8e5e06de40d3057"></a>

int32 GetPrice()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the amount of the item being used for payment, this is verified to match the expected price.




### `GetCouponItemId` <a id="classURH__PlayerOrderEntry_1a0db41c510ffc7be86684f03d6ff26367"></a>

const int32 & GetCouponItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the item id of a coupon item being used if one is being applied for an item discount.




### `AddCustomData` <a id="classURH__PlayerOrderEntry_1a61764974114c2ae68fc78d64bd9e692b"></a>

void AddCustomData(const FString & Key, const FString & Value)

#### Parameters

| Type | Name |
|------|------|
|const FString &|Key|
|const FString &|Value|

#### Description

Adds custom data to the order entry.


#### Parameters

Key
: The key for the custom data. 
Value
: The value for the custom data. 




