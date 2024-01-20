---
title: FRHAPI_PlayerRankRequestResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

DEPRECATED Response to successfully requesting all of a player&#39;s ranks.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_PlayerRankResponse](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse) >|[PlayerRanks](/unreal-plugins/all/structfrhapi__playerrankrequestresponse/#structFRHAPI__PlayerRankRequestResponse_1ac818b287026b56e3dd2346a1cdf1bb6d)|List of player's ranks.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__playerrankrequestresponse/#structFRHAPI__PlayerRankRequestResponse_1ab201b6de11c6c8d4274b4c0d2f6514e8)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__playerrankrequestresponse/#structFRHAPI__PlayerRankRequestResponse_1a39c12de11a6042ed0bac431b60dfe1d2)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_PlayerRankResponse](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse) > &|[GetPlayerRanks](/unreal-plugins/all/structfrhapi__playerrankrequestresponse/#structFRHAPI__PlayerRankRequestResponse_1a187a105bbbfac3f43e9c3197eecb0c17)()|Gets the value of PlayerRanks.|
|const TArray< [FRHAPI_PlayerRankResponse](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse) > &|[GetPlayerRanks](/unreal-plugins/all/structfrhapi__playerrankrequestresponse/#structFRHAPI__PlayerRankRequestResponse_1a3fb706b2dea3a1c89b950a12f302c931)()|Gets the value of PlayerRanks.|
|void|[SetPlayerRanks](/unreal-plugins/all/structfrhapi__playerrankrequestresponse/#structFRHAPI__PlayerRankRequestResponse_1a77a941882973e2e64e17a12ee00389d6)(TArray< [FRHAPI_PlayerRankResponse](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse) > NewValue)|Sets the value of PlayerRanks.|
## Public Attributes



### `PlayerRanks` <a id="structFRHAPI__PlayerRankRequestResponse_1ac818b287026b56e3dd2346a1cdf1bb6d"></a>

`TArray<FRHAPI_PlayerRankResponse> FRHAPI_PlayerRankRequestResponse::PlayerRanks`

List of player's ranks.





## Public Functions



### `FromJson` <a id="structFRHAPI__PlayerRankRequestResponse_1ab201b6de11c6c8d4274b4c0d2f6514e8"></a>

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



### `WriteJson` <a id="structFRHAPI__PlayerRankRequestResponse_1a39c12de11a6042ed0bac431b60dfe1d2"></a>

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



### `GetPlayerRanks` <a id="structFRHAPI__PlayerRankRequestResponse_1a187a105bbbfac3f43e9c3197eecb0c17"></a>

TArray< [FRHAPI_PlayerRankResponse](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse) > & GetPlayerRanks()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerRanks.




### `GetPlayerRanks` <a id="structFRHAPI__PlayerRankRequestResponse_1a3fb706b2dea3a1c89b950a12f302c931"></a>

const TArray< [FRHAPI_PlayerRankResponse](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse) > & GetPlayerRanks()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerRanks.




### `SetPlayerRanks` <a id="structFRHAPI__PlayerRankRequestResponse_1a77a941882973e2e64e17a12ee00389d6"></a>

void SetPlayerRanks(TArray< [FRHAPI_PlayerRankResponse](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PlayerRankResponse](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse) >|NewValue|

#### Description

Sets the value of PlayerRanks.





