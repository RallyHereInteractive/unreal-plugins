---
title: RHAPI_CalculateRankResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_CalculateRankResponse`](#structFRHAPI__CalculateRankResponse) | A response to recalculating players&#39; ranks.

## struct `FRHAPI_CalculateRankResponse` <a id="structFRHAPI__CalculateRankResponse"></a>

```
struct FRHAPI_CalculateRankResponse
  : public FRHAPI_Model
```

A response to recalculating players&#39; ranks.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_PlayerRank`](RHAPI_PlayerRank.md#structFRHAPI__PlayerRank)` > `[`UpdatedPlayers`](#structFRHAPI__CalculateRankResponse_1a63d2245aaf9f6f1f399a0aa7593fbf9f) | List of players and their updated ranks.
`public virtual bool `[`FromJson`](#structFRHAPI__CalculateRankResponse_1a77a5a28a9b45ec7c6d4f0bcd222a8033)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__CalculateRankResponse_1a8aacfa55e0db7862a78dcd61a9726865)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlayerRank`](RHAPI_PlayerRank.md#structFRHAPI__PlayerRank)` > & `[`GetUpdatedPlayers`](#structFRHAPI__CalculateRankResponse_1a908fa35e55f8ebadc5da841a97a0c204)`()` | Gets the value of UpdatedPlayers.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerRank`](RHAPI_PlayerRank.md#structFRHAPI__PlayerRank)` > & `[`GetUpdatedPlayers`](#structFRHAPI__CalculateRankResponse_1a896cadf4e34eea5a686f1a3442f4505c)`() const` | Gets the value of UpdatedPlayers.
`public inline FORCEINLINE void `[`SetUpdatedPlayers`](#structFRHAPI__CalculateRankResponse_1a184eb313ef6450c92b7f58efaa4b86d5)`(const TArray< `[`FRHAPI_PlayerRank`](RHAPI_PlayerRank.md#structFRHAPI__PlayerRank)` > & NewValue)` | Sets the value of UpdatedPlayers.
`public inline FORCEINLINE void `[`SetUpdatedPlayers`](#structFRHAPI__CalculateRankResponse_1a82287c2f7e16248c14ef7bc3a596ecd5)`(TArray< `[`FRHAPI_PlayerRank`](RHAPI_PlayerRank.md#structFRHAPI__PlayerRank)` > && NewValue)` | Sets the value of UpdatedPlayers using move semantics.

### Members

#### `public TArray< `[`FRHAPI_PlayerRank`](RHAPI_PlayerRank.md#structFRHAPI__PlayerRank)` > `[`UpdatedPlayers`](#structFRHAPI__CalculateRankResponse_1a63d2245aaf9f6f1f399a0aa7593fbf9f) <a id="structFRHAPI__CalculateRankResponse_1a63d2245aaf9f6f1f399a0aa7593fbf9f"></a>

List of players and their updated ranks.

#### `public virtual bool `[`FromJson`](#structFRHAPI__CalculateRankResponse_1a77a5a28a9b45ec7c6d4f0bcd222a8033)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__CalculateRankResponse_1a77a5a28a9b45ec7c6d4f0bcd222a8033"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__CalculateRankResponse_1a8aacfa55e0db7862a78dcd61a9726865)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__CalculateRankResponse_1a8aacfa55e0db7862a78dcd61a9726865"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlayerRank`](RHAPI_PlayerRank.md#structFRHAPI__PlayerRank)` > & `[`GetUpdatedPlayers`](#structFRHAPI__CalculateRankResponse_1a908fa35e55f8ebadc5da841a97a0c204)`()` <a id="structFRHAPI__CalculateRankResponse_1a908fa35e55f8ebadc5da841a97a0c204"></a>

Gets the value of UpdatedPlayers.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerRank`](RHAPI_PlayerRank.md#structFRHAPI__PlayerRank)` > & `[`GetUpdatedPlayers`](#structFRHAPI__CalculateRankResponse_1a896cadf4e34eea5a686f1a3442f4505c)`() const` <a id="structFRHAPI__CalculateRankResponse_1a896cadf4e34eea5a686f1a3442f4505c"></a>

Gets the value of UpdatedPlayers.

#### `public inline FORCEINLINE void `[`SetUpdatedPlayers`](#structFRHAPI__CalculateRankResponse_1a184eb313ef6450c92b7f58efaa4b86d5)`(const TArray< `[`FRHAPI_PlayerRank`](RHAPI_PlayerRank.md#structFRHAPI__PlayerRank)` > & NewValue)` <a id="structFRHAPI__CalculateRankResponse_1a184eb313ef6450c92b7f58efaa4b86d5"></a>

Sets the value of UpdatedPlayers.

#### `public inline FORCEINLINE void `[`SetUpdatedPlayers`](#structFRHAPI__CalculateRankResponse_1a82287c2f7e16248c14ef7bc3a596ecd5)`(TArray< `[`FRHAPI_PlayerRank`](RHAPI_PlayerRank.md#structFRHAPI__PlayerRank)` > && NewValue)` <a id="structFRHAPI__CalculateRankResponse_1a82287c2f7e16248c14ef7bc3a596ecd5"></a>

Sets the value of UpdatedPlayers using move semantics.

