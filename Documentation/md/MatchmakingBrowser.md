---
title: MatchmakingBrowser
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`URH_MatchmakingQueueInfo`](#classURH__MatchmakingQueueInfo) | Class to define a matchmaking queue.
`class `[`URH_MatchmakingTemplateGroupInfo`](#classURH__MatchmakingTemplateGroupInfo) | Class to organize a matchmaking Templates information.
`class `[`URH_MatchmakingProfileInfo`](#classURH__MatchmakingProfileInfo) | Class to organize a matchmaking Profiles information.
`class `[`URH_InstanceRequestTemplate`](#classURH__InstanceRequestTemplate) | Class to organize a Instance Request Templates information.
`class `[`URH_MatchmakingBrowserCache`](#classURH__MatchmakingBrowserCache) | Simple container class to hold matchmaking data, does not have its own auth context, relies upon getting it from elsewhere during calls, so that it can be used to cache across multiple players.
`struct `[`FRH_QueueSearchParams`](#structFRH__QueueSearchParams) | Struct to define queue search parameters.
`struct `[`FRH_QueueSearchResult`](#structFRH__QueueSearchResult) | Struct to define queue search results.

## class `URH_MatchmakingQueueInfo` <a id="classURH__MatchmakingQueueInfo"></a>

```
class URH_MatchmakingQueueInfo
  : public UObject
```

Class to define a matchmaking queue.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline const `[`FRHAPI_QueueConfigV2`](models/RHAPI_QueueConfigV2.md#structFRHAPI__QueueConfigV2)` & `[`GetQueueInfo`](#classURH__MatchmakingQueueInfo_1ad82fa170d34736f8d053802b6460bf9e)`() const` | Gets the queue info.
`public inline const FString & `[`GetETag`](#classURH__MatchmakingQueueInfo_1a443e3173f86a4cfac34d80133ec9cf82)`() const` | Gets the Etag for the queue info.
`public inline const FString & `[`GetQueueId`](#classURH__MatchmakingQueueInfo_1a9574234af5b1efe6b08f1a5a97ddb103)`() const` | The ID for the queue, should not be used for display purposes.
`public inline bool `[`IsActive`](#classURH__MatchmakingQueueInfo_1aeadf35b8cc5df0658a86aef82094f5aa)`() const` | Flag for whether or not the queue is active, and can be joined or sessions created from it.
`public inline void `[`ImportAPIQueue`](#classURH__MatchmakingQueueInfo_1af33b1de1236961da0b910ee1710e3bc5)`(const `[`FRHAPI_QueueConfigV2`](models/RHAPI_QueueConfigV2.md#structFRHAPI__QueueConfigV2)` & APIQueue,const FString & InETag)` | Imports queue info from an API call.
`public inline FString `[`GetDescription`](#classURH__MatchmakingQueueInfo_1ae7a5d3dd461eaa68dec8dada2e9ad3df)`() const` | Gets a description of the queue, display its id for debugging.

### Members

#### `public inline const `[`FRHAPI_QueueConfigV2`](models/RHAPI_QueueConfigV2.md#structFRHAPI__QueueConfigV2)` & `[`GetQueueInfo`](#classURH__MatchmakingQueueInfo_1ad82fa170d34736f8d053802b6460bf9e)`() const` <a id="classURH__MatchmakingQueueInfo_1ad82fa170d34736f8d053802b6460bf9e"></a>

Gets the queue info.

#### `public inline const FString & `[`GetETag`](#classURH__MatchmakingQueueInfo_1a443e3173f86a4cfac34d80133ec9cf82)`() const` <a id="classURH__MatchmakingQueueInfo_1a443e3173f86a4cfac34d80133ec9cf82"></a>

Gets the Etag for the queue info.

#### `public inline const FString & `[`GetQueueId`](#classURH__MatchmakingQueueInfo_1a9574234af5b1efe6b08f1a5a97ddb103)`() const` <a id="classURH__MatchmakingQueueInfo_1a9574234af5b1efe6b08f1a5a97ddb103"></a>

The ID for the queue, should not be used for display purposes.

#### `public inline bool `[`IsActive`](#classURH__MatchmakingQueueInfo_1aeadf35b8cc5df0658a86aef82094f5aa)`() const` <a id="classURH__MatchmakingQueueInfo_1aeadf35b8cc5df0658a86aef82094f5aa"></a>

Flag for whether or not the queue is active, and can be joined or sessions created from it.

#### `public inline void `[`ImportAPIQueue`](#classURH__MatchmakingQueueInfo_1af33b1de1236961da0b910ee1710e3bc5)`(const `[`FRHAPI_QueueConfigV2`](models/RHAPI_QueueConfigV2.md#structFRHAPI__QueueConfigV2)` & APIQueue,const FString & InETag)` <a id="classURH__MatchmakingQueueInfo_1af33b1de1236961da0b910ee1710e3bc5"></a>

Imports queue info from an API call.

#### Parameters
* `APIQueue` Queue info from API call. 

* `InETag` ETag from API call.

#### `public inline FString `[`GetDescription`](#classURH__MatchmakingQueueInfo_1ae7a5d3dd461eaa68dec8dada2e9ad3df)`() const` <a id="classURH__MatchmakingQueueInfo_1ae7a5d3dd461eaa68dec8dada2e9ad3df"></a>

Gets a description of the queue, display its id for debugging.

## class `URH_MatchmakingTemplateGroupInfo` <a id="classURH__MatchmakingTemplateGroupInfo"></a>

```
class URH_MatchmakingTemplateGroupInfo
  : public UObject
```

Class to organize a matchmaking Templates information.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline const `[`FRHAPI_MatchMakingTemplateGroupV2`](models/RHAPI_MatchMakingTemplateGroupV2.md#structFRHAPI__MatchMakingTemplateGroupV2)` & `[`GetInfo`](#classURH__MatchmakingTemplateGroupInfo_1ad54dc36738496269ffd1c955e167803b)`() const` | Gets the template info.
`public inline const FString & `[`GetETag`](#classURH__MatchmakingTemplateGroupInfo_1a5469f554d137118cc7d5f2e74955f033)`() const` | Gets the Etag for the template info.
`public inline const FGuid & `[`GetTemplateGroupId`](#classURH__MatchmakingTemplateGroupInfo_1a384a0999a402078854d4ad342f0570fa)`() const` | ID for this set of potential matchmaking templates.
`public inline TSet< int32 > `[`GetRequiredItemIds`](#classURH__MatchmakingTemplateGroupInfo_1adf14fcfb492d96bb8c3606720552b4c4)`() const` | **
`public inline const TArray< FGuid > `[`GetPossibleInstanceRequestTemplateIds`](#classURH__MatchmakingTemplateGroupInfo_1a9b2e0a4539408825329eff7f6ec07ae6)`() const` | ID for which instance launch template this queue will use.
`public inline void `[`ImportAPITemplateGroup`](#classURH__MatchmakingTemplateGroupInfo_1ab2f3a97cf393d864d4897981125e50c6)`(const `[`FRHAPI_MatchMakingTemplateGroupV2`](models/RHAPI_MatchMakingTemplateGroupV2.md#structFRHAPI__MatchMakingTemplateGroupV2)` & APITemplateGroup,const FString & InETag)` | Imports template info from an API call.
`public inline FString `[`GetDescription`](#classURH__MatchmakingTemplateGroupInfo_1a7ac296d74658aeb6d4ef0f20bb227030)`() const` | Gets a description of the template, display its id for debugging.

### Members

#### `public inline const `[`FRHAPI_MatchMakingTemplateGroupV2`](models/RHAPI_MatchMakingTemplateGroupV2.md#structFRHAPI__MatchMakingTemplateGroupV2)` & `[`GetInfo`](#classURH__MatchmakingTemplateGroupInfo_1ad54dc36738496269ffd1c955e167803b)`() const` <a id="classURH__MatchmakingTemplateGroupInfo_1ad54dc36738496269ffd1c955e167803b"></a>

Gets the template info.

#### `public inline const FString & `[`GetETag`](#classURH__MatchmakingTemplateGroupInfo_1a5469f554d137118cc7d5f2e74955f033)`() const` <a id="classURH__MatchmakingTemplateGroupInfo_1a5469f554d137118cc7d5f2e74955f033"></a>

Gets the Etag for the template info.

#### `public inline const FGuid & `[`GetTemplateGroupId`](#classURH__MatchmakingTemplateGroupInfo_1a384a0999a402078854d4ad342f0570fa)`() const` <a id="classURH__MatchmakingTemplateGroupInfo_1a384a0999a402078854d4ad342f0570fa"></a>

ID for this set of potential matchmaking templates.

#### `public inline TSet< int32 > `[`GetRequiredItemIds`](#classURH__MatchmakingTemplateGroupInfo_1adf14fcfb492d96bb8c3606720552b4c4)`() const` <a id="classURH__MatchmakingTemplateGroupInfo_1adf14fcfb492d96bb8c3606720552b4c4"></a>

**

List of the different matchmaking templates that could be used. The config is chosen based on a set of rules in each MatchMakingTemplate object. If there are no rules, it's the default template */

Set of all the item ids that are required to validate every rule contained in this template group

#### `public inline const TArray< FGuid > `[`GetPossibleInstanceRequestTemplateIds`](#classURH__MatchmakingTemplateGroupInfo_1a9b2e0a4539408825329eff7f6ec07ae6)`() const` <a id="classURH__MatchmakingTemplateGroupInfo_1a9b2e0a4539408825329eff7f6ec07ae6"></a>

ID for which instance launch template this queue will use.

#### `public inline void `[`ImportAPITemplateGroup`](#classURH__MatchmakingTemplateGroupInfo_1ab2f3a97cf393d864d4897981125e50c6)`(const `[`FRHAPI_MatchMakingTemplateGroupV2`](models/RHAPI_MatchMakingTemplateGroupV2.md#structFRHAPI__MatchMakingTemplateGroupV2)` & APITemplateGroup,const FString & InETag)` <a id="classURH__MatchmakingTemplateGroupInfo_1ab2f3a97cf393d864d4897981125e50c6"></a>

Imports template info from an API call.

#### Parameters
* `APITemplateGroup` Template info from API call. 

* `InETag` ETag from API call.

#### `public inline FString `[`GetDescription`](#classURH__MatchmakingTemplateGroupInfo_1a7ac296d74658aeb6d4ef0f20bb227030)`() const` <a id="classURH__MatchmakingTemplateGroupInfo_1a7ac296d74658aeb6d4ef0f20bb227030"></a>

Gets a description of the template, display its id for debugging.

## class `URH_MatchmakingProfileInfo` <a id="classURH__MatchmakingProfileInfo"></a>

```
class URH_MatchmakingProfileInfo
  : public UObject
```

Class to organize a matchmaking Profiles information.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline const `[`FRHAPI_MatchMakingProfileV2`](models/RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & `[`GetProfile`](#classURH__MatchmakingProfileInfo_1a7e7bedc948b5df9807c65049887a9e94)`() const` | Gets the template info.
`public inline const FString & `[`GetETag`](#classURH__MatchmakingProfileInfo_1a7df50ac8372ec5355d06b60a16df508d)`() const` | Gets the Etag for the template info.
`public inline const FString & `[`GetProfileId`](#classURH__MatchmakingProfileInfo_1a92f892bc995361fb97c8cbc8c66a44da)`() const` | ID for this set of potential matchmaking templates.
`public inline void `[`ImportAPIProfile`](#classURH__MatchmakingProfileInfo_1a9dd1be36d55cc15ef0ece4a15bcb94bd)`(const `[`FRHAPI_MatchMakingProfileV2`](models/RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & APIProfile,const FString & InETag)` | Imports profile info from an API call.
`public inline FString `[`GetDescription`](#classURH__MatchmakingProfileInfo_1a46ec1205f947cb0f88626d6f2c121c6f)`() const` | Gets a description of the template, display its id for debugging.

### Members

#### `public inline const `[`FRHAPI_MatchMakingProfileV2`](models/RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & `[`GetProfile`](#classURH__MatchmakingProfileInfo_1a7e7bedc948b5df9807c65049887a9e94)`() const` <a id="classURH__MatchmakingProfileInfo_1a7e7bedc948b5df9807c65049887a9e94"></a>

Gets the template info.

#### `public inline const FString & `[`GetETag`](#classURH__MatchmakingProfileInfo_1a7df50ac8372ec5355d06b60a16df508d)`() const` <a id="classURH__MatchmakingProfileInfo_1a7df50ac8372ec5355d06b60a16df508d"></a>

Gets the Etag for the template info.

#### `public inline const FString & `[`GetProfileId`](#classURH__MatchmakingProfileInfo_1a92f892bc995361fb97c8cbc8c66a44da)`() const` <a id="classURH__MatchmakingProfileInfo_1a92f892bc995361fb97c8cbc8c66a44da"></a>

ID for this set of potential matchmaking templates.

#### `public inline void `[`ImportAPIProfile`](#classURH__MatchmakingProfileInfo_1a9dd1be36d55cc15ef0ece4a15bcb94bd)`(const `[`FRHAPI_MatchMakingProfileV2`](models/RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & APIProfile,const FString & InETag)` <a id="classURH__MatchmakingProfileInfo_1a9dd1be36d55cc15ef0ece4a15bcb94bd"></a>

Imports profile info from an API call.

#### Parameters
* `APIProfile` Profile info from API call. 

* `InETag` ETag from API call.

#### `public inline FString `[`GetDescription`](#classURH__MatchmakingProfileInfo_1a46ec1205f947cb0f88626d6f2c121c6f)`() const` <a id="classURH__MatchmakingProfileInfo_1a46ec1205f947cb0f88626d6f2c121c6f"></a>

Gets a description of the template, display its id for debugging.

## class `URH_InstanceRequestTemplate` <a id="classURH__InstanceRequestTemplate"></a>

```
class URH_InstanceRequestTemplate
  : public UObject
```

Class to organize a Instance Request Templates information.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline const `[`FRHAPI_InstanceRequestTemplate`](models/RHAPI_InstanceRequestTemplate.md#structFRHAPI__InstanceRequestTemplate)` & `[`GetInfo`](#classURH__InstanceRequestTemplate_1aecf119da8d779218b9b3e855e356e7f9)`() const` | Gets the template info.
`public inline const FString & `[`GetETag`](#classURH__InstanceRequestTemplate_1aaa58e4713d9d5691feeb8ebec31f62d4)`() const` | Gets the Etag for the template info.
`public inline const FGuid & `[`GetInstanceRequestTemplateId`](#classURH__InstanceRequestTemplate_1a2bb354e782f456b84951d99c0da5b873)`() const` | ID to uniquely identify this instance launch template.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#classURH__InstanceRequestTemplate_1a600cd1f87cca0d28e4770930af3b19c4)`() const` | Custom data that will be passed to the session during the instance launch request.
`public inline void `[`ImportAPIInstanceLaunchTemplate`](#classURH__InstanceRequestTemplate_1a15872173e96e3437b0eb2151cdbe8c1e)`(const `[`FRHAPI_InstanceRequestTemplate`](models/RHAPI_InstanceRequestTemplate.md#structFRHAPI__InstanceRequestTemplate)` & APITemplate,const FString & InETag)` | Imports template info from an API call.
`public inline FString `[`GetDescription`](#classURH__InstanceRequestTemplate_1aefa7958ae9ac8f8f518660ddd3ff19fb)`() const` | Gets a description of the template, display its id for debugging.

### Members

#### `public inline const `[`FRHAPI_InstanceRequestTemplate`](models/RHAPI_InstanceRequestTemplate.md#structFRHAPI__InstanceRequestTemplate)` & `[`GetInfo`](#classURH__InstanceRequestTemplate_1aecf119da8d779218b9b3e855e356e7f9)`() const` <a id="classURH__InstanceRequestTemplate_1aecf119da8d779218b9b3e855e356e7f9"></a>

Gets the template info.

#### `public inline const FString & `[`GetETag`](#classURH__InstanceRequestTemplate_1aaa58e4713d9d5691feeb8ebec31f62d4)`() const` <a id="classURH__InstanceRequestTemplate_1aaa58e4713d9d5691feeb8ebec31f62d4"></a>

Gets the Etag for the template info.

#### `public inline const FGuid & `[`GetInstanceRequestTemplateId`](#classURH__InstanceRequestTemplate_1a2bb354e782f456b84951d99c0da5b873)`() const` <a id="classURH__InstanceRequestTemplate_1a2bb354e782f456b84951d99c0da5b873"></a>

ID to uniquely identify this instance launch template.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#classURH__InstanceRequestTemplate_1a600cd1f87cca0d28e4770930af3b19c4)`() const` <a id="classURH__InstanceRequestTemplate_1a600cd1f87cca0d28e4770930af3b19c4"></a>

Custom data that will be passed to the session during the instance launch request.

#### `public inline void `[`ImportAPIInstanceLaunchTemplate`](#classURH__InstanceRequestTemplate_1a15872173e96e3437b0eb2151cdbe8c1e)`(const `[`FRHAPI_InstanceRequestTemplate`](models/RHAPI_InstanceRequestTemplate.md#structFRHAPI__InstanceRequestTemplate)` & APITemplate,const FString & InETag)` <a id="classURH__InstanceRequestTemplate_1a15872173e96e3437b0eb2151cdbe8c1e"></a>

Imports template info from an API call.

#### Parameters
* `APITemplate` Template info from API call. 

* `InETag` ETag from API call.

#### `public inline FString `[`GetDescription`](#classURH__InstanceRequestTemplate_1aefa7958ae9ac8f8f518660ddd3ff19fb)`() const` <a id="classURH__InstanceRequestTemplate_1aefa7958ae9ac8f8f518660ddd3ff19fb"></a>

Gets a description of the template, display its id for debugging.

## class `URH_MatchmakingBrowserCache` <a id="classURH__MatchmakingBrowserCache"></a>

```
class URH_MatchmakingBrowserCache
  : public URH_GameInstanceSubsystemPlugin
```

Simple container class to hold matchmaking data, does not have its own auth context, relies upon getting it from elsewhere during calls, so that it can be used to cache across multiple players.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FRegionSettingsUpdatedDelegate `[`OnRegionsUpdatedNative`](#classURH__MatchmakingBrowserCache_1aade4d528b8dc3dd6ddb864280fd161c8) | Delegate to listen for matchmaking regions updated.
`public FRegionSettingsUpdatedDynamicDelegate `[`OnRegionsUpdated`](#classURH__MatchmakingBrowserCache_1a861943c4bbe2929594b1acc7b528974f) | 
`public  `[`URH_MatchmakingBrowserCache`](#classURH__MatchmakingBrowserCache_1addfabfbe829a51e5974402f307f55090)`()` | Default constructor.
`public void `[`SearchQueues`](#classURH__MatchmakingBrowserCache_1ac7e837d18b72c1870de9081fa2570872)`(const `[`FRH_QueueSearchParams`](MatchmakingBrowser.md#structFRH__QueueSearchParams)` & params,const FRH_OnQueueSearchCompleteDelegateBlock & Delegate)` | Search for queues.
`public void `[`SearchMatchmakingTemplateGroup`](#classURH__MatchmakingBrowserCache_1ad03ac193720eba4073da3d52854d7360)`(const FGuid & TemplateId,const FRH_OnGetMatchmakingTemplateGroupCompleteDelegateBlock & Delegate)` | Search for a matchmaking template.
`public void `[`SearchMatchmakingProfile`](#classURH__MatchmakingBrowserCache_1ad120b4e1486d486c43a63460e8f601dd)`(const FString & ProfileId,const FRH_OnGetMatchmakingProfileCompleteDelegateBlock & Delegate)` | Search for a matchmaking profiles.
`public void `[`SearchInstanceRequestTemplate`](#classURH__MatchmakingBrowserCache_1a3f8201f2b4185755194cea5b084b60f2)`(const FGuid & TemplateId,const FRH_OnGetInstanceRequestTemplateCompleteDelegateBlock & Delegate)` | Search for an instance launch template.
`public void `[`SearchRegions`](#classURH__MatchmakingBrowserCache_1a53db11131e14e987ea8fa70e8d5571d0)`(int32 Cursor,const FRH_OnRegionSearchCompleteDelegateBlock & Delegate)` | Search for matchmaking regions.
`public inline `[`URH_MatchmakingQueueInfo`](MatchmakingBrowser.md#classURH__MatchmakingQueueInfo)` * `[`GetQueue`](#classURH__MatchmakingBrowserCache_1ad5e5847ba5ab4fd96b6e8303bc757673)`(const FString & QueueId) const` | Get a cached queue by Queue Id.
`public inline `[`URH_MatchmakingTemplateGroupInfo`](MatchmakingBrowser.md#classURH__MatchmakingTemplateGroupInfo)` * `[`GetMatchmakingTemplateGroup`](#classURH__MatchmakingBrowserCache_1a768be90ca3e0b3d27f489b3faffb0b97)`(const FGuid & TemplateGroupId) const` | Get a cached matchmaking template by Template Id.
`public inline `[`URH_MatchmakingProfileInfo`](MatchmakingBrowser.md#classURH__MatchmakingProfileInfo)` * `[`GetMatchmakingProfile`](#classURH__MatchmakingBrowserCache_1a2866e2052e00350d9d8cdb93b5ea237a)`(const FString & ProfileId) const` | Get a cached matchmaking template by Template Id.
`public inline `[`URH_InstanceRequestTemplate`](MatchmakingBrowser.md#classURH__InstanceRequestTemplate)` * `[`GetInstanceRequestTemplate`](#classURH__MatchmakingBrowserCache_1a42ac148127a03d9f6217910af1368828)`(const FGuid & InstanceRequestTemplateId) const` | Get a cached instance request template by Template Id.
`public inline bool `[`GetRegion`](#classURH__MatchmakingBrowserCache_1aec49b23575bbcccf04c0968ecfeb8aac)`(const FString & RegionId,`[`FRHAPI_Region`](models/RHAPI_Region.md#structFRHAPI__Region)` & OutRegion) const` | Get a cached region by Region Id.
`public inline FORCEINLINE TArray< `[`URH_MatchmakingQueueInfo`](MatchmakingBrowser.md#classURH__MatchmakingQueueInfo)` * > `[`GetAllQueues`](#classURH__MatchmakingBrowserCache_1acc6cf6d685038c0c9c2104c8d36c6dda)`() const` | Get all cached queues.
`public inline const TArray< `[`URH_MatchmakingTemplateGroupInfo`](MatchmakingBrowser.md#classURH__MatchmakingTemplateGroupInfo)` * > `[`GetAllMatchmakingTemplateGroups`](#classURH__MatchmakingBrowserCache_1a317f7e3dfacb2655b90f9b800b44a3ee)`() const` | Get all cached matchmaking templates.
`public inline const TArray< `[`URH_MatchmakingProfileInfo`](MatchmakingBrowser.md#classURH__MatchmakingProfileInfo)` * > `[`GetAllMatchmakingProfiles`](#classURH__MatchmakingBrowserCache_1a9219e421c0d36387df20d83672003753)`() const` | Get all cached matchmaking profiles.
`public inline const TArray< `[`URH_InstanceRequestTemplate`](MatchmakingBrowser.md#classURH__InstanceRequestTemplate)` * > `[`GetAllInstanceRequestTemplates`](#classURH__MatchmakingBrowserCache_1a45a7dcf847d413bd118f942dd770130b)`() const` | Get all cached instance request templates.
`public inline TArray< `[`FRHAPI_Region`](models/RHAPI_Region.md#structFRHAPI__Region)` > `[`GetAllRegions`](#classURH__MatchmakingBrowserCache_1a6522275437304f9fa12557171876b793)`() const` | Get all cached matchmaking regions.
`public inline void `[`ClearCache`](#classURH__MatchmakingBrowserCache_1a025eb8002aeeb328ea4dc90d9ddf0cb7)`()` | Clears the cache of all queues and templates.
`public inline void `[`ClearRegionsCache`](#classURH__MatchmakingBrowserCache_1ab2229d85ce71d9bab6bd7432e510c31a)`()` | Clears the cache of regions.
`public void `[`ImportAPIQueue`](#classURH__MatchmakingBrowserCache_1a2211b26aa34c82987f9c750dbd02e771)`(const `[`FRHAPI_QueueConfigV2`](models/RHAPI_QueueConfigV2.md#structFRHAPI__QueueConfigV2)` & APIQueue,const FString & ETag)` | Imports queue info from an API call.
`public void `[`ImportAPIMatchmakingTemplateGroup`](#classURH__MatchmakingBrowserCache_1a5c027f8f2825c8ab12993cc68b3e8d6f)`(const `[`FRHAPI_MatchMakingTemplateGroupV2`](models/RHAPI_MatchMakingTemplateGroupV2.md#structFRHAPI__MatchMakingTemplateGroupV2)` & APITemplateGroup,const FString & ETag)` | Imports template info from an API call.
`public void `[`ImportAPIMatchmakingProfile`](#classURH__MatchmakingBrowserCache_1a9d7b941805808803430cfc1ca7fbf939)`(const `[`FRHAPI_MatchMakingProfileV2`](models/RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & APIProfile,const FString & ETag)` | Imports profile info from an API call.
`public void `[`ImportAPIInstanceRequestTemplate`](#classURH__MatchmakingBrowserCache_1aec281f583cfc8c2f2b9da701815afb4a)`(const `[`FRHAPI_InstanceRequestTemplate`](models/RHAPI_InstanceRequestTemplate.md#structFRHAPI__InstanceRequestTemplate)` & APITemplate,const FString & ETag)` | Imports template info from an API call.
`public void `[`ImportAPIRegion`](#classURH__MatchmakingBrowserCache_1a194cefa32b1472541aebddac986d605b)`(const `[`FRHAPI_Region`](models/RHAPI_Region.md#structFRHAPI__Region)` & APIRegion)` | Imports region info from an API call.
`protected TMap< FString, `[`URH_MatchmakingQueueInfo`](MatchmakingBrowser.md#classURH__MatchmakingQueueInfo)` * > `[`QueueCache`](#classURH__MatchmakingBrowserCache_1a2a75852ef2d0fb69f17d52bbacfbc3af) | Map of Queue Id to Queue Infos.
`protected TMap< FGuid, `[`URH_MatchmakingTemplateGroupInfo`](MatchmakingBrowser.md#classURH__MatchmakingTemplateGroupInfo)` * > `[`MatchmakingTemplateGroupCache`](#classURH__MatchmakingBrowserCache_1a1bf4997104b834d957c1f73e1d5937bf) | Map of Template Id to Matchmaking Template Group Infos.
`protected TMap< FString, `[`URH_MatchmakingProfileInfo`](MatchmakingBrowser.md#classURH__MatchmakingProfileInfo)` * > `[`MatchmakingProfileCache`](#classURH__MatchmakingBrowserCache_1a0db6df5fa481ad82411d61ab6017647c) | Map of Matchmaking Profile Id to Profile Objects.
`protected TMap< FGuid, `[`URH_InstanceRequestTemplate`](MatchmakingBrowser.md#classURH__InstanceRequestTemplate)` * > `[`InstanceRequestTemplateCache`](#classURH__MatchmakingBrowserCache_1a0f80a47c99dc221a9d2d3a46a08f7c84) | Map of Template Id to Instance Launch Template Infos.
`protected TMap< FString, `[`FRHAPI_Region`](models/RHAPI_Region.md#structFRHAPI__Region)` > `[`RegionsCache`](#classURH__MatchmakingBrowserCache_1abde2017e9ec5d0dbb74255fc2f06d64e) | Array of Regions.
`protected int32 `[`LastRegionCursor`](#classURH__MatchmakingBrowserCache_1a34230345f419f688cb9cddcacd78376b) | 

### Members

#### `public FRegionSettingsUpdatedDelegate `[`OnRegionsUpdatedNative`](#classURH__MatchmakingBrowserCache_1aade4d528b8dc3dd6ddb864280fd161c8) <a id="classURH__MatchmakingBrowserCache_1aade4d528b8dc3dd6ddb864280fd161c8"></a>

Delegate to listen for matchmaking regions updated.

#### `public FRegionSettingsUpdatedDynamicDelegate `[`OnRegionsUpdated`](#classURH__MatchmakingBrowserCache_1a861943c4bbe2929594b1acc7b528974f) <a id="classURH__MatchmakingBrowserCache_1a861943c4bbe2929594b1acc7b528974f"></a>

#### `public  `[`URH_MatchmakingBrowserCache`](#classURH__MatchmakingBrowserCache_1addfabfbe829a51e5974402f307f55090)`()` <a id="classURH__MatchmakingBrowserCache_1addfabfbe829a51e5974402f307f55090"></a>

Default constructor.

#### `public void `[`SearchQueues`](#classURH__MatchmakingBrowserCache_1ac7e837d18b72c1870de9081fa2570872)`(const `[`FRH_QueueSearchParams`](MatchmakingBrowser.md#structFRH__QueueSearchParams)` & params,const FRH_OnQueueSearchCompleteDelegateBlock & Delegate)` <a id="classURH__MatchmakingBrowserCache_1ac7e837d18b72c1870de9081fa2570872"></a>

Search for queues.

#### Parameters
* `params` The search params to use for the given search. 

* `Delegate` Callback with the results of the search.

#### `public void `[`SearchMatchmakingTemplateGroup`](#classURH__MatchmakingBrowserCache_1ad03ac193720eba4073da3d52854d7360)`(const FGuid & TemplateId,const FRH_OnGetMatchmakingTemplateGroupCompleteDelegateBlock & Delegate)` <a id="classURH__MatchmakingBrowserCache_1ad03ac193720eba4073da3d52854d7360"></a>

Search for a matchmaking template.

#### Parameters
* `TemplateId` The matchmaking template to search for. 

* `Delegate` Callback with the results of the search.

#### `public void `[`SearchMatchmakingProfile`](#classURH__MatchmakingBrowserCache_1ad120b4e1486d486c43a63460e8f601dd)`(const FString & ProfileId,const FRH_OnGetMatchmakingProfileCompleteDelegateBlock & Delegate)` <a id="classURH__MatchmakingBrowserCache_1ad120b4e1486d486c43a63460e8f601dd"></a>

Search for a matchmaking profiles.

#### Parameters
* `ProfileId` The matchmaking profile to search for. 

* `Delegate` Callback with the results of the search.

#### `public void `[`SearchInstanceRequestTemplate`](#classURH__MatchmakingBrowserCache_1a3f8201f2b4185755194cea5b084b60f2)`(const FGuid & TemplateId,const FRH_OnGetInstanceRequestTemplateCompleteDelegateBlock & Delegate)` <a id="classURH__MatchmakingBrowserCache_1a3f8201f2b4185755194cea5b084b60f2"></a>

Search for an instance launch template.

#### Parameters
* `TemplateId` The matchmaking template to search for. 

* `Delegate` Callback with the results of the search.

#### `public void `[`SearchRegions`](#classURH__MatchmakingBrowserCache_1a53db11131e14e987ea8fa70e8d5571d0)`(int32 Cursor,const FRH_OnRegionSearchCompleteDelegateBlock & Delegate)` <a id="classURH__MatchmakingBrowserCache_1a53db11131e14e987ea8fa70e8d5571d0"></a>

Search for matchmaking regions.

#### Parameters
* `Delegate` Callback with the results of the search.

#### `public inline `[`URH_MatchmakingQueueInfo`](MatchmakingBrowser.md#classURH__MatchmakingQueueInfo)` * `[`GetQueue`](#classURH__MatchmakingBrowserCache_1ad5e5847ba5ab4fd96b6e8303bc757673)`(const FString & QueueId) const` <a id="classURH__MatchmakingBrowserCache_1ad5e5847ba5ab4fd96b6e8303bc757673"></a>

Get a cached queue by Queue Id.

#### `public inline `[`URH_MatchmakingTemplateGroupInfo`](MatchmakingBrowser.md#classURH__MatchmakingTemplateGroupInfo)` * `[`GetMatchmakingTemplateGroup`](#classURH__MatchmakingBrowserCache_1a768be90ca3e0b3d27f489b3faffb0b97)`(const FGuid & TemplateGroupId) const` <a id="classURH__MatchmakingBrowserCache_1a768be90ca3e0b3d27f489b3faffb0b97"></a>

Get a cached matchmaking template by Template Id.

#### `public inline `[`URH_MatchmakingProfileInfo`](MatchmakingBrowser.md#classURH__MatchmakingProfileInfo)` * `[`GetMatchmakingProfile`](#classURH__MatchmakingBrowserCache_1a2866e2052e00350d9d8cdb93b5ea237a)`(const FString & ProfileId) const` <a id="classURH__MatchmakingBrowserCache_1a2866e2052e00350d9d8cdb93b5ea237a"></a>

Get a cached matchmaking template by Template Id.

#### `public inline `[`URH_InstanceRequestTemplate`](MatchmakingBrowser.md#classURH__InstanceRequestTemplate)` * `[`GetInstanceRequestTemplate`](#classURH__MatchmakingBrowserCache_1a42ac148127a03d9f6217910af1368828)`(const FGuid & InstanceRequestTemplateId) const` <a id="classURH__MatchmakingBrowserCache_1a42ac148127a03d9f6217910af1368828"></a>

Get a cached instance request template by Template Id.

#### `public inline bool `[`GetRegion`](#classURH__MatchmakingBrowserCache_1aec49b23575bbcccf04c0968ecfeb8aac)`(const FString & RegionId,`[`FRHAPI_Region`](models/RHAPI_Region.md#structFRHAPI__Region)` & OutRegion) const` <a id="classURH__MatchmakingBrowserCache_1aec49b23575bbcccf04c0968ecfeb8aac"></a>

Get a cached region by Region Id.

#### `public inline FORCEINLINE TArray< `[`URH_MatchmakingQueueInfo`](MatchmakingBrowser.md#classURH__MatchmakingQueueInfo)` * > `[`GetAllQueues`](#classURH__MatchmakingBrowserCache_1acc6cf6d685038c0c9c2104c8d36c6dda)`() const` <a id="classURH__MatchmakingBrowserCache_1acc6cf6d685038c0c9c2104c8d36c6dda"></a>

Get all cached queues.

#### `public inline const TArray< `[`URH_MatchmakingTemplateGroupInfo`](MatchmakingBrowser.md#classURH__MatchmakingTemplateGroupInfo)` * > `[`GetAllMatchmakingTemplateGroups`](#classURH__MatchmakingBrowserCache_1a317f7e3dfacb2655b90f9b800b44a3ee)`() const` <a id="classURH__MatchmakingBrowserCache_1a317f7e3dfacb2655b90f9b800b44a3ee"></a>

Get all cached matchmaking templates.

#### `public inline const TArray< `[`URH_MatchmakingProfileInfo`](MatchmakingBrowser.md#classURH__MatchmakingProfileInfo)` * > `[`GetAllMatchmakingProfiles`](#classURH__MatchmakingBrowserCache_1a9219e421c0d36387df20d83672003753)`() const` <a id="classURH__MatchmakingBrowserCache_1a9219e421c0d36387df20d83672003753"></a>

Get all cached matchmaking profiles.

#### `public inline const TArray< `[`URH_InstanceRequestTemplate`](MatchmakingBrowser.md#classURH__InstanceRequestTemplate)` * > `[`GetAllInstanceRequestTemplates`](#classURH__MatchmakingBrowserCache_1a45a7dcf847d413bd118f942dd770130b)`() const` <a id="classURH__MatchmakingBrowserCache_1a45a7dcf847d413bd118f942dd770130b"></a>

Get all cached instance request templates.

#### `public inline TArray< `[`FRHAPI_Region`](models/RHAPI_Region.md#structFRHAPI__Region)` > `[`GetAllRegions`](#classURH__MatchmakingBrowserCache_1a6522275437304f9fa12557171876b793)`() const` <a id="classURH__MatchmakingBrowserCache_1a6522275437304f9fa12557171876b793"></a>

Get all cached matchmaking regions.

#### `public inline void `[`ClearCache`](#classURH__MatchmakingBrowserCache_1a025eb8002aeeb328ea4dc90d9ddf0cb7)`()` <a id="classURH__MatchmakingBrowserCache_1a025eb8002aeeb328ea4dc90d9ddf0cb7"></a>

Clears the cache of all queues and templates.

#### `public inline void `[`ClearRegionsCache`](#classURH__MatchmakingBrowserCache_1ab2229d85ce71d9bab6bd7432e510c31a)`()` <a id="classURH__MatchmakingBrowserCache_1ab2229d85ce71d9bab6bd7432e510c31a"></a>

Clears the cache of regions.

#### `public void `[`ImportAPIQueue`](#classURH__MatchmakingBrowserCache_1a2211b26aa34c82987f9c750dbd02e771)`(const `[`FRHAPI_QueueConfigV2`](models/RHAPI_QueueConfigV2.md#structFRHAPI__QueueConfigV2)` & APIQueue,const FString & ETag)` <a id="classURH__MatchmakingBrowserCache_1a2211b26aa34c82987f9c750dbd02e771"></a>

Imports queue info from an API call.

#### Parameters
* `APIQueue` Queue info from API call. 

* `InETag` ETag from API call.

#### `public void `[`ImportAPIMatchmakingTemplateGroup`](#classURH__MatchmakingBrowserCache_1a5c027f8f2825c8ab12993cc68b3e8d6f)`(const `[`FRHAPI_MatchMakingTemplateGroupV2`](models/RHAPI_MatchMakingTemplateGroupV2.md#structFRHAPI__MatchMakingTemplateGroupV2)` & APITemplateGroup,const FString & ETag)` <a id="classURH__MatchmakingBrowserCache_1a5c027f8f2825c8ab12993cc68b3e8d6f"></a>

Imports template info from an API call.

#### Parameters
* `APITemplateGroup` Template info from API call. 

* `InETag` ETag from API call.

#### `public void `[`ImportAPIMatchmakingProfile`](#classURH__MatchmakingBrowserCache_1a9d7b941805808803430cfc1ca7fbf939)`(const `[`FRHAPI_MatchMakingProfileV2`](models/RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & APIProfile,const FString & ETag)` <a id="classURH__MatchmakingBrowserCache_1a9d7b941805808803430cfc1ca7fbf939"></a>

Imports profile info from an API call.

#### Parameters
* `APIProfile` Profile info from API call. 

* `InETag` ETag from API call.

#### `public void `[`ImportAPIInstanceRequestTemplate`](#classURH__MatchmakingBrowserCache_1aec281f583cfc8c2f2b9da701815afb4a)`(const `[`FRHAPI_InstanceRequestTemplate`](models/RHAPI_InstanceRequestTemplate.md#structFRHAPI__InstanceRequestTemplate)` & APITemplate,const FString & ETag)` <a id="classURH__MatchmakingBrowserCache_1aec281f583cfc8c2f2b9da701815afb4a"></a>

Imports template info from an API call.

#### Parameters
* `APITemplate` Template info from API call. 

* `InETag` ETag from API call.

#### `public void `[`ImportAPIRegion`](#classURH__MatchmakingBrowserCache_1a194cefa32b1472541aebddac986d605b)`(const `[`FRHAPI_Region`](models/RHAPI_Region.md#structFRHAPI__Region)` & APIRegion)` <a id="classURH__MatchmakingBrowserCache_1a194cefa32b1472541aebddac986d605b"></a>

Imports region info from an API call.

#### Parameters
* `APIRegions` Region info from API call.

#### `protected TMap< FString, `[`URH_MatchmakingQueueInfo`](MatchmakingBrowser.md#classURH__MatchmakingQueueInfo)` * > `[`QueueCache`](#classURH__MatchmakingBrowserCache_1a2a75852ef2d0fb69f17d52bbacfbc3af) <a id="classURH__MatchmakingBrowserCache_1a2a75852ef2d0fb69f17d52bbacfbc3af"></a>

Map of Queue Id to Queue Infos.

#### `protected TMap< FGuid, `[`URH_MatchmakingTemplateGroupInfo`](MatchmakingBrowser.md#classURH__MatchmakingTemplateGroupInfo)` * > `[`MatchmakingTemplateGroupCache`](#classURH__MatchmakingBrowserCache_1a1bf4997104b834d957c1f73e1d5937bf) <a id="classURH__MatchmakingBrowserCache_1a1bf4997104b834d957c1f73e1d5937bf"></a>

Map of Template Id to Matchmaking Template Group Infos.

#### `protected TMap< FString, `[`URH_MatchmakingProfileInfo`](MatchmakingBrowser.md#classURH__MatchmakingProfileInfo)` * > `[`MatchmakingProfileCache`](#classURH__MatchmakingBrowserCache_1a0db6df5fa481ad82411d61ab6017647c) <a id="classURH__MatchmakingBrowserCache_1a0db6df5fa481ad82411d61ab6017647c"></a>

Map of Matchmaking Profile Id to Profile Objects.

#### `protected TMap< FGuid, `[`URH_InstanceRequestTemplate`](MatchmakingBrowser.md#classURH__InstanceRequestTemplate)` * > `[`InstanceRequestTemplateCache`](#classURH__MatchmakingBrowserCache_1a0f80a47c99dc221a9d2d3a46a08f7c84) <a id="classURH__MatchmakingBrowserCache_1a0f80a47c99dc221a9d2d3a46a08f7c84"></a>

Map of Template Id to Instance Launch Template Infos.

#### `protected TMap< FString, `[`FRHAPI_Region`](models/RHAPI_Region.md#structFRHAPI__Region)` > `[`RegionsCache`](#classURH__MatchmakingBrowserCache_1abde2017e9ec5d0dbb74255fc2f06d64e) <a id="classURH__MatchmakingBrowserCache_1abde2017e9ec5d0dbb74255fc2f06d64e"></a>

Array of Regions.

#### `protected int32 `[`LastRegionCursor`](#classURH__MatchmakingBrowserCache_1a34230345f419f688cb9cddcacd78376b) <a id="classURH__MatchmakingBrowserCache_1a34230345f419f688cb9cddcacd78376b"></a>

## struct `FRH_QueueSearchParams` <a id="structFRH__QueueSearchParams"></a>

Struct to define queue search parameters.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`Cursor`](#structFRH__QueueSearchParams_1abf27a826b809bd35807aac0254deb878) | The Cursor location to start the search.
`public int32 `[`PageSize`](#structFRH__QueueSearchParams_1a0b28136848b884be15762f3716404fdf) | The size of page to return from the search.
`public inline  `[`FRH_QueueSearchParams`](#structFRH__QueueSearchParams_1a153cbb740b4d9dc1838bbdd78618bfd0)`()` | Defautl constructor.
`public inline FString `[`GetDescription`](#structFRH__QueueSearchParams_1ab823674f218b51fae0b3407322c8b3a0)`() const` | Gets a description of the search params for debugging.

### Members

#### `public int32 `[`Cursor`](#structFRH__QueueSearchParams_1abf27a826b809bd35807aac0254deb878) <a id="structFRH__QueueSearchParams_1abf27a826b809bd35807aac0254deb878"></a>

The Cursor location to start the search.

#### `public int32 `[`PageSize`](#structFRH__QueueSearchParams_1a0b28136848b884be15762f3716404fdf) <a id="structFRH__QueueSearchParams_1a0b28136848b884be15762f3716404fdf"></a>

The size of page to return from the search.

#### `public inline  `[`FRH_QueueSearchParams`](#structFRH__QueueSearchParams_1a153cbb740b4d9dc1838bbdd78618bfd0)`()` <a id="structFRH__QueueSearchParams_1a153cbb740b4d9dc1838bbdd78618bfd0"></a>

Defautl constructor.

#### `public inline FString `[`GetDescription`](#structFRH__QueueSearchParams_1ab823674f218b51fae0b3407322c8b3a0)`() const` <a id="structFRH__QueueSearchParams_1ab823674f218b51fae0b3407322c8b3a0"></a>

Gets a description of the search params for debugging.

## struct `FRH_QueueSearchResult` <a id="structFRH__QueueSearchResult"></a>

Struct to define queue search results.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`FRH_QueueSearchParams`](MatchmakingBrowser.md#structFRH__QueueSearchParams)` `[`SearchParams`](#structFRH__QueueSearchResult_1a690d7d697549e4bd88c191e32919f2e8) | The params used to make the search request.
`public TArray< TWeakObjectPtr< `[`URH_MatchmakingQueueInfo`](MatchmakingBrowser.md#classURH__MatchmakingQueueInfo)` > > `[`Queues`](#structFRH__QueueSearchResult_1a243723e5fdb3745da96443fd62daf81f) | The queues returned by the search request.
`public inline FString `[`GetDescription`](#structFRH__QueueSearchResult_1ad218a7fbea6c2538e743d78b29084aba)`() const` | Gets a description of the search result for debugging.

### Members

#### `public `[`FRH_QueueSearchParams`](MatchmakingBrowser.md#structFRH__QueueSearchParams)` `[`SearchParams`](#structFRH__QueueSearchResult_1a690d7d697549e4bd88c191e32919f2e8) <a id="structFRH__QueueSearchResult_1a690d7d697549e4bd88c191e32919f2e8"></a>

The params used to make the search request.

#### `public TArray< TWeakObjectPtr< `[`URH_MatchmakingQueueInfo`](MatchmakingBrowser.md#classURH__MatchmakingQueueInfo)` > > `[`Queues`](#structFRH__QueueSearchResult_1a243723e5fdb3745da96443fd62daf81f) <a id="structFRH__QueueSearchResult_1a243723e5fdb3745da96443fd62daf81f"></a>

The queues returned by the search request.

#### `public inline FString `[`GetDescription`](#structFRH__QueueSearchResult_1ad218a7fbea6c2538e743d78b29084aba)`() const` <a id="structFRH__QueueSearchResult_1ad218a7fbea6c2538e743d78b29084aba"></a>

Gets a description of the search result for debugging.

