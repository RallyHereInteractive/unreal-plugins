---
title: RHAPI_PlayerResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerResponse`](#structFRHAPI__PlayerResponse) | Response for getting a player&#39;s info.

## struct `FRHAPI_PlayerResponse` <a id="structFRHAPI__PlayerResponse"></a>

```
struct FRHAPI_PlayerResponse
  : public FRHAPI_Model
```

Response for getting a player&#39;s info.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`PlayerId`](#structFRHAPI__PlayerResponse_1ad310dc7254bc7601cb78f946655b4896) | Player ID *DEPRECATED* use `player_uuid` instead.
`public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerResponse_1adc688a62eabd80c3cfde9688e61bd030) | Player UUID.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerResponse_1abdc8de1be28e6a8912329133edc90dad)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerResponse_1a7f977d96064f9aa2b98382b8616b1db3)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE int32 & `[`GetPlayerId`](#structFRHAPI__PlayerResponse_1aa1da8f9b58cf62662561b002af51db1a)`()` | Gets the value of PlayerId.
`public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerResponse_1a941db1a7544a492b3d1eafd29bb6bf7f)`() const` | Gets the value of PlayerId.
`public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlayerResponse_1a1c24b4e46ac2a0528202e11d1fb6c70c)`(const int32 & NewValue)` | Sets the value of PlayerId.
`public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlayerResponse_1afc33c19b050dbb56673f9730e9fdecef)`(int32 && NewValue)` | Sets the value of PlayerId using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerId`](#structFRHAPI__PlayerResponse_1a517d53925bf1c3679bb35d57d37c9d1f)`()` | Returns the default value of PlayerId.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerResponse_1aa745a6e525fead994998140f982c9742)`()` | Gets the value of PlayerUuid.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerResponse_1ac3e7f72c504d847841ccb2c385d59180)`() const` | Gets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerResponse_1ab8e46f79bc8d1ae46d4f20a7e9ae3cf4)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerResponse_1afdcf443a5addd5cac5d653808216afa2)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.

### Members

#### `public int32 `[`PlayerId`](#structFRHAPI__PlayerResponse_1ad310dc7254bc7601cb78f946655b4896) <a id="structFRHAPI__PlayerResponse_1ad310dc7254bc7601cb78f946655b4896"></a>

Player ID *DEPRECATED* use `player_uuid` instead.

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerResponse_1adc688a62eabd80c3cfde9688e61bd030) <a id="structFRHAPI__PlayerResponse_1adc688a62eabd80c3cfde9688e61bd030"></a>

Player UUID.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerResponse_1abdc8de1be28e6a8912329133edc90dad)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerResponse_1abdc8de1be28e6a8912329133edc90dad"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerResponse_1a7f977d96064f9aa2b98382b8616b1db3)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerResponse_1a7f977d96064f9aa2b98382b8616b1db3"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE int32 & `[`GetPlayerId`](#structFRHAPI__PlayerResponse_1aa1da8f9b58cf62662561b002af51db1a)`()` <a id="structFRHAPI__PlayerResponse_1aa1da8f9b58cf62662561b002af51db1a"></a>

Gets the value of PlayerId.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerResponse_1a941db1a7544a492b3d1eafd29bb6bf7f)`() const` <a id="structFRHAPI__PlayerResponse_1a941db1a7544a492b3d1eafd29bb6bf7f"></a>

Gets the value of PlayerId.

#### `public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlayerResponse_1a1c24b4e46ac2a0528202e11d1fb6c70c)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerResponse_1a1c24b4e46ac2a0528202e11d1fb6c70c"></a>

Sets the value of PlayerId.

#### `public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlayerResponse_1afc33c19b050dbb56673f9730e9fdecef)`(int32 && NewValue)` <a id="structFRHAPI__PlayerResponse_1afc33c19b050dbb56673f9730e9fdecef"></a>

Sets the value of PlayerId using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerId`](#structFRHAPI__PlayerResponse_1a517d53925bf1c3679bb35d57d37c9d1f)`()` <a id="structFRHAPI__PlayerResponse_1a517d53925bf1c3679bb35d57d37c9d1f"></a>

Returns the default value of PlayerId.

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerResponse_1aa745a6e525fead994998140f982c9742)`()` <a id="structFRHAPI__PlayerResponse_1aa745a6e525fead994998140f982c9742"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerResponse_1ac3e7f72c504d847841ccb2c385d59180)`() const` <a id="structFRHAPI__PlayerResponse_1ac3e7f72c504d847841ccb2c385d59180"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerResponse_1ab8e46f79bc8d1ae46d4f20a7e9ae3cf4)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerResponse_1ab8e46f79bc8d1ae46d4f20a7e9ae3cf4"></a>

Sets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerResponse_1afdcf443a5addd5cac5d653808216afa2)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerResponse_1afdcf443a5addd5cac5d653808216afa2"></a>

Sets the value of PlayerUuid using move semantics.

