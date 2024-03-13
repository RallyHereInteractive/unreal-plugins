---
title: FRHAPI_PublicKey Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Public key for verifying Access Token JWTs This is in the JWK format as defined in https://datatracker.ietf.org/doc/html/rfc7517#section-4.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[Kid](/unreal-plugins/all/structfrhapi__publickey/#structFRHAPI__PublicKey_1a985410114ab7cd588e0d558f7fbfbf9a)|Key ID - see https://datatracker.ietf.org/doc/html/rfc7517#section-4.5.|
|FString|[Kty](/unreal-plugins/all/structfrhapi__publickey/#structFRHAPI__PublicKey_1a5e3b2f22a39f6191ffeef87b61815224)|Key Type - see https://datatracker.ietf.org/doc/html/rfc7517#section-4.1.|
|FString|[N](/unreal-plugins/all/structfrhapi__publickey/#structFRHAPI__PublicKey_1a1544c7fa9e970f9cdea72dca9f7278af)|Modulus - see https://www.rfc-editor.org/rfc/rfc7518.html#section-6.3.1.|
|FString|[E](/unreal-plugins/all/structfrhapi__publickey/#structFRHAPI__PublicKey_1ab0b9192d5c959bfef2be40a31dd112d3)|Exponent - see https://www.rfc-editor.org/rfc/rfc7518.html#section-6.3.1.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__publickey/#structFRHAPI__PublicKey_1a7d39c5fc6b26257bf14265b4299d28ef)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__publickey/#structFRHAPI__PublicKey_1af2b3c8f6bd481c19e8d850e009b6cc17)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetKid](/unreal-plugins/all/structfrhapi__publickey/#structFRHAPI__PublicKey_1a60335aab0338252e58f6c5685ef338f0)()|Gets the value of Kid.|
|const FString &|[GetKid](/unreal-plugins/all/structfrhapi__publickey/#structFRHAPI__PublicKey_1a6c78913f542bed2ac985f8a4c42860f7)()|Gets the value of Kid.|
|void|[SetKid](/unreal-plugins/all/structfrhapi__publickey/#structFRHAPI__PublicKey_1a60aaf4fd046da89bb52c83e7405a0956)(FString NewValue)|Sets the value of Kid.|
|FString &|[GetKty](/unreal-plugins/all/structfrhapi__publickey/#structFRHAPI__PublicKey_1a79925594fdedf7e4ef6a7ecace06535c)()|Gets the value of Kty.|
|const FString &|[GetKty](/unreal-plugins/all/structfrhapi__publickey/#structFRHAPI__PublicKey_1aa5681183d52a03df416cf243d208ea25)()|Gets the value of Kty.|
|void|[SetKty](/unreal-plugins/all/structfrhapi__publickey/#structFRHAPI__PublicKey_1a25aa7d4686080296ab293b1b5bfa6e92)(FString NewValue)|Sets the value of Kty.|
|FString &|[GetN](/unreal-plugins/all/structfrhapi__publickey/#structFRHAPI__PublicKey_1a99ec123987afff8a97cb4299b0e7b1ae)()|Gets the value of N.|
|const FString &|[GetN](/unreal-plugins/all/structfrhapi__publickey/#structFRHAPI__PublicKey_1a5ed9ccc83530f2d2ceb797742ee42477)()|Gets the value of N.|
|void|[SetN](/unreal-plugins/all/structfrhapi__publickey/#structFRHAPI__PublicKey_1a75ba94b0b78a76524031305103605d70)(FString NewValue)|Sets the value of N.|
|FString &|[GetE](/unreal-plugins/all/structfrhapi__publickey/#structFRHAPI__PublicKey_1ad23e8627ed6d0f3acf51ae00f3a291b9)()|Gets the value of E.|
|const FString &|[GetE](/unreal-plugins/all/structfrhapi__publickey/#structFRHAPI__PublicKey_1ad6e984160eb9de3a3fe4cda34b837827)()|Gets the value of E.|
|void|[SetE](/unreal-plugins/all/structfrhapi__publickey/#structFRHAPI__PublicKey_1aff75e812a3346e9fc253048d7c40a42a)(FString NewValue)|Sets the value of E.|
## Public Attributes



### `Kid` <a id="structFRHAPI__PublicKey_1a985410114ab7cd588e0d558f7fbfbf9a"></a>

`FString FRHAPI_PublicKey::Kid`

Key ID - see https://datatracker.ietf.org/doc/html/rfc7517#section-4.5.




### `Kty` <a id="structFRHAPI__PublicKey_1a5e3b2f22a39f6191ffeef87b61815224"></a>

`FString FRHAPI_PublicKey::Kty`

Key Type - see https://datatracker.ietf.org/doc/html/rfc7517#section-4.1.




### `N` <a id="structFRHAPI__PublicKey_1a1544c7fa9e970f9cdea72dca9f7278af"></a>

`FString FRHAPI_PublicKey::N`

Modulus - see https://www.rfc-editor.org/rfc/rfc7518.html#section-6.3.1.




### `E` <a id="structFRHAPI__PublicKey_1ab0b9192d5c959bfef2be40a31dd112d3"></a>

`FString FRHAPI_PublicKey::E`

Exponent - see https://www.rfc-editor.org/rfc/rfc7518.html#section-6.3.1.





## Public Functions



### `FromJson` <a id="structFRHAPI__PublicKey_1a7d39c5fc6b26257bf14265b4299d28ef"></a>

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



### `WriteJson` <a id="structFRHAPI__PublicKey_1af2b3c8f6bd481c19e8d850e009b6cc17"></a>

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



### `GetKid` <a id="structFRHAPI__PublicKey_1a60335aab0338252e58f6c5685ef338f0"></a>

FString & GetKid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Kid.




### `GetKid` <a id="structFRHAPI__PublicKey_1a6c78913f542bed2ac985f8a4c42860f7"></a>

const FString & GetKid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Kid.




### `SetKid` <a id="structFRHAPI__PublicKey_1a60aaf4fd046da89bb52c83e7405a0956"></a>

void SetKid(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Kid.




### `GetKty` <a id="structFRHAPI__PublicKey_1a79925594fdedf7e4ef6a7ecace06535c"></a>

FString & GetKty()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Kty.




### `GetKty` <a id="structFRHAPI__PublicKey_1aa5681183d52a03df416cf243d208ea25"></a>

const FString & GetKty()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Kty.




### `SetKty` <a id="structFRHAPI__PublicKey_1a25aa7d4686080296ab293b1b5bfa6e92"></a>

void SetKty(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Kty.




### `GetN` <a id="structFRHAPI__PublicKey_1a99ec123987afff8a97cb4299b0e7b1ae"></a>

FString & GetN()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of N.




### `GetN` <a id="structFRHAPI__PublicKey_1a5ed9ccc83530f2d2ceb797742ee42477"></a>

const FString & GetN()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of N.




### `SetN` <a id="structFRHAPI__PublicKey_1a75ba94b0b78a76524031305103605d70"></a>

void SetN(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of N.




### `GetE` <a id="structFRHAPI__PublicKey_1ad23e8627ed6d0f3acf51ae00f3a291b9"></a>

FString & GetE()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of E.




### `GetE` <a id="structFRHAPI__PublicKey_1ad6e984160eb9de3a3fe4cda34b837827"></a>

const FString & GetE()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of E.




### `SetE` <a id="structFRHAPI__PublicKey_1aff75e812a3346e9fc253048d7c40a42a"></a>

void SetE(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of E.





