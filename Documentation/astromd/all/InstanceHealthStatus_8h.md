---
title: InstanceHealthStatus.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_InstanceHealthStatus](/unreal-plugins/all/instancehealthstatus_8h/#InstanceHealthStatus_8h_1a43a570d2298d373b8bdaf950e60f610b)|An enumeration.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/instancehealthstatus_8h/#InstanceHealthStatus_8h_1ac16538d97d04b35f76e7ec50ae3ccca5)(const ERHAPI_InstanceHealthStatus & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/instancehealthstatus_8h/#InstanceHealthStatus_8h_1af8b96e637e0fa47c86393b0624a3e97a)(const FString & EnumAsString, ERHAPI_InstanceHealthStatus & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/instancehealthstatus_8h/#InstanceHealthStatus_8h_1a302f9cc4399950300bd376c1369b4b63)(const ERHAPI_InstanceHealthStatus & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/instancehealthstatus_8h/#InstanceHealthStatus_8h_1a47c7e1cda5a08fe3d6ca37b15eef0f21)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_InstanceHealthStatus & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/instancehealthstatus_8h/#InstanceHealthStatus_8h_1a42a975964a490940f5d82f7c0442375e)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_InstanceHealthStatus & Value)||
## Enums




### `ERHAPI_InstanceHealthStatus` <a id="InstanceHealthStatus_8h_1a43a570d2298d373b8bdaf950e60f610b"></a>
An enumeration.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Instance is in a healthy state")`|
|`UMETA`|`=(ToolTip="Instance is in an unhealthy state and cannot handle connections")`|
|`UMETA`|`=(ToolTip="Instance performance is degraded, and may be unable to handle new or existing connections")`|
|`UMETA`|`=(ToolTip="Instance health checks have stopped, and instance status is unknown")`|



## Functions



### `EnumToString` <a id="InstanceHealthStatus_8h_1ac16538d97d04b35f76e7ec50ae3ccca5"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_InstanceHealthStatus & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InstanceHealthStatus &|EnumValue|

#### Description






### `EnumFromString` <a id="InstanceHealthStatus_8h_1af8b96e637e0fa47c86393b0624a3e97a"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_InstanceHealthStatus & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_InstanceHealthStatus &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="InstanceHealthStatus_8h_1a302f9cc4399950300bd376c1369b4b63"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_InstanceHealthStatus & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InstanceHealthStatus &|Value|

#### Description






### `WriteJsonValue` <a id="InstanceHealthStatus_8h_1a47c7e1cda5a08fe3d6ca37b15eef0f21"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_InstanceHealthStatus & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_InstanceHealthStatus &|Value|

#### Description






### `TryGetJsonValue` <a id="InstanceHealthStatus_8h_1a42a975964a490940f5d82f7c0442375e"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_InstanceHealthStatus & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_InstanceHealthStatus &|Value|

#### Description







