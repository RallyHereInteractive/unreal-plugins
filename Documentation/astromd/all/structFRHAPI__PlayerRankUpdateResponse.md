---
title: FRHAPI_PlayerRankUpdateResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

DEPRECATED Response to successfully updating players&#39; ranks.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_PlayerRankResponse](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse) >|[UpdatedPlayers](/unreal-plugins/all/structfrhapi__playerrankupdateresponse/#structFRHAPI__PlayerRankUpdateResponse_1a7f6d7817320d4a24ba83cdbdb5f5acaf)|List of players and their updated ranks.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__playerrankupdateresponse/#structFRHAPI__PlayerRankUpdateResponse_1a8c70e27184c2ed95c1687f0070de3a41)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__playerrankupdateresponse/#structFRHAPI__PlayerRankUpdateResponse_1a47da0774dd217832f7b5ab5f20e70803)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_PlayerRankResponse](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse) > &|[GetUpdatedPlayers](/unreal-plugins/all/structfrhapi__playerrankupdateresponse/#structFRHAPI__PlayerRankUpdateResponse_1ac7213500ce83733148a448a808771080)()|Gets the value of UpdatedPlayers.|
|const TArray< [FRHAPI_PlayerRankResponse](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse) > &|[GetUpdatedPlayers](/unreal-plugins/all/structfrhapi__playerrankupdateresponse/#structFRHAPI__PlayerRankUpdateResponse_1a67c1363557897ce067efec035674b8c5)()|Gets the value of UpdatedPlayers.|
|void|[SetUpdatedPlayers](/unreal-plugins/all/structfrhapi__playerrankupdateresponse/#structFRHAPI__PlayerRankUpdateResponse_1a5199179dc905b15110e2e2ae0cda32a2)(TArray< [FRHAPI_PlayerRankResponse](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse) > NewValue)|Sets the value of UpdatedPlayers.|
## Public Attributes



### `UpdatedPlayers` <a id="structFRHAPI__PlayerRankUpdateResponse_1a7f6d7817320d4a24ba83cdbdb5f5acaf"></a>

`TArray<FRHAPI_PlayerRankResponse> FRHAPI_PlayerRankUpdateResponse::UpdatedPlayers`

List of players and their updated ranks.





## Public Functions



### `FromJson` <a id="structFRHAPI__PlayerRankUpdateResponse_1a8c70e27184c2ed95c1687f0070de3a41"></a>

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



### `WriteJson` <a id="structFRHAPI__PlayerRankUpdateResponse_1a47da0774dd217832f7b5ab5f20e70803"></a>

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



### `GetUpdatedPlayers` <a id="structFRHAPI__PlayerRankUpdateResponse_1ac7213500ce83733148a448a808771080"></a>

TArray< [FRHAPI_PlayerRankResponse](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse) > & GetUpdatedPlayers()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of UpdatedPlayers.




### `GetUpdatedPlayers` <a id="structFRHAPI__PlayerRankUpdateResponse_1a67c1363557897ce067efec035674b8c5"></a>

const TArray< [FRHAPI_PlayerRankResponse](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse) > & GetUpdatedPlayers()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of UpdatedPlayers.




### `SetUpdatedPlayers` <a id="structFRHAPI__PlayerRankUpdateResponse_1a5199179dc905b15110e2e2ae0cda32a2"></a>

void SetUpdatedPlayers(TArray< [FRHAPI_PlayerRankResponse](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PlayerRankResponse](/unreal-plugins/all/structfrhapi__playerrankresponse/#structFRHAPI__PlayerRankResponse) >|NewValue|

#### Description

Sets the value of UpdatedPlayers.





