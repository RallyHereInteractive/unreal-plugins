---
title: SortOrder.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_SortOrder](/unreal-plugins/all/sortorder_8h/#SortOrder_8h_1ae78b5dcc50fb9f8998282d49c402edd2)|Determine the direction of the sort.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/sortorder_8h/#SortOrder_8h_1accb77ebb557dadf5a1ee554063673653)(const ERHAPI_SortOrder & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/sortorder_8h/#SortOrder_8h_1a3d969fa8a4273311bdaff27bc39b3e60)(const FString & EnumAsString, ERHAPI_SortOrder & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/sortorder_8h/#SortOrder_8h_1afaa88d349b3497f070c7714b19e67f9d)(const ERHAPI_SortOrder & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/sortorder_8h/#SortOrder_8h_1aa152c2ec699992f5cfdf48d99faff2f6)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_SortOrder & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/sortorder_8h/#SortOrder_8h_1a53b98b9efe7d89de2ebe83f8f71b73b6)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_SortOrder & Value)||
## Enums




### `ERHAPI_SortOrder` <a id="SortOrder_8h_1ae78b5dcc50fb9f8998282d49c402edd2"></a>
Determine the direction of the sort.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="Sort in ascending order")`|
|`UMETA`|`=(ToolTip="Sort in descending order")`|



## Functions



### `EnumToString` <a id="SortOrder_8h_1accb77ebb557dadf5a1ee554063673653"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_SortOrder & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_SortOrder &|EnumValue|

#### Description






### `EnumFromString` <a id="SortOrder_8h_1a3d969fa8a4273311bdaff27bc39b3e60"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_SortOrder & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_SortOrder &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="SortOrder_8h_1afaa88d349b3497f070c7714b19e67f9d"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_SortOrder & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_SortOrder &|Value|

#### Description






### `WriteJsonValue` <a id="SortOrder_8h_1aa152c2ec699992f5cfdf48d99faff2f6"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_SortOrder & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_SortOrder &|Value|

#### Description






### `TryGetJsonValue` <a id="SortOrder_8h_1a53b98b9efe7d89de2ebe83f8f71b73b6"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_SortOrder & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_SortOrder &|Value|

#### Description







