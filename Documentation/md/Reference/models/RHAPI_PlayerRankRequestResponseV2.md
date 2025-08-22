---
title: RHAPI_PlayerRankRequestResponseV2
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerRankRequestResponseV2`](#structFRHAPI__PlayerRankRequestResponseV2) | Response to successfully requesting all of a player&#39;s ranks.

## struct `FRHAPI_PlayerRankRequestResponseV2` <a id="structFRHAPI__PlayerRankRequestResponseV2"></a>

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
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankRequestResponseV2_1a1bbd88ec19e7fd3f84726c0b7d503022)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > & `[`GetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1a1d0526432c7c718ac25adcdc98036061)`()` | Gets the value of PlayerRanks.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > & `[`GetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1a2700a77c4404163691efdf95ad75b87e)`() const` | Gets the value of PlayerRanks.
`public inline FORCEINLINE void `[`SetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1a259717714ee92d587b6c637faffbb964)`(const TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > & NewValue)` | Sets the value of PlayerRanks.
`public inline FORCEINLINE void `[`SetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1aea8a13c1f9fec7d44f862bdf45ad35e1)`(TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > && NewValue)` | Sets the value of PlayerRanks using move semantics.

### Members

#### `public TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > `[`PlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1a44950e643e4498db070573af06af91d3) <a id="structFRHAPI__PlayerRankRequestResponseV2_1a44950e643e4498db070573af06af91d3"></a>

List of player's ranks.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankRequestResponseV2_1a330e528d518b8fc2cd6d372b656e7a49)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerRankRequestResponseV2_1a330e528d518b8fc2cd6d372b656e7a49"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankRequestResponseV2_1a1bbd88ec19e7fd3f84726c0b7d503022)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerRankRequestResponseV2_1a1bbd88ec19e7fd3f84726c0b7d503022"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > & `[`GetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1a1d0526432c7c718ac25adcdc98036061)`()` <a id="structFRHAPI__PlayerRankRequestResponseV2_1a1d0526432c7c718ac25adcdc98036061"></a>

Gets the value of PlayerRanks.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > & `[`GetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1a2700a77c4404163691efdf95ad75b87e)`() const` <a id="structFRHAPI__PlayerRankRequestResponseV2_1a2700a77c4404163691efdf95ad75b87e"></a>

Gets the value of PlayerRanks.

#### `public inline FORCEINLINE void `[`SetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1a259717714ee92d587b6c637faffbb964)`(const TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > & NewValue)` <a id="structFRHAPI__PlayerRankRequestResponseV2_1a259717714ee92d587b6c637faffbb964"></a>

Sets the value of PlayerRanks.

#### `public inline FORCEINLINE void `[`SetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponseV2_1aea8a13c1f9fec7d44f862bdf45ad35e1)`(TArray< `[`FRHAPI_PlayerRankResponseV2`](RHAPI_PlayerRankResponseV2.md#structFRHAPI__PlayerRankResponseV2)` > && NewValue)` <a id="structFRHAPI__PlayerRankRequestResponseV2_1aea8a13c1f9fec7d44f862bdf45ad35e1"></a>

Sets the value of PlayerRanks using move semantics.

