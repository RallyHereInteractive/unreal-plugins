---
title: OAuthGrantType.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_OAuthGrantType](/unreal-plugins/all/oauthgranttype_8h/#OAuthGrantType_8h_1abb9273fbdf62a3fdcb0e5567fe92f32a)|Supported OAuth2 grant types.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/oauthgranttype_8h/#OAuthGrantType_8h_1acd7d34cf86ba49acc2f2062f0778fce8)(const ERHAPI_OAuthGrantType & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/oauthgranttype_8h/#OAuthGrantType_8h_1a0feec44bebb907887fbb351b3023437a)(const FString & EnumAsString, ERHAPI_OAuthGrantType & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/oauthgranttype_8h/#OAuthGrantType_8h_1a085110967186e4c2848ae433808df9ab)(const ERHAPI_OAuthGrantType & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/oauthgranttype_8h/#OAuthGrantType_8h_1a60fa5aad75a964e234e3927c5be2ecfc)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_OAuthGrantType & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/oauthgranttype_8h/#OAuthGrantType_8h_1aef0899c5a91698368281a82df32b0cb3)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_OAuthGrantType & Value)||
## Enums




### `ERHAPI_OAuthGrantType` <a id="OAuthGrantType_8h_1abb9273fbdf62a3fdcb0e5567fe92f32a"></a>
Supported OAuth2 grant types.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="The OAuth2 client credentials grant type")`|



## Functions



### `EnumToString` <a id="OAuthGrantType_8h_1acd7d34cf86ba49acc2f2062f0778fce8"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_OAuthGrantType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_OAuthGrantType &|EnumValue|

#### Description






### `EnumFromString` <a id="OAuthGrantType_8h_1a0feec44bebb907887fbb351b3023437a"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_OAuthGrantType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_OAuthGrantType &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="OAuthGrantType_8h_1a085110967186e4c2848ae433808df9ab"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_OAuthGrantType & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_OAuthGrantType &|Value|

#### Description






### `WriteJsonValue` <a id="OAuthGrantType_8h_1a60fa5aad75a964e234e3927c5be2ecfc"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_OAuthGrantType & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_OAuthGrantType &|Value|

#### Description






### `TryGetJsonValue` <a id="OAuthGrantType_8h_1aef0899c5a91698368281a82df32b0cb3"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_OAuthGrantType & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_OAuthGrantType &|Value|

#### Description







