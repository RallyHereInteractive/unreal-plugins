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
`public inline FORCEINLINE int32 & `[`GetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1a8c5ddcb19dece1cbf146ae875c67e39a)`()` | Gets the value of V.
`public inline FORCEINLINE const int32 & `[`GetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1a55992541d4f8fe24e3f8603c6bfebee5)`() const` | Gets the value of V.
`public inline FORCEINLINE void `[`SetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1ade8a7cf68ffe7a7a5046078372957533)`(const int32 & NewValue)` | Sets the value of V.
`public inline FORCEINLINE void `[`SetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1a51f24af5972dc57ae487c877343d6962)`(int32 && NewValue)` | Sets the value of V using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_V`](#structFRHAPI__SetSinglePlayerSettingRequest_1a9a00207d28bd62cb48119012df1782ec)`()` | Returns the default value of V.
`public inline FORCEINLINE `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1af1d105d3571b9cd81b98f20b00e30450)`()` | Gets the value of Value.
`public inline FORCEINLINE const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1a384d147e1dd23c7e120777d3efd06fb0)`() const` | Gets the value of Value.
`public inline FORCEINLINE void `[`SetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1a6815acfdb8264fbcad831e7da6ecff7e)`(const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & NewValue)` | Sets the value of Value.
`public inline FORCEINLINE void `[`SetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1a8a001c38282aab0ff1afc6a8444533e3)`(`[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` && NewValue)` | Sets the value of Value using move semantics.
`public inline FORCEINLINE void `[`SetValueToNull`](#structFRHAPI__SetSinglePlayerSettingRequest_1abcf9743a19b557f3b355342ce05c3de3)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsValueNull`](#structFRHAPI__SetSinglePlayerSettingRequest_1a1b94e8f9d99c7c7ca0bb2488f73b9a4a)`() const` | Checks whether Value is set to null.

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

#### `public inline FORCEINLINE int32 & `[`GetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1a8c5ddcb19dece1cbf146ae875c67e39a)`()` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a8c5ddcb19dece1cbf146ae875c67e39a"></a>

Gets the value of V.

#### `public inline FORCEINLINE const int32 & `[`GetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1a55992541d4f8fe24e3f8603c6bfebee5)`() const` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a55992541d4f8fe24e3f8603c6bfebee5"></a>

Gets the value of V.

#### `public inline FORCEINLINE void `[`SetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1ade8a7cf68ffe7a7a5046078372957533)`(const int32 & NewValue)` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1ade8a7cf68ffe7a7a5046078372957533"></a>

Sets the value of V.

#### `public inline FORCEINLINE void `[`SetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1a51f24af5972dc57ae487c877343d6962)`(int32 && NewValue)` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a51f24af5972dc57ae487c877343d6962"></a>

Sets the value of V using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_V`](#structFRHAPI__SetSinglePlayerSettingRequest_1a9a00207d28bd62cb48119012df1782ec)`()` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a9a00207d28bd62cb48119012df1782ec"></a>

Returns the default value of V.

#### `public inline FORCEINLINE `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1af1d105d3571b9cd81b98f20b00e30450)`()` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1af1d105d3571b9cd81b98f20b00e30450"></a>

Gets the value of Value.

#### `public inline FORCEINLINE const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1a384d147e1dd23c7e120777d3efd06fb0)`() const` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a384d147e1dd23c7e120777d3efd06fb0"></a>

Gets the value of Value.

#### `public inline FORCEINLINE void `[`SetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1a6815acfdb8264fbcad831e7da6ecff7e)`(const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & NewValue)` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a6815acfdb8264fbcad831e7da6ecff7e"></a>

Sets the value of Value.

#### `public inline FORCEINLINE void `[`SetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1a8a001c38282aab0ff1afc6a8444533e3)`(`[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` && NewValue)` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a8a001c38282aab0ff1afc6a8444533e3"></a>

Sets the value of Value using move semantics.

#### `public inline FORCEINLINE void `[`SetValueToNull`](#structFRHAPI__SetSinglePlayerSettingRequest_1abcf9743a19b557f3b355342ce05c3de3)`()` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1abcf9743a19b557f3b355342ce05c3de3"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsValueNull`](#structFRHAPI__SetSinglePlayerSettingRequest_1a1b94e8f9d99c7c7ca0bb2488f73b9a4a)`() const` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a1b94e8f9d99c7c7ca0bb2488f73b9a4a"></a>

Checks whether Value is set to null.

