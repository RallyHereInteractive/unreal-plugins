# group `RHAPI_PlayerIdWrapper` <a id="group__RHAPI__PlayerIdWrapper"></a>

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
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerIdWrapper_1a9d2fa7ecba7e969c4b941e5d98284fbd)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetPlayerId`](#structFRHAPI__PlayerIdWrapper_1a1f525c0cdd5ad98d8bd51582e9644900)`()` | Gets the value of PlayerId.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerIdWrapper_1a6d4d79522551ec4b8d5bd0045cd3784f)`() const` | Gets the value of PlayerId.
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

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerIdWrapper_1a9d2fa7ecba7e969c4b941e5d98284fbd)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerIdWrapper_1a9d2fa7ecba7e969c4b941e5d98284fbd"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetPlayerId`](#structFRHAPI__PlayerIdWrapper_1a1f525c0cdd5ad98d8bd51582e9644900)`()` <a id="structFRHAPI__PlayerIdWrapper_1a1f525c0cdd5ad98d8bd51582e9644900"></a>

Gets the value of PlayerId.

#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerIdWrapper_1a6d4d79522551ec4b8d5bd0045cd3784f)`() const` <a id="structFRHAPI__PlayerIdWrapper_1a6d4d79522551ec4b8d5bd0045cd3784f"></a>

Gets the value of PlayerId.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__PlayerIdWrapper_1a0c32b1185c5d5cd36af803e3d7dd6257)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerIdWrapper_1a0c32b1185c5d5cd36af803e3d7dd6257"></a>

Sets the value of PlayerId.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__PlayerIdWrapper_1a1e45e9ab03e19cc61e1e62d191239f5e)`(int32 && NewValue)` <a id="structFRHAPI__PlayerIdWrapper_1a1e45e9ab03e19cc61e1e62d191239f5e"></a>

Sets the value of PlayerId using move semantics.

#### `public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PlayerIdWrapper_1a4ead20a497424bd20af5cf9770c34df4)`() const` <a id="structFRHAPI__PlayerIdWrapper_1a4ead20a497424bd20af5cf9770c34df4"></a>

Returns true if PlayerId matches the default value.

#### `public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PlayerIdWrapper_1af09d4ca3ce7197ff58f5cd4608f51eaa)`()` <a id="structFRHAPI__PlayerIdWrapper_1af09d4ca3ce7197ff58f5cd4608f51eaa"></a>

Sets the value of PlayerId to its default

