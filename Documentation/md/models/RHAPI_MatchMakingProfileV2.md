# RHAPI_MatchMakingProfileV2 <a id="group__RHAPI__MatchMakingProfileV2"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchMakingProfileV2`](#structFRHAPI__MatchMakingProfileV2) | A profile that describes what pools of players a session will be a part of when matchmaking.

## struct `FRHAPI_MatchMakingProfileV2` <a id="structFRHAPI__MatchMakingProfileV2"></a>

```
struct FRHAPI_MatchMakingProfileV2
  : public FRHAPI_Model
```

A profile that describes what pools of players a session will be a part of when matchmaking.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`ProfileId`](#structFRHAPI__MatchMakingProfileV2_1a798e35962ae78f1e5c162b3ed2ca7f53) | ID of the matchmaking profile to join.
`public ERHAPI_ProfileJoinMode `[`JoinMode_Optional`](#structFRHAPI__MatchMakingProfileV2_1a942eea841d6b9ab8a304ecc1e3486967) | What mode to set on the matchmaking profile (normal, backfill etc)
`public bool `[`JoinMode_IsSet`](#structFRHAPI__MatchMakingProfileV2_1a7d05d638ad7e6bdc38adbee05fc65bb1) | true if JoinMode_Optional has been set to a value
`public FGuid `[`InstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1acc1ae567ca4eae15dd5ba058009eb1bf) | Which instance template to use when launching a match in this profile.
`public FString `[`RankId_Optional`](#structFRHAPI__MatchMakingProfileV2_1afd26627e8543724e350b3961995a4434) | Which rank this profile should use MMR from to make matches from, and update at the end of match (1v1 MMR or 2v2 MMR for example)
`public bool `[`RankId_IsSet`](#structFRHAPI__MatchMakingProfileV2_1a60ec35f19ebed9d47879447dcc660f39) | true if RankId_Optional has been set to a value
`public int32 `[`NumSides_Optional`](#structFRHAPI__MatchMakingProfileV2_1a05d7bde5226bb55b7361fc9d447b2639) | The number of sides a game in this profile will have (2 in a 1v1 and 3 in a 1v1v1 for example.
`public bool `[`NumSides_IsSet`](#structFRHAPI__MatchMakingProfileV2_1a8a5f02725af6685c6fae0145c1e03ef2) | true if NumSides_Optional has been set to a value
`public int32 `[`MaxPlayersPerSide_Optional`](#structFRHAPI__MatchMakingProfileV2_1acfb2f4481ae253fe40c2bb2ce3b7bfbb) | The maximum number of players that can be on each team.
`public bool `[`MaxPlayersPerSide_IsSet`](#structFRHAPI__MatchMakingProfileV2_1acc2a1fd5d9019b960edbf25865c0310d) | true if MaxPlayersPerSide_Optional has been set to a value
`public int32 `[`MinPlayersPerSide_Optional`](#structFRHAPI__MatchMakingProfileV2_1a134fd567423d422235de46bba637faa2) | The minimum number of players that can be on each team.
`public bool `[`MinPlayersPerSide_IsSet`](#structFRHAPI__MatchMakingProfileV2_1a7b9cc3870d306efd0f9c59e62d96e38e) | true if MinPlayersPerSide_Optional has been set to a value
`public TMap< FString, FString > `[`LegacyConfig_Optional`](#structFRHAPI__MatchMakingProfileV2_1a1d2a599e78611acacd4280495e13df58) | Legacy config to help migrate clients.
`public bool `[`LegacyConfig_IsSet`](#structFRHAPI__MatchMakingProfileV2_1af417de3e8a601609b54e0310551c9caa) | true if LegacyConfig_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingProfileV2_1a27b71626be2a2edef0ed660aa42fcaa6)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingProfileV2_1aa6ebcdc58854a72f9cb8c75b9f86834c)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetProfileId`](#structFRHAPI__MatchMakingProfileV2_1a7a1a4fe078a7f2fcf608c99a5065f985)`()` | Gets the value of ProfileId.
`public inline const FString & `[`GetProfileId`](#structFRHAPI__MatchMakingProfileV2_1a7eb518682d7483b18983879d6709cc34)`() const` | Gets the value of ProfileId.
`public inline void `[`SetProfileId`](#structFRHAPI__MatchMakingProfileV2_1a9015edae69e133c5c66943e2e2e0011e)`(FString NewValue)` | Sets the value of ProfileId.
`public inline ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1acca3ed8e4eaac20c40fc1cb590bc1a40)`()` | Gets the value of JoinMode_Optional, regardless of it having been set.
`public inline const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1af93faf8294555ca09913a242027c0e10)`() const` | Gets the value of JoinMode_Optional, regardless of it having been set.
`public inline const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1a470e7b74c7d01ff76ddbe193aae39050)`(const ERHAPI_ProfileJoinMode & DefaultValue) const` | Gets the value of JoinMode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1a698163252c3bc913772d2c6f7c046225)`(ERHAPI_ProfileJoinMode & OutValue) const` | Fills OutValue with the value of JoinMode_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfileV2_1a951f51f8957ac2b177fb73d471ade8a9)`()` | Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfileV2_1a473dbf0d119cd9c3a167816772d63ddc)`() const` | Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1af09ae2e4a0a93c57ef3441b3e0016897)`(ERHAPI_ProfileJoinMode NewValue)` | Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true.
`public inline void `[`ClearJoinMode`](#structFRHAPI__MatchMakingProfileV2_1aab63f74fb4ae0fb21419a3cecdacb647)`()` | Clears the value of JoinMode_Optional and sets JoinMode_IsSet to false.
`public inline FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a8bd2d9571b74ae730f49da3265cd52d9)`()` | Gets the value of InstanceRequestTemplateId.
`public inline const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a9b376d843d7b97b2540be8f226e7c3ea)`() const` | Gets the value of InstanceRequestTemplateId.
`public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a983cd05dcafc65def71e70fa9a646598)`(FGuid NewValue)` | Sets the value of InstanceRequestTemplateId.
`public inline FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfileV2_1a072dcd90d711229eadc0a0b765233cac)`()` | Gets the value of RankId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfileV2_1a44e1a5ddc56d3d7d957aef529a008983)`() const` | Gets the value of RankId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfileV2_1a872d95940df64fe58cd9674fedd33126)`(const FString & DefaultValue) const` | Gets the value of RankId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRankId`](#structFRHAPI__MatchMakingProfileV2_1afc8b52a3625120cb5893535059288df1)`(FString & OutValue) const` | Fills OutValue with the value of RankId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRankIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1ad27d1e25492cd7c62834360f42897f42)`()` | Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRankIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1a2d2c3762f37155df05423c4ac7fb4a0e)`() const` | Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRankId`](#structFRHAPI__MatchMakingProfileV2_1ac8cd53f1c162284f8d88db8c56c05140)`(FString NewValue)` | Sets the value of RankId_Optional and also sets RankId_IsSet to true.
`public inline void `[`ClearRankId`](#structFRHAPI__MatchMakingProfileV2_1a897e53f524139e9885b59fe28ca26b6f)`()` | Clears the value of RankId_Optional and sets RankId_IsSet to false.
`public inline int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfileV2_1aa563f13e67e9b818e62f8a087a5bcb40)`()` | Gets the value of NumSides_Optional, regardless of it having been set.
`public inline const int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfileV2_1a110ef77dbe42d217beb59c97bc2b46cb)`() const` | Gets the value of NumSides_Optional, regardless of it having been set.
`public inline const int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfileV2_1aea61c2b21146e917855542f8af93d31b)`(const int32 & DefaultValue) const` | Gets the value of NumSides_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNumSides`](#structFRHAPI__MatchMakingProfileV2_1af343eff64a902f25d50fbf423b4f81f0)`(int32 & OutValue) const` | Fills OutValue with the value of NumSides_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetNumSidesOrNull`](#structFRHAPI__MatchMakingProfileV2_1acdf478cadb8c7e198b34958a5a7ceeb6)`()` | Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetNumSidesOrNull`](#structFRHAPI__MatchMakingProfileV2_1a0b6f4509991348462aacee8c9b3ac0dd)`() const` | Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNumSides`](#structFRHAPI__MatchMakingProfileV2_1a273701f77d1cedaa6550c048dd0ff244)`(int32 NewValue)` | Sets the value of NumSides_Optional and also sets NumSides_IsSet to true.
`public inline void `[`ClearNumSides`](#structFRHAPI__MatchMakingProfileV2_1a4b5d018076f15a9cf92d33bb7422ffb3)`()` | Clears the value of NumSides_Optional and sets NumSides_IsSet to false.
`public inline bool `[`IsNumSidesDefaultValue`](#structFRHAPI__MatchMakingProfileV2_1a66b7c48d8cc8248a686ddd756ab4bb78)`() const` | Returns true if NumSides_Optional is set and matches the default value.
`public inline void `[`SetNumSidesToDefault`](#structFRHAPI__MatchMakingProfileV2_1a24a38c894c073d4219d42a06390d84bd)`()` | Sets the value of NumSides_Optional to its default and also sets NumSides_IsSet to true.
`public inline int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a79018b4bac31b293445a4b79ebd75b6c)`()` | Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1ab36e8292e53555d824c4c8257c15dbd4)`() const` | Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1ac6ac3675bc9034d2d1dda6ad5e2aba83)`(const int32 & DefaultValue) const` | Gets the value of MaxPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a31cda4199401eb0c57419e45a7c3810a)`(int32 & OutValue) const` | Fills OutValue with the value of MaxPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetMaxPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfileV2_1adafaa70e4226ea96b269d0a207359827)`()` | Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetMaxPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfileV2_1ada03ad1166940ce885192b921399afd5)`() const` | Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a2277e9935a6a4cf8b78ad8552051e9c3)`(int32 NewValue)` | Sets the value of MaxPlayersPerSide_Optional and also sets MaxPlayersPerSide_IsSet to true.
`public inline void `[`ClearMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a8deb6676caa04797a00ad24169150878)`()` | Clears the value of MaxPlayersPerSide_Optional and sets MaxPlayersPerSide_IsSet to false.
`public inline bool `[`IsMaxPlayersPerSideDefaultValue`](#structFRHAPI__MatchMakingProfileV2_1a834129c1dc734d80921a47a67ed13dbf)`() const` | Returns true if MaxPlayersPerSide_Optional is set and matches the default value.
`public inline void `[`SetMaxPlayersPerSideToDefault`](#structFRHAPI__MatchMakingProfileV2_1a3641c66672a47129b61a22e239a89df2)`()` | Sets the value of MaxPlayersPerSide_Optional to its default and also sets MaxPlayersPerSide_IsSet to true.
`public inline int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a2d6ef0ba56a361bb3eccd2efa26952d1)`()` | Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1ae75b32465d0a5aad7a55b11f86fd8739)`() const` | Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a7edb0b620ad22d752940c60028330862)`(const int32 & DefaultValue) const` | Gets the value of MinPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a8eecd9c9114cc4ef9a43fbf94dfee801)`(int32 & OutValue) const` | Fills OutValue with the value of MinPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetMinPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfileV2_1a5f657d787b0409f585eef7efd77a4efd)`()` | Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetMinPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfileV2_1afc889300c68d018be0408236c110d827)`() const` | Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a2d3046489c766d465fa104e5b8a1677a)`(int32 NewValue)` | Sets the value of MinPlayersPerSide_Optional and also sets MinPlayersPerSide_IsSet to true.
`public inline void `[`ClearMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a718d5fad0a7afd7c7d123ecf3f6561a0)`()` | Clears the value of MinPlayersPerSide_Optional and sets MinPlayersPerSide_IsSet to false.
`public inline bool `[`IsMinPlayersPerSideDefaultValue`](#structFRHAPI__MatchMakingProfileV2_1a815a3c8c494a1d04e3403918d4498f49)`() const` | Returns true if MinPlayersPerSide_Optional is set and matches the default value.
`public inline void `[`SetMinPlayersPerSideToDefault`](#structFRHAPI__MatchMakingProfileV2_1a620b2a35235eed724c9f14d8df2ab3bc)`()` | Sets the value of MinPlayersPerSide_Optional to its default and also sets MinPlayersPerSide_IsSet to true.
`public inline TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1a7ecacb51155552c7fe73b183dfb1c60e)`()` | Gets the value of LegacyConfig_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1a48cfbd4a6f88d045132a4155258b1a68)`() const` | Gets the value of LegacyConfig_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1ab65df854eb4b2a7a86be4a950437401e)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1a49fc5be4c8ab7fa8b82109553d5b7206)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__MatchMakingProfileV2_1a2306e6a04c58b8208bff7b1e285f94dd)`()` | Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__MatchMakingProfileV2_1a03d6fe552427c538e63f91ad550018e7)`() const` | Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1a0f83af28aaa96c49ef96e674bfd7c21c)`(TMap< FString, FString > NewValue)` | Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true.
`public inline void `[`ClearLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1aa51a7cf8d677bd0f57eed39122d5d6af)`()` | Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false.

#### Members

#### `public FString `[`ProfileId`](#structFRHAPI__MatchMakingProfileV2_1a798e35962ae78f1e5c162b3ed2ca7f53) <a id="structFRHAPI__MatchMakingProfileV2_1a798e35962ae78f1e5c162b3ed2ca7f53"></a>

ID of the matchmaking profile to join.

<br>
#### `public ERHAPI_ProfileJoinMode `[`JoinMode_Optional`](#structFRHAPI__MatchMakingProfileV2_1a942eea841d6b9ab8a304ecc1e3486967) <a id="structFRHAPI__MatchMakingProfileV2_1a942eea841d6b9ab8a304ecc1e3486967"></a>

What mode to set on the matchmaking profile (normal, backfill etc)

<br>
#### `public bool `[`JoinMode_IsSet`](#structFRHAPI__MatchMakingProfileV2_1a7d05d638ad7e6bdc38adbee05fc65bb1) <a id="structFRHAPI__MatchMakingProfileV2_1a7d05d638ad7e6bdc38adbee05fc65bb1"></a>

true if JoinMode_Optional has been set to a value

<br>
#### `public FGuid `[`InstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1acc1ae567ca4eae15dd5ba058009eb1bf) <a id="structFRHAPI__MatchMakingProfileV2_1acc1ae567ca4eae15dd5ba058009eb1bf"></a>

Which instance template to use when launching a match in this profile.

<br>
#### `public FString `[`RankId_Optional`](#structFRHAPI__MatchMakingProfileV2_1afd26627e8543724e350b3961995a4434) <a id="structFRHAPI__MatchMakingProfileV2_1afd26627e8543724e350b3961995a4434"></a>

Which rank this profile should use MMR from to make matches from, and update at the end of match (1v1 MMR or 2v2 MMR for example)

<br>
#### `public bool `[`RankId_IsSet`](#structFRHAPI__MatchMakingProfileV2_1a60ec35f19ebed9d47879447dcc660f39) <a id="structFRHAPI__MatchMakingProfileV2_1a60ec35f19ebed9d47879447dcc660f39"></a>

true if RankId_Optional has been set to a value

<br>
#### `public int32 `[`NumSides_Optional`](#structFRHAPI__MatchMakingProfileV2_1a05d7bde5226bb55b7361fc9d447b2639) <a id="structFRHAPI__MatchMakingProfileV2_1a05d7bde5226bb55b7361fc9d447b2639"></a>

The number of sides a game in this profile will have (2 in a 1v1 and 3 in a 1v1v1 for example.

<br>
#### `public bool `[`NumSides_IsSet`](#structFRHAPI__MatchMakingProfileV2_1a8a5f02725af6685c6fae0145c1e03ef2) <a id="structFRHAPI__MatchMakingProfileV2_1a8a5f02725af6685c6fae0145c1e03ef2"></a>

true if NumSides_Optional has been set to a value

<br>
#### `public int32 `[`MaxPlayersPerSide_Optional`](#structFRHAPI__MatchMakingProfileV2_1acfb2f4481ae253fe40c2bb2ce3b7bfbb) <a id="structFRHAPI__MatchMakingProfileV2_1acfb2f4481ae253fe40c2bb2ce3b7bfbb"></a>

The maximum number of players that can be on each team.

<br>
#### `public bool `[`MaxPlayersPerSide_IsSet`](#structFRHAPI__MatchMakingProfileV2_1acc2a1fd5d9019b960edbf25865c0310d) <a id="structFRHAPI__MatchMakingProfileV2_1acc2a1fd5d9019b960edbf25865c0310d"></a>

true if MaxPlayersPerSide_Optional has been set to a value

<br>
#### `public int32 `[`MinPlayersPerSide_Optional`](#structFRHAPI__MatchMakingProfileV2_1a134fd567423d422235de46bba637faa2) <a id="structFRHAPI__MatchMakingProfileV2_1a134fd567423d422235de46bba637faa2"></a>

The minimum number of players that can be on each team.

<br>
#### `public bool `[`MinPlayersPerSide_IsSet`](#structFRHAPI__MatchMakingProfileV2_1a7b9cc3870d306efd0f9c59e62d96e38e) <a id="structFRHAPI__MatchMakingProfileV2_1a7b9cc3870d306efd0f9c59e62d96e38e"></a>

true if MinPlayersPerSide_Optional has been set to a value

<br>
#### `public TMap< FString, FString > `[`LegacyConfig_Optional`](#structFRHAPI__MatchMakingProfileV2_1a1d2a599e78611acacd4280495e13df58) <a id="structFRHAPI__MatchMakingProfileV2_1a1d2a599e78611acacd4280495e13df58"></a>

Legacy config to help migrate clients.

<br>
#### `public bool `[`LegacyConfig_IsSet`](#structFRHAPI__MatchMakingProfileV2_1af417de3e8a601609b54e0310551c9caa) <a id="structFRHAPI__MatchMakingProfileV2_1af417de3e8a601609b54e0310551c9caa"></a>

true if LegacyConfig_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingProfileV2_1a27b71626be2a2edef0ed660aa42fcaa6)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a27b71626be2a2edef0ed660aa42fcaa6"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingProfileV2_1aa6ebcdc58854a72f9cb8c75b9f86834c)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchMakingProfileV2_1aa6ebcdc58854a72f9cb8c75b9f86834c"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetProfileId`](#structFRHAPI__MatchMakingProfileV2_1a7a1a4fe078a7f2fcf608c99a5065f985)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a7a1a4fe078a7f2fcf608c99a5065f985"></a>

Gets the value of ProfileId.

<br>
#### `public inline const FString & `[`GetProfileId`](#structFRHAPI__MatchMakingProfileV2_1a7eb518682d7483b18983879d6709cc34)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a7eb518682d7483b18983879d6709cc34"></a>

Gets the value of ProfileId.

<br>
#### `public inline void `[`SetProfileId`](#structFRHAPI__MatchMakingProfileV2_1a9015edae69e133c5c66943e2e2e0011e)`(FString NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a9015edae69e133c5c66943e2e2e0011e"></a>

Sets the value of ProfileId.

<br>
#### `public inline ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1acca3ed8e4eaac20c40fc1cb590bc1a40)`()` <a id="structFRHAPI__MatchMakingProfileV2_1acca3ed8e4eaac20c40fc1cb590bc1a40"></a>

Gets the value of JoinMode_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1af93faf8294555ca09913a242027c0e10)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1af93faf8294555ca09913a242027c0e10"></a>

Gets the value of JoinMode_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1a470e7b74c7d01ff76ddbe193aae39050)`(const ERHAPI_ProfileJoinMode & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a470e7b74c7d01ff76ddbe193aae39050"></a>

Gets the value of JoinMode_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1a698163252c3bc913772d2c6f7c046225)`(ERHAPI_ProfileJoinMode & OutValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a698163252c3bc913772d2c6f7c046225"></a>

Fills OutValue with the value of JoinMode_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfileV2_1a951f51f8957ac2b177fb73d471ade8a9)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a951f51f8957ac2b177fb73d471ade8a9"></a>

Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfileV2_1a473dbf0d119cd9c3a167816772d63ddc)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a473dbf0d119cd9c3a167816772d63ddc"></a>

Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1af09ae2e4a0a93c57ef3441b3e0016897)`(ERHAPI_ProfileJoinMode NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1af09ae2e4a0a93c57ef3441b3e0016897"></a>

Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true.

<br>
#### `public inline void `[`ClearJoinMode`](#structFRHAPI__MatchMakingProfileV2_1aab63f74fb4ae0fb21419a3cecdacb647)`()` <a id="structFRHAPI__MatchMakingProfileV2_1aab63f74fb4ae0fb21419a3cecdacb647"></a>

Clears the value of JoinMode_Optional and sets JoinMode_IsSet to false.

<br>
#### `public inline FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a8bd2d9571b74ae730f49da3265cd52d9)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a8bd2d9571b74ae730f49da3265cd52d9"></a>

Gets the value of InstanceRequestTemplateId.

<br>
#### `public inline const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a9b376d843d7b97b2540be8f226e7c3ea)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a9b376d843d7b97b2540be8f226e7c3ea"></a>

Gets the value of InstanceRequestTemplateId.

<br>
#### `public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a983cd05dcafc65def71e70fa9a646598)`(FGuid NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a983cd05dcafc65def71e70fa9a646598"></a>

Sets the value of InstanceRequestTemplateId.

<br>
#### `public inline FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfileV2_1a072dcd90d711229eadc0a0b765233cac)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a072dcd90d711229eadc0a0b765233cac"></a>

Gets the value of RankId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfileV2_1a44e1a5ddc56d3d7d957aef529a008983)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a44e1a5ddc56d3d7d957aef529a008983"></a>

Gets the value of RankId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfileV2_1a872d95940df64fe58cd9674fedd33126)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a872d95940df64fe58cd9674fedd33126"></a>

Gets the value of RankId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetRankId`](#structFRHAPI__MatchMakingProfileV2_1afc8b52a3625120cb5893535059288df1)`(FString & OutValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1afc8b52a3625120cb5893535059288df1"></a>

Fills OutValue with the value of RankId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetRankIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1ad27d1e25492cd7c62834360f42897f42)`()` <a id="structFRHAPI__MatchMakingProfileV2_1ad27d1e25492cd7c62834360f42897f42"></a>

Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetRankIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1a2d2c3762f37155df05423c4ac7fb4a0e)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a2d2c3762f37155df05423c4ac7fb4a0e"></a>

Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetRankId`](#structFRHAPI__MatchMakingProfileV2_1ac8cd53f1c162284f8d88db8c56c05140)`(FString NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1ac8cd53f1c162284f8d88db8c56c05140"></a>

Sets the value of RankId_Optional and also sets RankId_IsSet to true.

<br>
#### `public inline void `[`ClearRankId`](#structFRHAPI__MatchMakingProfileV2_1a897e53f524139e9885b59fe28ca26b6f)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a897e53f524139e9885b59fe28ca26b6f"></a>

Clears the value of RankId_Optional and sets RankId_IsSet to false.

<br>
#### `public inline int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfileV2_1aa563f13e67e9b818e62f8a087a5bcb40)`()` <a id="structFRHAPI__MatchMakingProfileV2_1aa563f13e67e9b818e62f8a087a5bcb40"></a>

Gets the value of NumSides_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfileV2_1a110ef77dbe42d217beb59c97bc2b46cb)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a110ef77dbe42d217beb59c97bc2b46cb"></a>

