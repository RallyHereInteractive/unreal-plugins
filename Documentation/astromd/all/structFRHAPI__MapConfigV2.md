---
title: FRHAPI_MapConfigV2 Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Configuration about a specific map for an instance to load into.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[MapId](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1a5963a073f9b82dfcf58467aa017771d2)|ID to uniquely identify this map game.|
|FString|[Name](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1adfbd8f910405962d9b39d4c4217fa768)|Name of the map the instance should load into.|
|FString|[Mode_Optional](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1a36dd21033a37c427edc75373fee08257)|Game mode for the instance to spawn in.|
|bool|[Mode_IsSet](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1a098823546046b9001739b205592f4036)|true if Mode_Optional has been set to a value|
|float|[MapWeight](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1a0ffa276f20f6156cd2269302bf150719)|Chance that this map will get selected in a rotation list.|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1a511a71da7c4f1ed8b128d4e3719aedd3)|Custom data to pass through to the instance.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1a2fd0d6a9b5490204a0801d8064387dae)|true if CustomData_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1a949a198ddd86e878003045d5b425d322)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1ae53f488100b29693510a7b85914d07fd)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetMapId](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1aa60296fd483bfcaca29d9cf95445ada3)()|Gets the value of MapId.|
|const FString &|[GetMapId](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1a9ad900caf5482b0580fb1efafd693a3d)()|Gets the value of MapId.|
|void|[SetMapId](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1a8ea16d1956764643215324f48db75683)(FString NewValue)|Sets the value of MapId.|
|FString &|[GetName](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1a3f1f5be978ca95d415ad05c86d64ec9b)()|Gets the value of Name.|
|const FString &|[GetName](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1a411edd637c8a3428e426f1843061b69a)()|Gets the value of Name.|
|void|[SetName](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1abb1ce838f3f9b44f4e99fc91a23fef07)(FString NewValue)|Sets the value of Name.|
|FString &|[GetMode](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1ae67b15a2989c17859855ddaaae913b78)()|Gets the value of Mode_Optional, regardless of it having been set.|
|const FString &|[GetMode](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1af7e2f8eb21b1ce60ab151e31ade56176)()|Gets the value of Mode_Optional, regardless of it having been set.|
|const FString &|[GetMode](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1a3180fd0cc52d054f73a6947d7096105a)(const FString & DefaultValue)|Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetMode](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1afa12289e0ea8c931b0312b72abcc57ed)(FString & OutValue)|Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetModeOrNull](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1a919fd2fff0c80f6405d97edf7ec1999a)()|Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetModeOrNull](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1a239583013306e04586f2715c3be93460)()|Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetMode](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1ace9a7807872924f6bd37f6e054da476a)(FString NewValue)|Sets the value of Mode_Optional and also sets Mode_IsSet to true.|
|void|[ClearMode](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1aeb92e37deb493835c65790c73db3f7e5)()|Clears the value of Mode_Optional and sets Mode_IsSet to false.|
|float &|[GetMapWeight](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1a0a475e5f239a4a600c2025ca95c84e12)()|Gets the value of MapWeight.|
|const float &|[GetMapWeight](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1a5396c93ead6c4f31ee0728cacae5ceb6)()|Gets the value of MapWeight.|
|void|[SetMapWeight](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1a6712131c97a0bc9f796c43fdfbb205db)(float NewValue)|Sets the value of MapWeight.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1a6c9d43316b7a0f1ef15493f77eff4053)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1aa41a4671aa3b7d86b62bfcdf95d4fd05)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1a7b3ac5cf05cdb8f888cd878c1a5a7b26)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1a161de4441372eb4fe5def9e1f56e5296)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1a741d93c605861a958b2917d2ad488033)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1af0c21202867d759e89c1e45477305b55)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1af68358d7baec18850a42bfd0a5a163cb)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__mapconfigv2/#structFRHAPI__MapConfigV2_1a848cefff50f876bdb052efa81cb826e3)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
## Public Attributes



### `MapId` <a id="structFRHAPI__MapConfigV2_1a5963a073f9b82dfcf58467aa017771d2"></a>

`FString FRHAPI_MapConfigV2::MapId`

ID to uniquely identify this map game.




### `Name` <a id="structFRHAPI__MapConfigV2_1adfbd8f910405962d9b39d4c4217fa768"></a>

`FString FRHAPI_MapConfigV2::Name`

Name of the map the instance should load into.




### `Mode_Optional` <a id="structFRHAPI__MapConfigV2_1a36dd21033a37c427edc75373fee08257"></a>

`FString FRHAPI_MapConfigV2::Mode_Optional`

Game mode for the instance to spawn in.




### `Mode_IsSet` <a id="structFRHAPI__MapConfigV2_1a098823546046b9001739b205592f4036"></a>

`bool FRHAPI_MapConfigV2::Mode_IsSet`

true if Mode_Optional has been set to a value




