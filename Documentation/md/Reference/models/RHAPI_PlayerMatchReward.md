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
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerMatchReward_1a28ff7f76a7c569beb5a629276e9bd986)`()` | Gets the value of PlayerUuid.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerMatchReward_1af29781427b85283550ec921431158167)`() const` | Gets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerMatchReward_1a7643c6763611ef6459480e01b7877469)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerMatchReward_1a9b7906610d0798cd1b86be65d77c8826)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchReward`](RHAPI_MatchReward.md#structFRHAPI__MatchReward)` > & `[`GetRewards`](#structFRHAPI__PlayerMatchReward_1a8ae903bcb05eb46fab03e082c61ba51e)`()` | Gets the value of Rewards.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchReward`](RHAPI_MatchReward.md#structFRHAPI__MatchReward)` > & `[`GetRewards`](#structFRHAPI__PlayerMatchReward_1ae554fce8f620ff0ec663407ff87d9ae4)`() const` | Gets the value of Rewards.
`public inline FORCEINLINE void `[`SetRewards`](#structFRHAPI__PlayerMatchReward_1ab1e32fad0fd292f7d20c0fedf7827370)`(const TArray< `[`FRHAPI_MatchReward`](RHAPI_MatchReward.md#structFRHAPI__MatchReward)` > & NewValue)` | Sets the value of Rewards.
`public inline FORCEINLINE void `[`SetRewards`](#structFRHAPI__PlayerMatchReward_1a5e1ccfe32dc1f6a0ee34a466b03ecffe)`(TArray< `[`FRHAPI_MatchReward`](RHAPI_MatchReward.md#structFRHAPI__MatchReward)` > && NewValue)` | Sets the value of Rewards using move semantics.

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

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerMatchReward_1a28ff7f76a7c569beb5a629276e9bd986)`()` <a id="structFRHAPI__PlayerMatchReward_1a28ff7f76a7c569beb5a629276e9bd986"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerMatchReward_1af29781427b85283550ec921431158167)`() const` <a id="structFRHAPI__PlayerMatchReward_1af29781427b85283550ec921431158167"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerMatchReward_1a7643c6763611ef6459480e01b7877469)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerMatchReward_1a7643c6763611ef6459480e01b7877469"></a>

Sets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerMatchReward_1a9b7906610d0798cd1b86be65d77c8826)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerMatchReward_1a9b7906610d0798cd1b86be65d77c8826"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchReward`](RHAPI_MatchReward.md#structFRHAPI__MatchReward)` > & `[`GetRewards`](#structFRHAPI__PlayerMatchReward_1a8ae903bcb05eb46fab03e082c61ba51e)`()` <a id="structFRHAPI__PlayerMatchReward_1a8ae903bcb05eb46fab03e082c61ba51e"></a>

Gets the value of Rewards.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchReward`](RHAPI_MatchReward.md#structFRHAPI__MatchReward)` > & `[`GetRewards`](#structFRHAPI__PlayerMatchReward_1ae554fce8f620ff0ec663407ff87d9ae4)`() const` <a id="structFRHAPI__PlayerMatchReward_1ae554fce8f620ff0ec663407ff87d9ae4"></a>

Gets the value of Rewards.

#### `public inline FORCEINLINE void `[`SetRewards`](#structFRHAPI__PlayerMatchReward_1ab1e32fad0fd292f7d20c0fedf7827370)`(const TArray< `[`FRHAPI_MatchReward`](RHAPI_MatchReward.md#structFRHAPI__MatchReward)` > & NewValue)` <a id="structFRHAPI__PlayerMatchReward_1ab1e32fad0fd292f7d20c0fedf7827370"></a>

Sets the value of Rewards.

#### `public inline FORCEINLINE void `[`SetRewards`](#structFRHAPI__PlayerMatchReward_1a5e1ccfe32dc1f6a0ee34a466b03ecffe)`(TArray< `[`FRHAPI_MatchReward`](RHAPI_MatchReward.md#structFRHAPI__MatchReward)` > && NewValue)` <a id="structFRHAPI__PlayerMatchReward_1a5e1ccfe32dc1f6a0ee34a466b03ecffe"></a>

Sets the value of Rewards using move semantics.

