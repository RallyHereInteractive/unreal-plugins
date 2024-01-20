---
title: FRHAPI_Items Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A collections of Items by Item ID.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TMap< FString, [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) >|[Items_Optional](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items_1acb634134dc074f992328d8d87d1f9d62)|A collection of Items by Item ID.|
|bool|[Items_IsSet](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items_1ab618761f9969f6d5952ba37001edac5a)|true if Items_Optional has been set to a value|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|[CacheInfo_Optional](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items_1a1217986ceec7a05241e7e957cb9828fa)||
|bool|[CacheInfo_IsSet](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items_1aa69362208158a2532fe056d3826818a2)|true if CacheInfo_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items_1a7d988b32b08e2f3336e8a842c35af7b7)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items_1a913a71601a108617f25afa168f333d97)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TMap< FString, [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) > &|[GetItems](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items_1ab44675ebca65c87de42ec268fc199997)()|Gets the value of Items_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) > &|[GetItems](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items_1aed87cc2a3e31525a7da7a9eb8a7278a1)()|Gets the value of Items_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) > &|[GetItems](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items_1a1d50f8da7328aef3369ebd7a22b1bfd1)(const TMap< FString, [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) > & DefaultValue)|Gets the value of Items_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetItems](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items_1af64a10709091193e9ddf7f8cae227334)(TMap< FString, [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) > & OutValue)|Fills OutValue with the value of Items_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) > *|[GetItemsOrNull](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items_1a59a64d015fb6d45f928a01d377ca9ff1)()|Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) > *|[GetItemsOrNull](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items_1a727c9a06c92134aa5df7380d3b213b4e)()|Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetItems](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items_1a3d7697d693b05aef7dc34583c8aa4188)(TMap< FString, [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) > NewValue)|Sets the value of Items_Optional and also sets Items_IsSet to true.|
|void|[ClearItems](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items_1a2f14e5ee5d4d02ff849753ef84a9a713)()|Clears the value of Items_Optional and sets Items_IsSet to false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items_1a298ec445177a4b83f5ecb0033a193b7f)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items_1af09b7f5f49d7f5ba4e38002a72473e18)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items_1a4817236512ffe065a3acbb51cc8be6e9)(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)|Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCacheInfo](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items_1a88edb36b4ed0b822839435f34dc71c2b)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)|Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items_1a3fd57fc77b04c5e29de60c279a4e0761)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items_1a3071a0878ff7776f22f57fcd3f93098e)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCacheInfo](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items_1ab308c1803a753ea3b798d90e685592a5)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)|Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.|
|void|[ClearCacheInfo](/unreal-plugins/all/structfrhapi__items/#structFRHAPI__Items_1a92bb319e2322768d4493dd851721c1ac)()|Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.|
## Public Attributes



### `Items_Optional` <a id="structFRHAPI__Items_1acb634134dc074f992328d8d87d1f9d62"></a>

`TMap<FString, FRHAPI_Item> FRHAPI_Items::Items_Optional`

A collection of Items by Item ID.




### `Items_IsSet` <a id="structFRHAPI__Items_1ab618761f9969f6d5952ba37001edac5a"></a>

`bool FRHAPI_Items::Items_IsSet`

true if Items_Optional has been set to a value




### `CacheInfo_Optional` <a id="structFRHAPI__Items_1a1217986ceec7a05241e7e957cb9828fa"></a>

`FRHAPI_CacheInfo FRHAPI_Items::CacheInfo_Optional`






### `CacheInfo_IsSet` <a id="structFRHAPI__Items_1aa69362208158a2532fe056d3826818a2"></a>

`bool FRHAPI_Items::CacheInfo_IsSet`

true if CacheInfo_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__Items_1a7d988b32b08e2f3336e8a842c35af7b7"></a>

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



### `WriteJson` <a id="structFRHAPI__Items_1a913a71601a108617f25afa168f333d97"></a>

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



### `GetItems` <a id="structFRHAPI__Items_1ab44675ebca65c87de42ec268fc199997"></a>

TMap< FString, [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) > & GetItems()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Items_Optional, regardless of it having been set.




### `GetItems` <a id="structFRHAPI__Items_1aed87cc2a3e31525a7da7a9eb8a7278a1"></a>

const TMap< FString, [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) > & GetItems()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Items_Optional, regardless of it having been set.




### `GetItems` <a id="structFRHAPI__Items_1a1d50f8da7328aef3369ebd7a22b1bfd1"></a>

const TMap< FString, [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) > & GetItems(const TMap< FString, [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) > &|DefaultValue|

#### Description

Gets the value of Items_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetItems` <a id="structFRHAPI__Items_1af64a10709091193e9ddf7f8cae227334"></a>

bool GetItems(TMap< FString, [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) > &|OutValue|

#### Description

Fills OutValue with the value of Items_Optional and returns true if it has been set, otherwise returns false.




### `GetItemsOrNull` <a id="structFRHAPI__Items_1a59a64d015fb6d45f928a01d377ca9ff1"></a>

TMap< FString, [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) > * GetItemsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.




### `GetItemsOrNull` <a id="structFRHAPI__Items_1a727c9a06c92134aa5df7380d3b213b4e"></a>

const TMap< FString, [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) > * GetItemsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.




### `SetItems` <a id="structFRHAPI__Items_1a3d7697d693b05aef7dc34583c8aa4188"></a>

void SetItems(TMap< FString, [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_Item](/unreal-plugins/all/structfrhapi__item/#structFRHAPI__Item) >|NewValue|

#### Description

Sets the value of Items_Optional and also sets Items_IsSet to true.




### `ClearItems` <a id="structFRHAPI__Items_1a2f14e5ee5d4d02ff849753ef84a9a713"></a>

void ClearItems()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Items_Optional and sets Items_IsSet to false.




### `GetCacheInfo` <a id="structFRHAPI__Items_1a298ec445177a4b83f5ecb0033a193b7f"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__Items_1af09b7f5f49d7f5ba4e38002a72473e18"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__Items_1a4817236512ffe065a3acbb51cc8be6e9"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|DefaultValue|

#### Description

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCacheInfo` <a id="structFRHAPI__Items_1a88edb36b4ed0b822839435f34dc71c2b"></a>

bool GetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|OutValue|

#### Description

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.




### `GetCacheInfoOrNull` <a id="structFRHAPI__Items_1a3fd57fc77b04c5e29de60c279a4e0761"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `GetCacheInfoOrNull` <a id="structFRHAPI__Items_1a3071a0878ff7776f22f57fcd3f93098e"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `SetCacheInfo` <a id="structFRHAPI__Items_1ab308c1803a753ea3b798d90e685592a5"></a>

void SetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|NewValue|

#### Description

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.




### `ClearCacheInfo` <a id="structFRHAPI__Items_1a92bb319e2322768d4493dd851721c1ac"></a>

void ClearCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.





