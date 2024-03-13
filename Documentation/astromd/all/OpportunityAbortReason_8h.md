---
title: OpportunityAbortReason.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_OpportunityAbortReason](/unreal-plugins/all/opportunityabortreason_8h/#OpportunityAbortReason_8h_1a17c372d84521be05d218eacd07625b9c)|An enumeration.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/opportunityabortreason_8h/#OpportunityAbortReason_8h_1a6aff101e072a169d3f2d26ff3638dc75)(const ERHAPI_OpportunityAbortReason & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/opportunityabortreason_8h/#OpportunityAbortReason_8h_1a166cce01415c7b16a5ae455218bafb73)(const FString & EnumAsString, ERHAPI_OpportunityAbortReason & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/opportunityabortreason_8h/#OpportunityAbortReason_8h_1a2cad2850afbb34157f7f9a000400288e)(const ERHAPI_OpportunityAbortReason & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/opportunityabortreason_8h/#OpportunityAbortReason_8h_1ae1e81ca3f53b40cc852878f0ba6805c7)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_OpportunityAbortReason & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/opportunityabortreason_8h/#OpportunityAbortReason_8h_1ad606f2cf6788fcbd779a1308fe9de7ec)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_OpportunityAbortReason & Value)||
## Enums




### `ERHAPI_OpportunityAbortReason` <a id="OpportunityAbortReason_8h_1a17c372d84521be05d218eacd07625b9c"></a>
An enumeration.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Ad was closed by the user")`|
|`UMETA`|`=(ToolTip="Ad was closed from a misc cause")`|



## Functions



### `EnumToString` <a id="OpportunityAbortReason_8h_1a6aff101e072a169d3f2d26ff3638dc75"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_OpportunityAbortReason & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_OpportunityAbortReason &|EnumValue|

#### Description






### `EnumFromString` <a id="OpportunityAbortReason_8h_1a166cce01415c7b16a5ae455218bafb73"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_OpportunityAbortReason & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_OpportunityAbortReason &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="OpportunityAbortReason_8h_1a2cad2850afbb34157f7f9a000400288e"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_OpportunityAbortReason & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_OpportunityAbortReason &|Value|

#### Description






### `WriteJsonValue` <a id="OpportunityAbortReason_8h_1ae1e81ca3f53b40cc852878f0ba6805c7"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_OpportunityAbortReason & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_OpportunityAbortReason &|Value|

#### Description






### `TryGetJsonValue` <a id="OpportunityAbortReason_8h_1ad606f2cf6788fcbd779a1308fe9de7ec"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_OpportunityAbortReason & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_OpportunityAbortReason &|Value|

#### Description







