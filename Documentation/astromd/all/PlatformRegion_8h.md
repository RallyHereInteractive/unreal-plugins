---
title: PlatformRegion.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_PlatformRegion](/unreal-plugins/all/platformregion_8h/#PlatformRegion_8h_1a6bb6c42a853173d5e3b8c8bd1a4510cf)|Region for Entitlements.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/platformregion_8h/#PlatformRegion_8h_1af43c1fe7befb1f2d43f8ab9fcca558b6)(const ERHAPI_PlatformRegion & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/platformregion_8h/#PlatformRegion_8h_1a7506d72d6da1cd3270521e5e18800c85)(const FString & EnumAsString, ERHAPI_PlatformRegion & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/platformregion_8h/#PlatformRegion_8h_1ad970fee9d25b983f499badbaa9339146)(const ERHAPI_PlatformRegion & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/platformregion_8h/#PlatformRegion_8h_1ac865aabed5554e2a089d205057113e70)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_PlatformRegion & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/platformregion_8h/#PlatformRegion_8h_1a1268a6b49d13f5c09a01a7ce6ab1f93a)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_PlatformRegion & Value)||
## Enums




### `ERHAPI_PlatformRegion` <a id="PlatformRegion_8h_1a6bb6c42a853173d5e3b8c8bd1a4510cf"></a>
Region for Entitlements.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Unknown region")`|
|`UMETA`|`=(ToolTip="North America region")`|
|`UMETA`|`=(ToolTip="Europe Union region")`|



## Functions



### `EnumToString` <a id="PlatformRegion_8h_1af43c1fe7befb1f2d43f8ab9fcca558b6"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_PlatformRegion & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_PlatformRegion &|EnumValue|

#### Description






### `EnumFromString` <a id="PlatformRegion_8h_1a7506d72d6da1cd3270521e5e18800c85"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_PlatformRegion & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_PlatformRegion &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="PlatformRegion_8h_1ad970fee9d25b983f499badbaa9339146"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_PlatformRegion & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_PlatformRegion &|Value|

#### Description






### `WriteJsonValue` <a id="PlatformRegion_8h_1ac865aabed5554e2a089d205057113e70"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_PlatformRegion & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_PlatformRegion &|Value|

#### Description






### `TryGetJsonValue` <a id="PlatformRegion_8h_1a1268a6b49d13f5c09a01a7ce6ab1f93a"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_PlatformRegion & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_PlatformRegion &|Value|

#### Description







