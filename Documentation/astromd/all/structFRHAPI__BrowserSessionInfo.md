---
title: FRHAPI_BrowserSessionInfo Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Information about a session listed in a browser.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[SessionId](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1ad214b73d6e909c822c0cf69983c4f24a)|ID for the session.|
|int32|[PlayerCount_Optional](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a394a9ae56121734e12456e180a022249)|Number of players actively in this session.|
|bool|[PlayerCount_IsSet](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a0715bead5854464147ab41802a5d01e8)|true if PlayerCount_Optional has been set to a value|
|int32|[MaxPlayerCount_Optional](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1aa47977c3e27f935d503c0333d38c61c0)|Maximum number of players that can be in this session.|
|bool|[MaxPlayerCount_IsSet](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a171772a1e7d85472005eeeef510e5c50)|true if MaxPlayerCount_Optional has been set to a value|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a7e8980b30493ba6a48dcadeef3f57f9d)|Custom data with the listing of the instance in the Session browser.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1ab9b870560b838b457eeed8a1619964a3)|true if CustomData_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a7da33a30b2ebecb02d52141beda22503)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a8d5ae1616aa1286df5b6807ea5c0d2b7)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetSessionId](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a7827480c91eb08234f3cfd136530f45e)()|Gets the value of SessionId.|
|const FString &|[GetSessionId](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a44f80f96d99f79dd995d4f8ea92d6fc3)()|Gets the value of SessionId.|
|void|[SetSessionId](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1adda53283e5c9709509eb99376cab0d5d)(FString NewValue)|Sets the value of SessionId.|
|int32 &|[GetPlayerCount](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1aca0c832a46ad32204ccbcf099766277b)()|Gets the value of PlayerCount_Optional, regardless of it having been set.|
|const int32 &|[GetPlayerCount](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a6982b9b28572dba09338420bc24e1bf9)()|Gets the value of PlayerCount_Optional, regardless of it having been set.|
|const int32 &|[GetPlayerCount](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a1eaefc617051b03ab5e71e14fa48b55a)(const int32 & DefaultValue)|Gets the value of PlayerCount_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPlayerCount](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a39108acad6e256b339c9b3ea000cee3b)(int32 & OutValue)|Fills OutValue with the value of PlayerCount_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetPlayerCountOrNull](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a454dcdca1f511fdce9b8de474a22d245)()|Returns a pointer to PlayerCount_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetPlayerCountOrNull](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a8b18c9981e5ddcdc069d530af68ceefb)()|Returns a pointer to PlayerCount_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPlayerCount](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1acfeb37e446922e7e3c5150385f1a1a0c)(int32 NewValue)|Sets the value of PlayerCount_Optional and also sets PlayerCount_IsSet to true.|
|void|[ClearPlayerCount](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1aea544e1d0c35b6eb3042f5541619d850)()|Clears the value of PlayerCount_Optional and sets PlayerCount_IsSet to false.|
|bool|[IsPlayerCountDefaultValue](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1aca260c0cc406d03f4423ae42aa00cd7d)()|Returns true if PlayerCount_Optional is set and matches the default value.|
|void|[SetPlayerCountToDefault](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a33402b8ce555bdda6304a68c169128cf)()|Sets the value of PlayerCount_Optional to its default and also sets PlayerCount_IsSet to true.|
|int32 &|[GetMaxPlayerCount](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1ac188640375bd90bb4b9de5140c9fa0c3)()|Gets the value of MaxPlayerCount_Optional, regardless of it having been set.|
|const int32 &|[GetMaxPlayerCount](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a1b532bdd74732e02d08ded1ca5c887e4)()|Gets the value of MaxPlayerCount_Optional, regardless of it having been set.|
|const int32 &|[GetMaxPlayerCount](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a796c8a8ea937f69caf1e47c2b27fccb3)(const int32 & DefaultValue)|Gets the value of MaxPlayerCount_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetMaxPlayerCount](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a4fca349b8c31f615d8b19c3bab0bf6ac)(int32 & OutValue)|Fills OutValue with the value of MaxPlayerCount_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetMaxPlayerCountOrNull](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a70f5a87412bbd72fcf926b43a9483e63)()|Returns a pointer to MaxPlayerCount_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetMaxPlayerCountOrNull](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a5bc6fe76a2dc171f1e414883c93a9feb)()|Returns a pointer to MaxPlayerCount_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetMaxPlayerCount](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a6e4f72b01eb2e52595f24f1bfa572af9)(int32 NewValue)|Sets the value of MaxPlayerCount_Optional and also sets MaxPlayerCount_IsSet to true.|
|void|[ClearMaxPlayerCount](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1ae4db76a7c37ed889376ede8b46d804e8)()|Clears the value of MaxPlayerCount_Optional and sets MaxPlayerCount_IsSet to false.|
|bool|[IsMaxPlayerCountDefaultValue](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a2216b0feb30b57b5d2e3fe24662bd446)()|Returns true if MaxPlayerCount_Optional is set and matches the default value.|
|void|[SetMaxPlayerCountToDefault](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1ac2796e981f1551692d575f75f8b3a826)()|Sets the value of MaxPlayerCount_Optional to its default and also sets MaxPlayerCount_IsSet to true.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a70148656f7b7287441c3081701c1e380)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a89ec50cd7aec0372e901f4dc64f56e05)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1ad4e6c0f6904f976cd28c216da6e66dd1)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a3e1c0b8045943d73a0a847bce3e07cc4)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1ac71728fae96f9a21c11d366c702b8c76)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a916172ecb02eaec5c54b28cfc4445f8c)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a35ebc4fc8566513ff72476b165e53875)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo_1a84c5084e250d78bbfc734d4ba66d70ca)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
## Public Attributes



