---
title: FRHAPI_BrowserInfo Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Information about the browser resource in a session.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo_1a1ad770cf3fe97c92dab9795e64b4a8ed)|Custom data with the listing of the instance in the Session browser.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo_1a27eb9d0cd09c5d0f93d0631e19b0e604)|true if CustomData_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo_1ad11253948831f090100b3b505e24e0b0)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo_1a5d6eb17971e4cf1f2d75309a87872efd)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo_1ab768e1e96e417faad6b3ecea7af5cae7)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo_1a9200ab98c941059ea8446b3d7a9cd43e)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo_1ac0dedffa4d7fd9b85ffdae4e68d8ec85)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo_1a2d8cf64f67c2ebc5e50b928cc557acea)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo_1a839964c99508071de3dac7c7d2705ea6)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo_1a1b453c2ac8b666a3c3e0ce3acdf0726d)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo_1a6fe9c0b681f3646f18791398c90206a7)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo_1ae8f8398bbf009d658cf121b7734c9ba0)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
## Public Attributes



### `CustomData_Optional` <a id="structFRHAPI__BrowserInfo_1a1ad770cf3fe97c92dab9795e64b4a8ed"></a>

`TMap<FString, FString> FRHAPI_BrowserInfo::CustomData_Optional`

Custom data with the listing of the instance in the Session browser.




### `CustomData_IsSet` <a id="structFRHAPI__BrowserInfo_1a27eb9d0cd09c5d0f93d0631e19b0e604"></a>

`bool FRHAPI_BrowserInfo::CustomData_IsSet`

true if CustomData_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__BrowserInfo_1ad11253948831f090100b3b505e24e0b0"></a>

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



### `WriteJson` <a id="structFRHAPI__BrowserInfo_1a5d6eb17971e4cf1f2d75309a87872efd"></a>

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



### `GetCustomData` <a id="structFRHAPI__BrowserInfo_1ab768e1e96e417faad6b3ecea7af5cae7"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__BrowserInfo_1a9200ab98c941059ea8446b3d7a9cd43e"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__BrowserInfo_1ac0dedffa4d7fd9b85ffdae4e68d8ec85"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__BrowserInfo_1a2d8cf64f67c2ebc5e50b928cc557acea"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__BrowserInfo_1a839964c99508071de3dac7c7d2705ea6"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__BrowserInfo_1a1b453c2ac8b666a3c3e0ce3acdf0726d"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__BrowserInfo_1a6fe9c0b681f3646f18791398c90206a7"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__BrowserInfo_1ae8f8398bbf009d658cf121b7734c9ba0"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.





