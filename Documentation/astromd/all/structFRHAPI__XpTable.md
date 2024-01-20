---
title: FRHAPI_XpTable Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A collection of XP Levels from 1 to N. Each level has a minimum XP value.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1af1d0f6100d26e90a9c94c41d719bbab4)|Custom data associated with the resource.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1a91f78eae595931b545702560639fe2b1)|true if CustomData_Optional has been set to a value|
|TMap< FString, int32 >|[XpEntries_Optional](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1a6fce5a0a8d2d65c0049771d51bf6b2cf)||
|bool|[XpEntries_IsSet](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1a0d1d82acc42c1ad029117cd1ea15cb12)|true if XpEntries_Optional has been set to a value|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|[CacheInfo_Optional](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1a0785200adbf808bdd25fab3cb5f01b0b)||
|bool|[CacheInfo_IsSet](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1a90dc3ba87a1ecdef6402df456d2389f8)|true if CacheInfo_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1a24ea4b28edc4316d7b54c1c1cfccb6e8)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1aa42ec7439d7080f1fb091eb32ea5163f)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1a114b66b927102155aee991cd58933d6b)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1a807ff3cb851d942fe382189b2d1de39d)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1a49b4dce12c110d5ab853cb3806538360)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1ab510bf011a4173a01f6f536a3fe7b3be)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1a671589c09f7b9c04afe1f9ec78a08ffb)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1a78bc02a47e85ccbaa064abd3ba74d5ac)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1a8a4b62744773d285f688ad4749e10a2a)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1ae84305fd00b049e142b7ca609225e959)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
|TMap< FString, int32 > &|[GetXpEntries](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1af3fd80f0b0ca8769eb57089f7a672448)()|Gets the value of XpEntries_Optional, regardless of it having been set.|
|const TMap< FString, int32 > &|[GetXpEntries](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1a28bd1c9fbc988a8fb285418a5ff0f332)()|Gets the value of XpEntries_Optional, regardless of it having been set.|
|const TMap< FString, int32 > &|[GetXpEntries](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1a19d0b92c5075718cb70ecaf15994a270)(const TMap< FString, int32 > & DefaultValue)|Gets the value of XpEntries_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetXpEntries](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1a9f905a87e09cf2d84b6ae98e0f7ec030)(TMap< FString, int32 > & OutValue)|Fills OutValue with the value of XpEntries_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, int32 > *|[GetXpEntriesOrNull](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1af21728e76da9955953e58d1b95161481)()|Returns a pointer to XpEntries_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, int32 > *|[GetXpEntriesOrNull](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1adfcc075e78c9ea6083a73fcc4aed0159)()|Returns a pointer to XpEntries_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetXpEntries](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1ad547837eb0f02ec3a818fde029e26c67)(TMap< FString, int32 > NewValue)|Sets the value of XpEntries_Optional and also sets XpEntries_IsSet to true.|
|void|[ClearXpEntries](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1adfef2f411c225c0d6bfd1272ac300bb7)()|Clears the value of XpEntries_Optional and sets XpEntries_IsSet to false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1a355e9df63257ca1d858dc66204012a91)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1a56c3f70e35c5617fa2de8e753152b5de)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1a12fbb3744d1457d74515689bfb75f48d)(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)|Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCacheInfo](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1ac2851870da4c14480a5f4db8b5c5c69a)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)|Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1a4aedfc9c07616d5dc36dfea2fd89ff86)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1aa86736fb49ce03fa012e98b5e1036efa)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCacheInfo](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1a34c25571f9fe95c96a3540fb488274a6)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)|Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.|
|void|[ClearCacheInfo](/unreal-plugins/all/structfrhapi__xptable/#structFRHAPI__XpTable_1aa5ecb7e76cf1ff2ad80407b03a12f840)()|Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.|
## Public Attributes



### `CustomData_Optional` <a id="structFRHAPI__XpTable_1af1d0f6100d26e90a9c94c41d719bbab4"></a>

`TMap<FString, FString> FRHAPI_XpTable::CustomData_Optional`

Custom data associated with the resource.




### `CustomData_IsSet` <a id="structFRHAPI__XpTable_1a91f78eae595931b545702560639fe2b1"></a>

`bool FRHAPI_XpTable::CustomData_IsSet`

true if CustomData_Optional has been set to a value




### `XpEntries_Optional` <a id="structFRHAPI__XpTable_1a6fce5a0a8d2d65c0049771d51bf6b2cf"></a>

`TMap<FString, int32> FRHAPI_XpTable::XpEntries_Optional`






### `XpEntries_IsSet` <a id="structFRHAPI__XpTable_1a0d1d82acc42c1ad029117cd1ea15cb12"></a>

`bool FRHAPI_XpTable::XpEntries_IsSet`

true if XpEntries_Optional has been set to a value




### `CacheInfo_Optional` <a id="structFRHAPI__XpTable_1a0785200adbf808bdd25fab3cb5f01b0b"></a>

`FRHAPI_CacheInfo FRHAPI_XpTable::CacheInfo_Optional`






### `CacheInfo_IsSet` <a id="structFRHAPI__XpTable_1a90dc3ba87a1ecdef6402df456d2389f8"></a>

`bool FRHAPI_XpTable::CacheInfo_IsSet`

true if CacheInfo_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__XpTable_1a24ea4b28edc4316d7b54c1c1cfccb6e8"></a>

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



### `WriteJson` <a id="structFRHAPI__XpTable_1aa42ec7439d7080f1fb091eb32ea5163f"></a>

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



### `GetCustomData` <a id="structFRHAPI__XpTable_1a114b66b927102155aee991cd58933d6b"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__XpTable_1a807ff3cb851d942fe382189b2d1de39d"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__XpTable_1a49b4dce12c110d5ab853cb3806538360"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__XpTable_1ab510bf011a4173a01f6f536a3fe7b3be"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__XpTable_1a671589c09f7b9c04afe1f9ec78a08ffb"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__XpTable_1a78bc02a47e85ccbaa064abd3ba74d5ac"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__XpTable_1a8a4b62744773d285f688ad4749e10a2a"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__XpTable_1ae84305fd00b049e142b7ca609225e959"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.




### `GetXpEntries` <a id="structFRHAPI__XpTable_1af3fd80f0b0ca8769eb57089f7a672448"></a>

TMap< FString, int32 > & GetXpEntries()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of XpEntries_Optional, regardless of it having been set.




### `GetXpEntries` <a id="structFRHAPI__XpTable_1a28bd1c9fbc988a8fb285418a5ff0f332"></a>

const TMap< FString, int32 > & GetXpEntries()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of XpEntries_Optional, regardless of it having been set.




### `GetXpEntries` <a id="structFRHAPI__XpTable_1a19d0b92c5075718cb70ecaf15994a270"></a>

const TMap< FString, int32 > & GetXpEntries(const TMap< FString, int32 > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, int32 > &|DefaultValue|

#### Description

Gets the value of XpEntries_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetXpEntries` <a id="structFRHAPI__XpTable_1a9f905a87e09cf2d84b6ae98e0f7ec030"></a>

bool GetXpEntries(TMap< FString, int32 > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, int32 > &|OutValue|

#### Description

Fills OutValue with the value of XpEntries_Optional and returns true if it has been set, otherwise returns false.




### `GetXpEntriesOrNull` <a id="structFRHAPI__XpTable_1af21728e76da9955953e58d1b95161481"></a>

TMap< FString, int32 > * GetXpEntriesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to XpEntries_Optional, if it has been set, otherwise returns nullptr.




### `GetXpEntriesOrNull` <a id="structFRHAPI__XpTable_1adfcc075e78c9ea6083a73fcc4aed0159"></a>

const TMap< FString, int32 > * GetXpEntriesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to XpEntries_Optional, if it has been set, otherwise returns nullptr.




### `SetXpEntries` <a id="structFRHAPI__XpTable_1ad547837eb0f02ec3a818fde029e26c67"></a>

void SetXpEntries(TMap< FString, int32 > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, int32 >|NewValue|

#### Description

Sets the value of XpEntries_Optional and also sets XpEntries_IsSet to true.




### `ClearXpEntries` <a id="structFRHAPI__XpTable_1adfef2f411c225c0d6bfd1272ac300bb7"></a>

void ClearXpEntries()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of XpEntries_Optional and sets XpEntries_IsSet to false.




### `GetCacheInfo` <a id="structFRHAPI__XpTable_1a355e9df63257ca1d858dc66204012a91"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__XpTable_1a56c3f70e35c5617fa2de8e753152b5de"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__XpTable_1a12fbb3744d1457d74515689bfb75f48d"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|DefaultValue|

#### Description

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCacheInfo` <a id="structFRHAPI__XpTable_1ac2851870da4c14480a5f4db8b5c5c69a"></a>

bool GetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|OutValue|

#### Description

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.




### `GetCacheInfoOrNull` <a id="structFRHAPI__XpTable_1a4aedfc9c07616d5dc36dfea2fd89ff86"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `GetCacheInfoOrNull` <a id="structFRHAPI__XpTable_1aa86736fb49ce03fa012e98b5e1036efa"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `SetCacheInfo` <a id="structFRHAPI__XpTable_1a34c25571f9fe95c96a3540fb488274a6"></a>

void SetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|NewValue|

#### Description

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.




### `ClearCacheInfo` <a id="structFRHAPI__XpTable_1aa5ecb7e76cf1ff2ad80407b03a12f840"></a>

void ClearCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.





