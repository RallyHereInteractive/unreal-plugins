---
title: FRHAPI_InstanceRequestTemplate Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Configuration about how an instance should behave when it&#39;s allocated.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FGuid|[InstanceRequestTemplateId](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate_1af5b45933ea6a680723d746ad01d20a6f)|ID to uniquely identify this instance launch template.|
|[FRHAPI_MapSelectionListV2](/unreal-plugins/all/structfrhapi__mapselectionlistv2/#structFRHAPI__MapSelectionListV2)|[MapSelectionList](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate_1a4ef0b1d2d12365b73ba57d3f17028cd1)||
|ERHAPI_HostType|[DefaultHostType](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate_1a5ba4b7d3a1cae608a8bcbc1d47e13874)|Default host type for this template. Can be overriden in instance requests.|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate_1ae5ca6a7369d28296f09fa18d94db571a)|Custom data that will be passed to the session during the instance launch request.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate_1a64805530c4189001f0d28d7e6aef6d56)|true if CustomData_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate_1a942edc53656677290b7336c76a41360f)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate_1a9d8e6599d189f3eabd67e12faa8322d4)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FGuid &|[GetInstanceRequestTemplateId](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate_1aacb4d163e889b32ad05a90a0c405bd75)()|Gets the value of InstanceRequestTemplateId.|
|const FGuid &|[GetInstanceRequestTemplateId](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate_1a0c23e7ad0bf3901d8d9b53bfda7a9696)()|Gets the value of InstanceRequestTemplateId.|
|void|[SetInstanceRequestTemplateId](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate_1a3736be91713ef2e0001137d5dbc8437a)(FGuid NewValue)|Sets the value of InstanceRequestTemplateId.|
|[FRHAPI_MapSelectionListV2](/unreal-plugins/all/structfrhapi__mapselectionlistv2/#structFRHAPI__MapSelectionListV2) &|[GetMapSelectionList](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate_1a94e8e368c26b057c8609ee8b8a2280e3)()|Gets the value of MapSelectionList.|
|const [FRHAPI_MapSelectionListV2](/unreal-plugins/all/structfrhapi__mapselectionlistv2/#structFRHAPI__MapSelectionListV2) &|[GetMapSelectionList](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate_1ad51b5d3d03e160c9ef83ce829aaaa3cc)()|Gets the value of MapSelectionList.|
|void|[SetMapSelectionList](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate_1a0e29c44f08aca64d88db0f21321002e4)([FRHAPI_MapSelectionListV2](/unreal-plugins/all/structfrhapi__mapselectionlistv2/#structFRHAPI__MapSelectionListV2) NewValue)|Sets the value of MapSelectionList.|
|ERHAPI_HostType &|[GetDefaultHostType](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate_1a72bb00a45fa50d72d01479adc7d27506)()|Gets the value of DefaultHostType.|
|const ERHAPI_HostType &|[GetDefaultHostType](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate_1a3860adb1ea4174d7abf5f11a62252457)()|Gets the value of DefaultHostType.|
|void|[SetDefaultHostType](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate_1a554926e81ec8fbfb0ca96ce6847434f9)(ERHAPI_HostType NewValue)|Sets the value of DefaultHostType.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate_1a79d0d4293fa8d90635ee3c31a319982e)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate_1a56d73bcd0efe05daf0de38bde5fc8de9)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate_1a4ffff34289210075aee9f8d1d918ebed)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate_1a4914983281b865b273142afa4b3f6ab4)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate_1ad5ef053599f206f032395de929b55e2c)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate_1afa5b06288870d3774750cc8582d4d890)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate_1a8ba17a4f39fba30164264a41fb3bfe6f)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate_1ac216c36da42fc221390416e2cd8cb2d1)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
## Public Attributes



### `InstanceRequestTemplateId` <a id="structFRHAPI__InstanceRequestTemplate_1af5b45933ea6a680723d746ad01d20a6f"></a>

`FGuid FRHAPI_InstanceRequestTemplate::InstanceRequestTemplateId`

ID to uniquely identify this instance launch template.




### `MapSelectionList` <a id="structFRHAPI__InstanceRequestTemplate_1a4ef0b1d2d12365b73ba57d3f17028cd1"></a>

`FRHAPI_MapSelectionListV2 FRHAPI_InstanceRequestTemplate::MapSelectionList`






### `DefaultHostType` <a id="structFRHAPI__InstanceRequestTemplate_1a5ba4b7d3a1cae608a8bcbc1d47e13874"></a>

`ERHAPI_HostType FRHAPI_InstanceRequestTemplate::DefaultHostType`

