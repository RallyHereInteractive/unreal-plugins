---
title: FriendshipStatus.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_FriendshipStatus](/unreal-plugins/all/friendshipstatus_8h/#FriendshipStatus_8h_1a1b35212d8484c58bafd558fcf6f1b323)|An enumeration.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/friendshipstatus_8h/#FriendshipStatus_8h_1a2611c5febdd8d841999fdb212b7dea38)(const ERHAPI_FriendshipStatus & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/friendshipstatus_8h/#FriendshipStatus_8h_1a91baf674c581b2aee550fb0101a59eee)(const FString & EnumAsString, ERHAPI_FriendshipStatus & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/friendshipstatus_8h/#FriendshipStatus_8h_1a9850fe77bf0f70819abc2088c9f25080)(const ERHAPI_FriendshipStatus & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/friendshipstatus_8h/#FriendshipStatus_8h_1a8e17f3ba670fd494138abb0e2b5dfa90)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_FriendshipStatus & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/friendshipstatus_8h/#FriendshipStatus_8h_1ac887457709355565b7a316ea67615b5d)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_FriendshipStatus & Value)||
## Enums




### `ERHAPI_FriendshipStatus` <a id="FriendshipStatus_8h_1a1b35212d8484c58bafd558fcf6f1b323"></a>
An enumeration.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="")`|
|`UMETA`|`=(ToolTip="")`|
|`UMETA`|`=(ToolTip="")`|
|`UMETA`|`=(ToolTip="")`|
|`UMETA`|`=(ToolTip="")`|



## Functions



### `EnumToString` <a id="FriendshipStatus_8h_1a2611c5febdd8d841999fdb212b7dea38"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_FriendshipStatus & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_FriendshipStatus &|EnumValue|

#### Description






### `EnumFromString` <a id="FriendshipStatus_8h_1a91baf674c581b2aee550fb0101a59eee"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_FriendshipStatus & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_FriendshipStatus &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="FriendshipStatus_8h_1a9850fe77bf0f70819abc2088c9f25080"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_FriendshipStatus & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_FriendshipStatus &|Value|

#### Description






### `WriteJsonValue` <a id="FriendshipStatus_8h_1a8e17f3ba670fd494138abb0e2b5dfa90"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_FriendshipStatus & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_FriendshipStatus &|Value|

#### Description






### `TryGetJsonValue` <a id="FriendshipStatus_8h_1ac887457709355565b7a316ea67615b5d"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_FriendshipStatus & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_FriendshipStatus &|Value|

#### Description







