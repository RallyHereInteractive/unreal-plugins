---
title: FRHAPI_PlatformSession Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A platform session resource in a RallyHere session.

## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_Platform|[Platform](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a2bae055e3f10ff588cd9f272f218503b)|Platform that this session is for.|
|FString|[PlatformSessionType](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a6bb67ef7a058965a657d6c1a00853bad)|Platform-Specific Identifier for the Platform's template.|
|FString|[PlatformSessionIdBase64](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a1035f971a914bc5547232d34e673898c)|Platform session's unique identifier.|
|TArray< [FRHAPI_PlatformSessionPlayer](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer) >|[Players](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a457c7e431c6f6dc18bd781d09ba5d5fb)|DEPRECATED. PlatformSessions no longer keep tracking of players. Players in the platform session.|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a9892c6b70fc4a33cb19ec43e5ea10d0a)|Product defined custom data fields about the platform session.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a1868b2138d2cf1feca6c1f300a104cea)|true if CustomData_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a6ad407802c93e51ba4ad6b2ea8b90f26)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a0d7974aeb8156db09f05ca16c7f0a217)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_Platform &|[GetPlatform](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a4bb18b46b2c2687ce80b63ea0357d210)()|Gets the value of Platform.|
|const ERHAPI_Platform &|[GetPlatform](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a26fb79f79f15f9f77811e2ae696ac511)()|Gets the value of Platform.|
|void|[SetPlatform](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a632f0c170a35c4e8143f5bdd842f70f3)(ERHAPI_Platform NewValue)|Sets the value of Platform.|
|FString &|[GetPlatformSessionType](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1ae31aa8df950002b96ce224e6128a1dc4)()|Gets the value of PlatformSessionType.|
|const FString &|[GetPlatformSessionType](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a6afbbb4c98285c70d95c4d2fe8d7d93b)()|Gets the value of PlatformSessionType.|
|void|[SetPlatformSessionType](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a8f6b60082e9498840e2be75498d34bd4)(FString NewValue)|Sets the value of PlatformSessionType.|
|FString &|[GetPlatformSessionIdBase64](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a15fa96ccee660aa48718141a9600c3ce)()|Gets the value of PlatformSessionIdBase64.|
|const FString &|[GetPlatformSessionIdBase64](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a9d2ad046a95f6bda0f9a006565b505c8)()|Gets the value of PlatformSessionIdBase64.|
|void|[SetPlatformSessionIdBase64](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a22f13ff04903dfdbb78558d2493af670)(FString NewValue)|Sets the value of PlatformSessionIdBase64.|
|TArray< [FRHAPI_PlatformSessionPlayer](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer) > &|[GetPlayers](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a614ed29701838a10d39f761b904699c1)()|Gets the value of Players.|
|const TArray< [FRHAPI_PlatformSessionPlayer](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer) > &|[GetPlayers](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a8a8c811b88cf4d8b2bfe7b05d4978ec1)()|Gets the value of Players.|
|void|[SetPlayers](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a82c0d6e133ea4208914fc23ed02f257f)(TArray< [FRHAPI_PlatformSessionPlayer](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer) > NewValue)|Sets the value of Players.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a5ef4cb3f4c9ef59b07808731c0a9171d)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a31ca45bef966ba0f4776da050770d774)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a23044803453d0fd2436473c8c2c2f498)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a7213f0b2a42417f2ffa8fb82cc685227)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a772a1c1d8455398ecfb28a03d28a1017)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a61953976e75263bf9bcddc08bb00b1ce)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a1fbf4271a911d3ecbb3392121c8cf8a0)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession_1a27df4527314de6e07dd805631af23b14)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
## Public Attributes



### `Platform` <a id="structFRHAPI__PlatformSession_1a2bae055e3f10ff588cd9f272f218503b"></a>

`ERHAPI_Platform FRHAPI_PlatformSession::Platform`

Platform that this session is for.




### `PlatformSessionType` <a id="structFRHAPI__PlatformSession_1a6bb67ef7a058965a657d6c1a00853bad"></a>

`FString FRHAPI_PlatformSession::PlatformSessionType`

Platform-Specific Identifier for the Platform's template.




### `PlatformSessionIdBase64` <a id="structFRHAPI__PlatformSession_1a1035f971a914bc5547232d34e673898c"></a>

`FString FRHAPI_PlatformSession::PlatformSessionIdBase64`

Platform session's unique identifier.




### `Players` <a id="structFRHAPI__PlatformSession_1a457c7e431c6f6dc18bd781d09ba5d5fb"></a>

