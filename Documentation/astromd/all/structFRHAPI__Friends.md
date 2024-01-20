---
title: FRHAPI_Friends Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

List of player_uuids to operate on.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< FGuid >|[Friends](/unreal-plugins/all/structfrhapi__friends/#structFRHAPI__Friends_1ac8e4a2e4be8a82c1c69c0e756eb0b874)||
|bool|[FromJson](/unreal-plugins/all/structfrhapi__friends/#structFRHAPI__Friends_1a2152501b5c331a83faa6ec4568bb4e6e)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__friends/#structFRHAPI__Friends_1af95449c0a783a3f9f4df4427ce0e2795)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< FGuid > &|[GetFriends](/unreal-plugins/all/structfrhapi__friends/#structFRHAPI__Friends_1a90e54fe391000709ed7ca117cb038450)()|Gets the value of Friends.|
|const TArray< FGuid > &|[GetFriends](/unreal-plugins/all/structfrhapi__friends/#structFRHAPI__Friends_1ac3c7f96b76e832180c243bc2ea2827d8)()|Gets the value of Friends.|
|void|[SetFriends](/unreal-plugins/all/structfrhapi__friends/#structFRHAPI__Friends_1a861988577c02b9cc1249c56736dab122)(TArray< FGuid > NewValue)|Sets the value of Friends.|
## Public Attributes



### `Friends` <a id="structFRHAPI__Friends_1ac8e4a2e4be8a82c1c69c0e756eb0b874"></a>

`TArray<FGuid> FRHAPI_Friends::Friends`







## Public Functions



### `FromJson` <a id="structFRHAPI__Friends_1a2152501b5c331a83faa6ec4568bb4e6e"></a>

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



### `WriteJson` <a id="structFRHAPI__Friends_1af95449c0a783a3f9f4df4427ce0e2795"></a>

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



### `GetFriends` <a id="structFRHAPI__Friends_1a90e54fe391000709ed7ca117cb038450"></a>

TArray< FGuid > & GetFriends()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Friends.




### `GetFriends` <a id="structFRHAPI__Friends_1ac3c7f96b76e832180c243bc2ea2827d8"></a>

const TArray< FGuid > & GetFriends()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Friends.




### `SetFriends` <a id="structFRHAPI__Friends_1a861988577c02b9cc1249c56736dab122"></a>

void SetFriends(TArray< FGuid > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< FGuid >|NewValue|

#### Description

Sets the value of Friends.





