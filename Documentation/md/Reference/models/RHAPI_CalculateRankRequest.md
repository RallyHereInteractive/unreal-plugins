---
title: RHAPI_CalculateRankRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_CalculateRankRequest`](#structFRHAPI__CalculateRankRequest) | A request body to calculate players&#39; rankings, and return the results. Player ranks will not be updated.

## struct `FRHAPI_CalculateRankRequest` <a id="structFRHAPI__CalculateRankRequest"></a>

```
struct FRHAPI_CalculateRankRequest
  : public FRHAPI_Model
```

A request body to calculate players&#39; rankings, and return the results. Player ranks will not be updated.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`MatchLengthSeconds`](#structFRHAPI__CalculateRankRequest_1abdc15b22039fabcfbbe19eb71f42aabc) | How many seconds the match lasted.
`public TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > `[`Teams`](#structFRHAPI__CalculateRankRequest_1a36cb9d13dcff36596acf302d354df057) | List of teams that participated in this match.
`public `[`FRHAPI_CalculateRankConfig`](RHAPI_CalculateRankConfig.md#structFRHAPI__CalculateRankConfig)` `[`RankConfig`](#structFRHAPI__CalculateRankRequest_1abdacac8e5f9da41c4ba102fcde2a458f) | Configs about how to recalculate and clamp newly calculated ranks.
`public virtual bool `[`FromJson`](#structFRHAPI__CalculateRankRequest_1a7b5c79755dc40620b1edaa921339462c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__CalculateRankRequest_1aeb4e1a7f467f50a35abc962ef0686318)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__CalculateRankRequest_1a87f3fcc32ede8cd9cea854fa57253ccb)`()` | Gets the value of MatchLengthSeconds.
`public inline FORCEINLINE const int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__CalculateRankRequest_1aa958f30d8524fe9e9bae828e50a2b9b4)`() const` | Gets the value of MatchLengthSeconds.
`public inline FORCEINLINE void `[`SetMatchLengthSeconds`](#structFRHAPI__CalculateRankRequest_1a374e876b0072ba6b6cd8ecc052ee9b37)`(const int32 & NewValue)` | Sets the value of MatchLengthSeconds.
`public inline FORCEINLINE void `[`SetMatchLengthSeconds`](#structFRHAPI__CalculateRankRequest_1a15136e8242468fa6e7be3f76907bfe43)`(int32 && NewValue)` | Sets the value of MatchLengthSeconds using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_MatchLengthSeconds`](#structFRHAPI__CalculateRankRequest_1ab60f0cbcf592d09ce36b628c4648fbe6)`()` | Returns the default value of MatchLengthSeconds.
`public inline FORCEINLINE TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & `[`GetTeams`](#structFRHAPI__CalculateRankRequest_1a1be33d188456ce53a5287cda5c411b57)`()` | Gets the value of Teams.
`public inline FORCEINLINE const TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & `[`GetTeams`](#structFRHAPI__CalculateRankRequest_1af05e83e7a652b45639e31e337d173b72)`() const` | Gets the value of Teams.
`public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__CalculateRankRequest_1a45a8b32fa165fa51237ddff309deb352)`(const TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & NewValue)` | Sets the value of Teams.
`public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__CalculateRankRequest_1a0c52cdbc37914cb97f79c3e5c33353fd)`(TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > && NewValue)` | Sets the value of Teams using move semantics.
`public inline FORCEINLINE `[`FRHAPI_CalculateRankConfig`](RHAPI_CalculateRankConfig.md#structFRHAPI__CalculateRankConfig)` & `[`GetRankConfig`](#structFRHAPI__CalculateRankRequest_1aadd927e7dfadc7f3355e6de1098a2a2e)`()` | Gets the value of RankConfig.
`public inline FORCEINLINE const `[`FRHAPI_CalculateRankConfig`](RHAPI_CalculateRankConfig.md#structFRHAPI__CalculateRankConfig)` & `[`GetRankConfig`](#structFRHAPI__CalculateRankRequest_1ad496ba03993d7f970d9777b1c8396c5c)`() const` | Gets the value of RankConfig.
`public inline FORCEINLINE void `[`SetRankConfig`](#structFRHAPI__CalculateRankRequest_1abd74234bcaaa5af6b6182ab09e330e2e)`(const `[`FRHAPI_CalculateRankConfig`](RHAPI_CalculateRankConfig.md#structFRHAPI__CalculateRankConfig)` & NewValue)` | Sets the value of RankConfig.
`public inline FORCEINLINE void `[`SetRankConfig`](#structFRHAPI__CalculateRankRequest_1a0ef81a5fc18239e95ff47051366d1fe5)`(`[`FRHAPI_CalculateRankConfig`](RHAPI_CalculateRankConfig.md#structFRHAPI__CalculateRankConfig)` && NewValue)` | Sets the value of RankConfig using move semantics.

### Members

#### `public int32 `[`MatchLengthSeconds`](#structFRHAPI__CalculateRankRequest_1abdc15b22039fabcfbbe19eb71f42aabc) <a id="structFRHAPI__CalculateRankRequest_1abdc15b22039fabcfbbe19eb71f42aabc"></a>

How many seconds the match lasted.

#### `public TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > `[`Teams`](#structFRHAPI__CalculateRankRequest_1a36cb9d13dcff36596acf302d354df057) <a id="structFRHAPI__CalculateRankRequest_1a36cb9d13dcff36596acf302d354df057"></a>

List of teams that participated in this match.

#### `public `[`FRHAPI_CalculateRankConfig`](RHAPI_CalculateRankConfig.md#structFRHAPI__CalculateRankConfig)` `[`RankConfig`](#structFRHAPI__CalculateRankRequest_1abdacac8e5f9da41c4ba102fcde2a458f) <a id="structFRHAPI__CalculateRankRequest_1abdacac8e5f9da41c4ba102fcde2a458f"></a>

Configs about how to recalculate and clamp newly calculated ranks.

#### `public virtual bool `[`FromJson`](#structFRHAPI__CalculateRankRequest_1a7b5c79755dc40620b1edaa921339462c)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__CalculateRankRequest_1a7b5c79755dc40620b1edaa921339462c"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__CalculateRankRequest_1aeb4e1a7f467f50a35abc962ef0686318)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__CalculateRankRequest_1aeb4e1a7f467f50a35abc962ef0686318"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__CalculateRankRequest_1a87f3fcc32ede8cd9cea854fa57253ccb)`()` <a id="structFRHAPI__CalculateRankRequest_1a87f3fcc32ede8cd9cea854fa57253ccb"></a>

Gets the value of MatchLengthSeconds.

#### `public inline FORCEINLINE const int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__CalculateRankRequest_1aa958f30d8524fe9e9bae828e50a2b9b4)`() const` <a id="structFRHAPI__CalculateRankRequest_1aa958f30d8524fe9e9bae828e50a2b9b4"></a>

Gets the value of MatchLengthSeconds.

#### `public inline FORCEINLINE void `[`SetMatchLengthSeconds`](#structFRHAPI__CalculateRankRequest_1a374e876b0072ba6b6cd8ecc052ee9b37)`(const int32 & NewValue)` <a id="structFRHAPI__CalculateRankRequest_1a374e876b0072ba6b6cd8ecc052ee9b37"></a>

Sets the value of MatchLengthSeconds.

#### `public inline FORCEINLINE void `[`SetMatchLengthSeconds`](#structFRHAPI__CalculateRankRequest_1a15136e8242468fa6e7be3f76907bfe43)`(int32 && NewValue)` <a id="structFRHAPI__CalculateRankRequest_1a15136e8242468fa6e7be3f76907bfe43"></a>

Sets the value of MatchLengthSeconds using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_MatchLengthSeconds`](#structFRHAPI__CalculateRankRequest_1ab60f0cbcf592d09ce36b628c4648fbe6)`()` <a id="structFRHAPI__CalculateRankRequest_1ab60f0cbcf592d09ce36b628c4648fbe6"></a>

Returns the default value of MatchLengthSeconds.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & `[`GetTeams`](#structFRHAPI__CalculateRankRequest_1a1be33d188456ce53a5287cda5c411b57)`()` <a id="structFRHAPI__CalculateRankRequest_1a1be33d188456ce53a5287cda5c411b57"></a>

Gets the value of Teams.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & `[`GetTeams`](#structFRHAPI__CalculateRankRequest_1af05e83e7a652b45639e31e337d173b72)`() const` <a id="structFRHAPI__CalculateRankRequest_1af05e83e7a652b45639e31e337d173b72"></a>

Gets the value of Teams.

#### `public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__CalculateRankRequest_1a45a8b32fa165fa51237ddff309deb352)`(const TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & NewValue)` <a id="structFRHAPI__CalculateRankRequest_1a45a8b32fa165fa51237ddff309deb352"></a>

Sets the value of Teams.

#### `public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__CalculateRankRequest_1a0c52cdbc37914cb97f79c3e5c33353fd)`(TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > && NewValue)` <a id="structFRHAPI__CalculateRankRequest_1a0c52cdbc37914cb97f79c3e5c33353fd"></a>

Sets the value of Teams using move semantics.

#### `public inline FORCEINLINE `[`FRHAPI_CalculateRankConfig`](RHAPI_CalculateRankConfig.md#structFRHAPI__CalculateRankConfig)` & `[`GetRankConfig`](#structFRHAPI__CalculateRankRequest_1aadd927e7dfadc7f3355e6de1098a2a2e)`()` <a id="structFRHAPI__CalculateRankRequest_1aadd927e7dfadc7f3355e6de1098a2a2e"></a>

Gets the value of RankConfig.

#### `public inline FORCEINLINE const `[`FRHAPI_CalculateRankConfig`](RHAPI_CalculateRankConfig.md#structFRHAPI__CalculateRankConfig)` & `[`GetRankConfig`](#structFRHAPI__CalculateRankRequest_1ad496ba03993d7f970d9777b1c8396c5c)`() const` <a id="structFRHAPI__CalculateRankRequest_1ad496ba03993d7f970d9777b1c8396c5c"></a>

Gets the value of RankConfig.

#### `public inline FORCEINLINE void `[`SetRankConfig`](#structFRHAPI__CalculateRankRequest_1abd74234bcaaa5af6b6182ab09e330e2e)`(const `[`FRHAPI_CalculateRankConfig`](RHAPI_CalculateRankConfig.md#structFRHAPI__CalculateRankConfig)` & NewValue)` <a id="structFRHAPI__CalculateRankRequest_1abd74234bcaaa5af6b6182ab09e330e2e"></a>

Sets the value of RankConfig.

#### `public inline FORCEINLINE void `[`SetRankConfig`](#structFRHAPI__CalculateRankRequest_1a0ef81a5fc18239e95ff47051366d1fe5)`(`[`FRHAPI_CalculateRankConfig`](RHAPI_CalculateRankConfig.md#structFRHAPI__CalculateRankConfig)` && NewValue)` <a id="structFRHAPI__CalculateRankRequest_1a0ef81a5fc18239e95ff47051366d1fe5"></a>

Sets the value of RankConfig using move semantics.

