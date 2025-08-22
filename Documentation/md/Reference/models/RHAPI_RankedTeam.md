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
`public virtual void `[`WriteJson`](#structFRHAPI__RankedTeam_1a61d9f7d5befafb0ecd9aba495dea90a8)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_CalculatedRank`](RHAPI_CalculatedRank.md#structFRHAPI__CalculatedRank)` > & `[`GetPlayers`](#structFRHAPI__RankedTeam_1ac4b6c8730e83a00e2959a31954e478c4)`()` | Gets the value of Players.
`public inline FORCEINLINE const TArray< `[`FRHAPI_CalculatedRank`](RHAPI_CalculatedRank.md#structFRHAPI__CalculatedRank)` > & `[`GetPlayers`](#structFRHAPI__RankedTeam_1a88f9bf282302464e366ebd24def989df)`() const` | Gets the value of Players.
`public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__RankedTeam_1a7e0a1ec603c1921d736279ce66e91e00)`(const TArray< `[`FRHAPI_CalculatedRank`](RHAPI_CalculatedRank.md#structFRHAPI__CalculatedRank)` > & NewValue)` | Sets the value of Players.
`public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__RankedTeam_1ab55ca2de0d76b8ca0a2bbc7fae1f38fd)`(TArray< `[`FRHAPI_CalculatedRank`](RHAPI_CalculatedRank.md#structFRHAPI__CalculatedRank)` > && NewValue)` | Sets the value of Players using move semantics.
`public inline FORCEINLINE int32 & `[`GetTeamRank`](#structFRHAPI__RankedTeam_1a4f41ed3eeb7acd05f92257c3db2e4d60)`()` | Gets the value of TeamRank.
`public inline FORCEINLINE const int32 & `[`GetTeamRank`](#structFRHAPI__RankedTeam_1a7b24f4a0ade4f88ecef8f94b596d078a)`() const` | Gets the value of TeamRank.
`public inline FORCEINLINE void `[`SetTeamRank`](#structFRHAPI__RankedTeam_1a7eafde724d9c42bdf967cb7c249ea5a3)`(const int32 & NewValue)` | Sets the value of TeamRank.
`public inline FORCEINLINE void `[`SetTeamRank`](#structFRHAPI__RankedTeam_1a14fb89cd70fc48cbe89626757c63c8a2)`(int32 && NewValue)` | Sets the value of TeamRank using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_TeamRank`](#structFRHAPI__RankedTeam_1a336bfab77a180f44b4ce4abfd6ff84c2)`()` | Returns the default value of TeamRank.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__RankedTeam_1a61d9f7d5befafb0ecd9aba495dea90a8)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__RankedTeam_1a61d9f7d5befafb0ecd9aba495dea90a8"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_CalculatedRank`](RHAPI_CalculatedRank.md#structFRHAPI__CalculatedRank)` > & `[`GetPlayers`](#structFRHAPI__RankedTeam_1ac4b6c8730e83a00e2959a31954e478c4)`()` <a id="structFRHAPI__RankedTeam_1ac4b6c8730e83a00e2959a31954e478c4"></a>

Gets the value of Players.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_CalculatedRank`](RHAPI_CalculatedRank.md#structFRHAPI__CalculatedRank)` > & `[`GetPlayers`](#structFRHAPI__RankedTeam_1a88f9bf282302464e366ebd24def989df)`() const` <a id="structFRHAPI__RankedTeam_1a88f9bf282302464e366ebd24def989df"></a>

Gets the value of Players.

#### `public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__RankedTeam_1a7e0a1ec603c1921d736279ce66e91e00)`(const TArray< `[`FRHAPI_CalculatedRank`](RHAPI_CalculatedRank.md#structFRHAPI__CalculatedRank)` > & NewValue)` <a id="structFRHAPI__RankedTeam_1a7e0a1ec603c1921d736279ce66e91e00"></a>

Sets the value of Players.

#### `public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__RankedTeam_1ab55ca2de0d76b8ca0a2bbc7fae1f38fd)`(TArray< `[`FRHAPI_CalculatedRank`](RHAPI_CalculatedRank.md#structFRHAPI__CalculatedRank)` > && NewValue)` <a id="structFRHAPI__RankedTeam_1ab55ca2de0d76b8ca0a2bbc7fae1f38fd"></a>

Sets the value of Players using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetTeamRank`](#structFRHAPI__RankedTeam_1a4f41ed3eeb7acd05f92257c3db2e4d60)`()` <a id="structFRHAPI__RankedTeam_1a4f41ed3eeb7acd05f92257c3db2e4d60"></a>

Gets the value of TeamRank.

#### `public inline FORCEINLINE const int32 & `[`GetTeamRank`](#structFRHAPI__RankedTeam_1a7b24f4a0ade4f88ecef8f94b596d078a)`() const` <a id="structFRHAPI__RankedTeam_1a7b24f4a0ade4f88ecef8f94b596d078a"></a>

Gets the value of TeamRank.

#### `public inline FORCEINLINE void `[`SetTeamRank`](#structFRHAPI__RankedTeam_1a7eafde724d9c42bdf967cb7c249ea5a3)`(const int32 & NewValue)` <a id="structFRHAPI__RankedTeam_1a7eafde724d9c42bdf967cb7c249ea5a3"></a>

Sets the value of TeamRank.

#### `public inline FORCEINLINE void `[`SetTeamRank`](#structFRHAPI__RankedTeam_1a14fb89cd70fc48cbe89626757c63c8a2)`(int32 && NewValue)` <a id="structFRHAPI__RankedTeam_1a14fb89cd70fc48cbe89626757c63c8a2"></a>

Sets the value of TeamRank using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_TeamRank`](#structFRHAPI__RankedTeam_1a336bfab77a180f44b4ce4abfd6ff84c2)`()` <a id="structFRHAPI__RankedTeam_1a336bfab77a180f44b4ce4abfd6ff84c2"></a>

Returns the default value of TeamRank.

