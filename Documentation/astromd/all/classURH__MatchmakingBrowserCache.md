---
title: URH_MatchmakingBrowserCache Class
---Inherits from [URH_GameInstanceSubsystemPlugin](/unreal-plugins/all/classurh__gameinstancesubsystemplugin/#classURH__GameInstanceSubsystemPlugin)

Simple container class to hold matchmaking data, does not have its own auth context, relies upon getting it from elsewhere during calls, so that it can be used to cache across multiple players.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FRegionSettingsUpdatedDelegate|[OnRegionsUpdatedNative](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache_1aade4d528b8dc3dd6ddb864280fd161c8)|Delegate to listen for matchmaking regions updated.|
|FRegionSettingsUpdatedDynamicDelegate|[OnRegionsUpdated](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache_1a861943c4bbe2929594b1acc7b528974f)||
|TMap< FString, [URH_MatchmakingQueueInfo](/unreal-plugins/all/classurh__matchmakingqueueinfo/#classURH__MatchmakingQueueInfo) * >|[QueueCache](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache_1a2a75852ef2d0fb69f17d52bbacfbc3af)|Map of Queue Id to Queue Infos.|
|TMap< FGuid, [URH_MatchmakingTemplateGroupInfo](/unreal-plugins/all/classurh__matchmakingtemplategroupinfo/#classURH__MatchmakingTemplateGroupInfo) * >|[TemplateGroupCache](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache_1a605b9ddc4ffcab08985920a0ff341168)|Map of Template Id to Matchmaking Template Group Infos.|
|TMap< FGuid, [URH_InstanceRequestTemplate](/unreal-plugins/all/classurh__instancerequesttemplate/#classURH__InstanceRequestTemplate) * >|[InstanceRequestTemplateCache](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache_1a0f80a47c99dc221a9d2d3a46a08f7c84)|Map of Template Id to Instance Launch Template Infos.|
|TArray< [FRHAPI_SiteSettings](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings) >|[RegionsCache](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache_1a3984df761367b754d4a2dcf29a8cc3f1)|Array of Regions.|
||[URH_MatchmakingBrowserCache](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache_1addfabfbe829a51e5974402f307f55090)()|Default constructor.|
|void|[SearchQueues](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache_1ac7e837d18b72c1870de9081fa2570872)(const [FRH_QueueSearchParams](/unreal-plugins/all/structfrh__queuesearchparams/#structFRH__QueueSearchParams) & params, const FRH_OnQueueSearchCompleteDelegateBlock & Delegate)|Search for queues.|
|void|[BLUEPRINT_SearchQueues](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache_1a9abc7b72ccdaf7221103a5672d912d82)(const [FRH_QueueSearchParams](/unreal-plugins/all/structfrh__queuesearchparams/#structFRH__QueueSearchParams) & params, const FRH_OnQueueSearchCompleteDynamicDelegate & Delegate)||
|void|[SearchMatchmakingTemplateGroup](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache_1ad03ac193720eba4073da3d52854d7360)(const FGuid & TemplateId, const FRH_OnGetMatchmakingTemplateGroupCompleteDelegateBlock & Delegate)|Search for a matchmaking template.|
|void|[BLUEPRINT_SearchMatchmakingTemplateGroup](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache_1a401e5ed7ec61a89b9c9bd9bfa711bd67)(const FGuid & TemplateId, const FRH_OnGetMatchmakingTemplateGroupCompleteDynamicDelegate & Delegate)||
|void|[SearchInstanceRequestTemplate](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache_1a3f8201f2b4185755194cea5b084b60f2)(const FGuid & TemplateId, const FRH_OnGetInstanceRequestTemplateCompleteDelegateBlock & Delegate)|Search for an instance launch template.|
|void|[BLUEPRINT_SearchInstanceRequestTemplate](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache_1a8a33bdd8eaf6dd18cea26c877436f526)(const FGuid & TemplateId, const FRH_OnGetInstanceRequestTemplateCompleteDynamicDelegate & Delegate)||
|void|[SearchRegions](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache_1a5d947800e76bf2a7f42a97f7b57d5c87)(const FRH_OnRegionSearchCompleteDelegateBlock & Delegate)|Search for matchmaking regions.|
|void|[BLUEPRINT_SearchRegions](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache_1a4c2d949c15795848d3f6218a12887832)(const FRH_OnRegionSearchCompleteDynamicDelegate & Delegate)||
|[URH_MatchmakingQueueInfo](/unreal-plugins/all/classurh__matchmakingqueueinfo/#classURH__MatchmakingQueueInfo) *|[GetQueue](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache_1ad5e5847ba5ab4fd96b6e8303bc757673)(const FString & QueueId)|Get a cached queue by Queue Id.|
|FORCEINLINE TArray< [URH_MatchmakingQueueInfo](/unreal-plugins/all/classurh__matchmakingqueueinfo/#classURH__MatchmakingQueueInfo) * >|[GetAllQueues](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache_1acc6cf6d685038c0c9c2104c8d36c6dda)()|Get all cached queues.|
|[URH_MatchmakingTemplateGroupInfo](/unreal-plugins/all/classurh__matchmakingtemplategroupinfo/#classURH__MatchmakingTemplateGroupInfo) *|[GetMatchmakingTemplateGroup](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache_1a768be90ca3e0b3d27f489b3faffb0b97)(const FGuid & TemplateGroupId)|Get a cached matchmaking template by Template Id.|
|[URH_InstanceRequestTemplate](/unreal-plugins/all/classurh__instancerequesttemplate/#classURH__InstanceRequestTemplate) *|[GetInstanceRequestTemplate](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache_1a42ac148127a03d9f6217910af1368828)(const FGuid & InstanceRequestTemplateId)|Get a cached instance request template by Template Id.|
|const TArray< [FRHAPI_SiteSettings](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings) > &|[GetAllRegions](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache_1af72098f3ad79f03f4eebb0e156a244f5)()|Get all cached matchmaking regions.|
|void|[ClearCache](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache_1a025eb8002aeeb328ea4dc90d9ddf0cb7)()|Clears the cache of all queues and templates.|
|void|[ImportAPIQueue](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache_1a2211b26aa34c82987f9c750dbd02e771)(const [FRHAPI_QueueConfigV2](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2) & APIQueue, const FString & ETag)|Imports queue info from an API call.|
|void|[ImportAPITemplateGroup](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache_1a20a6a2c8c4557265571f0e34f8eb246d)(const [FRHAPI_MatchMakingTemplateGroupV2](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2) & APITemplateGroup, const FString & ETag)|Imports template info from an API call.|
|void|[ImportAPIInstanceRequestTemplate](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache_1aec281f583cfc8c2f2b9da701815afb4a)(const [FRHAPI_InstanceRequestTemplate](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate) & APITemplate, const FString & ETag)|Imports template info from an API call.|
## Public Attributes



### `OnRegionsUpdatedNative` <a id="classURH__MatchmakingBrowserCache_1aade4d528b8dc3dd6ddb864280fd161c8"></a>

`FRegionSettingsUpdatedDelegate URH_MatchmakingBrowserCache::OnRegionsUpdatedNative`

Delegate to listen for matchmaking regions updated.




### `OnRegionsUpdated` <a id="classURH__MatchmakingBrowserCache_1a861943c4bbe2929594b1acc7b528974f"></a>

`FRegionSettingsUpdatedDynamicDelegate URH_MatchmakingBrowserCache::OnRegionsUpdated`







## Protected Attributes



### `QueueCache` <a id="classURH__MatchmakingBrowserCache_1a2a75852ef2d0fb69f17d52bbacfbc3af"></a>

`TMap<FString, URH_MatchmakingQueueInfo*> URH_MatchmakingBrowserCache::QueueCache`

Map of Queue Id to Queue Infos.




### `TemplateGroupCache` <a id="classURH__MatchmakingBrowserCache_1a605b9ddc4ffcab08985920a0ff341168"></a>

`TMap<FGuid, URH_MatchmakingTemplateGroupInfo*> URH_MatchmakingBrowserCache::TemplateGroupCache`

Map of Template Id to Matchmaking Template Group Infos.




### `InstanceRequestTemplateCache` <a id="classURH__MatchmakingBrowserCache_1a0f80a47c99dc221a9d2d3a46a08f7c84"></a>

`TMap<FGuid, URH_InstanceRequestTemplate*> URH_MatchmakingBrowserCache::InstanceRequestTemplateCache`

Map of Template Id to Instance Launch Template Infos.




### `RegionsCache` <a id="classURH__MatchmakingBrowserCache_1a3984df761367b754d4a2dcf29a8cc3f1"></a>

`TArray<FRHAPI_SiteSettings> URH_MatchmakingBrowserCache::RegionsCache`

Array of Regions.





## Public Functions



### `URH_MatchmakingBrowserCache` <a id="classURH__MatchmakingBrowserCache_1addfabfbe829a51e5974402f307f55090"></a>

 URH_MatchmakingBrowserCache()

#### Parameters

| Type | Name |
|------|------|

#### Description

Default constructor.




### `SearchQueues` <a id="classURH__MatchmakingBrowserCache_1ac7e837d18b72c1870de9081fa2570872"></a>

void SearchQueues(const [FRH_QueueSearchParams](/unreal-plugins/all/structfrh__queuesearchparams/#structFRH__QueueSearchParams) & params, const FRH_OnQueueSearchCompleteDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_QueueSearchParams](/unreal-plugins/all/structfrh__queuesearchparams/#structFRH__QueueSearchParams) &|params|
|const FRH_OnQueueSearchCompleteDelegateBlock &|Delegate|

#### Description

Search for queues.


#### Parameters

params
: The search params to use for the given search. 
Delegate
: Callback with the results of the search. 



### `BLUEPRINT_SearchQueues` <a id="classURH__MatchmakingBrowserCache_1a9abc7b72ccdaf7221103a5672d912d82"></a>

void BLUEPRINT_SearchQueues(const [FRH_QueueSearchParams](/unreal-plugins/all/structfrh__queuesearchparams/#structFRH__QueueSearchParams) & params, const FRH_OnQueueSearchCompleteDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_QueueSearchParams](/unreal-plugins/all/structfrh__queuesearchparams/#structFRH__QueueSearchParams) &|params|
|const FRH_OnQueueSearchCompleteDynamicDelegate &|Delegate|

#### Description






### `SearchMatchmakingTemplateGroup` <a id="classURH__MatchmakingBrowserCache_1ad03ac193720eba4073da3d52854d7360"></a>

void SearchMatchmakingTemplateGroup(const FGuid & TemplateId, const FRH_OnGetMatchmakingTemplateGroupCompleteDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|TemplateId|
|const FRH_OnGetMatchmakingTemplateGroupCompleteDelegateBlock &|Delegate|

#### Description

Search for a matchmaking template.


#### Parameters

TemplateId
: The matchmaking template to search for. 
Delegate
: Callback with the results of the search. 



### `BLUEPRINT_SearchMatchmakingTemplateGroup` <a id="classURH__MatchmakingBrowserCache_1a401e5ed7ec61a89b9c9bd9bfa711bd67"></a>

void BLUEPRINT_SearchMatchmakingTemplateGroup(const FGuid & TemplateId, const FRH_OnGetMatchmakingTemplateGroupCompleteDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|TemplateId|
|const FRH_OnGetMatchmakingTemplateGroupCompleteDynamicDelegate &|Delegate|

#### Description






### `SearchInstanceRequestTemplate` <a id="classURH__MatchmakingBrowserCache_1a3f8201f2b4185755194cea5b084b60f2"></a>

void SearchInstanceRequestTemplate(const FGuid & TemplateId, const FRH_OnGetInstanceRequestTemplateCompleteDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|TemplateId|
|const FRH_OnGetInstanceRequestTemplateCompleteDelegateBlock &|Delegate|

#### Description

Search for an instance launch template.


#### Parameters

TemplateId
: The matchmaking template to search for. 
Delegate
: Callback with the results of the search. 



### `BLUEPRINT_SearchInstanceRequestTemplate` <a id="classURH__MatchmakingBrowserCache_1a8a33bdd8eaf6dd18cea26c877436f526"></a>

void BLUEPRINT_SearchInstanceRequestTemplate(const FGuid & TemplateId, const FRH_OnGetInstanceRequestTemplateCompleteDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|TemplateId|
|const FRH_OnGetInstanceRequestTemplateCompleteDynamicDelegate &|Delegate|

#### Description






### `SearchRegions` <a id="classURH__MatchmakingBrowserCache_1a5d947800e76bf2a7f42a97f7b57d5c87"></a>

void SearchRegions(const FRH_OnRegionSearchCompleteDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnRegionSearchCompleteDelegateBlock &|Delegate|

#### Description

Search for matchmaking regions.


#### Parameters

Delegate
: Callback with the results of the search. 



### `BLUEPRINT_SearchRegions` <a id="classURH__MatchmakingBrowserCache_1a4c2d949c15795848d3f6218a12887832"></a>

void BLUEPRINT_SearchRegions(const FRH_OnRegionSearchCompleteDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_OnRegionSearchCompleteDynamicDelegate &|Delegate|

#### Description






### `GetQueue` <a id="classURH__MatchmakingBrowserCache_1ad5e5847ba5ab4fd96b6e8303bc757673"></a>

[URH_MatchmakingQueueInfo](/unreal-plugins/all/classurh__matchmakingqueueinfo/#classURH__MatchmakingQueueInfo) * GetQueue(const FString & QueueId)

#### Parameters

| Type | Name |
|------|------|
|const FString &|QueueId|

#### Description

Get a cached queue by Queue Id.




### `GetAllQueues` <a id="classURH__MatchmakingBrowserCache_1acc6cf6d685038c0c9c2104c8d36c6dda"></a>

FORCEINLINE TArray< [URH_MatchmakingQueueInfo](/unreal-plugins/all/classurh__matchmakingqueueinfo/#classURH__MatchmakingQueueInfo) * > GetAllQueues()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get all cached queues.




### `GetMatchmakingTemplateGroup` <a id="classURH__MatchmakingBrowserCache_1a768be90ca3e0b3d27f489b3faffb0b97"></a>

[URH_MatchmakingTemplateGroupInfo](/unreal-plugins/all/classurh__matchmakingtemplategroupinfo/#classURH__MatchmakingTemplateGroupInfo) * GetMatchmakingTemplateGroup(const FGuid & TemplateGroupId)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|TemplateGroupId|

#### Description

Get a cached matchmaking template by Template Id.




### `GetInstanceRequestTemplate` <a id="classURH__MatchmakingBrowserCache_1a42ac148127a03d9f6217910af1368828"></a>

[URH_InstanceRequestTemplate](/unreal-plugins/all/classurh__instancerequesttemplate/#classURH__InstanceRequestTemplate) * GetInstanceRequestTemplate(const FGuid & InstanceRequestTemplateId)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|InstanceRequestTemplateId|

#### Description

Get a cached instance request template by Template Id.




### `GetAllRegions` <a id="classURH__MatchmakingBrowserCache_1af72098f3ad79f03f4eebb0e156a244f5"></a>

const TArray< [FRHAPI_SiteSettings](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings) > & GetAllRegions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get all cached matchmaking regions.




### `ClearCache` <a id="classURH__MatchmakingBrowserCache_1a025eb8002aeeb328ea4dc90d9ddf0cb7"></a>

void ClearCache()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the cache of all queues and templates.




### `ImportAPIQueue` <a id="classURH__MatchmakingBrowserCache_1a2211b26aa34c82987f9c750dbd02e771"></a>

void ImportAPIQueue(const [FRHAPI_QueueConfigV2](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2) & APIQueue, const FString & ETag)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_QueueConfigV2](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2) &|APIQueue|
|const FString &|ETag|

#### Description

Imports queue info from an API call.


#### Parameters

APIQueue
: Queue info from API call. 
InETag
: ETag from API call. 



### `ImportAPITemplateGroup` <a id="classURH__MatchmakingBrowserCache_1a20a6a2c8c4557265571f0e34f8eb246d"></a>

void ImportAPITemplateGroup(const [FRHAPI_MatchMakingTemplateGroupV2](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2) & APITemplateGroup, const FString & ETag)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_MatchMakingTemplateGroupV2](/unreal-plugins/all/structfrhapi__matchmakingtemplategroupv2/#structFRHAPI__MatchMakingTemplateGroupV2) &|APITemplateGroup|
|const FString &|ETag|

#### Description

Imports template info from an API call.


#### Parameters

APITemplateGroup
: Template info from API call. 
InETag
: ETag from API call. 



### `ImportAPIInstanceRequestTemplate` <a id="classURH__MatchmakingBrowserCache_1aec281f583cfc8c2f2b9da701815afb4a"></a>

void ImportAPIInstanceRequestTemplate(const [FRHAPI_InstanceRequestTemplate](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate) & APITemplate, const FString & ETag)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_InstanceRequestTemplate](/unreal-plugins/all/structfrhapi__instancerequesttemplate/#structFRHAPI__InstanceRequestTemplate) &|APITemplate|
|const FString &|ETag|

#### Description

Imports template info from an API call.


#### Parameters

APITemplate
: Template info from API call. 
InETag
: ETag from API call. 




