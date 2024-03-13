---
title: CrossplayPlatform.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_CrossplayPlatform](/unreal-plugins/all/crossplayplatform_8h/#CrossplayPlatform_8h_1aedc8a148006a76b322494a4f35c6012b)|Crossplay platform preferences. Used to determine whether players can queue together, and the pools of players that are used to generate matches.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/crossplayplatform_8h/#CrossplayPlatform_8h_1a6d0887ba5efde9f757a8a53804695c92)(const ERHAPI_CrossplayPlatform & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/crossplayplatform_8h/#CrossplayPlatform_8h_1adc41d6dde67f3b25e7f442b498ce374d)(const FString & EnumAsString, ERHAPI_CrossplayPlatform & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/crossplayplatform_8h/#CrossplayPlatform_8h_1af88b2fd78ce1c8c5834b3c67c9410bc8)(const ERHAPI_CrossplayPlatform & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/crossplayplatform_8h/#CrossplayPlatform_8h_1aaafd79c76705ccf0db6f7161a89e9186)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_CrossplayPlatform & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/crossplayplatform_8h/#CrossplayPlatform_8h_1a8caf864c3831122083de795098545144)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_CrossplayPlatform & Value)||
## Enums




### `ERHAPI_CrossplayPlatform` <a id="CrossplayPlatform_8h_1aedc8a148006a76b322494a4f35c6012b"></a>
Crossplay platform preferences. Used to determine whether players can queue together, and the pools of players that are used to generate matches.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="No crossplay platform preferences. Can play with players any platforms")`|
|`UMETA`|`=(ToolTip="Can only play with players on xbox-like platforms (xbox-one, xsx etc.)")`|
|`UMETA`|`=(ToolTip="Can only play with players on playstation-like platform (ps4, ps5 etc.)")`|



## Functions



### `EnumToString` <a id="CrossplayPlatform_8h_1a6d0887ba5efde9f757a8a53804695c92"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_CrossplayPlatform & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_CrossplayPlatform &|EnumValue|

#### Description






### `EnumFromString` <a id="CrossplayPlatform_8h_1adc41d6dde67f3b25e7f442b498ce374d"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_CrossplayPlatform & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_CrossplayPlatform &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="CrossplayPlatform_8h_1af88b2fd78ce1c8c5834b3c67c9410bc8"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_CrossplayPlatform & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_CrossplayPlatform &|Value|

#### Description






### `WriteJsonValue` <a id="CrossplayPlatform_8h_1aaafd79c76705ccf0db6f7161a89e9186"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_CrossplayPlatform & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_CrossplayPlatform &|Value|

#### Description






### `TryGetJsonValue` <a id="CrossplayPlatform_8h_1a8caf864c3831122083de795098545144"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_CrossplayPlatform & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_CrossplayPlatform &|Value|

#### Description







