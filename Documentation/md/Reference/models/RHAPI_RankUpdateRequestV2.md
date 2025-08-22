---
title: RHAPI_RankUpdateRequestV2
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_RankUpdateRequestV2`](#structFRHAPI__RankUpdateRequestV2) | A request body to calculate and update players&#39; ratings from a match.

## struct `FRHAPI_RankUpdateRequestV2` <a id="structFRHAPI__RankUpdateRequestV2"></a>

```
struct FRHAPI_RankUpdateRequestV2
  : public FRHAPI_Model
```

A request body to calculate and update players&#39; ratings from a match.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`InstanceId_Optional`](#structFRHAPI__RankUpdateRequestV2_1a0703d762fce694979e46d12ed5ddab5c) | ID for the instance the match took place on.
`public bool `[`InstanceId_IsSet`](#structFRHAPI__RankUpdateRequestV2_1afccfe640c8c1404cb359c5ac6c6c7b45) | true if InstanceId_Optional has been set to a value
`public FString `[`RankId`](#structFRHAPI__RankUpdateRequestV2_1a4471c36e5393b21c7eabf9f3b0c6bbc4) | ID for the rank type used in this match.
`public int32 `[`MatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1a91bf0f8e7fcd9eeef4368ca8bff338b4) | How many seconds the match lasted.
`public TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > `[`Teams`](#structFRHAPI__RankUpdateRequestV2_1a58770a4cd45a001521437970c51f70aa) | List of teams that participated in this match.
`public virtual bool `[`FromJson`](#structFRHAPI__RankUpdateRequestV2_1a25b135cd4b2e5e6aaa66278e91f4f477)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RankUpdateRequestV2_1a9074b77a5dfeea660c2b2d3a1d712575)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a401ab8ace3c0891c364cb8220e1088ec)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a884c3a49a8b70b770c15d4b03e38ce76)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1aca9b680fe24fcc62eb2a4d80cceff2e2)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1acf39318bc7220351e1f5e4da4fb4d94b)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetInstanceIdOrNull`](#structFRHAPI__RankUpdateRequestV2_1a41b526f1f4a25b0dd8710f49c6b3a1f7)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__RankUpdateRequestV2_1a38f699ed222bebf7883b61c4a15a52bd)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a436c401ac097ce6f260029e98b1b7c76)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a7df4c8917723756701b9cca08a786ee3)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a184e19ae6e2689c66bb0ba3d9334325f)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline FORCEINLINE FString & `[`GetRankId`](#structFRHAPI__RankUpdateRequestV2_1a8ea9149fc9e568ed5bcd98907616a53b)`()` | Gets the value of RankId.
`public inline FORCEINLINE const FString & `[`GetRankId`](#structFRHAPI__RankUpdateRequestV2_1ab2b022e551e341dd0f1eb37a219f0d8f)`() const` | Gets the value of RankId.
`public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__RankUpdateRequestV2_1aeb0f26e89759eb17046d62a6d6802e1c)`(const FString & NewValue)` | Sets the value of RankId.
`public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__RankUpdateRequestV2_1a920d8f24da8591724aab651ac13213a6)`(FString && NewValue)` | Sets the value of RankId using move semantics.
`public inline FORCEINLINE int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1ac3b646339fa93872c0c822d7c1aa756c)`()` | Gets the value of MatchLengthSeconds.
`public inline FORCEINLINE const int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1a9048a53276568a0208092a6596c79065)`() const` | Gets the value of MatchLengthSeconds.
`public inline FORCEINLINE void `[`SetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1ab9dd43205b0c9468cfe68c9a0ca90089)`(const int32 & NewValue)` | Sets the value of MatchLengthSeconds.
`public inline FORCEINLINE void `[`SetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1afed032473242d979691b56b1edb0d850)`(int32 && NewValue)` | Sets the value of MatchLengthSeconds using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_MatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1adae405ad2f879a6878a5026d245f9123)`()` | Returns the default value of MatchLengthSeconds.
`public inline FORCEINLINE TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & `[`GetTeams`](#structFRHAPI__RankUpdateRequestV2_1af5209299edc918c27fd9d47333af4fcd)`()` | Gets the value of Teams.
`public inline FORCEINLINE const TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & `[`GetTeams`](#structFRHAPI__RankUpdateRequestV2_1a1492c45860599b5cdda4986a7adb1b7a)`() const` | Gets the value of Teams.
`public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__RankUpdateRequestV2_1a467de74d20f4bef151c30e2a3d9c64e7)`(const TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & NewValue)` | Sets the value of Teams.
`public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__RankUpdateRequestV2_1a2ec955e584939e505fb4020c883ca2a2)`(TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > && NewValue)` | Sets the value of Teams using move semantics.

### Members

#### `public FString `[`InstanceId_Optional`](#structFRHAPI__RankUpdateRequestV2_1a0703d762fce694979e46d12ed5ddab5c) <a id="structFRHAPI__RankUpdateRequestV2_1a0703d762fce694979e46d12ed5ddab5c"></a>

ID for the instance the match took place on.

#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__RankUpdateRequestV2_1afccfe640c8c1404cb359c5ac6c6c7b45) <a id="structFRHAPI__RankUpdateRequestV2_1afccfe640c8c1404cb359c5ac6c6c7b45"></a>

true if InstanceId_Optional has been set to a value

#### `public FString `[`RankId`](#structFRHAPI__RankUpdateRequestV2_1a4471c36e5393b21c7eabf9f3b0c6bbc4) <a id="structFRHAPI__RankUpdateRequestV2_1a4471c36e5393b21c7eabf9f3b0c6bbc4"></a>

ID for the rank type used in this match.

#### `public int32 `[`MatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1a91bf0f8e7fcd9eeef4368ca8bff338b4) <a id="structFRHAPI__RankUpdateRequestV2_1a91bf0f8e7fcd9eeef4368ca8bff338b4"></a>

How many seconds the match lasted.

#### `public TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > `[`Teams`](#structFRHAPI__RankUpdateRequestV2_1a58770a4cd45a001521437970c51f70aa) <a id="structFRHAPI__RankUpdateRequestV2_1a58770a4cd45a001521437970c51f70aa"></a>

List of teams that participated in this match.

#### `public virtual bool `[`FromJson`](#structFRHAPI__RankUpdateRequestV2_1a25b135cd4b2e5e6aaa66278e91f4f477)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RankUpdateRequestV2_1a25b135cd4b2e5e6aaa66278e91f4f477"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__RankUpdateRequestV2_1a9074b77a5dfeea660c2b2d3a1d712575)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__RankUpdateRequestV2_1a9074b77a5dfeea660c2b2d3a1d712575"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a401ab8ace3c0891c364cb8220e1088ec)`()` <a id="structFRHAPI__RankUpdateRequestV2_1a401ab8ace3c0891c364cb8220e1088ec"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a884c3a49a8b70b770c15d4b03e38ce76)`() const` <a id="structFRHAPI__RankUpdateRequestV2_1a884c3a49a8b70b770c15d4b03e38ce76"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1aca9b680fe24fcc62eb2a4d80cceff2e2)`(const FString & DefaultValue) const` <a id="structFRHAPI__RankUpdateRequestV2_1aca9b680fe24fcc62eb2a4d80cceff2e2"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1acf39318bc7220351e1f5e4da4fb4d94b)`(FString & OutValue) const` <a id="structFRHAPI__RankUpdateRequestV2_1acf39318bc7220351e1f5e4da4fb4d94b"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetInstanceIdOrNull`](#structFRHAPI__RankUpdateRequestV2_1a41b526f1f4a25b0dd8710f49c6b3a1f7)`()` <a id="structFRHAPI__RankUpdateRequestV2_1a41b526f1f4a25b0dd8710f49c6b3a1f7"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__RankUpdateRequestV2_1a38f699ed222bebf7883b61c4a15a52bd)`() const` <a id="structFRHAPI__RankUpdateRequestV2_1a38f699ed222bebf7883b61c4a15a52bd"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a436c401ac097ce6f260029e98b1b7c76)`(const FString & NewValue)` <a id="structFRHAPI__RankUpdateRequestV2_1a436c401ac097ce6f260029e98b1b7c76"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a7df4c8917723756701b9cca08a786ee3)`(FString && NewValue)` <a id="structFRHAPI__RankUpdateRequestV2_1a7df4c8917723756701b9cca08a786ee3"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a184e19ae6e2689c66bb0ba3d9334325f)`()` <a id="structFRHAPI__RankUpdateRequestV2_1a184e19ae6e2689c66bb0ba3d9334325f"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetRankId`](#structFRHAPI__RankUpdateRequestV2_1a8ea9149fc9e568ed5bcd98907616a53b)`()` <a id="structFRHAPI__RankUpdateRequestV2_1a8ea9149fc9e568ed5bcd98907616a53b"></a>

Gets the value of RankId.

#### `public inline FORCEINLINE const FString & `[`GetRankId`](#structFRHAPI__RankUpdateRequestV2_1ab2b022e551e341dd0f1eb37a219f0d8f)`() const` <a id="structFRHAPI__RankUpdateRequestV2_1ab2b022e551e341dd0f1eb37a219f0d8f"></a>

Gets the value of RankId.

#### `public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__RankUpdateRequestV2_1aeb0f26e89759eb17046d62a6d6802e1c)`(const FString & NewValue)` <a id="structFRHAPI__RankUpdateRequestV2_1aeb0f26e89759eb17046d62a6d6802e1c"></a>

Sets the value of RankId.

#### `public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__RankUpdateRequestV2_1a920d8f24da8591724aab651ac13213a6)`(FString && NewValue)` <a id="structFRHAPI__RankUpdateRequestV2_1a920d8f24da8591724aab651ac13213a6"></a>

Sets the value of RankId using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1ac3b646339fa93872c0c822d7c1aa756c)`()` <a id="structFRHAPI__RankUpdateRequestV2_1ac3b646339fa93872c0c822d7c1aa756c"></a>

