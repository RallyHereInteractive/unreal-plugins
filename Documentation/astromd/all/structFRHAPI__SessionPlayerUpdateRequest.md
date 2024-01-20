---
title: FRHAPI_SessionPlayerUpdateRequest Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A request body to update information about a player in a session.

## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_SessionPlayerStatus|[Status_Optional](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1acf48279847beabc2877dcbdd6cd6267c)|Status that the player would like after the request is complete. Note that some join operations may promote the player from member to leader|
|bool|[Status_IsSet](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1ad1f3f4cc4681b79dee1b512dc42e02eb)|true if Status_Optional has been set to a value|
|int32|[TeamId](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1aa56a7eab4923715500aefa8b8fbb941b)|Which team the player should be on.|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1a5413846e2f8ff07b8a34f6483807cadc)|player-defined custom data|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1a29f9f54c835b137b0f22c711cf8229bf)|true if CustomData_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1a062c4404f35a61d1b96ab4d8c9d2608b)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1afe7828080f27d4a6c72ac936f20ae699)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_SessionPlayerStatus &|[GetStatus](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1aad26eb338b12e2665a1b14ef80a7c3fc)()|Gets the value of Status_Optional, regardless of it having been set.|
|const ERHAPI_SessionPlayerStatus &|[GetStatus](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1a0634b3e083214595f06ac6ba03339f56)()|Gets the value of Status_Optional, regardless of it having been set.|
|const ERHAPI_SessionPlayerStatus &|[GetStatus](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1ac3c39822fc28947bab460264144803b6)(const ERHAPI_SessionPlayerStatus & DefaultValue)|Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetStatus](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1ae985bb8e870e3f09268128729abd5507)(ERHAPI_SessionPlayerStatus & OutValue)|Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_SessionPlayerStatus *|[GetStatusOrNull](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1a0c94c9335edd53644ff904f76602f05c)()|Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_SessionPlayerStatus *|[GetStatusOrNull](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1a710af1527fabcd4c31c3c136d2dfc4bc)()|Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetStatus](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1af541180816bd2c7271e0daab51d8d5b3)(ERHAPI_SessionPlayerStatus NewValue)|Sets the value of Status_Optional and also sets Status_IsSet to true.|
|void|[ClearStatus](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1a2905381b74dd71938e896ad9059c01ea)()|Clears the value of Status_Optional and sets Status_IsSet to false.|
|int32 &|[GetTeamId](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1af5f5ab7680382d4eb1c597f462b2ef44)()|Gets the value of TeamId.|
|const int32 &|[GetTeamId](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1a81db9ded16d246cd9fb997809ec54ff6)()|Gets the value of TeamId.|
|void|[SetTeamId](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1a33b9433646403e228f4afb04e4eff6ff)(int32 NewValue)|Sets the value of TeamId.|
|bool|[IsTeamIdDefaultValue](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1a00cd4d137a38bad4d7cedb426c9618ea)()|Returns true if TeamId matches the default value.|
|void|[SetTeamIdToDefault](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1a673d1ada9ca1f883dcee26c27c355d30)()|Sets the value of TeamId to its default|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1a2914913c10dab532c2d5f9b2f6795e4c)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1a2cde4401d015b69b2690940cea59d2a1)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1ab46455cf7cf7bac8cb0fb7dfba519588)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1a56c8023c8f38a15829a7a580fb7eea29)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1a8a2b6c950cbbb0c652c4696dcacf65e3)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1a0ddbe103d6085af6264d144d2b378216)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1a17ffb5766ae78cf4899c253af52c44cc)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__sessionplayerupdaterequest/#structFRHAPI__SessionPlayerUpdateRequest_1a90415b775835034b0bb2f6e8e7f98426)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
## Public Attributes



### `Status_Optional` <a id="structFRHAPI__SessionPlayerUpdateRequest_1acf48279847beabc2877dcbdd6cd6267c"></a>

`ERHAPI_SessionPlayerStatus FRHAPI_SessionPlayerUpdateRequest::Status_Optional`

Status that the player would like after the request is complete. Note that some join operations may promote the player from member to leader




### `Status_IsSet` <a id="structFRHAPI__SessionPlayerUpdateRequest_1ad1f3f4cc4681b79dee1b512dc42e02eb"></a>

