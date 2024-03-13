---
title: FRHAPI_TokenRequest Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

OAuth2 Token Request.

## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_OAuthGrantType|[GrantType](/unreal-plugins/all/structfrhapi__tokenrequest/#structFRHAPI__TokenRequest_1a45139537ed91d6ab4f23f2e92475fcde)|OAuth2 grant type.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__tokenrequest/#structFRHAPI__TokenRequest_1a16926f69d0289f119a3f8afa46462780)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__tokenrequest/#structFRHAPI__TokenRequest_1ac6a1c593c454eca89fbab0bfeb2b3ab8)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_OAuthGrantType &|[GetGrantType](/unreal-plugins/all/structfrhapi__tokenrequest/#structFRHAPI__TokenRequest_1af877a2666bfbcc00776b4cabb10be0c1)()|Gets the value of GrantType.|
|const ERHAPI_OAuthGrantType &|[GetGrantType](/unreal-plugins/all/structfrhapi__tokenrequest/#structFRHAPI__TokenRequest_1a42354cce6c75b41d7a086d04e271e4b3)()|Gets the value of GrantType.|
|void|[SetGrantType](/unreal-plugins/all/structfrhapi__tokenrequest/#structFRHAPI__TokenRequest_1afa21d677b63a9882f3ec72522fcbee5e)(ERHAPI_OAuthGrantType NewValue)|Sets the value of GrantType.|
## Public Attributes



### `GrantType` <a id="structFRHAPI__TokenRequest_1a45139537ed91d6ab4f23f2e92475fcde"></a>

`ERHAPI_OAuthGrantType FRHAPI_TokenRequest::GrantType`

OAuth2 grant type.





## Public Functions



### `FromJson` <a id="structFRHAPI__TokenRequest_1a16926f69d0289f119a3f8afa46462780"></a>

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



### `WriteJson` <a id="structFRHAPI__TokenRequest_1ac6a1c593c454eca89fbab0bfeb2b3ab8"></a>

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



### `GetGrantType` <a id="structFRHAPI__TokenRequest_1af877a2666bfbcc00776b4cabb10be0c1"></a>

ERHAPI_OAuthGrantType & GetGrantType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of GrantType.




### `GetGrantType` <a id="structFRHAPI__TokenRequest_1a42354cce6c75b41d7a086d04e271e4b3"></a>

const ERHAPI_OAuthGrantType & GetGrantType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of GrantType.




### `SetGrantType` <a id="structFRHAPI__TokenRequest_1afa21d677b63a9882f3ec72522fcbee5e"></a>

void SetGrantType(ERHAPI_OAuthGrantType NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_OAuthGrantType|NewValue|

#### Description

Sets the value of GrantType.





