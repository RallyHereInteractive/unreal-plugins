---
title: LeaderboardSubsystem
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`DECLARE_DYNAMIC_DELEGATE_ThreeParams`](#group__LeaderboardSubsystem_1ga8d453a449dde474d0dfc53acec5f0e33)`(FRH_LeaderboardConfigCallDynamicDelegate,bool,bSuccess,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo,`[`FRHAPI_LeaderboardConfigList`](RHAPI_LeaderboardConfigList.md#structFRHAPI__LeaderboardConfigList)` &,ConfigList)`            | 
`public  `[`DECLARE_DELEGATE_ThreeParams`](#group__LeaderboardSubsystem_1ga81b1fe7605e0dca096d9610aa061c156)`(FRH_LeaderboardConfigCallDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,`[`FRHAPI_LeaderboardConfigList`](RHAPI_LeaderboardConfigList.md#structFRHAPI__LeaderboardConfigList)` &)`            | 
`public  `[`DECLARE_RH_DELEGATE_BLOCK`](#group__LeaderboardSubsystem_1ga156a72608c53a5832b956356b665567e)`(FRH_LeaderboardConfigCallBlock,FRH_LeaderboardConfigCallDelegate,FRH_LeaderboardConfigCallDynamicDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,`[`FRHAPI_LeaderboardConfigList`](RHAPI_LeaderboardConfigList.md#structFRHAPI__LeaderboardConfigList)` &)`            | 
`public  `[`DECLARE_DYNAMIC_DELEGATE_ThreeParams`](#group__LeaderboardSubsystem_1ga99a31bdb46bf95f38a35f5d72d234e59)`(FRH_LeaderboardPageDynamicDelegate,bool,bSuccess,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo,`[`FRHAPI_LeaderboardPage`](RHAPI_LeaderboardPage.md#structFRHAPI__LeaderboardPage)` &,LeaderboardPage)`            | 
`public  `[`DECLARE_DELEGATE_ThreeParams`](#group__LeaderboardSubsystem_1ga1b055a0624e40a2e9adce3fc6c2b93d0)`(FRH_LeaderboardPageDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,`[`FRHAPI_LeaderboardPage`](RHAPI_LeaderboardPage.md#structFRHAPI__LeaderboardPage)` &)`            | 
`public  `[`DECLARE_RH_DELEGATE_BLOCK`](#group__LeaderboardSubsystem_1gacca7115628ab901c8cfa00cfe1cf8e06)`(FRH_LeaderboardPageBlock,FRH_LeaderboardPageDelegate,FRH_LeaderboardPageDynamicDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,`[`FRHAPI_LeaderboardPage`](RHAPI_LeaderboardPage.md#structFRHAPI__LeaderboardPage)` &)`            | 
`public  `[`DECLARE_DYNAMIC_DELEGATE_ThreeParams`](#group__LeaderboardSubsystem_1gac119116c8825a3989ddf6909928b6c5b)`(FRH_LeaderboardPositionDynamicDelegate,bool,bSuccess,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo,`[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` &,LeaderboardEntry)`            | 
`public  `[`DECLARE_DELEGATE_ThreeParams`](#group__LeaderboardSubsystem_1ga3c242c547fb8ac0a215265bd0bbea19f)`(FRH_LeaderboardPositionDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,`[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` &)`            | 
`public  `[`DECLARE_RH_DELEGATE_BLOCK`](#group__LeaderboardSubsystem_1ga168661dd617d41eb31548616486b31d1)`(FRH_LeaderboardPositionBlock,FRH_LeaderboardPositionDelegate,FRH_LeaderboardPositionDynamicDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,`[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` &)`            | 
`public  `[`DECLARE_DYNAMIC_DELEGATE_ThreeParams`](#group__LeaderboardSubsystem_1ga04b762a39904fa314e52c5853c2d1522)`(FRH_LeaderboardMetaDataDynamicDelegate,bool,bSuccess,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo,`[`FRHAPI_LeaderboardMetaData`](RHAPI_LeaderboardMetaData.md#structFRHAPI__LeaderboardMetaData)` &,LeaderboardMetaData)`            | 
`public  `[`DECLARE_DELEGATE_ThreeParams`](#group__LeaderboardSubsystem_1ga13d7fac71ae0b2b0f45d78c7d329ef20)`(FRH_LeaderboardMetaDataDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,`[`FRHAPI_LeaderboardMetaData`](RHAPI_LeaderboardMetaData.md#structFRHAPI__LeaderboardMetaData)` &)`            | 
`public  `[`DECLARE_RH_DELEGATE_BLOCK`](#group__LeaderboardSubsystem_1gadf35416871e995467f76c1acfe6bb0fb)`(FRH_LeaderboardMetaDataBlock,FRH_LeaderboardMetaDataDelegate,FRH_LeaderboardMetaDataDynamicDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,`[`FRHAPI_LeaderboardMetaData`](RHAPI_LeaderboardMetaData.md#structFRHAPI__LeaderboardMetaData)` &)`            | 
`public inline bool `[`IsStale`](#group__LeaderboardSubsystem_1ga7ac3593cf10da63021d9ba935908bab2)`() const`            | 
`public virtual void `[`Initialize`](#group__LeaderboardSubsystem_1ga1b40d9786cdfe6536a078b559ec8a8f2)`()`            | Initialize the subsystem.
`public virtual void `[`Deinitialize`](#group__LeaderboardSubsystem_1gac97c9c99eb0f24fd525a050c713a94bb)`()`            | Safely tears down the subsystem.
`public bool `[`GetCachedLeaderboardConfigs`](#group__LeaderboardSubsystem_1gaa672a39a5a87a39e6ce266b852a8060b)`(TMap< FString, `[`FRHAPI_LeaderboardConfig`](RHAPI_LeaderboardConfig.md#structFRHAPI__LeaderboardConfig)` > & OutConfigMap) const`            | Get all leaderboards' configs that have been requested.
`public bool `[`GetCachedLeaderboardConfig`](#group__LeaderboardSubsystem_1gac83d53413e08b03b4f29ad8fb5f6f9ba)`(const FString & LeaderboardID,`[`FRHAPI_LeaderboardConfig`](RHAPI_LeaderboardConfig.md#structFRHAPI__LeaderboardConfig)` & CachedConfig) const`            | Get a single leaderboard's config.
`public bool `[`GetCachedLeaderboardPage`](#group__LeaderboardSubsystem_1gaf732c06d49219fe1e1f4a9aea1710de9)`(const FString & LeaderboardID,`[`FRHAPI_LeaderboardPage`](RHAPI_LeaderboardPage.md#structFRHAPI__LeaderboardPage)` & CachedPage) const`            | Get latest successfully requested leaderboard page.
`public bool `[`GetCachedLeaderboardRef`](#group__LeaderboardSubsystem_1gae9045bed323c044075e8c780d49ef44e)`(const FString & LeaderboardID,TSharedPtr< `[`FRH_LeaderboardResults`](LeaderboardSubsystem.md#structFRH__LeaderboardResults)` > Results) const`            | 
`public bool `[`GetCachedLeaderboard`](#group__LeaderboardSubsystem_1gaae85452e6b0295958e08c1ab579d613d)`(const FString & LeaderboardID,`[`FRH_LeaderboardResults`](LeaderboardSubsystem.md#structFRH__LeaderboardResults)` & Results) const`            | Get full cached leaderboards.
`public bool `[`GetCachedLeaderboardMetaData`](#group__LeaderboardSubsystem_1ga12367e80c53d40d9ed3ced24ff9200ee)`(const FString & LeaderboardID,`[`FRHAPI_LeaderboardMetaData`](RHAPI_LeaderboardMetaData.md#structFRHAPI__LeaderboardMetaData)` & OutMetaData) const`            | Get a single leaderboard's meta data.
`public bool `[`GetCachedLeaderboardPosition`](#group__LeaderboardSubsystem_1ga0ad7a8e61a0946cd7ae5086289330e77)`(`[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` & OutEntry) const`            | Get latest successfully requested position.
`public virtual void `[`GetAllConfigAsync`](#group__LeaderboardSubsystem_1ga37e10c997b425d49694c6c7a4c186d83)`(const FRH_LeaderboardConfigCallBlock & Delegate)`            | Request All Leaderboard Config.
`private inline  `[`UFUNCTION`](#group__LeaderboardSubsystem_1ga267b4243311ac5a4019ea1fb2d5d97d9)`(BlueprintCallable,Category,meta) const`            | 
`public virtual void `[`GetLeaderboardPageAsync`](#group__LeaderboardSubsystem_1ga8019bbd6e3537f9c859ca4ec230e36a8)`(const FString & LeaderboardID,const FString & Cursor,int32 PageSize,const FRH_LeaderboardPageBlock & Delegate)`            | Request a page specific leaderboard.
`public virtual void `[`GetLeaderboardPositionAsync`](#group__LeaderboardSubsystem_1gaaf8a946e387062b1ff891f4f9d76de37)`(const FString & LeaderboardID,int32 position,const FRH_LeaderboardPositionBlock & Delegate)`            | Request a specific position in the leaderboard. Useful for determining thresholds.
`public virtual void `[`GetLeaderboardMetaDataAsync`](#group__LeaderboardSubsystem_1gaac5a1202430057ca75265246e6ab161c)`(const FString & LeaderboardID,const FRH_LeaderboardMetaDataBlock & Delegate)`            | Request metadata about a specific leaderboard.
`protected virtual void `[`InitPropertiesWithDefaultValues`](#group__LeaderboardSubsystem_1ga7b262c81a01ee11682f58888a260abd2)`()`            | Initializes the subsystem with defaults for its cached data.
`protected void `[`GetAllPages`](#group__LeaderboardSubsystem_1ga20a6d020a8e48dbf0aabba4e5321d3be)`(const FString & LeaderboardID,const FString & Cursor,const FRH_LeaderboardPageBlock & Delegate)`            | Request all pages for a leaderboard
`class `[`URH_LeaderboardSubsystem`](#classURH__LeaderboardSubsystem) | Class used to view Leaderboard data and config.
`struct `[`FRH_LeaderboardResults`](#structFRH__LeaderboardResults) | 

## Members

#### `public  `[`DECLARE_DYNAMIC_DELEGATE_ThreeParams`](#group__LeaderboardSubsystem_1ga8d453a449dde474d0dfc53acec5f0e33)`(FRH_LeaderboardConfigCallDynamicDelegate,bool,bSuccess,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo,`[`FRHAPI_LeaderboardConfigList`](RHAPI_LeaderboardConfigList.md#structFRHAPI__LeaderboardConfigList)` &,ConfigList)` <a id="group__LeaderboardSubsystem_1ga8d453a449dde474d0dfc53acec5f0e33"></a>

#### `public  `[`DECLARE_DELEGATE_ThreeParams`](#group__LeaderboardSubsystem_1ga81b1fe7605e0dca096d9610aa061c156)`(FRH_LeaderboardConfigCallDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,`[`FRHAPI_LeaderboardConfigList`](RHAPI_LeaderboardConfigList.md#structFRHAPI__LeaderboardConfigList)` &)` <a id="group__LeaderboardSubsystem_1ga81b1fe7605e0dca096d9610aa061c156"></a>

#### `public  `[`DECLARE_RH_DELEGATE_BLOCK`](#group__LeaderboardSubsystem_1ga156a72608c53a5832b956356b665567e)`(FRH_LeaderboardConfigCallBlock,FRH_LeaderboardConfigCallDelegate,FRH_LeaderboardConfigCallDynamicDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,`[`FRHAPI_LeaderboardConfigList`](RHAPI_LeaderboardConfigList.md#structFRHAPI__LeaderboardConfigList)` &)` <a id="group__LeaderboardSubsystem_1ga156a72608c53a5832b956356b665567e"></a>

#### `public  `[`DECLARE_DYNAMIC_DELEGATE_ThreeParams`](#group__LeaderboardSubsystem_1ga99a31bdb46bf95f38a35f5d72d234e59)`(FRH_LeaderboardPageDynamicDelegate,bool,bSuccess,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo,`[`FRHAPI_LeaderboardPage`](RHAPI_LeaderboardPage.md#structFRHAPI__LeaderboardPage)` &,LeaderboardPage)` <a id="group__LeaderboardSubsystem_1ga99a31bdb46bf95f38a35f5d72d234e59"></a>

#### `public  `[`DECLARE_DELEGATE_ThreeParams`](#group__LeaderboardSubsystem_1ga1b055a0624e40a2e9adce3fc6c2b93d0)`(FRH_LeaderboardPageDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,`[`FRHAPI_LeaderboardPage`](RHAPI_LeaderboardPage.md#structFRHAPI__LeaderboardPage)` &)` <a id="group__LeaderboardSubsystem_1ga1b055a0624e40a2e9adce3fc6c2b93d0"></a>

#### `public  `[`DECLARE_RH_DELEGATE_BLOCK`](#group__LeaderboardSubsystem_1gacca7115628ab901c8cfa00cfe1cf8e06)`(FRH_LeaderboardPageBlock,FRH_LeaderboardPageDelegate,FRH_LeaderboardPageDynamicDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,`[`FRHAPI_LeaderboardPage`](RHAPI_LeaderboardPage.md#structFRHAPI__LeaderboardPage)` &)` <a id="group__LeaderboardSubsystem_1gacca7115628ab901c8cfa00cfe1cf8e06"></a>

#### `public  `[`DECLARE_DYNAMIC_DELEGATE_ThreeParams`](#group__LeaderboardSubsystem_1gac119116c8825a3989ddf6909928b6c5b)`(FRH_LeaderboardPositionDynamicDelegate,bool,bSuccess,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo,`[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` &,LeaderboardEntry)` <a id="group__LeaderboardSubsystem_1gac119116c8825a3989ddf6909928b6c5b"></a>

#### `public  `[`DECLARE_DELEGATE_ThreeParams`](#group__LeaderboardSubsystem_1ga3c242c547fb8ac0a215265bd0bbea19f)`(FRH_LeaderboardPositionDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,`[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` &)` <a id="group__LeaderboardSubsystem_1ga3c242c547fb8ac0a215265bd0bbea19f"></a>

#### `public  `[`DECLARE_RH_DELEGATE_BLOCK`](#group__LeaderboardSubsystem_1ga168661dd617d41eb31548616486b31d1)`(FRH_LeaderboardPositionBlock,FRH_LeaderboardPositionDelegate,FRH_LeaderboardPositionDynamicDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,`[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` &)` <a id="group__LeaderboardSubsystem_1ga168661dd617d41eb31548616486b31d1"></a>

#### `public  `[`DECLARE_DYNAMIC_DELEGATE_ThreeParams`](#group__LeaderboardSubsystem_1ga04b762a39904fa314e52c5853c2d1522)`(FRH_LeaderboardMetaDataDynamicDelegate,bool,bSuccess,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo,`[`FRHAPI_LeaderboardMetaData`](RHAPI_LeaderboardMetaData.md#structFRHAPI__LeaderboardMetaData)` &,LeaderboardMetaData)` <a id="group__LeaderboardSubsystem_1ga04b762a39904fa314e52c5853c2d1522"></a>

#### `public  `[`DECLARE_DELEGATE_ThreeParams`](#group__LeaderboardSubsystem_1ga13d7fac71ae0b2b0f45d78c7d329ef20)`(FRH_LeaderboardMetaDataDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,`[`FRHAPI_LeaderboardMetaData`](RHAPI_LeaderboardMetaData.md#structFRHAPI__LeaderboardMetaData)` &)` <a id="group__LeaderboardSubsystem_1ga13d7fac71ae0b2b0f45d78c7d329ef20"></a>

#### `public  `[`DECLARE_RH_DELEGATE_BLOCK`](#group__LeaderboardSubsystem_1gadf35416871e995467f76c1acfe6bb0fb)`(FRH_LeaderboardMetaDataBlock,FRH_LeaderboardMetaDataDelegate,FRH_LeaderboardMetaDataDynamicDelegate,bool,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,`[`FRHAPI_LeaderboardMetaData`](RHAPI_LeaderboardMetaData.md#structFRHAPI__LeaderboardMetaData)` &)` <a id="group__LeaderboardSubsystem_1gadf35416871e995467f76c1acfe6bb0fb"></a>

#### `public inline bool `[`IsStale`](#group__LeaderboardSubsystem_1ga7ac3593cf10da63021d9ba935908bab2)`() const` <a id="group__LeaderboardSubsystem_1ga7ac3593cf10da63021d9ba935908bab2"></a>

#### `public virtual void `[`Initialize`](#group__LeaderboardSubsystem_1ga1b40d9786cdfe6536a078b559ec8a8f2)`()` <a id="group__LeaderboardSubsystem_1ga1b40d9786cdfe6536a078b559ec8a8f2"></a>

Initialize the subsystem.

#### `public virtual void `[`Deinitialize`](#group__LeaderboardSubsystem_1gac97c9c99eb0f24fd525a050c713a94bb)`()` <a id="group__LeaderboardSubsystem_1gac97c9c99eb0f24fd525a050c713a94bb"></a>

Safely tears down the subsystem.

#### `public bool `[`GetCachedLeaderboardConfigs`](#group__LeaderboardSubsystem_1gaa672a39a5a87a39e6ce266b852a8060b)`(TMap< FString, `[`FRHAPI_LeaderboardConfig`](RHAPI_LeaderboardConfig.md#structFRHAPI__LeaderboardConfig)` > & OutConfigMap) const` <a id="group__LeaderboardSubsystem_1gaa672a39a5a87a39e6ce266b852a8060b"></a>

Get all leaderboards' configs that have been requested.

#### `public bool `[`GetCachedLeaderboardConfig`](#group__LeaderboardSubsystem_1gac83d53413e08b03b4f29ad8fb5f6f9ba)`(const FString & LeaderboardID,`[`FRHAPI_LeaderboardConfig`](RHAPI_LeaderboardConfig.md#structFRHAPI__LeaderboardConfig)` & CachedConfig) const` <a id="group__LeaderboardSubsystem_1gac83d53413e08b03b4f29ad8fb5f6f9ba"></a>

Get a single leaderboard's config.

#### `public bool `[`GetCachedLeaderboardPage`](#group__LeaderboardSubsystem_1gaf732c06d49219fe1e1f4a9aea1710de9)`(const FString & LeaderboardID,`[`FRHAPI_LeaderboardPage`](RHAPI_LeaderboardPage.md#structFRHAPI__LeaderboardPage)` & CachedPage) const` <a id="group__LeaderboardSubsystem_1gaf732c06d49219fe1e1f4a9aea1710de9"></a>

Get latest successfully requested leaderboard page.

#### `public bool `[`GetCachedLeaderboardRef`](#group__LeaderboardSubsystem_1gae9045bed323c044075e8c780d49ef44e)`(const FString & LeaderboardID,TSharedPtr< `[`FRH_LeaderboardResults`](LeaderboardSubsystem.md#structFRH__LeaderboardResults)` > Results) const` <a id="group__LeaderboardSubsystem_1gae9045bed323c044075e8c780d49ef44e"></a>

#### `public bool `[`GetCachedLeaderboard`](#group__LeaderboardSubsystem_1gaae85452e6b0295958e08c1ab579d613d)`(const FString & LeaderboardID,`[`FRH_LeaderboardResults`](LeaderboardSubsystem.md#structFRH__LeaderboardResults)` & Results) const` <a id="group__LeaderboardSubsystem_1gaae85452e6b0295958e08c1ab579d613d"></a>

Get full cached leaderboards.

#### `public bool `[`GetCachedLeaderboardMetaData`](#group__LeaderboardSubsystem_1ga12367e80c53d40d9ed3ced24ff9200ee)`(const FString & LeaderboardID,`[`FRHAPI_LeaderboardMetaData`](RHAPI_LeaderboardMetaData.md#structFRHAPI__LeaderboardMetaData)` & OutMetaData) const` <a id="group__LeaderboardSubsystem_1ga12367e80c53d40d9ed3ced24ff9200ee"></a>

Get a single leaderboard's meta data.

#### `public bool `[`GetCachedLeaderboardPosition`](#group__LeaderboardSubsystem_1ga0ad7a8e61a0946cd7ae5086289330e77)`(`[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` & OutEntry) const` <a id="group__LeaderboardSubsystem_1ga0ad7a8e61a0946cd7ae5086289330e77"></a>

Get latest successfully requested position.

#### `public virtual void `[`GetAllConfigAsync`](#group__LeaderboardSubsystem_1ga37e10c997b425d49694c6c7a4c186d83)`(const FRH_LeaderboardConfigCallBlock & Delegate)` <a id="group__LeaderboardSubsystem_1ga37e10c997b425d49694c6c7a4c186d83"></a>

Request All Leaderboard Config.

#### `private inline  `[`UFUNCTION`](#group__LeaderboardSubsystem_1ga267b4243311ac5a4019ea1fb2d5d97d9)`(BlueprintCallable,Category,meta) const` <a id="group__LeaderboardSubsystem_1ga267b4243311ac5a4019ea1fb2d5d97d9"></a>

#### `public virtual void `[`GetLeaderboardPageAsync`](#group__LeaderboardSubsystem_1ga8019bbd6e3537f9c859ca4ec230e36a8)`(const FString & LeaderboardID,const FString & Cursor,int32 PageSize,const FRH_LeaderboardPageBlock & Delegate)` <a id="group__LeaderboardSubsystem_1ga8019bbd6e3537f9c859ca4ec230e36a8"></a>

Request a page specific leaderboard.

#### `public virtual void `[`GetLeaderboardPositionAsync`](#group__LeaderboardSubsystem_1gaaf8a946e387062b1ff891f4f9d76de37)`(const FString & LeaderboardID,int32 position,const FRH_LeaderboardPositionBlock & Delegate)` <a id="group__LeaderboardSubsystem_1gaaf8a946e387062b1ff891f4f9d76de37"></a>

Request a specific position in the leaderboard. Useful for determining thresholds.

#### `public virtual void `[`GetLeaderboardMetaDataAsync`](#group__LeaderboardSubsystem_1gaac5a1202430057ca75265246e6ab161c)`(const FString & LeaderboardID,const FRH_LeaderboardMetaDataBlock & Delegate)` <a id="group__LeaderboardSubsystem_1gaac5a1202430057ca75265246e6ab161c"></a>

Request metadata about a specific leaderboard.

#### `protected virtual void `[`InitPropertiesWithDefaultValues`](#group__LeaderboardSubsystem_1ga7b262c81a01ee11682f58888a260abd2)`()` <a id="group__LeaderboardSubsystem_1ga7b262c81a01ee11682f58888a260abd2"></a>

Initializes the subsystem with defaults for its cached data.

#### `protected void `[`GetAllPages`](#group__LeaderboardSubsystem_1ga20a6d020a8e48dbf0aabba4e5321d3be)`(const FString & LeaderboardID,const FString & Cursor,const FRH_LeaderboardPageBlock & Delegate)` <a id="group__LeaderboardSubsystem_1ga20a6d020a8e48dbf0aabba4e5321d3be"></a>

Request all pages for a leaderboard

## class `URH_LeaderboardSubsystem` <a id="classURH__LeaderboardSubsystem"></a>

```
class URH_LeaderboardSubsystem
  : public URH_GameInstanceSubsystemPlugin
```

Class used to view Leaderboard data and config.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------

### Members

## struct `FRH_LeaderboardResults` <a id="structFRH__LeaderboardResults"></a>

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------

### Members

