---
title: RHAPI_PlayerRank
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerRank`](#structFRHAPI__PlayerRank) | Rank data about a specific player.

## struct `FRHAPI_PlayerRank` <a id="structFRHAPI__PlayerRank"></a>

```
struct FRHAPI_PlayerRank
  : public FRHAPI_Model
```

Rank data about a specific player.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerRank_1ab72b12eb85107f8acdc0bef6fa927144) | UUID for this specific player.
`public `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` `[`Rank`](#structFRHAPI__PlayerRank_1acabd2ad132e2e6f72dff283fa1683b48) | Current rank info about player.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerRank_1a7804638d8c814d9315f5b2f9dc82f930)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerRank_1a7ec65e79a6cc820351ad222a9985e87d)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRank_1acb8664c482207aea00c7cc4ffdf95c64)`()` | Gets the value of PlayerUuid.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRank_1a9c90d426a0bc3cdf400616b7a3ff71bc)`() const` | Gets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerRank_1a708c4bf600340d47340600cc2e71d366)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerRank_1aac0ae34a335da5db404a9752ff9040bd)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline FORCEINLINE `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRank_1a51aeed4a67be1dcc86c2b9e02964d42c)`()` | Gets the value of Rank.
`public inline FORCEINLINE const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRank_1a064b2f4176a7ffef68e356da6e588a2c)`() const` | Gets the value of Rank.
`public inline FORCEINLINE void `[`SetRank`](#structFRHAPI__PlayerRank_1a24e6d0a8a8f41bde23026fe5eb9343ec)`(const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & NewValue)` | Sets the value of Rank.
`public inline FORCEINLINE void `[`SetRank`](#structFRHAPI__PlayerRank_1ac63f9f9f5edd8e4366a41603b4eb4551)`(`[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` && NewValue)` | Sets the value of Rank using move semantics.

### Members

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerRank_1ab72b12eb85107f8acdc0bef6fa927144) <a id="structFRHAPI__PlayerRank_1ab72b12eb85107f8acdc0bef6fa927144"></a>

UUID for this specific player.

#### `public `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` `[`Rank`](#structFRHAPI__PlayerRank_1acabd2ad132e2e6f72dff283fa1683b48) <a id="structFRHAPI__PlayerRank_1acabd2ad132e2e6f72dff283fa1683b48"></a>

Current rank info about player.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerRank_1a7804638d8c814d9315f5b2f9dc82f930)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerRank_1a7804638d8c814d9315f5b2f9dc82f930"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerRank_1a7ec65e79a6cc820351ad222a9985e87d)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerRank_1a7ec65e79a6cc820351ad222a9985e87d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRank_1acb8664c482207aea00c7cc4ffdf95c64)`()` <a id="structFRHAPI__PlayerRank_1acb8664c482207aea00c7cc4ffdf95c64"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerRank_1a9c90d426a0bc3cdf400616b7a3ff71bc)`() const` <a id="structFRHAPI__PlayerRank_1a9c90d426a0bc3cdf400616b7a3ff71bc"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerRank_1a708c4bf600340d47340600cc2e71d366)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerRank_1a708c4bf600340d47340600cc2e71d366"></a>

Sets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerRank_1aac0ae34a335da5db404a9752ff9040bd)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerRank_1aac0ae34a335da5db404a9752ff9040bd"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline FORCEINLINE `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRank_1a51aeed4a67be1dcc86c2b9e02964d42c)`()` <a id="structFRHAPI__PlayerRank_1a51aeed4a67be1dcc86c2b9e02964d42c"></a>

Gets the value of Rank.

#### `public inline FORCEINLINE const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__PlayerRank_1a064b2f4176a7ffef68e356da6e588a2c)`() const` <a id="structFRHAPI__PlayerRank_1a064b2f4176a7ffef68e356da6e588a2c"></a>

Gets the value of Rank.

#### `public inline FORCEINLINE void `[`SetRank`](#structFRHAPI__PlayerRank_1a24e6d0a8a8f41bde23026fe5eb9343ec)`(const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & NewValue)` <a id="structFRHAPI__PlayerRank_1a24e6d0a8a8f41bde23026fe5eb9343ec"></a>

Sets the value of Rank.

#### `public inline FORCEINLINE void `[`SetRank`](#structFRHAPI__PlayerRank_1ac63f9f9f5edd8e4366a41603b4eb4551)`(`[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` && NewValue)` <a id="structFRHAPI__PlayerRank_1ac63f9f9f5edd8e4366a41603b4eb4551"></a>

Sets the value of Rank using move semantics.

