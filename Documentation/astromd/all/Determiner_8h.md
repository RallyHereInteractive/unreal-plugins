---
title: Determiner.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_Determiner](/unreal-plugins/all/determiner_8h/#Determiner_8h_1a71bf7a7783bb127d019b2aadb9a73985)|Determiner for how many rules must be satisfied in order to satisfy the ruleset.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/determiner_8h/#Determiner_8h_1a164d23255b1f898aec5e97d68d158d70)(const ERHAPI_Determiner & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/determiner_8h/#Determiner_8h_1a3e74b023e37e37794f3106b6d4aeb51e)(const FString & EnumAsString, ERHAPI_Determiner & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/determiner_8h/#Determiner_8h_1ac5bffbd78ffe769f430224754f71e76d)(const ERHAPI_Determiner & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/determiner_8h/#Determiner_8h_1a9264767d7733a9c9a5dbd96cb326e221)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_Determiner & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/determiner_8h/#Determiner_8h_1a6d12164ad8721656489484e57f1635bb)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_Determiner & Value)||
## Enums




### `ERHAPI_Determiner` <a id="Determiner_8h_1a71bf7a7783bb127d019b2aadb9a73985"></a>
Determiner for how many rules must be satisfied in order to satisfy the ruleset.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="All rules must be satisfied")`|
|`UMETA`|`=(ToolTip="At least one rule must be satisfied")`|
|`UMETA`|`=(ToolTip="Exactly one rule must be satisfied")`|
|`UMETA`|`=(ToolTip="All rules must not be satisfied")`|



## Functions



### `EnumToString` <a id="Determiner_8h_1a164d23255b1f898aec5e97d68d158d70"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_Determiner & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_Determiner &|EnumValue|

#### Description






### `EnumFromString` <a id="Determiner_8h_1a3e74b023e37e37794f3106b6d4aeb51e"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_Determiner & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_Determiner &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="Determiner_8h_1ac5bffbd78ffe769f430224754f71e76d"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_Determiner & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_Determiner &|Value|

#### Description






### `WriteJsonValue` <a id="Determiner_8h_1a9264767d7733a9c9a5dbd96cb326e221"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_Determiner & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_Determiner &|Value|

#### Description






### `TryGetJsonValue` <a id="Determiner_8h_1a6d12164ad8721656489484e57f1635bb"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_Determiner & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_Determiner &|Value|

#### Description







