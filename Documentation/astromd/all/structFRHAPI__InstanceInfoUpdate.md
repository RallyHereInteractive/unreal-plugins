---
title: FRHAPI_InstanceInfoUpdate Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A request body to update the instance resource in a session.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[AllocationId_Optional](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a421c12a8cd1dda60260d36fa0ddfe4d4)|Allocation ID for instance that's been spun up.|
|bool|[AllocationId_IsSet](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1ac508606b8473f2e8c181113f9854e38b)|true if AllocationId_Optional has been set to a value|
|ERHAPI_InstanceJoinableStatus|[JoinStatus_Optional](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1ac4dc17da51fdc32b763982c1ce5f2280)|Is the instance joinable at this time?|
|bool|[JoinStatus_IsSet](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a58d43b5bcd88cb03d2947cbc05d281c3)|true if JoinStatus_Optional has been set to a value|
|[FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams)|[JoinParams_Optional](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a67e685eb7f2a83856062a62b1dd97f0f)||
|bool|[JoinParams_IsSet](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a282916807722278b12016aa1a3ed5b75)|true if JoinParams_Optional has been set to a value|
|FString|[Version_Optional](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a35ab20e36eed28c547f90e48589061d2)|Product Client Version number. Used for compatibility checking with players. Must be compatible with all players to spawn.|
|bool|[Version_IsSet](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a62dd84585fe7d789fd5d075e16cdf173)|true if Version_Optional has been set to a value|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a4f9df70e7dbb3fa7ad0267292d336c0c)|instance-defined custom data|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a512d5615df2069935e21dcad2a28a5b1)|true if CustomData_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a0025c9a5c68bb02a70d72b382f90e808)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a0df4b09d5e66ce21ba3d356167187988)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetAllocationId](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a64ca602e321e6268806f53f3f6b155d9)()|Gets the value of AllocationId_Optional, regardless of it having been set.|
|const FString &|[GetAllocationId](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a1855488f2050473f91d74efcae57bed5)()|Gets the value of AllocationId_Optional, regardless of it having been set.|
|const FString &|[GetAllocationId](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a2ec031eb287edf91d3d368facce386ae)(const FString & DefaultValue)|Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAllocationId](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a07994c6bfe221b0139396d35ea2524bd)(FString & OutValue)|Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetAllocationIdOrNull](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1ac7e5d963cf694411fa97370bab7fd105)()|Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetAllocationIdOrNull](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a2e799cd8e4de2ad2158b4159014981e8)()|Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAllocationId](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a5a7b9aa618594613f74b90010d75921c)(FString NewValue)|Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.|
|void|[ClearAllocationId](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a1ce0fdb8b13b7f7419efa864dfa511fd)()|Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.|
|ERHAPI_InstanceJoinableStatus &|[GetJoinStatus](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1af26c0ff01356cd92cb405e5e5119ddd5)()|Gets the value of JoinStatus_Optional, regardless of it having been set.|
|const ERHAPI_InstanceJoinableStatus &|[GetJoinStatus](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1ae8c051ffa53dec044bb02e3dac538266)()|Gets the value of JoinStatus_Optional, regardless of it having been set.|
|const ERHAPI_InstanceJoinableStatus &|[GetJoinStatus](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a76a9891d41efa118afccb361b07a9777)(const ERHAPI_InstanceJoinableStatus & DefaultValue)|Gets the value of JoinStatus_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetJoinStatus](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a5e50e7754bc22d5df480bd2a9f0ac069)(ERHAPI_InstanceJoinableStatus & OutValue)|Fills OutValue with the value of JoinStatus_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_InstanceJoinableStatus *|[GetJoinStatusOrNull](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1aba0e628c51398992e3e63cc6f3c558f2)()|Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_InstanceJoinableStatus *|[GetJoinStatusOrNull](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1ab5c85b18d1802ca34a71426c03a53bb0)()|Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetJoinStatus](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a5a886ccf87785f0e43ed373e71660d0d)(ERHAPI_InstanceJoinableStatus NewValue)|Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true.|
|void|[ClearJoinStatus](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a08d153a486e719dd86f7272688d3fd6f)()|Clears the value of JoinStatus_Optional and sets JoinStatus_IsSet to false.|
|[FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) &|[GetJoinParams](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a03f21833b60e2badc19066337085d191)()|Gets the value of JoinParams_Optional, regardless of it having been set.|
|const [FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) &|[GetJoinParams](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1ac6ecb169546fa5747fbf8cd5c6235ef1)()|Gets the value of JoinParams_Optional, regardless of it having been set.|
|const [FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) &|[GetJoinParams](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a84ed81956f2e95b2da60e1890f2f5f2e)(const [FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) & DefaultValue)|Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetJoinParams](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a466aafbad25fa684d1e299f58b1da2dc)([FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) & OutValue)|Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) *|[GetJoinParamsOrNull](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a7186ddbe2b8b25a854d4c204dc0d3ac4)()|Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) *|[GetJoinParamsOrNull](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1ab4ac445de76a794db5dc4563eafd5c9d)()|Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetJoinParams](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1ac1e9ab7f8cb494ef9102448e0e7d47d8)([FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) NewValue)|Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.|
|void|[ClearJoinParams](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a8fb8d668734c8ac5966d242b3c45898d)()|Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.|
|FString &|[GetVersion](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1ac741a5b9562c6ea3923d85597957d049)()|Gets the value of Version_Optional, regardless of it having been set.|
|const FString &|[GetVersion](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1abc3bccf52de4ef008ae2b16c979f307f)()|Gets the value of Version_Optional, regardless of it having been set.|
|const FString &|[GetVersion](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a4affad8891171f8d8ea017130cbb48ce)(const FString & DefaultValue)|Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetVersion](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1af28a6083f3cc2ad98e633593379626c1)(FString & OutValue)|Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetVersionOrNull](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1ab352c47b6254e5799af38a5b9155c754)()|Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetVersionOrNull](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1abd236ea838c0fa5073c1e37be9d9c88b)()|Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetVersion](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a13ee65dc626609559990225eaea039cb)(FString NewValue)|Sets the value of Version_Optional and also sets Version_IsSet to true.|
|void|[ClearVersion](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a38e9c831413bc30e6d00a4c6ce9930e9)()|Clears the value of Version_Optional and sets Version_IsSet to false.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a8951474053adf95b048a6f1a764caeda)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a8557aa13e510eaec0e7ff82d9035e73a)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1aea3eabc61bba5bfdd6927739c893b722)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1af24b253e7a5c9609319c6bfd9e647e4e)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a83765e6111181d99b031698eb52c26c2)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a245bd89b7ee39ab693fe85e93d233e7b)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a230e53d731b7b798baef4958e2ce7ae9)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__instanceinfoupdate/#structFRHAPI__InstanceInfoUpdate_1a9b87f305257195c6b1f5f2e407e94ff4)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
## Public Attributes



