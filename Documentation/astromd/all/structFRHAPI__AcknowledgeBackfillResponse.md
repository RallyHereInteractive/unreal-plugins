---
title: FRHAPI_AcknowledgeBackfillResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) >|[BackfilledPlayers_Optional](/unreal-plugins/all/structfrhapi__acknowledgebackfillresponse/#structFRHAPI__AcknowledgeBackfillResponse_1a23be359898015fb69c972452087869b7)|List of players that were backfilled. If empty, no players were backfilled.|
|bool|[BackfilledPlayers_IsSet](/unreal-plugins/all/structfrhapi__acknowledgebackfillresponse/#structFRHAPI__AcknowledgeBackfillResponse_1a9bafa2d898b7b9779b294aeb85e815d1)|true if BackfilledPlayers_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__acknowledgebackfillresponse/#structFRHAPI__AcknowledgeBackfillResponse_1afecaf989cca1b02319263b1a0538cd53)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__acknowledgebackfillresponse/#structFRHAPI__AcknowledgeBackfillResponse_1aec0e768cfb08cea91ddd4162d018fa7a)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) > &|[GetBackfilledPlayers](/unreal-plugins/all/structfrhapi__acknowledgebackfillresponse/#structFRHAPI__AcknowledgeBackfillResponse_1a9c9517bdabdc791d35bb91afc1da3fc6)()|Gets the value of BackfilledPlayers_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) > &|[GetBackfilledPlayers](/unreal-plugins/all/structfrhapi__acknowledgebackfillresponse/#structFRHAPI__AcknowledgeBackfillResponse_1a366ff2235ab432d7d291406e842e9d1e)()|Gets the value of BackfilledPlayers_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) > &|[GetBackfilledPlayers](/unreal-plugins/all/structfrhapi__acknowledgebackfillresponse/#structFRHAPI__AcknowledgeBackfillResponse_1aafdfe19dfb6a04ee2ac27b2e6628aa6c)(const TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) > & DefaultValue)|Gets the value of BackfilledPlayers_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetBackfilledPlayers](/unreal-plugins/all/structfrhapi__acknowledgebackfillresponse/#structFRHAPI__AcknowledgeBackfillResponse_1a2cbc045425237f6f8899b282908596a1)(TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) > & OutValue)|Fills OutValue with the value of BackfilledPlayers_Optional and returns true if it has been set, otherwise returns false.|
|TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) > *|[GetBackfilledPlayersOrNull](/unreal-plugins/all/structfrhapi__acknowledgebackfillresponse/#structFRHAPI__AcknowledgeBackfillResponse_1a4c3fc4ebd860b8db99c310aa5c4aeb13)()|Returns a pointer to BackfilledPlayers_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) > *|[GetBackfilledPlayersOrNull](/unreal-plugins/all/structfrhapi__acknowledgebackfillresponse/#structFRHAPI__AcknowledgeBackfillResponse_1af49d805208763958a0a76bb1bcf00a80)()|Returns a pointer to BackfilledPlayers_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetBackfilledPlayers](/unreal-plugins/all/structfrhapi__acknowledgebackfillresponse/#structFRHAPI__AcknowledgeBackfillResponse_1a9fd607d0415fb7f31f10434c109182ce)(TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) > NewValue)|Sets the value of BackfilledPlayers_Optional and also sets BackfilledPlayers_IsSet to true.|
|void|[ClearBackfilledPlayers](/unreal-plugins/all/structfrhapi__acknowledgebackfillresponse/#structFRHAPI__AcknowledgeBackfillResponse_1a5df126a7e77babbaedc697a42980a889)()|Clears the value of BackfilledPlayers_Optional and sets BackfilledPlayers_IsSet to false.|
## Public Attributes



### `BackfilledPlayers_Optional` <a id="structFRHAPI__AcknowledgeBackfillResponse_1a23be359898015fb69c972452087869b7"></a>

`TArray<FRHAPI_SessionPlayer> FRHAPI_AcknowledgeBackfillResponse::BackfilledPlayers_Optional`

List of players that were backfilled. If empty, no players were backfilled.




### `BackfilledPlayers_IsSet` <a id="structFRHAPI__AcknowledgeBackfillResponse_1a9bafa2d898b7b9779b294aeb85e815d1"></a>

`bool FRHAPI_AcknowledgeBackfillResponse::BackfilledPlayers_IsSet`

true if BackfilledPlayers_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__AcknowledgeBackfillResponse_1afecaf989cca1b02319263b1a0538cd53"></a>

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



### `WriteJson` <a id="structFRHAPI__AcknowledgeBackfillResponse_1aec0e768cfb08cea91ddd4162d018fa7a"></a>

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



### `GetBackfilledPlayers` <a id="structFRHAPI__AcknowledgeBackfillResponse_1a9c9517bdabdc791d35bb91afc1da3fc6"></a>

TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) > & GetBackfilledPlayers()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of BackfilledPlayers_Optional, regardless of it having been set.




### `GetBackfilledPlayers` <a id="structFRHAPI__AcknowledgeBackfillResponse_1a366ff2235ab432d7d291406e842e9d1e"></a>

const TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) > & GetBackfilledPlayers()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of BackfilledPlayers_Optional, regardless of it having been set.




### `GetBackfilledPlayers` <a id="structFRHAPI__AcknowledgeBackfillResponse_1aafdfe19dfb6a04ee2ac27b2e6628aa6c"></a>

const TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) > & GetBackfilledPlayers(const TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) > &|DefaultValue|

#### Description

Gets the value of BackfilledPlayers_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetBackfilledPlayers` <a id="structFRHAPI__AcknowledgeBackfillResponse_1a2cbc045425237f6f8899b282908596a1"></a>

bool GetBackfilledPlayers(TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) > &|OutValue|

#### Description

Fills OutValue with the value of BackfilledPlayers_Optional and returns true if it has been set, otherwise returns false.




### `GetBackfilledPlayersOrNull` <a id="structFRHAPI__AcknowledgeBackfillResponse_1a4c3fc4ebd860b8db99c310aa5c4aeb13"></a>

TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) > * GetBackfilledPlayersOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to BackfilledPlayers_Optional, if it has been set, otherwise returns nullptr.




### `GetBackfilledPlayersOrNull` <a id="structFRHAPI__AcknowledgeBackfillResponse_1af49d805208763958a0a76bb1bcf00a80"></a>

const TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) > * GetBackfilledPlayersOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to BackfilledPlayers_Optional, if it has been set, otherwise returns nullptr.




### `SetBackfilledPlayers` <a id="structFRHAPI__AcknowledgeBackfillResponse_1a9fd607d0415fb7f31f10434c109182ce"></a>

void SetBackfilledPlayers(TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_SessionPlayer](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer) >|NewValue|

#### Description

Sets the value of BackfilledPlayers_Optional and also sets BackfilledPlayers_IsSet to true.




### `ClearBackfilledPlayers` <a id="structFRHAPI__AcknowledgeBackfillResponse_1a5df126a7e77babbaedc697a42980a889"></a>

void ClearBackfilledPlayers()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of BackfilledPlayers_Optional and sets BackfilledPlayers_IsSet to false.