### `SessionId` <a id="structFRHAPI__BrowserSessionInfo_1ad214b73d6e909c822c0cf69983c4f24a"></a>

`FString FRHAPI_BrowserSessionInfo::SessionId`

ID for the session.




### `PlayerCount_Optional` <a id="structFRHAPI__BrowserSessionInfo_1a394a9ae56121734e12456e180a022249"></a>

`int32 FRHAPI_BrowserSessionInfo::PlayerCount_Optional`

Number of players actively in this session.




### `PlayerCount_IsSet` <a id="structFRHAPI__BrowserSessionInfo_1a0715bead5854464147ab41802a5d01e8"></a>

`bool FRHAPI_BrowserSessionInfo::PlayerCount_IsSet`

true if PlayerCount_Optional has been set to a value




### `MaxPlayerCount_Optional` <a id="structFRHAPI__BrowserSessionInfo_1aa47977c3e27f935d503c0333d38c61c0"></a>

`int32 FRHAPI_BrowserSessionInfo::MaxPlayerCount_Optional`

Maximum number of players that can be in this session.




### `MaxPlayerCount_IsSet` <a id="structFRHAPI__BrowserSessionInfo_1a171772a1e7d85472005eeeef510e5c50"></a>

`bool FRHAPI_BrowserSessionInfo::MaxPlayerCount_IsSet`

true if MaxPlayerCount_Optional has been set to a value




### `CustomData_Optional` <a id="structFRHAPI__BrowserSessionInfo_1a7e8980b30493ba6a48dcadeef3f57f9d"></a>

`TMap<FString, FString> FRHAPI_BrowserSessionInfo::CustomData_Optional`

Custom data with the listing of the instance in the Session browser.




### `CustomData_IsSet` <a id="structFRHAPI__BrowserSessionInfo_1ab9b870560b838b457eeed8a1619964a3"></a>

`bool FRHAPI_BrowserSessionInfo::CustomData_IsSet`

true if CustomData_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__BrowserSessionInfo_1a7da33a30b2ebecb02d52141beda22503"></a>

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



### `WriteJson` <a id="structFRHAPI__BrowserSessionInfo_1a8d5ae1616aa1286df5b6807ea5c0d2b7"></a>

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



### `GetSessionId` <a id="structFRHAPI__BrowserSessionInfo_1a7827480c91eb08234f3cfd136530f45e"></a>

FString & GetSessionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SessionId.




### `GetSessionId` <a id="structFRHAPI__BrowserSessionInfo_1a44f80f96d99f79dd995d4f8ea92d6fc3"></a>

const FString & GetSessionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SessionId.




### `SetSessionId` <a id="structFRHAPI__BrowserSessionInfo_1adda53283e5c9709509eb99376cab0d5d"></a>

void SetSessionId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of SessionId.




### `GetPlayerCount` <a id="structFRHAPI__BrowserSessionInfo_1aca0c832a46ad32204ccbcf099766277b"></a>

int32 & GetPlayerCount()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerCount_Optional, regardless of it having been set.




### `GetPlayerCount` <a id="structFRHAPI__BrowserSessionInfo_1a6982b9b28572dba09338420bc24e1bf9"></a>

const int32 & GetPlayerCount()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerCount_Optional, regardless of it having been set.




### `GetPlayerCount` <a id="structFRHAPI__BrowserSessionInfo_1a1eaefc617051b03ab5e71e14fa48b55a"></a>

