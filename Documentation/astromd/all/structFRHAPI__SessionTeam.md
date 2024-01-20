---
title: FRHAPI_SessionTeam Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A team of SessionPlayers in a session.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) >|[Players](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam_1a5b51da5e82a822358321d315683a5cdd)|Players currently on this team.|
|int32|[MaxSize](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam_1a577fd2257686ecc6dc4c46a9405511e8)|Maximum number of players allowed on this team.|
|int32|[TeamId_Optional](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam_1ab5fa3e595f1d211138a8e632dcb0334a)|Which team this is.|
|bool|[TeamId_IsSet](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam_1ae4c4a101fbe2d983f2bf0f949c0ce907)|true if TeamId_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam_1aabef716c3bdd58b733abaa4c5d57f078)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam_1a3df39da3770789446f398baa65d8e27c)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) > &|[GetPlayers](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam_1acdfcc94db5681eaf5fa045432c588573)()|Gets the value of Players.|
|const TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) > &|[GetPlayers](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam_1acb0cd7ba92352cd5b4ae7ca0314f671d)()|Gets the value of Players.|
|void|[SetPlayers](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam_1af97c4d69d4fb1bec131b01fc63dd2109)(TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) > NewValue)|Sets the value of Players.|
|int32 &|[GetMaxSize](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam_1a71ff5d7af75e48520e8f47b8aacbe947)()|Gets the value of MaxSize.|
|const int32 &|[GetMaxSize](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam_1a75da68e7263658fc93a73ac56c2259f3)()|Gets the value of MaxSize.|
|void|[SetMaxSize](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam_1afa8d647fe0f4d5aea5bcf0b871183736)(int32 NewValue)|Sets the value of MaxSize.|
|bool|[IsMaxSizeDefaultValue](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam_1a72083742a8721aff02330441cadd3ffc)()|Returns true if MaxSize matches the default value.|
|void|[SetMaxSizeToDefault](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam_1a7f2f5050523291724e4828ee7e2ea124)()|Sets the value of MaxSize to its default|
|int32 &|[GetTeamId](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam_1a132bf71fafe46213fc1b3db6fd3b48c5)()|Gets the value of TeamId_Optional, regardless of it having been set.|
|const int32 &|[GetTeamId](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam_1abfa3e35e16044b51fba75efbcd668b22)()|Gets the value of TeamId_Optional, regardless of it having been set.|
|const int32 &|[GetTeamId](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam_1a7cc916b8119b3b14160c09f7433345af)(const int32 & DefaultValue)|Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetTeamId](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam_1a1598611301d6e329811a267ca9ee0207)(int32 & OutValue)|Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetTeamIdOrNull](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam_1ad922c55d5071391ab3ce1fabea0cd485)()|Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetTeamIdOrNull](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam_1a7564274f77f03d6cb1a09c64e28ff043)()|Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetTeamId](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam_1aa050577a2c1ac2e4dd5d3e6be5f96792)(int32 NewValue)|Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.|
|void|[ClearTeamId](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam_1ad51e3f0df9a45dd7997055829e7d6dc9)()|Clears the value of TeamId_Optional and sets TeamId_IsSet to false.|
|bool|[IsTeamIdDefaultValue](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam_1aaa6ae7a43161fbdcbd2e18749910e3f7)()|Returns true if TeamId_Optional is set and matches the default value.|
|void|[SetTeamIdToDefault](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam_1a95018efc1589857239b3f7e5f4cb6722)()|Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.|
## Public Attributes



### `Players` <a id="structFRHAPI__SessionTeam_1a5b51da5e82a822358321d315683a5cdd"></a>

`TArray<FRHAPI_SessionPlayer> FRHAPI_SessionTeam::Players`

Players currently on this team.




### `MaxSize` <a id="structFRHAPI__SessionTeam_1a577fd2257686ecc6dc4c46a9405511e8"></a>

`int32 FRHAPI_SessionTeam::MaxSize`

Maximum number of players allowed on this team.




### `TeamId_Optional` <a id="structFRHAPI__SessionTeam_1ab5fa3e595f1d211138a8e632dcb0334a"></a>

