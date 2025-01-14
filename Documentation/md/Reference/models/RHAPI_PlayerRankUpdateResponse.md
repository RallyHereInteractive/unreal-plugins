---
title: RHAPI_PlayerRankUpdateResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerRankUpdateResponse`](#structFRHAPI__PlayerRankUpdateResponse) | DEPRECATED Response to successfully updating players&#39; ranks.

## struct `FRHAPI_PlayerRankUpdateResponse` <a id="structFRHAPI__PlayerRankUpdateResponse"></a>

```
struct FRHAPI_PlayerRankUpdateResponse
  : public FRHAPI_Model
```

DEPRECATED Response to successfully updating players&#39; ranks.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > `[`UpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponse_1a7f6d7817320d4a24ba83cdbdb5f5acaf) | List of players and their updated ranks.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankUpdateResponse_1a5a4b1116d953b9afbdc16acfbd4a96d1)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankUpdateResponse_1ace19e427dd8cab3a626d0f867491ac37)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & `[`GetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponse_1a3f61b807a6e421f4c090732d55e2364d)`()` | Gets the value of UpdatedPlayers.
`public inline const TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & `[`GetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponse_1afff341f3f5191f0170b09c003f1d4460)`() const` | Gets the value of UpdatedPlayers.
`public inline void `[`SetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponse_1aaa5e1d700194f6d9ee5274fbeb3c5a6e)`(const TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & NewValue)` | Sets the value of UpdatedPlayers.
`public inline void `[`SetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponse_1af0311c9de61026cc1885619cddf46298)`(TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > && NewValue)` | Sets the value of UpdatedPlayers using move semantics.

### Members

#### `public TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > `[`UpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponse_1a7f6d7817320d4a24ba83cdbdb5f5acaf) <a id="structFRHAPI__PlayerRankUpdateResponse_1a7f6d7817320d4a24ba83cdbdb5f5acaf"></a>

List of players and their updated ranks.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerRankUpdateResponse_1a5a4b1116d953b9afbdc16acfbd4a96d1)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerRankUpdateResponse_1a5a4b1116d953b9afbdc16acfbd4a96d1"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerRankUpdateResponse_1ace19e427dd8cab3a626d0f867491ac37)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerRankUpdateResponse_1ace19e427dd8cab3a626d0f867491ac37"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & `[`GetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponse_1a3f61b807a6e421f4c090732d55e2364d)`()` <a id="structFRHAPI__PlayerRankUpdateResponse_1a3f61b807a6e421f4c090732d55e2364d"></a>

Gets the value of UpdatedPlayers.

#### `public inline const TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & `[`GetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponse_1afff341f3f5191f0170b09c003f1d4460)`() const` <a id="structFRHAPI__PlayerRankUpdateResponse_1afff341f3f5191f0170b09c003f1d4460"></a>

Gets the value of UpdatedPlayers.

#### `public inline void `[`SetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponse_1aaa5e1d700194f6d9ee5274fbeb3c5a6e)`(const TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & NewValue)` <a id="structFRHAPI__PlayerRankUpdateResponse_1aaa5e1d700194f6d9ee5274fbeb3c5a6e"></a>

Sets the value of UpdatedPlayers.

#### `public inline void `[`SetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponse_1af0311c9de61026cc1885619cddf46298)`(TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > && NewValue)` <a id="structFRHAPI__PlayerRankUpdateResponse_1af0311c9de61026cc1885619cddf46298"></a>

Sets the value of UpdatedPlayers using move semantics.

