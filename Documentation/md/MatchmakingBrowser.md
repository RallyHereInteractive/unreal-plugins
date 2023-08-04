# MatchmakingBrowser <a id="group__MatchmakingBrowser"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`URH_MatchmakingQueueInfo`](#classURH__MatchmakingQueueInfo) | Class to define a matchmaking queue.
`class `[`URH_MatchmakingTemplateGroupInfo`](#classURH__MatchmakingTemplateGroupInfo) | Class to organize a matchmaking Templates information.
`class `[`URH_InstanceLaunchTemplate`](#classURH__InstanceLaunchTemplate) | Class to organize a Instance Launch Templates information.
`class `[`URH_MatchmakingBrowserCache`](#classURH__MatchmakingBrowserCache) | Simple container class to hold matchmaking data, does not have its own auth context, relies upon getting it from elsewhere during calls, so that it can be used to cache across multiple players.
`struct `[`FRH_QueueSearchParams`](#structFRH__QueueSearchParams) | Struct to define queue search parameters.
`struct `[`FRH_QueueSearchResult`](#structFRH__QueueSearchResult) | Struct to define queue search results.

## class `URH_MatchmakingQueueInfo` <a id="classURH__MatchmakingQueueInfo"></a>

```
class URH_MatchmakingQueueInfo
  : public UObject
```

Class to define a matchmaking queue.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline const `[`FRHAPI_QueueConfig`](models/RHAPI_QueueConfig.md#structFRHAPI__QueueConfig)` & `[`GetQueueInfo`](#classURH__MatchmakingQueueInfo_1aecfbfbd082db6d8998e7f151d5abc0cc)`() const` | Gets the queue info.
`public inline const FString & `[`GetETag`](#classURH__MatchmakingQueueInfo_1a443e3173f86a4cfac34d80133ec9cf82)`() const` | Gets the Etag for the queue info.
`public inline const FString & `[`GetQueueId`](#classURH__MatchmakingQueueInfo_1a9574234af5b1efe6b08f1a5a97ddb103)`() const` | The ID for the queue, should not be used for display purposes.
`public inline bool `[`IsActive`](#classURH__MatchmakingQueueInfo_1aeadf35b8cc5df0658a86aef82094f5aa)`() const` | Flag for whether or not the queue is active, and can be joined or sessions created from it.
`public inline int32 `[`GetRankingType`](#classURH__MatchmakingQueueInfo_1afc3f963a8d16ccbbdcf3f71522fa3e04)`() const` | Which rank this queue should use MMR from to make matches from, and update at the end of match (1v1 MMR or 2v2 MMR for example)
`public inline int32 `[`GetNumSides`](#classURH__MatchmakingQueueInfo_1aac66b4c7ff83d9c9323da7bf29159531)`() const` | The number of sides a game in this queue will have (2 in a 1v1 and 3 in a 1v1v1 for example.
`public inline int32 `[`GetMaxPlayersPerSide`](#classURH__MatchmakingQueueInfo_1a118e764b926cb3e91e4b424afbdd28b8)`() const` | The maximum number of players that can be on each team.
`public inline int32 `[`GetMinPlayersPerSide`](#classURH__MatchmakingQueueInfo_1a6492689b5a12a3c66525b67e8dfaf5b8)`() const` | The minimum number of players that can be on each team.
`public inline int32 `[`GetMaxQueueGroupSize`](#classURH__MatchmakingQueueInfo_1ab55cff64d9a3e65cae3c5d28d84baf38)`() const` | The maximum size of a group that can join this queue.
`public inline const FGuid & `[`GetMatchMakingTemplateGroupId`](#classURH__MatchmakingQueueInfo_1ad8f6e8c6c0a26d0cbbed39a952b60bf6)`() const` | ID for which group of matchmaking templates/rules will be used when joining this queue.
`public inline void `[`ImportAPIQueue`](#classURH__MatchmakingQueueInfo_1a32a8277502fd26c41a71aeedc68d4eea)`(const `[`FRHAPI_QueueConfig`](models/RHAPI_QueueConfig.md#structFRHAPI__QueueConfig)` & APIQueue,const FString & InETag)` | Imports queue info from an API call.
`public inline FString `[`GetDescription`](#classURH__MatchmakingQueueInfo_1ae7a5d3dd461eaa68dec8dada2e9ad3df)`() const` | Gets a description of the queue, display its id for debugging.

#### Members

#### `public inline const `[`FRHAPI_QueueConfig`](models/RHAPI_QueueConfig.md#structFRHAPI__QueueConfig)` & `[`GetQueueInfo`](#classURH__MatchmakingQueueInfo_1aecfbfbd082db6d8998e7f151d5abc0cc)`() const` <a id="classURH__MatchmakingQueueInfo_1aecfbfbd082db6d8998e7f151d5abc0cc"></a>

Gets the queue info.

<br>
#### `public inline const FString & `[`GetETag`](#classURH__MatchmakingQueueInfo_1a443e3173f86a4cfac34d80133ec9cf82)`() const` <a id="classURH__MatchmakingQueueInfo_1a443e3173f86a4cfac34d80133ec9cf82"></a>

Gets the Etag for the queue info.

<br>
#### `public inline const FString & `[`GetQueueId`](#classURH__MatchmakingQueueInfo_1a9574234af5b1efe6b08f1a5a97ddb103)`() const` <a id="classURH__MatchmakingQueueInfo_1a9574234af5b1efe6b08f1a5a97ddb103"></a>

The ID for the queue, should not be used for display purposes.

<br>
#### `public inline bool `[`IsActive`](#classURH__MatchmakingQueueInfo_1aeadf35b8cc5df0658a86aef82094f5aa)`() const` <a id="classURH__MatchmakingQueueInfo_1aeadf35b8cc5df0658a86aef82094f5aa"></a>

Flag for whether or not the queue is active, and can be joined or sessions created from it.

<br>
#### `public inline int32 `[`GetRankingType`](#classURH__MatchmakingQueueInfo_1afc3f963a8d16ccbbdcf3f71522fa3e04)`() const` <a id="classURH__MatchmakingQueueInfo_1afc3f963a8d16ccbbdcf3f71522fa3e04"></a>

Which rank this queue should use MMR from to make matches from, and update at the end of match (1v1 MMR or 2v2 MMR for example)

<br>
#### `public inline int32 `[`GetNumSides`](#classURH__MatchmakingQueueInfo_1aac66b4c7ff83d9c9323da7bf29159531)`() const` <a id="classURH__MatchmakingQueueInfo_1aac66b4c7ff83d9c9323da7bf29159531"></a>

The number of sides a game in this queue will have (2 in a 1v1 and 3 in a 1v1v1 for example.

<br>
#### `public inline int32 `[`GetMaxPlayersPerSide`](#classURH__MatchmakingQueueInfo_1a118e764b926cb3e91e4b424afbdd28b8)`() const` <a id="classURH__MatchmakingQueueInfo_1a118e764b926cb3e91e4b424afbdd28b8"></a>

The maximum number of players that can be on each team.

<br>
#### `public inline int32 `[`GetMinPlayersPerSide`](#classURH__MatchmakingQueueInfo_1a6492689b5a12a3c66525b67e8dfaf5b8)`() const` <a id="classURH__MatchmakingQueueInfo_1a6492689b5a12a3c66525b67e8dfaf5b8"></a>

The minimum number of players that can be on each team.

<br>
#### `public inline int32 `[`GetMaxQueueGroupSize`](#classURH__MatchmakingQueueInfo_1ab55cff64d9a3e65cae3c5d28d84baf38)`() const` <a id="classURH__MatchmakingQueueInfo_1ab55cff64d9a3e65cae3c5d28d84baf38"></a>

The maximum size of a group that can join this queue.

<br>
#### `public inline const FGuid & `[`GetMatchMakingTemplateGroupId`](#classURH__MatchmakingQueueInfo_1ad8f6e8c6c0a26d0cbbed39a952b60bf6)`() const` <a id="classURH__MatchmakingQueueInfo_1ad8f6e8c6c0a26d0cbbed39a952b60bf6"></a>

ID for which group of matchmaking templates/rules will be used when joining this queue.

<br>
#### `public inline void `[`ImportAPIQueue`](#classURH__MatchmakingQueueInfo_1a32a8277502fd26c41a71aeedc68d4eea)`(const `[`FRHAPI_QueueConfig`](models/RHAPI_QueueConfig.md#structFRHAPI__QueueConfig)` & APIQueue,const FString & InETag)` <a id="classURH__MatchmakingQueueInfo_1a32a8277502fd26c41a71aeedc68d4eea"></a>

Imports queue info from an API call.

#### Parameters
* `APIQueue` Queue info from API call. 

* `InETag` ETag from API call.

<br>
#### `public inline FString `[`GetDescription`](#classURH__MatchmakingQueueInfo_1ae7a5d3dd461eaa68dec8dada2e9ad3df)`() const` <a id="classURH__MatchmakingQueueInfo_1ae7a5d3dd461eaa68dec8dada2e9ad3df"></a>

Gets a description of the queue, display its id for debugging.

<br>
## class `URH_MatchmakingTemplateGroupInfo` <a id="classURH__MatchmakingTemplateGroupInfo"></a>

```
class URH_MatchmakingTemplateGroupInfo
  : public UObject
```

Class to organize a matchmaking Templates information.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline const `[`FRHAPI_MatchMakingTemplateGroup`](models/RHAPI_MatchMakingTemplateGroup.md#structFRHAPI__MatchMakingTemplateGroup)` & `[`GetInfo`](#classURH__MatchmakingTemplateGroupInfo_1abfa666ec13cdd5bc0dfe183d1dd41e66)`() const` | Gets the template info.
`public inline const FString & `[`GetETag`](#classURH__MatchmakingTemplateGroupInfo_1a5469f554d137118cc7d5f2e74955f033)`() const` | Gets the Etag for the template info.
`public inline const FGuid & `[`GetTemplateGroupId`](#classURH__MatchmakingTemplateGroupInfo_1a384a0999a402078854d4ad342f0570fa)`() const` | ID for this set of potential matchmaking templates.
`public inline TSet< int32 > `[`GetRequiredItemIds`](#classURH__MatchmakingTemplateGroupInfo_1adf14fcfb492d96bb8c3606720552b4c4)`() const` | **
`public inline const TArray< FGuid > `[`GetPossibleInstanceLaunchTemplateIds`](#classURH__MatchmakingTemplateGroupInfo_1a6d2d145203152be613c2db07017e05a0)`() const` | ID for which instance launch template this queue will use.
`public inline void `[`ImportAPITemplateGroup`](#classURH__MatchmakingTemplateGroupInfo_1a0f882a46c18415446b4b4035ccccaa66)`(const `[`FRHAPI_MatchMakingTemplateGroup`](models/RHAPI_MatchMakingTemplateGroup.md#structFRHAPI__MatchMakingTemplateGroup)` & APITemplateGroup,const FString & InETag)` | Imports template info from an API call.
`public inline FString `[`GetDescription`](#classURH__MatchmakingTemplateGroupInfo_1a7ac296d74658aeb6d4ef0f20bb227030)`() const` | Gets a description of the template, display its id for debugging.

#### Members

#### `public inline const `[`FRHAPI_MatchMakingTemplateGroup`](models/RHAPI_MatchMakingTemplateGroup.md#structFRHAPI__MatchMakingTemplateGroup)` & `[`GetInfo`](#classURH__MatchmakingTemplateGroupInfo_1abfa666ec13cdd5bc0dfe183d1dd41e66)`() const` <a id="classURH__MatchmakingTemplateGroupInfo_1abfa666ec13cdd5bc0dfe183d1dd41e66"></a>

Gets the template info.

<br>
#### `public inline const FString & `[`GetETag`](#classURH__MatchmakingTemplateGroupInfo_1a5469f554d137118cc7d5f2e74955f033)`() const` <a id="classURH__MatchmakingTemplateGroupInfo_1a5469f554d137118cc7d5f2e74955f033"></a>

Gets the Etag for the template info.

<br>
#### `public inline const FGuid & `[`GetTemplateGroupId`](#classURH__MatchmakingTemplateGroupInfo_1a384a0999a402078854d4ad342f0570fa)`() const` <a id="classURH__MatchmakingTemplateGroupInfo_1a384a0999a402078854d4ad342f0570fa"></a>

ID for this set of potential matchmaking templates.

<br>
#### `public inline TSet< int32 > `[`GetRequiredItemIds`](#classURH__MatchmakingTemplateGroupInfo_1adf14fcfb492d96bb8c3606720552b4c4)`() const` <a id="classURH__MatchmakingTemplateGroupInfo_1adf14fcfb492d96bb8c3606720552b4c4"></a>

**

List of the different matchmaking templates that could be used. The config is chosen based on a set of rules in each MatchMakingTemplate object. If there are no rules, it's the default template */

Set of all the item ids that are required to validate every rule contained in this template group

<br>
#### `public inline const TArray< FGuid > `[`GetPossibleInstanceLaunchTemplateIds`](#classURH__MatchmakingTemplateGroupInfo_1a6d2d145203152be613c2db07017e05a0)`() const` <a id="classURH__MatchmakingTemplateGroupInfo_1a6d2d145203152be613c2db07017e05a0"></a>

ID for which instance launch template this queue will use.

<br>
#### `public inline void `[`ImportAPITemplateGroup`](#classURH__MatchmakingTemplateGroupInfo_1a0f882a46c18415446b4b4035ccccaa66)`(const `[`FRHAPI_MatchMakingTemplateGroup`](models/RHAPI_MatchMakingTemplateGroup.md#structFRHAPI__MatchMakingTemplateGroup)` & APITemplateGroup,const FString & InETag)` <a id="classURH__MatchmakingTemplateGroupInfo_1a0f882a46c18415446b4b4035ccccaa66"></a>

Imports template info from an API call.

#### Parameters
* `APITemplateGroup` Template info from API call. 

* `InETag` ETag from API call.

<br>
#### `public inline FString `[`GetDescription`](#classURH__MatchmakingTemplateGroupInfo_1a7ac296d74658aeb6d4ef0f20bb227030)`() const` <a id="classURH__MatchmakingTemplateGroupInfo_1a7ac296d74658aeb6d4ef0f20bb227030"></a>

Gets a description of the template, display its id for debugging.

<br>
## class `URH_InstanceLaunchTemplate` <a id="classURH__InstanceLaunchTemplate"></a>

```
class URH_InstanceLaunchTemplate
  : public UObject
```

Class to organize a Instance Launch Templates information.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline const `[`FRHAPI_InstanceLaunchTemplate`](models/RHAPI_InstanceLaunchTemplate.md#structFRHAPI__InstanceLaunchTemplate)` & `[`GetInfo`](#classURH__InstanceLaunchTemplate_1a0067392aa0711089c8148c20aa3cd8ec)`() const` | Gets the template info.
`public inline const FString & `[`GetETag`](#classURH__InstanceLaunchTemplate_1aebe3aadf98122c471e82c2d1d40a8da8)`() const` | Gets the Etag for the template info.
`public inline const FGuid & `[`GetInstanceLaunchTemplateId`](#classURH__InstanceLaunchTemplate_1a3d67c553260e491ea0f6583a0d2d2b30)`() const` | ID to uniquely identify this instance launch template.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#classURH__InstanceLaunchTemplate_1a7fe2ba2a44278ea5217effbfb65b46bd)`() const` | Custom data that will be passed to the session during the instance launch request.
`public inline void `[`ImportAPIInstanceLaunchTemplate`](#classURH__InstanceLaunchTemplate_1a3afc2c56eddeaab55b067e533c39d06d)`(const `[`FRHAPI_InstanceLaunchTemplate`](models/RHAPI_InstanceLaunchTemplate.md#structFRHAPI__InstanceLaunchTemplate)` & APITemplate,const FString & InETag)` | Imports template info from an API call.
`public inline FString `[`GetDescription`](#classURH__InstanceLaunchTemplate_1a3dd86af95ef48cae218ce1c90ec26f11)`() const` | Gets a description of the template, display its id for debugging.

#### Members

#### `public inline const `[`FRHAPI_InstanceLaunchTemplate`](models/RHAPI_InstanceLaunchTemplate.md#structFRHAPI__InstanceLaunchTemplate)` & `[`GetInfo`](#classURH__InstanceLaunchTemplate_1a0067392aa0711089c8148c20aa3cd8ec)`() const` <a id="classURH__InstanceLaunchTemplate_1a0067392aa0711089c8148c20aa3cd8ec"></a>

Gets the template info.

<br>
#### `public inline const FString & `[`GetETag`](#classURH__InstanceLaunchTemplate_1aebe3aadf98122c471e82c2d1d40a8da8)`() const` <a id="classURH__InstanceLaunchTemplate_1aebe3aadf98122c471e82c2d1d40a8da8"></a>

Gets the Etag for the template info.

<br>
#### `public inline const FGuid & `[`GetInstanceLaunchTemplateId`](#classURH__InstanceLaunchTemplate_1a3d67c553260e491ea0f6583a0d2d2b30)`() const` <a id="classURH__InstanceLaunchTemplate_1a3d67c553260e491ea0f6583a0d2d2b30"></a>

ID to uniquely identify this instance launch template.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#classURH__InstanceLaunchTemplate_1a7fe2ba2a44278ea5217effbfb65b46bd)`() const` <a id="classURH__InstanceLaunchTemplate_1a7fe2ba2a44278ea5217effbfb65b46bd"></a>

Custom data that will be passed to the session during the instance launch request.

<br>
#### `public inline void `[`ImportAPIInstanceLaunchTemplate`](#classURH__InstanceLaunchTemplate_1a3afc2c56eddeaab55b067e533c39d06d)`(const `[`FRHAPI_InstanceLaunchTemplate`](models/RHAPI_InstanceLaunchTemplate.md#structFRHAPI__InstanceLaunchTemplate)` & APITemplate,const FString & InETag)` <a id="classURH__InstanceLaunchTemplate_1a3afc2c56eddeaab55b067e533c39d06d"></a>

Imports template info from an API call.

#### Parameters
* `APITemplate` Template info from API call. 

* `InETag` ETag from API call.

<br>
#### `public inline FString `[`GetDescription`](#classURH__InstanceLaunchTemplate_1a3dd86af95ef48cae218ce1c90ec26f11)`() const` <a id="classURH__InstanceLaunchTemplate_1a3dd86af95ef48cae218ce1c90ec26f11"></a>

Gets a description of the template, display its id for debugging.

<br>
## class `URH_MatchmakingBrowserCache` <a id="classURH__MatchmakingBrowserCache"></a>

```
class URH_MatchmakingBrowserCache
  : public URH_GameInstanceSubsystemPlugin
```

Simple container class to hold matchmaking data, does not have its own auth context, relies upon getting it from elsewhere during calls, so that it can be used to cache across multiple players.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FRegionSettingsUpdatedDelegate `[`OnRegionsUpdatedNative`](#classURH__MatchmakingBrowserCache_1aade4d528b8dc3dd6ddb864280fd161c8) | Delegate to listen for matchmaking regions updated.
`public FRegionSettingsUpdatedDynamicDelegate `[`OnRegionsUpdated`](#classURH__MatchmakingBrowserCache_1a861943c4bbe2929594b1acc7b528974f) | 
`public  `[`URH_MatchmakingBrowserCache`](#classURH__MatchmakingBrowserCache_1addfabfbe829a51e5974402f307f55090)`()` | Default constructor.
`public void `[`SearchQueues`](#classURH__MatchmakingBrowserCache_1a21a9fcec97261d1fe942eed7d62426ef)`(const `[`FRH_QueueSearchParams`](MatchmakingBrowser.md#structFRH__QueueSearchParams)` & params,FRH_OnQueueSearchCompleteDelegateBlock Delegate)` | Search for queues.
`public inline void `[`BLUEPRINT_SearchQueues`](#classURH__MatchmakingBrowserCache_1a9abc7b72ccdaf7221103a5672d912d82)`(const `[`FRH_QueueSearchParams`](MatchmakingBrowser.md#structFRH__QueueSearchParams)` & params,const FRH_OnQueueSearchCompleteDynamicDelegate & Delegate)` | 
`public void `[`SearchMatchmakingTemplateGroup`](#classURH__MatchmakingBrowserCache_1adba6cb49746909614d2e82a175afd056)`(const FGuid & TemplateId,FRH_OnGetMatchmakingTemplateGroupCompleteDelegateBlock Delegate)` | Search for a matchmaking template.
`public inline void `[`BLUEPRINT_SearchMatchmakingTemplateGroup`](#classURH__MatchmakingBrowserCache_1a401e5ed7ec61a89b9c9bd9bfa711bd67)`(const FGuid & TemplateId,const FRH_OnGetMatchmakingTemplateGroupCompleteDynamicDelegate & Delegate)` | 
`public void `[`SearchInstanceLaunchTemplate`](#classURH__MatchmakingBrowserCache_1a5496f39443a5b4ef9195aa07f24ec374)`(const FGuid & TemplateId,FRH_OnGetInstanceLaunchTemplateCompleteDelegateBlock Delegate)` | Search for an instance launch template.
`public inline void `[`BLUEPRINT_SearchInstanceLaunchTemplate`](#classURH__MatchmakingBrowserCache_1aa019ceb5e7cbcf4e290108c3b5d4295b)`(const FGuid & TemplateId,const FRH_OnGetInstanceLaunchTemplateCompleteDynamicDelegate & Delegate)` | 
`public void `[`SearchRegions`](#classURH__MatchmakingBrowserCache_1a6950740f036a97fa8284625d2636448b)`(FRH_OnRegionSearchCompleteDelegateBlock Delegate)` | Search for matchmaking regions.
`public inline void `[`BLUEPRINT_SearchRegions`](#classURH__MatchmakingBrowserCache_1a4c2d949c15795848d3f6218a12887832)`(const FRH_OnRegionSearchCompleteDynamicDelegate & Delegate)` | 
`public inline `[`URH_MatchmakingQueueInfo`](MatchmakingBrowser.md#classURH__MatchmakingQueueInfo)` * `[`GetQueue`](#classURH__MatchmakingBrowserCache_1ad5e5847ba5ab4fd96b6e8303bc757673)`(const FString & QueueId) const` | Get a cached queue by Queue Id.
`public inline FORCEINLINE TArray< `[`URH_MatchmakingQueueInfo`](MatchmakingBrowser.md#classURH__MatchmakingQueueInfo)` * > `[`GetAllQueues`](#classURH__MatchmakingBrowserCache_1acc6cf6d685038c0c9c2104c8d36c6dda)`() const` | Get all cached queues.
`public inline `[`URH_MatchmakingTemplateGroupInfo`](MatchmakingBrowser.md#classURH__MatchmakingTemplateGroupInfo)` * `[`GetMatchmakingTemplateGroup`](#classURH__MatchmakingBrowserCache_1a768be90ca3e0b3d27f489b3faffb0b97)`(const FGuid & TemplateGroupId) const` | Get a cached matchmaking template by Template Id.
`public inline `[`URH_InstanceLaunchTemplate`](MatchmakingBrowser.md#classURH__InstanceLaunchTemplate)` * `[`GetInstanceLaunchTemplate`](#classURH__MatchmakingBrowserCache_1aa9f340184bf0abb2ec9ec55bfa9787e3)`(const FGuid & InstanceLaunchTemplateId) const` | Get a cached instance launch template by Template Id.
`public inline const TArray< `[`FRHAPI_SiteSettings`](models/RHAPI_SiteSettings.md#structFRHAPI__SiteSettings)` > & `[`GetAllRegions`](#classURH__MatchmakingBrowserCache_1af72098f3ad79f03f4eebb0e156a244f5)`() const` | Get all cached matchmaking regions.
`public inline void `[`ClearCache`](#classURH__MatchmakingBrowserCache_1a025eb8002aeeb328ea4dc90d9ddf0cb7)`()` | Clears the cache of all queues and templates.
`public void `[`ImportAPIQueue`](#classURH__MatchmakingBrowserCache_1a12248258811c4e801a318a8c39ea7e24)`(const `[`FRHAPI_QueueConfig`](models/RHAPI_QueueConfig.md#structFRHAPI__QueueConfig)` & APIQueue,const FString & ETag)` | Imports queue info from an API call.
`public void `[`ImportAPITemplateGroup`](#classURH__MatchmakingBrowserCache_1a2bc34143d2bdd53c730dfee63107bf04)`(const `[`FRHAPI_MatchMakingTemplateGroup`](models/RHAPI_MatchMakingTemplateGroup.md#structFRHAPI__MatchMakingTemplateGroup)` & APITemplateGroup,const FString & ETag)` | Imports template info from an API call.
`public void `[`ImportAPIInstanceLaunchTemplate`](#classURH__MatchmakingBrowserCache_1acdc9277a29426324aec2eae402fb09ff)`(const `[`FRHAPI_InstanceLaunchTemplate`](models/RHAPI_InstanceLaunchTemplate.md#structFRHAPI__InstanceLaunchTemplate)` & APITemplate,const FString & ETag)` | Imports template info from an API call.
`protected TMap< FString, `[`URH_MatchmakingQueueInfo`](MatchmakingBrowser.md#classURH__MatchmakingQueueInfo)` * > `[`QueueCache`](#classURH__MatchmakingBrowserCache_1a2a75852ef2d0fb69f17d52bbacfbc3af) | Map of Queue Id to Queue Infos.
`protected TMap< FGuid, `[`URH_MatchmakingTemplateGroupInfo`](MatchmakingBrowser.md#classURH__MatchmakingTemplateGroupInfo)` * > `[`TemplateGroupCache`](#classURH__MatchmakingBrowserCache_1a605b9ddc4ffcab08985920a0ff341168) | Map of Template Id to Matchmaking Template Group Infos.
`protected TMap< FGuid, `[`URH_InstanceLaunchTemplate`](MatchmakingBrowser.md#classURH__InstanceLaunchTemplate)` * > `[`InstanceLaunchTemplateCache`](#classURH__MatchmakingBrowserCache_1a50c179cb23a0d4382f776795b0936197) | Map of Template Id to Instance Launch Template Infos.
`protected TArray< `[`FRHAPI_SiteSettings`](models/RHAPI_SiteSettings.md#structFRHAPI__SiteSettings)` > `[`RegionsCache`](#classURH__MatchmakingBrowserCache_1a3984df761367b754d4a2dcf29a8cc3f1) | Array of Regions.

#### Members

#### `public FRegionSettingsUpdatedDelegate `[`OnRegionsUpdatedNative`](#classURH__MatchmakingBrowserCache_1aade4d528b8dc3dd6ddb864280fd161c8) <a id="classURH__MatchmakingBrowserCache_1aade4d528b8dc3dd6ddb864280fd161c8"></a>

Delegate to listen for matchmaking regions updated.

<br>
#### `public FRegionSettingsUpdatedDynamicDelegate `[`OnRegionsUpdated`](#classURH__MatchmakingBrowserCache_1a861943c4bbe2929594b1acc7b528974f) <a id="classURH__MatchmakingBrowserCache_1a861943c4bbe2929594b1acc7b528974f"></a>

<br>
#### `public  `[`URH_MatchmakingBrowserCache`](#classURH__MatchmakingBrowserCache_1addfabfbe829a51e5974402f307f55090)`()` <a id="classURH__MatchmakingBrowserCache_1addfabfbe829a51e5974402f307f55090"></a>

Default constructor.

<br>
#### `public void `[`SearchQueues`](#classURH__MatchmakingBrowserCache_1a21a9fcec97261d1fe942eed7d62426ef)`(const `[`FRH_QueueSearchParams`](MatchmakingBrowser.md#structFRH__QueueSearchParams)` & params,FRH_OnQueueSearchCompleteDelegateBlock Delegate)` <a id="classURH__MatchmakingBrowserCache_1a21a9fcec97261d1fe942eed7d62426ef"></a>

Search for queues.

#### Parameters
* `params` The search params to use for the given search. 

* `Delegate` Callback with the results of the search.

<br>
#### `public inline void `[`BLUEPRINT_SearchQueues`](#classURH__MatchmakingBrowserCache_1a9abc7b72ccdaf7221103a5672d912d82)`(const `[`FRH_QueueSearchParams`](MatchmakingBrowser.md#structFRH__QueueSearchParams)` & params,const FRH_OnQueueSearchCompleteDynamicDelegate & Delegate)` <a id="classURH__MatchmakingBrowserCache_1a9abc7b72ccdaf7221103a5672d912d82"></a>

<br>
#### `public void `[`SearchMatchmakingTemplateGroup`](#classURH__MatchmakingBrowserCache_1adba6cb49746909614d2e82a175afd056)`(const FGuid & TemplateId,FRH_OnGetMatchmakingTemplateGroupCompleteDelegateBlock Delegate)` <a id="classURH__MatchmakingBrowserCache_1adba6cb49746909614d2e82a175afd056"></a>

Search for a matchmaking template.

#### Parameters
* `TemplateId` The matchmaking template to search for. 

* `Delegate` Callback with the results of the search.

<br>
#### `public inline void `[`BLUEPRINT_SearchMatchmakingTemplateGroup`](#classURH__MatchmakingBrowserCache_1a401e5ed7ec61a89b9c9bd9bfa711bd67)`(const FGuid & TemplateId,const FRH_OnGetMatchmakingTemplateGroupCompleteDynamicDelegate & Delegate)` <a id="classURH__MatchmakingBrowserCache_1a401e5ed7ec61a89b9c9bd9bfa711bd67"></a>

<br>
#### `public void `[`SearchInstanceLaunchTemplate`](#classURH__MatchmakingBrowserCache_1a5496f39443a5b4ef9195aa07f24ec374)`(const FGuid & TemplateId,FRH_OnGetInstanceLaunchTemplateCompleteDelegateBlock Delegate)` <a id="classURH__MatchmakingBrowserCache_1a5496f39443a5b4ef9195aa07f24ec374"></a>

Search for an instance launch template.

#### Parameters
* `TemplateId` The matchmaking template to search for. 

* `Delegate` Callback with the results of the search.

<br>
#### `public inline void `[`BLUEPRINT_SearchInstanceLaunchTemplate`](#classURH__MatchmakingBrowserCache_1aa019ceb5e7cbcf4e290108c3b5d4295b)`(const FGuid & TemplateId,const FRH_OnGetInstanceLaunchTemplateCompleteDynamicDelegate & Delegate)` <a id="classURH__MatchmakingBrowserCache_1aa019ceb5e7cbcf4e290108c3b5d4295b"></a>

<br>
#### `public void `[`SearchRegions`](#classURH__MatchmakingBrowserCache_1a6950740f036a97fa8284625d2636448b)`(FRH_OnRegionSearchCompleteDelegateBlock Delegate)` <a id="classURH__MatchmakingBrowserCache_1a6950740f036a97fa8284625d2636448b"></a>

Search for matchmaking regions.

#### Parameters
* `Delegate` Callback with the results of the search.

<br>
#### `public inline void `[`BLUEPRINT_SearchRegions`](#classURH__MatchmakingBrowserCache_1a4c2d949c15795848d3f6218a12887832)`(const FRH_OnRegionSearchCompleteDynamicDelegate & Delegate)` <a id="classURH__MatchmakingBrowserCache_1a4c2d949c15795848d3f6218a12887832"></a>

<br>
#### `public inline `[`URH_MatchmakingQueueInfo`](MatchmakingBrowser.md#classURH__MatchmakingQueueInfo)` * `[`GetQueue`](#classURH__MatchmakingBrowserCache_1ad5e5847ba5ab4fd96b6e8303bc757673)`(const FString & QueueId) const` <a id="classURH__MatchmakingBrowserCache_1ad5e5847ba5ab4fd96b6e8303bc757673"></a>

Get a cached queue by Queue Id.

<br>
#### `public inline FORCEINLINE TArray< `[`URH_MatchmakingQueueInfo`](MatchmakingBrowser.md#classURH__MatchmakingQueueInfo)` * > `[`GetAllQueues`](#classURH__MatchmakingBrowserCache_1acc6cf6d685038c0c9c2104c8d36c6dda)`() const` <a id="classURH__MatchmakingBrowserCache_1acc6cf6d685038c0c9c2104c8d36c6dda"></a>

Get all cached queues.

<br>
#### `public inline `[`URH_MatchmakingTemplateGroupInfo`](MatchmakingBrowser.md#classURH__MatchmakingTemplateGroupInfo)` * `[`GetMatchmakingTemplateGroup`](#classURH__MatchmakingBrowserCache_1a768be90ca3e0b3d27f489b3faffb0b97)`(const FGuid & TemplateGroupId) const` <a id="classURH__MatchmakingBrowserCache_1a768be90ca3e0b3d27f489b3faffb0b97"></a>

Get a cached matchmaking template by Template Id.

<br>
#### `public inline `[`URH_InstanceLaunchTemplate`](MatchmakingBrowser.md#classURH__InstanceLaunchTemplate)` * `[`GetInstanceLaunchTemplate`](#classURH__MatchmakingBrowserCache_1aa9f340184bf0abb2ec9ec55bfa9787e3)`(const FGuid & InstanceLaunchTemplateId) const` <a id="classURH__MatchmakingBrowserCache_1aa9f340184bf0abb2ec9ec55bfa9787e3"></a>

Get a cached instance launch template by Template Id.

<br>
#### `public inline const TArray< `[`FRHAPI_SiteSettings`](models/RHAPI_SiteSettings.md#structFRHAPI__SiteSettings)` > & `[`GetAllRegions`](#classURH__MatchmakingBrowserCache_1af72098f3ad79f03f4eebb0e156a244f5)`() const` <a id="classURH__MatchmakingBrowserCache_1af72098f3ad79f03f4eebb0e156a244f5"></a>

Get all cached matchmaking regions.

<br>
#### `public inline void `[`ClearCache`](#classURH__MatchmakingBrowserCache_1a025eb8002aeeb328ea4dc90d9ddf0cb7)`()` <a id="classURH__MatchmakingBrowserCache_1a025eb8002aeeb328ea4dc90d9ddf0cb7"></a>

Clears the cache of all queues and templates.

<br>
#### `public void `[`ImportAPIQueue`](#classURH__MatchmakingBrowserCache_1a12248258811c4e801a318a8c39ea7e24)`(const `[`FRHAPI_QueueConfig`](models/RHAPI_QueueConfig.md#structFRHAPI__QueueConfig)` & APIQueue,const FString & ETag)` <a id="classURH__MatchmakingBrowserCache_1a12248258811c4e801a318a8c39ea7e24"></a>

Imports queue info from an API call.

#### Parameters
* `APIQueue` Queue info from API call. 

* `InETag` ETag from API call.

<br>
#### `public void `[`ImportAPITemplateGroup`](#classURH__MatchmakingBrowserCache_1a2bc34143d2bdd53c730dfee63107bf04)`(const `[`FRHAPI_MatchMakingTemplateGroup`](models/RHAPI_MatchMakingTemplateGroup.md#structFRHAPI__MatchMakingTemplateGroup)` & APITemplateGroup,const FString & ETag)` <a id="classURH__MatchmakingBrowserCache_1a2bc34143d2bdd53c730dfee63107bf04"></a>

Imports template info from an API call.

#### Parameters
* `APITemplateGroup` Template info from API call. 

* `InETag` ETag from API call.

<br>
#### `public void `[`ImportAPIInstanceLaunchTemplate`](#classURH__MatchmakingBrowserCache_1acdc9277a29426324aec2eae402fb09ff)`(const `[`FRHAPI_InstanceLaunchTemplate`](models/RHAPI_InstanceLaunchTemplate.md#structFRHAPI__InstanceLaunchTemplate)` & APITemplate,const FString & ETag)` <a id="classURH__MatchmakingBrowserCache_1acdc9277a29426324aec2eae402fb09ff"></a>

Imports template info from an API call.

#### Parameters
* `APITemplate` Template info from API call. 

* `InETag` ETag from API call.

<br>
#### `protected TMap< FString, `[`URH_MatchmakingQueueInfo`](MatchmakingBrowser.md#classURH__MatchmakingQueueInfo)` * > `[`QueueCache`](#classURH__MatchmakingBrowserCache_1a2a75852ef2d0fb69f17d52bbacfbc3af) <a id="classURH__MatchmakingBrowserCache_1a2a75852ef2d0fb69f17d52bbacfbc3af"></a>

Map of Queue Id to Queue Infos.

<br>
#### `protected TMap< FGuid, `[`URH_MatchmakingTemplateGroupInfo`](MatchmakingBrowser.md#classURH__MatchmakingTemplateGroupInfo)` * > `[`TemplateGroupCache`](#classURH__MatchmakingBrowserCache_1a605b9ddc4ffcab08985920a0ff341168) <a id="classURH__MatchmakingBrowserCache_1a605b9ddc4ffcab08985920a0ff341168"></a>

Map of Template Id to Matchmaking Template Group Infos.

<br>
#### `protected TMap< FGuid, `[`URH_InstanceLaunchTemplate`](MatchmakingBrowser.md#classURH__InstanceLaunchTemplate)` * > `[`InstanceLaunchTemplateCache`](#classURH__MatchmakingBrowserCache_1a50c179cb23a0d4382f776795b0936197) <a id="classURH__MatchmakingBrowserCache_1a50c179cb23a0d4382f776795b0936197"></a>

Map of Template Id to Instance Launch Template Infos.

<br>
#### `protected TArray< `[`FRHAPI_SiteSettings`](models/RHAPI_SiteSettings.md#structFRHAPI__SiteSettings)` > `[`RegionsCache`](#classURH__MatchmakingBrowserCache_1a3984df761367b754d4a2dcf29a8cc3f1) <a id="classURH__MatchmakingBrowserCache_1a3984df761367b754d4a2dcf29a8cc3f1"></a>

Array of Regions.

<br>
## struct `FRH_QueueSearchParams` <a id="structFRH__QueueSearchParams"></a>

Struct to define queue search parameters.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`Cursor`](#structFRH__QueueSearchParams_1abf27a826b809bd35807aac0254deb878) | The Cursor location to start the search.
`public int32 `[`PageSize`](#structFRH__QueueSearchParams_1a0b28136848b884be15762f3716404fdf) | The size of page to return from the search.
`public inline  `[`FRH_QueueSearchParams`](#structFRH__QueueSearchParams_1a153cbb740b4d9dc1838bbdd78618bfd0)`()` | Defautl constructor.
`public inline FString `[`GetDescription`](#structFRH__QueueSearchParams_1ab823674f218b51fae0b3407322c8b3a0)`() const` | Gets a description of the search params for debugging.

#### Members

#### `public int32 `[`Cursor`](#structFRH__QueueSearchParams_1abf27a826b809bd35807aac0254deb878) <a id="structFRH__QueueSearchParams_1abf27a826b809bd35807aac0254deb878"></a>

The Cursor location to start the search.

<br>
#### `public int32 `[`PageSize`](#structFRH__QueueSearchParams_1a0b28136848b884be15762f3716404fdf) <a id="structFRH__QueueSearchParams_1a0b28136848b884be15762f3716404fdf"></a>

The size of page to return from the search.

<br>
#### `public inline  `[`FRH_QueueSearchParams`](#structFRH__QueueSearchParams_1a153cbb740b4d9dc1838bbdd78618bfd0)`()` <a id="structFRH__QueueSearchParams_1a153cbb740b4d9dc1838bbdd78618bfd0"></a>

Defautl constructor.

<br>
#### `public inline FString `[`GetDescription`](#structFRH__QueueSearchParams_1ab823674f218b51fae0b3407322c8b3a0)`() const` <a id="structFRH__QueueSearchParams_1ab823674f218b51fae0b3407322c8b3a0"></a>

Gets a description of the search params for debugging.

<br>
## struct `FRH_QueueSearchResult` <a id="structFRH__QueueSearchResult"></a>

Struct to define queue search results.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`FRH_QueueSearchParams`](MatchmakingBrowser.md#structFRH__QueueSearchParams)` `[`SearchParams`](#structFRH__QueueSearchResult_1a690d7d697549e4bd88c191e32919f2e8) | The params used to make the search request.
`public TArray< TWeakObjectPtr< `[`URH_MatchmakingQueueInfo`](MatchmakingBrowser.md#classURH__MatchmakingQueueInfo)` > > `[`Queues`](#structFRH__QueueSearchResult_1a243723e5fdb3745da96443fd62daf81f) | The queues returned by the search request.
`public inline FString `[`GetDescription`](#structFRH__QueueSearchResult_1ad218a7fbea6c2538e743d78b29084aba)`() const` | Gets a description of the search result for debugging.

#### Members

#### `public `[`FRH_QueueSearchParams`](MatchmakingBrowser.md#structFRH__QueueSearchParams)` `[`SearchParams`](#structFRH__QueueSearchResult_1a690d7d697549e4bd88c191e32919f2e8) <a id="structFRH__QueueSearchResult_1a690d7d697549e4bd88c191e32919f2e8"></a>

The params used to make the search request.

<br>
#### `public TArray< TWeakObjectPtr< `[`URH_MatchmakingQueueInfo`](MatchmakingBrowser.md#classURH__MatchmakingQueueInfo)` > > `[`Queues`](#structFRH__QueueSearchResult_1a243723e5fdb3745da96443fd62daf81f) <a id="structFRH__QueueSearchResult_1a243723e5fdb3745da96443fd62daf81f"></a>

The queues returned by the search request.

<br>
#### `public inline FString `[`GetDescription`](#structFRH__QueueSearchResult_1ad218a7fbea6c2538e743d78b29084aba)`() const` <a id="structFRH__QueueSearchResult_1ad218a7fbea6c2538e743d78b29084aba"></a>

Gets a description of the search result for debugging.

<br>
