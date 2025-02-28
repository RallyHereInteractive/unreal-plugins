---
title: RHAPI_SetSinglePlayerSettingRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SetSinglePlayerSettingRequest`](#structFRHAPI__SetSinglePlayerSettingRequest) | Updatable contents of a setting document for a player.

## struct `FRHAPI_SetSinglePlayerSettingRequest` <a id="structFRHAPI__SetSinglePlayerSettingRequest"></a>

```
struct FRHAPI_SetSinglePlayerSettingRequest
  : public FRHAPI_Model
```

Updatable contents of a setting document for a player.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`V`](#structFRHAPI__SetSinglePlayerSettingRequest_1ac1b3bbda4460108115c091b7c069ec5d) | Setting Type Version to update setting for. Must be a valid version for the setting type.
`public `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` `[`Value`](#structFRHAPI__SetSinglePlayerSettingRequest_1af0bd1ebe29d05a508641c4964a2c1c9f) | New value document for the setting. Must conform to the jsonschema defined for the setting type+version.
`public bool `[`Value_IsNull`](#structFRHAPI__SetSinglePlayerSettingRequest_1a35d886d8ff5310bf5af477992d279b95) | true if Value has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__SetSinglePlayerSettingRequest_1aa6e79bf5b65d5492bd0d4c3a007ce742)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SetSinglePlayerSettingRequest_1aca1eb28367d63208d15c20a75aab05c1)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1a249551fea77e7cb82c02e5ba02a75ee3)`()` | Gets the value of V.
`public inline const int32 & `[`GetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1abd8e25ad621481363a57cb2e13e816c9)`() const` | Gets the value of V.
`public inline void `[`SetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1a4bb21a0b14b9908250cbd60eac6464c9)`(const int32 & NewValue)` | Sets the value of V.
`public inline void `[`SetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1a74a31e870ab36ea388059be34852fad0)`(int32 && NewValue)` | Sets the value of V using move semantics.
`public inline bool `[`IsVDefaultValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1ad34a8faf6cf256d4c3fae84eda113018)`() const` | Returns true if V matches the default value.
`public inline void `[`SetVToDefault`](#structFRHAPI__SetSinglePlayerSettingRequest_1a11e6da31e8ecf115683e8e21a3561f9a)`()` | Sets the value of V to its default
`public inline `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1a88fa2179ffbbd64df0efb9a43648ba78)`()` | Gets the value of Value.
`public inline const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1a2040db40b268d9954fa5dd35566c1250)`() const` | Gets the value of Value.
`public inline void `[`SetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1a2a6538047730dadf3c88f0000be2f36f)`(const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & NewValue)` | Sets the value of Value.
`public inline void `[`SetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1a40bc6507f9b7f2990337450b12370dee)`(`[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` && NewValue)` | Sets the value of Value using move semantics.
`public inline void `[`SetValueToNull`](#structFRHAPI__SetSinglePlayerSettingRequest_1a948b66855eb9382dc7383f9dc7744908)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsValueNull`](#structFRHAPI__SetSinglePlayerSettingRequest_1a4da9d57466cf7b6c098c9ee581f9c388)`() const` | Checks whether Value is set to null.

### Members

#### `public int32 `[`V`](#structFRHAPI__SetSinglePlayerSettingRequest_1ac1b3bbda4460108115c091b7c069ec5d) <a id="structFRHAPI__SetSinglePlayerSettingRequest_1ac1b3bbda4460108115c091b7c069ec5d"></a>

Setting Type Version to update setting for. Must be a valid version for the setting type.

#### `public `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` `[`Value`](#structFRHAPI__SetSinglePlayerSettingRequest_1af0bd1ebe29d05a508641c4964a2c1c9f) <a id="structFRHAPI__SetSinglePlayerSettingRequest_1af0bd1ebe29d05a508641c4964a2c1c9f"></a>

New value document for the setting. Must conform to the jsonschema defined for the setting type+version.

#### `public bool `[`Value_IsNull`](#structFRHAPI__SetSinglePlayerSettingRequest_1a35d886d8ff5310bf5af477992d279b95) <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a35d886d8ff5310bf5af477992d279b95"></a>

true if Value has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__SetSinglePlayerSettingRequest_1aa6e79bf5b65d5492bd0d4c3a007ce742)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1aa6e79bf5b65d5492bd0d4c3a007ce742"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SetSinglePlayerSettingRequest_1aca1eb28367d63208d15c20a75aab05c1)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1aca1eb28367d63208d15c20a75aab05c1"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1a249551fea77e7cb82c02e5ba02a75ee3)`()` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a249551fea77e7cb82c02e5ba02a75ee3"></a>

Gets the value of V.

#### `public inline const int32 & `[`GetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1abd8e25ad621481363a57cb2e13e816c9)`() const` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1abd8e25ad621481363a57cb2e13e816c9"></a>

Gets the value of V.

#### `public inline void `[`SetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1a4bb21a0b14b9908250cbd60eac6464c9)`(const int32 & NewValue)` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a4bb21a0b14b9908250cbd60eac6464c9"></a>

Sets the value of V.

#### `public inline void `[`SetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1a74a31e870ab36ea388059be34852fad0)`(int32 && NewValue)` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a74a31e870ab36ea388059be34852fad0"></a>

Sets the value of V using move semantics.

#### `public inline bool `[`IsVDefaultValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1ad34a8faf6cf256d4c3fae84eda113018)`() const` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1ad34a8faf6cf256d4c3fae84eda113018"></a>

Returns true if V matches the default value.

#### `public inline void `[`SetVToDefault`](#structFRHAPI__SetSinglePlayerSettingRequest_1a11e6da31e8ecf115683e8e21a3561f9a)`()` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a11e6da31e8ecf115683e8e21a3561f9a"></a>

Sets the value of V to its default

#### `public inline `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1a88fa2179ffbbd64df0efb9a43648ba78)`()` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a88fa2179ffbbd64df0efb9a43648ba78"></a>

Gets the value of Value.

#### `public inline const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1a2040db40b268d9954fa5dd35566c1250)`() const` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a2040db40b268d9954fa5dd35566c1250"></a>

Gets the value of Value.

#### `public inline void `[`SetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1a2a6538047730dadf3c88f0000be2f36f)`(const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & NewValue)` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a2a6538047730dadf3c88f0000be2f36f"></a>

Sets the value of Value.

#### `public inline void `[`SetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1a40bc6507f9b7f2990337450b12370dee)`(`[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` && NewValue)` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a40bc6507f9b7f2990337450b12370dee"></a>

Sets the value of Value using move semantics.

#### `public inline void `[`SetValueToNull`](#structFRHAPI__SetSinglePlayerSettingRequest_1a948b66855eb9382dc7383f9dc7744908)`()` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a948b66855eb9382dc7383f9dc7744908"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsValueNull`](#structFRHAPI__SetSinglePlayerSettingRequest_1a4da9d57466cf7b6c098c9ee581f9c388)`() const` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a4da9d57466cf7b6c098c9ee581f9c388"></a>

Checks whether Value is set to null.

