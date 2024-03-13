---
title: FRHAPI_TrueskillUpdateRequest Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

DEPRECATED A request body to update players&#39; trueskill ratings from a match.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[InstanceId_Optional](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1a2942a12d2e732d387266c9f34f2f8f37)|ID for the instance the match took place on.|
|bool|[InstanceId_IsSet](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1a9e28528a11cce285e728127c072f76a7)|true if InstanceId_Optional has been set to a value|
|int32|[RankId](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1a1de62f86ac1f28f1a24db29bd83ff8eb)|ID for the rank type used in this match.|
|int32|[MatchLengthSeconds](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1af9836444ee110804b937d37917361c26)|How many seconds the match lasted.|
|TArray< [FRHAPI_TrueskillTeam](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam) >|[Teams](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1a210525c9961a73ae319d4ace2e413518)|List of teams that participated in this match.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1a679220a102b177616751ce5f985341d7)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1a7cda126cd2ca0e74353c9895d0b77d34)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1ab2c5fb989c94d31b176db77887a95300)()|Gets the value of InstanceId_Optional, regardless of it having been set.|
|const FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1a7945e990b74de0b4d79f276a53041dfb)()|Gets the value of InstanceId_Optional, regardless of it having been set.|
|const FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1aeb081a53477c67df3d567cfe7d1c1a2e)(const FString & DefaultValue)|Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetInstanceId](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1a59fef8b21e6352e8287fd3da7047b9b6)(FString & OutValue)|Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetInstanceIdOrNull](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1a3adea4fd05294227a28f8c3be7b0c21c)()|Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetInstanceIdOrNull](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1a38b9a6d613f37e16680f5064641ad84f)()|Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetInstanceId](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1a3467892239ac26cd465cd12760c6c6d4)(FString NewValue)|Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.|
|void|[ClearInstanceId](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1a761badb0c37cb60868139b73882f3d6a)()|Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.|
|int32 &|[GetRankId](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1abd6d4b6488d48482c80493fdf5adb255)()|Gets the value of RankId.|
|const int32 &|[GetRankId](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1a2cbb0381557669c9432a2ce90d7a514c)()|Gets the value of RankId.|
|void|[SetRankId](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1aa3da77ec00ae725ddebc4335ba04026f)(int32 NewValue)|Sets the value of RankId.|
|bool|[IsRankIdDefaultValue](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1a11698faae8dbb0524081103cac378087)()|Returns true if RankId matches the default value.|
|void|[SetRankIdToDefault](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1aadd9587d26526ce4ee7285e68ddbea2f)()|Sets the value of RankId to its default|
|int32 &|[GetMatchLengthSeconds](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1a05cdf3b003527e13c8c2f6a79bfda682)()|Gets the value of MatchLengthSeconds.|
|const int32 &|[GetMatchLengthSeconds](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1a48ed7300b8cb92fcb4b73f4c9a69d5d0)()|Gets the value of MatchLengthSeconds.|
|void|[SetMatchLengthSeconds](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1a0cee29b3d22a4949eecdb1281d74348f)(int32 NewValue)|Sets the value of MatchLengthSeconds.|
|bool|[IsMatchLengthSecondsDefaultValue](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1a29a68421641050722c857d3d5c136614)()|Returns true if MatchLengthSeconds matches the default value.|
|void|[SetMatchLengthSecondsToDefault](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1acfdbc8dc63c5839c25ff885a83f692a8)()|Sets the value of MatchLengthSeconds to its default|
|TArray< [FRHAPI_TrueskillTeam](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam) > &|[GetTeams](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1a1389d10b71a1a8ac90dab207a1cd03e7)()|Gets the value of Teams.|
|const TArray< [FRHAPI_TrueskillTeam](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam) > &|[GetTeams](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1ac6e65c760802d8f4e6f1fff7c2052650)()|Gets the value of Teams.|
|void|[SetTeams](/unreal-plugins/all/structfrhapi__trueskillupdaterequest/#structFRHAPI__TrueskillUpdateRequest_1a3ad0f34e88a3d799c1fa55c0a8774b70)(TArray< [FRHAPI_TrueskillTeam](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam) > NewValue)|Sets the value of Teams.|
## Public Attributes



### `InstanceId_Optional` <a id="structFRHAPI__TrueskillUpdateRequest_1a2942a12d2e732d387266c9f34f2f8f37"></a>

`FString FRHAPI_TrueskillUpdateRequest::InstanceId_Optional`

ID for the instance the match took place on.




### `InstanceId_IsSet` <a id="structFRHAPI__TrueskillUpdateRequest_1a9e28528a11cce285e728127c072f76a7"></a>

`bool FRHAPI_TrueskillUpdateRequest::InstanceId_IsSet`

true if InstanceId_Optional has been set to a value




### `RankId` <a id="structFRHAPI__TrueskillUpdateRequest_1a1de62f86ac1f28f1a24db29bd83ff8eb"></a>

`int32 FRHAPI_TrueskillUpdateRequest::RankId`

ID for the rank type used in this match.




### `MatchLengthSeconds` <a id="structFRHAPI__TrueskillUpdateRequest_1af9836444ee110804b937d37917361c26"></a>

`int32 FRHAPI_TrueskillUpdateRequest::MatchLengthSeconds`

How many seconds the match lasted.




### `Teams` <a id="structFRHAPI__TrueskillUpdateRequest_1a210525c9961a73ae319d4ace2e413518"></a>

`TArray<FRHAPI_TrueskillTeam> FRHAPI_TrueskillUpdateRequest::Teams`

List of teams that participated in this match.





## Public Functions



### `FromJson` <a id="structFRHAPI__TrueskillUpdateRequest_1a679220a102b177616751ce5f985341d7"></a>

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



### `WriteJson` <a id="structFRHAPI__TrueskillUpdateRequest_1a7cda126cd2ca0e74353c9895d0b77d34"></a>

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



### `GetInstanceId` <a id="structFRHAPI__TrueskillUpdateRequest_1ab2c5fb989c94d31b176db77887a95300"></a>

FString & GetInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceId_Optional, regardless of it having been set.




### `GetInstanceId` <a id="structFRHAPI__TrueskillUpdateRequest_1a7945e990b74de0b4d79f276a53041dfb"></a>

const FString & GetInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceId_Optional, regardless of it having been set.




### `GetInstanceId` <a id="structFRHAPI__TrueskillUpdateRequest_1aeb081a53477c67df3d567cfe7d1c1a2e"></a>

const FString & GetInstanceId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetInstanceId` <a id="structFRHAPI__TrueskillUpdateRequest_1a59fef8b21e6352e8287fd3da7047b9b6"></a>

bool GetInstanceId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.




### `GetInstanceIdOrNull` <a id="structFRHAPI__TrueskillUpdateRequest_1a3adea4fd05294227a28f8c3be7b0c21c"></a>

FString * GetInstanceIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.




### `GetInstanceIdOrNull` <a id="structFRHAPI__TrueskillUpdateRequest_1a38b9a6d613f37e16680f5064641ad84f"></a>

const FString * GetInstanceIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.




### `SetInstanceId` <a id="structFRHAPI__TrueskillUpdateRequest_1a3467892239ac26cd465cd12760c6c6d4"></a>

void SetInstanceId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.




### `ClearInstanceId` <a id="structFRHAPI__TrueskillUpdateRequest_1a761badb0c37cb60868139b73882f3d6a"></a>

void ClearInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.




### `GetRankId` <a id="structFRHAPI__TrueskillUpdateRequest_1abd6d4b6488d48482c80493fdf5adb255"></a>

int32 & GetRankId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RankId.




### `GetRankId` <a id="structFRHAPI__TrueskillUpdateRequest_1a2cbb0381557669c9432a2ce90d7a514c"></a>

const int32 & GetRankId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RankId.




### `SetRankId` <a id="structFRHAPI__TrueskillUpdateRequest_1aa3da77ec00ae725ddebc4335ba04026f"></a>

void SetRankId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of RankId.




### `IsRankIdDefaultValue` <a id="structFRHAPI__TrueskillUpdateRequest_1a11698faae8dbb0524081103cac378087"></a>

bool IsRankIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if RankId matches the default value.




### `SetRankIdToDefault` <a id="structFRHAPI__TrueskillUpdateRequest_1aadd9587d26526ce4ee7285e68ddbea2f"></a>

void SetRankIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of RankId to its default




### `GetMatchLengthSeconds` <a id="structFRHAPI__TrueskillUpdateRequest_1a05cdf3b003527e13c8c2f6a79bfda682"></a>

int32 & GetMatchLengthSeconds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchLengthSeconds.




### `GetMatchLengthSeconds` <a id="structFRHAPI__TrueskillUpdateRequest_1a48ed7300b8cb92fcb4b73f4c9a69d5d0"></a>

const int32 & GetMatchLengthSeconds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchLengthSeconds.




### `SetMatchLengthSeconds` <a id="structFRHAPI__TrueskillUpdateRequest_1a0cee29b3d22a4949eecdb1281d74348f"></a>

void SetMatchLengthSeconds(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of MatchLengthSeconds.




### `IsMatchLengthSecondsDefaultValue` <a id="structFRHAPI__TrueskillUpdateRequest_1a29a68421641050722c857d3d5c136614"></a>

bool IsMatchLengthSecondsDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if MatchLengthSeconds matches the default value.




### `SetMatchLengthSecondsToDefault` <a id="structFRHAPI__TrueskillUpdateRequest_1acfdbc8dc63c5839c25ff885a83f692a8"></a>

void SetMatchLengthSecondsToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of MatchLengthSeconds to its default




### `GetTeams` <a id="structFRHAPI__TrueskillUpdateRequest_1a1389d10b71a1a8ac90dab207a1cd03e7"></a>

TArray< [FRHAPI_TrueskillTeam](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam) > & GetTeams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Teams.




### `GetTeams` <a id="structFRHAPI__TrueskillUpdateRequest_1ac6e65c760802d8f4e6f1fff7c2052650"></a>

const TArray< [FRHAPI_TrueskillTeam](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam) > & GetTeams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Teams.




### `SetTeams` <a id="structFRHAPI__TrueskillUpdateRequest_1a3ad0f34e88a3d799c1fa55c0a8774b70"></a>

void SetTeams(TArray< [FRHAPI_TrueskillTeam](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_TrueskillTeam](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam) >|NewValue|

#### Description

Sets the value of Teams.





