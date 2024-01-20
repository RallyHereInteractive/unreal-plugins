---
title: FRHAPI_CreateOrJoinRequest Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A request body for a player to join a session.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[ClientVersion](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1a9fe6d696d707ca8e0e5c2713e9a59ee5)|String representation of semver for client.|
|[FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings)|[ClientSettings](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1aa76e8adb41fd4462a6f96dff90213d2a)||
|[FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences)|[CrossplayPreferences_Optional](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1ae1cf8611b7b6391f7ed46d79ceb0c4fa)||
|bool|[CrossplayPreferences_IsSet](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1ace0dda09c63eff0066ef37fc2fe66f90)|true if CrossplayPreferences_Optional has been set to a value|
|FString|[SessionType](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1ac2339ba0c03efd01c707b078da845cda)|Type of session client is creating or joining.|
|FString|[RegionId_Optional](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1a15cd29f37ee871cba1be3deb9e16f26f)|Preferred region for the instance and match to take place in.|
|bool|[RegionId_IsSet](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1a20aa30896105392bd7a1757c27ef4fb6)|true if RegionId_Optional has been set to a value|
|[FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest)|[Player_Optional](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1a608e52772ec0d3e177990ac2f34b47bd)||
|bool|[Player_IsSet](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1a9ad67a1403586151831ec6d857acfc5d)|true if Player_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1a71fde8d392c4f0af6bacef801552c09a)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1aca697c6ab0cf51cd69a5fb4b99dd0a93)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetClientVersion](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1a2a0bfde7e47b8be26a9cc2ae4efd4e12)()|Gets the value of ClientVersion.|
|const FString &|[GetClientVersion](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1a20cc88e65f0c61d0f1add0ff14fbf68f)()|Gets the value of ClientVersion.|
|void|[SetClientVersion](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1ada71e3fc5493ee1e5769fb35373111bb)(FString NewValue)|Sets the value of ClientVersion.|
|[FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) &|[GetClientSettings](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1a049d06430b3b160c1fe1c12bdb022115)()|Gets the value of ClientSettings.|
|const [FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) &|[GetClientSettings](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1ad61b06a93f6519bc8daf0e962271aaaf)()|Gets the value of ClientSettings.|
|void|[SetClientSettings](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1a6239a857df63ea661fdc2bf0fc9be7c1)([FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) NewValue)|Sets the value of ClientSettings.|
|[FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) &|[GetCrossplayPreferences](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1a5270de1fe88069255f35d642b3c24fb5)()|Gets the value of CrossplayPreferences_Optional, regardless of it having been set.|
|const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) &|[GetCrossplayPreferences](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1afc75ac3be997c1ddd20daedb38373880)()|Gets the value of CrossplayPreferences_Optional, regardless of it having been set.|
|const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) &|[GetCrossplayPreferences](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1abc2d76686aeabd65ac7fa83b31265b14)(const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) & DefaultValue)|Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCrossplayPreferences](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1a7b571632c5380077f063e86e12b99e04)([FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) & OutValue)|Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) *|[GetCrossplayPreferencesOrNull](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1a0bbc1ad71150e6e9cb70d6b571ee8572)()|Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) *|[GetCrossplayPreferencesOrNull](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1ac8d701cbc79a40d731193d549c9422a8)()|Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCrossplayPreferences](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1aa8fd891f5746724da9336dfb33ee1d37)([FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) NewValue)|Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.|
|void|[ClearCrossplayPreferences](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1a70fc9ee692df502c55225790ebc0e170)()|Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.|
|FString &|[GetSessionType](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1a3d1fcb8709ecab86dbefb5bc15e0d765)()|Gets the value of SessionType.|
|const FString &|[GetSessionType](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1aea1b3469d84d803ca5d0f2b6a53cf934)()|Gets the value of SessionType.|
|void|[SetSessionType](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1a736ae2b7956fa6524b7ef520599986b2)(FString NewValue)|Sets the value of SessionType.|
|FString &|[GetRegionId](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1a4020780ff301c28968911639d01ce274)()|Gets the value of RegionId_Optional, regardless of it having been set.|
|const FString &|[GetRegionId](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1af448083d16ef762dbbd6947e19bfe359)()|Gets the value of RegionId_Optional, regardless of it having been set.|
|const FString &|[GetRegionId](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1a9b95a11bb3a078317bccb2a1ab409829)(const FString & DefaultValue)|Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetRegionId](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1acee32c331957deb3f83530fd545bf1fd)(FString & OutValue)|Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetRegionIdOrNull](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1a2e801541333c59f985192a1b47adb556)()|Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetRegionIdOrNull](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1a938b82f90787dc74a4c9edaaea80ac86)()|Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetRegionId](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1a2d94aadec0efdf5a0085839c34a22790)(FString NewValue)|Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.|
|void|[ClearRegionId](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1a24ad2ef9681bc5fd6c0deef62ba7f281)()|Clears the value of RegionId_Optional and sets RegionId_IsSet to false.|
|[FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) &|[GetPlayer](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1a2bd467f40eb269bf40ce4c49cc902879)()|Gets the value of Player_Optional, regardless of it having been set.|
|const [FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) &|[GetPlayer](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1af5e533dafd22d712d8ee3cd5e8954768)()|Gets the value of Player_Optional, regardless of it having been set.|
|const [FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) &|[GetPlayer](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1a62699c1b92d15d0a9bfbc8b803aad99b)(const [FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) & DefaultValue)|Gets the value of Player_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPlayer](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1a4db162a6eefff961e430395c9fbbee21)([FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) & OutValue)|Fills OutValue with the value of Player_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) *|[GetPlayerOrNull](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1ad905c068915da3cf833297f131c23485)()|Returns a pointer to Player_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) *|[GetPlayerOrNull](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1af1329c668db4e4ad390a92f49b854b8f)()|Returns a pointer to Player_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPlayer](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1aea6bf2b7e381cc0e2d0df3e4ab3ecca5)([FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) NewValue)|Sets the value of Player_Optional and also sets Player_IsSet to true.|
|void|[ClearPlayer](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest_1a3714ab0adfecec9485860c63165f7977)()|Clears the value of Player_Optional and sets Player_IsSet to false.|
## Public Attributes



