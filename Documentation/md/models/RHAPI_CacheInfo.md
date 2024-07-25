# group `RHAPI_CacheInfo` <a id="group__RHAPI__CacheInfo"></a>

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
`public virtual void `[`WriteJson`](#structFRHAPI__CacheInfo_1aafc272a2c6203c4963b614cc32afdd0f)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetEtag`](#structFRHAPI__CacheInfo_1a3eeacaaa962ca3a8c2dbd5c786c03d47)`()` | Gets the value of Etag.
`public inline const FString & `[`GetEtag`](#structFRHAPI__CacheInfo_1a70906082e6cf7aaaccfcb3a28914df4a)`() const` | Gets the value of Etag.
`public inline void `[`SetEtag`](#structFRHAPI__CacheInfo_1a57c41212b3e33053226ddd2a4931c4eb)`(const FString & NewValue)` | Sets the value of Etag.
`public inline void `[`SetEtag`](#structFRHAPI__CacheInfo_1a7bdb2741364cedae1dbe2d5ee443536f)`(FString && NewValue)` | Sets the value of Etag using move semantics.
`public inline FString & `[`GetStrRep`](#structFRHAPI__CacheInfo_1aa2c8e02237725aeb366b3ad9d4321a84)`()` | Gets the value of StrRep_Optional, regardless of it having been set.
`public inline const FString & `[`GetStrRep`](#structFRHAPI__CacheInfo_1a3770dab27ec97bbd78cff0687c6a1419)`() const` | Gets the value of StrRep_Optional, regardless of it having been set.
`public inline const FString & `[`GetStrRep`](#structFRHAPI__CacheInfo_1ad6577093d7ff910a546f357f63cd6678)`(const FString & DefaultValue) const` | Gets the value of StrRep_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStrRep`](#structFRHAPI__CacheInfo_1ade0b14154bf2de9b79dd99a5f82f0e3f)`(FString & OutValue) const` | Fills OutValue with the value of StrRep_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStrRepOrNull`](#structFRHAPI__CacheInfo_1a1e2371d34addfd12dbb140d2657269c7)`()` | Returns a pointer to StrRep_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStrRepOrNull`](#structFRHAPI__CacheInfo_1af2861c77379562d11e31f7130c42562e)`() const` | Returns a pointer to StrRep_Optional, if it has been set, otherwise returns nullptr.
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

#### `public virtual void `[`WriteJson`](#structFRHAPI__CacheInfo_1aafc272a2c6203c4963b614cc32afdd0f)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__CacheInfo_1aafc272a2c6203c4963b614cc32afdd0f"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetEtag`](#structFRHAPI__CacheInfo_1a3eeacaaa962ca3a8c2dbd5c786c03d47)`()` <a id="structFRHAPI__CacheInfo_1a3eeacaaa962ca3a8c2dbd5c786c03d47"></a>

Gets the value of Etag.

#### `public inline const FString & `[`GetEtag`](#structFRHAPI__CacheInfo_1a70906082e6cf7aaaccfcb3a28914df4a)`() const` <a id="structFRHAPI__CacheInfo_1a70906082e6cf7aaaccfcb3a28914df4a"></a>

Gets the value of Etag.

#### `public inline void `[`SetEtag`](#structFRHAPI__CacheInfo_1a57c41212b3e33053226ddd2a4931c4eb)`(const FString & NewValue)` <a id="structFRHAPI__CacheInfo_1a57c41212b3e33053226ddd2a4931c4eb"></a>

Sets the value of Etag.

#### `public inline void `[`SetEtag`](#structFRHAPI__CacheInfo_1a7bdb2741364cedae1dbe2d5ee443536f)`(FString && NewValue)` <a id="structFRHAPI__CacheInfo_1a7bdb2741364cedae1dbe2d5ee443536f"></a>

Sets the value of Etag using move semantics.

#### `public inline FString & `[`GetStrRep`](#structFRHAPI__CacheInfo_1aa2c8e02237725aeb366b3ad9d4321a84)`()` <a id="structFRHAPI__CacheInfo_1aa2c8e02237725aeb366b3ad9d4321a84"></a>

Gets the value of StrRep_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStrRep`](#structFRHAPI__CacheInfo_1a3770dab27ec97bbd78cff0687c6a1419)`() const` <a id="structFRHAPI__CacheInfo_1a3770dab27ec97bbd78cff0687c6a1419"></a>

Gets the value of StrRep_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStrRep`](#structFRHAPI__CacheInfo_1ad6577093d7ff910a546f357f63cd6678)`(const FString & DefaultValue) const` <a id="structFRHAPI__CacheInfo_1ad6577093d7ff910a546f357f63cd6678"></a>

Gets the value of StrRep_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStrRep`](#structFRHAPI__CacheInfo_1ade0b14154bf2de9b79dd99a5f82f0e3f)`(FString & OutValue) const` <a id="structFRHAPI__CacheInfo_1ade0b14154bf2de9b79dd99a5f82f0e3f"></a>

Fills OutValue with the value of StrRep_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStrRepOrNull`](#structFRHAPI__CacheInfo_1a1e2371d34addfd12dbb140d2657269c7)`()` <a id="structFRHAPI__CacheInfo_1a1e2371d34addfd12dbb140d2657269c7"></a>

Returns a pointer to StrRep_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStrRepOrNull`](#structFRHAPI__CacheInfo_1af2861c77379562d11e31f7130c42562e)`() const` <a id="structFRHAPI__CacheInfo_1af2861c77379562d11e31f7130c42562e"></a>

Returns a pointer to StrRep_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStrRep`](#structFRHAPI__CacheInfo_1ad45561fa18f77b759e02d286afb60457)`(const FString & NewValue)` <a id="structFRHAPI__CacheInfo_1ad45561fa18f77b759e02d286afb60457"></a>

Sets the value of StrRep_Optional and also sets StrRep_IsSet to true.

#### `public inline void `[`SetStrRep`](#structFRHAPI__CacheInfo_1af0b364cb74dde5fa2b13a75d7101d7cb)`(FString && NewValue)` <a id="structFRHAPI__CacheInfo_1af0b364cb74dde5fa2b13a75d7101d7cb"></a>

Sets the value of StrRep_Optional and also sets StrRep_IsSet to true using move semantics.

#### `public inline void `[`ClearStrRep`](#structFRHAPI__CacheInfo_1a961e7ae4d42f98b5708fa842a80bb990)`()` <a id="structFRHAPI__CacheInfo_1a961e7ae4d42f98b5708fa842a80bb990"></a>

Clears the value of StrRep_Optional and sets StrRep_IsSet to false.

#### `public inline bool `[`IsStrRepSet`](#structFRHAPI__CacheInfo_1a1f3fd80b1781eb8cdd9107030b456f8d)`() const` <a id="structFRHAPI__CacheInfo_1a1f3fd80b1781eb8cdd9107030b456f8d"></a>

Checks whether StrRep_Optional has been set.

