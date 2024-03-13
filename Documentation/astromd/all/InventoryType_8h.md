---
title: InventoryType.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_InventoryType](/unreal-plugins/all/inventorytype_8h/#InventoryType_8h_1a5a6b31cdf873b4c82ef566864dc2b985)|An enumeration.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/inventorytype_8h/#InventoryType_8h_1a64b477e2a88c7b462d2340a4e5b93fa3)(const ERHAPI_InventoryType & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/inventorytype_8h/#InventoryType_8h_1a4c9655fe83a422cbfbc347fd4d93d0a7)(const FString & EnumAsString, ERHAPI_InventoryType & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/inventorytype_8h/#InventoryType_8h_1a2786effe921be56f5aa3ccec8f860c63)(const ERHAPI_InventoryType & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/inventorytype_8h/#InventoryType_8h_1aca3895b1c7fb7528d3e6a3690f66d7ec)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_InventoryType & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/inventorytype_8h/#InventoryType_8h_1a4dc0ae83ca3a5d32ab2de786fc3fb167)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_InventoryType & Value)||
## Enums




### `ERHAPI_InventoryType` <a id="InventoryType_8h_1a5a6b31cdf873b4c82ef566864dc2b985"></a>
An enumeration.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Inventory that persists between Inventory Sessions.")`|
|`UMETA`|`=(ToolTip="Stays around for the length of the Inventory Sessions.")`|
|`UMETA`|`=(ToolTip="Items that are given to all Players and cannot be modified.")`|



## Functions



### `EnumToString` <a id="InventoryType_8h_1a64b477e2a88c7b462d2340a4e5b93fa3"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_InventoryType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InventoryType &|EnumValue|

#### Description






### `EnumFromString` <a id="InventoryType_8h_1a4c9655fe83a422cbfbc347fd4d93d0a7"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_InventoryType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_InventoryType &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="InventoryType_8h_1a2786effe921be56f5aa3ccec8f860c63"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_InventoryType & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InventoryType &|Value|

#### Description






### `WriteJsonValue` <a id="InventoryType_8h_1aca3895b1c7fb7528d3e6a3690f66d7ec"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_InventoryType & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_InventoryType &|Value|

#### Description






### `TryGetJsonValue` <a id="InventoryType_8h_1a4dc0ae83ca3a5d32ab2de786fc3fb167"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_InventoryType & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_InventoryType &|Value|

#### Description







