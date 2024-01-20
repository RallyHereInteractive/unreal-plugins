---
title: FRHAPI_TrueskillTeam Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

One team of players from a match along with their placement in the match, and previous trueskill data about all of the players.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_TrueskillRank](/unreal-plugins/all/structfrhapi__trueskillrank/#structFRHAPI__TrueskillRank) >|[Players](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam_1a07f2662b362485fede252e790e1b484c)|List of PlayerRankUpdate objects that give stats about a specific player from the match.|
|int32|[TeamRank](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam_1a9d74dfaf90a7d4d35829cd5b34acac4a)|What rank this team came in. 1 indicates victory, and higher values are placements. Matching ranks indicate draws.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam_1aa4d84ecca6e7ba0337266e9926a58749)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam_1a873135cdbc3376a3a12bc4748bcde778)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_TrueskillRank](/unreal-plugins/all/structfrhapi__trueskillrank/#structFRHAPI__TrueskillRank) > &|[GetPlayers](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam_1a31dc120479a92c111db1833d8c04bc7a)()|Gets the value of Players.|
|const TArray< [FRHAPI_TrueskillRank](/unreal-plugins/all/structfrhapi__trueskillrank/#structFRHAPI__TrueskillRank) > &|[GetPlayers](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam_1a8f2867fd7e29b848ff92f267bb5c52c3)()|Gets the value of Players.|
|void|[SetPlayers](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam_1aed4ed9e04f8431ff319ae7aa801ba44b)(TArray< [FRHAPI_TrueskillRank](/unreal-plugins/all/structfrhapi__trueskillrank/#structFRHAPI__TrueskillRank) > NewValue)|Sets the value of Players.|
|int32 &|[GetTeamRank](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam_1abf906011467f2a1abbf12b610948b879)()|Gets the value of TeamRank.|
|const int32 &|[GetTeamRank](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam_1ac372e99025035e11f9c5b9437846615a)()|Gets the value of TeamRank.|
|void|[SetTeamRank](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam_1a21353530617b05b8e743c22f93ea7965)(int32 NewValue)|Sets the value of TeamRank.|
|bool|[IsTeamRankDefaultValue](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam_1a994c681ebf3b545f614134bee8f6ae8e)()|Returns true if TeamRank matches the default value.|
|void|[SetTeamRankToDefault](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam_1a8c938a512b14ee1fe0ffab54f5c2e9d1)()|Sets the value of TeamRank to its default|
## Public Attributes



### `Players` <a id="structFRHAPI__TrueskillTeam_1a07f2662b362485fede252e790e1b484c"></a>

`TArray<FRHAPI_TrueskillRank> FRHAPI_TrueskillTeam::Players`

List of PlayerRankUpdate objects that give stats about a specific player from the match.




### `TeamRank` <a id="structFRHAPI__TrueskillTeam_1a9d74dfaf90a7d4d35829cd5b34acac4a"></a>

`int32 FRHAPI_TrueskillTeam::TeamRank`

What rank this team came in. 1 indicates victory, and higher values are placements. Matching ranks indicate draws.





## Public Functions



### `FromJson` <a id="structFRHAPI__TrueskillTeam_1aa4d84ecca6e7ba0337266e9926a58749"></a>

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



### `WriteJson` <a id="structFRHAPI__TrueskillTeam_1a873135cdbc3376a3a12bc4748bcde778"></a>

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



### `GetPlayers` <a id="structFRHAPI__TrueskillTeam_1a31dc120479a92c111db1833d8c04bc7a"></a>

TArray< [FRHAPI_TrueskillRank](/unreal-plugins/all/structfrhapi__trueskillrank/#structFRHAPI__TrueskillRank) > & GetPlayers()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Players.




### `GetPlayers` <a id="structFRHAPI__TrueskillTeam_1a8f2867fd7e29b848ff92f267bb5c52c3"></a>

const TArray< [FRHAPI_TrueskillRank](/unreal-plugins/all/structfrhapi__trueskillrank/#structFRHAPI__TrueskillRank) > & GetPlayers()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Players.




### `SetPlayers` <a id="structFRHAPI__TrueskillTeam_1aed4ed9e04f8431ff319ae7aa801ba44b"></a>

void SetPlayers(TArray< [FRHAPI_TrueskillRank](/unreal-plugins/all/structfrhapi__trueskillrank/#structFRHAPI__TrueskillRank) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_TrueskillRank](/unreal-plugins/all/structfrhapi__trueskillrank/#structFRHAPI__TrueskillRank) >|NewValue|

#### Description

Sets the value of Players.




### `GetTeamRank` <a id="structFRHAPI__TrueskillTeam_1abf906011467f2a1abbf12b610948b879"></a>

int32 & GetTeamRank()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TeamRank.




### `GetTeamRank` <a id="structFRHAPI__TrueskillTeam_1ac372e99025035e11f9c5b9437846615a"></a>

const int32 & GetTeamRank()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TeamRank.




### `SetTeamRank` <a id="structFRHAPI__TrueskillTeam_1a21353530617b05b8e743c22f93ea7965"></a>

void SetTeamRank(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of TeamRank.




### `IsTeamRankDefaultValue` <a id="structFRHAPI__TrueskillTeam_1a994c681ebf3b545f614134bee8f6ae8e"></a>

bool IsTeamRankDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if TeamRank matches the default value.




### `SetTeamRankToDefault` <a id="structFRHAPI__TrueskillTeam_1a8c938a512b14ee1fe0ffab54f5c2e9d1"></a>

void SetTeamRankToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of TeamRank to its default





