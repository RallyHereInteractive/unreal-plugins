---
title: FRH_ItemInventory Struct
---
Inventory Item struct for defining cached inventory items and making inventory write calls.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FGuid|[InventoryId](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory_1ae433fc841de8bdb91d58ea8e4e3f874f)|Unique Id of the inventory record.|
|ERHAPI_InventoryType|[InventoryType](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory_1a084404452b4dc969f155ade4bcf4125e)|The ownership type of the record.|
|int32|[ItemId](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory_1afa7f949931bf0eec4ba4d1d7a6ee8a88)|The item id of the record.|
|int32|[Count](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory_1aa60dcc32af1a04af33ed4a9ef8fa6661)|Amount of the record.|
|TOptional< FDateTime >|[Expires](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory_1a86ca5775f84bb47f3088e98154f8d59c)|If the record is a rental, when the rental expires.|
|FDateTime|[Acquired](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory_1a15df85a8682ee6eb5f1c235c01546ff6)|The time that the record was first recorded.|
|TMap< FString, FString >|[CustomData](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory_1afda3fd6789abe53a101e3841d98e808b)|Custom data that is stored on the record.|
|ERHAPI_InventoryBucket|[Bucket](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory_1afe4d4e0b5c59d5f985e02a4e71044d55)|The bucket that the inventory record is in.|
||[FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory_1a5a5ebd942009979f0245fe5392378243)()|Default constructor.|
|void|[AddCustomData](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory_1ad581781aa100288a7969a4cd53aa4b13)(const FString & Key, const FString & Value)|Adds custom data to the inventory record.|
|int32|[RemoveCustomData](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory_1ac05885e5b0cb125a91a8542bbad7e5eb)(const FString & Key)|Removes custom data to the inventory record.|
|FORCEINLINE FString|[FindCustomDataWithKey](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory_1a8699c5e7692bbbbdab7211b5edcd63a5)(const FString & Key)|Gets custom data by key from the inventory record.|
|void|[Init](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory_1ae0ef931fa1341db81394d6a25ef0fde3)(const int32 & ItemIdOfInventory, const [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) & Inventory)|Initializes an inventory record from an Inventory Record API response.|
|bool|[operator==](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory_1a90397dbaf2c27ccbca10ed24d9e8ab17)(const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) & Other)|Equals operator override for comparison.|
## Public Attributes



### `InventoryId` <a id="structFRH__ItemInventory_1ae433fc841de8bdb91d58ea8e4e3f874f"></a>

`FGuid FRH_ItemInventory::InventoryId`

Unique Id of the inventory record.




### `InventoryType` <a id="structFRH__ItemInventory_1a084404452b4dc969f155ade4bcf4125e"></a>

`ERHAPI_InventoryType FRH_ItemInventory::InventoryType`

The ownership type of the record.




### `ItemId` <a id="structFRH__ItemInventory_1afa7f949931bf0eec4ba4d1d7a6ee8a88"></a>

`int32 FRH_ItemInventory::ItemId`

The item id of the record.




### `Count` <a id="structFRH__ItemInventory_1aa60dcc32af1a04af33ed4a9ef8fa6661"></a>

`int32 FRH_ItemInventory::Count`

Amount of the record.




### `Expires` <a id="structFRH__ItemInventory_1a86ca5775f84bb47f3088e98154f8d59c"></a>

`TOptional<FDateTime> FRH_ItemInventory::Expires`

If the record is a rental, when the rental expires.




### `Acquired` <a id="structFRH__ItemInventory_1a15df85a8682ee6eb5f1c235c01546ff6"></a>

`FDateTime FRH_ItemInventory::Acquired`

The time that the record was first recorded.




### `CustomData` <a id="structFRH__ItemInventory_1afda3fd6789abe53a101e3841d98e808b"></a>

`TMap<FString, FString> FRH_ItemInventory::CustomData`

Custom data that is stored on the record.




### `Bucket` <a id="structFRH__ItemInventory_1afe4d4e0b5c59d5f985e02a4e71044d55"></a>

`ERHAPI_InventoryBucket FRH_ItemInventory::Bucket`

The bucket that the inventory record is in.





## Public Functions



### `FRH_ItemInventory` <a id="structFRH__ItemInventory_1a5a5ebd942009979f0245fe5392378243"></a>

 FRH_ItemInventory()

#### Parameters

| Type | Name |
|------|------|

#### Description

Default constructor.




### `AddCustomData` <a id="structFRH__ItemInventory_1ad581781aa100288a7969a4cd53aa4b13"></a>

void AddCustomData(const FString & Key, const FString & Value)

#### Parameters

| Type | Name |
|------|------|
|const FString &|Key|
|const FString &|Value|

#### Description

Adds custom data to the inventory record.


#### Parameters

Key
: The key for the custom data. 
Value
: The value for the custom data. 



### `RemoveCustomData` <a id="structFRH__ItemInventory_1ac05885e5b0cb125a91a8542bbad7e5eb"></a>

int32 RemoveCustomData(const FString & Key)

#### Parameters

| Type | Name |
|------|------|
|const FString &|Key|

#### Description

Removes custom data to the inventory record.


#### Parameters

Key
: The key for the custom data. 

#### Returns
The number of elements removed. 



### `FindCustomDataWithKey` <a id="structFRH__ItemInventory_1a8699c5e7692bbbbdab7211b5edcd63a5"></a>

FORCEINLINE FString FindCustomDataWithKey(const FString & Key)

#### Parameters

| Type | Name |
|------|------|
|const FString &|Key|

#### Description

Gets custom data by key from the inventory record.


#### Parameters

Key
: The key for the custom data. 

#### Returns
The value for the custome data. 



### `Init` <a id="structFRH__ItemInventory_1ae0ef931fa1341db81394d6a25ef0fde3"></a>

void Init(const int32 & ItemIdOfInventory, const [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) & Inventory)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|ItemIdOfInventory|
|const [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) &|Inventory|

#### Description

Initializes an inventory record from an Inventory Record API response.


#### Parameters

ItemIdOfInventory
: The Item Id for the record. 
Inventory
: The inventory record from the API call. 



### `operator==` <a id="structFRH__ItemInventory_1a90397dbaf2c27ccbca10ed24d9e8ab17"></a>

bool operator==(const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) & Other)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_ItemInventory](/unreal-plugins/all/structfrh__iteminventory/#structFRH__ItemInventory) &|Other|

#### Description

Equals operator override for comparison.





