---
title: FRHAPI_PersonEmailListRequest Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Request to update a person&#39;s email list subscriptions.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< int32 >|[EmailListIds_Optional](/unreal-plugins/all/structfrhapi__personemaillistrequest/#structFRHAPI__PersonEmailListRequest_1a40e9b3ec056a3c2567d794c697c7082d)|List of all email list ids the user is subscribed to, even if already subscribed before request.|
|bool|[EmailListIds_IsSet](/unreal-plugins/all/structfrhapi__personemaillistrequest/#structFRHAPI__PersonEmailListRequest_1a3da41bb7b8e4e445cbe45a9d9090f3d5)|true if EmailListIds_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__personemaillistrequest/#structFRHAPI__PersonEmailListRequest_1a6f8e407240eb7ef9d57c32cf1bfee7ab)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__personemaillistrequest/#structFRHAPI__PersonEmailListRequest_1a5f71385e182f178080469e5ff0a11ad5)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< int32 > &|[GetEmailListIds](/unreal-plugins/all/structfrhapi__personemaillistrequest/#structFRHAPI__PersonEmailListRequest_1a109787b76426c3c653bf980d332a95ca)()|Gets the value of EmailListIds_Optional, regardless of it having been set.|
|const TArray< int32 > &|[GetEmailListIds](/unreal-plugins/all/structfrhapi__personemaillistrequest/#structFRHAPI__PersonEmailListRequest_1a2b4eaf81b5f7b38902547281003afecd)()|Gets the value of EmailListIds_Optional, regardless of it having been set.|
|const TArray< int32 > &|[GetEmailListIds](/unreal-plugins/all/structfrhapi__personemaillistrequest/#structFRHAPI__PersonEmailListRequest_1a3fadd6d2f2e530dc12a3a7a6d14186fd)(const TArray< int32 > & DefaultValue)|Gets the value of EmailListIds_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetEmailListIds](/unreal-plugins/all/structfrhapi__personemaillistrequest/#structFRHAPI__PersonEmailListRequest_1a577b39a9aad16d1fac8aba9be9f77e8d)(TArray< int32 > & OutValue)|Fills OutValue with the value of EmailListIds_Optional and returns true if it has been set, otherwise returns false.|
|TArray< int32 > *|[GetEmailListIdsOrNull](/unreal-plugins/all/structfrhapi__personemaillistrequest/#structFRHAPI__PersonEmailListRequest_1a380c5012251647de67ef86087c29a9f6)()|Returns a pointer to EmailListIds_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< int32 > *|[GetEmailListIdsOrNull](/unreal-plugins/all/structfrhapi__personemaillistrequest/#structFRHAPI__PersonEmailListRequest_1ae4b01fbeffd7a00a89f779afd6f32689)()|Returns a pointer to EmailListIds_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetEmailListIds](/unreal-plugins/all/structfrhapi__personemaillistrequest/#structFRHAPI__PersonEmailListRequest_1a1a25e71e46276a364fd039ff924ab31c)(TArray< int32 > NewValue)|Sets the value of EmailListIds_Optional and also sets EmailListIds_IsSet to true.|
|void|[ClearEmailListIds](/unreal-plugins/all/structfrhapi__personemaillistrequest/#structFRHAPI__PersonEmailListRequest_1accf496a99915c0447482fb8e77b1dfb2)()|Clears the value of EmailListIds_Optional and sets EmailListIds_IsSet to false.|
## Public Attributes



### `EmailListIds_Optional` <a id="structFRHAPI__PersonEmailListRequest_1a40e9b3ec056a3c2567d794c697c7082d"></a>

`TArray<int32> FRHAPI_PersonEmailListRequest::EmailListIds_Optional`

List of all email list ids the user is subscribed to, even if already subscribed before request.




### `EmailListIds_IsSet` <a id="structFRHAPI__PersonEmailListRequest_1a3da41bb7b8e4e445cbe45a9d9090f3d5"></a>

`bool FRHAPI_PersonEmailListRequest::EmailListIds_IsSet`

true if EmailListIds_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PersonEmailListRequest_1a6f8e407240eb7ef9d57c32cf1bfee7ab"></a>

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



### `WriteJson` <a id="structFRHAPI__PersonEmailListRequest_1a5f71385e182f178080469e5ff0a11ad5"></a>

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



### `GetEmailListIds` <a id="structFRHAPI__PersonEmailListRequest_1a109787b76426c3c653bf980d332a95ca"></a>

TArray< int32 > & GetEmailListIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EmailListIds_Optional, regardless of it having been set.




### `GetEmailListIds` <a id="structFRHAPI__PersonEmailListRequest_1a2b4eaf81b5f7b38902547281003afecd"></a>

const TArray< int32 > & GetEmailListIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EmailListIds_Optional, regardless of it having been set.




### `GetEmailListIds` <a id="structFRHAPI__PersonEmailListRequest_1a3fadd6d2f2e530dc12a3a7a6d14186fd"></a>

const TArray< int32 > & GetEmailListIds(const TArray< int32 > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< int32 > &|DefaultValue|

#### Description

Gets the value of EmailListIds_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetEmailListIds` <a id="structFRHAPI__PersonEmailListRequest_1a577b39a9aad16d1fac8aba9be9f77e8d"></a>

bool GetEmailListIds(TArray< int32 > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< int32 > &|OutValue|

#### Description

Fills OutValue with the value of EmailListIds_Optional and returns true if it has been set, otherwise returns false.




### `GetEmailListIdsOrNull` <a id="structFRHAPI__PersonEmailListRequest_1a380c5012251647de67ef86087c29a9f6"></a>

TArray< int32 > * GetEmailListIdsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to EmailListIds_Optional, if it has been set, otherwise returns nullptr.




### `GetEmailListIdsOrNull` <a id="structFRHAPI__PersonEmailListRequest_1ae4b01fbeffd7a00a89f779afd6f32689"></a>

const TArray< int32 > * GetEmailListIdsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to EmailListIds_Optional, if it has been set, otherwise returns nullptr.




### `SetEmailListIds` <a id="structFRHAPI__PersonEmailListRequest_1a1a25e71e46276a364fd039ff924ab31c"></a>

void SetEmailListIds(TArray< int32 > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< int32 >|NewValue|

#### Description

Sets the value of EmailListIds_Optional and also sets EmailListIds_IsSet to true.




### `ClearEmailListIds` <a id="structFRHAPI__PersonEmailListRequest_1accf496a99915c0447482fb8e77b1dfb2"></a>

void ClearEmailListIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of EmailListIds_Optional and sets EmailListIds_IsSet to false.





