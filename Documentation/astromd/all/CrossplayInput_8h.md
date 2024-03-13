---
title: CrossplayInput.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_CrossplayInput](/unreal-plugins/all/crossplayinput_8h/#CrossplayInput_8h_1a7bb2cd98a11e06372454b8e43954aee4)|Crossplay input preferences. Used to determine whether players can queue together, and the pools of players that are used to generate matches.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/crossplayinput_8h/#CrossplayInput_8h_1acf8be298cc62c8682f577672142ff78b)(const ERHAPI_CrossplayInput & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/crossplayinput_8h/#CrossplayInput_8h_1a3a04ec8ddd6d5890029f7d74f629cc78)(const FString & EnumAsString, ERHAPI_CrossplayInput & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/crossplayinput_8h/#CrossplayInput_8h_1a2a8ce1ec605faccfba992df818f04651)(const ERHAPI_CrossplayInput & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/crossplayinput_8h/#CrossplayInput_8h_1a2715cea3f86cd59779102789d52082da)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_CrossplayInput & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/crossplayinput_8h/#CrossplayInput_8h_1afdfd6639dd6f0d3f58a989c8fbced512)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_CrossplayInput & Value)||
## Enums




### `ERHAPI_CrossplayInput` <a id="CrossplayInput_8h_1a7bb2cd98a11e06372454b8e43954aee4"></a>
Crossplay input preferences. Used to determine whether players can queue together, and the pools of players that are used to generate matches.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="No crossplay input preferences. Can play with players using any input")`|
|`UMETA`|`=(ToolTip="Can only play with players using a keyboard and mouse")`|
|`UMETA`|`=(ToolTip="Can only player with players using a gamepad/controller")`|
|`UMETA`|`=(ToolTip="Can only player with players using a touch screen")`|



## Functions



### `EnumToString` <a id="CrossplayInput_8h_1acf8be298cc62c8682f577672142ff78b"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_CrossplayInput & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_CrossplayInput &|EnumValue|

#### Description






### `EnumFromString` <a id="CrossplayInput_8h_1a3a04ec8ddd6d5890029f7d74f629cc78"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_CrossplayInput & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_CrossplayInput &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="CrossplayInput_8h_1a2a8ce1ec605faccfba992df818f04651"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_CrossplayInput & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_CrossplayInput &|Value|

#### Description






### `WriteJsonValue` <a id="CrossplayInput_8h_1a2715cea3f86cd59779102789d52082da"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_CrossplayInput & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_CrossplayInput &|Value|

#### Description






### `TryGetJsonValue` <a id="CrossplayInput_8h_1afdfd6639dd6f0d3f58a989c8fbced512"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_CrossplayInput & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_CrossplayInput &|Value|

#### Description







