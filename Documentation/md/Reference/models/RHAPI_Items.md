---
title: RHAPI_Items
---

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
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Items_1a1217986ceec7a05241e7e957cb9828fa) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__Items_1aa69362208158a2532fe056d3826818a2) | true if CacheInfo_Optional has been set to a value
`public bool `[`CacheInfo_IsNull`](#structFRHAPI__Items_1a367a028c1428e05cf19f90f2181eeb54) | true if CacheInfo_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__Items_1ae83e7d76c864b082bd3c2903d7105b17)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Items_1a7ad6e79b32c1edc8be31baf57989585d)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & `[`GetItems`](#structFRHAPI__Items_1abf3db8f1dc000a7d122f7b8062ce2c6c)`()` | Gets the value of Items_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & `[`GetItems`](#structFRHAPI__Items_1a64003dca02ff209647b6e49e627469b8)`() const` | Gets the value of Items_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & `[`GetItems`](#structFRHAPI__Items_1a5f8e054b5895906207b58657d53c0707)`(const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & DefaultValue) const` | Gets the value of Items_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetItems`](#structFRHAPI__Items_1a9e33b2f2051e5af7486ba545fd9f803d)`(TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & OutValue) const` | Fills OutValue with the value of Items_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > * `[`GetItemsOrNull`](#structFRHAPI__Items_1a1d802ab1502ceced50fe7b715b1456af)`()` | Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > * `[`GetItemsOrNull`](#structFRHAPI__Items_1a83589735585ae1159530fb2607b73f56)`() const` | Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetItems`](#structFRHAPI__Items_1afcef782fff45e4f3a9a41276e4545cac)`(const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & NewValue)` | Sets the value of Items_Optional and also sets Items_IsSet to true.
`public inline FORCEINLINE void `[`SetItems`](#structFRHAPI__Items_1a7e809aaeb564acec6a5632da65a36d7e)`(TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > && NewValue)` | Sets the value of Items_Optional and also sets Items_IsSet to true using move semantics.
`public inline void `[`ClearItems`](#structFRHAPI__Items_1a2f14e5ee5d4d02ff849753ef84a9a713)`()` | Clears the value of Items_Optional and sets Items_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Items_1a0a33c0bb7905c5c0093de7517eed250d)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Items_1a59e9d9aca970971f5d48df1eec80fc14)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Items_1a123e51e6cc05c70ea9b15379810a10e2)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__Items_1a773aa70c855b809fa56700f181b81baa)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Items_1a37668be0ab41091d1cd107a6c21e3c9b)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Items_1a97c4bffad8b50d4f289b649d85523c93)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Items_1aea3b5f1261a6d81e6ca6c56d9e636088)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Items_1a59fd3e9d15991e9f7154fca9f9a84cdb)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__Items_1a92bb319e2322768d4493dd851721c1ac)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__Items_1a756634d70de4fb6bae437c14e5b7dfea)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__Items_1a8a881541ce6ce60c48437fd554253af2)`() const` | Checks whether CacheInfo_Optional is set to null.

### Members

#### `public TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > `[`Items_Optional`](#structFRHAPI__Items_1acb634134dc074f992328d8d87d1f9d62) <a id="structFRHAPI__Items_1acb634134dc074f992328d8d87d1f9d62"></a>

A collection of Items by Item ID.

#### `public bool `[`Items_IsSet`](#structFRHAPI__Items_1ab618761f9969f6d5952ba37001edac5a) <a id="structFRHAPI__Items_1ab618761f9969f6d5952ba37001edac5a"></a>

true if Items_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Items_1a1217986ceec7a05241e7e957cb9828fa) <a id="structFRHAPI__Items_1a1217986ceec7a05241e7e957cb9828fa"></a>

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__Items_1aa69362208158a2532fe056d3826818a2) <a id="structFRHAPI__Items_1aa69362208158a2532fe056d3826818a2"></a>

true if CacheInfo_Optional has been set to a value

#### `public bool `[`CacheInfo_IsNull`](#structFRHAPI__Items_1a367a028c1428e05cf19f90f2181eeb54) <a id="structFRHAPI__Items_1a367a028c1428e05cf19f90f2181eeb54"></a>

true if CacheInfo_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__Items_1ae83e7d76c864b082bd3c2903d7105b17)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Items_1ae83e7d76c864b082bd3c2903d7105b17"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Items_1a7ad6e79b32c1edc8be31baf57989585d)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__Items_1a7ad6e79b32c1edc8be31baf57989585d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & `[`GetItems`](#structFRHAPI__Items_1abf3db8f1dc000a7d122f7b8062ce2c6c)`()` <a id="structFRHAPI__Items_1abf3db8f1dc000a7d122f7b8062ce2c6c"></a>

