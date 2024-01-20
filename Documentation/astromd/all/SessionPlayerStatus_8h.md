---
title: SessionPlayerStatus.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_SessionPlayerStatus](/unreal-plugins/all/sessionplayerstatus_8h/#SessionPlayerStatus_8h_1a5d99cff6ca93d8919160ab9fec1c6262)|What membership state players have in a session.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/sessionplayerstatus_8h/#SessionPlayerStatus_8h_1a379bf00c1c4ea6cf85c33795e09107f9)(const ERHAPI_SessionPlayerStatus & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/sessionplayerstatus_8h/#SessionPlayerStatus_8h_1a115bbea6183755c912df68e102f3aeca)(const FString & EnumAsString, ERHAPI_SessionPlayerStatus & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/sessionplayerstatus_8h/#SessionPlayerStatus_8h_1a40c8ddf1bef45ee202e74f2c14532dbc)(const ERHAPI_SessionPlayerStatus & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/sessionplayerstatus_8h/#SessionPlayerStatus_8h_1adb4c445f65a64f6e4b334298f678159a)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_SessionPlayerStatus & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/sessionplayerstatus_8h/#SessionPlayerStatus_8h_1a3acfd227886ad34f1ef88b345b8e7f38)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_SessionPlayerStatus & Value)||
## Enums




### `ERHAPI_SessionPlayerStatus` <a id="SessionPlayerStatus_8h_1a5d99cff6ca93d8919160ab9fec1c6262"></a>
What membership state players have in a session.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Player is the leader of the session. Is allowed to perform admin actions on the session")`|
|`UMETA`|`=(ToolTip="Player is an active member of the session. Is allowed basic actions on the session")`|
|`UMETA`|`=(ToolTip="Player has been invited to the session, but has not accepted or declined")`|
|`UMETA`|`=(ToolTip="Player&#39;s spot has been reserved on the session, but the player has not yet been notified")`|



## Functions



### `EnumToString` <a id="SessionPlayerStatus_8h_1a379bf00c1c4ea6cf85c33795e09107f9"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_SessionPlayerStatus & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_SessionPlayerStatus &|EnumValue|

#### Description






### `EnumFromString` <a id="SessionPlayerStatus_8h_1a115bbea6183755c912df68e102f3aeca"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_SessionPlayerStatus & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_SessionPlayerStatus &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="SessionPlayerStatus_8h_1a40c8ddf1bef45ee202e74f2c14532dbc"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_SessionPlayerStatus & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_SessionPlayerStatus &|Value|

#### Description






### `WriteJsonValue` <a id="SessionPlayerStatus_8h_1adb4c445f65a64f6e4b334298f678159a"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_SessionPlayerStatus & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_SessionPlayerStatus &|Value|

#### Description






### `TryGetJsonValue` <a id="SessionPlayerStatus_8h_1a3acfd227886ad34f1ef88b345b8e7f38"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_SessionPlayerStatus & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_SessionPlayerStatus &|Value|

#### Description







