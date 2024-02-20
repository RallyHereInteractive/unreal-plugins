# RHAPI_RankUpdateRequestV2 <a id="group__RHAPI__RankUpdateRequestV2"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`InstanceId_Optional`](#structFRHAPI__RankUpdateRequestV2_1a0703d762fce694979e46d12ed5ddab5c) | ID for the instance the match took place on.
`public bool `[`InstanceId_IsSet`](#structFRHAPI__RankUpdateRequestV2_1afccfe640c8c1404cb359c5ac6c6c7b45) | true if InstanceId_Optional has been set to a value
`public FString `[`RankId`](#structFRHAPI__RankUpdateRequestV2_1a4471c36e5393b21c7eabf9f3b0c6bbc4) | ID for the rank type used in this match.
`public int32 `[`MatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1a91bf0f8e7fcd9eeef4368ca8bff338b4) | How many seconds the match lasted.
`public TArray< `[`FRHAPI_TrueskillTeam`](RHAPI_TrueskillTeam.md#structFRHAPI__TrueskillTeam)` > `[`Teams`](#structFRHAPI__RankUpdateRequestV2_1a9f4e13c383bc49ec44fc377085404170) | List of teams that participated in this match.
`public virtual bool `[`FromJson`](#structFRHAPI__RankUpdateRequestV2_1a5020149358d9579f4eb583bca8b1414e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RankUpdateRequestV2_1ad235d4cde2797f0b64c5ccdc1b70f527)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a2b91761d385633e05c71230d3aa0d232)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a5fefdaeebc736715c30f0a60598d72ba)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a371c5e0b52b7d6d5b481e9234270f7a2)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1ac1507852a0e0bb8f900e158a02108b57)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__RankUpdateRequestV2_1af80ede5be2a086fa86da0043e0188556)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__RankUpdateRequestV2_1aafb6ffbb2b2a373879d6f4b31956ed5a)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1ac65db021d86f4c0d9257d4f6529dc7ce)`(FString NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline void `[`ClearInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a184e19ae6e2689c66bb0ba3d9334325f)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline FString & `[`GetRankId`](#structFRHAPI__RankUpdateRequestV2_1a89af089c8dcc81c536459f872b1e7a03)`()` | Gets the value of RankId.
`public inline const FString & `[`GetRankId`](#structFRHAPI__RankUpdateRequestV2_1a51b0c67f80ba51b707dd0289ebb8ae79)`() const` | Gets the value of RankId.
`public inline void `[`SetRankId`](#structFRHAPI__RankUpdateRequestV2_1abe81e1395b4f43cc9b1bd1d8f0207346)`(FString NewValue)` | Sets the value of RankId.
`public inline int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1a2a6d9e062fb0c98a8514354aef01e328)`()` | Gets the value of MatchLengthSeconds.
`public inline const int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1a15d186ef47d5eeb79911a2d694ba03c1)`() const` | Gets the value of MatchLengthSeconds.
`public inline void `[`SetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1aefda24506618bfab93b74d2df4fc5104)`(int32 NewValue)` | Sets the value of MatchLengthSeconds.
`public inline bool `[`IsMatchLengthSecondsDefaultValue`](#structFRHAPI__RankUpdateRequestV2_1af0e25b4e70c4ce62e1111cb7d2d23021)`() const` | Returns true if MatchLengthSeconds matches the default value.
`public inline void `[`SetMatchLengthSecondsToDefault`](#structFRHAPI__RankUpdateRequestV2_1a51886b3f82c9ed12a88b4f732997b38c)`()` | Sets the value of MatchLengthSeconds to its default
`public inline TArray< `[`FRHAPI_TrueskillTeam`](RHAPI_TrueskillTeam.md#structFRHAPI__TrueskillTeam)` > & `[`GetTeams`](#structFRHAPI__RankUpdateRequestV2_1af8a65a1c5515e814938c69d87f3f2d94)`()` | Gets the value of Teams.
`public inline const TArray< `[`FRHAPI_TrueskillTeam`](RHAPI_TrueskillTeam.md#structFRHAPI__TrueskillTeam)` > & `[`GetTeams`](#structFRHAPI__RankUpdateRequestV2_1afe98cac88f5a71859b313b7413a60400)`() const` | Gets the value of Teams.
`public inline void `[`SetTeams`](#structFRHAPI__RankUpdateRequestV2_1afaef9a0a05f8c4eebdf446951211b8e6)`(TArray< `[`FRHAPI_TrueskillTeam`](RHAPI_TrueskillTeam.md#structFRHAPI__TrueskillTeam)` > NewValue)` | Sets the value of Teams.

#### Members

#### `public FString `[`InstanceId_Optional`](#structFRHAPI__RankUpdateRequestV2_1a0703d762fce694979e46d12ed5ddab5c) <a id="structFRHAPI__RankUpdateRequestV2_1a0703d762fce694979e46d12ed5ddab5c"></a>

ID for the instance the match took place on.

<br>
#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__RankUpdateRequestV2_1afccfe640c8c1404cb359c5ac6c6c7b45) <a id="structFRHAPI__RankUpdateRequestV2_1afccfe640c8c1404cb359c5ac6c6c7b45"></a>

true if InstanceId_Optional has been set to a value

<br>
#### `public FString `[`RankId`](#structFRHAPI__RankUpdateRequestV2_1a4471c36e5393b21c7eabf9f3b0c6bbc4) <a id="structFRHAPI__RankUpdateRequestV2_1a4471c36e5393b21c7eabf9f3b0c6bbc4"></a>

ID for the rank type used in this match.

<br>
#### `public int32 `[`MatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1a91bf0f8e7fcd9eeef4368ca8bff338b4) <a id="structFRHAPI__RankUpdateRequestV2_1a91bf0f8e7fcd9eeef4368ca8bff338b4"></a>

How many seconds the match lasted.

<br>
#### `public TArray< `[`FRHAPI_TrueskillTeam`](RHAPI_TrueskillTeam.md#structFRHAPI__TrueskillTeam)` > `[`Teams`](#structFRHAPI__RankUpdateRequestV2_1a9f4e13c383bc49ec44fc377085404170) <a id="structFRHAPI__RankUpdateRequestV2_1a9f4e13c383bc49ec44fc377085404170"></a>

List of teams that participated in this match.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__RankUpdateRequestV2_1a5020149358d9579f4eb583bca8b1414e)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RankUpdateRequestV2_1a5020149358d9579f4eb583bca8b1414e"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__RankUpdateRequestV2_1ad235d4cde2797f0b64c5ccdc1b70f527)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__RankUpdateRequestV2_1ad235d4cde2797f0b64c5ccdc1b70f527"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a2b91761d385633e05c71230d3aa0d232)`()` <a id="structFRHAPI__RankUpdateRequestV2_1a2b91761d385633e05c71230d3aa0d232"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a5fefdaeebc736715c30f0a60598d72ba)`() const` <a id="structFRHAPI__RankUpdateRequestV2_1a5fefdaeebc736715c30f0a60598d72ba"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a371c5e0b52b7d6d5b481e9234270f7a2)`(const FString & DefaultValue) const` <a id="structFRHAPI__RankUpdateRequestV2_1a371c5e0b52b7d6d5b481e9234270f7a2"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1ac1507852a0e0bb8f900e158a02108b57)`(FString & OutValue) const` <a id="structFRHAPI__RankUpdateRequestV2_1ac1507852a0e0bb8f900e158a02108b57"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__RankUpdateRequestV2_1af80ede5be2a086fa86da0043e0188556)`()` <a id="structFRHAPI__RankUpdateRequestV2_1af80ede5be2a086fa86da0043e0188556"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__RankUpdateRequestV2_1aafb6ffbb2b2a373879d6f4b31956ed5a)`() const` <a id="structFRHAPI__RankUpdateRequestV2_1aafb6ffbb2b2a373879d6f4b31956ed5a"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInstanceId`](#structFRHAPI__RankUpdateRequestV2_1ac65db021d86f4c0d9257d4f6529dc7ce)`(FString NewValue)` <a id="structFRHAPI__RankUpdateRequestV2_1ac65db021d86f4c0d9257d4f6529dc7ce"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

<br>
#### `public inline void `[`ClearInstanceId`](#structFRHAPI__RankUpdateRequestV2_1a184e19ae6e2689c66bb0ba3d9334325f)`()` <a id="structFRHAPI__RankUpdateRequestV2_1a184e19ae6e2689c66bb0ba3d9334325f"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

<br>
#### `public inline FString & `[`GetRankId`](#structFRHAPI__RankUpdateRequestV2_1a89af089c8dcc81c536459f872b1e7a03)`()` <a id="structFRHAPI__RankUpdateRequestV2_1a89af089c8dcc81c536459f872b1e7a03"></a>

Gets the value of RankId.

<br>
#### `public inline const FString & `[`GetRankId`](#structFRHAPI__RankUpdateRequestV2_1a51b0c67f80ba51b707dd0289ebb8ae79)`() const` <a id="structFRHAPI__RankUpdateRequestV2_1a51b0c67f80ba51b707dd0289ebb8ae79"></a>

Gets the value of RankId.

<br>
#### `public inline void `[`SetRankId`](#structFRHAPI__RankUpdateRequestV2_1abe81e1395b4f43cc9b1bd1d8f0207346)`(FString NewValue)` <a id="structFRHAPI__RankUpdateRequestV2_1abe81e1395b4f43cc9b1bd1d8f0207346"></a>

Sets the value of RankId.

<br>
#### `public inline int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1a2a6d9e062fb0c98a8514354aef01e328)`()` <a id="structFRHAPI__RankUpdateRequestV2_1a2a6d9e062fb0c98a8514354aef01e328"></a>

