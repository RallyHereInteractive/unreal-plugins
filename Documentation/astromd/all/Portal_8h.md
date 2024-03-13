---
title: Portal.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_Portal](/unreal-plugins/all/portal_8h/#Portal_8h_1a9aa9c295fd476d58dc5dcf48c37dfd3f)|Portals a.k.a platforms that a player can be linked/authenticated with.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/portal_8h/#Portal_8h_1adfd1eeebfbafe92fac521b5276988091)(const ERHAPI_Portal & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/portal_8h/#Portal_8h_1a1a1a4a786f32eff8d99f077e0757ddde)(const FString & EnumAsString, ERHAPI_Portal & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/portal_8h/#Portal_8h_1a5be913644c7b2ad2bbadb9db4c3c7a43)(const ERHAPI_Portal & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/portal_8h/#Portal_8h_1a887efb3c59b7992d3a6c1ddc24ce53bd)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_Portal & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/portal_8h/#Portal_8h_1adacaa3c6cd0eeaad73d20f9902e8abc2)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_Portal & Value)||
## Enums




### `ERHAPI_Portal` <a id="Portal_8h_1a9aa9c295fd476d58dc5dcf48c37dfd3f"></a>
Portals a.k.a platforms that a player can be linked/authenticated with.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Anonymous portal used for testing. This is not intended to be used by real players.")`|
|`UMETA`|`=(ToolTip="Amazon portal")`|
|`UMETA`|`=(ToolTip="Steam portal")`|
|`UMETA`|`=(ToolTip="Playstation Network portal")`|
|`UMETA`|`=(ToolTip="Xbox Live portal")`|
|`UMETA`|`=(ToolTip="Basic portal")`|
|`UMETA`|`=(ToolTip="Google portal")`|
|`UMETA`|`=(ToolTip="Twitch portal")`|
|`UMETA`|`=(ToolTip="Nintendo Switch portal")`|
|`UMETA`|`=(ToolTip="Apple portal")`|
|`UMETA`|`=(ToolTip="Nintendo portal")`|
|`UMETA`|`=(ToolTip="Epic portal")`|
|`UMETA`|`=(ToolTip="Nintendo PPID portal")`|



## Functions



### `EnumToString` <a id="Portal_8h_1adfd1eeebfbafe92fac521b5276988091"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_Portal & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_Portal &|EnumValue|

#### Description






### `EnumFromString` <a id="Portal_8h_1a1a1a4a786f32eff8d99f077e0757ddde"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_Portal & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_Portal &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="Portal_8h_1a5be913644c7b2ad2bbadb9db4c3c7a43"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_Portal & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_Portal &|Value|

#### Description






### `WriteJsonValue` <a id="Portal_8h_1a887efb3c59b7992d3a6c1ddc24ce53bd"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_Portal & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_Portal &|Value|

#### Description






### `TryGetJsonValue` <a id="Portal_8h_1adacaa3c6cd0eeaad73d20f9902e8abc2"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_Portal & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_Portal &|Value|

#### Description







