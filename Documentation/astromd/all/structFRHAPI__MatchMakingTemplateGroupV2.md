---
title: FRHAPI_MatchMakingTemplateGroupV2 Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A collection of MatchMakingTemplates that may be used when a session enters a queue. The first template that satisfies the necessary rules will be used.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FGuid|[MatchMakingTemplateGroupId](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2_1ab6ac4a6cc076fa58e61f71f0b74c6da2)|ID for this set of potential matchmaking templates.|
|TArray< [FRHAPI_MatchMakingTemplateV2](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2) >|[TemplateOptions](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2_1a5f061f6b1728e5e91acbc50c8d0db1cb)|List of the different matchmaking templates that could be used. The config is chosen based on a set of rules in each MatchMakingTemplate object. If there are no rules, it's the default template.|
|TSet< int32 >|[RequiredItemIds_Optional](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2_1a679dffab35167122874604eb826703bd)|Set of all the item ids that are required to validate every rule contained in this template group.|
|bool|[RequiredItemIds_IsSet](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2_1acf8e308da6fcec42032dd998a15284c3)|true if RequiredItemIds_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2_1aa82d7762c65e34e906c1fa2af0a15b80)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2_1ae72915da0979e90493d2d2f47c565c9d)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FGuid &|[GetMatchMakingTemplateGroupId](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2_1a01e8f3d3b4d2a717e193aed171c0d40c)()|Gets the value of MatchMakingTemplateGroupId.|
|const FGuid &|[GetMatchMakingTemplateGroupId](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2_1aa0748064b7da8fe6a9be9e0d7c02c438)()|Gets the value of MatchMakingTemplateGroupId.|
|void|[SetMatchMakingTemplateGroupId](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2_1a1c38f3b83697063e3fe3a93307e26543)(FGuid NewValue)|Sets the value of MatchMakingTemplateGroupId.|
|TArray< [FRHAPI_MatchMakingTemplateV2](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2) > &|[GetTemplateOptions](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2_1ae7ac396d71d72df8dfd497619e5b5e16)()|Gets the value of TemplateOptions.|
|const TArray< [FRHAPI_MatchMakingTemplateV2](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2) > &|[GetTemplateOptions](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2_1a78820cdf045398fec485c4ac12d50316)()|Gets the value of TemplateOptions.|
|void|[SetTemplateOptions](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2_1acdfe22412b41577fa5e2761d489693fd)(TArray< [FRHAPI_MatchMakingTemplateV2](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2) > NewValue)|Sets the value of TemplateOptions.|
|TSet< int32 > &|[GetRequiredItemIds](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2_1aae74151bbae2476c5dd9e69b5c8619c2)()|Gets the value of RequiredItemIds_Optional, regardless of it having been set.|
|const TSet< int32 > &|[GetRequiredItemIds](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2_1ad7c46a9636d5fd68fae7f62341db2731)()|Gets the value of RequiredItemIds_Optional, regardless of it having been set.|
|const TSet< int32 > &|[GetRequiredItemIds](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2_1a29b9c106297cec5cc94f9bf5d4b8c7cd)(const TSet< int32 > & DefaultValue)|Gets the value of RequiredItemIds_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetRequiredItemIds](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2_1a2502c85366c9867bc828b58e75b4771b)(TSet< int32 > & OutValue)|Fills OutValue with the value of RequiredItemIds_Optional and returns true if it has been set, otherwise returns false.|
|TSet< int32 > *|[GetRequiredItemIdsOrNull](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2_1a2cc6f2377ab9ba029a272d88bb50b483)()|Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.|
|const TSet< int32 > *|[GetRequiredItemIdsOrNull](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2_1a12ee516297ac458faf9eda375bf3e138)()|Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetRequiredItemIds](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2_1a1619a5f41fcd839b5ca83adedae56979)(TSet< int32 > NewValue)|Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true.|
|void|[ClearRequiredItemIds](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2_1a2cfe134d15ff3ce519d7be4a1a681055)()|Clears the value of RequiredItemIds_Optional and sets RequiredItemIds_IsSet to false.|
## Public Attributes



### `MatchMakingTemplateGroupId` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1ab6ac4a6cc076fa58e61f71f0b74c6da2"></a>

`FGuid FRHAPI_MatchMakingTemplateGroupV2::MatchMakingTemplateGroupId`

ID for this set of potential matchmaking templates.




