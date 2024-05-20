# RHAPI_XpTables <a id="group__RHAPI__XpTables"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > `[`XpTables_Optional`](#structFRHAPI__XpTables_1a90ef438f2446120231d00b57631d3204) | 
`public bool `[`XpTables_IsSet`](#structFRHAPI__XpTables_1aa061df042a1720cd499d4a68be0e5957) | true if XpTables_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__XpTables_1ad6486b25138e6eaa3a16b8c113f469ac) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__XpTables_1a4465262732b3575e599b9fdaedfa630d) | true if CacheInfo_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__XpTables_1ac8cfeaa5829c51c141e56ad7fa1592f1)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__XpTables_1a11516e190d479012d476c41546ed05dd)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & `[`GetXpTables`](#structFRHAPI__XpTables_1a5cf0eea7fc61ec2914c9bc490b42ecfb)`()` | Gets the value of XpTables_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & `[`GetXpTables`](#structFRHAPI__XpTables_1a617edd4b819dc511e57ef424a35376a5)`() const` | Gets the value of XpTables_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & `[`GetXpTables`](#structFRHAPI__XpTables_1a43aeb1fb295361074de4b36ec896bb44)`(const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & DefaultValue) const` | Gets the value of XpTables_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetXpTables`](#structFRHAPI__XpTables_1ac8091df60e620a103d8b670dff5ec432)`(TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > & OutValue) const` | Fills OutValue with the value of XpTables_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > * `[`GetXpTablesOrNull`](#structFRHAPI__XpTables_1a18a28d46df966f62cd8ae8bcba4f37a3)`()` | Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > * `[`GetXpTablesOrNull`](#structFRHAPI__XpTables_1ac1becdee264194795d14db3260674367)`() const` | Returns a pointer to XpTables_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetXpTables`](#structFRHAPI__XpTables_1abb1d6f2e7b799fd9b3870d6ca90f8d7f)`(TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > NewValue)` | Sets the value of XpTables_Optional and also sets XpTables_IsSet to true.
`public inline void `[`ClearXpTables`](#structFRHAPI__XpTables_1a5e36b4e4ff74998ec3a45b32ad162ae8)`()` | Clears the value of XpTables_Optional and sets XpTables_IsSet to false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTables_1ad08c1f6908fdfef7f234db7e03233494)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTables_1ad45af97da545060b85f1a28c598a370a)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTables_1a1f789b1735456afe2f8f0a5782123edd)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__XpTables_1a8fc8d4ba53a4047c2587034cd2600128)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTables_1ab13a95651a4b27bde71716fc85e572be)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTables_1ae9f9361501b6337170ac868b853539df)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__XpTables_1a3483a3c77324a4d50bee36cd5775be94)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__XpTables_1a95f676a52f3ffb25429170bd6b5977c1)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### Members

#### `public TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > `[`XpTables_Optional`](#structFRHAPI__XpTables_1a90ef438f2446120231d00b57631d3204) <a id="structFRHAPI__XpTables_1a90ef438f2446120231d00b57631d3204"></a>

#### `public bool `[`XpTables_IsSet`](#structFRHAPI__XpTables_1aa061df042a1720cd499d4a68be0e5957) <a id="structFRHAPI__XpTables_1aa061df042a1720cd499d4a68be0e5957"></a>

true if XpTables_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__XpTables_1ad6486b25138e6eaa3a16b8c113f469ac) <a id="structFRHAPI__XpTables_1ad6486b25138e6eaa3a16b8c113f469ac"></a>

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__XpTables_1a4465262732b3575e599b9fdaedfa630d) <a id="structFRHAPI__XpTables_1a4465262732b3575e599b9fdaedfa630d"></a>

true if CacheInfo_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__XpTables_1ac8cfeaa5829c51c141e56ad7fa1592f1)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__XpTables_1ac8cfeaa5829c51c141e56ad7fa1592f1"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__XpTables_1a11516e190d479012d476c41546ed05dd)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__XpTables_1a11516e190d479012d476c41546ed05dd"></a>

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

#### `public inline void `[`SetXpTables`](#structFRHAPI__XpTables_1abb1d6f2e7b799fd9b3870d6ca90f8d7f)`(TMap< FString, `[`FRHAPI_XpTable`](RHAPI_XpTable.md#structFRHAPI__XpTable)` > NewValue)` <a id="structFRHAPI__XpTables_1abb1d6f2e7b799fd9b3870d6ca90f8d7f"></a>

Sets the value of XpTables_Optional and also sets XpTables_IsSet to true.

#### `public inline void `[`ClearXpTables`](#structFRHAPI__XpTables_1a5e36b4e4ff74998ec3a45b32ad162ae8)`()` <a id="structFRHAPI__XpTables_1a5e36b4e4ff74998ec3a45b32ad162ae8"></a>

Clears the value of XpTables_Optional and sets XpTables_IsSet to false.

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

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__XpTables_1a3483a3c77324a4d50bee36cd5775be94)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` <a id="structFRHAPI__XpTables_1a3483a3c77324a4d50bee36cd5775be94"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__XpTables_1a95f676a52f3ffb25429170bd6b5977c1)`()` <a id="structFRHAPI__XpTables_1a95f676a52f3ffb25429170bd6b5977c1"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