Gets the value of MatchLengthSeconds.

<br>
#### `public inline const int32 & `[`GetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1a15d186ef47d5eeb79911a2d694ba03c1)`() const` <a id="structFRHAPI__RankUpdateRequestV2_1a15d186ef47d5eeb79911a2d694ba03c1"></a>

Gets the value of MatchLengthSeconds.

<br>
#### `public inline void `[`SetMatchLengthSeconds`](#structFRHAPI__RankUpdateRequestV2_1aefda24506618bfab93b74d2df4fc5104)`(int32 NewValue)` <a id="structFRHAPI__RankUpdateRequestV2_1aefda24506618bfab93b74d2df4fc5104"></a>

Sets the value of MatchLengthSeconds.

<br>
#### `public inline bool `[`IsMatchLengthSecondsDefaultValue`](#structFRHAPI__RankUpdateRequestV2_1af0e25b4e70c4ce62e1111cb7d2d23021)`() const` <a id="structFRHAPI__RankUpdateRequestV2_1af0e25b4e70c4ce62e1111cb7d2d23021"></a>

Returns true if MatchLengthSeconds matches the default value.

<br>
#### `public inline void `[`SetMatchLengthSecondsToDefault`](#structFRHAPI__RankUpdateRequestV2_1a51886b3f82c9ed12a88b4f732997b38c)`()` <a id="structFRHAPI__RankUpdateRequestV2_1a51886b3f82c9ed12a88b4f732997b38c"></a>

