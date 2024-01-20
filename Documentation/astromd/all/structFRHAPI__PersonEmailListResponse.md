---
title: FRHAPI_PersonEmailListResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Response for updating a person&#39;s email list subscriptions.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< int32 >|[EmailListIds](/unreal-plugins/all/structfrhapi__personemaillistresponse/#structFRHAPI__PersonEmailListResponse_1a6b053260a7b3d82a55364c10e6eeaa1d)|List of all email list ids the user is subscribed to.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__personemaillistresponse/#structFRHAPI__PersonEmailListResponse_1a54d8a7ba0dc3a88fd6763b746294dc31)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__personemaillistresponse/#structFRHAPI__PersonEmailListResponse_1a502b121c93096ab99799fa71130d6cb8)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< int32 > &|[GetEmailListIds](/unreal-plugins/all/structfrhapi__personemaillistresponse/#structFRHAPI__PersonEmailListResponse_1a603ce5ee32c487c52d59f7434989d029)()|Gets the value of EmailListIds.|
|const TArray< int32 > &|[GetEmailListIds](/unreal-plugins/all/structfrhapi__personemaillistresponse/#structFRHAPI__PersonEmailListResponse_1a3079634ec6743a9b7b8dfb7e43fae8cd)()|Gets the value of EmailListIds.|
|void|[SetEmailListIds](/unreal-plugins/all/structfrhapi__personemaillistresponse/#structFRHAPI__PersonEmailListResponse_1a7b238ecadcb0b5dc5633901d06601a99)(TArray< int32 > NewValue)|Sets the value of EmailListIds.|
## Public Attributes



### `EmailListIds` <a id="structFRHAPI__PersonEmailListResponse_1a6b053260a7b3d82a55364c10e6eeaa1d"></a>

`TArray<int32> FRHAPI_PersonEmailListResponse::EmailListIds`

List of all email list ids the user is subscribed to.





## Public Functions



### `FromJson` <a id="structFRHAPI__PersonEmailListResponse_1a54d8a7ba0dc3a88fd6763b746294dc31"></a>

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



### `WriteJson` <a id="structFRHAPI__PersonEmailListResponse_1a502b121c93096ab99799fa71130d6cb8"></a>

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



### `GetEmailListIds` <a id="structFRHAPI__PersonEmailListResponse_1a603ce5ee32c487c52d59f7434989d029"></a>

TArray< int32 > & GetEmailListIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EmailListIds.




### `GetEmailListIds` <a id="structFRHAPI__PersonEmailListResponse_1a3079634ec6743a9b7b8dfb7e43fae8cd"></a>

const TArray< int32 > & GetEmailListIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EmailListIds.




### `SetEmailListIds` <a id="structFRHAPI__PersonEmailListResponse_1a7b238ecadcb0b5dc5633901d06601a99"></a>

void SetEmailListIds(TArray< int32 > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< int32 >|NewValue|

#### Description

Sets the value of EmailListIds.





