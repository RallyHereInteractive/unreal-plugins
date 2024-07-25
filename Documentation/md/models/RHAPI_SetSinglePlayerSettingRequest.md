# group `RHAPI_SetSinglePlayerSettingRequest` <a id="group__RHAPI__SetSinglePlayerSettingRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SetSinglePlayerSettingRequest`](#structFRHAPI__SetSinglePlayerSettingRequest) | Updatable contents of a setting for a player.

## struct `FRHAPI_SetSinglePlayerSettingRequest` <a id="structFRHAPI__SetSinglePlayerSettingRequest"></a>

```
struct FRHAPI_SetSinglePlayerSettingRequest
  : public FRHAPI_Model
```

Updatable contents of a setting for a player.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`V`](#structFRHAPI__SetSinglePlayerSettingRequest_1ac1b3bbda4460108115c091b7c069ec5d) | Setting Type Version to update setting for. Must be a valid version for the setting type.
`public `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` `[`Value`](#structFRHAPI__SetSinglePlayerSettingRequest_1af0bd1ebe29d05a508641c4964a2c1c9f) | New value for the setting. Must conform to the jsonschema defined for the setting type+version.
`public bool `[`Value_IsNull`](#structFRHAPI__SetSinglePlayerSettingRequest_1a35d886d8ff5310bf5af477992d279b95) | true if Value has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__SetSinglePlayerSettingRequest_1aa6e79bf5b65d5492bd0d4c3a007ce742)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SetSinglePlayerSettingRequest_1ab56db8c087056eff44b57274d4c06448)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1abca292eac082cd5723422b68fb905aa9)`()` | Gets the value of V.
`public inline const int32 & `[`GetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1ae6b9e2663e1c571414ea48bbf94d0d43)`() const` | Gets the value of V.
`public inline void `[`SetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1a4bb21a0b14b9908250cbd60eac6464c9)`(const int32 & NewValue)` | Sets the value of V.
`public inline void `[`SetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1a74a31e870ab36ea388059be34852fad0)`(int32 && NewValue)` | Sets the value of V using move semantics.
`public inline bool `[`IsVDefaultValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1ad34a8faf6cf256d4c3fae84eda113018)`() const` | Returns true if V matches the default value.
`public inline void `[`SetVToDefault`](#structFRHAPI__SetSinglePlayerSettingRequest_1a11e6da31e8ecf115683e8e21a3561f9a)`()` | Sets the value of V to its default
`public inline `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1a7cb5fb8393aedc898f47ad2d929d32ae)`()` | Gets the value of Value.
`public inline const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1aaa2c2551ebb2f201f7fcdf9e6e8adfc7)`() const` | Gets the value of Value.
`public inline void `[`SetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1a2a6538047730dadf3c88f0000be2f36f)`(const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & NewValue)` | Sets the value of Value.
`public inline void `[`SetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1a40bc6507f9b7f2990337450b12370dee)`(`[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` && NewValue)` | Sets the value of Value using move semantics.
`public inline void `[`SetValueToNull`](#structFRHAPI__SetSinglePlayerSettingRequest_1a948b66855eb9382dc7383f9dc7744908)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsValueNull`](#structFRHAPI__SetSinglePlayerSettingRequest_1a4da9d57466cf7b6c098c9ee581f9c388)`() const` | Checks whether Value is set to null.

### Members

#### `public int32 `[`V`](#structFRHAPI__SetSinglePlayerSettingRequest_1ac1b3bbda4460108115c091b7c069ec5d) <a id="structFRHAPI__SetSinglePlayerSettingRequest_1ac1b3bbda4460108115c091b7c069ec5d"></a>

Setting Type Version to update setting for. Must be a valid version for the setting type.

#### `public `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` `[`Value`](#structFRHAPI__SetSinglePlayerSettingRequest_1af0bd1ebe29d05a508641c4964a2c1c9f) <a id="structFRHAPI__SetSinglePlayerSettingRequest_1af0bd1ebe29d05a508641c4964a2c1c9f"></a>

New value for the setting. Must conform to the jsonschema defined for the setting type+version.

#### `public bool `[`Value_IsNull`](#structFRHAPI__SetSinglePlayerSettingRequest_1a35d886d8ff5310bf5af477992d279b95) <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a35d886d8ff5310bf5af477992d279b95"></a>

true if Value has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__SetSinglePlayerSettingRequest_1aa6e79bf5b65d5492bd0d4c3a007ce742)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1aa6e79bf5b65d5492bd0d4c3a007ce742"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SetSinglePlayerSettingRequest_1ab56db8c087056eff44b57274d4c06448)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1ab56db8c087056eff44b57274d4c06448"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1abca292eac082cd5723422b68fb905aa9)`()` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1abca292eac082cd5723422b68fb905aa9"></a>

Gets the value of V.

#### `public inline const int32 & `[`GetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1ae6b9e2663e1c571414ea48bbf94d0d43)`() const` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1ae6b9e2663e1c571414ea48bbf94d0d43"></a>

Gets the value of V.

#### `public inline void `[`SetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1a4bb21a0b14b9908250cbd60eac6464c9)`(const int32 & NewValue)` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a4bb21a0b14b9908250cbd60eac6464c9"></a>

Sets the value of V.

#### `public inline void `[`SetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1a74a31e870ab36ea388059be34852fad0)`(int32 && NewValue)` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a74a31e870ab36ea388059be34852fad0"></a>

Sets the value of V using move semantics.

#### `public inline bool `[`IsVDefaultValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1ad34a8faf6cf256d4c3fae84eda113018)`() const` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1ad34a8faf6cf256d4c3fae84eda113018"></a>

Returns true if V matches the default value.

#### `public inline void `[`SetVToDefault`](#structFRHAPI__SetSinglePlayerSettingRequest_1a11e6da31e8ecf115683e8e21a3561f9a)`()` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a11e6da31e8ecf115683e8e21a3561f9a"></a>

Sets the value of V to its default

#### `public inline `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1a7cb5fb8393aedc898f47ad2d929d32ae)`()` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a7cb5fb8393aedc898f47ad2d929d32ae"></a>

Gets the value of Value.

#### `public inline const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1aaa2c2551ebb2f201f7fcdf9e6e8adfc7)`() const` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1aaa2c2551ebb2f201f7fcdf9e6e8adfc7"></a>

Gets the value of Value.

#### `public inline void `[`SetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1a2a6538047730dadf3c88f0000be2f36f)`(const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & NewValue)` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a2a6538047730dadf3c88f0000be2f36f"></a>

Sets the value of Value.

#### `public inline void `[`SetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1a40bc6507f9b7f2990337450b12370dee)`(`[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` && NewValue)` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a40bc6507f9b7f2990337450b12370dee"></a>

Sets the value of Value using move semantics.

#### `public inline void `[`SetValueToNull`](#structFRHAPI__SetSinglePlayerSettingRequest_1a948b66855eb9382dc7383f9dc7744908)`()` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a948b66855eb9382dc7383f9dc7744908"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsValueNull`](#structFRHAPI__SetSinglePlayerSettingRequest_1a4da9d57466cf7b6c098c9ee581f9c388)`() const` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a4da9d57466cf7b6c098c9ee581f9c388"></a>

Checks whether Value is set to null.