`TArray<FRHAPI_PlatformSessionPlayer> FRHAPI_PlatformSession::Players`

DEPRECATED. PlatformSessions no longer keep tracking of players. Players in the platform session.




### `CustomData_Optional` <a id="structFRHAPI__PlatformSession_1a9892c6b70fc4a33cb19ec43e5ea10d0a"></a>

`TMap<FString, FString> FRHAPI_PlatformSession::CustomData_Optional`

Product defined custom data fields about the platform session.




### `CustomData_IsSet` <a id="structFRHAPI__PlatformSession_1a1868b2138d2cf1feca6c1f300a104cea"></a>

`bool FRHAPI_PlatformSession::CustomData_IsSet`

true if CustomData_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PlatformSession_1a6ad407802c93e51ba4ad6b2ea8b90f26"></a>

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



### `WriteJson` <a id="structFRHAPI__PlatformSession_1a0d7974aeb8156db09f05ca16c7f0a217"></a>

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



### `GetPlatform` <a id="structFRHAPI__PlatformSession_1a4bb18b46b2c2687ce80b63ea0357d210"></a>

ERHAPI_Platform & GetPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Platform.




### `GetPlatform` <a id="structFRHAPI__PlatformSession_1a26fb79f79f15f9f77811e2ae696ac511"></a>

const ERHAPI_Platform & GetPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Platform.




### `SetPlatform` <a id="structFRHAPI__PlatformSession_1a632f0c170a35c4e8143f5bdd842f70f3"></a>

void SetPlatform(ERHAPI_Platform NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Platform|NewValue|

#### Description

Sets the value of Platform.




### `GetPlatformSessionType` <a id="structFRHAPI__PlatformSession_1ae31aa8df950002b96ce224e6128a1dc4"></a>

FString & GetPlatformSessionType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformSessionType.




### `GetPlatformSessionType` <a id="structFRHAPI__PlatformSession_1a6afbbb4c98285c70d95c4d2fe8d7d93b"></a>

const FString & GetPlatformSessionType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformSessionType.




### `SetPlatformSessionType` <a id="structFRHAPI__PlatformSession_1a8f6b60082e9498840e2be75498d34bd4"></a>

void SetPlatformSessionType(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of PlatformSessionType.




### `GetPlatformSessionIdBase64` <a id="structFRHAPI__PlatformSession_1a15fa96ccee660aa48718141a9600c3ce"></a>

FString & GetPlatformSessionIdBase64()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformSessionIdBase64.




### `GetPlatformSessionIdBase64` <a id="structFRHAPI__PlatformSession_1a9d2ad046a95f6bda0f9a006565b505c8"></a>

const FString & GetPlatformSessionIdBase64()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformSessionIdBase64.




### `SetPlatformSessionIdBase64` <a id="structFRHAPI__PlatformSession_1a22f13ff04903dfdbb78558d2493af670"></a>

void SetPlatformSessionIdBase64(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of PlatformSessionIdBase64.




### `GetPlayers` <a id="structFRHAPI__PlatformSession_1a614ed29701838a10d39f761b904699c1"></a>

TArray< [FRHAPI_PlatformSessionPlayer](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer) > & GetPlayers()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Players.




### `GetPlayers` <a id="structFRHAPI__PlatformSession_1a8a8c811b88cf4d8b2bfe7b05d4978ec1"></a>

const TArray< [FRHAPI_PlatformSessionPlayer](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer) > & GetPlayers()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Players.




### `SetPlayers` <a id="structFRHAPI__PlatformSession_1a82c0d6e133ea4208914fc23ed02f257f"></a>

void SetPlayers(TArray< [FRHAPI_PlatformSessionPlayer](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PlatformSessionPlayer](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer) >|NewValue|

#### Description

Sets the value of Players.




### `GetCustomData` <a id="structFRHAPI__PlatformSession_1a5ef4cb3f4c9ef59b07808731c0a9171d"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__PlatformSession_1a31ca45bef966ba0f4776da050770d774"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__PlatformSession_1a23044803453d0fd2436473c8c2c2f498"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__PlatformSession_1a7213f0b2a42417f2ffa8fb82cc685227"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__PlatformSession_1a772a1c1d8455398ecfb28a03d28a1017"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__PlatformSession_1a61953976e75263bf9bcddc08bb00b1ce"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__PlatformSession_1a1fbf4271a911d3ecbb3392121c8cf8a0"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__PlatformSession_1a27df4527314de6e07dd805631af23b14"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.





