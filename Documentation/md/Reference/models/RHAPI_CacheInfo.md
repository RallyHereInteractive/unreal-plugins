---
title: RHAPI_CacheInfo
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_CacheInfo`](#structFRHAPI__CacheInfo) | Cache information for the resource it is attached to. The etag value can be used with the If-None-Match and If-Match headers.

## struct `FRHAPI_CacheInfo` <a id="structFRHAPI__CacheInfo"></a>

```
struct FRHAPI_CacheInfo
  : public FRHAPI_Model
```

Cache information for the resource it is attached to. The etag value can be used with the If-None-Match and If-Match headers.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Etag`](#structFRHAPI__CacheInfo_1a3865c393796a7c19f6d7a654189fabaf) | 
`public FString `[`StrRep_Optional`](#structFRHAPI__CacheInfo_1a938568e3ec9062c4a82cece832024b9f) | 
`public bool `[`StrRep_IsSet`](#structFRHAPI__CacheInfo_1a87a1e5ca07427850d04158a042692726) | true if StrRep_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__CacheInfo_1a2071a5d33c2c1d33c972a45529de530a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__CacheInfo_1abada52c839a7586b78eb2635a539290d)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetEtag`](#structFRHAPI__CacheInfo_1a1fb24b4a6945b3c4e8ad2888321d7039)`()` | Gets the value of Etag.
`public inline const FString & `[`GetEtag`](#structFRHAPI__CacheInfo_1a4635c32c790fa334c7c9e5bbd7d38dff)`() const` | Gets the value of Etag.
`public inline void `[`SetEtag`](#structFRHAPI__CacheInfo_1a57c41212b3e33053226ddd2a4931c4eb)`(const FString & NewValue)` | Sets the value of Etag.
`public inline void `[`SetEtag`](#structFRHAPI__CacheInfo_1a7bdb2741364cedae1dbe2d5ee443536f)`(FString && NewValue)` | Sets the value of Etag using move semantics.
`public inline FString & `[`GetStrRep`](#structFRHAPI__CacheInfo_1a95f589680f53bd498fd4de0959af4667)`()` | Gets the value of StrRep_Optional, regardless of it having been set.
`public inline const FString & `[`GetStrRep`](#structFRHAPI__CacheInfo_1ad1e9267e6f7f7cd720c2e6709b381e25)`() const` | Gets the value of StrRep_Optional, regardless of it having been set.
`public inline const FString & `[`GetStrRep`](#structFRHAPI__CacheInfo_1ad91a1a1d05146030dc412cb2a6812b3c)`(const FString & DefaultValue) const` | Gets the value of StrRep_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStrRep`](#structFRHAPI__CacheInfo_1ade0b14154bf2de9b79dd99a5f82f0e3f)`(FString & OutValue) const` | Fills OutValue with the value of StrRep_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStrRepOrNull`](#structFRHAPI__CacheInfo_1aae4c442cda957fbbde616d22a69fa09a)`()` | Returns a pointer to StrRep_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStrRepOrNull`](#structFRHAPI__CacheInfo_1a9f3419399f38a1dadbe17e90408e009b)`() const` | Returns a pointer to StrRep_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStrRep`](#structFRHAPI__CacheInfo_1ad45561fa18f77b759e02d286afb60457)`(const FString & NewValue)` | Sets the value of StrRep_Optional and also sets StrRep_IsSet to true.
`public inline void `[`SetStrRep`](#structFRHAPI__CacheInfo_1af0b364cb74dde5fa2b13a75d7101d7cb)`(FString && NewValue)` | Sets the value of StrRep_Optional and also sets StrRep_IsSet to true using move semantics.
`public inline void `[`ClearStrRep`](#structFRHAPI__CacheInfo_1a961e7ae4d42f98b5708fa842a80bb990)`()` | Clears the value of StrRep_Optional and sets StrRep_IsSet to false.
`public inline bool `[`IsStrRepSet`](#structFRHAPI__CacheInfo_1a1f3fd80b1781eb8cdd9107030b456f8d)`() const` | Checks whether StrRep_Optional has been set.

### Members

#### `public FString `[`Etag`](#structFRHAPI__CacheInfo_1a3865c393796a7c19f6d7a654189fabaf) <a id="structFRHAPI__CacheInfo_1a3865c393796a7c19f6d7a654189fabaf"></a>

#### `public FString `[`StrRep_Optional`](#structFRHAPI__CacheInfo_1a938568e3ec9062c4a82cece832024b9f) <a id="structFRHAPI__CacheInfo_1a938568e3ec9062c4a82cece832024b9f"></a>

#### `public bool `[`StrRep_IsSet`](#structFRHAPI__CacheInfo_1a87a1e5ca07427850d04158a042692726) <a id="structFRHAPI__CacheInfo_1a87a1e5ca07427850d04158a042692726"></a>

true if StrRep_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__CacheInfo_1a2071a5d33c2c1d33c972a45529de530a)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__CacheInfo_1a2071a5d33c2c1d33c972a45529de530a"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__CacheInfo_1abada52c839a7586b78eb2635a539290d)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__CacheInfo_1abada52c839a7586b78eb2635a539290d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetEtag`](#structFRHAPI__CacheInfo_1a1fb24b4a6945b3c4e8ad2888321d7039)`()` <a id="structFRHAPI__CacheInfo_1a1fb24b4a6945b3c4e8ad2888321d7039"></a>

Gets the value of Etag.

#### `public inline const FString & `[`GetEtag`](#structFRHAPI__CacheInfo_1a4635c32c790fa334c7c9e5bbd7d38dff)`() const` <a id="structFRHAPI__CacheInfo_1a4635c32c790fa334c7c9e5bbd7d38dff"></a>

Gets the value of Etag.

#### `public inline void `[`SetEtag`](#structFRHAPI__CacheInfo_1a57c41212b3e33053226ddd2a4931c4eb)`(const FString & NewValue)` <a id="structFRHAPI__CacheInfo_1a57c41212b3e33053226ddd2a4931c4eb"></a>

Sets the value of Etag.

#### `public inline void `[`SetEtag`](#structFRHAPI__CacheInfo_1a7bdb2741364cedae1dbe2d5ee443536f)`(FString && NewValue)` <a id="structFRHAPI__CacheInfo_1a7bdb2741364cedae1dbe2d5ee443536f"></a>

Sets the value of Etag using move semantics.

#### `public inline FString & `[`GetStrRep`](#structFRHAPI__CacheInfo_1a95f589680f53bd498fd4de0959af4667)`()` <a id="structFRHAPI__CacheInfo_1a95f589680f53bd498fd4de0959af4667"></a>

Gets the value of StrRep_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStrRep`](#structFRHAPI__CacheInfo_1ad1e9267e6f7f7cd720c2e6709b381e25)`() const` <a id="structFRHAPI__CacheInfo_1ad1e9267e6f7f7cd720c2e6709b381e25"></a>

Gets the value of StrRep_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStrRep`](#structFRHAPI__CacheInfo_1ad91a1a1d05146030dc412cb2a6812b3c)`(const FString & DefaultValue) const` <a id="structFRHAPI__CacheInfo_1ad91a1a1d05146030dc412cb2a6812b3c"></a>

Gets the value of StrRep_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStrRep`](#structFRHAPI__CacheInfo_1ade0b14154bf2de9b79dd99a5f82f0e3f)`(FString & OutValue) const` <a id="structFRHAPI__CacheInfo_1ade0b14154bf2de9b79dd99a5f82f0e3f"></a>

Fills OutValue with the value of StrRep_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStrRepOrNull`](#structFRHAPI__CacheInfo_1aae4c442cda957fbbde616d22a69fa09a)`()` <a id="structFRHAPI__CacheInfo_1aae4c442cda957fbbde616d22a69fa09a"></a>

Returns a pointer to StrRep_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStrRepOrNull`](#structFRHAPI__CacheInfo_1a9f3419399f38a1dadbe17e90408e009b)`() const` <a id="structFRHAPI__CacheInfo_1a9f3419399f38a1dadbe17e90408e009b"></a>

Returns a pointer to StrRep_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStrRep`](#structFRHAPI__CacheInfo_1ad45561fa18f77b759e02d286afb60457)`(const FString & NewValue)` <a id="structFRHAPI__CacheInfo_1ad45561fa18f77b759e02d286afb60457"></a>

Sets the value of StrRep_Optional and also sets StrRep_IsSet to true.

#### `public inline void `[`SetStrRep`](#structFRHAPI__CacheInfo_1af0b364cb74dde5fa2b13a75d7101d7cb)`(FString && NewValue)` <a id="structFRHAPI__CacheInfo_1af0b364cb74dde5fa2b13a75d7101d7cb"></a>

Sets the value of StrRep_Optional and also sets StrRep_IsSet to true using move semantics.

#### `public inline void `[`ClearStrRep`](#structFRHAPI__CacheInfo_1a961e7ae4d42f98b5708fa842a80bb990)`()` <a id="structFRHAPI__CacheInfo_1a961e7ae4d42f98b5708fa842a80bb990"></a>

Clears the value of StrRep_Optional and sets StrRep_IsSet to false.

#### `public inline bool `[`IsStrRepSet`](#structFRHAPI__CacheInfo_1a1f3fd80b1781eb8cdd9107030b456f8d)`() const` <a id="structFRHAPI__CacheInfo_1a1f3fd80b1781eb8cdd9107030b456f8d"></a>

Checks whether StrRep_Optional has been set.

