---
title: FRHAPI_ItemInventory Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Inventory of a particular Item for a Player organized by Inventory ID.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TMap< FString, [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) >|[Records_Optional](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory_1a548463781c0d9871f74200a6315d626e)|Inventory Records for this Item Inventory.|
|bool|[Records_IsSet](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory_1a20a2b8f2e7cb28935490ba84be545c50)|true if Records_Optional has been set to a value|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|[CacheInfo_Optional](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory_1ac5ef0da6d8904d817332aa333f9830f4)||
|bool|[CacheInfo_IsSet](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory_1a3ab9e2706967d2b32107441242c7ef86)|true if CacheInfo_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory_1a57f0ce1f90bfb155a9a2f15989354b6b)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory_1ae72770dfc343e4c5b2eb93cf7eb00e32)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TMap< FString, [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) > &|[GetRecords](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory_1a7cf14d6c8fb483adbba10a2897f900db)()|Gets the value of Records_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) > &|[GetRecords](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory_1ad58a34aa61717760665e566f1a2caa3e)()|Gets the value of Records_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) > &|[GetRecords](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory_1afd84003f0fda38c94404b9252fc08877)(const TMap< FString, [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) > & DefaultValue)|Gets the value of Records_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetRecords](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory_1a992ba0260c620e1dcc98138db0eaeab9)(TMap< FString, [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) > & OutValue)|Fills OutValue with the value of Records_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) > *|[GetRecordsOrNull](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory_1a398c52115e15bc2c290d60976880ab83)()|Returns a pointer to Records_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) > *|[GetRecordsOrNull](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory_1a600248af852a9f306f3fbb742cb340c9)()|Returns a pointer to Records_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetRecords](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory_1a7a369c1e32e2d53256e25ab26c8a7ebb)(TMap< FString, [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) > NewValue)|Sets the value of Records_Optional and also sets Records_IsSet to true.|
|void|[ClearRecords](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory_1ab20c2f6b45bbd857117be0cf805f1581)()|Clears the value of Records_Optional and sets Records_IsSet to false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory_1a72aadbd597531eb731f5614608be8dcb)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory_1a7c9365536a66e61fa26f630aace028cd)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory_1a98698a867e6c6be16ef78dc3301a04ba)(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)|Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCacheInfo](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory_1aa553c503fb6b68a70b7c7393c6fca6f5)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)|Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory_1a4d82f7a96b004e873077c9ba37077308)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory_1a3e28604c7e0536176bfd57b25589469a)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCacheInfo](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory_1aa4236321b4102d43964a36d984236e79)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)|Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.|
|void|[ClearCacheInfo](/unreal-plugins/all/structfrhapi__iteminventory/#structFRHAPI__ItemInventory_1ab687f12dbfe18e1624272af2066d0437)()|Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.|
## Public Attributes



### `Records_Optional` <a id="structFRHAPI__ItemInventory_1a548463781c0d9871f74200a6315d626e"></a>

`TMap<FString, FRHAPI_InventoryRecord> FRHAPI_ItemInventory::Records_Optional`

Inventory Records for this Item Inventory.




### `Records_IsSet` <a id="structFRHAPI__ItemInventory_1a20a2b8f2e7cb28935490ba84be545c50"></a>

`bool FRHAPI_ItemInventory::Records_IsSet`

true if Records_Optional has been set to a value




### `CacheInfo_Optional` <a id="structFRHAPI__ItemInventory_1ac5ef0da6d8904d817332aa333f9830f4"></a>

`FRHAPI_CacheInfo FRHAPI_ItemInventory::CacheInfo_Optional`






### `CacheInfo_IsSet` <a id="structFRHAPI__ItemInventory_1a3ab9e2706967d2b32107441242c7ef86"></a>

`bool FRHAPI_ItemInventory::CacheInfo_IsSet`

true if CacheInfo_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__ItemInventory_1a57f0ce1f90bfb155a9a2f15989354b6b"></a>

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



### `WriteJson` <a id="structFRHAPI__ItemInventory_1ae72770dfc343e4c5b2eb93cf7eb00e32"></a>

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



### `GetRecords` <a id="structFRHAPI__ItemInventory_1a7cf14d6c8fb483adbba10a2897f900db"></a>

TMap< FString, [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) > & GetRecords()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Records_Optional, regardless of it having been set.




### `GetRecords` <a id="structFRHAPI__ItemInventory_1ad58a34aa61717760665e566f1a2caa3e"></a>

const TMap< FString, [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) > & GetRecords()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Records_Optional, regardless of it having been set.




### `GetRecords` <a id="structFRHAPI__ItemInventory_1afd84003f0fda38c94404b9252fc08877"></a>

const TMap< FString, [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) > & GetRecords(const TMap< FString, [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) > &|DefaultValue|

#### Description

Gets the value of Records_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetRecords` <a id="structFRHAPI__ItemInventory_1a992ba0260c620e1dcc98138db0eaeab9"></a>

bool GetRecords(TMap< FString, [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) > &|OutValue|

#### Description

Fills OutValue with the value of Records_Optional and returns true if it has been set, otherwise returns false.




### `GetRecordsOrNull` <a id="structFRHAPI__ItemInventory_1a398c52115e15bc2c290d60976880ab83"></a>

TMap< FString, [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) > * GetRecordsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Records_Optional, if it has been set, otherwise returns nullptr.




### `GetRecordsOrNull` <a id="structFRHAPI__ItemInventory_1a600248af852a9f306f3fbb742cb340c9"></a>

const TMap< FString, [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) > * GetRecordsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Records_Optional, if it has been set, otherwise returns nullptr.




### `SetRecords` <a id="structFRHAPI__ItemInventory_1a7a369c1e32e2d53256e25ab26c8a7ebb"></a>

void SetRecords(TMap< FString, [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_InventoryRecord](/unreal-plugins/all/structfrhapi__inventoryrecord/#structFRHAPI__InventoryRecord) >|NewValue|

#### Description

Sets the value of Records_Optional and also sets Records_IsSet to true.




### `ClearRecords` <a id="structFRHAPI__ItemInventory_1ab20c2f6b45bbd857117be0cf805f1581"></a>

void ClearRecords()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Records_Optional and sets Records_IsSet to false.




### `GetCacheInfo` <a id="structFRHAPI__ItemInventory_1a72aadbd597531eb731f5614608be8dcb"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__ItemInventory_1a7c9365536a66e61fa26f630aace028cd"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__ItemInventory_1a98698a867e6c6be16ef78dc3301a04ba"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|DefaultValue|

#### Description

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCacheInfo` <a id="structFRHAPI__ItemInventory_1aa553c503fb6b68a70b7c7393c6fca6f5"></a>

bool GetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|OutValue|

#### Description

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.




### `GetCacheInfoOrNull` <a id="structFRHAPI__ItemInventory_1a4d82f7a96b004e873077c9ba37077308"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `GetCacheInfoOrNull` <a id="structFRHAPI__ItemInventory_1a3e28604c7e0536176bfd57b25589469a"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `SetCacheInfo` <a id="structFRHAPI__ItemInventory_1aa4236321b4102d43964a36d984236e79"></a>

void SetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|NewValue|

#### Description

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.




### `ClearCacheInfo` <a id="structFRHAPI__ItemInventory_1ab687f12dbfe18e1624272af2066d0437"></a>

void ClearCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.





