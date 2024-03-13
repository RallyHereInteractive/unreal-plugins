---
title: FRHAPI_BrowserResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A response with a list of browsers, and a cursor to continue iterating through them.

## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[Cursor](/unreal-plugins/all/structfrhapi__browserresponse/#structFRHAPI__BrowserResponse_1a55cb074f32c3933d116ba9d8314aa968)|Cursor to continue iterating through browser sessions. 0 means we have returned the last entry.|
|TArray< [FRHAPI_BrowserSessionInfo](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo) >|[BrowserSessions](/unreal-plugins/all/structfrhapi__browserresponse/#structFRHAPI__BrowserResponse_1aafc07faff636c79639a50b2ce433df50)|List of sessions in the browser.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__browserresponse/#structFRHAPI__BrowserResponse_1a5a7d148abc6f5aca654cb7f919593b9d)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__browserresponse/#structFRHAPI__BrowserResponse_1a1578a60cc2cd3e1582c740c12637d7de)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|int32 &|[GetCursor](/unreal-plugins/all/structfrhapi__browserresponse/#structFRHAPI__BrowserResponse_1a8ad3e83c0a8c660df736de1159e87f6e)()|Gets the value of Cursor.|
|const int32 &|[GetCursor](/unreal-plugins/all/structfrhapi__browserresponse/#structFRHAPI__BrowserResponse_1aa403e7276640e8bbf9f422b0732a7a09)()|Gets the value of Cursor.|
|void|[SetCursor](/unreal-plugins/all/structfrhapi__browserresponse/#structFRHAPI__BrowserResponse_1a0e2449b5afb839c6c91f4d3c2ed250b3)(int32 NewValue)|Sets the value of Cursor.|
|bool|[IsCursorDefaultValue](/unreal-plugins/all/structfrhapi__browserresponse/#structFRHAPI__BrowserResponse_1a078a72d3883533671f1c6ad61c482d92)()|Returns true if Cursor matches the default value.|
|void|[SetCursorToDefault](/unreal-plugins/all/structfrhapi__browserresponse/#structFRHAPI__BrowserResponse_1ac4037928781c1aff4d935a96804034a5)()|Sets the value of Cursor to its default|
|TArray< [FRHAPI_BrowserSessionInfo](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo) > &|[GetBrowserSessions](/unreal-plugins/all/structfrhapi__browserresponse/#structFRHAPI__BrowserResponse_1ac9e9401ab7e01aae2ec52c8b659397e3)()|Gets the value of BrowserSessions.|
|const TArray< [FRHAPI_BrowserSessionInfo](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo) > &|[GetBrowserSessions](/unreal-plugins/all/structfrhapi__browserresponse/#structFRHAPI__BrowserResponse_1a0773c81ab098d690680418a8073a9d01)()|Gets the value of BrowserSessions.|
|void|[SetBrowserSessions](/unreal-plugins/all/structfrhapi__browserresponse/#structFRHAPI__BrowserResponse_1a1569ecc727e6360c7c126f2ab6007a8a)(TArray< [FRHAPI_BrowserSessionInfo](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo) > NewValue)|Sets the value of BrowserSessions.|
## Public Attributes



### `Cursor` <a id="structFRHAPI__BrowserResponse_1a55cb074f32c3933d116ba9d8314aa968"></a>

`int32 FRHAPI_BrowserResponse::Cursor`

Cursor to continue iterating through browser sessions. 0 means we have returned the last entry.




### `BrowserSessions` <a id="structFRHAPI__BrowserResponse_1aafc07faff636c79639a50b2ce433df50"></a>

`TArray<FRHAPI_BrowserSessionInfo> FRHAPI_BrowserResponse::BrowserSessions`

List of sessions in the browser.





## Public Functions



### `FromJson` <a id="structFRHAPI__BrowserResponse_1a5a7d148abc6f5aca654cb7f919593b9d"></a>

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



### `WriteJson` <a id="structFRHAPI__BrowserResponse_1a1578a60cc2cd3e1582c740c12637d7de"></a>

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



### `GetCursor` <a id="structFRHAPI__BrowserResponse_1a8ad3e83c0a8c660df736de1159e87f6e"></a>

int32 & GetCursor()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Cursor.




### `GetCursor` <a id="structFRHAPI__BrowserResponse_1aa403e7276640e8bbf9f422b0732a7a09"></a>

const int32 & GetCursor()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Cursor.




### `SetCursor` <a id="structFRHAPI__BrowserResponse_1a0e2449b5afb839c6c91f4d3c2ed250b3"></a>

void SetCursor(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of Cursor.




### `IsCursorDefaultValue` <a id="structFRHAPI__BrowserResponse_1a078a72d3883533671f1c6ad61c482d92"></a>

bool IsCursorDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Cursor matches the default value.




### `SetCursorToDefault` <a id="structFRHAPI__BrowserResponse_1ac4037928781c1aff4d935a96804034a5"></a>

void SetCursorToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Cursor to its default




### `GetBrowserSessions` <a id="structFRHAPI__BrowserResponse_1ac9e9401ab7e01aae2ec52c8b659397e3"></a>

TArray< [FRHAPI_BrowserSessionInfo](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo) > & GetBrowserSessions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of BrowserSessions.




### `GetBrowserSessions` <a id="structFRHAPI__BrowserResponse_1a0773c81ab098d690680418a8073a9d01"></a>

const TArray< [FRHAPI_BrowserSessionInfo](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo) > & GetBrowserSessions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of BrowserSessions.




### `SetBrowserSessions` <a id="structFRHAPI__BrowserResponse_1a1569ecc727e6360c7c126f2ab6007a8a"></a>

void SetBrowserSessions(TArray< [FRHAPI_BrowserSessionInfo](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_BrowserSessionInfo](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo) >|NewValue|

#### Description

Sets the value of BrowserSessions.





