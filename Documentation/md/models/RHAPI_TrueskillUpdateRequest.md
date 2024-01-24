# RHAPI_TrueskillUpdateRequest <a id="group__RHAPI__TrueskillUpdateRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_TrueskillUpdateRequest`](#structFRHAPI__TrueskillUpdateRequest) | DEPRECATED A request body to update players&#39; trueskill ratings from a match.

## struct `FRHAPI_TrueskillUpdateRequest` <a id="structFRHAPI__TrueskillUpdateRequest"></a>

```
struct FRHAPI_TrueskillUpdateRequest
  : public FRHAPI_Model
```

DEPRECATED A request body to update players&#39; trueskill ratings from a match.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`InstanceId_Optional`](#structFRHAPI__TrueskillUpdateRequest_1a2942a12d2e732d387266c9f34f2f8f37) | ID for the instance the match took place on.
`public bool `[`InstanceId_IsSet`](#structFRHAPI__TrueskillUpdateRequest_1a9e28528a11cce285e728127c072f76a7) | true if InstanceId_Optional has been set to a value
`public int32 `[`RankId`](#structFRHAPI__TrueskillUpdateRequest_1a1de62f86ac1f28f1a24db29bd83ff8eb) | ID for the rank type used in this match.
`public int32 `[`MatchLengthSeconds`](#structFRHAPI__TrueskillUpdateRequest_1af9836444ee110804b937d37917361c26) | How many seconds the match lasted.
`public TArray< `[`FRHAPI_TrueskillTeam`](RHAPI_TrueskillTeam.md#structFRHAPI__TrueskillTeam)` > `[`Teams`](#structFRHAPI__TrueskillUpdateRequest_1a210525c9961a73ae319d4ace2e413518) | List of teams that participated in this match.
`public virtual bool `[`FromJson`](#structFRHAPI__TrueskillUpdateRequest_1a679220a102b177616751ce5f985341d7)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__TrueskillUpdateRequest_1a7cda126cd2ca0e74353c9895d0b77d34)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__TrueskillUpdateRequest_1ab2c5fb989c94d31b176db77887a95300)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__TrueskillUpdateRequest_1a7945e990b74de0b4d79f276a53041dfb)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__TrueskillUpdateRequest_1aeb081a53477c67df3d567cfe7d1c1a2e)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceId`](#structFRHAPI__TrueskillUpdateRequest_1a59fef8b21e6352e8287fd3da7047b9b6)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__TrueskillUpdateRequest_1a3adea4fd05294227a28f8c3be7b0c21c)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__TrueskillUpdateRequest_1a38b9a6d613f37e16680f5064641ad84f)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceId`](#structFRHAPI__TrueskillUpdateRequest_1a3467892239ac26cd465cd12760c6c6d4)`(FString NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline void `[`ClearInstanceId`](#structFRHAPI__TrueskillUpdateRequest_1a761badb0c37cb60868139b73882f3d6a)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline int32 & `[`GetRankId`](#structFRHAPI__TrueskillUpdateRequest_1abd6d4b6488d48482c80493fdf5adb255)`()` | Gets the value of RankId.
`public inline const int32 & `[`GetRankId`](#structFRHAPI__TrueskillUpdateRequest_1a2cbb0381557669c9432a2ce90d7a514c)`() const` | Gets the value of RankId.
`public inline void `[`SetRankId`](#structFRHAPI__TrueskillUpdateRequest_1aa3da77ec00ae725ddebc4335ba04026f)`(int32 NewValue)` | Sets the value of RankId.
`public inline bool `[`IsRankIdDefaultValue`](#structFRHAPI__TrueskillUpdateRequest_1a11698faae8dbb0524081103cac378087)`() const` | Returns true if RankId matches the default value.
`public inline void `[`SetRankIdToDefault`](#structFRHAPI__TrueskillUpdateRequest_1aadd9587d26526ce4ee7285e68ddbea2f)`()` | Sets the value of RankId to its default
`public inline int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__TrueskillUpdateRequest_1a05cdf3b003527e13c8c2f6a79bfda682)`()` | Gets the value of MatchLengthSeconds.
`public inline const int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__TrueskillUpdateRequest_1a48ed7300b8cb92fcb4b73f4c9a69d5d0)`() const` | Gets the value of MatchLengthSeconds.
`public inline void `[`SetMatchLengthSeconds`](#structFRHAPI__TrueskillUpdateRequest_1a0cee29b3d22a4949eecdb1281d74348f)`(int32 NewValue)` | Sets the value of MatchLengthSeconds.
`public inline bool `[`IsMatchLengthSecondsDefaultValue`](#structFRHAPI__TrueskillUpdateRequest_1a29a68421641050722c857d3d5c136614)`() const` | Returns true if MatchLengthSeconds matches the default value.
`public inline void `[`SetMatchLengthSecondsToDefault`](#structFRHAPI__TrueskillUpdateRequest_1acfdbc8dc63c5839c25ff885a83f692a8)`()` | Sets the value of MatchLengthSeconds to its default
`public inline TArray< `[`FRHAPI_TrueskillTeam`](RHAPI_TrueskillTeam.md#structFRHAPI__TrueskillTeam)` > & `[`GetTeams`](#structFRHAPI__TrueskillUpdateRequest_1a1389d10b71a1a8ac90dab207a1cd03e7)`()` | Gets the value of Teams.
`public inline const TArray< `[`FRHAPI_TrueskillTeam`](RHAPI_TrueskillTeam.md#structFRHAPI__TrueskillTeam)` > & `[`GetTeams`](#structFRHAPI__TrueskillUpdateRequest_1ac6e65c760802d8f4e6f1fff7c2052650)`() const` | Gets the value of Teams.
`public inline void `[`SetTeams`](#structFRHAPI__TrueskillUpdateRequest_1a3ad0f34e88a3d799c1fa55c0a8774b70)`(TArray< `[`FRHAPI_TrueskillTeam`](RHAPI_TrueskillTeam.md#structFRHAPI__TrueskillTeam)` > NewValue)` | Sets the value of Teams.

#### Members

#### `public FString `[`InstanceId_Optional`](#structFRHAPI__TrueskillUpdateRequest_1a2942a12d2e732d387266c9f34f2f8f37) <a id="structFRHAPI__TrueskillUpdateRequest_1a2942a12d2e732d387266c9f34f2f8f37"></a>

ID for the instance the match took place on.

<br>
#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__TrueskillUpdateRequest_1a9e28528a11cce285e728127c072f76a7) <a id="structFRHAPI__TrueskillUpdateRequest_1a9e28528a11cce285e728127c072f76a7"></a>

true if InstanceId_Optional has been set to a value

<br>
#### `public int32 `[`RankId`](#structFRHAPI__TrueskillUpdateRequest_1a1de62f86ac1f28f1a24db29bd83ff8eb) <a id="structFRHAPI__TrueskillUpdateRequest_1a1de62f86ac1f28f1a24db29bd83ff8eb"></a>

ID for the rank type used in this match.

<br>
#### `public int32 `[`MatchLengthSeconds`](#structFRHAPI__TrueskillUpdateRequest_1af9836444ee110804b937d37917361c26) <a id="structFRHAPI__TrueskillUpdateRequest_1af9836444ee110804b937d37917361c26"></a>

How many seconds the match lasted.

<br>
#### `public TArray< `[`FRHAPI_TrueskillTeam`](RHAPI_TrueskillTeam.md#structFRHAPI__TrueskillTeam)` > `[`Teams`](#structFRHAPI__TrueskillUpdateRequest_1a210525c9961a73ae319d4ace2e413518) <a id="structFRHAPI__TrueskillUpdateRequest_1a210525c9961a73ae319d4ace2e413518"></a>

List of teams that participated in this match.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__TrueskillUpdateRequest_1a679220a102b177616751ce5f985341d7)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__TrueskillUpdateRequest_1a679220a102b177616751ce5f985341d7"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__TrueskillUpdateRequest_1a7cda126cd2ca0e74353c9895d0b77d34)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__TrueskillUpdateRequest_1a7cda126cd2ca0e74353c9895d0b77d34"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__TrueskillUpdateRequest_1ab2c5fb989c94d31b176db77887a95300)`()` <a id="structFRHAPI__TrueskillUpdateRequest_1ab2c5fb989c94d31b176db77887a95300"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__TrueskillUpdateRequest_1a7945e990b74de0b4d79f276a53041dfb)`() const` <a id="structFRHAPI__TrueskillUpdateRequest_1a7945e990b74de0b4d79f276a53041dfb"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__TrueskillUpdateRequest_1aeb081a53477c67df3d567cfe7d1c1a2e)`(const FString & DefaultValue) const` <a id="structFRHAPI__TrueskillUpdateRequest_1aeb081a53477c67df3d567cfe7d1c1a2e"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInstanceId`](#structFRHAPI__TrueskillUpdateRequest_1a59fef8b21e6352e8287fd3da7047b9b6)`(FString & OutValue) const` <a id="structFRHAPI__TrueskillUpdateRequest_1a59fef8b21e6352e8287fd3da7047b9b6"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__TrueskillUpdateRequest_1a3adea4fd05294227a28f8c3be7b0c21c)`()` <a id="structFRHAPI__TrueskillUpdateRequest_1a3adea4fd05294227a28f8c3be7b0c21c"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__TrueskillUpdateRequest_1a38b9a6d613f37e16680f5064641ad84f)`() const` <a id="structFRHAPI__TrueskillUpdateRequest_1a38b9a6d613f37e16680f5064641ad84f"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInstanceId`](#structFRHAPI__TrueskillUpdateRequest_1a3467892239ac26cd465cd12760c6c6d4)`(FString NewValue)` <a id="structFRHAPI__TrueskillUpdateRequest_1a3467892239ac26cd465cd12760c6c6d4"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

<br>
#### `public inline void `[`ClearInstanceId`](#structFRHAPI__TrueskillUpdateRequest_1a761badb0c37cb60868139b73882f3d6a)`()` <a id="structFRHAPI__TrueskillUpdateRequest_1a761badb0c37cb60868139b73882f3d6a"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

<br>
#### `public inline int32 & `[`GetRankId`](#structFRHAPI__TrueskillUpdateRequest_1abd6d4b6488d48482c80493fdf5adb255)`()` <a id="structFRHAPI__TrueskillUpdateRequest_1abd6d4b6488d48482c80493fdf5adb255"></a>

Gets the value of RankId.

<br>
#### `public inline const int32 & `[`GetRankId`](#structFRHAPI__TrueskillUpdateRequest_1a2cbb0381557669c9432a2ce90d7a514c)`() const` <a id="structFRHAPI__TrueskillUpdateRequest_1a2cbb0381557669c9432a2ce90d7a514c"></a>

Gets the value of RankId.

<br>
#### `public inline void `[`SetRankId`](#structFRHAPI__TrueskillUpdateRequest_1aa3da77ec00ae725ddebc4335ba04026f)`(int32 NewValue)` <a id="structFRHAPI__TrueskillUpdateRequest_1aa3da77ec00ae725ddebc4335ba04026f"></a>

Sets the value of RankId.

<br>
#### `public inline bool `[`IsRankIdDefaultValue`](#structFRHAPI__TrueskillUpdateRequest_1a11698faae8dbb0524081103cac378087)`() const` <a id="structFRHAPI__TrueskillUpdateRequest_1a11698faae8dbb0524081103cac378087"></a>

Returns true if RankId matches the default value.

<br>
#### `public inline void `[`SetRankIdToDefault`](#structFRHAPI__TrueskillUpdateRequest_1aadd9587d26526ce4ee7285e68ddbea2f)`()` <a id="structFRHAPI__TrueskillUpdateRequest_1aadd9587d26526ce4ee7285e68ddbea2f"></a>

Sets the value of RankId to its default

<br>
#### `public inline int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__TrueskillUpdateRequest_1a05cdf3b003527e13c8c2f6a79bfda682)`()` <a id="structFRHAPI__TrueskillUpdateRequest_1a05cdf3b003527e13c8c2f6a79bfda682"></a>

Gets the value of MatchLengthSeconds.

<br>
#### `public inline const int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__TrueskillUpdateRequest_1a48ed7300b8cb92fcb4b73f4c9a69d5d0)`() const` <a id="structFRHAPI__TrueskillUpdateRequest_1a48ed7300b8cb92fcb4b73f4c9a69d5d0"></a>

Gets the value of MatchLengthSeconds.

<br>
#### `public inline void `[`SetMatchLengthSeconds`](#structFRHAPI__TrueskillUpdateRequest_1a0cee29b3d22a4949eecdb1281d74348f)`(int32 NewValue)` <a id="structFRHAPI__TrueskillUpdateRequest_1a0cee29b3d22a4949eecdb1281d74348f"></a>

Sets the value of MatchLengthSeconds.

<br>
#### `public inline bool `[`IsMatchLengthSecondsDefaultValue`](#structFRHAPI__TrueskillUpdateRequest_1a29a68421641050722c857d3d5c136614)`() const` <a id="structFRHAPI__TrueskillUpdateRequest_1a29a68421641050722c857d3d5c136614"></a>

Returns true if MatchLengthSeconds matches the default value.

<br>
#### `public inline void `[`SetMatchLengthSecondsToDefault`](#structFRHAPI__TrueskillUpdateRequest_1acfdbc8dc63c5839c25ff885a83f692a8)`()` <a id="structFRHAPI__TrueskillUpdateRequest_1acfdbc8dc63c5839c25ff885a83f692a8"></a>

Sets the value of MatchLengthSeconds to its default

<br>
#### `public inline TArray< `[`FRHAPI_TrueskillTeam`](RHAPI_TrueskillTeam.md#structFRHAPI__TrueskillTeam)` > & `[`GetTeams`](#structFRHAPI__TrueskillUpdateRequest_1a1389d10b71a1a8ac90dab207a1cd03e7)`()` <a id="structFRHAPI__TrueskillUpdateRequest_1a1389d10b71a1a8ac90dab207a1cd03e7"></a>

Gets the value of Teams.

<br>
#### `public inline const TArray< `[`FRHAPI_TrueskillTeam`](RHAPI_TrueskillTeam.md#structFRHAPI__TrueskillTeam)` > & `[`GetTeams`](#structFRHAPI__TrueskillUpdateRequest_1ac6e65c760802d8f4e6f1fff7c2052650)`() const` <a id="structFRHAPI__TrueskillUpdateRequest_1ac6e65c760802d8f4e6f1fff7c2052650"></a>

Gets the value of Teams.

<br>
#### `public inline void `[`SetTeams`](#structFRHAPI__TrueskillUpdateRequest_1a3ad0f34e88a3d799c1fa55c0a8774b70)`(TArray< `[`FRHAPI_TrueskillTeam`](RHAPI_TrueskillTeam.md#structFRHAPI__TrueskillTeam)` > NewValue)` <a id="structFRHAPI__TrueskillUpdateRequest_1a3ad0f34e88a3d799c1fa55c0a8774b70"></a>

Sets the value of Teams.

<br>
