---
title: RHAPI_TimeFrames
---

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

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > `[`TimeFrames_Optional`](#structFRHAPI__TimeFrames_1abdb0572aae01bc3cf50cec8cd0388968) | Time Frames mapped by Time Frame ID.
`public bool `[`TimeFrames_IsSet`](#structFRHAPI__TimeFrames_1abc179739c5b667f1fbe350aacd64f941) | true if TimeFrames_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__TimeFrames_1a658dd30efd4811f5113ac01e04a590f4) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__TimeFrames_1a4f869a5a8f88fa36afadc371a9e5498a) | true if CacheInfo_Optional has been set to a value
`public bool `[`CacheInfo_IsNull`](#structFRHAPI__TimeFrames_1a06954041bffe5a7bb2a88039eb8d2f7f) | true if CacheInfo_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__TimeFrames_1a71b1b876e517a1d839b0d3af5d4a6a56)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__TimeFrames_1ae0a7ffeb3581d531776f71c9cd48adc0)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & `[`GetTimeFrames`](#structFRHAPI__TimeFrames_1a64fe8953d9ce925d3041346f36029414)`()` | Gets the value of TimeFrames_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & `[`GetTimeFrames`](#structFRHAPI__TimeFrames_1aa3a966bf7e88872dc3a91cf42dd63f9c)`() const` | Gets the value of TimeFrames_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & `[`GetTimeFrames`](#structFRHAPI__TimeFrames_1a074d0bbd6064e122ffea342a441ab803)`(const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & DefaultValue) const` | Gets the value of TimeFrames_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTimeFrames`](#structFRHAPI__TimeFrames_1a20fd09f2bfa5c51a0eacb68ec7af4e2f)`(TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & OutValue) const` | Fills OutValue with the value of TimeFrames_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > * `[`GetTimeFramesOrNull`](#structFRHAPI__TimeFrames_1a9d1e6e1d44238e45e3fd1a9dcfdace90)`()` | Returns a pointer to TimeFrames_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > * `[`GetTimeFramesOrNull`](#structFRHAPI__TimeFrames_1a499c74bb161bc14378579ba244065075)`() const` | Returns a pointer to TimeFrames_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTimeFrames`](#structFRHAPI__TimeFrames_1ac8cc13b9375060c5a5f666171c8ae519)`(const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & NewValue)` | Sets the value of TimeFrames_Optional and also sets TimeFrames_IsSet to true.
`public inline FORCEINLINE void `[`SetTimeFrames`](#structFRHAPI__TimeFrames_1aca8b63597d53d194e7208622c339927c)`(TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > && NewValue)` | Sets the value of TimeFrames_Optional and also sets TimeFrames_IsSet to true using move semantics.
`public inline void `[`ClearTimeFrames`](#structFRHAPI__TimeFrames_1a92daf6e6ae00995223c00ed1764513ac)`()` | Clears the value of TimeFrames_Optional and sets TimeFrames_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrames_1ae6934e36a6fa7212ca8a1641bb671b6a)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrames_1a0e9ffedfca9ce954cadde230424810cc)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrames_1afe01532e0e8b905af5a1bf3058275571)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__TimeFrames_1adabd635f47e20122652b156f6c22296a)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__TimeFrames_1a5693e364794b9de8e062293e5127886e)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__TimeFrames_1adf436d1bf0e275cacad68cdb748c92b2)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__TimeFrames_1acb547dbc0e62fc7af7a02ff1bcf7f1ba)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__TimeFrames_1ac701c32546bba0ae6e7dcebae6d34344)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__TimeFrames_1a44c43ad3220c43980b0743df8de23078)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__TimeFrames_1af3e88d1f5596230f4b067491300cb88d)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__TimeFrames_1a2eca28144d1b47276f639997281dd8f3)`() const` | Checks whether CacheInfo_Optional is set to null.

### Members

#### `public TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > `[`TimeFrames_Optional`](#structFRHAPI__TimeFrames_1abdb0572aae01bc3cf50cec8cd0388968) <a id="structFRHAPI__TimeFrames_1abdb0572aae01bc3cf50cec8cd0388968"></a>

Time Frames mapped by Time Frame ID.

#### `public bool `[`TimeFrames_IsSet`](#structFRHAPI__TimeFrames_1abc179739c5b667f1fbe350aacd64f941) <a id="structFRHAPI__TimeFrames_1abc179739c5b667f1fbe350aacd64f941"></a>

true if TimeFrames_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__TimeFrames_1a658dd30efd4811f5113ac01e04a590f4) <a id="structFRHAPI__TimeFrames_1a658dd30efd4811f5113ac01e04a590f4"></a>

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__TimeFrames_1a4f869a5a8f88fa36afadc371a9e5498a) <a id="structFRHAPI__TimeFrames_1a4f869a5a8f88fa36afadc371a9e5498a"></a>

true if CacheInfo_Optional has been set to a value

#### `public bool `[`CacheInfo_IsNull`](#structFRHAPI__TimeFrames_1a06954041bffe5a7bb2a88039eb8d2f7f) <a id="structFRHAPI__TimeFrames_1a06954041bffe5a7bb2a88039eb8d2f7f"></a>

true if CacheInfo_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__TimeFrames_1a71b1b876e517a1d839b0d3af5d4a6a56)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__TimeFrames_1a71b1b876e517a1d839b0d3af5d4a6a56"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__TimeFrames_1ae0a7ffeb3581d531776f71c9cd48adc0)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__TimeFrames_1ae0a7ffeb3581d531776f71c9cd48adc0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & `[`GetTimeFrames`](#structFRHAPI__TimeFrames_1a64fe8953d9ce925d3041346f36029414)`()` <a id="structFRHAPI__TimeFrames_1a64fe8953d9ce925d3041346f36029414"></a>

