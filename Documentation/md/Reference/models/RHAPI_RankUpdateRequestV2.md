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
`public inline FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a23c4792232314ade32b9ed0fe2189a7c)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1aae1b94d1bd95a9b5cb34d7aec13d93fc)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a1b738c531d35b8209006a99df30a723a)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1ac1507852a0e0bb8f900e158a02108b57)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__RankUpdateRequestV2_1a8a209f066e06d34335e9ddd10c3bd8e9)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__RankUpdateRequestV2_1ad0fb4b8089620246b62a1577f1d153e6)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a46d554695be397c47d5b6bdd917aec59)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline void `[`SetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a1e56567e17b382df13b6b7471e2906a0)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a184e19ae6e2689c66bb0ba3d9334325f)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline bool `[`IsInstanceIdSet`](#structFRHAPI__RankUpdateRequestV2_1ab2bce1552e01f63750551f226112e765)`() const` | Checks whether InstanceId_Optional has been set.
`public inline FString & `[`GetRankId`](#structFRHAPI__RankUpdateRequestV2_1a9d6f2d4c79991a7e436531f3b751d0f9)`()` | Gets the value of RankId.
`public inline const FString & `[`GetRankId`](#structFRHAPI__RankUpdateRequestV2_1ac27502caa261084499b4fd20fa961988)`() const` | Gets the value of RankId.
`public inline void `[`SetRankId`](#structFRHAPI__RankUpdateRequestV2_1a61c76e72c9f253a855cac8a75157f1e2)`(const FString & NewValue)` | Sets the value of RankId.
`public inline void `[`SetRankId`](#structFRHAPI__RankUpdateRequestV2_1aee390b21fdd9f628ecf057b5f3dd07bb)`(FString && NewValue)` | Sets the value of RankId using move semantics.
`public inline int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1aac45357a621c8dbcc19c456d88e12f84)`()` | Gets the value of MatchLengthSeconds.
`public inline const int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1ab5d95dbeebf048dd9c3305daf5ee37a5)`() const` | Gets the value of MatchLengthSeconds.
`public inline void `[`SetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1acd3adf44cae938fd13f144ae9e39624f)`(const int32 & NewValue)` | Sets the value of MatchLengthSeconds.
`public inline void `[`SetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1ab7d14c7975c9d8d12c2564d7d87bdce9)`(int32 && NewValue)` | Sets the value of MatchLengthSeconds using move semantics.
`public inline bool `[`IsMatchLengthSecondsDefaultValue`](#structFRHAPI__RankUpdateRequestV2_1af0e25b4e70c4ce62e1111cb7d2d23021)`() const` | Returns true if MatchLengthSeconds matches the default value.
`public inline void `[`SetMatchLengthSecondsToDefault`](#structFRHAPI__RankUpdateRequestV2_1a51886b3f82c9ed12a88b4f732997b38c)`()` | Sets the value of MatchLengthSeconds to its default
`public inline TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & `[`GetTeams`](#structFRHAPI__RankUpdateRequestV2_1aef8286f7a3ce962e5fe6506bdfda737f)`()` | Gets the value of Teams.
`public inline const TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & `[`GetTeams`](#structFRHAPI__RankUpdateRequestV2_1a42bac918a8becc75b74df3b936d7cdd4)`() const` | Gets the value of Teams.
`public inline void `[`SetTeams`](#structFRHAPI__RankUpdateRequestV2_1aa9eddf4a5cd16cb4d740e093ce6d69fb)`(const TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & NewValue)` | Sets the value of Teams.
`public inline void `[`SetTeams`](#structFRHAPI__RankUpdateRequestV2_1ad52d261bcc60bfa5ee56fae42e802eec)`(TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > && NewValue)` | Sets the value of Teams using move semantics.

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

#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a23c4792232314ade32b9ed0fe2189a7c)`()` <a id="structFRHAPI__RankUpdateRequestV2_1a23c4792232314ade32b9ed0fe2189a7c"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1aae1b94d1bd95a9b5cb34d7aec13d93fc)`() const` <a id="structFRHAPI__RankUpdateRequestV2_1aae1b94d1bd95a9b5cb34d7aec13d93fc"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a1b738c531d35b8209006a99df30a723a)`(const FString & DefaultValue) const` <a id="structFRHAPI__RankUpdateRequestV2_1a1b738c531d35b8209006a99df30a723a"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1ac1507852a0e0bb8f900e158a02108b57)`(FString & OutValue) const` <a id="structFRHAPI__RankUpdateRequestV2_1ac1507852a0e0bb8f900e158a02108b57"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__RankUpdateRequestV2_1a8a209f066e06d34335e9ddd10c3bd8e9)`()` <a id="structFRHAPI__RankUpdateRequestV2_1a8a209f066e06d34335e9ddd10c3bd8e9"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__RankUpdateRequestV2_1ad0fb4b8089620246b62a1577f1d153e6)`() const` <a id="structFRHAPI__RankUpdateRequestV2_1ad0fb4b8089620246b62a1577f1d153e6"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a46d554695be397c47d5b6bdd917aec59)`(const FString & NewValue)` <a id="structFRHAPI__RankUpdateRequestV2_1a46d554695be397c47d5b6bdd917aec59"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a1e56567e17b382df13b6b7471e2906a0)`(FString && NewValue)` <a id="structFRHAPI__RankUpdateRequestV2_1a1e56567e17b382df13b6b7471e2906a0"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a184e19ae6e2689c66bb0ba3d9334325f)`()` <a id="structFRHAPI__RankUpdateRequestV2_1a184e19ae6e2689c66bb0ba3d9334325f"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline bool `[`IsInstanceIdSet`](#structFRHAPI__RankUpdateRequestV2_1ab2bce1552e01f63750551f226112e765)`() const` <a id="structFRHAPI__RankUpdateRequestV2_1ab2bce1552e01f63750551f226112e765"></a>

Checks whether InstanceId_Optional has been set.

#### `public inline FString & `[`GetRankId`](#structFRHAPI__RankUpdateRequestV2_1a9d6f2d4c79991a7e436531f3b751d0f9)`()` <a id="structFRHAPI__RankUpdateRequestV2_1a9d6f2d4c79991a7e436531f3b751d0f9"></a>

Gets the value of RankId.

#### `public inline const FString & `[`GetRankId`](#structFRHAPI__RankUpdateRequestV2_1ac27502caa261084499b4fd20fa961988)`() const` <a id="structFRHAPI__RankUpdateRequestV2_1ac27502caa261084499b4fd20fa961988"></a>

Gets the value of RankId.

#### `public inline void `[`SetRankId`](#structFRHAPI__RankUpdateRequestV2_1a61c76e72c9f253a855cac8a75157f1e2)`(const FString & NewValue)` <a id="structFRHAPI__RankUpdateRequestV2_1a61c76e72c9f253a855cac8a75157f1e2"></a>

Sets the value of RankId.

#### `public inline void `[`SetRankId`](#structFRHAPI__RankUpdateRequestV2_1aee390b21fdd9f628ecf057b5f3dd07bb)`(FString && NewValue)` <a id="structFRHAPI__RankUpdateRequestV2_1aee390b21fdd9f628ecf057b5f3dd07bb"></a>

Sets the value of RankId using move semantics.

#### `public inline int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1aac45357a621c8dbcc19c456d88e12f84)`()` <a id="structFRHAPI__RankUpdateRequestV2_1aac45357a621c8dbcc19c456d88e12f84"></a>

Gets the value of MatchLengthSeconds.

#### `public inline const int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1ab5d95dbeebf048dd9c3305daf5ee37a5)`() const` <a id="structFRHAPI__RankUpdateRequestV2_1ab5d95dbeebf048dd9c3305daf5ee37a5"></a>

Gets the value of MatchLengthSeconds.

#### `public inline void `[`SetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1acd3adf44cae938fd13f144ae9e39624f)`(const int32 & NewValue)` <a id="structFRHAPI__RankUpdateRequestV2_1acd3adf44cae938fd13f144ae9e39624f"></a>

Sets the value of MatchLengthSeconds.

#### `public inline void `[`SetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1ab7d14c7975c9d8d12c2564d7d87bdce9)`(int32 && NewValue)` <a id="structFRHAPI__RankUpdateRequestV2_1ab7d14c7975c9d8d12c2564d7d87bdce9"></a>

Sets the value of MatchLengthSeconds using move semantics.

#### `public inline bool `[`IsMatchLengthSecondsDefaultValue`](#structFRHAPI__RankUpdateRequestV2_1af0e25b4e70c4ce62e1111cb7d2d23021)`() const` <a id="structFRHAPI__RankUpdateRequestV2_1af0e25b4e70c4ce62e1111cb7d2d23021"></a>

Returns true if MatchLengthSeconds matches the default value.

#### `public inline void `[`SetMatchLengthSecondsToDefault`](#structFRHAPI__RankUpdateRequestV2_1a51886b3f82c9ed12a88b4f732997b38c)`()` <a id="structFRHAPI__RankUpdateRequestV2_1a51886b3f82c9ed12a88b4f732997b38c"></a>

Sets the value of MatchLengthSeconds to its default

#### `public inline TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & `[`GetTeams`](#structFRHAPI__RankUpdateRequestV2_1aef8286f7a3ce962e5fe6506bdfda737f)`()` <a id="structFRHAPI__RankUpdateRequestV2_1aef8286f7a3ce962e5fe6506bdfda737f"></a>

Gets the value of Teams.

#### `public inline const TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & `[`GetTeams`](#structFRHAPI__RankUpdateRequestV2_1a42bac918a8becc75b74df3b936d7cdd4)`() const` <a id="structFRHAPI__RankUpdateRequestV2_1a42bac918a8becc75b74df3b936d7cdd4"></a>

Gets the value of Teams.

#### `public inline void `[`SetTeams`](#structFRHAPI__RankUpdateRequestV2_1aa9eddf4a5cd16cb4d740e093ce6d69fb)`(const TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > & NewValue)` <a id="structFRHAPI__RankUpdateRequestV2_1aa9eddf4a5cd16cb4d740e093ce6d69fb"></a>

Sets the value of Teams.

#### `public inline void `[`SetTeams`](#structFRHAPI__RankUpdateRequestV2_1ad52d261bcc60bfa5ee56fae42e802eec)`(TArray< `[`FRHAPI_RankedTeam`](RHAPI_RankedTeam.md#structFRHAPI__RankedTeam)` > && NewValue)` <a id="structFRHAPI__RankUpdateRequestV2_1ad52d261bcc60bfa5ee56fae42e802eec"></a>

Sets the value of Teams using move semantics.

