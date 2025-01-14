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
`public inline int32 & `[`GetPlayerId`](#structFRHAPI__PlayerIdWrapper_1a99f86ff83f073043067d2b3fc2440a5e)`()` | Gets the value of PlayerId.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerIdWrapper_1a11765147de44d2b1e6f68dde16086a01)`() const` | Gets the value of PlayerId.
`public inline void `[`SetPlayerId`](#structFRHAPI__PlayerIdWrapper_1a0c32b1185c5d5cd36af803e3d7dd6257)`(const int32 & NewValue)` | Sets the value of PlayerId.
`public inline void `[`SetPlayerId`](#structFRHAPI__PlayerIdWrapper_1a1e45e9ab03e19cc61e1e62d191239f5e)`(int32 && NewValue)` | Sets the value of PlayerId using move semantics.
`public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PlayerIdWrapper_1a4ead20a497424bd20af5cf9770c34df4)`() const` | Returns true if PlayerId matches the default value.
`public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PlayerIdWrapper_1af09d4ca3ce7197ff58f5cd4608f51eaa)`()` | Sets the value of PlayerId to its default

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

#### `public inline int32 & `[`GetPlayerId`](#structFRHAPI__PlayerIdWrapper_1a99f86ff83f073043067d2b3fc2440a5e)`()` <a id="structFRHAPI__PlayerIdWrapper_1a99f86ff83f073043067d2b3fc2440a5e"></a>

Gets the value of PlayerId.

#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerIdWrapper_1a11765147de44d2b1e6f68dde16086a01)`() const` <a id="structFRHAPI__PlayerIdWrapper_1a11765147de44d2b1e6f68dde16086a01"></a>

Gets the value of PlayerId.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__PlayerIdWrapper_1a0c32b1185c5d5cd36af803e3d7dd6257)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerIdWrapper_1a0c32b1185c5d5cd36af803e3d7dd6257"></a>

Sets the value of PlayerId.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__PlayerIdWrapper_1a1e45e9ab03e19cc61e1e62d191239f5e)`(int32 && NewValue)` <a id="structFRHAPI__PlayerIdWrapper_1a1e45e9ab03e19cc61e1e62d191239f5e"></a>

Sets the value of PlayerId using move semantics.

#### `public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PlayerIdWrapper_1a4ead20a497424bd20af5cf9770c34df4)`() const` <a id="structFRHAPI__PlayerIdWrapper_1a4ead20a497424bd20af5cf9770c34df4"></a>

Returns true if PlayerId matches the default value.

#### `public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PlayerIdWrapper_1af09d4ca3ce7197ff58f5cd4608f51eaa)`()` <a id="structFRHAPI__PlayerIdWrapper_1af09d4ca3ce7197ff58f5cd4608f51eaa"></a>

Sets the value of PlayerId to its default

