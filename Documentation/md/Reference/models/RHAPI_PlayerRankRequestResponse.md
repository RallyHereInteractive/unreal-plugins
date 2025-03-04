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
`public inline TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & `[`GetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponse_1ac068f9624d34567a5a6f3e37609998dd)`()` | Gets the value of PlayerRanks.
`public inline const TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & `[`GetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponse_1ae9255b5cc41539ea6ec3bca98470de40)`() const` | Gets the value of PlayerRanks.
`public inline void `[`SetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponse_1ab0671692a0d30244f1fa30df768e5ece)`(const TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & NewValue)` | Sets the value of PlayerRanks.
`public inline void `[`SetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponse_1a46bf8a4306bb0b9375a1275e5257950d)`(TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > && NewValue)` | Sets the value of PlayerRanks using move semantics.

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

#### `public inline TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & `[`GetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponse_1ac068f9624d34567a5a6f3e37609998dd)`()` <a id="structFRHAPI__PlayerRankRequestResponse_1ac068f9624d34567a5a6f3e37609998dd"></a>

Gets the value of PlayerRanks.

#### `public inline const TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & `[`GetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponse_1ae9255b5cc41539ea6ec3bca98470de40)`() const` <a id="structFRHAPI__PlayerRankRequestResponse_1ae9255b5cc41539ea6ec3bca98470de40"></a>

Gets the value of PlayerRanks.

#### `public inline void `[`SetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponse_1ab0671692a0d30244f1fa30df768e5ece)`(const TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & NewValue)` <a id="structFRHAPI__PlayerRankRequestResponse_1ab0671692a0d30244f1fa30df768e5ece"></a>

Sets the value of PlayerRanks.

#### `public inline void `[`SetPlayerRanks`](#structFRHAPI__PlayerRankRequestResponse_1a46bf8a4306bb0b9375a1275e5257950d)`(TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > && NewValue)` <a id="structFRHAPI__PlayerRankRequestResponse_1a46bf8a4306bb0b9375a1275e5257950d"></a>

Sets the value of PlayerRanks using move semantics.

