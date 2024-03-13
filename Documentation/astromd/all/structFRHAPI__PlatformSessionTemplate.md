---
title: FRHAPI_PlatformSessionTemplate Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Template used to create new platform sessions for a specific type of platform. Configurable in the developer portal.

## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_PlatformID|[PlatformId](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1afe926a18175ccb2a9c1efa37abab36ac)|DEPRECATED. ID for the platform type for this template. Use 'platform' instead.|
|ERHAPI_Platform|[Platform](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1a234c5994651cf76b82cd5fc10d6789b1)|Platform.|
|FString|[PlatformSessionType](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1a467f663872de483c259ca4e0b398bbc0)|Platform-Specific Identifier for the Platform's template.|
|int32|[MaxPlayers_Optional](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1a19ca1aa4d6c345789146cbb82cc4b05a)|The maximum number of players that can be a part of this platform session.|
|bool|[MaxPlayers_IsSet](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1a820d7ec5127d55985fe8ec28a8507cf9)|true if MaxPlayers_Optional has been set to a value|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1a011145a99ccb57b768e35067cded1d1d)|Product-defined custom data.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1a466d856fb15205041dfe368181512ec7)|true if CustomData_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1a78cd0b4d539885405306af3001fda3f9)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1ae18e5802f726493cc53d3b6a941052f3)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_PlatformID &|[GetPlatformId](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1a1ba25b3925205ce1043ab6405149c654)()|Gets the value of PlatformId.|
|const ERHAPI_PlatformID &|[GetPlatformId](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1a29a74f1aec1b8bbb0da3b4dc7ff9cfe4)()|Gets the value of PlatformId.|
|void|[SetPlatformId](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1ab3bb4c8fa9d9689a2bff93f9a9806d4f)(ERHAPI_PlatformID NewValue)|Sets the value of PlatformId.|
|ERHAPI_Platform &|[GetPlatform](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1aaa03090feaa90bf86a69a3fb9358a8ad)()|Gets the value of Platform.|
|const ERHAPI_Platform &|[GetPlatform](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1a3730049b24ff914aa7edce798156269f)()|Gets the value of Platform.|
|void|[SetPlatform](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1a0b76e6498381802e9867a4c67b45be85)(ERHAPI_Platform NewValue)|Sets the value of Platform.|
|FString &|[GetPlatformSessionType](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1a4cbe1d9976dfbba75ebb02c8d71f12dd)()|Gets the value of PlatformSessionType.|
|const FString &|[GetPlatformSessionType](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1a24a0a7504fdacbe9a8696e65f4445e81)()|Gets the value of PlatformSessionType.|
|void|[SetPlatformSessionType](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1a98903f927c175ec2f8d650bb0c9924d5)(FString NewValue)|Sets the value of PlatformSessionType.|
|int32 &|[GetMaxPlayers](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1adac1a80b307d7cec56c1158adae10710)()|Gets the value of MaxPlayers_Optional, regardless of it having been set.|
|const int32 &|[GetMaxPlayers](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1a5e06d329050cf9909daecd0e392aa966)()|Gets the value of MaxPlayers_Optional, regardless of it having been set.|
|const int32 &|[GetMaxPlayers](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1a8225b01e34f6b240d5934f6eab337977)(const int32 & DefaultValue)|Gets the value of MaxPlayers_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetMaxPlayers](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1a16185aff7b18ea80da7ac53720287811)(int32 & OutValue)|Fills OutValue with the value of MaxPlayers_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetMaxPlayersOrNull](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1adb188930a6a2fd9801e5dec1e68b46b8)()|Returns a pointer to MaxPlayers_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetMaxPlayersOrNull](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1ab3ba73e245474b42f2146b1c3e7c1b7b)()|Returns a pointer to MaxPlayers_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetMaxPlayers](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1a87f775ac012c4e63d28bf89d2ff604c1)(int32 NewValue)|Sets the value of MaxPlayers_Optional and also sets MaxPlayers_IsSet to true.|
|void|[ClearMaxPlayers](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1af2d8b5f464542815bcbbcf41870d0acc)()|Clears the value of MaxPlayers_Optional and sets MaxPlayers_IsSet to false.|
|bool|[IsMaxPlayersDefaultValue](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1afcc99ba028d9ae88bd51bd821e79081e)()|Returns true if MaxPlayers_Optional is set and matches the default value.|
|void|[SetMaxPlayersToDefault](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1a906c779ed24a184bbf330d00f26a6f21)()|Sets the value of MaxPlayers_Optional to its default and also sets MaxPlayers_IsSet to true.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1a968db4e8e03ce9a1ded8a4e2b83fb437)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1afc4954c995a337129d7b92447ee347a7)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1a5ba8215a625f91e4d052242ad54e0d4b)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1a245b15b5a658c492364ea19ad5911b56)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1a695a2c70e2430ff72683f866fa0dd126)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1aa7c5172eaa282ce126e031459a60b1c0)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1a7bbcfbaaf9edbe5d6d9dc50669b33ff9)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate_1a1bab29f42e2c1c50068349c69c644583)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
## Public Attributes



