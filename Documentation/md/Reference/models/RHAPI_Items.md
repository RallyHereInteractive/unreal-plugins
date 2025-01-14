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
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Items_1a1217986ceec7a05241e7e957cb9828fa) | Item's cache information.
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__Items_1aa69362208158a2532fe056d3826818a2) | true if CacheInfo_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__Items_1ae83e7d76c864b082bd3c2903d7105b17)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Items_1a7ad6e79b32c1edc8be31baf57989585d)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & `[`GetItems`](#structFRHAPI__Items_1a19a89fc1d767e1f5ebb89e21ec47a46b)`()` | Gets the value of Items_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & `[`GetItems`](#structFRHAPI__Items_1a781bb1a6a769ed667e3a72966ee95150)`() const` | Gets the value of Items_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & `[`GetItems`](#structFRHAPI__Items_1a286af060ee42fd73a05f9535e2a7b171)`(const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & DefaultValue) const` | Gets the value of Items_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetItems`](#structFRHAPI__Items_1af64a10709091193e9ddf7f8cae227334)`(TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & OutValue) const` | Fills OutValue with the value of Items_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > * `[`GetItemsOrNull`](#structFRHAPI__Items_1aa32bfed9fca2699c6a0af387c0911310)`()` | Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > * `[`GetItemsOrNull`](#structFRHAPI__Items_1aab15198f705013d97c20c106a6e31afd)`() const` | Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetItems`](#structFRHAPI__Items_1a47eafcaaf4df9d3232ee0435885bdac9)`(const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & NewValue)` | Sets the value of Items_Optional and also sets Items_IsSet to true.
`public inline void `[`SetItems`](#structFRHAPI__Items_1ab46ba0d20c0b3a5858b5f355162c65c8)`(TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > && NewValue)` | Sets the value of Items_Optional and also sets Items_IsSet to true using move semantics.
`public inline void `[`ClearItems`](#structFRHAPI__Items_1a2f14e5ee5d4d02ff849753ef84a9a713)`()` | Clears the value of Items_Optional and sets Items_IsSet to false.
`public inline bool `[`IsItemsSet`](#structFRHAPI__Items_1a9e8b50de2df7d46aeda267feec475ced)`() const` | Checks whether Items_Optional has been set.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Items_1a2e122544a38de85060a17b08ee0b70d1)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Items_1a385a2be3e11f7a55b620a11612973d04)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Items_1aca745deba8f964e8fb87f3d8a2cf25f3)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__Items_1a88edb36b4ed0b822839435f34dc71c2b)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Items_1af2e2f50dfa94d08381122e3a751af945)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Items_1a1486b3208bf419ce93ec0ef733542298)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__Items_1aadfa9e40f2503e083779241e131ba28d)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`SetCacheInfo`](#structFRHAPI__Items_1af646e5c2a1dfac658afe04beb5af0623)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__Items_1a92bb319e2322768d4493dd851721c1ac)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline bool `[`IsCacheInfoSet`](#structFRHAPI__Items_1a51c4b682b194f94627f854d414c1ab71)`() const` | Checks whether CacheInfo_Optional has been set.

### Members

#### `public TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > `[`Items_Optional`](#structFRHAPI__Items_1acb634134dc074f992328d8d87d1f9d62) <a id="structFRHAPI__Items_1acb634134dc074f992328d8d87d1f9d62"></a>

A collection of Items by Item ID.

#### `public bool `[`Items_IsSet`](#structFRHAPI__Items_1ab618761f9969f6d5952ba37001edac5a) <a id="structFRHAPI__Items_1ab618761f9969f6d5952ba37001edac5a"></a>

true if Items_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Items_1a1217986ceec7a05241e7e957cb9828fa) <a id="structFRHAPI__Items_1a1217986ceec7a05241e7e957cb9828fa"></a>

Item's cache information.

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__Items_1aa69362208158a2532fe056d3826818a2) <a id="structFRHAPI__Items_1aa69362208158a2532fe056d3826818a2"></a>

true if CacheInfo_Optional has been set to a value

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

#### `public inline TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & `[`GetItems`](#structFRHAPI__Items_1a19a89fc1d767e1f5ebb89e21ec47a46b)`()` <a id="structFRHAPI__Items_1a19a89fc1d767e1f5ebb89e21ec47a46b"></a>

Gets the value of Items_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & `[`GetItems`](#structFRHAPI__Items_1a781bb1a6a769ed667e3a72966ee95150)`() const` <a id="structFRHAPI__Items_1a781bb1a6a769ed667e3a72966ee95150"></a>

Gets the value of Items_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & `[`GetItems`](#structFRHAPI__Items_1a286af060ee42fd73a05f9535e2a7b171)`(const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & DefaultValue) const` <a id="structFRHAPI__Items_1a286af060ee42fd73a05f9535e2a7b171"></a>

Gets the value of Items_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetItems`](#structFRHAPI__Items_1af64a10709091193e9ddf7f8cae227334)`(TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & OutValue) const` <a id="structFRHAPI__Items_1af64a10709091193e9ddf7f8cae227334"></a>

Fills OutValue with the value of Items_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > * `[`GetItemsOrNull`](#structFRHAPI__Items_1aa32bfed9fca2699c6a0af387c0911310)`()` <a id="structFRHAPI__Items_1aa32bfed9fca2699c6a0af387c0911310"></a>

Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > * `[`GetItemsOrNull`](#structFRHAPI__Items_1aab15198f705013d97c20c106a6e31afd)`() const` <a id="structFRHAPI__Items_1aab15198f705013d97c20c106a6e31afd"></a>

Returns a pointer to Items_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetItems`](#structFRHAPI__Items_1a47eafcaaf4df9d3232ee0435885bdac9)`(const TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > & NewValue)` <a id="structFRHAPI__Items_1a47eafcaaf4df9d3232ee0435885bdac9"></a>

Sets the value of Items_Optional and also sets Items_IsSet to true.

#### `public inline void `[`SetItems`](#structFRHAPI__Items_1ab46ba0d20c0b3a5858b5f355162c65c8)`(TMap< FString, `[`FRHAPI_Item`](RHAPI_Item.md#structFRHAPI__Item)` > && NewValue)` <a id="structFRHAPI__Items_1ab46ba0d20c0b3a5858b5f355162c65c8"></a>

Sets the value of Items_Optional and also sets Items_IsSet to true using move semantics.

#### `public inline void `[`ClearItems`](#structFRHAPI__Items_1a2f14e5ee5d4d02ff849753ef84a9a713)`()` <a id="structFRHAPI__Items_1a2f14e5ee5d4d02ff849753ef84a9a713"></a>

Clears the value of Items_Optional and sets Items_IsSet to false.

#### `public inline bool `[`IsItemsSet`](#structFRHAPI__Items_1a9e8b50de2df7d46aeda267feec475ced)`() const` <a id="structFRHAPI__Items_1a9e8b50de2df7d46aeda267feec475ced"></a>

Checks whether Items_Optional has been set.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Items_1a2e122544a38de85060a17b08ee0b70d1)`()` <a id="structFRHAPI__Items_1a2e122544a38de85060a17b08ee0b70d1"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Items_1a385a2be3e11f7a55b620a11612973d04)`() const` <a id="structFRHAPI__Items_1a385a2be3e11f7a55b620a11612973d04"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Items_1aca745deba8f964e8fb87f3d8a2cf25f3)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__Items_1aca745deba8f964e8fb87f3d8a2cf25f3"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__Items_1a88edb36b4ed0b822839435f34dc71c2b)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__Items_1a88edb36b4ed0b822839435f34dc71c2b"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Items_1af2e2f50dfa94d08381122e3a751af945)`()` <a id="structFRHAPI__Items_1af2e2f50dfa94d08381122e3a751af945"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Items_1a1486b3208bf419ce93ec0ef733542298)`() const` <a id="structFRHAPI__Items_1a1486b3208bf419ce93ec0ef733542298"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__Items_1aadfa9e40f2503e083779241e131ba28d)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__Items_1aadfa9e40f2503e083779241e131ba28d"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__Items_1af646e5c2a1dfac658afe04beb5af0623)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__Items_1af646e5c2a1dfac658afe04beb5af0623"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__Items_1a92bb319e2322768d4493dd851721c1ac)`()` <a id="structFRHAPI__Items_1a92bb319e2322768d4493dd851721c1ac"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline bool `[`IsCacheInfoSet`](#structFRHAPI__Items_1a51c4b682b194f94627f854d414c1ab71)`() const` <a id="structFRHAPI__Items_1a51c4b682b194f94627f854d414c1ab71"></a>

Checks whether CacheInfo_Optional has been set.

