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
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__CalculatedRank_1a353a636f3562080ff48cffb2c9c557cd)`()` | Gets the value of PlayerUuid.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CalculatedRank_1a3a560d347379316d0d3510b3280de62f)`() const` | Gets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__CalculatedRank_1ad2dbbf156b4d40f4816ee55b25137a2e)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__CalculatedRank_1aeb05b551b7162c30866e1f834174f887)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline FORCEINLINE `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__CalculatedRank_1a3af399185214bc95b6d85d7e15c33cb6)`()` | Gets the value of Rank.
`public inline FORCEINLINE const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__CalculatedRank_1a3da9430b17ead5f5f12bd6116be6279a)`() const` | Gets the value of Rank.
`public inline FORCEINLINE void `[`SetRank`](#structFRHAPI__CalculatedRank_1a4066844e94f8998d699af35055fd4fa3)`(const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & NewValue)` | Sets the value of Rank.
`public inline FORCEINLINE void `[`SetRank`](#structFRHAPI__CalculatedRank_1a360f4a3a00384380606de039b36fd7dc)`(`[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` && NewValue)` | Sets the value of Rank using move semantics.
`public inline FORCEINLINE int32 & `[`GetSecondsInMatch`](#structFRHAPI__CalculatedRank_1a9d78b87cb4a77e47e6531811fd31b1bd)`()` | Gets the value of SecondsInMatch.
`public inline FORCEINLINE const int32 & `[`GetSecondsInMatch`](#structFRHAPI__CalculatedRank_1a997e0ec5f3063beebdc97f8d24e7ef03)`() const` | Gets the value of SecondsInMatch.
`public inline FORCEINLINE void `[`SetSecondsInMatch`](#structFRHAPI__CalculatedRank_1ac6a10384d912732972a5d9b8acabd09c)`(const int32 & NewValue)` | Sets the value of SecondsInMatch.
`public inline FORCEINLINE void `[`SetSecondsInMatch`](#structFRHAPI__CalculatedRank_1a6a809ef3e0802663ce2e8636f0acae0a)`(int32 && NewValue)` | Sets the value of SecondsInMatch using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_SecondsInMatch`](#structFRHAPI__CalculatedRank_1acfea87128b22d0e74c696d22143f570b)`()` | Returns the default value of SecondsInMatch.

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

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__CalculatedRank_1a353a636f3562080ff48cffb2c9c557cd)`()` <a id="structFRHAPI__CalculatedRank_1a353a636f3562080ff48cffb2c9c557cd"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CalculatedRank_1a3a560d347379316d0d3510b3280de62f)`() const` <a id="structFRHAPI__CalculatedRank_1a3a560d347379316d0d3510b3280de62f"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__CalculatedRank_1ad2dbbf156b4d40f4816ee55b25137a2e)`(const FGuid & NewValue)` <a id="structFRHAPI__CalculatedRank_1ad2dbbf156b4d40f4816ee55b25137a2e"></a>

Sets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__CalculatedRank_1aeb05b551b7162c30866e1f834174f887)`(FGuid && NewValue)` <a id="structFRHAPI__CalculatedRank_1aeb05b551b7162c30866e1f834174f887"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline FORCEINLINE `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__CalculatedRank_1a3af399185214bc95b6d85d7e15c33cb6)`()` <a id="structFRHAPI__CalculatedRank_1a3af399185214bc95b6d85d7e15c33cb6"></a>

Gets the value of Rank.

#### `public inline FORCEINLINE const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & `[`GetRank`](#structFRHAPI__CalculatedRank_1a3da9430b17ead5f5f12bd6116be6279a)`() const` <a id="structFRHAPI__CalculatedRank_1a3da9430b17ead5f5f12bd6116be6279a"></a>

Gets the value of Rank.

#### `public inline FORCEINLINE void `[`SetRank`](#structFRHAPI__CalculatedRank_1a4066844e94f8998d699af35055fd4fa3)`(const `[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` & NewValue)` <a id="structFRHAPI__CalculatedRank_1a4066844e94f8998d699af35055fd4fa3"></a>

Sets the value of Rank.

#### `public inline FORCEINLINE void `[`SetRank`](#structFRHAPI__CalculatedRank_1a360f4a3a00384380606de039b36fd7dc)`(`[`FRHAPI_RankRankData`](RHAPI_RankRankData.md#structFRHAPI__RankRankData)` && NewValue)` <a id="structFRHAPI__CalculatedRank_1a360f4a3a00384380606de039b36fd7dc"></a>

Sets the value of Rank using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetSecondsInMatch`](#structFRHAPI__CalculatedRank_1a9d78b87cb4a77e47e6531811fd31b1bd)`()` <a id="structFRHAPI__CalculatedRank_1a9d78b87cb4a77e47e6531811fd31b1bd"></a>

Gets the value of SecondsInMatch.

#### `public inline FORCEINLINE const int32 & `[`GetSecondsInMatch`](#structFRHAPI__CalculatedRank_1a997e0ec5f3063beebdc97f8d24e7ef03)`() const` <a id="structFRHAPI__CalculatedRank_1a997e0ec5f3063beebdc97f8d24e7ef03"></a>

Gets the value of SecondsInMatch.

#### `public inline FORCEINLINE void `[`SetSecondsInMatch`](#structFRHAPI__CalculatedRank_1ac6a10384d912732972a5d9b8acabd09c)`(const int32 & NewValue)` <a id="structFRHAPI__CalculatedRank_1ac6a10384d912732972a5d9b8acabd09c"></a>

Sets the value of SecondsInMatch.

#### `public inline FORCEINLINE void `[`SetSecondsInMatch`](#structFRHAPI__CalculatedRank_1a6a809ef3e0802663ce2e8636f0acae0a)`(int32 && NewValue)` <a id="structFRHAPI__CalculatedRank_1a6a809ef3e0802663ce2e8636f0acae0a"></a>

Sets the value of SecondsInMatch using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_SecondsInMatch`](#structFRHAPI__CalculatedRank_1acfea87128b22d0e74c696d22143f570b)`()` <a id="structFRHAPI__CalculatedRank_1acfea87128b22d0e74c696d22143f570b"></a>

Returns the default value of SecondsInMatch.

