---
title: FRHAPI_PlayerIterateResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Response from the player iteration API.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) >|[Players_Optional](/unreal-plugins/all/structfrhapi__playeriterateresponse/#structFRHAPI__PlayerIterateResponse_1a895663738640e3f67d3d20211adcd661)|List of players. An empty list means iteration is complete.|
|bool|[Players_IsSet](/unreal-plugins/all/structfrhapi__playeriterateresponse/#structFRHAPI__PlayerIterateResponse_1a51461700ce92c4a32e1903aad24aaa8c)|true if Players_Optional has been set to a value|
|FString|[Cursor_Optional](/unreal-plugins/all/structfrhapi__playeriterateresponse/#structFRHAPI__PlayerIterateResponse_1a9ea6d8b48377942433369e5349dfd988)|Cursor to continue iteration.|
|bool|[Cursor_IsSet](/unreal-plugins/all/structfrhapi__playeriterateresponse/#structFRHAPI__PlayerIterateResponse_1af92e8c04e13e466c9bda9f079ec7ab26)|true if Cursor_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__playeriterateresponse/#structFRHAPI__PlayerIterateResponse_1ae047a2b72135182d9cb1bde67abe65d9)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__playeriterateresponse/#structFRHAPI__PlayerIterateResponse_1a4d6c005845d4166283e53bcd91b4e753)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > &|[GetPlayers](/unreal-plugins/all/structfrhapi__playeriterateresponse/#structFRHAPI__PlayerIterateResponse_1a03b63b47b0d2d4ef4eee29c0155c50d3)()|Gets the value of Players_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > &|[GetPlayers](/unreal-plugins/all/structfrhapi__playeriterateresponse/#structFRHAPI__PlayerIterateResponse_1a0480fc62567938f1b36c8fba2062eb39)()|Gets the value of Players_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > &|[GetPlayers](/unreal-plugins/all/structfrhapi__playeriterateresponse/#structFRHAPI__PlayerIterateResponse_1a364feb0c00abf168521a1cbb73811a21)(const TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > & DefaultValue)|Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPlayers](/unreal-plugins/all/structfrhapi__playeriterateresponse/#structFRHAPI__PlayerIterateResponse_1aaaa281609d9815877805502168dda12f)(TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > & OutValue)|Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.|
|TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > *|[GetPlayersOrNull](/unreal-plugins/all/structfrhapi__playeriterateresponse/#structFRHAPI__PlayerIterateResponse_1aa95817f306b4e999c95bb438ef90f53a)()|Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > *|[GetPlayersOrNull](/unreal-plugins/all/structfrhapi__playeriterateresponse/#structFRHAPI__PlayerIterateResponse_1a6d6f10e748336b03cdb4d6523fa91dca)()|Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPlayers](/unreal-plugins/all/structfrhapi__playeriterateresponse/#structFRHAPI__PlayerIterateResponse_1aa8b8ca44d625e4075860edccd01daf96)(TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > NewValue)|Sets the value of Players_Optional and also sets Players_IsSet to true.|
|void|[ClearPlayers](/unreal-plugins/all/structfrhapi__playeriterateresponse/#structFRHAPI__PlayerIterateResponse_1ac6e2054bef4c10cdf439c1341bdbf70c)()|Clears the value of Players_Optional and sets Players_IsSet to false.|
|FString &|[GetCursor](/unreal-plugins/all/structfrhapi__playeriterateresponse/#structFRHAPI__PlayerIterateResponse_1afe69ab2e2c9a31415d330a546722f615)()|Gets the value of Cursor_Optional, regardless of it having been set.|
|const FString &|[GetCursor](/unreal-plugins/all/structfrhapi__playeriterateresponse/#structFRHAPI__PlayerIterateResponse_1a7cb96cbe9d2e15dfecd816c8b3e7484a)()|Gets the value of Cursor_Optional, regardless of it having been set.|
|const FString &|[GetCursor](/unreal-plugins/all/structfrhapi__playeriterateresponse/#structFRHAPI__PlayerIterateResponse_1a7a450d8cebaa09f4f86d26916bcccbd9)(const FString & DefaultValue)|Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCursor](/unreal-plugins/all/structfrhapi__playeriterateresponse/#structFRHAPI__PlayerIterateResponse_1a311acdf4347a3bb279f0f4997fa9009f)(FString & OutValue)|Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetCursorOrNull](/unreal-plugins/all/structfrhapi__playeriterateresponse/#structFRHAPI__PlayerIterateResponse_1aa58baaafc66ee37672289aa33721c6dd)()|Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetCursorOrNull](/unreal-plugins/all/structfrhapi__playeriterateresponse/#structFRHAPI__PlayerIterateResponse_1a690b16b3406255c26fba923f0a6f4d0c)()|Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCursor](/unreal-plugins/all/structfrhapi__playeriterateresponse/#structFRHAPI__PlayerIterateResponse_1aea4bb2173ff7a8ba5c04eba986e6222b)(FString NewValue)|Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.|
|void|[ClearCursor](/unreal-plugins/all/structfrhapi__playeriterateresponse/#structFRHAPI__PlayerIterateResponse_1a920afebebc18c99c7ad22e72330ec806)()|Clears the value of Cursor_Optional and sets Cursor_IsSet to false.|
|bool|[IsCursorDefaultValue](/unreal-plugins/all/structfrhapi__playeriterateresponse/#structFRHAPI__PlayerIterateResponse_1a676a735136b1e24c677f033f0b39a2ea)()|Returns true if Cursor_Optional is set and matches the default value.|
|void|[SetCursorToDefault](/unreal-plugins/all/structfrhapi__playeriterateresponse/#structFRHAPI__PlayerIterateResponse_1aaac64e56a63411ad63385a486d4bf1fa)()|Sets the value of Cursor_Optional to its default and also sets Cursor_IsSet to true.|
## Public Attributes



### `Players_Optional` <a id="structFRHAPI__PlayerIterateResponse_1a895663738640e3f67d3d20211adcd661"></a>

`TArray<FRHAPI_PlayerResponse> FRHAPI_PlayerIterateResponse::Players_Optional`

List of players. An empty list means iteration is complete.




### `Players_IsSet` <a id="structFRHAPI__PlayerIterateResponse_1a51461700ce92c4a32e1903aad24aaa8c"></a>

`bool FRHAPI_PlayerIterateResponse::Players_IsSet`

true if Players_Optional has been set to a value




### `Cursor_Optional` <a id="structFRHAPI__PlayerIterateResponse_1a9ea6d8b48377942433369e5349dfd988"></a>

`FString FRHAPI_PlayerIterateResponse::Cursor_Optional`

Cursor to continue iteration.




### `Cursor_IsSet` <a id="structFRHAPI__PlayerIterateResponse_1af92e8c04e13e466c9bda9f079ec7ab26"></a>

`bool FRHAPI_PlayerIterateResponse::Cursor_IsSet`

true if Cursor_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PlayerIterateResponse_1ae047a2b72135182d9cb1bde67abe65d9"></a>

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



### `WriteJson` <a id="structFRHAPI__PlayerIterateResponse_1a4d6c005845d4166283e53bcd91b4e753"></a>

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



### `GetPlayers` <a id="structFRHAPI__PlayerIterateResponse_1a03b63b47b0d2d4ef4eee29c0155c50d3"></a>

TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > & GetPlayers()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Players_Optional, regardless of it having been set.




### `GetPlayers` <a id="structFRHAPI__PlayerIterateResponse_1a0480fc62567938f1b36c8fba2062eb39"></a>

const TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > & GetPlayers()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Players_Optional, regardless of it having been set.




### `GetPlayers` <a id="structFRHAPI__PlayerIterateResponse_1a364feb0c00abf168521a1cbb73811a21"></a>

const TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > & GetPlayers(const TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > &|DefaultValue|

#### Description

Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPlayers` <a id="structFRHAPI__PlayerIterateResponse_1aaaa281609d9815877805502168dda12f"></a>

bool GetPlayers(TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > &|OutValue|

#### Description

Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.




### `GetPlayersOrNull` <a id="structFRHAPI__PlayerIterateResponse_1aa95817f306b4e999c95bb438ef90f53a"></a>

TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > * GetPlayersOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.




### `GetPlayersOrNull` <a id="structFRHAPI__PlayerIterateResponse_1a6d6f10e748336b03cdb4d6523fa91dca"></a>

const TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > * GetPlayersOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.




### `SetPlayers` <a id="structFRHAPI__PlayerIterateResponse_1aa8b8ca44d625e4075860edccd01daf96"></a>

void SetPlayers(TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PlayerResponse](/unreal-plugins/all/structfrhapi__playerresponse/#structFRHAPI__PlayerResponse) >|NewValue|

#### Description

Sets the value of Players_Optional and also sets Players_IsSet to true.




### `ClearPlayers` <a id="structFRHAPI__PlayerIterateResponse_1ac6e2054bef4c10cdf439c1341bdbf70c"></a>

void ClearPlayers()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Players_Optional and sets Players_IsSet to false.




### `GetCursor` <a id="structFRHAPI__PlayerIterateResponse_1afe69ab2e2c9a31415d330a546722f615"></a>

FString & GetCursor()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Cursor_Optional, regardless of it having been set.




### `GetCursor` <a id="structFRHAPI__PlayerIterateResponse_1a7cb96cbe9d2e15dfecd816c8b3e7484a"></a>

const FString & GetCursor()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Cursor_Optional, regardless of it having been set.




### `GetCursor` <a id="structFRHAPI__PlayerIterateResponse_1a7a450d8cebaa09f4f86d26916bcccbd9"></a>

const FString & GetCursor(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCursor` <a id="structFRHAPI__PlayerIterateResponse_1a311acdf4347a3bb279f0f4997fa9009f"></a>

bool GetCursor(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false.




### `GetCursorOrNull` <a id="structFRHAPI__PlayerIterateResponse_1aa58baaafc66ee37672289aa33721c6dd"></a>

FString * GetCursorOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.




### `GetCursorOrNull` <a id="structFRHAPI__PlayerIterateResponse_1a690b16b3406255c26fba923f0a6f4d0c"></a>

const FString * GetCursorOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr.




### `SetCursor` <a id="structFRHAPI__PlayerIterateResponse_1aea4bb2173ff7a8ba5c04eba986e6222b"></a>

void SetCursor(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Cursor_Optional and also sets Cursor_IsSet to true.




### `ClearCursor` <a id="structFRHAPI__PlayerIterateResponse_1a920afebebc18c99c7ad22e72330ec806"></a>

void ClearCursor()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Cursor_Optional and sets Cursor_IsSet to false.




### `IsCursorDefaultValue` <a id="structFRHAPI__PlayerIterateResponse_1a676a735136b1e24c677f033f0b39a2ea"></a>

bool IsCursorDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Cursor_Optional is set and matches the default value.




### `SetCursorToDefault` <a id="structFRHAPI__PlayerIterateResponse_1aaac64e56a63411ad63385a486d4bf1fa"></a>

void SetCursorToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Cursor_Optional to its default and also sets Cursor_IsSet to true.





