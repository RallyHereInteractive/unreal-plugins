---
title: FRHAPI_PlayerRankUpdateResponseV2 Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Response to successfully updating players&#39; ranks.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_PlayerRankResponseV2](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2) >|[UpdatedPlayers](/unreal-plugins/all/structfrhapi__playerrankupdateresponsev2/#structFRHAPI__PlayerRankUpdateResponseV2_1ac8f9ea8f222cf7fac5ac1e6b87014bee)|List of players and their updated ranks.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__playerrankupdateresponsev2/#structFRHAPI__PlayerRankUpdateResponseV2_1a270e1f6dc1443bbbf698b20c401208cd)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__playerrankupdateresponsev2/#structFRHAPI__PlayerRankUpdateResponseV2_1a0da78137c2780126c9c4f34da659a108)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_PlayerRankResponseV2](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2) > &|[GetUpdatedPlayers](/unreal-plugins/all/structfrhapi__playerrankupdateresponsev2/#structFRHAPI__PlayerRankUpdateResponseV2_1ae6bcc6afd0e3fb680be6bec0a7174f50)()|Gets the value of UpdatedPlayers.|
|const TArray< [FRHAPI_PlayerRankResponseV2](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2) > &|[GetUpdatedPlayers](/unreal-plugins/all/structfrhapi__playerrankupdateresponsev2/#structFRHAPI__PlayerRankUpdateResponseV2_1a1b9cc5e75951d3137566c74e468c85f4)()|Gets the value of UpdatedPlayers.|
|void|[SetUpdatedPlayers](/unreal-plugins/all/structfrhapi__playerrankupdateresponsev2/#structFRHAPI__PlayerRankUpdateResponseV2_1a9bb57cf34346cfaf48a54f4da3679487)(TArray< [FRHAPI_PlayerRankResponseV2](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2) > NewValue)|Sets the value of UpdatedPlayers.|
## Public Attributes



### `UpdatedPlayers` <a id="structFRHAPI__PlayerRankUpdateResponseV2_1ac8f9ea8f222cf7fac5ac1e6b87014bee"></a>

`TArray<FRHAPI_PlayerRankResponseV2> FRHAPI_PlayerRankUpdateResponseV2::UpdatedPlayers`

List of players and their updated ranks.





## Public Functions



### `FromJson` <a id="structFRHAPI__PlayerRankUpdateResponseV2_1a270e1f6dc1443bbbf698b20c401208cd"></a>

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



### `WriteJson` <a id="structFRHAPI__PlayerRankUpdateResponseV2_1a0da78137c2780126c9c4f34da659a108"></a>

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



### `GetUpdatedPlayers` <a id="structFRHAPI__PlayerRankUpdateResponseV2_1ae6bcc6afd0e3fb680be6bec0a7174f50"></a>

TArray< [FRHAPI_PlayerRankResponseV2](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2) > & GetUpdatedPlayers()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of UpdatedPlayers.




### `GetUpdatedPlayers` <a id="structFRHAPI__PlayerRankUpdateResponseV2_1a1b9cc5e75951d3137566c74e468c85f4"></a>

const TArray< [FRHAPI_PlayerRankResponseV2](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2) > & GetUpdatedPlayers()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of UpdatedPlayers.




### `SetUpdatedPlayers` <a id="structFRHAPI__PlayerRankUpdateResponseV2_1a9bb57cf34346cfaf48a54f4da3679487"></a>

void SetUpdatedPlayers(TArray< [FRHAPI_PlayerRankResponseV2](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PlayerRankResponseV2](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2) >|NewValue|

#### Description

Sets the value of UpdatedPlayers.





