# RHAPI_SetSinglePlayerSettingRequest <a id="group__RHAPI__SetSinglePlayerSettingRequest"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`V`](#structFRHAPI__SetSinglePlayerSettingRequest_1ac1b3bbda4460108115c091b7c069ec5d) | Setting Type Version to update setting for. Must be a valid version for the setting type.
`public `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` `[`Value`](#structFRHAPI__SetSinglePlayerSettingRequest_1af0bd1ebe29d05a508641c4964a2c1c9f) | New value for the setting. Must conform to the jsonschema defined for the setting type+version.
`public virtual bool `[`FromJson`](#structFRHAPI__SetSinglePlayerSettingRequest_1a18c9b67c6f02a6928f08d4a4929a07d5)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SetSinglePlayerSettingRequest_1a413e895216855c3ae074fa0823e4eaeb)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1abca292eac082cd5723422b68fb905aa9)`()` | Gets the value of V.
`public inline const int32 & `[`GetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1ae6b9e2663e1c571414ea48bbf94d0d43)`() const` | Gets the value of V.
`public inline void `[`SetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1ab1c381a9737538afc8f4bd1bcd8da4f3)`(int32 NewValue)` | Sets the value of V.
`public inline bool `[`IsVDefaultValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1ad34a8faf6cf256d4c3fae84eda113018)`() const` | Returns true if V matches the default value.
`public inline void `[`SetVToDefault`](#structFRHAPI__SetSinglePlayerSettingRequest_1a11e6da31e8ecf115683e8e21a3561f9a)`()` | Sets the value of V to its default
`public inline `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1a7cb5fb8393aedc898f47ad2d929d32ae)`()` | Gets the value of Value.
`public inline const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1aaa2c2551ebb2f201f7fcdf9e6e8adfc7)`() const` | Gets the value of Value.
`public inline void `[`SetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1a74b0b55e594aa836bbfc55c5673fad40)`(`[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` NewValue)` | Sets the value of Value.

#### Members

#### `public int32 `[`V`](#structFRHAPI__SetSinglePlayerSettingRequest_1ac1b3bbda4460108115c091b7c069ec5d) <a id="structFRHAPI__SetSinglePlayerSettingRequest_1ac1b3bbda4460108115c091b7c069ec5d"></a>

Setting Type Version to update setting for. Must be a valid version for the setting type.

<br>
#### `public `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` `[`Value`](#structFRHAPI__SetSinglePlayerSettingRequest_1af0bd1ebe29d05a508641c4964a2c1c9f) <a id="structFRHAPI__SetSinglePlayerSettingRequest_1af0bd1ebe29d05a508641c4964a2c1c9f"></a>

New value for the setting. Must conform to the jsonschema defined for the setting type+version.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__SetSinglePlayerSettingRequest_1a18c9b67c6f02a6928f08d4a4929a07d5)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a18c9b67c6f02a6928f08d4a4929a07d5"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__SetSinglePlayerSettingRequest_1a413e895216855c3ae074fa0823e4eaeb)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a413e895216855c3ae074fa0823e4eaeb"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline int32 & `[`GetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1abca292eac082cd5723422b68fb905aa9)`()` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1abca292eac082cd5723422b68fb905aa9"></a>

Gets the value of V.

<br>
#### `public inline const int32 & `[`GetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1ae6b9e2663e1c571414ea48bbf94d0d43)`() const` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1ae6b9e2663e1c571414ea48bbf94d0d43"></a>

Gets the value of V.

<br>
#### `public inline void `[`SetV`](#structFRHAPI__SetSinglePlayerSettingRequest_1ab1c381a9737538afc8f4bd1bcd8da4f3)`(int32 NewValue)` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1ab1c381a9737538afc8f4bd1bcd8da4f3"></a>

Sets the value of V.

<br>
#### `public inline bool `[`IsVDefaultValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1ad34a8faf6cf256d4c3fae84eda113018)`() const` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1ad34a8faf6cf256d4c3fae84eda113018"></a>

Returns true if V matches the default value.

<br>
#### `public inline void `[`SetVToDefault`](#structFRHAPI__SetSinglePlayerSettingRequest_1a11e6da31e8ecf115683e8e21a3561f9a)`()` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a11e6da31e8ecf115683e8e21a3561f9a"></a>

Sets the value of V to its default

<br>
#### `public inline `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1a7cb5fb8393aedc898f47ad2d929d32ae)`()` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a7cb5fb8393aedc898f47ad2d929d32ae"></a>

Gets the value of Value.

<br>
#### `public inline const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1aaa2c2551ebb2f201f7fcdf9e6e8adfc7)`() const` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1aaa2c2551ebb2f201f7fcdf9e6e8adfc7"></a>

Gets the value of Value.

<br>
#### `public inline void `[`SetValue`](#structFRHAPI__SetSinglePlayerSettingRequest_1a74b0b55e594aa836bbfc55c5673fad40)`(`[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` NewValue)` <a id="structFRHAPI__SetSinglePlayerSettingRequest_1a74b0b55e594aa836bbfc55c5673fad40"></a>

Sets the value of Value.

<br>
