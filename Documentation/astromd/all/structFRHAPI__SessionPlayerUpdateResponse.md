---
title: FRHAPI_SessionPlayerUpdateResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Response to a request to update a player in a session.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FGuid|[PlayerUuid_Optional](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1ad1366b614ec9bcf8718329a3f2305f20)|Player UUID of the player updated.|
|bool|[PlayerUuid_IsSet](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1a8cc5d4083ba7b6e109795fca95e78763)|true if PlayerUuid_Optional has been set to a value|
|ERHAPI_SessionPlayerStatus|[Status](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1abcd84269dc5a15a9147263b018f3bd76)|Status of the player after the request is completed.|
|int32|[TeamId](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1a7e5d666f5988f2203a73e25f8b033134)|Which team the player joined.|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1aacc41614b0df8f8f891da6dbd72693d1)|Resulting custom data about the player.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1a0fcb6944466793eba1437f99d0d838f1)|true if CustomData_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1a022836b19e964a142c582bedf3029335)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1aa3d1846e019c5cb83d6b70a2a5e9eefd)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1aaac919243d1c9ffb72862b00505d5f60)()|Gets the value of PlayerUuid_Optional, regardless of it having been set.|
|const FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1a20d830a862dbaff5968b506e31b6f17e)()|Gets the value of PlayerUuid_Optional, regardless of it having been set.|
|const FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1ac10947100065d2b36e59e0e3d2b9b29e)(const FGuid & DefaultValue)|Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1ad961afa4053273c8cc1ce9445e51e99e)(FGuid & OutValue)|Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.|
|FGuid *|[GetPlayerUuidOrNull](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1a96ec4e1ed8869cba97a21d1ed45acde8)()|Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.|
|const FGuid *|[GetPlayerUuidOrNull](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1a64bfe7770df37062af18bfddd53f31c1)()|Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPlayerUuid](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1aaff406779207c4bc8138e3b9a98903b7)(FGuid NewValue)|Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.|
|void|[ClearPlayerUuid](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1a755f14ea84c27f433407c6bdb38e1d83)()|Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.|
|ERHAPI_SessionPlayerStatus &|[GetStatus](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1a148c72bdfa8dbd8814a12b1ded135818)()|Gets the value of Status.|
|const ERHAPI_SessionPlayerStatus &|[GetStatus](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1abbe6baee678c48f03f8d0fe9fb355231)()|Gets the value of Status.|
|void|[SetStatus](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1a4fc96450ff368d273556f7f3ba07c6d0)(ERHAPI_SessionPlayerStatus NewValue)|Sets the value of Status.|
|int32 &|[GetTeamId](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1ae2faf9ab39ec0885585ff09ce62498a8)()|Gets the value of TeamId.|
|const int32 &|[GetTeamId](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1a03837704e2df17be8a245f5d0f03b4c0)()|Gets the value of TeamId.|
|void|[SetTeamId](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1a8336ddef479a51c8984c49e1e488348c)(int32 NewValue)|Sets the value of TeamId.|
|bool|[IsTeamIdDefaultValue](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1ae881dcd5ab62fc5c93009d42f7cda798)()|Returns true if TeamId matches the default value.|
|void|[SetTeamIdToDefault](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1a29d5973e331400fbf99867e75eb17559)()|Sets the value of TeamId to its default|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1a6d03d4c0b59ea29869585bd1378be57a)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1a19049555c141f4a5220d8eb8db9844c1)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1a7835e64a4ddcad5aa198a4d58eb3fed1)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1a5f65f6d2f18ec9002e919ff06eb79a39)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1a85d8c54cbd36f245d2e8e847f2c11638)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1a28f2e305c419c746e63877fd476d4249)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1a2ff7004bde77929d76718821735ee5cb)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse_1a10c6e7f878de0a38058d2d3cf42b90dc)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
## Public Attributes



### `PlayerUuid_Optional` <a id="structFRHAPI__SessionPlayerUpdateResponse_1ad1366b614ec9bcf8718329a3f2305f20"></a>

`FGuid FRHAPI_SessionPlayerUpdateResponse::PlayerUuid_Optional`

Player UUID of the player updated.




### `PlayerUuid_IsSet` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a8cc5d4083ba7b6e109795fca95e78763"></a>

`bool FRHAPI_SessionPlayerUpdateResponse::PlayerUuid_IsSet`

true if PlayerUuid_Optional has been set to a value




### `Status` <a id="structFRHAPI__SessionPlayerUpdateResponse_1abcd84269dc5a15a9147263b018f3bd76"></a>

