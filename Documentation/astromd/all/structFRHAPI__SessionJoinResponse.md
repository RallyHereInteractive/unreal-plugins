---
title: FRHAPI_SessionJoinResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Response when a player successfully joins a session.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[SessionId](/unreal-plugins/all/structfrhapi__sessionjoinresponse/#structFRHAPI__SessionJoinResponse_1a78b2bc9860f7b5620c9968d290884257)|Session ID the player is now a part of.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__sessionjoinresponse/#structFRHAPI__SessionJoinResponse_1a499044f9b28f5d1619397094f5b777b9)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__sessionjoinresponse/#structFRHAPI__SessionJoinResponse_1a29e24fca444e7af72874cce8b76a27a6)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetSessionId](/unreal-plugins/all/structfrhapi__sessionjoinresponse/#structFRHAPI__SessionJoinResponse_1aec0fea30126379f82c3b0b92b40ee9c2)()|Gets the value of SessionId.|
|const FString &|[GetSessionId](/unreal-plugins/all/structfrhapi__sessionjoinresponse/#structFRHAPI__SessionJoinResponse_1a5864fade9558dad663e8f6cccf769468)()|Gets the value of SessionId.|
|void|[SetSessionId](/unreal-plugins/all/structfrhapi__sessionjoinresponse/#structFRHAPI__SessionJoinResponse_1ae84390873c78919f4076dbe7834e197c)(FString NewValue)|Sets the value of SessionId.|
## Public Attributes



### `SessionId` <a id="structFRHAPI__SessionJoinResponse_1a78b2bc9860f7b5620c9968d290884257"></a>

`FString FRHAPI_SessionJoinResponse::SessionId`

Session ID the player is now a part of.





## Public Functions



### `FromJson` <a id="structFRHAPI__SessionJoinResponse_1a499044f9b28f5d1619397094f5b777b9"></a>

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



### `WriteJson` <a id="structFRHAPI__SessionJoinResponse_1a29e24fca444e7af72874cce8b76a27a6"></a>

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



### `GetSessionId` <a id="structFRHAPI__SessionJoinResponse_1aec0fea30126379f82c3b0b92b40ee9c2"></a>

FString & GetSessionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SessionId.




### `GetSessionId` <a id="structFRHAPI__SessionJoinResponse_1a5864fade9558dad663e8f6cccf769468"></a>

const FString & GetSessionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SessionId.




### `SetSessionId` <a id="structFRHAPI__SessionJoinResponse_1ae84390873c78919f4076dbe7834e197c"></a>

void SetSessionId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of SessionId.





