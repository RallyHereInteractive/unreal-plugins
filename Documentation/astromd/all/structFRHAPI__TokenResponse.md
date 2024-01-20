---
title: FRHAPI_TokenResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

OAuth2 Token Response.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[AccessToken](/unreal-plugins/all/structfrhapi__tokenresponse/#structFRHAPI__TokenResponse_1ae69b45cbeec5ccbc80e3ea2374d5397c)|Result access token.|
|FString|[TokenType](/unreal-plugins/all/structfrhapi__tokenresponse/#structFRHAPI__TokenResponse_1acd10a81c1610bcddf359e92696b63489)|Result token type.|
|FString|[RefreshToken_Optional](/unreal-plugins/all/structfrhapi__tokenresponse/#structFRHAPI__TokenResponse_1ac68a5e1154530c8e88fb8ac2f508ab72)|Result refresh token that can be used to get new access tokens.|
|bool|[RefreshToken_IsSet](/unreal-plugins/all/structfrhapi__tokenresponse/#structFRHAPI__TokenResponse_1af8d74d0749fb2de5acdf4acfe60272f3)|true if RefreshToken_Optional has been set to a value|
|int32|[ExpiresIn](/unreal-plugins/all/structfrhapi__tokenresponse/#structFRHAPI__TokenResponse_1a86483ede9759e7f6e91e8699982e7d2e)|Result access token expiration time in seconds.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__tokenresponse/#structFRHAPI__TokenResponse_1aa9593a8aca941473bdec4de63517e340)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__tokenresponse/#structFRHAPI__TokenResponse_1a667fb38cc9a4612f7b20de637d509c56)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetAccessToken](/unreal-plugins/all/structfrhapi__tokenresponse/#structFRHAPI__TokenResponse_1ae02bb6e092058e18ccf61352b24820b5)()|Gets the value of AccessToken.|
|const FString &|[GetAccessToken](/unreal-plugins/all/structfrhapi__tokenresponse/#structFRHAPI__TokenResponse_1ad604cb33c5feaf308d4c76460ec5bb41)()|Gets the value of AccessToken.|
|void|[SetAccessToken](/unreal-plugins/all/structfrhapi__tokenresponse/#structFRHAPI__TokenResponse_1a51f07bcf002ad820887147d4dfc4e279)(FString NewValue)|Sets the value of AccessToken.|
|FString &|[GetTokenType](/unreal-plugins/all/structfrhapi__tokenresponse/#structFRHAPI__TokenResponse_1a5676d4c5ee5f92f90d90372734b0d073)()|Gets the value of TokenType.|
|const FString &|[GetTokenType](/unreal-plugins/all/structfrhapi__tokenresponse/#structFRHAPI__TokenResponse_1a5247437cd4681320b756bf9974ab5e86)()|Gets the value of TokenType.|
|void|[SetTokenType](/unreal-plugins/all/structfrhapi__tokenresponse/#structFRHAPI__TokenResponse_1ac357edf097024f10de5077248e04d7d5)(FString NewValue)|Sets the value of TokenType.|
|FString &|[GetRefreshToken](/unreal-plugins/all/structfrhapi__tokenresponse/#structFRHAPI__TokenResponse_1aeb7b6f2350eefadc8ad42799b2d937ef)()|Gets the value of RefreshToken_Optional, regardless of it having been set.|
|const FString &|[GetRefreshToken](/unreal-plugins/all/structfrhapi__tokenresponse/#structFRHAPI__TokenResponse_1aa39c5af160236c69e2f47f0ea4d440c9)()|Gets the value of RefreshToken_Optional, regardless of it having been set.|
|const FString &|[GetRefreshToken](/unreal-plugins/all/structfrhapi__tokenresponse/#structFRHAPI__TokenResponse_1af2e4a443449b46145042457026d9a90a)(const FString & DefaultValue)|Gets the value of RefreshToken_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetRefreshToken](/unreal-plugins/all/structfrhapi__tokenresponse/#structFRHAPI__TokenResponse_1a7d6ac2dde662779996bfa707f5e8f4aa)(FString & OutValue)|Fills OutValue with the value of RefreshToken_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetRefreshTokenOrNull](/unreal-plugins/all/structfrhapi__tokenresponse/#structFRHAPI__TokenResponse_1a8361fb23129ce5754854ec8df8a37caf)()|Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetRefreshTokenOrNull](/unreal-plugins/all/structfrhapi__tokenresponse/#structFRHAPI__TokenResponse_1a24388acb3504f05e34ae5418c123c4c4)()|Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetRefreshToken](/unreal-plugins/all/structfrhapi__tokenresponse/#structFRHAPI__TokenResponse_1a8d8ee7e703a1aa50e5a9ba430c1c853e)(FString NewValue)|Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true.|
|void|[ClearRefreshToken](/unreal-plugins/all/structfrhapi__tokenresponse/#structFRHAPI__TokenResponse_1a74cbde90c757cf242fc68161279ebfb8)()|Clears the value of RefreshToken_Optional and sets RefreshToken_IsSet to false.|
|int32 &|[GetExpiresIn](/unreal-plugins/all/structfrhapi__tokenresponse/#structFRHAPI__TokenResponse_1a6756fc1ebbcd784b9a872ad5262fe371)()|Gets the value of ExpiresIn.|
|const int32 &|[GetExpiresIn](/unreal-plugins/all/structfrhapi__tokenresponse/#structFRHAPI__TokenResponse_1a190123e7780c4e2e63fe2dee23ab5bc8)()|Gets the value of ExpiresIn.|
|void|[SetExpiresIn](/unreal-plugins/all/structfrhapi__tokenresponse/#structFRHAPI__TokenResponse_1ae472d563faf9b86d29b8f2250919d0be)(int32 NewValue)|Sets the value of ExpiresIn.|
|bool|[IsExpiresInDefaultValue](/unreal-plugins/all/structfrhapi__tokenresponse/#structFRHAPI__TokenResponse_1aaa2d99ce14af9262ac9c281daa9dd414)()|Returns true if ExpiresIn matches the default value.|
|void|[SetExpiresInToDefault](/unreal-plugins/all/structfrhapi__tokenresponse/#structFRHAPI__TokenResponse_1a22b23057ad1e9278d2e1d605bd3edaae)()|Sets the value of ExpiresIn to its default|
## Public Attributes



### `AccessToken` <a id="structFRHAPI__TokenResponse_1ae69b45cbeec5ccbc80e3ea2374d5397c"></a>

`FString FRHAPI_TokenResponse::AccessToken`

Result access token.




### `TokenType` <a id="structFRHAPI__TokenResponse_1acd10a81c1610bcddf359e92696b63489"></a>

`FString FRHAPI_TokenResponse::TokenType`

Result token type.




### `RefreshToken_Optional` <a id="structFRHAPI__TokenResponse_1ac68a5e1154530c8e88fb8ac2f508ab72"></a>

`FString FRHAPI_TokenResponse::RefreshToken_Optional`

Result refresh token that can be used to get new access tokens.




### `RefreshToken_IsSet` <a id="structFRHAPI__TokenResponse_1af8d74d0749fb2de5acdf4acfe60272f3"></a>

`bool FRHAPI_TokenResponse::RefreshToken_IsSet`

true if RefreshToken_Optional has been set to a value




### `ExpiresIn` <a id="structFRHAPI__TokenResponse_1a86483ede9759e7f6e91e8699982e7d2e"></a>

`int32 FRHAPI_TokenResponse::ExpiresIn`

Result access token expiration time in seconds.





## Public Functions



### `FromJson` <a id="structFRHAPI__TokenResponse_1aa9593a8aca941473bdec4de63517e340"></a>

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



### `WriteJson` <a id="structFRHAPI__TokenResponse_1a667fb38cc9a4612f7b20de637d509c56"></a>

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



### `GetAccessToken` <a id="structFRHAPI__TokenResponse_1ae02bb6e092058e18ccf61352b24820b5"></a>

FString & GetAccessToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AccessToken.




### `GetAccessToken` <a id="structFRHAPI__TokenResponse_1ad604cb33c5feaf308d4c76460ec5bb41"></a>

const FString & GetAccessToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AccessToken.




### `SetAccessToken` <a id="structFRHAPI__TokenResponse_1a51f07bcf002ad820887147d4dfc4e279"></a>

void SetAccessToken(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of AccessToken.




### `GetTokenType` <a id="structFRHAPI__TokenResponse_1a5676d4c5ee5f92f90d90372734b0d073"></a>

FString & GetTokenType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TokenType.




### `GetTokenType` <a id="structFRHAPI__TokenResponse_1a5247437cd4681320b756bf9974ab5e86"></a>

const FString & GetTokenType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TokenType.




### `SetTokenType` <a id="structFRHAPI__TokenResponse_1ac357edf097024f10de5077248e04d7d5"></a>

void SetTokenType(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of TokenType.




### `GetRefreshToken` <a id="structFRHAPI__TokenResponse_1aeb7b6f2350eefadc8ad42799b2d937ef"></a>

FString & GetRefreshToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RefreshToken_Optional, regardless of it having been set.




### `GetRefreshToken` <a id="structFRHAPI__TokenResponse_1aa39c5af160236c69e2f47f0ea4d440c9"></a>

const FString & GetRefreshToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RefreshToken_Optional, regardless of it having been set.




### `GetRefreshToken` <a id="structFRHAPI__TokenResponse_1af2e4a443449b46145042457026d9a90a"></a>

const FString & GetRefreshToken(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of RefreshToken_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetRefreshToken` <a id="structFRHAPI__TokenResponse_1a7d6ac2dde662779996bfa707f5e8f4aa"></a>

bool GetRefreshToken(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of RefreshToken_Optional and returns true if it has been set, otherwise returns false.




### `GetRefreshTokenOrNull` <a id="structFRHAPI__TokenResponse_1a8361fb23129ce5754854ec8df8a37caf"></a>

FString * GetRefreshTokenOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.




### `GetRefreshTokenOrNull` <a id="structFRHAPI__TokenResponse_1a24388acb3504f05e34ae5418c123c4c4"></a>

const FString * GetRefreshTokenOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RefreshToken_Optional, if it has been set, otherwise returns nullptr.




### `SetRefreshToken` <a id="structFRHAPI__TokenResponse_1a8d8ee7e703a1aa50e5a9ba430c1c853e"></a>

void SetRefreshToken(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of RefreshToken_Optional and also sets RefreshToken_IsSet to true.




### `ClearRefreshToken` <a id="structFRHAPI__TokenResponse_1a74cbde90c757cf242fc68161279ebfb8"></a>

void ClearRefreshToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of RefreshToken_Optional and sets RefreshToken_IsSet to false.




### `GetExpiresIn` <a id="structFRHAPI__TokenResponse_1a6756fc1ebbcd784b9a872ad5262fe371"></a>

int32 & GetExpiresIn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ExpiresIn.




### `GetExpiresIn` <a id="structFRHAPI__TokenResponse_1a190123e7780c4e2e63fe2dee23ab5bc8"></a>

const int32 & GetExpiresIn()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ExpiresIn.




### `SetExpiresIn` <a id="structFRHAPI__TokenResponse_1ae472d563faf9b86d29b8f2250919d0be"></a>

void SetExpiresIn(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of ExpiresIn.




### `IsExpiresInDefaultValue` <a id="structFRHAPI__TokenResponse_1aaa2d99ce14af9262ac9c281daa9dd414"></a>

bool IsExpiresInDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if ExpiresIn matches the default value.




### `SetExpiresInToDefault` <a id="structFRHAPI__TokenResponse_1a22b23057ad1e9278d2e1d605bd3edaae"></a>

void SetExpiresInToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of ExpiresIn to its default





