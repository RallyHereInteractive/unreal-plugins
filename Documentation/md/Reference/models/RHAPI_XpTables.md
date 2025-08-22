---
title: RHAPI_XpTables
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_XpTables`](#structFRHAPI__XpTables) | A collection of XP Tables. Each table is a collection of XP Levels from 1 to N. Each level has a minimum XP value.

## struct `FRHAPI_XpTables` <a id="structFRHAPI__XpTables"></a>

```
struct FRHAPI_XpTables
  : public FRHAPI_Model
```

A collection of XP Tables. Each table is a collection of XP Levels from 1 to N. Each level has a minimum XP value.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > `[`XpTables_Optional`](#structFRHAPI__XpTables_1a90ef438f2446120231d00b57631d3204) | 
`public bool `[`XpTables_IsSet`](#structFRHAPI__XpTables_1aa061df042a1720cd499d4a68be0e5957) | true if XpTables_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__XpTables_1ad6486b25138e6eaa3a16b8c113f469ac) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__XpTables_1a4465262732b3575e599b9fdaedfa630d) | true if CacheInfo_Optional has been set to a value
`public bool `[`CacheInfo_IsNull`](#structFRHAPI__XpTables_1a60b32c534ec4bcb8870d5a30600a6ca5) | true if CacheInfo_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__XpTables_1af0a2faf4dc82e5c5d9104ec4a2131ed7)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__XpTables_1a0eb05bf62accec091144b0236028ba52)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & `[`GetXpTables`](#structFRHAPI__XpTables_1a460da6ad1e8aca6d2ff3ba5573f503d2)`()` | Gets the value of XpTables_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & `[`GetXpTables`](#structFRHAPI__XpTables_1a605a036aa8481bf77c2ae66466002a4f)`() const` | Gets the value of XpTables_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & `[`GetXpTables`](#structFRHAPI__XpTables_1aff0d4f14b5f756bc1656ab41e3ec75b0)`(const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & DefaultValue) const` | Gets the value of XpTables_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetXpTables`](#structFRHAPI__XpTables_1a87263010ef685a6ab4fd055b9124a3a3)`(TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & OutValue) const` | Fills OutValue with the value of XpTables_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > * `[`GetXpTablesOrNull`](#structFRHAPI__XpTables_1a6b5e9f6616267e87a1616835bc3c627e)`()` | Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > * `[`GetXpTablesOrNull`](#structFRHAPI__XpTables_1a6dc2319051d35c8f39f077b9ea7f0fa4)`() const` | Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetXpTables`](#structFRHAPI__XpTables_1afdadcecc7a43e21a53a4ee6ad4e38cfd)`(const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & NewValue)` | Sets the value of XpTables_Optional and also sets XpTables_IsSet to true.
`public inline FORCEINLINE void `[`SetXpTables`](#structFRHAPI__XpTables_1ae9134902ac0ea4de1267f9c247b72eab)`(TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > && NewValue)` | Sets the value of XpTables_Optional and also sets XpTables_IsSet to true using move semantics.
`public inline void `[`ClearXpTables`](#structFRHAPI__XpTables_1a5e36b4e4ff74998ec3a45b32ad162ae8)`()` | Clears the value of XpTables_Optional and sets XpTables_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTables_1a751b25b400eb82bc777bd4881153d745)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTables_1ac948e76216dfaca256c155d751ba0916)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTables_1aa7310e2a1a12f3156e71ff73491c7e46)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__XpTables_1abbc5a0d3ced716426c0a3b52a4992e5f)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTables_1aa6edb0afc787a05219446e63f67cbbd2)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTables_1a6411913b9154160145c290f8f306f246)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__XpTables_1a08950b0499d774d155e4b077c3b97967)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__XpTables_1a98eaafe0a2eb72491d5d8914151acc86)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__XpTables_1a95f676a52f3ffb25429170bd6b5977c1)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__XpTables_1a281f68bcff4ba58e1f276adbb50b2de5)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__XpTables_1ae706643c59851434981e7f198785fb97)`() const` | Checks whether CacheInfo_Optional is set to null.

### Members

#### `public TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > `[`XpTables_Optional`](#structFRHAPI__XpTables_1a90ef438f2446120231d00b57631d3204) <a id="structFRHAPI__XpTables_1a90ef438f2446120231d00b57631d3204"></a>

#### `public bool `[`XpTables_IsSet`](#structFRHAPI__XpTables_1aa061df042a1720cd499d4a68be0e5957) <a id="structFRHAPI__XpTables_1aa061df042a1720cd499d4a68be0e5957"></a>

true if XpTables_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__XpTables_1ad6486b25138e6eaa3a16b8c113f469ac) <a id="structFRHAPI__XpTables_1ad6486b25138e6eaa3a16b8c113f469ac"></a>

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__XpTables_1a4465262732b3575e599b9fdaedfa630d) <a id="structFRHAPI__XpTables_1a4465262732b3575e599b9fdaedfa630d"></a>

true if CacheInfo_Optional has been set to a value

#### `public bool `[`CacheInfo_IsNull`](#structFRHAPI__XpTables_1a60b32c534ec4bcb8870d5a30600a6ca5) <a id="structFRHAPI__XpTables_1a60b32c534ec4bcb8870d5a30600a6ca5"></a>

true if CacheInfo_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__XpTables_1af0a2faf4dc82e5c5d9104ec4a2131ed7)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__XpTables_1af0a2faf4dc82e5c5d9104ec4a2131ed7"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__XpTables_1a0eb05bf62accec091144b0236028ba52)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__XpTables_1a0eb05bf62accec091144b0236028ba52"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & `[`GetXpTables`](#structFRHAPI__XpTables_1a460da6ad1e8aca6d2ff3ba5573f503d2)`()` <a id="structFRHAPI__XpTables_1a460da6ad1e8aca6d2ff3ba5573f503d2"></a>

Gets the value of XpTables_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & `[`GetXpTables`](#structFRHAPI__XpTables_1a605a036aa8481bf77c2ae66466002a4f)`() const` <a id="structFRHAPI__XpTables_1a605a036aa8481bf77c2ae66466002a4f"></a>

Gets the value of XpTables_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & `[`GetXpTables`](#structFRHAPI__XpTables_1aff0d4f14b5f756bc1656ab41e3ec75b0)`(const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & DefaultValue) const` <a id="structFRHAPI__XpTables_1aff0d4f14b5f756bc1656ab41e3ec75b0"></a>

Gets the value of XpTables_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetXpTables`](#structFRHAPI__XpTables_1a87263010ef685a6ab4fd055b9124a3a3)`(TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & OutValue) const` <a id="structFRHAPI__XpTables_1a87263010ef685a6ab4fd055b9124a3a3"></a>

Fills OutValue with the value of XpTables_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > * `[`GetXpTablesOrNull`](#structFRHAPI__XpTables_1a6b5e9f6616267e87a1616835bc3c627e)`()` <a id="structFRHAPI__XpTables_1a6b5e9f6616267e87a1616835bc3c627e"></a>

Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > * `[`GetXpTablesOrNull`](#structFRHAPI__XpTables_1a6dc2319051d35c8f39f077b9ea7f0fa4)`() const` <a id="structFRHAPI__XpTables_1a6dc2319051d35c8f39f077b9ea7f0fa4"></a>

Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetXpTables`](#structFRHAPI__XpTables_1afdadcecc7a43e21a53a4ee6ad4e38cfd)`(const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & NewValue)` <a id="structFRHAPI__XpTables_1afdadcecc7a43e21a53a4ee6ad4e38cfd"></a>

Sets the value of XpTables_Optional and also sets XpTables_IsSet to true.

#### `public inline FORCEINLINE void `[`SetXpTables`](#structFRHAPI__XpTables_1ae9134902ac0ea4de1267f9c247b72eab)`(TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > && NewValue)` <a id="structFRHAPI__XpTables_1ae9134902ac0ea4de1267f9c247b72eab"></a>

Sets the value of XpTables_Optional and also sets XpTables_IsSet to true using move semantics.

#### `public inline void `[`ClearXpTables`](#structFRHAPI__XpTables_1a5e36b4e4ff74998ec3a45b32ad162ae8)`()` <a id="structFRHAPI__XpTables_1a5e36b4e4ff74998ec3a45b32ad162ae8"></a>

Clears the value of XpTables_Optional and sets XpTables_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTables_1a751b25b400eb82bc777bd4881153d745)`()` <a id="structFRHAPI__XpTables_1a751b25b400eb82bc777bd4881153d745"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTables_1ac948e76216dfaca256c155d751ba0916)`() const` <a id="structFRHAPI__XpTables_1ac948e76216dfaca256c155d751ba0916"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTables_1aa7310e2a1a12f3156e71ff73491c7e46)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__XpTables_1aa7310e2a1a12f3156e71ff73491c7e46"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__XpTables_1abbc5a0d3ced716426c0a3b52a4992e5f)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__XpTables_1abbc5a0d3ced716426c0a3b52a4992e5f"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTables_1aa6edb0afc787a05219446e63f67cbbd2)`()` <a id="structFRHAPI__XpTables_1aa6edb0afc787a05219446e63f67cbbd2"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTables_1a6411913b9154160145c290f8f306f246)`() const` <a id="structFRHAPI__XpTables_1a6411913b9154160145c290f8f306f246"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__XpTables_1a08950b0499d774d155e4b077c3b97967)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__XpTables_1a08950b0499d774d155e4b077c3b97967"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__XpTables_1a98eaafe0a2eb72491d5d8914151acc86)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__XpTables_1a98eaafe0a2eb72491d5d8914151acc86"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__XpTables_1a95f676a52f3ffb25429170bd6b5977c1)`()` <a id="structFRHAPI__XpTables_1a95f676a52f3ffb25429170bd6b5977c1"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__XpTables_1a281f68bcff4ba58e1f276adbb50b2de5)`()` <a id="structFRHAPI__XpTables_1a281f68bcff4ba58e1f276adbb50b2de5"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__XpTables_1ae706643c59851434981e7f198785fb97)`() const` <a id="structFRHAPI__XpTables_1ae706643c59851434981e7f198785fb97"></a>

Checks whether CacheInfo_Optional is set to null.

