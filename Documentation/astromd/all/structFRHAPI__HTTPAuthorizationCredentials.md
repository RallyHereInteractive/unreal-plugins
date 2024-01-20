---
title: FRHAPI_HTTPAuthorizationCredentials Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[Scheme](/unreal-plugins/all/structfrhapi__httpauthorizationcredentials/#structFRHAPI__HTTPAuthorizationCredentials_1acdf51500fdb1853581158ae208ed15b5)||
|FString|[Credentials](/unreal-plugins/all/structfrhapi__httpauthorizationcredentials/#structFRHAPI__HTTPAuthorizationCredentials_1a748e9137cea3582ed7632f8de3c7bcd5)||
|bool|[FromJson](/unreal-plugins/all/structfrhapi__httpauthorizationcredentials/#structFRHAPI__HTTPAuthorizationCredentials_1a40eb8f69601b29d2626f411590c2d514)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__httpauthorizationcredentials/#structFRHAPI__HTTPAuthorizationCredentials_1ad814e7f5c9b7c7505d59b18f54b99ece)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetScheme](/unreal-plugins/all/structfrhapi__httpauthorizationcredentials/#structFRHAPI__HTTPAuthorizationCredentials_1a8c832e41d86eee1857be7993008fa3df)()|Gets the value of Scheme.|
|const FString &|[GetScheme](/unreal-plugins/all/structfrhapi__httpauthorizationcredentials/#structFRHAPI__HTTPAuthorizationCredentials_1a2ef520df7b23c50027ae5f3ff1df99a0)()|Gets the value of Scheme.|
|void|[SetScheme](/unreal-plugins/all/structfrhapi__httpauthorizationcredentials/#structFRHAPI__HTTPAuthorizationCredentials_1a43bfb08250e1a4ecb08b1646838c878f)(FString NewValue)|Sets the value of Scheme.|
|FString &|[GetCredentials](/unreal-plugins/all/structfrhapi__httpauthorizationcredentials/#structFRHAPI__HTTPAuthorizationCredentials_1a725ad2d9e76604f96c85913795913e7e)()|Gets the value of Credentials.|
|const FString &|[GetCredentials](/unreal-plugins/all/structfrhapi__httpauthorizationcredentials/#structFRHAPI__HTTPAuthorizationCredentials_1ac795cbc746ac22fa346ad9ff628f80a6)()|Gets the value of Credentials.|
|void|[SetCredentials](/unreal-plugins/all/structfrhapi__httpauthorizationcredentials/#structFRHAPI__HTTPAuthorizationCredentials_1adce62c37cb9006909642c84a056f9d10)(FString NewValue)|Sets the value of Credentials.|
## Public Attributes



### `Scheme` <a id="structFRHAPI__HTTPAuthorizationCredentials_1acdf51500fdb1853581158ae208ed15b5"></a>

`FString FRHAPI_HTTPAuthorizationCredentials::Scheme`






### `Credentials` <a id="structFRHAPI__HTTPAuthorizationCredentials_1a748e9137cea3582ed7632f8de3c7bcd5"></a>

`FString FRHAPI_HTTPAuthorizationCredentials::Credentials`







## Public Functions



### `FromJson` <a id="structFRHAPI__HTTPAuthorizationCredentials_1a40eb8f69601b29d2626f411590c2d514"></a>

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



### `WriteJson` <a id="structFRHAPI__HTTPAuthorizationCredentials_1ad814e7f5c9b7c7505d59b18f54b99ece"></a>

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



### `GetScheme` <a id="structFRHAPI__HTTPAuthorizationCredentials_1a8c832e41d86eee1857be7993008fa3df"></a>

FString & GetScheme()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Scheme.




### `GetScheme` <a id="structFRHAPI__HTTPAuthorizationCredentials_1a2ef520df7b23c50027ae5f3ff1df99a0"></a>

const FString & GetScheme()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Scheme.




### `SetScheme` <a id="structFRHAPI__HTTPAuthorizationCredentials_1a43bfb08250e1a4ecb08b1646838c878f"></a>

void SetScheme(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Scheme.




### `GetCredentials` <a id="structFRHAPI__HTTPAuthorizationCredentials_1a725ad2d9e76604f96c85913795913e7e"></a>

FString & GetCredentials()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Credentials.




### `GetCredentials` <a id="structFRHAPI__HTTPAuthorizationCredentials_1ac795cbc746ac22fa346ad9ff628f80a6"></a>

const FString & GetCredentials()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Credentials.




### `SetCredentials` <a id="structFRHAPI__HTTPAuthorizationCredentials_1adce62c37cb9006909642c84a056f9d10"></a>

void SetCredentials(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Credentials.





