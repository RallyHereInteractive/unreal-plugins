---
title: FRHAPI_QueueConfigV2 Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

V2 Configuration about a specific queue.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[QueueId](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1a8b7df88e8e7e78f9829f996390f23c0c)|ID to uniquely identify this queue.|
|bool|[Active](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1ac1f81b437fcc3cde8dee5c8e2493d592)|Flag for whether or not the queue is active, and can be joined or sessions created from it.|
|int32|[MaxQueueGroupSize](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1ab9652b284e9f5428cbbb2ea1a908224d)|The maximum size of a group that can join this queue.|
|FGuid|[MatchMakingTemplateGroupId](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1a0be73f8340379fb7cad237a4cf682a2b)|ID for which group of matchmaking templates/rules will be used when joining this queue.|
|TMap< FString, FString >|[LegacyConfig_Optional](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1a68defea48ff0db94ca1a0d1c28250829)|Legacy config to help migrate clients.|
|bool|[LegacyConfig_IsSet](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1aac347be9c34c03117f2c1344f07ca866)|true if LegacyConfig_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1a90b446ffa432578bc73a8248875e6010)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1a34acb7a643e2e343eacf912ea28cc299)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetQueueId](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1a66ed08c8e5871935d948f10cacd0e092)()|Gets the value of QueueId.|
|const FString &|[GetQueueId](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1afc533f57a12dc6a1cdfd1076c0ca1552)()|Gets the value of QueueId.|
|void|[SetQueueId](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1a770a5be3e3a29ce6526f41b728449b4b)(FString NewValue)|Sets the value of QueueId.|
|bool &|[GetActive](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1acef0a66bd9a7a9ad2c436030bf698c97)()|Gets the value of Active.|
|const bool &|[GetActive](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1a23adb73da6785558ef52f1c12ed0b990)()|Gets the value of Active.|
|void|[SetActive](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1a8a757e6b480d7f508b5cd9ae2ca3c973)(bool NewValue)|Sets the value of Active.|
|bool|[IsActiveDefaultValue](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1ad1505f8a82af3ca1e78b9c8f9a9808f7)()|Returns true if Active matches the default value.|
|void|[SetActiveToDefault](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1afc8df59addb91e29a9f9f21e5f84c622)()|Sets the value of Active to its default|
|int32 &|[GetMaxQueueGroupSize](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1a57fb19b4db73b65db613b35bf3f0a6b8)()|Gets the value of MaxQueueGroupSize.|
|const int32 &|[GetMaxQueueGroupSize](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1ab29a330844c3db8cabe0d19cf6b80f2f)()|Gets the value of MaxQueueGroupSize.|
|void|[SetMaxQueueGroupSize](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1a89f036294b3f75b8454224187d192fa8)(int32 NewValue)|Sets the value of MaxQueueGroupSize.|
|bool|[IsMaxQueueGroupSizeDefaultValue](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1afb1913203d4e56acec07a73e80bfee1b)()|Returns true if MaxQueueGroupSize matches the default value.|
|void|[SetMaxQueueGroupSizeToDefault](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1a96fe278b7a631da8c2cfef3a7e210429)()|Sets the value of MaxQueueGroupSize to its default|
|FGuid &|[GetMatchMakingTemplateGroupId](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1a32d5584d855ac42043e46812ff1992cd)()|Gets the value of MatchMakingTemplateGroupId.|
|const FGuid &|[GetMatchMakingTemplateGroupId](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1a6ec1b9f5c903114dd3b8613a7eb57777)()|Gets the value of MatchMakingTemplateGroupId.|
|void|[SetMatchMakingTemplateGroupId](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1affcb2eb1bc675c907b509ce9e499366b)(FGuid NewValue)|Sets the value of MatchMakingTemplateGroupId.|
|TMap< FString, FString > &|[GetLegacyConfig](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1af66c525d8db6c403a4f8a1af5b712d1c)()|Gets the value of LegacyConfig_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetLegacyConfig](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1af765aa0a081f198ae0880e52fcb9a04b)()|Gets the value of LegacyConfig_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetLegacyConfig](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1a13c7b8c96a7b247a0810c404744dea56)(const TMap< FString, FString > & DefaultValue)|Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetLegacyConfig](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1aec1c4b98d29ae9984b29fa4c37b785a2)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetLegacyConfigOrNull](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1aac6b5e86780317e9dff3b294ba0f825c)()|Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetLegacyConfigOrNull](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1abf731448f02c7b0aa22fbfd9a12ac841)()|Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetLegacyConfig](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1a65ea9aee6bf74c93a8733fed52f62670)(TMap< FString, FString > NewValue)|Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true.|
|void|[ClearLegacyConfig](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2_1a704de45777e119ee8c297892b3bfdc32)()|Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false.|
## Public Attributes



