# RHAPI_AppSetting <a id="group__RHAPI__AppSetting"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_AppSetting`](#structFRHAPI__AppSetting) | A key/value pair that represents a setting to be used by the client.

## struct `FRHAPI_AppSetting` <a id="structFRHAPI__AppSetting"></a>

```
struct FRHAPI_AppSetting
  : public FRHAPI_Model
```

A key/value pair that represents a setting to be used by the client.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Key`](#structFRHAPI__AppSetting_1a82e74cc3acfe664c9c2d88093d0cdbb3) | The key for the setting.
`public FString `[`Value`](#structFRHAPI__AppSetting_1a7016650e0478c3c8ca7cb6cdc46178df) | The value for the setting.
`public FString `[`Notes_Optional`](#structFRHAPI__AppSetting_1a5fe4dd1667d49b258981f4d08bb7883f) | Notes to describe the key value pair.
`public bool `[`Notes_IsSet`](#structFRHAPI__AppSetting_1a8b2b0c0f69dabec66c64d38e3f8aefff) | true if Notes_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__AppSetting_1a1bde3f6f996eea77aa1d04c2bf63de01)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__AppSetting_1abc7ed081da7d54be8685a757e8f9d03b)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetKey`](#structFRHAPI__AppSetting_1a3bfe327e136dad38312642553ef58b1b)`()` | Gets the value of Key.
`public inline const FString & `[`GetKey`](#structFRHAPI__AppSetting_1a5fd6a636476d43ab7c472703dd1f1a6f)`() const` | Gets the value of Key.
`public inline void `[`SetKey`](#structFRHAPI__AppSetting_1a496573c940d6d89d14b9ca07ac030302)`(FString NewValue)` | Sets the value of Key.
`public inline FString & `[`GetValue`](#structFRHAPI__AppSetting_1ab92b1b46ca377f9343fadfbc477effcb)`()` | Gets the value of Value.
`public inline const FString & `[`GetValue`](#structFRHAPI__AppSetting_1a8757a6558bd6f8932839b0a83c102cee)`() const` | Gets the value of Value.
`public inline void `[`SetValue`](#structFRHAPI__AppSetting_1a9ce2c6de945a0fe8434c405db2ed917f)`(FString NewValue)` | Sets the value of Value.
`public inline FString & `[`GetNotes`](#structFRHAPI__AppSetting_1a981fffd915427c5fe7ffae5618bd575c)`()` | Gets the value of Notes_Optional, regardless of it having been set.
`public inline const FString & `[`GetNotes`](#structFRHAPI__AppSetting_1adc354e82c921e2b8284888b4df7ee082)`() const` | Gets the value of Notes_Optional, regardless of it having been set.
`public inline const FString & `[`GetNotes`](#structFRHAPI__AppSetting_1a2174604b84007f4588cdb50e9f6894c2)`(const FString & DefaultValue) const` | Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNotes`](#structFRHAPI__AppSetting_1ae8bd1f41c455eb87f2d9fa7653b3881f)`(FString & OutValue) const` | Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetNotesOrNull`](#structFRHAPI__AppSetting_1a49c5bf3dcc8cb17df6a260fb329730e0)`()` | Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetNotesOrNull`](#structFRHAPI__AppSetting_1a4f647f4fb51c2bcc846e1f2851a01375)`() const` | Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNotes`](#structFRHAPI__AppSetting_1afb4fcc3c29a9478fa7b264b244f0e5c2)`(FString NewValue)` | Sets the value of Notes_Optional and also sets Notes_IsSet to true.
`public inline void `[`ClearNotes`](#structFRHAPI__AppSetting_1a5cad97ab5f5f80963ce34597fd484dae)`()` | Clears the value of Notes_Optional and sets Notes_IsSet to false.

#### Members

#### `public FString `[`Key`](#structFRHAPI__AppSetting_1a82e74cc3acfe664c9c2d88093d0cdbb3) <a id="structFRHAPI__AppSetting_1a82e74cc3acfe664c9c2d88093d0cdbb3"></a>

The key for the setting.

<br>
#### `public FString `[`Value`](#structFRHAPI__AppSetting_1a7016650e0478c3c8ca7cb6cdc46178df) <a id="structFRHAPI__AppSetting_1a7016650e0478c3c8ca7cb6cdc46178df"></a>

The value for the setting.

<br>
#### `public FString `[`Notes_Optional`](#structFRHAPI__AppSetting_1a5fe4dd1667d49b258981f4d08bb7883f) <a id="structFRHAPI__AppSetting_1a5fe4dd1667d49b258981f4d08bb7883f"></a>

Notes to describe the key value pair.

<br>
#### `public bool `[`Notes_IsSet`](#structFRHAPI__AppSetting_1a8b2b0c0f69dabec66c64d38e3f8aefff) <a id="structFRHAPI__AppSetting_1a8b2b0c0f69dabec66c64d38e3f8aefff"></a>

true if Notes_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__AppSetting_1a1bde3f6f996eea77aa1d04c2bf63de01)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__AppSetting_1a1bde3f6f996eea77aa1d04c2bf63de01"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__AppSetting_1abc7ed081da7d54be8685a757e8f9d03b)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__AppSetting_1abc7ed081da7d54be8685a757e8f9d03b"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetKey`](#structFRHAPI__AppSetting_1a3bfe327e136dad38312642553ef58b1b)`()` <a id="structFRHAPI__AppSetting_1a3bfe327e136dad38312642553ef58b1b"></a>

Gets the value of Key.

<br>
#### `public inline const FString & `[`GetKey`](#structFRHAPI__AppSetting_1a5fd6a636476d43ab7c472703dd1f1a6f)`() const` <a id="structFRHAPI__AppSetting_1a5fd6a636476d43ab7c472703dd1f1a6f"></a>

Gets the value of Key.

<br>
#### `public inline void `[`SetKey`](#structFRHAPI__AppSetting_1a496573c940d6d89d14b9ca07ac030302)`(FString NewValue)` <a id="structFRHAPI__AppSetting_1a496573c940d6d89d14b9ca07ac030302"></a>

Sets the value of Key.

<br>
#### `public inline FString & `[`GetValue`](#structFRHAPI__AppSetting_1ab92b1b46ca377f9343fadfbc477effcb)`()` <a id="structFRHAPI__AppSetting_1ab92b1b46ca377f9343fadfbc477effcb"></a>

Gets the value of Value.

<br>
#### `public inline const FString & `[`GetValue`](#structFRHAPI__AppSetting_1a8757a6558bd6f8932839b0a83c102cee)`() const` <a id="structFRHAPI__AppSetting_1a8757a6558bd6f8932839b0a83c102cee"></a>

Gets the value of Value.

<br>
#### `public inline void `[`SetValue`](#structFRHAPI__AppSetting_1a9ce2c6de945a0fe8434c405db2ed917f)`(FString NewValue)` <a id="structFRHAPI__AppSetting_1a9ce2c6de945a0fe8434c405db2ed917f"></a>

Sets the value of Value.

<br>
#### `public inline FString & `[`GetNotes`](#structFRHAPI__AppSetting_1a981fffd915427c5fe7ffae5618bd575c)`()` <a id="structFRHAPI__AppSetting_1a981fffd915427c5fe7ffae5618bd575c"></a>

Gets the value of Notes_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetNotes`](#structFRHAPI__AppSetting_1adc354e82c921e2b8284888b4df7ee082)`() const` <a id="structFRHAPI__AppSetting_1adc354e82c921e2b8284888b4df7ee082"></a>

Gets the value of Notes_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetNotes`](#structFRHAPI__AppSetting_1a2174604b84007f4588cdb50e9f6894c2)`(const FString & DefaultValue) const` <a id="structFRHAPI__AppSetting_1a2174604b84007f4588cdb50e9f6894c2"></a>

Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetNotes`](#structFRHAPI__AppSetting_1ae8bd1f41c455eb87f2d9fa7653b3881f)`(FString & OutValue) const` <a id="structFRHAPI__AppSetting_1ae8bd1f41c455eb87f2d9fa7653b3881f"></a>

Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetNotesOrNull`](#structFRHAPI__AppSetting_1a49c5bf3dcc8cb17df6a260fb329730e0)`()` <a id="structFRHAPI__AppSetting_1a49c5bf3dcc8cb17df6a260fb329730e0"></a>

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetNotesOrNull`](#structFRHAPI__AppSetting_1a4f647f4fb51c2bcc846e1f2851a01375)`() const` <a id="structFRHAPI__AppSetting_1a4f647f4fb51c2bcc846e1f2851a01375"></a>

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetNotes`](#structFRHAPI__AppSetting_1afb4fcc3c29a9478fa7b264b244f0e5c2)`(FString NewValue)` <a id="structFRHAPI__AppSetting_1afb4fcc3c29a9478fa7b264b244f0e5c2"></a>

Sets the value of Notes_Optional and also sets Notes_IsSet to true.

<br>
#### `public inline void `[`ClearNotes`](#structFRHAPI__AppSetting_1a5cad97ab5f5f80963ce34597fd484dae)`()` <a id="structFRHAPI__AppSetting_1a5cad97ab5f5f80963ce34597fd484dae"></a>

Clears the value of Notes_Optional and sets Notes_IsSet to false.

<br>
