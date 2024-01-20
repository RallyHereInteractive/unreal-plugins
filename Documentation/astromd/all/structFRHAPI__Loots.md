---
title: FRHAPI_Loots Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A collection of Loot by Loot ID.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) >|[Loot_Optional](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots_1a26353909383cc1ff90f30f8065f7aef1)||
|bool|[Loot_IsSet](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots_1aa7ed2ed6741384575d2557cb342ec7a1)|true if Loot_Optional has been set to a value|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|[CacheInfo_Optional](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots_1a13d10491990bc6f649a265c4917177d3)||
|bool|[CacheInfo_IsSet](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots_1adec9f7b70b552038068b82807aa0792c)|true if CacheInfo_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots_1aee129715b91d6efb2e4064e94f34ae39)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots_1a86c61ace288772f62adf44ee4a6a6be0)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > &|[GetLoot](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots_1a2d7a05097d639b3baa677f086a781730)()|Gets the value of Loot_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > &|[GetLoot](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots_1ad6055e6fd1b2a23404c575f315c9f80d)()|Gets the value of Loot_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > &|[GetLoot](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots_1a8535ba2aba30240d26ebb8e08d0ecfa5)(const TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > & DefaultValue)|Gets the value of Loot_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetLoot](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots_1a50e60dc08952498a65312a97e9721136)(TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > & OutValue)|Fills OutValue with the value of Loot_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > *|[GetLootOrNull](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots_1a3fbfe44014466730ef3aa52043cf873a)()|Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > *|[GetLootOrNull](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots_1aafd08bcb28fd0274767c28032d0c5999)()|Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetLoot](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots_1a6372b313bf3c96dab14b99743e474685)(TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > NewValue)|Sets the value of Loot_Optional and also sets Loot_IsSet to true.|
|void|[ClearLoot](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots_1a6e29a6b9f404f4f51dff7ce78ff39163)()|Clears the value of Loot_Optional and sets Loot_IsSet to false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots_1a6421a8fed61c867332dfc4b71f6ff490)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots_1aa4c65e962b481fcbba4251f2f5fa0316)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots_1a27c5ad09e08c86cc421b1e3762ac80e2)(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)|Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCacheInfo](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots_1ad04543b8d670e0a2fc8c13a931286140)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)|Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots_1adc931f8d0a7f54469ce4dd05f6ca301b)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots_1a4eb7bb27551d91b164fbde2d05ab9bc7)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCacheInfo](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots_1a37918b47950bb88d783269f5dd9e2454)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)|Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.|
|void|[ClearCacheInfo](/unreal-plugins/all/structfrhapi__loots/#structFRHAPI__Loots_1ab10398ad09e903163371c6cb2f3ad18d)()|Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.|
## Public Attributes



### `Loot_Optional` <a id="structFRHAPI__Loots_1a26353909383cc1ff90f30f8065f7aef1"></a>

`TMap<FString, FRHAPI_Loot> FRHAPI_Loots::Loot_Optional`






### `Loot_IsSet` <a id="structFRHAPI__Loots_1aa7ed2ed6741384575d2557cb342ec7a1"></a>

`bool FRHAPI_Loots::Loot_IsSet`

true if Loot_Optional has been set to a value




### `CacheInfo_Optional` <a id="structFRHAPI__Loots_1a13d10491990bc6f649a265c4917177d3"></a>

`FRHAPI_CacheInfo FRHAPI_Loots::CacheInfo_Optional`






### `CacheInfo_IsSet` <a id="structFRHAPI__Loots_1adec9f7b70b552038068b82807aa0792c"></a>

`bool FRHAPI_Loots::CacheInfo_IsSet`

true if CacheInfo_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__Loots_1aee129715b91d6efb2e4064e94f34ae39"></a>

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



### `WriteJson` <a id="structFRHAPI__Loots_1a86c61ace288772f62adf44ee4a6a6be0"></a>

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



### `GetLoot` <a id="structFRHAPI__Loots_1a2d7a05097d639b3baa677f086a781730"></a>

TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > & GetLoot()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Loot_Optional, regardless of it having been set.




### `GetLoot` <a id="structFRHAPI__Loots_1ad6055e6fd1b2a23404c575f315c9f80d"></a>

const TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > & GetLoot()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Loot_Optional, regardless of it having been set.




### `GetLoot` <a id="structFRHAPI__Loots_1a8535ba2aba30240d26ebb8e08d0ecfa5"></a>

const TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > & GetLoot(const TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > &|DefaultValue|

#### Description

Gets the value of Loot_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetLoot` <a id="structFRHAPI__Loots_1a50e60dc08952498a65312a97e9721136"></a>

bool GetLoot(TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > &|OutValue|

#### Description

Fills OutValue with the value of Loot_Optional and returns true if it has been set, otherwise returns false.




### `GetLootOrNull` <a id="structFRHAPI__Loots_1a3fbfe44014466730ef3aa52043cf873a"></a>

TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > * GetLootOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.




### `GetLootOrNull` <a id="structFRHAPI__Loots_1aafd08bcb28fd0274767c28032d0c5999"></a>

const TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > * GetLootOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.




### `SetLoot` <a id="structFRHAPI__Loots_1a6372b313bf3c96dab14b99743e474685"></a>

void SetLoot(TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_Loot](/unreal-plugins/all/structfrhapi__loot/#structFRHAPI__Loot) >|NewValue|

#### Description

Sets the value of Loot_Optional and also sets Loot_IsSet to true.




### `ClearLoot` <a id="structFRHAPI__Loots_1a6e29a6b9f404f4f51dff7ce78ff39163"></a>

void ClearLoot()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Loot_Optional and sets Loot_IsSet to false.




### `GetCacheInfo` <a id="structFRHAPI__Loots_1a6421a8fed61c867332dfc4b71f6ff490"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__Loots_1aa4c65e962b481fcbba4251f2f5fa0316"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__Loots_1a27c5ad09e08c86cc421b1e3762ac80e2"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|DefaultValue|

#### Description

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCacheInfo` <a id="structFRHAPI__Loots_1ad04543b8d670e0a2fc8c13a931286140"></a>

bool GetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|OutValue|

#### Description

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.




### `GetCacheInfoOrNull` <a id="structFRHAPI__Loots_1adc931f8d0a7f54469ce4dd05f6ca301b"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `GetCacheInfoOrNull` <a id="structFRHAPI__Loots_1a4eb7bb27551d91b164fbde2d05ab9bc7"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `SetCacheInfo` <a id="structFRHAPI__Loots_1a37918b47950bb88d783269f5dd9e2454"></a>

void SetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|NewValue|

#### Description

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.




### `ClearCacheInfo` <a id="structFRHAPI__Loots_1ab10398ad09e903163371c6cb2f3ad18d"></a>

void ClearCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.