Gets the value of MatchLengthSeconds.

#### `public inline FORCEINLINE const int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1a9048a53276568a0208092a6596c79065)`() const` <a id="structFRHAPI__RankUpdateRequestV2_1a9048a53276568a0208092a6596c79065"></a>

Gets the value of MatchLengthSeconds.

#### `public inline FORCEINLINE void `[`SetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1ab9dd43205b0c9468cfe68c9a0ca90089)`(const int32 & NewValue)` <a id="structFRHAPI__RankUpdateRequestV2_1ab9dd43205b0c9468cfe68c9a0ca90089"></a>

Sets the value of MatchLengthSeconds.

#### `public inline FORCEINLINE void `[`SetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1afed032473242d979691b56b1edb0d850)`(int32 && NewValue)` <a id="structFRHAPI__RankUpdateRequestV2_1afed032473242d979691b56b1edb0d850"></a>

Sets the value of MatchLengthSeconds using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_MatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1adae405ad2f879a6878a5026d245f9123)`()` <a id="structFRHAPI__RankUpdateRequestV2_1adae405ad2f879a6878a5026d245f9123"></a>

Returns the default value of MatchLengthSeconds.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & `[`GetTeams`](#structFRHAPI__RankUpdateRequestV2_1af5209299edc918c27fd9d47333af4fcd)`()` <a id="structFRHAPI__RankUpdateRequestV2_1af5209299edc918c27fd9d47333af4fcd"></a>

Gets the value of Teams.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & `[`GetTeams`](#structFRHAPI__RankUpdateRequestV2_1a1492c45860599b5cdda4986a7adb1b7a)`() const` <a id="structFRHAPI__RankUpdateRequestV2_1a1492c45860599b5cdda4986a7adb1b7a"></a>

Gets the value of Teams.

#### `public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__RankUpdateRequestV2_1a467de74d20f4bef151c30e2a3d9c64e7)`(const TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & NewValue)` <a id="structFRHAPI__RankUpdateRequestV2_1a467de74d20f4bef151c30e2a3d9c64e7"></a>

Sets the value of Teams.

#### `public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__RankUpdateRequestV2_1a2ec955e584939e505fb4020c883ca2a2)`(TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > && NewValue)` <a id="structFRHAPI__RankUpdateRequestV2_1a2ec955e584939e505fb4020c883ca2a2"></a>

Sets the value of Teams using move semantics.

