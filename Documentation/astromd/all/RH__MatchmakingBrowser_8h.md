---
title: RH_MatchmakingBrowser.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|struct|[FRH_QueueSearchParams](/unreal-plugins/all/structfrh__queuesearchparams/#structFRH__QueueSearchParams)||
|struct|[FRH_QueueSearchResult](/unreal-plugins/all/structfrh__queuesearchresult/#structFRH__QueueSearchResult)||
|class|[URH_MatchmakingQueueInfo](/unreal-plugins/all/classurh__matchmakingqueueinfo/#classURH__MatchmakingQueueInfo)||
|class|[URH_MatchmakingTemplateGroupInfo](/unreal-plugins/all/classurh__matchmakingtemplategroupinfo/#classURH__MatchmakingTemplateGroupInfo)||
|class|[URH_InstanceRequestTemplate](/unreal-plugins/all/classurh__instancerequesttemplate/#classURH__InstanceRequestTemplate)||
|class|[URH_MatchmakingBrowserCache](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache)||
||[DECLARE_DYNAMIC_DELEGATE_ThreeParams](/unreal-plugins/all/rh__matchmakingbrowser_8h/#RH__MatchmakingBrowser_8h_1aa6c717710d8560f3a865151c57cec7a5)(FRH_OnQueueSearchCompleteDynamicDelegate , bool , bSuccess , const [FRH_QueueSearchResult](/unreal-plugins/all/structfrh__queuesearchresult/#structFRH__QueueSearchResult) & , SearchResult , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & , ErrorInfo )||
||[DECLARE_DELEGATE_ThreeParams](/unreal-plugins/all/rh__matchmakingbrowser_8h/#RH__MatchmakingBrowser_8h_1a10b5591a7819e75569acfc294389eda2)(FRH_OnQueueSearchCompleteDelegate , bool , const [FRH_QueueSearchResult](/unreal-plugins/all/structfrh__queuesearchresult/#structFRH__QueueSearchResult) & , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )||
||[DECLARE_RH_DELEGATE_BLOCK](/unreal-plugins/all/rh__matchmakingbrowser_8h/#RH__MatchmakingBrowser_8h_1a64e2c853f03b49719a4e0b418a42450d)(FRH_OnQueueSearchCompleteDelegateBlock , FRH_OnQueueSearchCompleteDelegate , FRH_OnQueueSearchCompleteDynamicDelegate , bool , const [FRH_QueueSearchResult](/unreal-plugins/all/structfrh__queuesearchresult/#structFRH__QueueSearchResult) & , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )||
||[DECLARE_DYNAMIC_DELEGATE_ThreeParams](/unreal-plugins/all/rh__matchmakingbrowser_8h/#RH__MatchmakingBrowser_8h_1ae1b911bbdd4ff42235af031d93a97f3b)(FRH_OnGetMatchmakingTemplateGroupCompleteDynamicDelegate , bool , bSuccess , [URH_MatchmakingTemplateGroupInfo](/unreal-plugins/all/classurh__matchmakingtemplategroupinfo/#classURH__MatchmakingTemplateGroupInfo) * , Result , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & , ErrorInfo )||
||[DECLARE_DELEGATE_ThreeParams](/unreal-plugins/all/rh__matchmakingbrowser_8h/#RH__MatchmakingBrowser_8h_1a99289245d2e6a51320c62ff24b5d5148)(FRH_OnGetMatchmakingTemplateGroupCompleteDelegate , bool , const [URH_MatchmakingTemplateGroupInfo](/unreal-plugins/all/classurh__matchmakingtemplategroupinfo/#classURH__MatchmakingTemplateGroupInfo) * , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )||
||[DECLARE_RH_DELEGATE_BLOCK](/unreal-plugins/all/rh__matchmakingbrowser_8h/#RH__MatchmakingBrowser_8h_1a7ad430f774f7bd79eace6170e8548463)(FRH_OnGetMatchmakingTemplateGroupCompleteDelegateBlock , FRH_OnGetMatchmakingTemplateGroupCompleteDelegate , FRH_OnGetMatchmakingTemplateGroupCompleteDynamicDelegate , bool , [URH_MatchmakingTemplateGroupInfo](/unreal-plugins/all/classurh__matchmakingtemplategroupinfo/#classURH__MatchmakingTemplateGroupInfo) * , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )||
||[DECLARE_DYNAMIC_DELEGATE_ThreeParams](/unreal-plugins/all/rh__matchmakingbrowser_8h/#RH__MatchmakingBrowser_8h_1a354dc1cdb38e82abc6cb9e071ad771a8)(FRH_OnGetInstanceRequestTemplateCompleteDynamicDelegate , bool , bSuccess , [URH_InstanceRequestTemplate](/unreal-plugins/all/classurh__instancerequesttemplate/#classURH__InstanceRequestTemplate) * , Result , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & , ErrorInfo )||
||[DECLARE_DELEGATE_ThreeParams](/unreal-plugins/all/rh__matchmakingbrowser_8h/#RH__MatchmakingBrowser_8h_1ac0015e6412b4f1a5edb4f5c48c1e54ad)(FRH_OnGetInstanceRequestTemplateCompleteDelegate , bool , const [URH_InstanceRequestTemplate](/unreal-plugins/all/classurh__instancerequesttemplate/#classURH__InstanceRequestTemplate) * , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )||
||[DECLARE_RH_DELEGATE_BLOCK](/unreal-plugins/all/rh__matchmakingbrowser_8h/#RH__MatchmakingBrowser_8h_1a0ccc36f911ada5a4c958ddf4b37b0df9)(FRH_OnGetInstanceRequestTemplateCompleteDelegateBlock , FRH_OnGetInstanceRequestTemplateCompleteDelegate , FRH_OnGetInstanceRequestTemplateCompleteDynamicDelegate , bool , [URH_InstanceRequestTemplate](/unreal-plugins/all/classurh__instancerequesttemplate/#classURH__InstanceRequestTemplate) * , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )||
||[DECLARE_DYNAMIC_DELEGATE_ThreeParams](/unreal-plugins/all/rh__matchmakingbrowser_8h/#RH__MatchmakingBrowser_8h_1ae20733e7a55e156a01dd03c5f2248bc7)(FRH_OnRegionSearchCompleteDynamicDelegate , bool , bSuccess , const TArray< [FRHAPI_SiteSettings](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings) > & , Result , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & , ErrorInfo )||
||[DECLARE_DELEGATE_ThreeParams](/unreal-plugins/all/rh__matchmakingbrowser_8h/#RH__MatchmakingBrowser_8h_1aa2dc92faf68658e4f6fbfd089533f22a)(FRH_OnRegionSearchCompleteDelegate , bool , const TArray< [FRHAPI_SiteSettings](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings) > & , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )||
||[DECLARE_RH_DELEGATE_BLOCK](/unreal-plugins/all/rh__matchmakingbrowser_8h/#RH__MatchmakingBrowser_8h_1a7f47a560b2ee37d37dbe07e8b5f2d3cd)(FRH_OnRegionSearchCompleteDelegateBlock , FRH_OnRegionSearchCompleteDelegate , FRH_OnRegionSearchCompleteDynamicDelegate , bool , const TArray< [FRHAPI_SiteSettings](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings) > & , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )||
||[DECLARE_MULTICAST_DELEGATE_OneParam](/unreal-plugins/all/rh__matchmakingbrowser_8h/#RH__MatchmakingBrowser_8h_1a8c0d3d6ec987cafcb2dfa92d8b33cc96)(FRegionSettingsUpdatedDelegate , [URH_MatchmakingBrowserCache](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache) * )||
||[DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam](/unreal-plugins/all/rh__matchmakingbrowser_8h/#RH__MatchmakingBrowser_8h_1a39c101e05dbca688e9aeff957ca9c850)(FRegionSettingsUpdatedDynamicDelegate , [URH_MatchmakingBrowserCache](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache) * , Result )||
## Functions



### `DECLARE_DYNAMIC_DELEGATE_ThreeParams` <a id="RH__MatchmakingBrowser_8h_1aa6c717710d8560f3a865151c57cec7a5"></a>

 DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OnQueueSearchCompleteDynamicDelegate , bool , bSuccess , const [FRH_QueueSearchResult](/unreal-plugins/all/structfrh__queuesearchresult/#structFRH__QueueSearchResult) & , SearchResult , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & , ErrorInfo )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnQueueSearchCompleteDynamicDelegate||
|bool||
|bSuccess||
|const [FRH_QueueSearchResult](/unreal-plugins/all/structfrh__queuesearchresult/#structFRH__QueueSearchResult) &||
|SearchResult||
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &||
|ErrorInfo||

#### Description






### `DECLARE_DELEGATE_ThreeParams` <a id="RH__MatchmakingBrowser_8h_1a10b5591a7819e75569acfc294389eda2"></a>

 DECLARE_DELEGATE_ThreeParams(FRH_OnQueueSearchCompleteDelegate , bool , const [FRH_QueueSearchResult](/unreal-plugins/all/structfrh__queuesearchresult/#structFRH__QueueSearchResult) & , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnQueueSearchCompleteDelegate||
|bool||
|const [FRH_QueueSearchResult](/unreal-plugins/all/structfrh__queuesearchresult/#structFRH__QueueSearchResult) &||
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &||

#### Description






### `DECLARE_RH_DELEGATE_BLOCK` <a id="RH__MatchmakingBrowser_8h_1a64e2c853f03b49719a4e0b418a42450d"></a>

 DECLARE_RH_DELEGATE_BLOCK(FRH_OnQueueSearchCompleteDelegateBlock , FRH_OnQueueSearchCompleteDelegate , FRH_OnQueueSearchCompleteDynamicDelegate , bool , const [FRH_QueueSearchResult](/unreal-plugins/all/structfrh__queuesearchresult/#structFRH__QueueSearchResult) & , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnQueueSearchCompleteDelegateBlock||
|FRH_OnQueueSearchCompleteDelegate||
|FRH_OnQueueSearchCompleteDynamicDelegate||
|bool||
|const [FRH_QueueSearchResult](/unreal-plugins/all/structfrh__queuesearchresult/#structFRH__QueueSearchResult) &||
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &||

#### Description






### `DECLARE_DYNAMIC_DELEGATE_ThreeParams` <a id="RH__MatchmakingBrowser_8h_1ae1b911bbdd4ff42235af031d93a97f3b"></a>

 DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OnGetMatchmakingTemplateGroupCompleteDynamicDelegate , bool , bSuccess , [URH_MatchmakingTemplateGroupInfo](/unreal-plugins/all/classurh__matchmakingtemplategroupinfo/#classURH__MatchmakingTemplateGroupInfo) * , Result , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & , ErrorInfo )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnGetMatchmakingTemplateGroupCompleteDynamicDelegate||
|bool||
|bSuccess||
|[URH_MatchmakingTemplateGroupInfo](/unreal-plugins/all/classurh__matchmakingtemplategroupinfo/#classURH__MatchmakingTemplateGroupInfo) *||
|Result||
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &||
|ErrorInfo||

#### Description






### `DECLARE_DELEGATE_ThreeParams` <a id="RH__MatchmakingBrowser_8h_1a99289245d2e6a51320c62ff24b5d5148"></a>

 DECLARE_DELEGATE_ThreeParams(FRH_OnGetMatchmakingTemplateGroupCompleteDelegate , bool , const [URH_MatchmakingTemplateGroupInfo](/unreal-plugins/all/classurh__matchmakingtemplategroupinfo/#classURH__MatchmakingTemplateGroupInfo) * , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnGetMatchmakingTemplateGroupCompleteDelegate||
|bool||
|const [URH_MatchmakingTemplateGroupInfo](/unreal-plugins/all/classurh__matchmakingtemplategroupinfo/#classURH__MatchmakingTemplateGroupInfo) *||
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &||

#### Description






### `DECLARE_RH_DELEGATE_BLOCK` <a id="RH__MatchmakingBrowser_8h_1a7ad430f774f7bd79eace6170e8548463"></a>

 DECLARE_RH_DELEGATE_BLOCK(FRH_OnGetMatchmakingTemplateGroupCompleteDelegateBlock , FRH_OnGetMatchmakingTemplateGroupCompleteDelegate , FRH_OnGetMatchmakingTemplateGroupCompleteDynamicDelegate , bool , [URH_MatchmakingTemplateGroupInfo](/unreal-plugins/all/classurh__matchmakingtemplategroupinfo/#classURH__MatchmakingTemplateGroupInfo) * , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnGetMatchmakingTemplateGroupCompleteDelegateBlock||
|FRH_OnGetMatchmakingTemplateGroupCompleteDelegate||
|FRH_OnGetMatchmakingTemplateGroupCompleteDynamicDelegate||
|bool||
|[URH_MatchmakingTemplateGroupInfo](/unreal-plugins/all/classurh__matchmakingtemplategroupinfo/#classURH__MatchmakingTemplateGroupInfo) *||
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &||

#### Description






### `DECLARE_DYNAMIC_DELEGATE_ThreeParams` <a id="RH__MatchmakingBrowser_8h_1a354dc1cdb38e82abc6cb9e071ad771a8"></a>

 DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OnGetInstanceRequestTemplateCompleteDynamicDelegate , bool , bSuccess , [URH_InstanceRequestTemplate](/unreal-plugins/all/classurh__instancerequesttemplate/#classURH__InstanceRequestTemplate) * , Result , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & , ErrorInfo )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnGetInstanceRequestTemplateCompleteDynamicDelegate||
|bool||
|bSuccess||
|[URH_InstanceRequestTemplate](/unreal-plugins/all/classurh__instancerequesttemplate/#classURH__InstanceRequestTemplate) *||
|Result||
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &||
|ErrorInfo||

#### Description






### `DECLARE_DELEGATE_ThreeParams` <a id="RH__MatchmakingBrowser_8h_1ac0015e6412b4f1a5edb4f5c48c1e54ad"></a>

 DECLARE_DELEGATE_ThreeParams(FRH_OnGetInstanceRequestTemplateCompleteDelegate , bool , const [URH_InstanceRequestTemplate](/unreal-plugins/all/classurh__instancerequesttemplate/#classURH__InstanceRequestTemplate) * , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnGetInstanceRequestTemplateCompleteDelegate||
|bool||
|const [URH_InstanceRequestTemplate](/unreal-plugins/all/classurh__instancerequesttemplate/#classURH__InstanceRequestTemplate) *||
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &||

#### Description






### `DECLARE_RH_DELEGATE_BLOCK` <a id="RH__MatchmakingBrowser_8h_1a0ccc36f911ada5a4c958ddf4b37b0df9"></a>

 DECLARE_RH_DELEGATE_BLOCK(FRH_OnGetInstanceRequestTemplateCompleteDelegateBlock , FRH_OnGetInstanceRequestTemplateCompleteDelegate , FRH_OnGetInstanceRequestTemplateCompleteDynamicDelegate , bool , [URH_InstanceRequestTemplate](/unreal-plugins/all/classurh__instancerequesttemplate/#classURH__InstanceRequestTemplate) * , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnGetInstanceRequestTemplateCompleteDelegateBlock||
|FRH_OnGetInstanceRequestTemplateCompleteDelegate||
|FRH_OnGetInstanceRequestTemplateCompleteDynamicDelegate||
|bool||
|[URH_InstanceRequestTemplate](/unreal-plugins/all/classurh__instancerequesttemplate/#classURH__InstanceRequestTemplate) *||
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &||

#### Description






### `DECLARE_DYNAMIC_DELEGATE_ThreeParams` <a id="RH__MatchmakingBrowser_8h_1ae20733e7a55e156a01dd03c5f2248bc7"></a>

 DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRH_OnRegionSearchCompleteDynamicDelegate , bool , bSuccess , const TArray< [FRHAPI_SiteSettings](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings) > & , Result , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & , ErrorInfo )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnRegionSearchCompleteDynamicDelegate||
|bool||
|bSuccess||
|const TArray< [FRHAPI_SiteSettings](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings) > &||
|Result||
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &||
|ErrorInfo||

#### Description






### `DECLARE_DELEGATE_ThreeParams` <a id="RH__MatchmakingBrowser_8h_1aa2dc92faf68658e4f6fbfd089533f22a"></a>

 DECLARE_DELEGATE_ThreeParams(FRH_OnRegionSearchCompleteDelegate , bool , const TArray< [FRHAPI_SiteSettings](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings) > & , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnRegionSearchCompleteDelegate||
|bool||
|const TArray< [FRHAPI_SiteSettings](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings) > &||
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &||

#### Description






### `DECLARE_RH_DELEGATE_BLOCK` <a id="RH__MatchmakingBrowser_8h_1a7f47a560b2ee37d37dbe07e8b5f2d3cd"></a>

 DECLARE_RH_DELEGATE_BLOCK(FRH_OnRegionSearchCompleteDelegateBlock , FRH_OnRegionSearchCompleteDelegate , FRH_OnRegionSearchCompleteDynamicDelegate , bool , const TArray< [FRHAPI_SiteSettings](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings) > & , const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnRegionSearchCompleteDelegateBlock||
|FRH_OnRegionSearchCompleteDelegate||
|FRH_OnRegionSearchCompleteDynamicDelegate||
|bool||
|const TArray< [FRHAPI_SiteSettings](/unreal-plugins/all/structfrhapi__sitesettings/#structFRHAPI__SiteSettings) > &||
|const [FRH_ErrorInfo](/unreal-plugins/all/structfrh__errorinfo/#structFRH__ErrorInfo) &||

#### Description






### `DECLARE_MULTICAST_DELEGATE_OneParam` <a id="RH__MatchmakingBrowser_8h_1a8c0d3d6ec987cafcb2dfa92d8b33cc96"></a>

 DECLARE_MULTICAST_DELEGATE_OneParam(FRegionSettingsUpdatedDelegate , [URH_MatchmakingBrowserCache](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache) * )

#### Parameters

| Type | Name |
|------|------|
|FRegionSettingsUpdatedDelegate||
|[URH_MatchmakingBrowserCache](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache) *||

#### Description






### `DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam` <a id="RH__MatchmakingBrowser_8h_1a39c101e05dbca688e9aeff957ca9c850"></a>

 DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRegionSettingsUpdatedDynamicDelegate , [URH_MatchmakingBrowserCache](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache) * , Result )

#### Parameters

| Type | Name |
|------|------|
|FRegionSettingsUpdatedDynamicDelegate||
|[URH_MatchmakingBrowserCache](/unreal-plugins/all/classurh__matchmakingbrowsercache/#classURH__MatchmakingBrowserCache) *||
|Result||

#### Description







