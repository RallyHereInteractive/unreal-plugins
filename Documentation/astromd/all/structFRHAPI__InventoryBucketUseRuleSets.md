---
title: FRHAPI_InventoryBucketUseRuleSets Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A collection of Inventory Bucket Use Rule Sets. A rule set determine how item can be used across buckets.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TMap< FString, [FRHAPI_InventoryBucketUseRuleSet](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet) >|[RuleSets_Optional](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets_1a17c48373eacf1cee94d93c5c6310613a)||
|bool|[RuleSets_IsSet](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets_1a513a99e13bbf917413a530e724e6d407)|true if RuleSets_Optional has been set to a value|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|[CacheInfo_Optional](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets_1ad40dd88c905bde3c6c5bcf128a500fdb)||
|bool|[CacheInfo_IsSet](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets_1ac4f99d8e6addd6040a186dba7f24a0fd)|true if CacheInfo_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets_1a986afa0d79d2b74be52e5e9b621b20e5)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets_1ace1a345fd38d6b67216c52f99ae04e36)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TMap< FString, [FRHAPI_InventoryBucketUseRuleSet](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet) > &|[GetRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets_1ad87ebbcd244c110a5b0fd43480c7fb3f)()|Gets the value of RuleSets_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_InventoryBucketUseRuleSet](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet) > &|[GetRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets_1af025ca483b6f2d2c41b0ea72a6246a15)()|Gets the value of RuleSets_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_InventoryBucketUseRuleSet](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet) > &|[GetRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets_1a2bf664064f84affc890554088aa5fd12)(const TMap< FString, [FRHAPI_InventoryBucketUseRuleSet](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet) > & DefaultValue)|Gets the value of RuleSets_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets_1a20ab8741220988f68b99436142b308cc)(TMap< FString, [FRHAPI_InventoryBucketUseRuleSet](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet) > & OutValue)|Fills OutValue with the value of RuleSets_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, [FRHAPI_InventoryBucketUseRuleSet](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet) > *|[GetRuleSetsOrNull](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets_1a8c7730910e0f2c0f66c0ac07e3d967bc)()|Returns a pointer to RuleSets_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, [FRHAPI_InventoryBucketUseRuleSet](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet) > *|[GetRuleSetsOrNull](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets_1a1409a120b179be2507d41425a018ddad)()|Returns a pointer to RuleSets_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets_1a7c670c4dde0611d9b6e27a47fda9a04c)(TMap< FString, [FRHAPI_InventoryBucketUseRuleSet](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet) > NewValue)|Sets the value of RuleSets_Optional and also sets RuleSets_IsSet to true.|
|void|[ClearRuleSets](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets_1a4d056b0e01547e67525ae74343fe932f)()|Clears the value of RuleSets_Optional and sets RuleSets_IsSet to false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets_1a5faa4a8938f8eba12e0d430f9fe24634)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets_1a6eac72a5d10765adb6bf64f9e6ac996b)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets_1a619c1b2c5e924631d195fa563da590a5)(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)|Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCacheInfo](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets_1a33dd772efcf464da6b3b6db246e6097b)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)|Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets_1a2d4eb355e30583e9bb0d364610e615dc)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets_1aebaf7ae0573b04b04c1111faa2ff5eae)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCacheInfo](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets_1a6137f5004b123127d0b9e968bc20e460)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)|Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.|
|void|[ClearCacheInfo](/unreal-plugins/all/structfrhapi__inventorybucketuserulesets/#structFRHAPI__InventoryBucketUseRuleSets_1a20b164be4527441b9245a6558fbc2db3)()|Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.|
## Public Attributes



### `RuleSets_Optional` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a17c48373eacf1cee94d93c5c6310613a"></a>

`TMap<FString, FRHAPI_InventoryBucketUseRuleSet> FRHAPI_InventoryBucketUseRuleSets::RuleSets_Optional`






### `RuleSets_IsSet` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a513a99e13bbf917413a530e724e6d407"></a>

`bool FRHAPI_InventoryBucketUseRuleSets::RuleSets_IsSet`

true if RuleSets_Optional has been set to a value




### `CacheInfo_Optional` <a id="structFRHAPI__InventoryBucketUseRuleSets_1ad40dd88c905bde3c6c5bcf128a500fdb"></a>

`FRHAPI_CacheInfo FRHAPI_InventoryBucketUseRuleSets::CacheInfo_Optional`






### `CacheInfo_IsSet` <a id="structFRHAPI__InventoryBucketUseRuleSets_1ac4f99d8e6addd6040a186dba7f24a0fd"></a>

`bool FRHAPI_InventoryBucketUseRuleSets::CacheInfo_IsSet`

true if CacheInfo_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a986afa0d79d2b74be52e5e9b621b20e5"></a>

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



### `WriteJson` <a id="structFRHAPI__InventoryBucketUseRuleSets_1ace1a345fd38d6b67216c52f99ae04e36"></a>

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



### `GetRuleSets` <a id="structFRHAPI__InventoryBucketUseRuleSets_1ad87ebbcd244c110a5b0fd43480c7fb3f"></a>

TMap< FString, [FRHAPI_InventoryBucketUseRuleSet](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet) > & GetRuleSets()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RuleSets_Optional, regardless of it having been set.




### `GetRuleSets` <a id="structFRHAPI__InventoryBucketUseRuleSets_1af025ca483b6f2d2c41b0ea72a6246a15"></a>

const TMap< FString, [FRHAPI_InventoryBucketUseRuleSet](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet) > & GetRuleSets()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RuleSets_Optional, regardless of it having been set.




### `GetRuleSets` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a2bf664064f84affc890554088aa5fd12"></a>

const TMap< FString, [FRHAPI_InventoryBucketUseRuleSet](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet) > & GetRuleSets(const TMap< FString, [FRHAPI_InventoryBucketUseRuleSet](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, [FRHAPI_InventoryBucketUseRuleSet](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet) > &|DefaultValue|

#### Description

Gets the value of RuleSets_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetRuleSets` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a20ab8741220988f68b99436142b308cc"></a>

bool GetRuleSets(TMap< FString, [FRHAPI_InventoryBucketUseRuleSet](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_InventoryBucketUseRuleSet](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet) > &|OutValue|

#### Description

Fills OutValue with the value of RuleSets_Optional and returns true if it has been set, otherwise returns false.




### `GetRuleSetsOrNull` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a8c7730910e0f2c0f66c0ac07e3d967bc"></a>

TMap< FString, [FRHAPI_InventoryBucketUseRuleSet](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet) > * GetRuleSetsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RuleSets_Optional, if it has been set, otherwise returns nullptr.




### `GetRuleSetsOrNull` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a1409a120b179be2507d41425a018ddad"></a>

const TMap< FString, [FRHAPI_InventoryBucketUseRuleSet](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet) > * GetRuleSetsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RuleSets_Optional, if it has been set, otherwise returns nullptr.




### `SetRuleSets` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a7c670c4dde0611d9b6e27a47fda9a04c"></a>

void SetRuleSets(TMap< FString, [FRHAPI_InventoryBucketUseRuleSet](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_InventoryBucketUseRuleSet](/unreal-plugins/all/structfrhapi__inventorybucketuseruleset/#structFRHAPI__InventoryBucketUseRuleSet) >|NewValue|

#### Description

Sets the value of RuleSets_Optional and also sets RuleSets_IsSet to true.




### `ClearRuleSets` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a4d056b0e01547e67525ae74343fe932f"></a>

void ClearRuleSets()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of RuleSets_Optional and sets RuleSets_IsSet to false.




### `GetCacheInfo` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a5faa4a8938f8eba12e0d430f9fe24634"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a6eac72a5d10765adb6bf64f9e6ac996b"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a619c1b2c5e924631d195fa563da590a5"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|DefaultValue|

#### Description

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCacheInfo` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a33dd772efcf464da6b3b6db246e6097b"></a>

bool GetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|OutValue|

#### Description

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.




### `GetCacheInfoOrNull` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a2d4eb355e30583e9bb0d364610e615dc"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `GetCacheInfoOrNull` <a id="structFRHAPI__InventoryBucketUseRuleSets_1aebaf7ae0573b04b04c1111faa2ff5eae"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `SetCacheInfo` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a6137f5004b123127d0b9e968bc20e460"></a>

void SetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|NewValue|

#### Description

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.




### `ClearCacheInfo` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a20b164be4527441b9245a6558fbc2db3"></a>

void ClearCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.





