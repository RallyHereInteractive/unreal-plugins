---
title: FRHAPI_InstanceStartupParams Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Parameters given to an instance to change what map and mode it loads, and other gameplay behavior.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[Map](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1a8a0711c1dee8bd4388903f0f0f8163da)|Name of the map for the instance to spawn with.|
|FString|[Mode_Optional](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1ae99ccd9106b0a17af359547a835bc983)|Game mode for the instance to spawn in.|
|bool|[Mode_IsSet](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1ae0321c27d0b6ce23711c72563ad863fe)|true if Mode_Optional has been set to a value|
|FString|[MiscParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1acb74f767d6ab701ca1bd6be307963742)|Additional commandline parameters for the instance.|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1a1c84d36d36367c97c4eb24fe13b2ff43)|Custom data to pass through to the instance.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1ab2cb38f8bdeb7e51625f1b7dc763b647)|true if CustomData_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1a77009b7faffe77948aa3e953ee6499e2)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1abb4b33169895704a428935fc1923957a)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetMap](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1aaa0604a2745b9f55c1b3dc19fe7a465e)()|Gets the value of Map.|
|const FString &|[GetMap](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1a20558bc02f4ca43e75d901e1f0c30e3f)()|Gets the value of Map.|
|void|[SetMap](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1a1347a85de6a7f233c80bc6a343b76d1f)(FString NewValue)|Sets the value of Map.|
|FString &|[GetMode](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1a2ca1fec3b3005bec6bb9409f610dad0e)()|Gets the value of Mode_Optional, regardless of it having been set.|
|const FString &|[GetMode](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1af50805382b27551da853f645acbfdbd8)()|Gets the value of Mode_Optional, regardless of it having been set.|
|const FString &|[GetMode](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1a10804234c00bec89849f3fc5eb5e8922)(const FString & DefaultValue)|Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetMode](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1a01ba92277f8ad9108411ba77b443519d)(FString & OutValue)|Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetModeOrNull](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1afc0ac3225b7dd2b26897dd34848c31f8)()|Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetModeOrNull](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1ac597354579b0ea5518fb4ac514756da9)()|Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetMode](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1aa1b1687d4025c97029c1ae219b7ed577)(FString NewValue)|Sets the value of Mode_Optional and also sets Mode_IsSet to true.|
|void|[ClearMode](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1a1dde35553e47c5d1aad61150101c1989)()|Clears the value of Mode_Optional and sets Mode_IsSet to false.|
|FString &|[GetMiscParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1a79d9fa928c511b3e4f32aec23405fbeb)()|Gets the value of MiscParams.|
|const FString &|[GetMiscParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1ad392457d6aea277259c05b936e092052)()|Gets the value of MiscParams.|
|void|[SetMiscParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1aa2aa69cd6d0f1498ced14d221c13e2f9)(FString NewValue)|Sets the value of MiscParams.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1ab5f634770b8323a3fd94bd42d5d94daf)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1a7945142dd20f19446bdba0dd7f194c48)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1adadac0821f574799506f8c2a6371aca9)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1a9ab750252903baa26a8cd6cafd91a57f)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1a543ebbec72db0c64961c808451cb2466)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1a7e39b3eb0f427a48b0d39e9b2b32f6f6)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1ac68dc80a0412fc437a9b72d11ecec523)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams_1ad5cd20ad691851348dd54afdf981b84b)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
## Public Attributes



### `Map` <a id="structFRHAPI__InstanceStartupParams_1a8a0711c1dee8bd4388903f0f0f8163da"></a>

`FString FRHAPI_InstanceStartupParams::Map`

Name of the map for the instance to spawn with.




### `Mode_Optional` <a id="structFRHAPI__InstanceStartupParams_1ae99ccd9106b0a17af359547a835bc983"></a>

`FString FRHAPI_InstanceStartupParams::Mode_Optional`

Game mode for the instance to spawn in.




### `Mode_IsSet` <a id="structFRHAPI__InstanceStartupParams_1ae0321c27d0b6ce23711c72563ad863fe"></a>

`bool FRHAPI_InstanceStartupParams::Mode_IsSet`

true if Mode_Optional has been set to a value




### `MiscParams` <a id="structFRHAPI__InstanceStartupParams_1acb74f767d6ab701ca1bd6be307963742"></a>

