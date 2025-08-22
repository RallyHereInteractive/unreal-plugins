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
`public inline FORCEINLINE FString & `[`GetEtag`](#structFRHAPI__CacheInfo_1abc89282fc9acd0ac762f412208ecbf6d)`()` | Gets the value of Etag.
`public inline FORCEINLINE const FString & `[`GetEtag`](#structFRHAPI__CacheInfo_1ac5cf5ca277e8fd176f74c6e70cc69f20)`() const` | Gets the value of Etag.
`public inline FORCEINLINE void `[`SetEtag`](#structFRHAPI__CacheInfo_1a15ee8921826097720a05598d88497a0e)`(const FString & NewValue)` | Sets the value of Etag.
`public inline FORCEINLINE void `[`SetEtag`](#structFRHAPI__CacheInfo_1adef5f42e363e96408a89fbed04de56d2)`(FString && NewValue)` | Sets the value of Etag using move semantics.

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

#### `public inline FORCEINLINE FString & `[`GetEtag`](#structFRHAPI__CacheInfo_1abc89282fc9acd0ac762f412208ecbf6d)`()` <a id="structFRHAPI__CacheInfo_1abc89282fc9acd0ac762f412208ecbf6d"></a>

Gets the value of Etag.

#### `public inline FORCEINLINE const FString & `[`GetEtag`](#structFRHAPI__CacheInfo_1ac5cf5ca277e8fd176f74c6e70cc69f20)`() const` <a id="structFRHAPI__CacheInfo_1ac5cf5ca277e8fd176f74c6e70cc69f20"></a>

Gets the value of Etag.

#### `public inline FORCEINLINE void `[`SetEtag`](#structFRHAPI__CacheInfo_1a15ee8921826097720a05598d88497a0e)`(const FString & NewValue)` <a id="structFRHAPI__CacheInfo_1a15ee8921826097720a05598d88497a0e"></a>

Sets the value of Etag.

#### `public inline FORCEINLINE void `[`SetEtag`](#structFRHAPI__CacheInfo_1adef5f42e363e96408a89fbed04de56d2)`(FString && NewValue)` <a id="structFRHAPI__CacheInfo_1adef5f42e363e96408a89fbed04de56d2"></a>

Sets the value of Etag using move semantics.

