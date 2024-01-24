# RHAPI_InventoryBucketUseRuleSets <a id="group__RHAPI__InventoryBucketUseRuleSets"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > `[`RuleSets_Optional`](#structFRHAPI__InventoryBucketUseRuleSets_1a17c48373eacf1cee94d93c5c6310613a) | 
`public bool `[`RuleSets_IsSet`](#structFRHAPI__InventoryBucketUseRuleSets_1a513a99e13bbf917413a530e724e6d407) | true if RuleSets_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__InventoryBucketUseRuleSets_1ad40dd88c905bde3c6c5bcf128a500fdb) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__InventoryBucketUseRuleSets_1ac4f99d8e6addd6040a186dba7f24a0fd) | true if CacheInfo_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__InventoryBucketUseRuleSets_1a986afa0d79d2b74be52e5e9b621b20e5)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InventoryBucketUseRuleSets_1ace1a345fd38d6b67216c52f99ae04e36)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & `[`GetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1ad87ebbcd244c110a5b0fd43480c7fb3f)`()` | Gets the value of RuleSets_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & `[`GetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1af025ca483b6f2d2c41b0ea72a6246a15)`() const` | Gets the value of RuleSets_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & `[`GetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a2bf664064f84affc890554088aa5fd12)`(const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & DefaultValue) const` | Gets the value of RuleSets_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a20ab8741220988f68b99436142b308cc)`(TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & OutValue) const` | Fills OutValue with the value of RuleSets_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > * `[`GetRuleSetsOrNull`](#structFRHAPI__InventoryBucketUseRuleSets_1a8c7730910e0f2c0f66c0ac07e3d967bc)`()` | Returns a pointer to RuleSets_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > * `[`GetRuleSetsOrNull`](#structFRHAPI__InventoryBucketUseRuleSets_1a1409a120b179be2507d41425a018ddad)`() const` | Returns a pointer to RuleSets_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a7c670c4dde0611d9b6e27a47fda9a04c)`(TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > NewValue)` | Sets the value of RuleSets_Optional and also sets RuleSets_IsSet to true.
`public inline void `[`ClearRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a4d056b0e01547e67525ae74343fe932f)`()` | Clears the value of RuleSets_Optional and sets RuleSets_IsSet to false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a5faa4a8938f8eba12e0d430f9fe24634)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a6eac72a5d10765adb6bf64f9e6ac996b)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a619c1b2c5e924631d195fa563da590a5)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a33dd772efcf464da6b3b6db246e6097b)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__InventoryBucketUseRuleSets_1a2d4eb355e30583e9bb0d364610e615dc)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__InventoryBucketUseRuleSets_1aebaf7ae0573b04b04c1111faa2ff5eae)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a6137f5004b123127d0b9e968bc20e460)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a20b164be4527441b9245a6558fbc2db3)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### Members

#### `public TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > `[`RuleSets_Optional`](#structFRHAPI__InventoryBucketUseRuleSets_1a17c48373eacf1cee94d93c5c6310613a) <a id="structFRHAPI__InventoryBucketUseRuleSets_1a17c48373eacf1cee94d93c5c6310613a"></a>

<br>
#### `public bool `[`RuleSets_IsSet`](#structFRHAPI__InventoryBucketUseRuleSets_1a513a99e13bbf917413a530e724e6d407) <a id="structFRHAPI__InventoryBucketUseRuleSets_1a513a99e13bbf917413a530e724e6d407"></a>

true if RuleSets_Optional has been set to a value

<br>
#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__InventoryBucketUseRuleSets_1ad40dd88c905bde3c6c5bcf128a500fdb) <a id="structFRHAPI__InventoryBucketUseRuleSets_1ad40dd88c905bde3c6c5bcf128a500fdb"></a>

<br>
#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__InventoryBucketUseRuleSets_1ac4f99d8e6addd6040a186dba7f24a0fd) <a id="structFRHAPI__InventoryBucketUseRuleSets_1ac4f99d8e6addd6040a186dba7f24a0fd"></a>

true if CacheInfo_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__InventoryBucketUseRuleSets_1a986afa0d79d2b74be52e5e9b621b20e5)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a986afa0d79d2b74be52e5e9b621b20e5"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__InventoryBucketUseRuleSets_1ace1a345fd38d6b67216c52f99ae04e36)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1ace1a345fd38d6b67216c52f99ae04e36"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & `[`GetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1ad87ebbcd244c110a5b0fd43480c7fb3f)`()` <a id="structFRHAPI__InventoryBucketUseRuleSets_1ad87ebbcd244c110a5b0fd43480c7fb3f"></a>

Gets the value of RuleSets_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & `[`GetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1af025ca483b6f2d2c41b0ea72a6246a15)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1af025ca483b6f2d2c41b0ea72a6246a15"></a>

Gets the value of RuleSets_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & `[`GetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a2bf664064f84affc890554088aa5fd12)`(const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & DefaultValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a2bf664064f84affc890554088aa5fd12"></a>

Gets the value of RuleSets_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a20ab8741220988f68b99436142b308cc)`(TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & OutValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a20ab8741220988f68b99436142b308cc"></a>

Fills OutValue with the value of RuleSets_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > * `[`GetRuleSetsOrNull`](#structFRHAPI__InventoryBucketUseRuleSets_1a8c7730910e0f2c0f66c0ac07e3d967bc)`()` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a8c7730910e0f2c0f66c0ac07e3d967bc"></a>

Returns a pointer to RuleSets_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > * `[`GetRuleSetsOrNull`](#structFRHAPI__InventoryBucketUseRuleSets_1a1409a120b179be2507d41425a018ddad)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a1409a120b179be2507d41425a018ddad"></a>

Returns a pointer to RuleSets_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a7c670c4dde0611d9b6e27a47fda9a04c)`(TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a7c670c4dde0611d9b6e27a47fda9a04c"></a>

Sets the value of RuleSets_Optional and also sets RuleSets_IsSet to true.

<br>
#### `public inline void `[`ClearRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a4d056b0e01547e67525ae74343fe932f)`()` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a4d056b0e01547e67525ae74343fe932f"></a>

Clears the value of RuleSets_Optional and sets RuleSets_IsSet to false.

<br>
#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a5faa4a8938f8eba12e0d430f9fe24634)`()` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a5faa4a8938f8eba12e0d430f9fe24634"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a6eac72a5d10765adb6bf64f9e6ac996b)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a6eac72a5d10765adb6bf64f9e6ac996b"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a619c1b2c5e924631d195fa563da590a5)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a619c1b2c5e924631d195fa563da590a5"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a33dd772efcf464da6b3b6db246e6097b)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a33dd772efcf464da6b3b6db246e6097b"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__InventoryBucketUseRuleSets_1a2d4eb355e30583e9bb0d364610e615dc)`()` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a2d4eb355e30583e9bb0d364610e615dc"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__InventoryBucketUseRuleSets_1aebaf7ae0573b04b04c1111faa2ff5eae)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1aebaf7ae0573b04b04c1111faa2ff5eae"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a6137f5004b123127d0b9e968bc20e460)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a6137f5004b123127d0b9e968bc20e460"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

<br>
#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a20b164be4527441b9245a6558fbc2db3)`()` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a20b164be4527441b9245a6558fbc2db3"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

<br>
