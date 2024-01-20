---
title: FRHAPI_ClientSettings Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A player&#39;s platform and input settings.

## Summary
| Kind | View | Description |
|------|------|-------------|
|ERHAPI_PlatformID|[PlatformId_Optional](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings_1ae9ccc7ffd86f7cb177884eabb4102e60)|DEPRECATED. Use 'platform' instead. Id for which platform this client is on. ID will be ignored if 'platform' is given. At least one of the two is required.|
|bool|[PlatformId_IsSet](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings_1a5abccc6e19a15830bf7a25bc0fef7c3e)|true if PlatformId_Optional has been set to a value|
|ERHAPI_Platform|[Platform_Optional](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings_1a3cda3757a464c85429c807e30aafb5c9)|Which platform this client is on. If one is not provided, will get the platform from the 'platform_id'. At least one of the two is required.|
|bool|[Platform_IsSet](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings_1a431c764ade30fe22fdaed9059dffbfa4)|true if Platform_Optional has been set to a value|
|ERHAPI_Input|[Input](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings_1a7bcfb29cf8b0184e366256a614f39278)|Which input type this client is using.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings_1a977191512b6cdb35ac99d27caced9a04)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings_1a449d091dfaae56c597c68b4913674984)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|ERHAPI_PlatformID &|[GetPlatformId](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings_1ababdad725c89a53c60af202e4390d584)()|Gets the value of PlatformId_Optional, regardless of it having been set.|
|const ERHAPI_PlatformID &|[GetPlatformId](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings_1ae7eed8a38479ae108c355641582b0a55)()|Gets the value of PlatformId_Optional, regardless of it having been set.|
|const ERHAPI_PlatformID &|[GetPlatformId](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings_1acdebe91f0e01ccac31a4eb29e67ac278)(const ERHAPI_PlatformID & DefaultValue)|Gets the value of PlatformId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPlatformId](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings_1a98dc74d68ee137b3a4da707fe1188af8)(ERHAPI_PlatformID & OutValue)|Fills OutValue with the value of PlatformId_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_PlatformID *|[GetPlatformIdOrNull](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings_1a682c548a788d96fb81260c49f9ff7887)()|Returns a pointer to PlatformId_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_PlatformID *|[GetPlatformIdOrNull](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings_1a15bc6ad8edead108914e572d428ae6d3)()|Returns a pointer to PlatformId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPlatformId](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings_1a84bba5025f11d7723e4caf241e864534)(ERHAPI_PlatformID NewValue)|Sets the value of PlatformId_Optional and also sets PlatformId_IsSet to true.|
|void|[ClearPlatformId](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings_1a664e3f1014412b0595ccc0af264539d8)()|Clears the value of PlatformId_Optional and sets PlatformId_IsSet to false.|
|ERHAPI_Platform &|[GetPlatform](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings_1aae02bf1e6b936d62341704c89dc12234)()|Gets the value of Platform_Optional, regardless of it having been set.|
|const ERHAPI_Platform &|[GetPlatform](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings_1aada5b2c1fd356a1896e31a81dfbf86cb)()|Gets the value of Platform_Optional, regardless of it having been set.|
|const ERHAPI_Platform &|[GetPlatform](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings_1a87db38bba214f5f0bfd4cebdb5399de3)(const ERHAPI_Platform & DefaultValue)|Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPlatform](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings_1ae4527cd8e88b306dd13587b3b821d925)(ERHAPI_Platform & OutValue)|Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_Platform *|[GetPlatformOrNull](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings_1afe0cf4cde1a6e9f19aa7bdc435cf6596)()|Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_Platform *|[GetPlatformOrNull](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings_1a380ae371c54cb209f3f0286482b43408)()|Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPlatform](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings_1acfe62e00fa7df9c3fd613b5abd60b13c)(ERHAPI_Platform NewValue)|Sets the value of Platform_Optional and also sets Platform_IsSet to true.|
|void|[ClearPlatform](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings_1ac631d7b1d552180893eee6278baca67d)()|Clears the value of Platform_Optional and sets Platform_IsSet to false.|
|ERHAPI_Input &|[GetInput](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings_1a93d46c212f51efcac6bc6a56655367ce)()|Gets the value of Input.|
|const ERHAPI_Input &|[GetInput](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings_1a987756f572f84cc101ec31fef828a1b9)()|Gets the value of Input.|
|void|[SetInput](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings_1aa5ac02634804e12780258a45e97e2d33)(ERHAPI_Input NewValue)|Sets the value of Input.|
## Public Attributes



### `PlatformId_Optional` <a id="structFRHAPI__ClientSettings_1ae9ccc7ffd86f7cb177884eabb4102e60"></a>

`ERHAPI_PlatformID FRHAPI_ClientSettings::PlatformId_Optional`

DEPRECATED. Use 'platform' instead. Id for which platform this client is on. ID will be ignored if 'platform' is given. At least one of the two is required.




### `PlatformId_IsSet` <a id="structFRHAPI__ClientSettings_1a5abccc6e19a15830bf7a25bc0fef7c3e"></a>

`bool FRHAPI_ClientSettings::PlatformId_IsSet`

true if PlatformId_Optional has been set to a value




### `Platform_Optional` <a id="structFRHAPI__ClientSettings_1a3cda3757a464c85429c807e30aafb5c9"></a>

`ERHAPI_Platform FRHAPI_ClientSettings::Platform_Optional`

Which platform this client is on. If one is not provided, will get the platform from the 'platform_id'. At least one of the two is required.




