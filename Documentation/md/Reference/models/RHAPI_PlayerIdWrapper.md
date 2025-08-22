---
title: RHAPI_PlayerIdWrapper
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerIdWrapper`](#structFRHAPI__PlayerIdWrapper) | Model for getting a player ID from a player UUID.

## struct `FRHAPI_PlayerIdWrapper` <a id="structFRHAPI__PlayerIdWrapper"></a>

```
struct FRHAPI_PlayerIdWrapper
  : public FRHAPI_Model
```

Model for getting a player ID from a player UUID.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`PlayerId`](#structFRHAPI__PlayerIdWrapper_1a9d3517523183b4512a3e4335470be60a) | Player ID.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerIdWrapper_1a3901b65228ad40fc0678e8e626e7efde)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerIdWrapper_1a939a28f7bb8f9b1ae37db269485b2a27)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE int32 & `[`GetPlayerId`](#structFRHAPI__PlayerIdWrapper_1a7c69607cdc6774efc7a14501002520f8)`()` | Gets the value of PlayerId.
`public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerIdWrapper_1a68ce7e3349f69809599a031244050c31)`() const` | Gets the value of PlayerId.
`public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlayerIdWrapper_1ac385c4b03156c52d150d1d8638801484)`(const int32 & NewValue)` | Sets the value of PlayerId.
`public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlayerIdWrapper_1a20e717629cf7d122e21851052dd274ab)`(int32 && NewValue)` | Sets the value of PlayerId using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerId`](#structFRHAPI__PlayerIdWrapper_1aef45b745ff9c03f4b2aed3c2b71689ac)`()` | Returns the default value of PlayerId.

### Members

#### `public int32 `[`PlayerId`](#structFRHAPI__PlayerIdWrapper_1a9d3517523183b4512a3e4335470be60a) <a id="structFRHAPI__PlayerIdWrapper_1a9d3517523183b4512a3e4335470be60a"></a>

Player ID.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerIdWrapper_1a3901b65228ad40fc0678e8e626e7efde)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerIdWrapper_1a3901b65228ad40fc0678e8e626e7efde"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerIdWrapper_1a939a28f7bb8f9b1ae37db269485b2a27)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerIdWrapper_1a939a28f7bb8f9b1ae37db269485b2a27"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE int32 & `[`GetPlayerId`](#structFRHAPI__PlayerIdWrapper_1a7c69607cdc6774efc7a14501002520f8)`()` <a id="structFRHAPI__PlayerIdWrapper_1a7c69607cdc6774efc7a14501002520f8"></a>

Gets the value of PlayerId.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerIdWrapper_1a68ce7e3349f69809599a031244050c31)`() const` <a id="structFRHAPI__PlayerIdWrapper_1a68ce7e3349f69809599a031244050c31"></a>

Gets the value of PlayerId.

#### `public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlayerIdWrapper_1ac385c4b03156c52d150d1d8638801484)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerIdWrapper_1ac385c4b03156c52d150d1d8638801484"></a>

Sets the value of PlayerId.

#### `public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlayerIdWrapper_1a20e717629cf7d122e21851052dd274ab)`(int32 && NewValue)` <a id="structFRHAPI__PlayerIdWrapper_1a20e717629cf7d122e21851052dd274ab"></a>

Sets the value of PlayerId using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerId`](#structFRHAPI__PlayerIdWrapper_1aef45b745ff9c03f4b2aed3c2b71689ac)`()` <a id="structFRHAPI__PlayerIdWrapper_1aef45b745ff9c03f4b2aed3c2b71689ac"></a>

Returns the default value of PlayerId.

