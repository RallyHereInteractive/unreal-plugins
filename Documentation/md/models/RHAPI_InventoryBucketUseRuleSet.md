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
`public virtual bool `[`FromJson`](#structFRHAPI__InventoryBucketUseRuleSet_1a94866cd803b8072ea1f834fe63d0e82d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InventoryBucketUseRuleSet_1a9bfdb2e08be3ee3d156d226add5bdce2)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1aab4d4efda7fe884ab72b2756b26bd6f7)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1a1097b915c8cd4068e5610dcb36afc6ef)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1a3f74937f016677ed751d2eb26d49dd1f)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1a9c8fe85adf370d1953ef9ceceaf27650)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1a4593fcce0bb67164bb2405d161eda834)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1acef1cf57857cead46bac4f8938515300)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1aa419831ac82f6f0905677913ce559ce8)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1afbc8cd73f5b75adfaa98749cc806bd10)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1aa7d7014a319b6cdfa75c8ffbc29df9a8)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__InventoryBucketUseRuleSet_1a05bfd5fa5206f97df4465f97b3596665)`() const` | Checks whether CustomData_Optional has been set.
`public inline TMap< FString, TArray< ERHAPI_InventoryBucket > > & `[`GetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1aced5f3ac4be8df47774a321d5526b74b)`()` | Gets the value of Rules_Optional, regardless of it having been set.
`public inline const TMap< FString, TArray< ERHAPI_InventoryBucket > > & `[`GetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1adf6b0f28861588e7cd5100baf7588c19)`() const` | Gets the value of Rules_Optional, regardless of it having been set.
`public inline const TMap< FString, TArray< ERHAPI_InventoryBucket > > & `[`GetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a6a5c4e4ff275d2dc60a12437367a67bd)`(const TMap< FString, TArray< ERHAPI_InventoryBucket >> & DefaultValue) const` | Gets the value of Rules_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a9cfccb1f933c1f299fb797f9f59d2345)`(TMap< FString, TArray< ERHAPI_InventoryBucket >> & OutValue) const` | Fills OutValue with the value of Rules_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, TArray< ERHAPI_InventoryBucket > > * `[`GetRulesOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1a350d6a1c46edecd8e616bb5d40003ad9)`()` | Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, TArray< ERHAPI_InventoryBucket > > * `[`GetRulesOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1a78402ea9f581e34052f075461388792e)`() const` | Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1aa9b47b8308595d5cbe1d9fb6e0237546)`(const TMap< FString, TArray< ERHAPI_InventoryBucket >> & NewValue)` | Sets the value of Rules_Optional and also sets Rules_IsSet to true.
`public inline void `[`SetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a9c3e15df5def7f5e9bfded1464098e78)`(TMap< FString, TArray< ERHAPI_InventoryBucket >> && NewValue)` | Sets the value of Rules_Optional and also sets Rules_IsSet to true using move semantics.
`public inline void `[`ClearRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a2aeec262f695a6ff14d989c6d532dbab)`()` | Clears the value of Rules_Optional and sets Rules_IsSet to false.
`public inline bool `[`IsRulesSet`](#structFRHAPI__InventoryBucketUseRuleSet_1aa150f3e69bbdbe879403e33c8b816c02)`() const` | Checks whether Rules_Optional has been set.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1af9676a5f549a8a863e6c7f93029dfd5e)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1aa8ce2a6807db5c96543011c1489a32b4)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1ad98d7a55c6eadd7816aadc8c202af12e)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1a9a3c8b2abb791da4fbb64517e54b64d5)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1aaee1c5d2aa7f373470feb207265f77d3)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1af4530ce36764f61b32287474341122a8)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1af1e98e5e69e8e0e4f19610d7a249192e)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`SetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1af31d3e5fea551af46835596b4ba51aae)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1ae67f10a6ce01ad498fd5ce97401c7c96)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline bool `[`IsCacheInfoSet`](#structFRHAPI__InventoryBucketUseRuleSet_1ac777862e467d1a00aaf7a3c64ff567a1)`() const` | Checks whether CacheInfo_Optional has been set.

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

#### `public virtual bool `[`FromJson`](#structFRHAPI__InventoryBucketUseRuleSet_1a94866cd803b8072ea1f834fe63d0e82d)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a94866cd803b8072ea1f834fe63d0e82d"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InventoryBucketUseRuleSet_1a9bfdb2e08be3ee3d156d226add5bdce2)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a9bfdb2e08be3ee3d156d226add5bdce2"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1aab4d4efda7fe884ab72b2756b26bd6f7)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1aab4d4efda7fe884ab72b2756b26bd6f7"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1a1097b915c8cd4068e5610dcb36afc6ef)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a1097b915c8cd4068e5610dcb36afc6ef"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1a3f74937f016677ed751d2eb26d49dd1f)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a3f74937f016677ed751d2eb26d49dd1f"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1a9c8fe85adf370d1953ef9ceceaf27650)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a9c8fe85adf370d1953ef9ceceaf27650"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1a4593fcce0bb67164bb2405d161eda834)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a4593fcce0bb67164bb2405d161eda834"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1acef1cf57857cead46bac4f8938515300)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1acef1cf57857cead46bac4f8938515300"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1aa419831ac82f6f0905677913ce559ce8)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSet_1aa419831ac82f6f0905677913ce559ce8"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1afbc8cd73f5b75adfaa98749cc806bd10)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSet_1afbc8cd73f5b75adfaa98749cc806bd10"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1aa7d7014a319b6cdfa75c8ffbc29df9a8)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1aa7d7014a319b6cdfa75c8ffbc29df9a8"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__InventoryBucketUseRuleSet_1a05bfd5fa5206f97df4465f97b3596665)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a05bfd5fa5206f97df4465f97b3596665"></a>

Checks whether CustomData_Optional has been set.

#### `public inline TMap< FString, TArray< ERHAPI_InventoryBucket > > & `[`GetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1aced5f3ac4be8df47774a321d5526b74b)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1aced5f3ac4be8df47774a321d5526b74b"></a>

Gets the value of Rules_Optional, regardless of it having been set.

#### `public inline const TMap< FString, TArray< ERHAPI_InventoryBucket > > & `[`GetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1adf6b0f28861588e7cd5100baf7588c19)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1adf6b0f28861588e7cd5100baf7588c19"></a>

Gets the value of Rules_Optional, regardless of it having been set.

#### `public inline const TMap< FString, TArray< ERHAPI_InventoryBucket > > & `[`GetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a6a5c4e4ff275d2dc60a12437367a67bd)`(const TMap< FString, TArray< ERHAPI_InventoryBucket >> & DefaultValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a6a5c4e4ff275d2dc60a12437367a67bd"></a>

Gets the value of Rules_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a9cfccb1f933c1f299fb797f9f59d2345)`(TMap< FString, TArray< ERHAPI_InventoryBucket >> & OutValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a9cfccb1f933c1f299fb797f9f59d2345"></a>

Fills OutValue with the value of Rules_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, TArray< ERHAPI_InventoryBucket > > * `[`GetRulesOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1a350d6a1c46edecd8e616bb5d40003ad9)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a350d6a1c46edecd8e616bb5d40003ad9"></a>

Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, TArray< ERHAPI_InventoryBucket > > * `[`GetRulesOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1a78402ea9f581e34052f075461388792e)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a78402ea9f581e34052f075461388792e"></a>

Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1aa9b47b8308595d5cbe1d9fb6e0237546)`(const TMap< FString, TArray< ERHAPI_InventoryBucket >> & NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSet_1aa9b47b8308595d5cbe1d9fb6e0237546"></a>

Sets the value of Rules_Optional and also sets Rules_IsSet to true.

#### `public inline void `[`SetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a9c3e15df5def7f5e9bfded1464098e78)`(TMap< FString, TArray< ERHAPI_InventoryBucket >> && NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a9c3e15df5def7f5e9bfded1464098e78"></a>

Sets the value of Rules_Optional and also sets Rules_IsSet to true using move semantics.

#### `public inline void `[`ClearRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a2aeec262f695a6ff14d989c6d532dbab)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a2aeec262f695a6ff14d989c6d532dbab"></a>

Clears the value of Rules_Optional and sets Rules_IsSet to false.

#### `public inline bool `[`IsRulesSet`](#structFRHAPI__InventoryBucketUseRuleSet_1aa150f3e69bbdbe879403e33c8b816c02)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1aa150f3e69bbdbe879403e33c8b816c02"></a>

Checks whether Rules_Optional has been set.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1af9676a5f549a8a863e6c7f93029dfd5e)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1af9676a5f549a8a863e6c7f93029dfd5e"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1aa8ce2a6807db5c96543011c1489a32b4)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1aa8ce2a6807db5c96543011c1489a32b4"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1ad98d7a55c6eadd7816aadc8c202af12e)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1ad98d7a55c6eadd7816aadc8c202af12e"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1a9a3c8b2abb791da4fbb64517e54b64d5)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a9a3c8b2abb791da4fbb64517e54b64d5"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1aaee1c5d2aa7f373470feb207265f77d3)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1aaee1c5d2aa7f373470feb207265f77d3"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1af4530ce36764f61b32287474341122a8)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1af4530ce36764f61b32287474341122a8"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1af1e98e5e69e8e0e4f19610d7a249192e)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSet_1af1e98e5e69e8e0e4f19610d7a249192e"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1af31d3e5fea551af46835596b4ba51aae)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSet_1af31d3e5fea551af46835596b4ba51aae"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1ae67f10a6ce01ad498fd5ce97401c7c96)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1ae67f10a6ce01ad498fd5ce97401c7c96"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline bool `[`IsCacheInfoSet`](#structFRHAPI__InventoryBucketUseRuleSet_1ac777862e467d1a00aaf7a3c64ff567a1)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1ac777862e467d1a00aaf7a3c64ff567a1"></a>

Checks whether CacheInfo_Optional has been set.

