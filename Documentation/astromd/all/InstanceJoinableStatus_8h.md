---
title: InstanceJoinableStatus.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_InstanceJoinableStatus](/unreal-plugins/all/instancejoinablestatus_8h/#InstanceJoinableStatus_8h_1a21dca3e3fb453461a287653aaf782e40)|What state the instance is currently in.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/instancejoinablestatus_8h/#InstanceJoinableStatus_8h_1a38a43e7f470c892670cea343a1a886d0)(const ERHAPI_InstanceJoinableStatus & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/instancejoinablestatus_8h/#InstanceJoinableStatus_8h_1a7655864a2e97f910265c3d6e4d017366)(const FString & EnumAsString, ERHAPI_InstanceJoinableStatus & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/instancejoinablestatus_8h/#InstanceJoinableStatus_8h_1a1bfe7ba35dbc0a7a0d1d0f817bd042c9)(const ERHAPI_InstanceJoinableStatus & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/instancejoinablestatus_8h/#InstanceJoinableStatus_8h_1afe4f0cd84829838341e7aeed6eb09f5c)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_InstanceJoinableStatus & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/instancejoinablestatus_8h/#InstanceJoinableStatus_8h_1af468d4baa3c7e88b291b3239a2ca1a0d)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_InstanceJoinableStatus & Value)||
## Enums




### `ERHAPI_InstanceJoinableStatus` <a id="InstanceJoinableStatus_8h_1a21dca3e3fb453461a287653aaf782e40"></a>
What state the instance is currently in.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Searching for a host")`|
|`UMETA`|`=(ToolTip="Host has been found, and is loading its session information")`|
|`UMETA`|`=(ToolTip="Host has arrived and is loading")`|
|`UMETA`|`=(ToolTip="Host is ready to accept players")`|
|`UMETA`|`=(ToolTip="Host has left, been timed out, or could not be found")`|



## Functions



### `EnumToString` <a id="InstanceJoinableStatus_8h_1a38a43e7f470c892670cea343a1a886d0"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_InstanceJoinableStatus & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InstanceJoinableStatus &|EnumValue|

#### Description






### `EnumFromString` <a id="InstanceJoinableStatus_8h_1a7655864a2e97f910265c3d6e4d017366"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_InstanceJoinableStatus & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_InstanceJoinableStatus &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="InstanceJoinableStatus_8h_1a1bfe7ba35dbc0a7a0d1d0f817bd042c9"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_InstanceJoinableStatus & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InstanceJoinableStatus &|Value|

#### Description






### `WriteJsonValue` <a id="InstanceJoinableStatus_8h_1afe4f0cd84829838341e7aeed6eb09f5c"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_InstanceJoinableStatus & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_InstanceJoinableStatus &|Value|

#### Description






### `TryGetJsonValue` <a id="InstanceJoinableStatus_8h_1af468d4baa3c7e88b291b3239a2ca1a0d"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_InstanceJoinableStatus & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_InstanceJoinableStatus &|Value|

#### Description







