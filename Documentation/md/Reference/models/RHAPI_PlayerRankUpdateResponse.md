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
`public inline FORCEINLINE TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & `[`GetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponse_1a3c0dfd7ec29d9ae50a476a9e7daf8087)`()` | Gets the value of UpdatedPlayers.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & `[`GetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponse_1a45982bd48d39a02c925be5ec056d8d11)`() const` | Gets the value of UpdatedPlayers.
`public inline FORCEINLINE void `[`SetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponse_1afad2dd1300bf8167d01ee1b70175648a)`(const TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & NewValue)` | Sets the value of UpdatedPlayers.
`public inline FORCEINLINE void `[`SetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponse_1a9f51b93c0f6cfcb5295d98aee752788d)`(TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > && NewValue)` | Sets the value of UpdatedPlayers using move semantics.

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

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & `[`GetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponse_1a3c0dfd7ec29d9ae50a476a9e7daf8087)`()` <a id="structFRHAPI__PlayerRankUpdateResponse_1a3c0dfd7ec29d9ae50a476a9e7daf8087"></a>

Gets the value of UpdatedPlayers.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & `[`GetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponse_1a45982bd48d39a02c925be5ec056d8d11)`() const` <a id="structFRHAPI__PlayerRankUpdateResponse_1a45982bd48d39a02c925be5ec056d8d11"></a>

Gets the value of UpdatedPlayers.

#### `public inline FORCEINLINE void `[`SetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponse_1afad2dd1300bf8167d01ee1b70175648a)`(const TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > & NewValue)` <a id="structFRHAPI__PlayerRankUpdateResponse_1afad2dd1300bf8167d01ee1b70175648a"></a>

Sets the value of UpdatedPlayers.

#### `public inline FORCEINLINE void `[`SetUpdatedPlayers`](#structFRHAPI__PlayerRankUpdateResponse_1a9f51b93c0f6cfcb5295d98aee752788d)`(TArray< `[`FRHAPI_PlayerRankResponse`](RHAPI_PlayerRankResponse.md#structFRHAPI__PlayerRankResponse)` > && NewValue)` <a id="structFRHAPI__PlayerRankUpdateResponse_1a9f51b93c0f6cfcb5295d98aee752788d"></a>

Sets the value of UpdatedPlayers using move semantics.

