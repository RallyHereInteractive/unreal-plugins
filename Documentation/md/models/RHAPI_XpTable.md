# RHAPI_XpTable <a id="group__RHAPI__XpTable"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_XpTable`](#structFRHAPI__XpTable) | A collection of XP Levels from 1 to N. Each level has a minimum XP value.

## struct `FRHAPI_XpTable` <a id="structFRHAPI__XpTable"></a>

```
struct FRHAPI_XpTable
  : public FRHAPI_Model
```

A collection of XP Levels from 1 to N. Each level has a minimum XP value.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, int32 > `[`XpEntries_Optional`](#structFRHAPI__XpTable_1a6fce5a0a8d2d65c0049771d51bf6b2cf) | 
`public bool `[`XpEntries_IsSet`](#structFRHAPI__XpTable_1a0d1d82acc42c1ad029117cd1ea15cb12) | true if XpEntries_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__XpTable_1a0785200adbf808bdd25fab3cb5f01b0b) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__XpTable_1a90dc3ba87a1ecdef6402df456d2389f8) | true if CacheInfo_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__XpTable_1a24ea4b28edc4316d7b54c1c1cfccb6e8)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__XpTable_1aa42ec7439d7080f1fb091eb32ea5163f)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, int32 > & `[`GetXpEntries`](#structFRHAPI__XpTable_1af3fd80f0b0ca8769eb57089f7a672448)`()` | Gets the value of XpEntries_Optional, regardless of it having been set.
`public inline const TMap< FString, int32 > & `[`GetXpEntries`](#structFRHAPI__XpTable_1a28bd1c9fbc988a8fb285418a5ff0f332)`() const` | Gets the value of XpEntries_Optional, regardless of it having been set.
`public inline const TMap< FString, int32 > & `[`GetXpEntries`](#structFRHAPI__XpTable_1a19d0b92c5075718cb70ecaf15994a270)`(const TMap< FString, int32 > & DefaultValue) const` | Gets the value of XpEntries_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetXpEntries`](#structFRHAPI__XpTable_1a9f905a87e09cf2d84b6ae98e0f7ec030)`(TMap< FString, int32 > & OutValue) const` | Fills OutValue with the value of XpEntries_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, int32 > * `[`GetXpEntriesOrNull`](#structFRHAPI__XpTable_1af21728e76da9955953e58d1b95161481)`()` | Returns a pointer to XpEntries_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, int32 > * `[`GetXpEntriesOrNull`](#structFRHAPI__XpTable_1adfcc075e78c9ea6083a73fcc4aed0159)`() const` | Returns a pointer to XpEntries_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetXpEntries`](#structFRHAPI__XpTable_1ad547837eb0f02ec3a818fde029e26c67)`(TMap< FString, int32 > NewValue)` | Sets the value of XpEntries_Optional and also sets XpEntries_IsSet to true.
`public inline void `[`ClearXpEntries`](#structFRHAPI__XpTable_1adfef2f411c225c0d6bfd1272ac300bb7)`()` | Clears the value of XpEntries_Optional and sets XpEntries_IsSet to false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTable_1a355e9df63257ca1d858dc66204012a91)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTable_1a56c3f70e35c5617fa2de8e753152b5de)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTable_1a12fbb3744d1457d74515689bfb75f48d)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__XpTable_1ac2851870da4c14480a5f4db8b5c5c69a)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTable_1a4aedfc9c07616d5dc36dfea2fd89ff86)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTable_1aa86736fb49ce03fa012e98b5e1036efa)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__XpTable_1a34c25571f9fe95c96a3540fb488274a6)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__XpTable_1aa5ecb7e76cf1ff2ad80407b03a12f840)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### Members

#### `public TMap< FString, int32 > `[`XpEntries_Optional`](#structFRHAPI__XpTable_1a6fce5a0a8d2d65c0049771d51bf6b2cf) <a id="structFRHAPI__XpTable_1a6fce5a0a8d2d65c0049771d51bf6b2cf"></a>

<br>
#### `public bool `[`XpEntries_IsSet`](#structFRHAPI__XpTable_1a0d1d82acc42c1ad029117cd1ea15cb12) <a id="structFRHAPI__XpTable_1a0d1d82acc42c1ad029117cd1ea15cb12"></a>

true if XpEntries_Optional has been set to a value

<br>
#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__XpTable_1a0785200adbf808bdd25fab3cb5f01b0b) <a id="structFRHAPI__XpTable_1a0785200adbf808bdd25fab3cb5f01b0b"></a>

<br>
#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__XpTable_1a90dc3ba87a1ecdef6402df456d2389f8) <a id="structFRHAPI__XpTable_1a90dc3ba87a1ecdef6402df456d2389f8"></a>

true if CacheInfo_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__XpTable_1a24ea4b28edc4316d7b54c1c1cfccb6e8)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__XpTable_1a24ea4b28edc4316d7b54c1c1cfccb6e8"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__XpTable_1aa42ec7439d7080f1fb091eb32ea5163f)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__XpTable_1aa42ec7439d7080f1fb091eb32ea5163f"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TMap< FString, int32 > & `[`GetXpEntries`](#structFRHAPI__XpTable_1af3fd80f0b0ca8769eb57089f7a672448)`()` <a id="structFRHAPI__XpTable_1af3fd80f0b0ca8769eb57089f7a672448"></a>

Gets the value of XpEntries_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, int32 > & `[`GetXpEntries`](#structFRHAPI__XpTable_1a28bd1c9fbc988a8fb285418a5ff0f332)`() const` <a id="structFRHAPI__XpTable_1a28bd1c9fbc988a8fb285418a5ff0f332"></a>

Gets the value of XpEntries_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, int32 > & `[`GetXpEntries`](#structFRHAPI__XpTable_1a19d0b92c5075718cb70ecaf15994a270)`(const TMap< FString, int32 > & DefaultValue) const` <a id="structFRHAPI__XpTable_1a19d0b92c5075718cb70ecaf15994a270"></a>

Gets the value of XpEntries_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetXpEntries`](#structFRHAPI__XpTable_1a9f905a87e09cf2d84b6ae98e0f7ec030)`(TMap< FString, int32 > & OutValue) const` <a id="structFRHAPI__XpTable_1a9f905a87e09cf2d84b6ae98e0f7ec030"></a>

Fills OutValue with the value of XpEntries_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, int32 > * `[`GetXpEntriesOrNull`](#structFRHAPI__XpTable_1af21728e76da9955953e58d1b95161481)`()` <a id="structFRHAPI__XpTable_1af21728e76da9955953e58d1b95161481"></a>

Returns a pointer to XpEntries_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, int32 > * `[`GetXpEntriesOrNull`](#structFRHAPI__XpTable_1adfcc075e78c9ea6083a73fcc4aed0159)`() const` <a id="structFRHAPI__XpTable_1adfcc075e78c9ea6083a73fcc4aed0159"></a>

Returns a pointer to XpEntries_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetXpEntries`](#structFRHAPI__XpTable_1ad547837eb0f02ec3a818fde029e26c67)`(TMap< FString, int32 > NewValue)` <a id="structFRHAPI__XpTable_1ad547837eb0f02ec3a818fde029e26c67"></a>

Sets the value of XpEntries_Optional and also sets XpEntries_IsSet to true.

<br>
#### `public inline void `[`ClearXpEntries`](#structFRHAPI__XpTable_1adfef2f411c225c0d6bfd1272ac300bb7)`()` <a id="structFRHAPI__XpTable_1adfef2f411c225c0d6bfd1272ac300bb7"></a>

Clears the value of XpEntries_Optional and sets XpEntries_IsSet to false.

<br>
#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTable_1a355e9df63257ca1d858dc66204012a91)`()` <a id="structFRHAPI__XpTable_1a355e9df63257ca1d858dc66204012a91"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTable_1a56c3f70e35c5617fa2de8e753152b5de)`() const` <a id="structFRHAPI__XpTable_1a56c3f70e35c5617fa2de8e753152b5de"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__XpTable_1a12fbb3744d1457d74515689bfb75f48d)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__XpTable_1a12fbb3744d1457d74515689bfb75f48d"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__XpTable_1ac2851870da4c14480a5f4db8b5c5c69a)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__XpTable_1ac2851870da4c14480a5f4db8b5c5c69a"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTable_1a4aedfc9c07616d5dc36dfea2fd89ff86)`()` <a id="structFRHAPI__XpTable_1a4aedfc9c07616d5dc36dfea2fd89ff86"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__XpTable_1aa86736fb49ce03fa012e98b5e1036efa)`() const` <a id="structFRHAPI__XpTable_1aa86736fb49ce03fa012e98b5e1036efa"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCacheInfo`](#structFRHAPI__XpTable_1a34c25571f9fe95c96a3540fb488274a6)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` <a id="structFRHAPI__XpTable_1a34c25571f9fe95c96a3540fb488274a6"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

<br>
#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__XpTable_1aa5ecb7e76cf1ff2ad80407b03a12f840)`()` <a id="structFRHAPI__XpTable_1aa5ecb7e76cf1ff2ad80407b03a12f840"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

<br>
