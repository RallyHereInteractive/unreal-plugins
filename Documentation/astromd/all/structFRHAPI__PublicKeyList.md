---
title: FRHAPI_PublicKeyList Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

List of public keys for verifying Access Token JWTs. This is in the JWK Set format as defined in https://datatracker.ietf.org/doc/html/rfc7517#section-5.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_PublicKey](/unreal-plugins/all/structfrhapi__publickey/#structFRHAPI__PublicKey) >|[Keys](/unreal-plugins/all/structfrhapi__publickeylist/#structFRHAPI__PublicKeyList_1a9f2304e8a8edbb03597d352a4a60415a)|List of public keys for verifying Access Token JWTs.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__publickeylist/#structFRHAPI__PublicKeyList_1a18900c214f8cb8ca4164d3f2a2f31012)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__publickeylist/#structFRHAPI__PublicKeyList_1a8c25ebaf73ef9daefeab572798243793)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_PublicKey](/unreal-plugins/all/structfrhapi__publickey/#structFRHAPI__PublicKey) > &|[GetKeys](/unreal-plugins/all/structfrhapi__publickeylist/#structFRHAPI__PublicKeyList_1a28b2056cffd0315aa4069ff32bc02e2b)()|Gets the value of Keys.|
|const TArray< [FRHAPI_PublicKey](/unreal-plugins/all/structfrhapi__publickey/#structFRHAPI__PublicKey) > &|[GetKeys](/unreal-plugins/all/structfrhapi__publickeylist/#structFRHAPI__PublicKeyList_1a13568df60d8f7252b26a2e5b3806b170)()|Gets the value of Keys.|
|void|[SetKeys](/unreal-plugins/all/structfrhapi__publickeylist/#structFRHAPI__PublicKeyList_1a9b847760e848f640d554806ff6d163e0)(TArray< [FRHAPI_PublicKey](/unreal-plugins/all/structfrhapi__publickey/#structFRHAPI__PublicKey) > NewValue)|Sets the value of Keys.|
## Public Attributes



### `Keys` <a id="structFRHAPI__PublicKeyList_1a9f2304e8a8edbb03597d352a4a60415a"></a>

`TArray<FRHAPI_PublicKey> FRHAPI_PublicKeyList::Keys`

List of public keys for verifying Access Token JWTs.





## Public Functions



### `FromJson` <a id="structFRHAPI__PublicKeyList_1a18900c214f8cb8ca4164d3f2a2f31012"></a>

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



### `WriteJson` <a id="structFRHAPI__PublicKeyList_1a8c25ebaf73ef9daefeab572798243793"></a>

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



### `GetKeys` <a id="structFRHAPI__PublicKeyList_1a28b2056cffd0315aa4069ff32bc02e2b"></a>

TArray< [FRHAPI_PublicKey](/unreal-plugins/all/structfrhapi__publickey/#structFRHAPI__PublicKey) > & GetKeys()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Keys.




### `GetKeys` <a id="structFRHAPI__PublicKeyList_1a13568df60d8f7252b26a2e5b3806b170"></a>

const TArray< [FRHAPI_PublicKey](/unreal-plugins/all/structfrhapi__publickey/#structFRHAPI__PublicKey) > & GetKeys()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Keys.




### `SetKeys` <a id="structFRHAPI__PublicKeyList_1a9b847760e848f640d554806ff6d163e0"></a>

void SetKeys(TArray< [FRHAPI_PublicKey](/unreal-plugins/all/structfrhapi__publickey/#structFRHAPI__PublicKey) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PublicKey](/unreal-plugins/all/structfrhapi__publickey/#structFRHAPI__PublicKey) >|NewValue|

#### Description

Sets the value of Keys.





