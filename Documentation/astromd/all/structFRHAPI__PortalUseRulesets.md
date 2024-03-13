---
title: FRHAPI_PortalUseRulesets Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A collection of Portal Use Rulesets. A ruleset determine how item can be used across portals.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1a1f7145c8d4fd517a4ee77a4f6df60133)|Custom data associated with the resource.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1a567286e3bdcf1a54045c854c8b05f441)|true if CustomData_Optional has been set to a value|
|TMap< FString, [FRHAPI_PortalUseRuleset](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset) >|[Rulesets_Optional](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1a234f43d1c6098ae830db577a35eb4305)||
|bool|[Rulesets_IsSet](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1af1dfbf7c2f5dfaaa75cc60303089785d)|true if Rulesets_Optional has been set to a value|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|[CacheInfo_Optional](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1a33b35b8dba94fb6b57b83917906066df)||
|bool|[CacheInfo_IsSet](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1abaf07d962636ced608504fcfb23756a6)|true if CacheInfo_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1a695b192c9e757ace95094478453521bf)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1a3667c055e85c1a5d6f8c1727637b1cc3)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1aa6e772a5cd14c4f8144a1793bba20d5b)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1aa4c8f77c3bb4a60b17a8c353565cb1f5)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1a13def29ddd8de70967e97c70074c3eca)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1a9b69f2a4f2687773a3a523b6f6cc22a5)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1a761bc36a7c3e9e3ba3fff16c5ac34eb6)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1a95fda6a2a69041ccae346c5f99bd4289)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1a13b3364e6bee794a25cae58e32eca868)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1a48e27d8873e90bb257420464683d27fb)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
|TMap< FString, [FRHAPI_PortalUseRuleset](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset) > &|[GetRulesets](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1ac9bc329a3a69f5bfd5425b54b91899ca)()|Gets the value of Rulesets_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_PortalUseRuleset](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset) > &|[GetRulesets](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1a47474570c3918ff316b5b8f890b30176)()|Gets the value of Rulesets_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_PortalUseRuleset](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset) > &|[GetRulesets](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1a8415e287988645e5847d5a5cd3b9c4f5)(const TMap< FString, [FRHAPI_PortalUseRuleset](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset) > & DefaultValue)|Gets the value of Rulesets_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetRulesets](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1a19c40690d85d986411762a4a08e2cd31)(TMap< FString, [FRHAPI_PortalUseRuleset](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset) > & OutValue)|Fills OutValue with the value of Rulesets_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, [FRHAPI_PortalUseRuleset](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset) > *|[GetRulesetsOrNull](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1ac6bdbdd4de02f2d5b2dc07946e6aaef4)()|Returns a pointer to Rulesets_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, [FRHAPI_PortalUseRuleset](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset) > *|[GetRulesetsOrNull](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1a5c64ced57ad9253ae395e75c5827cfb9)()|Returns a pointer to Rulesets_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetRulesets](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1a6d637f7ee048c4d4057d36851b26c115)(TMap< FString, [FRHAPI_PortalUseRuleset](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset) > NewValue)|Sets the value of Rulesets_Optional and also sets Rulesets_IsSet to true.|
|void|[ClearRulesets](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1aa7fb8c2fbed5cf635f1214ade993d281)()|Clears the value of Rulesets_Optional and sets Rulesets_IsSet to false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1a3d8649e4c211a2964ffd5c0874cef9b0)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1a6aa8af7beb2ac3692df3fbfdf4bead95)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1aa7354d6b4e5155281590fa2d412d7317)(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)|Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCacheInfo](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1a37406949f54de39e17ad24fa14c1405d)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)|Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1aabf44657d601219b6d75187b737cd0d6)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1a4c9c254d38b3969abe02a1196a880610)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCacheInfo](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1a166dfd8b16aa62dc183614759f2bf0e6)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)|Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.|
|void|[ClearCacheInfo](/unreal-plugins/all/structfrhapi__portaluserulesets/#structFRHAPI__PortalUseRulesets_1ad3d47a08a4ef6b99d014dae32e2158a0)()|Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.|
## Public Attributes



### `CustomData_Optional` <a id="structFRHAPI__PortalUseRulesets_1a1f7145c8d4fd517a4ee77a4f6df60133"></a>

`TMap<FString, FString> FRHAPI_PortalUseRulesets::CustomData_Optional`

Custom data associated with the resource.




### `CustomData_IsSet` <a id="structFRHAPI__PortalUseRulesets_1a567286e3bdcf1a54045c854c8b05f441"></a>

`bool FRHAPI_PortalUseRulesets::CustomData_IsSet`

true if CustomData_Optional has been set to a value




### `Rulesets_Optional` <a id="structFRHAPI__PortalUseRulesets_1a234f43d1c6098ae830db577a35eb4305"></a>

`TMap<FString, FRHAPI_PortalUseRuleset> FRHAPI_PortalUseRulesets::Rulesets_Optional`






### `Rulesets_IsSet` <a id="structFRHAPI__PortalUseRulesets_1af1dfbf7c2f5dfaaa75cc60303089785d"></a>

`bool FRHAPI_PortalUseRulesets::Rulesets_IsSet`

true if Rulesets_Optional has been set to a value




### `CacheInfo_Optional` <a id="structFRHAPI__PortalUseRulesets_1a33b35b8dba94fb6b57b83917906066df"></a>

`FRHAPI_CacheInfo FRHAPI_PortalUseRulesets::CacheInfo_Optional`






### `CacheInfo_IsSet` <a id="structFRHAPI__PortalUseRulesets_1abaf07d962636ced608504fcfb23756a6"></a>

`bool FRHAPI_PortalUseRulesets::CacheInfo_IsSet`

true if CacheInfo_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PortalUseRulesets_1a695b192c9e757ace95094478453521bf"></a>

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



### `WriteJson` <a id="structFRHAPI__PortalUseRulesets_1a3667c055e85c1a5d6f8c1727637b1cc3"></a>

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



### `GetCustomData` <a id="structFRHAPI__PortalUseRulesets_1aa6e772a5cd14c4f8144a1793bba20d5b"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__PortalUseRulesets_1aa4c8f77c3bb4a60b17a8c353565cb1f5"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__PortalUseRulesets_1a13def29ddd8de70967e97c70074c3eca"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__PortalUseRulesets_1a9b69f2a4f2687773a3a523b6f6cc22a5"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__PortalUseRulesets_1a761bc36a7c3e9e3ba3fff16c5ac34eb6"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__PortalUseRulesets_1a95fda6a2a69041ccae346c5f99bd4289"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__PortalUseRulesets_1a13b3364e6bee794a25cae58e32eca868"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__PortalUseRulesets_1a48e27d8873e90bb257420464683d27fb"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.




### `GetRulesets` <a id="structFRHAPI__PortalUseRulesets_1ac9bc329a3a69f5bfd5425b54b91899ca"></a>

TMap< FString, [FRHAPI_PortalUseRuleset](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset) > & GetRulesets()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Rulesets_Optional, regardless of it having been set.




### `GetRulesets` <a id="structFRHAPI__PortalUseRulesets_1a47474570c3918ff316b5b8f890b30176"></a>

const TMap< FString, [FRHAPI_PortalUseRuleset](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset) > & GetRulesets()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Rulesets_Optional, regardless of it having been set.




### `GetRulesets` <a id="structFRHAPI__PortalUseRulesets_1a8415e287988645e5847d5a5cd3b9c4f5"></a>

const TMap< FString, [FRHAPI_PortalUseRuleset](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset) > & GetRulesets(const TMap< FString, [FRHAPI_PortalUseRuleset](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, [FRHAPI_PortalUseRuleset](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset) > &|DefaultValue|

#### Description

Gets the value of Rulesets_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetRulesets` <a id="structFRHAPI__PortalUseRulesets_1a19c40690d85d986411762a4a08e2cd31"></a>

bool GetRulesets(TMap< FString, [FRHAPI_PortalUseRuleset](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_PortalUseRuleset](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset) > &|OutValue|

#### Description

Fills OutValue with the value of Rulesets_Optional and returns true if it has been set, otherwise returns false.




### `GetRulesetsOrNull` <a id="structFRHAPI__PortalUseRulesets_1ac6bdbdd4de02f2d5b2dc07946e6aaef4"></a>

TMap< FString, [FRHAPI_PortalUseRuleset](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset) > * GetRulesetsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Rulesets_Optional, if it has been set, otherwise returns nullptr.




### `GetRulesetsOrNull` <a id="structFRHAPI__PortalUseRulesets_1a5c64ced57ad9253ae395e75c5827cfb9"></a>

const TMap< FString, [FRHAPI_PortalUseRuleset](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset) > * GetRulesetsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Rulesets_Optional, if it has been set, otherwise returns nullptr.




### `SetRulesets` <a id="structFRHAPI__PortalUseRulesets_1a6d637f7ee048c4d4057d36851b26c115"></a>

void SetRulesets(TMap< FString, [FRHAPI_PortalUseRuleset](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_PortalUseRuleset](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset) >|NewValue|

#### Description

Sets the value of Rulesets_Optional and also sets Rulesets_IsSet to true.




### `ClearRulesets` <a id="structFRHAPI__PortalUseRulesets_1aa7fb8c2fbed5cf635f1214ade993d281"></a>

void ClearRulesets()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Rulesets_Optional and sets Rulesets_IsSet to false.




### `GetCacheInfo` <a id="structFRHAPI__PortalUseRulesets_1a3d8649e4c211a2964ffd5c0874cef9b0"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__PortalUseRulesets_1a6aa8af7beb2ac3692df3fbfdf4bead95"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__PortalUseRulesets_1aa7354d6b4e5155281590fa2d412d7317"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|DefaultValue|

#### Description

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCacheInfo` <a id="structFRHAPI__PortalUseRulesets_1a37406949f54de39e17ad24fa14c1405d"></a>

bool GetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|OutValue|

#### Description

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.




### `GetCacheInfoOrNull` <a id="structFRHAPI__PortalUseRulesets_1aabf44657d601219b6d75187b737cd0d6"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `GetCacheInfoOrNull` <a id="structFRHAPI__PortalUseRulesets_1a4c9c254d38b3969abe02a1196a880610"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `SetCacheInfo` <a id="structFRHAPI__PortalUseRulesets_1a166dfd8b16aa62dc183614759f2bf0e6"></a>

void SetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|NewValue|

#### Description

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.




### `ClearCacheInfo` <a id="structFRHAPI__PortalUseRulesets_1ad3d47a08a4ef6b99d014dae32e2158a0"></a>

void ClearCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.





