---
title: FRHAPI_InstanceRequest Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A request body to create an instance resource in a session.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[InstanceId_Optional](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1ae2cd025e6006ed29f473eea7e99a5831)|Unique ID for the instance, a new one will be generated if not provided.|
|bool|[InstanceId_IsSet](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1aa2407894fadb8014e21cd940b890673d)|true if InstanceId_Optional has been set to a value|
|[FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams)|[InstanceStartupParams_Optional](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1ae58f5b8ca0b462edb52e44c683a4c1d8)||
|bool|[InstanceStartupParams_IsSet](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1a31863d6683b7e334f0080c322c519cec)|true if InstanceStartupParams_Optional has been set to a value|
|ERHAPI_HostType|[HostType](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1ac1fb0f22f5da79bcdf7356ebcba4e972)|Type of the host.|
|FGuid|[HostPlayerUuid_Optional](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1aec1e068ce4fb2675ce05dc50f6abcbc8)|Player UUID of the host, if the host type is player.|
|bool|[HostPlayerUuid_IsSet](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1a34fdd62ebfe1782ed08b73f92bfe08ea)|true if HostPlayerUuid_Optional has been set to a value|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1a4c621990c63bed683c60e1665ab72730)|instance-defined custom data|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1aa293e408d987dc3ec8df6609d786c943)|true if CustomData_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1af96a93daa49224834905105d21c5bd36)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1a481185ea9d96096d351ed84b774a720e)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1aa7d8997f1cc19e5bd956356308445ce5)()|Gets the value of InstanceId_Optional, regardless of it having been set.|
|const FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1a2688849dcb166d4cfbb76b11f8427634)()|Gets the value of InstanceId_Optional, regardless of it having been set.|
|const FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1a65fd2a966b346fe2bc54fb26d8666cfd)(const FString & DefaultValue)|Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetInstanceId](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1ac0e4b0cab82917b1df3fa56f1104a5cc)(FString & OutValue)|Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetInstanceIdOrNull](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1a2db86a7e608a88d01c6cc402f660f06b)()|Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetInstanceIdOrNull](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1a05b27a065f11196c836c639400af54e4)()|Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetInstanceId](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1a5809412ad6749342a811e3c2ce071383)(FString NewValue)|Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.|
|void|[ClearInstanceId](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1a8807721e52eb1a112dcbc1f3dfe40a37)()|Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.|
|[FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) &|[GetInstanceStartupParams](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1a0cbd5eebba53e976d3fb4724f0ce14c7)()|Gets the value of InstanceStartupParams_Optional, regardless of it having been set.|
|const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) &|[GetInstanceStartupParams](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1aa5141f5032f82812dd02fd49aa625066)()|Gets the value of InstanceStartupParams_Optional, regardless of it having been set.|
|const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) &|[GetInstanceStartupParams](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1a341119bd46c33b2d330b1c06229d3aef)(const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) & DefaultValue)|Gets the value of InstanceStartupParams_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetInstanceStartupParams](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1ac3bd45ed219f2019d3e782feca55ee5c)([FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) & OutValue)|Fills OutValue with the value of InstanceStartupParams_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) *|[GetInstanceStartupParamsOrNull](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1a1de4510b22949878cce7d9f59808f7f9)()|Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) *|[GetInstanceStartupParamsOrNull](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1ac63949f7619cb205508acea0d20ae732)()|Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetInstanceStartupParams](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1a777df4ce96091f706ebcba369d45ee6b)([FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) NewValue)|Sets the value of InstanceStartupParams_Optional and also sets InstanceStartupParams_IsSet to true.|
|void|[ClearInstanceStartupParams](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1a45fa6311989ae8b6c8e1784594faca03)()|Clears the value of InstanceStartupParams_Optional and sets InstanceStartupParams_IsSet to false.|
|ERHAPI_HostType &|[GetHostType](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1aa065c59ff35a79e7fcae4eac6cd3fdb6)()|Gets the value of HostType.|
|const ERHAPI_HostType &|[GetHostType](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1a5787c909c62151814f4eb5bca331c72d)()|Gets the value of HostType.|
|void|[SetHostType](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1aadedef73ec200362b3b30aad96b4339a)(ERHAPI_HostType NewValue)|Sets the value of HostType.|
|FGuid &|[GetHostPlayerUuid](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1afea933372204e8989f29f367c20797ae)()|Gets the value of HostPlayerUuid_Optional, regardless of it having been set.|
|const FGuid &|[GetHostPlayerUuid](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1ac242ba9cf077f5337f74d21b928fa602)()|Gets the value of HostPlayerUuid_Optional, regardless of it having been set.|
|const FGuid &|[GetHostPlayerUuid](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1a1ca12cfad38278490c1d353be29e55b5)(const FGuid & DefaultValue)|Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetHostPlayerUuid](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1ab37ad6d7b9d29367d7f1f2e57278172e)(FGuid & OutValue)|Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.|
|FGuid *|[GetHostPlayerUuidOrNull](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1a82761dba8cc190250bcefe5a6895f83c)()|Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.|
|const FGuid *|[GetHostPlayerUuidOrNull](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1a4a12910ce85fe436f07ffda2ffc2ae7b)()|Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetHostPlayerUuid](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1ad05dde1d91e2409db32af22f2652dea3)(FGuid NewValue)|Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.|
|void|[ClearHostPlayerUuid](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1ae6ee53368bb4ad87be06ee5973876c1a)()|Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1a145e751e000f44b175f6ae94325bb3a0)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1a5fe5f1bf54f6f6373e63b37a6df96b88)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1aa6dae53c35ea7435ccfe5d8afb1b2ec6)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1aafe1e35919ac76db051c71308609e78d)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1afcc6f6de48af0546fa928ba72ca66a3b)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1ae3dd5c71c7947e1cbe4add6b7a06edc8)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1a5b0340ced10fd5813d796f1659d0960d)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__instancerequest/#structFRHAPI__InstanceRequest_1a4121a0d0b10e936e6d0b4aae89f200fa)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
## Public Attributes