### `QueueId` <a id="structFRHAPI__QueueConfigV2_1a8b7df88e8e7e78f9829f996390f23c0c"></a>

`FString FRHAPI_QueueConfigV2::QueueId`

ID to uniquely identify this queue.




### `Active` <a id="structFRHAPI__QueueConfigV2_1ac1f81b437fcc3cde8dee5c8e2493d592"></a>

`bool FRHAPI_QueueConfigV2::Active`

Flag for whether or not the queue is active, and can be joined or sessions created from it.




### `MaxQueueGroupSize` <a id="structFRHAPI__QueueConfigV2_1ab9652b284e9f5428cbbb2ea1a908224d"></a>

`int32 FRHAPI_QueueConfigV2::MaxQueueGroupSize`

The maximum size of a group that can join this queue.




### `MatchMakingTemplateGroupId` <a id="structFRHAPI__QueueConfigV2_1a0be73f8340379fb7cad237a4cf682a2b"></a>

`FGuid FRHAPI_QueueConfigV2::MatchMakingTemplateGroupId`

ID for which group of matchmaking templates/rules will be used when joining this queue.




### `LegacyConfig_Optional` <a id="structFRHAPI__QueueConfigV2_1a68defea48ff0db94ca1a0d1c28250829"></a>

`TMap<FString, FString> FRHAPI_QueueConfigV2::LegacyConfig_Optional`

Legacy config to help migrate clients.




### `LegacyConfig_IsSet` <a id="structFRHAPI__QueueConfigV2_1aac347be9c34c03117f2c1344f07ca866"></a>

`bool FRHAPI_QueueConfigV2::LegacyConfig_IsSet`

true if LegacyConfig_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__QueueConfigV2_1a90b446ffa432578bc73a8248875e6010"></a>

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



### `WriteJson` <a id="structFRHAPI__QueueConfigV2_1a34acb7a643e2e343eacf912ea28cc299"></a>

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



### `GetQueueId` <a id="structFRHAPI__QueueConfigV2_1a66ed08c8e5871935d948f10cacd0e092"></a>

FString & GetQueueId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of QueueId.




### `GetQueueId` <a id="structFRHAPI__QueueConfigV2_1afc533f57a12dc6a1cdfd1076c0ca1552"></a>

const FString & GetQueueId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of QueueId.




### `SetQueueId` <a id="structFRHAPI__QueueConfigV2_1a770a5be3e3a29ce6526f41b728449b4b"></a>

void SetQueueId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of QueueId.




### `GetActive` <a id="structFRHAPI__QueueConfigV2_1acef0a66bd9a7a9ad2c436030bf698c97"></a>

bool & GetActive()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Active.




### `GetActive` <a id="structFRHAPI__QueueConfigV2_1a23adb73da6785558ef52f1c12ed0b990"></a>

const bool & GetActive()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Active.




### `SetActive` <a id="structFRHAPI__QueueConfigV2_1a8a757e6b480d7f508b5cd9ae2ca3c973"></a>

