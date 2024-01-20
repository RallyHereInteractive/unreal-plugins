---
title: FRHAPI_SiteSettings Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Contains information about a site/region.

## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[SiteId](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1a354d7e2e7334dbe823e6532b1ffdd0f9)|The site ID.|
|int32|[SortOrder](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1a21089b77688f2ab396a23bf605160cc5)|The priority order of this site.|
|bool|[CustomOnly](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1a6947b3b6d7cb93f2614f056bbe220ec7)|Indicates if the site is a custom games only.|
|FString|[MessageName_Optional](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1a8b14f2590d8bbf7753a2c669492575ad)|The message associated with this site.|
|bool|[MessageName_IsSet](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1ae00c3cf7fff18dd0f58af4f57d9aceb3)|true if MessageName_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1ace78f255ad82c35ee77f73d2d22210fa)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1a9c92f459cdeb3e680ff5e7dd7e0faf63)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|int32 &|[GetSiteId](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1ad30c8fc66506f9391d822f14cf34701d)()|Gets the value of SiteId.|
|const int32 &|[GetSiteId](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1aee3e190e01a351e69f777e70a12fb2b6)()|Gets the value of SiteId.|
|void|[SetSiteId](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1a2097377c9005984c3d8ed7bc8169afd0)(int32 NewValue)|Sets the value of SiteId.|
|bool|[IsSiteIdDefaultValue](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1ac5129582f55f1113caa262fb6f861c50)()|Returns true if SiteId matches the default value.|
|void|[SetSiteIdToDefault](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1a786e6758c0fa9edc41c670c2fd31ecce)()|Sets the value of SiteId to its default|
|int32 &|[GetSortOrder](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1aee6fdf44a0c96732525fd66abbbd0337)()|Gets the value of SortOrder.|
|const int32 &|[GetSortOrder](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1a431214f05b8e52d155b6b04439274930)()|Gets the value of SortOrder.|
|void|[SetSortOrder](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1a52a6c12566564b4ec3785da21196dd74)(int32 NewValue)|Sets the value of SortOrder.|
|bool|[IsSortOrderDefaultValue](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1aca9913a9fca3d7b84dc6bfde308650f9)()|Returns true if SortOrder matches the default value.|
|void|[SetSortOrderToDefault](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1a7777c38f950842a330a75eb58d378b7e)()|Sets the value of SortOrder to its default|
|bool &|[GetCustomOnly](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1a13ea7a35bad578f65a78ca97f4421971)()|Gets the value of CustomOnly.|
|const bool &|[GetCustomOnly](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1a0af9fc60dd14cf0003a57428a1640a8d)()|Gets the value of CustomOnly.|
|void|[SetCustomOnly](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1a96f677b6feaa87a76d05e90db57f1ee9)(bool NewValue)|Sets the value of CustomOnly.|
|bool|[IsCustomOnlyDefaultValue](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1ac704a8d1ec5345247ba3a71075e269ec)()|Returns true if CustomOnly matches the default value.|
|void|[SetCustomOnlyToDefault](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1a4c3b601e60a7d33c3cfa68d07d24acee)()|Sets the value of CustomOnly to its default|
|FString &|[GetMessageName](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1af8b77273e1aadc41075bb0326e8b47e6)()|Gets the value of MessageName_Optional, regardless of it having been set.|
|const FString &|[GetMessageName](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1a565361792d5824059e54300156e073a2)()|Gets the value of MessageName_Optional, regardless of it having been set.|
|const FString &|[GetMessageName](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1a9c9dd5b3ff425d05f06798a78fb4bbf6)(const FString & DefaultValue)|Gets the value of MessageName_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetMessageName](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1a2bb5fd6ec72c3447582c4caf30411333)(FString & OutValue)|Fills OutValue with the value of MessageName_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetMessageNameOrNull](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1a3b8ea072f71f89f068d37912b6c2d688)()|Returns a pointer to MessageName_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetMessageNameOrNull](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1a80917bd7ddcc1ea8f99749eeadc43543)()|Returns a pointer to MessageName_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetMessageName](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1ab1a5e0df404208a3defade17055d92c0)(FString NewValue)|Sets the value of MessageName_Optional and also sets MessageName_IsSet to true.|
|void|[ClearMessageName](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings_1a01eda7e3c25c7152f6e011f906404c6c)()|Clears the value of MessageName_Optional and sets MessageName_IsSet to false.|
## Public Attributes



### `SiteId` <a id="structFRHAPI__SiteSettings_1a354d7e2e7334dbe823e6532b1ffdd0f9"></a>

`int32 FRHAPI_SiteSettings::SiteId`

The site ID.




### `SortOrder` <a id="structFRHAPI__SiteSettings_1a21089b77688f2ab396a23bf605160cc5"></a>

`int32 FRHAPI_SiteSettings::SortOrder`

The priority order of this site.




### `CustomOnly` <a id="structFRHAPI__SiteSettings_1a6947b3b6d7cb93f2614f056bbe220ec7"></a>

`bool FRHAPI_SiteSettings::CustomOnly`

Indicates if the site is a custom games only.




### `MessageName_Optional` <a id="structFRHAPI__SiteSettings_1a8b14f2590d8bbf7753a2c669492575ad"></a>

`FString FRHAPI_SiteSettings::MessageName_Optional`

