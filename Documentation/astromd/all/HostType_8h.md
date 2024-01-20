---
title: HostType.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_HostType](/unreal-plugins/all/hosttype_8h/#HostType_8h_1a130f13bf77178b700d06bb0aeaae74a9)|Whether the host is another player, or a dedicated instance.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/hosttype_8h/#HostType_8h_1a81584ca63597fadde25a3fd3ee1b1c67)(const ERHAPI_HostType & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/hosttype_8h/#HostType_8h_1a5f194754db363c01a2e8c514c954415a)(const FString & EnumAsString, ERHAPI_HostType & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/hosttype_8h/#HostType_8h_1a26b0568866b1fc72cafade8d579cb08c)(const ERHAPI_HostType & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/hosttype_8h/#HostType_8h_1a50133243f30973fa88df7510d7151e32)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_HostType & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/hosttype_8h/#HostType_8h_1ac8c3617a9633024277259928a84789e0)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_HostType & Value)||
## Enums




### `ERHAPI_HostType` <a id="HostType_8h_1a130f13bf77178b700d06bb0aeaae74a9"></a>
Whether the host is another player, or a dedicated instance.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="A dedicated, standalone instance")`|
|`UMETA`|`=(ToolTip="A player hosted instance")`|



## Functions



### `EnumToString` <a id="HostType_8h_1a81584ca63597fadde25a3fd3ee1b1c67"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_HostType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_HostType &|EnumValue|

#### Description






### `EnumFromString` <a id="HostType_8h_1a5f194754db363c01a2e8c514c954415a"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_HostType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_HostType &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="HostType_8h_1a26b0568866b1fc72cafade8d579cb08c"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_HostType & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_HostType &|Value|

#### Description






### `WriteJsonValue` <a id="HostType_8h_1a50133243f30973fa88df7510d7151e32"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_HostType & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_HostType &|Value|

#### Description






### `TryGetJsonValue` <a id="HostType_8h_1ac8c3617a9633024277259928a84789e0"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_HostType & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_HostType &|Value|

#### Description







