---
title: RHAPI_RankedTeam
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_RankedTeam`](#structFRHAPI__RankedTeam) | One team of players from a match along with their placement in the match, and previous rank data about all of the players.

## struct `FRHAPI_RankedTeam` <a id="structFRHAPI__RankedTeam"></a>

```
struct FRHAPI_RankedTeam
  : public FRHAPI_Model
```

One team of players from a match along with their placement in the match, and previous rank data about all of the players.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_CalculatedRank`](RHAPI_CalculatedRank.md#structFRHAPI__CalculatedRank)` > `[`Players`](#structFRHAPI__RankedTeam_1ab1dfafc29c7642f9c16484f0cdb9908b) | List of CalculatedRank objects that give stats about a specific player from the match.
`public int32 `[`TeamRank`](#structFRHAPI__RankedTeam_1a350d4eb07e1820adb0dc652d69bcacb3) | What rank this team came in. 1 indicates victory, and higher values are placements. Matching ranks indicate draws.
`public virtual bool `[`FromJson`](#structFRHAPI__RankedTeam_1a0b18ac4b37703eefccc47dbc6a89944c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RankedTeam_1a737d085973cbfb64c1c4b9a0618cced4)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_CalculatedRank`](RHAPI_CalculatedRank.md#structFRHAPI__CalculatedRank)` > & `[`GetPlayers`](#structFRHAPI__RankedTeam_1af380e38877a7b061956b8423e6d654df)`()` | Gets the value of Players.
`public inline const TArray< `[`FRHAPI_CalculatedRank`](RHAPI_CalculatedRank.md#structFRHAPI__CalculatedRank)` > & `[`GetPlayers`](#structFRHAPI__RankedTeam_1a2e5020da54589aa3261af2228ce25ab2)`() const` | Gets the value of Players.
`public inline void `[`SetPlayers`](#structFRHAPI__RankedTeam_1a1b91806d20a0847a24e43cc24011b405)`(const TArray< `[`FRHAPI_CalculatedRank`](RHAPI_CalculatedRank.md#structFRHAPI__CalculatedRank)` > & NewValue)` | Sets the value of Players.
`public inline void `[`SetPlayers`](#structFRHAPI__RankedTeam_1a1bb893b3ece77732db85b571eefd2c42)`(TArray< `[`FRHAPI_CalculatedRank`](RHAPI_CalculatedRank.md#structFRHAPI__CalculatedRank)` > && NewValue)` | Sets the value of Players using move semantics.
`public inline int32 & `[`GetTeamRank`](#structFRHAPI__RankedTeam_1a9167779bb3d07bfeae3efcb5fdaa18c2)`()` | Gets the value of TeamRank.
`public inline const int32 & `[`GetTeamRank`](#structFRHAPI__RankedTeam_1a41689a1d50658e4bc0c8606e7bf665ca)`() const` | Gets the value of TeamRank.
`public inline void `[`SetTeamRank`](#structFRHAPI__RankedTeam_1ad19b86c260a33c4d5a179894ad5cf1ab)`(const int32 & NewValue)` | Sets the value of TeamRank.
`public inline void `[`SetTeamRank`](#structFRHAPI__RankedTeam_1a195db06bbbd0af84c9c618372cbed777)`(int32 && NewValue)` | Sets the value of TeamRank using move semantics.
`public inline bool `[`IsTeamRankDefaultValue`](#structFRHAPI__RankedTeam_1a81c6e9168a4af88040ede0753bf266db)`() const` | Returns true if TeamRank matches the default value.
`public inline void `[`SetTeamRankToDefault`](#structFRHAPI__RankedTeam_1a4a1cdb05a5c8edbcb41d60ba86b2c872)`()` | Sets the value of TeamRank to its default

### Members

#### `public TArray< `[`FRHAPI_CalculatedRank`](RHAPI_CalculatedRank.md#structFRHAPI__CalculatedRank)` > `[`Players`](#structFRHAPI__RankedTeam_1ab1dfafc29c7642f9c16484f0cdb9908b) <a id="structFRHAPI__RankedTeam_1ab1dfafc29c7642f9c16484f0cdb9908b"></a>

List of CalculatedRank objects that give stats about a specific player from the match.

#### `public int32 `[`TeamRank`](#structFRHAPI__RankedTeam_1a350d4eb07e1820adb0dc652d69bcacb3) <a id="structFRHAPI__RankedTeam_1a350d4eb07e1820adb0dc652d69bcacb3"></a>

What rank this team came in. 1 indicates victory, and higher values are placements. Matching ranks indicate draws.

#### `public virtual bool `[`FromJson`](#structFRHAPI__RankedTeam_1a0b18ac4b37703eefccc47dbc6a89944c)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RankedTeam_1a0b18ac4b37703eefccc47dbc6a89944c"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__RankedTeam_1a737d085973cbfb64c1c4b9a0618cced4)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__RankedTeam_1a737d085973cbfb64c1c4b9a0618cced4"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_CalculatedRank`](RHAPI_CalculatedRank.md#structFRHAPI__CalculatedRank)` > & `[`GetPlayers`](#structFRHAPI__RankedTeam_1af380e38877a7b061956b8423e6d654df)`()` <a id="structFRHAPI__RankedTeam_1af380e38877a7b061956b8423e6d654df"></a>

Gets the value of Players.

#### `public inline const TArray< `[`FRHAPI_CalculatedRank`](RHAPI_CalculatedRank.md#structFRHAPI__CalculatedRank)` > & `[`GetPlayers`](#structFRHAPI__RankedTeam_1a2e5020da54589aa3261af2228ce25ab2)`() const` <a id="structFRHAPI__RankedTeam_1a2e5020da54589aa3261af2228ce25ab2"></a>

Gets the value of Players.

#### `public inline void `[`SetPlayers`](#structFRHAPI__RankedTeam_1a1b91806d20a0847a24e43cc24011b405)`(const TArray< `[`FRHAPI_CalculatedRank`](RHAPI_CalculatedRank.md#structFRHAPI__CalculatedRank)` > & NewValue)` <a id="structFRHAPI__RankedTeam_1a1b91806d20a0847a24e43cc24011b405"></a>

Sets the value of Players.

#### `public inline void `[`SetPlayers`](#structFRHAPI__RankedTeam_1a1bb893b3ece77732db85b571eefd2c42)`(TArray< `[`FRHAPI_CalculatedRank`](RHAPI_CalculatedRank.md#structFRHAPI__CalculatedRank)` > && NewValue)` <a id="structFRHAPI__RankedTeam_1a1bb893b3ece77732db85b571eefd2c42"></a>

Sets the value of Players using move semantics.

#### `public inline int32 & `[`GetTeamRank`](#structFRHAPI__RankedTeam_1a9167779bb3d07bfeae3efcb5fdaa18c2)`()` <a id="structFRHAPI__RankedTeam_1a9167779bb3d07bfeae3efcb5fdaa18c2"></a>

Gets the value of TeamRank.

#### `public inline const int32 & `[`GetTeamRank`](#structFRHAPI__RankedTeam_1a41689a1d50658e4bc0c8606e7bf665ca)`() const` <a id="structFRHAPI__RankedTeam_1a41689a1d50658e4bc0c8606e7bf665ca"></a>

Gets the value of TeamRank.

#### `public inline void `[`SetTeamRank`](#structFRHAPI__RankedTeam_1ad19b86c260a33c4d5a179894ad5cf1ab)`(const int32 & NewValue)` <a id="structFRHAPI__RankedTeam_1ad19b86c260a33c4d5a179894ad5cf1ab"></a>

Sets the value of TeamRank.

#### `public inline void `[`SetTeamRank`](#structFRHAPI__RankedTeam_1a195db06bbbd0af84c9c618372cbed777)`(int32 && NewValue)` <a id="structFRHAPI__RankedTeam_1a195db06bbbd0af84c9c618372cbed777"></a>

Sets the value of TeamRank using move semantics.

#### `public inline bool `[`IsTeamRankDefaultValue`](#structFRHAPI__RankedTeam_1a81c6e9168a4af88040ede0753bf266db)`() const` <a id="structFRHAPI__RankedTeam_1a81c6e9168a4af88040ede0753bf266db"></a>

Returns true if TeamRank matches the default value.

#### `public inline void `[`SetTeamRankToDefault`](#structFRHAPI__RankedTeam_1a4a1cdb05a5c8edbcb41d60ba86b2c872)`()` <a id="structFRHAPI__RankedTeam_1a4a1cdb05a5c8edbcb41d60ba86b2c872"></a>

Sets the value of TeamRank to its default

