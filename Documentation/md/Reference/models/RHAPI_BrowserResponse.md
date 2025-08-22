---
title: RHAPI_BrowserResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_BrowserResponse`](#structFRHAPI__BrowserResponse) | A response with a list of browsers, and a cursor to continue iterating through them.

## struct `FRHAPI_BrowserResponse` <a id="structFRHAPI__BrowserResponse"></a>

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
`public virtual void `[`WriteJson`](#structFRHAPI__BrowserResponse_1aed7336881aa3584650ebfcf620e8b446)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE int32 & `[`GetCursor`](#structFRHAPI__BrowserResponse_1af227a5f40d5052e6ebca437401e270bf)`()` | Gets the value of Cursor.
`public inline FORCEINLINE const int32 & `[`GetCursor`](#structFRHAPI__BrowserResponse_1a6dda283c3ef0d8de285811bc71384260)`() const` | Gets the value of Cursor.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__BrowserResponse_1a282e04391c0ea7f77f032ab07d803f5b)`(const int32 & NewValue)` | Sets the value of Cursor.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__BrowserResponse_1ad59444a962b1c7e70392d5620dbd437c)`(int32 && NewValue)` | Sets the value of Cursor using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Cursor`](#structFRHAPI__BrowserResponse_1a6ca83de920ed0db64fc76aef3158a866)`()` | Returns the default value of Cursor.
`public inline FORCEINLINE TArray< `[`FRHAPI_BrowserSessionInfo`](RHAPI_BrowserSessionInfo.md#structFRHAPI__BrowserSessionInfo)` > & `[`GetBrowserSessions`](#structFRHAPI__BrowserResponse_1a5702f2b724b3fa21892fbafd8b454c12)`()` | Gets the value of BrowserSessions.
`public inline FORCEINLINE const TArray< `[`FRHAPI_BrowserSessionInfo`](RHAPI_BrowserSessionInfo.md#structFRHAPI__BrowserSessionInfo)` > & `[`GetBrowserSessions`](#structFRHAPI__BrowserResponse_1a19f4147142f7e2a49aa3a99078925171)`() const` | Gets the value of BrowserSessions.
`public inline FORCEINLINE void `[`SetBrowserSessions`](#structFRHAPI__BrowserResponse_1ac05af5f2ae1cb827ebcf5e0b9c8581b1)`(const TArray< `[`FRHAPI_BrowserSessionInfo`](RHAPI_BrowserSessionInfo.md#structFRHAPI__BrowserSessionInfo)` > & NewValue)` | Sets the value of BrowserSessions.
`public inline FORCEINLINE void `[`SetBrowserSessions`](#structFRHAPI__BrowserResponse_1a3696b0bb7d2e6dfb295647a9f4854437)`(TArray< `[`FRHAPI_BrowserSessionInfo`](RHAPI_BrowserSessionInfo.md#structFRHAPI__BrowserSessionInfo)` > && NewValue)` | Sets the value of BrowserSessions using move semantics.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__BrowserResponse_1aed7336881aa3584650ebfcf620e8b446)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__BrowserResponse_1aed7336881aa3584650ebfcf620e8b446"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE int32 & `[`GetCursor`](#structFRHAPI__BrowserResponse_1af227a5f40d5052e6ebca437401e270bf)`()` <a id="structFRHAPI__BrowserResponse_1af227a5f40d5052e6ebca437401e270bf"></a>

Gets the value of Cursor.

#### `public inline FORCEINLINE const int32 & `[`GetCursor`](#structFRHAPI__BrowserResponse_1a6dda283c3ef0d8de285811bc71384260)`() const` <a id="structFRHAPI__BrowserResponse_1a6dda283c3ef0d8de285811bc71384260"></a>

Gets the value of Cursor.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__BrowserResponse_1a282e04391c0ea7f77f032ab07d803f5b)`(const int32 & NewValue)` <a id="structFRHAPI__BrowserResponse_1a282e04391c0ea7f77f032ab07d803f5b"></a>

Sets the value of Cursor.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__BrowserResponse_1ad59444a962b1c7e70392d5620dbd437c)`(int32 && NewValue)` <a id="structFRHAPI__BrowserResponse_1ad59444a962b1c7e70392d5620dbd437c"></a>

Sets the value of Cursor using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Cursor`](#structFRHAPI__BrowserResponse_1a6ca83de920ed0db64fc76aef3158a866)`()` <a id="structFRHAPI__BrowserResponse_1a6ca83de920ed0db64fc76aef3158a866"></a>

Returns the default value of Cursor.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_BrowserSessionInfo`](RHAPI_BrowserSessionInfo.md#structFRHAPI__BrowserSessionInfo)` > & `[`GetBrowserSessions`](#structFRHAPI__BrowserResponse_1a5702f2b724b3fa21892fbafd8b454c12)`()` <a id="structFRHAPI__BrowserResponse_1a5702f2b724b3fa21892fbafd8b454c12"></a>

Gets the value of BrowserSessions.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_BrowserSessionInfo`](RHAPI_BrowserSessionInfo.md#structFRHAPI__BrowserSessionInfo)` > & `[`GetBrowserSessions`](#structFRHAPI__BrowserResponse_1a19f4147142f7e2a49aa3a99078925171)`() const` <a id="structFRHAPI__BrowserResponse_1a19f4147142f7e2a49aa3a99078925171"></a>

Gets the value of BrowserSessions.

#### `public inline FORCEINLINE void `[`SetBrowserSessions`](#structFRHAPI__BrowserResponse_1ac05af5f2ae1cb827ebcf5e0b9c8581b1)`(const TArray< `[`FRHAPI_BrowserSessionInfo`](RHAPI_BrowserSessionInfo.md#structFRHAPI__BrowserSessionInfo)` > & NewValue)` <a id="structFRHAPI__BrowserResponse_1ac05af5f2ae1cb827ebcf5e0b9c8581b1"></a>

Sets the value of BrowserSessions.

#### `public inline FORCEINLINE void `[`SetBrowserSessions`](#structFRHAPI__BrowserResponse_1a3696b0bb7d2e6dfb295647a9f4854437)`(TArray< `[`FRHAPI_BrowserSessionInfo`](RHAPI_BrowserSessionInfo.md#structFRHAPI__BrowserSessionInfo)` > && NewValue)` <a id="structFRHAPI__BrowserResponse_1a3696b0bb7d2e6dfb295647a9f4854437"></a>

Sets the value of BrowserSessions using move semantics.

