---
title: GuideSubsystem
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`DECLARE_DYNAMIC_DELEGATE_ThreeParams`](#group__GuideSubsystem_1ga4caeb1a7ff62f1f20172b812aeae9f59)`(FRH_GuideSearchCallDynamicDelegate,bool,bSuccess,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo,int32,SearchGuideHandle)`            | 
`public  `[`DECLARE_DELEGATE_ThreeParams`](#group__GuideSubsystem_1ga2840e6458c9f8e6f2152ec5f8ad457a0)`(FRH_GuideSearchCallDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,int32)`            | 
`public  `[`DECLARE_RH_DELEGATE_BLOCK`](#group__GuideSubsystem_1ga6eb9fe1dd838f729430cc6582e2a658b)`(FRH_GuideSearchCallBlock,FRH_GuideSearchCallDelegate,FRH_GuideSearchCallDynamicDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,int32)`            | 
`public  `[`DECLARE_DYNAMIC_DELEGATE_ThreeParams`](#group__GuideSubsystem_1gac554eadf0d144ee7608738035699d8fb)`(FRH_GuideUpdateCallDynamicDelegate,bool,bSuccess,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo,FGuid,GuideID)`            | 
`public  `[`DECLARE_DELEGATE_ThreeParams`](#group__GuideSubsystem_1ga29cbb584d0324dc1d1f5307582c752a1)`(FRH_GuideUpdateCallDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,FGuid)`            | 
`public  `[`DECLARE_RH_DELEGATE_BLOCK`](#group__GuideSubsystem_1ga9224f3731f8188fa3a0ae4822b20692b)`(FRH_GuideUpdateCallBlock,FRH_GuideUpdateCallDelegate,FRH_GuideUpdateCallDynamicDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,FGuid)`            | 
`public  `[`DECLARE_DYNAMIC_DELEGATE_ThreeParams`](#group__GuideSubsystem_1gad48c65f352480b81248b64f637ea8571)`(FRH_GuideGetCallDynamicDelegate,bool,bSuccess,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo,const `[`FRHAPI_GuideFull`](RHAPI_GuideFull.md#structFRHAPI__GuideFull)` &,Guide)`            | 
`public  `[`DECLARE_DELEGATE_ThreeParams`](#group__GuideSubsystem_1ga8805aac46a8c8ac68cc8594855a392be)`(FRH_GuideGetCallDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,const `[`FRHAPI_GuideFull`](RHAPI_GuideFull.md#structFRHAPI__GuideFull)` &)`            | 
`public  `[`DECLARE_RH_DELEGATE_BLOCK`](#group__GuideSubsystem_1gadec7c5895ed4f47bba3f4e7d04269b86)`(FRH_GuideGetCallBlock,FRH_GuideGetCallDelegate,FRH_GuideGetCallDynamicDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,const `[`FRHAPI_GuideFull`](RHAPI_GuideFull.md#structFRHAPI__GuideFull)` &)`            | 
`class `[`URH_GuideSubsystem`](#classURH__GuideSubsystem) | Class used to help track and interact with the catalog to get Items, Vendors, and their data.

## Members

#### `public  `[`DECLARE_DYNAMIC_DELEGATE_ThreeParams`](#group__GuideSubsystem_1ga4caeb1a7ff62f1f20172b812aeae9f59)`(FRH_GuideSearchCallDynamicDelegate,bool,bSuccess,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo,int32,SearchGuideHandle)` <a id="group__GuideSubsystem_1ga4caeb1a7ff62f1f20172b812aeae9f59"></a>

#### `public  `[`DECLARE_DELEGATE_ThreeParams`](#group__GuideSubsystem_1ga2840e6458c9f8e6f2152ec5f8ad457a0)`(FRH_GuideSearchCallDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,int32)` <a id="group__GuideSubsystem_1ga2840e6458c9f8e6f2152ec5f8ad457a0"></a>

#### `public  `[`DECLARE_RH_DELEGATE_BLOCK`](#group__GuideSubsystem_1ga6eb9fe1dd838f729430cc6582e2a658b)`(FRH_GuideSearchCallBlock,FRH_GuideSearchCallDelegate,FRH_GuideSearchCallDynamicDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,int32)` <a id="group__GuideSubsystem_1ga6eb9fe1dd838f729430cc6582e2a658b"></a>

#### `public  `[`DECLARE_DYNAMIC_DELEGATE_ThreeParams`](#group__GuideSubsystem_1gac554eadf0d144ee7608738035699d8fb)`(FRH_GuideUpdateCallDynamicDelegate,bool,bSuccess,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo,FGuid,GuideID)` <a id="group__GuideSubsystem_1gac554eadf0d144ee7608738035699d8fb"></a>

#### `public  `[`DECLARE_DELEGATE_ThreeParams`](#group__GuideSubsystem_1ga29cbb584d0324dc1d1f5307582c752a1)`(FRH_GuideUpdateCallDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,FGuid)` <a id="group__GuideSubsystem_1ga29cbb584d0324dc1d1f5307582c752a1"></a>

#### `public  `[`DECLARE_RH_DELEGATE_BLOCK`](#group__GuideSubsystem_1ga9224f3731f8188fa3a0ae4822b20692b)`(FRH_GuideUpdateCallBlock,FRH_GuideUpdateCallDelegate,FRH_GuideUpdateCallDynamicDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,FGuid)` <a id="group__GuideSubsystem_1ga9224f3731f8188fa3a0ae4822b20692b"></a>

#### `public  `[`DECLARE_DYNAMIC_DELEGATE_ThreeParams`](#group__GuideSubsystem_1gad48c65f352480b81248b64f637ea8571)`(FRH_GuideGetCallDynamicDelegate,bool,bSuccess,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo,const `[`FRHAPI_GuideFull`](RHAPI_GuideFull.md#structFRHAPI__GuideFull)` &,Guide)` <a id="group__GuideSubsystem_1gad48c65f352480b81248b64f637ea8571"></a>

#### `public  `[`DECLARE_DELEGATE_ThreeParams`](#group__GuideSubsystem_1ga8805aac46a8c8ac68cc8594855a392be)`(FRH_GuideGetCallDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,const `[`FRHAPI_GuideFull`](RHAPI_GuideFull.md#structFRHAPI__GuideFull)` &)` <a id="group__GuideSubsystem_1ga8805aac46a8c8ac68cc8594855a392be"></a>

#### `public  `[`DECLARE_RH_DELEGATE_BLOCK`](#group__GuideSubsystem_1gadec7c5895ed4f47bba3f4e7d04269b86)`(FRH_GuideGetCallBlock,FRH_GuideGetCallDelegate,FRH_GuideGetCallDynamicDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,const `[`FRHAPI_GuideFull`](RHAPI_GuideFull.md#structFRHAPI__GuideFull)` &)` <a id="group__GuideSubsystem_1gadec7c5895ed4f47bba3f4e7d04269b86"></a>

## class `URH_GuideSubsystem` <a id="classURH__GuideSubsystem"></a>

```
class URH_GuideSubsystem
  : public URH_GameInstanceSubsystemPlugin
```

Class used to help track and interact with the catalog to get Items, Vendors, and their data.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public bool `[`bIgnoreCache`](#classURH__GuideSubsystem_1a44d0e7e3ea1c6287d622954afe63f9d9) | 
`public bool const FRH_GuideGetCallDynamicDelegate & `[`Delegate`](#classURH__GuideSubsystem_1af2f14b086fd01c68339a085d831e275d) | 
`public virtual void `[`Initialize`](#classURH__GuideSubsystem_1aad87ef5fd0a49aaa9ded2a2b06e4b21e)`()` | Initialize the subsystem.
`public virtual void `[`Deinitialize`](#classURH__GuideSubsystem_1ab5ccd14262089bc37b629f14fa36f088)`()` | Safely tears down the subsystem.
`public `[`URH_GuideSearch`](GuideSearch.md#classURH__GuideSearch)` * `[`CreateGuideSearch`](#classURH__GuideSubsystem_1a24edb5aa9919daf45fb6ca2f8c7cac7c)`(const struct `[`FRH_GuideSearchRequest`](GuideSearch.md#structFRH__GuideSearchRequest)` & InRequest)` | Searching for many guides.
`public inline void `[`RemoveGuideSearchAt`](#classURH__GuideSubsystem_1acf3e37d554c0421ae9613c47dcb155c4)`(int32 Index)` | Removed the cached data for an existing guide search by index.
`public inline void `[`RemoveGuideSearch`](#classURH__GuideSubsystem_1a4822f46eb65aef51d99d26153a55644f)`(`[`URH_GuideSearch`](GuideSearch.md#classURH__GuideSearch)` * GuideSearch)` | Removed the cached data for an existing guide search.
`public inline void `[`RemoveAllGuideSearches`](#classURH__GuideSubsystem_1ad7363e2eab0b94653ecea290a6f47c3a)`()` | Remove the cached data for all search guides.
`public inline const TArray< `[`URH_GuideSearch`](GuideSearch.md#classURH__GuideSearch)` * > & `[`GetGuideSearches`](#classURH__GuideSubsystem_1a759e472583d1b7bb1433062af662f237)`() const` | Get the searches and their handles.
`public inline const TMap< FGuid, `[`FRHAPI_GuideFull`](RHAPI_GuideFull.md#structFRHAPI__GuideFull)` > & `[`GetCachedGuides`](#classURH__GuideSubsystem_1a2358e946b107177f8df6f92ac02be463)`() const` | Working with full guides (create, read, update, delete)
`public const `[`FRHAPI_GuideFull`](RHAPI_GuideFull.md#structFRHAPI__GuideFull)` * `[`GetCachedGuide`](#classURH__GuideSubsystem_1af2e85c3859b84b6304edc1e244634668)`(const FGuid & GuideID) const` | Get a single guide that is already cached.
`public bool `[`RemoveCachedGuide`](#classURH__GuideSubsystem_1a99535190b572155b8e6f628ac0125953)`(const FGuid & GuideID)` | Remove a guide from the local cache.
`public bool `[`GetGuide`](#classURH__GuideSubsystem_1adc3cbeca365635da547acea14d728c69)`(const FGuid & GuideID,`[`FRHAPI_GuideFull`](RHAPI_GuideFull.md#structFRHAPI__GuideFull)` & OutGuide) const` | Get a guide that is already cached.
`public void `[`GetGuideAsync`](#classURH__GuideSubsystem_1a117de54086fc93dbd9ed47909cfbc5b8)`(const FGuid & GuideID,bool bIgnoreCache,const FRH_GuideGetCallBlock & Delegate)` | Get a guide from the cache, or request it from the API.
`public void `[`CreateGuide`](#classURH__GuideSubsystem_1a205ed02f3de4df9df08736f119d0cd29)`(`[`FRHAPI_GuideCreateRequest`](RHAPI_GuideCreateRequest.md#structFRHAPI__GuideCreateRequest)` Request,const FRH_GuideUpdateCallBlock & Delegate)` | Create a new guide.
`public void `[`UpdateGuide`](#classURH__GuideSubsystem_1a9438689f3c19428df61f608291331a69)`(const FGuid & GuideID,`[`FRHAPI_GuideCreateRequest`](RHAPI_GuideCreateRequest.md#structFRHAPI__GuideCreateRequest)` Request,const FRH_GuideUpdateCallBlock & Delegate)` | Update a new guide.
`public void `[`DeleteGuide`](#classURH__GuideSubsystem_1a5e9f8f5e113c3cd3c39578cb174e7a0f)`(const FGuid & GuideID,const FRH_GuideUpdateCallBlock & Delegate)` | Delete a new guide.
`protected TMap< FGuid, `[`FRHAPI_GuideFull`](RHAPI_GuideFull.md#structFRHAPI__GuideFull)` > `[`Guides`](#classURH__GuideSubsystem_1a65165d2d69cc1625c1eb8ade83243ef7) | 
`protected TArray< `[`URH_GuideSearch`](GuideSearch.md#classURH__GuideSearch)` * > `[`Searches`](#classURH__GuideSubsystem_1a2da567d77814644f715dffc32c13fcfe) | 
`protected void `[`OnGuideGetAsync`](#classURH__GuideSubsystem_1a16c279afe37487b0ea5dac8b7f6f7198)`(const TGetGuideById::Response & Resp,FRH_GuideGetCallBlock Delegate)` | 
`protected void `[`OnGuideCreate`](#classURH__GuideSubsystem_1a9a8d190f9ac0cdbbf191076dc41f9691)`(const TCreateGuide::Response & Resp,FRH_GuideUpdateCallBlock Delegate)` | 
`protected void `[`OnGuideUpdate`](#classURH__GuideSubsystem_1a482b376c37aeb12f566f4e93ce48419b)`(const TUpdateGuideById::Response & Resp,FRH_GuideUpdateCallBlock Delegate,FGuid GuideID)` | 
`protected void `[`OnGuideDelete`](#classURH__GuideSubsystem_1a5bb25760fe1f4dab29701851e136de32)`(const TDeleteGuideById::Response & Resp,FRH_GuideUpdateCallBlock Delegate,FGuid GuideID)` | 
`protected virtual void `[`InitPropertiesWithDefaultValues`](#classURH__GuideSubsystem_1a0b2498b16033e2e6de76e81c7a795ce5)`()` | Initializes the subsystem with defaults for its cached data.
`protected inline virtual TStatId `[`GetStatId`](#classURH__GuideSubsystem_1abbd427f8a2bd6b3cfe2a29de9d35ff39)`() const` | Gets the guide subsystem stat Id.
`typedef `[`TSearchGuides`](#classURH__GuideSubsystem_1a4f5a37af74b865ad11d68cc1b53f507a) | Type Define for API Calls.
`typedef `[`TGetGuideById`](#classURH__GuideSubsystem_1a533d1cefc3e317971a967b79b96a22f3) | 
`typedef `[`TCreateGuide`](#classURH__GuideSubsystem_1a2512c12ba1a179a756ad8c74379b991b) | 
`typedef `[`TUpdateGuideById`](#classURH__GuideSubsystem_1aab321b8a678e9e6c9a7db2123bba8798) | 
`typedef `[`TDeleteGuideById`](#classURH__GuideSubsystem_1a3ca3333a7a5119227bb91dc3e734646c) | 

### Members

#### `public bool `[`bIgnoreCache`](#classURH__GuideSubsystem_1a44d0e7e3ea1c6287d622954afe63f9d9) <a id="classURH__GuideSubsystem_1a44d0e7e3ea1c6287d622954afe63f9d9"></a>

#### `public bool const FRH_GuideGetCallDynamicDelegate & `[`Delegate`](#classURH__GuideSubsystem_1af2f14b086fd01c68339a085d831e275d) <a id="classURH__GuideSubsystem_1af2f14b086fd01c68339a085d831e275d"></a>

#### `public virtual void `[`Initialize`](#classURH__GuideSubsystem_1aad87ef5fd0a49aaa9ded2a2b06e4b21e)`()` <a id="classURH__GuideSubsystem_1aad87ef5fd0a49aaa9ded2a2b06e4b21e"></a>

Initialize the subsystem.

#### `public virtual void `[`Deinitialize`](#classURH__GuideSubsystem_1ab5ccd14262089bc37b629f14fa36f088)`()` <a id="classURH__GuideSubsystem_1ab5ccd14262089bc37b629f14fa36f088"></a>

Safely tears down the subsystem.

#### `public `[`URH_GuideSearch`](GuideSearch.md#classURH__GuideSearch)` * `[`CreateGuideSearch`](#classURH__GuideSubsystem_1a24edb5aa9919daf45fb6ca2f8c7cac7c)`(const struct `[`FRH_GuideSearchRequest`](GuideSearch.md#structFRH__GuideSearchRequest)` & InRequest)` <a id="classURH__GuideSubsystem_1a24edb5aa9919daf45fb6ca2f8c7cac7c"></a>

Searching for many guides.

Create a new SearchGuide, and return the handle. Does NOT start the search 
#### Parameters
* `InRequest` Search parameters for the API call. 

#### Returns
SearchGuideHandle Handle to the search request, results

#### `public inline void `[`RemoveGuideSearchAt`](#classURH__GuideSubsystem_1acf3e37d554c0421ae9613c47dcb155c4)`(int32 Index)` <a id="classURH__GuideSubsystem_1acf3e37d554c0421ae9613c47dcb155c4"></a>

Removed the cached data for an existing guide search by index.

#### `public inline void `[`RemoveGuideSearch`](#classURH__GuideSubsystem_1a4822f46eb65aef51d99d26153a55644f)`(`[`URH_GuideSearch`](GuideSearch.md#classURH__GuideSearch)` * GuideSearch)` <a id="classURH__GuideSubsystem_1a4822f46eb65aef51d99d26153a55644f"></a>

Removed the cached data for an existing guide search.

#### `public inline void `[`RemoveAllGuideSearches`](#classURH__GuideSubsystem_1ad7363e2eab0b94653ecea290a6f47c3a)`()` <a id="classURH__GuideSubsystem_1ad7363e2eab0b94653ecea290a6f47c3a"></a>

Remove the cached data for all search guides.

#### `public inline const TArray< `[`URH_GuideSearch`](GuideSearch.md#classURH__GuideSearch)` * > & `[`GetGuideSearches`](#classURH__GuideSubsystem_1a759e472583d1b7bb1433062af662f237)`() const` <a id="classURH__GuideSubsystem_1a759e472583d1b7bb1433062af662f237"></a>

Get the searches and their handles.

#### `public inline const TMap< FGuid, `[`FRHAPI_GuideFull`](RHAPI_GuideFull.md#structFRHAPI__GuideFull)` > & `[`GetCachedGuides`](#classURH__GuideSubsystem_1a2358e946b107177f8df6f92ac02be463)`() const` <a id="classURH__GuideSubsystem_1a2358e946b107177f8df6f92ac02be463"></a>

Working with full guides (create, read, update, delete)

Get the searches and their handles

#### `public const `[`FRHAPI_GuideFull`](RHAPI_GuideFull.md#structFRHAPI__GuideFull)` * `[`GetCachedGuide`](#classURH__GuideSubsystem_1af2e85c3859b84b6304edc1e244634668)`(const FGuid & GuideID) const` <a id="classURH__GuideSubsystem_1af2e85c3859b84b6304edc1e244634668"></a>

Get a single guide that is already cached.

#### `public bool `[`RemoveCachedGuide`](#classURH__GuideSubsystem_1a99535190b572155b8e6f628ac0125953)`(const FGuid & GuideID)` <a id="classURH__GuideSubsystem_1a99535190b572155b8e6f628ac0125953"></a>

Remove a guide from the local cache.

#### Parameters
* `GuideID` ID of the guide 

#### Returns
if the guide was removed

#### `public bool `[`GetGuide`](#classURH__GuideSubsystem_1adc3cbeca365635da547acea14d728c69)`(const FGuid & GuideID,`[`FRHAPI_GuideFull`](RHAPI_GuideFull.md#structFRHAPI__GuideFull)` & OutGuide) const` <a id="classURH__GuideSubsystem_1adc3cbeca365635da547acea14d728c69"></a>

Get a guide that is already cached.

#### Parameters
* `GuideID` ID of the guide to get 

* `OutGuide` The guide that was found 

#### Returns
if the guide was found

#### `public void `[`GetGuideAsync`](#classURH__GuideSubsystem_1a117de54086fc93dbd9ed47909cfbc5b8)`(const FGuid & GuideID,bool bIgnoreCache,const FRH_GuideGetCallBlock & Delegate)` <a id="classURH__GuideSubsystem_1a117de54086fc93dbd9ed47909cfbc5b8"></a>

Get a guide from the cache, or request it from the API.

#### `public void `[`CreateGuide`](#classURH__GuideSubsystem_1a205ed02f3de4df9df08736f119d0cd29)`(`[`FRHAPI_GuideCreateRequest`](RHAPI_GuideCreateRequest.md#structFRHAPI__GuideCreateRequest)` Request,const FRH_GuideUpdateCallBlock & Delegate)` <a id="classURH__GuideSubsystem_1a205ed02f3de4df9df08736f119d0cd29"></a>

Create a new guide.

#### `public void `[`UpdateGuide`](#classURH__GuideSubsystem_1a9438689f3c19428df61f608291331a69)`(const FGuid & GuideID,`[`FRHAPI_GuideCreateRequest`](RHAPI_GuideCreateRequest.md#structFRHAPI__GuideCreateRequest)` Request,const FRH_GuideUpdateCallBlock & Delegate)` <a id="classURH__GuideSubsystem_1a9438689f3c19428df61f608291331a69"></a>

Update a new guide.

#### `public void `[`DeleteGuide`](#classURH__GuideSubsystem_1a5e9f8f5e113c3cd3c39578cb174e7a0f)`(const FGuid & GuideID,const FRH_GuideUpdateCallBlock & Delegate)` <a id="classURH__GuideSubsystem_1a5e9f8f5e113c3cd3c39578cb174e7a0f"></a>

Delete a new guide.

#### `protected TMap< FGuid, `[`FRHAPI_GuideFull`](RHAPI_GuideFull.md#structFRHAPI__GuideFull)` > `[`Guides`](#classURH__GuideSubsystem_1a65165d2d69cc1625c1eb8ade83243ef7) <a id="classURH__GuideSubsystem_1a65165d2d69cc1625c1eb8ade83243ef7"></a>

#### `protected TArray< `[`URH_GuideSearch`](GuideSearch.md#classURH__GuideSearch)` * > `[`Searches`](#classURH__GuideSubsystem_1a2da567d77814644f715dffc32c13fcfe) <a id="classURH__GuideSubsystem_1a2da567d77814644f715dffc32c13fcfe"></a>

#### `protected void `[`OnGuideGetAsync`](#classURH__GuideSubsystem_1a16c279afe37487b0ea5dac8b7f6f7198)`(const TGetGuideById::Response & Resp,FRH_GuideGetCallBlock Delegate)` <a id="classURH__GuideSubsystem_1a16c279afe37487b0ea5dac8b7f6f7198"></a>

#### `protected void `[`OnGuideCreate`](#classURH__GuideSubsystem_1a9a8d190f9ac0cdbbf191076dc41f9691)`(const TCreateGuide::Response & Resp,FRH_GuideUpdateCallBlock Delegate)` <a id="classURH__GuideSubsystem_1a9a8d190f9ac0cdbbf191076dc41f9691"></a>

#### `protected void `[`OnGuideUpdate`](#classURH__GuideSubsystem_1a482b376c37aeb12f566f4e93ce48419b)`(const TUpdateGuideById::Response & Resp,FRH_GuideUpdateCallBlock Delegate,FGuid GuideID)` <a id="classURH__GuideSubsystem_1a482b376c37aeb12f566f4e93ce48419b"></a>

#### `protected void `[`OnGuideDelete`](#classURH__GuideSubsystem_1a5bb25760fe1f4dab29701851e136de32)`(const TDeleteGuideById::Response & Resp,FRH_GuideUpdateCallBlock Delegate,FGuid GuideID)` <a id="classURH__GuideSubsystem_1a5bb25760fe1f4dab29701851e136de32"></a>

#### `protected virtual void `[`InitPropertiesWithDefaultValues`](#classURH__GuideSubsystem_1a0b2498b16033e2e6de76e81c7a795ce5)`()` <a id="classURH__GuideSubsystem_1a0b2498b16033e2e6de76e81c7a795ce5"></a>

Initializes the subsystem with defaults for its cached data.

#### `protected inline virtual TStatId `[`GetStatId`](#classURH__GuideSubsystem_1abbd427f8a2bd6b3cfe2a29de9d35ff39)`() const` <a id="classURH__GuideSubsystem_1abbd427f8a2bd6b3cfe2a29de9d35ff39"></a>

Gets the guide subsystem stat Id.

#### `typedef `[`TSearchGuides`](#classURH__GuideSubsystem_1a4f5a37af74b865ad11d68cc1b53f507a) <a id="classURH__GuideSubsystem_1a4f5a37af74b865ad11d68cc1b53f507a"></a>

Type Define for API Calls.

#### `typedef `[`TGetGuideById`](#classURH__GuideSubsystem_1a533d1cefc3e317971a967b79b96a22f3) <a id="classURH__GuideSubsystem_1a533d1cefc3e317971a967b79b96a22f3"></a>

#### `typedef `[`TCreateGuide`](#classURH__GuideSubsystem_1a2512c12ba1a179a756ad8c74379b991b) <a id="classURH__GuideSubsystem_1a2512c12ba1a179a756ad8c74379b991b"></a>

#### `typedef `[`TUpdateGuideById`](#classURH__GuideSubsystem_1aab321b8a678e9e6c9a7db2123bba8798) <a id="classURH__GuideSubsystem_1aab321b8a678e9e6c9a7db2123bba8798"></a>

#### `typedef `[`TDeleteGuideById`](#classURH__GuideSubsystem_1a3ca3333a7a5119227bb91dc3e734646c) <a id="classURH__GuideSubsystem_1a3ca3333a7a5119227bb91dc3e734646c"></a>

