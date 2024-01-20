---
title: GrantType.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_GrantType](/unreal-plugins/all/granttype_8h/#GrantType_8h_1aab6cc2a40aafe693f890bb5e38655a4f)|Supported grant types for V1 Login Flow.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/granttype_8h/#GrantType_8h_1a33847e135850ac3f0e7b5bc9e0486d87)(const ERHAPI_GrantType & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/granttype_8h/#GrantType_8h_1aa72a662cb466e624867cd56f8f28f083)(const FString & EnumAsString, ERHAPI_GrantType & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/granttype_8h/#GrantType_8h_1a24308826a94df331330a0c8f45b3e522)(const ERHAPI_GrantType & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/granttype_8h/#GrantType_8h_1a6da3f74b86000b17b4ad9a9c049eec53)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_GrantType & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/granttype_8h/#GrantType_8h_1ac35f6e96e44c7eabfedae14b6fbdf5a2)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_GrantType & Value)||
## Enums




### `ERHAPI_GrantType` <a id="GrantType_8h_1aab6cc2a40aafe693f890bb5e38655a4f"></a>
Supported grant types for V1 Login Flow.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Anonymous authentication")`|
|`UMETA`|`=(ToolTip="Google authentication")`|
|`UMETA`|`=(ToolTip="Apple authentication")`|
|`UMETA`|`=(ToolTip="Refresh Token authentication")`|
|`UMETA`|`=(ToolTip="Epic Online Services authentication")`|
|`UMETA`|`=(ToolTip="Xbox Live authentication")`|
|`UMETA`|`=(ToolTip="Playstation Network v1 authentication using the configured PS4 credentials")`|
|`UMETA`|`=(ToolTip="Playstation Network v3 authentication using the configured PS5 credentials")`|
|`UMETA`|`=(ToolTip="Playstation Network v3 authentication using the configured PS5 credentials")`|
|`UMETA`|`=(ToolTip="Nintendo Account authentication")`|
|`UMETA`|`=(ToolTip="Nintendo Service Account (for Nintendo Switch) authentication")`|
|`UMETA`|`=(ToolTip="Steam authentication")`|
|`UMETA`|`=(ToolTip="Basic Username/Password authentication")`|
|`UMETA`|`=(ToolTip="Authentication that doesn&#39;t require user credentials, only a Client ID/Secret in the Authorization header.")`|



## Functions



### `EnumToString` <a id="GrantType_8h_1a33847e135850ac3f0e7b5bc9e0486d87"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_GrantType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_GrantType &|EnumValue|

#### Description






### `EnumFromString` <a id="GrantType_8h_1aa72a662cb466e624867cd56f8f28f083"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_GrantType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_GrantType &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="GrantType_8h_1a24308826a94df331330a0c8f45b3e522"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_GrantType & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_GrantType &|Value|

#### Description






### `WriteJsonValue` <a id="GrantType_8h_1a6da3f74b86000b17b4ad9a9c049eec53"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_GrantType & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_GrantType &|Value|

#### Description






### `TryGetJsonValue` <a id="GrantType_8h_1ac35f6e96e44c7eabfedae14b6fbdf5a2"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_GrantType & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_GrantType &|Value|

#### Description