### `ClientVersion` <a id="structFRHAPI__CreateOrJoinRequest_1a9fe6d696d707ca8e0e5c2713e9a59ee5"></a>

`FString FRHAPI_CreateOrJoinRequest::ClientVersion`

String representation of semver for client.




### `ClientSettings` <a id="structFRHAPI__CreateOrJoinRequest_1aa76e8adb41fd4462a6f96dff90213d2a"></a>

`FRHAPI_ClientSettings FRHAPI_CreateOrJoinRequest::ClientSettings`






### `CrossplayPreferences_Optional` <a id="structFRHAPI__CreateOrJoinRequest_1ae1cf8611b7b6391f7ed46d79ceb0c4fa"></a>

`FRHAPI_CrossplayPreferences FRHAPI_CreateOrJoinRequest::CrossplayPreferences_Optional`






### `CrossplayPreferences_IsSet` <a id="structFRHAPI__CreateOrJoinRequest_1ace0dda09c63eff0066ef37fc2fe66f90"></a>

`bool FRHAPI_CreateOrJoinRequest::CrossplayPreferences_IsSet`

true if CrossplayPreferences_Optional has been set to a value




### `SessionType` <a id="structFRHAPI__CreateOrJoinRequest_1ac2339ba0c03efd01c707b078da845cda"></a>

`FString FRHAPI_CreateOrJoinRequest::SessionType`

Type of session client is creating or joining.




### `RegionId_Optional` <a id="structFRHAPI__CreateOrJoinRequest_1a15cd29f37ee871cba1be3deb9e16f26f"></a>

`FString FRHAPI_CreateOrJoinRequest::RegionId_Optional`

Preferred region for the instance and match to take place in.




### `RegionId_IsSet` <a id="structFRHAPI__CreateOrJoinRequest_1a20aa30896105392bd7a1757c27ef4fb6"></a>

`bool FRHAPI_CreateOrJoinRequest::RegionId_IsSet`

true if RegionId_Optional has been set to a value