Gets the value of NumSides_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfileV2_1aea61c2b21146e917855542f8af93d31b)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1aea61c2b21146e917855542f8af93d31b"></a>

Gets the value of NumSides_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetNumSides`](#structFRHAPI__MatchMakingProfileV2_1af343eff64a902f25d50fbf423b4f81f0)`(int32 & OutValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1af343eff64a902f25d50fbf423b4f81f0"></a>

Fills OutValue with the value of NumSides_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetNumSidesOrNull`](#structFRHAPI__MatchMakingProfileV2_1acdf478cadb8c7e198b34958a5a7ceeb6)`()` <a id="structFRHAPI__MatchMakingProfileV2_1acdf478cadb8c7e198b34958a5a7ceeb6"></a>

Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetNumSidesOrNull`](#structFRHAPI__MatchMakingProfileV2_1a0b6f4509991348462aacee8c9b3ac0dd)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a0b6f4509991348462aacee8c9b3ac0dd"></a>

Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetNumSides`](#structFRHAPI__MatchMakingProfileV2_1a273701f77d1cedaa6550c048dd0ff244)`(int32 NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a273701f77d1cedaa6550c048dd0ff244"></a>

Sets the value of NumSides_Optional and also sets NumSides_IsSet to true.

<br>
#### `public inline void `[`ClearNumSides`](#structFRHAPI__MatchMakingProfileV2_1a4b5d018076f15a9cf92d33bb7422ffb3)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a4b5d018076f15a9cf92d33bb7422ffb3"></a>

Clears the value of NumSides_Optional and sets NumSides_IsSet to false.

<br>
#### `public inline bool `[`IsNumSidesDefaultValue`](#structFRHAPI__MatchMakingProfileV2_1a66b7c48d8cc8248a686ddd756ab4bb78)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a66b7c48d8cc8248a686ddd756ab4bb78"></a>

Returns true if NumSides_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetNumSidesToDefault`](#structFRHAPI__MatchMakingProfileV2_1a24a38c894c073d4219d42a06390d84bd)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a24a38c894c073d4219d42a06390d84bd"></a>

Sets the value of NumSides_Optional to its default and also sets NumSides_IsSet to true.

<br>
#### `public inline int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a79018b4bac31b293445a4b79ebd75b6c)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a79018b4bac31b293445a4b79ebd75b6c"></a>

Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1ab36e8292e53555d824c4c8257c15dbd4)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1ab36e8292e53555d824c4c8257c15dbd4"></a>

Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1ac6ac3675bc9034d2d1dda6ad5e2aba83)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1ac6ac3675bc9034d2d1dda6ad5e2aba83"></a>

