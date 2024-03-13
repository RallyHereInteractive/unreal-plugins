---
title: PlatformID.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_PlatformID](/unreal-plugins/all/platformid_8h/#PlatformID_8h_1aafe3e8069e7bc34593e229cc98d73561)|DEPRECATED. Use Platform instead. Unique ids for different client platforms.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/platformid_8h/#PlatformID_8h_1a44b0d0741633d61ede2e5ff00a9828af)(const ERHAPI_PlatformID & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/platformid_8h/#PlatformID_8h_1ac18f098b9e4b65be445651894bf751ed)(const FString & EnumAsString, ERHAPI_PlatformID & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/platformid_8h/#PlatformID_8h_1aeca3e1e749c7ce6dffbf5f0b166d1f68)(const ERHAPI_PlatformID & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/platformid_8h/#PlatformID_8h_1a8cddda468047b6ec85654de25117f40b)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_PlatformID & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/platformid_8h/#PlatformID_8h_1a03f1fd5bbe19b587d70c7d415ba368f4)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_PlatformID & Value)||
## Enums




### `ERHAPI_PlatformID` <a id="PlatformID_8h_1aafe3e8069e7bc34593e229cc98d73561"></a>
DEPRECATED. Use Platform instead. Unique ids for different client platforms.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="DEPRECATED. Use platform instead. ID for the platform Anon")`|
|`UMETA`|`=(ToolTip="DEPRECATED. Use platform instead. ID for the platform Amazon")`|
|`UMETA`|`=(ToolTip="DEPRECATED. Use platform instead. ID for the platform Steam")`|
|`UMETA`|`=(ToolTip="DEPRECATED. Use platform instead. ID for the platform PSN")`|
|`UMETA`|`=(ToolTip="DEPRECATED. Use platform instead. ID for the platform XboxLive")`|
|`UMETA`|`=(ToolTip="DEPRECATED. Use platform instead. ID for the platform Basic")`|
|`UMETA`|`=(ToolTip="DEPRECATED. Use platform instead. ID for the platform Google")`|
|`UMETA`|`=(ToolTip="DEPRECATED. Use platform instead. ID for the platform Twitch")`|
|`UMETA`|`=(ToolTip="DEPRECATED. Use platform instead. ID for the platform NintendoSwitch")`|
|`UMETA`|`=(ToolTip="DEPRECATED. Use platform instead. ID for the platform Apple")`|
|`UMETA`|`=(ToolTip="DEPRECATED. Use platform instead. ID for the platform NintendoNAID")`|
|`UMETA`|`=(ToolTip="DEPRECATED. Use platform instead. ID for the platform Epic")`|



## Functions



### `EnumToString` <a id="PlatformID_8h_1a44b0d0741633d61ede2e5ff00a9828af"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_PlatformID & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_PlatformID &|EnumValue|

#### Description






### `EnumFromString` <a id="PlatformID_8h_1ac18f098b9e4b65be445651894bf751ed"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_PlatformID & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_PlatformID &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="PlatformID_8h_1aeca3e1e749c7ce6dffbf5f0b166d1f68"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_PlatformID & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_PlatformID &|Value|

#### Description






### `WriteJsonValue` <a id="PlatformID_8h_1a8cddda468047b6ec85654de25117f40b"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_PlatformID & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_PlatformID &|Value|

#### Description






### `TryGetJsonValue` <a id="PlatformID_8h_1a03f1fd5bbe19b587d70c7d415ba368f4"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_PlatformID & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_PlatformID &|Value|

#### Description







