---
title: FRHAPI_HTTPValidationError Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_ValidationError](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError) >|[Detail_Optional](/unreal-plugins/all/structfrhapi__httpvalidationerror/#structFRHAPI__HTTPValidationError_1a17b75a583ce83c3bce0f5380c72440b9)||
|bool|[Detail_IsSet](/unreal-plugins/all/structfrhapi__httpvalidationerror/#structFRHAPI__HTTPValidationError_1a2290ebbfc4b29a3f3a602efc45c7b090)|true if Detail_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__httpvalidationerror/#structFRHAPI__HTTPValidationError_1a1b14f96f3b555573c6a8a0427591684b)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__httpvalidationerror/#structFRHAPI__HTTPValidationError_1ada9fc3bd658abc6828ba3a33dc4dba0b)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_ValidationError](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError) > &|[GetDetail](/unreal-plugins/all/structfrhapi__httpvalidationerror/#structFRHAPI__HTTPValidationError_1aa18d8ac7961d800c6e8fddb664659900)()|Gets the value of Detail_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_ValidationError](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError) > &|[GetDetail](/unreal-plugins/all/structfrhapi__httpvalidationerror/#structFRHAPI__HTTPValidationError_1ab656ce2e78d8361555bfd9dd97313acb)()|Gets the value of Detail_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_ValidationError](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError) > &|[GetDetail](/unreal-plugins/all/structfrhapi__httpvalidationerror/#structFRHAPI__HTTPValidationError_1a35587fbca93183b276060179b5716be4)(const TArray< [FRHAPI_ValidationError](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError) > & DefaultValue)|Gets the value of Detail_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetDetail](/unreal-plugins/all/structfrhapi__httpvalidationerror/#structFRHAPI__HTTPValidationError_1a90f37afda96315807fb4fd7b078b60ea)(TArray< [FRHAPI_ValidationError](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError) > & OutValue)|Fills OutValue with the value of Detail_Optional and returns true if it has been set, otherwise returns false.|
|TArray< [FRHAPI_ValidationError](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError) > *|[GetDetailOrNull](/unreal-plugins/all/structfrhapi__httpvalidationerror/#structFRHAPI__HTTPValidationError_1ade6a4dbcb19294c2ab618a7d110cdbb1)()|Returns a pointer to Detail_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< [FRHAPI_ValidationError](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError) > *|[GetDetailOrNull](/unreal-plugins/all/structfrhapi__httpvalidationerror/#structFRHAPI__HTTPValidationError_1aba26c0199e254d73c85a261cbd3174ed)()|Returns a pointer to Detail_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetDetail](/unreal-plugins/all/structfrhapi__httpvalidationerror/#structFRHAPI__HTTPValidationError_1ab5da2c3ae56e603b3f130829b8fbabb5)(TArray< [FRHAPI_ValidationError](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError) > NewValue)|Sets the value of Detail_Optional and also sets Detail_IsSet to true.|
|void|[ClearDetail](/unreal-plugins/all/structfrhapi__httpvalidationerror/#structFRHAPI__HTTPValidationError_1a12352d19408f341b50d0c3235fc78cab)()|Clears the value of Detail_Optional and sets Detail_IsSet to false.|
## Public Attributes



### `Detail_Optional` <a id="structFRHAPI__HTTPValidationError_1a17b75a583ce83c3bce0f5380c72440b9"></a>

`TArray<FRHAPI_ValidationError> FRHAPI_HTTPValidationError::Detail_Optional`






### `Detail_IsSet` <a id="structFRHAPI__HTTPValidationError_1a2290ebbfc4b29a3f3a602efc45c7b090"></a>

`bool FRHAPI_HTTPValidationError::Detail_IsSet`

true if Detail_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__HTTPValidationError_1a1b14f96f3b555573c6a8a0427591684b"></a>

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



### `WriteJson` <a id="structFRHAPI__HTTPValidationError_1ada9fc3bd658abc6828ba3a33dc4dba0b"></a>

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



### `GetDetail` <a id="structFRHAPI__HTTPValidationError_1aa18d8ac7961d800c6e8fddb664659900"></a>

TArray< [FRHAPI_ValidationError](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError) > & GetDetail()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Detail_Optional, regardless of it having been set.




### `GetDetail` <a id="structFRHAPI__HTTPValidationError_1ab656ce2e78d8361555bfd9dd97313acb"></a>

const TArray< [FRHAPI_ValidationError](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError) > & GetDetail()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Detail_Optional, regardless of it having been set.




### `GetDetail` <a id="structFRHAPI__HTTPValidationError_1a35587fbca93183b276060179b5716be4"></a>

const TArray< [FRHAPI_ValidationError](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError) > & GetDetail(const TArray< [FRHAPI_ValidationError](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< [FRHAPI_ValidationError](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError) > &|DefaultValue|

#### Description

Gets the value of Detail_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetDetail` <a id="structFRHAPI__HTTPValidationError_1a90f37afda96315807fb4fd7b078b60ea"></a>

bool GetDetail(TArray< [FRHAPI_ValidationError](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_ValidationError](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError) > &|OutValue|

#### Description

Fills OutValue with the value of Detail_Optional and returns true if it has been set, otherwise returns false.




### `GetDetailOrNull` <a id="structFRHAPI__HTTPValidationError_1ade6a4dbcb19294c2ab618a7d110cdbb1"></a>

TArray< [FRHAPI_ValidationError](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError) > * GetDetailOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Detail_Optional, if it has been set, otherwise returns nullptr.




### `GetDetailOrNull` <a id="structFRHAPI__HTTPValidationError_1aba26c0199e254d73c85a261cbd3174ed"></a>

const TArray< [FRHAPI_ValidationError](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError) > * GetDetailOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Detail_Optional, if it has been set, otherwise returns nullptr.




### `SetDetail` <a id="structFRHAPI__HTTPValidationError_1ab5da2c3ae56e603b3f130829b8fbabb5"></a>

void SetDetail(TArray< [FRHAPI_ValidationError](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_ValidationError](/unreal-plugins/all/structfrhapi__validationerror/#structFRHAPI__ValidationError) >|NewValue|

#### Description

Sets the value of Detail_Optional and also sets Detail_IsSet to true.




### `ClearDetail` <a id="structFRHAPI__HTTPValidationError_1a12352d19408f341b50d0c3235fc78cab"></a>

void ClearDetail()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Detail_Optional and sets Detail_IsSet to false.





