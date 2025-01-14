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
`public inline int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__CalculateRankRequest_1a0d74a4772d565a3b1137634e7b77fdac)`()` | Gets the value of MatchLengthSeconds.
`public inline const int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__CalculateRankRequest_1a041e0ff50e45f6d18e42007524598cf8)`() const` | Gets the value of MatchLengthSeconds.
`public inline void `[`SetMatchLengthSeconds`](#structFRHAPI__CalculateRankRequest_1a2fadfce6e422d71f37b766603ffe10ab)`(const int32 & NewValue)` | Sets the value of MatchLengthSeconds.
`public inline void `[`SetMatchLengthSeconds`](#structFRHAPI__CalculateRankRequest_1a59157bf6fe32cef3e43df7344139d15b)`(int32 && NewValue)` | Sets the value of MatchLengthSeconds using move semantics.
`public inline bool `[`IsMatchLengthSecondsDefaultValue`](#structFRHAPI__CalculateRankRequest_1a5e1d277b23b382cb124ffe95d16109cd)`() const` | Returns true if MatchLengthSeconds matches the default value.
`public inline void `[`SetMatchLengthSecondsToDefault`](#structFRHAPI__CalculateRankRequest_1a3eca4ae63014e56303ee7c3202e5b1ec)`()` | Sets the value of MatchLengthSeconds to its default
`public inline TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & `[`GetTeams`](#structFRHAPI__CalculateRankRequest_1a557ac6ad9790b2e8bad06a71feb66275)`()` | Gets the value of Teams.
`public inline const TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & `[`GetTeams`](#structFRHAPI__CalculateRankRequest_1a86e76721db3edbac5f9ca8e6489450e1)`() const` | Gets the value of Teams.
`public inline void `[`SetTeams`](#structFRHAPI__CalculateRankRequest_1a75cc8da345194a40404a2eeba1bcb9a9)`(const TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & NewValue)` | Sets the value of Teams.
`public inline void `[`SetTeams`](#structFRHAPI__CalculateRankRequest_1ab02e568131b970e9a903c73827c08367)`(TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > && NewValue)` | Sets the value of Teams using move semantics.
`public inline `[`FRHAPI_CalculateRankConfig`](RHAPI_CalculateRankConfig.md#structFRHAPI__CalculateRankConfig)` & `[`GetRankConfig`](#structFRHAPI__CalculateRankRequest_1aa3b5ae6bc41dc2f9644ecb55f2af78cf)`()` | Gets the value of RankConfig.
`public inline const `[`FRHAPI_CalculateRankConfig`](RHAPI_CalculateRankConfig.md#structFRHAPI__CalculateRankConfig)` & `[`GetRankConfig`](#structFRHAPI__CalculateRankRequest_1a6ad27ca9b47509acab302e6095500167)`() const` | Gets the value of RankConfig.
`public inline void `[`SetRankConfig`](#structFRHAPI__CalculateRankRequest_1a4685b3f2a9b125414e3639ecddf97b0d)`(const `[`FRHAPI_CalculateRankConfig`](RHAPI_CalculateRankConfig.md#structFRHAPI__CalculateRankConfig)` & NewValue)` | Sets the value of RankConfig.
`public inline void `[`SetRankConfig`](#structFRHAPI__CalculateRankRequest_1a6e6ff193b6e5007f232c30704b477fb9)`(`[`FRHAPI_CalculateRankConfig`](RHAPI_CalculateRankConfig.md#structFRHAPI__CalculateRankConfig)` && NewValue)` | Sets the value of RankConfig using move semantics.

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

#### `public inline int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__CalculateRankRequest_1a0d74a4772d565a3b1137634e7b77fdac)`()` <a id="structFRHAPI__CalculateRankRequest_1a0d74a4772d565a3b1137634e7b77fdac"></a>

Gets the value of MatchLengthSeconds.

#### `public inline const int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__CalculateRankRequest_1a041e0ff50e45f6d18e42007524598cf8)`() const` <a id="structFRHAPI__CalculateRankRequest_1a041e0ff50e45f6d18e42007524598cf8"></a>

Gets the value of MatchLengthSeconds.

#### `public inline void `[`SetMatchLengthSeconds`](#structFRHAPI__CalculateRankRequest_1a2fadfce6e422d71f37b766603ffe10ab)`(const int32 & NewValue)` <a id="structFRHAPI__CalculateRankRequest_1a2fadfce6e422d71f37b766603ffe10ab"></a>

Sets the value of MatchLengthSeconds.

#### `public inline void `[`SetMatchLengthSeconds`](#structFRHAPI__CalculateRankRequest_1a59157bf6fe32cef3e43df7344139d15b)`(int32 && NewValue)` <a id="structFRHAPI__CalculateRankRequest_1a59157bf6fe32cef3e43df7344139d15b"></a>

Sets the value of MatchLengthSeconds using move semantics.

#### `public inline bool `[`IsMatchLengthSecondsDefaultValue`](#structFRHAPI__CalculateRankRequest_1a5e1d277b23b382cb124ffe95d16109cd)`() const` <a id="structFRHAPI__CalculateRankRequest_1a5e1d277b23b382cb124ffe95d16109cd"></a>

Returns true if MatchLengthSeconds matches the default value.

#### `public inline void `[`SetMatchLengthSecondsToDefault`](#structFRHAPI__CalculateRankRequest_1a3eca4ae63014e56303ee7c3202e5b1ec)`()` <a id="structFRHAPI__CalculateRankRequest_1a3eca4ae63014e56303ee7c3202e5b1ec"></a>

Sets the value of MatchLengthSeconds to its default

#### `public inline TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & `[`GetTeams`](#structFRHAPI__CalculateRankRequest_1a557ac6ad9790b2e8bad06a71feb66275)`()` <a id="structFRHAPI__CalculateRankRequest_1a557ac6ad9790b2e8bad06a71feb66275"></a>

Gets the value of Teams.

#### `public inline const TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & `[`GetTeams`](#structFRHAPI__CalculateRankRequest_1a86e76721db3edbac5f9ca8e6489450e1)`() const` <a id="structFRHAPI__CalculateRankRequest_1a86e76721db3edbac5f9ca8e6489450e1"></a>

Gets the value of Teams.

#### `public inline void `[`SetTeams`](#structFRHAPI__CalculateRankRequest_1a75cc8da345194a40404a2eeba1bcb9a9)`(const TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & NewValue)` <a id="structFRHAPI__CalculateRankRequest_1a75cc8da345194a40404a2eeba1bcb9a9"></a>

Sets the value of Teams.

#### `public inline void `[`SetTeams`](#structFRHAPI__CalculateRankRequest_1ab02e568131b970e9a903c73827c08367)`(TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > && NewValue)` <a id="structFRHAPI__CalculateRankRequest_1ab02e568131b970e9a903c73827c08367"></a>

Sets the value of Teams using move semantics.

#### `public inline `[`FRHAPI_CalculateRankConfig`](RHAPI_CalculateRankConfig.md#structFRHAPI__CalculateRankConfig)` & `[`GetRankConfig`](#structFRHAPI__CalculateRankRequest_1aa3b5ae6bc41dc2f9644ecb55f2af78cf)`()` <a id="structFRHAPI__CalculateRankRequest_1aa3b5ae6bc41dc2f9644ecb55f2af78cf"></a>

Gets the value of RankConfig.

#### `public inline const `[`FRHAPI_CalculateRankConfig`](RHAPI_CalculateRankConfig.md#structFRHAPI__CalculateRankConfig)` & `[`GetRankConfig`](#structFRHAPI__CalculateRankRequest_1a6ad27ca9b47509acab302e6095500167)`() const` <a id="structFRHAPI__CalculateRankRequest_1a6ad27ca9b47509acab302e6095500167"></a>

Gets the value of RankConfig.

#### `public inline void `[`SetRankConfig`](#structFRHAPI__CalculateRankRequest_1a4685b3f2a9b125414e3639ecddf97b0d)`(const `[`FRHAPI_CalculateRankConfig`](RHAPI_CalculateRankConfig.md#structFRHAPI__CalculateRankConfig)` & NewValue)` <a id="structFRHAPI__CalculateRankRequest_1a4685b3f2a9b125414e3639ecddf97b0d"></a>

Sets the value of RankConfig.

#### `public inline void `[`SetRankConfig`](#structFRHAPI__CalculateRankRequest_1a6e6ff193b6e5007f232c30704b477fb9)`(`[`FRHAPI_CalculateRankConfig`](RHAPI_CalculateRankConfig.md#structFRHAPI__CalculateRankConfig)` && NewValue)` <a id="structFRHAPI__CalculateRankRequest_1a6e6ff193b6e5007f232c30704b477fb9"></a>

Sets the value of RankConfig using move semantics.