const int32 & GetPlayerCount(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of PlayerCount_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPlayerCount` <a id="structFRHAPI__BrowserSessionInfo_1a39108acad6e256b339c9b3ea000cee3b"></a>

bool GetPlayerCount(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of PlayerCount_Optional and returns true if it has been set, otherwise returns false.




### `GetPlayerCountOrNull` <a id="structFRHAPI__BrowserSessionInfo_1a454dcdca1f511fdce9b8de474a22d245"></a>

int32 * GetPlayerCountOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PlayerCount_Optional, if it has been set, otherwise returns nullptr.




### `GetPlayerCountOrNull` <a id="structFRHAPI__BrowserSessionInfo_1a8b18c9981e5ddcdc069d530af68ceefb"></a>

const int32 * GetPlayerCountOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PlayerCount_Optional, if it has been set, otherwise returns nullptr.




### `SetPlayerCount` <a id="structFRHAPI__BrowserSessionInfo_1acfeb37e446922e7e3c5150385f1a1a0c"></a>

void SetPlayerCount(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of PlayerCount_Optional and also sets PlayerCount_IsSet to true.




### `ClearPlayerCount` <a id="structFRHAPI__BrowserSessionInfo_1aea544e1d0c35b6eb3042f5541619d850"></a>

void ClearPlayerCount()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PlayerCount_Optional and sets PlayerCount_IsSet to false.




### `IsPlayerCountDefaultValue` <a id="structFRHAPI__BrowserSessionInfo_1aca260c0cc406d03f4423ae42aa00cd7d"></a>

bool IsPlayerCountDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if PlayerCount_Optional is set and matches the default value.




### `SetPlayerCountToDefault` <a id="structFRHAPI__BrowserSessionInfo_1a33402b8ce555bdda6304a68c169128cf"></a>

void SetPlayerCountToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of PlayerCount_Optional to its default and also sets PlayerCount_IsSet to true.




### `GetMaxPlayerCount` <a id="structFRHAPI__BrowserSessionInfo_1ac188640375bd90bb4b9de5140c9fa0c3"></a>

int32 & GetMaxPlayerCount()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MaxPlayerCount_Optional, regardless of it having been set.




### `GetMaxPlayerCount` <a id="structFRHAPI__BrowserSessionInfo_1a1b532bdd74732e02d08ded1ca5c887e4"></a>

const int32 & GetMaxPlayerCount()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MaxPlayerCount_Optional, regardless of it having been set.




### `GetMaxPlayerCount` <a id="structFRHAPI__BrowserSessionInfo_1a796c8a8ea937f69caf1e47c2b27fccb3"></a>

const int32 & GetMaxPlayerCount(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of MaxPlayerCount_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetMaxPlayerCount` <a id="structFRHAPI__BrowserSessionInfo_1a4fca349b8c31f615d8b19c3bab0bf6ac"></a>

bool GetMaxPlayerCount(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of MaxPlayerCount_Optional and returns true if it has been set, otherwise returns false.




### `GetMaxPlayerCountOrNull` <a id="structFRHAPI__BrowserSessionInfo_1a70f5a87412bbd72fcf926b43a9483e63"></a>

int32 * GetMaxPlayerCountOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MaxPlayerCount_Optional, if it has been set, otherwise returns nullptr.




### `GetMaxPlayerCountOrNull` <a id="structFRHAPI__BrowserSessionInfo_1a5bc6fe76a2dc171f1e414883c93a9feb"></a>

const int32 * GetMaxPlayerCountOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MaxPlayerCount_Optional, if it has been set, otherwise returns nullptr.




### `SetMaxPlayerCount` <a id="structFRHAPI__BrowserSessionInfo_1a6e4f72b01eb2e52595f24f1bfa572af9"></a>

void SetMaxPlayerCount(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of MaxPlayerCount_Optional and also sets MaxPlayerCount_IsSet to true.




### `ClearMaxPlayerCount` <a id="structFRHAPI__BrowserSessionInfo_1ae4db76a7c37ed889376ede8b46d804e8"></a>

void ClearMaxPlayerCount()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of MaxPlayerCount_Optional and sets MaxPlayerCount_IsSet to false.




### `IsMaxPlayerCountDefaultValue` <a id="structFRHAPI__BrowserSessionInfo_1a2216b0feb30b57b5d2e3fe24662bd446"></a>

bool IsMaxPlayerCountDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if MaxPlayerCount_Optional is set and matches the default value.




### `SetMaxPlayerCountToDefault` <a id="structFRHAPI__BrowserSessionInfo_1ac2796e981f1551692d575f75f8b3a826"></a>

void SetMaxPlayerCountToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of MaxPlayerCount_Optional to its default and also sets MaxPlayerCount_IsSet to true.




### `GetCustomData` <a id="structFRHAPI__BrowserSessionInfo_1a70148656f7b7287441c3081701c1e380"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__BrowserSessionInfo_1a89ec50cd7aec0372e901f4dc64f56e05"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__BrowserSessionInfo_1ad4e6c0f6904f976cd28c216da6e66dd1"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__BrowserSessionInfo_1a3e1c0b8045943d73a0a847bce3e07cc4"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__BrowserSessionInfo_1ac71728fae96f9a21c11d366c702b8c76"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__BrowserSessionInfo_1a916172ecb02eaec5c54b28cfc4445f8c"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__BrowserSessionInfo_1a35ebc4fc8566513ff72476b165e53875"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__BrowserSessionInfo_1a84c5084e250d78bbfc734d4ba66d70ca"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.





