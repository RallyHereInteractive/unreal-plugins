---
title: EntitlementStatus.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_EntitlementStatus](/unreal-plugins/all/entitlementstatus_8h/#EntitlementStatus_8h_1aa3c638a79ed821fd40f8d26af4c37d39)|Status of an Entitlement.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/entitlementstatus_8h/#EntitlementStatus_8h_1a65a88d609ba0d814c013ad4dcf964d58)(const ERHAPI_EntitlementStatus & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/entitlementstatus_8h/#EntitlementStatus_8h_1a55b3d451cbb8d934874c7eec232fd24e)(const FString & EnumAsString, ERHAPI_EntitlementStatus & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/entitlementstatus_8h/#EntitlementStatus_8h_1a81f6764a0e21c22ca9461dbdc086a0c9)(const ERHAPI_EntitlementStatus & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/entitlementstatus_8h/#EntitlementStatus_8h_1ae3e81e4d3818a1b17d912db4b20e8b50)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_EntitlementStatus & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/entitlementstatus_8h/#EntitlementStatus_8h_1a7a8461da7bddb7b02deb129350d46d64)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_EntitlementStatus & Value)||
## Enums




### `ERHAPI_EntitlementStatus` <a id="EntitlementStatus_8h_1aa3c638a79ed821fd40f8d26af4c37d39"></a>
Status of an Entitlement.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Entitlement status is unknown")`|
|`UMETA`|`=(ToolTip="Entitlement has been submitted to the backend")`|
|`UMETA`|`=(ToolTip="Entitlement has been fulfilled")`|
|`UMETA`|`=(ToolTip="Entitlement has failed, check error_code for more information")`|
|`UMETA`|`=(ToolTip="Entitlement was previously applied")`|



## Functions



### `EnumToString` <a id="EntitlementStatus_8h_1a65a88d609ba0d814c013ad4dcf964d58"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_EntitlementStatus & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_EntitlementStatus &|EnumValue|

#### Description






### `EnumFromString` <a id="EntitlementStatus_8h_1a55b3d451cbb8d934874c7eec232fd24e"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_EntitlementStatus & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_EntitlementStatus &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="EntitlementStatus_8h_1a81f6764a0e21c22ca9461dbdc086a0c9"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_EntitlementStatus & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_EntitlementStatus &|Value|

#### Description






### `WriteJsonValue` <a id="EntitlementStatus_8h_1ae3e81e4d3818a1b17d912db4b20e8b50"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_EntitlementStatus & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_EntitlementStatus &|Value|

#### Description






### `TryGetJsonValue` <a id="EntitlementStatus_8h_1a7a8461da7bddb7b02deb129350d46d64"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_EntitlementStatus & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_EntitlementStatus &|Value|

#### Description







