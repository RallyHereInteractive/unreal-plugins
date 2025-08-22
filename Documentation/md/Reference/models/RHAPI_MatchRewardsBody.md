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
`public inline FORCEINLINE TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > & `[`GetPlayerRewards`](#structFRHAPI__MatchRewardsBody_1a9aa9f96ad0eca943819f6f89a6d4a266)`()` | Gets the value of PlayerRewards_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > & `[`GetPlayerRewards`](#structFRHAPI__MatchRewardsBody_1a97052ed85f853754aad0d26f495eb491)`() const` | Gets the value of PlayerRewards_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > & `[`GetPlayerRewards`](#structFRHAPI__MatchRewardsBody_1a1247a0eb06197a47393c1f9eee417d2d)`(const TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > & DefaultValue) const` | Gets the value of PlayerRewards_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerRewards`](#structFRHAPI__MatchRewardsBody_1a8dffc7713f6ebb330a50a2778e3a79c8)`(TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > & OutValue) const` | Fills OutValue with the value of PlayerRewards_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > * `[`GetPlayerRewardsOrNull`](#structFRHAPI__MatchRewardsBody_1af5d341cf9f145d08d41ee4c69954b72f)`()` | Returns a pointer to PlayerRewards_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > * `[`GetPlayerRewardsOrNull`](#structFRHAPI__MatchRewardsBody_1a80d1df99b1beaf31d49c840b658ff2cb)`() const` | Returns a pointer to PlayerRewards_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerRewards`](#structFRHAPI__MatchRewardsBody_1ae21722bf795e52da4273ceb73d100f38)`(const TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > & NewValue)` | Sets the value of PlayerRewards_Optional and also sets PlayerRewards_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerRewards`](#structFRHAPI__MatchRewardsBody_1a3803d2a59563541e4640d5f768781a95)`(TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > && NewValue)` | Sets the value of PlayerRewards_Optional and also sets PlayerRewards_IsSet to true using move semantics.
`public inline void `[`ClearPlayerRewards`](#structFRHAPI__MatchRewardsBody_1ae3da2eeb31cec2801aa17c08f2ad3de7)`()` | Clears the value of PlayerRewards_Optional and sets PlayerRewards_IsSet to false.

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

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > & `[`GetPlayerRewards`](#structFRHAPI__MatchRewardsBody_1a9aa9f96ad0eca943819f6f89a6d4a266)`()` <a id="structFRHAPI__MatchRewardsBody_1a9aa9f96ad0eca943819f6f89a6d4a266"></a>

Gets the value of PlayerRewards_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > & `[`GetPlayerRewards`](#structFRHAPI__MatchRewardsBody_1a97052ed85f853754aad0d26f495eb491)`() const` <a id="structFRHAPI__MatchRewardsBody_1a97052ed85f853754aad0d26f495eb491"></a>

Gets the value of PlayerRewards_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > & `[`GetPlayerRewards`](#structFRHAPI__MatchRewardsBody_1a1247a0eb06197a47393c1f9eee417d2d)`(const TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > & DefaultValue) const` <a id="structFRHAPI__MatchRewardsBody_1a1247a0eb06197a47393c1f9eee417d2d"></a>

Gets the value of PlayerRewards_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerRewards`](#structFRHAPI__MatchRewardsBody_1a8dffc7713f6ebb330a50a2778e3a79c8)`(TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > & OutValue) const` <a id="structFRHAPI__MatchRewardsBody_1a8dffc7713f6ebb330a50a2778e3a79c8"></a>

Fills OutValue with the value of PlayerRewards_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > * `[`GetPlayerRewardsOrNull`](#structFRHAPI__MatchRewardsBody_1af5d341cf9f145d08d41ee4c69954b72f)`()` <a id="structFRHAPI__MatchRewardsBody_1af5d341cf9f145d08d41ee4c69954b72f"></a>

Returns a pointer to PlayerRewards_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > * `[`GetPlayerRewardsOrNull`](#structFRHAPI__MatchRewardsBody_1a80d1df99b1beaf31d49c840b658ff2cb)`() const` <a id="structFRHAPI__MatchRewardsBody_1a80d1df99b1beaf31d49c840b658ff2cb"></a>

Returns a pointer to PlayerRewards_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerRewards`](#structFRHAPI__MatchRewardsBody_1ae21722bf795e52da4273ceb73d100f38)`(const TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > & NewValue)` <a id="structFRHAPI__MatchRewardsBody_1ae21722bf795e52da4273ceb73d100f38"></a>

Sets the value of PlayerRewards_Optional and also sets PlayerRewards_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerRewards`](#structFRHAPI__MatchRewardsBody_1a3803d2a59563541e4640d5f768781a95)`(TArray< `[`FRHAPI_PlayerMatchReward`](RHAPI_PlayerMatchReward.md#structFRHAPI__PlayerMatchReward)` > && NewValue)` <a id="structFRHAPI__MatchRewardsBody_1a3803d2a59563541e4640d5f768781a95"></a>

Sets the value of PlayerRewards_Optional and also sets PlayerRewards_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerRewards`](#structFRHAPI__MatchRewardsBody_1ae3da2eeb31cec2801aa17c08f2ad3de7)`()` <a id="structFRHAPI__MatchRewardsBody_1ae3da2eeb31cec2801aa17c08f2ad3de7"></a>

Clears the value of PlayerRewards_Optional and sets PlayerRewards_IsSet to false.