### `AllocationId_Optional` <a id="structFRHAPI__InstanceInfoUpdate_1a421c12a8cd1dda60260d36fa0ddfe4d4"></a>

`FString FRHAPI_InstanceInfoUpdate::AllocationId_Optional`

Allocation ID for instance that's been spun up.




### `AllocationId_IsSet` <a id="structFRHAPI__InstanceInfoUpdate_1ac508606b8473f2e8c181113f9854e38b"></a>

`bool FRHAPI_InstanceInfoUpdate::AllocationId_IsSet`

true if AllocationId_Optional has been set to a value




### `JoinStatus_Optional` <a id="structFRHAPI__InstanceInfoUpdate_1ac4dc17da51fdc32b763982c1ce5f2280"></a>

`ERHAPI_InstanceJoinableStatus FRHAPI_InstanceInfoUpdate::JoinStatus_Optional`

Is the instance joinable at this time?




### `JoinStatus_IsSet` <a id="structFRHAPI__InstanceInfoUpdate_1a58d43b5bcd88cb03d2947cbc05d281c3"></a>

`bool FRHAPI_InstanceInfoUpdate::JoinStatus_IsSet`

true if JoinStatus_Optional has been set to a value




### `JoinParams_Optional` <a id="structFRHAPI__InstanceInfoUpdate_1a67e685eb7f2a83856062a62b1dd97f0f"></a>

`FRHAPI_JoinParams FRHAPI_InstanceInfoUpdate::JoinParams_Optional`






### `JoinParams_IsSet` <a id="structFRHAPI__InstanceInfoUpdate_1a282916807722278b12016aa1a3ed5b75"></a>

`bool FRHAPI_InstanceInfoUpdate::JoinParams_IsSet`

true if JoinParams_Optional has been set to a value




### `Version_Optional` <a id="structFRHAPI__InstanceInfoUpdate_1a35ab20e36eed28c547f90e48589061d2"></a>

`FString FRHAPI_InstanceInfoUpdate::Version_Optional`

Product Client Version number. Used for compatibility checking with players. Must be compatible with all players to spawn.




### `Version_IsSet` <a id="structFRHAPI__InstanceInfoUpdate_1a62dd84585fe7d789fd5d075e16cdf173"></a>

