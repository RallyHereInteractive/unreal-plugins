---
title: FRHAPI_InventoryBucketUseRuleSet Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A collection of Inventory Bucket Use Rules.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1a4374570f7a6d6a2118db206d13102262)|Custom data associated with the resource.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1af60fc9b377629639c7025d662e902ea1)|true if CustomData_Optional has been set to a value|
|TMap< FString, TArray< ERHAPI_InventoryBucket > >|[Rules_Optional](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1adabe35c0c43a1efc7d7e500bee62361c)||
|bool|[Rules_IsSet](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1aa50ffc24695f9e0ff5d1e739e9d59468)|true if Rules_Optional has been set to a value|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|[CacheInfo_Optional](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1a17b67b628e51e41059c636d81be35b61)||
|bool|[CacheInfo_IsSet](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1a4fa08d3e6e9d4463b4b8fbcc18f4eea4)|true if CacheInfo_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1a13237921eba8c49f52fec51ea978c65a)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1aa8dc9bb6d89b39bc4563007af760539e)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1aab4d4efda7fe884ab72b2756b26bd6f7)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1a1097b915c8cd4068e5610dcb36afc6ef)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1a3f74937f016677ed751d2eb26d49dd1f)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1a9c8fe85adf370d1953ef9ceceaf27650)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1a4593fcce0bb67164bb2405d161eda834)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1acef1cf57857cead46bac4f8938515300)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1a19de57e29e4691424bd6f004eb4cbcef)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1aa7d7014a319b6cdfa75c8ffbc29df9a8)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
|TMap< FString, TArray< ERHAPI_InventoryBucket > > &|[GetRules](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1aced5f3ac4be8df47774a321d5526b74b)()|Gets the value of Rules_Optional, regardless of it having been set.|
|const TMap< FString, TArray< ERHAPI_InventoryBucket > > &|[GetRules](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1adf6b0f28861588e7cd5100baf7588c19)()|Gets the value of Rules_Optional, regardless of it having been set.|
|const TMap< FString, TArray< ERHAPI_InventoryBucket > > &|[GetRules](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1a6a5c4e4ff275d2dc60a12437367a67bd)(const TMap< FString, TArray< ERHAPI_InventoryBucket >> & DefaultValue)|Gets the value of Rules_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetRules](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1a9cfccb1f933c1f299fb797f9f59d2345)(TMap< FString, TArray< ERHAPI_InventoryBucket >> & OutValue)|Fills OutValue with the value of Rules_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, TArray< ERHAPI_InventoryBucket > > *|[GetRulesOrNull](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1a350d6a1c46edecd8e616bb5d40003ad9)()|Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, TArray< ERHAPI_InventoryBucket > > *|[GetRulesOrNull](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1a78402ea9f581e34052f075461388792e)()|Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetRules](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1a1e17a064d500256ca5111ac660895e67)(TMap< FString, TArray< ERHAPI_InventoryBucket >> NewValue)|Sets the value of Rules_Optional and also sets Rules_IsSet to true.|
|void|[ClearRules](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1a2aeec262f695a6ff14d989c6d532dbab)()|Clears the value of Rules_Optional and sets Rules_IsSet to false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1af9676a5f549a8a863e6c7f93029dfd5e)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1aa8ce2a6807db5c96543011c1489a32b4)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1ad98d7a55c6eadd7816aadc8c202af12e)(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)|Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCacheInfo](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1a9a3c8b2abb791da4fbb64517e54b64d5)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)|Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1aaee1c5d2aa7f373470feb207265f77d3)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1af4530ce36764f61b32287474341122a8)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCacheInfo](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1a13a4aab1936a8437f0dc71e81b90c77d)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)|Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.|
|void|[ClearCacheInfo](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet_1ae67f10a6ce01ad498fd5ce97401c7c96)()|Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.|
## Public Attributes



### `CustomData_Optional` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a4374570f7a6d6a2118db206d13102262"></a>

`TMap<FString, FString> FRHAPI_InventoryBucketUseRuleSet::CustomData_Optional`

Custom data associated with the resource.




### `CustomData_IsSet` <a id="structFRHAPI__InventoryBucketUseRuleSet_1af60fc9b377629639c7025d662e902ea1"></a>

`bool FRHAPI_InventoryBucketUseRuleSet::CustomData_IsSet`

true if CustomData_Optional has been set to a value




### `Rules_Optional` <a id="structFRHAPI__InventoryBucketUseRuleSet_1adabe35c0c43a1efc7d7e500bee62361c"></a>

`TMap<FString, TArray<ERHAPI_InventoryBucket> > FRHAPI_InventoryBucketUseRuleSet::Rules_Optional`






### `Rules_IsSet` <a id="structFRHAPI__InventoryBucketUseRuleSet_1aa50ffc24695f9e0ff5d1e739e9d59468"></a>

