---
title: FRHAPI_PlatformEntitlementProcessRequest Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Request to process a platform entitlement.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[TransactionId](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1a4100419f0f52a6eb4762beac516b783d)|unique id for this transaction on the platform|
|FString|[PlatformToken](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1a746f9d065dc766bde99e6444dccd5d32)|Platform token that can be used to verify the identity of the user.|
|FString|[PlatformId](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1aecab53e4d07a58f9224c82ad6da8c2c6)|Platform this entitlement was purchased was made on.|
|ERHAPI_PlatformRegion|[PlatformRegion](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1a72ee6aadcdaa3a4c8bf1e482694d14db)|region this purchase was made in|
|ERHAPI_ClientType|[ClientType](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1a9674cba794d55a042afd6040cbf260a7)|client type this purchase was made on|
|TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) >|[Entitlements_Optional](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1adffb3e1d7d754a5bf42491736b963426)|Platform entitlements to process.|
|bool|[Entitlements_IsSet](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1a1182b812111a8390a0f9ba60649e0755)|true if Entitlements_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1a4748b946408ef3779d62d3cc9518c16a)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1af0754b911184c7a6b5bb0efc399ff22b)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetTransactionId](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1a51301f3004ef1dbbaf6340a1d18d5ff8)()|Gets the value of TransactionId.|
|const FString &|[GetTransactionId](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1aadf7387ad49aafa891f81900413c8df7)()|Gets the value of TransactionId.|
|void|[SetTransactionId](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1ac826ac5ce2ab0999dc8d40a1789c5172)(FString NewValue)|Sets the value of TransactionId.|
|FString &|[GetPlatformToken](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1a46c556ef651d060f6d30bb51cf6f6a34)()|Gets the value of PlatformToken.|
|const FString &|[GetPlatformToken](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1a6cd05cb4e91dab59f3ce419454a7b915)()|Gets the value of PlatformToken.|
|void|[SetPlatformToken](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1a63265337309b5ef52f5fce355b035b96)(FString NewValue)|Sets the value of PlatformToken.|
|FString &|[GetPlatformId](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1a45d91a4c47c73b3b28382d05e785ea0d)()|Gets the value of PlatformId.|
|const FString &|[GetPlatformId](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1ab89c3edcccc8bc9d465296a82dec2976)()|Gets the value of PlatformId.|
|void|[SetPlatformId](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1ae74dc5c9f4b4dd92b814be44dda4e2ba)(FString NewValue)|Sets the value of PlatformId.|
|ERHAPI_PlatformRegion &|[GetPlatformRegion](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1ab827b8b08f6bc72dc2cdf3626deb7f19)()|Gets the value of PlatformRegion.|
|const ERHAPI_PlatformRegion &|[GetPlatformRegion](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1a8c0ca241313bb3e2f1d0d173a23dc372)()|Gets the value of PlatformRegion.|
|void|[SetPlatformRegion](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1a80832fbb3596577cf4a49c020951b15d)(ERHAPI_PlatformRegion NewValue)|Sets the value of PlatformRegion.|
|ERHAPI_ClientType &|[GetClientType](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1a89fcf5846ed78023c699b6ca31d7c275)()|Gets the value of ClientType.|
|const ERHAPI_ClientType &|[GetClientType](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1a1e2eb1ee2959340470e82afb81ceea75)()|Gets the value of ClientType.|
|void|[SetClientType](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1a07f9403c901988ddb953920bfaa4e0f6)(ERHAPI_ClientType NewValue)|Sets the value of ClientType.|
|TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > &|[GetEntitlements](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1a601120e574160eca58e98170e9d4b4e7)()|Gets the value of Entitlements_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > &|[GetEntitlements](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1a5e5780d5354d2f2e6a60d18933840e14)()|Gets the value of Entitlements_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > &|[GetEntitlements](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1a375ef768b008aa6ecadbc0b2a4062761)(const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > & DefaultValue)|Gets the value of Entitlements_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetEntitlements](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1ac72ca2c63c2fc3f571fb4475cbd96f82)(TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > & OutValue)|Fills OutValue with the value of Entitlements_Optional and returns true if it has been set, otherwise returns false.|
|TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > *|[GetEntitlementsOrNull](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1ad288e59a3bc25d6f4f6c33b802d38fdf)()|Returns a pointer to Entitlements_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > *|[GetEntitlementsOrNull](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1addaede490193b8714cdf49552bceeac2)()|Returns a pointer to Entitlements_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetEntitlements](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1add57dd436f6402d835ebe33e4d76305b)(TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > NewValue)|Sets the value of Entitlements_Optional and also sets Entitlements_IsSet to true.|
|void|[ClearEntitlements](/unreal-plugins/all/structfrhapi__platformentitlementprocessrequest/#structFRHAPI__PlatformEntitlementProcessRequest_1a9493313ad553516ff62bf102065e1344)()|Clears the value of Entitlements_Optional and sets Entitlements_IsSet to false.|
## Public Attributes



### `TransactionId` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a4100419f0f52a6eb4762beac516b783d"></a>

`FString FRHAPI_PlatformEntitlementProcessRequest::TransactionId`

unique id for this transaction on the platform




### `PlatformToken` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a746f9d065dc766bde99e6444dccd5d32"></a>

`FString FRHAPI_PlatformEntitlementProcessRequest::PlatformToken`

Platform token that can be used to verify the identity of the user.




### `PlatformId` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1aecab53e4d07a58f9224c82ad6da8c2c6"></a>

`FString FRHAPI_PlatformEntitlementProcessRequest::PlatformId`

Platform this entitlement was purchased was made on.




### `PlatformRegion` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a72ee6aadcdaa3a4c8bf1e482694d14db"></a>

`ERHAPI_PlatformRegion FRHAPI_PlatformEntitlementProcessRequest::PlatformRegion`

region this purchase was made in




### `ClientType` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a9674cba794d55a042afd6040cbf260a7"></a>

`ERHAPI_ClientType FRHAPI_PlatformEntitlementProcessRequest::ClientType`

client type this purchase was made on




### `Entitlements_Optional` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1adffb3e1d7d754a5bf42491736b963426"></a>

`TArray<FRHAPI_PlatformEntitlement> FRHAPI_PlatformEntitlementProcessRequest::Entitlements_Optional`

Platform entitlements to process.




### `Entitlements_IsSet` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a1182b812111a8390a0f9ba60649e0755"></a>

`bool FRHAPI_PlatformEntitlementProcessRequest::Entitlements_IsSet`

true if Entitlements_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a4748b946408ef3779d62d3cc9518c16a"></a>

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



### `WriteJson` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1af0754b911184c7a6b5bb0efc399ff22b"></a>

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



### `GetTransactionId` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a51301f3004ef1dbbaf6340a1d18d5ff8"></a>

FString & GetTransactionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TransactionId.




### `GetTransactionId` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1aadf7387ad49aafa891f81900413c8df7"></a>

const FString & GetTransactionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TransactionId.




### `SetTransactionId` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ac826ac5ce2ab0999dc8d40a1789c5172"></a>

void SetTransactionId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of TransactionId.




### `GetPlatformToken` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a46c556ef651d060f6d30bb51cf6f6a34"></a>

FString & GetPlatformToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformToken.




### `GetPlatformToken` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a6cd05cb4e91dab59f3ce419454a7b915"></a>

const FString & GetPlatformToken()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformToken.




### `SetPlatformToken` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a63265337309b5ef52f5fce355b035b96"></a>

void SetPlatformToken(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of PlatformToken.




### `GetPlatformId` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a45d91a4c47c73b3b28382d05e785ea0d"></a>

FString & GetPlatformId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformId.




### `GetPlatformId` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ab89c3edcccc8bc9d465296a82dec2976"></a>

const FString & GetPlatformId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformId.




### `SetPlatformId` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ae74dc5c9f4b4dd92b814be44dda4e2ba"></a>

void SetPlatformId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of PlatformId.




### `GetPlatformRegion` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ab827b8b08f6bc72dc2cdf3626deb7f19"></a>

ERHAPI_PlatformRegion & GetPlatformRegion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformRegion.




### `GetPlatformRegion` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a8c0ca241313bb3e2f1d0d173a23dc372"></a>

const ERHAPI_PlatformRegion & GetPlatformRegion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformRegion.




### `SetPlatformRegion` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a80832fbb3596577cf4a49c020951b15d"></a>

void SetPlatformRegion(ERHAPI_PlatformRegion NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_PlatformRegion|NewValue|

#### Description

Sets the value of PlatformRegion.




### `GetClientType` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a89fcf5846ed78023c699b6ca31d7c275"></a>

ERHAPI_ClientType & GetClientType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientType.




### `GetClientType` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a1e2eb1ee2959340470e82afb81ceea75"></a>

const ERHAPI_ClientType & GetClientType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientType.




### `SetClientType` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a07f9403c901988ddb953920bfaa4e0f6"></a>

void SetClientType(ERHAPI_ClientType NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_ClientType|NewValue|

#### Description

Sets the value of ClientType.




### `GetEntitlements` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a601120e574160eca58e98170e9d4b4e7"></a>

TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > & GetEntitlements()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Entitlements_Optional, regardless of it having been set.




### `GetEntitlements` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a5e5780d5354d2f2e6a60d18933840e14"></a>

const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > & GetEntitlements()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Entitlements_Optional, regardless of it having been set.




### `GetEntitlements` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a375ef768b008aa6ecadbc0b2a4062761"></a>

const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > & GetEntitlements(const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > &|DefaultValue|

#### Description

Gets the value of Entitlements_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetEntitlements` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ac72ca2c63c2fc3f571fb4475cbd96f82"></a>

bool GetEntitlements(TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > &|OutValue|

#### Description

Fills OutValue with the value of Entitlements_Optional and returns true if it has been set, otherwise returns false.




### `GetEntitlementsOrNull` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1ad288e59a3bc25d6f4f6c33b802d38fdf"></a>

TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > * GetEntitlementsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Entitlements_Optional, if it has been set, otherwise returns nullptr.




### `GetEntitlementsOrNull` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1addaede490193b8714cdf49552bceeac2"></a>

const TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > * GetEntitlementsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Entitlements_Optional, if it has been set, otherwise returns nullptr.




### `SetEntitlements` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1add57dd436f6402d835ebe33e4d76305b"></a>

void SetEntitlements(TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PlatformEntitlement](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement) >|NewValue|

#### Description

Sets the value of Entitlements_Optional and also sets Entitlements_IsSet to true.




### `ClearEntitlements` <a id="structFRHAPI__PlatformEntitlementProcessRequest_1a9493313ad553516ff62bf102065e1344"></a>

void ClearEntitlements()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Entitlements_Optional and sets Entitlements_IsSet to false.





