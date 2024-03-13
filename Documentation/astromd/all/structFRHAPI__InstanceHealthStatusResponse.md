---
title: FRHAPI_InstanceHealthStatusResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Response body for an instance health check.

## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_InstanceHealthStatus|[UpdatedInstanceHealth](/unreal-plugins/all/structfrhapi__instancehealthstatusresponse/#structFRHAPI__InstanceHealthStatusResponse_1a5353d047babab8d0085993f33d3a82a8)|The new health status of the instance. It may not match the status sent up if too few health checks are being recieved.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__instancehealthstatusresponse/#structFRHAPI__InstanceHealthStatusResponse_1adf577f8dde3eb42dd3d049c71f80115e)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__instancehealthstatusresponse/#structFRHAPI__InstanceHealthStatusResponse_1abab9a453db0e9e39fa59e64b961de3f1)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_InstanceHealthStatus &|[GetUpdatedInstanceHealth](/unreal-plugins/all/structfrhapi__instancehealthstatusresponse/#structFRHAPI__InstanceHealthStatusResponse_1ac26b0bbfd237bdadd4ed172c543030d0)()|Gets the value of UpdatedInstanceHealth.|
|const ERHAPI_InstanceHealthStatus &|[GetUpdatedInstanceHealth](/unreal-plugins/all/structfrhapi__instancehealthstatusresponse/#structFRHAPI__InstanceHealthStatusResponse_1a5ce08ac2c8e4fb15ac43a8ff6f15f258)()|Gets the value of UpdatedInstanceHealth.|
|void|[SetUpdatedInstanceHealth](/unreal-plugins/all/structfrhapi__instancehealthstatusresponse/#structFRHAPI__InstanceHealthStatusResponse_1a889b418b61dbfee55a2e52804fcd3215)(ERHAPI_InstanceHealthStatus NewValue)|Sets the value of UpdatedInstanceHealth.|
## Public Attributes



### `UpdatedInstanceHealth` <a id="structFRHAPI__InstanceHealthStatusResponse_1a5353d047babab8d0085993f33d3a82a8"></a>

`ERHAPI_InstanceHealthStatus FRHAPI_InstanceHealthStatusResponse::UpdatedInstanceHealth`

The new health status of the instance. It may not match the status sent up if too few health checks are being recieved.





## Public Functions



### `FromJson` <a id="structFRHAPI__InstanceHealthStatusResponse_1adf577f8dde3eb42dd3d049c71f80115e"></a>

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



### `WriteJson` <a id="structFRHAPI__InstanceHealthStatusResponse_1abab9a453db0e9e39fa59e64b961de3f1"></a>

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



### `GetUpdatedInstanceHealth` <a id="structFRHAPI__InstanceHealthStatusResponse_1ac26b0bbfd237bdadd4ed172c543030d0"></a>

ERHAPI_InstanceHealthStatus & GetUpdatedInstanceHealth()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of UpdatedInstanceHealth.




### `GetUpdatedInstanceHealth` <a id="structFRHAPI__InstanceHealthStatusResponse_1a5ce08ac2c8e4fb15ac43a8ff6f15f258"></a>

const ERHAPI_InstanceHealthStatus & GetUpdatedInstanceHealth()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of UpdatedInstanceHealth.




### `SetUpdatedInstanceHealth` <a id="structFRHAPI__InstanceHealthStatusResponse_1a889b418b61dbfee55a2e52804fcd3215"></a>

void SetUpdatedInstanceHealth(ERHAPI_InstanceHealthStatus NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InstanceHealthStatus|NewValue|

#### Description

Sets the value of UpdatedInstanceHealth.





