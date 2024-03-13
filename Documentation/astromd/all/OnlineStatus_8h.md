---
title: OnlineStatus.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_OnlineStatus](/unreal-plugins/all/onlinestatus_8h/#OnlineStatus_8h_1a5fe5765b2b394ead6db7dda304ee9657)|An enumeration.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/onlinestatus_8h/#OnlineStatus_8h_1abfb33758dabbab3b32d36155c0fd8c64)(const ERHAPI_OnlineStatus & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/onlinestatus_8h/#OnlineStatus_8h_1a71234306a63e6a9a2eb87f4869fe372a)(const FString & EnumAsString, ERHAPI_OnlineStatus & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/onlinestatus_8h/#OnlineStatus_8h_1ac9e37d57fc8fb79c56daf850e874f9a0)(const ERHAPI_OnlineStatus & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/onlinestatus_8h/#OnlineStatus_8h_1a0053833dfc02fac7719ec4ac95e1ce5c)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_OnlineStatus & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/onlinestatus_8h/#OnlineStatus_8h_1a9099b9cb80490382bba9e5e939cadb92)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_OnlineStatus & Value)||
## Enums




### `ERHAPI_OnlineStatus` <a id="OnlineStatus_8h_1a5fe5765b2b394ead6db7dda304ee9657"></a>
An enumeration.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Player is current online")`|
|`UMETA`|`=(ToolTip="Player is current online, but away.  Functionally identical to online")`|
|`UMETA`|`=(ToolTip="Player will appear offline to other players")`|
|`UMETA`|`=(ToolTip="Player is offline")`|



## Functions



### `EnumToString` <a id="OnlineStatus_8h_1abfb33758dabbab3b32d36155c0fd8c64"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_OnlineStatus & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_OnlineStatus &|EnumValue|

#### Description






### `EnumFromString` <a id="OnlineStatus_8h_1a71234306a63e6a9a2eb87f4869fe372a"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_OnlineStatus & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_OnlineStatus &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="OnlineStatus_8h_1ac9e37d57fc8fb79c56daf850e874f9a0"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_OnlineStatus & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_OnlineStatus &|Value|

#### Description






### `WriteJsonValue` <a id="OnlineStatus_8h_1a0053833dfc02fac7719ec4ac95e1ce5c"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_OnlineStatus & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_OnlineStatus &|Value|

#### Description






### `TryGetJsonValue` <a id="OnlineStatus_8h_1a9099b9cb80490382bba9e5e939cadb92"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_OnlineStatus & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_OnlineStatus &|Value|

#### Description







