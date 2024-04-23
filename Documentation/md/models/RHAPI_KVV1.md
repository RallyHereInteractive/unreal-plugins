# RHAPI_KVV1 <a id="group__RHAPI__KVV1"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Key`](#structFRHAPI__KVV1_1a4032dad7defb4a7069362c1164c8c7db) | The key for the setting.
`public FString `[`Value`](#structFRHAPI__KVV1_1a7371b5d7b85e04f8f8e8826b1f552fe9) | The value for the setting.
`public FString `[`Notes_Optional`](#structFRHAPI__KVV1_1a85ee373f386631eb4de63c619e9e32cd) | 
`public bool `[`Notes_IsSet`](#structFRHAPI__KVV1_1a0b4646a683aa065edf28203a13a44358) | true if Notes_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__KVV1_1a56c580398961b817d89c625eafe4bbc9)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__KVV1_1a798858ea9602e85fba57483b811160cd)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetKey`](#structFRHAPI__KVV1_1a67d0feb893b0c257bb605749ad8c4a6e)`()` | Gets the value of Key.
`public inline const FString & `[`GetKey`](#structFRHAPI__KVV1_1ad0a5f00fbc212bfd868aa0e84b6b3e3c)`() const` | Gets the value of Key.
`public inline void `[`SetKey`](#structFRHAPI__KVV1_1a4ab9a2a908a2115bbe3154c7d32c9212)`(FString NewValue)` | Sets the value of Key.
`public inline FString & `[`GetValue`](#structFRHAPI__KVV1_1a5b96d26a812685e065ed19287e12a211)`()` | Gets the value of Value.
`public inline const FString & `[`GetValue`](#structFRHAPI__KVV1_1ab737344aaeb184d03e0c32cd0e3f0e20)`() const` | Gets the value of Value.
`public inline void `[`SetValue`](#structFRHAPI__KVV1_1a138d34e0e42da071a7beeac644eb908c)`(FString NewValue)` | Sets the value of Value.
`public inline FString & `[`GetNotes`](#structFRHAPI__KVV1_1aabb05a907e74feee14a516b9574d99e1)`()` | Gets the value of Notes_Optional, regardless of it having been set.
`public inline const FString & `[`GetNotes`](#structFRHAPI__KVV1_1a42091b149fc802a59785a4cd2d7f11ab)`() const` | Gets the value of Notes_Optional, regardless of it having been set.
`public inline const FString & `[`GetNotes`](#structFRHAPI__KVV1_1a71ffae33467f167421b60a23444a3ef7)`(const FString & DefaultValue) const` | Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNotes`](#structFRHAPI__KVV1_1a6f418b98db58d45a0d99b3d879f76540)`(FString & OutValue) const` | Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetNotesOrNull`](#structFRHAPI__KVV1_1ad31d046db72075d0e9731f188fe45083)`()` | Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetNotesOrNull`](#structFRHAPI__KVV1_1a7d5ccfbfd237c43bb1c2425558248bd1)`() const` | Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNotes`](#structFRHAPI__KVV1_1a3dc7f59d7e6160327ab676ffa4a86988)`(FString NewValue)` | Sets the value of Notes_Optional and also sets Notes_IsSet to true.
`public inline void `[`ClearNotes`](#structFRHAPI__KVV1_1af6138e37d8c64331aa5f9877e5fd3bab)`()` | Clears the value of Notes_Optional and sets Notes_IsSet to false.

#### Members

#### `public FString `[`Key`](#structFRHAPI__KVV1_1a4032dad7defb4a7069362c1164c8c7db) <a id="structFRHAPI__KVV1_1a4032dad7defb4a7069362c1164c8c7db"></a>

The key for the setting.

<br>
#### `public FString `[`Value`](#structFRHAPI__KVV1_1a7371b5d7b85e04f8f8e8826b1f552fe9) <a id="structFRHAPI__KVV1_1a7371b5d7b85e04f8f8e8826b1f552fe9"></a>

The value for the setting.

<br>
#### `public FString `[`Notes_Optional`](#structFRHAPI__KVV1_1a85ee373f386631eb4de63c619e9e32cd) <a id="structFRHAPI__KVV1_1a85ee373f386631eb4de63c619e9e32cd"></a>

<br>
#### `public bool `[`Notes_IsSet`](#structFRHAPI__KVV1_1a0b4646a683aa065edf28203a13a44358) <a id="structFRHAPI__KVV1_1a0b4646a683aa065edf28203a13a44358"></a>

true if Notes_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__KVV1_1a56c580398961b817d89c625eafe4bbc9)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__KVV1_1a56c580398961b817d89c625eafe4bbc9"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__KVV1_1a798858ea9602e85fba57483b811160cd)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__KVV1_1a798858ea9602e85fba57483b811160cd"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetKey`](#structFRHAPI__KVV1_1a67d0feb893b0c257bb605749ad8c4a6e)`()` <a id="structFRHAPI__KVV1_1a67d0feb893b0c257bb605749ad8c4a6e"></a>

Gets the value of Key.

<br>
#### `public inline const FString & `[`GetKey`](#structFRHAPI__KVV1_1ad0a5f00fbc212bfd868aa0e84b6b3e3c)`() const` <a id="structFRHAPI__KVV1_1ad0a5f00fbc212bfd868aa0e84b6b3e3c"></a>

Gets the value of Key.

<br>
#### `public inline void `[`SetKey`](#structFRHAPI__KVV1_1a4ab9a2a908a2115bbe3154c7d32c9212)`(FString NewValue)` <a id="structFRHAPI__KVV1_1a4ab9a2a908a2115bbe3154c7d32c9212"></a>

Sets the value of Key.

<br>
#### `public inline FString & `[`GetValue`](#structFRHAPI__KVV1_1a5b96d26a812685e065ed19287e12a211)`()` <a id="structFRHAPI__KVV1_1a5b96d26a812685e065ed19287e12a211"></a>

Gets the value of Value.

<br>
#### `public inline const FString & `[`GetValue`](#structFRHAPI__KVV1_1ab737344aaeb184d03e0c32cd0e3f0e20)`() const` <a id="structFRHAPI__KVV1_1ab737344aaeb184d03e0c32cd0e3f0e20"></a>

Gets the value of Value.

<br>
#### `public inline void `[`SetValue`](#structFRHAPI__KVV1_1a138d34e0e42da071a7beeac644eb908c)`(FString NewValue)` <a id="structFRHAPI__KVV1_1a138d34e0e42da071a7beeac644eb908c"></a>

Sets the value of Value.

<br>
#### `public inline FString & `[`GetNotes`](#structFRHAPI__KVV1_1aabb05a907e74feee14a516b9574d99e1)`()` <a id="structFRHAPI__KVV1_1aabb05a907e74feee14a516b9574d99e1"></a>

Gets the value of Notes_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetNotes`](#structFRHAPI__KVV1_1a42091b149fc802a59785a4cd2d7f11ab)`() const` <a id="structFRHAPI__KVV1_1a42091b149fc802a59785a4cd2d7f11ab"></a>

Gets the value of Notes_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetNotes`](#structFRHAPI__KVV1_1a71ffae33467f167421b60a23444a3ef7)`(const FString & DefaultValue) const` <a id="structFRHAPI__KVV1_1a71ffae33467f167421b60a23444a3ef7"></a>

Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetNotes`](#structFRHAPI__KVV1_1a6f418b98db58d45a0d99b3d879f76540)`(FString & OutValue) const` <a id="structFRHAPI__KVV1_1a6f418b98db58d45a0d99b3d879f76540"></a>

Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetNotesOrNull`](#structFRHAPI__KVV1_1ad31d046db72075d0e9731f188fe45083)`()` <a id="structFRHAPI__KVV1_1ad31d046db72075d0e9731f188fe45083"></a>

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetNotesOrNull`](#structFRHAPI__KVV1_1a7d5ccfbfd237c43bb1c2425558248bd1)`() const` <a id="structFRHAPI__KVV1_1a7d5ccfbfd237c43bb1c2425558248bd1"></a>

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetNotes`](#structFRHAPI__KVV1_1a3dc7f59d7e6160327ab676ffa4a86988)`(FString NewValue)` <a id="structFRHAPI__KVV1_1a3dc7f59d7e6160327ab676ffa4a86988"></a>

Sets the value of Notes_Optional and also sets Notes_IsSet to true.

<br>
#### `public inline void `[`ClearNotes`](#structFRHAPI__KVV1_1af6138e37d8c64331aa5f9877e5fd3bab)`()` <a id="structFRHAPI__KVV1_1af6138e37d8c64331aa5f9877e5fd3bab"></a>

Clears the value of Notes_Optional and sets Notes_IsSet to false.

<br>