### `PlatformId` <a id="structFRHAPI__PlatformSessionTemplate_1afe926a18175ccb2a9c1efa37abab36ac"></a>

`ERHAPI_PlatformID FRHAPI_PlatformSessionTemplate::PlatformId`

DEPRECATED. ID for the platform type for this template. Use 'platform' instead.




### `Platform` <a id="structFRHAPI__PlatformSessionTemplate_1a234c5994651cf76b82cd5fc10d6789b1"></a>

`ERHAPI_Platform FRHAPI_PlatformSessionTemplate::Platform`

Platform.




### `PlatformSessionType` <a id="structFRHAPI__PlatformSessionTemplate_1a467f663872de483c259ca4e0b398bbc0"></a>

`FString FRHAPI_PlatformSessionTemplate::PlatformSessionType`

Platform-Specific Identifier for the Platform's template.




### `MaxPlayers_Optional` <a id="structFRHAPI__PlatformSessionTemplate_1a19ca1aa4d6c345789146cbb82cc4b05a"></a>

`int32 FRHAPI_PlatformSessionTemplate::MaxPlayers_Optional`

The maximum number of players that can be a part of this platform session.




### `MaxPlayers_IsSet` <a id="structFRHAPI__PlatformSessionTemplate_1a820d7ec5127d55985fe8ec28a8507cf9"></a>

`bool FRHAPI_PlatformSessionTemplate::MaxPlayers_IsSet`

true if MaxPlayers_Optional has been set to a value




### `CustomData_Optional` <a id="structFRHAPI__PlatformSessionTemplate_1a011145a99ccb57b768e35067cded1d1d"></a>

`TMap<FString, FString> FRHAPI_PlatformSessionTemplate::CustomData_Optional`

Product-defined custom data.




### `CustomData_IsSet` <a id="structFRHAPI__PlatformSessionTemplate_1a466d856fb15205041dfe368181512ec7"></a>

`bool FRHAPI_PlatformSessionTemplate::CustomData_IsSet`

true if CustomData_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PlatformSessionTemplate_1a78cd0b4d539885405306af3001fda3f9"></a>

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



### `WriteJson` <a id="structFRHAPI__PlatformSessionTemplate_1ae18e5802f726493cc53d3b6a941052f3"></a>

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



### `GetPlatformId` <a id="structFRHAPI__PlatformSessionTemplate_1a1ba25b3925205ce1043ab6405149c654"></a>

ERHAPI_PlatformID & GetPlatformId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformId.




### `GetPlatformId` <a id="structFRHAPI__PlatformSessionTemplate_1a29a74f1aec1b8bbb0da3b4dc7ff9cfe4"></a>

const ERHAPI_PlatformID & GetPlatformId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformId.




### `SetPlatformId` <a id="structFRHAPI__PlatformSessionTemplate_1ab3bb4c8fa9d9689a2bff93f9a9806d4f"></a>

