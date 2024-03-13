---
title: FRHAPI_MapSelectionList Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

DEPRECATED A list of maps that can be chosen from when an instance is launching.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[MapSelectionListId](/unreal-plugins/all/structfrhapi__mapselectionlist/#structFRHAPI__MapSelectionList_1ac074b5068cab4beed3045279f51fe7f7)|ID to uniquely identify this map selection list.|
|TArray< [FRHAPI_MapConfig](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig) >|[Maps](/unreal-plugins/all/structfrhapi__mapselectionlist/#structFRHAPI__MapSelectionList_1aef29afc160c1a25a8af5f2dbe9b5eb39)|List of maps that can be chosen in this selection list.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__mapselectionlist/#structFRHAPI__MapSelectionList_1ad8b23fdef9b12cd1220e76255432723f)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__mapselectionlist/#structFRHAPI__MapSelectionList_1ac5757039a5dfb4ba500eedc62dcc9f77)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetMapSelectionListId](/unreal-plugins/all/structfrhapi__mapselectionlist/#structFRHAPI__MapSelectionList_1a33760d8296656286de30e157c9b8d75d)()|Gets the value of MapSelectionListId.|
|const FString &|[GetMapSelectionListId](/unreal-plugins/all/structfrhapi__mapselectionlist/#structFRHAPI__MapSelectionList_1accb162b236aa274d987f72da2a72d186)()|Gets the value of MapSelectionListId.|
|void|[SetMapSelectionListId](/unreal-plugins/all/structfrhapi__mapselectionlist/#structFRHAPI__MapSelectionList_1aba278792dfddde9bbfc5a21e282aab73)(FString NewValue)|Sets the value of MapSelectionListId.|
|TArray< [FRHAPI_MapConfig](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig) > &|[GetMaps](/unreal-plugins/all/structfrhapi__mapselectionlist/#structFRHAPI__MapSelectionList_1a1176087597f5a20435aadfe380d7577b)()|Gets the value of Maps.|
|const TArray< [FRHAPI_MapConfig](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig) > &|[GetMaps](/unreal-plugins/all/structfrhapi__mapselectionlist/#structFRHAPI__MapSelectionList_1acd9b43b6edd69821810f3ca13aca2395)()|Gets the value of Maps.|
|void|[SetMaps](/unreal-plugins/all/structfrhapi__mapselectionlist/#structFRHAPI__MapSelectionList_1a4aba4193810a93b9e65bf99c15a6e4c8)(TArray< [FRHAPI_MapConfig](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig) > NewValue)|Sets the value of Maps.|
## Public Attributes



### `MapSelectionListId` <a id="structFRHAPI__MapSelectionList_1ac074b5068cab4beed3045279f51fe7f7"></a>

`FString FRHAPI_MapSelectionList::MapSelectionListId`

ID to uniquely identify this map selection list.




### `Maps` <a id="structFRHAPI__MapSelectionList_1aef29afc160c1a25a8af5f2dbe9b5eb39"></a>

`TArray<FRHAPI_MapConfig> FRHAPI_MapSelectionList::Maps`

List of maps that can be chosen in this selection list.





## Public Functions



### `FromJson` <a id="structFRHAPI__MapSelectionList_1ad8b23fdef9b12cd1220e76255432723f"></a>

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



### `WriteJson` <a id="structFRHAPI__MapSelectionList_1ac5757039a5dfb4ba500eedc62dcc9f77"></a>

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



### `GetMapSelectionListId` <a id="structFRHAPI__MapSelectionList_1a33760d8296656286de30e157c9b8d75d"></a>

FString & GetMapSelectionListId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MapSelectionListId.




### `GetMapSelectionListId` <a id="structFRHAPI__MapSelectionList_1accb162b236aa274d987f72da2a72d186"></a>

const FString & GetMapSelectionListId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MapSelectionListId.




### `SetMapSelectionListId` <a id="structFRHAPI__MapSelectionList_1aba278792dfddde9bbfc5a21e282aab73"></a>

void SetMapSelectionListId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of MapSelectionListId.




### `GetMaps` <a id="structFRHAPI__MapSelectionList_1a1176087597f5a20435aadfe380d7577b"></a>

TArray< [FRHAPI_MapConfig](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig) > & GetMaps()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Maps.




### `GetMaps` <a id="structFRHAPI__MapSelectionList_1acd9b43b6edd69821810f3ca13aca2395"></a>

const TArray< [FRHAPI_MapConfig](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig) > & GetMaps()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Maps.




### `SetMaps` <a id="structFRHAPI__MapSelectionList_1a4aba4193810a93b9e65bf99c15a6e4c8"></a>

void SetMaps(TArray< [FRHAPI_MapConfig](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_MapConfig](/unreal-plugins/all/structfrhapi__mapconfig/#structFRHAPI__MapConfig) >|NewValue|

#### Description

Sets the value of Maps.





