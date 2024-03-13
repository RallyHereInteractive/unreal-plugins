---
title: FRHAPI_BodyFindOpportunities Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[ScreenPixelWidth_Optional](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a2f24ade1385dc3a8b41426ad2bac08a1)|Width of the screen in pixels.|
|bool|[ScreenPixelWidth_IsSet](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a9187fe5415e2f1cea7c949e0ef45bb8a)|true if ScreenPixelWidth_Optional has been set to a value|
|int32|[ScreenPixelHeight_Optional](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a203a01830ae46eff931e59f8d14af089)|Height of the screen in pixels.|
|bool|[ScreenPixelHeight_IsSet](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a7e3d5e46c85439c7148a09d953b37691)|true if ScreenPixelHeight_Optional has been set to a value|
|FString|[CountryCode](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a7a792bb346c548d6b51ddfa97dbd4b7a)|ISO 3166-1 alpha-2 country code for the user|
|FString|[LanguageCode](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1acda52cb7b0b82e80fa9f7726eb4923f0)|ISO 639-2 language code|
|FString|[DeviceId_Optional](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1aecddbe9ef61c93765612120f22d809cb)|Unique Identifier for the device a session is started on. E.g should be the same for multiple users on the same device.|
|bool|[DeviceId_IsSet](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a62d71d9c70891074895910f1cdbea6d2)|true if DeviceId_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1aeb49f34b2783c3d98f64a6f29765bced)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1ad9495a9e4dd6eb290b4497476cd27983)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|int32 &|[GetScreenPixelWidth](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a8800010d4d58b46142fc581eecc44452)()|Gets the value of ScreenPixelWidth_Optional, regardless of it having been set.|
|const int32 &|[GetScreenPixelWidth](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1aefefa4eb30b57b14b9c33da8559aa7bf)()|Gets the value of ScreenPixelWidth_Optional, regardless of it having been set.|
|const int32 &|[GetScreenPixelWidth](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a5746301bb09b65f849326fbd2e3121b4)(const int32 & DefaultValue)|Gets the value of ScreenPixelWidth_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetScreenPixelWidth](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1afcebe830ce5b9c7e39770fb0468f1e3d)(int32 & OutValue)|Fills OutValue with the value of ScreenPixelWidth_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetScreenPixelWidthOrNull](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a8c9bc39b971859ddbeb80556492c0fc6)()|Returns a pointer to ScreenPixelWidth_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetScreenPixelWidthOrNull](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a74fed5f63eef8c9cd4a35f2b1f3a0631)()|Returns a pointer to ScreenPixelWidth_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetScreenPixelWidth](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a89c2a76632b1a12919e52368a155ff06)(int32 NewValue)|Sets the value of ScreenPixelWidth_Optional and also sets ScreenPixelWidth_IsSet to true.|
|void|[ClearScreenPixelWidth](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1ae6663d32a01ee5dffa9d75a6132f95f2)()|Clears the value of ScreenPixelWidth_Optional and sets ScreenPixelWidth_IsSet to false.|
|bool|[IsScreenPixelWidthDefaultValue](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a2455bb9010c3861a19d196be1e8e764a)()|Returns true if ScreenPixelWidth_Optional is set and matches the default value.|
|void|[SetScreenPixelWidthToDefault](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a77699235df89da355f3f899790addb3c)()|Sets the value of ScreenPixelWidth_Optional to its default and also sets ScreenPixelWidth_IsSet to true.|
|int32 &|[GetScreenPixelHeight](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a42bc8a43f564f849371215ae65ac87f4)()|Gets the value of ScreenPixelHeight_Optional, regardless of it having been set.|
|const int32 &|[GetScreenPixelHeight](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a201d4dd5f694ab82dd95fc238c595801)()|Gets the value of ScreenPixelHeight_Optional, regardless of it having been set.|
|const int32 &|[GetScreenPixelHeight](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1ac5d4b8d7731a89ae0ee33c8c24e49288)(const int32 & DefaultValue)|Gets the value of ScreenPixelHeight_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetScreenPixelHeight](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a89104b1d7b2c782fd8e6b7486e86f476)(int32 & OutValue)|Fills OutValue with the value of ScreenPixelHeight_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetScreenPixelHeightOrNull](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a8831af1b2f1f4151aeafb4c3704d1cf6)()|Returns a pointer to ScreenPixelHeight_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetScreenPixelHeightOrNull](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a148e76eb5c80318d7bada5ccb17b0d83)()|Returns a pointer to ScreenPixelHeight_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetScreenPixelHeight](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a9a6a83aa3791b0a72cafc1ea45a12891)(int32 NewValue)|Sets the value of ScreenPixelHeight_Optional and also sets ScreenPixelHeight_IsSet to true.|
|void|[ClearScreenPixelHeight](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a048b38678d62f4814c85642a737c6509)()|Clears the value of ScreenPixelHeight_Optional and sets ScreenPixelHeight_IsSet to false.|
|bool|[IsScreenPixelHeightDefaultValue](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1af1ff5fc6e6bd2f3fc32267299a693f1c)()|Returns true if ScreenPixelHeight_Optional is set and matches the default value.|
|void|[SetScreenPixelHeightToDefault](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a0d93830a1d72571e005154ed1a7d3dfc)()|Sets the value of ScreenPixelHeight_Optional to its default and also sets ScreenPixelHeight_IsSet to true.|
|FString &|[GetCountryCode](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a1ecbe536baf4fd61c4828d6ba39b65f1)()|Gets the value of CountryCode.|
|const FString &|[GetCountryCode](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a7eae910423db2956866ea4955f23a205)()|Gets the value of CountryCode.|
|void|[SetCountryCode](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1ae85974c5d8491983860972669174b6a2)(FString NewValue)|Sets the value of CountryCode.|
|FString &|[GetLanguageCode](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a4d0b86e4faad731905c5db2a7ba9d213)()|Gets the value of LanguageCode.|
|const FString &|[GetLanguageCode](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a0ff0d1a37dbb3f09955f382fef8607e3)()|Gets the value of LanguageCode.|
|void|[SetLanguageCode](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1aef1ad0c375227658f87aa8dff199905d)(FString NewValue)|Sets the value of LanguageCode.|
|FString &|[GetDeviceId](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a99721c0a584f18326ec89bc1ff892f4b)()|Gets the value of DeviceId_Optional, regardless of it having been set.|
|const FString &|[GetDeviceId](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a0091f17eb436e8fd318aafd99c15b84f)()|Gets the value of DeviceId_Optional, regardless of it having been set.|
|const FString &|[GetDeviceId](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a4fb6a5815305678edf7d607236d9996c)(const FString & DefaultValue)|Gets the value of DeviceId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetDeviceId](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1ad6507176464a8d43dc4d033a2ed50c15)(FString & OutValue)|Fills OutValue with the value of DeviceId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetDeviceIdOrNull](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1ad2ba474615210b658b077aa89a80ccc3)()|Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetDeviceIdOrNull](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a4cb9b21ae9e0cde5d141057915f7e417)()|Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetDeviceId](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a8d83231e709256660cd11cb262191ea8)(FString NewValue)|Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true.|
|void|[ClearDeviceId](/unreal-plugins/all/structfrhapi__bodyfindopportunities/#structFRHAPI__BodyFindOpportunities_1a7188bb5fbcdd19a876c7928d7989d186)()|Clears the value of DeviceId_Optional and sets DeviceId_IsSet to false.|
## Public Attributes



### `ScreenPixelWidth_Optional` <a id="structFRHAPI__BodyFindOpportunities_1a2f24ade1385dc3a8b41426ad2bac08a1"></a>

`int32 FRHAPI_BodyFindOpportunities::ScreenPixelWidth_Optional`

Width of the screen in pixels.




### `ScreenPixelWidth_IsSet` <a id="structFRHAPI__BodyFindOpportunities_1a9187fe5415e2f1cea7c949e0ef45bb8a"></a>

`bool FRHAPI_BodyFindOpportunities::ScreenPixelWidth_IsSet`

true if ScreenPixelWidth_Optional has been set to a value




### `ScreenPixelHeight_Optional` <a id="structFRHAPI__BodyFindOpportunities_1a203a01830ae46eff931e59f8d14af089"></a>

`int32 FRHAPI_BodyFindOpportunities::ScreenPixelHeight_Optional`

Height of the screen in pixels.




### `ScreenPixelHeight_IsSet` <a id="structFRHAPI__BodyFindOpportunities_1a7e3d5e46c85439c7148a09d953b37691"></a>

`bool FRHAPI_BodyFindOpportunities::ScreenPixelHeight_IsSet`

true if ScreenPixelHeight_Optional has been set to a value




### `CountryCode` <a id="structFRHAPI__BodyFindOpportunities_1a7a792bb346c548d6b51ddfa97dbd4b7a"></a>

`FString FRHAPI_BodyFindOpportunities::CountryCode`

ISO 3166-1 alpha-2 country code for the user




### `LanguageCode` <a id="structFRHAPI__BodyFindOpportunities_1acda52cb7b0b82e80fa9f7726eb4923f0"></a>

`FString FRHAPI_BodyFindOpportunities::LanguageCode`

ISO 639-2 language code




### `DeviceId_Optional` <a id="structFRHAPI__BodyFindOpportunities_1aecddbe9ef61c93765612120f22d809cb"></a>

`FString FRHAPI_BodyFindOpportunities::DeviceId_Optional`

Unique Identifier for the device a session is started on. E.g should be the same for multiple users on the same device.




### `DeviceId_IsSet` <a id="structFRHAPI__BodyFindOpportunities_1a62d71d9c70891074895910f1cdbea6d2"></a>

`bool FRHAPI_BodyFindOpportunities::DeviceId_IsSet`

true if DeviceId_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__BodyFindOpportunities_1aeb49f34b2783c3d98f64a6f29765bced"></a>

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



### `WriteJson` <a id="structFRHAPI__BodyFindOpportunities_1ad9495a9e4dd6eb290b4497476cd27983"></a>

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



### `GetScreenPixelWidth` <a id="structFRHAPI__BodyFindOpportunities_1a8800010d4d58b46142fc581eecc44452"></a>

int32 & GetScreenPixelWidth()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ScreenPixelWidth_Optional, regardless of it having been set.




### `GetScreenPixelWidth` <a id="structFRHAPI__BodyFindOpportunities_1aefefa4eb30b57b14b9c33da8559aa7bf"></a>

const int32 & GetScreenPixelWidth()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ScreenPixelWidth_Optional, regardless of it having been set.




### `GetScreenPixelWidth` <a id="structFRHAPI__BodyFindOpportunities_1a5746301bb09b65f849326fbd2e3121b4"></a>

const int32 & GetScreenPixelWidth(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of ScreenPixelWidth_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetScreenPixelWidth` <a id="structFRHAPI__BodyFindOpportunities_1afcebe830ce5b9c7e39770fb0468f1e3d"></a>

bool GetScreenPixelWidth(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of ScreenPixelWidth_Optional and returns true if it has been set, otherwise returns false.




### `GetScreenPixelWidthOrNull` <a id="structFRHAPI__BodyFindOpportunities_1a8c9bc39b971859ddbeb80556492c0fc6"></a>

int32 * GetScreenPixelWidthOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ScreenPixelWidth_Optional, if it has been set, otherwise returns nullptr.




### `GetScreenPixelWidthOrNull` <a id="structFRHAPI__BodyFindOpportunities_1a74fed5f63eef8c9cd4a35f2b1f3a0631"></a>

const int32 * GetScreenPixelWidthOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ScreenPixelWidth_Optional, if it has been set, otherwise returns nullptr.




### `SetScreenPixelWidth` <a id="structFRHAPI__BodyFindOpportunities_1a89c2a76632b1a12919e52368a155ff06"></a>

void SetScreenPixelWidth(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of ScreenPixelWidth_Optional and also sets ScreenPixelWidth_IsSet to true.




### `ClearScreenPixelWidth` <a id="structFRHAPI__BodyFindOpportunities_1ae6663d32a01ee5dffa9d75a6132f95f2"></a>

void ClearScreenPixelWidth()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ScreenPixelWidth_Optional and sets ScreenPixelWidth_IsSet to false.




### `IsScreenPixelWidthDefaultValue` <a id="structFRHAPI__BodyFindOpportunities_1a2455bb9010c3861a19d196be1e8e764a"></a>

bool IsScreenPixelWidthDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if ScreenPixelWidth_Optional is set and matches the default value.




### `SetScreenPixelWidthToDefault` <a id="structFRHAPI__BodyFindOpportunities_1a77699235df89da355f3f899790addb3c"></a>

void SetScreenPixelWidthToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of ScreenPixelWidth_Optional to its default and also sets ScreenPixelWidth_IsSet to true.




### `GetScreenPixelHeight` <a id="structFRHAPI__BodyFindOpportunities_1a42bc8a43f564f849371215ae65ac87f4"></a>

int32 & GetScreenPixelHeight()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ScreenPixelHeight_Optional, regardless of it having been set.




### `GetScreenPixelHeight` <a id="structFRHAPI__BodyFindOpportunities_1a201d4dd5f694ab82dd95fc238c595801"></a>

const int32 & GetScreenPixelHeight()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ScreenPixelHeight_Optional, regardless of it having been set.




### `GetScreenPixelHeight` <a id="structFRHAPI__BodyFindOpportunities_1ac5d4b8d7731a89ae0ee33c8c24e49288"></a>

const int32 & GetScreenPixelHeight(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of ScreenPixelHeight_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetScreenPixelHeight` <a id="structFRHAPI__BodyFindOpportunities_1a89104b1d7b2c782fd8e6b7486e86f476"></a>

bool GetScreenPixelHeight(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of ScreenPixelHeight_Optional and returns true if it has been set, otherwise returns false.




### `GetScreenPixelHeightOrNull` <a id="structFRHAPI__BodyFindOpportunities_1a8831af1b2f1f4151aeafb4c3704d1cf6"></a>

int32 * GetScreenPixelHeightOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ScreenPixelHeight_Optional, if it has been set, otherwise returns nullptr.




### `GetScreenPixelHeightOrNull` <a id="structFRHAPI__BodyFindOpportunities_1a148e76eb5c80318d7bada5ccb17b0d83"></a>

const int32 * GetScreenPixelHeightOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ScreenPixelHeight_Optional, if it has been set, otherwise returns nullptr.




### `SetScreenPixelHeight` <a id="structFRHAPI__BodyFindOpportunities_1a9a6a83aa3791b0a72cafc1ea45a12891"></a>

void SetScreenPixelHeight(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of ScreenPixelHeight_Optional and also sets ScreenPixelHeight_IsSet to true.




### `ClearScreenPixelHeight` <a id="structFRHAPI__BodyFindOpportunities_1a048b38678d62f4814c85642a737c6509"></a>

void ClearScreenPixelHeight()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ScreenPixelHeight_Optional and sets ScreenPixelHeight_IsSet to false.




### `IsScreenPixelHeightDefaultValue` <a id="structFRHAPI__BodyFindOpportunities_1af1ff5fc6e6bd2f3fc32267299a693f1c"></a>

bool IsScreenPixelHeightDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if ScreenPixelHeight_Optional is set and matches the default value.




### `SetScreenPixelHeightToDefault` <a id="structFRHAPI__BodyFindOpportunities_1a0d93830a1d72571e005154ed1a7d3dfc"></a>

void SetScreenPixelHeightToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of ScreenPixelHeight_Optional to its default and also sets ScreenPixelHeight_IsSet to true.




### `GetCountryCode` <a id="structFRHAPI__BodyFindOpportunities_1a1ecbe536baf4fd61c4828d6ba39b65f1"></a>

FString & GetCountryCode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CountryCode.




### `GetCountryCode` <a id="structFRHAPI__BodyFindOpportunities_1a7eae910423db2956866ea4955f23a205"></a>

const FString & GetCountryCode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CountryCode.




### `SetCountryCode` <a id="structFRHAPI__BodyFindOpportunities_1ae85974c5d8491983860972669174b6a2"></a>

void SetCountryCode(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of CountryCode.




### `GetLanguageCode` <a id="structFRHAPI__BodyFindOpportunities_1a4d0b86e4faad731905c5db2a7ba9d213"></a>

FString & GetLanguageCode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LanguageCode.




### `GetLanguageCode` <a id="structFRHAPI__BodyFindOpportunities_1a0ff0d1a37dbb3f09955f382fef8607e3"></a>

const FString & GetLanguageCode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LanguageCode.




### `SetLanguageCode` <a id="structFRHAPI__BodyFindOpportunities_1aef1ad0c375227658f87aa8dff199905d"></a>

void SetLanguageCode(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of LanguageCode.




### `GetDeviceId` <a id="structFRHAPI__BodyFindOpportunities_1a99721c0a584f18326ec89bc1ff892f4b"></a>

FString & GetDeviceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DeviceId_Optional, regardless of it having been set.




### `GetDeviceId` <a id="structFRHAPI__BodyFindOpportunities_1a0091f17eb436e8fd318aafd99c15b84f"></a>

const FString & GetDeviceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DeviceId_Optional, regardless of it having been set.




### `GetDeviceId` <a id="structFRHAPI__BodyFindOpportunities_1a4fb6a5815305678edf7d607236d9996c"></a>

const FString & GetDeviceId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of DeviceId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetDeviceId` <a id="structFRHAPI__BodyFindOpportunities_1ad6507176464a8d43dc4d033a2ed50c15"></a>

bool GetDeviceId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of DeviceId_Optional and returns true if it has been set, otherwise returns false.




### `GetDeviceIdOrNull` <a id="structFRHAPI__BodyFindOpportunities_1ad2ba474615210b658b077aa89a80ccc3"></a>

FString * GetDeviceIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.




### `GetDeviceIdOrNull` <a id="structFRHAPI__BodyFindOpportunities_1a4cb9b21ae9e0cde5d141057915f7e417"></a>

const FString * GetDeviceIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.




### `SetDeviceId` <a id="structFRHAPI__BodyFindOpportunities_1a8d83231e709256660cd11cb262191ea8"></a>

void SetDeviceId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true.




### `ClearDeviceId` <a id="structFRHAPI__BodyFindOpportunities_1a7188bb5fbcdd19a876c7928d7989d186"></a>

void ClearDeviceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of DeviceId_Optional and sets DeviceId_IsSet to false.





