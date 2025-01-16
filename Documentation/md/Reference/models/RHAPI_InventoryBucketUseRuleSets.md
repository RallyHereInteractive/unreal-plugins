---
title: RHAPI_InventoryBucketUseRuleSets
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_InventoryBucketUseRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets) | A collection of Inventory Bucket Use Rule Sets. A rule set determine how item can be used across buckets.

## struct `FRHAPI_InventoryBucketUseRuleSets` <a id="structFRHAPI__InventoryBucketUseRuleSets"></a>

```
struct FRHAPI_InventoryBucketUseRuleSets
  : public FRHAPI_Model
```

A collection of Inventory Bucket Use Rule Sets. A rule set determine how item can be used across buckets.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > `[`RuleSets_Optional`](#structFRHAPI__InventoryBucketUseRuleSets_1a17c48373eacf1cee94d93c5c6310613a) | 
`public bool `[`RuleSets_IsSet`](#structFRHAPI__InventoryBucketUseRuleSets_1a513a99e13bbf917413a530e724e6d407) | true if RuleSets_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__InventoryBucketUseRuleSets_1ad40dd88c905bde3c6c5bcf128a500fdb) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__InventoryBucketUseRuleSets_1ac4f99d8e6addd6040a186dba7f24a0fd) | true if CacheInfo_Optional has been set to a value
`public bool `[`CacheInfo_IsNull`](#structFRHAPI__InventoryBucketUseRuleSets_1a4c66a402da870f67fde288843b911ba1) | true if CacheInfo_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__InventoryBucketUseRuleSets_1a55eb50098ab2621069110e4ef29b7e82)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InventoryBucketUseRuleSets_1a73748d7bf9584bd5411553adb728c1d9)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & `[`GetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1aa16c41f599eda7c2b28f1a8b5062219b)`()` | Gets the value of RuleSets_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & `[`GetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a9773a2a9fd35fafce1c375815d80b61a)`() const` | Gets the value of RuleSets_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & `[`GetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a57f4c485095db0530928e648eff92fb3)`(const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & DefaultValue) const` | Gets the value of RuleSets_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a20ab8741220988f68b99436142b308cc)`(TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & OutValue) const` | Fills OutValue with the value of RuleSets_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > * `[`GetRuleSetsOrNull`](#structFRHAPI__InventoryBucketUseRuleSets_1aa5d947afe6b7e6c86d25d0c19c2a1fa1)`()` | Returns a pointer to RuleSets_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > * `[`GetRuleSetsOrNull`](#structFRHAPI__InventoryBucketUseRuleSets_1a16099abfe589a36bc0546f0e86a78d20)`() const` | Returns a pointer to RuleSets_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a9139e4f850663d4ea6b5c2c5fff3dd98)`(const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & NewValue)` | Sets the value of RuleSets_Optional and also sets RuleSets_IsSet to true.
`public inline void `[`SetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1aff1e8eb7694ef25c0d011be236ed0ce9)`(TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > && NewValue)` | Sets the value of RuleSets_Optional and also sets RuleSets_IsSet to true using move semantics.
`public inline void `[`ClearRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a4d056b0e01547e67525ae74343fe932f)`()` | Clears the value of RuleSets_Optional and sets RuleSets_IsSet to false.
`public inline bool `[`IsRuleSetsSet`](#structFRHAPI__InventoryBucketUseRuleSets_1a913d1bbaa78c3b3f5f8b84a0cc1eaaa3)`() const` | Checks whether RuleSets_Optional has been set.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a143d2830ad7adb88618d2eda17fd1d8f)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1ae06eaa0a03365ec2751afbc123d9b56a)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1aec0dfd3680d1e61b32c69c6978be3f7f)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a33dd772efcf464da6b3b6db246e6097b)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__InventoryBucketUseRuleSets_1a4d056883fb2e39e483b7557916d20a07)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__InventoryBucketUseRuleSets_1aaae07be1a356309f7321fd110065faae)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a7fa11ba31fb9cb36b41b0b17d633ef32)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`SetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1abec2944748b3ec62858a593db1d51dd9)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a20b164be4527441b9245a6558fbc2db3)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline bool `[`IsCacheInfoSet`](#structFRHAPI__InventoryBucketUseRuleSets_1a8cd6feff813d4e4d4d1f9fd87fb1ec35)`() const` | Checks whether CacheInfo_Optional has been set.
`public inline void `[`SetCacheInfoToNull`](#structFRHAPI__InventoryBucketUseRuleSets_1a15935830fe26bca2282e036297246b40)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCacheInfoNull`](#structFRHAPI__InventoryBucketUseRuleSets_1a2da827e8da2ffffee23c03ba1f842630)`() const` | Checks whether CacheInfo_Optional is set to null.

### Members

#### `public TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > `[`RuleSets_Optional`](#structFRHAPI__InventoryBucketUseRuleSets_1a17c48373eacf1cee94d93c5c6310613a) <a id="structFRHAPI__InventoryBucketUseRuleSets_1a17c48373eacf1cee94d93c5c6310613a"></a>

#### `public bool `[`RuleSets_IsSet`](#structFRHAPI__InventoryBucketUseRuleSets_1a513a99e13bbf917413a530e724e6d407) <a id="structFRHAPI__InventoryBucketUseRuleSets_1a513a99e13bbf917413a530e724e6d407"></a>

true if RuleSets_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__InventoryBucketUseRuleSets_1ad40dd88c905bde3c6c5bcf128a500fdb) <a id="structFRHAPI__InventoryBucketUseRuleSets_1ad40dd88c905bde3c6c5bcf128a500fdb"></a>

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__InventoryBucketUseRuleSets_1ac4f99d8e6addd6040a186dba7f24a0fd) <a id="structFRHAPI__InventoryBucketUseRuleSets_1ac4f99d8e6addd6040a186dba7f24a0fd"></a>

true if CacheInfo_Optional has been set to a value

#### `public bool `[`CacheInfo_IsNull`](#structFRHAPI__InventoryBucketUseRuleSets_1a4c66a402da870f67fde288843b911ba1) <a id="structFRHAPI__InventoryBucketUseRuleSets_1a4c66a402da870f67fde288843b911ba1"></a>

true if CacheInfo_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__InventoryBucketUseRuleSets_1a55eb50098ab2621069110e4ef29b7e82)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a55eb50098ab2621069110e4ef29b7e82"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InventoryBucketUseRuleSets_1a73748d7bf9584bd5411553adb728c1d9)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a73748d7bf9584bd5411553adb728c1d9"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & `[`GetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1aa16c41f599eda7c2b28f1a8b5062219b)`()` <a id="structFRHAPI__InventoryBucketUseRuleSets_1aa16c41f599eda7c2b28f1a8b5062219b"></a>

Gets the value of RuleSets_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & `[`GetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a9773a2a9fd35fafce1c375815d80b61a)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a9773a2a9fd35fafce1c375815d80b61a"></a>

Gets the value of RuleSets_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & `[`GetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a57f4c485095db0530928e648eff92fb3)`(const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & DefaultValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a57f4c485095db0530928e648eff92fb3"></a>

Gets the value of RuleSets_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a20ab8741220988f68b99436142b308cc)`(TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & OutValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a20ab8741220988f68b99436142b308cc"></a>

Fills OutValue with the value of RuleSets_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > * `[`GetRuleSetsOrNull`](#structFRHAPI__InventoryBucketUseRuleSets_1aa5d947afe6b7e6c86d25d0c19c2a1fa1)`()` <a id="structFRHAPI__InventoryBucketUseRuleSets_1aa5d947afe6b7e6c86d25d0c19c2a1fa1"></a>

Returns a pointer to RuleSets_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > * `[`GetRuleSetsOrNull`](#structFRHAPI__InventoryBucketUseRuleSets_1a16099abfe589a36bc0546f0e86a78d20)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a16099abfe589a36bc0546f0e86a78d20"></a>

Returns a pointer to RuleSets_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a9139e4f850663d4ea6b5c2c5fff3dd98)`(const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a9139e4f850663d4ea6b5c2c5fff3dd98"></a>

Sets the value of RuleSets_Optional and also sets RuleSets_IsSet to true.

#### `public inline void `[`SetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1aff1e8eb7694ef25c0d011be236ed0ce9)`(TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > && NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSets_1aff1e8eb7694ef25c0d011be236ed0ce9"></a>

Sets the value of RuleSets_Optional and also sets RuleSets_IsSet to true using move semantics.

#### `public inline void `[`ClearRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a4d056b0e01547e67525ae74343fe932f)`()` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a4d056b0e01547e67525ae74343fe932f"></a>

