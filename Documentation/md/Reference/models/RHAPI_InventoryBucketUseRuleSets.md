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
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & `[`GetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a5f41303752e8ebe60d53324ad4c0b5aa)`()` | Gets the value of RuleSets_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & `[`GetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1af03c74d669246cd6e9f107a76d6de253)`() const` | Gets the value of RuleSets_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & `[`GetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a33f69d1e44f5e9b349680c38e67c5997)`(const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & DefaultValue) const` | Gets the value of RuleSets_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a58613146882029f6e887500440fbe946)`(TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & OutValue) const` | Fills OutValue with the value of RuleSets_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > * `[`GetRuleSetsOrNull`](#structFRHAPI__InventoryBucketUseRuleSets_1aaaf092a8df049a8f37ae16419453c8dd)`()` | Returns a pointer to RuleSets_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > * `[`GetRuleSetsOrNull`](#structFRHAPI__InventoryBucketUseRuleSets_1a19778eae05284e6cee5eae32cb2dd089)`() const` | Returns a pointer to RuleSets_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a0775526d3ba00de7889e0701e4b52588)`(const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & NewValue)` | Sets the value of RuleSets_Optional and also sets RuleSets_IsSet to true.
`public inline FORCEINLINE void `[`SetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1ac4ea7ec8fbc7e2d28ef3a99d289cd534)`(TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > && NewValue)` | Sets the value of RuleSets_Optional and also sets RuleSets_IsSet to true using move semantics.
`public inline void `[`ClearRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a4d056b0e01547e67525ae74343fe932f)`()` | Clears the value of RuleSets_Optional and sets RuleSets_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a38f8b4c1f7289b166410ecbe104b988a)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a503edb64b72aeca59a66a1572d3fffa3)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1aeae1d0a72fc58a281f4a4a6f514dafe6)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1af41588e481d21b9abf3aa4ee2b57b7c0)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__InventoryBucketUseRuleSets_1a303914a4526efd60239a899fdfdb26d2)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__InventoryBucketUseRuleSets_1a7a1881b2f067636150482b9dd298173f)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a1d0d59d9825579b03fe0ab6139d2df87)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a158d4e09114346a70bed9ac3f6cd11af)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a20b164be4527441b9245a6558fbc2db3)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__InventoryBucketUseRuleSets_1af01793a2cf0869c78cc29100d240c895)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__InventoryBucketUseRuleSets_1a85e5144d598687575bdb241b7052c80e)`() const` | Checks whether CacheInfo_Optional is set to null.

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

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & `[`GetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a5f41303752e8ebe60d53324ad4c0b5aa)`()` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a5f41303752e8ebe60d53324ad4c0b5aa"></a>

Gets the value of RuleSets_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & `[`GetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1af03c74d669246cd6e9f107a76d6de253)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1af03c74d669246cd6e9f107a76d6de253"></a>

Gets the value of RuleSets_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & `[`GetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a33f69d1e44f5e9b349680c38e67c5997)`(const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & DefaultValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a33f69d1e44f5e9b349680c38e67c5997"></a>

Gets the value of RuleSets_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a58613146882029f6e887500440fbe946)`(TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & OutValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a58613146882029f6e887500440fbe946"></a>

Fills OutValue with the value of RuleSets_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > * `[`GetRuleSetsOrNull`](#structFRHAPI__InventoryBucketUseRuleSets_1aaaf092a8df049a8f37ae16419453c8dd)`()` <a id="structFRHAPI__InventoryBucketUseRuleSets_1aaaf092a8df049a8f37ae16419453c8dd"></a>

Returns a pointer to RuleSets_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > * `[`GetRuleSetsOrNull`](#structFRHAPI__InventoryBucketUseRuleSets_1a19778eae05284e6cee5eae32cb2dd089)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a19778eae05284e6cee5eae32cb2dd089"></a>

Returns a pointer to RuleSets_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a0775526d3ba00de7889e0701e4b52588)`(const TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > & NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a0775526d3ba00de7889e0701e4b52588"></a>

Sets the value of RuleSets_Optional and also sets RuleSets_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1ac4ea7ec8fbc7e2d28ef3a99d289cd534)`(TMap< FString, `[`FRHAPI_InventoryBucketUseRuleSet`](RHAPI_InventoryBucketUseRuleSet.md#structFRHAPI__InventoryBucketUseRuleSet)` > && NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSets_1ac4ea7ec8fbc7e2d28ef3a99d289cd534"></a>

Sets the value of RuleSets_Optional and also sets RuleSets_IsSet to true using move semantics.

#### `public inline void `[`ClearRuleSets`](#structFRHAPI__InventoryBucketUseRuleSets_1a4d056b0e01547e67525ae74343fe932f)`()` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a4d056b0e01547e67525ae74343fe932f"></a>

Clears the value of RuleSets_Optional and sets RuleSets_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a38f8b4c1f7289b166410ecbe104b988a)`()` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a38f8b4c1f7289b166410ecbe104b988a"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a503edb64b72aeca59a66a1572d3fffa3)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a503edb64b72aeca59a66a1572d3fffa3"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1aeae1d0a72fc58a281f4a4a6f514dafe6)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1aeae1d0a72fc58a281f4a4a6f514dafe6"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1af41588e481d21b9abf3aa4ee2b57b7c0)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1af41588e481d21b9abf3aa4ee2b57b7c0"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__InventoryBucketUseRuleSets_1a303914a4526efd60239a899fdfdb26d2)`()` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a303914a4526efd60239a899fdfdb26d2"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__InventoryBucketUseRuleSets_1a7a1881b2f067636150482b9dd298173f)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a7a1881b2f067636150482b9dd298173f"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a1d0d59d9825579b03fe0ab6139d2df87)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a1d0d59d9825579b03fe0ab6139d2df87"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a158d4e09114346a70bed9ac3f6cd11af)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a158d4e09114346a70bed9ac3f6cd11af"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__InventoryBucketUseRuleSets_1a20b164be4527441b9245a6558fbc2db3)`()` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a20b164be4527441b9245a6558fbc2db3"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__InventoryBucketUseRuleSets_1af01793a2cf0869c78cc29100d240c895)`()` <a id="structFRHAPI__InventoryBucketUseRuleSets_1af01793a2cf0869c78cc29100d240c895"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__InventoryBucketUseRuleSets_1a85e5144d598687575bdb241b7052c80e)`() const` <a id="structFRHAPI__InventoryBucketUseRuleSets_1a85e5144d598687575bdb241b7052c80e"></a>

Checks whether CacheInfo_Optional is set to null.

