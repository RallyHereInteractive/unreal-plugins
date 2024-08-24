# group `RHAPI_XpTables` <a id="group__RHAPI__XpTables"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_XpTables`](#structFRHAPI__XpTables) | A collection of XP Tables. Each table is a collection of XP Levels from 1 to N. Each level has a minimum XP value.

---
title: FRHAPI_XpTables
---

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
`public virtual bool `[`FromJson`](#structFRHAPI__XpTables_1af0a2faf4dc82e5c5d9104ec4a2131ed7)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__XpTables_1a9f3141821dc4712f12892d9dbfffc06e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & `[`GetXpTables`](#structFRHAPI__XpTables_1a5cf0eea7fc61ec2914c9bc490b42ecfb)`()` | Gets the value of XpTables_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & `[`GetXpTables`](#structFRHAPI__XpTables_1a617edd4b819dc511e57ef424a35376a5)`() const` | Gets the value of XpTables_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & `[`GetXpTables`](#structFRHAPI__XpTables_1a43aeb1fb295361074de4b36ec896bb44)`(const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & DefaultValue) const` | Gets the value of XpTables_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetXpTables`](#structFRHAPI__XpTables_1ac8091df60e620a103d8b670dff5ec432)`(TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & OutValue) const` | Fills OutValue with the value of XpTables_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > * `[`GetXpTablesOrNull`](#structFRHAPI__XpTables_1a18a28d46df966f62cd8ae8bcba4f37a3)`()` | Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > * `[`GetXpTablesOrNull`](#structFRHAPI__XpTables_1ac1becdee264194795d14db3260674367)`() const` | Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetXpTables`](#structFRHAPI__XpTables_1affc3cada3401e4aa7dff7a012e0c9160)`(const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & NewValue)` | Sets the value of XpTables_Optional and also sets XpTables_IsSet to true.
`public inline void `[`SetXpTables`](#structFRHAPI__XpTables_1a176f5942016838bce74e785a275ab6e0)`(TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > && NewValue)` | Sets the value of XpTables_Optional and also sets XpTables_IsSet to true using move semantics.
`public inline void `[`ClearXpTables`](#structFRHAPI__XpTables_1a5e36b4e4ff74998ec3a45b32ad162ae8)`()` | Clears the value of XpTables_Optional and sets XpTables_IsSet to false.
`public inline bool `[`IsXpTablesSet`](#structFRHAPI__XpTables_1a757b50d98fd3c2132d2ea9fe14fc6722)`() const` | Checks whether XpTables_Optional has been set.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTables_1ad08c1f6908fdfef7f234db7e03233494)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTables_1ad45af97da545060b85f1a28c598a370a)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTables_1a1f789b1735456afe2f8f0a5782123edd)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__XpTables_1a8fc8d4ba53a4047c2587034cd2600128)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTables_1ab13a95651a4b27bde71716fc85e572be)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTables_1ae9f9361501b6337170ac868b853539df)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__XpTables_1ac7cf018400ddcb2cc19655949c28ec8a)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`SetCacheInfo`](#structFRHAPI__XpTables_1ab3779022164a1e254b11cd7f06464faf)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__XpTables_1a95f676a52f3ffb25429170bd6b5977c1)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline bool `[`IsCacheInfoSet`](#structFRHAPI__XpTables_1ae200761dae8b5171c1fd71b25a27261e)`() const` | Checks whether CacheInfo_Optional has been set.

### Members

#### `public TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > `[`XpTables_Optional`](#structFRHAPI__XpTables_1a90ef438f2446120231d00b57631d3204) <a id="structFRHAPI__XpTables_1a90ef438f2446120231d00b57631d3204"></a>

#### `public bool `[`XpTables_IsSet`](#structFRHAPI__XpTables_1aa061df042a1720cd499d4a68be0e5957) <a id="structFRHAPI__XpTables_1aa061df042a1720cd499d4a68be0e5957"></a>

true if XpTables_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__XpTables_1ad6486b25138e6eaa3a16b8c113f469ac) <a id="structFRHAPI__XpTables_1ad6486b25138e6eaa3a16b8c113f469ac"></a>

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__XpTables_1a4465262732b3575e599b9fdaedfa630d) <a id="structFRHAPI__XpTables_1a4465262732b3575e599b9fdaedfa630d"></a>

true if CacheInfo_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__XpTables_1af0a2faf4dc82e5c5d9104ec4a2131ed7)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__XpTables_1af0a2faf4dc82e5c5d9104ec4a2131ed7"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__XpTables_1a9f3141821dc4712f12892d9dbfffc06e)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__XpTables_1a9f3141821dc4712f12892d9dbfffc06e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & `[`GetXpTables`](#structFRHAPI__XpTables_1a5cf0eea7fc61ec2914c9bc490b42ecfb)`()` <a id="structFRHAPI__XpTables_1a5cf0eea7fc61ec2914c9bc490b42ecfb"></a>

Gets the value of XpTables_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & `[`GetXpTables`](#structFRHAPI__XpTables_1a617edd4b819dc511e57ef424a35376a5)`() const` <a id="structFRHAPI__XpTables_1a617edd4b819dc511e57ef424a35376a5"></a>

Gets the value of XpTables_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & `[`GetXpTables`](#structFRHAPI__XpTables_1a43aeb1fb295361074de4b36ec896bb44)`(const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & DefaultValue) const` <a id="structFRHAPI__XpTables_1a43aeb1fb295361074de4b36ec896bb44"></a>

Gets the value of XpTables_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetXpTables`](#structFRHAPI__XpTables_1ac8091df60e620a103d8b670dff5ec432)`(TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & OutValue) const` <a id="structFRHAPI__XpTables_1ac8091df60e620a103d8b670dff5ec432"></a>

Fills OutValue with the value of XpTables_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > * `[`GetXpTablesOrNull`](#structFRHAPI__XpTables_1a18a28d46df966f62cd8ae8bcba4f37a3)`()` <a id="structFRHAPI__XpTables_1a18a28d46df966f62cd8ae8bcba4f37a3"></a>

Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > * `[`GetXpTablesOrNull`](#structFRHAPI__XpTables_1ac1becdee264194795d14db3260674367)`() const` <a id="structFRHAPI__XpTables_1ac1becdee264194795d14db3260674367"></a>

Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetXpTables`](#structFRHAPI__XpTables_1affc3cada3401e4aa7dff7a012e0c9160)`(const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & NewValue)` <a id="structFRHAPI__XpTables_1affc3cada3401e4aa7dff7a012e0c9160"></a>

Sets the value of XpTables_Optional and also sets XpTables_IsSet to true.

#### `public inline void `[`SetXpTables`](#structFRHAPI__XpTables_1a176f5942016838bce74e785a275ab6e0)`(TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > && NewValue)` <a id="structFRHAPI__XpTables_1a176f5942016838bce74e785a275ab6e0"></a>

Sets the value of XpTables_Optional and also sets XpTables_IsSet to true using move semantics.

#### `public inline void `[`ClearXpTables`](#structFRHAPI__XpTables_1a5e36b4e4ff74998ec3a45b32ad162ae8)`()` <a id="structFRHAPI__XpTables_1a5e36b4e4ff74998ec3a45b32ad162ae8"></a>

Clears the value of XpTables_Optional and sets XpTables_IsSet to false.

#### `public inline bool `[`IsXpTablesSet`](#structFRHAPI__XpTables_1a757b50d98fd3c2132d2ea9fe14fc6722)`() const` <a id="structFRHAPI__XpTables_1a757b50d98fd3c2132d2ea9fe14fc6722"></a>

Checks whether XpTables_Optional has been set.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTables_1ad08c1f6908fdfef7f234db7e03233494)`()` <a id="structFRHAPI__XpTables_1ad08c1f6908fdfef7f234db7e03233494"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTables_1ad45af97da545060b85f1a28c598a370a)`() const` <a id="structFRHAPI__XpTables_1ad45af97da545060b85f1a28c598a370a"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTables_1a1f789b1735456afe2f8f0a5782123edd)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__XpTables_1a1f789b1735456afe2f8f0a5782123edd"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__XpTables_1a8fc8d4ba53a4047c2587034cd2600128)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__XpTables_1a8fc8d4ba53a4047c2587034cd2600128"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTables_1ab13a95651a4b27bde71716fc85e572be)`()` <a id="structFRHAPI__XpTables_1ab13a95651a4b27bde71716fc85e572be"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTables_1ae9f9361501b6337170ac868b853539df)`() const` <a id="structFRHAPI__XpTables_1ae9f9361501b6337170ac868b853539df"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__XpTables_1ac7cf018400ddcb2cc19655949c28ec8a)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__XpTables_1ac7cf018400ddcb2cc19655949c28ec8a"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__XpTables_1ab3779022164a1e254b11cd7f06464faf)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__XpTables_1ab3779022164a1e254b11cd7f06464faf"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__XpTables_1a95f676a52f3ffb25429170bd6b5977c1)`()` <a id="structFRHAPI__XpTables_1a95f676a52f3ffb25429170bd6b5977c1"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline bool `[`IsCacheInfoSet`](#structFRHAPI__XpTables_1ae200761dae8b5171c1fd71b25a27261e)`() const` <a id="structFRHAPI__XpTables_1ae200761dae8b5171c1fd71b25a27261e"></a>

Checks whether CacheInfo_Optional has been set.

