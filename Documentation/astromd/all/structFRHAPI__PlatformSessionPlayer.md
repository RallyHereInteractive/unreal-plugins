---
title: FRHAPI_PlatformSessionPlayer Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A platform player resource in a platform session.

## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[PlayerId_Optional](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1aa583360e52aae06e68cc240b4828b1c6)|Player ID representing the current player.|
|bool|[PlayerId_IsSet](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1a62a5cfdf5b5495549d4bf02f9eac0088)|true if PlayerId_Optional has been set to a value|
|FGuid|[PlayerUuid](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1a1308c9d9ac539eda9d6a4e1ea013e7c1)|Player UUID representing the current player.|
|bool|[Leader_Optional](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1af25bb552fada49ae3759e7bc473d6fb0)|Is this player the leader of the platform session? When setting up the parent session, if all players are from the same platform session, leadership is coordinated.|
|bool|[Leader_IsSet](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1a5ffe9e5e4a236e96fb0ad853b7c6a1bb)|true if Leader_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1ac306dece915d61efa007448f63f2db02)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1a363682afb881c387cb9871db8d80ac2a)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|int32 &|[GetPlayerId](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1ab97a96298dd08e0de097eae8912434d6)()|Gets the value of PlayerId_Optional, regardless of it having been set.|
|const int32 &|[GetPlayerId](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1a3d0d01fcee6c5ef7a029a9c0c2e8ed2d)()|Gets the value of PlayerId_Optional, regardless of it having been set.|
|const int32 &|[GetPlayerId](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1a686f9f2d357e9ace50e724a1d606d97a)(const int32 & DefaultValue)|Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPlayerId](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1a9e06a0931f56b5b4fa046d3468310795)(int32 & OutValue)|Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetPlayerIdOrNull](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1ab6a0f0ea8aabc882fc517492047566f4)()|Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetPlayerIdOrNull](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1a5a87c3a7ee80e97518b8d2994f634bd5)()|Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPlayerId](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1a0f77291dac4e3ac36c15299c6c94dc69)(int32 NewValue)|Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.|
|void|[ClearPlayerId](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1ad90bf8e5f5568848bd0e4387377c39aa)()|Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.|
|bool|[IsPlayerIdDefaultValue](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1aeab3f493aea47825d306eb7fc0d34a0b)()|Returns true if PlayerId_Optional is set and matches the default value.|
|void|[SetPlayerIdToDefault](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1a061c54f1a70a22fb0043bce4d70d2b6c)()|Sets the value of PlayerId_Optional to its default and also sets PlayerId_IsSet to true.|
|FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1af89400cb11d1ee66cc086e93d342bcfc)()|Gets the value of PlayerUuid.|
|const FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1a4ded60d33bfd83e2611caf5ca1f33e60)()|Gets the value of PlayerUuid.|
|void|[SetPlayerUuid](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1a1f656876075eb9cc3cce297ea8f80a63)(FGuid NewValue)|Sets the value of PlayerUuid.|
|bool &|[GetLeader](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1acefa4678c8e6e3c46363a9dbbdc775bb)()|Gets the value of Leader_Optional, regardless of it having been set.|
|const bool &|[GetLeader](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1aa5e6566ab95802764e8bf924ddf09d8c)()|Gets the value of Leader_Optional, regardless of it having been set.|
|const bool &|[GetLeader](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1a13512aeb7ff61302432ef6951e625a0a)(const bool & DefaultValue)|Gets the value of Leader_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetLeader](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1a223d97927d19ac63603b8eb879a33e55)(bool & OutValue)|Fills OutValue with the value of Leader_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetLeaderOrNull](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1a74ac0590dc01605b8fcfc942cea9716f)()|Returns a pointer to Leader_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetLeaderOrNull](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1aa9deb6f2fb4669728e44d1a8e6cff336)()|Returns a pointer to Leader_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetLeader](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1ae81ebdf7f552e039bc2fb7b6db031fe4)(bool NewValue)|Sets the value of Leader_Optional and also sets Leader_IsSet to true.|
|void|[ClearLeader](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1a58f11cfb82926d116f78ba252050150e)()|Clears the value of Leader_Optional and sets Leader_IsSet to false.|
|bool|[IsLeaderDefaultValue](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1a3b18105fa390a5974fc04aad4472abad)()|Returns true if Leader_Optional is set and matches the default value.|
|void|[SetLeaderToDefault](/unreal-plugins/all/structfrhapi__platformsessionplayer/#structFRHAPI__PlatformSessionPlayer_1a8d7d302ebb8566e204633630192a6a74)()|Sets the value of Leader_Optional to its default and also sets Leader_IsSet to true.|
## Public Attributes



### `PlayerId_Optional` <a id="structFRHAPI__PlatformSessionPlayer_1aa583360e52aae06e68cc240b4828b1c6"></a>

`int32 FRHAPI_PlatformSessionPlayer::PlayerId_Optional`

Player ID representing the current player.




### `PlayerId_IsSet` <a id="structFRHAPI__PlatformSessionPlayer_1a62a5cfdf5b5495549d4bf02f9eac0088"></a>

`bool FRHAPI_PlatformSessionPlayer::PlayerId_IsSet`

true if PlayerId_Optional has been set to a value




### `PlayerUuid` <a id="structFRHAPI__PlatformSessionPlayer_1a1308c9d9ac539eda9d6a4e1ea013e7c1"></a>

`FGuid FRHAPI_PlatformSessionPlayer::PlayerUuid`

Player UUID representing the current player.




### `Leader_Optional` <a id="structFRHAPI__PlatformSessionPlayer_1af25bb552fada49ae3759e7bc473d6fb0"></a>

`bool FRHAPI_PlatformSessionPlayer::Leader_Optional`

Is this player the leader of the platform session? When setting up the parent session, if all players are from the same platform session, leadership is coordinated.




### `Leader_IsSet` <a id="structFRHAPI__PlatformSessionPlayer_1a5ffe9e5e4a236e96fb0ad853b7c6a1bb"></a>

`bool FRHAPI_PlatformSessionPlayer::Leader_IsSet`

true if Leader_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PlatformSessionPlayer_1ac306dece915d61efa007448f63f2db02"></a>

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



### `WriteJson` <a id="structFRHAPI__PlatformSessionPlayer_1a363682afb881c387cb9871db8d80ac2a"></a>

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



### `GetPlayerId` <a id="structFRHAPI__PlatformSessionPlayer_1ab97a96298dd08e0de097eae8912434d6"></a>

int32 & GetPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerId_Optional, regardless of it having been set.




### `GetPlayerId` <a id="structFRHAPI__PlatformSessionPlayer_1a3d0d01fcee6c5ef7a029a9c0c2e8ed2d"></a>

const int32 & GetPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerId_Optional, regardless of it having been set.




### `GetPlayerId` <a id="structFRHAPI__PlatformSessionPlayer_1a686f9f2d357e9ace50e724a1d606d97a"></a>

const int32 & GetPlayerId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPlayerId` <a id="structFRHAPI__PlatformSessionPlayer_1a9e06a0931f56b5b4fa046d3468310795"></a>

bool GetPlayerId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.




### `GetPlayerIdOrNull` <a id="structFRHAPI__PlatformSessionPlayer_1ab6a0f0ea8aabc882fc517492047566f4"></a>

int32 * GetPlayerIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.




### `GetPlayerIdOrNull` <a id="structFRHAPI__PlatformSessionPlayer_1a5a87c3a7ee80e97518b8d2994f634bd5"></a>

const int32 * GetPlayerIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.




### `SetPlayerId` <a id="structFRHAPI__PlatformSessionPlayer_1a0f77291dac4e3ac36c15299c6c94dc69"></a>

void SetPlayerId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.




### `ClearPlayerId` <a id="structFRHAPI__PlatformSessionPlayer_1ad90bf8e5f5568848bd0e4387377c39aa"></a>

void ClearPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.




### `IsPlayerIdDefaultValue` <a id="structFRHAPI__PlatformSessionPlayer_1aeab3f493aea47825d306eb7fc0d34a0b"></a>

bool IsPlayerIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if PlayerId_Optional is set and matches the default value.




### `SetPlayerIdToDefault` <a id="structFRHAPI__PlatformSessionPlayer_1a061c54f1a70a22fb0043bce4d70d2b6c"></a>

void SetPlayerIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of PlayerId_Optional to its default and also sets PlayerId_IsSet to true.




### `GetPlayerUuid` <a id="structFRHAPI__PlatformSessionPlayer_1af89400cb11d1ee66cc086e93d342bcfc"></a>

FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `GetPlayerUuid` <a id="structFRHAPI__PlatformSessionPlayer_1a4ded60d33bfd83e2611caf5ca1f33e60"></a>

const FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `SetPlayerUuid` <a id="structFRHAPI__PlatformSessionPlayer_1a1f656876075eb9cc3cce297ea8f80a63"></a>

void SetPlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of PlayerUuid.




### `GetLeader` <a id="structFRHAPI__PlatformSessionPlayer_1acefa4678c8e6e3c46363a9dbbdc775bb"></a>

bool & GetLeader()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Leader_Optional, regardless of it having been set.




### `GetLeader` <a id="structFRHAPI__PlatformSessionPlayer_1aa5e6566ab95802764e8bf924ddf09d8c"></a>

const bool & GetLeader()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Leader_Optional, regardless of it having been set.




### `GetLeader` <a id="structFRHAPI__PlatformSessionPlayer_1a13512aeb7ff61302432ef6951e625a0a"></a>

const bool & GetLeader(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of Leader_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetLeader` <a id="structFRHAPI__PlatformSessionPlayer_1a223d97927d19ac63603b8eb879a33e55"></a>

bool GetLeader(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of Leader_Optional and returns true if it has been set, otherwise returns false.




### `GetLeaderOrNull` <a id="structFRHAPI__PlatformSessionPlayer_1a74ac0590dc01605b8fcfc942cea9716f"></a>

bool * GetLeaderOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Leader_Optional, if it has been set, otherwise returns nullptr.




### `GetLeaderOrNull` <a id="structFRHAPI__PlatformSessionPlayer_1aa9deb6f2fb4669728e44d1a8e6cff336"></a>

const bool * GetLeaderOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Leader_Optional, if it has been set, otherwise returns nullptr.




### `SetLeader` <a id="structFRHAPI__PlatformSessionPlayer_1ae81ebdf7f552e039bc2fb7b6db031fe4"></a>

void SetLeader(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of Leader_Optional and also sets Leader_IsSet to true.




### `ClearLeader` <a id="structFRHAPI__PlatformSessionPlayer_1a58f11cfb82926d116f78ba252050150e"></a>

void ClearLeader()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Leader_Optional and sets Leader_IsSet to false.




### `IsLeaderDefaultValue` <a id="structFRHAPI__PlatformSessionPlayer_1a3b18105fa390a5974fc04aad4472abad"></a>

bool IsLeaderDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Leader_Optional is set and matches the default value.




### `SetLeaderToDefault` <a id="structFRHAPI__PlatformSessionPlayer_1a8d7d302ebb8566e204633630192a6a74"></a>

void SetLeaderToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Leader_Optional to its default and also sets Leader_IsSet to true.





