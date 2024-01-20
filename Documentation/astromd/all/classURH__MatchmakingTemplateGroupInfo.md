---
title: URH_MatchmakingTemplateGroupInfo Class
---Inherits from UObject

Class to organize a matchmaking Templates information.

## Summary
| Kind | View | Description |
|------|------|-------------|
|[FRHAPI_MatchMakingTemplateGroupV2](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2)|[TemplateInfo](/unreal-plugins/all/classurh__matchmakingtemplategroupinfo/#classURH__MatchmakingTemplateGroupInfo_1a19c9c3697f1d9fdacccf60b52a59fe2a)|The configuration of the template.|
|FString|[ETag](/unreal-plugins/all/classurh__matchmakingtemplategroupinfo/#classURH__MatchmakingTemplateGroupInfo_1aa211a82d3fc1d0b88e7ab966e310408e)|ETag of last template update.|
|const [FRHAPI_MatchMakingTemplateGroupV2](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2) &|[GetInfo](/unreal-plugins/all/classurh__matchmakingtemplategroupinfo/#classURH__MatchmakingTemplateGroupInfo_1ad54dc36738496269ffd1c955e167803b)()|Gets the template info.|
|const FString &|[GetETag](/unreal-plugins/all/classurh__matchmakingtemplategroupinfo/#classURH__MatchmakingTemplateGroupInfo_1a5469f554d137118cc7d5f2e74955f033)()|Gets the Etag for the template info.|
|const FGuid &|[GetTemplateGroupId](/unreal-plugins/all/classurh__matchmakingtemplategroupinfo/#classURH__MatchmakingTemplateGroupInfo_1a384a0999a402078854d4ad342f0570fa)()|ID for this set of potential matchmaking templates.|
|TSet< int32 >|[GetRequiredItemIds](/unreal-plugins/all/classurh__matchmakingtemplategroupinfo/#classURH__MatchmakingTemplateGroupInfo_1adf14fcfb492d96bb8c3606720552b4c4)()|**|
|const TArray< FGuid >|[GetPossibleInstanceRequestTemplateIds](/unreal-plugins/all/classurh__matchmakingtemplategroupinfo/#classURH__MatchmakingTemplateGroupInfo_1a9b2e0a4539408825329eff7f6ec07ae6)()|ID for which instance launch template this queue will use.|
|void|[ImportAPITemplateGroup](/unreal-plugins/all/classurh__matchmakingtemplategroupinfo/#classURH__MatchmakingTemplateGroupInfo_1ab2f3a97cf393d864d4897981125e50c6)(const [FRHAPI_MatchMakingTemplateGroupV2](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2) & APITemplateGroup, const FString & InETag)|Imports template info from an API call.|
|FString|[GetDescription](/unreal-plugins/all/classurh__matchmakingtemplategroupinfo/#classURH__MatchmakingTemplateGroupInfo_1a7ac296d74658aeb6d4ef0f20bb227030)()|Gets a description of the template, display its id for debugging.|
## Private Attributes



### `TemplateInfo` <a id="classURH__MatchmakingTemplateGroupInfo_1a19c9c3697f1d9fdacccf60b52a59fe2a"></a>

`FRHAPI_MatchMakingTemplateGroupV2 URH_MatchmakingTemplateGroupInfo::TemplateInfo`

The configuration of the template.




### `ETag` <a id="classURH__MatchmakingTemplateGroupInfo_1aa211a82d3fc1d0b88e7ab966e310408e"></a>

`FString URH_MatchmakingTemplateGroupInfo::ETag`

ETag of last template update.





## Public Functions



### `GetInfo` <a id="classURH__MatchmakingTemplateGroupInfo_1ad54dc36738496269ffd1c955e167803b"></a>

const [FRHAPI_MatchMakingTemplateGroupV2](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2) & GetInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the template info.




### `GetETag` <a id="classURH__MatchmakingTemplateGroupInfo_1a5469f554d137118cc7d5f2e74955f033"></a>

const FString & GetETag()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Etag for the template info.




### `GetTemplateGroupId` <a id="classURH__MatchmakingTemplateGroupInfo_1a384a0999a402078854d4ad342f0570fa"></a>

const FGuid & GetTemplateGroupId()

#### Parameters

| Type | Name |
|------|------|

#### Description

ID for this set of potential matchmaking templates.




### `GetRequiredItemIds` <a id="classURH__MatchmakingTemplateGroupInfo_1adf14fcfb492d96bb8c3606720552b4c4"></a>

TSet< int32 > GetRequiredItemIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

**

List of the different matchmaking templates that could be used. The config is chosen based on a set of rules in each MatchMakingTemplate object. If there are no rules, it's the default template *
/Set of all the item ids that are required to validate every rule contained in this template group 



### `GetPossibleInstanceRequestTemplateIds` <a id="classURH__MatchmakingTemplateGroupInfo_1a9b2e0a4539408825329eff7f6ec07ae6"></a>

const TArray< FGuid > GetPossibleInstanceRequestTemplateIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

ID for which instance launch template this queue will use.




### `ImportAPITemplateGroup` <a id="classURH__MatchmakingTemplateGroupInfo_1ab2f3a97cf393d864d4897981125e50c6"></a>

void ImportAPITemplateGroup(const [FRHAPI_MatchMakingTemplateGroupV2](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2) & APITemplateGroup, const FString & InETag)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_MatchMakingTemplateGroupV2](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2) &|APITemplateGroup|
|const FString &|InETag|

#### Description

Imports template info from an API call.


#### Parameters

APITemplateGroup
: Template info from API call. 
InETag
: ETag from API call. 



### `GetDescription` <a id="classURH__MatchmakingTemplateGroupInfo_1a7ac296d74658aeb6d4ef0f20bb227030"></a>

FString GetDescription()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets a description of the template, display its id for debugging.