`bool FRHAPI_InstanceInfoUpdate::Version_IsSet`

true if Version_Optional has been set to a value




### `CustomData_Optional` <a id="structFRHAPI__InstanceInfoUpdate_1a4f9df70e7dbb3fa7ad0267292d336c0c"></a>

`TMap<FString, FString> FRHAPI_InstanceInfoUpdate::CustomData_Optional`

instance-defined custom data




### `CustomData_IsSet` <a id="structFRHAPI__InstanceInfoUpdate_1a512d5615df2069935e21dcad2a28a5b1"></a>

`bool FRHAPI_InstanceInfoUpdate::CustomData_IsSet`

true if CustomData_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__InstanceInfoUpdate_1a0025c9a5c68bb02a70d72b382f90e808"></a>

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



### `WriteJson` <a id="structFRHAPI__InstanceInfoUpdate_1a0df4b09d5e66ce21ba3d356167187988"></a>

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



### `GetAllocationId` <a id="structFRHAPI__InstanceInfoUpdate_1a64ca602e321e6268806f53f3f6b155d9"></a>

FString & GetAllocationId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AllocationId_Optional, regardless of it having been set.




### `GetAllocationId` <a id="structFRHAPI__InstanceInfoUpdate_1a1855488f2050473f91d74efcae57bed5"></a>

const FString & GetAllocationId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AllocationId_Optional, regardless of it having been set.




### `GetAllocationId` <a id="structFRHAPI__InstanceInfoUpdate_1a2ec031eb287edf91d3d368facce386ae"></a>

const FString & GetAllocationId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAllocationId` <a id="structFRHAPI__InstanceInfoUpdate_1a07994c6bfe221b0139396d35ea2524bd"></a>

bool GetAllocationId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.




### `GetAllocationIdOrNull` <a id="structFRHAPI__InstanceInfoUpdate_1ac7e5d963cf694411fa97370bab7fd105"></a>

FString * GetAllocationIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.




### `GetAllocationIdOrNull` <a id="structFRHAPI__InstanceInfoUpdate_1a2e799cd8e4de2ad2158b4159014981e8"></a>

const FString * GetAllocationIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.




### `SetAllocationId` <a id="structFRHAPI__InstanceInfoUpdate_1a5a7b9aa618594613f74b90010d75921c"></a>

void SetAllocationId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.




### `ClearAllocationId` <a id="structFRHAPI__InstanceInfoUpdate_1a1ce0fdb8b13b7f7419efa864dfa511fd"></a>

void ClearAllocationId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.




### `GetJoinStatus` <a id="structFRHAPI__InstanceInfoUpdate_1af26c0ff01356cd92cb405e5e5119ddd5"></a>

ERHAPI_InstanceJoinableStatus & GetJoinStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of JoinStatus_Optional, regardless of it having been set.




### `GetJoinStatus` <a id="structFRHAPI__InstanceInfoUpdate_1ae8c051ffa53dec044bb02e3dac538266"></a>

const ERHAPI_InstanceJoinableStatus & GetJoinStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of JoinStatus_Optional, regardless of it having been set.




### `GetJoinStatus` <a id="structFRHAPI__InstanceInfoUpdate_1a76a9891d41efa118afccb361b07a9777"></a>

const ERHAPI_InstanceJoinableStatus & GetJoinStatus(const ERHAPI_InstanceJoinableStatus & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InstanceJoinableStatus &|DefaultValue|

#### Description

Gets the value of JoinStatus_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetJoinStatus` <a id="structFRHAPI__InstanceInfoUpdate_1a5e50e7754bc22d5df480bd2a9f0ac069"></a>

