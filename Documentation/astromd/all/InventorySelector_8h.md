---
title: InventorySelector.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_InventorySelector](/unreal-plugins/all/inventoryselector_8h/#InventorySelector_8h_1a151f460cf041be47d55c96d1715c3368)|Determines way Inventory Selected and to be modified.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/inventoryselector_8h/#InventorySelector_8h_1a7d639b844ef22333a2506ce7346c155c)(const ERHAPI_InventorySelector & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/inventoryselector_8h/#InventorySelector_8h_1ac3a4c13d9021cd953b609501fe991324)(const FString & EnumAsString, ERHAPI_InventorySelector & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/inventoryselector_8h/#InventorySelector_8h_1a32c65b7d214fb913dba5850461adc712)(const ERHAPI_InventorySelector & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/inventoryselector_8h/#InventorySelector_8h_1af1a62669634ac1b62027c45965438f80)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_InventorySelector & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/inventoryselector_8h/#InventorySelector_8h_1a3ce1f908b899904f3ca5c551cda15e6f)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_InventorySelector & Value)||
## Enums




### `ERHAPI_InventorySelector` <a id="InventorySelector_8h_1a151f460cf041be47d55c96d1715c3368"></a>
Determines way Inventory Selected and to be modified.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Invalid Inventory Selector.")`|
|`UMETA`|`=(ToolTip="The Inventory will be stored across Inventory Sessions.")`|
|`UMETA`|`=(ToolTip="The Inventory will be stored across Inventory Sessions but will expire after a period of time. Quantity modification will modify the Inventory&#39;s expiration time.")`|
|`UMETA`|`=(ToolTip="The Inventory will be stored across Inventory Sessions by will expire after a period of time. Quantity modification will not modify the Inventory&#39;s expiration time but instead the quantity of the Inventory.")`|
|`UMETA`|`=(ToolTip="The Inventory will by fulfilled as transient Inventory and will not persist across Inventory Sessions.")`|
|`UMETA`|`=(ToolTip="Loot fulfilled will look for a parent Entitlement and then grant the Loot as transient Inventory with the rental expiration as the parent.")`|



## Functions



### `EnumToString` <a id="InventorySelector_8h_1a7d639b844ef22333a2506ce7346c155c"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_InventorySelector & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InventorySelector &|EnumValue|

#### Description






### `EnumFromString` <a id="InventorySelector_8h_1ac3a4c13d9021cd953b609501fe991324"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_InventorySelector & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_InventorySelector &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="InventorySelector_8h_1a32c65b7d214fb913dba5850461adc712"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_InventorySelector & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InventorySelector &|Value|

#### Description






### `WriteJsonValue` <a id="InventorySelector_8h_1af1a62669634ac1b62027c45965438f80"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_InventorySelector & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_InventorySelector &|Value|

#### Description






### `TryGetJsonValue` <a id="InventorySelector_8h_1a3ce1f908b899904f3ca5c551cda15e6f"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_InventorySelector & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_InventorySelector &|Value|

#### Description







