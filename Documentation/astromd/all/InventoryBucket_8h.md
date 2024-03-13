---
title: InventoryBucket.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_InventoryBucket](/unreal-plugins/all/inventorybucket_8h/#InventoryBucket_8h_1a06a4d1c9456be0759841b52d83eb09d1)|Grouping of Inventory Items. Inventory items are grouped into different buckets as each Platform that is supported has different requirements on how Inventory can be used on their Platform and other Platforms.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/inventorybucket_8h/#InventoryBucket_8h_1af5b2644d718554024cb71a7f660338ce)(const ERHAPI_InventoryBucket & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/inventorybucket_8h/#InventoryBucket_8h_1ad56d3ac8d936f864971d26624b887639)(const FString & EnumAsString, ERHAPI_InventoryBucket & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/inventorybucket_8h/#InventoryBucket_8h_1a1f14d5d3b616ca292b75ef08e15dc4b5)(const ERHAPI_InventoryBucket & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/inventorybucket_8h/#InventoryBucket_8h_1ad3a81541836281cc151529908f43b141)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_InventoryBucket & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/inventorybucket_8h/#InventoryBucket_8h_1a05cd95e0caf9ecf8b3a9e374151c6189)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_InventoryBucket & Value)||
## Enums




### `ERHAPI_InventoryBucket` <a id="InventoryBucket_8h_1a06a4d1c9456be0759841b52d83eb09d1"></a>
Grouping of Inventory Items. Inventory items are grouped into different buckets as each Platform that is supported has different requirements on how Inventory can be used on their Platform and other Platforms.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Inventory given away for free.")`|
|`UMETA`|`=(ToolTip="Inventory earned by players through in game activities.")`|
|`UMETA`|`=(ToolTip="Inventory that doesn&#39;t belong to any known platform.")`|
|`UMETA`|`=(ToolTip="Inventory assigned to the anonymous platform.")`|
|`UMETA`|`=(ToolTip="Inventory assigned to the amazon platform.")`|
|`UMETA`|`=(ToolTip="Inventory assigned to the steam platform.")`|
|`UMETA`|`=(ToolTip="Inventory assigned to the playstation platform.")`|
|`UMETA`|`=(ToolTip="Inventory assigned to the Xbox platform.")`|
|`UMETA`|`=(ToolTip="Inventory assigned to the Google platform.")`|
|`UMETA`|`=(ToolTip="Inventory assigned to the Twitch platform.")`|
|`UMETA`|`=(ToolTip="Inventory assigned to the Nintendo Switch platform.")`|
|`UMETA`|`=(ToolTip="Inventory assigned to the Apple platform.")`|
|`UMETA`|`=(ToolTip="Inventory assigned to the Nintendo platform.")`|
|`UMETA`|`=(ToolTip="Inventory assigned to the Epic platform.")`|
|`UMETA`|`=(ToolTip="Inventory assigned to the Google Play platform.")`|
|`UMETA`|`=(ToolTip="Inventory assigned to the Nintendo PPID platform.")`|



## Functions



### `EnumToString` <a id="InventoryBucket_8h_1af5b2644d718554024cb71a7f660338ce"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_InventoryBucket & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InventoryBucket &|EnumValue|

#### Description






### `EnumFromString` <a id="InventoryBucket_8h_1ad56d3ac8d936f864971d26624b887639"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_InventoryBucket & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_InventoryBucket &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="InventoryBucket_8h_1a1f14d5d3b616ca292b75ef08e15dc4b5"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_InventoryBucket & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InventoryBucket &|Value|

#### Description






### `WriteJsonValue` <a id="InventoryBucket_8h_1ad3a81541836281cc151529908f43b141"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_InventoryBucket & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_InventoryBucket &|Value|

#### Description






### `TryGetJsonValue` <a id="InventoryBucket_8h_1a05cd95e0caf9ecf8b3a9e374151c6189"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_InventoryBucket & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_InventoryBucket &|Value|

#### Description







