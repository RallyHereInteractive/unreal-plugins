---
title: RHAPI_FileResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_FileResponse`](#structFRHAPI__FileResponse) | 

## struct `FRHAPI_FileResponse` <a id="structFRHAPI__FileResponse"></a>

```
struct FRHAPI_FileResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Name`](#structFRHAPI__FileResponse_1a435d253c1dedbfea366457c8eee9aca9) | 
`public int32 `[`Size`](#structFRHAPI__FileResponse_1a5bad6f39bc7893caf0eb5e7b834bcef3) | 
`public FString `[`ContentType`](#structFRHAPI__FileResponse_1a5a3fc5a9ae9529bcec5a87b01178bd3e) | 
`public FDateTime `[`CreatedTimestamp`](#structFRHAPI__FileResponse_1ae862f97e31ca9b769a5b3b1c1e104fdd) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public virtual bool `[`FromJson`](#structFRHAPI__FileResponse_1a0e24bb57749f3c550d17c9711324bd93)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__FileResponse_1a34592519bfb52c8c3cb0181c03b88247)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetName`](#structFRHAPI__FileResponse_1a3a5a461a83b31999dc55e806f77ab988)`()` | Gets the value of Name.
`public inline const FString & `[`GetName`](#structFRHAPI__FileResponse_1a631f8d2e583304c4fd10fead29438067)`() const` | Gets the value of Name.
`public inline void `[`SetName`](#structFRHAPI__FileResponse_1a9c5ee25fd63e4b1a0ba51845038c8371)`(const FString & NewValue)` | Sets the value of Name.
`public inline void `[`SetName`](#structFRHAPI__FileResponse_1a6f7330d622cbec795398d357a3bae33b)`(FString && NewValue)` | Sets the value of Name using move semantics.
`public inline int32 & `[`GetSize`](#structFRHAPI__FileResponse_1aabbe39b3935609604ae0c62af677533d)`()` | Gets the value of Size.
`public inline const int32 & `[`GetSize`](#structFRHAPI__FileResponse_1a4114719798bad22f2bbab2b513f66943)`() const` | Gets the value of Size.
`public inline void `[`SetSize`](#structFRHAPI__FileResponse_1a56bf6d6c7f130023bc5817d37faf8420)`(const int32 & NewValue)` | Sets the value of Size.
`public inline void `[`SetSize`](#structFRHAPI__FileResponse_1aeadb4a3b15058253e148fbbc3cfaf8f0)`(int32 && NewValue)` | Sets the value of Size using move semantics.
`public inline bool `[`IsSizeDefaultValue`](#structFRHAPI__FileResponse_1a53731a77c1b7fafb991b976576e34bdb)`() const` | Returns true if Size matches the default value.
`public inline void `[`SetSizeToDefault`](#structFRHAPI__FileResponse_1a197e08b0f788382c8078833a9fd7e470)`()` | Sets the value of Size to its default
`public inline FString & `[`GetContentType`](#structFRHAPI__FileResponse_1a2853328008d0951135e39e443454e576)`()` | Gets the value of ContentType.
`public inline const FString & `[`GetContentType`](#structFRHAPI__FileResponse_1a7dc1bb1a4b779f94cecda8aab7606771)`() const` | Gets the value of ContentType.
`public inline void `[`SetContentType`](#structFRHAPI__FileResponse_1a964013e8c8681bb566f2666cbd9208b9)`(const FString & NewValue)` | Sets the value of ContentType.
`public inline void `[`SetContentType`](#structFRHAPI__FileResponse_1abef9d54c6f5c63f3d55a10c2dc2954dc)`(FString && NewValue)` | Sets the value of ContentType using move semantics.
`public inline FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__FileResponse_1a4180018bd5ff5c28151640b9387c3505)`()` | Gets the value of CreatedTimestamp.
`public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__FileResponse_1a4ba3c19e4396d4b86e124b926e0f2747)`() const` | Gets the value of CreatedTimestamp.
`public inline void `[`SetCreatedTimestamp`](#structFRHAPI__FileResponse_1a1731b5be88a1b4baa844af74490fac48)`(const FDateTime & NewValue)` | Sets the value of CreatedTimestamp.
`public inline void `[`SetCreatedTimestamp`](#structFRHAPI__FileResponse_1aceef407f09b876099521a93eb91fa3d4)`(FDateTime && NewValue)` | Sets the value of CreatedTimestamp using move semantics.

### Members

#### `public FString `[`Name`](#structFRHAPI__FileResponse_1a435d253c1dedbfea366457c8eee9aca9) <a id="structFRHAPI__FileResponse_1a435d253c1dedbfea366457c8eee9aca9"></a>

#### `public int32 `[`Size`](#structFRHAPI__FileResponse_1a5bad6f39bc7893caf0eb5e7b834bcef3) <a id="structFRHAPI__FileResponse_1a5bad6f39bc7893caf0eb5e7b834bcef3"></a>

#### `public FString `[`ContentType`](#structFRHAPI__FileResponse_1a5a3fc5a9ae9529bcec5a87b01178bd3e) <a id="structFRHAPI__FileResponse_1a5a3fc5a9ae9529bcec5a87b01178bd3e"></a>

#### `public FDateTime `[`CreatedTimestamp`](#structFRHAPI__FileResponse_1ae862f97e31ca9b769a5b3b1c1e104fdd) <a id="structFRHAPI__FileResponse_1ae862f97e31ca9b769a5b3b1c1e104fdd"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public virtual bool `[`FromJson`](#structFRHAPI__FileResponse_1a0e24bb57749f3c550d17c9711324bd93)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__FileResponse_1a0e24bb57749f3c550d17c9711324bd93"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__FileResponse_1a34592519bfb52c8c3cb0181c03b88247)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__FileResponse_1a34592519bfb52c8c3cb0181c03b88247"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetName`](#structFRHAPI__FileResponse_1a3a5a461a83b31999dc55e806f77ab988)`()` <a id="structFRHAPI__FileResponse_1a3a5a461a83b31999dc55e806f77ab988"></a>

Gets the value of Name.

#### `public inline const FString & `[`GetName`](#structFRHAPI__FileResponse_1a631f8d2e583304c4fd10fead29438067)`() const` <a id="structFRHAPI__FileResponse_1a631f8d2e583304c4fd10fead29438067"></a>

Gets the value of Name.

#### `public inline void `[`SetName`](#structFRHAPI__FileResponse_1a9c5ee25fd63e4b1a0ba51845038c8371)`(const FString & NewValue)` <a id="structFRHAPI__FileResponse_1a9c5ee25fd63e4b1a0ba51845038c8371"></a>

Sets the value of Name.

#### `public inline void `[`SetName`](#structFRHAPI__FileResponse_1a6f7330d622cbec795398d357a3bae33b)`(FString && NewValue)` <a id="structFRHAPI__FileResponse_1a6f7330d622cbec795398d357a3bae33b"></a>

Sets the value of Name using move semantics.

#### `public inline int32 & `[`GetSize`](#structFRHAPI__FileResponse_1aabbe39b3935609604ae0c62af677533d)`()` <a id="structFRHAPI__FileResponse_1aabbe39b3935609604ae0c62af677533d"></a>

Gets the value of Size.

#### `public inline const int32 & `[`GetSize`](#structFRHAPI__FileResponse_1a4114719798bad22f2bbab2b513f66943)`() const` <a id="structFRHAPI__FileResponse_1a4114719798bad22f2bbab2b513f66943"></a>

Gets the value of Size.

#### `public inline void `[`SetSize`](#structFRHAPI__FileResponse_1a56bf6d6c7f130023bc5817d37faf8420)`(const int32 & NewValue)` <a id="structFRHAPI__FileResponse_1a56bf6d6c7f130023bc5817d37faf8420"></a>

Sets the value of Size.

#### `public inline void `[`SetSize`](#structFRHAPI__FileResponse_1aeadb4a3b15058253e148fbbc3cfaf8f0)`(int32 && NewValue)` <a id="structFRHAPI__FileResponse_1aeadb4a3b15058253e148fbbc3cfaf8f0"></a>

Sets the value of Size using move semantics.

#### `public inline bool `[`IsSizeDefaultValue`](#structFRHAPI__FileResponse_1a53731a77c1b7fafb991b976576e34bdb)`() const` <a id="structFRHAPI__FileResponse_1a53731a77c1b7fafb991b976576e34bdb"></a>

Returns true if Size matches the default value.

#### `public inline void `[`SetSizeToDefault`](#structFRHAPI__FileResponse_1a197e08b0f788382c8078833a9fd7e470)`()` <a id="structFRHAPI__FileResponse_1a197e08b0f788382c8078833a9fd7e470"></a>

Sets the value of Size to its default

#### `public inline FString & `[`GetContentType`](#structFRHAPI__FileResponse_1a2853328008d0951135e39e443454e576)`()` <a id="structFRHAPI__FileResponse_1a2853328008d0951135e39e443454e576"></a>

Gets the value of ContentType.

#### `public inline const FString & `[`GetContentType`](#structFRHAPI__FileResponse_1a7dc1bb1a4b779f94cecda8aab7606771)`() const` <a id="structFRHAPI__FileResponse_1a7dc1bb1a4b779f94cecda8aab7606771"></a>

Gets the value of ContentType.

#### `public inline void `[`SetContentType`](#structFRHAPI__FileResponse_1a964013e8c8681bb566f2666cbd9208b9)`(const FString & NewValue)` <a id="structFRHAPI__FileResponse_1a964013e8c8681bb566f2666cbd9208b9"></a>

Sets the value of ContentType.

#### `public inline void `[`SetContentType`](#structFRHAPI__FileResponse_1abef9d54c6f5c63f3d55a10c2dc2954dc)`(FString && NewValue)` <a id="structFRHAPI__FileResponse_1abef9d54c6f5c63f3d55a10c2dc2954dc"></a>

Sets the value of ContentType using move semantics.

#### `public inline FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__FileResponse_1a4180018bd5ff5c28151640b9387c3505)`()` <a id="structFRHAPI__FileResponse_1a4180018bd5ff5c28151640b9387c3505"></a>

Gets the value of CreatedTimestamp.

#### `public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__FileResponse_1a4ba3c19e4396d4b86e124b926e0f2747)`() const` <a id="structFRHAPI__FileResponse_1a4ba3c19e4396d4b86e124b926e0f2747"></a>

Gets the value of CreatedTimestamp.

#### `public inline void `[`SetCreatedTimestamp`](#structFRHAPI__FileResponse_1a1731b5be88a1b4baa844af74490fac48)`(const FDateTime & NewValue)` <a id="structFRHAPI__FileResponse_1a1731b5be88a1b4baa844af74490fac48"></a>

Sets the value of CreatedTimestamp.

#### `public inline void `[`SetCreatedTimestamp`](#structFRHAPI__FileResponse_1aceef407f09b876099521a93eb91fa3d4)`(FDateTime && NewValue)` <a id="structFRHAPI__FileResponse_1aceef407f09b876099521a93eb91fa3d4"></a>

Sets the value of CreatedTimestamp using move semantics.