### `Player_Optional` <a id="structFRHAPI__CreateOrJoinRequest_1a608e52772ec0d3e177990ac2f34b47bd"></a>

`FRHAPI_SelfSessionPlayerUpdateRequest FRHAPI_CreateOrJoinRequest::Player_Optional`






### `Player_IsSet` <a id="structFRHAPI__CreateOrJoinRequest_1a9ad67a1403586151831ec6d857acfc5d"></a>

`bool FRHAPI_CreateOrJoinRequest::Player_IsSet`

true if Player_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__CreateOrJoinRequest_1a71fde8d392c4f0af6bacef801552c09a"></a>

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



### `WriteJson` <a id="structFRHAPI__CreateOrJoinRequest_1aca697c6ab0cf51cd69a5fb4b99dd0a93"></a>

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



### `GetClientVersion` <a id="structFRHAPI__CreateOrJoinRequest_1a2a0bfde7e47b8be26a9cc2ae4efd4e12"></a>

FString & GetClientVersion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientVersion.




### `GetClientVersion` <a id="structFRHAPI__CreateOrJoinRequest_1a20cc88e65f0c61d0f1add0ff14fbf68f"></a>

const FString & GetClientVersion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientVersion.




### `SetClientVersion` <a id="structFRHAPI__CreateOrJoinRequest_1ada71e3fc5493ee1e5769fb35373111bb"></a>

void SetClientVersion(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of ClientVersion.




### `GetClientSettings` <a id="structFRHAPI__CreateOrJoinRequest_1a049d06430b3b160c1fe1c12bdb022115"></a>

[FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) & GetClientSettings()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientSettings.




### `GetClientSettings` <a id="structFRHAPI__CreateOrJoinRequest_1ad61b06a93f6519bc8daf0e962271aaaf"></a>

const [FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) & GetClientSettings()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientSettings.




### `SetClientSettings` <a id="structFRHAPI__CreateOrJoinRequest_1a6239a857df63ea661fdc2bf0fc9be7c1"></a>

void SetClientSettings([FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings)|NewValue|

#### Description

Sets the value of ClientSettings.




### `GetCrossplayPreferences` <a id="structFRHAPI__CreateOrJoinRequest_1a5270de1fe88069255f35d642b3c24fb5"></a>

[FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) & GetCrossplayPreferences()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.




### `GetCrossplayPreferences` <a id="structFRHAPI__CreateOrJoinRequest_1afc75ac3be997c1ddd20daedb38373880"></a>

const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) & GetCrossplayPreferences()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.




### `GetCrossplayPreferences` <a id="structFRHAPI__CreateOrJoinRequest_1abc2d76686aeabd65ac7fa83b31265b14"></a>

const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) & GetCrossplayPreferences(const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) &|DefaultValue|

#### Description

Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCrossplayPreferences` <a id="structFRHAPI__CreateOrJoinRequest_1a7b571632c5380077f063e86e12b99e04"></a>

bool GetCrossplayPreferences([FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) &|OutValue|

#### Description

Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.




### `GetCrossplayPreferencesOrNull` <a id="structFRHAPI__CreateOrJoinRequest_1a0bbc1ad71150e6e9cb70d6b571ee8572"></a>

[FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) * GetCrossplayPreferencesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.




### `GetCrossplayPreferencesOrNull` <a id="structFRHAPI__CreateOrJoinRequest_1ac8d701cbc79a40d731193d549c9422a8"></a>

const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) * GetCrossplayPreferencesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.




### `SetCrossplayPreferences` <a id="structFRHAPI__CreateOrJoinRequest_1aa8fd891f5746724da9336dfb33ee1d37"></a>

void SetCrossplayPreferences([FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences)|NewValue|

#### Description

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.




### `ClearCrossplayPreferences` <a id="structFRHAPI__CreateOrJoinRequest_1a70fc9ee692df502c55225790ebc0e170"></a>

void ClearCrossplayPreferences()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.




### `GetSessionType` <a id="structFRHAPI__CreateOrJoinRequest_1a3d1fcb8709ecab86dbefb5bc15e0d765"></a>

FString & GetSessionType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SessionType.




### `GetSessionType` <a id="structFRHAPI__CreateOrJoinRequest_1aea1b3469d84d803ca5d0f2b6a53cf934"></a>

const FString & GetSessionType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SessionType.




### `SetSessionType` <a id="structFRHAPI__CreateOrJoinRequest_1a736ae2b7956fa6524b7ef520599986b2"></a>

void SetSessionType(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of SessionType.




### `GetRegionId` <a id="structFRHAPI__CreateOrJoinRequest_1a4020780ff301c28968911639d01ce274"></a>

FString & GetRegionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RegionId_Optional, regardless of it having been set.




### `GetRegionId` <a id="structFRHAPI__CreateOrJoinRequest_1af448083d16ef762dbbd6947e19bfe359"></a>

const FString & GetRegionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RegionId_Optional, regardless of it having been set.




### `GetRegionId` <a id="structFRHAPI__CreateOrJoinRequest_1a9b95a11bb3a078317bccb2a1ab409829"></a>

const FString & GetRegionId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetRegionId` <a id="structFRHAPI__CreateOrJoinRequest_1acee32c331957deb3f83530fd545bf1fd"></a>

