---
title: QuantityType.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_QuantityType](/unreal-plugins/all/quantitytype_8h/#QuantityType_8h_1a0697b004e3e68dae4361fb1142899136)|Determines how the quantity is to be modified. Relative looks at the context in which is fulfilled; e.g. If Loot A has a quantity of 2 and 5 is being fulfill, the resulting quantity modification will be 10. Absolute ignores the context in which it is fulfilled; e.g. If Loot B has a quantity of 3 and 5 is being fulfill 5, the resulting quantity modification will be 3.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/quantitytype_8h/#QuantityType_8h_1addc3e81ca3fd95cb45069c1159663da3)(const ERHAPI_QuantityType & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/quantitytype_8h/#QuantityType_8h_1a7fb8c6f67a58443720adfc89aac25f23)(const FString & EnumAsString, ERHAPI_QuantityType & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/quantitytype_8h/#QuantityType_8h_1a54df06d743e3fb575d8c0605357d847e)(const ERHAPI_QuantityType & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/quantitytype_8h/#QuantityType_8h_1a426c9fca90110915e03d3d10e63198b0)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_QuantityType & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/quantitytype_8h/#QuantityType_8h_1a4fa7c72cf5074dc6eea50dd00d139c97)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_QuantityType & Value)||
## Enums




### `ERHAPI_QuantityType` <a id="QuantityType_8h_1a0697b004e3e68dae4361fb1142899136"></a>
Determines how the quantity is to be modified. Relative looks at the context in which is fulfilled; e.g. If Loot A has a quantity of 2 and 5 is being fulfill, the resulting quantity modification will be 10. Absolute ignores the context in which it is fulfilled; e.g. If Loot B has a quantity of 3 and 5 is being fulfill 5, the resulting quantity modification will be 3.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="The quantity will be modified relative to the context in which it is fulfilled.")`|
|`UMETA`|`=(ToolTip="The quantity will be modified regardless of the context in which it is fulfilled.")`|



## Functions



### `EnumToString` <a id="QuantityType_8h_1addc3e81ca3fd95cb45069c1159663da3"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_QuantityType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_QuantityType &|EnumValue|

#### Description






### `EnumFromString` <a id="QuantityType_8h_1a7fb8c6f67a58443720adfc89aac25f23"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_QuantityType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_QuantityType &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="QuantityType_8h_1a54df06d743e3fb575d8c0605357d847e"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_QuantityType & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_QuantityType &|Value|

#### Description






### `WriteJsonValue` <a id="QuantityType_8h_1a426c9fca90110915e03d3d10e63198b0"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_QuantityType & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_QuantityType &|Value|

#### Description






### `TryGetJsonValue` <a id="QuantityType_8h_1a4fa7c72cf5074dc6eea50dd00d139c97"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_QuantityType & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_QuantityType &|Value|

#### Description