Gets the value of TimeFrames_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & `[`GetTimeFrames`](#structFRHAPI__TimeFrames_1aa3a966bf7e88872dc3a91cf42dd63f9c)`() const` <a id="structFRHAPI__TimeFrames_1aa3a966bf7e88872dc3a91cf42dd63f9c"></a>

Gets the value of TimeFrames_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & `[`GetTimeFrames`](#structFRHAPI__TimeFrames_1a074d0bbd6064e122ffea342a441ab803)`(const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & DefaultValue) const` <a id="structFRHAPI__TimeFrames_1a074d0bbd6064e122ffea342a441ab803"></a>

Gets the value of TimeFrames_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTimeFrames`](#structFRHAPI__TimeFrames_1a20fd09f2bfa5c51a0eacb68ec7af4e2f)`(TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & OutValue) const` <a id="structFRHAPI__TimeFrames_1a20fd09f2bfa5c51a0eacb68ec7af4e2f"></a>

Fills OutValue with the value of TimeFrames_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > * `[`GetTimeFramesOrNull`](#structFRHAPI__TimeFrames_1a9d1e6e1d44238e45e3fd1a9dcfdace90)`()` <a id="structFRHAPI__TimeFrames_1a9d1e6e1d44238e45e3fd1a9dcfdace90"></a>

Returns a pointer to TimeFrames_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > * `[`GetTimeFramesOrNull`](#structFRHAPI__TimeFrames_1a499c74bb161bc14378579ba244065075)`() const` <a id="structFRHAPI__TimeFrames_1a499c74bb161bc14378579ba244065075"></a>

Returns a pointer to TimeFrames_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTimeFrames`](#structFRHAPI__TimeFrames_1ac8cc13b9375060c5a5f666171c8ae519)`(const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & NewValue)` <a id="structFRHAPI__TimeFrames_1ac8cc13b9375060c5a5f666171c8ae519"></a>

Sets the value of TimeFrames_Optional and also sets TimeFrames_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTimeFrames`](#structFRHAPI__TimeFrames_1aca8b63597d53d194e7208622c339927c)`(TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > && NewValue)` <a id="structFRHAPI__TimeFrames_1aca8b63597d53d194e7208622c339927c"></a>

Sets the value of TimeFrames_Optional and also sets TimeFrames_IsSet to true using move semantics.

#### `public inline void `[`ClearTimeFrames`](#structFRHAPI__TimeFrames_1a92daf6e6ae00995223c00ed1764513ac)`()` <a id="structFRHAPI__TimeFrames_1a92daf6e6ae00995223c00ed1764513ac"></a>

Clears the value of TimeFrames_Optional and sets TimeFrames_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrames_1ae6934e36a6fa7212ca8a1641bb671b6a)`()` <a id="structFRHAPI__TimeFrames_1ae6934e36a6fa7212ca8a1641bb671b6a"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrames_1a0e9ffedfca9ce954cadde230424810cc)`() const` <a id="structFRHAPI__TimeFrames_1a0e9ffedfca9ce954cadde230424810cc"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrames_1afe01532e0e8b905af5a1bf3058275571)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__TimeFrames_1afe01532e0e8b905af5a1bf3058275571"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__TimeFrames_1adabd635f47e20122652b156f6c22296a)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__TimeFrames_1adabd635f47e20122652b156f6c22296a"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__TimeFrames_1a5693e364794b9de8e062293e5127886e)`()` <a id="structFRHAPI__TimeFrames_1a5693e364794b9de8e062293e5127886e"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__TimeFrames_1adf436d1bf0e275cacad68cdb748c92b2)`() const` <a id="structFRHAPI__TimeFrames_1adf436d1bf0e275cacad68cdb748c92b2"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__TimeFrames_1acb547dbc0e62fc7af7a02ff1bcf7f1ba)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__TimeFrames_1acb547dbc0e62fc7af7a02ff1bcf7f1ba"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__TimeFrames_1ac701c32546bba0ae6e7dcebae6d34344)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__TimeFrames_1ac701c32546bba0ae6e7dcebae6d34344"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__TimeFrames_1a44c43ad3220c43980b0743df8de23078)`()` <a id="structFRHAPI__TimeFrames_1a44c43ad3220c43980b0743df8de23078"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__TimeFrames_1af3e88d1f5596230f4b067491300cb88d)`()` <a id="structFRHAPI__TimeFrames_1af3e88d1f5596230f4b067491300cb88d"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__TimeFrames_1a2eca28144d1b47276f639997281dd8f3)`() const` <a id="structFRHAPI__TimeFrames_1a2eca28144d1b47276f639997281dd8f3"></a>

Checks whether CacheInfo_Optional is set to null.

