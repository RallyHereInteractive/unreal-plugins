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
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1a67c594ebc75e0e38e1aeb8dcf022097f)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1ac12038afeabf911c4e4c9d535cd839f3)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1adc672b547cb370352dc1f6432f555521)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1a9c8fe85adf370d1953ef9ceceaf27650)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1a6ba7bc2173e92ac61337d72767f824d6)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1ad1b961fa0f031b617593c6bf4cda1d0e)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1aa419831ac82f6f0905677913ce559ce8)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1afbc8cd73f5b75adfaa98749cc806bd10)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1aa7d7014a319b6cdfa75c8ffbc29df9a8)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__InventoryBucketUseRuleSet_1a05bfd5fa5206f97df4465f97b3596665)`() const` | Checks whether CustomData_Optional has been set.
`public inline TMap< FString, TArray< ERHAPI_InventoryBucket > > & `[`GetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a8037f9ddba65118526c33992784514f3)`()` | Gets the value of Rules_Optional, regardless of it having been set.
`public inline const TMap< FString, TArray< ERHAPI_InventoryBucket > > & `[`GetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a2a5765f95b4406384e5db3aa9799751f)`() const` | Gets the value of Rules_Optional, regardless of it having been set.
`public inline const TMap< FString, TArray< ERHAPI_InventoryBucket > > & `[`GetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1ac8e2f24997de2fb41f4af4648640d817)`(const TMap< FString, TArray< ERHAPI_InventoryBucket > > & DefaultValue) const` | Gets the value of Rules_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a2716b75e46adc2275f42373746b127f6)`(TMap< FString, TArray< ERHAPI_InventoryBucket > > & OutValue) const` | Fills OutValue with the value of Rules_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, TArray< ERHAPI_InventoryBucket > > * `[`GetRulesOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1a7de21be80f3a360d06309482b3f8a122)`()` | Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, TArray< ERHAPI_InventoryBucket > > * `[`GetRulesOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1aa6f495271ece6c98d8538fe12042124c)`() const` | Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a78b07c63b6dc3c68dd46edeecdf11fd1)`(const TMap< FString, TArray< ERHAPI_InventoryBucket > > & NewValue)` | Sets the value of Rules_Optional and also sets Rules_IsSet to true.
`public inline void `[`SetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1aef5f6655891dcbdd3a5292ae43ab9652)`(TMap< FString, TArray< ERHAPI_InventoryBucket > > && NewValue)` | Sets the value of Rules_Optional and also sets Rules_IsSet to true using move semantics.
`public inline void `[`ClearRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a2aeec262f695a6ff14d989c6d532dbab)`()` | Clears the value of Rules_Optional and sets Rules_IsSet to false.
`public inline bool `[`IsRulesSet`](#structFRHAPI__InventoryBucketUseRuleSet_1aa150f3e69bbdbe879403e33c8b816c02)`() const` | Checks whether Rules_Optional has been set.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1a105d3bc49837de2e67f1da30d86221af)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1ab021ceae2dd534f8ed8f84b823094551)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1a1e883cb07eb735ce599fa9fb9a63d429)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1a9a3c8b2abb791da4fbb64517e54b64d5)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1ad802e0220682f63f66260e3cdb66bfb9)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1ad2a27600ec84f21ef60ad4d3f4eac4b9)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1af1e98e5e69e8e0e4f19610d7a249192e)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`SetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1af31d3e5fea551af46835596b4ba51aae)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1ae67f10a6ce01ad498fd5ce97401c7c96)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline bool `[`IsCacheInfoSet`](#structFRHAPI__InventoryBucketUseRuleSet_1ac777862e467d1a00aaf7a3c64ff567a1)`() const` | Checks whether CacheInfo_Optional has been set.
`public inline void `[`SetCacheInfoToNull`](#structFRHAPI__InventoryBucketUseRuleSet_1ac487c91f0fdb731299eb5741bbee311d)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCacheInfoNull`](#structFRHAPI__InventoryBucketUseRuleSet_1a9f1a0cfb88f69e89a945bc62a9a8a950)`() const` | Checks whether CacheInfo_Optional is set to null.

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

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1a67c594ebc75e0e38e1aeb8dcf022097f)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a67c594ebc75e0e38e1aeb8dcf022097f"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1ac12038afeabf911c4e4c9d535cd839f3)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1ac12038afeabf911c4e4c9d535cd839f3"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1adc672b547cb370352dc1f6432f555521)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1adc672b547cb370352dc1f6432f555521"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1a9c8fe85adf370d1953ef9ceceaf27650)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a9c8fe85adf370d1953ef9ceceaf27650"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1a6ba7bc2173e92ac61337d72767f824d6)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a6ba7bc2173e92ac61337d72767f824d6"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1ad1b961fa0f031b617593c6bf4cda1d0e)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1ad1b961fa0f031b617593c6bf4cda1d0e"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1aa419831ac82f6f0905677913ce559ce8)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSet_1aa419831ac82f6f0905677913ce559ce8"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1afbc8cd73f5b75adfaa98749cc806bd10)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSet_1afbc8cd73f5b75adfaa98749cc806bd10"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__InventoryBucketUseRuleSet_1aa7d7014a319b6cdfa75c8ffbc29df9a8)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1aa7d7014a319b6cdfa75c8ffbc29df9a8"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__InventoryBucketUseRuleSet_1a05bfd5fa5206f97df4465f97b3596665)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a05bfd5fa5206f97df4465f97b3596665"></a>

