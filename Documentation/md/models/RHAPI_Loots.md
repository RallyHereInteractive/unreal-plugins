# RHAPI_Loots <a id="group__RHAPI__Loots"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Loots`](#structFRHAPI__Loots) | A collection of Loot by Loot ID.

## struct `FRHAPI_Loots` <a id="structFRHAPI__Loots"></a>

```
struct FRHAPI_Loots
  : public FRHAPI_Model
```

A collection of Loot by Loot ID.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > `[`Loot_Optional`](#structFRHAPI__Loots_1a26353909383cc1ff90f30f8065f7aef1) | 
`public bool `[`Loot_IsSet`](#structFRHAPI__Loots_1aa7ed2ed6741384575d2557cb342ec7a1) | true if Loot_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Loots_1a13d10491990bc6f649a265c4917177d3) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__Loots_1adec9f7b70b552038068b82807aa0792c) | true if CacheInfo_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__Loots_1aee129715b91d6efb2e4064e94f34ae39)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Loots_1a86c61ace288772f62adf44ee4a6a6be0)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Loots_1a2d7a05097d639b3baa677f086a781730)`()` | Gets the value of Loot_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Loots_1ad6055e6fd1b2a23404c575f315c9f80d)`() const` | Gets the value of Loot_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Loots_1a8535ba2aba30240d26ebb8e08d0ecfa5)`(const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & DefaultValue) const` | Gets the value of Loot_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLoot`](#structFRHAPI__Loots_1a50e60dc08952498a65312a97e9721136)`(TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & OutValue) const` | Fills OutValue with the value of Loot_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > * `[`GetLootOrNull`](#structFRHAPI__Loots_1a3fbfe44014466730ef3aa52043cf873a)`()` | Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > * `[`GetLootOrNull`](#structFRHAPI__Loots_1aafd08bcb28fd0274767c28032d0c5999)`() const` | Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLoot`](#structFRHAPI__Loots_1a6372b313bf3c96dab14b99743e474685)`(TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > NewValue)` | Sets the value of Loot_Optional and also sets Loot_IsSet to true.
`public inline void `[`ClearLoot`](#structFRHAPI__Loots_1a6e29a6b9f404f4f51dff7ce78ff39163)`()` | Clears the value of Loot_Optional and sets Loot_IsSet to false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loots_1a6421a8fed61c867332dfc4b71f6ff490)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loots_1aa4c65e962b481fcbba4251f2f5fa0316)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loots_1a27c5ad09e08c86cc421b1e3762ac80e2)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__Loots_1ad04543b8d670e0a2fc8c13a931286140)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Loots_1adc931f8d0a7f54469ce4dd05f6ca301b)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Loots_1a4eb7bb27551d91b164fbde2d05ab9bc7)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__Loots_1a37918b47950bb88d783269f5dd9e2454)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__Loots_1ab10398ad09e903163371c6cb2f3ad18d)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### Members

#### `public TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > `[`Loot_Optional`](#structFRHAPI__Loots_1a26353909383cc1ff90f30f8065f7aef1) <a id="structFRHAPI__Loots_1a26353909383cc1ff90f30f8065f7aef1"></a>

<br>
#### `public bool `[`Loot_IsSet`](#structFRHAPI__Loots_1aa7ed2ed6741384575d2557cb342ec7a1) <a id="structFRHAPI__Loots_1aa7ed2ed6741384575d2557cb342ec7a1"></a>

true if Loot_Optional has been set to a value

<br>
#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Loots_1a13d10491990bc6f649a265c4917177d3) <a id="structFRHAPI__Loots_1a13d10491990bc6f649a265c4917177d3"></a>

<br>
#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__Loots_1adec9f7b70b552038068b82807aa0792c) <a id="structFRHAPI__Loots_1adec9f7b70b552038068b82807aa0792c"></a>

true if CacheInfo_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__Loots_1aee129715b91d6efb2e4064e94f34ae39)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Loots_1aee129715b91d6efb2e4064e94f34ae39"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__Loots_1a86c61ace288772f62adf44ee4a6a6be0)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Loots_1a86c61ace288772f62adf44ee4a6a6be0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Loots_1a2d7a05097d639b3baa677f086a781730)`()` <a id="structFRHAPI__Loots_1a2d7a05097d639b3baa677f086a781730"></a>

Gets the value of Loot_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Loots_1ad6055e6fd1b2a23404c575f315c9f80d)`() const` <a id="structFRHAPI__Loots_1ad6055e6fd1b2a23404c575f315c9f80d"></a>

