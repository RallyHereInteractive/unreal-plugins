---
title: Operation.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_Operation](/unreal-plugins/all/operation_8h/#Operation_8h_1a6f55d44a57d502fc5004126da02149fd)|What comparison operation should be used when evaluating a rule.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/operation_8h/#Operation_8h_1aa0d575fc7a96678715d92e283a8ed4b7)(const ERHAPI_Operation & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/operation_8h/#Operation_8h_1a87f907a109a634534f051e46fa9b83df)(const FString & EnumAsString, ERHAPI_Operation & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/operation_8h/#Operation_8h_1a606029ea124348da359ab0e4a0084aa7)(const ERHAPI_Operation & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/operation_8h/#Operation_8h_1a8ace9fbdd30258e1f976d40e3ca93d41)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_Operation & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/operation_8h/#Operation_8h_1a3e6d3bb922ab8725f39178336d569e32)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_Operation & Value)||
## Enums




### `ERHAPI_Operation` <a id="Operation_8h_1a6f55d44a57d502fc5004126da02149fd"></a>
What comparison operation should be used when evaluating a rule.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="The two values must be equal")`|
|`UMETA`|`=(ToolTip="The two values must not be equal")`|
|`UMETA`|`=(ToolTip="Value A must be less than value B")`|
|`UMETA`|`=(ToolTip="Value A must be less than or equal to value B")`|
|`UMETA`|`=(ToolTip="Value A must be greater than value B")`|
|`UMETA`|`=(ToolTip="Value A must be greater than or equal to value B")`|



## Functions



### `EnumToString` <a id="Operation_8h_1aa0d575fc7a96678715d92e283a8ed4b7"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_Operation & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_Operation &|EnumValue|

#### Description






### `EnumFromString` <a id="Operation_8h_1a87f907a109a634534f051e46fa9b83df"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_Operation & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_Operation &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="Operation_8h_1a606029ea124348da359ab0e4a0084aa7"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_Operation & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_Operation &|Value|

#### Description






### `WriteJsonValue` <a id="Operation_8h_1a8ace9fbdd30258e1f976d40e3ca93d41"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_Operation & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_Operation &|Value|

#### Description






### `TryGetJsonValue` <a id="Operation_8h_1a3e6d3bb922ab8725f39178336d569e32"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_Operation & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_Operation &|Value|

#### Description







