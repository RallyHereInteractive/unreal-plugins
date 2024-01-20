---
title: FRHAPI_InstanceHealthSettingsResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[CadenceSeconds](/unreal-plugins/all/structfrhapi__instancehealthsettingsresponse/#structFRHAPI__InstanceHealthSettingsResponse_1a331b8938443e0f395989821e67608268)|How often we expect instance health checks to occur.|
|float|[UnhealthyHealthCheckPercentage](/unreal-plugins/all/structfrhapi__instancehealthsettingsresponse/#structFRHAPI__InstanceHealthSettingsResponse_1a5d21d8d8ab047995a10b8bc9991bc598)|What percentage of health checks must be missing before an instance's status becomes unhealthy.|
|int32|[MissedChecksBeforeUnknown](/unreal-plugins/all/structfrhapi__instancehealthsettingsresponse/#structFRHAPI__InstanceHealthSettingsResponse_1a1d881188714ca34fcc840c46738fa9d7)|How many health checks we must miss in a row before an instance's status becomes unknown.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__instancehealthsettingsresponse/#structFRHAPI__InstanceHealthSettingsResponse_1ad1514bfa2ff104ffeee56d72fe830275)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__instancehealthsettingsresponse/#structFRHAPI__InstanceHealthSettingsResponse_1ac2b7bb8984eb933795253d167b9ef335)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|int32 &|[GetCadenceSeconds](/unreal-plugins/all/structfrhapi__instancehealthsettingsresponse/#structFRHAPI__InstanceHealthSettingsResponse_1aa2176c0e6d984485a69b90b574216e5e)()|Gets the value of CadenceSeconds.|
|const int32 &|[GetCadenceSeconds](/unreal-plugins/all/structfrhapi__instancehealthsettingsresponse/#structFRHAPI__InstanceHealthSettingsResponse_1aeb95560afa937f11bfda49412f6fc386)()|Gets the value of CadenceSeconds.|
|void|[SetCadenceSeconds](/unreal-plugins/all/structfrhapi__instancehealthsettingsresponse/#structFRHAPI__InstanceHealthSettingsResponse_1ac57a8ab5f1c3acb183bfc7fd5fb5ecc7)(int32 NewValue)|Sets the value of CadenceSeconds.|
|bool|[IsCadenceSecondsDefaultValue](/unreal-plugins/all/structfrhapi__instancehealthsettingsresponse/#structFRHAPI__InstanceHealthSettingsResponse_1a7611b5c46586c2d8991c3199e8c269c4)()|Returns true if CadenceSeconds matches the default value.|
|void|[SetCadenceSecondsToDefault](/unreal-plugins/all/structfrhapi__instancehealthsettingsresponse/#structFRHAPI__InstanceHealthSettingsResponse_1af06cb65f610db85ab0fb335d4a154087)()|Sets the value of CadenceSeconds to its default|
|float &|[GetUnhealthyHealthCheckPercentage](/unreal-plugins/all/structfrhapi__instancehealthsettingsresponse/#structFRHAPI__InstanceHealthSettingsResponse_1a735ba7014221f287a836b84c925437ae)()|Gets the value of UnhealthyHealthCheckPercentage.|
|const float &|[GetUnhealthyHealthCheckPercentage](/unreal-plugins/all/structfrhapi__instancehealthsettingsresponse/#structFRHAPI__InstanceHealthSettingsResponse_1a9603ca9d72c81b5de082d1388875cdbf)()|Gets the value of UnhealthyHealthCheckPercentage.|
|void|[SetUnhealthyHealthCheckPercentage](/unreal-plugins/all/structfrhapi__instancehealthsettingsresponse/#structFRHAPI__InstanceHealthSettingsResponse_1a07f914dca1c21b24876f1310e859ae47)(float NewValue)|Sets the value of UnhealthyHealthCheckPercentage.|
|int32 &|[GetMissedChecksBeforeUnknown](/unreal-plugins/all/structfrhapi__instancehealthsettingsresponse/#structFRHAPI__InstanceHealthSettingsResponse_1aae1cc8be31e9119af31779fca48ce0db)()|Gets the value of MissedChecksBeforeUnknown.|
|const int32 &|[GetMissedChecksBeforeUnknown](/unreal-plugins/all/structfrhapi__instancehealthsettingsresponse/#structFRHAPI__InstanceHealthSettingsResponse_1a03c67349ce4e805ac1accd041b481890)()|Gets the value of MissedChecksBeforeUnknown.|
|void|[SetMissedChecksBeforeUnknown](/unreal-plugins/all/structfrhapi__instancehealthsettingsresponse/#structFRHAPI__InstanceHealthSettingsResponse_1a7db76e610b787cdca3c167a1f6bd62c7)(int32 NewValue)|Sets the value of MissedChecksBeforeUnknown.|
|bool|[IsMissedChecksBeforeUnknownDefaultValue](/unreal-plugins/all/structfrhapi__instancehealthsettingsresponse/#structFRHAPI__InstanceHealthSettingsResponse_1ac5c50dad723924530c69a0ea7166fcc3)()|Returns true if MissedChecksBeforeUnknown matches the default value.|
|void|[SetMissedChecksBeforeUnknownToDefault](/unreal-plugins/all/structfrhapi__instancehealthsettingsresponse/#structFRHAPI__InstanceHealthSettingsResponse_1a8664689c37913f913401736f03a9df95)()|Sets the value of MissedChecksBeforeUnknown to its default|
## Public Attributes



### `CadenceSeconds` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a331b8938443e0f395989821e67608268"></a>

`int32 FRHAPI_InstanceHealthSettingsResponse::CadenceSeconds`

How often we expect instance health checks to occur.




### `UnhealthyHealthCheckPercentage` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a5d21d8d8ab047995a10b8bc9991bc598"></a>

`float FRHAPI_InstanceHealthSettingsResponse::UnhealthyHealthCheckPercentage`

What percentage of health checks must be missing before an instance's status becomes unhealthy.




### `MissedChecksBeforeUnknown` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a1d881188714ca34fcc840c46738fa9d7"></a>

`int32 FRHAPI_InstanceHealthSettingsResponse::MissedChecksBeforeUnknown`

How many health checks we must miss in a row before an instance's status becomes unknown.





## Public Functions



### `FromJson` <a id="structFRHAPI__InstanceHealthSettingsResponse_1ad1514bfa2ff104ffeee56d72fe830275"></a>

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



### `WriteJson` <a id="structFRHAPI__InstanceHealthSettingsResponse_1ac2b7bb8984eb933795253d167b9ef335"></a>

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



### `GetCadenceSeconds` <a id="structFRHAPI__InstanceHealthSettingsResponse_1aa2176c0e6d984485a69b90b574216e5e"></a>

int32 & GetCadenceSeconds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CadenceSeconds.




### `GetCadenceSeconds` <a id="structFRHAPI__InstanceHealthSettingsResponse_1aeb95560afa937f11bfda49412f6fc386"></a>

const int32 & GetCadenceSeconds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CadenceSeconds.




### `SetCadenceSeconds` <a id="structFRHAPI__InstanceHealthSettingsResponse_1ac57a8ab5f1c3acb183bfc7fd5fb5ecc7"></a>

void SetCadenceSeconds(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of CadenceSeconds.




### `IsCadenceSecondsDefaultValue` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a7611b5c46586c2d8991c3199e8c269c4"></a>

bool IsCadenceSecondsDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if CadenceSeconds matches the default value.




### `SetCadenceSecondsToDefault` <a id="structFRHAPI__InstanceHealthSettingsResponse_1af06cb65f610db85ab0fb335d4a154087"></a>

void SetCadenceSecondsToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of CadenceSeconds to its default




### `GetUnhealthyHealthCheckPercentage` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a735ba7014221f287a836b84c925437ae"></a>

float & GetUnhealthyHealthCheckPercentage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of UnhealthyHealthCheckPercentage.




### `GetUnhealthyHealthCheckPercentage` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a9603ca9d72c81b5de082d1388875cdbf"></a>

const float & GetUnhealthyHealthCheckPercentage()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of UnhealthyHealthCheckPercentage.




### `SetUnhealthyHealthCheckPercentage` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a07f914dca1c21b24876f1310e859ae47"></a>

void SetUnhealthyHealthCheckPercentage(float NewValue)

#### Parameters

| Type | Name |
|------|------|
|float|NewValue|

#### Description

Sets the value of UnhealthyHealthCheckPercentage.




### `GetMissedChecksBeforeUnknown` <a id="structFRHAPI__InstanceHealthSettingsResponse_1aae1cc8be31e9119af31779fca48ce0db"></a>

int32 & GetMissedChecksBeforeUnknown()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MissedChecksBeforeUnknown.




### `GetMissedChecksBeforeUnknown` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a03c67349ce4e805ac1accd041b481890"></a>

const int32 & GetMissedChecksBeforeUnknown()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MissedChecksBeforeUnknown.




### `SetMissedChecksBeforeUnknown` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a7db76e610b787cdca3c167a1f6bd62c7"></a>

void SetMissedChecksBeforeUnknown(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of MissedChecksBeforeUnknown.




### `IsMissedChecksBeforeUnknownDefaultValue` <a id="structFRHAPI__InstanceHealthSettingsResponse_1ac5c50dad723924530c69a0ea7166fcc3"></a>

bool IsMissedChecksBeforeUnknownDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if MissedChecksBeforeUnknown matches the default value.




### `SetMissedChecksBeforeUnknownToDefault` <a id="structFRHAPI__InstanceHealthSettingsResponse_1a8664689c37913f913401736f03a9df95"></a>

void SetMissedChecksBeforeUnknownToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of MissedChecksBeforeUnknown to its default





