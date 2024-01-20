---
title: Input.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_Input](/unreal-plugins/all/input_8h/#Input_8h_1a22b7388032ad54d5719c6380a5f02f21)|The different input types that players can use.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/input_8h/#Input_8h_1a805bc16dcd4d39d81b08c2f57590a0e5)(const ERHAPI_Input & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/input_8h/#Input_8h_1ab26283319406dc90a52bdbd27b09a566)(const FString & EnumAsString, ERHAPI_Input & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/input_8h/#Input_8h_1a16dce3ac1b04a6b97674d2e39ae589f7)(const ERHAPI_Input & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/input_8h/#Input_8h_1a5f0547be9482fc16570dc809fd264771)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_Input & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/input_8h/#Input_8h_1aad8b9ff6dbcd3211c3cff354c9352a19)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_Input & Value)||
## Enums




### `ERHAPI_Input` <a id="Input_8h_1a22b7388032ad54d5719c6380a5f02f21"></a>
The different input types that players can use.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Input for players using a keyboard and mouse")`|
|`UMETA`|`=(ToolTip="Input for players using a gamepad/controller")`|
|`UMETA`|`=(ToolTip="Input for players using a touch screen")`|



## Functions



### `EnumToString` <a id="Input_8h_1a805bc16dcd4d39d81b08c2f57590a0e5"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_Input & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_Input &|EnumValue|

#### Description






### `EnumFromString` <a id="Input_8h_1ab26283319406dc90a52bdbd27b09a566"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_Input & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_Input &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="Input_8h_1a16dce3ac1b04a6b97674d2e39ae589f7"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_Input & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_Input &|Value|

#### Description






### `WriteJsonValue` <a id="Input_8h_1a5f0547be9482fc16570dc809fd264771"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_Input & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_Input &|Value|

#### Description






### `TryGetJsonValue` <a id="Input_8h_1aad8b9ff6dbcd3211c3cff354c9352a19"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_Input & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_Input &|Value|

#### Description







