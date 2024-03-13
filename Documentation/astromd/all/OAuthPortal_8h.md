---
title: OAuthPortal.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_OAuthPortal](/unreal-plugins/all/oauthportal_8h/#OAuthPortal_8h_1a1f268689773805deceb21ea6616e9b4b)|Supported OAuth portals for V1 Login Flow.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/oauthportal_8h/#OAuthPortal_8h_1adc50fa8ac04b213ef4f629fac4af93a2)(const ERHAPI_OAuthPortal & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/oauthportal_8h/#OAuthPortal_8h_1a4c1efa72a9ff6db1736dc6b81d503489)(const FString & EnumAsString, ERHAPI_OAuthPortal & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/oauthportal_8h/#OAuthPortal_8h_1ae0666e4a22b2265307d2bf2ffc816245)(const ERHAPI_OAuthPortal & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/oauthportal_8h/#OAuthPortal_8h_1a5f19e68aecdb44092cfbc23586f0bfe0)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_OAuthPortal & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/oauthportal_8h/#OAuthPortal_8h_1aab1fcd5d0030ebb11200ba8a5bc2b852)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_OAuthPortal & Value)||
## Enums




### `ERHAPI_OAuthPortal` <a id="OAuthPortal_8h_1a1f268689773805deceb21ea6616e9b4b"></a>
Supported OAuth portals for V1 Login Flow.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Google OAuth Portal")`|
|`UMETA`|`=(ToolTip="Apple OAuth Portal")`|
|`UMETA`|`=(ToolTip="Epic OAuth Portal")`|
|`UMETA`|`=(ToolTip="Xbox OAuth Portal")`|
|`UMETA`|`=(ToolTip="Playstation Network OAuth Portal")`|
|`UMETA`|`=(ToolTip="Nintendo OAuth Portal")`|
|`UMETA`|`=(ToolTip="Steam OAuth Portal")`|
|`UMETA`|`=(ToolTip="Amazon OAuth Portal")`|
|`UMETA`|`=(ToolTip="Twitch OAuth Portal")`|



## Functions



### `EnumToString` <a id="OAuthPortal_8h_1adc50fa8ac04b213ef4f629fac4af93a2"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_OAuthPortal & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_OAuthPortal &|EnumValue|

#### Description






### `EnumFromString` <a id="OAuthPortal_8h_1a4c1efa72a9ff6db1736dc6b81d503489"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_OAuthPortal & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_OAuthPortal &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="OAuthPortal_8h_1ae0666e4a22b2265307d2bf2ffc816245"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_OAuthPortal & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_OAuthPortal &|Value|

#### Description






### `WriteJsonValue` <a id="OAuthPortal_8h_1a5f19e68aecdb44092cfbc23586f0bfe0"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_OAuthPortal & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_OAuthPortal &|Value|

#### Description






### `TryGetJsonValue` <a id="OAuthPortal_8h_1aab1fcd5d0030ebb11200ba8a5bc2b852"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_OAuthPortal & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_OAuthPortal &|Value|

#### Description