Clears the value of RuleSets_Optional and sets RuleSets_IsSet to false.

#### `public inline bool `[`IsRuleSetsSet`](#structFRHAPI__InventoryBucketUseRuleSets_1a913d1bbaa78c3b3f5f8b84a0cc1eaaa3)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a913d1bbaa78c3b3f5f8b84a0cc1eaaa3"></a>

Checks whether RuleSets_Optional has been set.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a143d2830ad7adb88618d2eda17fd1d8f)`()` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a143d2830ad7adb88618d2eda17fd1d8f"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1ae06eaa0a03365ec2751afbc123d9b56a)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1ae06eaa0a03365ec2751afbc123d9b56a"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1aec0dfd3680d1e61b32c69c6978be3f7f)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1aec0dfd3680d1e61b32c69c6978be3f7f"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a33dd772efcf464da6b3b6db246e6097b)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a33dd772efcf464da6b3b6db246e6097b"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__InventoryBucketUseRuleSets_1a4d056883fb2e39e483b7557916d20a07)`()` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a4d056883fb2e39e483b7557916d20a07"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__InventoryBucketUseRuleSets_1aaae07be1a356309f7321fd110065faae)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1aaae07be1a356309f7321fd110065faae"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a7fa11ba31fb9cb36b41b0b17d633ef32)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a7fa11ba31fb9cb36b41b0b17d633ef32"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1abec2944748b3ec62858a593db1d51dd9)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSets_1abec2944748b3ec62858a593db1d51dd9"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a20b164be4527441b9245a6558fbc2db3)`()` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a20b164be4527441b9245a6558fbc2db3"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline bool `[`IsCacheInfoSet`](#structFRHAPI__InventoryBucketUseRuleSets_1a8cd6feff813d4e4d4d1f9fd87fb1ec35)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a8cd6feff813d4e4d4d1f9fd87fb1ec35"></a>

Checks whether CacheInfo_Optional has been set.

#### `public inline void `[`SetCacheInfoToNull`](#structFRHAPI__InventoryBucketUseRuleSets_1a15935830fe26bca2282e036297246b40)`()` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a15935830fe26bca2282e036297246b40"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCacheInfoNull`](#structFRHAPI__InventoryBucketUseRuleSets_1a2da827e8da2ffffee23c03ba1f842630)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a2da827e8da2ffffee23c03ba1f842630"></a>

Checks whether CacheInfo_Optional is set to null.