bool GetRegionId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.




### `GetRegionIdOrNull` <a id="structFRHAPI__CreateOrJoinRequest_1a2e801541333c59f985192a1b47adb556"></a>

FString * GetRegionIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.




### `GetRegionIdOrNull` <a id="structFRHAPI__CreateOrJoinRequest_1a938b82f90787dc74a4c9edaaea80ac86"></a>

const FString * GetRegionIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.




### `SetRegionId` <a id="structFRHAPI__CreateOrJoinRequest_1a2d94aadec0efdf5a0085839c34a22790"></a>

void SetRegionId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.




### `ClearRegionId` <a id="structFRHAPI__CreateOrJoinRequest_1a24ad2ef9681bc5fd6c0deef62ba7f281"></a>

void ClearRegionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of RegionId_Optional and sets RegionId_IsSet to false.




### `GetPlayer` <a id="structFRHAPI__CreateOrJoinRequest_1a2bd467f40eb269bf40ce4c49cc902879"></a>

[FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) & GetPlayer()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Player_Optional, regardless of it having been set.




### `GetPlayer` <a id="structFRHAPI__CreateOrJoinRequest_1af5e533dafd22d712d8ee3cd5e8954768"></a>

const [FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) & GetPlayer()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Player_Optional, regardless of it having been set.




### `GetPlayer` <a id="structFRHAPI__CreateOrJoinRequest_1a62699c1b92d15d0a9bfbc8b803aad99b"></a>

const [FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) & GetPlayer(const [FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) &|DefaultValue|

#### Description

Gets the value of Player_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPlayer` <a id="structFRHAPI__CreateOrJoinRequest_1a4db162a6eefff961e430395c9fbbee21"></a>

bool GetPlayer([FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) &|OutValue|

#### Description

Fills OutValue with the value of Player_Optional and returns true if it has been set, otherwise returns false.




### `GetPlayerOrNull` <a id="structFRHAPI__CreateOrJoinRequest_1ad905c068915da3cf833297f131c23485"></a>

[FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) * GetPlayerOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Player_Optional, if it has been set, otherwise returns nullptr.




### `GetPlayerOrNull` <a id="structFRHAPI__CreateOrJoinRequest_1af1329c668db4e4ad390a92f49b854b8f"></a>

const [FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) * GetPlayerOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Player_Optional, if it has been set, otherwise returns nullptr.




### `SetPlayer` <a id="structFRHAPI__CreateOrJoinRequest_1aea6bf2b7e381cc0e2d0df3e4ab3ecca5"></a>

void SetPlayer([FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_SelfSessionPlayerUpdateRequest](/unreal-plugins/all/structfrhapi__selfsessionplayerupdaterequest/#structFRHAPI__SelfSessionPlayerUpdateRequest)|NewValue|

#### Description

Sets the value of Player_Optional and also sets Player_IsSet to true.




### `ClearPlayer` <a id="structFRHAPI__CreateOrJoinRequest_1a3714ab0adfecec9485860c63165f7977"></a>

void ClearPlayer()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Player_Optional and sets Player_IsSet to false.





