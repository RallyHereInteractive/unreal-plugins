---
title: FRHAPI_Inventory Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Inventory for a Player organized by Item ID.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TMap< FString, [FRHAPI_ItemInventory](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory) >|[Items_Optional](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory_1ae12b23897a8446d120f2bbbf6c794093)|Item Inventories for this Inventory.|
|bool|[Items_IsSet](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory_1aeb2ed74a9dc68e9ce0fbbeb4cfddc6f3)|true if Items_Optional has been set to a value|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|[CacheInfo_Optional](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory_1aff4699c7d87ddc844f4a9460df3e4d23)||
|bool|[CacheInfo_IsSet](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory_1a9f982c20e33999118e1d77a997a59589)|true if CacheInfo_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory_1a35bf77bfd0fde32367ba5c8feb84199c)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory_1a635d13e6100f81bd9dc2414e8d30edfd)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TMap< FString, [FRHAPI_ItemInventory](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory) > &|[GetItems](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory_1afc9090bd51c9a195ca55723ce666333e)()|Gets the value of Items_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_ItemInventory](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory) > &|[GetItems](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory_1a55ded393e907eb38cafe88fedd4a4fcc)()|Gets the value of Items_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_ItemInventory](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory) > &|[GetItems](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory_1af5861fb4f0dd089728a30cd50cfb34d9)(const TMap< FString, [FRHAPI_ItemInventory](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory) > & DefaultValue)|Gets the value of Items_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetItems](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory_1a9971f75be762971c919d66ae16cb9416)(TMap< FString, [FRHAPI_ItemInventory](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory) > & OutValue)|Fills OutValue with the value of Items_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, [FRHAPI_ItemInventory](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory) > *|[GetItemsOrNull](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory_1a1f64ef3c5b2344981576fea06b0492b8)()|Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, [FRHAPI_ItemInventory](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory) > *|[GetItemsOrNull](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory_1ab35d617ca4fce1557035421c948cfd17)()|Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetItems](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory_1a75595aec37c0627c04dceb340e2f766d)(TMap< FString, [FRHAPI_ItemInventory](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory) > NewValue)|Sets the value of Items_Optional and also sets Items_IsSet to true.|
|void|[ClearItems](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory_1ace507bfbd42dc8ac6c2d5f429eb1106b)()|Clears the value of Items_Optional and sets Items_IsSet to false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory_1a00c3bce14622af56577d44bf37b463f4)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory_1ae918a58e47026c48014d700e1d30c7bf)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory_1a6ec90da1a67248445521191b9839a048)(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)|Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCacheInfo](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory_1a7b96bc1d3574c0c1c3d6f0ce2f58daa4)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)|Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory_1aa0e9296dc8dca59a8e45ae258b10035b)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory_1a4b79d280988af02ab874400706f7406c)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCacheInfo](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory_1a10ebebd28eab0dffa3aea1d0a3c18dd2)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)|Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.|
|void|[ClearCacheInfo](/unreal-plugins/all/structfrhapi__inventory/#structFRHAPI__Inventory_1ab40dec6674cdb911e51d1fe71907064d)()|Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.|
## Public Attributes



### `Items_Optional` <a id="structFRHAPI__Inventory_1ae12b23897a8446d120f2bbbf6c794093"></a>

`TMap<FString, FRHAPI_ItemInventory> FRHAPI_Inventory::Items_Optional`

Item Inventories for this Inventory.




### `Items_IsSet` <a id="structFRHAPI__Inventory_1aeb2ed74a9dc68e9ce0fbbeb4cfddc6f3"></a>

`bool FRHAPI_Inventory::Items_IsSet`

true if Items_Optional has been set to a value




### `CacheInfo_Optional` <a id="structFRHAPI__Inventory_1aff4699c7d87ddc844f4a9460df3e4d23"></a>

`FRHAPI_CacheInfo FRHAPI_Inventory::CacheInfo_Optional`






### `CacheInfo_IsSet` <a id="structFRHAPI__Inventory_1a9f982c20e33999118e1d77a997a59589"></a>

`bool FRHAPI_Inventory::CacheInfo_IsSet`

true if CacheInfo_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__Inventory_1a35bf77bfd0fde32367ba5c8feb84199c"></a>

bool FromJson(const TSharedPtr< FJsonValue > & JsonValue)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|

#### Description

Fills this object with data from the passed in JSON.


#### Parameters

JsonValue
: Data from the API call.

#### Returns
true if parsing of the JSON data was successful. 



### `WriteJson` <a id="structFRHAPI__Inventory_1a635d13e6100f81bd9dc2414e8d30edfd"></a>

void WriteJson(TSharedRef< TJsonWriter<>> & Writer)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|

#### Description

Writes the data from this object into the specified JSON Writer stream.


#### Parameters

Writer
: JSON Writer stream to push . 



### `GetItems` <a id="structFRHAPI__Inventory_1afc9090bd51c9a195ca55723ce666333e"></a>

TMap< FString, [FRHAPI_ItemInventory](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory) > & GetItems()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Items_Optional, regardless of it having been set.




### `GetItems` <a id="structFRHAPI__Inventory_1a55ded393e907eb38cafe88fedd4a4fcc"></a>

const TMap< FString, [FRHAPI_ItemInventory](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory) > & GetItems()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Items_Optional, regardless of it having been set.




### `GetItems` <a id="structFRHAPI__Inventory_1af5861fb4f0dd089728a30cd50cfb34d9"></a>

const TMap< FString, [FRHAPI_ItemInventory](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory) > & GetItems(const TMap< FString, [FRHAPI_ItemInventory](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, [FRHAPI_ItemInventory](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory) > &|DefaultValue|

#### Description

Gets the value of Items_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetItems` <a id="structFRHAPI__Inventory_1a9971f75be762971c919d66ae16cb9416"></a>

bool GetItems(TMap< FString, [FRHAPI_ItemInventory](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_ItemInventory](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory) > &|OutValue|

#### Description

Fills OutValue with the value of Items_Optional and returns true if it has been set, otherwise returns false.




### `GetItemsOrNull` <a id="structFRHAPI__Inventory_1a1f64ef3c5b2344981576fea06b0492b8"></a>

TMap< FString, [FRHAPI_ItemInventory](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory) > * GetItemsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.




### `GetItemsOrNull` <a id="structFRHAPI__Inventory_1ab35d617ca4fce1557035421c948cfd17"></a>

const TMap< FString, [FRHAPI_ItemInventory](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory) > * GetItemsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.




### `SetItems` <a id="structFRHAPI__Inventory_1a75595aec37c0627c04dceb340e2f766d"></a>

void SetItems(TMap< FString, [FRHAPI_ItemInventory](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_ItemInventory](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory) >|NewValue|

#### Description

Sets the value of Items_Optional and also sets Items_IsSet to true.




### `ClearItems` <a id="structFRHAPI__Inventory_1ace507bfbd42dc8ac6c2d5f429eb1106b"></a>

void ClearItems()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Items_Optional and sets Items_IsSet to false.




### `GetCacheInfo` <a id="structFRHAPI__Inventory_1a00c3bce14622af56577d44bf37b463f4"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__Inventory_1ae918a58e47026c48014d700e1d30c7bf"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__Inventory_1a6ec90da1a67248445521191b9839a048"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|DefaultValue|

#### Description

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCacheInfo` <a id="structFRHAPI__Inventory_1a7b96bc1d3574c0c1c3d6f0ce2f58daa4"></a>

bool GetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|OutValue|

#### Description

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.




### `GetCacheInfoOrNull` <a id="structFRHAPI__Inventory_1aa0e9296dc8dca59a8e45ae258b10035b"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `GetCacheInfoOrNull` <a id="structFRHAPI__Inventory_1a4b79d280988af02ab874400706f7406c"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `SetCacheInfo` <a id="structFRHAPI__Inventory_1a10ebebd28eab0dffa3aea1d0a3c18dd2"></a>

void SetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|NewValue|

#### Description

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.




### `ClearCacheInfo` <a id="structFRHAPI__Inventory_1ab40dec6674cdb911e51d1fe71907064d"></a>

void ClearCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.





