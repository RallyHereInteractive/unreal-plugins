---
title: FRHAPI_MatchCreateResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

The response to successfully creating a match on a session.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[MatchId](/unreal-plugins/all/structfrhapi__matchcreateresponse/#structFRHAPI__MatchCreateResponse_1a574a16604b3d7814e47e299a916f33e4)|Unique ID.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__matchcreateresponse/#structFRHAPI__MatchCreateResponse_1ae2b77604ffbe30ae093ca33bb0b7e1c5)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__matchcreateresponse/#structFRHAPI__MatchCreateResponse_1a2ed093741fe10635b28bc6f7ee4ed9a8)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetMatchId](/unreal-plugins/all/structfrhapi__matchcreateresponse/#structFRHAPI__MatchCreateResponse_1afe4221f38cae3d60c512bb18c1c2982c)()|Gets the value of MatchId.|
|const FString &|[GetMatchId](/unreal-plugins/all/structfrhapi__matchcreateresponse/#structFRHAPI__MatchCreateResponse_1a8e1a23a5b76c00843a12607ba3fd3c18)()|Gets the value of MatchId.|
|void|[SetMatchId](/unreal-plugins/all/structfrhapi__matchcreateresponse/#structFRHAPI__MatchCreateResponse_1a9b0280579b71fa38a137a46f80585d8d)(FString NewValue)|Sets the value of MatchId.|
## Public Attributes



### `MatchId` <a id="structFRHAPI__MatchCreateResponse_1a574a16604b3d7814e47e299a916f33e4"></a>

`FString FRHAPI_MatchCreateResponse::MatchId`

Unique ID.





## Public Functions



### `FromJson` <a id="structFRHAPI__MatchCreateResponse_1ae2b77604ffbe30ae093ca33bb0b7e1c5"></a>

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



### `WriteJson` <a id="structFRHAPI__MatchCreateResponse_1a2ed093741fe10635b28bc6f7ee4ed9a8"></a>

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



### `GetMatchId` <a id="structFRHAPI__MatchCreateResponse_1afe4221f38cae3d60c512bb18c1c2982c"></a>

FString & GetMatchId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchId.




### `GetMatchId` <a id="structFRHAPI__MatchCreateResponse_1a8e1a23a5b76c00843a12607ba3fd3c18"></a>

const FString & GetMatchId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchId.




### `SetMatchId` <a id="structFRHAPI__MatchCreateResponse_1a9b0280579b71fa38a137a46f80585d8d"></a>

void SetMatchId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of MatchId.