### `InstanceId_Optional` <a id="structFRHAPI__InstanceRequest_1ae2cd025e6006ed29f473eea7e99a5831"></a>

`FString FRHAPI_InstanceRequest::InstanceId_Optional`

Unique ID for the instance, a new one will be generated if not provided.




### `InstanceId_IsSet` <a id="structFRHAPI__InstanceRequest_1aa2407894fadb8014e21cd940b890673d"></a>

`bool FRHAPI_InstanceRequest::InstanceId_IsSet`

true if InstanceId_Optional has been set to a value




### `InstanceStartupParams_Optional` <a id="structFRHAPI__InstanceRequest_1ae58f5b8ca0b462edb52e44c683a4c1d8"></a>

`FRHAPI_InstanceStartupParams FRHAPI_InstanceRequest::InstanceStartupParams_Optional`






### `InstanceStartupParams_IsSet` <a id="structFRHAPI__InstanceRequest_1a31863d6683b7e334f0080c322c519cec"></a>

`bool FRHAPI_InstanceRequest::InstanceStartupParams_IsSet`

true if InstanceStartupParams_Optional has been set to a value




### `HostType` <a id="structFRHAPI__InstanceRequest_1ac1fb0f22f5da79bcdf7356ebcba4e972"></a>

`ERHAPI_HostType FRHAPI_InstanceRequest::HostType`

Type of the host.




### `HostPlayerUuid_Optional` <a id="structFRHAPI__InstanceRequest_1aec1e068ce4fb2675ce05dc50f6abcbc8"></a>

`FGuid FRHAPI_InstanceRequest::HostPlayerUuid_Optional`

Player UUID of the host, if the host type is player.




