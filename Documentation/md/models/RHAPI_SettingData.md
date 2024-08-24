# group `RHAPI_SettingData` <a id="group__RHAPI__SettingData"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SettingData`](#structFRHAPI__SettingData) | Setting version/value data from a specific setting type/key for a player.

---
title: FRHAPI_SettingData
---

```
struct FRHAPI_SettingData
  : public FRHAPI_Model
```

Setting version/value data from a specific setting type/key for a player.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`V`](#structFRHAPI__SettingData_1a2512594c15d94a1fb5d9f3265fe2959b) | Setting Version.
`public `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` `[`Value`](#structFRHAPI__SettingData_1a6c2d9e18c1f6895155bcf0313ffc5d94) | Setting Value document.
`public bool `[`Value_IsNull`](#structFRHAPI__SettingData_1a15f523906b538bb4dd436a0993fbfb86) | true if Value has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__SettingData_1a451b18556c313331a9fdfae19f669f48)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SettingData_1a1b7bfed54ce9270255fbb46255d7c5b2)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetV`](#structFRHAPI__SettingData_1a540c85e652ecbfbd2641e8500c27b66a)`()` | Gets the value of V.
`public inline const int32 & `[`GetV`](#structFRHAPI__SettingData_1abebe2f1a931f0bf0a8b90e57c4a59845)`() const` | Gets the value of V.
`public inline void `[`SetV`](#structFRHAPI__SettingData_1a25a11ae202e4d86e865063d20c39cdc7)`(const int32 & NewValue)` | Sets the value of V.
`public inline void `[`SetV`](#structFRHAPI__SettingData_1ae470149875008c4ee6bd9a4ee47822aa)`(int32 && NewValue)` | Sets the value of V using move semantics.
`public inline bool `[`IsVDefaultValue`](#structFRHAPI__SettingData_1afac8ce0d0cac1f2a2880f9378d959d14)`() const` | Returns true if V matches the default value.
`public inline void `[`SetVToDefault`](#structFRHAPI__SettingData_1a96191983827c14b416c2bcd6b2cc660e)`()` | Sets the value of V to its default
`public inline `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SettingData_1aad140fab11a097a469db39728f50c2d0)`()` | Gets the value of Value.
`public inline const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SettingData_1a47d2ca1fdd7a840b69434baca62f972f)`() const` | Gets the value of Value.
`public inline void `[`SetValue`](#structFRHAPI__SettingData_1af8e69c18963b052c7387eaa4d301451e)`(const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & NewValue)` | Sets the value of Value.
`public inline void `[`SetValue`](#structFRHAPI__SettingData_1a7e44672c04f8bfef29258ea4fca0d8cb)`(`[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` && NewValue)` | Sets the value of Value using move semantics.
`public inline void `[`SetValueToNull`](#structFRHAPI__SettingData_1a501cbe0943435421c563cd8ffc200faa)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsValueNull`](#structFRHAPI__SettingData_1aa030381d1a1f052d397cb14cda8106c3)`() const` | Checks whether Value is set to null.

### Members

#### `public int32 `[`V`](#structFRHAPI__SettingData_1a2512594c15d94a1fb5d9f3265fe2959b) <a id="structFRHAPI__SettingData_1a2512594c15d94a1fb5d9f3265fe2959b"></a>

Setting Version.

#### `public `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` `[`Value`](#structFRHAPI__SettingData_1a6c2d9e18c1f6895155bcf0313ffc5d94) <a id="structFRHAPI__SettingData_1a6c2d9e18c1f6895155bcf0313ffc5d94"></a>

Setting Value document.

#### `public bool `[`Value_IsNull`](#structFRHAPI__SettingData_1a15f523906b538bb4dd436a0993fbfb86) <a id="structFRHAPI__SettingData_1a15f523906b538bb4dd436a0993fbfb86"></a>

true if Value has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__SettingData_1a451b18556c313331a9fdfae19f669f48)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SettingData_1a451b18556c313331a9fdfae19f669f48"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SettingData_1a1b7bfed54ce9270255fbb46255d7c5b2)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__SettingData_1a1b7bfed54ce9270255fbb46255d7c5b2"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetV`](#structFRHAPI__SettingData_1a540c85e652ecbfbd2641e8500c27b66a)`()` <a id="structFRHAPI__SettingData_1a540c85e652ecbfbd2641e8500c27b66a"></a>

Gets the value of V.

#### `public inline const int32 & `[`GetV`](#structFRHAPI__SettingData_1abebe2f1a931f0bf0a8b90e57c4a59845)`() const` <a id="structFRHAPI__SettingData_1abebe2f1a931f0bf0a8b90e57c4a59845"></a>

Gets the value of V.

#### `public inline void `[`SetV`](#structFRHAPI__SettingData_1a25a11ae202e4d86e865063d20c39cdc7)`(const int32 & NewValue)` <a id="structFRHAPI__SettingData_1a25a11ae202e4d86e865063d20c39cdc7"></a>

Sets the value of V.

#### `public inline void `[`SetV`](#structFRHAPI__SettingData_1ae470149875008c4ee6bd9a4ee47822aa)`(int32 && NewValue)` <a id="structFRHAPI__SettingData_1ae470149875008c4ee6bd9a4ee47822aa"></a>

Sets the value of V using move semantics.

#### `public inline bool `[`IsVDefaultValue`](#structFRHAPI__SettingData_1afac8ce0d0cac1f2a2880f9378d959d14)`() const` <a id="structFRHAPI__SettingData_1afac8ce0d0cac1f2a2880f9378d959d14"></a>

Returns true if V matches the default value.

#### `public inline void `[`SetVToDefault`](#structFRHAPI__SettingData_1a96191983827c14b416c2bcd6b2cc660e)`()` <a id="structFRHAPI__SettingData_1a96191983827c14b416c2bcd6b2cc660e"></a>

Sets the value of V to its default

#### `public inline `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SettingData_1aad140fab11a097a469db39728f50c2d0)`()` <a id="structFRHAPI__SettingData_1aad140fab11a097a469db39728f50c2d0"></a>

Gets the value of Value.

#### `public inline const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & `[`GetValue`](#structFRHAPI__SettingData_1a47d2ca1fdd7a840b69434baca62f972f)`() const` <a id="structFRHAPI__SettingData_1a47d2ca1fdd7a840b69434baca62f972f"></a>

Gets the value of Value.

#### `public inline void `[`SetValue`](#structFRHAPI__SettingData_1af8e69c18963b052c7387eaa4d301451e)`(const `[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` & NewValue)` <a id="structFRHAPI__SettingData_1af8e69c18963b052c7387eaa4d301451e"></a>

Sets the value of Value.

#### `public inline void `[`SetValue`](#structFRHAPI__SettingData_1a7e44672c04f8bfef29258ea4fca0d8cb)`(`[`FRHAPI_JsonValue`](undefined.md#structFRHAPI__JsonValue)` && NewValue)` <a id="structFRHAPI__SettingData_1a7e44672c04f8bfef29258ea4fca0d8cb"></a>

Sets the value of Value using move semantics.

#### `public inline void `[`SetValueToNull`](#structFRHAPI__SettingData_1a501cbe0943435421c563cd8ffc200faa)`()` <a id="structFRHAPI__SettingData_1a501cbe0943435421c563cd8ffc200faa"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsValueNull`](#structFRHAPI__SettingData_1aa030381d1a1f052d397cb14cda8106c3)`() const` <a id="structFRHAPI__SettingData_1aa030381d1a1f052d397cb14cda8106c3"></a>

Checks whether Value is set to null.