The message associated with this site.




### `MessageName_IsSet` <a id="structFRHAPI__SiteSettings_1ae00c3cf7fff18dd0f58af4f57d9aceb3"></a>

`bool FRHAPI_SiteSettings::MessageName_IsSet`

true if MessageName_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__SiteSettings_1ace78f255ad82c35ee77f73d2d22210fa"></a>

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



### `WriteJson` <a id="structFRHAPI__SiteSettings_1a9c92f459cdeb3e680ff5e7dd7e0faf63"></a>

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



### `GetSiteId` <a id="structFRHAPI__SiteSettings_1ad30c8fc66506f9391d822f14cf34701d"></a>

int32 & GetSiteId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SiteId.




### `GetSiteId` <a id="structFRHAPI__SiteSettings_1aee3e190e01a351e69f777e70a12fb2b6"></a>

const int32 & GetSiteId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SiteId.




### `SetSiteId` <a id="structFRHAPI__SiteSettings_1a2097377c9005984c3d8ed7bc8169afd0"></a>

void SetSiteId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of SiteId.




### `IsSiteIdDefaultValue` <a id="structFRHAPI__SiteSettings_1ac5129582f55f1113caa262fb6f861c50"></a>

bool IsSiteIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if SiteId matches the default value.




### `SetSiteIdToDefault` <a id="structFRHAPI__SiteSettings_1a786e6758c0fa9edc41c670c2fd31ecce"></a>

void SetSiteIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of SiteId to its default




### `GetSortOrder` <a id="structFRHAPI__SiteSettings_1aee6fdf44a0c96732525fd66abbbd0337"></a>

int32 & GetSortOrder()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SortOrder.




### `GetSortOrder` <a id="structFRHAPI__SiteSettings_1a431214f05b8e52d155b6b04439274930"></a>

const int32 & GetSortOrder()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SortOrder.




### `SetSortOrder` <a id="structFRHAPI__SiteSettings_1a52a6c12566564b4ec3785da21196dd74"></a>

void SetSortOrder(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of SortOrder.




### `IsSortOrderDefaultValue` <a id="structFRHAPI__SiteSettings_1aca9913a9fca3d7b84dc6bfde308650f9"></a>

bool IsSortOrderDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if SortOrder matches the default value.




### `SetSortOrderToDefault` <a id="structFRHAPI__SiteSettings_1a7777c38f950842a330a75eb58d378b7e"></a>

void SetSortOrderToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of SortOrder to its default




### `GetCustomOnly` <a id="structFRHAPI__SiteSettings_1a13ea7a35bad578f65a78ca97f4421971"></a>

bool & GetCustomOnly()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomOnly.




### `GetCustomOnly` <a id="structFRHAPI__SiteSettings_1a0af9fc60dd14cf0003a57428a1640a8d"></a>

const bool & GetCustomOnly()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomOnly.




### `SetCustomOnly` <a id="structFRHAPI__SiteSettings_1a96f677b6feaa87a76d05e90db57f1ee9"></a>

void SetCustomOnly(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of CustomOnly.




### `IsCustomOnlyDefaultValue` <a id="structFRHAPI__SiteSettings_1ac704a8d1ec5345247ba3a71075e269ec"></a>

bool IsCustomOnlyDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if CustomOnly matches the default value.




### `SetCustomOnlyToDefault` <a id="structFRHAPI__SiteSettings_1a4c3b601e60a7d33c3cfa68d07d24acee"></a>

void SetCustomOnlyToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of CustomOnly to its default




### `GetMessageName` <a id="structFRHAPI__SiteSettings_1af8b77273e1aadc41075bb0326e8b47e6"></a>

FString & GetMessageName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MessageName_Optional, regardless of it having been set.




### `GetMessageName` <a id="structFRHAPI__SiteSettings_1a565361792d5824059e54300156e073a2"></a>

const FString & GetMessageName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MessageName_Optional, regardless of it having been set.




### `GetMessageName` <a id="structFRHAPI__SiteSettings_1a9c9dd5b3ff425d05f06798a78fb4bbf6"></a>

const FString & GetMessageName(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of MessageName_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetMessageName` <a id="structFRHAPI__SiteSettings_1a2bb5fd6ec72c3447582c4caf30411333"></a>

bool GetMessageName(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of MessageName_Optional and returns true if it has been set, otherwise returns false.




### `GetMessageNameOrNull` <a id="structFRHAPI__SiteSettings_1a3b8ea072f71f89f068d37912b6c2d688"></a>

FString * GetMessageNameOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MessageName_Optional, if it has been set, otherwise returns nullptr.




### `GetMessageNameOrNull` <a id="structFRHAPI__SiteSettings_1a80917bd7ddcc1ea8f99749eeadc43543"></a>

const FString * GetMessageNameOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MessageName_Optional, if it has been set, otherwise returns nullptr.




### `SetMessageName` <a id="structFRHAPI__SiteSettings_1ab1a5e0df404208a3defade17055d92c0"></a>

void SetMessageName(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of MessageName_Optional and also sets MessageName_IsSet to true.




### `ClearMessageName` <a id="structFRHAPI__SiteSettings_1a01eda7e3c25c7152f6e011f906404c6c"></a>

void ClearMessageName()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of MessageName_Optional and sets MessageName_IsSet to false.





