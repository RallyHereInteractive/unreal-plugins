# group `RHAPI_BrowserResponse` <a id="group__RHAPI__BrowserResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_BrowserResponse`](#structFRHAPI__BrowserResponse) | A response with a list of browsers, and a cursor to continue iterating through them.

---
title: FRHAPI_BrowserResponse
---

```
struct FRHAPI_BrowserResponse
  : public FRHAPI_Model
```

A response with a list of browsers, and a cursor to continue iterating through them.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`Cursor`](#structFRHAPI__BrowserResponse_1a55cb074f32c3933d116ba9d8314aa968) | Cursor to continue iterating through browser sessions. 0 means we have returned the last entry.
`public TArray< `[`FRHAPI_BrowserSessionInfo`](RHAPI_BrowserSessionInfo.md#structFRHAPI__BrowserSessionInfo)` > `[`BrowserSessions`](#structFRHAPI__BrowserResponse_1aafc07faff636c79639a50b2ce433df50) | List of sessions in the browser.
`public virtual bool `[`FromJson`](#structFRHAPI__BrowserResponse_1aca10a85fae0b44b1f8d21a5b8be5fac3)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BrowserResponse_1a1b3ec8b1e6d6ce54abedb3dbd6fbd0d6)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetCursor`](#structFRHAPI__BrowserResponse_1a8ad3e83c0a8c660df736de1159e87f6e)`()` | Gets the value of Cursor.
`public inline const int32 & `[`GetCursor`](#structFRHAPI__BrowserResponse_1aa403e7276640e8bbf9f422b0732a7a09)`() const` | Gets the value of Cursor.
`public inline void `[`SetCursor`](#structFRHAPI__BrowserResponse_1adb8dd77d5fdcf18d702e3b35bf5efb87)`(const int32 & NewValue)` | Sets the value of Cursor.
`public inline void `[`SetCursor`](#structFRHAPI__BrowserResponse_1adff8536baa3a99a64faae3ac2e1287a2)`(int32 && NewValue)` | Sets the value of Cursor using move semantics.
`public inline bool `[`IsCursorDefaultValue`](#structFRHAPI__BrowserResponse_1a078a72d3883533671f1c6ad61c482d92)`() const` | Returns true if Cursor matches the default value.
`public inline void `[`SetCursorToDefault`](#structFRHAPI__BrowserResponse_1ac4037928781c1aff4d935a96804034a5)`()` | Sets the value of Cursor to its default
`public inline TArray< `[`FRHAPI_BrowserSessionInfo`](RHAPI_BrowserSessionInfo.md#structFRHAPI__BrowserSessionInfo)` > & `[`GetBrowserSessions`](#structFRHAPI__BrowserResponse_1ac9e9401ab7e01aae2ec52c8b659397e3)`()` | Gets the value of BrowserSessions.
`public inline const TArray< `[`FRHAPI_BrowserSessionInfo`](RHAPI_BrowserSessionInfo.md#structFRHAPI__BrowserSessionInfo)` > & `[`GetBrowserSessions`](#structFRHAPI__BrowserResponse_1a0773c81ab098d690680418a8073a9d01)`() const` | Gets the value of BrowserSessions.
`public inline void `[`SetBrowserSessions`](#structFRHAPI__BrowserResponse_1a680999021796db5fb9655a53ee69db21)`(const TArray< `[`FRHAPI_BrowserSessionInfo`](RHAPI_BrowserSessionInfo.md#structFRHAPI__BrowserSessionInfo)` > & NewValue)` | Sets the value of BrowserSessions.
`public inline void `[`SetBrowserSessions`](#structFRHAPI__BrowserResponse_1a299e62b2122d515be95208b03961df6a)`(TArray< `[`FRHAPI_BrowserSessionInfo`](RHAPI_BrowserSessionInfo.md#structFRHAPI__BrowserSessionInfo)` > && NewValue)` | Sets the value of BrowserSessions using move semantics.

### Members

#### `public int32 `[`Cursor`](#structFRHAPI__BrowserResponse_1a55cb074f32c3933d116ba9d8314aa968) <a id="structFRHAPI__BrowserResponse_1a55cb074f32c3933d116ba9d8314aa968"></a>

Cursor to continue iterating through browser sessions. 0 means we have returned the last entry.

#### `public TArray< `[`FRHAPI_BrowserSessionInfo`](RHAPI_BrowserSessionInfo.md#structFRHAPI__BrowserSessionInfo)` > `[`BrowserSessions`](#structFRHAPI__BrowserResponse_1aafc07faff636c79639a50b2ce433df50) <a id="structFRHAPI__BrowserResponse_1aafc07faff636c79639a50b2ce433df50"></a>

List of sessions in the browser.

#### `public virtual bool `[`FromJson`](#structFRHAPI__BrowserResponse_1aca10a85fae0b44b1f8d21a5b8be5fac3)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BrowserResponse_1aca10a85fae0b44b1f8d21a5b8be5fac3"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__BrowserResponse_1a1b3ec8b1e6d6ce54abedb3dbd6fbd0d6)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__BrowserResponse_1a1b3ec8b1e6d6ce54abedb3dbd6fbd0d6"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetCursor`](#structFRHAPI__BrowserResponse_1a8ad3e83c0a8c660df736de1159e87f6e)`()` <a id="structFRHAPI__BrowserResponse_1a8ad3e83c0a8c660df736de1159e87f6e"></a>

Gets the value of Cursor.

#### `public inline const int32 & `[`GetCursor`](#structFRHAPI__BrowserResponse_1aa403e7276640e8bbf9f422b0732a7a09)`() const` <a id="structFRHAPI__BrowserResponse_1aa403e7276640e8bbf9f422b0732a7a09"></a>

Gets the value of Cursor.

#### `public inline void `[`SetCursor`](#structFRHAPI__BrowserResponse_1adb8dd77d5fdcf18d702e3b35bf5efb87)`(const int32 & NewValue)` <a id="structFRHAPI__BrowserResponse_1adb8dd77d5fdcf18d702e3b35bf5efb87"></a>

Sets the value of Cursor.

#### `public inline void `[`SetCursor`](#structFRHAPI__BrowserResponse_1adff8536baa3a99a64faae3ac2e1287a2)`(int32 && NewValue)` <a id="structFRHAPI__BrowserResponse_1adff8536baa3a99a64faae3ac2e1287a2"></a>

Sets the value of Cursor using move semantics.

#### `public inline bool `[`IsCursorDefaultValue`](#structFRHAPI__BrowserResponse_1a078a72d3883533671f1c6ad61c482d92)`() const` <a id="structFRHAPI__BrowserResponse_1a078a72d3883533671f1c6ad61c482d92"></a>

Returns true if Cursor matches the default value.

#### `public inline void `[`SetCursorToDefault`](#structFRHAPI__BrowserResponse_1ac4037928781c1aff4d935a96804034a5)`()` <a id="structFRHAPI__BrowserResponse_1ac4037928781c1aff4d935a96804034a5"></a>

Sets the value of Cursor to its default

#### `public inline TArray< `[`FRHAPI_BrowserSessionInfo`](RHAPI_BrowserSessionInfo.md#structFRHAPI__BrowserSessionInfo)` > & `[`GetBrowserSessions`](#structFRHAPI__BrowserResponse_1ac9e9401ab7e01aae2ec52c8b659397e3)`()` <a id="structFRHAPI__BrowserResponse_1ac9e9401ab7e01aae2ec52c8b659397e3"></a>

Gets the value of BrowserSessions.

#### `public inline const TArray< `[`FRHAPI_BrowserSessionInfo`](RHAPI_BrowserSessionInfo.md#structFRHAPI__BrowserSessionInfo)` > & `[`GetBrowserSessions`](#structFRHAPI__BrowserResponse_1a0773c81ab098d690680418a8073a9d01)`() const` <a id="structFRHAPI__BrowserResponse_1a0773c81ab098d690680418a8073a9d01"></a>

Gets the value of BrowserSessions.

#### `public inline void `[`SetBrowserSessions`](#structFRHAPI__BrowserResponse_1a680999021796db5fb9655a53ee69db21)`(const TArray< `[`FRHAPI_BrowserSessionInfo`](RHAPI_BrowserSessionInfo.md#structFRHAPI__BrowserSessionInfo)` > & NewValue)` <a id="structFRHAPI__BrowserResponse_1a680999021796db5fb9655a53ee69db21"></a>

Sets the value of BrowserSessions.

#### `public inline void `[`SetBrowserSessions`](#structFRHAPI__BrowserResponse_1a299e62b2122d515be95208b03961df6a)`(TArray< `[`FRHAPI_BrowserSessionInfo`](RHAPI_BrowserSessionInfo.md#structFRHAPI__BrowserSessionInfo)` > && NewValue)` <a id="structFRHAPI__BrowserResponse_1a299e62b2122d515be95208b03961df6a"></a>

Sets the value of BrowserSessions using move semantics.