`int32 FRHAPI_SessionTeam::TeamId_Optional`

Which team this is.




### `TeamId_IsSet` <a id="structFRHAPI__SessionTeam_1ae4c4a101fbe2d983f2bf0f949c0ce907"></a>

`bool FRHAPI_SessionTeam::TeamId_IsSet`

true if TeamId_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__SessionTeam_1aabef716c3bdd58b733abaa4c5d57f078"></a>

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



### `WriteJson` <a id="structFRHAPI__SessionTeam_1a3df39da3770789446f398baa65d8e27c"></a>

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



### `GetPlayers` <a id="structFRHAPI__SessionTeam_1acdfcc94db5681eaf5fa045432c588573"></a>

TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) > & GetPlayers()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Players.




### `GetPlayers` <a id="structFRHAPI__SessionTeam_1acb0cd7ba92352cd5b4ae7ca0314f671d"></a>

const TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) > & GetPlayers()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Players.




### `SetPlayers` <a id="structFRHAPI__SessionTeam_1af97c4d69d4fb1bec131b01fc63dd2109"></a>

void SetPlayers(TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) >|NewValue|

#### Description

Sets the value of Players.




### `GetMaxSize` <a id="structFRHAPI__SessionTeam_1a71ff5d7af75e48520e8f47b8aacbe947"></a>

int32 & GetMaxSize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MaxSize.




### `GetMaxSize` <a id="structFRHAPI__SessionTeam_1a75da68e7263658fc93a73ac56c2259f3"></a>

const int32 & GetMaxSize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MaxSize.




### `SetMaxSize` <a id="structFRHAPI__SessionTeam_1afa8d647fe0f4d5aea5bcf0b871183736"></a>

void SetMaxSize(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of MaxSize.




### `IsMaxSizeDefaultValue` <a id="structFRHAPI__SessionTeam_1a72083742a8721aff02330441cadd3ffc"></a>

bool IsMaxSizeDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if MaxSize matches the default value.




### `SetMaxSizeToDefault` <a id="structFRHAPI__SessionTeam_1a7f2f5050523291724e4828ee7e2ea124"></a>

void SetMaxSizeToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of MaxSize to its default




### `GetTeamId` <a id="structFRHAPI__SessionTeam_1a132bf71fafe46213fc1b3db6fd3b48c5"></a>

int32 & GetTeamId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TeamId_Optional, regardless of it having been set.




### `GetTeamId` <a id="structFRHAPI__SessionTeam_1abfa3e35e16044b51fba75efbcd668b22"></a>

const int32 & GetTeamId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TeamId_Optional, regardless of it having been set.




### `GetTeamId` <a id="structFRHAPI__SessionTeam_1a7cc916b8119b3b14160c09f7433345af"></a>

const int32 & GetTeamId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetTeamId` <a id="structFRHAPI__SessionTeam_1a1598611301d6e329811a267ca9ee0207"></a>

bool GetTeamId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.




### `GetTeamIdOrNull` <a id="structFRHAPI__SessionTeam_1ad922c55d5071391ab3ce1fabea0cd485"></a>

int32 * GetTeamIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.




### `GetTeamIdOrNull` <a id="structFRHAPI__SessionTeam_1a7564274f77f03d6cb1a09c64e28ff043"></a>

const int32 * GetTeamIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.




### `SetTeamId` <a id="structFRHAPI__SessionTeam_1aa050577a2c1ac2e4dd5d3e6be5f96792"></a>

void SetTeamId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.




### `ClearTeamId` <a id="structFRHAPI__SessionTeam_1ad51e3f0df9a45dd7997055829e7d6dc9"></a>

void ClearTeamId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.




### `IsTeamIdDefaultValue` <a id="structFRHAPI__SessionTeam_1aaa6ae7a43161fbdcbd2e18749910e3f7"></a>

bool IsTeamIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if TeamId_Optional is set and matches the default value.




### `SetTeamIdToDefault` <a id="structFRHAPI__SessionTeam_1a95018efc1589857239b3f7e5f4cb6722"></a>

void SetTeamIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.