### `TemplateOptions` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a5f061f6b1728e5e91acbc50c8d0db1cb"></a>

`TArray<FRHAPI_MatchMakingTemplateV2> FRHAPI_MatchMakingTemplateGroupV2::TemplateOptions`

List of the different matchmaking templates that could be used. The config is chosen based on a set of rules in each MatchMakingTemplate object. If there are no rules, it's the default template.




### `RequiredItemIds_Optional` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a679dffab35167122874604eb826703bd"></a>

`TSet<int32> FRHAPI_MatchMakingTemplateGroupV2::RequiredItemIds_Optional`

Set of all the item ids that are required to validate every rule contained in this template group.




### `RequiredItemIds_IsSet` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1acf8e308da6fcec42032dd998a15284c3"></a>

`bool FRHAPI_MatchMakingTemplateGroupV2::RequiredItemIds_IsSet`

true if RequiredItemIds_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1aa82d7762c65e34e906c1fa2af0a15b80"></a>

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



### `WriteJson` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1ae72915da0979e90493d2d2f47c565c9d"></a>

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



### `GetMatchMakingTemplateGroupId` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a01e8f3d3b4d2a717e193aed171c0d40c"></a>

FGuid & GetMatchMakingTemplateGroupId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchMakingTemplateGroupId.




### `GetMatchMakingTemplateGroupId` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1aa0748064b7da8fe6a9be9e0d7c02c438"></a>

const FGuid & GetMatchMakingTemplateGroupId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchMakingTemplateGroupId.




### `SetMatchMakingTemplateGroupId` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a1c38f3b83697063e3fe3a93307e26543"></a>

void SetMatchMakingTemplateGroupId(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of MatchMakingTemplateGroupId.




### `GetTemplateOptions` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1ae7ac396d71d72df8dfd497619e5b5e16"></a>

TArray< [FRHAPI_MatchMakingTemplateV2](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2) > & GetTemplateOptions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TemplateOptions.




### `GetTemplateOptions` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a78820cdf045398fec485c4ac12d50316"></a>

const TArray< [FRHAPI_MatchMakingTemplateV2](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2) > & GetTemplateOptions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TemplateOptions.




### `SetTemplateOptions` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1acdfe22412b41577fa5e2761d489693fd"></a>

void SetTemplateOptions(TArray< [FRHAPI_MatchMakingTemplateV2](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_MatchMakingTemplateV2](/unreal-plugins/all/structfrhapi__matchmakingtemplatev2/#structFRHAPI__MatchMakingTemplateV2) >|NewValue|

#### Description

Sets the value of TemplateOptions.




### `GetRequiredItemIds` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1aae74151bbae2476c5dd9e69b5c8619c2"></a>

TSet< int32 > & GetRequiredItemIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RequiredItemIds_Optional, regardless of it having been set.




### `GetRequiredItemIds` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1ad7c46a9636d5fd68fae7f62341db2731"></a>

const TSet< int32 > & GetRequiredItemIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RequiredItemIds_Optional, regardless of it having been set.




### `GetRequiredItemIds` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a29b9c106297cec5cc94f9bf5d4b8c7cd"></a>

const TSet< int32 > & GetRequiredItemIds(const TSet< int32 > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TSet< int32 > &|DefaultValue|

#### Description

Gets the value of RequiredItemIds_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetRequiredItemIds` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a2502c85366c9867bc828b58e75b4771b"></a>

bool GetRequiredItemIds(TSet< int32 > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TSet< int32 > &|OutValue|

#### Description

Fills OutValue with the value of RequiredItemIds_Optional and returns true if it has been set, otherwise returns false.




### `GetRequiredItemIdsOrNull` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a2cc6f2377ab9ba029a272d88bb50b483"></a>

TSet< int32 > * GetRequiredItemIdsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.




### `GetRequiredItemIdsOrNull` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a12ee516297ac458faf9eda375bf3e138"></a>

const TSet< int32 > * GetRequiredItemIdsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.




### `SetRequiredItemIds` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a1619a5f41fcd839b5ca83adedae56979"></a>

void SetRequiredItemIds(TSet< int32 > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TSet< int32 >|NewValue|

#### Description

Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true.




### `ClearRequiredItemIds` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a2cfe134d15ff3ce519d7be4a1a681055"></a>

void ClearRequiredItemIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of RequiredItemIds_Optional and sets RequiredItemIds_IsSet to false.





