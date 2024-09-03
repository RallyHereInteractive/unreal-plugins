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
`public virtual void `[`WriteJson`](#structFRHAPI__KVV1_1a8568a7b0634763069760551ecf61ab6e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetKey`](#structFRHAPI__KVV1_1a67d0feb893b0c257bb605749ad8c4a6e)`()` | Gets the value of Key.
`public inline const FString & `[`GetKey`](#structFRHAPI__KVV1_1ad0a5f00fbc212bfd868aa0e84b6b3e3c)`() const` | Gets the value of Key.
`public inline void `[`SetKey`](#structFRHAPI__KVV1_1ab5cfb7d89de63853749921cbdd61e785)`(const FString & NewValue)` | Sets the value of Key.
`public inline void `[`SetKey`](#structFRHAPI__KVV1_1a362e6e765193edd8772a9307da3cbfd5)`(FString && NewValue)` | Sets the value of Key using move semantics.
`public inline FString & `[`GetValue`](#structFRHAPI__KVV1_1a5b96d26a812685e065ed19287e12a211)`()` | Gets the value of Value.
`public inline const FString & `[`GetValue`](#structFRHAPI__KVV1_1ab737344aaeb184d03e0c32cd0e3f0e20)`() const` | Gets the value of Value.
`public inline void `[`SetValue`](#structFRHAPI__KVV1_1aa1b11486e3ee8b660d26c44473b7ea8d)`(const FString & NewValue)` | Sets the value of Value.
`public inline void `[`SetValue`](#structFRHAPI__KVV1_1a62f331ec1b744b20a9207532c5e11de7)`(FString && NewValue)` | Sets the value of Value using move semantics.
`public inline FString & `[`GetNotes`](#structFRHAPI__KVV1_1aabb05a907e74feee14a516b9574d99e1)`()` | Gets the value of Notes_Optional, regardless of it having been set.
`public inline const FString & `[`GetNotes`](#structFRHAPI__KVV1_1a42091b149fc802a59785a4cd2d7f11ab)`() const` | Gets the value of Notes_Optional, regardless of it having been set.
`public inline const FString & `[`GetNotes`](#structFRHAPI__KVV1_1a71ffae33467f167421b60a23444a3ef7)`(const FString & DefaultValue) const` | Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNotes`](#structFRHAPI__KVV1_1a6f418b98db58d45a0d99b3d879f76540)`(FString & OutValue) const` | Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetNotesOrNull`](#structFRHAPI__KVV1_1ad31d046db72075d0e9731f188fe45083)`()` | Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetNotesOrNull`](#structFRHAPI__KVV1_1a7d5ccfbfd237c43bb1c2425558248bd1)`() const` | Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNotes`](#structFRHAPI__KVV1_1ae036966c62919eabae4a3dc8dfb57cfc)`(const FString & NewValue)` | Sets the value of Notes_Optional and also sets Notes_IsSet to true.
`public inline void `[`SetNotes`](#structFRHAPI__KVV1_1a8cf2a83390b6f97f5ca27e5837c6af20)`(FString && NewValue)` | Sets the value of Notes_Optional and also sets Notes_IsSet to true using move semantics.
`public inline void `[`ClearNotes`](#structFRHAPI__KVV1_1af6138e37d8c64331aa5f9877e5fd3bab)`()` | Clears the value of Notes_Optional and sets Notes_IsSet to false.
`public inline bool `[`IsNotesSet`](#structFRHAPI__KVV1_1ad508a91f34e21b50eb7ffb3941f71bf6)`() const` | Checks whether Notes_Optional has been set.
`public inline void `[`SetNotesToNull`](#structFRHAPI__KVV1_1a8f5d46c72646c6b7d956d431868428f7)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsNotesNull`](#structFRHAPI__KVV1_1ad39f6f297acf47d794702089280bc7c4)`() const` | Checks whether Notes_Optional is set to null.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__KVV1_1a8568a7b0634763069760551ecf61ab6e)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__KVV1_1a8568a7b0634763069760551ecf61ab6e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetKey`](#structFRHAPI__KVV1_1a67d0feb893b0c257bb605749ad8c4a6e)`()` <a id="structFRHAPI__KVV1_1a67d0feb893b0c257bb605749ad8c4a6e"></a>

Gets the value of Key.

#### `public inline const FString & `[`GetKey`](#structFRHAPI__KVV1_1ad0a5f00fbc212bfd868aa0e84b6b3e3c)`() const` <a id="structFRHAPI__KVV1_1ad0a5f00fbc212bfd868aa0e84b6b3e3c"></a>

Gets the value of Key.

#### `public inline void `[`SetKey`](#structFRHAPI__KVV1_1ab5cfb7d89de63853749921cbdd61e785)`(const FString & NewValue)` <a id="structFRHAPI__KVV1_1ab5cfb7d89de63853749921cbdd61e785"></a>

Sets the value of Key.

#### `public inline void `[`SetKey`](#structFRHAPI__KVV1_1a362e6e765193edd8772a9307da3cbfd5)`(FString && NewValue)` <a id="structFRHAPI__KVV1_1a362e6e765193edd8772a9307da3cbfd5"></a>

Sets the value of Key using move semantics.

#### `public inline FString & `[`GetValue`](#structFRHAPI__KVV1_1a5b96d26a812685e065ed19287e12a211)`()` <a id="structFRHAPI__KVV1_1a5b96d26a812685e065ed19287e12a211"></a>

Gets the value of Value.

#### `public inline const FString & `[`GetValue`](#structFRHAPI__KVV1_1ab737344aaeb184d03e0c32cd0e3f0e20)`() const` <a id="structFRHAPI__KVV1_1ab737344aaeb184d03e0c32cd0e3f0e20"></a>

Gets the value of Value.

#### `public inline void `[`SetValue`](#structFRHAPI__KVV1_1aa1b11486e3ee8b660d26c44473b7ea8d)`(const FString & NewValue)` <a id="structFRHAPI__KVV1_1aa1b11486e3ee8b660d26c44473b7ea8d"></a>

Sets the value of Value.

#### `public inline void `[`SetValue`](#structFRHAPI__KVV1_1a62f331ec1b744b20a9207532c5e11de7)`(FString && NewValue)` <a id="structFRHAPI__KVV1_1a62f331ec1b744b20a9207532c5e11de7"></a>

Sets the value of Value using move semantics.

#### `public inline FString & `[`GetNotes`](#structFRHAPI__KVV1_1aabb05a907e74feee14a516b9574d99e1)`()` <a id="structFRHAPI__KVV1_1aabb05a907e74feee14a516b9574d99e1"></a>

Gets the value of Notes_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetNotes`](#structFRHAPI__KVV1_1a42091b149fc802a59785a4cd2d7f11ab)`() const` <a id="structFRHAPI__KVV1_1a42091b149fc802a59785a4cd2d7f11ab"></a>

Gets the value of Notes_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetNotes`](#structFRHAPI__KVV1_1a71ffae33467f167421b60a23444a3ef7)`(const FString & DefaultValue) const` <a id="structFRHAPI__KVV1_1a71ffae33467f167421b60a23444a3ef7"></a>

Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetNotes`](#structFRHAPI__KVV1_1a6f418b98db58d45a0d99b3d879f76540)`(FString & OutValue) const` <a id="structFRHAPI__KVV1_1a6f418b98db58d45a0d99b3d879f76540"></a>

Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetNotesOrNull`](#structFRHAPI__KVV1_1ad31d046db72075d0e9731f188fe45083)`()` <a id="structFRHAPI__KVV1_1ad31d046db72075d0e9731f188fe45083"></a>

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetNotesOrNull`](#structFRHAPI__KVV1_1a7d5ccfbfd237c43bb1c2425558248bd1)`() const` <a id="structFRHAPI__KVV1_1a7d5ccfbfd237c43bb1c2425558248bd1"></a>

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetNotes`](#structFRHAPI__KVV1_1ae036966c62919eabae4a3dc8dfb57cfc)`(const FString & NewValue)` <a id="structFRHAPI__KVV1_1ae036966c62919eabae4a3dc8dfb57cfc"></a>

Sets the value of Notes_Optional and also sets Notes_IsSet to true.

#### `public inline void `[`SetNotes`](#structFRHAPI__KVV1_1a8cf2a83390b6f97f5ca27e5837c6af20)`(FString && NewValue)` <a id="structFRHAPI__KVV1_1a8cf2a83390b6f97f5ca27e5837c6af20"></a>

Sets the value of Notes_Optional and also sets Notes_IsSet to true using move semantics.

#### `public inline void `[`ClearNotes`](#structFRHAPI__KVV1_1af6138e37d8c64331aa5f9877e5fd3bab)`()` <a id="structFRHAPI__KVV1_1af6138e37d8c64331aa5f9877e5fd3bab"></a>

Clears the value of Notes_Optional and sets Notes_IsSet to false.

#### `public inline bool `[`IsNotesSet`](#structFRHAPI__KVV1_1ad508a91f34e21b50eb7ffb3941f71bf6)`() const` <a id="structFRHAPI__KVV1_1ad508a91f34e21b50eb7ffb3941f71bf6"></a>

Checks whether Notes_Optional has been set.

#### `public inline void `[`SetNotesToNull`](#structFRHAPI__KVV1_1a8f5d46c72646c6b7d956d431868428f7)`()` <a id="structFRHAPI__KVV1_1a8f5d46c72646c6b7d956d431868428f7"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsNotesNull`](#structFRHAPI__KVV1_1ad39f6f297acf47d794702089280bc7c4)`() const` <a id="structFRHAPI__KVV1_1ad39f6f297acf47d794702089280bc7c4"></a>

Checks whether Notes_Optional is set to null.

