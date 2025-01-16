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
`public inline TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & `[`GetXpTables`](#structFRHAPI__XpTables_1a290eb3b9bd7af03f09aef9045b78d509)`()` | Gets the value of XpTables_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & `[`GetXpTables`](#structFRHAPI__XpTables_1adc6f2a4cce8ad6cefe8835799bbf0a42)`() const` | Gets the value of XpTables_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & `[`GetXpTables`](#structFRHAPI__XpTables_1aeacefdfb5d05ec5f38707902415e8460)`(const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & DefaultValue) const` | Gets the value of XpTables_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetXpTables`](#structFRHAPI__XpTables_1ac8091df60e620a103d8b670dff5ec432)`(TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & OutValue) const` | Fills OutValue with the value of XpTables_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > * `[`GetXpTablesOrNull`](#structFRHAPI__XpTables_1a08e214304189aa4f24e4043785779e59)`()` | Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > * `[`GetXpTablesOrNull`](#structFRHAPI__XpTables_1a8bc34093af5ba162f4bd4b787c99de10)`() const` | Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetXpTables`](#structFRHAPI__XpTables_1affc3cada3401e4aa7dff7a012e0c9160)`(const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & NewValue)` | Sets the value of XpTables_Optional and also sets XpTables_IsSet to true.
`public inline void `[`SetXpTables`](#structFRHAPI__XpTables_1a176f5942016838bce74e785a275ab6e0)`(TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > && NewValue)` | Sets the value of XpTables_Optional and also sets XpTables_IsSet to true using move semantics.
`public inline void `[`ClearXpTables`](#structFRHAPI__XpTables_1a5e36b4e4ff74998ec3a45b32ad162ae8)`()` | Clears the value of XpTables_Optional and sets XpTables_IsSet to false.
`public inline bool `[`IsXpTablesSet`](#structFRHAPI__XpTables_1a757b50d98fd3c2132d2ea9fe14fc6722)`() const` | Checks whether XpTables_Optional has been set.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTables_1a8cc8800d9176330e095ca12a404fe01e)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTables_1a1fcd45c3aac066c1ef522e8b9f25a669)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTables_1a4263f7b6ec2106c83c4129db31e1a798)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__XpTables_1a8fc8d4ba53a4047c2587034cd2600128)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTables_1a8c3e888d52534a9e0c5e72ce21781757)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTables_1ac4d7ce54da4988a07ee70a10c7dc7bbd)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__XpTables_1ac7cf018400ddcb2cc19655949c28ec8a)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`SetCacheInfo`](#structFRHAPI__XpTables_1ab3779022164a1e254b11cd7f06464faf)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__XpTables_1a95f676a52f3ffb25429170bd6b5977c1)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline bool `[`IsCacheInfoSet`](#structFRHAPI__XpTables_1ae200761dae8b5171c1fd71b25a27261e)`() const` | Checks whether CacheInfo_Optional has been set.
`public inline void `[`SetCacheInfoToNull`](#structFRHAPI__XpTables_1a382a268a40f55b0442831cca4a93fd00)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCacheInfoNull`](#structFRHAPI__XpTables_1af9419b4010a7f900bbd71c52396330aa)`() const` | Checks whether CacheInfo_Optional is set to null.

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

#### `public inline TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & `[`GetXpTables`](#structFRHAPI__XpTables_1a290eb3b9bd7af03f09aef9045b78d509)`()` <a id="structFRHAPI__XpTables_1a290eb3b9bd7af03f09aef9045b78d509"></a>

Gets the value of XpTables_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & `[`GetXpTables`](#structFRHAPI__XpTables_1adc6f2a4cce8ad6cefe8835799bbf0a42)`() const` <a id="structFRHAPI__XpTables_1adc6f2a4cce8ad6cefe8835799bbf0a42"></a>

Gets the value of XpTables_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & `[`GetXpTables`](#structFRHAPI__XpTables_1aeacefdfb5d05ec5f38707902415e8460)`(const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & DefaultValue) const` <a id="structFRHAPI__XpTables_1aeacefdfb5d05ec5f38707902415e8460"></a>

Gets the value of XpTables_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetXpTables`](#structFRHAPI__XpTables_1ac8091df60e620a103d8b670dff5ec432)`(TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & OutValue) const` <a id="structFRHAPI__XpTables_1ac8091df60e620a103d8b670dff5ec432"></a>

Fills OutValue with the value of XpTables_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > * `[`GetXpTablesOrNull`](#structFRHAPI__XpTables_1a08e214304189aa4f24e4043785779e59)`()` <a id="structFRHAPI__XpTables_1a08e214304189aa4f24e4043785779e59"></a>

Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > * `[`GetXpTablesOrNull`](#structFRHAPI__XpTables_1a8bc34093af5ba162f4bd4b787c99de10)`() const` <a id="structFRHAPI__XpTables_1a8bc34093af5ba162f4bd4b787c99de10"></a>

Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetXpTables`](#structFRHAPI__XpTables_1affc3cada3401e4aa7dff7a012e0c9160)`(const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & NewValue)` <a id="structFRHAPI__XpTables_1affc3cada3401e4aa7dff7a012e0c9160"></a>

Sets the value of XpTables_Optional and also sets XpTables_IsSet to true.

#### `public inline void `[`SetXpTables`](#structFRHAPI__XpTables_1a176f5942016838bce74e785a275ab6e0)`(TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > && NewValue)` <a id="structFRHAPI__XpTables_1a176f5942016838bce74e785a275ab6e0"></a>

Sets the value of XpTables_Optional and also sets XpTables_IsSet to true using move semantics.

#### `public inline void `[`ClearXpTables`](#structFRHAPI__XpTables_1a5e36b4e4ff74998ec3a45b32ad162ae8)`()` <a id="structFRHAPI__XpTables_1a5e36b4e4ff74998ec3a45b32ad162ae8"></a>

Clears the value of XpTables_Optional and sets XpTables_IsSet to false.

#### `public inline bool `[`IsXpTablesSet`](#structFRHAPI__XpTables_1a757b50d98fd3c2132d2ea9fe14fc6722)`() const` <a id="structFRHAPI__XpTables_1a757b50d98fd3c2132d2ea9fe14fc6722"></a>

Checks whether XpTables_Optional has been set.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTables_1a8cc8800d9176330e095ca12a404fe01e)`()` <a id="structFRHAPI__XpTables_1a8cc8800d9176330e095ca12a404fe01e"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTables_1a1fcd45c3aac066c1ef522e8b9f25a669)`() const` <a id="structFRHAPI__XpTables_1a1fcd45c3aac066c1ef522e8b9f25a669"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTables_1a4263f7b6ec2106c83c4129db31e1a798)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__XpTables_1a4263f7b6ec2106c83c4129db31e1a798"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__XpTables_1a8fc8d4ba53a4047c2587034cd2600128)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__XpTables_1a8fc8d4ba53a4047c2587034cd2600128"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTables_1a8c3e888d52534a9e0c5e72ce21781757)`()` <a id="structFRHAPI__XpTables_1a8c3e888d52534a9e0c5e72ce21781757"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTables_1ac4d7ce54da4988a07ee70a10c7dc7bbd)`() const` <a id="structFRHAPI__XpTables_1ac4d7ce54da4988a07ee70a10c7dc7bbd"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__XpTables_1ac7cf018400ddcb2cc19655949c28ec8a)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__XpTables_1ac7cf018400ddcb2cc19655949c28ec8a"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__XpTables_1ab3779022164a1e254b11cd7f06464faf)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__XpTables_1ab3779022164a1e254b11cd7f06464faf"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__XpTables_1a95f676a52f3ffb25429170bd6b5977c1)`()` <a id="structFRHAPI__XpTables_1a95f676a52f3ffb25429170bd6b5977c1"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline bool `[`IsCacheInfoSet`](#structFRHAPI__XpTables_1ae200761dae8b5171c1fd71b25a27261e)`() const` <a id="structFRHAPI__XpTables_1ae200761dae8b5171c1fd71b25a27261e"></a>

Checks whether CacheInfo_Optional has been set.

#### `public inline void `[`SetCacheInfoToNull`](#structFRHAPI__XpTables_1a382a268a40f55b0442831cca4a93fd00)`()` <a id="structFRHAPI__XpTables_1a382a268a40f55b0442831cca4a93fd00"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCacheInfoNull`](#structFRHAPI__XpTables_1af9419b4010a7f900bbd71c52396330aa)`() const` <a id="structFRHAPI__XpTables_1af9419b4010a7f900bbd71c52396330aa"></a>

Checks whether CacheInfo_Optional is set to null.