Gets the value of MaxPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a31cda4199401eb0c57419e45a7c3810a)`(int32 & OutValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a31cda4199401eb0c57419e45a7c3810a"></a>

Fills OutValue with the value of MaxPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetMaxPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfileV2_1adafaa70e4226ea96b269d0a207359827)`()` <a id="structFRHAPI__MatchMakingProfileV2_1adafaa70e4226ea96b269d0a207359827"></a>

Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetMaxPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfileV2_1ada03ad1166940ce885192b921399afd5)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1ada03ad1166940ce885192b921399afd5"></a>

Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a2277e9935a6a4cf8b78ad8552051e9c3)`(int32 NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a2277e9935a6a4cf8b78ad8552051e9c3"></a>

Sets the value of MaxPlayersPerSide_Optional and also sets MaxPlayersPerSide_IsSet to true.

<br>
#### `public inline void `[`ClearMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a8deb6676caa04797a00ad24169150878)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a8deb6676caa04797a00ad24169150878"></a>

Clears the value of MaxPlayersPerSide_Optional and sets MaxPlayersPerSide_IsSet to false.

<br>
#### `public inline bool `[`IsMaxPlayersPerSideDefaultValue`](#structFRHAPI__MatchMakingProfileV2_1a834129c1dc734d80921a47a67ed13dbf)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a834129c1dc734d80921a47a67ed13dbf"></a>

Returns true if MaxPlayersPerSide_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetMaxPlayersPerSideToDefault`](#structFRHAPI__MatchMakingProfileV2_1a3641c66672a47129b61a22e239a89df2)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a3641c66672a47129b61a22e239a89df2"></a>

Sets the value of MaxPlayersPerSide_Optional to its default and also sets MaxPlayersPerSide_IsSet to true.

<br>
#### `public inline int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a2d6ef0ba56a361bb3eccd2efa26952d1)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a2d6ef0ba56a361bb3eccd2efa26952d1"></a>

Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1ae75b32465d0a5aad7a55b11f86fd8739)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1ae75b32465d0a5aad7a55b11f86fd8739"></a>

Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a7edb0b620ad22d752940c60028330862)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a7edb0b620ad22d752940c60028330862"></a>

