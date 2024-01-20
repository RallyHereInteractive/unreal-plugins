---
title: FRHAPI_SelfSessionPlayerUpdateRequest Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A request body for a player updating information about themselves.

## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_SessionPlayerStatus|[Status_Optional](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1a5f87ee029d69d0bc3ffd1f4983c27547)|Status that the player would like after the request is complete. Note that some join operations may promote the player from member to leader|
|bool|[Status_IsSet](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1acdead63ce3719b7cb13bda50220e44c3)|true if Status_Optional has been set to a value|
|FString|[ClientVersion](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1a578153977ab83acf82c229604c427a41)|Semver for updated client.|
|[FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings)|[ClientSettings](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1a51b20cb17231495ddb6e7904e67ff3b5)||
|int32|[TeamId](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1a6e30cb01f64056bb327e4bc9214d11c1)|Which team the player is one.|
|[FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences)|[CrossplayPreferences_Optional](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1a3add0a8d848cdc7ba37ad9e02c33df33)||
|bool|[CrossplayPreferences_IsSet](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1abea2347af254bb0e3f9eb8cbb46fc9e3)|true if CrossplayPreferences_Optional has been set to a value|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1aaa1ded6c84ac6e5ddda821fe76a086ae)|player-defined custom data|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1a8217d194f5c6d231a970922b72505333)|true if CustomData_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1a8284666cfe41673b366681ac424cbef7)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1a7ea4fe3aca12fa5606e876af960c89a4)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_SessionPlayerStatus &|[GetStatus](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1a9396bf8b5d1ade1bcfba5f0012a7e840)()|Gets the value of Status_Optional, regardless of it having been set.|
|const ERHAPI_SessionPlayerStatus &|[GetStatus](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1a02a02d49641845b380e4a9d6012cab8d)()|Gets the value of Status_Optional, regardless of it having been set.|
|const ERHAPI_SessionPlayerStatus &|[GetStatus](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1a2cf4b2102c37b21941a5880e3effab85)(const ERHAPI_SessionPlayerStatus & DefaultValue)|Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetStatus](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1aa4778eafeab137a80737cb4ac3b85aeb)(ERHAPI_SessionPlayerStatus & OutValue)|Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_SessionPlayerStatus *|[GetStatusOrNull](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1a1eb593819087754e5872e9b91f1b3289)()|Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_SessionPlayerStatus *|[GetStatusOrNull](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1af709ed3c843dcbaea33f66daf04b195e)()|Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetStatus](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1af3d37c0180946dedce83850037f7631e)(ERHAPI_SessionPlayerStatus NewValue)|Sets the value of Status_Optional and also sets Status_IsSet to true.|
|void|[ClearStatus](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1a43b611f41d315e4d920418702e1c508b)()|Clears the value of Status_Optional and sets Status_IsSet to false.|
|FString &|[GetClientVersion](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1ac28d2a14c9ab5f993dcf0f115ffe8065)()|Gets the value of ClientVersion.|
|const FString &|[GetClientVersion](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1a9884671fb2a07272c4a254db4b5a60ea)()|Gets the value of ClientVersion.|
|void|[SetClientVersion](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1a5a7b1202b482322ca10a8b8046ecc13c)(FString NewValue)|Sets the value of ClientVersion.|
|[FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) &|[GetClientSettings](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1aae5c9917394a8daea13f8e1b3fede7fc)()|Gets the value of ClientSettings.|
|const [FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) &|[GetClientSettings](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1ab53168dd05e16b5cae6ed2ffe4e2dd04)()|Gets the value of ClientSettings.|
|void|[SetClientSettings](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1a0e9e7718d3337ecd2f87be25e9084ba9)([FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) NewValue)|Sets the value of ClientSettings.|
|int32 &|[GetTeamId](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1aa91152f39bf35cdfd48f092e198c0864)()|Gets the value of TeamId.|
|const int32 &|[GetTeamId](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1a72f5cc93485c3a7f055640acf9665505)()|Gets the value of TeamId.|
|void|[SetTeamId](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1a6d0501d38d1c6dd22cad1956528500b1)(int32 NewValue)|Sets the value of TeamId.|
|bool|[IsTeamIdDefaultValue](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1a15c6b3db1569e1555132bf0540770064)()|Returns true if TeamId matches the default value.|
|void|[SetTeamIdToDefault](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1a3782cd521bb7775f673f97861613130d)()|Sets the value of TeamId to its default|
|[FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) &|[GetCrossplayPreferences](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1a17bf901ce856d781acf75d3c05ce2051)()|Gets the value of CrossplayPreferences_Optional, regardless of it having been set.|
|const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) &|[GetCrossplayPreferences](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1abfd05b4337095d683eb2c1c3239bd146)()|Gets the value of CrossplayPreferences_Optional, regardless of it having been set.|
|const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) &|[GetCrossplayPreferences](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1ab9f7a945381549ddc70c0bf455f1864c)(const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) & DefaultValue)|Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCrossplayPreferences](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1adb508ab41d796ca2863c518504d67284)([FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) & OutValue)|Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) *|[GetCrossplayPreferencesOrNull](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1ae91328b352d515792e7bfef9c022ed2e)()|Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) *|[GetCrossplayPreferencesOrNull](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1adf3c02f507868c0c8da429df6f6b7b0f)()|Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCrossplayPreferences](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1a8257fa87ed002fcbca2abde0e5db3d29)([FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) NewValue)|Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.|
|void|[ClearCrossplayPreferences](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1ad9dacb94ea41b6f8efbf9c1c9ed3420e)()|Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1a9ecf38ff0a4a3ba94c5a1106348428f9)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1a7f2afaef3a77a2a4697806a10de2a5af)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1afbfbe077f9a58ba48b4f735d7de5e92e)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1a77e8157f202a5ad51f743a00178f92a4)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1af13635fbf33bc082ff124b33867ee5cb)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1a24356665c3aeec53f6f5367d79920207)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1ae06caba5bb32425ee95705a6e8e05937)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest_1afc76499c6b23732fdd02a72402d7e752)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
## Public Attributes



