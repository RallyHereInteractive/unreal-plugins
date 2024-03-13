---
title: Platform.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_Platform](/unreal-plugins/all/platform_8h/#Platform_8h_1a53a346c36bec09b7fc92ba39ab43683a)|An enumeration.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/platform_8h/#Platform_8h_1abfc8728e23e6dc9d2469472fc86188b5)(const ERHAPI_Platform & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/platform_8h/#Platform_8h_1a97ebba637ac6045ef0dfe6b8a49ccef8)(const FString & EnumAsString, ERHAPI_Platform & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/platform_8h/#Platform_8h_1a38d696511a64e3acbb20d187c6988c34)(const ERHAPI_Platform & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/platform_8h/#Platform_8h_1a561fa7915eb7fcdd1f8638031046647b)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_Platform & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/platform_8h/#Platform_8h_1aa528b34491dd8e60a7323d42f65d66cc)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_Platform & Value)||
## Enums




### `ERHAPI_Platform` <a id="Platform_8h_1a53a346c36bec09b7fc92ba39ab43683a"></a>
An enumeration.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="An enumeration.")`|
|`UMETA`|`=(ToolTip="An enumeration.")`|
|`UMETA`|`=(ToolTip="An enumeration.")`|
|`UMETA`|`=(ToolTip="An enumeration.")`|
|`UMETA`|`=(ToolTip="An enumeration.")`|
|`UMETA`|`=(ToolTip="An enumeration.")`|
|`UMETA`|`=(ToolTip="An enumeration.")`|
|`UMETA`|`=(ToolTip="An enumeration.")`|
|`UMETA`|`=(ToolTip="An enumeration.")`|
|`UMETA`|`=(ToolTip="An enumeration.")`|
|`UMETA`|`=(ToolTip="An enumeration.")`|
|`UMETA`|`=(ToolTip="An enumeration.")`|
|`UMETA`|`=(ToolTip="An enumeration.")`|
|`UMETA`|`=(ToolTip="An enumeration.")`|



## Functions



### `EnumToString` <a id="Platform_8h_1abfc8728e23e6dc9d2469472fc86188b5"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_Platform & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_Platform &|EnumValue|

#### Description






### `EnumFromString` <a id="Platform_8h_1a97ebba637ac6045ef0dfe6b8a49ccef8"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_Platform & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_Platform &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="Platform_8h_1a38d696511a64e3acbb20d187c6988c34"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_Platform & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_Platform &|Value|

#### Description






### `WriteJsonValue` <a id="Platform_8h_1a561fa7915eb7fcdd1f8638031046647b"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_Platform & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_Platform &|Value|

#### Description






### `TryGetJsonValue` <a id="Platform_8h_1aa528b34491dd8e60a7323d42f65d66cc"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_Platform & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_Platform &|Value|

#### Description







