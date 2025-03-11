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
`public virtual void `[`Initialize`](#group__LeaderboardSubsystem_1ga1b40d9786cdfe6536a078b559ec8a8f2)`()`            | Initialize the subsystem.
`public virtual void `[`Deinitialize`](#group__LeaderboardSubsystem_1gac97c9c99eb0f24fd525a050c713a94bb)`()`            | Safely tears down the subsystem.
`public inline const ConfigMap & `[`GetCachedLeaderboardConfigs`](#group__LeaderboardSubsystem_1gab32357e7033d7aa5a83c4f9ba825de73)`() const`            | Get all leaderboards' configs that have been requested.
`public inline const `[`FRHAPI_LeaderboardConfig`](RHAPI_LeaderboardConfig.md#structFRHAPI__LeaderboardConfig)` * `[`GetCachedLeaderboardConfig`](#group__LeaderboardSubsystem_1ga6cb27a378673b56634a5d277ab1a7788)`(const FString & LeaderboardID) const`            | Get a single leaderboard's config.
`public inline const `[`FRHAPI_LeaderboardPage`](RHAPI_LeaderboardPage.md#structFRHAPI__LeaderboardPage)` * `[`GetCachedLeaderboardPage`](#group__LeaderboardSubsystem_1gab0f0a484ff4839c6e947ebd1dd330cd9)`(const FString & LeaderboardID) const`            | Get latest successfully requested leaderboard page.
`public inline const `[`FRHAPI_LeaderboardMetaData`](RHAPI_LeaderboardMetaData.md#structFRHAPI__LeaderboardMetaData)` * `[`GetCachedLeaderboardMetaData`](#group__LeaderboardSubsystem_1gac76f9a0031e864bd2304e90259216a07)`(const FString & LeaderboardID) const`            | Get a single leaderboard's meta data.
`public inline const `[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` & `[`GetCachedLeaderboardPosition`](#group__LeaderboardSubsystem_1ga62a58d434cbe5b4e85f3f683b2ca690d)`() const`            | Get latest successfully requested position.
`public virtual void `[`GetAllConfigAsync`](#group__LeaderboardSubsystem_1ga37e10c997b425d49694c6c7a4c186d83)`(const FRH_LeaderboardConfigCallBlock & Delegate)`            | Request All Leaderboard Config.
`private inline  `[`UFUNCTION`](#group__LeaderboardSubsystem_1gae8841f308c74dd008ec0df6358a4e5a1)`(BlueprintCallable,Category,meta) const`            | 
`public virtual void `[`GetLeaderboardPageAsync`](#group__LeaderboardSubsystem_1ga8019bbd6e3537f9c859ca4ec230e36a8)`(const FString & LeaderboardID,const FString & Cursor,int32 PageSize,const FRH_LeaderboardPageBlock & Delegate)`            | Request a page specific leaderboard.
`public virtual void `[`GetLeaderboardMetaDataAsync`](#group__LeaderboardSubsystem_1gaac5a1202430057ca75265246e6ab161c)`(const FString & LeaderboardID,const FRH_LeaderboardMetaDataBlock & Delegate)`            | Request metadata about a specific leaderboard.
`protected void `[`InitPropertiesWithDefaultValues`](#group__LeaderboardSubsystem_1ga55757d1294dbaa627c330de2af43f15d)`()`            | Initializes the subsystem with defaults for its cached data.
`protected void `[`HandleNewPage`](#group__LeaderboardSubsystem_1ga1cf836026e33c6f724aaf1ca6f012ea4)`(const `[`FRHAPI_LeaderboardPage`](RHAPI_LeaderboardPage.md#structFRHAPI__LeaderboardPage)` & Page)`            | Default behavior for handling a page response.
`class `[`URH_LeaderboardSubsystem`](#classURH__LeaderboardSubsystem) | Class used to view Leaderboard data and config.

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

#### `public virtual void `[`Initialize`](#group__LeaderboardSubsystem_1ga1b40d9786cdfe6536a078b559ec8a8f2)`()` <a id="group__LeaderboardSubsystem_1ga1b40d9786cdfe6536a078b559ec8a8f2"></a>

Initialize the subsystem.

#### `public virtual void `[`Deinitialize`](#group__LeaderboardSubsystem_1gac97c9c99eb0f24fd525a050c713a94bb)`()` <a id="group__LeaderboardSubsystem_1gac97c9c99eb0f24fd525a050c713a94bb"></a>

Safely tears down the subsystem.

#### `public inline const ConfigMap & `[`GetCachedLeaderboardConfigs`](#group__LeaderboardSubsystem_1gab32357e7033d7aa5a83c4f9ba825de73)`() const` <a id="group__LeaderboardSubsystem_1gab32357e7033d7aa5a83c4f9ba825de73"></a>

Get all leaderboards' configs that have been requested.

#### `public inline const `[`FRHAPI_LeaderboardConfig`](RHAPI_LeaderboardConfig.md#structFRHAPI__LeaderboardConfig)` * `[`GetCachedLeaderboardConfig`](#group__LeaderboardSubsystem_1ga6cb27a378673b56634a5d277ab1a7788)`(const FString & LeaderboardID) const` <a id="group__LeaderboardSubsystem_1ga6cb27a378673b56634a5d277ab1a7788"></a>

Get a single leaderboard's config.

#### `public inline const `[`FRHAPI_LeaderboardPage`](RHAPI_LeaderboardPage.md#structFRHAPI__LeaderboardPage)` * `[`GetCachedLeaderboardPage`](#group__LeaderboardSubsystem_1gab0f0a484ff4839c6e947ebd1dd330cd9)`(const FString & LeaderboardID) const` <a id="group__LeaderboardSubsystem_1gab0f0a484ff4839c6e947ebd1dd330cd9"></a>

Get latest successfully requested leaderboard page.

#### `public inline const `[`FRHAPI_LeaderboardMetaData`](RHAPI_LeaderboardMetaData.md#structFRHAPI__LeaderboardMetaData)` * `[`GetCachedLeaderboardMetaData`](#group__LeaderboardSubsystem_1gac76f9a0031e864bd2304e90259216a07)`(const FString & LeaderboardID) const` <a id="group__LeaderboardSubsystem_1gac76f9a0031e864bd2304e90259216a07"></a>

Get a single leaderboard's meta data.

#### `public inline const `[`FRHAPI_LeaderboardEntry`](RHAPI_LeaderboardEntry.md#structFRHAPI__LeaderboardEntry)` & `[`GetCachedLeaderboardPosition`](#group__LeaderboardSubsystem_1ga62a58d434cbe5b4e85f3f683b2ca690d)`() const` <a id="group__LeaderboardSubsystem_1ga62a58d434cbe5b4e85f3f683b2ca690d"></a>

Get latest successfully requested position.

#### `public virtual void `[`GetAllConfigAsync`](#group__LeaderboardSubsystem_1ga37e10c997b425d49694c6c7a4c186d83)`(const FRH_LeaderboardConfigCallBlock & Delegate)` <a id="group__LeaderboardSubsystem_1ga37e10c997b425d49694c6c7a4c186d83"></a>

Request All Leaderboard Config.

#### `private inline  `[`UFUNCTION`](#group__LeaderboardSubsystem_1gae8841f308c74dd008ec0df6358a4e5a1)`(BlueprintCallable,Category,meta) const` <a id="group__LeaderboardSubsystem_1gae8841f308c74dd008ec0df6358a4e5a1"></a>

#### `public virtual void `[`GetLeaderboardPageAsync`](#group__LeaderboardSubsystem_1ga8019bbd6e3537f9c859ca4ec230e36a8)`(const FString & LeaderboardID,const FString & Cursor,int32 PageSize,const FRH_LeaderboardPageBlock & Delegate)` <a id="group__LeaderboardSubsystem_1ga8019bbd6e3537f9c859ca4ec230e36a8"></a>

Request a page specific leaderboard.

#### `public virtual void `[`GetLeaderboardMetaDataAsync`](#group__LeaderboardSubsystem_1gaac5a1202430057ca75265246e6ab161c)`(const FString & LeaderboardID,const FRH_LeaderboardMetaDataBlock & Delegate)` <a id="group__LeaderboardSubsystem_1gaac5a1202430057ca75265246e6ab161c"></a>

Request metadata about a specific leaderboard.

#### `protected void `[`InitPropertiesWithDefaultValues`](#group__LeaderboardSubsystem_1ga55757d1294dbaa627c330de2af43f15d)`()` <a id="group__LeaderboardSubsystem_1ga55757d1294dbaa627c330de2af43f15d"></a>

Initializes the subsystem with defaults for its cached data.

#### `protected void `[`HandleNewPage`](#group__LeaderboardSubsystem_1ga1cf836026e33c6f724aaf1ca6f012ea4)`(const `[`FRHAPI_LeaderboardPage`](RHAPI_LeaderboardPage.md#structFRHAPI__LeaderboardPage)` & Page)` <a id="group__LeaderboardSubsystem_1ga1cf836026e33c6f724aaf1ca6f012ea4"></a>

Default behavior for handling a page response.

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