### `Status_Optional` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a5f87ee029d69d0bc3ffd1f4983c27547"></a>

`ERHAPI_SessionPlayerStatus FRHAPI_SelfSessionPlayerUpdateRequest::Status_Optional`

Status that the player would like after the request is complete. Note that some join operations may promote the player from member to leader




### `Status_IsSet` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1acdead63ce3719b7cb13bda50220e44c3"></a>

`bool FRHAPI_SelfSessionPlayerUpdateRequest::Status_IsSet`

true if Status_Optional has been set to a value




### `ClientVersion` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a578153977ab83acf82c229604c427a41"></a>

`FString FRHAPI_SelfSessionPlayerUpdateRequest::ClientVersion`

Semver for updated client.




### `ClientSettings` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a51b20cb17231495ddb6e7904e67ff3b5"></a>

`FRHAPI_ClientSettings FRHAPI_SelfSessionPlayerUpdateRequest::ClientSettings`






### `TeamId` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a6e30cb01f64056bb327e4bc9214d11c1"></a>

`int32 FRHAPI_SelfSessionPlayerUpdateRequest::TeamId`

Which team the player is one.




### `CrossplayPreferences_Optional` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a3add0a8d848cdc7ba37ad9e02c33df33"></a>

`FRHAPI_CrossplayPreferences FRHAPI_SelfSessionPlayerUpdateRequest::CrossplayPreferences_Optional`






### `CrossplayPreferences_IsSet` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1abea2347af254bb0e3f9eb8cbb46fc9e3"></a>

`bool FRHAPI_SelfSessionPlayerUpdateRequest::CrossplayPreferences_IsSet`

true if CrossplayPreferences_Optional has been set to a value




### `CustomData_Optional` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1aaa1ded6c84ac6e5ddda821fe76a086ae"></a>

`TMap<FString, FString> FRHAPI_SelfSessionPlayerUpdateRequest::CustomData_Optional`

player-defined custom data




### `CustomData_IsSet` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a8217d194f5c6d231a970922b72505333"></a>

`bool FRHAPI_SelfSessionPlayerUpdateRequest::CustomData_IsSet`

true if CustomData_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a8284666cfe41673b366681ac424cbef7"></a>

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



### `WriteJson` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a7ea4fe3aca12fa5606e876af960c89a4"></a>

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



### `GetStatus` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a9396bf8b5d1ade1bcfba5f0012a7e840"></a>

ERHAPI_SessionPlayerStatus & GetStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Status_Optional, regardless of it having been set.




### `GetStatus` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a02a02d49641845b380e4a9d6012cab8d"></a>

const ERHAPI_SessionPlayerStatus & GetStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Status_Optional, regardless of it having been set.




### `GetStatus` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a2cf4b2102c37b21941a5880e3effab85"></a>

