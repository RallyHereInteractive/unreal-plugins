---
title: RHAPI_InventoryBucketUseRuleSet
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_InventoryBucketUseRuleSet`](#structFRHAPI__InventoryBucketUseRuleSet) | A collection of Inventory Bucket Use Rules.

## struct `FRHAPI_InventoryBucketUseRuleSet` <a id="structFRHAPI__InventoryBucketUseRuleSet"></a>

```
struct FRHAPI_InventoryBucketUseRuleSet
  : public FRHAPI_Model
```

A collection of Inventory Bucket Use Rules.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__InventoryBucketUseRuleSet_1a4374570f7a6d6a2118db206d13102262) | Custom data associated with the resource.
`public bool `[`CustomData_IsSet`](#structFRHAPI__InventoryBucketUseRuleSet_1af60fc9b377629639c7025d662e902ea1) | true if CustomData_Optional has been set to a value
`public TMap< FString, TArray< ERHAPI_InventoryBucket > > `[`Rules_Optional`](#structFRHAPI__InventoryBucketUseRuleSet_1adabe35c0c43a1efc7d7e500bee62361c) | 
`public bool `[`Rules_IsSet`](#structFRHAPI__InventoryBucketUseRuleSet_1aa50ffc24695f9e0ff5d1e739e9d59468) | true if Rules_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__InventoryBucketUseRuleSet_1a17b67b628e51e41059c636d81be35b61) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__InventoryBucketUseRuleSet_1a4fa08d3e6e9d4463b4b8fbcc18f4eea4) | true if CacheInfo_Optional has been set to a value
`public bool `[`CacheInfo_IsNull`](#structFRHAPI__InventoryBucketUseRuleSet_1a4501d5cab25fb14a1312499800db0bf0) | true if CacheInfo_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__InventoryBucketUseRuleSet_1a94866cd803b8072ea1f834fe63d0e82d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InventoryBucketUseRuleSet_1a15ef86b8274061ea40e4bed3acba51ae)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1af7cfbc488847867c34c2a704a4fe3d9a)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1a064219a2b1b518cc6f71da1c08431d73)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1ab7462d3312cbd917aba452d48d3eb80d)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1ab1294f2c6bf52eb24417327a34d9fc7d)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1ab73d6c62a13811950dd176afbb6260fc)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1a2b1920cf0acab35bf9c969ce6ddb9261)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1a28f0162324a57c12954b64889b6f8a18)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1a2551d1aa426585a7689c0568abc5dfa7)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1aa7d7014a319b6cdfa75c8ffbc29df9a8)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE TMap< FString, TArray< ERHAPI_InventoryBucket > > & `[`GetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a0ef72e4e14b499f2391d10fb523e50a0)`()` | Gets the value of Rules_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, TArray< ERHAPI_InventoryBucket > > & `[`GetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a41a96c93194e86fafce1ac3f8260e0b8)`() const` | Gets the value of Rules_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, TArray< ERHAPI_InventoryBucket > > & `[`GetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a13fe3e7ce8c044110a9255b5be7492f2)`(const TMap< FString, TArray< ERHAPI_InventoryBucket > > & DefaultValue) const` | Gets the value of Rules_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1ab4d6488e5559ed32651d8ad2b2b2b9f4)`(TMap< FString, TArray< ERHAPI_InventoryBucket > > & OutValue) const` | Fills OutValue with the value of Rules_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, TArray< ERHAPI_InventoryBucket > > * `[`GetRulesOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1ad7b6df075a263b886060f9162ecc1178)`()` | Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, TArray< ERHAPI_InventoryBucket > > * `[`GetRulesOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1ad941924ecf66f13461d06075dc271430)`() const` | Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a57c2d29ad6f6af5e8e515ed968e4e0c8)`(const TMap< FString, TArray< ERHAPI_InventoryBucket > > & NewValue)` | Sets the value of Rules_Optional and also sets Rules_IsSet to true.
`public inline FORCEINLINE void `[`SetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1ae67f38e423d15015640034faed960d93)`(TMap< FString, TArray< ERHAPI_InventoryBucket > > && NewValue)` | Sets the value of Rules_Optional and also sets Rules_IsSet to true using move semantics.
`public inline void `[`ClearRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a2aeec262f695a6ff14d989c6d532dbab)`()` | Clears the value of Rules_Optional and sets Rules_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1ad13ce4b2bfb0e00b390120ffee2b5299)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1a108cb5422fa6efad92fe2058dbbf234a)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1aa7bccf28271ffef053181dacabaf13e7)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1a167345598974880050e18de9e15dcb9b)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1a7abeb2bdf1c124dd46564b562c2a5fb3)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1acbe5914c4875eb40a29dda1e33f9b39c)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1a3ad11edfee94ae6cfcafd954fb79d9a9)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1a0a1b7c8540328e5eb3fc58f8e5c9dd06)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1ae67f10a6ce01ad498fd5ce97401c7c96)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__InventoryBucketUseRuleSet_1a8ce8f319dd23cbf67338338b01224f80)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__InventoryBucketUseRuleSet_1ab3fe6bb58e91cdb187edcfea097c7d89)`() const` | Checks whether CacheInfo_Optional is set to null.

### Members

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__InventoryBucketUseRuleSet_1a4374570f7a6d6a2118db206d13102262) <a id="structFRHAPI__InventoryBucketUseRuleSet_1a4374570f7a6d6a2118db206d13102262"></a>

Custom data associated with the resource.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__InventoryBucketUseRuleSet_1af60fc9b377629639c7025d662e902ea1) <a id="structFRHAPI__InventoryBucketUseRuleSet_1af60fc9b377629639c7025d662e902ea1"></a>

true if CustomData_Optional has been set to a value

#### `public TMap< FString, TArray< ERHAPI_InventoryBucket > > `[`Rules_Optional`](#structFRHAPI__InventoryBucketUseRuleSet_1adabe35c0c43a1efc7d7e500bee62361c) <a id="structFRHAPI__InventoryBucketUseRuleSet_1adabe35c0c43a1efc7d7e500bee62361c"></a>

#### `public bool `[`Rules_IsSet`](#structFRHAPI__InventoryBucketUseRuleSet_1aa50ffc24695f9e0ff5d1e739e9d59468) <a id="structFRHAPI__InventoryBucketUseRuleSet_1aa50ffc24695f9e0ff5d1e739e9d59468"></a>

true if Rules_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__InventoryBucketUseRuleSet_1a17b67b628e51e41059c636d81be35b61) <a id="structFRHAPI__InventoryBucketUseRuleSet_1a17b67b628e51e41059c636d81be35b61"></a>

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__InventoryBucketUseRuleSet_1a4fa08d3e6e9d4463b4b8fbcc18f4eea4) <a id="structFRHAPI__InventoryBucketUseRuleSet_1a4fa08d3e6e9d4463b4b8fbcc18f4eea4"></a>

true if CacheInfo_Optional has been set to a value

#### `public bool `[`CacheInfo_IsNull`](#structFRHAPI__InventoryBucketUseRuleSet_1a4501d5cab25fb14a1312499800db0bf0) <a id="structFRHAPI__InventoryBucketUseRuleSet_1a4501d5cab25fb14a1312499800db0bf0"></a>

true if CacheInfo_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__InventoryBucketUseRuleSet_1a94866cd803b8072ea1f834fe63d0e82d)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a94866cd803b8072ea1f834fe63d0e82d"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InventoryBucketUseRuleSet_1a15ef86b8274061ea40e4bed3acba51ae)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a15ef86b8274061ea40e4bed3acba51ae"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1af7cfbc488847867c34c2a704a4fe3d9a)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1af7cfbc488847867c34c2a704a4fe3d9a"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1a064219a2b1b518cc6f71da1c08431d73)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a064219a2b1b518cc6f71da1c08431d73"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1ab7462d3312cbd917aba452d48d3eb80d)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1ab7462d3312cbd917aba452d48d3eb80d"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1ab1294f2c6bf52eb24417327a34d9fc7d)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1ab1294f2c6bf52eb24417327a34d9fc7d"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1ab73d6c62a13811950dd176afbb6260fc)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1ab73d6c62a13811950dd176afbb6260fc"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1a2b1920cf0acab35bf9c969ce6ddb9261)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a2b1920cf0acab35bf9c969ce6ddb9261"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1a28f0162324a57c12954b64889b6f8a18)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a28f0162324a57c12954b64889b6f8a18"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1a2551d1aa426585a7689c0568abc5dfa7)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a2551d1aa426585a7689c0568abc5dfa7"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1aa7d7014a319b6cdfa75c8ffbc29df9a8)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1aa7d7014a319b6cdfa75c8ffbc29df9a8"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, TArray< ERHAPI_InventoryBucket > > & `[`GetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a0ef72e4e14b499f2391d10fb523e50a0)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a0ef72e4e14b499f2391d10fb523e50a0"></a>

Gets the value of Rules_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, TArray< ERHAPI_InventoryBucket > > & `[`GetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a41a96c93194e86fafce1ac3f8260e0b8)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a41a96c93194e86fafce1ac3f8260e0b8"></a>

Gets the value of Rules_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, TArray< ERHAPI_InventoryBucket > > & `[`GetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a13fe3e7ce8c044110a9255b5be7492f2)`(const TMap< FString, TArray< ERHAPI_InventoryBucket > > & DefaultValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a13fe3e7ce8c044110a9255b5be7492f2"></a>

Gets the value of Rules_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1ab4d6488e5559ed32651d8ad2b2b2b9f4)`(TMap< FString, TArray< ERHAPI_InventoryBucket > > & OutValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1ab4d6488e5559ed32651d8ad2b2b2b9f4"></a>

Fills OutValue with the value of Rules_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, TArray< ERHAPI_InventoryBucket > > * `[`GetRulesOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1ad7b6df075a263b886060f9162ecc1178)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1ad7b6df075a263b886060f9162ecc1178"></a>

Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, TArray< ERHAPI_InventoryBucket > > * `[`GetRulesOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1ad941924ecf66f13461d06075dc271430)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1ad941924ecf66f13461d06075dc271430"></a>

Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a57c2d29ad6f6af5e8e515ed968e4e0c8)`(const TMap< FString, TArray< ERHAPI_InventoryBucket > > & NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a57c2d29ad6f6af5e8e515ed968e4e0c8"></a>

Sets the value of Rules_Optional and also sets Rules_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1ae67f38e423d15015640034faed960d93)`(TMap< FString, TArray< ERHAPI_InventoryBucket > > && NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSet_1ae67f38e423d15015640034faed960d93"></a>

Sets the value of Rules_Optional and also sets Rules_IsSet to true using move semantics.

#### `public inline void `[`ClearRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a2aeec262f695a6ff14d989c6d532dbab)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a2aeec262f695a6ff14d989c6d532dbab"></a>

Clears the value of Rules_Optional and sets Rules_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1ad13ce4b2bfb0e00b390120ffee2b5299)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1ad13ce4b2bfb0e00b390120ffee2b5299"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1a108cb5422fa6efad92fe2058dbbf234a)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a108cb5422fa6efad92fe2058dbbf234a"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1aa7bccf28271ffef053181dacabaf13e7)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1aa7bccf28271ffef053181dacabaf13e7"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1a167345598974880050e18de9e15dcb9b)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a167345598974880050e18de9e15dcb9b"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1a7abeb2bdf1c124dd46564b562c2a5fb3)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a7abeb2bdf1c124dd46564b562c2a5fb3"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1acbe5914c4875eb40a29dda1e33f9b39c)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1acbe5914c4875eb40a29dda1e33f9b39c"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1a3ad11edfee94ae6cfcafd954fb79d9a9)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a3ad11edfee94ae6cfcafd954fb79d9a9"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1a0a1b7c8540328e5eb3fc58f8e5c9dd06)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a0a1b7c8540328e5eb3fc58f8e5c9dd06"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1ae67f10a6ce01ad498fd5ce97401c7c96)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1ae67f10a6ce01ad498fd5ce97401c7c96"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__InventoryBucketUseRuleSet_1a8ce8f319dd23cbf67338338b01224f80)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a8ce8f319dd23cbf67338338b01224f80"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__InventoryBucketUseRuleSet_1ab3fe6bb58e91cdb187edcfea097c7d89)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1ab3fe6bb58e91cdb187edcfea097c7d89"></a>

Checks whether CacheInfo_Optional is set to null.