### `MapWeight` <a id="structFRHAPI__MapConfigV2_1a0ffa276f20f6156cd2269302bf150719"></a>

`float FRHAPI_MapConfigV2::MapWeight`

Chance that this map will get selected in a rotation list.




### `CustomData_Optional` <a id="structFRHAPI__MapConfigV2_1a511a71da7c4f1ed8b128d4e3719aedd3"></a>

`TMap<FString, FString> FRHAPI_MapConfigV2::CustomData_Optional`

Custom data to pass through to the instance.




### `CustomData_IsSet` <a id="structFRHAPI__MapConfigV2_1a2fd0d6a9b5490204a0801d8064387dae"></a>

`bool FRHAPI_MapConfigV2::CustomData_IsSet`

true if CustomData_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__MapConfigV2_1a949a198ddd86e878003045d5b425d322"></a>

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



### `WriteJson` <a id="structFRHAPI__MapConfigV2_1ae53f488100b29693510a7b85914d07fd"></a>

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



### `GetMapId` <a id="structFRHAPI__MapConfigV2_1aa60296fd483bfcaca29d9cf95445ada3"></a>

FString & GetMapId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MapId.




### `GetMapId` <a id="structFRHAPI__MapConfigV2_1a9ad900caf5482b0580fb1efafd693a3d"></a>

const FString & GetMapId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MapId.




### `SetMapId` <a id="structFRHAPI__MapConfigV2_1a8ea16d1956764643215324f48db75683"></a>

void SetMapId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of MapId.




### `GetName` <a id="structFRHAPI__MapConfigV2_1a3f1f5be978ca95d415ad05c86d64ec9b"></a>

FString & GetName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Name.




### `GetName` <a id="structFRHAPI__MapConfigV2_1a411edd637c8a3428e426f1843061b69a"></a>

const FString & GetName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Name.




### `SetName` <a id="structFRHAPI__MapConfigV2_1abb1ce838f3f9b44f4e99fc91a23fef07"></a>

void SetName(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Name.




### `GetMode` <a id="structFRHAPI__MapConfigV2_1ae67b15a2989c17859855ddaaae913b78"></a>

FString & GetMode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Mode_Optional, regardless of it having been set.




### `GetMode` <a id="structFRHAPI__MapConfigV2_1af7e2f8eb21b1ce60ab151e31ade56176"></a>

const FString & GetMode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Mode_Optional, regardless of it having been set.




### `GetMode` <a id="structFRHAPI__MapConfigV2_1a3180fd0cc52d054f73a6947d7096105a"></a>

const FString & GetMode(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetMode` <a id="structFRHAPI__MapConfigV2_1afa12289e0ea8c931b0312b72abcc57ed"></a>

bool GetMode(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.




### `GetModeOrNull` <a id="structFRHAPI__MapConfigV2_1a919fd2fff0c80f6405d97edf7ec1999a"></a>

FString * GetModeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.




### `GetModeOrNull` <a id="structFRHAPI__MapConfigV2_1a239583013306e04586f2715c3be93460"></a>

const FString * GetModeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.




### `SetMode` <a id="structFRHAPI__MapConfigV2_1ace9a7807872924f6bd37f6e054da476a"></a>

void SetMode(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Mode_Optional and also sets Mode_IsSet to true.




### `ClearMode` <a id="structFRHAPI__MapConfigV2_1aeb92e37deb493835c65790c73db3f7e5"></a>

void ClearMode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Mode_Optional and sets Mode_IsSet to false.




### `GetMapWeight` <a id="structFRHAPI__MapConfigV2_1a0a475e5f239a4a600c2025ca95c84e12"></a>

float & GetMapWeight()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MapWeight.




### `GetMapWeight` <a id="structFRHAPI__MapConfigV2_1a5396c93ead6c4f31ee0728cacae5ceb6"></a>

const float & GetMapWeight()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MapWeight.




### `SetMapWeight` <a id="structFRHAPI__MapConfigV2_1a6712131c97a0bc9f796c43fdfbb205db"></a>

void SetMapWeight(float NewValue)

#### Parameters

| Type | Name |
|------|------|
|float|NewValue|

#### Description

Sets the value of MapWeight.




### `GetCustomData` <a id="structFRHAPI__MapConfigV2_1a6c9d43316b7a0f1ef15493f77eff4053"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__MapConfigV2_1aa41a4671aa3b7d86b62bfcdf95d4fd05"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__MapConfigV2_1a7b3ac5cf05cdb8f888cd878c1a5a7b26"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__MapConfigV2_1a161de4441372eb4fe5def9e1f56e5296"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__MapConfigV2_1a741d93c605861a958b2917d2ad488033"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__MapConfigV2_1af0c21202867d759e89c1e45477305b55"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__MapConfigV2_1af68358d7baec18850a42bfd0a5a163cb"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__MapConfigV2_1a848cefff50f876bdb052efa81cb826e3"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.





