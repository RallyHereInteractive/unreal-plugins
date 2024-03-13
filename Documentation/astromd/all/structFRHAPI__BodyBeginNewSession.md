---
title: FRHAPI_BodyBeginNewSession Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)



## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[CountryCode](/unreal-plugins/all/structfrhapi__bodybeginnewsession/#structFRHAPI__BodyBeginNewSession_1a870690b3e6af31e45215bbdaa0127596)|ISO 3166-1 alpha-2 country code for the user|
|FString|[DeviceId_Optional](/unreal-plugins/all/structfrhapi__bodybeginnewsession/#structFRHAPI__BodyBeginNewSession_1afb3f92a8ebaa4b435f58d8a3e2f1cb6b)|Unique Identifier for the device a session is started on. E.g should be the same for multiple users on the same device.|
|bool|[DeviceId_IsSet](/unreal-plugins/all/structfrhapi__bodybeginnewsession/#structFRHAPI__BodyBeginNewSession_1a1ab96b1e204409126b40d416a87d4255)|true if DeviceId_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__bodybeginnewsession/#structFRHAPI__BodyBeginNewSession_1ad9fa67312817cbcb19ff67cb57f29efe)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__bodybeginnewsession/#structFRHAPI__BodyBeginNewSession_1a5d1dde9f77c7668e7b6719a96ef7b764)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetCountryCode](/unreal-plugins/all/structfrhapi__bodybeginnewsession/#structFRHAPI__BodyBeginNewSession_1a6389cd1eff5913dc8846897aa608bac7)()|Gets the value of CountryCode.|
|const FString &|[GetCountryCode](/unreal-plugins/all/structfrhapi__bodybeginnewsession/#structFRHAPI__BodyBeginNewSession_1a260f56c1f98a11fb15cee9782b9ed373)()|Gets the value of CountryCode.|
|void|[SetCountryCode](/unreal-plugins/all/structfrhapi__bodybeginnewsession/#structFRHAPI__BodyBeginNewSession_1a32cbcd75f9a37e01716b923702a5fced)(FString NewValue)|Sets the value of CountryCode.|
|FString &|[GetDeviceId](/unreal-plugins/all/structfrhapi__bodybeginnewsession/#structFRHAPI__BodyBeginNewSession_1a4eea2f2bd9d4bd859380833600c3f610)()|Gets the value of DeviceId_Optional, regardless of it having been set.|
|const FString &|[GetDeviceId](/unreal-plugins/all/structfrhapi__bodybeginnewsession/#structFRHAPI__BodyBeginNewSession_1ade2cd5930fe03039e294e42d436b4628)()|Gets the value of DeviceId_Optional, regardless of it having been set.|
|const FString &|[GetDeviceId](/unreal-plugins/all/structfrhapi__bodybeginnewsession/#structFRHAPI__BodyBeginNewSession_1a9620840815ec9c2ee834e1ca31d62dee)(const FString & DefaultValue)|Gets the value of DeviceId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetDeviceId](/unreal-plugins/all/structfrhapi__bodybeginnewsession/#structFRHAPI__BodyBeginNewSession_1a8ffe9a4c354f183c5372e80e8e957a29)(FString & OutValue)|Fills OutValue with the value of DeviceId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetDeviceIdOrNull](/unreal-plugins/all/structfrhapi__bodybeginnewsession/#structFRHAPI__BodyBeginNewSession_1a8b21a4a1672d0c12b008b5d389c522c3)()|Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetDeviceIdOrNull](/unreal-plugins/all/structfrhapi__bodybeginnewsession/#structFRHAPI__BodyBeginNewSession_1a891c220cbbdb6dc7a930f6ac7f64aa2e)()|Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetDeviceId](/unreal-plugins/all/structfrhapi__bodybeginnewsession/#structFRHAPI__BodyBeginNewSession_1a4a8a729f2efb24d2e09caefe6ba8e25f)(FString NewValue)|Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true.|
|void|[ClearDeviceId](/unreal-plugins/all/structfrhapi__bodybeginnewsession/#structFRHAPI__BodyBeginNewSession_1aae458d9179139e19b99c983ce6ba80c5)()|Clears the value of DeviceId_Optional and sets DeviceId_IsSet to false.|
## Public Attributes



### `CountryCode` <a id="structFRHAPI__BodyBeginNewSession_1a870690b3e6af31e45215bbdaa0127596"></a>

`FString FRHAPI_BodyBeginNewSession::CountryCode`

ISO 3166-1 alpha-2 country code for the user




### `DeviceId_Optional` <a id="structFRHAPI__BodyBeginNewSession_1afb3f92a8ebaa4b435f58d8a3e2f1cb6b"></a>

`FString FRHAPI_BodyBeginNewSession::DeviceId_Optional`

Unique Identifier for the device a session is started on. E.g should be the same for multiple users on the same device.




### `DeviceId_IsSet` <a id="structFRHAPI__BodyBeginNewSession_1a1ab96b1e204409126b40d416a87d4255"></a>

`bool FRHAPI_BodyBeginNewSession::DeviceId_IsSet`

true if DeviceId_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__BodyBeginNewSession_1ad9fa67312817cbcb19ff67cb57f29efe"></a>

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



### `WriteJson` <a id="structFRHAPI__BodyBeginNewSession_1a5d1dde9f77c7668e7b6719a96ef7b764"></a>

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



### `GetCountryCode` <a id="structFRHAPI__BodyBeginNewSession_1a6389cd1eff5913dc8846897aa608bac7"></a>

FString & GetCountryCode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CountryCode.




### `GetCountryCode` <a id="structFRHAPI__BodyBeginNewSession_1a260f56c1f98a11fb15cee9782b9ed373"></a>

const FString & GetCountryCode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CountryCode.




### `SetCountryCode` <a id="structFRHAPI__BodyBeginNewSession_1a32cbcd75f9a37e01716b923702a5fced"></a>

void SetCountryCode(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of CountryCode.




### `GetDeviceId` <a id="structFRHAPI__BodyBeginNewSession_1a4eea2f2bd9d4bd859380833600c3f610"></a>

FString & GetDeviceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DeviceId_Optional, regardless of it having been set.




### `GetDeviceId` <a id="structFRHAPI__BodyBeginNewSession_1ade2cd5930fe03039e294e42d436b4628"></a>

const FString & GetDeviceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DeviceId_Optional, regardless of it having been set.




### `GetDeviceId` <a id="structFRHAPI__BodyBeginNewSession_1a9620840815ec9c2ee834e1ca31d62dee"></a>

const FString & GetDeviceId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of DeviceId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetDeviceId` <a id="structFRHAPI__BodyBeginNewSession_1a8ffe9a4c354f183c5372e80e8e957a29"></a>

bool GetDeviceId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of DeviceId_Optional and returns true if it has been set, otherwise returns false.




### `GetDeviceIdOrNull` <a id="structFRHAPI__BodyBeginNewSession_1a8b21a4a1672d0c12b008b5d389c522c3"></a>

FString * GetDeviceIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.




### `GetDeviceIdOrNull` <a id="structFRHAPI__BodyBeginNewSession_1a891c220cbbdb6dc7a930f6ac7f64aa2e"></a>

const FString * GetDeviceIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.




### `SetDeviceId` <a id="structFRHAPI__BodyBeginNewSession_1a4a8a729f2efb24d2e09caefe6ba8e25f"></a>

void SetDeviceId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true.




### `ClearDeviceId` <a id="structFRHAPI__BodyBeginNewSession_1aae458d9179139e19b99c983ce6ba80c5"></a>

void ClearDeviceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of DeviceId_Optional and sets DeviceId_IsSet to false.





