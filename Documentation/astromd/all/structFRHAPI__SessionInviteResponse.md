---
title: FRHAPI_SessionInviteResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Response to a request to update a session cohort.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_SessionPlayerUpdateResponse](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse) >|[Players](/unreal-plugins/all/structfrhapi__sessioninviteresponse/#structFRHAPI__SessionInviteResponse_1a54175b9a9824d8ad9049525d36f6d928)|List of players that were updated.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__sessioninviteresponse/#structFRHAPI__SessionInviteResponse_1a0aa90122cafc1d49cb41d64bc3443341)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__sessioninviteresponse/#structFRHAPI__SessionInviteResponse_1a5747dd40cd7f706702775f798f6f5886)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_SessionPlayerUpdateResponse](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse) > &|[GetPlayers](/unreal-plugins/all/structfrhapi__sessioninviteresponse/#structFRHAPI__SessionInviteResponse_1a532edad73af915371846c13fe829b3bf)()|Gets the value of Players.|
|const TArray< [FRHAPI_SessionPlayerUpdateResponse](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse) > &|[GetPlayers](/unreal-plugins/all/structfrhapi__sessioninviteresponse/#structFRHAPI__SessionInviteResponse_1a28a656155eda1c1cb8ce3f5d43ed8907)()|Gets the value of Players.|
|void|[SetPlayers](/unreal-plugins/all/structfrhapi__sessioninviteresponse/#structFRHAPI__SessionInviteResponse_1ae6c0f9ed3f963ca3940fb554c19b847a)(TArray< [FRHAPI_SessionPlayerUpdateResponse](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse) > NewValue)|Sets the value of Players.|
## Public Attributes



### `Players` <a id="structFRHAPI__SessionInviteResponse_1a54175b9a9824d8ad9049525d36f6d928"></a>

`TArray<FRHAPI_SessionPlayerUpdateResponse> FRHAPI_SessionInviteResponse::Players`

List of players that were updated.





## Public Functions



### `FromJson` <a id="structFRHAPI__SessionInviteResponse_1a0aa90122cafc1d49cb41d64bc3443341"></a>

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



### `WriteJson` <a id="structFRHAPI__SessionInviteResponse_1a5747dd40cd7f706702775f798f6f5886"></a>

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



### `GetPlayers` <a id="structFRHAPI__SessionInviteResponse_1a532edad73af915371846c13fe829b3bf"></a>

TArray< [FRHAPI_SessionPlayerUpdateResponse](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse) > & GetPlayers()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Players.




### `GetPlayers` <a id="structFRHAPI__SessionInviteResponse_1a28a656155eda1c1cb8ce3f5d43ed8907"></a>

const TArray< [FRHAPI_SessionPlayerUpdateResponse](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse) > & GetPlayers()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Players.




### `SetPlayers` <a id="structFRHAPI__SessionInviteResponse_1ae6c0f9ed3f963ca3940fb554c19b847a"></a>

void SetPlayers(TArray< [FRHAPI_SessionPlayerUpdateResponse](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_SessionPlayerUpdateResponse](/unreal-plugins/all/structfrhapi__sessionplayerupdateresponse/#structFRHAPI__SessionPlayerUpdateResponse) >|NewValue|

#### Description

Sets the value of Players.





