---
title: FRHAPI_XpTables Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A collection of XP Tables. Each table is a collection of XP Levels from 1 to N. Each level has a minimum XP value.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TMap< FString, [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) >|[XpTables_Optional](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables_1a90ef438f2446120231d00b57631d3204)||
|bool|[XpTables_IsSet](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables_1aa061df042a1720cd499d4a68be0e5957)|true if XpTables_Optional has been set to a value|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|[CacheInfo_Optional](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables_1ad6486b25138e6eaa3a16b8c113f469ac)||
|bool|[CacheInfo_IsSet](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables_1a4465262732b3575e599b9fdaedfa630d)|true if CacheInfo_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables_1ac8cfeaa5829c51c141e56ad7fa1592f1)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables_1a11516e190d479012d476c41546ed05dd)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TMap< FString, [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) > &|[GetXpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables_1a5cf0eea7fc61ec2914c9bc490b42ecfb)()|Gets the value of XpTables_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) > &|[GetXpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables_1a617edd4b819dc511e57ef424a35376a5)()|Gets the value of XpTables_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) > &|[GetXpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables_1a43aeb1fb295361074de4b36ec896bb44)(const TMap< FString, [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) > & DefaultValue)|Gets the value of XpTables_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetXpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables_1ac8091df60e620a103d8b670dff5ec432)(TMap< FString, [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) > & OutValue)|Fills OutValue with the value of XpTables_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) > *|[GetXpTablesOrNull](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables_1a18a28d46df966f62cd8ae8bcba4f37a3)()|Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) > *|[GetXpTablesOrNull](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables_1ac1becdee264194795d14db3260674367)()|Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetXpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables_1abb1d6f2e7b799fd9b3870d6ca90f8d7f)(TMap< FString, [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) > NewValue)|Sets the value of XpTables_Optional and also sets XpTables_IsSet to true.|
|void|[ClearXpTables](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables_1a5e36b4e4ff74998ec3a45b32ad162ae8)()|Clears the value of XpTables_Optional and sets XpTables_IsSet to false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables_1ad08c1f6908fdfef7f234db7e03233494)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables_1ad45af97da545060b85f1a28c598a370a)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables_1a1f789b1735456afe2f8f0a5782123edd)(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)|Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCacheInfo](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables_1a8fc8d4ba53a4047c2587034cd2600128)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)|Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables_1ab13a95651a4b27bde71716fc85e572be)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables_1ae9f9361501b6337170ac868b853539df)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCacheInfo](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables_1a3483a3c77324a4d50bee36cd5775be94)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)|Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.|
|void|[ClearCacheInfo](/unreal-plugins/all/structfrhapi__xptables/#structFRHAPI__XpTables_1a95f676a52f3ffb25429170bd6b5977c1)()|Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.|
## Public Attributes



### `XpTables_Optional` <a id="structFRHAPI__XpTables_1a90ef438f2446120231d00b57631d3204"></a>

`TMap<FString, FRHAPI_XpTable> FRHAPI_XpTables::XpTables_Optional`






### `XpTables_IsSet` <a id="structFRHAPI__XpTables_1aa061df042a1720cd499d4a68be0e5957"></a>

`bool FRHAPI_XpTables::XpTables_IsSet`

true if XpTables_Optional has been set to a value




### `CacheInfo_Optional` <a id="structFRHAPI__XpTables_1ad6486b25138e6eaa3a16b8c113f469ac"></a>

`FRHAPI_CacheInfo FRHAPI_XpTables::CacheInfo_Optional`






### `CacheInfo_IsSet` <a id="structFRHAPI__XpTables_1a4465262732b3575e599b9fdaedfa630d"></a>

`bool FRHAPI_XpTables::CacheInfo_IsSet`

true if CacheInfo_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__XpTables_1ac8cfeaa5829c51c141e56ad7fa1592f1"></a>

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



### `WriteJson` <a id="structFRHAPI__XpTables_1a11516e190d479012d476c41546ed05dd"></a>

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



### `GetXpTables` <a id="structFRHAPI__XpTables_1a5cf0eea7fc61ec2914c9bc490b42ecfb"></a>

TMap< FString, [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) > & GetXpTables()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of XpTables_Optional, regardless of it having been set.




### `GetXpTables` <a id="structFRHAPI__XpTables_1a617edd4b819dc511e57ef424a35376a5"></a>

const TMap< FString, [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) > & GetXpTables()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of XpTables_Optional, regardless of it having been set.




### `GetXpTables` <a id="structFRHAPI__XpTables_1a43aeb1fb295361074de4b36ec896bb44"></a>

const TMap< FString, [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) > & GetXpTables(const TMap< FString, [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) > &|DefaultValue|

#### Description

Gets the value of XpTables_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetXpTables` <a id="structFRHAPI__XpTables_1ac8091df60e620a103d8b670dff5ec432"></a>

bool GetXpTables(TMap< FString, [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) > &|OutValue|

#### Description

Fills OutValue with the value of XpTables_Optional and returns true if it has been set, otherwise returns false.




### `GetXpTablesOrNull` <a id="structFRHAPI__XpTables_1a18a28d46df966f62cd8ae8bcba4f37a3"></a>

TMap< FString, [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) > * GetXpTablesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr.




### `GetXpTablesOrNull` <a id="structFRHAPI__XpTables_1ac1becdee264194795d14db3260674367"></a>

const TMap< FString, [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) > * GetXpTablesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr.




### `SetXpTables` <a id="structFRHAPI__XpTables_1abb1d6f2e7b799fd9b3870d6ca90f8d7f"></a>

void SetXpTables(TMap< FString, [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_XpTable](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable) >|NewValue|

#### Description

Sets the value of XpTables_Optional and also sets XpTables_IsSet to true.




### `ClearXpTables` <a id="structFRHAPI__XpTables_1a5e36b4e4ff74998ec3a45b32ad162ae8"></a>

void ClearXpTables()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of XpTables_Optional and sets XpTables_IsSet to false.




### `GetCacheInfo` <a id="structFRHAPI__XpTables_1ad08c1f6908fdfef7f234db7e03233494"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__XpTables_1ad45af97da545060b85f1a28c598a370a"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__XpTables_1a1f789b1735456afe2f8f0a5782123edd"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|DefaultValue|

#### Description

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCacheInfo` <a id="structFRHAPI__XpTables_1a8fc8d4ba53a4047c2587034cd2600128"></a>

bool GetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|OutValue|

#### Description

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.




### `GetCacheInfoOrNull` <a id="structFRHAPI__XpTables_1ab13a95651a4b27bde71716fc85e572be"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `GetCacheInfoOrNull` <a id="structFRHAPI__XpTables_1ae9f9361501b6337170ac868b853539df"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `SetCacheInfo` <a id="structFRHAPI__XpTables_1a3483a3c77324a4d50bee36cd5775be94"></a>

void SetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|NewValue|

#### Description

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.




### `ClearCacheInfo` <a id="structFRHAPI__XpTables_1a95f676a52f3ffb25429170bd6b5977c1"></a>

void ClearCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.





