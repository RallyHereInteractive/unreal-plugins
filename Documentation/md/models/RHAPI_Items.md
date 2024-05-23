# group `RHAPI_Items` <a id="group__RHAPI__Items"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Items`](#structFRHAPI__Items) | A collections of Items by Item ID.

## struct `FRHAPI_Items` <a id="structFRHAPI__Items"></a>

```
struct FRHAPI_Items
  : public FRHAPI_Model
```

A collections of Items by Item ID.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > `[`Items_Optional`](#structFRHAPI__Items_1acb634134dc074f992328d8d87d1f9d62) | A collection of Items by Item ID.
`public bool `[`Items_IsSet`](#structFRHAPI__Items_1ab618761f9969f6d5952ba37001edac5a) | true if Items_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Items_1a1217986ceec7a05241e7e957cb9828fa) | Item's cache information.
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__Items_1aa69362208158a2532fe056d3826818a2) | true if CacheInfo_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__Items_1a7d988b32b08e2f3336e8a842c35af7b7)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Items_1a913a71601a108617f25afa168f333d97)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & `[`GetItems`](#structFRHAPI__Items_1ab44675ebca65c87de42ec268fc199997)`()` | Gets the value of Items_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & `[`GetItems`](#structFRHAPI__Items_1aed87cc2a3e31525a7da7a9eb8a7278a1)`() const` | Gets the value of Items_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & `[`GetItems`](#structFRHAPI__Items_1a1d50f8da7328aef3369ebd7a22b1bfd1)`(const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & DefaultValue) const` | Gets the value of Items_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetItems`](#structFRHAPI__Items_1af64a10709091193e9ddf7f8cae227334)`(TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & OutValue) const` | Fills OutValue with the value of Items_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > * `[`GetItemsOrNull`](#structFRHAPI__Items_1a59a64d015fb6d45f928a01d377ca9ff1)`()` | Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > * `[`GetItemsOrNull`](#structFRHAPI__Items_1a727c9a06c92134aa5df7380d3b213b4e)`() const` | Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetItems`](#structFRHAPI__Items_1a47eafcaaf4df9d3232ee0435885bdac9)`(const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & NewValue)` | Sets the value of Items_Optional and also sets Items_IsSet to true.
`public inline void `[`SetItems`](#structFRHAPI__Items_1ab46ba0d20c0b3a5858b5f355162c65c8)`(TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > && NewValue)` | Sets the value of Items_Optional and also sets Items_IsSet to true using move semantics.
`public inline void `[`ClearItems`](#structFRHAPI__Items_1a2f14e5ee5d4d02ff849753ef84a9a713)`()` | Clears the value of Items_Optional and sets Items_IsSet to false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Items_1a298ec445177a4b83f5ecb0033a193b7f)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Items_1af09b7f5f49d7f5ba4e38002a72473e18)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Items_1a4817236512ffe065a3acbb51cc8be6e9)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__Items_1a88edb36b4ed0b822839435f34dc71c2b)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Items_1a3fd57fc77b04c5e29de60c279a4e0761)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Items_1a3071a0878ff7776f22f57fcd3f93098e)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__Items_1aadfa9e40f2503e083779241e131ba28d)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`SetCacheInfo`](#structFRHAPI__Items_1af646e5c2a1dfac658afe04beb5af0623)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__Items_1a92bb319e2322768d4493dd851721c1ac)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

### Members

#### `public TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > `[`Items_Optional`](#structFRHAPI__Items_1acb634134dc074f992328d8d87d1f9d62) <a id="structFRHAPI__Items_1acb634134dc074f992328d8d87d1f9d62"></a>

A collection of Items by Item ID.

#### `public bool `[`Items_IsSet`](#structFRHAPI__Items_1ab618761f9969f6d5952ba37001edac5a) <a id="structFRHAPI__Items_1ab618761f9969f6d5952ba37001edac5a"></a>

true if Items_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Items_1a1217986ceec7a05241e7e957cb9828fa) <a id="structFRHAPI__Items_1a1217986ceec7a05241e7e957cb9828fa"></a>

Item's cache information.

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__Items_1aa69362208158a2532fe056d3826818a2) <a id="structFRHAPI__Items_1aa69362208158a2532fe056d3826818a2"></a>

true if CacheInfo_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__Items_1a7d988b32b08e2f3336e8a842c35af7b7)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Items_1a7d988b32b08e2f3336e8a842c35af7b7"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Items_1a913a71601a108617f25afa168f333d97)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Items_1a913a71601a108617f25afa168f333d97"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & `[`GetItems`](#structFRHAPI__Items_1ab44675ebca65c87de42ec268fc199997)`()` <a id="structFRHAPI__Items_1ab44675ebca65c87de42ec268fc199997"></a>

Gets the value of Items_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & `[`GetItems`](#structFRHAPI__Items_1aed87cc2a3e31525a7da7a9eb8a7278a1)`() const` <a id="structFRHAPI__Items_1aed87cc2a3e31525a7da7a9eb8a7278a1"></a>

Gets the value of Items_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & `[`GetItems`](#structFRHAPI__Items_1a1d50f8da7328aef3369ebd7a22b1bfd1)`(const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & DefaultValue) const` <a id="structFRHAPI__Items_1a1d50f8da7328aef3369ebd7a22b1bfd1"></a>

Gets the value of Items_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetItems`](#structFRHAPI__Items_1af64a10709091193e9ddf7f8cae227334)`(TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & OutValue) const` <a id="structFRHAPI__Items_1af64a10709091193e9ddf7f8cae227334"></a>

Fills OutValue with the value of Items_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > * `[`GetItemsOrNull`](#structFRHAPI__Items_1a59a64d015fb6d45f928a01d377ca9ff1)`()` <a id="structFRHAPI__Items_1a59a64d015fb6d45f928a01d377ca9ff1"></a>

Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > * `[`GetItemsOrNull`](#structFRHAPI__Items_1a727c9a06c92134aa5df7380d3b213b4e)`() const` <a id="structFRHAPI__Items_1a727c9a06c92134aa5df7380d3b213b4e"></a>

Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetItems`](#structFRHAPI__Items_1a47eafcaaf4df9d3232ee0435885bdac9)`(const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & NewValue)` <a id="structFRHAPI__Items_1a47eafcaaf4df9d3232ee0435885bdac9"></a>

Sets the value of Items_Optional and also sets Items_IsSet to true.

#### `public inline void `[`SetItems`](#structFRHAPI__Items_1ab46ba0d20c0b3a5858b5f355162c65c8)`(TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > && NewValue)` <a id="structFRHAPI__Items_1ab46ba0d20c0b3a5858b5f355162c65c8"></a>

Sets the value of Items_Optional and also sets Items_IsSet to true using move semantics.

#### `public inline void `[`ClearItems`](#structFRHAPI__Items_1a2f14e5ee5d4d02ff849753ef84a9a713)`()` <a id="structFRHAPI__Items_1a2f14e5ee5d4d02ff849753ef84a9a713"></a>

Clears the value of Items_Optional and sets Items_IsSet to false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Items_1a298ec445177a4b83f5ecb0033a193b7f)`()` <a id="structFRHAPI__Items_1a298ec445177a4b83f5ecb0033a193b7f"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Items_1af09b7f5f49d7f5ba4e38002a72473e18)`() const` <a id="structFRHAPI__Items_1af09b7f5f49d7f5ba4e38002a72473e18"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Items_1a4817236512ffe065a3acbb51cc8be6e9)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__Items_1a4817236512ffe065a3acbb51cc8be6e9"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__Items_1a88edb36b4ed0b822839435f34dc71c2b)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__Items_1a88edb36b4ed0b822839435f34dc71c2b"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Items_1a3fd57fc77b04c5e29de60c279a4e0761)`()` <a id="structFRHAPI__Items_1a3fd57fc77b04c5e29de60c279a4e0761"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Items_1a3071a0878ff7776f22f57fcd3f93098e)`() const` <a id="structFRHAPI__Items_1a3071a0878ff7776f22f57fcd3f93098e"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__Items_1aadfa9e40f2503e083779241e131ba28d)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__Items_1aadfa9e40f2503e083779241e131ba28d"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__Items_1af646e5c2a1dfac658afe04beb5af0623)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__Items_1af646e5c2a1dfac658afe04beb5af0623"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__Items_1a92bb319e2322768d4493dd851721c1ac)`()` <a id="structFRHAPI__Items_1a92bb319e2322768d4493dd851721c1ac"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

