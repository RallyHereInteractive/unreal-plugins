---
title: RHAPI_KVV1
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_KVV1`](#structFRHAPI__KVV1) | A key/value pair that represents a setting to be used by the client.

## struct `FRHAPI_KVV1` <a id="structFRHAPI__KVV1"></a>

```
struct FRHAPI_KVV1
  : public FRHAPI_Model
```

A key/value pair that represents a setting to be used by the client.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Key`](#structFRHAPI__KVV1_1a4032dad7defb4a7069362c1164c8c7db) | The key for the setting.
`public FString `[`Value`](#structFRHAPI__KVV1_1a7371b5d7b85e04f8f8e8826b1f552fe9) | The value for the setting.
`public FString `[`Notes_Optional`](#structFRHAPI__KVV1_1a85ee373f386631eb4de63c619e9e32cd) | 
`public bool `[`Notes_IsSet`](#structFRHAPI__KVV1_1a0b4646a683aa065edf28203a13a44358) | true if Notes_Optional has been set to a value
`public bool `[`Notes_IsNull`](#structFRHAPI__KVV1_1af8953ff35d2fac6eac48c1b453073dd7) | true if Notes_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__KVV1_1a11f5ed51e69d88e7d414aaf5c335531d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__KVV1_1ab1a6e32e7af0cd22f95169888f2fde71)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetKey`](#structFRHAPI__KVV1_1a3d4bb7d62fdf3038f5f0ba0a919f70cc)`()` | Gets the value of Key.
`public inline FORCEINLINE const FString & `[`GetKey`](#structFRHAPI__KVV1_1a5bdcd9142b052fd78638cccbe1b20b19)`() const` | Gets the value of Key.
`public inline FORCEINLINE void `[`SetKey`](#structFRHAPI__KVV1_1afd29363bb8b8d7c20c9dbc39f8f73f1f)`(const FString & NewValue)` | Sets the value of Key.
`public inline FORCEINLINE void `[`SetKey`](#structFRHAPI__KVV1_1a24db072d5f3d3613d9e5990523d59f87)`(FString && NewValue)` | Sets the value of Key using move semantics.
`public inline FORCEINLINE FString & `[`GetValue`](#structFRHAPI__KVV1_1af449f2f7dde3afb4e2ddc2e1decf41e5)`()` | Gets the value of Value.
`public inline FORCEINLINE const FString & `[`GetValue`](#structFRHAPI__KVV1_1af85eb29f957565e779024fe27011f104)`() const` | Gets the value of Value.
`public inline FORCEINLINE void `[`SetValue`](#structFRHAPI__KVV1_1a64e48276bd39d37e55fed06c696409d2)`(const FString & NewValue)` | Sets the value of Value.
`public inline FORCEINLINE void `[`SetValue`](#structFRHAPI__KVV1_1aec21ac71062c43f4dd56246ac6557626)`(FString && NewValue)` | Sets the value of Value using move semantics.
`public inline FORCEINLINE FString & `[`GetNotes`](#structFRHAPI__KVV1_1afa4a11a8145090378c8f687f13dd081f)`()` | Gets the value of Notes_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetNotes`](#structFRHAPI__KVV1_1a7090ae2fdf7256bc53191b65e29b4122)`() const` | Gets the value of Notes_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetNotes`](#structFRHAPI__KVV1_1a8e0393339777d3e80bc64b4370b2ffdc)`(const FString & DefaultValue) const` | Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetNotes`](#structFRHAPI__KVV1_1a6f08a2def63d24a1a234425881cc3834)`(FString & OutValue) const` | Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetNotesOrNull`](#structFRHAPI__KVV1_1ab546b9ed77154c16e49f5130fad29617)`()` | Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetNotesOrNull`](#structFRHAPI__KVV1_1aedcc505500e222a90532e4518521095d)`() const` | Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetNotes`](#structFRHAPI__KVV1_1a586c545973a5bb53ab85282b2b2b6046)`(const FString & NewValue)` | Sets the value of Notes_Optional and also sets Notes_IsSet to true.
`public inline FORCEINLINE void `[`SetNotes`](#structFRHAPI__KVV1_1a5d7c493d12b8ea33d7101d28ba8ee294)`(FString && NewValue)` | Sets the value of Notes_Optional and also sets Notes_IsSet to true using move semantics.
`public inline void `[`ClearNotes`](#structFRHAPI__KVV1_1af6138e37d8c64331aa5f9877e5fd3bab)`()` | Clears the value of Notes_Optional and sets Notes_IsSet to false.
`public inline FORCEINLINE void `[`SetNotesToNull`](#structFRHAPI__KVV1_1ac3357946889b9088d6945fa2f4afefe8)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsNotesNull`](#structFRHAPI__KVV1_1a526f8b314f5fc77bc8a103df24760071)`() const` | Checks whether Notes_Optional is set to null.

### Members

#### `public FString `[`Key`](#structFRHAPI__KVV1_1a4032dad7defb4a7069362c1164c8c7db) <a id="structFRHAPI__KVV1_1a4032dad7defb4a7069362c1164c8c7db"></a>

The key for the setting.

#### `public FString `[`Value`](#structFRHAPI__KVV1_1a7371b5d7b85e04f8f8e8826b1f552fe9) <a id="structFRHAPI__KVV1_1a7371b5d7b85e04f8f8e8826b1f552fe9"></a>

The value for the setting.

#### `public FString `[`Notes_Optional`](#structFRHAPI__KVV1_1a85ee373f386631eb4de63c619e9e32cd) <a id="structFRHAPI__KVV1_1a85ee373f386631eb4de63c619e9e32cd"></a>

#### `public bool `[`Notes_IsSet`](#structFRHAPI__KVV1_1a0b4646a683aa065edf28203a13a44358) <a id="structFRHAPI__KVV1_1a0b4646a683aa065edf28203a13a44358"></a>

true if Notes_Optional has been set to a value

#### `public bool `[`Notes_IsNull`](#structFRHAPI__KVV1_1af8953ff35d2fac6eac48c1b453073dd7) <a id="structFRHAPI__KVV1_1af8953ff35d2fac6eac48c1b453073dd7"></a>

true if Notes_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__KVV1_1a11f5ed51e69d88e7d414aaf5c335531d)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__KVV1_1a11f5ed51e69d88e7d414aaf5c335531d"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__KVV1_1ab1a6e32e7af0cd22f95169888f2fde71)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__KVV1_1ab1a6e32e7af0cd22f95169888f2fde71"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetKey`](#structFRHAPI__KVV1_1a3d4bb7d62fdf3038f5f0ba0a919f70cc)`()` <a id="structFRHAPI__KVV1_1a3d4bb7d62fdf3038f5f0ba0a919f70cc"></a>

Gets the value of Key.

#### `public inline FORCEINLINE const FString & `[`GetKey`](#structFRHAPI__KVV1_1a5bdcd9142b052fd78638cccbe1b20b19)`() const` <a id="structFRHAPI__KVV1_1a5bdcd9142b052fd78638cccbe1b20b19"></a>

Gets the value of Key.

#### `public inline FORCEINLINE void `[`SetKey`](#structFRHAPI__KVV1_1afd29363bb8b8d7c20c9dbc39f8f73f1f)`(const FString & NewValue)` <a id="structFRHAPI__KVV1_1afd29363bb8b8d7c20c9dbc39f8f73f1f"></a>

Sets the value of Key.

#### `public inline FORCEINLINE void `[`SetKey`](#structFRHAPI__KVV1_1a24db072d5f3d3613d9e5990523d59f87)`(FString && NewValue)` <a id="structFRHAPI__KVV1_1a24db072d5f3d3613d9e5990523d59f87"></a>

Sets the value of Key using move semantics.

#### `public inline FORCEINLINE FString & `[`GetValue`](#structFRHAPI__KVV1_1af449f2f7dde3afb4e2ddc2e1decf41e5)`()` <a id="structFRHAPI__KVV1_1af449f2f7dde3afb4e2ddc2e1decf41e5"></a>

Gets the value of Value.

#### `public inline FORCEINLINE const FString & `[`GetValue`](#structFRHAPI__KVV1_1af85eb29f957565e779024fe27011f104)`() const` <a id="structFRHAPI__KVV1_1af85eb29f957565e779024fe27011f104"></a>

Gets the value of Value.

#### `public inline FORCEINLINE void `[`SetValue`](#structFRHAPI__KVV1_1a64e48276bd39d37e55fed06c696409d2)`(const FString & NewValue)` <a id="structFRHAPI__KVV1_1a64e48276bd39d37e55fed06c696409d2"></a>

Sets the value of Value.

#### `public inline FORCEINLINE void `[`SetValue`](#structFRHAPI__KVV1_1aec21ac71062c43f4dd56246ac6557626)`(FString && NewValue)` <a id="structFRHAPI__KVV1_1aec21ac71062c43f4dd56246ac6557626"></a>

Sets the value of Value using move semantics.

#### `public inline FORCEINLINE FString & `[`GetNotes`](#structFRHAPI__KVV1_1afa4a11a8145090378c8f687f13dd081f)`()` <a id="structFRHAPI__KVV1_1afa4a11a8145090378c8f687f13dd081f"></a>

Gets the value of Notes_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetNotes`](#structFRHAPI__KVV1_1a7090ae2fdf7256bc53191b65e29b4122)`() const` <a id="structFRHAPI__KVV1_1a7090ae2fdf7256bc53191b65e29b4122"></a>

Gets the value of Notes_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetNotes`](#structFRHAPI__KVV1_1a8e0393339777d3e80bc64b4370b2ffdc)`(const FString & DefaultValue) const` <a id="structFRHAPI__KVV1_1a8e0393339777d3e80bc64b4370b2ffdc"></a>

Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetNotes`](#structFRHAPI__KVV1_1a6f08a2def63d24a1a234425881cc3834)`(FString & OutValue) const` <a id="structFRHAPI__KVV1_1a6f08a2def63d24a1a234425881cc3834"></a>

Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetNotesOrNull`](#structFRHAPI__KVV1_1ab546b9ed77154c16e49f5130fad29617)`()` <a id="structFRHAPI__KVV1_1ab546b9ed77154c16e49f5130fad29617"></a>

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetNotesOrNull`](#structFRHAPI__KVV1_1aedcc505500e222a90532e4518521095d)`() const` <a id="structFRHAPI__KVV1_1aedcc505500e222a90532e4518521095d"></a>

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetNotes`](#structFRHAPI__KVV1_1a586c545973a5bb53ab85282b2b2b6046)`(const FString & NewValue)` <a id="structFRHAPI__KVV1_1a586c545973a5bb53ab85282b2b2b6046"></a>

Sets the value of Notes_Optional and also sets Notes_IsSet to true.

#### `public inline FORCEINLINE void `[`SetNotes`](#structFRHAPI__KVV1_1a5d7c493d12b8ea33d7101d28ba8ee294)`(FString && NewValue)` <a id="structFRHAPI__KVV1_1a5d7c493d12b8ea33d7101d28ba8ee294"></a>

Sets the value of Notes_Optional and also sets Notes_IsSet to true using move semantics.

#### `public inline void `[`ClearNotes`](#structFRHAPI__KVV1_1af6138e37d8c64331aa5f9877e5fd3bab)`()` <a id="structFRHAPI__KVV1_1af6138e37d8c64331aa5f9877e5fd3bab"></a>

Clears the value of Notes_Optional and sets Notes_IsSet to false.

#### `public inline FORCEINLINE void `[`SetNotesToNull`](#structFRHAPI__KVV1_1ac3357946889b9088d6945fa2f4afefe8)`()` <a id="structFRHAPI__KVV1_1ac3357946889b9088d6945fa2f4afefe8"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsNotesNull`](#structFRHAPI__KVV1_1a526f8b314f5fc77bc8a103df24760071)`() const` <a id="structFRHAPI__KVV1_1a526f8b314f5fc77bc8a103df24760071"></a>

Checks whether Notes_Optional is set to null.

