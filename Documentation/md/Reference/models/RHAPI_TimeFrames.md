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
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__TimeFrames_1a658dd30efd4811f5113ac01e04a590f4) | Cache info for the Time Frames.
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__TimeFrames_1a4f869a5a8f88fa36afadc371a9e5498a) | true if CacheInfo_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__TimeFrames_1a71b1b876e517a1d839b0d3af5d4a6a56)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__TimeFrames_1ae0a7ffeb3581d531776f71c9cd48adc0)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & `[`GetTimeFrames`](#structFRHAPI__TimeFrames_1a619e85176ff941f450bd6a702c3df985)`()` | Gets the value of TimeFrames_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & `[`GetTimeFrames`](#structFRHAPI__TimeFrames_1a08dd754456b03bbf1e295492f93e5565)`() const` | Gets the value of TimeFrames_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & `[`GetTimeFrames`](#structFRHAPI__TimeFrames_1a4e3bc0e49cd563ecdd68ff0d56d94ef2)`(const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & DefaultValue) const` | Gets the value of TimeFrames_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTimeFrames`](#structFRHAPI__TimeFrames_1afb3119beec255e6853e5e9ae8eba508e)`(TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & OutValue) const` | Fills OutValue with the value of TimeFrames_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > * `[`GetTimeFramesOrNull`](#structFRHAPI__TimeFrames_1a5f14e1c045b6905be9a0727c7500956c)`()` | Returns a pointer to TimeFrames_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > * `[`GetTimeFramesOrNull`](#structFRHAPI__TimeFrames_1a4aaf5da82b22b779e9eaabc9c891b841)`() const` | Returns a pointer to TimeFrames_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTimeFrames`](#structFRHAPI__TimeFrames_1af43b446bb61e39c4dc7e66ce4b34e745)`(const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & NewValue)` | Sets the value of TimeFrames_Optional and also sets TimeFrames_IsSet to true.
`public inline void `[`SetTimeFrames`](#structFRHAPI__TimeFrames_1a6faad45359bee55ffd502b81a679c137)`(TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > && NewValue)` | Sets the value of TimeFrames_Optional and also sets TimeFrames_IsSet to true using move semantics.
`public inline void `[`ClearTimeFrames`](#structFRHAPI__TimeFrames_1a92daf6e6ae00995223c00ed1764513ac)`()` | Clears the value of TimeFrames_Optional and sets TimeFrames_IsSet to false.
`public inline bool `[`IsTimeFramesSet`](#structFRHAPI__TimeFrames_1af1bbb92edcbe78e756b8616b7e59fded)`() const` | Checks whether TimeFrames_Optional has been set.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrames_1aca5a0b345109c1776fb0d58a26ed3645)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrames_1a710c9a010377c70cf47191fcd056b338)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrames_1a2e144ee6803b1ca55afcec481fbc5ce6)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__TimeFrames_1abc908c43a015dc171892dcfd5935e2e4)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__TimeFrames_1ae4630b774e95112c258c7fc3f73cd519)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__TimeFrames_1a1475eff14e9aa2529b623bc9a76fdd65)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__TimeFrames_1aa539b5ac4cdc2250c69942a21d49b931)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`SetCacheInfo`](#structFRHAPI__TimeFrames_1a76eec18ec87788692a2fad05c3d21505)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__TimeFrames_1a44c43ad3220c43980b0743df8de23078)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline bool `[`IsCacheInfoSet`](#structFRHAPI__TimeFrames_1a8a3b7e4784e81162e412798d64db6a0c)`() const` | Checks whether CacheInfo_Optional has been set.

### Members

#### `public TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > `[`TimeFrames_Optional`](#structFRHAPI__TimeFrames_1abdb0572aae01bc3cf50cec8cd0388968) <a id="structFRHAPI__TimeFrames_1abdb0572aae01bc3cf50cec8cd0388968"></a>

Time Frames mapped by Time Frame ID.

#### `public bool `[`TimeFrames_IsSet`](#structFRHAPI__TimeFrames_1abc179739c5b667f1fbe350aacd64f941) <a id="structFRHAPI__TimeFrames_1abc179739c5b667f1fbe350aacd64f941"></a>

true if TimeFrames_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__TimeFrames_1a658dd30efd4811f5113ac01e04a590f4) <a id="structFRHAPI__TimeFrames_1a658dd30efd4811f5113ac01e04a590f4"></a>

Cache info for the Time Frames.

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__TimeFrames_1a4f869a5a8f88fa36afadc371a9e5498a) <a id="structFRHAPI__TimeFrames_1a4f869a5a8f88fa36afadc371a9e5498a"></a>

true if CacheInfo_Optional has been set to a value

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

#### `public inline TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & `[`GetTimeFrames`](#structFRHAPI__TimeFrames_1a619e85176ff941f450bd6a702c3df985)`()` <a id="structFRHAPI__TimeFrames_1a619e85176ff941f450bd6a702c3df985"></a>

Gets the value of TimeFrames_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & `[`GetTimeFrames`](#structFRHAPI__TimeFrames_1a08dd754456b03bbf1e295492f93e5565)`() const` <a id="structFRHAPI__TimeFrames_1a08dd754456b03bbf1e295492f93e5565"></a>

Gets the value of TimeFrames_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & `[`GetTimeFrames`](#structFRHAPI__TimeFrames_1a4e3bc0e49cd563ecdd68ff0d56d94ef2)`(const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & DefaultValue) const` <a id="structFRHAPI__TimeFrames_1a4e3bc0e49cd563ecdd68ff0d56d94ef2"></a>

Gets the value of TimeFrames_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTimeFrames`](#structFRHAPI__TimeFrames_1afb3119beec255e6853e5e9ae8eba508e)`(TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & OutValue) const` <a id="structFRHAPI__TimeFrames_1afb3119beec255e6853e5e9ae8eba508e"></a>

Fills OutValue with the value of TimeFrames_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > * `[`GetTimeFramesOrNull`](#structFRHAPI__TimeFrames_1a5f14e1c045b6905be9a0727c7500956c)`()` <a id="structFRHAPI__TimeFrames_1a5f14e1c045b6905be9a0727c7500956c"></a>

Returns a pointer to TimeFrames_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > * `[`GetTimeFramesOrNull`](#structFRHAPI__TimeFrames_1a4aaf5da82b22b779e9eaabc9c891b841)`() const` <a id="structFRHAPI__TimeFrames_1a4aaf5da82b22b779e9eaabc9c891b841"></a>

Returns a pointer to TimeFrames_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTimeFrames`](#structFRHAPI__TimeFrames_1af43b446bb61e39c4dc7e66ce4b34e745)`(const TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > & NewValue)` <a id="structFRHAPI__TimeFrames_1af43b446bb61e39c4dc7e66ce4b34e745"></a>

Sets the value of TimeFrames_Optional and also sets TimeFrames_IsSet to true.

#### `public inline void `[`SetTimeFrames`](#structFRHAPI__TimeFrames_1a6faad45359bee55ffd502b81a679c137)`(TMap< FString, `[`FRHAPI_TimeFrame`](RHAPI_TimeFrame.md#structFRHAPI__TimeFrame)` > && NewValue)` <a id="structFRHAPI__TimeFrames_1a6faad45359bee55ffd502b81a679c137"></a>

Sets the value of TimeFrames_Optional and also sets TimeFrames_IsSet to true using move semantics.

#### `public inline void `[`ClearTimeFrames`](#structFRHAPI__TimeFrames_1a92daf6e6ae00995223c00ed1764513ac)`()` <a id="structFRHAPI__TimeFrames_1a92daf6e6ae00995223c00ed1764513ac"></a>

Clears the value of TimeFrames_Optional and sets TimeFrames_IsSet to false.

#### `public inline bool `[`IsTimeFramesSet`](#structFRHAPI__TimeFrames_1af1bbb92edcbe78e756b8616b7e59fded)`() const` <a id="structFRHAPI__TimeFrames_1af1bbb92edcbe78e756b8616b7e59fded"></a>

Checks whether TimeFrames_Optional has been set.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrames_1aca5a0b345109c1776fb0d58a26ed3645)`()` <a id="structFRHAPI__TimeFrames_1aca5a0b345109c1776fb0d58a26ed3645"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrames_1a710c9a010377c70cf47191fcd056b338)`() const` <a id="structFRHAPI__TimeFrames_1a710c9a010377c70cf47191fcd056b338"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrames_1a2e144ee6803b1ca55afcec481fbc5ce6)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__TimeFrames_1a2e144ee6803b1ca55afcec481fbc5ce6"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__TimeFrames_1abc908c43a015dc171892dcfd5935e2e4)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__TimeFrames_1abc908c43a015dc171892dcfd5935e2e4"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__TimeFrames_1ae4630b774e95112c258c7fc3f73cd519)`()` <a id="structFRHAPI__TimeFrames_1ae4630b774e95112c258c7fc3f73cd519"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__TimeFrames_1a1475eff14e9aa2529b623bc9a76fdd65)`() const` <a id="structFRHAPI__TimeFrames_1a1475eff14e9aa2529b623bc9a76fdd65"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__TimeFrames_1aa539b5ac4cdc2250c69942a21d49b931)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__TimeFrames_1aa539b5ac4cdc2250c69942a21d49b931"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__TimeFrames_1a76eec18ec87788692a2fad05c3d21505)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__TimeFrames_1a76eec18ec87788692a2fad05c3d21505"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__TimeFrames_1a44c43ad3220c43980b0743df8de23078)`()` <a id="structFRHAPI__TimeFrames_1a44c43ad3220c43980b0743df8de23078"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline bool `[`IsCacheInfoSet`](#structFRHAPI__TimeFrames_1a8a3b7e4784e81162e412798d64db6a0c)`() const` <a id="structFRHAPI__TimeFrames_1a8a3b7e4784e81162e412798d64db6a0c"></a>

Checks whether CacheInfo_Optional has been set.

