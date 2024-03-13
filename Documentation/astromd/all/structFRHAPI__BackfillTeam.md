---
title: FRHAPI_BackfillTeam Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[PlayersRequired](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam_1a72823c33bcf556c5082c0b332f17fc78)|The number of players we want to backfill.|
|int32|[TeamId](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam_1afcd2c20abecc7b477e720e5acd45a714)|Id for the team that requires backfilled players.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam_1abe15095b8b814cfcb566ac1dbe8632e6)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam_1a1ec758b6cbab7517c5d34015a65c08ec)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|int32 &|[GetPlayersRequired](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam_1a253eeecedf2f345cc05cbbfc75b6f9b1)()|Gets the value of PlayersRequired.|
|const int32 &|[GetPlayersRequired](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam_1a57c08eca078b8af22a2f17efda5a35c8)()|Gets the value of PlayersRequired.|
|void|[SetPlayersRequired](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam_1a372afbb3601c9328bd31286a202be615)(int32 NewValue)|Sets the value of PlayersRequired.|
|bool|[IsPlayersRequiredDefaultValue](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam_1a64293b1e09f0ca637ffba8fae0a371d2)()|Returns true if PlayersRequired matches the default value.|
|void|[SetPlayersRequiredToDefault](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam_1a85eed60c7d5390558f0d38df6dce2eaf)()|Sets the value of PlayersRequired to its default|
|int32 &|[GetTeamId](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam_1aa4d27f9fa4149a32be552632ca2d0972)()|Gets the value of TeamId.|
|const int32 &|[GetTeamId](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam_1a7eed8d80b3b8a21939eeae5abc99cb17)()|Gets the value of TeamId.|
|void|[SetTeamId](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam_1a0ae80ec02bf9690a923e0ceaf3418b45)(int32 NewValue)|Sets the value of TeamId.|
|bool|[IsTeamIdDefaultValue](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam_1ae4f0e6536aac48c49b9bf2a40c24aaff)()|Returns true if TeamId matches the default value.|
|void|[SetTeamIdToDefault](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam_1ae37f74276a05d9144c1de4d367b1dc89)()|Sets the value of TeamId to its default|
## Public Attributes



### `PlayersRequired` <a id="structFRHAPI__BackfillTeam_1a72823c33bcf556c5082c0b332f17fc78"></a>

`int32 FRHAPI_BackfillTeam::PlayersRequired`

The number of players we want to backfill.




### `TeamId` <a id="structFRHAPI__BackfillTeam_1afcd2c20abecc7b477e720e5acd45a714"></a>

`int32 FRHAPI_BackfillTeam::TeamId`

Id for the team that requires backfilled players.





## Public Functions



### `FromJson` <a id="structFRHAPI__BackfillTeam_1abe15095b8b814cfcb566ac1dbe8632e6"></a>

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



### `WriteJson` <a id="structFRHAPI__BackfillTeam_1a1ec758b6cbab7517c5d34015a65c08ec"></a>

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



### `GetPlayersRequired` <a id="structFRHAPI__BackfillTeam_1a253eeecedf2f345cc05cbbfc75b6f9b1"></a>

int32 & GetPlayersRequired()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayersRequired.




### `GetPlayersRequired` <a id="structFRHAPI__BackfillTeam_1a57c08eca078b8af22a2f17efda5a35c8"></a>

const int32 & GetPlayersRequired()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayersRequired.




### `SetPlayersRequired` <a id="structFRHAPI__BackfillTeam_1a372afbb3601c9328bd31286a202be615"></a>

void SetPlayersRequired(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of PlayersRequired.




### `IsPlayersRequiredDefaultValue` <a id="structFRHAPI__BackfillTeam_1a64293b1e09f0ca637ffba8fae0a371d2"></a>

bool IsPlayersRequiredDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if PlayersRequired matches the default value.




### `SetPlayersRequiredToDefault` <a id="structFRHAPI__BackfillTeam_1a85eed60c7d5390558f0d38df6dce2eaf"></a>

void SetPlayersRequiredToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of PlayersRequired to its default




### `GetTeamId` <a id="structFRHAPI__BackfillTeam_1aa4d27f9fa4149a32be552632ca2d0972"></a>

int32 & GetTeamId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TeamId.




### `GetTeamId` <a id="structFRHAPI__BackfillTeam_1a7eed8d80b3b8a21939eeae5abc99cb17"></a>

const int32 & GetTeamId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TeamId.




### `SetTeamId` <a id="structFRHAPI__BackfillTeam_1a0ae80ec02bf9690a923e0ceaf3418b45"></a>

void SetTeamId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of TeamId.




### `IsTeamIdDefaultValue` <a id="structFRHAPI__BackfillTeam_1ae4f0e6536aac48c49b9bf2a40c24aaff"></a>

bool IsTeamIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if TeamId matches the default value.




### `SetTeamIdToDefault` <a id="structFRHAPI__BackfillTeam_1ae37f74276a05d9144c1de4d367b1dc89"></a>

void SetTeamIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of TeamId to its default





