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
`public virtual bool `[`FromJson`](#structFRHAPI__CacheInfo_1a2071a5d33c2c1d33c972a45529de530a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__CacheInfo_1abada52c839a7586b78eb2635a539290d)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetEtag`](#structFRHAPI__CacheInfo_1a1fb24b4a6945b3c4e8ad2888321d7039)`()` | Gets the value of Etag.
`public inline const FString & `[`GetEtag`](#structFRHAPI__CacheInfo_1a4635c32c790fa334c7c9e5bbd7d38dff)`() const` | Gets the value of Etag.
`public inline void `[`SetEtag`](#structFRHAPI__CacheInfo_1a57c41212b3e33053226ddd2a4931c4eb)`(const FString & NewValue)` | Sets the value of Etag.
`public inline void `[`SetEtag`](#structFRHAPI__CacheInfo_1a7bdb2741364cedae1dbe2d5ee443536f)`(FString && NewValue)` | Sets the value of Etag using move semantics.

### Members

#### `public FString `[`Etag`](#structFRHAPI__CacheInfo_1a3865c393796a7c19f6d7a654189fabaf) <a id="structFRHAPI__CacheInfo_1a3865c393796a7c19f6d7a654189fabaf"></a>

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

