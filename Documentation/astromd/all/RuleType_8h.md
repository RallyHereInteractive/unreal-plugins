---
title: RuleType.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_RuleType](/unreal-plugins/all/ruletype_8h/#RuleType_8h_1ac659016ba42443b397c5ce4b822a57fc)|What type of rule is being evaluated.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/ruletype_8h/#RuleType_8h_1a3fd1d0c3a3a29e9429e6fe42788ba592)(const ERHAPI_RuleType & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/ruletype_8h/#RuleType_8h_1a641545015a562963fc4aee21ad9a1731)(const FString & EnumAsString, ERHAPI_RuleType & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/ruletype_8h/#RuleType_8h_1a96e778f9342806599d11329d0f8cae1b)(const ERHAPI_RuleType & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/ruletype_8h/#RuleType_8h_1a0f4cf27574f9de122c1af1fc9fa03661)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_RuleType & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/ruletype_8h/#RuleType_8h_1aa80ebc68d48632d228463fed47e20aa4)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_RuleType & Value)||
## Enums




### `ERHAPI_RuleType` <a id="RuleType_8h_1ac659016ba42443b397c5ce4b822a57fc"></a>
What type of rule is being evaluated.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Comparing the count of a specific item that a player owns")`|
|`UMETA`|`=(ToolTip="Comparing the size of the linking (the number of players) in the session to be queued")`|



## Functions



### `EnumToString` <a id="RuleType_8h_1a3fd1d0c3a3a29e9429e6fe42788ba592"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_RuleType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_RuleType &|EnumValue|

#### Description






### `EnumFromString` <a id="RuleType_8h_1a641545015a562963fc4aee21ad9a1731"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_RuleType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_RuleType &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="RuleType_8h_1a96e778f9342806599d11329d0f8cae1b"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_RuleType & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_RuleType &|Value|

#### Description






### `WriteJsonValue` <a id="RuleType_8h_1a0f4cf27574f9de122c1af1fc9fa03661"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_RuleType & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_RuleType &|Value|

#### Description






### `TryGetJsonValue` <a id="RuleType_8h_1aa80ebc68d48632d228463fed47e20aa4"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_RuleType & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_RuleType &|Value|

#### Description