### `HostPlayerUuid_IsSet` <a id="structFRHAPI__InstanceRequest_1a34fdd62ebfe1782ed08b73f92bfe08ea"></a>

`bool FRHAPI_InstanceRequest::HostPlayerUuid_IsSet`

true if HostPlayerUuid_Optional has been set to a value




### `CustomData_Optional` <a id="structFRHAPI__InstanceRequest_1a4c621990c63bed683c60e1665ab72730"></a>

`TMap<FString, FString> FRHAPI_InstanceRequest::CustomData_Optional`

instance-defined custom data




### `CustomData_IsSet` <a id="structFRHAPI__InstanceRequest_1aa293e408d987dc3ec8df6609d786c943"></a>

`bool FRHAPI_InstanceRequest::CustomData_IsSet`

true if CustomData_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__InstanceRequest_1af96a93daa49224834905105d21c5bd36"></a>

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



### `WriteJson` <a id="structFRHAPI__InstanceRequest_1a481185ea9d96096d351ed84b774a720e"></a>

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



### `GetInstanceId` <a id="structFRHAPI__InstanceRequest_1aa7d8997f1cc19e5bd956356308445ce5"></a>

FString & GetInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceId_Optional, regardless of it having been set.




### `GetInstanceId` <a id="structFRHAPI__InstanceRequest_1a2688849dcb166d4cfbb76b11f8427634"></a>

const FString & GetInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceId_Optional, regardless of it having been set.




### `GetInstanceId` <a id="structFRHAPI__InstanceRequest_1a65fd2a966b346fe2bc54fb26d8666cfd"></a>

const FString & GetInstanceId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetInstanceId` <a id="structFRHAPI__InstanceRequest_1ac0e4b0cab82917b1df3fa56f1104a5cc"></a>

bool GetInstanceId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.




### `GetInstanceIdOrNull` <a id="structFRHAPI__InstanceRequest_1a2db86a7e608a88d01c6cc402f660f06b"></a>

FString * GetInstanceIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.




### `GetInstanceIdOrNull` <a id="structFRHAPI__InstanceRequest_1a05b27a065f11196c836c639400af54e4"></a>

const FString * GetInstanceIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.




### `SetInstanceId` <a id="structFRHAPI__InstanceRequest_1a5809412ad6749342a811e3c2ce071383"></a>

void SetInstanceId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.




### `ClearInstanceId` <a id="structFRHAPI__InstanceRequest_1a8807721e52eb1a112dcbc1f3dfe40a37"></a>

void ClearInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.




### `GetInstanceStartupParams` <a id="structFRHAPI__InstanceRequest_1a0cbd5eebba53e976d3fb4724f0ce14c7"></a>

[FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) & GetInstanceStartupParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceStartupParams_Optional, regardless of it having been set.




### `GetInstanceStartupParams` <a id="structFRHAPI__InstanceRequest_1aa5141f5032f82812dd02fd49aa625066"></a>

const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) & GetInstanceStartupParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceStartupParams_Optional, regardless of it having been set.




### `GetInstanceStartupParams` <a id="structFRHAPI__InstanceRequest_1a341119bd46c33b2d330b1c06229d3aef"></a>

const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) & GetInstanceStartupParams(const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) &|DefaultValue|

#### Description

Gets the value of InstanceStartupParams_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetInstanceStartupParams` <a id="structFRHAPI__InstanceRequest_1ac3bd45ed219f2019d3e782feca55ee5c"></a>

bool GetInstanceStartupParams([FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) &|OutValue|

#### Description

Fills OutValue with the value of InstanceStartupParams_Optional and returns true if it has been set, otherwise returns false.




### `GetInstanceStartupParamsOrNull` <a id="structFRHAPI__InstanceRequest_1a1de4510b22949878cce7d9f59808f7f9"></a>

[FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) * GetInstanceStartupParamsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.




### `GetInstanceStartupParamsOrNull` <a id="structFRHAPI__InstanceRequest_1ac63949f7619cb205508acea0d20ae732"></a>

const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) * GetInstanceStartupParamsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.




