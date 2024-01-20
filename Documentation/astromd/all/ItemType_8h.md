---
title: ItemType.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_ItemType](/unreal-plugins/all/itemtype_8h/#ItemType_8h_1ae2f0f502ed7b013dd2489eef9b1ec08b)|The type of item.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/itemtype_8h/#ItemType_8h_1a617914eb99f42d1a1f0ba68a7ed33ce8)(const ERHAPI_ItemType & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/itemtype_8h/#ItemType_8h_1adb4ead33b026908f0ee5dd3cc86b05fa)(const FString & EnumAsString, ERHAPI_ItemType & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/itemtype_8h/#ItemType_8h_1acd87e88858c159956f5f45f0542c3e7c)(const ERHAPI_ItemType & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/itemtype_8h/#ItemType_8h_1a12d382c353bdac87ac38cbda7db93554)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_ItemType & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/itemtype_8h/#ItemType_8h_1afe3e335998a74077d538da2631a7b154)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_ItemType & Value)||
## Enums




### `ERHAPI_ItemType` <a id="ItemType_8h_1ae2f0f502ed7b013dd2489eef9b1ec08b"></a>
The type of item.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="An item that is stored in a player&#39;s inventory.")`|
|`UMETA`|`=(ToolTip="A Loot with the ItemType receipt will fulfill SubVendor Loot and will not stored in a player&#39;s inventory.")`|
|`UMETA`|`=(ToolTip="The same as &#x60;ItemType.recipe&#x60; but will reduce the price based on whether or not the player owns items in the SubVendor&#39;s Loot table.")`|
|`UMETA`|`=(ToolTip="An entitlement is a special item that is stored in a player&#39;s inventory and is fulfilled to the player each time an Inventory Session is created and when the Entitlement is fulfilled to the Player.")`|
|`UMETA`|`=(ToolTip="Not support at this time.")`|



## Functions



### `EnumToString` <a id="ItemType_8h_1a617914eb99f42d1a1f0ba68a7ed33ce8"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_ItemType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_ItemType &|EnumValue|

#### Description






### `EnumFromString` <a id="ItemType_8h_1adb4ead33b026908f0ee5dd3cc86b05fa"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_ItemType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_ItemType &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="ItemType_8h_1acd87e88858c159956f5f45f0542c3e7c"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_ItemType & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_ItemType &|Value|

#### Description






### `WriteJsonValue` <a id="ItemType_8h_1a12d382c353bdac87ac38cbda7db93554"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_ItemType & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_ItemType &|Value|

#### Description






### `TryGetJsonValue` <a id="ItemType_8h_1afe3e335998a74077d538da2631a7b154"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_ItemType & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_ItemType &|Value|

#### Description







