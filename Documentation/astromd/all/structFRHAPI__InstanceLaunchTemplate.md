---
title: FRHAPI_InstanceLaunchTemplate Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

DEPRECATED Configuration about how an instance should behave when it&#39;s allocated

## Summary
| Kind | View | Description |
|------|------|-------------|
|FGuid|[InstanceLaunchTemplateId](/unreal-plugins/all/structfrhapi__instancelaunchtemplate/#structFRHAPI__InstanceLaunchTemplate_1affe64ae2fe44b0b1caf1d8c858c5615d)|ID to uniquely identify this instance launch template.|
|[FRHAPI_MapSelectionList](/unreal-plugins/all/structfrhapi__mapselectionlist/#structFRHAPI__MapSelectionList)|[MapSelectionList](/unreal-plugins/all/structfrhapi__instancelaunchtemplate/#structFRHAPI__InstanceLaunchTemplate_1af18bdd7b827122711991ea24f173fc3b)||
|ERHAPI_HostType|[DefaultHostType](/unreal-plugins/all/structfrhapi__instancelaunchtemplate/#structFRHAPI__InstanceLaunchTemplate_1a0b56b43efbfe4616f67e08338d568d47)|Default host type for this template. Can be overriden in instance requests.|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__instancelaunchtemplate/#structFRHAPI__InstanceLaunchTemplate_1a6bf36189794fec0d38e69a55b4135363)|Custom data that will be passed to the session during the instance launch request.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__instancelaunchtemplate/#structFRHAPI__InstanceLaunchTemplate_1a364303f0bb7d6d6f0e90eb75c41ac937)|true if CustomData_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__instancelaunchtemplate/#structFRHAPI__InstanceLaunchTemplate_1a9c24a5ea21de69f9bcd65c73f4d15559)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__instancelaunchtemplate/#structFRHAPI__InstanceLaunchTemplate_1ad2fe1ba96c85828d23d5122a7cd2ce95)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FGuid &|[GetInstanceLaunchTemplateId](/unreal-plugins/all/structfrhapi__instancelaunchtemplate/#structFRHAPI__InstanceLaunchTemplate_1a645feb373f0302fd43e3a4fded7a1d5d)()|Gets the value of InstanceLaunchTemplateId.|
|const FGuid &|[GetInstanceLaunchTemplateId](/unreal-plugins/all/structfrhapi__instancelaunchtemplate/#structFRHAPI__InstanceLaunchTemplate_1a0b3842d18f16d2c94079fe0c93910c9b)()|Gets the value of InstanceLaunchTemplateId.|
|void|[SetInstanceLaunchTemplateId](/unreal-plugins/all/structfrhapi__instancelaunchtemplate/#structFRHAPI__InstanceLaunchTemplate_1a6fbb92a72bec4b09af929bb6cfc558e7)(FGuid NewValue)|Sets the value of InstanceLaunchTemplateId.|
|[FRHAPI_MapSelectionList](/unreal-plugins/all/structfrhapi__mapselectionlist/#structFRHAPI__MapSelectionList) &|[GetMapSelectionList](/unreal-plugins/all/structfrhapi__instancelaunchtemplate/#structFRHAPI__InstanceLaunchTemplate_1a7550e10953986adf59b249efe55848e8)()|Gets the value of MapSelectionList.|
|const [FRHAPI_MapSelectionList](/unreal-plugins/all/structfrhapi__mapselectionlist/#structFRHAPI__MapSelectionList) &|[GetMapSelectionList](/unreal-plugins/all/structfrhapi__instancelaunchtemplate/#structFRHAPI__InstanceLaunchTemplate_1aa358f8b3bdfe50ab77dc10791c9cfc81)()|Gets the value of MapSelectionList.|
|void|[SetMapSelectionList](/unreal-plugins/all/structfrhapi__instancelaunchtemplate/#structFRHAPI__InstanceLaunchTemplate_1af7f9a8e490e1a024a14c0e988744e153)([FRHAPI_MapSelectionList](/unreal-plugins/all/structfrhapi__mapselectionlist/#structFRHAPI__MapSelectionList) NewValue)|Sets the value of MapSelectionList.|
|ERHAPI_HostType &|[GetDefaultHostType](/unreal-plugins/all/structfrhapi__instancelaunchtemplate/#structFRHAPI__InstanceLaunchTemplate_1a0b5d674190d7d7f9739caa2990c653cc)()|Gets the value of DefaultHostType.|
|const ERHAPI_HostType &|[GetDefaultHostType](/unreal-plugins/all/structfrhapi__instancelaunchtemplate/#structFRHAPI__InstanceLaunchTemplate_1af24572d24cc0ebacd287fed22c12ee89)()|Gets the value of DefaultHostType.|
|void|[SetDefaultHostType](/unreal-plugins/all/structfrhapi__instancelaunchtemplate/#structFRHAPI__InstanceLaunchTemplate_1ac7fce40f23fa5537211a45d747983bab)(ERHAPI_HostType NewValue)|Sets the value of DefaultHostType.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__instancelaunchtemplate/#structFRHAPI__InstanceLaunchTemplate_1a79ceedb163febc7aa6f5608a21ddd929)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__instancelaunchtemplate/#structFRHAPI__InstanceLaunchTemplate_1a8902d8a407b6707dddf0fdd0aded5da3)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__instancelaunchtemplate/#structFRHAPI__InstanceLaunchTemplate_1ab08920d63cadb78bf49330841095f287)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__instancelaunchtemplate/#structFRHAPI__InstanceLaunchTemplate_1a2c4b1a89f7008b6a896f0b698ad16ec4)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__instancelaunchtemplate/#structFRHAPI__InstanceLaunchTemplate_1a0e5ae9617c084f743fa5b6df295d45b7)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__instancelaunchtemplate/#structFRHAPI__InstanceLaunchTemplate_1a7861e6b2e56afe863cb1abe6fc848277)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__instancelaunchtemplate/#structFRHAPI__InstanceLaunchTemplate_1ad2e928208d7823bc216ce2c49a6c1b99)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__instancelaunchtemplate/#structFRHAPI__InstanceLaunchTemplate_1accf875216c04898f0a996ce52e838833)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
## Public Attributes



### `InstanceLaunchTemplateId` <a id="structFRHAPI__InstanceLaunchTemplate_1affe64ae2fe44b0b1caf1d8c858c5615d"></a>

`FGuid FRHAPI_InstanceLaunchTemplate::InstanceLaunchTemplateId`

ID to uniquely identify this instance launch template.




### `MapSelectionList` <a id="structFRHAPI__InstanceLaunchTemplate_1af18bdd7b827122711991ea24f173fc3b"></a>

`FRHAPI_MapSelectionList FRHAPI_InstanceLaunchTemplate::MapSelectionList`






### `DefaultHostType` <a id="structFRHAPI__InstanceLaunchTemplate_1a0b56b43efbfe4616f67e08338d568d47"></a>

`ERHAPI_HostType FRHAPI_InstanceLaunchTemplate::DefaultHostType`

Default host type for this template. Can be overriden in instance requests.




### `CustomData_Optional` <a id="structFRHAPI__InstanceLaunchTemplate_1a6bf36189794fec0d38e69a55b4135363"></a>

`TMap<FString, FString> FRHAPI_InstanceLaunchTemplate::CustomData_Optional`

Custom data that will be passed to the session during the instance launch request.




### `CustomData_IsSet` <a id="structFRHAPI__InstanceLaunchTemplate_1a364303f0bb7d6d6f0e90eb75c41ac937"></a>

`bool FRHAPI_InstanceLaunchTemplate::CustomData_IsSet`

true if CustomData_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__InstanceLaunchTemplate_1a9c24a5ea21de69f9bcd65c73f4d15559"></a>

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



### `WriteJson` <a id="structFRHAPI__InstanceLaunchTemplate_1ad2fe1ba96c85828d23d5122a7cd2ce95"></a>

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



### `GetInstanceLaunchTemplateId` <a id="structFRHAPI__InstanceLaunchTemplate_1a645feb373f0302fd43e3a4fded7a1d5d"></a>

FGuid & GetInstanceLaunchTemplateId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceLaunchTemplateId.




### `GetInstanceLaunchTemplateId` <a id="structFRHAPI__InstanceLaunchTemplate_1a0b3842d18f16d2c94079fe0c93910c9b"></a>

const FGuid & GetInstanceLaunchTemplateId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceLaunchTemplateId.




### `SetInstanceLaunchTemplateId` <a id="structFRHAPI__InstanceLaunchTemplate_1a6fbb92a72bec4b09af929bb6cfc558e7"></a>

void SetInstanceLaunchTemplateId(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of InstanceLaunchTemplateId.




### `GetMapSelectionList` <a id="structFRHAPI__InstanceLaunchTemplate_1a7550e10953986adf59b249efe55848e8"></a>

[FRHAPI_MapSelectionList](/unreal-plugins/all/structfrhapi__mapselectionlist/#structFRHAPI__MapSelectionList) & GetMapSelectionList()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MapSelectionList.




### `GetMapSelectionList` <a id="structFRHAPI__InstanceLaunchTemplate_1aa358f8b3bdfe50ab77dc10791c9cfc81"></a>

const [FRHAPI_MapSelectionList](/unreal-plugins/all/structfrhapi__mapselectionlist/#structFRHAPI__MapSelectionList) & GetMapSelectionList()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MapSelectionList.




### `SetMapSelectionList` <a id="structFRHAPI__InstanceLaunchTemplate_1af7f9a8e490e1a024a14c0e988744e153"></a>

void SetMapSelectionList([FRHAPI_MapSelectionList](/unreal-plugins/all/structfrhapi__mapselectionlist/#structFRHAPI__MapSelectionList) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_MapSelectionList](/unreal-plugins/all/structfrhapi__mapselectionlist/#structFRHAPI__MapSelectionList)|NewValue|

#### Description

Sets the value of MapSelectionList.




### `GetDefaultHostType` <a id="structFRHAPI__InstanceLaunchTemplate_1a0b5d674190d7d7f9739caa2990c653cc"></a>

ERHAPI_HostType & GetDefaultHostType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DefaultHostType.




### `GetDefaultHostType` <a id="structFRHAPI__InstanceLaunchTemplate_1af24572d24cc0ebacd287fed22c12ee89"></a>

const ERHAPI_HostType & GetDefaultHostType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DefaultHostType.




### `SetDefaultHostType` <a id="structFRHAPI__InstanceLaunchTemplate_1ac7fce40f23fa5537211a45d747983bab"></a>

void SetDefaultHostType(ERHAPI_HostType NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_HostType|NewValue|

#### Description

Sets the value of DefaultHostType.




### `GetCustomData` <a id="structFRHAPI__InstanceLaunchTemplate_1a79ceedb163febc7aa6f5608a21ddd929"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__InstanceLaunchTemplate_1a8902d8a407b6707dddf0fdd0aded5da3"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__InstanceLaunchTemplate_1ab08920d63cadb78bf49330841095f287"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__InstanceLaunchTemplate_1a2c4b1a89f7008b6a896f0b698ad16ec4"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__InstanceLaunchTemplate_1a0e5ae9617c084f743fa5b6df295d45b7"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__InstanceLaunchTemplate_1a7861e6b2e56afe863cb1abe6fc848277"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__InstanceLaunchTemplate_1ad2e928208d7823bc216ce2c49a6c1b99"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__InstanceLaunchTemplate_1accf875216c04898f0a996ce52e838833"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.