Gets the value of MinPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a8eecd9c9114cc4ef9a43fbf94dfee801)`(int32 & OutValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a8eecd9c9114cc4ef9a43fbf94dfee801"></a>

Fills OutValue with the value of MinPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetMinPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfileV2_1a5f657d787b0409f585eef7efd77a4efd)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a5f657d787b0409f585eef7efd77a4efd"></a>

Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetMinPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfileV2_1afc889300c68d018be0408236c110d827)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1afc889300c68d018be0408236c110d827"></a>

Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a2d3046489c766d465fa104e5b8a1677a)`(int32 NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a2d3046489c766d465fa104e5b8a1677a"></a>

Sets the value of MinPlayersPerSide_Optional and also sets MinPlayersPerSide_IsSet to true.

<br>
#### `public inline void `[`ClearMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a718d5fad0a7afd7c7d123ecf3f6561a0)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a718d5fad0a7afd7c7d123ecf3f6561a0"></a>

Clears the value of MinPlayersPerSide_Optional and sets MinPlayersPerSide_IsSet to false.

<br>
#### `public inline bool `[`IsMinPlayersPerSideDefaultValue`](#structFRHAPI__MatchMakingProfileV2_1a815a3c8c494a1d04e3403918d4498f49)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a815a3c8c494a1d04e3403918d4498f49"></a>

Returns true if MinPlayersPerSide_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetMinPlayersPerSideToDefault`](#structFRHAPI__MatchMakingProfileV2_1a620b2a35235eed724c9f14d8df2ab3bc)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a620b2a35235eed724c9f14d8df2ab3bc"></a>

Sets the value of MinPlayersPerSide_Optional to its default and also sets MinPlayersPerSide_IsSet to true.

<br>
#### `public inline TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1a7ecacb51155552c7fe73b183dfb1c60e)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a7ecacb51155552c7fe73b183dfb1c60e"></a>

Gets the value of LegacyConfig_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1a48cfbd4a6f88d045132a4155258b1a68)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a48cfbd4a6f88d045132a4155258b1a68"></a>

Gets the value of LegacyConfig_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1ab65df854eb4b2a7a86be4a950437401e)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1ab65df854eb4b2a7a86be4a950437401e"></a>

Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1a49fc5be4c8ab7fa8b82109553d5b7206)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a49fc5be4c8ab7fa8b82109553d5b7206"></a>

Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__MatchMakingProfileV2_1a2306e6a04c58b8208bff7b1e285f94dd)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a2306e6a04c58b8208bff7b1e285f94dd"></a>

Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__MatchMakingProfileV2_1a03d6fe552427c538e63f91ad550018e7)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a03d6fe552427c538e63f91ad550018e7"></a>

Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1a0f83af28aaa96c49ef96e674bfd7c21c)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a0f83af28aaa96c49ef96e674bfd7c21c"></a>

Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true.

<br>
#### `public inline void `[`ClearLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1aa51a7cf8d677bd0f57eed39122d5d6af)`()` <a id="structFRHAPI__MatchMakingProfileV2_1aa51a7cf8d677bd0f57eed39122d5d6af"></a>

Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false.

<br>
