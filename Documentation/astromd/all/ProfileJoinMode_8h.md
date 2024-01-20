---
title: ProfileJoinMode.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_ProfileJoinMode](/unreal-plugins/all/profilejoinmode_8h/#ProfileJoinMode_8h_1aea63cc93bb7b773becd1cca05141b7aa)|Mode that determines what types of match requests the ticket will appear in.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/profilejoinmode_8h/#ProfileJoinMode_8h_1a1bc0139e609cdafd8ea0ede308fd04cb)(const ERHAPI_ProfileJoinMode & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/profilejoinmode_8h/#ProfileJoinMode_8h_1a5da2d13dbd2da1e01ee2caa83044bd61)(const FString & EnumAsString, ERHAPI_ProfileJoinMode & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/profilejoinmode_8h/#ProfileJoinMode_8h_1aa942211c453413538850a32975f94f60)(const ERHAPI_ProfileJoinMode & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/profilejoinmode_8h/#ProfileJoinMode_8h_1a4ec08e4e7ecae22663203f0a5d3ccf9c)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_ProfileJoinMode & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/profilejoinmode_8h/#ProfileJoinMode_8h_1aa78aa2077a4312bf63b230be66e98a9b)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_ProfileJoinMode & Value)||
## Enums




### `ERHAPI_ProfileJoinMode` <a id="ProfileJoinMode_8h_1aea63cc93bb7b773becd1cca05141b7aa"></a>
Mode that determines what types of match requests the ticket will appear in.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Ticket will be used to fulfill normal requests (players joining queue regularly to find games)")`|
|`UMETA`|`=(ToolTip="Ticket will be used to fulfill backfill requests")`|
|`UMETA`|`=(ToolTip="Ticket will be used in normal requests only after a specified amount of time. This makes tickets wait before having their linkings considered")`|



## Functions



### `EnumToString` <a id="ProfileJoinMode_8h_1a1bc0139e609cdafd8ea0ede308fd04cb"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_ProfileJoinMode & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_ProfileJoinMode &|EnumValue|

#### Description






### `EnumFromString` <a id="ProfileJoinMode_8h_1a5da2d13dbd2da1e01ee2caa83044bd61"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_ProfileJoinMode & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_ProfileJoinMode &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="ProfileJoinMode_8h_1aa942211c453413538850a32975f94f60"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_ProfileJoinMode & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_ProfileJoinMode &|Value|

#### Description






### `WriteJsonValue` <a id="ProfileJoinMode_8h_1a4ec08e4e7ecae22663203f0a5d3ccf9c"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_ProfileJoinMode & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_ProfileJoinMode &|Value|

#### Description






### `TryGetJsonValue` <a id="ProfileJoinMode_8h_1aa78aa2077a4312bf63b230be66e98a9b"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_ProfileJoinMode & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_ProfileJoinMode &|Value|

#### Description







