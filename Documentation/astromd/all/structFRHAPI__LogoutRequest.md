---
title: FRHAPI_LogoutRequest Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Logout request.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[RefreshToken](/unreal-plugins/all/structfrhapi__logoutrequest/#structFRHAPI__LogoutRequest_1abc7366e4cbef7e9714bad37ee03609ff)|Refresh token to be invalidated.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__logoutrequest/#structFRHAPI__LogoutRequest_1a053f98882dcfa90b09399e9f7b39fdff)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__logoutrequest/#structFRHAPI__LogoutRequest_1a25875ea79acb34006c6ef6407e86c25a)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetRefreshToken](/unreal-plugins/all/structfrhapi__logoutrequest/#structFRHAPI__LogoutRequest_1af2e3e7f30a50267b81a354d0ceb25009)()|Gets the value of RefreshToken.|
|const FString &|[GetRefreshToken](/unreal-plugins/all/structfrhapi__logoutrequest/#structFRHAPI__LogoutRequest_1a6764bdc3e83014b3521a4e98673ba2a7)()|Gets the value of RefreshToken.|
|void|[SetRefreshToken](/unreal-plugins/all/structfrhapi__logoutrequest/#structFRHAPI__LogoutRequest_1aa24c1170bc154e85eb1151dc627ce6b0)(FString NewValue)|Sets the value of RefreshToken.|
## Public Attributes



### `RefreshToken` <a id="structFRHAPI__LogoutRequest_1abc7366e4cbef7e9714bad37ee03609ff"></a>

`FString FRHAPI_LogoutRequest::RefreshToken`

Refresh token to be invalidated.





## Public Functions



### `FromJson` <a id="structFRHAPI__LogoutRequest_1a053f98882dcfa90b09399e9f7b39fdff"></a>

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



### `WriteJson` <a id="structFRHAPI__LogoutRequest_1a25875ea79acb34006c6ef6407e86c25a"></a>

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



### `GetRefreshToken` <a id="structFRHAPI__LogoutRequest_1af2e3e7f30a50267b81a354d0ceb25009"></a>

FString & GetRefreshToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RefreshToken.




### `GetRefreshToken` <a id="structFRHAPI__LogoutRequest_1a6764bdc3e83014b3521a4e98673ba2a7"></a>

const FString & GetRefreshToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RefreshToken.




### `SetRefreshToken` <a id="structFRHAPI__LogoutRequest_1aa24c1170bc154e85eb1151dc627ce6b0"></a>

void SetRefreshToken(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of RefreshToken.