### `Platform_IsSet` <a id="structFRHAPI__ClientSettings_1a431c764ade30fe22fdaed9059dffbfa4"></a>

`bool FRHAPI_ClientSettings::Platform_IsSet`

true if Platform_Optional has been set to a value




### `Input` <a id="structFRHAPI__ClientSettings_1a7bcfb29cf8b0184e366256a614f39278"></a>

`ERHAPI_Input FRHAPI_ClientSettings::Input`

Which input type this client is using.





## Public Functions



### `FromJson` <a id="structFRHAPI__ClientSettings_1a977191512b6cdb35ac99d27caced9a04"></a>

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



### `WriteJson` <a id="structFRHAPI__ClientSettings_1a449d091dfaae56c597c68b4913674984"></a>

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



### `GetPlatformId` <a id="structFRHAPI__ClientSettings_1ababdad725c89a53c60af202e4390d584"></a>

ERHAPI_PlatformID & GetPlatformId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformId_Optional, regardless of it having been set.




### `GetPlatformId` <a id="structFRHAPI__ClientSettings_1ae7eed8a38479ae108c355641582b0a55"></a>

const ERHAPI_PlatformID & GetPlatformId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformId_Optional, regardless of it having been set.




### `GetPlatformId` <a id="structFRHAPI__ClientSettings_1acdebe91f0e01ccac31a4eb29e67ac278"></a>

const ERHAPI_PlatformID & GetPlatformId(const ERHAPI_PlatformID & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_PlatformID &|DefaultValue|

#### Description

Gets the value of PlatformId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPlatformId` <a id="structFRHAPI__ClientSettings_1a98dc74d68ee137b3a4da707fe1188af8"></a>

bool GetPlatformId(ERHAPI_PlatformID & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_PlatformID &|OutValue|

#### Description

Fills OutValue with the value of PlatformId_Optional and returns true if it has been set, otherwise returns false.




### `GetPlatformIdOrNull` <a id="structFRHAPI__ClientSettings_1a682c548a788d96fb81260c49f9ff7887"></a>

ERHAPI_PlatformID * GetPlatformIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PlatformId_Optional, if it has been set, otherwise returns nullptr.




### `GetPlatformIdOrNull` <a id="structFRHAPI__ClientSettings_1a15bc6ad8edead108914e572d428ae6d3"></a>

const ERHAPI_PlatformID * GetPlatformIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PlatformId_Optional, if it has been set, otherwise returns nullptr.




### `SetPlatformId` <a id="structFRHAPI__ClientSettings_1a84bba5025f11d7723e4caf241e864534"></a>

void SetPlatformId(ERHAPI_PlatformID NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_PlatformID|NewValue|

#### Description

Sets the value of PlatformId_Optional and also sets PlatformId_IsSet to true.




### `ClearPlatformId` <a id="structFRHAPI__ClientSettings_1a664e3f1014412b0595ccc0af264539d8"></a>

void ClearPlatformId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PlatformId_Optional and sets PlatformId_IsSet to false.




### `GetPlatform` <a id="structFRHAPI__ClientSettings_1aae02bf1e6b936d62341704c89dc12234"></a>

ERHAPI_Platform & GetPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Platform_Optional, regardless of it having been set.




### `GetPlatform` <a id="structFRHAPI__ClientSettings_1aada5b2c1fd356a1896e31a81dfbf86cb"></a>

const ERHAPI_Platform & GetPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Platform_Optional, regardless of it having been set.




### `GetPlatform` <a id="structFRHAPI__ClientSettings_1a87db38bba214f5f0bfd4cebdb5399de3"></a>

const ERHAPI_Platform & GetPlatform(const ERHAPI_Platform & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_Platform &|DefaultValue|

#### Description

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPlatform` <a id="structFRHAPI__ClientSettings_1ae4527cd8e88b306dd13587b3b821d925"></a>

bool GetPlatform(ERHAPI_Platform & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Platform &|OutValue|

#### Description

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.




### `GetPlatformOrNull` <a id="structFRHAPI__ClientSettings_1afe0cf4cde1a6e9f19aa7bdc435cf6596"></a>

ERHAPI_Platform * GetPlatformOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.




### `GetPlatformOrNull` <a id="structFRHAPI__ClientSettings_1a380ae371c54cb209f3f0286482b43408"></a>

const ERHAPI_Platform * GetPlatformOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.




### `SetPlatform` <a id="structFRHAPI__ClientSettings_1acfe62e00fa7df9c3fd613b5abd60b13c"></a>

void SetPlatform(ERHAPI_Platform NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Platform|NewValue|

#### Description

Sets the value of Platform_Optional and also sets Platform_IsSet to true.




### `ClearPlatform` <a id="structFRHAPI__ClientSettings_1ac631d7b1d552180893eee6278baca67d"></a>

void ClearPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Platform_Optional and sets Platform_IsSet to false.




### `GetInput` <a id="structFRHAPI__ClientSettings_1a93d46c212f51efcac6bc6a56655367ce"></a>

ERHAPI_Input & GetInput()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Input.




### `GetInput` <a id="structFRHAPI__ClientSettings_1a987756f572f84cc101ec31fef828a1b9"></a>

const ERHAPI_Input & GetInput()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Input.




### `SetInput` <a id="structFRHAPI__ClientSettings_1aa5ac02634804e12780258a45e97e2d33"></a>

void SetInput(ERHAPI_Input NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Input|NewValue|

#### Description

Sets the value of Input.





