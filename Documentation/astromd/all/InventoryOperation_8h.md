---
title: InventoryOperation.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_InventoryOperation](/unreal-plugins/all/inventoryoperation_8h/#InventoryOperation_8h_1a31676d72d43c2761a79ce0a2250960f9)|Determines how the Inventory Quantity will be acted upon and the sort order of Loot in a Vendor. Sort Order: 1. check_greater_then_or_equal/check_less_than 2. check_greater_than_or_equal_and_subtract/subtract 3. add/set.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/inventoryoperation_8h/#InventoryOperation_8h_1a0595501ed7403098e693b1713a3f2c7c)(const ERHAPI_InventoryOperation & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/inventoryoperation_8h/#InventoryOperation_8h_1a12293c3efefc88ea4a3a02d7a83aeb26)(const FString & EnumAsString, ERHAPI_InventoryOperation & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/inventoryoperation_8h/#InventoryOperation_8h_1a2f8e727083d78e825edf728645c4ce03)(const ERHAPI_InventoryOperation & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/inventoryoperation_8h/#InventoryOperation_8h_1a2118035d00f518d949d5032efe5252e2)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_InventoryOperation & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/inventoryoperation_8h/#InventoryOperation_8h_1a80845c7ca168dd69efd46323daf9d025)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_InventoryOperation & Value)||
## Enums




### `ERHAPI_InventoryOperation` <a id="InventoryOperation_8h_1a31676d72d43c2761a79ce0a2250960f9"></a>
Determines how the Inventory Quantity will be acted upon and the sort order of Loot in a Vendor. Sort Order: 1. check_greater_then_or_equal/check_less_than 2. check_greater_than_or_equal_and_subtract/subtract 3. add/set.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Invalid Inventory Operation.")`|
|`UMETA`|`=(ToolTip="Add the quantity or expiration of the Inventory.")`|
|`UMETA`|`=(ToolTip="Subtract the quantity or expiration of the Inventory.")`|
|`UMETA`|`=(ToolTip="Set the quantity or expiration of the Inventory.")`|
|`UMETA`|`=(ToolTip="Check if the quantity or expiration of the Inventory is greater than or equal to the value.")`|
|`UMETA`|`=(ToolTip="Check if the quantity or expiration of the Inventory is less than the value.")`|
|`UMETA`|`=(ToolTip="Check if the quantity or expiration of the Inventory is greater than or equal to the value and subtract the value from the quantity or expiration.")`|



## Functions



### `EnumToString` <a id="InventoryOperation_8h_1a0595501ed7403098e693b1713a3f2c7c"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_InventoryOperation & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InventoryOperation &|EnumValue|

#### Description






### `EnumFromString` <a id="InventoryOperation_8h_1a12293c3efefc88ea4a3a02d7a83aeb26"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_InventoryOperation & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_InventoryOperation &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="InventoryOperation_8h_1a2f8e727083d78e825edf728645c4ce03"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_InventoryOperation & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InventoryOperation &|Value|

#### Description






### `WriteJsonValue` <a id="InventoryOperation_8h_1a2118035d00f518d949d5032efe5252e2"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_InventoryOperation & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_InventoryOperation &|Value|

#### Description






### `TryGetJsonValue` <a id="InventoryOperation_8h_1a80845c7ca168dd69efd46323daf9d025"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_InventoryOperation & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_InventoryOperation &|Value|

#### Description