### `SetInstanceStartupParams` <a id="structFRHAPI__InstanceRequest_1a777df4ce96091f706ebcba369d45ee6b"></a>

void SetInstanceStartupParams([FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams)|NewValue|

#### Description

Sets the value of InstanceStartupParams_Optional and also sets InstanceStartupParams_IsSet to true.




### `ClearInstanceStartupParams` <a id="structFRHAPI__InstanceRequest_1a45fa6311989ae8b6c8e1784594faca03"></a>

void ClearInstanceStartupParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of InstanceStartupParams_Optional and sets InstanceStartupParams_IsSet to false.




### `GetHostType` <a id="structFRHAPI__InstanceRequest_1aa065c59ff35a79e7fcae4eac6cd3fdb6"></a>

ERHAPI_HostType & GetHostType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of HostType.




### `GetHostType` <a id="structFRHAPI__InstanceRequest_1a5787c909c62151814f4eb5bca331c72d"></a>

const ERHAPI_HostType & GetHostType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of HostType.




### `SetHostType` <a id="structFRHAPI__InstanceRequest_1aadedef73ec200362b3b30aad96b4339a"></a>

void SetHostType(ERHAPI_HostType NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_HostType|NewValue|

#### Description

Sets the value of HostType.




### `GetHostPlayerUuid` <a id="structFRHAPI__InstanceRequest_1afea933372204e8989f29f367c20797ae"></a>

FGuid & GetHostPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.




### `GetHostPlayerUuid` <a id="structFRHAPI__InstanceRequest_1ac242ba9cf077f5337f74d21b928fa602"></a>

const FGuid & GetHostPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.




### `GetHostPlayerUuid` <a id="structFRHAPI__InstanceRequest_1a1ca12cfad38278490c1d353be29e55b5"></a>

const FGuid & GetHostPlayerUuid(const FGuid & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|DefaultValue|

#### Description

Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetHostPlayerUuid` <a id="structFRHAPI__InstanceRequest_1ab37ad6d7b9d29367d7f1f2e57278172e"></a>

bool GetHostPlayerUuid(FGuid & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid &|OutValue|

#### Description

Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.




### `GetHostPlayerUuidOrNull` <a id="structFRHAPI__InstanceRequest_1a82761dba8cc190250bcefe5a6895f83c"></a>

FGuid * GetHostPlayerUuidOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.




### `GetHostPlayerUuidOrNull` <a id="structFRHAPI__InstanceRequest_1a4a12910ce85fe436f07ffda2ffc2ae7b"></a>

const FGuid * GetHostPlayerUuidOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.




### `SetHostPlayerUuid` <a id="structFRHAPI__InstanceRequest_1ad05dde1d91e2409db32af22f2652dea3"></a>

void SetHostPlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.




### `ClearHostPlayerUuid` <a id="structFRHAPI__InstanceRequest_1ae6ee53368bb4ad87be06ee5973876c1a"></a>

void ClearHostPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.




### `GetCustomData` <a id="structFRHAPI__InstanceRequest_1a145e751e000f44b175f6ae94325bb3a0"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__InstanceRequest_1a5fe5f1bf54f6f6373e63b37a6df96b88"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__InstanceRequest_1aa6dae53c35ea7435ccfe5d8afb1b2ec6"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__InstanceRequest_1aafe1e35919ac76db051c71308609e78d"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__InstanceRequest_1afcc6f6de48af0546fa928ba72ca66a3b"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__InstanceRequest_1ae3dd5c71c7947e1cbe4add6b7a06edc8"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__InstanceRequest_1a5b0340ced10fd5813d796f1659d0960d"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__InstanceRequest_1a4121a0d0b10e936e6d0b4aae89f200fa"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.





