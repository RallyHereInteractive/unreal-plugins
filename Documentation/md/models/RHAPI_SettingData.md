# RHAPI_SettingData <a id="group__RHAPI__SettingData"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SettingData`](#structFRHAPI__SettingData) | Setting version/value data from a specific setting type/key for a player.

## struct `FRHAPI_SettingData` <a id="structFRHAPI__SettingData"></a>

```
struct FRHAPI_SettingData
  : public FRHAPI_Model
```

Setting version/value data from a specific setting type/key for a player.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`V`](#structFRHAPI__SettingData_1a2512594c15d94a1fb5d9f3265fe2959b) | Setting Version.
`public `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` `[`Value_Optional`](#structFRHAPI__SettingData_1a0c0ac8ddf11aca2abc0c756c8f431416) | Setting Value document.
`public bool `[`Value_IsSet`](#structFRHAPI__SettingData_1a8ce10b0f55a0e56b14769becba43f6e2) | true if Value_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SettingData_1a516ada869d3a2a69ce7b4d42805dcba5)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SettingData_1ac6098c095a74f24c31aff74290e1b19b)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetV`](#structFRHAPI__SettingData_1a540c85e652ecbfbd2641e8500c27b66a)`()` | Gets the value of V.
`public inline const int32 & `[`GetV`](#structFRHAPI__SettingData_1abebe2f1a931f0bf0a8b90e57c4a59845)`() const` | Gets the value of V.
`public inline void `[`SetV`](#structFRHAPI__SettingData_1a8584efc9cbcbbf717a8fa37e36aced01)`(int32 NewValue)` | Sets the value of V.
`public inline bool `[`IsVDefaultValue`](#structFRHAPI__SettingData_1afac8ce0d0cac1f2a2880f9378d959d14)`() const` | Returns true if V matches the default value.
`public inline void `[`SetVToDefault`](#structFRHAPI__SettingData_1a96191983827c14b416c2bcd6b2cc660e)`()` | Sets the value of V to its default
`public inline `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SettingData_1aad140fab11a097a469db39728f50c2d0)`()` | Gets the value of Value_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SettingData_1a47d2ca1fdd7a840b69434baca62f972f)`() const` | Gets the value of Value_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SettingData_1a56a698de32d60ea60aab8cca260bff27)`(const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & DefaultValue) const` | Gets the value of Value_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetValue`](#structFRHAPI__SettingData_1abf6b8af24da1c48580697ec497114cd4)`(`[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & OutValue) const` | Fills OutValue with the value of Value_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` * `[`GetValueOrNull`](#structFRHAPI__SettingData_1a99d489a3de1bb0d9480aa8f3ff02ce4c)`()` | Returns a pointer to Value_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` * `[`GetValueOrNull`](#structFRHAPI__SettingData_1aa0a0a6dc2295285d8c1e36c95d230b3c)`() const` | Returns a pointer to Value_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetValue`](#structFRHAPI__SettingData_1a829c0a3854f445ef75d87d45802fdeea)`(`[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` NewValue)` | Sets the value of Value_Optional and also sets Value_IsSet to true.
`public inline void `[`ClearValue`](#structFRHAPI__SettingData_1ae921409b065fd1a162494dbf3f9906ab)`()` | Clears the value of Value_Optional and sets Value_IsSet to false.

#### Members

#### `public int32 `[`V`](#structFRHAPI__SettingData_1a2512594c15d94a1fb5d9f3265fe2959b) <a id="structFRHAPI__SettingData_1a2512594c15d94a1fb5d9f3265fe2959b"></a>

Setting Version.

#### `public `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` `[`Value_Optional`](#structFRHAPI__SettingData_1a0c0ac8ddf11aca2abc0c756c8f431416) <a id="structFRHAPI__SettingData_1a0c0ac8ddf11aca2abc0c756c8f431416"></a>

Setting Value document.

#### `public bool `[`Value_IsSet`](#structFRHAPI__SettingData_1a8ce10b0f55a0e56b14769becba43f6e2) <a id="structFRHAPI__SettingData_1a8ce10b0f55a0e56b14769becba43f6e2"></a>

true if Value_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__SettingData_1a516ada869d3a2a69ce7b4d42805dcba5)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SettingData_1a516ada869d3a2a69ce7b4d42805dcba5"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SettingData_1ac6098c095a74f24c31aff74290e1b19b)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__SettingData_1ac6098c095a74f24c31aff74290e1b19b"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetV`](#structFRHAPI__SettingData_1a540c85e652ecbfbd2641e8500c27b66a)`()` <a id="structFRHAPI__SettingData_1a540c85e652ecbfbd2641e8500c27b66a"></a>

Gets the value of V.

#### `public inline const int32 & `[`GetV`](#structFRHAPI__SettingData_1abebe2f1a931f0bf0a8b90e57c4a59845)`() const` <a id="structFRHAPI__SettingData_1abebe2f1a931f0bf0a8b90e57c4a59845"></a>

Gets the value of V.

#### `public inline void `[`SetV`](#structFRHAPI__SettingData_1a8584efc9cbcbbf717a8fa37e36aced01)`(int32 NewValue)` <a id="structFRHAPI__SettingData_1a8584efc9cbcbbf717a8fa37e36aced01"></a>

Sets the value of V.

#### `public inline bool `[`IsVDefaultValue`](#structFRHAPI__SettingData_1afac8ce0d0cac1f2a2880f9378d959d14)`() const` <a id="structFRHAPI__SettingData_1afac8ce0d0cac1f2a2880f9378d959d14"></a>

Returns true if V matches the default value.

#### `public inline void `[`SetVToDefault`](#structFRHAPI__SettingData_1a96191983827c14b416c2bcd6b2cc660e)`()` <a id="structFRHAPI__SettingData_1a96191983827c14b416c2bcd6b2cc660e"></a>

Sets the value of V to its default

#### `public inline `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SettingData_1aad140fab11a097a469db39728f50c2d0)`()` <a id="structFRHAPI__SettingData_1aad140fab11a097a469db39728f50c2d0"></a>

Gets the value of Value_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SettingData_1a47d2ca1fdd7a840b69434baca62f972f)`() const` <a id="structFRHAPI__SettingData_1a47d2ca1fdd7a840b69434baca62f972f"></a>

Gets the value of Value_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SettingData_1a56a698de32d60ea60aab8cca260bff27)`(const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & DefaultValue) const` <a id="structFRHAPI__SettingData_1a56a698de32d60ea60aab8cca260bff27"></a>

Gets the value of Value_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetValue`](#structFRHAPI__SettingData_1abf6b8af24da1c48580697ec497114cd4)`(`[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & OutValue) const` <a id="structFRHAPI__SettingData_1abf6b8af24da1c48580697ec497114cd4"></a>

Fills OutValue with the value of Value_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` * `[`GetValueOrNull`](#structFRHAPI__SettingData_1a99d489a3de1bb0d9480aa8f3ff02ce4c)`()` <a id="structFRHAPI__SettingData_1a99d489a3de1bb0d9480aa8f3ff02ce4c"></a>

Returns a pointer to Value_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` * `[`GetValueOrNull`](#structFRHAPI__SettingData_1aa0a0a6dc2295285d8c1e36c95d230b3c)`() const` <a id="structFRHAPI__SettingData_1aa0a0a6dc2295285d8c1e36c95d230b3c"></a>

Returns a pointer to Value_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetValue`](#structFRHAPI__SettingData_1a829c0a3854f445ef75d87d45802fdeea)`(`[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` NewValue)` <a id="structFRHAPI__SettingData_1a829c0a3854f445ef75d87d45802fdeea"></a>

Sets the value of Value_Optional and also sets Value_IsSet to true.

#### `public inline void `[`ClearValue`](#structFRHAPI__SettingData_1ae921409b065fd1a162494dbf3f9906ab)`()` <a id="structFRHAPI__SettingData_1ae921409b065fd1a162494dbf3f9906ab"></a>

Clears the value of Value_Optional and sets Value_IsSet to false.

