---
title: PlayerOrderDetailType.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_PlayerOrderDetailType](/unreal-plugins/all/playerorderdetailtype_8h/#PlayerOrderDetailType_8h_1a6bc0e166f85177d3c67c833a9b00f2b7)|Player Order Detail Type.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/playerorderdetailtype_8h/#PlayerOrderDetailType_8h_1a22f7f5d32e366338f496d2402330877a)(const ERHAPI_PlayerOrderDetailType & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/playerorderdetailtype_8h/#PlayerOrderDetailType_8h_1ad07bc0f829999b2645f1878e44395ade)(const FString & EnumAsString, ERHAPI_PlayerOrderDetailType & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/playerorderdetailtype_8h/#PlayerOrderDetailType_8h_1a429b51e61a8dc05473bcbb031a24e6a7)(const ERHAPI_PlayerOrderDetailType & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/playerorderdetailtype_8h/#PlayerOrderDetailType_8h_1ac6f7fe6da26d27dd6d669d7e29076862)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_PlayerOrderDetailType & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/playerorderdetailtype_8h/#PlayerOrderDetailType_8h_1a64925d1dfd5bbf5149281abd5984d9e2)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_PlayerOrderDetailType & Value)||
## Enums




### `ERHAPI_PlayerOrderDetailType` <a id="PlayerOrderDetailType_8h_1a6bc0e166f85177d3c67c833a9b00f2b7"></a>
Player Order Detail Type.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Unknown.")`|
|`UMETA`|`=(ToolTip="Inventory change.")`|
|`UMETA`|`=(ToolTip="Dynamic Bundle LTI.")`|
|`UMETA`|`=(ToolTip="Claim Promo Code.")`|
|`UMETA`|`=(ToolTip="Return Promo Code.")`|
|`UMETA`|`=(ToolTip="New Order.")`|



## Functions



### `EnumToString` <a id="PlayerOrderDetailType_8h_1a22f7f5d32e366338f496d2402330877a"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_PlayerOrderDetailType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_PlayerOrderDetailType &|EnumValue|

#### Description






### `EnumFromString` <a id="PlayerOrderDetailType_8h_1ad07bc0f829999b2645f1878e44395ade"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_PlayerOrderDetailType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_PlayerOrderDetailType &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="PlayerOrderDetailType_8h_1a429b51e61a8dc05473bcbb031a24e6a7"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_PlayerOrderDetailType & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_PlayerOrderDetailType &|Value|

#### Description






### `WriteJsonValue` <a id="PlayerOrderDetailType_8h_1ac6f7fe6da26d27dd6d669d7e29076862"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_PlayerOrderDetailType & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_PlayerOrderDetailType &|Value|

#### Description






### `TryGetJsonValue` <a id="PlayerOrderDetailType_8h_1a64925d1dfd5bbf5149281abd5984d9e2"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_PlayerOrderDetailType & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_PlayerOrderDetailType &|Value|

#### Description