Default host type for this template. Can be overriden in instance requests.




### `CustomData_Optional` <a id="structFRHAPI__InstanceRequestTemplate_1ae5ca6a7369d28296f09fa18d94db571a"></a>

`TMap<FString, FString> FRHAPI_InstanceRequestTemplate::CustomData_Optional`

Custom data that will be passed to the session during the instance launch request.




### `CustomData_IsSet` <a id="structFRHAPI__InstanceRequestTemplate_1a64805530c4189001f0d28d7e6aef6d56"></a>

`bool FRHAPI_InstanceRequestTemplate::CustomData_IsSet`

true if CustomData_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__InstanceRequestTemplate_1a942edc53656677290b7336c76a41360f"></a>

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



### `WriteJson` <a id="structFRHAPI__InstanceRequestTemplate_1a9d8e6599d189f3eabd67e12faa8322d4"></a>

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



### `GetInstanceRequestTemplateId` <a id="structFRHAPI__InstanceRequestTemplate_1aacb4d163e889b32ad05a90a0c405bd75"></a>

FGuid & GetInstanceRequestTemplateId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceRequestTemplateId.




### `GetInstanceRequestTemplateId` <a id="structFRHAPI__InstanceRequestTemplate_1a0c23e7ad0bf3901d8d9b53bfda7a9696"></a>

const FGuid & GetInstanceRequestTemplateId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceRequestTemplateId.




### `SetInstanceRequestTemplateId` <a id="structFRHAPI__InstanceRequestTemplate_1a3736be91713ef2e0001137d5dbc8437a"></a>

void SetInstanceRequestTemplateId(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of InstanceRequestTemplateId.




### `GetMapSelectionList` <a id="structFRHAPI__InstanceRequestTemplate_1a94e8e368c26b057c8609ee8b8a2280e3"></a>

[FRHAPI_MapSelectionListV2](/unreal-plugins/all/structfrhapi__mapselectionlistv2/#structFRHAPI__MapSelectionListV2) & GetMapSelectionList()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MapSelectionList.




### `GetMapSelectionList` <a id="structFRHAPI__InstanceRequestTemplate_1ad51b5d3d03e160c9ef83ce829aaaa3cc"></a>

const [FRHAPI_MapSelectionListV2](/unreal-plugins/all/structfrhapi__mapselectionlistv2/#structFRHAPI__MapSelectionListV2) & GetMapSelectionList()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MapSelectionList.




### `SetMapSelectionList` <a id="structFRHAPI__InstanceRequestTemplate_1a0e29c44f08aca64d88db0f21321002e4"></a>

void SetMapSelectionList([FRHAPI_MapSelectionListV2](/unreal-plugins/all/structfrhapi__mapselectionlistv2/#structFRHAPI__MapSelectionListV2) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_MapSelectionListV2](/unreal-plugins/all/structfrhapi__mapselectionlistv2/#structFRHAPI__MapSelectionListV2)|NewValue|

#### Description

Sets the value of MapSelectionList.




### `GetDefaultHostType` <a id="structFRHAPI__InstanceRequestTemplate_1a72bb00a45fa50d72d01479adc7d27506"></a>

ERHAPI_HostType & GetDefaultHostType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DefaultHostType.




### `GetDefaultHostType` <a id="structFRHAPI__InstanceRequestTemplate_1a3860adb1ea4174d7abf5f11a62252457"></a>

const ERHAPI_HostType & GetDefaultHostType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DefaultHostType.




### `SetDefaultHostType` <a id="structFRHAPI__InstanceRequestTemplate_1a554926e81ec8fbfb0ca96ce6847434f9"></a>

void SetDefaultHostType(ERHAPI_HostType NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_HostType|NewValue|

#### Description

Sets the value of DefaultHostType.




### `GetCustomData` <a id="structFRHAPI__InstanceRequestTemplate_1a79d0d4293fa8d90635ee3c31a319982e"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__InstanceRequestTemplate_1a56d73bcd0efe05daf0de38bde5fc8de9"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__InstanceRequestTemplate_1a4ffff34289210075aee9f8d1d918ebed"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__InstanceRequestTemplate_1a4914983281b865b273142afa4b3f6ab4"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__InstanceRequestTemplate_1ad5ef053599f206f032395de929b55e2c"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__InstanceRequestTemplate_1afa5b06288870d3774750cc8582d4d890"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__InstanceRequestTemplate_1a8ba17a4f39fba30164264a41fb3bfe6f"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__InstanceRequestTemplate_1ac216c36da42fc221390416e2cd8cb2d1"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.





