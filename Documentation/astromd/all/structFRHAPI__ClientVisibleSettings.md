---
title: FRHAPI_ClientVisibleSettings Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[SelfPingIntervalSeconds_Optional](/unreal-plugins/all/structfrhapi__clientvisiblesettings/#structFRHAPI__ClientVisibleSettings_1a828c993abb6fdc42104faec4caf421e2)|How frequently the client should tell this service that it's online.|
|bool|[SelfPingIntervalSeconds_IsSet](/unreal-plugins/all/structfrhapi__clientvisiblesettings/#structFRHAPI__ClientVisibleSettings_1ace70bf6d96d174b2e1586ff94716cbe4)|true if SelfPingIntervalSeconds_Optional has been set to a value|
|int32|[LastSeenAgeConsideredOfflineSeconds_Optional](/unreal-plugins/all/structfrhapi__clientvisiblesettings/#structFRHAPI__ClientVisibleSettings_1a90a6939a980c3a1bbb3f77d767a5b302)|If a client hasn't said that it's online within this time period, it will be treated as offline when others query its presence.|
|bool|[LastSeenAgeConsideredOfflineSeconds_IsSet](/unreal-plugins/all/structfrhapi__clientvisiblesettings/#structFRHAPI__ClientVisibleSettings_1ad45b6ad6b30c9df78d8d035a20c26816)|true if LastSeenAgeConsideredOfflineSeconds_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__clientvisiblesettings/#structFRHAPI__ClientVisibleSettings_1a50c34473a7fe5397c71cad85b094ec0c)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__clientvisiblesettings/#structFRHAPI__ClientVisibleSettings_1a6e7126af763a4114ab210a87680345f1)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|int32 &|[GetSelfPingIntervalSeconds](/unreal-plugins/all/structfrhapi__clientvisiblesettings/#structFRHAPI__ClientVisibleSettings_1a367b02ea4c55c72b344c147f925d4469)()|Gets the value of SelfPingIntervalSeconds_Optional, regardless of it having been set.|
|const int32 &|[GetSelfPingIntervalSeconds](/unreal-plugins/all/structfrhapi__clientvisiblesettings/#structFRHAPI__ClientVisibleSettings_1ac6553749a0cb092f7c2c2ea00940345f)()|Gets the value of SelfPingIntervalSeconds_Optional, regardless of it having been set.|
|const int32 &|[GetSelfPingIntervalSeconds](/unreal-plugins/all/structfrhapi__clientvisiblesettings/#structFRHAPI__ClientVisibleSettings_1a6bfb606cc8b9b1fbb47bda64432fcc68)(const int32 & DefaultValue)|Gets the value of SelfPingIntervalSeconds_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetSelfPingIntervalSeconds](/unreal-plugins/all/structfrhapi__clientvisiblesettings/#structFRHAPI__ClientVisibleSettings_1a7d37f13d0e6f3b4c649fd3ccb39f4218)(int32 & OutValue)|Fills OutValue with the value of SelfPingIntervalSeconds_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetSelfPingIntervalSecondsOrNull](/unreal-plugins/all/structfrhapi__clientvisiblesettings/#structFRHAPI__ClientVisibleSettings_1a34678a73c4d9347369a1f20cc260bb9b)()|Returns a pointer to SelfPingIntervalSeconds_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetSelfPingIntervalSecondsOrNull](/unreal-plugins/all/structfrhapi__clientvisiblesettings/#structFRHAPI__ClientVisibleSettings_1afcfdcd7dc359cb1a1ebbb6ce509a483e)()|Returns a pointer to SelfPingIntervalSeconds_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetSelfPingIntervalSeconds](/unreal-plugins/all/structfrhapi__clientvisiblesettings/#structFRHAPI__ClientVisibleSettings_1a050457006baf4958a6cec5137b045bb5)(int32 NewValue)|Sets the value of SelfPingIntervalSeconds_Optional and also sets SelfPingIntervalSeconds_IsSet to true.|
|void|[ClearSelfPingIntervalSeconds](/unreal-plugins/all/structfrhapi__clientvisiblesettings/#structFRHAPI__ClientVisibleSettings_1adafb2332f88d81839bf4bf0900a5de60)()|Clears the value of SelfPingIntervalSeconds_Optional and sets SelfPingIntervalSeconds_IsSet to false.|
|bool|[IsSelfPingIntervalSecondsDefaultValue](/unreal-plugins/all/structfrhapi__clientvisiblesettings/#structFRHAPI__ClientVisibleSettings_1a033a38b4df1faee9ca6d2696fead88d7)()|Returns true if SelfPingIntervalSeconds_Optional is set and matches the default value.|
|void|[SetSelfPingIntervalSecondsToDefault](/unreal-plugins/all/structfrhapi__clientvisiblesettings/#structFRHAPI__ClientVisibleSettings_1ad3c526b51d28291c49c00d222e8d1049)()|Sets the value of SelfPingIntervalSeconds_Optional to its default and also sets SelfPingIntervalSeconds_IsSet to true.|
|int32 &|[GetLastSeenAgeConsideredOfflineSeconds](/unreal-plugins/all/structfrhapi__clientvisiblesettings/#structFRHAPI__ClientVisibleSettings_1a082111c6526b754fca40b60a1507af78)()|Gets the value of LastSeenAgeConsideredOfflineSeconds_Optional, regardless of it having been set.|
|const int32 &|[GetLastSeenAgeConsideredOfflineSeconds](/unreal-plugins/all/structfrhapi__clientvisiblesettings/#structFRHAPI__ClientVisibleSettings_1afa37dae5ec3ff70d8de79622b43abc61)()|Gets the value of LastSeenAgeConsideredOfflineSeconds_Optional, regardless of it having been set.|
|const int32 &|[GetLastSeenAgeConsideredOfflineSeconds](/unreal-plugins/all/structfrhapi__clientvisiblesettings/#structFRHAPI__ClientVisibleSettings_1a33640a9b88b094a093b4ff1ce0be2498)(const int32 & DefaultValue)|Gets the value of LastSeenAgeConsideredOfflineSeconds_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetLastSeenAgeConsideredOfflineSeconds](/unreal-plugins/all/structfrhapi__clientvisiblesettings/#structFRHAPI__ClientVisibleSettings_1a29bd6609cd9e8d706240941c142e3da7)(int32 & OutValue)|Fills OutValue with the value of LastSeenAgeConsideredOfflineSeconds_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetLastSeenAgeConsideredOfflineSecondsOrNull](/unreal-plugins/all/structfrhapi__clientvisiblesettings/#structFRHAPI__ClientVisibleSettings_1af01ca031f3dfcc31ebaf224639f9dcb1)()|Returns a pointer to LastSeenAgeConsideredOfflineSeconds_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetLastSeenAgeConsideredOfflineSecondsOrNull](/unreal-plugins/all/structfrhapi__clientvisiblesettings/#structFRHAPI__ClientVisibleSettings_1ac8ebdc79ad956d299d6294514e85eca2)()|Returns a pointer to LastSeenAgeConsideredOfflineSeconds_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetLastSeenAgeConsideredOfflineSeconds](/unreal-plugins/all/structfrhapi__clientvisiblesettings/#structFRHAPI__ClientVisibleSettings_1a0cafbeeddc645c594bdae30ddff26091)(int32 NewValue)|Sets the value of LastSeenAgeConsideredOfflineSeconds_Optional and also sets LastSeenAgeConsideredOfflineSeconds_IsSet to true.|
|void|[ClearLastSeenAgeConsideredOfflineSeconds](/unreal-plugins/all/structfrhapi__clientvisiblesettings/#structFRHAPI__ClientVisibleSettings_1a6c06cf26f430201a9cca63f91203f0e2)()|Clears the value of LastSeenAgeConsideredOfflineSeconds_Optional and sets LastSeenAgeConsideredOfflineSeconds_IsSet to false.|
|bool|[IsLastSeenAgeConsideredOfflineSecondsDefaultValue](/unreal-plugins/all/structfrhapi__clientvisiblesettings/#structFRHAPI__ClientVisibleSettings_1aa3e05d3f534bb08e0d5179551dc8766b)()|Returns true if LastSeenAgeConsideredOfflineSeconds_Optional is set and matches the default value.|
|void|[SetLastSeenAgeConsideredOfflineSecondsToDefault](/unreal-plugins/all/structfrhapi__clientvisiblesettings/#structFRHAPI__ClientVisibleSettings_1a34afe649f51b3772bd802d3e4982d686)()|Sets the value of LastSeenAgeConsideredOfflineSeconds_Optional to its default and also sets LastSeenAgeConsideredOfflineSeconds_IsSet to true.|
## Public Attributes



### `SelfPingIntervalSeconds_Optional` <a id="structFRHAPI__ClientVisibleSettings_1a828c993abb6fdc42104faec4caf421e2"></a>

`int32 FRHAPI_ClientVisibleSettings::SelfPingIntervalSeconds_Optional`

How frequently the client should tell this service that it's online.




### `SelfPingIntervalSeconds_IsSet` <a id="structFRHAPI__ClientVisibleSettings_1ace70bf6d96d174b2e1586ff94716cbe4"></a>

`bool FRHAPI_ClientVisibleSettings::SelfPingIntervalSeconds_IsSet`

true if SelfPingIntervalSeconds_Optional has been set to a value




### `LastSeenAgeConsideredOfflineSeconds_Optional` <a id="structFRHAPI__ClientVisibleSettings_1a90a6939a980c3a1bbb3f77d767a5b302"></a>

`int32 FRHAPI_ClientVisibleSettings::LastSeenAgeConsideredOfflineSeconds_Optional`

If a client hasn't said that it's online within this time period, it will be treated as offline when others query its presence.




### `LastSeenAgeConsideredOfflineSeconds_IsSet` <a id="structFRHAPI__ClientVisibleSettings_1ad45b6ad6b30c9df78d8d035a20c26816"></a>

`bool FRHAPI_ClientVisibleSettings::LastSeenAgeConsideredOfflineSeconds_IsSet`

true if LastSeenAgeConsideredOfflineSeconds_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__ClientVisibleSettings_1a50c34473a7fe5397c71cad85b094ec0c"></a>

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



### `WriteJson` <a id="structFRHAPI__ClientVisibleSettings_1a6e7126af763a4114ab210a87680345f1"></a>

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



### `GetSelfPingIntervalSeconds` <a id="structFRHAPI__ClientVisibleSettings_1a367b02ea4c55c72b344c147f925d4469"></a>

int32 & GetSelfPingIntervalSeconds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SelfPingIntervalSeconds_Optional, regardless of it having been set.




### `GetSelfPingIntervalSeconds` <a id="structFRHAPI__ClientVisibleSettings_1ac6553749a0cb092f7c2c2ea00940345f"></a>

const int32 & GetSelfPingIntervalSeconds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SelfPingIntervalSeconds_Optional, regardless of it having been set.




### `GetSelfPingIntervalSeconds` <a id="structFRHAPI__ClientVisibleSettings_1a6bfb606cc8b9b1fbb47bda64432fcc68"></a>

const int32 & GetSelfPingIntervalSeconds(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of SelfPingIntervalSeconds_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetSelfPingIntervalSeconds` <a id="structFRHAPI__ClientVisibleSettings_1a7d37f13d0e6f3b4c649fd3ccb39f4218"></a>

bool GetSelfPingIntervalSeconds(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of SelfPingIntervalSeconds_Optional and returns true if it has been set, otherwise returns false.




### `GetSelfPingIntervalSecondsOrNull` <a id="structFRHAPI__ClientVisibleSettings_1a34678a73c4d9347369a1f20cc260bb9b"></a>

int32 * GetSelfPingIntervalSecondsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SelfPingIntervalSeconds_Optional, if it has been set, otherwise returns nullptr.




### `GetSelfPingIntervalSecondsOrNull` <a id="structFRHAPI__ClientVisibleSettings_1afcfdcd7dc359cb1a1ebbb6ce509a483e"></a>

const int32 * GetSelfPingIntervalSecondsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SelfPingIntervalSeconds_Optional, if it has been set, otherwise returns nullptr.




### `SetSelfPingIntervalSeconds` <a id="structFRHAPI__ClientVisibleSettings_1a050457006baf4958a6cec5137b045bb5"></a>

void SetSelfPingIntervalSeconds(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of SelfPingIntervalSeconds_Optional and also sets SelfPingIntervalSeconds_IsSet to true.




### `ClearSelfPingIntervalSeconds` <a id="structFRHAPI__ClientVisibleSettings_1adafb2332f88d81839bf4bf0900a5de60"></a>

void ClearSelfPingIntervalSeconds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of SelfPingIntervalSeconds_Optional and sets SelfPingIntervalSeconds_IsSet to false.




### `IsSelfPingIntervalSecondsDefaultValue` <a id="structFRHAPI__ClientVisibleSettings_1a033a38b4df1faee9ca6d2696fead88d7"></a>

bool IsSelfPingIntervalSecondsDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if SelfPingIntervalSeconds_Optional is set and matches the default value.




### `SetSelfPingIntervalSecondsToDefault` <a id="structFRHAPI__ClientVisibleSettings_1ad3c526b51d28291c49c00d222e8d1049"></a>

void SetSelfPingIntervalSecondsToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of SelfPingIntervalSeconds_Optional to its default and also sets SelfPingIntervalSeconds_IsSet to true.




### `GetLastSeenAgeConsideredOfflineSeconds` <a id="structFRHAPI__ClientVisibleSettings_1a082111c6526b754fca40b60a1507af78"></a>

int32 & GetLastSeenAgeConsideredOfflineSeconds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LastSeenAgeConsideredOfflineSeconds_Optional, regardless of it having been set.




### `GetLastSeenAgeConsideredOfflineSeconds` <a id="structFRHAPI__ClientVisibleSettings_1afa37dae5ec3ff70d8de79622b43abc61"></a>

const int32 & GetLastSeenAgeConsideredOfflineSeconds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LastSeenAgeConsideredOfflineSeconds_Optional, regardless of it having been set.




### `GetLastSeenAgeConsideredOfflineSeconds` <a id="structFRHAPI__ClientVisibleSettings_1a33640a9b88b094a093b4ff1ce0be2498"></a>

const int32 & GetLastSeenAgeConsideredOfflineSeconds(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of LastSeenAgeConsideredOfflineSeconds_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetLastSeenAgeConsideredOfflineSeconds` <a id="structFRHAPI__ClientVisibleSettings_1a29bd6609cd9e8d706240941c142e3da7"></a>

bool GetLastSeenAgeConsideredOfflineSeconds(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of LastSeenAgeConsideredOfflineSeconds_Optional and returns true if it has been set, otherwise returns false.




### `GetLastSeenAgeConsideredOfflineSecondsOrNull` <a id="structFRHAPI__ClientVisibleSettings_1af01ca031f3dfcc31ebaf224639f9dcb1"></a>

int32 * GetLastSeenAgeConsideredOfflineSecondsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LastSeenAgeConsideredOfflineSeconds_Optional, if it has been set, otherwise returns nullptr.




### `GetLastSeenAgeConsideredOfflineSecondsOrNull` <a id="structFRHAPI__ClientVisibleSettings_1ac8ebdc79ad956d299d6294514e85eca2"></a>

const int32 * GetLastSeenAgeConsideredOfflineSecondsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LastSeenAgeConsideredOfflineSeconds_Optional, if it has been set, otherwise returns nullptr.




### `SetLastSeenAgeConsideredOfflineSeconds` <a id="structFRHAPI__ClientVisibleSettings_1a0cafbeeddc645c594bdae30ddff26091"></a>

void SetLastSeenAgeConsideredOfflineSeconds(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of LastSeenAgeConsideredOfflineSeconds_Optional and also sets LastSeenAgeConsideredOfflineSeconds_IsSet to true.




### `ClearLastSeenAgeConsideredOfflineSeconds` <a id="structFRHAPI__ClientVisibleSettings_1a6c06cf26f430201a9cca63f91203f0e2"></a>

void ClearLastSeenAgeConsideredOfflineSeconds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of LastSeenAgeConsideredOfflineSeconds_Optional and sets LastSeenAgeConsideredOfflineSeconds_IsSet to false.




### `IsLastSeenAgeConsideredOfflineSecondsDefaultValue` <a id="structFRHAPI__ClientVisibleSettings_1aa3e05d3f534bb08e0d5179551dc8766b"></a>

bool IsLastSeenAgeConsideredOfflineSecondsDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if LastSeenAgeConsideredOfflineSeconds_Optional is set and matches the default value.




### `SetLastSeenAgeConsideredOfflineSecondsToDefault` <a id="structFRHAPI__ClientVisibleSettings_1a34afe649f51b3772bd802d3e4982d686"></a>

void SetLastSeenAgeConsideredOfflineSecondsToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of LastSeenAgeConsideredOfflineSeconds_Optional to its default and also sets LastSeenAgeConsideredOfflineSeconds_IsSet to true.