void SetActive(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of Active.




### `IsActiveDefaultValue` <a id="structFRHAPI__QueueConfigV2_1ad1505f8a82af3ca1e78b9c8f9a9808f7"></a>

bool IsActiveDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Active matches the default value.




### `SetActiveToDefault` <a id="structFRHAPI__QueueConfigV2_1afc8df59addb91e29a9f9f21e5f84c622"></a>

void SetActiveToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Active to its default




### `GetMaxQueueGroupSize` <a id="structFRHAPI__QueueConfigV2_1a57fb19b4db73b65db613b35bf3f0a6b8"></a>

int32 & GetMaxQueueGroupSize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MaxQueueGroupSize.




### `GetMaxQueueGroupSize` <a id="structFRHAPI__QueueConfigV2_1ab29a330844c3db8cabe0d19cf6b80f2f"></a>

const int32 & GetMaxQueueGroupSize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MaxQueueGroupSize.




### `SetMaxQueueGroupSize` <a id="structFRHAPI__QueueConfigV2_1a89f036294b3f75b8454224187d192fa8"></a>

void SetMaxQueueGroupSize(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of MaxQueueGroupSize.




### `IsMaxQueueGroupSizeDefaultValue` <a id="structFRHAPI__QueueConfigV2_1afb1913203d4e56acec07a73e80bfee1b"></a>

bool IsMaxQueueGroupSizeDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if MaxQueueGroupSize matches the default value.




### `SetMaxQueueGroupSizeToDefault` <a id="structFRHAPI__QueueConfigV2_1a96fe278b7a631da8c2cfef3a7e210429"></a>

void SetMaxQueueGroupSizeToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of MaxQueueGroupSize to its default




### `GetMatchMakingTemplateGroupId` <a id="structFRHAPI__QueueConfigV2_1a32d5584d855ac42043e46812ff1992cd"></a>

FGuid & GetMatchMakingTemplateGroupId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchMakingTemplateGroupId.




### `GetMatchMakingTemplateGroupId` <a id="structFRHAPI__QueueConfigV2_1a6ec1b9f5c903114dd3b8613a7eb57777"></a>

const FGuid & GetMatchMakingTemplateGroupId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchMakingTemplateGroupId.




### `SetMatchMakingTemplateGroupId` <a id="structFRHAPI__QueueConfigV2_1affcb2eb1bc675c907b509ce9e499366b"></a>

void SetMatchMakingTemplateGroupId(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of MatchMakingTemplateGroupId.




### `GetLegacyConfig` <a id="structFRHAPI__QueueConfigV2_1af66c525d8db6c403a4f8a1af5b712d1c"></a>

TMap< FString, FString > & GetLegacyConfig()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LegacyConfig_Optional, regardless of it having been set.




### `GetLegacyConfig` <a id="structFRHAPI__QueueConfigV2_1af765aa0a081f198ae0880e52fcb9a04b"></a>

const TMap< FString, FString > & GetLegacyConfig()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LegacyConfig_Optional, regardless of it having been set.




### `GetLegacyConfig` <a id="structFRHAPI__QueueConfigV2_1a13c7b8c96a7b247a0810c404744dea56"></a>

const TMap< FString, FString > & GetLegacyConfig(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetLegacyConfig` <a id="structFRHAPI__QueueConfigV2_1aec1c4b98d29ae9984b29fa4c37b785a2"></a>

bool GetLegacyConfig(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false.




### `GetLegacyConfigOrNull` <a id="structFRHAPI__QueueConfigV2_1aac6b5e86780317e9dff3b294ba0f825c"></a>

TMap< FString, FString > * GetLegacyConfigOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.




### `GetLegacyConfigOrNull` <a id="structFRHAPI__QueueConfigV2_1abf731448f02c7b0aa22fbfd9a12ac841"></a>

const TMap< FString, FString > * GetLegacyConfigOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.




### `SetLegacyConfig` <a id="structFRHAPI__QueueConfigV2_1a65ea9aee6bf74c93a8733fed52f62670"></a>

void SetLegacyConfig(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true.




### `ClearLegacyConfig` <a id="structFRHAPI__QueueConfigV2_1a704de45777e119ee8c297892b3bfdc32"></a>

void ClearLegacyConfig()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false.





