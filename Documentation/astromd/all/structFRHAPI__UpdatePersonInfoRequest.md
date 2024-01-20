---
title: FRHAPI_UpdatePersonInfoRequest Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Request to update a person&#39;s info.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[Email](/unreal-plugins/all/structfrhapi__updatepersoninforequest/#structFRHAPI__UpdatePersonInfoRequest_1af5a820fdad3bb4e59df07be959c7858e)|Email address to update to.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__updatepersoninforequest/#structFRHAPI__UpdatePersonInfoRequest_1a761aa4132a1c2e9a303b08d59d1e6197)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__updatepersoninforequest/#structFRHAPI__UpdatePersonInfoRequest_1a27ed6dc5682a17500361ca5e956a9eaa)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetEmail](/unreal-plugins/all/structfrhapi__updatepersoninforequest/#structFRHAPI__UpdatePersonInfoRequest_1af78a67575dd9865d044c07949b497844)()|Gets the value of Email.|
|const FString &|[GetEmail](/unreal-plugins/all/structfrhapi__updatepersoninforequest/#structFRHAPI__UpdatePersonInfoRequest_1a45d6be43aae6a507a369fcd3a7bf6501)()|Gets the value of Email.|
|void|[SetEmail](/unreal-plugins/all/structfrhapi__updatepersoninforequest/#structFRHAPI__UpdatePersonInfoRequest_1a247522d48abf10f07a16f29e31b95c36)(FString NewValue)|Sets the value of Email.|
## Public Attributes



### `Email` <a id="structFRHAPI__UpdatePersonInfoRequest_1af5a820fdad3bb4e59df07be959c7858e"></a>

`FString FRHAPI_UpdatePersonInfoRequest::Email`

Email address to update to.





## Public Functions



### `FromJson` <a id="structFRHAPI__UpdatePersonInfoRequest_1a761aa4132a1c2e9a303b08d59d1e6197"></a>

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



### `WriteJson` <a id="structFRHAPI__UpdatePersonInfoRequest_1a27ed6dc5682a17500361ca5e956a9eaa"></a>

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



### `GetEmail` <a id="structFRHAPI__UpdatePersonInfoRequest_1af78a67575dd9865d044c07949b497844"></a>

FString & GetEmail()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Email.




### `GetEmail` <a id="structFRHAPI__UpdatePersonInfoRequest_1a45d6be43aae6a507a369fcd3a7bf6501"></a>

const FString & GetEmail()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Email.




### `SetEmail` <a id="structFRHAPI__UpdatePersonInfoRequest_1a247522d48abf10f07a16f29e31b95c36"></a>

void SetEmail(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Email.





