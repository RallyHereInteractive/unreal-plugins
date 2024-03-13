---
title: ClientType.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_ClientType](/unreal-plugins/all/clienttype_8h/#ClientType_8h_1a500c9da4f93e0ac7e435b380a7bd2143)|Client type for Entitlements.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/clienttype_8h/#ClientType_8h_1a4eedac0bcd77ac81c02408444514316f)(const ERHAPI_ClientType & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/clienttype_8h/#ClientType_8h_1afa24f1712329dd355de5c5b07ccdae04)(const FString & EnumAsString, ERHAPI_ClientType & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/clienttype_8h/#ClientType_8h_1a005c8db7b8b9d19768ee2b6f82e3c3bd)(const ERHAPI_ClientType & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/clienttype_8h/#ClientType_8h_1a3afde557788bd4204cadc123d2418bb9)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_ClientType & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/clienttype_8h/#ClientType_8h_1af3c64657e388e8925e7b5bd28dc1e797)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_ClientType & Value)||
## Enums




### `ERHAPI_ClientType` <a id="ClientType_8h_1a500c9da4f93e0ac7e435b380a7bd2143"></a>
Client type for Entitlements.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Unknown client type")`|
|`UMETA`|`=(ToolTip="Windows client type")`|
|`UMETA`|`=(ToolTip="Mac client type")`|
|`UMETA`|`=(ToolTip="XboxOne client type")`|
|`UMETA`|`=(ToolTip="Playstation 4 client type")`|
|`UMETA`|`=(ToolTip="Nintendo Switch client type")`|
|`UMETA`|`=(ToolTip="Android client type")`|
|`UMETA`|`=(ToolTip="iOS client type")`|
|`UMETA`|`=(ToolTip="Playstation 5 client type")`|
|`UMETA`|`=(ToolTip="Linux client type")`|
|`UMETA`|`=(ToolTip="XSX client type")`|



## Functions



### `EnumToString` <a id="ClientType_8h_1a4eedac0bcd77ac81c02408444514316f"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_ClientType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_ClientType &|EnumValue|

#### Description






### `EnumFromString` <a id="ClientType_8h_1afa24f1712329dd355de5c5b07ccdae04"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_ClientType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_ClientType &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="ClientType_8h_1a005c8db7b8b9d19768ee2b6f82e3c3bd"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_ClientType & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_ClientType &|Value|

#### Description






### `WriteJsonValue` <a id="ClientType_8h_1a3afde557788bd4204cadc123d2418bb9"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_ClientType & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_ClientType &|Value|

#### Description






### `TryGetJsonValue` <a id="ClientType_8h_1af3c64657e388e8925e7b5bd28dc1e797"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_ClientType & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_ClientType &|Value|

#### Description







