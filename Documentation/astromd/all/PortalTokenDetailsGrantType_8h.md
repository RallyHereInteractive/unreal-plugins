---
title: PortalTokenDetailsGrantType.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_PortalTokenDetailsGrantType](/unreal-plugins/all/portaltokendetailsgranttype_8h/#PortalTokenDetailsGrantType_8h_1a31df65623a3c5c3ad1280be2bf1ed5a9)|The grant type used to authenticate the portal tokens.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/portaltokendetailsgranttype_8h/#PortalTokenDetailsGrantType_8h_1a6bcce04070e3a710afd1062c1390a8b1)(const ERHAPI_PortalTokenDetailsGrantType & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/portaltokendetailsgranttype_8h/#PortalTokenDetailsGrantType_8h_1a5a27147f473e00a573050bc718f588b3)(const FString & EnumAsString, ERHAPI_PortalTokenDetailsGrantType & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/portaltokendetailsgranttype_8h/#PortalTokenDetailsGrantType_8h_1a81327539c30d499a880e9758175d3fae)(const ERHAPI_PortalTokenDetailsGrantType & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/portaltokendetailsgranttype_8h/#PortalTokenDetailsGrantType_8h_1a99fb0937d2322a3fd7b4d74a60f72c0f)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_PortalTokenDetailsGrantType & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/portaltokendetailsgranttype_8h/#PortalTokenDetailsGrantType_8h_1a80d5d365800778f9d2ccef97710cf3cc)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_PortalTokenDetailsGrantType & Value)||
## Enums




### `ERHAPI_PortalTokenDetailsGrantType` <a id="PortalTokenDetailsGrantType_8h_1a31df65623a3c5c3ad1280be2bf1ed5a9"></a>
The grant type used to authenticate the portal tokens.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Playstation Network v1 auth token validated using the configured PS4 credentials")`|
|`UMETA`|`=(ToolTip="Playstation Network v3 auth token validated using the configured PS4 credentials")`|
|`UMETA`|`=(ToolTip="Playstation Network v3 auth token validated using the configured PS5 credentials")`|



## Functions



### `EnumToString` <a id="PortalTokenDetailsGrantType_8h_1a6bcce04070e3a710afd1062c1390a8b1"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_PortalTokenDetailsGrantType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_PortalTokenDetailsGrantType &|EnumValue|

#### Description






### `EnumFromString` <a id="PortalTokenDetailsGrantType_8h_1a5a27147f473e00a573050bc718f588b3"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_PortalTokenDetailsGrantType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_PortalTokenDetailsGrantType &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="PortalTokenDetailsGrantType_8h_1a81327539c30d499a880e9758175d3fae"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_PortalTokenDetailsGrantType & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_PortalTokenDetailsGrantType &|Value|

#### Description






### `WriteJsonValue` <a id="PortalTokenDetailsGrantType_8h_1a99fb0937d2322a3fd7b4d74a60f72c0f"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_PortalTokenDetailsGrantType & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_PortalTokenDetailsGrantType &|Value|

#### Description






### `TryGetJsonValue` <a id="PortalTokenDetailsGrantType_8h_1a80d5d365800778f9d2ccef97710cf3cc"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_PortalTokenDetailsGrantType & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_PortalTokenDetailsGrantType &|Value|

#### Description







