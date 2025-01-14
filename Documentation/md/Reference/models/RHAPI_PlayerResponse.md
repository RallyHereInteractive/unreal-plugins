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
`public inline int32 & `[`GetPlayerId`](#structFRHAPI__PlayerResponse_1a14725836c9d2aa3b0773c05e87b0c324)`()` | Gets the value of PlayerId.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerResponse_1a34d098b74f847173f5aa71586608f261)`() const` | Gets the value of PlayerId.
`public inline void `[`SetPlayerId`](#structFRHAPI__PlayerResponse_1a4ad9baa2ce0a73b6c6857da8d457c78f)`(const int32 & NewValue)` | Sets the value of PlayerId.
`public inline void `[`SetPlayerId`](#structFRHAPI__PlayerResponse_1aaaaa8a2058e3140b8ebe28172665a034)`(int32 && NewValue)` | Sets the value of PlayerId using move semantics.
`public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PlayerResponse_1a1e4e3035c00a0707189ce52e4c1f1649)`() const` | Returns true if PlayerId matches the default value.
`public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PlayerResponse_1ae3de40c04341be8f81a980d77123ae55)`()` | Sets the value of PlayerId to its default
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerResponse_1a7e25faa3b197971e26fe9e5c29cdbb27)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerResponse_1a1175abad020d68533a1a77c7d4a7684a)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerResponse_1acd2eae750719d7a1ea45f763b13a259e)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerResponse_1a29d5ef80cd65fdbd55cfe5f6886b997b)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.

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

#### `public inline int32 & `[`GetPlayerId`](#structFRHAPI__PlayerResponse_1a14725836c9d2aa3b0773c05e87b0c324)`()` <a id="structFRHAPI__PlayerResponse_1a14725836c9d2aa3b0773c05e87b0c324"></a>

Gets the value of PlayerId.

#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerResponse_1a34d098b74f847173f5aa71586608f261)`() const` <a id="structFRHAPI__PlayerResponse_1a34d098b74f847173f5aa71586608f261"></a>

Gets the value of PlayerId.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__PlayerResponse_1a4ad9baa2ce0a73b6c6857da8d457c78f)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerResponse_1a4ad9baa2ce0a73b6c6857da8d457c78f"></a>

Sets the value of PlayerId.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__PlayerResponse_1aaaaa8a2058e3140b8ebe28172665a034)`(int32 && NewValue)` <a id="structFRHAPI__PlayerResponse_1aaaaa8a2058e3140b8ebe28172665a034"></a>

Sets the value of PlayerId using move semantics.

#### `public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PlayerResponse_1a1e4e3035c00a0707189ce52e4c1f1649)`() const` <a id="structFRHAPI__PlayerResponse_1a1e4e3035c00a0707189ce52e4c1f1649"></a>

Returns true if PlayerId matches the default value.

#### `public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PlayerResponse_1ae3de40c04341be8f81a980d77123ae55)`()` <a id="structFRHAPI__PlayerResponse_1ae3de40c04341be8f81a980d77123ae55"></a>

Sets the value of PlayerId to its default

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerResponse_1a7e25faa3b197971e26fe9e5c29cdbb27)`()` <a id="structFRHAPI__PlayerResponse_1a7e25faa3b197971e26fe9e5c29cdbb27"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerResponse_1a1175abad020d68533a1a77c7d4a7684a)`() const` <a id="structFRHAPI__PlayerResponse_1a1175abad020d68533a1a77c7d4a7684a"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerResponse_1acd2eae750719d7a1ea45f763b13a259e)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerResponse_1acd2eae750719d7a1ea45f763b13a259e"></a>

Sets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerResponse_1a29d5ef80cd65fdbd55cfe5f6886b997b)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerResponse_1a29d5ef80cd65fdbd55cfe5f6886b997b"></a>

Sets the value of PlayerUuid using move semantics.

