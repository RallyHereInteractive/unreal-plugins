---
title: FRHAPI_MatchMakingTemplateGroup Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

DEPRECATED A collection of MatchMakingTemplates that may be used when a session enters a queue. The first template that satisfies the necessary rules will be used.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FGuid|[TemplateGroupId](/unreal-plugins/all/structfrhapi__matchmakingtemplategroup/#structFRHAPI__MatchMakingTemplateGroup_1a507a284a1e0774e35f86f92110169f51)|ID for this set of potential matchmaking templates.|
|TArray< [FRHAPI_MatchMakingTemplate](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate) >|[TemplateOptions](/unreal-plugins/all/structfrhapi__matchmakingtemplategroup/#structFRHAPI__MatchMakingTemplateGroup_1a48040d4429ae869814eda1b9f18c1363)|List of the different matchmaking templates that could be used. The config is chosen based on a set of rules in each MatchMakingTemplate object. If there are no rules, it's the default template.|
|TSet< int32 >|[RequiredItemIds_Optional](/unreal-plugins/all/structfrhapi__matchmakingtemplategroup/#structFRHAPI__MatchMakingTemplateGroup_1a16723c7ac8626179a27c60612d9f34e8)|Set of all the item ids that are required to validate every rule contained in this template group.|
|bool|[RequiredItemIds_IsSet](/unreal-plugins/all/structfrhapi__matchmakingtemplategroup/#structFRHAPI__MatchMakingTemplateGroup_1a3e01b3ff08aaf06e2b13085d40f00722)|true if RequiredItemIds_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__matchmakingtemplategroup/#structFRHAPI__MatchMakingTemplateGroup_1abd695116d91d7ae35a4ce0c6ad56ba9b)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__matchmakingtemplategroup/#structFRHAPI__MatchMakingTemplateGroup_1acd5701b5cf12bc29251d060e4a60f2b1)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FGuid &|[GetTemplateGroupId](/unreal-plugins/all/structfrhapi__matchmakingtemplategroup/#structFRHAPI__MatchMakingTemplateGroup_1a6e102e2662b46623917c5aea1b005b2e)()|Gets the value of TemplateGroupId.|
|const FGuid &|[GetTemplateGroupId](/unreal-plugins/all/structfrhapi__matchmakingtemplategroup/#structFRHAPI__MatchMakingTemplateGroup_1a9aae93ee73e27baeb7af048ac67f8bc5)()|Gets the value of TemplateGroupId.|
|void|[SetTemplateGroupId](/unreal-plugins/all/structfrhapi__matchmakingtemplategroup/#structFRHAPI__MatchMakingTemplateGroup_1aee97946d133efb63271bc40eded4c30b)(FGuid NewValue)|Sets the value of TemplateGroupId.|
|TArray< [FRHAPI_MatchMakingTemplate](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate) > &|[GetTemplateOptions](/unreal-plugins/all/structfrhapi__matchmakingtemplategroup/#structFRHAPI__MatchMakingTemplateGroup_1a70f8640a14690d8777179d6b689982c6)()|Gets the value of TemplateOptions.|
|const TArray< [FRHAPI_MatchMakingTemplate](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate) > &|[GetTemplateOptions](/unreal-plugins/all/structfrhapi__matchmakingtemplategroup/#structFRHAPI__MatchMakingTemplateGroup_1a44782fb67720b6a26da7756d07e13c81)()|Gets the value of TemplateOptions.|
|void|[SetTemplateOptions](/unreal-plugins/all/structfrhapi__matchmakingtemplategroup/#structFRHAPI__MatchMakingTemplateGroup_1ac1e8196c2d6ba14ccac41e6a9b21764e)(TArray< [FRHAPI_MatchMakingTemplate](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate) > NewValue)|Sets the value of TemplateOptions.|
|TSet< int32 > &|[GetRequiredItemIds](/unreal-plugins/all/structfrhapi__matchmakingtemplategroup/#structFRHAPI__MatchMakingTemplateGroup_1a254f4844b266761013351898f84b5786)()|Gets the value of RequiredItemIds_Optional, regardless of it having been set.|
|const TSet< int32 > &|[GetRequiredItemIds](/unreal-plugins/all/structfrhapi__matchmakingtemplategroup/#structFRHAPI__MatchMakingTemplateGroup_1aacb075beaf0fcfbdefc3ea3b746289ac)()|Gets the value of RequiredItemIds_Optional, regardless of it having been set.|
|const TSet< int32 > &|[GetRequiredItemIds](/unreal-plugins/all/structfrhapi__matchmakingtemplategroup/#structFRHAPI__MatchMakingTemplateGroup_1aa5a6727b43cc185c4ac9c5295a222122)(const TSet< int32 > & DefaultValue)|Gets the value of RequiredItemIds_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetRequiredItemIds](/unreal-plugins/all/structfrhapi__matchmakingtemplategroup/#structFRHAPI__MatchMakingTemplateGroup_1a38185a19d7b89025b245ffaf3e007fc8)(TSet< int32 > & OutValue)|Fills OutValue with the value of RequiredItemIds_Optional and returns true if it has been set, otherwise returns false.|
|TSet< int32 > *|[GetRequiredItemIdsOrNull](/unreal-plugins/all/structfrhapi__matchmakingtemplategroup/#structFRHAPI__MatchMakingTemplateGroup_1ab9e18e09f0bc09d9bb41db8e9c26982c)()|Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.|
|const TSet< int32 > *|[GetRequiredItemIdsOrNull](/unreal-plugins/all/structfrhapi__matchmakingtemplategroup/#structFRHAPI__MatchMakingTemplateGroup_1aed62f7f1d290c797889da913eb337228)()|Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetRequiredItemIds](/unreal-plugins/all/structfrhapi__matchmakingtemplategroup/#structFRHAPI__MatchMakingTemplateGroup_1a3fcf1eb0b7eddb98d0af02c855f2592f)(TSet< int32 > NewValue)|Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true.|
|void|[ClearRequiredItemIds](/unreal-plugins/all/structfrhapi__matchmakingtemplategroup/#structFRHAPI__MatchMakingTemplateGroup_1a0314a2ef038598347f0d17de6fda851b)()|Clears the value of RequiredItemIds_Optional and sets RequiredItemIds_IsSet to false.|
## Public Attributes



### `TemplateGroupId` <a id="structFRHAPI__MatchMakingTemplateGroup_1a507a284a1e0774e35f86f92110169f51"></a>

`FGuid FRHAPI_MatchMakingTemplateGroup::TemplateGroupId`

ID for this set of potential matchmaking templates.




### `TemplateOptions` <a id="structFRHAPI__MatchMakingTemplateGroup_1a48040d4429ae869814eda1b9f18c1363"></a>

`TArray<FRHAPI_MatchMakingTemplate> FRHAPI_MatchMakingTemplateGroup::TemplateOptions`

List of the different matchmaking templates that could be used. The config is chosen based on a set of rules in each MatchMakingTemplate object. If there are no rules, it's the default template.




### `RequiredItemIds_Optional` <a id="structFRHAPI__MatchMakingTemplateGroup_1a16723c7ac8626179a27c60612d9f34e8"></a>

`TSet<int32> FRHAPI_MatchMakingTemplateGroup::RequiredItemIds_Optional`

Set of all the item ids that are required to validate every rule contained in this template group.




### `RequiredItemIds_IsSet` <a id="structFRHAPI__MatchMakingTemplateGroup_1a3e01b3ff08aaf06e2b13085d40f00722"></a>

`bool FRHAPI_MatchMakingTemplateGroup::RequiredItemIds_IsSet`

true if RequiredItemIds_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__MatchMakingTemplateGroup_1abd695116d91d7ae35a4ce0c6ad56ba9b"></a>

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



### `WriteJson` <a id="structFRHAPI__MatchMakingTemplateGroup_1acd5701b5cf12bc29251d060e4a60f2b1"></a>

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



### `GetTemplateGroupId` <a id="structFRHAPI__MatchMakingTemplateGroup_1a6e102e2662b46623917c5aea1b005b2e"></a>

FGuid & GetTemplateGroupId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TemplateGroupId.




### `GetTemplateGroupId` <a id="structFRHAPI__MatchMakingTemplateGroup_1a9aae93ee73e27baeb7af048ac67f8bc5"></a>

const FGuid & GetTemplateGroupId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TemplateGroupId.




### `SetTemplateGroupId` <a id="structFRHAPI__MatchMakingTemplateGroup_1aee97946d133efb63271bc40eded4c30b"></a>

void SetTemplateGroupId(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of TemplateGroupId.




### `GetTemplateOptions` <a id="structFRHAPI__MatchMakingTemplateGroup_1a70f8640a14690d8777179d6b689982c6"></a>

TArray< [FRHAPI_MatchMakingTemplate](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate) > & GetTemplateOptions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TemplateOptions.




### `GetTemplateOptions` <a id="structFRHAPI__MatchMakingTemplateGroup_1a44782fb67720b6a26da7756d07e13c81"></a>

const TArray< [FRHAPI_MatchMakingTemplate](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate) > & GetTemplateOptions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TemplateOptions.




### `SetTemplateOptions` <a id="structFRHAPI__MatchMakingTemplateGroup_1ac1e8196c2d6ba14ccac41e6a9b21764e"></a>

void SetTemplateOptions(TArray< [FRHAPI_MatchMakingTemplate](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_MatchMakingTemplate](/unreal-plugins/all/structfrhapi__matchmakingtemplate/#structFRHAPI__MatchMakingTemplate) >|NewValue|

#### Description

Sets the value of TemplateOptions.




### `GetRequiredItemIds` <a id="structFRHAPI__MatchMakingTemplateGroup_1a254f4844b266761013351898f84b5786"></a>

TSet< int32 > & GetRequiredItemIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RequiredItemIds_Optional, regardless of it having been set.




### `GetRequiredItemIds` <a id="structFRHAPI__MatchMakingTemplateGroup_1aacb075beaf0fcfbdefc3ea3b746289ac"></a>

const TSet< int32 > & GetRequiredItemIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RequiredItemIds_Optional, regardless of it having been set.




### `GetRequiredItemIds` <a id="structFRHAPI__MatchMakingTemplateGroup_1aa5a6727b43cc185c4ac9c5295a222122"></a>

const TSet< int32 > & GetRequiredItemIds(const TSet< int32 > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TSet< int32 > &|DefaultValue|

#### Description

Gets the value of RequiredItemIds_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetRequiredItemIds` <a id="structFRHAPI__MatchMakingTemplateGroup_1a38185a19d7b89025b245ffaf3e007fc8"></a>

bool GetRequiredItemIds(TSet< int32 > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TSet< int32 > &|OutValue|

#### Description

Fills OutValue with the value of RequiredItemIds_Optional and returns true if it has been set, otherwise returns false.




### `GetRequiredItemIdsOrNull` <a id="structFRHAPI__MatchMakingTemplateGroup_1ab9e18e09f0bc09d9bb41db8e9c26982c"></a>

TSet< int32 > * GetRequiredItemIdsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.




### `GetRequiredItemIdsOrNull` <a id="structFRHAPI__MatchMakingTemplateGroup_1aed62f7f1d290c797889da913eb337228"></a>

const TSet< int32 > * GetRequiredItemIdsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.




### `SetRequiredItemIds` <a id="structFRHAPI__MatchMakingTemplateGroup_1a3fcf1eb0b7eddb98d0af02c855f2592f"></a>

void SetRequiredItemIds(TSet< int32 > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TSet< int32 >|NewValue|

#### Description

Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true.




### `ClearRequiredItemIds` <a id="structFRHAPI__MatchMakingTemplateGroup_1a0314a2ef038598347f0d17de6fda851b"></a>

void ClearRequiredItemIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of RequiredItemIds_Optional and sets RequiredItemIds_IsSet to false.





