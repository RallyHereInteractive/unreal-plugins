---
title: XpQuantityTransform.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_XpQuantityTransform](/unreal-plugins/all/xpquantitytransform_8h/#XpQuantityTransform_8h_1ae5d492a695c94108982be0f834fcc8e5)|Allows granting xp levels as Loot. If the player is already max level, the Loot will not be fulfilled. Requires the Item assigned to the Loot to have an XP Table ID. The following examples assume the player is level 3 with 150 total xp. The quantity configured on the Loot being fulfilled is 1. The XP Table is configured like so: 1: 20 2: 50 3: 100 4: 200 5: 400 from_current_xp_to_target_additional_level_min_xp - The Loot will grant the player enough xp to reach min xp of the next level. Example 1: fulfill quantity 1 Player will be level 4 with 200 total xp. Example 2: fulfill quantity 2 Player will be level 5 with 400 total xp. Example 3: fulfill quantity 3 Player will be level 5 with 400 total xp. from_current_level_min_xp_to_target_additional_level_min_xp - The Loot will grant the player the amount of xp required to reach the min xp of the next level from the min xp of the current level. Example 1: fulfill quantity 1 Player will be level 4 with 250 total xp. Example 2: fulfill quantity 2 Player will be level 5 with 450 total xp. Example 3: fulfill quantity 3 Player will be level 5 with 450 total xp. from_zero_to_target_exact_level_min_xp - The Loot will grant the player the amount of xp required to reach the min xp of the target level from zero xp. Example 1: fulfill quantity 1 Player will be level 3 with 170 total xp. Example 2: fulfill quantity 2 Player will be level 4 with 200 total xp. Example 3: fulfill quantity 3 Player will be level 4 with 250 total xp.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/xpquantitytransform_8h/#XpQuantityTransform_8h_1a53273a340739fcd6e4cf7eb60689a380)(const ERHAPI_XpQuantityTransform & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/xpquantitytransform_8h/#XpQuantityTransform_8h_1ad4cb1fdf263cc979cee867a3ddbcf6a6)(const FString & EnumAsString, ERHAPI_XpQuantityTransform & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/xpquantitytransform_8h/#XpQuantityTransform_8h_1a142a554baf7a45d104fb5310cc5241d2)(const ERHAPI_XpQuantityTransform & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/xpquantitytransform_8h/#XpQuantityTransform_8h_1ab2acb6679b3efba3ae73f3c621093b15)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_XpQuantityTransform & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/xpquantitytransform_8h/#XpQuantityTransform_8h_1a030dda37d81b6f25d989245b0f839cfc)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_XpQuantityTransform & Value)||
## Enums




### `ERHAPI_XpQuantityTransform` <a id="XpQuantityTransform_8h_1ae5d492a695c94108982be0f834fcc8e5"></a>
Allows granting xp levels as Loot. If the player is already max level, the Loot will not be fulfilled. Requires the Item assigned to the Loot to have an XP Table ID. The following examples assume the player is level 3 with 150 total xp. The quantity configured on the Loot being fulfilled is 1. The XP Table is configured like so: 1: 20 2: 50 3: 100 4: 200 5: 400 from_current_xp_to_target_additional_level_min_xp - The Loot will grant the player enough xp to reach min xp of the next level. Example 1: fulfill quantity 1 Player will be level 4 with 200 total xp. Example 2: fulfill quantity 2 Player will be level 5 with 400 total xp. Example 3: fulfill quantity 3 Player will be level 5 with 400 total xp. from_current_level_min_xp_to_target_additional_level_min_xp - The Loot will grant the player the amount of xp required to reach the min xp of the next level from the min xp of the current level. Example 1: fulfill quantity 1 Player will be level 4 with 250 total xp. Example 2: fulfill quantity 2 Player will be level 5 with 450 total xp. Example 3: fulfill quantity 3 Player will be level 5 with 450 total xp. from_zero_to_target_exact_level_min_xp - The Loot will grant the player the amount of xp required to reach the min xp of the target level from zero xp. Example 1: fulfill quantity 1 Player will be level 3 with 170 total xp. Example 2: fulfill quantity 2 Player will be level 4 with 200 total xp. Example 3: fulfill quantity 3 Player will be level 4 with 250 total xp.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Quantity will be treated as XP and will not be transformed.")`|
|`UMETA`|`=(ToolTip="Quantity will be treated as level to fulfill and will be transformed to the amount of XP required to reach the min xp of the fulfilled levels.")`|
|`UMETA`|`=(ToolTip="Quantity will be treated as levels to fulfill and will be transformed to the amount of XP required to reach the min xp of the fulfilled levels from the min xp of the current level.")`|
|`UMETA`|`=(ToolTip="Quantity will be treated as levels to fulfill and will be transformed to the amount of XP required to reach the min xp of the fulfilled levels from zero xp.")`|



## Functions



### `EnumToString` <a id="XpQuantityTransform_8h_1a53273a340739fcd6e4cf7eb60689a380"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_XpQuantityTransform & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_XpQuantityTransform &|EnumValue|

#### Description






### `EnumFromString` <a id="XpQuantityTransform_8h_1ad4cb1fdf263cc979cee867a3ddbcf6a6"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_XpQuantityTransform & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_XpQuantityTransform &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="XpQuantityTransform_8h_1a142a554baf7a45d104fb5310cc5241d2"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_XpQuantityTransform & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_XpQuantityTransform &|Value|

#### Description






### `WriteJsonValue` <a id="XpQuantityTransform_8h_1ab2acb6679b3efba3ae73f3c621093b15"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_XpQuantityTransform & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_XpQuantityTransform &|Value|

#### Description






### `TryGetJsonValue` <a id="XpQuantityTransform_8h_1a030dda37d81b6f25d989245b0f839cfc"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_XpQuantityTransform & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_XpQuantityTransform &|Value|

#### Description







