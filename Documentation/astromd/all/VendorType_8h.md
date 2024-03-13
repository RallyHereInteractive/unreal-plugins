---
title: VendorType.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[ERHAPI_VendorType](/unreal-plugins/all/vendortype_8h/#VendorType_8h_1abdca53098b402cbb319c0e40e0972ffc)|Determines how the Vendor fulfills the loot.|
|RALLYHEREAPI_API FString|[EnumToString](/unreal-plugins/all/vendortype_8h/#VendorType_8h_1a82a7fa9431d0ab79134f994d40c123e8)(const ERHAPI_VendorType & EnumValue)||
|RALLYHEREAPI_API bool|[EnumFromString](/unreal-plugins/all/vendortype_8h/#VendorType_8h_1a22b6f9857dbfb66dc98c22181fcd98e1)(const FString & EnumAsString, ERHAPI_VendorType & EnumValue)||
|RALLYHEREAPI_API FStringFormatArg|[ToStringFormatArg](/unreal-plugins/all/vendortype_8h/#VendorType_8h_1ae5f4ad0500b67dac3bb4ef8d6fd1e29f)(const ERHAPI_VendorType & Value)||
|RALLYHEREAPI_API void|[WriteJsonValue](/unreal-plugins/all/vendortype_8h/#VendorType_8h_1a3545a68a1338c47576fc0d67a88510d1)(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_VendorType & Value)||
|RALLYHEREAPI_API bool|[TryGetJsonValue](/unreal-plugins/all/vendortype_8h/#VendorType_8h_1a52c3cb1a2cc15fa123212d7fbcd81f96)(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_VendorType & Value)||
## Enums




### `ERHAPI_VendorType` <a id="VendorType_8h_1abdca53098b402cbb319c0e40e0972ffc"></a>
Determines how the Vendor fulfills the loot.



| Enumerator | Initializer|
|------------|------------|
|`UMETA`|`=(ToolTip="A Vendor that will always drop all of the Loot in the Loot table.")`|
|`UMETA`|`=(ToolTip="A Vendor that will only fulfill one of the Loot in the Loot table based on the drop weights of the Loot.")`|



## Functions



### `EnumToString` <a id="VendorType_8h_1a82a7fa9431d0ab79134f994d40c123e8"></a>

RALLYHEREAPI_API FString EnumToString(const ERHAPI_VendorType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_VendorType &|EnumValue|

#### Description






### `EnumFromString` <a id="VendorType_8h_1a22b6f9857dbfb66dc98c22181fcd98e1"></a>

RALLYHEREAPI_API bool EnumFromString(const FString & EnumAsString, ERHAPI_VendorType & EnumValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnumAsString|
|ERHAPI_VendorType &|EnumValue|

#### Description






### `ToStringFormatArg` <a id="VendorType_8h_1ae5f4ad0500b67dac3bb4ef8d6fd1e29f"></a>

RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_VendorType & Value)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_VendorType &|Value|

#### Description






### `WriteJsonValue` <a id="VendorType_8h_1a3545a68a1338c47576fc0d67a88510d1"></a>

RALLYHEREAPI_API void WriteJsonValue(TSharedRef< TJsonWriter<>> & Writer, const ERHAPI_VendorType & Value)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|
|const ERHAPI_VendorType &|Value|

#### Description






### `TryGetJsonValue` <a id="VendorType_8h_1a52c3cb1a2cc15fa123212d7fbcd81f96"></a>

RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr< FJsonValue > & JsonValue, ERHAPI_VendorType & Value)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|
|ERHAPI_VendorType &|Value|

#### Description







