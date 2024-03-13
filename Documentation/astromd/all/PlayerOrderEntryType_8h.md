---
title: PlayerOrderEntryType.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_PlayerOrderEntryType](/unreal-plugins/all/playerorderentrytype_8h/#PlayerOrderEntryType_8h_1a1b9f78f3daaaaf2efbfb206efdcf46bb)|Player Order Entry Type.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/playerorderentrytype_8h/#PlayerOrderEntryType_8h_1a8513675b94d815a919570805f044d8b8)(const ERHAPI_PlayerOrderEntryType & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/playerorderentrytype_8h/#PlayerOrderEntryType_8h_1a4d96dc791b723bc9c64922c212d9a49f)(const FString & EnumAsString, ERHAPI_PlayerOrderEntryType & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/playerorderentrytype_8h/#PlayerOrderEntryType_8h_1a36b587da2cace06ac04965150309dc91)(const ERHAPI_PlayerOrderEntryType & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/playerorderentrytype_8h/#PlayerOrderEntryType_8h_1ac73ac632423680ac0717ccfdcf574cca)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_PlayerOrderEntryType & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/playerorderentrytype_8h/#PlayerOrderEntryType_8h_1a813cb0d3f2df517c22946035cae814fb)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_PlayerOrderEntryType & Value)||
## Enums




### `ERHAPI_PlayerOrderEntryType` <a id="PlayerOrderEntryType_8h_1a1b9f78f3daaaaf2efbfb206efdcf46bb"></a>
Player Order Entry Type.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Fill a loot item.")`|
|`UMETA`|`=(ToolTip="Purchase a loot item.")`|
|`UMETA`|`=(ToolTip="Purchase a dynamic bundle.")`|
|`UMETA`|`=(ToolTip="Claim a promotion code.")`|
|`UMETA`|`=(ToolTip="Fill a transient loot item.")`|
|`UMETA`|`=(ToolTip="Fill an loot entitlement.")`|
|`UMETA`|`=(ToolTip="Create persistent Inventory.")`|
|`UMETA`|`=(ToolTip="Deprecated. Use update_inventory instead.")`|
|`UMETA`|`=(ToolTip="Create transient Inventory.")`|
|`UMETA`|`=(ToolTip="Deprecated. Use update_inventory instead.")`|
|`UMETA`|`=(ToolTip="Update existing Inventory.")`|



## Functions



### `EnumToString` <a id="PlayerOrderEntryType_8h_1a8513675b94d815a919570805f044d8b8"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_PlayerOrderEntryType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_PlayerOrderEntryType &|EnumValue|

#### Description






### `EnumFromString` <a id="PlayerOrderEntryType_8h_1a4d96dc791b723bc9c64922c212d9a49f"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_PlayerOrderEntryType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_PlayerOrderEntryType &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="PlayerOrderEntryType_8h_1a36b587da2cace06ac04965150309dc91"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_PlayerOrderEntryType & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_PlayerOrderEntryType &|Value|

#### Description






### `WriteJsonValue` <a id="PlayerOrderEntryType_8h_1ac73ac632423680ac0717ccfdcf574cca"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_PlayerOrderEntryType & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_PlayerOrderEntryType &|Value|

#### Description






### `TryGetJsonValue` <a id="PlayerOrderEntryType_8h_1a813cb0d3f2df517c22946035cae814fb"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_PlayerOrderEntryType & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_PlayerOrderEntryType &|Value|

#### Description







