---
title: CreateInventoryType.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_CreateInventoryType](/unreal-plugins/all/createinventorytype_8h/#CreateInventoryType_8h_1a2f0f4f3ff30a5fd025f0e455b4238617)|An enumeration.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/createinventorytype_8h/#CreateInventoryType_8h_1adbba6eb0375e55dc4ae66c80775bdd3e)(const ERHAPI_CreateInventoryType & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/createinventorytype_8h/#CreateInventoryType_8h_1aeb7dc65a289e11481ae3af9a015f9e34)(const FString & EnumAsString, ERHAPI_CreateInventoryType & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/createinventorytype_8h/#CreateInventoryType_8h_1abacbddaf2953180fec3fef0cd830e673)(const ERHAPI_CreateInventoryType & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/createinventorytype_8h/#CreateInventoryType_8h_1a2d2af0941068fc168a223e3312506eec)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_CreateInventoryType & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/createinventorytype_8h/#CreateInventoryType_8h_1a33e13f699f83426df8965b3e4e59249a)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_CreateInventoryType & Value)||
## Enums




### `ERHAPI_CreateInventoryType` <a id="CreateInventoryType_8h_1a2f0f4f3ff30a5fd025f0e455b4238617"></a>
An enumeration.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Inventory that persists between Inventory Sessions.")`|
|`UMETA`|`=(ToolTip="Inventory that does not persist between Inventory Sessions.")`|



## Functions



### `EnumToString` <a id="CreateInventoryType_8h_1adbba6eb0375e55dc4ae66c80775bdd3e"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_CreateInventoryType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_CreateInventoryType &|EnumValue|

#### Description






### `EnumFromString` <a id="CreateInventoryType_8h_1aeb7dc65a289e11481ae3af9a015f9e34"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_CreateInventoryType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_CreateInventoryType &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="CreateInventoryType_8h_1abacbddaf2953180fec3fef0cd830e673"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_CreateInventoryType & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_CreateInventoryType &|Value|

#### Description






### `WriteJsonValue` <a id="CreateInventoryType_8h_1a2d2af0941068fc168a223e3312506eec"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_CreateInventoryType & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_CreateInventoryType &|Value|

#### Description






### `TryGetJsonValue` <a id="CreateInventoryType_8h_1a33e13f699f83426df8965b3e4e59249a"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_CreateInventoryType & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_CreateInventoryType &|Value|

#### Description







