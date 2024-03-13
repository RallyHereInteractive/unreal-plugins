---
title: EntitlementErrorCode.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_EntitlementErrorCode](/unreal-plugins/all/entitlementerrorcode_8h/#EntitlementErrorCode_8h_1a899c8a4a61a735b2a5dd5f06c235fabe)|Error codes for Entitlements.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/entitlementerrorcode_8h/#EntitlementErrorCode_8h_1a708fdece9ffe27eef465f1311ee611b1)(const ERHAPI_EntitlementErrorCode & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/entitlementerrorcode_8h/#EntitlementErrorCode_8h_1a163906adbe9fb53c57f192650c6cc655)(const FString & EnumAsString, ERHAPI_EntitlementErrorCode & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/entitlementerrorcode_8h/#EntitlementErrorCode_8h_1aa5555bfe7cecdbeac3560f29e5c5733d)(const ERHAPI_EntitlementErrorCode & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/entitlementerrorcode_8h/#EntitlementErrorCode_8h_1afe8ed08b1523edc0fd471610c4fa7abe)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_EntitlementErrorCode & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/entitlementerrorcode_8h/#EntitlementErrorCode_8h_1a50206a3d4db627d23911f89eb3b0f065)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_EntitlementErrorCode & Value)||
## Enums




### `ERHAPI_EntitlementErrorCode` <a id="EntitlementErrorCode_8h_1a899c8a4a61a735b2a5dd5f06c235fabe"></a>
Error codes for Entitlements.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="No error occured")`|
|`UMETA`|`=(ToolTip="Failed to find or validate the auth token")`|
|`UMETA`|`=(ToolTip="Missing information in the request")`|
|`UMETA`|`=(ToolTip="Failed to consume the entitlement")`|
|`UMETA`|`=(ToolTip="No SKU found for this entitlement on the backend")`|
|`UMETA`|`=(ToolTip="Entitlement is defined with a different SKU type than the one provided")`|
|`UMETA`|`=(ToolTip="Durable entitlements are not allowed by this platform")`|
|`UMETA`|`=(ToolTip="Durable single use entitlements are not allowed by this platform")`|
|`UMETA`|`=(ToolTip="Consumable entitlements are not allowed by this platform")`|
|`UMETA`|`=(ToolTip="Unknown SKU type provided")`|
|`UMETA`|`=(ToolTip="Failed to submit the order to the backend")`|
|`UMETA`|`=(ToolTip="Durable single use entitlement has already been applied")`|
|`UMETA`|`=(ToolTip="Quantity was zero, nothing to apply")`|
|`UMETA`|`=(ToolTip="Entitlement was previously applied")`|



## Functions



### `EnumToString` <a id="EntitlementErrorCode_8h_1a708fdece9ffe27eef465f1311ee611b1"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_EntitlementErrorCode & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_EntitlementErrorCode &|EnumValue|

#### Description






### `EnumFromString` <a id="EntitlementErrorCode_8h_1a163906adbe9fb53c57f192650c6cc655"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_EntitlementErrorCode & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_EntitlementErrorCode &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="EntitlementErrorCode_8h_1aa5555bfe7cecdbeac3560f29e5c5733d"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_EntitlementErrorCode & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_EntitlementErrorCode &|Value|

#### Description






### `WriteJsonValue` <a id="EntitlementErrorCode_8h_1afe8ed08b1523edc0fd471610c4fa7abe"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_EntitlementErrorCode & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_EntitlementErrorCode &|Value|

#### Description






### `TryGetJsonValue` <a id="EntitlementErrorCode_8h_1a50206a3d4db627d23911f89eb3b0f065"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_EntitlementErrorCode & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_EntitlementErrorCode &|Value|

#### Description







