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
`struct `[`FRH_GuideSearchRequest`](#structFRH__GuideSearchRequest) | 
`struct `[`FRH_GuideSearch`](#structFRH__GuideSearch) | 

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
`public int32 `[`CreateSearchGuides`](#classURH__GuideSubsystem_1a99ee5eb2f793b2b64eec8421e582683a)`(const `[`FRH_GuideSearchRequest`](GuideSubsystem.md#structFRH__GuideSearchRequest)` & InRequest)` | Searching for many guides.
`public bool `[`RequestNextSearchGuidePage`](#classURH__GuideSubsystem_1a5500afcf9155869235f6dd61f838ae70)`(int32 SearchGuideHandle,const FRH_GuideSearchCallBlock & Delegate)` | Request the next page of results for a search guide.
`public inline void `[`ClearSearchGuide`](#classURH__GuideSubsystem_1a085bebb98360ba9772daf50ab94cb3f1)`(int32 SearchGuideHandle)` | Clear the cached data for an existing guide search.
`public inline void `[`ClearAllSearchGuides`](#classURH__GuideSubsystem_1a67310b0e768029f04e02648b735e104f)`()` | Clear the cached data for all search guides.
`public const `[`FRH_GuideSearchRequest`](GuideSubsystem.md#structFRH__GuideSearchRequest)` * `[`GetSearchGuideRequest`](#classURH__GuideSubsystem_1a345062ca9f1972da22c8d047ed2feedf)`(int32 SearchGuideHandle) const` | Get the request info that was used to create the GuideSearch.
`public const TArray< `[`FRHAPI_SearchGuideResponse`](RHAPI_SearchGuideResponse.md#structFRHAPI__SearchGuideResponse)` > * `[`GetSearchGuideResultPages`](#classURH__GuideSubsystem_1a2bac17fcd7499f2e2d5b7eaf19aa6dbf)`(int32 SearchGuideHandle) const` | Get the responses for a GuideSearch.
`public inline const TMap< int32, `[`FRH_GuideSearch`](GuideSubsystem.md#structFRH__GuideSearch)` > & `[`GetSearches`](#classURH__GuideSubsystem_1a83cd85ba2c35a2cbca0868932e89ebe0)`() const` | Get the searches and their handles.
`public inline const TMap< FGuid, `[`FRHAPI_GuideFull`](RHAPI_GuideFull.md#structFRHAPI__GuideFull)` > & `[`GetCachedGuides`](#classURH__GuideSubsystem_1a2358e946b107177f8df6f92ac02be463)`() const` | Working with full guides (create, read, update, delete)
`public const `[`FRHAPI_GuideFull`](RHAPI_GuideFull.md#structFRHAPI__GuideFull)` * `[`GetCachedGuide`](#classURH__GuideSubsystem_1af2e85c3859b84b6304edc1e244634668)`(const FGuid & GuideID) const` | Get a single guide that is already cached.
`public bool `[`RemoveCachedGuide`](#classURH__GuideSubsystem_1a99535190b572155b8e6f628ac0125953)`(const FGuid & GuideID)` | Remove a guide from the local cache.
`public bool `[`GetGuide`](#classURH__GuideSubsystem_1adc3cbeca365635da547acea14d728c69)`(const FGuid & GuideID,`[`FRHAPI_GuideFull`](RHAPI_GuideFull.md#structFRHAPI__GuideFull)` & OutGuide) const` | Get a guide that is already cached.
`public void `[`GetGuideAsync`](#classURH__GuideSubsystem_1a117de54086fc93dbd9ed47909cfbc5b8)`(const FGuid & GuideID,bool bIgnoreCache,const FRH_GuideGetCallBlock & Delegate)` | Get a guide from the cache, or request it from the API.
`public void `[`CreateGuide`](#classURH__GuideSubsystem_1a205ed02f3de4df9df08736f119d0cd29)`(`[`FRHAPI_GuideCreateRequest`](RHAPI_GuideCreateRequest.md#structFRHAPI__GuideCreateRequest)` Request,const FRH_GuideUpdateCallBlock & Delegate)` | Create a new guide.
`public void `[`UpdateGuide`](#classURH__GuideSubsystem_1a9438689f3c19428df61f608291331a69)`(const FGuid & GuideID,`[`FRHAPI_GuideCreateRequest`](RHAPI_GuideCreateRequest.md#structFRHAPI__GuideCreateRequest)` Request,const FRH_GuideUpdateCallBlock & Delegate)` | Update a new guide.
`public void `[`DeleteGuide`](#classURH__GuideSubsystem_1a5e9f8f5e113c3cd3c39578cb174e7a0f)`(const FGuid & GuideID,const FRH_GuideUpdateCallBlock & Delegate)` | Delete a new guide.
`protected TMap< FGuid, `[`FRHAPI_GuideFull`](RHAPI_GuideFull.md#structFRHAPI__GuideFull)` > `[`Guides`](#classURH__GuideSubsystem_1a65165d2d69cc1625c1eb8ade83243ef7) | 
`protected TMap< int32, `[`FRH_GuideSearch`](GuideSubsystem.md#structFRH__GuideSearch)` > `[`Searches`](#classURH__GuideSubsystem_1a5280a5535740b2edbee579df2bc30f17) | 
`protected int32 `[`LastSearchGuideRequestHandle`](#classURH__GuideSubsystem_1ae4c2c2666737dadb78e0fc9a1c37e2c1) | 
`protected void `[`OnSearchGuidesResponse`](#classURH__GuideSubsystem_1af6af7e46beef9b9599bc22ad31ab737a)`(const TSearchGuides::Response & Resp,FRH_GuideSearchCallBlock Delegate,int32 SearchGuideHandle)` | 
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

#### `public int32 `[`CreateSearchGuides`](#classURH__GuideSubsystem_1a99ee5eb2f793b2b64eec8421e582683a)`(const `[`FRH_GuideSearchRequest`](GuideSubsystem.md#structFRH__GuideSearchRequest)` & InRequest)` <a id="classURH__GuideSubsystem_1a99ee5eb2f793b2b64eec8421e582683a"></a>

Searching for many guides.

Create a new SearchGuide, and return the handle. Does NOT start the search 
#### Parameters
* `InRequest` Search parameters for the API call. 

#### Returns
SearchGuideHandle Handle to the search request, results

#### `public bool `[`RequestNextSearchGuidePage`](#classURH__GuideSubsystem_1a5500afcf9155869235f6dd61f838ae70)`(int32 SearchGuideHandle,const FRH_GuideSearchCallBlock & Delegate)` <a id="classURH__GuideSubsystem_1a5500afcf9155869235f6dd61f838ae70"></a>

Request the next page of results for a search guide.

#### `public inline void `[`ClearSearchGuide`](#classURH__GuideSubsystem_1a085bebb98360ba9772daf50ab94cb3f1)`(int32 SearchGuideHandle)` <a id="classURH__GuideSubsystem_1a085bebb98360ba9772daf50ab94cb3f1"></a>

Clear the cached data for an existing guide search.

#### `public inline void `[`ClearAllSearchGuides`](#classURH__GuideSubsystem_1a67310b0e768029f04e02648b735e104f)`()` <a id="classURH__GuideSubsystem_1a67310b0e768029f04e02648b735e104f"></a>

Clear the cached data for all search guides.

#### `public const `[`FRH_GuideSearchRequest`](GuideSubsystem.md#structFRH__GuideSearchRequest)` * `[`GetSearchGuideRequest`](#classURH__GuideSubsystem_1a345062ca9f1972da22c8d047ed2feedf)`(int32 SearchGuideHandle) const` <a id="classURH__GuideSubsystem_1a345062ca9f1972da22c8d047ed2feedf"></a>

Get the request info that was used to create the GuideSearch.

#### Parameters
* `SearchGuideHandle` 

#### Returns
request info

#### `public const TArray< `[`FRHAPI_SearchGuideResponse`](RHAPI_SearchGuideResponse.md#structFRHAPI__SearchGuideResponse)` > * `[`GetSearchGuideResultPages`](#classURH__GuideSubsystem_1a2bac17fcd7499f2e2d5b7eaf19aa6dbf)`(int32 SearchGuideHandle) const` <a id="classURH__GuideSubsystem_1a2bac17fcd7499f2e2d5b7eaf19aa6dbf"></a>

Get the responses for a GuideSearch.

#### Parameters
* `SearchGuideHandle` 

#### Returns
array of pages containing the responses

#### `public inline const TMap< int32, `[`FRH_GuideSearch`](GuideSubsystem.md#structFRH__GuideSearch)` > & `[`GetSearches`](#classURH__GuideSubsystem_1a83cd85ba2c35a2cbca0868932e89ebe0)`() const` <a id="classURH__GuideSubsystem_1a83cd85ba2c35a2cbca0868932e89ebe0"></a>

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

#### `protected TMap< int32, `[`FRH_GuideSearch`](GuideSubsystem.md#structFRH__GuideSearch)` > `[`Searches`](#classURH__GuideSubsystem_1a5280a5535740b2edbee579df2bc30f17) <a id="classURH__GuideSubsystem_1a5280a5535740b2edbee579df2bc30f17"></a>

#### `protected int32 `[`LastSearchGuideRequestHandle`](#classURH__GuideSubsystem_1ae4c2c2666737dadb78e0fc9a1c37e2c1) <a id="classURH__GuideSubsystem_1ae4c2c2666737dadb78e0fc9a1c37e2c1"></a>

#### `protected void `[`OnSearchGuidesResponse`](#classURH__GuideSubsystem_1af6af7e46beef9b9599bc22ad31ab737a)`(const TSearchGuides::Response & Resp,FRH_GuideSearchCallBlock Delegate,int32 SearchGuideHandle)` <a id="classURH__GuideSubsystem_1af6af7e46beef9b9599bc22ad31ab737a"></a>

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

## struct `FRH_GuideSearchRequest` <a id="structFRH__GuideSearchRequest"></a>

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_SearchGuideSort `[`SortBy`](#structFRH__GuideSearchRequest_1a5c0b3871738f07507779abd8d8792ec2) | 
`public ERHAPI_SortDirection `[`Sort`](#structFRH__GuideSearchRequest_1a69a74e6db2932f2a7694b060bb5c0126) | 
`public int32 `[`PageSize`](#structFRH__GuideSearchRequest_1aa11345b4b6ac52820fca98380517e5b7) | 
`public bool `[`bDoOwnerSearch`](#structFRH__GuideSearchRequest_1a1f52bf3978c60127c3323d99b3699375) | 
`public ERHAPI_GuideEntityType `[`OwnerEntityType`](#structFRH__GuideSearchRequest_1af75e3b399e0944765b067afa06695ac6) | 
`public FString `[`OwnerEntityId`](#structFRH__GuideSearchRequest_1a642272082563e0b6296f00f1b46ad33c) | 
`public FString `[`Language`](#structFRH__GuideSearchRequest_1a129330009f1bc053d4974398d42b7874) | 
`public FString `[`GuideType`](#structFRH__GuideSearchRequest_1ad67a1c13de9a9cb53113700cf2185800) | 
`public FString `[`GameVersion`](#structFRH__GuideSearchRequest_1a92e1fd7379cab7dd12be996c12d1ad2a) | 
`public FString `[`Name`](#structFRH__GuideSearchRequest_1aeb3fa8d2c5d733186ced2c176ac7bd09) | 
`public FString `[`Ref1`](#structFRH__GuideSearchRequest_1a48936273c384f1e6591a4fb5f0d81436) | 
`public FString `[`Ref2`](#structFRH__GuideSearchRequest_1ad3ed7e97653155de0a0602a7bd4a72ce) | 
`public FString `[`Ref3`](#structFRH__GuideSearchRequest_1a3906eac167d368959d5109b06a5962e2) | 
`public FString `[`Ref4`](#structFRH__GuideSearchRequest_1a4e53605b4741134b0d3b77695900a008) | 
`public FString `[`Ref5`](#structFRH__GuideSearchRequest_1ab3cb456453653d77a27f698090ae29d4) | 
`public FString `[`Ref6`](#structFRH__GuideSearchRequest_1a517fc3548bd615c207e69a93a799b4f3) | 
`public FString `[`Ref7`](#structFRH__GuideSearchRequest_1a3e94646b43284e5535864ff8a64a941c) | 
`public FString `[`Ref8`](#structFRH__GuideSearchRequest_1a0673c8bdbbb56849811f7d9d1f1d59b3) | 
`public FString `[`Ref9`](#structFRH__GuideSearchRequest_1afafbc1e5c121f4869c7b5107efcf6f44) | 
`public FString `[`Ref10`](#structFRH__GuideSearchRequest_1a0bfd1481e8ef3de0560c2fb73308b68b) | 
`public FString `[`Ref11`](#structFRH__GuideSearchRequest_1aee5080cf040699dadacc01203a6ba8cd) | 
`public FString `[`Ref12`](#structFRH__GuideSearchRequest_1a38ddb8d71e764dd9218ba6dab1144084) | 
`public FString `[`Ref13`](#structFRH__GuideSearchRequest_1a4ebc9bf3b1ef69a3ce8ce727b611a9a3) | 
`public FString `[`Ref14`](#structFRH__GuideSearchRequest_1a56a4c6010d1b18a45d1abfb9cec128c4) | 
`public FString `[`Ref15`](#structFRH__GuideSearchRequest_1a9c094ba4810c09b577e3b2ad5ebef60f) | 
`public FString `[`Ref16`](#structFRH__GuideSearchRequest_1a608e541aeb67b4b7fe0c242d046fdf05) | 
`public FString `[`Ref17`](#structFRH__GuideSearchRequest_1af6a4840d8d0af343a3a6d9763c87dcb9) | 
`public FString `[`Ref18`](#structFRH__GuideSearchRequest_1aaeb955b2caac7372fa8950630a630230) | 
`public FString `[`Ref19`](#structFRH__GuideSearchRequest_1aeac86eb5a9ed118f7e8f5b18cb6c6cce) | 
`public FString `[`Ref20`](#structFRH__GuideSearchRequest_1a78fcecc785ec9d670dc4cedf1e756ac0) | 
`public FString `[`Ref21`](#structFRH__GuideSearchRequest_1af7c7bafa5b767514036f15298a28e0f3) | 
`public FString `[`Ref22`](#structFRH__GuideSearchRequest_1aab377f727545ae1ae26598b0a2c4fbc4) | 
`public FString `[`Ref23`](#structFRH__GuideSearchRequest_1a7eb4eadf221a26a0f5e69a2ccb8a2758) | 
`public FString `[`Ref24`](#structFRH__GuideSearchRequest_1a36dc0b354da9cd4b7d867c1374b9de27) | 
`public FString `[`Ref25`](#structFRH__GuideSearchRequest_1a421d5912b96eb2231b52ae29bf0e2733) | 
`public FString `[`Ref26`](#structFRH__GuideSearchRequest_1a102e8eace961aaed4572242e75b9e081) | 
`public FString `[`Ref27`](#structFRH__GuideSearchRequest_1a6454eb88a97c9598c563a9ae27485c8c) | 
`public FString `[`Ref28`](#structFRH__GuideSearchRequest_1abe13819b126eaf7ab87b328d8a823c61) | 
`public FString `[`Ref29`](#structFRH__GuideSearchRequest_1a71bc32ba8d3e7449cdc30e0edd6e6fb5) | 
`public FString `[`Ref30`](#structFRH__GuideSearchRequest_1a188485dec2d9c6eaa08d7cc6f6a73485) | 
`public FString `[`Ref31`](#structFRH__GuideSearchRequest_1a04d3bc9e760c05b558062bcf9b1dab9a) | 
`public FString `[`Ref32`](#structFRH__GuideSearchRequest_1a3ecc32eacfa66d90d85a5a9c292757a7) | 
`public inline  `[`FRH_GuideSearchRequest`](#structFRH__GuideSearchRequest_1a1d8b70ee1bdcea40c9ebb9053584ba09)`()` | 

### Members

#### `public ERHAPI_SearchGuideSort `[`SortBy`](#structFRH__GuideSearchRequest_1a5c0b3871738f07507779abd8d8792ec2) <a id="structFRH__GuideSearchRequest_1a5c0b3871738f07507779abd8d8792ec2"></a>

#### `public ERHAPI_SortDirection `[`Sort`](#structFRH__GuideSearchRequest_1a69a74e6db2932f2a7694b060bb5c0126) <a id="structFRH__GuideSearchRequest_1a69a74e6db2932f2a7694b060bb5c0126"></a>

#### `public int32 `[`PageSize`](#structFRH__GuideSearchRequest_1aa11345b4b6ac52820fca98380517e5b7) <a id="structFRH__GuideSearchRequest_1aa11345b4b6ac52820fca98380517e5b7"></a>

#### `public bool `[`bDoOwnerSearch`](#structFRH__GuideSearchRequest_1a1f52bf3978c60127c3323d99b3699375) <a id="structFRH__GuideSearchRequest_1a1f52bf3978c60127c3323d99b3699375"></a>

#### `public ERHAPI_GuideEntityType `[`OwnerEntityType`](#structFRH__GuideSearchRequest_1af75e3b399e0944765b067afa06695ac6) <a id="structFRH__GuideSearchRequest_1af75e3b399e0944765b067afa06695ac6"></a>

#### `public FString `[`OwnerEntityId`](#structFRH__GuideSearchRequest_1a642272082563e0b6296f00f1b46ad33c) <a id="structFRH__GuideSearchRequest_1a642272082563e0b6296f00f1b46ad33c"></a>

#### `public FString `[`Language`](#structFRH__GuideSearchRequest_1a129330009f1bc053d4974398d42b7874) <a id="structFRH__GuideSearchRequest_1a129330009f1bc053d4974398d42b7874"></a>

#### `public FString `[`GuideType`](#structFRH__GuideSearchRequest_1ad67a1c13de9a9cb53113700cf2185800) <a id="structFRH__GuideSearchRequest_1ad67a1c13de9a9cb53113700cf2185800"></a>

#### `public FString `[`GameVersion`](#structFRH__GuideSearchRequest_1a92e1fd7379cab7dd12be996c12d1ad2a) <a id="structFRH__GuideSearchRequest_1a92e1fd7379cab7dd12be996c12d1ad2a"></a>

#### `public FString `[`Name`](#structFRH__GuideSearchRequest_1aeb3fa8d2c5d733186ced2c176ac7bd09) <a id="structFRH__GuideSearchRequest_1aeb3fa8d2c5d733186ced2c176ac7bd09"></a>

#### `public FString `[`Ref1`](#structFRH__GuideSearchRequest_1a48936273c384f1e6591a4fb5f0d81436) <a id="structFRH__GuideSearchRequest_1a48936273c384f1e6591a4fb5f0d81436"></a>

#### `public FString `[`Ref2`](#structFRH__GuideSearchRequest_1ad3ed7e97653155de0a0602a7bd4a72ce) <a id="structFRH__GuideSearchRequest_1ad3ed7e97653155de0a0602a7bd4a72ce"></a>

#### `public FString `[`Ref3`](#structFRH__GuideSearchRequest_1a3906eac167d368959d5109b06a5962e2) <a id="structFRH__GuideSearchRequest_1a3906eac167d368959d5109b06a5962e2"></a>

#### `public FString `[`Ref4`](#structFRH__GuideSearchRequest_1a4e53605b4741134b0d3b77695900a008) <a id="structFRH__GuideSearchRequest_1a4e53605b4741134b0d3b77695900a008"></a>

#### `public FString `[`Ref5`](#structFRH__GuideSearchRequest_1ab3cb456453653d77a27f698090ae29d4) <a id="structFRH__GuideSearchRequest_1ab3cb456453653d77a27f698090ae29d4"></a>

#### `public FString `[`Ref6`](#structFRH__GuideSearchRequest_1a517fc3548bd615c207e69a93a799b4f3) <a id="structFRH__GuideSearchRequest_1a517fc3548bd615c207e69a93a799b4f3"></a>

#### `public FString `[`Ref7`](#structFRH__GuideSearchRequest_1a3e94646b43284e5535864ff8a64a941c) <a id="structFRH__GuideSearchRequest_1a3e94646b43284e5535864ff8a64a941c"></a>

#### `public FString `[`Ref8`](#structFRH__GuideSearchRequest_1a0673c8bdbbb56849811f7d9d1f1d59b3) <a id="structFRH__GuideSearchRequest_1a0673c8bdbbb56849811f7d9d1f1d59b3"></a>

#### `public FString `[`Ref9`](#structFRH__GuideSearchRequest_1afafbc1e5c121f4869c7b5107efcf6f44) <a id="structFRH__GuideSearchRequest_1afafbc1e5c121f4869c7b5107efcf6f44"></a>

#### `public FString `[`Ref10`](#structFRH__GuideSearchRequest_1a0bfd1481e8ef3de0560c2fb73308b68b) <a id="structFRH__GuideSearchRequest_1a0bfd1481e8ef3de0560c2fb73308b68b"></a>

#### `public FString `[`Ref11`](#structFRH__GuideSearchRequest_1aee5080cf040699dadacc01203a6ba8cd) <a id="structFRH__GuideSearchRequest_1aee5080cf040699dadacc01203a6ba8cd"></a>

#### `public FString `[`Ref12`](#structFRH__GuideSearchRequest_1a38ddb8d71e764dd9218ba6dab1144084) <a id="structFRH__GuideSearchRequest_1a38ddb8d71e764dd9218ba6dab1144084"></a>

#### `public FString `[`Ref13`](#structFRH__GuideSearchRequest_1a4ebc9bf3b1ef69a3ce8ce727b611a9a3) <a id="structFRH__GuideSearchRequest_1a4ebc9bf3b1ef69a3ce8ce727b611a9a3"></a>

#### `public FString `[`Ref14`](#structFRH__GuideSearchRequest_1a56a4c6010d1b18a45d1abfb9cec128c4) <a id="structFRH__GuideSearchRequest_1a56a4c6010d1b18a45d1abfb9cec128c4"></a>

#### `public FString `[`Ref15`](#structFRH__GuideSearchRequest_1a9c094ba4810c09b577e3b2ad5ebef60f) <a id="structFRH__GuideSearchRequest_1a9c094ba4810c09b577e3b2ad5ebef60f"></a>

#### `public FString `[`Ref16`](#structFRH__GuideSearchRequest_1a608e541aeb67b4b7fe0c242d046fdf05) <a id="structFRH__GuideSearchRequest_1a608e541aeb67b4b7fe0c242d046fdf05"></a>

#### `public FString `[`Ref17`](#structFRH__GuideSearchRequest_1af6a4840d8d0af343a3a6d9763c87dcb9) <a id="structFRH__GuideSearchRequest_1af6a4840d8d0af343a3a6d9763c87dcb9"></a>

#### `public FString `[`Ref18`](#structFRH__GuideSearchRequest_1aaeb955b2caac7372fa8950630a630230) <a id="structFRH__GuideSearchRequest_1aaeb955b2caac7372fa8950630a630230"></a>

#### `public FString `[`Ref19`](#structFRH__GuideSearchRequest_1aeac86eb5a9ed118f7e8f5b18cb6c6cce) <a id="structFRH__GuideSearchRequest_1aeac86eb5a9ed118f7e8f5b18cb6c6cce"></a>

#### `public FString `[`Ref20`](#structFRH__GuideSearchRequest_1a78fcecc785ec9d670dc4cedf1e756ac0) <a id="structFRH__GuideSearchRequest_1a78fcecc785ec9d670dc4cedf1e756ac0"></a>

#### `public FString `[`Ref21`](#structFRH__GuideSearchRequest_1af7c7bafa5b767514036f15298a28e0f3) <a id="structFRH__GuideSearchRequest_1af7c7bafa5b767514036f15298a28e0f3"></a>

#### `public FString `[`Ref22`](#structFRH__GuideSearchRequest_1aab377f727545ae1ae26598b0a2c4fbc4) <a id="structFRH__GuideSearchRequest_1aab377f727545ae1ae26598b0a2c4fbc4"></a>

#### `public FString `[`Ref23`](#structFRH__GuideSearchRequest_1a7eb4eadf221a26a0f5e69a2ccb8a2758) <a id="structFRH__GuideSearchRequest_1a7eb4eadf221a26a0f5e69a2ccb8a2758"></a>

#### `public FString `[`Ref24`](#structFRH__GuideSearchRequest_1a36dc0b354da9cd4b7d867c1374b9de27) <a id="structFRH__GuideSearchRequest_1a36dc0b354da9cd4b7d867c1374b9de27"></a>

#### `public FString `[`Ref25`](#structFRH__GuideSearchRequest_1a421d5912b96eb2231b52ae29bf0e2733) <a id="structFRH__GuideSearchRequest_1a421d5912b96eb2231b52ae29bf0e2733"></a>

#### `public FString `[`Ref26`](#structFRH__GuideSearchRequest_1a102e8eace961aaed4572242e75b9e081) <a id="structFRH__GuideSearchRequest_1a102e8eace961aaed4572242e75b9e081"></a>

#### `public FString `[`Ref27`](#structFRH__GuideSearchRequest_1a6454eb88a97c9598c563a9ae27485c8c) <a id="structFRH__GuideSearchRequest_1a6454eb88a97c9598c563a9ae27485c8c"></a>

#### `public FString `[`Ref28`](#structFRH__GuideSearchRequest_1abe13819b126eaf7ab87b328d8a823c61) <a id="structFRH__GuideSearchRequest_1abe13819b126eaf7ab87b328d8a823c61"></a>

#### `public FString `[`Ref29`](#structFRH__GuideSearchRequest_1a71bc32ba8d3e7449cdc30e0edd6e6fb5) <a id="structFRH__GuideSearchRequest_1a71bc32ba8d3e7449cdc30e0edd6e6fb5"></a>

#### `public FString `[`Ref30`](#structFRH__GuideSearchRequest_1a188485dec2d9c6eaa08d7cc6f6a73485) <a id="structFRH__GuideSearchRequest_1a188485dec2d9c6eaa08d7cc6f6a73485"></a>

#### `public FString `[`Ref31`](#structFRH__GuideSearchRequest_1a04d3bc9e760c05b558062bcf9b1dab9a) <a id="structFRH__GuideSearchRequest_1a04d3bc9e760c05b558062bcf9b1dab9a"></a>

#### `public FString `[`Ref32`](#structFRH__GuideSearchRequest_1a3ecc32eacfa66d90d85a5a9c292757a7) <a id="structFRH__GuideSearchRequest_1a3ecc32eacfa66d90d85a5a9c292757a7"></a>

#### `public inline  `[`FRH_GuideSearchRequest`](#structFRH__GuideSearchRequest_1a1d8b70ee1bdcea40c9ebb9053584ba09)`()` <a id="structFRH__GuideSearchRequest_1a1d8b70ee1bdcea40c9ebb9053584ba09"></a>

## struct `FRH_GuideSearch` <a id="structFRH__GuideSearch"></a>

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_SearchGuideResponse`](RHAPI_SearchGuideResponse.md#structFRHAPI__SearchGuideResponse)` > `[`ResultPages`](#structFRH__GuideSearch_1a48097c042178ce5a72c945f7eea01364) | 
`public `[`FRH_GuideSearchRequest`](GuideSubsystem.md#structFRH__GuideSearchRequest)` `[`InputRequest`](#structFRH__GuideSearch_1a7ab0c39cd0e1333bbd8d8c39696bfc39) | 
`public RallyHereAPI::Traits_SearchGuides::Request `[`SearchRequest`](#structFRH__GuideSearch_1af1bee3459f9ea5d82c0c15476e342bb4) | 
`public int32 `[`Handle`](#structFRH__GuideSearch_1a0255c202204d56011d27c53b20e42956) | 
`public bool `[`bRequestInProgress`](#structFRH__GuideSearch_1a5250c9732c97977a1af38a174a4f0a0c) | 
`typedef `[`TSearchGuides`](#structFRH__GuideSearch_1a923d09677dcf58c981e04f1702d908ab) | 

### Members

#### `public TArray< `[`FRHAPI_SearchGuideResponse`](RHAPI_SearchGuideResponse.md#structFRHAPI__SearchGuideResponse)` > `[`ResultPages`](#structFRH__GuideSearch_1a48097c042178ce5a72c945f7eea01364) <a id="structFRH__GuideSearch_1a48097c042178ce5a72c945f7eea01364"></a>

#### `public `[`FRH_GuideSearchRequest`](GuideSubsystem.md#structFRH__GuideSearchRequest)` `[`InputRequest`](#structFRH__GuideSearch_1a7ab0c39cd0e1333bbd8d8c39696bfc39) <a id="structFRH__GuideSearch_1a7ab0c39cd0e1333bbd8d8c39696bfc39"></a>

#### `public RallyHereAPI::Traits_SearchGuides::Request `[`SearchRequest`](#structFRH__GuideSearch_1af1bee3459f9ea5d82c0c15476e342bb4) <a id="structFRH__GuideSearch_1af1bee3459f9ea5d82c0c15476e342bb4"></a>

#### `public int32 `[`Handle`](#structFRH__GuideSearch_1a0255c202204d56011d27c53b20e42956) <a id="structFRH__GuideSearch_1a0255c202204d56011d27c53b20e42956"></a>

#### `public bool `[`bRequestInProgress`](#structFRH__GuideSearch_1a5250c9732c97977a1af38a174a4f0a0c) <a id="structFRH__GuideSearch_1a5250c9732c97977a1af38a174a4f0a0c"></a>

#### `typedef `[`TSearchGuides`](#structFRH__GuideSearch_1a923d09677dcf58c981e04f1702d908ab) <a id="structFRH__GuideSearch_1a923d09677dcf58c981e04f1702d908ab"></a>

