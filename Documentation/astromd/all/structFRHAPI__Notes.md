---
title: FRHAPI_Notes Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Notes to set for the Player&#39;s friend. If you don&#39;t want to modify notes, no not include in body when adding a friend.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[Notes_Optional](/unreal-plugins/all/structfrhapi__notes/#structFRHAPI__Notes_1af5e920428c55e9adcab7d93324814a92)||
|bool|[Notes_IsSet](/unreal-plugins/all/structfrhapi__notes/#structFRHAPI__Notes_1a5f51571b830edca98b4fa43c993bbad1)|true if Notes_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__notes/#structFRHAPI__Notes_1a931fbbea1e00ccb16bd4e4689b8d0909)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__notes/#structFRHAPI__Notes_1a629bece73958daf11d8cebb8d65fa7fd)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetNotes](/unreal-plugins/all/structfrhapi__notes/#structFRHAPI__Notes_1a46d12e52642cb84d44cb993ca1e342bd)()|Gets the value of Notes_Optional, regardless of it having been set.|
|const FString &|[GetNotes](/unreal-plugins/all/structfrhapi__notes/#structFRHAPI__Notes_1a03d2bce2d019cd9d78074617683abf97)()|Gets the value of Notes_Optional, regardless of it having been set.|
|const FString &|[GetNotes](/unreal-plugins/all/structfrhapi__notes/#structFRHAPI__Notes_1ac09158d85a46f453a940ce679c7d8d7d)(const FString & DefaultValue)|Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetNotes](/unreal-plugins/all/structfrhapi__notes/#structFRHAPI__Notes_1a13701f221d08e09905879b05bebf8143)(FString & OutValue)|Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetNotesOrNull](/unreal-plugins/all/structfrhapi__notes/#structFRHAPI__Notes_1a599ca202519c01a24e5497cf1ef9d060)()|Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetNotesOrNull](/unreal-plugins/all/structfrhapi__notes/#structFRHAPI__Notes_1a07d7b8992e4f5231ce1c7cd7d2a3173e)()|Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetNotes](/unreal-plugins/all/structfrhapi__notes/#structFRHAPI__Notes_1a52e0bc03e9c1ff9f9ed51d99272d78ae)(FString NewValue)|Sets the value of Notes_Optional and also sets Notes_IsSet to true.|
|void|[ClearNotes](/unreal-plugins/all/structfrhapi__notes/#structFRHAPI__Notes_1ad4213f307363f5dbc56d292b16ef1b65)()|Clears the value of Notes_Optional and sets Notes_IsSet to false.|
## Public Attributes



### `Notes_Optional` <a id="structFRHAPI__Notes_1af5e920428c55e9adcab7d93324814a92"></a>

`FString FRHAPI_Notes::Notes_Optional`






### `Notes_IsSet` <a id="structFRHAPI__Notes_1a5f51571b830edca98b4fa43c993bbad1"></a>

`bool FRHAPI_Notes::Notes_IsSet`

true if Notes_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__Notes_1a931fbbea1e00ccb16bd4e4689b8d0909"></a>

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



### `WriteJson` <a id="structFRHAPI__Notes_1a629bece73958daf11d8cebb8d65fa7fd"></a>

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



### `GetNotes` <a id="structFRHAPI__Notes_1a46d12e52642cb84d44cb993ca1e342bd"></a>

FString & GetNotes()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Notes_Optional, regardless of it having been set.




### `GetNotes` <a id="structFRHAPI__Notes_1a03d2bce2d019cd9d78074617683abf97"></a>

const FString & GetNotes()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Notes_Optional, regardless of it having been set.




### `GetNotes` <a id="structFRHAPI__Notes_1ac09158d85a46f453a940ce679c7d8d7d"></a>

const FString & GetNotes(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetNotes` <a id="structFRHAPI__Notes_1a13701f221d08e09905879b05bebf8143"></a>

bool GetNotes(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.




### `GetNotesOrNull` <a id="structFRHAPI__Notes_1a599ca202519c01a24e5497cf1ef9d060"></a>

FString * GetNotesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.




### `GetNotesOrNull` <a id="structFRHAPI__Notes_1a07d7b8992e4f5231ce1c7cd7d2a3173e"></a>

const FString * GetNotesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.




### `SetNotes` <a id="structFRHAPI__Notes_1a52e0bc03e9c1ff9f9ed51d99272d78ae"></a>

void SetNotes(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Notes_Optional and also sets Notes_IsSet to true.




### `ClearNotes` <a id="structFRHAPI__Notes_1ad4213f307363f5dbc56d292b16ef1b65"></a>

void ClearNotes()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Notes_Optional and sets Notes_IsSet to false.