`bool FRHAPI_SessionPlayerUpdateRequest::Status_IsSet`

true if Status_Optional has been set to a value




### `TeamId` <a id="structFRHAPI__SessionPlayerUpdateRequest_1aa56a7eab4923715500aefa8b8fbb941b"></a>

`int32 FRHAPI_SessionPlayerUpdateRequest::TeamId`

Which team the player should be on.




### `CustomData_Optional` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a5413846e2f8ff07b8a34f6483807cadc"></a>

`TMap<FString, FString> FRHAPI_SessionPlayerUpdateRequest::CustomData_Optional`

player-defined custom data




### `CustomData_IsSet` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a29f9f54c835b137b0f22c711cf8229bf"></a>

`bool FRHAPI_SessionPlayerUpdateRequest::CustomData_IsSet`

true if CustomData_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a062c4404f35a61d1b96ab4d8c9d2608b"></a>

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



### `WriteJson` <a id="structFRHAPI__SessionPlayerUpdateRequest_1afe7828080f27d4a6c72ac936f20ae699"></a>

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



### `GetStatus` <a id="structFRHAPI__SessionPlayerUpdateRequest_1aad26eb338b12e2665a1b14ef80a7c3fc"></a>

ERHAPI_SessionPlayerStatus & GetStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Status_Optional, regardless of it having been set.




### `GetStatus` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a0634b3e083214595f06ac6ba03339f56"></a>

const ERHAPI_SessionPlayerStatus & GetStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Status_Optional, regardless of it having been set.




### `GetStatus` <a id="structFRHAPI__SessionPlayerUpdateRequest_1ac3c39822fc28947bab460264144803b6"></a>

const ERHAPI_SessionPlayerStatus & GetStatus(const ERHAPI_SessionPlayerStatus & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_SessionPlayerStatus &|DefaultValue|

#### Description

Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetStatus` <a id="structFRHAPI__SessionPlayerUpdateRequest_1ae985bb8e870e3f09268128729abd5507"></a>

bool GetStatus(ERHAPI_SessionPlayerStatus & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_SessionPlayerStatus &|OutValue|

#### Description

Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.




### `GetStatusOrNull` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a0c94c9335edd53644ff904f76602f05c"></a>

ERHAPI_SessionPlayerStatus * GetStatusOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.




### `GetStatusOrNull` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a710af1527fabcd4c31c3c136d2dfc4bc"></a>

const ERHAPI_SessionPlayerStatus * GetStatusOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.




### `SetStatus` <a id="structFRHAPI__SessionPlayerUpdateRequest_1af541180816bd2c7271e0daab51d8d5b3"></a>

void SetStatus(ERHAPI_SessionPlayerStatus NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_SessionPlayerStatus|NewValue|

#### Description

Sets the value of Status_Optional and also sets Status_IsSet to true.




### `ClearStatus` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a2905381b74dd71938e896ad9059c01ea"></a>

void ClearStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Status_Optional and sets Status_IsSet to false.




### `GetTeamId` <a id="structFRHAPI__SessionPlayerUpdateRequest_1af5f5ab7680382d4eb1c597f462b2ef44"></a>

int32 & GetTeamId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TeamId.




### `GetTeamId` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a81db9ded16d246cd9fb997809ec54ff6"></a>

const int32 & GetTeamId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TeamId.




### `SetTeamId` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a33b9433646403e228f4afb04e4eff6ff"></a>

void SetTeamId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of TeamId.




### `IsTeamIdDefaultValue` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a00cd4d137a38bad4d7cedb426c9618ea"></a>

bool IsTeamIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if TeamId matches the default value.




### `SetTeamIdToDefault` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a673d1ada9ca1f883dcee26c27c355d30"></a>

void SetTeamIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of TeamId to its default




### `GetCustomData` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a2914913c10dab532c2d5f9b2f6795e4c"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a2cde4401d015b69b2690940cea59d2a1"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__SessionPlayerUpdateRequest_1ab46455cf7cf7bac8cb0fb7dfba519588"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a56c8023c8f38a15829a7a580fb7eea29"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a8a2b6c950cbbb0c652c4696dcacf65e3"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a0ddbe103d6085af6264d144d2b378216"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a17ffb5766ae78cf4899c253af52c44cc"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a90415b775835034b0bb2f6e8e7f98426"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.





