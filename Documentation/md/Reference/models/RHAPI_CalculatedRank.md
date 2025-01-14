---
title: RHAPI_CalculatedRank
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_CalculatedRank`](#structFRHAPI__CalculatedRank) | Additional data about a specific player&#39;s rank and previous match in order to make rank calculations.

## struct `FRHAPI_CalculatedRank` <a id="structFRHAPI__CalculatedRank"></a>

```
struct FRHAPI_CalculatedRank
  : public FRHAPI_Model
```

Additional data about a specific player&#39;s rank and previous match in order to make rank calculations.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid`](#structFRHAPI__CalculatedRank_1a825e0de2c44b5e14f630f275e013a71c) | UUID for this specific player.
`public `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` `[`Rank`](#structFRHAPI__CalculatedRank_1ac26fdb47c557c45f5f8a6d598017d1b1) | Current rank info about player.
`public int32 `[`SecondsInMatch`](#structFRHAPI__CalculatedRank_1ada5c0579a48d3d9c965490f8d3477cce) | How many seconds this player was in the match.
`public virtual bool `[`FromJson`](#structFRHAPI__CalculatedRank_1a1de153b9241a13f3b0ed1fb4a124b690)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__CalculatedRank_1aa55781cbe5c2ee8366af59e9507f7a68)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__CalculatedRank_1a76eef26679989c4c94fcd4cd01752040)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CalculatedRank_1acfba39f5e67941a9ab40afee7b9ffd69)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__CalculatedRank_1aa56c5dfd075679ba8b1c684bca4eea8a)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__CalculatedRank_1a0066dd8e93c29ebd1863625fe9d41649)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__CalculatedRank_1a45ebcd9b7b94df5ca0c714256365f34f)`()` | Gets the value of Rank.
`public inline const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__CalculatedRank_1ab2629f0eccfd4b0bf2785d2b162a6dbb)`() const` | Gets the value of Rank.
`public inline void `[`SetRank`](#structFRHAPI__CalculatedRank_1a5ccac5466c6c8ea12a1a79d10638328e)`(const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & NewValue)` | Sets the value of Rank.
`public inline void `[`SetRank`](#structFRHAPI__CalculatedRank_1af2753646c628af8a8d68b37f24a57f1a)`(`[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` && NewValue)` | Sets the value of Rank using move semantics.
`public inline int32 & `[`GetSecondsInMatch`](#structFRHAPI__CalculatedRank_1a2e933f15a73e18a20c08f64b854df532)`()` | Gets the value of SecondsInMatch.
`public inline const int32 & `[`GetSecondsInMatch`](#structFRHAPI__CalculatedRank_1a6bf4c6866fe6a951c9735b070fad0890)`() const` | Gets the value of SecondsInMatch.
`public inline void `[`SetSecondsInMatch`](#structFRHAPI__CalculatedRank_1a8e54a27497f98dc342393cf73f8700c4)`(const int32 & NewValue)` | Sets the value of SecondsInMatch.
`public inline void `[`SetSecondsInMatch`](#structFRHAPI__CalculatedRank_1a9da3e3da3c35b0144dff99087c7231d1)`(int32 && NewValue)` | Sets the value of SecondsInMatch using move semantics.
`public inline bool `[`IsSecondsInMatchDefaultValue`](#structFRHAPI__CalculatedRank_1a0420e2969a5244a9f0d698845ba1e8ac)`() const` | Returns true if SecondsInMatch matches the default value.
`public inline void `[`SetSecondsInMatchToDefault`](#structFRHAPI__CalculatedRank_1a2e12a2273c581b7a43eaef6c5bb197d2)`()` | Sets the value of SecondsInMatch to its default

### Members

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__CalculatedRank_1a825e0de2c44b5e14f630f275e013a71c) <a id="structFRHAPI__CalculatedRank_1a825e0de2c44b5e14f630f275e013a71c"></a>

UUID for this specific player.

#### `public `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` `[`Rank`](#structFRHAPI__CalculatedRank_1ac26fdb47c557c45f5f8a6d598017d1b1) <a id="structFRHAPI__CalculatedRank_1ac26fdb47c557c45f5f8a6d598017d1b1"></a>

Current rank info about player.

#### `public int32 `[`SecondsInMatch`](#structFRHAPI__CalculatedRank_1ada5c0579a48d3d9c965490f8d3477cce) <a id="structFRHAPI__CalculatedRank_1ada5c0579a48d3d9c965490f8d3477cce"></a>

How many seconds this player was in the match.

#### `public virtual bool `[`FromJson`](#structFRHAPI__CalculatedRank_1a1de153b9241a13f3b0ed1fb4a124b690)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__CalculatedRank_1a1de153b9241a13f3b0ed1fb4a124b690"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__CalculatedRank_1aa55781cbe5c2ee8366af59e9507f7a68)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__CalculatedRank_1aa55781cbe5c2ee8366af59e9507f7a68"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__CalculatedRank_1a76eef26679989c4c94fcd4cd01752040)`()` <a id="structFRHAPI__CalculatedRank_1a76eef26679989c4c94fcd4cd01752040"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CalculatedRank_1acfba39f5e67941a9ab40afee7b9ffd69)`() const` <a id="structFRHAPI__CalculatedRank_1acfba39f5e67941a9ab40afee7b9ffd69"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__CalculatedRank_1aa56c5dfd075679ba8b1c684bca4eea8a)`(const FGuid & NewValue)` <a id="structFRHAPI__CalculatedRank_1aa56c5dfd075679ba8b1c684bca4eea8a"></a>

Sets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__CalculatedRank_1a0066dd8e93c29ebd1863625fe9d41649)`(FGuid && NewValue)` <a id="structFRHAPI__CalculatedRank_1a0066dd8e93c29ebd1863625fe9d41649"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__CalculatedRank_1a45ebcd9b7b94df5ca0c714256365f34f)`()` <a id="structFRHAPI__CalculatedRank_1a45ebcd9b7b94df5ca0c714256365f34f"></a>

Gets the value of Rank.

#### `public inline const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__CalculatedRank_1ab2629f0eccfd4b0bf2785d2b162a6dbb)`() const` <a id="structFRHAPI__CalculatedRank_1ab2629f0eccfd4b0bf2785d2b162a6dbb"></a>

Gets the value of Rank.

#### `public inline void `[`SetRank`](#structFRHAPI__CalculatedRank_1a5ccac5466c6c8ea12a1a79d10638328e)`(const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & NewValue)` <a id="structFRHAPI__CalculatedRank_1a5ccac5466c6c8ea12a1a79d10638328e"></a>

Sets the value of Rank.

#### `public inline void `[`SetRank`](#structFRHAPI__CalculatedRank_1af2753646c628af8a8d68b37f24a57f1a)`(`[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` && NewValue)` <a id="structFRHAPI__CalculatedRank_1af2753646c628af8a8d68b37f24a57f1a"></a>

Sets the value of Rank using move semantics.

#### `public inline int32 & `[`GetSecondsInMatch`](#structFRHAPI__CalculatedRank_1a2e933f15a73e18a20c08f64b854df532)`()` <a id="structFRHAPI__CalculatedRank_1a2e933f15a73e18a20c08f64b854df532"></a>

Gets the value of SecondsInMatch.

#### `public inline const int32 & `[`GetSecondsInMatch`](#structFRHAPI__CalculatedRank_1a6bf4c6866fe6a951c9735b070fad0890)`() const` <a id="structFRHAPI__CalculatedRank_1a6bf4c6866fe6a951c9735b070fad0890"></a>

Gets the value of SecondsInMatch.

#### `public inline void `[`SetSecondsInMatch`](#structFRHAPI__CalculatedRank_1a8e54a27497f98dc342393cf73f8700c4)`(const int32 & NewValue)` <a id="structFRHAPI__CalculatedRank_1a8e54a27497f98dc342393cf73f8700c4"></a>

Sets the value of SecondsInMatch.

#### `public inline void `[`SetSecondsInMatch`](#structFRHAPI__CalculatedRank_1a9da3e3da3c35b0144dff99087c7231d1)`(int32 && NewValue)` <a id="structFRHAPI__CalculatedRank_1a9da3e3da3c35b0144dff99087c7231d1"></a>

Sets the value of SecondsInMatch using move semantics.

#### `public inline bool `[`IsSecondsInMatchDefaultValue`](#structFRHAPI__CalculatedRank_1a0420e2969a5244a9f0d698845ba1e8ac)`() const` <a id="structFRHAPI__CalculatedRank_1a0420e2969a5244a9f0d698845ba1e8ac"></a>

Returns true if SecondsInMatch matches the default value.

#### `public inline void `[`SetSecondsInMatchToDefault`](#structFRHAPI__CalculatedRank_1a2e12a2273c581b7a43eaef6c5bb197d2)`()` <a id="structFRHAPI__CalculatedRank_1a2e12a2273c581b7a43eaef6c5bb197d2"></a>

Sets the value of SecondsInMatch to its default

