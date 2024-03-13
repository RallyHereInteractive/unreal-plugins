---
title: FRHAPI_HzApiErrorModel Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|bool|[AuthSuccess_Optional](/unreal-plugins/all/structfrhapi__hzapierrormodel/#structFRHAPI__HzApiErrorModel_1a9a5418359a128a7d076782f4a2363ab6)||
|bool|[AuthSuccess_IsSet](/unreal-plugins/all/structfrhapi__hzapierrormodel/#structFRHAPI__HzApiErrorModel_1a8743e89eaeebc32c0e0a3c15286e4bd9)|true if AuthSuccess_Optional has been set to a value|
|FString|[ErrorCode](/unreal-plugins/all/structfrhapi__hzapierrormodel/#structFRHAPI__HzApiErrorModel_1a3e69f02ecb9d38383cb749fa5b23ff87)||
|FString|[Desc](/unreal-plugins/all/structfrhapi__hzapierrormodel/#structFRHAPI__HzApiErrorModel_1a9c18c43b5bafba6c2ac066314de64c6e)||
|bool|[FromJson](/unreal-plugins/all/structfrhapi__hzapierrormodel/#structFRHAPI__HzApiErrorModel_1a44bc1857b178377cbb1d2c33a628e0d8)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__hzapierrormodel/#structFRHAPI__HzApiErrorModel_1ae3ff4b3417bad010cd00b4723df2b990)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|bool &|[GetAuthSuccess](/unreal-plugins/all/structfrhapi__hzapierrormodel/#structFRHAPI__HzApiErrorModel_1a0d4c66b9ee3833401f1dfa7d182d6321)()|Gets the value of AuthSuccess_Optional, regardless of it having been set.|
|const bool &|[GetAuthSuccess](/unreal-plugins/all/structfrhapi__hzapierrormodel/#structFRHAPI__HzApiErrorModel_1a2e10bfd42982da16deac8330f73923c3)()|Gets the value of AuthSuccess_Optional, regardless of it having been set.|
|const bool &|[GetAuthSuccess](/unreal-plugins/all/structfrhapi__hzapierrormodel/#structFRHAPI__HzApiErrorModel_1af5a3889d452ff7ac240a1be4d5671853)(const bool & DefaultValue)|Gets the value of AuthSuccess_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAuthSuccess](/unreal-plugins/all/structfrhapi__hzapierrormodel/#structFRHAPI__HzApiErrorModel_1a86294d7f68007b62297b4ebdce7b387c)(bool & OutValue)|Fills OutValue with the value of AuthSuccess_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetAuthSuccessOrNull](/unreal-plugins/all/structfrhapi__hzapierrormodel/#structFRHAPI__HzApiErrorModel_1a679ac0e5c83ba18fc7797d8a7fdf6585)()|Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetAuthSuccessOrNull](/unreal-plugins/all/structfrhapi__hzapierrormodel/#structFRHAPI__HzApiErrorModel_1aa7c5416fce5423f21e85331eb7cc17df)()|Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAuthSuccess](/unreal-plugins/all/structfrhapi__hzapierrormodel/#structFRHAPI__HzApiErrorModel_1a2cfd62235e5ce61e8e53f014152f5b08)(bool NewValue)|Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true.|
|void|[ClearAuthSuccess](/unreal-plugins/all/structfrhapi__hzapierrormodel/#structFRHAPI__HzApiErrorModel_1a02132e1b9773e2f1ad0177f1f9bec798)()|Clears the value of AuthSuccess_Optional and sets AuthSuccess_IsSet to false.|
|bool|[IsAuthSuccessDefaultValue](/unreal-plugins/all/structfrhapi__hzapierrormodel/#structFRHAPI__HzApiErrorModel_1a9dba3f3ce37138195c71b0569de4cfd6)()|Returns true if AuthSuccess_Optional is set and matches the default value.|
|void|[SetAuthSuccessToDefault](/unreal-plugins/all/structfrhapi__hzapierrormodel/#structFRHAPI__HzApiErrorModel_1a46994e9d2e4a2f35c4663a06b6c3ba35)()|Sets the value of AuthSuccess_Optional to its default and also sets AuthSuccess_IsSet to true.|
|FString &|[GetErrorCode](/unreal-plugins/all/structfrhapi__hzapierrormodel/#structFRHAPI__HzApiErrorModel_1ad0a304e4b2f1f60f2f62319237856ac8)()|Gets the value of ErrorCode.|
|const FString &|[GetErrorCode](/unreal-plugins/all/structfrhapi__hzapierrormodel/#structFRHAPI__HzApiErrorModel_1a755d0d8b52c5f8ad55313b5bf810f62e)()|Gets the value of ErrorCode.|
|void|[SetErrorCode](/unreal-plugins/all/structfrhapi__hzapierrormodel/#structFRHAPI__HzApiErrorModel_1ac18374ef3ff865995112c28ed1b185b9)(FString NewValue)|Sets the value of ErrorCode.|
|FString &|[GetDesc](/unreal-plugins/all/structfrhapi__hzapierrormodel/#structFRHAPI__HzApiErrorModel_1a496a4192b0576bc7002e9f125ce2f749)()|Gets the value of Desc.|
|const FString &|[GetDesc](/unreal-plugins/all/structfrhapi__hzapierrormodel/#structFRHAPI__HzApiErrorModel_1a65965171338907af99cdae71df426171)()|Gets the value of Desc.|
|void|[SetDesc](/unreal-plugins/all/structfrhapi__hzapierrormodel/#structFRHAPI__HzApiErrorModel_1af32229f3c1dc37276045d5221e905d27)(FString NewValue)|Sets the value of Desc.|
## Public Attributes



### `AuthSuccess_Optional` <a id="structFRHAPI__HzApiErrorModel_1a9a5418359a128a7d076782f4a2363ab6"></a>

`bool FRHAPI_HzApiErrorModel::AuthSuccess_Optional`






### `AuthSuccess_IsSet` <a id="structFRHAPI__HzApiErrorModel_1a8743e89eaeebc32c0e0a3c15286e4bd9"></a>

`bool FRHAPI_HzApiErrorModel::AuthSuccess_IsSet`

true if AuthSuccess_Optional has been set to a value




### `ErrorCode` <a id="structFRHAPI__HzApiErrorModel_1a3e69f02ecb9d38383cb749fa5b23ff87"></a>

`FString FRHAPI_HzApiErrorModel::ErrorCode`






### `Desc` <a id="structFRHAPI__HzApiErrorModel_1a9c18c43b5bafba6c2ac066314de64c6e"></a>

`FString FRHAPI_HzApiErrorModel::Desc`







## Public Functions



### `FromJson` <a id="structFRHAPI__HzApiErrorModel_1a44bc1857b178377cbb1d2c33a628e0d8"></a>

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



### `WriteJson` <a id="structFRHAPI__HzApiErrorModel_1ae3ff4b3417bad010cd00b4723df2b990"></a>

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



### `GetAuthSuccess` <a id="structFRHAPI__HzApiErrorModel_1a0d4c66b9ee3833401f1dfa7d182d6321"></a>

bool & GetAuthSuccess()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AuthSuccess_Optional, regardless of it having been set.




### `GetAuthSuccess` <a id="structFRHAPI__HzApiErrorModel_1a2e10bfd42982da16deac8330f73923c3"></a>

const bool & GetAuthSuccess()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AuthSuccess_Optional, regardless of it having been set.




### `GetAuthSuccess` <a id="structFRHAPI__HzApiErrorModel_1af5a3889d452ff7ac240a1be4d5671853"></a>

const bool & GetAuthSuccess(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of AuthSuccess_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAuthSuccess` <a id="structFRHAPI__HzApiErrorModel_1a86294d7f68007b62297b4ebdce7b387c"></a>

bool GetAuthSuccess(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of AuthSuccess_Optional and returns true if it has been set, otherwise returns false.




### `GetAuthSuccessOrNull` <a id="structFRHAPI__HzApiErrorModel_1a679ac0e5c83ba18fc7797d8a7fdf6585"></a>

bool * GetAuthSuccessOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.




### `GetAuthSuccessOrNull` <a id="structFRHAPI__HzApiErrorModel_1aa7c5416fce5423f21e85331eb7cc17df"></a>

const bool * GetAuthSuccessOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr.




### `SetAuthSuccess` <a id="structFRHAPI__HzApiErrorModel_1a2cfd62235e5ce61e8e53f014152f5b08"></a>

void SetAuthSuccess(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true.




### `ClearAuthSuccess` <a id="structFRHAPI__HzApiErrorModel_1a02132e1b9773e2f1ad0177f1f9bec798"></a>

void ClearAuthSuccess()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of AuthSuccess_Optional and sets AuthSuccess_IsSet to false.




### `IsAuthSuccessDefaultValue` <a id="structFRHAPI__HzApiErrorModel_1a9dba3f3ce37138195c71b0569de4cfd6"></a>

bool IsAuthSuccessDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if AuthSuccess_Optional is set and matches the default value.




### `SetAuthSuccessToDefault` <a id="structFRHAPI__HzApiErrorModel_1a46994e9d2e4a2f35c4663a06b6c3ba35"></a>

void SetAuthSuccessToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of AuthSuccess_Optional to its default and also sets AuthSuccess_IsSet to true.




### `GetErrorCode` <a id="structFRHAPI__HzApiErrorModel_1ad0a304e4b2f1f60f2f62319237856ac8"></a>

FString & GetErrorCode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ErrorCode.




### `GetErrorCode` <a id="structFRHAPI__HzApiErrorModel_1a755d0d8b52c5f8ad55313b5bf810f62e"></a>

const FString & GetErrorCode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ErrorCode.




### `SetErrorCode` <a id="structFRHAPI__HzApiErrorModel_1ac18374ef3ff865995112c28ed1b185b9"></a>

void SetErrorCode(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of ErrorCode.




### `GetDesc` <a id="structFRHAPI__HzApiErrorModel_1a496a4192b0576bc7002e9f125ce2f749"></a>

FString & GetDesc()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Desc.




### `GetDesc` <a id="structFRHAPI__HzApiErrorModel_1a65965171338907af99cdae71df426171"></a>

const FString & GetDesc()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Desc.




### `SetDesc` <a id="structFRHAPI__HzApiErrorModel_1af32229f3c1dc37276045d5221e905d27"></a>

void SetDesc(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Desc.