Sets the value of MatchLengthSeconds to its default

<br>
#### `public inline TArray< `[`FRHAPI_TrueskillTeam`](RHAPI_TrueskillTeam.md#structFRHAPI__TrueskillTeam)` > & `[`GetTeams`](#structFRHAPI__RankUpdateRequestV2_1af8a65a1c5515e814938c69d87f3f2d94)`()` <a id="structFRHAPI__RankUpdateRequestV2_1af8a65a1c5515e814938c69d87f3f2d94"></a>

Gets the value of Teams.

<br>
#### `public inline const TArray< `[`FRHAPI_TrueskillTeam`](RHAPI_TrueskillTeam.md#structFRHAPI__TrueskillTeam)` > & `[`GetTeams`](#structFRHAPI__RankUpdateRequestV2_1afe98cac88f5a71859b313b7413a60400)`() const` <a id="structFRHAPI__RankUpdateRequestV2_1afe98cac88f5a71859b313b7413a60400"></a>

Gets the value of Teams.

<br>
#### `public inline void `[`SetTeams`](#structFRHAPI__RankUpdateRequestV2_1afaef9a0a05f8c4eebdf446951211b8e6)`(TArray< `[`FRHAPI_TrueskillTeam`](RHAPI_TrueskillTeam.md#structFRHAPI__TrueskillTeam)` > NewValue)` <a id="structFRHAPI__RankUpdateRequestV2_1afaef9a0a05f8c4eebdf446951211b8e6"></a>

Sets the value of Teams.

<br>
