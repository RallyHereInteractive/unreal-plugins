---
title: FRHAPI_UpdateBackfillRequest Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[InstanceId](/unreal-plugins/all/structfrhapi__updatebackfillrequest/#structFRHAPI__UpdateBackfillRequest_1acbaa3be50199297dc3d82ed419a938d2)|The instance ID for this backfill request.|
|[FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams)|[AdditionalJoinParams_Optional](/unreal-plugins/all/structfrhapi__updatebackfillrequest/#structFRHAPI__UpdateBackfillRequest_1a8733cb6e88822464ff00906f4343479b)||
|bool|[AdditionalJoinParams_IsSet](/unreal-plugins/all/structfrhapi__updatebackfillrequest/#structFRHAPI__UpdateBackfillRequest_1a5297552fe2ee8c2eb9f52dd6a8d4b747)|true if AdditionalJoinParams_Optional has been set to a value|
|TArray< [FRHAPI_BackfillTeam](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam) >|[Teams_Optional](/unreal-plugins/all/structfrhapi__updatebackfillrequest/#structFRHAPI__UpdateBackfillRequest_1a0bcca01fbb64b7eb5cc8c6348f9b5a39)|The teams and number of players that need to be backfilled. Leaving this out (or supplying an empty list) is treated as no players are currently required.|
|bool|[Teams_IsSet](/unreal-plugins/all/structfrhapi__updatebackfillrequest/#structFRHAPI__UpdateBackfillRequest_1a868168ce21f43fa6d23f1cedf2780215)|true if Teams_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__updatebackfillrequest/#structFRHAPI__UpdateBackfillRequest_1a5191c300b1e574072a34e6de65a25d0f)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__updatebackfillrequest/#structFRHAPI__UpdateBackfillRequest_1ab5e7560a8a7b9102cae06b58d9aae50e)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__updatebackfillrequest/#structFRHAPI__UpdateBackfillRequest_1a61f1f26aa48faa039a779543c7f630b8)()|Gets the value of InstanceId.|
|const FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__updatebackfillrequest/#structFRHAPI__UpdateBackfillRequest_1a3dbfdbe0ef551031df2c74a323d13d2d)()|Gets the value of InstanceId.|
|void|[SetInstanceId](/unreal-plugins/all/structfrhapi__updatebackfillrequest/#structFRHAPI__UpdateBackfillRequest_1adce72461de6ef153361376d5ab41b201)(FString NewValue)|Sets the value of InstanceId.|
|[FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) &|[GetAdditionalJoinParams](/unreal-plugins/all/structfrhapi__updatebackfillrequest/#structFRHAPI__UpdateBackfillRequest_1a5d539b1d5ccc559f654522982d88c25f)()|Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.|
|const [FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) &|[GetAdditionalJoinParams](/unreal-plugins/all/structfrhapi__updatebackfillrequest/#structFRHAPI__UpdateBackfillRequest_1a5578394f77774e81b5023a342a37b91d)()|Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.|
|const [FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) &|[GetAdditionalJoinParams](/unreal-plugins/all/structfrhapi__updatebackfillrequest/#structFRHAPI__UpdateBackfillRequest_1ace366e8a91bcb62dca94a5df74166a19)(const [FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) & DefaultValue)|Gets the value of AdditionalJoinParams_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAdditionalJoinParams](/unreal-plugins/all/structfrhapi__updatebackfillrequest/#structFRHAPI__UpdateBackfillRequest_1a54d99e91ca2522129b6f447ae9e85384)([FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) & OutValue)|Fills OutValue with the value of AdditionalJoinParams_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) *|[GetAdditionalJoinParamsOrNull](/unreal-plugins/all/structfrhapi__updatebackfillrequest/#structFRHAPI__UpdateBackfillRequest_1af432acd32e0f20a862ce4606aead702a)()|Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) *|[GetAdditionalJoinParamsOrNull](/unreal-plugins/all/structfrhapi__updatebackfillrequest/#structFRHAPI__UpdateBackfillRequest_1a8b5829488df46a8981057f8a09ac9499)()|Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAdditionalJoinParams](/unreal-plugins/all/structfrhapi__updatebackfillrequest/#structFRHAPI__UpdateBackfillRequest_1acbb75739dd4240b7ee8ab45e1f5c0583)([FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) NewValue)|Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true.|
|void|[ClearAdditionalJoinParams](/unreal-plugins/all/structfrhapi__updatebackfillrequest/#structFRHAPI__UpdateBackfillRequest_1ada5b36edf78e65ce6bf9b9fe73d3aa6e)()|Clears the value of AdditionalJoinParams_Optional and sets AdditionalJoinParams_IsSet to false.|
|TArray< [FRHAPI_BackfillTeam](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam) > &|[GetTeams](/unreal-plugins/all/structfrhapi__updatebackfillrequest/#structFRHAPI__UpdateBackfillRequest_1a4589d12bdf628f45cfdf7eade6923997)()|Gets the value of Teams_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_BackfillTeam](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam) > &|[GetTeams](/unreal-plugins/all/structfrhapi__updatebackfillrequest/#structFRHAPI__UpdateBackfillRequest_1aa69a5a74491f38db3ab36f254c9aff51)()|Gets the value of Teams_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_BackfillTeam](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam) > &|[GetTeams](/unreal-plugins/all/structfrhapi__updatebackfillrequest/#structFRHAPI__UpdateBackfillRequest_1a484a09bc3e911b07534bb25c68aa3765)(const TArray< [FRHAPI_BackfillTeam](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam) > & DefaultValue)|Gets the value of Teams_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetTeams](/unreal-plugins/all/structfrhapi__updatebackfillrequest/#structFRHAPI__UpdateBackfillRequest_1af5c4a2cb761f4c69f676cf3b1ab9335a)(TArray< [FRHAPI_BackfillTeam](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam) > & OutValue)|Fills OutValue with the value of Teams_Optional and returns true if it has been set, otherwise returns false.|
|TArray< [FRHAPI_BackfillTeam](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam) > *|[GetTeamsOrNull](/unreal-plugins/all/structfrhapi__updatebackfillrequest/#structFRHAPI__UpdateBackfillRequest_1aad97c0f2bcb921a65988b16156cab602)()|Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< [FRHAPI_BackfillTeam](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam) > *|[GetTeamsOrNull](/unreal-plugins/all/structfrhapi__updatebackfillrequest/#structFRHAPI__UpdateBackfillRequest_1a940797bad04cf8e2ac8f891f03acb14a)()|Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetTeams](/unreal-plugins/all/structfrhapi__updatebackfillrequest/#structFRHAPI__UpdateBackfillRequest_1a40bcc5fb707434bb7e1f0d0dadcbf70e)(TArray< [FRHAPI_BackfillTeam](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam) > NewValue)|Sets the value of Teams_Optional and also sets Teams_IsSet to true.|
|void|[ClearTeams](/unreal-plugins/all/structfrhapi__updatebackfillrequest/#structFRHAPI__UpdateBackfillRequest_1ab456151a06c9adfe1258778fbadaf412)()|Clears the value of Teams_Optional and sets Teams_IsSet to false.|
## Public Attributes



### `InstanceId` <a id="structFRHAPI__UpdateBackfillRequest_1acbaa3be50199297dc3d82ed419a938d2"></a>

`FString FRHAPI_UpdateBackfillRequest::InstanceId`

The instance ID for this backfill request.




### `AdditionalJoinParams_Optional` <a id="structFRHAPI__UpdateBackfillRequest_1a8733cb6e88822464ff00906f4343479b"></a>

`FRHAPI_AdditionalJoinParams FRHAPI_UpdateBackfillRequest::AdditionalJoinParams_Optional`






### `AdditionalJoinParams_IsSet` <a id="structFRHAPI__UpdateBackfillRequest_1a5297552fe2ee8c2eb9f52dd6a8d4b747"></a>

`bool FRHAPI_UpdateBackfillRequest::AdditionalJoinParams_IsSet`

true if AdditionalJoinParams_Optional has been set to a value




### `Teams_Optional` <a id="structFRHAPI__UpdateBackfillRequest_1a0bcca01fbb64b7eb5cc8c6348f9b5a39"></a>

`TArray<FRHAPI_BackfillTeam> FRHAPI_UpdateBackfillRequest::Teams_Optional`

The teams and number of players that need to be backfilled. Leaving this out (or supplying an empty list) is treated as no players are currently required.




### `Teams_IsSet` <a id="structFRHAPI__UpdateBackfillRequest_1a868168ce21f43fa6d23f1cedf2780215"></a>

`bool FRHAPI_UpdateBackfillRequest::Teams_IsSet`

true if Teams_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__UpdateBackfillRequest_1a5191c300b1e574072a34e6de65a25d0f"></a>

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



### `WriteJson` <a id="structFRHAPI__UpdateBackfillRequest_1ab5e7560a8a7b9102cae06b58d9aae50e"></a>

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



### `GetInstanceId` <a id="structFRHAPI__UpdateBackfillRequest_1a61f1f26aa48faa039a779543c7f630b8"></a>

FString & GetInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceId.




### `GetInstanceId` <a id="structFRHAPI__UpdateBackfillRequest_1a3dbfdbe0ef551031df2c74a323d13d2d"></a>

const FString & GetInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceId.




### `SetInstanceId` <a id="structFRHAPI__UpdateBackfillRequest_1adce72461de6ef153361376d5ab41b201"></a>

void SetInstanceId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of InstanceId.




### `GetAdditionalJoinParams` <a id="structFRHAPI__UpdateBackfillRequest_1a5d539b1d5ccc559f654522982d88c25f"></a>

[FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) & GetAdditionalJoinParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.




### `GetAdditionalJoinParams` <a id="structFRHAPI__UpdateBackfillRequest_1a5578394f77774e81b5023a342a37b91d"></a>

const [FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) & GetAdditionalJoinParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.




### `GetAdditionalJoinParams` <a id="structFRHAPI__UpdateBackfillRequest_1ace366e8a91bcb62dca94a5df74166a19"></a>

const [FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) & GetAdditionalJoinParams(const [FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) &|DefaultValue|

#### Description

Gets the value of AdditionalJoinParams_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAdditionalJoinParams` <a id="structFRHAPI__UpdateBackfillRequest_1a54d99e91ca2522129b6f447ae9e85384"></a>

bool GetAdditionalJoinParams([FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) &|OutValue|

#### Description

Fills OutValue with the value of AdditionalJoinParams_Optional and returns true if it has been set, otherwise returns false.




### `GetAdditionalJoinParamsOrNull` <a id="structFRHAPI__UpdateBackfillRequest_1af432acd32e0f20a862ce4606aead702a"></a>

[FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) * GetAdditionalJoinParamsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.




### `GetAdditionalJoinParamsOrNull` <a id="structFRHAPI__UpdateBackfillRequest_1a8b5829488df46a8981057f8a09ac9499"></a>

const [FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) * GetAdditionalJoinParamsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.




### `SetAdditionalJoinParams` <a id="structFRHAPI__UpdateBackfillRequest_1acbb75739dd4240b7ee8ab45e1f5c0583"></a>

void SetAdditionalJoinParams([FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_AdditionalJoinParams](/unreal-plugins/all/structfrhapi__additionaljoinparams/#structFRHAPI__AdditionalJoinParams)|NewValue|

#### Description

Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true.




### `ClearAdditionalJoinParams` <a id="structFRHAPI__UpdateBackfillRequest_1ada5b36edf78e65ce6bf9b9fe73d3aa6e"></a>

void ClearAdditionalJoinParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of AdditionalJoinParams_Optional and sets AdditionalJoinParams_IsSet to false.




### `GetTeams` <a id="structFRHAPI__UpdateBackfillRequest_1a4589d12bdf628f45cfdf7eade6923997"></a>

TArray< [FRHAPI_BackfillTeam](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam) > & GetTeams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Teams_Optional, regardless of it having been set.




### `GetTeams` <a id="structFRHAPI__UpdateBackfillRequest_1aa69a5a74491f38db3ab36f254c9aff51"></a>

const TArray< [FRHAPI_BackfillTeam](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam) > & GetTeams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Teams_Optional, regardless of it having been set.




### `GetTeams` <a id="structFRHAPI__UpdateBackfillRequest_1a484a09bc3e911b07534bb25c68aa3765"></a>

const TArray< [FRHAPI_BackfillTeam](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam) > & GetTeams(const TArray< [FRHAPI_BackfillTeam](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< [FRHAPI_BackfillTeam](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam) > &|DefaultValue|

#### Description

Gets the value of Teams_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetTeams` <a id="structFRHAPI__UpdateBackfillRequest_1af5c4a2cb761f4c69f676cf3b1ab9335a"></a>

bool GetTeams(TArray< [FRHAPI_BackfillTeam](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_BackfillTeam](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam) > &|OutValue|

#### Description

Fills OutValue with the value of Teams_Optional and returns true if it has been set, otherwise returns false.




### `GetTeamsOrNull` <a id="structFRHAPI__UpdateBackfillRequest_1aad97c0f2bcb921a65988b16156cab602"></a>

TArray< [FRHAPI_BackfillTeam](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam) > * GetTeamsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.




### `GetTeamsOrNull` <a id="structFRHAPI__UpdateBackfillRequest_1a940797bad04cf8e2ac8f891f03acb14a"></a>

const TArray< [FRHAPI_BackfillTeam](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam) > * GetTeamsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.




### `SetTeams` <a id="structFRHAPI__UpdateBackfillRequest_1a40bcc5fb707434bb7e1f0d0dadcbf70e"></a>

void SetTeams(TArray< [FRHAPI_BackfillTeam](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_BackfillTeam](/unreal-plugins/all/structfrhapi__backfillteam/#structFRHAPI__BackfillTeam) >|NewValue|

#### Description

Sets the value of Teams_Optional and also sets Teams_IsSet to true.




### `ClearTeams` <a id="structFRHAPI__UpdateBackfillRequest_1ab456151a06c9adfe1258778fbadaf412"></a>

void ClearTeams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Teams_Optional and sets Teams_IsSet to false.