const ERHAPI_SessionPlayerStatus & GetStatus(const ERHAPI_SessionPlayerStatus & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_SessionPlayerStatus &|DefaultValue|

#### Description

Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetStatus` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1aa4778eafeab137a80737cb4ac3b85aeb"></a>

bool GetStatus(ERHAPI_SessionPlayerStatus & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_SessionPlayerStatus &|OutValue|

#### Description

Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.




### `GetStatusOrNull` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a1eb593819087754e5872e9b91f1b3289"></a>

ERHAPI_SessionPlayerStatus * GetStatusOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.




### `GetStatusOrNull` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1af709ed3c843dcbaea33f66daf04b195e"></a>

const ERHAPI_SessionPlayerStatus * GetStatusOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.




### `SetStatus` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1af3d37c0180946dedce83850037f7631e"></a>

void SetStatus(ERHAPI_SessionPlayerStatus NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_SessionPlayerStatus|NewValue|

#### Description

Sets the value of Status_Optional and also sets Status_IsSet to true.




### `ClearStatus` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a43b611f41d315e4d920418702e1c508b"></a>

void ClearStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Status_Optional and sets Status_IsSet to false.




### `GetClientVersion` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ac28d2a14c9ab5f993dcf0f115ffe8065"></a>

FString & GetClientVersion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientVersion.




### `GetClientVersion` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a9884671fb2a07272c4a254db4b5a60ea"></a>

const FString & GetClientVersion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientVersion.




### `SetClientVersion` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a5a7b1202b482322ca10a8b8046ecc13c"></a>

void SetClientVersion(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of ClientVersion.




### `GetClientSettings` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1aae5c9917394a8daea13f8e1b3fede7fc"></a>

[FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) & GetClientSettings()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientSettings.




### `GetClientSettings` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ab53168dd05e16b5cae6ed2ffe4e2dd04"></a>

const [FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) & GetClientSettings()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientSettings.




### `SetClientSettings` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a0e9e7718d3337ecd2f87be25e9084ba9"></a>

void SetClientSettings([FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings)|NewValue|

#### Description

Sets the value of ClientSettings.




### `GetTeamId` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1aa91152f39bf35cdfd48f092e198c0864"></a>

int32 & GetTeamId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TeamId.




### `GetTeamId` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a72f5cc93485c3a7f055640acf9665505"></a>

const int32 & GetTeamId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TeamId.




### `SetTeamId` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a6d0501d38d1c6dd22cad1956528500b1"></a>

void SetTeamId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of TeamId.




### `IsTeamIdDefaultValue` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a15c6b3db1569e1555132bf0540770064"></a>

bool IsTeamIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if TeamId matches the default value.




### `SetTeamIdToDefault` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a3782cd521bb7775f673f97861613130d"></a>

void SetTeamIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of TeamId to its default




### `GetCrossplayPreferences` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a17bf901ce856d781acf75d3c05ce2051"></a>

[FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) & GetCrossplayPreferences()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.




### `GetCrossplayPreferences` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1abfd05b4337095d683eb2c1c3239bd146"></a>

const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) & GetCrossplayPreferences()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.




### `GetCrossplayPreferences` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ab9f7a945381549ddc70c0bf455f1864c"></a>

const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) & GetCrossplayPreferences(const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) &|DefaultValue|

#### Description

Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCrossplayPreferences` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1adb508ab41d796ca2863c518504d67284"></a>

bool GetCrossplayPreferences([FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) &|OutValue|

#### Description

Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.




### `GetCrossplayPreferencesOrNull` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ae91328b352d515792e7bfef9c022ed2e"></a>

[FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) * GetCrossplayPreferencesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.




### `GetCrossplayPreferencesOrNull` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1adf3c02f507868c0c8da429df6f6b7b0f"></a>

const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) * GetCrossplayPreferencesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.




### `SetCrossplayPreferences` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a8257fa87ed002fcbca2abde0e5db3d29"></a>

void SetCrossplayPreferences([FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences)|NewValue|

#### Description

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.




### `ClearCrossplayPreferences` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ad9dacb94ea41b6f8efbf9c1c9ed3420e"></a>

void ClearCrossplayPreferences()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.




### `GetCustomData` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a9ecf38ff0a4a3ba94c5a1106348428f9"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a7f2afaef3a77a2a4697806a10de2a5af"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1afbfbe077f9a58ba48b4f735d7de5e92e"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a77e8157f202a5ad51f743a00178f92a4"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1af13635fbf33bc082ff124b33867ee5cb"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a24356665c3aeec53f6f5367d79920207"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ae06caba5bb32425ee95705a6e8e05937"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1afc76499c6b23732fdd02a72402d7e752"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.





