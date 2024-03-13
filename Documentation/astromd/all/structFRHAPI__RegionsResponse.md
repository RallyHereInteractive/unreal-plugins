---
title: FRHAPI_RegionsResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A list of regions and a cursor to continue iterating.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_Region](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region) >|[Regions](/unreal-plugins/all/structfrhapi__regionsresponse/#structFRHAPI__RegionsResponse_1a39c6be57dffa81805ce0548a912e5159)|List of all regions.|
|int32|[Cursor](/unreal-plugins/all/structfrhapi__regionsresponse/#structFRHAPI__RegionsResponse_1a3fdd3461ce10a95f444ce0f92c12df14)|Cursor to continue iterating through enabled regions. Non 0 cursor in the response means there are more regions. Pass the returned cursor up on a subsequent call to continue. A 0 cursor in the response means you have reached the end.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__regionsresponse/#structFRHAPI__RegionsResponse_1a005b1d05348dd42cce311c5a5e96266b)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__regionsresponse/#structFRHAPI__RegionsResponse_1ae5e1a61325c1ef40e956be575dd73d21)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_Region](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region) > &|[GetRegions](/unreal-plugins/all/structfrhapi__regionsresponse/#structFRHAPI__RegionsResponse_1a73cb043968f010e0fb707c641d2d2ece)()|Gets the value of Regions.|
|const TArray< [FRHAPI_Region](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region) > &|[GetRegions](/unreal-plugins/all/structfrhapi__regionsresponse/#structFRHAPI__RegionsResponse_1a14b4e2795b3ef2224f4ea6731f3c895d)()|Gets the value of Regions.|
|void|[SetRegions](/unreal-plugins/all/structfrhapi__regionsresponse/#structFRHAPI__RegionsResponse_1ad105d1a2e9cb43976972a8e37cb7a65b)(TArray< [FRHAPI_Region](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region) > NewValue)|Sets the value of Regions.|
|int32 &|[GetCursor](/unreal-plugins/all/structfrhapi__regionsresponse/#structFRHAPI__RegionsResponse_1a4a4d7ca43dca64558748338627013d1b)()|Gets the value of Cursor.|
|const int32 &|[GetCursor](/unreal-plugins/all/structfrhapi__regionsresponse/#structFRHAPI__RegionsResponse_1afd77ebb324104e67f59ccc6111c8baa6)()|Gets the value of Cursor.|
|void|[SetCursor](/unreal-plugins/all/structfrhapi__regionsresponse/#structFRHAPI__RegionsResponse_1abb45eadfb06da13b2ffb40f6fd93d755)(int32 NewValue)|Sets the value of Cursor.|
|bool|[IsCursorDefaultValue](/unreal-plugins/all/structfrhapi__regionsresponse/#structFRHAPI__RegionsResponse_1a1adf0f792485a9ab5e95f81fb7a104ad)()|Returns true if Cursor matches the default value.|
|void|[SetCursorToDefault](/unreal-plugins/all/structfrhapi__regionsresponse/#structFRHAPI__RegionsResponse_1a8aee19a22a6a8ec675ac7582cde78b49)()|Sets the value of Cursor to its default|
## Public Attributes



### `Regions` <a id="structFRHAPI__RegionsResponse_1a39c6be57dffa81805ce0548a912e5159"></a>

`TArray<FRHAPI_Region> FRHAPI_RegionsResponse::Regions`

List of all regions.




### `Cursor` <a id="structFRHAPI__RegionsResponse_1a3fdd3461ce10a95f444ce0f92c12df14"></a>

`int32 FRHAPI_RegionsResponse::Cursor`

Cursor to continue iterating through enabled regions. Non 0 cursor in the response means there are more regions. Pass the returned cursor up on a subsequent call to continue. A 0 cursor in the response means you have reached the end.





## Public Functions



### `FromJson` <a id="structFRHAPI__RegionsResponse_1a005b1d05348dd42cce311c5a5e96266b"></a>

bool FromJson(const TSharedPtr< FJsonValue > & JsonValue)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|

#### Description

Fills this object with data from the passed in JSON.


#### Parameters

JsonValue
: Data from the API call.

#### Returns
true if parsing of the JSON data was successful. 



### `WriteJson` <a id="structFRHAPI__RegionsResponse_1ae5e1a61325c1ef40e956be575dd73d21"></a>

void WriteJson(TSharedRef< TJsonWriter<>> & Writer)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|

#### Description

Writes the data from this object into the specified JSON Writer stream.


#### Parameters

Writer
: JSON Writer stream to push . 



### `GetRegions` <a id="structFRHAPI__RegionsResponse_1a73cb043968f010e0fb707c641d2d2ece"></a>

TArray< [FRHAPI_Region](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region) > & GetRegions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Regions.




### `GetRegions` <a id="structFRHAPI__RegionsResponse_1a14b4e2795b3ef2224f4ea6731f3c895d"></a>

const TArray< [FRHAPI_Region](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region) > & GetRegions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Regions.




### `SetRegions` <a id="structFRHAPI__RegionsResponse_1ad105d1a2e9cb43976972a8e37cb7a65b"></a>

void SetRegions(TArray< [FRHAPI_Region](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_Region](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region) >|NewValue|

#### Description

Sets the value of Regions.




### `GetCursor` <a id="structFRHAPI__RegionsResponse_1a4a4d7ca43dca64558748338627013d1b"></a>

int32 & GetCursor()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Cursor.




### `GetCursor` <a id="structFRHAPI__RegionsResponse_1afd77ebb324104e67f59ccc6111c8baa6"></a>

const int32 & GetCursor()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Cursor.




### `SetCursor` <a id="structFRHAPI__RegionsResponse_1abb45eadfb06da13b2ffb40f6fd93d755"></a>

void SetCursor(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of Cursor.




### `IsCursorDefaultValue` <a id="structFRHAPI__RegionsResponse_1a1adf0f792485a9ab5e95f81fb7a104ad"></a>

bool IsCursorDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Cursor matches the default value.




### `SetCursorToDefault` <a id="structFRHAPI__RegionsResponse_1a8aee19a22a6a8ec675ac7582cde78b49"></a>

void SetCursorToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Cursor to its default