`bool FRHAPI_InventoryBucketUseRuleSet::Rules_IsSet`

true if Rules_Optional has been set to a value




### `CacheInfo_Optional` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a17b67b628e51e41059c636d81be35b61"></a>

`FRHAPI_CacheInfo FRHAPI_InventoryBucketUseRuleSet::CacheInfo_Optional`






### `CacheInfo_IsSet` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a4fa08d3e6e9d4463b4b8fbcc18f4eea4"></a>

`bool FRHAPI_InventoryBucketUseRuleSet::CacheInfo_IsSet`

true if CacheInfo_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a13237921eba8c49f52fec51ea978c65a"></a>

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



### `WriteJson` <a id="structFRHAPI__InventoryBucketUseRuleSet_1aa8dc9bb6d89b39bc4563007af760539e"></a>

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



### `GetCustomData` <a id="structFRHAPI__InventoryBucketUseRuleSet_1aab4d4efda7fe884ab72b2756b26bd6f7"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a1097b915c8cd4068e5610dcb36afc6ef"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a3f74937f016677ed751d2eb26d49dd1f"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a9c8fe85adf370d1953ef9ceceaf27650"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a4593fcce0bb67164bb2405d161eda834"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__InventoryBucketUseRuleSet_1acef1cf57857cead46bac4f8938515300"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a19de57e29e4691424bd6f004eb4cbcef"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__InventoryBucketUseRuleSet_1aa7d7014a319b6cdfa75c8ffbc29df9a8"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.




### `GetRules` <a id="structFRHAPI__InventoryBucketUseRuleSet_1aced5f3ac4be8df47774a321d5526b74b"></a>

TMap< FString, TArray< ERHAPI_InventoryBucket > > & GetRules()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Rules_Optional, regardless of it having been set.




### `GetRules` <a id="structFRHAPI__InventoryBucketUseRuleSet_1adf6b0f28861588e7cd5100baf7588c19"></a>

const TMap< FString, TArray< ERHAPI_InventoryBucket > > & GetRules()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Rules_Optional, regardless of it having been set.




### `GetRules` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a6a5c4e4ff275d2dc60a12437367a67bd"></a>

const TMap< FString, TArray< ERHAPI_InventoryBucket > > & GetRules(const TMap< FString, TArray< ERHAPI_InventoryBucket >> & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, TArray< ERHAPI_InventoryBucket >> &|DefaultValue|

#### Description

Gets the value of Rules_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetRules` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a9cfccb1f933c1f299fb797f9f59d2345"></a>

bool GetRules(TMap< FString, TArray< ERHAPI_InventoryBucket >> & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, TArray< ERHAPI_InventoryBucket >> &|OutValue|

#### Description

Fills OutValue with the value of Rules_Optional and returns true if it has been set, otherwise returns false.




### `GetRulesOrNull` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a350d6a1c46edecd8e616bb5d40003ad9"></a>

TMap< FString, TArray< ERHAPI_InventoryBucket > > * GetRulesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.




### `GetRulesOrNull` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a78402ea9f581e34052f075461388792e"></a>

const TMap< FString, TArray< ERHAPI_InventoryBucket > > * GetRulesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.




### `SetRules` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a1e17a064d500256ca5111ac660895e67"></a>

void SetRules(TMap< FString, TArray< ERHAPI_InventoryBucket >> NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, TArray< ERHAPI_InventoryBucket >>|NewValue|

#### Description

Sets the value of Rules_Optional and also sets Rules_IsSet to true.




### `ClearRules` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a2aeec262f695a6ff14d989c6d532dbab"></a>

void ClearRules()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Rules_Optional and sets Rules_IsSet to false.




### `GetCacheInfo` <a id="structFRHAPI__InventoryBucketUseRuleSet_1af9676a5f549a8a863e6c7f93029dfd5e"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__InventoryBucketUseRuleSet_1aa8ce2a6807db5c96543011c1489a32b4"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__InventoryBucketUseRuleSet_1ad98d7a55c6eadd7816aadc8c202af12e"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|DefaultValue|

#### Description

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCacheInfo` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a9a3c8b2abb791da4fbb64517e54b64d5"></a>

bool GetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|OutValue|

#### Description

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.




### `GetCacheInfoOrNull` <a id="structFRHAPI__InventoryBucketUseRuleSet_1aaee1c5d2aa7f373470feb207265f77d3"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `GetCacheInfoOrNull` <a id="structFRHAPI__InventoryBucketUseRuleSet_1af4530ce36764f61b32287474341122a8"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `SetCacheInfo` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a13a4aab1936a8437f0dc71e81b90c77d"></a>

void SetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|NewValue|

#### Description

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.




### `ClearCacheInfo` <a id="structFRHAPI__InventoryBucketUseRuleSet_1ae67f10a6ce01ad498fd5ce97401c7c96"></a>

void ClearCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.





