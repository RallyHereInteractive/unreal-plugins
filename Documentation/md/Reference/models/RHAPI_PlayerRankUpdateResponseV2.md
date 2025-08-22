---
title: RHAPI_PlayerRankUpdateResponseV2
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerRankUpdateResponseV2`](#structFRHAPI__PlayerRankUpdateResponseV2) | Response to successfully updating players&#39; ranks.

## struct `FRHAPI_PlayerRankUpdateResponseV2` <a id="structFRHAPI__PlayerRankUpdateResponseV2"></a>

```
struct FRHAPI_PlayerRankUpdateResponseV2
  : public FRHAPI_Model
```

Response to successfully updating players&#39; ranks.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > `[`UpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponseV2_1ac8f9ea8f222cf7fac5ac1e6b87014bee) | List of players and their updated ranks.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankUpdateResponseV2_1a45308746a843a2eacff81bedca380584)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankUpdateResponseV2_1a52833940f17f91e32d931557e72a950a)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > & `[`GetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponseV2_1aba829ac6b2debd752a301c39191d7569)`()` | Gets the value of UpdatedPlayers.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > & `[`GetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponseV2_1a377dfb037d398886345811ab4ea029cf)`() const` | Gets the value of UpdatedPlayers.
`public inline FORCEINLINE void `[`SetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponseV2_1aaf3fed1d36a21b899330743ca1666e56)`(const TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > & NewValue)` | Sets the value of UpdatedPlayers.
`public inline FORCEINLINE void `[`SetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponseV2_1a5c75ec2536cef831b74eff6474cec28a)`(TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > && NewValue)` | Sets the value of UpdatedPlayers using move semantics.

### Members

#### `public TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > `[`UpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponseV2_1ac8f9ea8f222cf7fac5ac1e6b87014bee) <a id="structFRHAPI__PlayerRankUpdateResponseV2_1ac8f9ea8f222cf7fac5ac1e6b87014bee"></a>

List of players and their updated ranks.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankUpdateResponseV2_1a45308746a843a2eacff81bedca380584)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerRankUpdateResponseV2_1a45308746a843a2eacff81bedca380584"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankUpdateResponseV2_1a52833940f17f91e32d931557e72a950a)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerRankUpdateResponseV2_1a52833940f17f91e32d931557e72a950a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > & `[`GetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponseV2_1aba829ac6b2debd752a301c39191d7569)`()` <a id="structFRHAPI__PlayerRankUpdateResponseV2_1aba829ac6b2debd752a301c39191d7569"></a>

Gets the value of UpdatedPlayers.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > & `[`GetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponseV2_1a377dfb037d398886345811ab4ea029cf)`() const` <a id="structFRHAPI__PlayerRankUpdateResponseV2_1a377dfb037d398886345811ab4ea029cf"></a>

Gets the value of UpdatedPlayers.

#### `public inline FORCEINLINE void `[`SetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponseV2_1aaf3fed1d36a21b899330743ca1666e56)`(const TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > & NewValue)` <a id="structFRHAPI__PlayerRankUpdateResponseV2_1aaf3fed1d36a21b899330743ca1666e56"></a>

Sets the value of UpdatedPlayers.

#### `public inline FORCEINLINE void `[`SetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponseV2_1a5c75ec2536cef831b74eff6474cec28a)`(TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > && NewValue)` <a id="structFRHAPI__PlayerRankUpdateResponseV2_1a5c75ec2536cef831b74eff6474cec28a"></a>

Sets the value of UpdatedPlayers using move semantics.