void SetPlatformId(ERHAPI_PlatformID NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_PlatformID|NewValue|

#### Description

Sets the value of PlatformId.




### `GetPlatform` <a id="structFRHAPI__PlatformSessionTemplate_1aaa03090feaa90bf86a69a3fb9358a8ad"></a>

ERHAPI_Platform & GetPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Platform.




### `GetPlatform` <a id="structFRHAPI__PlatformSessionTemplate_1a3730049b24ff914aa7edce798156269f"></a>

const ERHAPI_Platform & GetPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Platform.




### `SetPlatform` <a id="structFRHAPI__PlatformSessionTemplate_1a0b76e6498381802e9867a4c67b45be85"></a>

void SetPlatform(ERHAPI_Platform NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Platform|NewValue|

#### Description

Sets the value of Platform.




### `GetPlatformSessionType` <a id="structFRHAPI__PlatformSessionTemplate_1a4cbe1d9976dfbba75ebb02c8d71f12dd"></a>

FString & GetPlatformSessionType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformSessionType.




### `GetPlatformSessionType` <a id="structFRHAPI__PlatformSessionTemplate_1a24a0a7504fdacbe9a8696e65f4445e81"></a>

const FString & GetPlatformSessionType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformSessionType.




### `SetPlatformSessionType` <a id="structFRHAPI__PlatformSessionTemplate_1a98903f927c175ec2f8d650bb0c9924d5"></a>

void SetPlatformSessionType(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of PlatformSessionType.




### `GetMaxPlayers` <a id="structFRHAPI__PlatformSessionTemplate_1adac1a80b307d7cec56c1158adae10710"></a>

int32 & GetMaxPlayers()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MaxPlayers_Optional, regardless of it having been set.




### `GetMaxPlayers` <a id="structFRHAPI__PlatformSessionTemplate_1a5e06d329050cf9909daecd0e392aa966"></a>

const int32 & GetMaxPlayers()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MaxPlayers_Optional, regardless of it having been set.




### `GetMaxPlayers` <a id="structFRHAPI__PlatformSessionTemplate_1a8225b01e34f6b240d5934f6eab337977"></a>

const int32 & GetMaxPlayers(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of MaxPlayers_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetMaxPlayers` <a id="structFRHAPI__PlatformSessionTemplate_1a16185aff7b18ea80da7ac53720287811"></a>

bool GetMaxPlayers(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of MaxPlayers_Optional and returns true if it has been set, otherwise returns false.




### `GetMaxPlayersOrNull` <a id="structFRHAPI__PlatformSessionTemplate_1adb188930a6a2fd9801e5dec1e68b46b8"></a>

int32 * GetMaxPlayersOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MaxPlayers_Optional, if it has been set, otherwise returns nullptr.




### `GetMaxPlayersOrNull` <a id="structFRHAPI__PlatformSessionTemplate_1ab3ba73e245474b42f2146b1c3e7c1b7b"></a>

const int32 * GetMaxPlayersOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MaxPlayers_Optional, if it has been set, otherwise returns nullptr.




### `SetMaxPlayers` <a id="structFRHAPI__PlatformSessionTemplate_1a87f775ac012c4e63d28bf89d2ff604c1"></a>

void SetMaxPlayers(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of MaxPlayers_Optional and also sets MaxPlayers_IsSet to true.




### `ClearMaxPlayers` <a id="structFRHAPI__PlatformSessionTemplate_1af2d8b5f464542815bcbbcf41870d0acc"></a>

void ClearMaxPlayers()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of MaxPlayers_Optional and sets MaxPlayers_IsSet to false.




### `IsMaxPlayersDefaultValue` <a id="structFRHAPI__PlatformSessionTemplate_1afcc99ba028d9ae88bd51bd821e79081e"></a>

bool IsMaxPlayersDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if MaxPlayers_Optional is set and matches the default value.




### `SetMaxPlayersToDefault` <a id="structFRHAPI__PlatformSessionTemplate_1a906c779ed24a184bbf330d00f26a6f21"></a>

void SetMaxPlayersToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of MaxPlayers_Optional to its default and also sets MaxPlayers_IsSet to true.




### `GetCustomData` <a id="structFRHAPI__PlatformSessionTemplate_1a968db4e8e03ce9a1ded8a4e2b83fb437"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__PlatformSessionTemplate_1afc4954c995a337129d7b92447ee347a7"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__PlatformSessionTemplate_1a5ba8215a625f91e4d052242ad54e0d4b"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__PlatformSessionTemplate_1a245b15b5a658c492364ea19ad5911b56"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__PlatformSessionTemplate_1a695a2c70e2430ff72683f866fa0dd126"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__PlatformSessionTemplate_1aa7c5172eaa282ce126e031459a60b1c0"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__PlatformSessionTemplate_1a7bbcfbaaf9edbe5d6d9dc50669b33ff9"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__PlatformSessionTemplate_1a1bab29f42e2c1c50068349c69c644583"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.





