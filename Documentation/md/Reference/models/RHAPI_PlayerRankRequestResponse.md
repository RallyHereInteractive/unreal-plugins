---
title: RHAPI_PlayerRankRequestResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerRankRequestResponse`](#structFRHAPI__PlayerRankRequestResponse) | DEPRECATED Response to successfully requesting all of a player&#39;s ranks.

## struct `FRHAPI_PlayerRankRequestResponse` <a id="structFRHAPI__PlayerRankRequestResponse"></a>

```
struct FRHAPI_PlayerRankRequestResponse
  : public FRHAPI_Model
```

DEPRECATED Response to successfully requesting all of a player&#39;s ranks.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > `[`PlayerRanks`](#structFRHAPI__PlayerRankRequestResponse_1ac818b287026b56e3dd2346a1cdf1bb6d) | List of player's ranks.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankRequestResponse_1a5b7a6231f7c0ba5663c0a55ef5b83da4)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankRequestResponse_1a669300810e86559df76cd4ada7699a42)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & `[`GetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponse_1a19dc446e7f0ed01f666cccf7b7fd6365)`()` | Gets the value of PlayerRanks.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & `[`GetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponse_1af9f2a3a54c49165709f598a28f2acfa4)`() const` | Gets the value of PlayerRanks.
`public inline FORCEINLINE void `[`SetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponse_1a02b7dc6e6edb418217c604fa792a7975)`(const TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & NewValue)` | Sets the value of PlayerRanks.
`public inline FORCEINLINE void `[`SetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponse_1a3203f51512261bb031bab5114df9867b)`(TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > && NewValue)` | Sets the value of PlayerRanks using move semantics.

### Members

#### `public TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > `[`PlayerRanks`](#structFRHAPI__PlayerRankRequestResponse_1ac818b287026b56e3dd2346a1cdf1bb6d) <a id="structFRHAPI__PlayerRankRequestResponse_1ac818b287026b56e3dd2346a1cdf1bb6d"></a>

List of player's ranks.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankRequestResponse_1a5b7a6231f7c0ba5663c0a55ef5b83da4)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerRankRequestResponse_1a5b7a6231f7c0ba5663c0a55ef5b83da4"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankRequestResponse_1a669300810e86559df76cd4ada7699a42)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerRankRequestResponse_1a669300810e86559df76cd4ada7699a42"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & `[`GetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponse_1a19dc446e7f0ed01f666cccf7b7fd6365)`()` <a id="structFRHAPI__PlayerRankRequestResponse_1a19dc446e7f0ed01f666cccf7b7fd6365"></a>

Gets the value of PlayerRanks.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & `[`GetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponse_1af9f2a3a54c49165709f598a28f2acfa4)`() const` <a id="structFRHAPI__PlayerRankRequestResponse_1af9f2a3a54c49165709f598a28f2acfa4"></a>

Gets the value of PlayerRanks.

#### `public inline FORCEINLINE void `[`SetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponse_1a02b7dc6e6edb418217c604fa792a7975)`(const TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & NewValue)` <a id="structFRHAPI__PlayerRankRequestResponse_1a02b7dc6e6edb418217c604fa792a7975"></a>

Sets the value of PlayerRanks.

#### `public inline FORCEINLINE void `[`SetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponse_1a3203f51512261bb031bab5114df9867b)`(TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > && NewValue)` <a id="structFRHAPI__PlayerRankRequestResponse_1a3203f51512261bb031bab5114df9867b"></a>

Sets the value of PlayerRanks using move semantics.

