---
title: RHAPI_MatchRewardsBody
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchRewardsBody`](#structFRHAPI__MatchRewardsBody) | 

## struct `FRHAPI_MatchRewardsBody` <a id="structFRHAPI__MatchRewardsBody"></a>

```
struct FRHAPI_MatchRewardsBody
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > `[`PlayerRewards_Optional`](#structFRHAPI__MatchRewardsBody_1a7b92b1213c8dfe7a4831c40a7f7ade97) | List of rewards for specific players for the match.
`public bool `[`PlayerRewards_IsSet`](#structFRHAPI__MatchRewardsBody_1a8084ac73bc0fdcdf4b8d22970d4c990a) | true if PlayerRewards_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchRewardsBody_1a2075fca813bc2a94f42e3f088cb236ce)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchRewardsBody_1adc0babdfbe019e3bcd3d5452e7554ecf)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > & `[`GetPlayerRewards`](#structFRHAPI__MatchRewardsBody_1ad5c6dcd39961a855c3908166d4f8b010)`()` | Gets the value of PlayerRewards_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > & `[`GetPlayerRewards`](#structFRHAPI__MatchRewardsBody_1a2d861288ae5574c803ac8aeaca3cc84f)`() const` | Gets the value of PlayerRewards_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > & `[`GetPlayerRewards`](#structFRHAPI__MatchRewardsBody_1aa1a6ba451307b73d5af99034f29b0637)`(const TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > & DefaultValue) const` | Gets the value of PlayerRewards_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerRewards`](#structFRHAPI__MatchRewardsBody_1aaeab9217392e25a4f556e6ed2da0d4d4)`(TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > & OutValue) const` | Fills OutValue with the value of PlayerRewards_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > * `[`GetPlayerRewardsOrNull`](#structFRHAPI__MatchRewardsBody_1a807d9cdcdf150f2282d922bc0371421f)`()` | Returns a pointer to PlayerRewards_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > * `[`GetPlayerRewardsOrNull`](#structFRHAPI__MatchRewardsBody_1a992e2dc9d473d7720c37272102fd86b8)`() const` | Returns a pointer to PlayerRewards_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerRewards`](#structFRHAPI__MatchRewardsBody_1adecdf79ad7ab735445ceba0a15d75985)`(const TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > & NewValue)` | Sets the value of PlayerRewards_Optional and also sets PlayerRewards_IsSet to true.
`public inline void `[`SetPlayerRewards`](#structFRHAPI__MatchRewardsBody_1aa03ff0eb0bb93a403bec6243a0a8984b)`(TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > && NewValue)` | Sets the value of PlayerRewards_Optional and also sets PlayerRewards_IsSet to true using move semantics.
`public inline void `[`ClearPlayerRewards`](#structFRHAPI__MatchRewardsBody_1ae3da2eeb31cec2801aa17c08f2ad3de7)`()` | Clears the value of PlayerRewards_Optional and sets PlayerRewards_IsSet to false.
`public inline bool `[`IsPlayerRewardsSet`](#structFRHAPI__MatchRewardsBody_1aa05ed2e34ea67e13200db4bebe9326b4)`() const` | Checks whether PlayerRewards_Optional has been set.

### Members

#### `public TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > `[`PlayerRewards_Optional`](#structFRHAPI__MatchRewardsBody_1a7b92b1213c8dfe7a4831c40a7f7ade97) <a id="structFRHAPI__MatchRewardsBody_1a7b92b1213c8dfe7a4831c40a7f7ade97"></a>

List of rewards for specific players for the match.

#### `public bool `[`PlayerRewards_IsSet`](#structFRHAPI__MatchRewardsBody_1a8084ac73bc0fdcdf4b8d22970d4c990a) <a id="structFRHAPI__MatchRewardsBody_1a8084ac73bc0fdcdf4b8d22970d4c990a"></a>

true if PlayerRewards_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchRewardsBody_1a2075fca813bc2a94f42e3f088cb236ce)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchRewardsBody_1a2075fca813bc2a94f42e3f088cb236ce"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchRewardsBody_1adc0babdfbe019e3bcd3d5452e7554ecf)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchRewardsBody_1adc0babdfbe019e3bcd3d5452e7554ecf"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > & `[`GetPlayerRewards`](#structFRHAPI__MatchRewardsBody_1ad5c6dcd39961a855c3908166d4f8b010)`()` <a id="structFRHAPI__MatchRewardsBody_1ad5c6dcd39961a855c3908166d4f8b010"></a>

Gets the value of PlayerRewards_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > & `[`GetPlayerRewards`](#structFRHAPI__MatchRewardsBody_1a2d861288ae5574c803ac8aeaca3cc84f)`() const` <a id="structFRHAPI__MatchRewardsBody_1a2d861288ae5574c803ac8aeaca3cc84f"></a>

Gets the value of PlayerRewards_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > & `[`GetPlayerRewards`](#structFRHAPI__MatchRewardsBody_1aa1a6ba451307b73d5af99034f29b0637)`(const TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > & DefaultValue) const` <a id="structFRHAPI__MatchRewardsBody_1aa1a6ba451307b73d5af99034f29b0637"></a>

Gets the value of PlayerRewards_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerRewards`](#structFRHAPI__MatchRewardsBody_1aaeab9217392e25a4f556e6ed2da0d4d4)`(TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > & OutValue) const` <a id="structFRHAPI__MatchRewardsBody_1aaeab9217392e25a4f556e6ed2da0d4d4"></a>

Fills OutValue with the value of PlayerRewards_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > * `[`GetPlayerRewardsOrNull`](#structFRHAPI__MatchRewardsBody_1a807d9cdcdf150f2282d922bc0371421f)`()` <a id="structFRHAPI__MatchRewardsBody_1a807d9cdcdf150f2282d922bc0371421f"></a>

Returns a pointer to PlayerRewards_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > * `[`GetPlayerRewardsOrNull`](#structFRHAPI__MatchRewardsBody_1a992e2dc9d473d7720c37272102fd86b8)`() const` <a id="structFRHAPI__MatchRewardsBody_1a992e2dc9d473d7720c37272102fd86b8"></a>

Returns a pointer to PlayerRewards_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerRewards`](#structFRHAPI__MatchRewardsBody_1adecdf79ad7ab735445ceba0a15d75985)`(const TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > & NewValue)` <a id="structFRHAPI__MatchRewardsBody_1adecdf79ad7ab735445ceba0a15d75985"></a>

Sets the value of PlayerRewards_Optional and also sets PlayerRewards_IsSet to true.

#### `public inline void `[`SetPlayerRewards`](#structFRHAPI__MatchRewardsBody_1aa03ff0eb0bb93a403bec6243a0a8984b)`(TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > && NewValue)` <a id="structFRHAPI__MatchRewardsBody_1aa03ff0eb0bb93a403bec6243a0a8984b"></a>

Sets the value of PlayerRewards_Optional and also sets PlayerRewards_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerRewards`](#structFRHAPI__MatchRewardsBody_1ae3da2eeb31cec2801aa17c08f2ad3de7)`()` <a id="structFRHAPI__MatchRewardsBody_1ae3da2eeb31cec2801aa17c08f2ad3de7"></a>

Clears the value of PlayerRewards_Optional and sets PlayerRewards_IsSet to false.

#### `public inline bool `[`IsPlayerRewardsSet`](#structFRHAPI__MatchRewardsBody_1aa05ed2e34ea67e13200db4bebe9326b4)`() const` <a id="structFRHAPI__MatchRewardsBody_1aa05ed2e34ea67e13200db4bebe9326b4"></a>

Checks whether PlayerRewards_Optional has been set.

