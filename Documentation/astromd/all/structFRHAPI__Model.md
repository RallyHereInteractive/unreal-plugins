---
title: FRHAPI_Model Struct
---
Base class for all RallyHereAPI data models.

## Summary
| Kind | View | Description |
|------|------|-------------|
||[GENERATED_BODY](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model_1aa903e87a078f9bf7d2bb37b08d1a535a)(WithNoDestructor )||
||[~FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model_1ace9ebc0be8edfb46766c86c756630ee4)()||
|bool|[FromJson](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model_1a96477760fd6707ecca6b56b8d151beab)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model_1a1571819a105ad9b51e09b51d134c2d0a)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
## Public Functions



### `GENERATED_BODY` <a id="structFRHAPI__Model_1aa903e87a078f9bf7d2bb37b08d1a535a"></a>

 GENERATED_BODY(WithNoDestructor )

#### Parameters

| Type | Name |
|------|------|
|WithNoDestructor||

#### Description






### `~FRHAPI_Model` <a id="structFRHAPI__Model_1ace9ebc0be8edfb46766c86c756630ee4"></a>

 ~FRHAPI_Model()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `FromJson` <a id="structFRHAPI__Model_1a96477760fd6707ecca6b56b8d151beab"></a>

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



### `WriteJson` <a id="structFRHAPI__Model_1a1571819a105ad9b51e09b51d134c2d0a"></a>

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




