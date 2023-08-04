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
`public virtual bool `[`FromJson`](#structFRHAPI__AppSetting_1a1bde3f6f996eea77aa1d04c2bf63de01)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__AppSetting_1abc7ed081da7d54be8685a757e8f9d03b)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetKey`](#structFRHAPI__AppSetting_1a3bfe327e136dad38312642553ef58b1b)`()` | Gets the value of Key.
`public inline const FString & `[`GetKey`](#structFRHAPI__AppSetting_1a5fd6a636476d43ab7c472703dd1f1a6f)`() const` | Gets the value of Key.
`public inline void `[`SetKey`](#structFRHAPI__AppSetting_1a496573c940d6d89d14b9ca07ac030302)`(FString NewValue)` | Sets the value of Key.
`public inline FString & `[`GetValue`](#structFRHAPI__AppSetting_1ab92b1b46ca377f9343fadfbc477effcb)`()` | Gets the value of Value.
`public inline const FString & `[`GetValue`](#structFRHAPI__AppSetting_1a8757a6558bd6f8932839b0a83c102cee)`() const` | Gets the value of Value.
`public inline void `[`SetValue`](#structFRHAPI__AppSetting_1a9ce2c6de945a0fe8434c405db2ed917f)`(FString NewValue)` | Sets the value of Value.

#### Members

#### `public FString `[`Key`](#structFRHAPI__AppSetting_1a82e74cc3acfe664c9c2d88093d0cdbb3) <a id="structFRHAPI__AppSetting_1a82e74cc3acfe664c9c2d88093d0cdbb3"></a>

The key for the setting.

<br>
#### `public FString `[`Value`](#structFRHAPI__AppSetting_1a7016650e0478c3c8ca7cb6cdc46178df) <a id="structFRHAPI__AppSetting_1a7016650e0478c3c8ca7cb6cdc46178df"></a>

The value for the setting.

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
