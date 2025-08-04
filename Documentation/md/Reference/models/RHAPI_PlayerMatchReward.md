---
title: RHAPI_PlayerMatchReward
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerMatchReward`](#structFRHAPI__PlayerMatchReward) | 

## struct `FRHAPI_PlayerMatchReward` <a id="structFRHAPI__PlayerMatchReward"></a>

```
struct FRHAPI_PlayerMatchReward
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerMatchReward_1a50a49d9c60f59abd3e5677134a8ab2d6) | Unique idenfitifer for player who is receiving rewards.
`public TArray< `[`FRHAPI_MatchReward`](RHAPI_MatchReward.md#structFRHAPI__MatchReward)` > `[`Rewards`](#structFRHAPI__PlayerMatchReward_1ab949bf34d7dfeb8d395523ab4e7200a6) | List of specific rewards for this player.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerMatchReward_1aa81d2616d785cb08d033722df9a40691)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerMatchReward_1a125ec3e16da807e687fa0bb9b9acd56e)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerMatchReward_1a1b1ea21b0b46c1116d5ffacf3469f18d)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerMatchReward_1a24e4e9725b75a010157ffe07e876ab2a)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerMatchReward_1aa7a60167642c812f633098b371caddbb)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerMatchReward_1af259599cf8befd5363ad92d9e47eb102)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline TArray< `[`FRHAPI_MatchReward`](RHAPI_MatchReward.md#structFRHAPI__MatchReward)` > & `[`GetRewards`](#structFRHAPI__PlayerMatchReward_1a896ac41197f76e8f27469eab9ad9412e)`()` | Gets the value of Rewards.
`public inline const TArray< `[`FRHAPI_MatchReward`](RHAPI_MatchReward.md#structFRHAPI__MatchReward)` > & `[`GetRewards`](#structFRHAPI__PlayerMatchReward_1a58f42d18738f124f06f4c5f440a9d30d)`() const` | Gets the value of Rewards.
`public inline void `[`SetRewards`](#structFRHAPI__PlayerMatchReward_1ae57cddaaf2956fc40b7b44f5d572ce3c)`(const TArray< `[`FRHAPI_MatchReward`](RHAPI_MatchReward.md#structFRHAPI__MatchReward)` > & NewValue)` | Sets the value of Rewards.
`public inline void `[`SetRewards`](#structFRHAPI__PlayerMatchReward_1ace5daaca530769876ecda484db910d90)`(TArray< `[`FRHAPI_MatchReward`](RHAPI_MatchReward.md#structFRHAPI__MatchReward)` > && NewValue)` | Sets the value of Rewards using move semantics.

### Members

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerMatchReward_1a50a49d9c60f59abd3e5677134a8ab2d6) <a id="structFRHAPI__PlayerMatchReward_1a50a49d9c60f59abd3e5677134a8ab2d6"></a>

Unique idenfitifer for player who is receiving rewards.

#### `public TArray< `[`FRHAPI_MatchReward`](RHAPI_MatchReward.md#structFRHAPI__MatchReward)` > `[`Rewards`](#structFRHAPI__PlayerMatchReward_1ab949bf34d7dfeb8d395523ab4e7200a6) <a id="structFRHAPI__PlayerMatchReward_1ab949bf34d7dfeb8d395523ab4e7200a6"></a>

List of specific rewards for this player.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerMatchReward_1aa81d2616d785cb08d033722df9a40691)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerMatchReward_1aa81d2616d785cb08d033722df9a40691"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerMatchReward_1a125ec3e16da807e687fa0bb9b9acd56e)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerMatchReward_1a125ec3e16da807e687fa0bb9b9acd56e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerMatchReward_1a1b1ea21b0b46c1116d5ffacf3469f18d)`()` <a id="structFRHAPI__PlayerMatchReward_1a1b1ea21b0b46c1116d5ffacf3469f18d"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerMatchReward_1a24e4e9725b75a010157ffe07e876ab2a)`() const` <a id="structFRHAPI__PlayerMatchReward_1a24e4e9725b75a010157ffe07e876ab2a"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerMatchReward_1aa7a60167642c812f633098b371caddbb)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerMatchReward_1aa7a60167642c812f633098b371caddbb"></a>

Sets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerMatchReward_1af259599cf8befd5363ad92d9e47eb102)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerMatchReward_1af259599cf8befd5363ad92d9e47eb102"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline TArray< `[`FRHAPI_MatchReward`](RHAPI_MatchReward.md#structFRHAPI__MatchReward)` > & `[`GetRewards`](#structFRHAPI__PlayerMatchReward_1a896ac41197f76e8f27469eab9ad9412e)`()` <a id="structFRHAPI__PlayerMatchReward_1a896ac41197f76e8f27469eab9ad9412e"></a>

Gets the value of Rewards.

#### `public inline const TArray< `[`FRHAPI_MatchReward`](RHAPI_MatchReward.md#structFRHAPI__MatchReward)` > & `[`GetRewards`](#structFRHAPI__PlayerMatchReward_1a58f42d18738f124f06f4c5f440a9d30d)`() const` <a id="structFRHAPI__PlayerMatchReward_1a58f42d18738f124f06f4c5f440a9d30d"></a>

Gets the value of Rewards.

#### `public inline void `[`SetRewards`](#structFRHAPI__PlayerMatchReward_1ae57cddaaf2956fc40b7b44f5d572ce3c)`(const TArray< `[`FRHAPI_MatchReward`](RHAPI_MatchReward.md#structFRHAPI__MatchReward)` > & NewValue)` <a id="structFRHAPI__PlayerMatchReward_1ae57cddaaf2956fc40b7b44f5d572ce3c"></a>

Sets the value of Rewards.

#### `public inline void `[`SetRewards`](#structFRHAPI__PlayerMatchReward_1ace5daaca530769876ecda484db910d90)`(TArray< `[`FRHAPI_MatchReward`](RHAPI_MatchReward.md#structFRHAPI__MatchReward)` > && NewValue)` <a id="structFRHAPI__PlayerMatchReward_1ace5daaca530769876ecda484db910d90"></a>

Sets the value of Rewards using move semantics.

