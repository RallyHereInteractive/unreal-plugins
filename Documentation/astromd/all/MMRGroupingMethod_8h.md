---
title: MMRGroupingMethod.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_MMRGroupingMethod](/unreal-plugins/all/mmrgroupingmethod_8h/#MMRGroupingMethod_8h_1a1b91a66830c61ca63ab388ff721194d7)|What method should be used to determine a linking&#39;s group MMR based on the individuals.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/mmrgroupingmethod_8h/#MMRGroupingMethod_8h_1a7809e4a7bf816da23e0dbb9a396cc3d5)(const ERHAPI_MMRGroupingMethod & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/mmrgroupingmethod_8h/#MMRGroupingMethod_8h_1a02cf8fe6dc85487d5e56e62cc56861ab)(const FString & EnumAsString, ERHAPI_MMRGroupingMethod & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/mmrgroupingmethod_8h/#MMRGroupingMethod_8h_1a04bb01e7d3515ed60968d834dfbecb81)(const ERHAPI_MMRGroupingMethod & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/mmrgroupingmethod_8h/#MMRGroupingMethod_8h_1afceaef4a65b6440bfe9458c6f9a08d80)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_MMRGroupingMethod & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/mmrgroupingmethod_8h/#MMRGroupingMethod_8h_1a73a341de9f0a9d57c83957255a38f0f4)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_MMRGroupingMethod & Value)||
## Enums




### `ERHAPI_MMRGroupingMethod` <a id="MMRGroupingMethod_8h_1a1b91a66830c61ca63ab388ff721194d7"></a>
What method should be used to determine a linking&#39;s group MMR based on the individuals.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Use the lowest MMR of any player in the linking")`|
|`UMETA`|`=(ToolTip="Use the highest MMR of any player in the linking")`|
|`UMETA`|`=(ToolTip="Use the arithmetic mean of the players&#39; skill multiplied by their variance. This is the sum of each player&#39;s skill times variance divided by the number of players")`|
|`UMETA`|`=(ToolTip="Use the arithmetic mean of the players&#39; skill. This is the sum of each player&#39;s skill divided by the number of players")`|



## Functions



### `EnumToString` <a id="MMRGroupingMethod_8h_1a7809e4a7bf816da23e0dbb9a396cc3d5"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_MMRGroupingMethod & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_MMRGroupingMethod &|EnumValue|

#### Description






### `EnumFromString` <a id="MMRGroupingMethod_8h_1a02cf8fe6dc85487d5e56e62cc56861ab"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_MMRGroupingMethod & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_MMRGroupingMethod &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="MMRGroupingMethod_8h_1a04bb01e7d3515ed60968d834dfbecb81"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_MMRGroupingMethod & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_MMRGroupingMethod &|Value|

#### Description






### `WriteJsonValue` <a id="MMRGroupingMethod_8h_1afceaef4a65b6440bfe9458c6f9a08d80"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_MMRGroupingMethod & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_MMRGroupingMethod &|Value|

#### Description






### `TryGetJsonValue` <a id="MMRGroupingMethod_8h_1a73a341de9f0a9d57c83957255a38f0f4"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_MMRGroupingMethod & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_MMRGroupingMethod &|Value|

#### Description