`FString FRHAPI_InstanceStartupParams::MiscParams`

Additional commandline parameters for the instance.




### `CustomData_Optional` <a id="structFRHAPI__InstanceStartupParams_1a1c84d36d36367c97c4eb24fe13b2ff43"></a>

`TMap<FString, FString> FRHAPI_InstanceStartupParams::CustomData_Optional`

Custom data to pass through to the instance.




### `CustomData_IsSet` <a id="structFRHAPI__InstanceStartupParams_1ab2cb38f8bdeb7e51625f1b7dc763b647"></a>

`bool FRHAPI_InstanceStartupParams::CustomData_IsSet`

true if CustomData_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__InstanceStartupParams_1a77009b7faffe77948aa3e953ee6499e2"></a>

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



### `WriteJson` <a id="structFRHAPI__InstanceStartupParams_1abb4b33169895704a428935fc1923957a"></a>

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



### `GetMap` <a id="structFRHAPI__InstanceStartupParams_1aaa0604a2745b9f55c1b3dc19fe7a465e"></a>

FString & GetMap()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Map.




### `GetMap` <a id="structFRHAPI__InstanceStartupParams_1a20558bc02f4ca43e75d901e1f0c30e3f"></a>

const FString & GetMap()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Map.




### `SetMap` <a id="structFRHAPI__InstanceStartupParams_1a1347a85de6a7f233c80bc6a343b76d1f"></a>

void SetMap(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Map.




### `GetMode` <a id="structFRHAPI__InstanceStartupParams_1a2ca1fec3b3005bec6bb9409f610dad0e"></a>

FString & GetMode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Mode_Optional, regardless of it having been set.




### `GetMode` <a id="structFRHAPI__InstanceStartupParams_1af50805382b27551da853f645acbfdbd8"></a>

const FString & GetMode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Mode_Optional, regardless of it having been set.




### `GetMode` <a id="structFRHAPI__InstanceStartupParams_1a10804234c00bec89849f3fc5eb5e8922"></a>

const FString & GetMode(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetMode` <a id="structFRHAPI__InstanceStartupParams_1a01ba92277f8ad9108411ba77b443519d"></a>

bool GetMode(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.




### `GetModeOrNull` <a id="structFRHAPI__InstanceStartupParams_1afc0ac3225b7dd2b26897dd34848c31f8"></a>

FString * GetModeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.




### `GetModeOrNull` <a id="structFRHAPI__InstanceStartupParams_1ac597354579b0ea5518fb4ac514756da9"></a>

const FString * GetModeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.




### `SetMode` <a id="structFRHAPI__InstanceStartupParams_1aa1b1687d4025c97029c1ae219b7ed577"></a>

void SetMode(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Mode_Optional and also sets Mode_IsSet to true.




### `ClearMode` <a id="structFRHAPI__InstanceStartupParams_1a1dde35553e47c5d1aad61150101c1989"></a>

void ClearMode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Mode_Optional and sets Mode_IsSet to false.




### `GetMiscParams` <a id="structFRHAPI__InstanceStartupParams_1a79d9fa928c511b3e4f32aec23405fbeb"></a>

FString & GetMiscParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MiscParams.




### `GetMiscParams` <a id="structFRHAPI__InstanceStartupParams_1ad392457d6aea277259c05b936e092052"></a>

const FString & GetMiscParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MiscParams.




### `SetMiscParams` <a id="structFRHAPI__InstanceStartupParams_1aa2aa69cd6d0f1498ced14d221c13e2f9"></a>

void SetMiscParams(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of MiscParams.




### `GetCustomData` <a id="structFRHAPI__InstanceStartupParams_1ab5f634770b8323a3fd94bd42d5d94daf"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__InstanceStartupParams_1a7945142dd20f19446bdba0dd7f194c48"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__InstanceStartupParams_1adadac0821f574799506f8c2a6371aca9"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__InstanceStartupParams_1a9ab750252903baa26a8cd6cafd91a57f"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__InstanceStartupParams_1a543ebbec72db0c64961c808451cb2466"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__InstanceStartupParams_1a7e39b3eb0f427a48b0d39e9b2b32f6f6"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__InstanceStartupParams_1ac68dc80a0412fc437a9b72d11ecec523"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__InstanceStartupParams_1ad5cd20ad691851348dd54afdf981b84b"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.





