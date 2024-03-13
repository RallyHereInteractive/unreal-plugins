---
title: FRHAPI_JoinParams Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Parameters provided by the allocation system or an instance on how to connect.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[PublicConnStr](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams_1ace1ac4405d1488da7611d0c6ee4dcc00)|Public connection string for instance.|
|FString|[PrivateConnStr](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams_1a9c469f021b97b98b3a193479771dd3a8)|Private connection string for instance.|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams_1aa1a3af1c48b41dc686ba9ac09ba84328)|Custom data to join a instance.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams_1ad502760dd98a7e62abb7ec030f2c209f)|true if CustomData_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams_1acb519a5577d5d523125b841bf14e4da3)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams_1acefadc7ec44a0de7c8fe330a2d76e277)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetPublicConnStr](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams_1a4ec632af38b7cd9bc53e077cf4ace8ea)()|Gets the value of PublicConnStr.|
|const FString &|[GetPublicConnStr](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams_1a8680b3b0b87b12b65a68a5aed1400b54)()|Gets the value of PublicConnStr.|
|void|[SetPublicConnStr](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams_1acc10f54fdb728ff101063d50af68f8f1)(FString NewValue)|Sets the value of PublicConnStr.|
|FString &|[GetPrivateConnStr](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams_1ab42d65ff834f0042b7be14f8885084af)()|Gets the value of PrivateConnStr.|
|const FString &|[GetPrivateConnStr](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams_1a0f026e2b942b25eec8716836b13cce65)()|Gets the value of PrivateConnStr.|
|void|[SetPrivateConnStr](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams_1afc83d42aac4255029be482748818362e)(FString NewValue)|Sets the value of PrivateConnStr.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams_1ad39c342be0d41373c63ee3475055d017)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams_1a58610ea35f15c1667b022ad90a495699)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams_1ae73056b2e063ebcef82c0d6486e22da8)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams_1a24ccc3f4ff20cede248586da72d95514)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams_1ac6458b11bc76f09dc47dfe3dde5b6bbb)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams_1a967faadf51bd51ca37a77b63e4d1d5a8)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams_1a105e13210dd92f34682e6f504c7a8f4a)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams_1acbe843cc9336e24b9b7ac3dbeac3bccb)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
## Public Attributes



### `PublicConnStr` <a id="structFRHAPI__JoinParams_1ace1ac4405d1488da7611d0c6ee4dcc00"></a>

`FString FRHAPI_JoinParams::PublicConnStr`

Public connection string for instance.




### `PrivateConnStr` <a id="structFRHAPI__JoinParams_1a9c469f021b97b98b3a193479771dd3a8"></a>

`FString FRHAPI_JoinParams::PrivateConnStr`

Private connection string for instance.




### `CustomData_Optional` <a id="structFRHAPI__JoinParams_1aa1a3af1c48b41dc686ba9ac09ba84328"></a>

`TMap<FString, FString> FRHAPI_JoinParams::CustomData_Optional`

Custom data to join a instance.




### `CustomData_IsSet` <a id="structFRHAPI__JoinParams_1ad502760dd98a7e62abb7ec030f2c209f"></a>

`bool FRHAPI_JoinParams::CustomData_IsSet`

true if CustomData_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__JoinParams_1acb519a5577d5d523125b841bf14e4da3"></a>

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



### `WriteJson` <a id="structFRHAPI__JoinParams_1acefadc7ec44a0de7c8fe330a2d76e277"></a>

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



### `GetPublicConnStr` <a id="structFRHAPI__JoinParams_1a4ec632af38b7cd9bc53e077cf4ace8ea"></a>

FString & GetPublicConnStr()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PublicConnStr.




### `GetPublicConnStr` <a id="structFRHAPI__JoinParams_1a8680b3b0b87b12b65a68a5aed1400b54"></a>

const FString & GetPublicConnStr()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PublicConnStr.




### `SetPublicConnStr` <a id="structFRHAPI__JoinParams_1acc10f54fdb728ff101063d50af68f8f1"></a>

void SetPublicConnStr(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of PublicConnStr.




### `GetPrivateConnStr` <a id="structFRHAPI__JoinParams_1ab42d65ff834f0042b7be14f8885084af"></a>

FString & GetPrivateConnStr()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PrivateConnStr.




### `GetPrivateConnStr` <a id="structFRHAPI__JoinParams_1a0f026e2b942b25eec8716836b13cce65"></a>

const FString & GetPrivateConnStr()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PrivateConnStr.




### `SetPrivateConnStr` <a id="structFRHAPI__JoinParams_1afc83d42aac4255029be482748818362e"></a>

void SetPrivateConnStr(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of PrivateConnStr.




### `GetCustomData` <a id="structFRHAPI__JoinParams_1ad39c342be0d41373c63ee3475055d017"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__JoinParams_1a58610ea35f15c1667b022ad90a495699"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__JoinParams_1ae73056b2e063ebcef82c0d6486e22da8"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__JoinParams_1a24ccc3f4ff20cede248586da72d95514"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__JoinParams_1ac6458b11bc76f09dc47dfe3dde5b6bbb"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__JoinParams_1a967faadf51bd51ca37a77b63e4d1d5a8"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__JoinParams_1a105e13210dd92f34682e6f504c7a8f4a"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__JoinParams_1acbe843cc9336e24b9b7ac3dbeac3bccb"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.