`ERHAPI_SessionPlayerStatus FRHAPI_SessionPlayerUpdateResponse::Status`

Status of the player after the request is completed.




### `TeamId` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a7e5d666f5988f2203a73e25f8b033134"></a>

`int32 FRHAPI_SessionPlayerUpdateResponse::TeamId`

Which team the player joined.




### `CustomData_Optional` <a id="structFRHAPI__SessionPlayerUpdateResponse_1aacc41614b0df8f8f891da6dbd72693d1"></a>

`TMap<FString, FString> FRHAPI_SessionPlayerUpdateResponse::CustomData_Optional`

Resulting custom data about the player.




### `CustomData_IsSet` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a0fcb6944466793eba1437f99d0d838f1"></a>

`bool FRHAPI_SessionPlayerUpdateResponse::CustomData_IsSet`

true if CustomData_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a022836b19e964a142c582bedf3029335"></a>

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



### `WriteJson` <a id="structFRHAPI__SessionPlayerUpdateResponse_1aa3d1846e019c5cb83d6b70a2a5e9eefd"></a>

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



### `GetPlayerUuid` <a id="structFRHAPI__SessionPlayerUpdateResponse_1aaac919243d1c9ffb72862b00505d5f60"></a>

FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid_Optional, regardless of it having been set.




### `GetPlayerUuid` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a20d830a862dbaff5968b506e31b6f17e"></a>

const FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid_Optional, regardless of it having been set.




### `GetPlayerUuid` <a id="structFRHAPI__SessionPlayerUpdateResponse_1ac10947100065d2b36e59e0e3d2b9b29e"></a>

const FGuid & GetPlayerUuid(const FGuid & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|DefaultValue|

#### Description

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPlayerUuid` <a id="structFRHAPI__SessionPlayerUpdateResponse_1ad961afa4053273c8cc1ce9445e51e99e"></a>

bool GetPlayerUuid(FGuid & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid &|OutValue|

#### Description

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.




### `GetPlayerUuidOrNull` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a96ec4e1ed8869cba97a21d1ed45acde8"></a>

FGuid * GetPlayerUuidOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.




### `GetPlayerUuidOrNull` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a64bfe7770df37062af18bfddd53f31c1"></a>

const FGuid * GetPlayerUuidOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.




### `SetPlayerUuid` <a id="structFRHAPI__SessionPlayerUpdateResponse_1aaff406779207c4bc8138e3b9a98903b7"></a>

void SetPlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.




### `ClearPlayerUuid` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a755f14ea84c27f433407c6bdb38e1d83"></a>

void ClearPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.




### `GetStatus` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a148c72bdfa8dbd8814a12b1ded135818"></a>

ERHAPI_SessionPlayerStatus & GetStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Status.




### `GetStatus` <a id="structFRHAPI__SessionPlayerUpdateResponse_1abbe6baee678c48f03f8d0fe9fb355231"></a>

const ERHAPI_SessionPlayerStatus & GetStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Status.




### `SetStatus` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a4fc96450ff368d273556f7f3ba07c6d0"></a>

void SetStatus(ERHAPI_SessionPlayerStatus NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_SessionPlayerStatus|NewValue|

#### Description

Sets the value of Status.




### `GetTeamId` <a id="structFRHAPI__SessionPlayerUpdateResponse_1ae2faf9ab39ec0885585ff09ce62498a8"></a>

int32 & GetTeamId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TeamId.




### `GetTeamId` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a03837704e2df17be8a245f5d0f03b4c0"></a>

const int32 & GetTeamId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TeamId.




### `SetTeamId` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a8336ddef479a51c8984c49e1e488348c"></a>

void SetTeamId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of TeamId.




### `IsTeamIdDefaultValue` <a id="structFRHAPI__SessionPlayerUpdateResponse_1ae881dcd5ab62fc5c93009d42f7cda798"></a>

bool IsTeamIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if TeamId matches the default value.




### `SetTeamIdToDefault` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a29d5973e331400fbf99867e75eb17559"></a>

void SetTeamIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of TeamId to its default




### `GetCustomData` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a6d03d4c0b59ea29869585bd1378be57a"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a19049555c141f4a5220d8eb8db9844c1"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a7835e64a4ddcad5aa198a4d58eb3fed1"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a5f65f6d2f18ec9002e919ff06eb79a39"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a85d8c54cbd36f245d2e8e847f2c11638"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a28f2e305c419c746e63877fd476d4249"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a2ff7004bde77929d76718821735ee5cb"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__SessionPlayerUpdateResponse_1a10c6e7f878de0a38058d2d3cf42b90dc"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.