Gets the value of Items_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & `[`GetItems`](#structFRHAPI__Items_1a64003dca02ff209647b6e49e627469b8)`() const` <a id="structFRHAPI__Items_1a64003dca02ff209647b6e49e627469b8"></a>

Gets the value of Items_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & `[`GetItems`](#structFRHAPI__Items_1a5f8e054b5895906207b58657d53c0707)`(const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & DefaultValue) const` <a id="structFRHAPI__Items_1a5f8e054b5895906207b58657d53c0707"></a>

Gets the value of Items_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetItems`](#structFRHAPI__Items_1a9e33b2f2051e5af7486ba545fd9f803d)`(TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & OutValue) const` <a id="structFRHAPI__Items_1a9e33b2f2051e5af7486ba545fd9f803d"></a>

Fills OutValue with the value of Items_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > * `[`GetItemsOrNull`](#structFRHAPI__Items_1a1d802ab1502ceced50fe7b715b1456af)`()` <a id="structFRHAPI__Items_1a1d802ab1502ceced50fe7b715b1456af"></a>

Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > * `[`GetItemsOrNull`](#structFRHAPI__Items_1a83589735585ae1159530fb2607b73f56)`() const` <a id="structFRHAPI__Items_1a83589735585ae1159530fb2607b73f56"></a>

Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetItems`](#structFRHAPI__Items_1afcef782fff45e4f3a9a41276e4545cac)`(const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & NewValue)` <a id="structFRHAPI__Items_1afcef782fff45e4f3a9a41276e4545cac"></a>

Sets the value of Items_Optional and also sets Items_IsSet to true.

#### `public inline FORCEINLINE void `[`SetItems`](#structFRHAPI__Items_1a7e809aaeb564acec6a5632da65a36d7e)`(TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > && NewValue)` <a id="structFRHAPI__Items_1a7e809aaeb564acec6a5632da65a36d7e"></a>

Sets the value of Items_Optional and also sets Items_IsSet to true using move semantics.

#### `public inline void `[`ClearItems`](#structFRHAPI__Items_1a2f14e5ee5d4d02ff849753ef84a9a713)`()` <a id="structFRHAPI__Items_1a2f14e5ee5d4d02ff849753ef84a9a713"></a>

Clears the value of Items_Optional and sets Items_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Items_1a0a33c0bb7905c5c0093de7517eed250d)`()` <a id="structFRHAPI__Items_1a0a33c0bb7905c5c0093de7517eed250d"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Items_1a59e9d9aca970971f5d48df1eec80fc14)`() const` <a id="structFRHAPI__Items_1a59e9d9aca970971f5d48df1eec80fc14"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Items_1a123e51e6cc05c70ea9b15379810a10e2)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__Items_1a123e51e6cc05c70ea9b15379810a10e2"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__Items_1a773aa70c855b809fa56700f181b81baa)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__Items_1a773aa70c855b809fa56700f181b81baa"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Items_1a37668be0ab41091d1cd107a6c21e3c9b)`()` <a id="structFRHAPI__Items_1a37668be0ab41091d1cd107a6c21e3c9b"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Items_1a97c4bffad8b50d4f289b649d85523c93)`() const` <a id="structFRHAPI__Items_1a97c4bffad8b50d4f289b649d85523c93"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Items_1aea3b5f1261a6d81e6ca6c56d9e636088)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__Items_1aea3b5f1261a6d81e6ca6c56d9e636088"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Items_1a59fd3e9d15991e9f7154fca9f9a84cdb)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__Items_1a59fd3e9d15991e9f7154fca9f9a84cdb"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__Items_1a92bb319e2322768d4493dd851721c1ac)`()` <a id="structFRHAPI__Items_1a92bb319e2322768d4493dd851721c1ac"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__Items_1a756634d70de4fb6bae437c14e5b7dfea)`()` <a id="structFRHAPI__Items_1a756634d70de4fb6bae437c14e5b7dfea"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__Items_1a8a881541ce6ce60c48437fd554253af2)`() const` <a id="structFRHAPI__Items_1a8a881541ce6ce60c48437fd554253af2"></a>

Checks whether CacheInfo_Optional is set to null.

