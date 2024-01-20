---
title: FRHAPI_PortalUseRuleset Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A collection of Portal Use Rules.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1a6adcf1faeab36224d7427c77ee7fb53b)|Custom data associated with the resource.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1a9e434691c833dbf6415957cb7dc083a2)|true if CustomData_Optional has been set to a value|
|TMap< FString, TArray< ERHAPI_InventoryPortal > >|[Rules_Optional](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1a0839868d3a302e421c134111d6a23239)||
|bool|[Rules_IsSet](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1a4b92c8c7449f8bf0d67daad6a98b75bf)|true if Rules_Optional has been set to a value|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|[CacheInfo_Optional](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1ab7077b18224b06098343e0764e593b91)||
|bool|[CacheInfo_IsSet](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1ab75284e0d03bb879671ab86cfc3c39c6)|true if CacheInfo_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1a65364871150a621def88d653d1fbe84f)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1a3f150d25c90a137c73a99bcb87d824b8)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1a01a9fcf5353c6eef969894dd35f9c254)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1a40009a1a966a268ad234894f655668e2)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1a315ccfdf0a394c8af1c33484efe7a69e)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1ae02e9b64b7890d604ab536729fa8de43)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1a1eaacc7180f1b8c2e0783e4498ee1bb3)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1a6916d73cee5a641a1e30b2b0543dcf59)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1af1ba3ac076609280a06bf2eea6db94e6)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1a0e624bd83b3ca823a2ba9f7f570e0ccc)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
|TMap< FString, TArray< ERHAPI_InventoryPortal > > &|[GetRules](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1a8c522e8de05ec2ab20cc171123d63278)()|Gets the value of Rules_Optional, regardless of it having been set.|
|const TMap< FString, TArray< ERHAPI_InventoryPortal > > &|[GetRules](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1a964d5e4e1b86f59cece224cd0302168d)()|Gets the value of Rules_Optional, regardless of it having been set.|
|const TMap< FString, TArray< ERHAPI_InventoryPortal > > &|[GetRules](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1a25360c135dd33a58c46b66899ba335fa)(const TMap< FString, TArray< ERHAPI_InventoryPortal >> & DefaultValue)|Gets the value of Rules_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetRules](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1ac21c132d9f9df3686b75923d290e6185)(TMap< FString, TArray< ERHAPI_InventoryPortal >> & OutValue)|Fills OutValue with the value of Rules_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, TArray< ERHAPI_InventoryPortal > > *|[GetRulesOrNull](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1a63f615cdadc4765c87370e379b6dbfcc)()|Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, TArray< ERHAPI_InventoryPortal > > *|[GetRulesOrNull](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1acd7bb3c54cc0390aab6c2ee906cd7c61)()|Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetRules](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1a0b547f18b0e4d7ad8f9d1fb183ca6b24)(TMap< FString, TArray< ERHAPI_InventoryPortal >> NewValue)|Sets the value of Rules_Optional and also sets Rules_IsSet to true.|
|void|[ClearRules](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1a38ee7a5b93aff6ea5030f958048f659a)()|Clears the value of Rules_Optional and sets Rules_IsSet to false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1aac077b206dbaae186847763a14aeacca)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1aee6cbc1d50ef03d3b634e722e4197f50)()|Gets the value of CacheInfo_Optional, regardless of it having been set.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|[GetCacheInfo](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1ac9f2c10a981c13ac21cc340a56851c75)(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)|Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCacheInfo](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1a95234561f173380061e5cd93b291cdc0)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)|Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1ac427dedc5c87e6863d3c623d660c497b)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) *|[GetCacheInfoOrNull](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1a196c5c6b2b0c78c7b37aa95ff4eb6fbf)()|Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCacheInfo](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1a54d60f54ae600b984fbd0e637c89cfd4)([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)|Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.|
|void|[ClearCacheInfo](/unreal-plugins/all/structfrhapi__portaluseruleset/#structFRHAPI__PortalUseRuleset_1a5ae2c6f9376d8697d0b23b3b029666e3)()|Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.|
## Public Attributes



### `CustomData_Optional` <a id="structFRHAPI__PortalUseRuleset_1a6adcf1faeab36224d7427c77ee7fb53b"></a>

`TMap<FString, FString> FRHAPI_PortalUseRuleset::CustomData_Optional`

Custom data associated with the resource.




### `CustomData_IsSet` <a id="structFRHAPI__PortalUseRuleset_1a9e434691c833dbf6415957cb7dc083a2"></a>

`bool FRHAPI_PortalUseRuleset::CustomData_IsSet`

true if CustomData_Optional has been set to a value




### `Rules_Optional` <a id="structFRHAPI__PortalUseRuleset_1a0839868d3a302e421c134111d6a23239"></a>

`TMap<FString, TArray<ERHAPI_InventoryPortal> > FRHAPI_PortalUseRuleset::Rules_Optional`






### `Rules_IsSet` <a id="structFRHAPI__PortalUseRuleset_1a4b92c8c7449f8bf0d67daad6a98b75bf"></a>

`bool FRHAPI_PortalUseRuleset::Rules_IsSet`

true if Rules_Optional has been set to a value




### `CacheInfo_Optional` <a id="structFRHAPI__PortalUseRuleset_1ab7077b18224b06098343e0764e593b91"></a>

`FRHAPI_CacheInfo FRHAPI_PortalUseRuleset::CacheInfo_Optional`






### `CacheInfo_IsSet` <a id="structFRHAPI__PortalUseRuleset_1ab75284e0d03bb879671ab86cfc3c39c6"></a>

`bool FRHAPI_PortalUseRuleset::CacheInfo_IsSet`

true if CacheInfo_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PortalUseRuleset_1a65364871150a621def88d653d1fbe84f"></a>

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



### `WriteJson` <a id="structFRHAPI__PortalUseRuleset_1a3f150d25c90a137c73a99bcb87d824b8"></a>

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



### `GetCustomData` <a id="structFRHAPI__PortalUseRuleset_1a01a9fcf5353c6eef969894dd35f9c254"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__PortalUseRuleset_1a40009a1a966a268ad234894f655668e2"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__PortalUseRuleset_1a315ccfdf0a394c8af1c33484efe7a69e"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__PortalUseRuleset_1ae02e9b64b7890d604ab536729fa8de43"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__PortalUseRuleset_1a1eaacc7180f1b8c2e0783e4498ee1bb3"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__PortalUseRuleset_1a6916d73cee5a641a1e30b2b0543dcf59"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__PortalUseRuleset_1af1ba3ac076609280a06bf2eea6db94e6"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__PortalUseRuleset_1a0e624bd83b3ca823a2ba9f7f570e0ccc"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.




### `GetRules` <a id="structFRHAPI__PortalUseRuleset_1a8c522e8de05ec2ab20cc171123d63278"></a>

TMap< FString, TArray< ERHAPI_InventoryPortal > > & GetRules()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Rules_Optional, regardless of it having been set.




### `GetRules` <a id="structFRHAPI__PortalUseRuleset_1a964d5e4e1b86f59cece224cd0302168d"></a>

const TMap< FString, TArray< ERHAPI_InventoryPortal > > & GetRules()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Rules_Optional, regardless of it having been set.




### `GetRules` <a id="structFRHAPI__PortalUseRuleset_1a25360c135dd33a58c46b66899ba335fa"></a>

const TMap< FString, TArray< ERHAPI_InventoryPortal > > & GetRules(const TMap< FString, TArray< ERHAPI_InventoryPortal >> & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, TArray< ERHAPI_InventoryPortal >> &|DefaultValue|

#### Description

Gets the value of Rules_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetRules` <a id="structFRHAPI__PortalUseRuleset_1ac21c132d9f9df3686b75923d290e6185"></a>

bool GetRules(TMap< FString, TArray< ERHAPI_InventoryPortal >> & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, TArray< ERHAPI_InventoryPortal >> &|OutValue|

#### Description

Fills OutValue with the value of Rules_Optional and returns true if it has been set, otherwise returns false.




### `GetRulesOrNull` <a id="structFRHAPI__PortalUseRuleset_1a63f615cdadc4765c87370e379b6dbfcc"></a>

TMap< FString, TArray< ERHAPI_InventoryPortal > > * GetRulesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.




### `GetRulesOrNull` <a id="structFRHAPI__PortalUseRuleset_1acd7bb3c54cc0390aab6c2ee906cd7c61"></a>

const TMap< FString, TArray< ERHAPI_InventoryPortal > > * GetRulesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.




### `SetRules` <a id="structFRHAPI__PortalUseRuleset_1a0b547f18b0e4d7ad8f9d1fb183ca6b24"></a>

void SetRules(TMap< FString, TArray< ERHAPI_InventoryPortal >> NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, TArray< ERHAPI_InventoryPortal >>|NewValue|

#### Description

Sets the value of Rules_Optional and also sets Rules_IsSet to true.




### `ClearRules` <a id="structFRHAPI__PortalUseRuleset_1a38ee7a5b93aff6ea5030f958048f659a"></a>

void ClearRules()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Rules_Optional and sets Rules_IsSet to false.




### `GetCacheInfo` <a id="structFRHAPI__PortalUseRuleset_1aac077b206dbaae186847763a14aeacca"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__PortalUseRuleset_1aee6cbc1d50ef03d3b634e722e4197f50"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CacheInfo_Optional, regardless of it having been set.




### `GetCacheInfo` <a id="structFRHAPI__PortalUseRuleset_1ac9f2c10a981c13ac21cc340a56851c75"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & GetCacheInfo(const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|DefaultValue|

#### Description

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCacheInfo` <a id="structFRHAPI__PortalUseRuleset_1a95234561f173380061e5cd93b291cdc0"></a>

bool GetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) &|OutValue|

#### Description

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.




### `GetCacheInfoOrNull` <a id="structFRHAPI__PortalUseRuleset_1ac427dedc5c87e6863d3c623d660c497b"></a>

[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `GetCacheInfoOrNull` <a id="structFRHAPI__PortalUseRuleset_1a196c5c6b2b0c78c7b37aa95ff4eb6fbf"></a>

const [FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) * GetCacheInfoOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.




### `SetCacheInfo` <a id="structFRHAPI__PortalUseRuleset_1a54d60f54ae600b984fbd0e637c89cfd4"></a>

void SetCacheInfo([FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CacheInfo](/unreal-plugins/all/structfrhapi__cacheinfo/#structFRHAPI__CacheInfo)|NewValue|

#### Description

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.




### `ClearCacheInfo` <a id="structFRHAPI__PortalUseRuleset_1a5ae2c6f9376d8697d0b23b3b029666e3"></a>

void ClearCacheInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.