Gets the value of Loot_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Loots_1a8535ba2aba30240d26ebb8e08d0ecfa5)`(const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & DefaultValue) const` <a id="structFRHAPI__Loots_1a8535ba2aba30240d26ebb8e08d0ecfa5"></a>

Gets the value of Loot_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetLoot`](#structFRHAPI__Loots_1a50e60dc08952498a65312a97e9721136)`(TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & OutValue) const` <a id="structFRHAPI__Loots_1a50e60dc08952498a65312a97e9721136"></a>

Fills OutValue with the value of Loot_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > * `[`GetLootOrNull`](#structFRHAPI__Loots_1a3fbfe44014466730ef3aa52043cf873a)`()` <a id="structFRHAPI__Loots_1a3fbfe44014466730ef3aa52043cf873a"></a>

Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > * `[`GetLootOrNull`](#structFRHAPI__Loots_1aafd08bcb28fd0274767c28032d0c5999)`() const` <a id="structFRHAPI__Loots_1aafd08bcb28fd0274767c28032d0c5999"></a>

Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetLoot`](#structFRHAPI__Loots_1a6372b313bf3c96dab14b99743e474685)`(TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > NewValue)` <a id="structFRHAPI__Loots_1a6372b313bf3c96dab14b99743e474685"></a>

Sets the value of Loot_Optional and also sets Loot_IsSet to true.

<br>
#### `public inline void `[`ClearLoot`](#structFRHAPI__Loots_1a6e29a6b9f404f4f51dff7ce78ff39163)`()` <a id="structFRHAPI__Loots_1a6e29a6b9f404f4f51dff7ce78ff39163"></a>

Clears the value of Loot_Optional and sets Loot_IsSet to false.

<br>
#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loots_1a6421a8fed61c867332dfc4b71f6ff490)`()` <a id="structFRHAPI__Loots_1a6421a8fed61c867332dfc4b71f6ff490"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loots_1aa4c65e962b481fcbba4251f2f5fa0316)`() const` <a id="structFRHAPI__Loots_1aa4c65e962b481fcbba4251f2f5fa0316"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Loots_1a27c5ad09e08c86cc421b1e3762ac80e2)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__Loots_1a27c5ad09e08c86cc421b1e3762ac80e2"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__Loots_1ad04543b8d670e0a2fc8c13a931286140)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__Loots_1ad04543b8d670e0a2fc8c13a931286140"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Loots_1adc931f8d0a7f54469ce4dd05f6ca301b)`()` <a id="structFRHAPI__Loots_1adc931f8d0a7f54469ce4dd05f6ca301b"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Loots_1a4eb7bb27551d91b164fbde2d05ab9bc7)`() const` <a id="structFRHAPI__Loots_1a4eb7bb27551d91b164fbde2d05ab9bc7"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCacheInfo`](#structFRHAPI__Loots_1a37918b47950bb88d783269f5dd9e2454)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` <a id="structFRHAPI__Loots_1a37918b47950bb88d783269f5dd9e2454"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

<br>
#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__Loots_1ab10398ad09e903163371c6cb2f3ad18d)`()` <a id="structFRHAPI__Loots_1ab10398ad09e903163371c6cb2f3ad18d"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

<br>