Checks whether CustomData_Optional has been set.

#### `public inline TMap< FString, TArray< ERHAPI_InventoryBucket > > & `[`GetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a8037f9ddba65118526c33992784514f3)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a8037f9ddba65118526c33992784514f3"></a>

Gets the value of Rules_Optional, regardless of it having been set.

#### `public inline const TMap< FString, TArray< ERHAPI_InventoryBucket > > & `[`GetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a2a5765f95b4406384e5db3aa9799751f)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a2a5765f95b4406384e5db3aa9799751f"></a>

Gets the value of Rules_Optional, regardless of it having been set.

#### `public inline const TMap< FString, TArray< ERHAPI_InventoryBucket > > & `[`GetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1ac8e2f24997de2fb41f4af4648640d817)`(const TMap< FString, TArray< ERHAPI_InventoryBucket > > & DefaultValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1ac8e2f24997de2fb41f4af4648640d817"></a>

Gets the value of Rules_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a2716b75e46adc2275f42373746b127f6)`(TMap< FString, TArray< ERHAPI_InventoryBucket > > & OutValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a2716b75e46adc2275f42373746b127f6"></a>

Fills OutValue with the value of Rules_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, TArray< ERHAPI_InventoryBucket > > * `[`GetRulesOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1a7de21be80f3a360d06309482b3f8a122)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a7de21be80f3a360d06309482b3f8a122"></a>

Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, TArray< ERHAPI_InventoryBucket > > * `[`GetRulesOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1aa6f495271ece6c98d8538fe12042124c)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1aa6f495271ece6c98d8538fe12042124c"></a>

Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a78b07c63b6dc3c68dd46edeecdf11fd1)`(const TMap< FString, TArray< ERHAPI_InventoryBucket > > & NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a78b07c63b6dc3c68dd46edeecdf11fd1"></a>

Sets the value of Rules_Optional and also sets Rules_IsSet to true.

#### `public inline void `[`SetRules`](#structFRHAPI__InventoryBucketUseRuleSet_1aef5f6655891dcbdd3a5292ae43ab9652)`(TMap< FString, TArray< ERHAPI_InventoryBucket > > && NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSet_1aef5f6655891dcbdd3a5292ae43ab9652"></a>

Sets the value of Rules_Optional and also sets Rules_IsSet to true using move semantics.

#### `public inline void `[`ClearRules`](#structFRHAPI__InventoryBucketUseRuleSet_1a2aeec262f695a6ff14d989c6d532dbab)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a2aeec262f695a6ff14d989c6d532dbab"></a>

Clears the value of Rules_Optional and sets Rules_IsSet to false.

#### `public inline bool `[`IsRulesSet`](#structFRHAPI__InventoryBucketUseRuleSet_1aa150f3e69bbdbe879403e33c8b816c02)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1aa150f3e69bbdbe879403e33c8b816c02"></a>

Checks whether Rules_Optional has been set.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1a105d3bc49837de2e67f1da30d86221af)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a105d3bc49837de2e67f1da30d86221af"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1ab021ceae2dd534f8ed8f84b823094551)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1ab021ceae2dd534f8ed8f84b823094551"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1a1e883cb07eb735ce599fa9fb9a63d429)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a1e883cb07eb735ce599fa9fb9a63d429"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1a9a3c8b2abb791da4fbb64517e54b64d5)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a9a3c8b2abb791da4fbb64517e54b64d5"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1ad802e0220682f63f66260e3cdb66bfb9)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1ad802e0220682f63f66260e3cdb66bfb9"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__InventoryBucketUseRuleSet_1ad2a27600ec84f21ef60ad4d3f4eac4b9)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1ad2a27600ec84f21ef60ad4d3f4eac4b9"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1af1e98e5e69e8e0e4f19610d7a249192e)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSet_1af1e98e5e69e8e0e4f19610d7a249192e"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1af31d3e5fea551af46835596b4ba51aae)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSet_1af31d3e5fea551af46835596b4ba51aae"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSet_1ae67f10a6ce01ad498fd5ce97401c7c96)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1ae67f10a6ce01ad498fd5ce97401c7c96"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline bool `[`IsCacheInfoSet`](#structFRHAPI__InventoryBucketUseRuleSet_1ac777862e467d1a00aaf7a3c64ff567a1)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1ac777862e467d1a00aaf7a3c64ff567a1"></a>

Checks whether CacheInfo_Optional has been set.

#### `public inline void `[`SetCacheInfoToNull`](#structFRHAPI__InventoryBucketUseRuleSet_1ac487c91f0fdb731299eb5741bbee311d)`()` <a id="structFRHAPI__InventoryBucketUseRuleSet_1ac487c91f0fdb731299eb5741bbee311d"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCacheInfoNull`](#structFRHAPI__InventoryBucketUseRuleSet_1a9f1a0cfb88f69e89a945bc62a9a8a950)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSet_1a9f1a0cfb88f69e89a945bc62a9a8a950"></a>

Checks whether CacheInfo_Optional is set to null.

