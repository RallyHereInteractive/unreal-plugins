---
title: FRHAPI_PortalUserResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[PortalUserId_Optional](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1aa4044be39cec42ef3d95b808606ca2ae)|Portal user ID.|
|bool|[PortalUserId_IsSet](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1ac7b290f0f2bbe598c77e652c134bdade)|true if PortalUserId_Optional has been set to a value|
|int32|[PortalId](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1a1e7b5c3a59e3c42f4818ea2597b99eb0)|Portal ID DEPRECATED use platform instead.|
|ERHAPI_Platform|[Platform](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1abc32c735669c374aca93d5acd7085d3f)|Platform.|
|FString|[DisplayName_Optional](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1a77bbe891aceb9ccd53b8c053a9d57466)|Display name.|
|bool|[DisplayName_IsSet](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1a758e573c69f5c1d4ad97895109cdcee0)|true if DisplayName_Optional has been set to a value|
|int32|[PlayerId](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1a2d6b6d603819120e125c82b880776263)|Player ID DEPRECATED use player_uuid instead.|
|FGuid|[PlayerUuid](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1a66933b04170b4adc512d07ccf09d0ddf)|Player UUID.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1a821a0e1dc1846b6cf1b53279a6a4e33e)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1a3747cae157a78d0f9f59c85f4b2c9ddd)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetPortalUserId](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1ac1fff9577bf2fc695ee3575a632e3afb)()|Gets the value of PortalUserId_Optional, regardless of it having been set.|
|const FString &|[GetPortalUserId](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1a0ebda139397a335f7f3a9467219b361e)()|Gets the value of PortalUserId_Optional, regardless of it having been set.|
|const FString &|[GetPortalUserId](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1aec818741460136b9163e376d4d559e9d)(const FString & DefaultValue)|Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPortalUserId](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1a877ac3c4cf9bf2c8e9e7ab41b438cfb8)(FString & OutValue)|Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetPortalUserIdOrNull](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1aa80fecda54b8fca9f51394ca5eed2898)()|Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetPortalUserIdOrNull](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1aad4e8f5dc44ba1db2c9b8ebc219047e5)()|Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPortalUserId](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1a5abed8842804deece070d4bb81664b6c)(FString NewValue)|Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.|
|void|[ClearPortalUserId](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1aad55dab5c2f1d56b26e86181c1d70db8)()|Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.|
|int32 &|[GetPortalId](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1a767b0f99979bca91fc8c0ca75e2378e8)()|Gets the value of PortalId.|
|const int32 &|[GetPortalId](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1ab082c8bae25684cdfc101f77c392387d)()|Gets the value of PortalId.|
|void|[SetPortalId](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1aa68f77517d9472ff7d83048bbe3a7b1e)(int32 NewValue)|Sets the value of PortalId.|
|bool|[IsPortalIdDefaultValue](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1a8d2829c973692004a603fd7299fa7c4d)()|Returns true if PortalId matches the default value.|
|void|[SetPortalIdToDefault](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1ae9cb2b9863c716b32ed5ca3a96a51119)()|Sets the value of PortalId to its default|
|ERHAPI_Platform &|[GetPlatform](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1ae4dabc52732a3e9d3e23ee68e989a71a)()|Gets the value of Platform.|
|const ERHAPI_Platform &|[GetPlatform](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1aa25dc708f68d43f8266a575bbcf4534e)()|Gets the value of Platform.|
|void|[SetPlatform](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1a30b8d190da6e4b64c258a0ce20a78c5f)(ERHAPI_Platform NewValue)|Sets the value of Platform.|
|FString &|[GetDisplayName](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1a0241cf3716bd64c11d1160a58e1a0374)()|Gets the value of DisplayName_Optional, regardless of it having been set.|
|const FString &|[GetDisplayName](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1a5b2f3cb6cc3461cf503bf1287ad50774)()|Gets the value of DisplayName_Optional, regardless of it having been set.|
|const FString &|[GetDisplayName](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1a9a1f375aa391cd23f3d1ff1f7fe7c630)(const FString & DefaultValue)|Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetDisplayName](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1a940d3cae990ce7a780051795c6f0d1e8)(FString & OutValue)|Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetDisplayNameOrNull](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1a92d8258c04c7f5ce2f68e94daddbc21e)()|Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetDisplayNameOrNull](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1abe5a760b3f1fecc744b89991474f2ad7)()|Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetDisplayName](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1a1dedfadfdf9488eaafda3686df824c05)(FString NewValue)|Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.|
|void|[ClearDisplayName](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1af3483949dd8f34604018d03fe5d13d06)()|Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.|
|int32 &|[GetPlayerId](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1aaf8ad51ca28a6327856a0ebc821218c6)()|Gets the value of PlayerId.|
|const int32 &|[GetPlayerId](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1a992fd8d6aecb941c99c1f8ee8343952c)()|Gets the value of PlayerId.|
|void|[SetPlayerId](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1ab99ac795cd3d170f13c7a692c31f9ad4)(int32 NewValue)|Sets the value of PlayerId.|
|bool|[IsPlayerIdDefaultValue](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1a2f80c742ea5fa5322befd7dba2231e3b)()|Returns true if PlayerId matches the default value.|
|void|[SetPlayerIdToDefault](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1a01b5af0434b8222fbe1dac080c09ba0b)()|Sets the value of PlayerId to its default|
|FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1abc8c0dc9a99bdb3938084ca629623cb5)()|Gets the value of PlayerUuid.|
|const FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1a3a17830e9cc7e41204af3a10bf02605e)()|Gets the value of PlayerUuid.|
|void|[SetPlayerUuid](/unreal-plugins/all/structfrhapi__portaluserresponse/#structFRHAPI__PortalUserResponse_1a6e312e1bb840629566da0c3c3c06f8b4)(FGuid NewValue)|Sets the value of PlayerUuid.|
## Public Attributes



### `PortalUserId_Optional` <a id="structFRHAPI__PortalUserResponse_1aa4044be39cec42ef3d95b808606ca2ae"></a>

`FString FRHAPI_PortalUserResponse::PortalUserId_Optional`

Portal user ID.




### `PortalUserId_IsSet` <a id="structFRHAPI__PortalUserResponse_1ac7b290f0f2bbe598c77e652c134bdade"></a>

`bool FRHAPI_PortalUserResponse::PortalUserId_IsSet`

true if PortalUserId_Optional has been set to a value




### `PortalId` <a id="structFRHAPI__PortalUserResponse_1a1e7b5c3a59e3c42f4818ea2597b99eb0"></a>

`int32 FRHAPI_PortalUserResponse::PortalId`

Portal ID DEPRECATED use platform instead.




### `Platform` <a id="structFRHAPI__PortalUserResponse_1abc32c735669c374aca93d5acd7085d3f"></a>

`ERHAPI_Platform FRHAPI_PortalUserResponse::Platform`

Platform.




### `DisplayName_Optional` <a id="structFRHAPI__PortalUserResponse_1a77bbe891aceb9ccd53b8c053a9d57466"></a>

`FString FRHAPI_PortalUserResponse::DisplayName_Optional`

Display name.




### `DisplayName_IsSet` <a id="structFRHAPI__PortalUserResponse_1a758e573c69f5c1d4ad97895109cdcee0"></a>

`bool FRHAPI_PortalUserResponse::DisplayName_IsSet`

true if DisplayName_Optional has been set to a value




### `PlayerId` <a id="structFRHAPI__PortalUserResponse_1a2d6b6d603819120e125c82b880776263"></a>

`int32 FRHAPI_PortalUserResponse::PlayerId`

Player ID DEPRECATED use player_uuid instead.




### `PlayerUuid` <a id="structFRHAPI__PortalUserResponse_1a66933b04170b4adc512d07ccf09d0ddf"></a>

`FGuid FRHAPI_PortalUserResponse::PlayerUuid`

Player UUID.





## Public Functions



### `FromJson` <a id="structFRHAPI__PortalUserResponse_1a821a0e1dc1846b6cf1b53279a6a4e33e"></a>

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



### `WriteJson` <a id="structFRHAPI__PortalUserResponse_1a3747cae157a78d0f9f59c85f4b2c9ddd"></a>

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



### `GetPortalUserId` <a id="structFRHAPI__PortalUserResponse_1ac1fff9577bf2fc695ee3575a632e3afb"></a>

FString & GetPortalUserId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalUserId_Optional, regardless of it having been set.




### `GetPortalUserId` <a id="structFRHAPI__PortalUserResponse_1a0ebda139397a335f7f3a9467219b361e"></a>

const FString & GetPortalUserId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalUserId_Optional, regardless of it having been set.




### `GetPortalUserId` <a id="structFRHAPI__PortalUserResponse_1aec818741460136b9163e376d4d559e9d"></a>

const FString & GetPortalUserId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of PortalUserId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPortalUserId` <a id="structFRHAPI__PortalUserResponse_1a877ac3c4cf9bf2c8e9e7ab41b438cfb8"></a>

bool GetPortalUserId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of PortalUserId_Optional and returns true if it has been set, otherwise returns false.




### `GetPortalUserIdOrNull` <a id="structFRHAPI__PortalUserResponse_1aa80fecda54b8fca9f51394ca5eed2898"></a>

FString * GetPortalUserIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.




### `GetPortalUserIdOrNull` <a id="structFRHAPI__PortalUserResponse_1aad4e8f5dc44ba1db2c9b8ebc219047e5"></a>

const FString * GetPortalUserIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PortalUserId_Optional, if it has been set, otherwise returns nullptr.




### `SetPortalUserId` <a id="structFRHAPI__PortalUserResponse_1a5abed8842804deece070d4bb81664b6c"></a>

void SetPortalUserId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of PortalUserId_Optional and also sets PortalUserId_IsSet to true.




### `ClearPortalUserId` <a id="structFRHAPI__PortalUserResponse_1aad55dab5c2f1d56b26e86181c1d70db8"></a>

void ClearPortalUserId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PortalUserId_Optional and sets PortalUserId_IsSet to false.




### `GetPortalId` <a id="structFRHAPI__PortalUserResponse_1a767b0f99979bca91fc8c0ca75e2378e8"></a>

int32 & GetPortalId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalId.




### `GetPortalId` <a id="structFRHAPI__PortalUserResponse_1ab082c8bae25684cdfc101f77c392387d"></a>

const int32 & GetPortalId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PortalId.




### `SetPortalId` <a id="structFRHAPI__PortalUserResponse_1aa68f77517d9472ff7d83048bbe3a7b1e"></a>

void SetPortalId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of PortalId.




### `IsPortalIdDefaultValue` <a id="structFRHAPI__PortalUserResponse_1a8d2829c973692004a603fd7299fa7c4d"></a>

bool IsPortalIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if PortalId matches the default value.




### `SetPortalIdToDefault` <a id="structFRHAPI__PortalUserResponse_1ae9cb2b9863c716b32ed5ca3a96a51119"></a>

void SetPortalIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of PortalId to its default




### `GetPlatform` <a id="structFRHAPI__PortalUserResponse_1ae4dabc52732a3e9d3e23ee68e989a71a"></a>

ERHAPI_Platform & GetPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Platform.




### `GetPlatform` <a id="structFRHAPI__PortalUserResponse_1aa25dc708f68d43f8266a575bbcf4534e"></a>

const ERHAPI_Platform & GetPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Platform.




### `SetPlatform` <a id="structFRHAPI__PortalUserResponse_1a30b8d190da6e4b64c258a0ce20a78c5f"></a>

void SetPlatform(ERHAPI_Platform NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Platform|NewValue|

#### Description

Sets the value of Platform.




### `GetDisplayName` <a id="structFRHAPI__PortalUserResponse_1a0241cf3716bd64c11d1160a58e1a0374"></a>

FString & GetDisplayName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DisplayName_Optional, regardless of it having been set.




### `GetDisplayName` <a id="structFRHAPI__PortalUserResponse_1a5b2f3cb6cc3461cf503bf1287ad50774"></a>

const FString & GetDisplayName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DisplayName_Optional, regardless of it having been set.




### `GetDisplayName` <a id="structFRHAPI__PortalUserResponse_1a9a1f375aa391cd23f3d1ff1f7fe7c630"></a>

const FString & GetDisplayName(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetDisplayName` <a id="structFRHAPI__PortalUserResponse_1a940d3cae990ce7a780051795c6f0d1e8"></a>

bool GetDisplayName(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.




### `GetDisplayNameOrNull` <a id="structFRHAPI__PortalUserResponse_1a92d8258c04c7f5ce2f68e94daddbc21e"></a>

FString * GetDisplayNameOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.




### `GetDisplayNameOrNull` <a id="structFRHAPI__PortalUserResponse_1abe5a760b3f1fecc744b89991474f2ad7"></a>

const FString * GetDisplayNameOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.




### `SetDisplayName` <a id="structFRHAPI__PortalUserResponse_1a1dedfadfdf9488eaafda3686df824c05"></a>

void SetDisplayName(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.




### `ClearDisplayName` <a id="structFRHAPI__PortalUserResponse_1af3483949dd8f34604018d03fe5d13d06"></a>

void ClearDisplayName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.




### `GetPlayerId` <a id="structFRHAPI__PortalUserResponse_1aaf8ad51ca28a6327856a0ebc821218c6"></a>

int32 & GetPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerId.




### `GetPlayerId` <a id="structFRHAPI__PortalUserResponse_1a992fd8d6aecb941c99c1f8ee8343952c"></a>

const int32 & GetPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerId.




### `SetPlayerId` <a id="structFRHAPI__PortalUserResponse_1ab99ac795cd3d170f13c7a692c31f9ad4"></a>

void SetPlayerId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of PlayerId.




### `IsPlayerIdDefaultValue` <a id="structFRHAPI__PortalUserResponse_1a2f80c742ea5fa5322befd7dba2231e3b"></a>

bool IsPlayerIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if PlayerId matches the default value.




### `SetPlayerIdToDefault` <a id="structFRHAPI__PortalUserResponse_1a01b5af0434b8222fbe1dac080c09ba0b"></a>

void SetPlayerIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of PlayerId to its default




### `GetPlayerUuid` <a id="structFRHAPI__PortalUserResponse_1abc8c0dc9a99bdb3938084ca629623cb5"></a>

FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `GetPlayerUuid` <a id="structFRHAPI__PortalUserResponse_1a3a17830e9cc7e41204af3a10bf02605e"></a>

const FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `SetPlayerUuid` <a id="structFRHAPI__PortalUserResponse_1a6e312e1bb840629566da0c3c3c06f8b4"></a>

void SetPlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of PlayerUuid.





