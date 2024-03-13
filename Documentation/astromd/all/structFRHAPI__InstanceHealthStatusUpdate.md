---
title: FRHAPI_InstanceHealthStatusUpdate Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A request body for an instances health check.

## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_InstanceHealthStatus|[InstanceHealth](/unreal-plugins/all/structfrhapi__instancehealthstatusupdate/#structFRHAPI__InstanceHealthStatusUpdate_1a22014dd48fb92af16e5c96500b5ecd2e)|The health status of the instance.|
|FString|[InstanceId](/unreal-plugins/all/structfrhapi__instancehealthstatusupdate/#structFRHAPI__InstanceHealthStatusUpdate_1af49eb08bd68d937ff09af2ab23839b71)|The instance ID for the instance whose health you are reporting.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__instancehealthstatusupdate/#structFRHAPI__InstanceHealthStatusUpdate_1a7b36499cd62e987ae794f5148d65b043)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__instancehealthstatusupdate/#structFRHAPI__InstanceHealthStatusUpdate_1a6d5e5054aaf5929c1517761dca916347)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_InstanceHealthStatus &|[GetInstanceHealth](/unreal-plugins/all/structfrhapi__instancehealthstatusupdate/#structFRHAPI__InstanceHealthStatusUpdate_1aee3b1e634828fa5e708bb279f1ae3614)()|Gets the value of InstanceHealth.|
|const ERHAPI_InstanceHealthStatus &|[GetInstanceHealth](/unreal-plugins/all/structfrhapi__instancehealthstatusupdate/#structFRHAPI__InstanceHealthStatusUpdate_1a82f83d721db301c89eb0bdbce11a9ab3)()|Gets the value of InstanceHealth.|
|void|[SetInstanceHealth](/unreal-plugins/all/structfrhapi__instancehealthstatusupdate/#structFRHAPI__InstanceHealthStatusUpdate_1a118ed7a3b14461e9650ae70cd2c71217)(ERHAPI_InstanceHealthStatus NewValue)|Sets the value of InstanceHealth.|
|FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__instancehealthstatusupdate/#structFRHAPI__InstanceHealthStatusUpdate_1ac700bdfe25364183c4113ffd5f3a3c8e)()|Gets the value of InstanceId.|
|const FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__instancehealthstatusupdate/#structFRHAPI__InstanceHealthStatusUpdate_1adb98c332bf94570d61b2cc7be9466370)()|Gets the value of InstanceId.|
|void|[SetInstanceId](/unreal-plugins/all/structfrhapi__instancehealthstatusupdate/#structFRHAPI__InstanceHealthStatusUpdate_1a03b4d45807ee5dd20addf7a1a35c6166)(FString NewValue)|Sets the value of InstanceId.|
## Public Attributes



### `InstanceHealth` <a id="structFRHAPI__InstanceHealthStatusUpdate_1a22014dd48fb92af16e5c96500b5ecd2e"></a>

`ERHAPI_InstanceHealthStatus FRHAPI_InstanceHealthStatusUpdate::InstanceHealth`

The health status of the instance.




### `InstanceId` <a id="structFRHAPI__InstanceHealthStatusUpdate_1af49eb08bd68d937ff09af2ab23839b71"></a>

`FString FRHAPI_InstanceHealthStatusUpdate::InstanceId`

The instance ID for the instance whose health you are reporting.





## Public Functions



### `FromJson` <a id="structFRHAPI__InstanceHealthStatusUpdate_1a7b36499cd62e987ae794f5148d65b043"></a>

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



### `WriteJson` <a id="structFRHAPI__InstanceHealthStatusUpdate_1a6d5e5054aaf5929c1517761dca916347"></a>

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



### `GetInstanceHealth` <a id="structFRHAPI__InstanceHealthStatusUpdate_1aee3b1e634828fa5e708bb279f1ae3614"></a>

ERHAPI_InstanceHealthStatus & GetInstanceHealth()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceHealth.




### `GetInstanceHealth` <a id="structFRHAPI__InstanceHealthStatusUpdate_1a82f83d721db301c89eb0bdbce11a9ab3"></a>

const ERHAPI_InstanceHealthStatus & GetInstanceHealth()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceHealth.




### `SetInstanceHealth` <a id="structFRHAPI__InstanceHealthStatusUpdate_1a118ed7a3b14461e9650ae70cd2c71217"></a>

void SetInstanceHealth(ERHAPI_InstanceHealthStatus NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InstanceHealthStatus|NewValue|

#### Description

Sets the value of InstanceHealth.




### `GetInstanceId` <a id="structFRHAPI__InstanceHealthStatusUpdate_1ac700bdfe25364183c4113ffd5f3a3c8e"></a>

FString & GetInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceId.




### `GetInstanceId` <a id="structFRHAPI__InstanceHealthStatusUpdate_1adb98c332bf94570d61b2cc7be9466370"></a>

const FString & GetInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceId.




### `SetInstanceId` <a id="structFRHAPI__InstanceHealthStatusUpdate_1a03b4d45807ee5dd20addf7a1a35c6166"></a>

void SetInstanceId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of InstanceId.





