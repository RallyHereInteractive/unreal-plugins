---
title: OAuthTokenEchangeGrantType.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_OAuthTokenEchangeGrantType](/unreal-plugins/all/oauthtokenechangegranttype_8h/#OAuthTokenEchangeGrantType_8h_1ac547d885087641df757236f52087d98a)|Supported grant types for OAuth Token Exchange process.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/oauthtokenechangegranttype_8h/#OAuthTokenEchangeGrantType_8h_1a01085e480b5bcf768a7db6da24813fdd)(const ERHAPI_OAuthTokenEchangeGrantType & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/oauthtokenechangegranttype_8h/#OAuthTokenEchangeGrantType_8h_1aae834e09ab3169b18ee1da99f0a858de)(const FString & EnumAsString, ERHAPI_OAuthTokenEchangeGrantType & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/oauthtokenechangegranttype_8h/#OAuthTokenEchangeGrantType_8h_1a8fda36048c8aa80a1f7aa04546bf2a42)(const ERHAPI_OAuthTokenEchangeGrantType & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/oauthtokenechangegranttype_8h/#OAuthTokenEchangeGrantType_8h_1ae6f8db5f92dc6530e51e6cadb2c4900e)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_OAuthTokenEchangeGrantType & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/oauthtokenechangegranttype_8h/#OAuthTokenEchangeGrantType_8h_1adb283ea15458728e8f251000a76dad30)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_OAuthTokenEchangeGrantType & Value)||
## Enums




### `ERHAPI_OAuthTokenEchangeGrantType` <a id="OAuthTokenEchangeGrantType_8h_1ac547d885087641df757236f52087d98a"></a>
Supported grant types for OAuth Token Exchange process.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Authorization code grant type for OAuth token exchange.")`|



## Functions



### `EnumToString` <a id="OAuthTokenEchangeGrantType_8h_1a01085e480b5bcf768a7db6da24813fdd"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_OAuthTokenEchangeGrantType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_OAuthTokenEchangeGrantType &|EnumValue|

#### Description






### `EnumFromString` <a id="OAuthTokenEchangeGrantType_8h_1aae834e09ab3169b18ee1da99f0a858de"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_OAuthTokenEchangeGrantType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_OAuthTokenEchangeGrantType &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="OAuthTokenEchangeGrantType_8h_1a8fda36048c8aa80a1f7aa04546bf2a42"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_OAuthTokenEchangeGrantType & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_OAuthTokenEchangeGrantType &|Value|

#### Description






### `WriteJsonValue` <a id="OAuthTokenEchangeGrantType_8h_1ae6f8db5f92dc6530e51e6cadb2c4900e"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_OAuthTokenEchangeGrantType & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_OAuthTokenEchangeGrantType &|Value|

#### Description






### `TryGetJsonValue` <a id="OAuthTokenEchangeGrantType_8h_1adb283ea15458728e8f251000a76dad30"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_OAuthTokenEchangeGrantType & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_OAuthTokenEchangeGrantType &|Value|

#### Description