bool GetJoinStatus(ERHAPI_InstanceJoinableStatus & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InstanceJoinableStatus &|OutValue|

#### Description

Fills OutValue with the value of JoinStatus_Optional and returns true if it has been set, otherwise returns false.




### `GetJoinStatusOrNull` <a id="structFRHAPI__InstanceInfoUpdate_1aba0e628c51398992e3e63cc6f3c558f2"></a>

ERHAPI_InstanceJoinableStatus * GetJoinStatusOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.




### `GetJoinStatusOrNull` <a id="structFRHAPI__InstanceInfoUpdate_1ab5c85b18d1802ca34a71426c03a53bb0"></a>

const ERHAPI_InstanceJoinableStatus * GetJoinStatusOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.




### `SetJoinStatus` <a id="structFRHAPI__InstanceInfoUpdate_1a5a886ccf87785f0e43ed373e71660d0d"></a>

void SetJoinStatus(ERHAPI_InstanceJoinableStatus NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InstanceJoinableStatus|NewValue|

#### Description

Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true.




### `ClearJoinStatus` <a id="structFRHAPI__InstanceInfoUpdate_1a08d153a486e719dd86f7272688d3fd6f"></a>

void ClearJoinStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of JoinStatus_Optional and sets JoinStatus_IsSet to false.




### `GetJoinParams` <a id="structFRHAPI__InstanceInfoUpdate_1a03f21833b60e2badc19066337085d191"></a>

[FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) & GetJoinParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of JoinParams_Optional, regardless of it having been set.




### `GetJoinParams` <a id="structFRHAPI__InstanceInfoUpdate_1ac6ecb169546fa5747fbf8cd5c6235ef1"></a>

const [FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) & GetJoinParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of JoinParams_Optional, regardless of it having been set.




### `GetJoinParams` <a id="structFRHAPI__InstanceInfoUpdate_1a84ed81956f2e95b2da60e1890f2f5f2e"></a>

const [FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) & GetJoinParams(const [FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) &|DefaultValue|

#### Description

Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetJoinParams` <a id="structFRHAPI__InstanceInfoUpdate_1a466aafbad25fa684d1e299f58b1da2dc"></a>

bool GetJoinParams([FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) &|OutValue|

#### Description

Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.




### `GetJoinParamsOrNull` <a id="structFRHAPI__InstanceInfoUpdate_1a7186ddbe2b8b25a854d4c204dc0d3ac4"></a>

[FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) * GetJoinParamsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.




### `GetJoinParamsOrNull` <a id="structFRHAPI__InstanceInfoUpdate_1ab4ac445de76a794db5dc4563eafd5c9d"></a>

const [FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) * GetJoinParamsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.




### `SetJoinParams` <a id="structFRHAPI__InstanceInfoUpdate_1ac1e9ab7f8cb494ef9102448e0e7d47d8"></a>

void SetJoinParams([FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams)|NewValue|

#### Description

Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.




### `ClearJoinParams` <a id="structFRHAPI__InstanceInfoUpdate_1a8fb8d668734c8ac5966d242b3c45898d"></a>

void ClearJoinParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.




### `GetVersion` <a id="structFRHAPI__InstanceInfoUpdate_1ac741a5b9562c6ea3923d85597957d049"></a>

FString & GetVersion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Version_Optional, regardless of it having been set.




### `GetVersion` <a id="structFRHAPI__InstanceInfoUpdate_1abc3bccf52de4ef008ae2b16c979f307f"></a>

const FString & GetVersion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Version_Optional, regardless of it having been set.




### `GetVersion` <a id="structFRHAPI__InstanceInfoUpdate_1a4affad8891171f8d8ea017130cbb48ce"></a>

const FString & GetVersion(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetVersion` <a id="structFRHAPI__InstanceInfoUpdate_1af28a6083f3cc2ad98e633593379626c1"></a>

bool GetVersion(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.




### `GetVersionOrNull` <a id="structFRHAPI__InstanceInfoUpdate_1ab352c47b6254e5799af38a5b9155c754"></a>

FString * GetVersionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.




### `GetVersionOrNull` <a id="structFRHAPI__InstanceInfoUpdate_1abd236ea838c0fa5073c1e37be9d9c88b"></a>

const FString * GetVersionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.




### `SetVersion` <a id="structFRHAPI__InstanceInfoUpdate_1a13ee65dc626609559990225eaea039cb"></a>

void SetVersion(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Version_Optional and also sets Version_IsSet to true.




### `ClearVersion` <a id="structFRHAPI__InstanceInfoUpdate_1a38e9c831413bc30e6d00a4c6ce9930e9"></a>

void ClearVersion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Version_Optional and sets Version_IsSet to false.




### `GetCustomData` <a id="structFRHAPI__InstanceInfoUpdate_1a8951474053adf95b048a6f1a764caeda"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__InstanceInfoUpdate_1a8557aa13e510eaec0e7ff82d9035e73a"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__InstanceInfoUpdate_1aea3eabc61bba5bfdd6927739c893b722"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__InstanceInfoUpdate_1af24b253e7a5c9609319c6bfd9e647e4e"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__InstanceInfoUpdate_1a83765e6111181d99b031698eb52c26c2"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__InstanceInfoUpdate_1a245bd89b7ee39ab693fe85e93d233e7b"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__InstanceInfoUpdate_1a230e53d731b7b798baef4958e2ce7ae9"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__InstanceInfoUpdate_1a9b87f305257195c6b1f5f2e407e94ff4"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.





