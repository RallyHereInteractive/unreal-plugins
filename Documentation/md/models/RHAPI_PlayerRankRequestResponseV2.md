# group `RHAPI_PlayerRankRequestResponseV2` <a id="group__RHAPI__PlayerRankRequestResponseV2"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerRankRequestResponseV2`](#structFRHAPI__PlayerRankRequestResponseV2) | Response to successfully requesting all of a player&#39;s ranks.

---
title: FRHAPI_PlayerRankRequestResponseV2
---

```
struct FRHAPI_PlayerRankRequestResponseV2
  : public FRHAPI_Model
```

Response to successfully requesting all of a player&#39;s ranks.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > `[`PlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1a44950e643e4498db070573af06af91d3) | List of player's ranks.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankRequestResponseV2_1a330e528d518b8fc2cd6d372b656e7a49)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankRequestResponseV2_1aaf3db6c14a52fb5db4bbf4aa9a8a291a)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > & `[`GetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1a4b0f64f6adb6b32e30d012eea8623b54)`()` | Gets the value of PlayerRanks.
`public inline const TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > & `[`GetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1ab5ce87761c241ccefaf1c5fe1ac0db82)`() const` | Gets the value of PlayerRanks.
`public inline void `[`SetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1a16f78c370749d8c866955f5dece8254a)`(const TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > & NewValue)` | Sets the value of PlayerRanks.
`public inline void `[`SetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1af221419bf3e57173ac1fc136b0c63a6a)`(TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > && NewValue)` | Sets the value of PlayerRanks using move semantics.

### Members

#### `public TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > `[`PlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1a44950e643e4498db070573af06af91d3) <a id="structFRHAPI__PlayerRankRequestResponseV2_1a44950e643e4498db070573af06af91d3"></a>

List of player's ranks.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankRequestResponseV2_1a330e528d518b8fc2cd6d372b656e7a49)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerRankRequestResponseV2_1a330e528d518b8fc2cd6d372b656e7a49"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankRequestResponseV2_1aaf3db6c14a52fb5db4bbf4aa9a8a291a)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerRankRequestResponseV2_1aaf3db6c14a52fb5db4bbf4aa9a8a291a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > & `[`GetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1a4b0f64f6adb6b32e30d012eea8623b54)`()` <a id="structFRHAPI__PlayerRankRequestResponseV2_1a4b0f64f6adb6b32e30d012eea8623b54"></a>

Gets the value of PlayerRanks.

#### `public inline const TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > & `[`GetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1ab5ce87761c241ccefaf1c5fe1ac0db82)`() const` <a id="structFRHAPI__PlayerRankRequestResponseV2_1ab5ce87761c241ccefaf1c5fe1ac0db82"></a>

Gets the value of PlayerRanks.

#### `public inline void `[`SetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1a16f78c370749d8c866955f5dece8254a)`(const TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > & NewValue)` <a id="structFRHAPI__PlayerRankRequestResponseV2_1a16f78c370749d8c866955f5dece8254a"></a>

Sets the value of PlayerRanks.

#### `public inline void `[`SetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1af221419bf3e57173ac1fc136b0c63a6a)`(TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > && NewValue)` <a id="structFRHAPI__PlayerRankRequestResponseV2_1af221419bf3e57173ac1fc136b0c63a6a"></a>

Sets the value of PlayerRanks using move semantics.

