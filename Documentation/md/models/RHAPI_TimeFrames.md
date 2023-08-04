# RHAPI_TimeFrames <a id="group__RHAPI__TimeFrames"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_TimeFrames`](#structFRHAPI__TimeFrames) | A collection of Time Frames by Time Frame ID.

## struct `FRHAPI_TimeFrames` <a id="structFRHAPI__TimeFrames"></a>

```
struct FRHAPI_TimeFrames
  : public FRHAPI_Model
```

A collection of Time Frames by Time Frame ID.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > `[`TimeFrames_Optional`](#structFRHAPI__TimeFrames_1abdb0572aae01bc3cf50cec8cd0388968) | Time Frames mapped by Time Frame ID.
`public bool `[`TimeFrames_IsSet`](#structFRHAPI__TimeFrames_1abc179739c5b667f1fbe350aacd64f941) | true if TimeFrames_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__TimeFrames_1a658dd30efd4811f5113ac01e04a590f4) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__TimeFrames_1a4f869a5a8f88fa36afadc371a9e5498a) | true if CacheInfo_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__TimeFrames_1ae878fe3b3c90541d724f10fc6f314553)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__TimeFrames_1af19b5115fb551f63293d5e526bbea6a0)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & `[`GetTimeFrames`](#structFRHAPI__TimeFrames_1a0de07dc2f3be8a9ddf80f432abd04ac2)`()` | Gets the value of TimeFrames_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & `[`GetTimeFrames`](#structFRHAPI__TimeFrames_1a92572355f05fcf7a8444dff1631781ae)`() const` | Gets the value of TimeFrames_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & `[`GetTimeFrames`](#structFRHAPI__TimeFrames_1a6039960c7cb3ca287c1454a4654f516f)`(const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & DefaultValue) const` | Gets the value of TimeFrames_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTimeFrames`](#structFRHAPI__TimeFrames_1afb3119beec255e6853e5e9ae8eba508e)`(TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & OutValue) const` | Fills OutValue with the value of TimeFrames_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > * `[`GetTimeFramesOrNull`](#structFRHAPI__TimeFrames_1a1eb971c80b89995829a7e6e75fb6d6d4)`()` | Returns a pointer to TimeFrames_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > * `[`GetTimeFramesOrNull`](#structFRHAPI__TimeFrames_1a8a84f1d040479d378e3f01590b5330a4)`() const` | Returns a pointer to TimeFrames_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTimeFrames`](#structFRHAPI__TimeFrames_1a342bc17e411933efa817ffaef12b9ac9)`(TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > NewValue)` | Sets the value of TimeFrames_Optional and also sets TimeFrames_IsSet to true.
`public inline void `[`ClearTimeFrames`](#structFRHAPI__TimeFrames_1a92daf6e6ae00995223c00ed1764513ac)`()` | Clears the value of TimeFrames_Optional and sets TimeFrames_IsSet to false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrames_1afdce661d2525303ec4f6efd32d6267a6)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrames_1a244e574ac594017a49cedd06d9833c7e)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrames_1a102ea5ffca49bf4c8f266282dcc69659)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__TimeFrames_1abc908c43a015dc171892dcfd5935e2e4)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__TimeFrames_1a579bb68ed372843a81b04429f24b624e)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__TimeFrames_1a8a84c2ed7f86c298bea23afd5c543d3d)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__TimeFrames_1a1f1b825a37d54eb121adfbde6148df66)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__TimeFrames_1a44c43ad3220c43980b0743df8de23078)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### Members

#### `public TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > `[`TimeFrames_Optional`](#structFRHAPI__TimeFrames_1abdb0572aae01bc3cf50cec8cd0388968) <a id="structFRHAPI__TimeFrames_1abdb0572aae01bc3cf50cec8cd0388968"></a>

Time Frames mapped by Time Frame ID.

<br>
#### `public bool `[`TimeFrames_IsSet`](#structFRHAPI__TimeFrames_1abc179739c5b667f1fbe350aacd64f941) <a id="structFRHAPI__TimeFrames_1abc179739c5b667f1fbe350aacd64f941"></a>

true if TimeFrames_Optional has been set to a value

<br>
#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__TimeFrames_1a658dd30efd4811f5113ac01e04a590f4) <a id="structFRHAPI__TimeFrames_1a658dd30efd4811f5113ac01e04a590f4"></a>

<br>
#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__TimeFrames_1a4f869a5a8f88fa36afadc371a9e5498a) <a id="structFRHAPI__TimeFrames_1a4f869a5a8f88fa36afadc371a9e5498a"></a>

true if CacheInfo_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__TimeFrames_1ae878fe3b3c90541d724f10fc6f314553)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__TimeFrames_1ae878fe3b3c90541d724f10fc6f314553"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__TimeFrames_1af19b5115fb551f63293d5e526bbea6a0)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__TimeFrames_1af19b5115fb551f63293d5e526bbea6a0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & `[`GetTimeFrames`](#structFRHAPI__TimeFrames_1a0de07dc2f3be8a9ddf80f432abd04ac2)`()` <a id="structFRHAPI__TimeFrames_1a0de07dc2f3be8a9ddf80f432abd04ac2"></a>

Gets the value of TimeFrames_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & `[`GetTimeFrames`](#structFRHAPI__TimeFrames_1a92572355f05fcf7a8444dff1631781ae)`() const` <a id="structFRHAPI__TimeFrames_1a92572355f05fcf7a8444dff1631781ae"></a>

Gets the value of TimeFrames_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & `[`GetTimeFrames`](#structFRHAPI__TimeFrames_1a6039960c7cb3ca287c1454a4654f516f)`(const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & DefaultValue) const` <a id="structFRHAPI__TimeFrames_1a6039960c7cb3ca287c1454a4654f516f"></a>

Gets the value of TimeFrames_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetTimeFrames`](#structFRHAPI__TimeFrames_1afb3119beec255e6853e5e9ae8eba508e)`(TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & OutValue) const` <a id="structFRHAPI__TimeFrames_1afb3119beec255e6853e5e9ae8eba508e"></a>

Fills OutValue with the value of TimeFrames_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > * `[`GetTimeFramesOrNull`](#structFRHAPI__TimeFrames_1a1eb971c80b89995829a7e6e75fb6d6d4)`()` <a id="structFRHAPI__TimeFrames_1a1eb971c80b89995829a7e6e75fb6d6d4"></a>

Returns a pointer to TimeFrames_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > * `[`GetTimeFramesOrNull`](#structFRHAPI__TimeFrames_1a8a84f1d040479d378e3f01590b5330a4)`() const` <a id="structFRHAPI__TimeFrames_1a8a84f1d040479d378e3f01590b5330a4"></a>

Returns a pointer to TimeFrames_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetTimeFrames`](#structFRHAPI__TimeFrames_1a342bc17e411933efa817ffaef12b9ac9)`(TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > NewValue)` <a id="structFRHAPI__TimeFrames_1a342bc17e411933efa817ffaef12b9ac9"></a>

Sets the value of TimeFrames_Optional and also sets TimeFrames_IsSet to true.

<br>
#### `public inline void `[`ClearTimeFrames`](#structFRHAPI__TimeFrames_1a92daf6e6ae00995223c00ed1764513ac)`()` <a id="structFRHAPI__TimeFrames_1a92daf6e6ae00995223c00ed1764513ac"></a>

Clears the value of TimeFrames_Optional and sets TimeFrames_IsSet to false.

<br>
#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrames_1afdce661d2525303ec4f6efd32d6267a6)`()` <a id="structFRHAPI__TimeFrames_1afdce661d2525303ec4f6efd32d6267a6"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrames_1a244e574ac594017a49cedd06d9833c7e)`() const` <a id="structFRHAPI__TimeFrames_1a244e574ac594017a49cedd06d9833c7e"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrames_1a102ea5ffca49bf4c8f266282dcc69659)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__TimeFrames_1a102ea5ffca49bf4c8f266282dcc69659"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__TimeFrames_1abc908c43a015dc171892dcfd5935e2e4)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__TimeFrames_1abc908c43a015dc171892dcfd5935e2e4"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__TimeFrames_1a579bb68ed372843a81b04429f24b624e)`()` <a id="structFRHAPI__TimeFrames_1a579bb68ed372843a81b04429f24b624e"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__TimeFrames_1a8a84c2ed7f86c298bea23afd5c543d3d)`() const` <a id="structFRHAPI__TimeFrames_1a8a84c2ed7f86c298bea23afd5c543d3d"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCacheInfo`](#structFRHAPI__TimeFrames_1a1f1b825a37d54eb121adfbde6148df66)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` <a id="structFRHAPI__TimeFrames_1a1f1b825a37d54eb121adfbde6148df66"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

<br>
#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__TimeFrames_1a44c43ad3220c43980b0743df8de23078)`()` <a id="structFRHAPI__TimeFrames_1a44c43ad3220c43980b0743df8de23078"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

<br>
