---
title: FRHAPI_ClaimKeyRequest Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Attempt to claim a Key Claim from a Marketing Campaign.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[ExternalKeyType_Optional](/unreal-plugins/all/structfrhapi__claimkeyrequest/#structFRHAPI__ClaimKeyRequest_1a3a9418a3a1acb441401f18cec5077d78)||
|bool|[ExternalKeyType_IsSet](/unreal-plugins/all/structfrhapi__claimkeyrequest/#structFRHAPI__ClaimKeyRequest_1af322e1222232be1c448e3fb279fb038d)|true if ExternalKeyType_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__claimkeyrequest/#structFRHAPI__ClaimKeyRequest_1ac5dc1ebe4f25ea36578b93d697aac68f)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__claimkeyrequest/#structFRHAPI__ClaimKeyRequest_1a23d93298cbb8260133bae382eff1e3d7)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetExternalKeyType](/unreal-plugins/all/structfrhapi__claimkeyrequest/#structFRHAPI__ClaimKeyRequest_1a50303725f59a3b3be4235dd3e351107c)()|Gets the value of ExternalKeyType_Optional, regardless of it having been set.|
|const FString &|[GetExternalKeyType](/unreal-plugins/all/structfrhapi__claimkeyrequest/#structFRHAPI__ClaimKeyRequest_1aab9b0b649f6396e50a4f4dc82fb8c2ba)()|Gets the value of ExternalKeyType_Optional, regardless of it having been set.|
|const FString &|[GetExternalKeyType](/unreal-plugins/all/structfrhapi__claimkeyrequest/#structFRHAPI__ClaimKeyRequest_1a623175a00bf53dfab29617889f21891c)(const FString & DefaultValue)|Gets the value of ExternalKeyType_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetExternalKeyType](/unreal-plugins/all/structfrhapi__claimkeyrequest/#structFRHAPI__ClaimKeyRequest_1a645f6800782ff6f7299e3e0d38e15733)(FString & OutValue)|Fills OutValue with the value of ExternalKeyType_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetExternalKeyTypeOrNull](/unreal-plugins/all/structfrhapi__claimkeyrequest/#structFRHAPI__ClaimKeyRequest_1a19e37ab022c3bbd1d0132c548c21adbb)()|Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetExternalKeyTypeOrNull](/unreal-plugins/all/structfrhapi__claimkeyrequest/#structFRHAPI__ClaimKeyRequest_1aa476809ffd8c08b344601d1b0168f0cf)()|Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetExternalKeyType](/unreal-plugins/all/structfrhapi__claimkeyrequest/#structFRHAPI__ClaimKeyRequest_1a05e05c87e26ed6f66b5c34fd003fec3c)(FString NewValue)|Sets the value of ExternalKeyType_Optional and also sets ExternalKeyType_IsSet to true.|
|void|[ClearExternalKeyType](/unreal-plugins/all/structfrhapi__claimkeyrequest/#structFRHAPI__ClaimKeyRequest_1a945c53afa9624ef22d85bce0fd2c46e1)()|Clears the value of ExternalKeyType_Optional and sets ExternalKeyType_IsSet to false.|
|bool|[IsExternalKeyTypeDefaultValue](/unreal-plugins/all/structfrhapi__claimkeyrequest/#structFRHAPI__ClaimKeyRequest_1a0b7fb3f3756d8af98f56ae9da22036a7)()|Returns true if ExternalKeyType_Optional is set and matches the default value.|
|void|[SetExternalKeyTypeToDefault](/unreal-plugins/all/structfrhapi__claimkeyrequest/#structFRHAPI__ClaimKeyRequest_1a9c5278e971b44e220a33a63bc9361bbd)()|Sets the value of ExternalKeyType_Optional to its default and also sets ExternalKeyType_IsSet to true.|
## Public Attributes



### `ExternalKeyType_Optional` <a id="structFRHAPI__ClaimKeyRequest_1a3a9418a3a1acb441401f18cec5077d78"></a>

`FString FRHAPI_ClaimKeyRequest::ExternalKeyType_Optional`






### `ExternalKeyType_IsSet` <a id="structFRHAPI__ClaimKeyRequest_1af322e1222232be1c448e3fb279fb038d"></a>

`bool FRHAPI_ClaimKeyRequest::ExternalKeyType_IsSet`

true if ExternalKeyType_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__ClaimKeyRequest_1ac5dc1ebe4f25ea36578b93d697aac68f"></a>

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



### `WriteJson` <a id="structFRHAPI__ClaimKeyRequest_1a23d93298cbb8260133bae382eff1e3d7"></a>

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



### `GetExternalKeyType` <a id="structFRHAPI__ClaimKeyRequest_1a50303725f59a3b3be4235dd3e351107c"></a>

FString & GetExternalKeyType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ExternalKeyType_Optional, regardless of it having been set.




### `GetExternalKeyType` <a id="structFRHAPI__ClaimKeyRequest_1aab9b0b649f6396e50a4f4dc82fb8c2ba"></a>

const FString & GetExternalKeyType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ExternalKeyType_Optional, regardless of it having been set.




### `GetExternalKeyType` <a id="structFRHAPI__ClaimKeyRequest_1a623175a00bf53dfab29617889f21891c"></a>

const FString & GetExternalKeyType(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of ExternalKeyType_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetExternalKeyType` <a id="structFRHAPI__ClaimKeyRequest_1a645f6800782ff6f7299e3e0d38e15733"></a>

bool GetExternalKeyType(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of ExternalKeyType_Optional and returns true if it has been set, otherwise returns false.




### `GetExternalKeyTypeOrNull` <a id="structFRHAPI__ClaimKeyRequest_1a19e37ab022c3bbd1d0132c548c21adbb"></a>

FString * GetExternalKeyTypeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.




### `GetExternalKeyTypeOrNull` <a id="structFRHAPI__ClaimKeyRequest_1aa476809ffd8c08b344601d1b0168f0cf"></a>

const FString * GetExternalKeyTypeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ExternalKeyType_Optional, if it has been set, otherwise returns nullptr.




### `SetExternalKeyType` <a id="structFRHAPI__ClaimKeyRequest_1a05e05c87e26ed6f66b5c34fd003fec3c"></a>

void SetExternalKeyType(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of ExternalKeyType_Optional and also sets ExternalKeyType_IsSet to true.




### `ClearExternalKeyType` <a id="structFRHAPI__ClaimKeyRequest_1a945c53afa9624ef22d85bce0fd2c46e1"></a>

void ClearExternalKeyType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ExternalKeyType_Optional and sets ExternalKeyType_IsSet to false.




### `IsExternalKeyTypeDefaultValue` <a id="structFRHAPI__ClaimKeyRequest_1a0b7fb3f3756d8af98f56ae9da22036a7"></a>

bool IsExternalKeyTypeDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if ExternalKeyType_Optional is set and matches the default value.




### `SetExternalKeyTypeToDefault` <a id="structFRHAPI__ClaimKeyRequest_1a9c5278e971b44e220a33a63bc9361bbd"></a>

void SetExternalKeyTypeToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of ExternalKeyType_Optional to its default and also sets ExternalKeyType_IsSet to true.





