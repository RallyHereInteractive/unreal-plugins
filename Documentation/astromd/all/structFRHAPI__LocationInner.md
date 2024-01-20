---
title: FRHAPI_LocationInner Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__locationinner/#structFRHAPI__LocationInner_1a601fb7b0c8971f05660dae816ed5d80e)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__locationinner/#structFRHAPI__LocationInner_1acaf7c6e061dc4b9b3d8d87a1500cf695)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
## Public Functions



### `FromJson` <a id="structFRHAPI__LocationInner_1a601fb7b0c8971f05660dae816ed5d80e"></a>

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



### `WriteJson` <a id="structFRHAPI__LocationInner_1acaf7c6e061dc4b9b3d8d87a1500cf695"></a>

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




