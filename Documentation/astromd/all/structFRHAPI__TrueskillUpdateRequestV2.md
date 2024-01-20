---
title: FRHAPI_TrueskillUpdateRequestV2 Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A request body to update players&#39; trueskill ratings from a match.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[InstanceId_Optional](/unreal-plugins/all/structfrhapi__trueskillupdaterequestv2/#structFRHAPI__TrueskillUpdateRequestV2_1a710c602c282e49767fdcb5325f0e33ae)|ID for the instance the match took place on.|
|bool|[InstanceId_IsSet](/unreal-plugins/all/structfrhapi__trueskillupdaterequestv2/#structFRHAPI__TrueskillUpdateRequestV2_1a5a6a9a6159a9495ec4326cf1e1af4b76)|true if InstanceId_Optional has been set to a value|
|FString|[RankId](/unreal-plugins/all/structfrhapi__trueskillupdaterequestv2/#structFRHAPI__TrueskillUpdateRequestV2_1abb6d07c2ae9eed9d43520a5cc50566cc)|ID for the rank type used in this match.|
|int32|[MatchLengthSeconds](/unreal-plugins/all/structfrhapi__trueskillupdaterequestv2/#structFRHAPI__TrueskillUpdateRequestV2_1ad7a1b60cd4042e0470306cf629104653)|How many seconds the match lasted.|
|TArray< [FRHAPI_TrueskillTeam](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam) >|[Teams](/unreal-plugins/all/structfrhapi__trueskillupdaterequestv2/#structFRHAPI__TrueskillUpdateRequestV2_1ac51832a01897582db7ff3aafd1a4482a)|List of teams that participated in this match.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__trueskillupdaterequestv2/#structFRHAPI__TrueskillUpdateRequestV2_1a3786f350bbacc1d4e01fa59e84aab814)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__trueskillupdaterequestv2/#structFRHAPI__TrueskillUpdateRequestV2_1ad06128a907324029cc24b8c46e8f9379)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__trueskillupdaterequestv2/#structFRHAPI__TrueskillUpdateRequestV2_1a222e772a953806066944814d7abbb6a1)()|Gets the value of InstanceId_Optional, regardless of it having been set.|
|const FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__trueskillupdaterequestv2/#structFRHAPI__TrueskillUpdateRequestV2_1aebf4dfbb30068289ef3b51d726ba0c5d)()|Gets the value of InstanceId_Optional, regardless of it having been set.|
|const FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__trueskillupdaterequestv2/#structFRHAPI__TrueskillUpdateRequestV2_1af5d45657436416901849aff2c69e5ecf)(const FString & DefaultValue)|Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetInstanceId](/unreal-plugins/all/structfrhapi__trueskillupdaterequestv2/#structFRHAPI__TrueskillUpdateRequestV2_1a4353ba0f96c4e758c269585ad63b2cbf)(FString & OutValue)|Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetInstanceIdOrNull](/unreal-plugins/all/structfrhapi__trueskillupdaterequestv2/#structFRHAPI__TrueskillUpdateRequestV2_1ac6891169b3c07edd03d0938e4b5c6585)()|Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetInstanceIdOrNull](/unreal-plugins/all/structfrhapi__trueskillupdaterequestv2/#structFRHAPI__TrueskillUpdateRequestV2_1aa17b086c30c3b6fb74312bf59745aa37)()|Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetInstanceId](/unreal-plugins/all/structfrhapi__trueskillupdaterequestv2/#structFRHAPI__TrueskillUpdateRequestV2_1a0b47d2a51864bcc5b3a98d55ab9f2f0e)(FString NewValue)|Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.|
|void|[ClearInstanceId](/unreal-plugins/all/structfrhapi__trueskillupdaterequestv2/#structFRHAPI__TrueskillUpdateRequestV2_1a8162586cbb182231d3c5d1f63c8e6fad)()|Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.|
|FString &|[GetRankId](/unreal-plugins/all/structfrhapi__trueskillupdaterequestv2/#structFRHAPI__TrueskillUpdateRequestV2_1ab142b907dadac0065d84a43ffabd9f90)()|Gets the value of RankId.|
|const FString &|[GetRankId](/unreal-plugins/all/structfrhapi__trueskillupdaterequestv2/#structFRHAPI__TrueskillUpdateRequestV2_1aac1818a974b63bce5dd908fe1f8ddd7e)()|Gets the value of RankId.|
|void|[SetRankId](/unreal-plugins/all/structfrhapi__trueskillupdaterequestv2/#structFRHAPI__TrueskillUpdateRequestV2_1a03bdab6aa6693fbafe7933f3360e5e8e)(FString NewValue)|Sets the value of RankId.|
|int32 &|[GetMatchLengthSeconds](/unreal-plugins/all/structfrhapi__trueskillupdaterequestv2/#structFRHAPI__TrueskillUpdateRequestV2_1a3f266451fdfca97ba45349965947586f)()|Gets the value of MatchLengthSeconds.|
|const int32 &|[GetMatchLengthSeconds](/unreal-plugins/all/structfrhapi__trueskillupdaterequestv2/#structFRHAPI__TrueskillUpdateRequestV2_1a27fc1abb32678f57849be7f1adc04a65)()|Gets the value of MatchLengthSeconds.|
|void|[SetMatchLengthSeconds](/unreal-plugins/all/structfrhapi__trueskillupdaterequestv2/#structFRHAPI__TrueskillUpdateRequestV2_1a5099819f0f4a5a262d87b105a9cd72c3)(int32 NewValue)|Sets the value of MatchLengthSeconds.|
|bool|[IsMatchLengthSecondsDefaultValue](/unreal-plugins/all/structfrhapi__trueskillupdaterequestv2/#structFRHAPI__TrueskillUpdateRequestV2_1a17dce2d3731519e4e8ff888ce6fc408c)()|Returns true if MatchLengthSeconds matches the default value.|
|void|[SetMatchLengthSecondsToDefault](/unreal-plugins/all/structfrhapi__trueskillupdaterequestv2/#structFRHAPI__TrueskillUpdateRequestV2_1a2d4749a24619ad5b2c271ff448949f1e)()|Sets the value of MatchLengthSeconds to its default|
|TArray< [FRHAPI_TrueskillTeam](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam) > &|[GetTeams](/unreal-plugins/all/structfrhapi__trueskillupdaterequestv2/#structFRHAPI__TrueskillUpdateRequestV2_1a5bc16c4aafa14cfc52b44cc1b5b35c02)()|Gets the value of Teams.|
|const TArray< [FRHAPI_TrueskillTeam](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam) > &|[GetTeams](/unreal-plugins/all/structfrhapi__trueskillupdaterequestv2/#structFRHAPI__TrueskillUpdateRequestV2_1ad8819e2b81077a86d199a49b9180f3ae)()|Gets the value of Teams.|
|void|[SetTeams](/unreal-plugins/all/structfrhapi__trueskillupdaterequestv2/#structFRHAPI__TrueskillUpdateRequestV2_1ad0a1775234e971339ab93827c9db68bd)(TArray< [FRHAPI_TrueskillTeam](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam) > NewValue)|Sets the value of Teams.|
## Public Attributes



### `InstanceId_Optional` <a id="structFRHAPI__TrueskillUpdateRequestV2_1a710c602c282e49767fdcb5325f0e33ae"></a>

`FString FRHAPI_TrueskillUpdateRequestV2::InstanceId_Optional`

ID for the instance the match took place on.




### `InstanceId_IsSet` <a id="structFRHAPI__TrueskillUpdateRequestV2_1a5a6a9a6159a9495ec4326cf1e1af4b76"></a>

`bool FRHAPI_TrueskillUpdateRequestV2::InstanceId_IsSet`

true if InstanceId_Optional has been set to a value




### `RankId` <a id="structFRHAPI__TrueskillUpdateRequestV2_1abb6d07c2ae9eed9d43520a5cc50566cc"></a>

`FString FRHAPI_TrueskillUpdateRequestV2::RankId`

ID for the rank type used in this match.




### `MatchLengthSeconds` <a id="structFRHAPI__TrueskillUpdateRequestV2_1ad7a1b60cd4042e0470306cf629104653"></a>

`int32 FRHAPI_TrueskillUpdateRequestV2::MatchLengthSeconds`

How many seconds the match lasted.




### `Teams` <a id="structFRHAPI__TrueskillUpdateRequestV2_1ac51832a01897582db7ff3aafd1a4482a"></a>

`TArray<FRHAPI_TrueskillTeam> FRHAPI_TrueskillUpdateRequestV2::Teams`

List of teams that participated in this match.





## Public Functions



### `FromJson` <a id="structFRHAPI__TrueskillUpdateRequestV2_1a3786f350bbacc1d4e01fa59e84aab814"></a>

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



### `WriteJson` <a id="structFRHAPI__TrueskillUpdateRequestV2_1ad06128a907324029cc24b8c46e8f9379"></a>

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



### `GetInstanceId` <a id="structFRHAPI__TrueskillUpdateRequestV2_1a222e772a953806066944814d7abbb6a1"></a>

FString & GetInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceId_Optional, regardless of it having been set.




### `GetInstanceId` <a id="structFRHAPI__TrueskillUpdateRequestV2_1aebf4dfbb30068289ef3b51d726ba0c5d"></a>

const FString & GetInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceId_Optional, regardless of it having been set.




### `GetInstanceId` <a id="structFRHAPI__TrueskillUpdateRequestV2_1af5d45657436416901849aff2c69e5ecf"></a>

const FString & GetInstanceId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetInstanceId` <a id="structFRHAPI__TrueskillUpdateRequestV2_1a4353ba0f96c4e758c269585ad63b2cbf"></a>

bool GetInstanceId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.




### `GetInstanceIdOrNull` <a id="structFRHAPI__TrueskillUpdateRequestV2_1ac6891169b3c07edd03d0938e4b5c6585"></a>

FString * GetInstanceIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.




### `GetInstanceIdOrNull` <a id="structFRHAPI__TrueskillUpdateRequestV2_1aa17b086c30c3b6fb74312bf59745aa37"></a>

const FString * GetInstanceIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.




### `SetInstanceId` <a id="structFRHAPI__TrueskillUpdateRequestV2_1a0b47d2a51864bcc5b3a98d55ab9f2f0e"></a>

void SetInstanceId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.




### `ClearInstanceId` <a id="structFRHAPI__TrueskillUpdateRequestV2_1a8162586cbb182231d3c5d1f63c8e6fad"></a>

void ClearInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.




### `GetRankId` <a id="structFRHAPI__TrueskillUpdateRequestV2_1ab142b907dadac0065d84a43ffabd9f90"></a>

FString & GetRankId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RankId.




### `GetRankId` <a id="structFRHAPI__TrueskillUpdateRequestV2_1aac1818a974b63bce5dd908fe1f8ddd7e"></a>

const FString & GetRankId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RankId.




### `SetRankId` <a id="structFRHAPI__TrueskillUpdateRequestV2_1a03bdab6aa6693fbafe7933f3360e5e8e"></a>

void SetRankId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of RankId.




### `GetMatchLengthSeconds` <a id="structFRHAPI__TrueskillUpdateRequestV2_1a3f266451fdfca97ba45349965947586f"></a>

int32 & GetMatchLengthSeconds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchLengthSeconds.




### `GetMatchLengthSeconds` <a id="structFRHAPI__TrueskillUpdateRequestV2_1a27fc1abb32678f57849be7f1adc04a65"></a>

const int32 & GetMatchLengthSeconds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchLengthSeconds.




### `SetMatchLengthSeconds` <a id="structFRHAPI__TrueskillUpdateRequestV2_1a5099819f0f4a5a262d87b105a9cd72c3"></a>

void SetMatchLengthSeconds(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of MatchLengthSeconds.




### `IsMatchLengthSecondsDefaultValue` <a id="structFRHAPI__TrueskillUpdateRequestV2_1a17dce2d3731519e4e8ff888ce6fc408c"></a>

bool IsMatchLengthSecondsDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if MatchLengthSeconds matches the default value.




### `SetMatchLengthSecondsToDefault` <a id="structFRHAPI__TrueskillUpdateRequestV2_1a2d4749a24619ad5b2c271ff448949f1e"></a>

void SetMatchLengthSecondsToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of MatchLengthSeconds to its default




### `GetTeams` <a id="structFRHAPI__TrueskillUpdateRequestV2_1a5bc16c4aafa14cfc52b44cc1b5b35c02"></a>

TArray< [FRHAPI_TrueskillTeam](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam) > & GetTeams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Teams.




### `GetTeams` <a id="structFRHAPI__TrueskillUpdateRequestV2_1ad8819e2b81077a86d199a49b9180f3ae"></a>

const TArray< [FRHAPI_TrueskillTeam](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam) > & GetTeams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Teams.




### `SetTeams` <a id="structFRHAPI__TrueskillUpdateRequestV2_1ad0a1775234e971339ab93827c9db68bd"></a>

void SetTeams(TArray< [FRHAPI_TrueskillTeam](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_TrueskillTeam](/unreal-plugins/all/structfrhapi__trueskillteam/#structFRHAPI__TrueskillTeam) >|NewValue|

#### Description

Sets the value of Teams.





