# group `RHAPI_MatchMakingProfileV2` <a id="group__RHAPI__MatchMakingProfileV2"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchMakingProfileV2`](#structFRHAPI__MatchMakingProfileV2) | A profile that describes what pools of players a session will be a part of when matchmaking.

---
title: FRHAPI_MatchMakingProfileV2
---

```
struct FRHAPI_MatchMakingProfileV2
  : public FRHAPI_Model
```

A profile that describes what pools of players a session will be a part of when matchmaking.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`MatchMakingProfileId`](#structFRHAPI__MatchMakingProfileV2_1a1fac1d90d7052f77ed54c7ef0158d767) | ID of the matchmaking profile to join.
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
`public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`LegacyConfig_Optional`](#structFRHAPI__MatchMakingProfileV2_1af6d5bc75fe36551e65c7d61585ac2e65) | Legacy config to help migrate clients.
`public bool `[`LegacyConfig_IsSet`](#structFRHAPI__MatchMakingProfileV2_1af417de3e8a601609b54e0310551c9caa) | true if LegacyConfig_Optional has been set to a value
`public FString `[`DeserterId_Optional`](#structFRHAPI__MatchMakingProfileV2_1aae0011ecf8b0087fc25843b2c81c9d15) | Which deserter this profile should check before allowing players to join matchmaking.
`public bool `[`DeserterId_IsSet`](#structFRHAPI__MatchMakingProfileV2_1a549f6b87b796d3920408a3e5b103d440) | true if DeserterId_Optional has been set to a value
`public FGuid `[`SessionTemplateId_Optional`](#structFRHAPI__MatchMakingProfileV2_1a5357bb9dad6eedd14a04648d518bbcbe) | What type of session should result from matchmaking on this profile.
`public bool `[`SessionTemplateId_IsSet`](#structFRHAPI__MatchMakingProfileV2_1a671a2d069be65d525493b353b34c3b4c) | true if SessionTemplateId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingProfileV2_1aa73d4e9aa317675d9c1bfc43d25680ef)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingProfileV2_1a5dd02d8364e2d98ea1b80f2d18acd532)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetMatchMakingProfileId`](#structFRHAPI__MatchMakingProfileV2_1a4ae3b82d9d3c2bb53a131330dfe71e59)`()` | Gets the value of MatchMakingProfileId.
`public inline const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__MatchMakingProfileV2_1a2546a8d06702b1dd5a24f4d001f98688)`() const` | Gets the value of MatchMakingProfileId.
`public inline void `[`SetMatchMakingProfileId`](#structFRHAPI__MatchMakingProfileV2_1ac12fa1dff20955c44762e4c5ecf3644d)`(const FString & NewValue)` | Sets the value of MatchMakingProfileId.
`public inline void `[`SetMatchMakingProfileId`](#structFRHAPI__MatchMakingProfileV2_1aa223a50f6f5b2e8c50e47104740464e4)`(FString && NewValue)` | Sets the value of MatchMakingProfileId using move semantics.
`public inline ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1acca3ed8e4eaac20c40fc1cb590bc1a40)`()` | Gets the value of JoinMode_Optional, regardless of it having been set.
`public inline const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1af93faf8294555ca09913a242027c0e10)`() const` | Gets the value of JoinMode_Optional, regardless of it having been set.
`public inline const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1a470e7b74c7d01ff76ddbe193aae39050)`(const ERHAPI_ProfileJoinMode & DefaultValue) const` | Gets the value of JoinMode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1a698163252c3bc913772d2c6f7c046225)`(ERHAPI_ProfileJoinMode & OutValue) const` | Fills OutValue with the value of JoinMode_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfileV2_1a951f51f8957ac2b177fb73d471ade8a9)`()` | Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfileV2_1a473dbf0d119cd9c3a167816772d63ddc)`() const` | Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1ae419e9c8d1c3d6ba2092596618447518)`(const ERHAPI_ProfileJoinMode & NewValue)` | Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true.
`public inline void `[`SetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1a6e541aa635e3442b93c226fbdbd7e02f)`(ERHAPI_ProfileJoinMode && NewValue)` | Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true using move semantics.
`public inline void `[`ClearJoinMode`](#structFRHAPI__MatchMakingProfileV2_1aab63f74fb4ae0fb21419a3cecdacb647)`()` | Clears the value of JoinMode_Optional and sets JoinMode_IsSet to false.
`public inline bool `[`IsJoinModeSet`](#structFRHAPI__MatchMakingProfileV2_1acd4af257d70798efcaae31e992a07295)`() const` | Checks whether JoinMode_Optional has been set.
`public inline FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a8bd2d9571b74ae730f49da3265cd52d9)`()` | Gets the value of InstanceRequestTemplateId.
`public inline const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a9b376d843d7b97b2540be8f226e7c3ea)`() const` | Gets the value of InstanceRequestTemplateId.
`public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1ae5c65b0dc895cdcdf081ebcb23d6822a)`(const FGuid & NewValue)` | Sets the value of InstanceRequestTemplateId.
`public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a81bcba79254b0d4e94c95606031cbd23)`(FGuid && NewValue)` | Sets the value of InstanceRequestTemplateId using move semantics.
`public inline FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfileV2_1a072dcd90d711229eadc0a0b765233cac)`()` | Gets the value of RankId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfileV2_1a44e1a5ddc56d3d7d957aef529a008983)`() const` | Gets the value of RankId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfileV2_1a872d95940df64fe58cd9674fedd33126)`(const FString & DefaultValue) const` | Gets the value of RankId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRankId`](#structFRHAPI__MatchMakingProfileV2_1afc8b52a3625120cb5893535059288df1)`(FString & OutValue) const` | Fills OutValue with the value of RankId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRankIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1ad27d1e25492cd7c62834360f42897f42)`()` | Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRankIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1a2d2c3762f37155df05423c4ac7fb4a0e)`() const` | Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRankId`](#structFRHAPI__MatchMakingProfileV2_1ae987b1b7e9b4ff7cf014c34ea4c1bd9f)`(const FString & NewValue)` | Sets the value of RankId_Optional and also sets RankId_IsSet to true.
`public inline void `[`SetRankId`](#structFRHAPI__MatchMakingProfileV2_1a6354146a6e6fc04019044dcc47ad4ec4)`(FString && NewValue)` | Sets the value of RankId_Optional and also sets RankId_IsSet to true using move semantics.
`public inline void `[`ClearRankId`](#structFRHAPI__MatchMakingProfileV2_1a897e53f524139e9885b59fe28ca26b6f)`()` | Clears the value of RankId_Optional and sets RankId_IsSet to false.
`public inline bool `[`IsRankIdSet`](#structFRHAPI__MatchMakingProfileV2_1aa6a902eb46059f30a5a209bb898523b4)`() const` | Checks whether RankId_Optional has been set.
`public inline int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfileV2_1aa563f13e67e9b818e62f8a087a5bcb40)`()` | Gets the value of NumSides_Optional, regardless of it having been set.
`public inline const int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfileV2_1a110ef77dbe42d217beb59c97bc2b46cb)`() const` | Gets the value of NumSides_Optional, regardless of it having been set.
`public inline const int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfileV2_1aea61c2b21146e917855542f8af93d31b)`(const int32 & DefaultValue) const` | Gets the value of NumSides_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNumSides`](#structFRHAPI__MatchMakingProfileV2_1af343eff64a902f25d50fbf423b4f81f0)`(int32 & OutValue) const` | Fills OutValue with the value of NumSides_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetNumSidesOrNull`](#structFRHAPI__MatchMakingProfileV2_1acdf478cadb8c7e198b34958a5a7ceeb6)`()` | Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetNumSidesOrNull`](#structFRHAPI__MatchMakingProfileV2_1a0b6f4509991348462aacee8c9b3ac0dd)`() const` | Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNumSides`](#structFRHAPI__MatchMakingProfileV2_1ae37798f0eb286a17efe2eef35fb32cb4)`(const int32 & NewValue)` | Sets the value of NumSides_Optional and also sets NumSides_IsSet to true.
`public inline void `[`SetNumSides`](#structFRHAPI__MatchMakingProfileV2_1a6062458d23aea2798770679f4c0f5454)`(int32 && NewValue)` | Sets the value of NumSides_Optional and also sets NumSides_IsSet to true using move semantics.
`public inline void `[`ClearNumSides`](#structFRHAPI__MatchMakingProfileV2_1a4b5d018076f15a9cf92d33bb7422ffb3)`()` | Clears the value of NumSides_Optional and sets NumSides_IsSet to false.
`public inline bool `[`IsNumSidesSet`](#structFRHAPI__MatchMakingProfileV2_1aa8e4297630705a2eae6e9bc181f8f5fe)`() const` | Checks whether NumSides_Optional has been set.
`public inline bool `[`IsNumSidesDefaultValue`](#structFRHAPI__MatchMakingProfileV2_1a66b7c48d8cc8248a686ddd756ab4bb78)`() const` | Returns true if NumSides_Optional is set and matches the default value.
`public inline void `[`SetNumSidesToDefault`](#structFRHAPI__MatchMakingProfileV2_1a24a38c894c073d4219d42a06390d84bd)`()` | Sets the value of NumSides_Optional to its default and also sets NumSides_IsSet to true.
`public inline int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a79018b4bac31b293445a4b79ebd75b6c)`()` | Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1ab36e8292e53555d824c4c8257c15dbd4)`() const` | Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1ac6ac3675bc9034d2d1dda6ad5e2aba83)`(const int32 & DefaultValue) const` | Gets the value of MaxPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a31cda4199401eb0c57419e45a7c3810a)`(int32 & OutValue) const` | Fills OutValue with the value of MaxPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetMaxPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfileV2_1adafaa70e4226ea96b269d0a207359827)`()` | Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetMaxPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfileV2_1ada03ad1166940ce885192b921399afd5)`() const` | Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a25833bb2c6389754f86a79992075dd87)`(const int32 & NewValue)` | Sets the value of MaxPlayersPerSide_Optional and also sets MaxPlayersPerSide_IsSet to true.
`public inline void `[`SetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a6d6ec5802ed1461ed2d1e81185df311b)`(int32 && NewValue)` | Sets the value of MaxPlayersPerSide_Optional and also sets MaxPlayersPerSide_IsSet to true using move semantics.
`public inline void `[`ClearMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a8deb6676caa04797a00ad24169150878)`()` | Clears the value of MaxPlayersPerSide_Optional and sets MaxPlayersPerSide_IsSet to false.
`public inline bool `[`IsMaxPlayersPerSideSet`](#structFRHAPI__MatchMakingProfileV2_1a40301ca1f8bf8b7b057b0141fcc8a20a)`() const` | Checks whether MaxPlayersPerSide_Optional has been set.
`public inline bool `[`IsMaxPlayersPerSideDefaultValue`](#structFRHAPI__MatchMakingProfileV2_1a834129c1dc734d80921a47a67ed13dbf)`() const` | Returns true if MaxPlayersPerSide_Optional is set and matches the default value.
`public inline void `[`SetMaxPlayersPerSideToDefault`](#structFRHAPI__MatchMakingProfileV2_1a3641c66672a47129b61a22e239a89df2)`()` | Sets the value of MaxPlayersPerSide_Optional to its default and also sets MaxPlayersPerSide_IsSet to true.
`public inline int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a2d6ef0ba56a361bb3eccd2efa26952d1)`()` | Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1ae75b32465d0a5aad7a55b11f86fd8739)`() const` | Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a7edb0b620ad22d752940c60028330862)`(const int32 & DefaultValue) const` | Gets the value of MinPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a8eecd9c9114cc4ef9a43fbf94dfee801)`(int32 & OutValue) const` | Fills OutValue with the value of MinPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetMinPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfileV2_1a5f657d787b0409f585eef7efd77a4efd)`()` | Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetMinPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfileV2_1afc889300c68d018be0408236c110d827)`() const` | Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a2e9108eeef924dd0e41cad257ca9e172)`(const int32 & NewValue)` | Sets the value of MinPlayersPerSide_Optional and also sets MinPlayersPerSide_IsSet to true.
`public inline void `[`SetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a559edadde5762af449dc71d2fa64aff0)`(int32 && NewValue)` | Sets the value of MinPlayersPerSide_Optional and also sets MinPlayersPerSide_IsSet to true using move semantics.
`public inline void `[`ClearMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a718d5fad0a7afd7c7d123ecf3f6561a0)`()` | Clears the value of MinPlayersPerSide_Optional and sets MinPlayersPerSide_IsSet to false.
`public inline bool `[`IsMinPlayersPerSideSet`](#structFRHAPI__MatchMakingProfileV2_1ab446cee31f6d8dd1af9a3c9ebf6c7142)`() const` | Checks whether MinPlayersPerSide_Optional has been set.
`public inline bool `[`IsMinPlayersPerSideDefaultValue`](#structFRHAPI__MatchMakingProfileV2_1a815a3c8c494a1d04e3403918d4498f49)`() const` | Returns true if MinPlayersPerSide_Optional is set and matches the default value.
`public inline void `[`SetMinPlayersPerSideToDefault`](#structFRHAPI__MatchMakingProfileV2_1a620b2a35235eed724c9f14d8df2ab3bc)`()` | Sets the value of MinPlayersPerSide_Optional to its default and also sets MinPlayersPerSide_IsSet to true.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1ad326532ecc62acb511177c0e343587bd)`()` | Gets the value of LegacyConfig_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1a180fcdd0c151179672faee4cd8e046a9)`() const` | Gets the value of LegacyConfig_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1adc8741647a8c155ee13dfc8009c3e1b3)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` | Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1a94ad71fbad7c8f49329b5bac9dd9be20)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` | Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetLegacyConfigOrNull`](#structFRHAPI__MatchMakingProfileV2_1affd3bac0fc61edb4b9b67feb189eb4ca)`()` | Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetLegacyConfigOrNull`](#structFRHAPI__MatchMakingProfileV2_1ad8cabc5ac1976c08c6b8b8a3defd6988)`() const` | Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1a5f73c1ccaf38bf99fc9ec5cdc7ddde21)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` | Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true.
`public inline void `[`SetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1ac5b15400c0751f5855c67818409c328a)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` | Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true using move semantics.
`public inline void `[`ClearLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1aa51a7cf8d677bd0f57eed39122d5d6af)`()` | Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false.
`public inline bool `[`IsLegacyConfigSet`](#structFRHAPI__MatchMakingProfileV2_1a2e9c0f0474fee753143ad45b1887e5e9)`() const` | Checks whether LegacyConfig_Optional has been set.
`public inline FString & `[`GetDeserterId`](#structFRHAPI__MatchMakingProfileV2_1aef672e2c6a46e7f2ee1d54cd2daf900f)`()` | Gets the value of DeserterId_Optional, regardless of it having been set.
`public inline const FString & `[`GetDeserterId`](#structFRHAPI__MatchMakingProfileV2_1a4b3a49c352bf262314ff02f609c2afaa)`() const` | Gets the value of DeserterId_Optional, regardless of it having been set.
`public inline const FString & `[`GetDeserterId`](#structFRHAPI__MatchMakingProfileV2_1ad855ef9710ff118aca305496e0a5c265)`(const FString & DefaultValue) const` | Gets the value of DeserterId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDeserterId`](#structFRHAPI__MatchMakingProfileV2_1a5ea621ad0fbcaf61755296c4915422dd)`(FString & OutValue) const` | Fills OutValue with the value of DeserterId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDeserterIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1a36371f6d55ed936293789ccfd0db3672)`()` | Returns a pointer to DeserterId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDeserterIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1a0ce4c71cc8926f2017401c32897f84e1)`() const` | Returns a pointer to DeserterId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDeserterId`](#structFRHAPI__MatchMakingProfileV2_1a87b490afc4f498967cf5cd4e408102ab)`(const FString & NewValue)` | Sets the value of DeserterId_Optional and also sets DeserterId_IsSet to true.
`public inline void `[`SetDeserterId`](#structFRHAPI__MatchMakingProfileV2_1ada7889860e0a249e13c7c3b3ecbb651a)`(FString && NewValue)` | Sets the value of DeserterId_Optional and also sets DeserterId_IsSet to true using move semantics.
`public inline void `[`ClearDeserterId`](#structFRHAPI__MatchMakingProfileV2_1a8f6b926107cd9f277a465b93b2c47d19)`()` | Clears the value of DeserterId_Optional and sets DeserterId_IsSet to false.
`public inline bool `[`IsDeserterIdSet`](#structFRHAPI__MatchMakingProfileV2_1a73698dab83adf4e03ec9637ab6e127b3)`() const` | Checks whether DeserterId_Optional has been set.
`public inline FGuid & `[`GetSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1acf11e8feb64e573568edfc304d71d970)`()` | Gets the value of SessionTemplateId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1ae0f95322ce912f321247f0862f4407e5)`() const` | Gets the value of SessionTemplateId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1ad9e457ba0fdbdde859fc926a5726f50e)`(const FGuid & DefaultValue) const` | Gets the value of SessionTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1af79ce39b605eae9c4cf488e8d6e34bcb)`(FGuid & OutValue) const` | Fills OutValue with the value of SessionTemplateId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetSessionTemplateIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1ab0293f281e1e5c4e245480522693c03f)`()` | Returns a pointer to SessionTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetSessionTemplateIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1a1afc3b38c4a366a5a6f8315648f2c1ed)`() const` | Returns a pointer to SessionTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a4f88ff43e5836edfd1422393318c7597)`(const FGuid & NewValue)` | Sets the value of SessionTemplateId_Optional and also sets SessionTemplateId_IsSet to true.
`public inline void `[`SetSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1ac3441ac2b72a3045333f8226bc4a81e8)`(FGuid && NewValue)` | Sets the value of SessionTemplateId_Optional and also sets SessionTemplateId_IsSet to true using move semantics.
`public inline void `[`ClearSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1aa0a57023b70ac8d739eace48091a70ef)`()` | Clears the value of SessionTemplateId_Optional and sets SessionTemplateId_IsSet to false.
`public inline bool `[`IsSessionTemplateIdSet`](#structFRHAPI__MatchMakingProfileV2_1a0baac8b2830140229444fabbee01d36d)`() const` | Checks whether SessionTemplateId_Optional has been set.

### Members

#### `public FString `[`MatchMakingProfileId`](#structFRHAPI__MatchMakingProfileV2_1a1fac1d90d7052f77ed54c7ef0158d767) <a id="structFRHAPI__MatchMakingProfileV2_1a1fac1d90d7052f77ed54c7ef0158d767"></a>

ID of the matchmaking profile to join.

#### `public ERHAPI_ProfileJoinMode `[`JoinMode_Optional`](#structFRHAPI__MatchMakingProfileV2_1a942eea841d6b9ab8a304ecc1e3486967) <a id="structFRHAPI__MatchMakingProfileV2_1a942eea841d6b9ab8a304ecc1e3486967"></a>

What mode to set on the matchmaking profile (normal, backfill etc)

#### `public bool `[`JoinMode_IsSet`](#structFRHAPI__MatchMakingProfileV2_1a7d05d638ad7e6bdc38adbee05fc65bb1) <a id="structFRHAPI__MatchMakingProfileV2_1a7d05d638ad7e6bdc38adbee05fc65bb1"></a>

true if JoinMode_Optional has been set to a value

#### `public FGuid `[`InstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1acc1ae567ca4eae15dd5ba058009eb1bf) <a id="structFRHAPI__MatchMakingProfileV2_1acc1ae567ca4eae15dd5ba058009eb1bf"></a>

Which instance template to use when launching a match in this profile.

#### `public FString `[`RankId_Optional`](#structFRHAPI__MatchMakingProfileV2_1afd26627e8543724e350b3961995a4434) <a id="structFRHAPI__MatchMakingProfileV2_1afd26627e8543724e350b3961995a4434"></a>

Which rank this profile should use MMR from to make matches from, and update at the end of match (1v1 MMR or 2v2 MMR for example)

#### `public bool `[`RankId_IsSet`](#structFRHAPI__MatchMakingProfileV2_1a60ec35f19ebed9d47879447dcc660f39) <a id="structFRHAPI__MatchMakingProfileV2_1a60ec35f19ebed9d47879447dcc660f39"></a>

true if RankId_Optional has been set to a value

#### `public int32 `[`NumSides_Optional`](#structFRHAPI__MatchMakingProfileV2_1a05d7bde5226bb55b7361fc9d447b2639) <a id="structFRHAPI__MatchMakingProfileV2_1a05d7bde5226bb55b7361fc9d447b2639"></a>

The number of sides a game in this profile will have (2 in a 1v1 and 3 in a 1v1v1 for example.

#### `public bool `[`NumSides_IsSet`](#structFRHAPI__MatchMakingProfileV2_1a8a5f02725af6685c6fae0145c1e03ef2) <a id="structFRHAPI__MatchMakingProfileV2_1a8a5f02725af6685c6fae0145c1e03ef2"></a>

true if NumSides_Optional has been set to a value

#### `public int32 `[`MaxPlayersPerSide_Optional`](#structFRHAPI__MatchMakingProfileV2_1acfb2f4481ae253fe40c2bb2ce3b7bfbb) <a id="structFRHAPI__MatchMakingProfileV2_1acfb2f4481ae253fe40c2bb2ce3b7bfbb"></a>

The maximum number of players that can be on each team.

#### `public bool `[`MaxPlayersPerSide_IsSet`](#structFRHAPI__MatchMakingProfileV2_1acc2a1fd5d9019b960edbf25865c0310d) <a id="structFRHAPI__MatchMakingProfileV2_1acc2a1fd5d9019b960edbf25865c0310d"></a>

true if MaxPlayersPerSide_Optional has been set to a value

#### `public int32 `[`MinPlayersPerSide_Optional`](#structFRHAPI__MatchMakingProfileV2_1a134fd567423d422235de46bba637faa2) <a id="structFRHAPI__MatchMakingProfileV2_1a134fd567423d422235de46bba637faa2"></a>

The minimum number of players that can be on each team.

#### `public bool `[`MinPlayersPerSide_IsSet`](#structFRHAPI__MatchMakingProfileV2_1a7b9cc3870d306efd0f9c59e62d96e38e) <a id="structFRHAPI__MatchMakingProfileV2_1a7b9cc3870d306efd0f9c59e62d96e38e"></a>

true if MinPlayersPerSide_Optional has been set to a value

#### `public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`LegacyConfig_Optional`](#structFRHAPI__MatchMakingProfileV2_1af6d5bc75fe36551e65c7d61585ac2e65) <a id="structFRHAPI__MatchMakingProfileV2_1af6d5bc75fe36551e65c7d61585ac2e65"></a>

Legacy config to help migrate clients.

#### `public bool `[`LegacyConfig_IsSet`](#structFRHAPI__MatchMakingProfileV2_1af417de3e8a601609b54e0310551c9caa) <a id="structFRHAPI__MatchMakingProfileV2_1af417de3e8a601609b54e0310551c9caa"></a>

true if LegacyConfig_Optional has been set to a value

#### `public FString `[`DeserterId_Optional`](#structFRHAPI__MatchMakingProfileV2_1aae0011ecf8b0087fc25843b2c81c9d15) <a id="structFRHAPI__MatchMakingProfileV2_1aae0011ecf8b0087fc25843b2c81c9d15"></a>

Which deserter this profile should check before allowing players to join matchmaking.

#### `public bool `[`DeserterId_IsSet`](#structFRHAPI__MatchMakingProfileV2_1a549f6b87b796d3920408a3e5b103d440) <a id="structFRHAPI__MatchMakingProfileV2_1a549f6b87b796d3920408a3e5b103d440"></a>

true if DeserterId_Optional has been set to a value

#### `public FGuid `[`SessionTemplateId_Optional`](#structFRHAPI__MatchMakingProfileV2_1a5357bb9dad6eedd14a04648d518bbcbe) <a id="structFRHAPI__MatchMakingProfileV2_1a5357bb9dad6eedd14a04648d518bbcbe"></a>

What type of session should result from matchmaking on this profile.

#### `public bool `[`SessionTemplateId_IsSet`](#structFRHAPI__MatchMakingProfileV2_1a671a2d069be65d525493b353b34c3b4c) <a id="structFRHAPI__MatchMakingProfileV2_1a671a2d069be65d525493b353b34c3b4c"></a>

true if SessionTemplateId_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingProfileV2_1aa73d4e9aa317675d9c1bfc43d25680ef)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchMakingProfileV2_1aa73d4e9aa317675d9c1bfc43d25680ef"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingProfileV2_1a5dd02d8364e2d98ea1b80f2d18acd532)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchMakingProfileV2_1a5dd02d8364e2d98ea1b80f2d18acd532"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetMatchMakingProfileId`](#structFRHAPI__MatchMakingProfileV2_1a4ae3b82d9d3c2bb53a131330dfe71e59)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a4ae3b82d9d3c2bb53a131330dfe71e59"></a>

Gets the value of MatchMakingProfileId.

#### `public inline const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__MatchMakingProfileV2_1a2546a8d06702b1dd5a24f4d001f98688)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a2546a8d06702b1dd5a24f4d001f98688"></a>

Gets the value of MatchMakingProfileId.

#### `public inline void `[`SetMatchMakingProfileId`](#structFRHAPI__MatchMakingProfileV2_1ac12fa1dff20955c44762e4c5ecf3644d)`(const FString & NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1ac12fa1dff20955c44762e4c5ecf3644d"></a>

Sets the value of MatchMakingProfileId.

#### `public inline void `[`SetMatchMakingProfileId`](#structFRHAPI__MatchMakingProfileV2_1aa223a50f6f5b2e8c50e47104740464e4)`(FString && NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1aa223a50f6f5b2e8c50e47104740464e4"></a>

Sets the value of MatchMakingProfileId using move semantics.

#### `public inline ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1acca3ed8e4eaac20c40fc1cb590bc1a40)`()` <a id="structFRHAPI__MatchMakingProfileV2_1acca3ed8e4eaac20c40fc1cb590bc1a40"></a>

Gets the value of JoinMode_Optional, regardless of it having been set.

#### `public inline const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1af93faf8294555ca09913a242027c0e10)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1af93faf8294555ca09913a242027c0e10"></a>

Gets the value of JoinMode_Optional, regardless of it having been set.

#### `public inline const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1a470e7b74c7d01ff76ddbe193aae39050)`(const ERHAPI_ProfileJoinMode & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a470e7b74c7d01ff76ddbe193aae39050"></a>

Gets the value of JoinMode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1a698163252c3bc913772d2c6f7c046225)`(ERHAPI_ProfileJoinMode & OutValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a698163252c3bc913772d2c6f7c046225"></a>

Fills OutValue with the value of JoinMode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfileV2_1a951f51f8957ac2b177fb73d471ade8a9)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a951f51f8957ac2b177fb73d471ade8a9"></a>

Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfileV2_1a473dbf0d119cd9c3a167816772d63ddc)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a473dbf0d119cd9c3a167816772d63ddc"></a>

Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1ae419e9c8d1c3d6ba2092596618447518)`(const ERHAPI_ProfileJoinMode & NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1ae419e9c8d1c3d6ba2092596618447518"></a>

Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true.

#### `public inline void `[`SetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1a6e541aa635e3442b93c226fbdbd7e02f)`(ERHAPI_ProfileJoinMode && NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a6e541aa635e3442b93c226fbdbd7e02f"></a>

Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinMode`](#structFRHAPI__MatchMakingProfileV2_1aab63f74fb4ae0fb21419a3cecdacb647)`()` <a id="structFRHAPI__MatchMakingProfileV2_1aab63f74fb4ae0fb21419a3cecdacb647"></a>

Clears the value of JoinMode_Optional and sets JoinMode_IsSet to false.

#### `public inline bool `[`IsJoinModeSet`](#structFRHAPI__MatchMakingProfileV2_1acd4af257d70798efcaae31e992a07295)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1acd4af257d70798efcaae31e992a07295"></a>

Checks whether JoinMode_Optional has been set.

#### `public inline FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a8bd2d9571b74ae730f49da3265cd52d9)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a8bd2d9571b74ae730f49da3265cd52d9"></a>

Gets the value of InstanceRequestTemplateId.

#### `public inline const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a9b376d843d7b97b2540be8f226e7c3ea)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a9b376d843d7b97b2540be8f226e7c3ea"></a>

Gets the value of InstanceRequestTemplateId.

#### `public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1ae5c65b0dc895cdcdf081ebcb23d6822a)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1ae5c65b0dc895cdcdf081ebcb23d6822a"></a>

Sets the value of InstanceRequestTemplateId.

#### `public inline void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a81bcba79254b0d4e94c95606031cbd23)`(FGuid && NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a81bcba79254b0d4e94c95606031cbd23"></a>

Sets the value of InstanceRequestTemplateId using move semantics.

#### `public inline FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfileV2_1a072dcd90d711229eadc0a0b765233cac)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a072dcd90d711229eadc0a0b765233cac"></a>

Gets the value of RankId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfileV2_1a44e1a5ddc56d3d7d957aef529a008983)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a44e1a5ddc56d3d7d957aef529a008983"></a>

Gets the value of RankId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfileV2_1a872d95940df64fe58cd9674fedd33126)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a872d95940df64fe58cd9674fedd33126"></a>

Gets the value of RankId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRankId`](#structFRHAPI__MatchMakingProfileV2_1afc8b52a3625120cb5893535059288df1)`(FString & OutValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1afc8b52a3625120cb5893535059288df1"></a>

Fills OutValue with the value of RankId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRankIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1ad27d1e25492cd7c62834360f42897f42)`()` <a id="structFRHAPI__MatchMakingProfileV2_1ad27d1e25492cd7c62834360f42897f42"></a>

Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRankIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1a2d2c3762f37155df05423c4ac7fb4a0e)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a2d2c3762f37155df05423c4ac7fb4a0e"></a>

Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRankId`](#structFRHAPI__MatchMakingProfileV2_1ae987b1b7e9b4ff7cf014c34ea4c1bd9f)`(const FString & NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1ae987b1b7e9b4ff7cf014c34ea4c1bd9f"></a>

Sets the value of RankId_Optional and also sets RankId_IsSet to true.

#### `public inline void `[`SetRankId`](#structFRHAPI__MatchMakingProfileV2_1a6354146a6e6fc04019044dcc47ad4ec4)`(FString && NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a6354146a6e6fc04019044dcc47ad4ec4"></a>

Sets the value of RankId_Optional and also sets RankId_IsSet to true using move semantics.

#### `public inline void `[`ClearRankId`](#structFRHAPI__MatchMakingProfileV2_1a897e53f524139e9885b59fe28ca26b6f)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a897e53f524139e9885b59fe28ca26b6f"></a>

Clears the value of RankId_Optional and sets RankId_IsSet to false.

#### `public inline bool `[`IsRankIdSet`](#structFRHAPI__MatchMakingProfileV2_1aa6a902eb46059f30a5a209bb898523b4)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1aa6a902eb46059f30a5a209bb898523b4"></a>

Checks whether RankId_Optional has been set.

#### `public inline int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfileV2_1aa563f13e67e9b818e62f8a087a5bcb40)`()` <a id="structFRHAPI__MatchMakingProfileV2_1aa563f13e67e9b818e62f8a087a5bcb40"></a>

Gets the value of NumSides_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfileV2_1a110ef77dbe42d217beb59c97bc2b46cb)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a110ef77dbe42d217beb59c97bc2b46cb"></a>

Gets the value of NumSides_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfileV2_1aea61c2b21146e917855542f8af93d31b)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1aea61c2b21146e917855542f8af93d31b"></a>

Gets the value of NumSides_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetNumSides`](#structFRHAPI__MatchMakingProfileV2_1af343eff64a902f25d50fbf423b4f81f0)`(int32 & OutValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1af343eff64a902f25d50fbf423b4f81f0"></a>

Fills OutValue with the value of NumSides_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetNumSidesOrNull`](#structFRHAPI__MatchMakingProfileV2_1acdf478cadb8c7e198b34958a5a7ceeb6)`()` <a id="structFRHAPI__MatchMakingProfileV2_1acdf478cadb8c7e198b34958a5a7ceeb6"></a>

Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetNumSidesOrNull`](#structFRHAPI__MatchMakingProfileV2_1a0b6f4509991348462aacee8c9b3ac0dd)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a0b6f4509991348462aacee8c9b3ac0dd"></a>

Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetNumSides`](#structFRHAPI__MatchMakingProfileV2_1ae37798f0eb286a17efe2eef35fb32cb4)`(const int32 & NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1ae37798f0eb286a17efe2eef35fb32cb4"></a>

Sets the value of NumSides_Optional and also sets NumSides_IsSet to true.

#### `public inline void `[`SetNumSides`](#structFRHAPI__MatchMakingProfileV2_1a6062458d23aea2798770679f4c0f5454)`(int32 && NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a6062458d23aea2798770679f4c0f5454"></a>

Sets the value of NumSides_Optional and also sets NumSides_IsSet to true using move semantics.

#### `public inline void `[`ClearNumSides`](#structFRHAPI__MatchMakingProfileV2_1a4b5d018076f15a9cf92d33bb7422ffb3)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a4b5d018076f15a9cf92d33bb7422ffb3"></a>

Clears the value of NumSides_Optional and sets NumSides_IsSet to false.

#### `public inline bool `[`IsNumSidesSet`](#structFRHAPI__MatchMakingProfileV2_1aa8e4297630705a2eae6e9bc181f8f5fe)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1aa8e4297630705a2eae6e9bc181f8f5fe"></a>

Checks whether NumSides_Optional has been set.

#### `public inline bool `[`IsNumSidesDefaultValue`](#structFRHAPI__MatchMakingProfileV2_1a66b7c48d8cc8248a686ddd756ab4bb78)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a66b7c48d8cc8248a686ddd756ab4bb78"></a>

Returns true if NumSides_Optional is set and matches the default value.

#### `public inline void `[`SetNumSidesToDefault`](#structFRHAPI__MatchMakingProfileV2_1a24a38c894c073d4219d42a06390d84bd)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a24a38c894c073d4219d42a06390d84bd"></a>

Sets the value of NumSides_Optional to its default and also sets NumSides_IsSet to true.

#### `public inline int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a79018b4bac31b293445a4b79ebd75b6c)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a79018b4bac31b293445a4b79ebd75b6c"></a>

Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1ab36e8292e53555d824c4c8257c15dbd4)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1ab36e8292e53555d824c4c8257c15dbd4"></a>

Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1ac6ac3675bc9034d2d1dda6ad5e2aba83)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1ac6ac3675bc9034d2d1dda6ad5e2aba83"></a>

Gets the value of MaxPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a31cda4199401eb0c57419e45a7c3810a)`(int32 & OutValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a31cda4199401eb0c57419e45a7c3810a"></a>

Fills OutValue with the value of MaxPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetMaxPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfileV2_1adafaa70e4226ea96b269d0a207359827)`()` <a id="structFRHAPI__MatchMakingProfileV2_1adafaa70e4226ea96b269d0a207359827"></a>

Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetMaxPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfileV2_1ada03ad1166940ce885192b921399afd5)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1ada03ad1166940ce885192b921399afd5"></a>

Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a25833bb2c6389754f86a79992075dd87)`(const int32 & NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a25833bb2c6389754f86a79992075dd87"></a>

Sets the value of MaxPlayersPerSide_Optional and also sets MaxPlayersPerSide_IsSet to true.

#### `public inline void `[`SetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a6d6ec5802ed1461ed2d1e81185df311b)`(int32 && NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a6d6ec5802ed1461ed2d1e81185df311b"></a>

Sets the value of MaxPlayersPerSide_Optional and also sets MaxPlayersPerSide_IsSet to true using move semantics.

#### `public inline void `[`ClearMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a8deb6676caa04797a00ad24169150878)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a8deb6676caa04797a00ad24169150878"></a>

Clears the value of MaxPlayersPerSide_Optional and sets MaxPlayersPerSide_IsSet to false.

#### `public inline bool `[`IsMaxPlayersPerSideSet`](#structFRHAPI__MatchMakingProfileV2_1a40301ca1f8bf8b7b057b0141fcc8a20a)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a40301ca1f8bf8b7b057b0141fcc8a20a"></a>

Checks whether MaxPlayersPerSide_Optional has been set.

#### `public inline bool `[`IsMaxPlayersPerSideDefaultValue`](#structFRHAPI__MatchMakingProfileV2_1a834129c1dc734d80921a47a67ed13dbf)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a834129c1dc734d80921a47a67ed13dbf"></a>

Returns true if MaxPlayersPerSide_Optional is set and matches the default value.

#### `public inline void `[`SetMaxPlayersPerSideToDefault`](#structFRHAPI__MatchMakingProfileV2_1a3641c66672a47129b61a22e239a89df2)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a3641c66672a47129b61a22e239a89df2"></a>

Sets the value of MaxPlayersPerSide_Optional to its default and also sets MaxPlayersPerSide_IsSet to true.

#### `public inline int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a2d6ef0ba56a361bb3eccd2efa26952d1)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a2d6ef0ba56a361bb3eccd2efa26952d1"></a>

Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1ae75b32465d0a5aad7a55b11f86fd8739)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1ae75b32465d0a5aad7a55b11f86fd8739"></a>

Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a7edb0b620ad22d752940c60028330862)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a7edb0b620ad22d752940c60028330862"></a>

Gets the value of MinPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a8eecd9c9114cc4ef9a43fbf94dfee801)`(int32 & OutValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a8eecd9c9114cc4ef9a43fbf94dfee801"></a>

Fills OutValue with the value of MinPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetMinPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfileV2_1a5f657d787b0409f585eef7efd77a4efd)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a5f657d787b0409f585eef7efd77a4efd"></a>

Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetMinPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfileV2_1afc889300c68d018be0408236c110d827)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1afc889300c68d018be0408236c110d827"></a>

Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a2e9108eeef924dd0e41cad257ca9e172)`(const int32 & NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a2e9108eeef924dd0e41cad257ca9e172"></a>

Sets the value of MinPlayersPerSide_Optional and also sets MinPlayersPerSide_IsSet to true.

#### `public inline void `[`SetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a559edadde5762af449dc71d2fa64aff0)`(int32 && NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a559edadde5762af449dc71d2fa64aff0"></a>

Sets the value of MinPlayersPerSide_Optional and also sets MinPlayersPerSide_IsSet to true using move semantics.

#### `public inline void `[`ClearMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a718d5fad0a7afd7c7d123ecf3f6561a0)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a718d5fad0a7afd7c7d123ecf3f6561a0"></a>

Clears the value of MinPlayersPerSide_Optional and sets MinPlayersPerSide_IsSet to false.

#### `public inline bool `[`IsMinPlayersPerSideSet`](#structFRHAPI__MatchMakingProfileV2_1ab446cee31f6d8dd1af9a3c9ebf6c7142)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1ab446cee31f6d8dd1af9a3c9ebf6c7142"></a>

Checks whether MinPlayersPerSide_Optional has been set.

#### `public inline bool `[`IsMinPlayersPerSideDefaultValue`](#structFRHAPI__MatchMakingProfileV2_1a815a3c8c494a1d04e3403918d4498f49)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a815a3c8c494a1d04e3403918d4498f49"></a>

Returns true if MinPlayersPerSide_Optional is set and matches the default value.

#### `public inline void `[`SetMinPlayersPerSideToDefault`](#structFRHAPI__MatchMakingProfileV2_1a620b2a35235eed724c9f14d8df2ab3bc)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a620b2a35235eed724c9f14d8df2ab3bc"></a>

Sets the value of MinPlayersPerSide_Optional to its default and also sets MinPlayersPerSide_IsSet to true.

#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1ad326532ecc62acb511177c0e343587bd)`()` <a id="structFRHAPI__MatchMakingProfileV2_1ad326532ecc62acb511177c0e343587bd"></a>

Gets the value of LegacyConfig_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1a180fcdd0c151179672faee4cd8e046a9)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a180fcdd0c151179672faee4cd8e046a9"></a>

Gets the value of LegacyConfig_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1adc8741647a8c155ee13dfc8009c3e1b3)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1adc8741647a8c155ee13dfc8009c3e1b3"></a>

Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1a94ad71fbad7c8f49329b5bac9dd9be20)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a94ad71fbad7c8f49329b5bac9dd9be20"></a>

Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetLegacyConfigOrNull`](#structFRHAPI__MatchMakingProfileV2_1affd3bac0fc61edb4b9b67feb189eb4ca)`()` <a id="structFRHAPI__MatchMakingProfileV2_1affd3bac0fc61edb4b9b67feb189eb4ca"></a>

Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetLegacyConfigOrNull`](#structFRHAPI__MatchMakingProfileV2_1ad8cabc5ac1976c08c6b8b8a3defd6988)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1ad8cabc5ac1976c08c6b8b8a3defd6988"></a>

Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1a5f73c1ccaf38bf99fc9ec5cdc7ddde21)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a5f73c1ccaf38bf99fc9ec5cdc7ddde21"></a>

Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true.

#### `public inline void `[`SetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1ac5b15400c0751f5855c67818409c328a)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1ac5b15400c0751f5855c67818409c328a"></a>

Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true using move semantics.

#### `public inline void `[`ClearLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1aa51a7cf8d677bd0f57eed39122d5d6af)`()` <a id="structFRHAPI__MatchMakingProfileV2_1aa51a7cf8d677bd0f57eed39122d5d6af"></a>

Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false.

#### `public inline bool `[`IsLegacyConfigSet`](#structFRHAPI__MatchMakingProfileV2_1a2e9c0f0474fee753143ad45b1887e5e9)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a2e9c0f0474fee753143ad45b1887e5e9"></a>

Checks whether LegacyConfig_Optional has been set.

#### `public inline FString & `[`GetDeserterId`](#structFRHAPI__MatchMakingProfileV2_1aef672e2c6a46e7f2ee1d54cd2daf900f)`()` <a id="structFRHAPI__MatchMakingProfileV2_1aef672e2c6a46e7f2ee1d54cd2daf900f"></a>

Gets the value of DeserterId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDeserterId`](#structFRHAPI__MatchMakingProfileV2_1a4b3a49c352bf262314ff02f609c2afaa)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a4b3a49c352bf262314ff02f609c2afaa"></a>

Gets the value of DeserterId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDeserterId`](#structFRHAPI__MatchMakingProfileV2_1ad855ef9710ff118aca305496e0a5c265)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1ad855ef9710ff118aca305496e0a5c265"></a>

Gets the value of DeserterId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDeserterId`](#structFRHAPI__MatchMakingProfileV2_1a5ea621ad0fbcaf61755296c4915422dd)`(FString & OutValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a5ea621ad0fbcaf61755296c4915422dd"></a>

Fills OutValue with the value of DeserterId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetDeserterIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1a36371f6d55ed936293789ccfd0db3672)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a36371f6d55ed936293789ccfd0db3672"></a>

Returns a pointer to DeserterId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetDeserterIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1a0ce4c71cc8926f2017401c32897f84e1)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a0ce4c71cc8926f2017401c32897f84e1"></a>

Returns a pointer to DeserterId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDeserterId`](#structFRHAPI__MatchMakingProfileV2_1a87b490afc4f498967cf5cd4e408102ab)`(const FString & NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a87b490afc4f498967cf5cd4e408102ab"></a>

Sets the value of DeserterId_Optional and also sets DeserterId_IsSet to true.

#### `public inline void `[`SetDeserterId`](#structFRHAPI__MatchMakingProfileV2_1ada7889860e0a249e13c7c3b3ecbb651a)`(FString && NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1ada7889860e0a249e13c7c3b3ecbb651a"></a>

Sets the value of DeserterId_Optional and also sets DeserterId_IsSet to true using move semantics.

#### `public inline void `[`ClearDeserterId`](#structFRHAPI__MatchMakingProfileV2_1a8f6b926107cd9f277a465b93b2c47d19)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a8f6b926107cd9f277a465b93b2c47d19"></a>

Clears the value of DeserterId_Optional and sets DeserterId_IsSet to false.

#### `public inline bool `[`IsDeserterIdSet`](#structFRHAPI__MatchMakingProfileV2_1a73698dab83adf4e03ec9637ab6e127b3)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a73698dab83adf4e03ec9637ab6e127b3"></a>

Checks whether DeserterId_Optional has been set.

#### `public inline FGuid & `[`GetSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1acf11e8feb64e573568edfc304d71d970)`()` <a id="structFRHAPI__MatchMakingProfileV2_1acf11e8feb64e573568edfc304d71d970"></a>

Gets the value of SessionTemplateId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1ae0f95322ce912f321247f0862f4407e5)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1ae0f95322ce912f321247f0862f4407e5"></a>

Gets the value of SessionTemplateId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1ad9e457ba0fdbdde859fc926a5726f50e)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1ad9e457ba0fdbdde859fc926a5726f50e"></a>

Gets the value of SessionTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1af79ce39b605eae9c4cf488e8d6e34bcb)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1af79ce39b605eae9c4cf488e8d6e34bcb"></a>

Fills OutValue with the value of SessionTemplateId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetSessionTemplateIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1ab0293f281e1e5c4e245480522693c03f)`()` <a id="structFRHAPI__MatchMakingProfileV2_1ab0293f281e1e5c4e245480522693c03f"></a>

Returns a pointer to SessionTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetSessionTemplateIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1a1afc3b38c4a366a5a6f8315648f2c1ed)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a1afc3b38c4a366a5a6f8315648f2c1ed"></a>

Returns a pointer to SessionTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a4f88ff43e5836edfd1422393318c7597)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a4f88ff43e5836edfd1422393318c7597"></a>

Sets the value of SessionTemplateId_Optional and also sets SessionTemplateId_IsSet to true.

#### `public inline void `[`SetSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1ac3441ac2b72a3045333f8226bc4a81e8)`(FGuid && NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1ac3441ac2b72a3045333f8226bc4a81e8"></a>

Sets the value of SessionTemplateId_Optional and also sets SessionTemplateId_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1aa0a57023b70ac8d739eace48091a70ef)`()` <a id="structFRHAPI__MatchMakingProfileV2_1aa0a57023b70ac8d739eace48091a70ef"></a>

Clears the value of SessionTemplateId_Optional and sets SessionTemplateId_IsSet to false.

#### `public inline bool `[`IsSessionTemplateIdSet`](#structFRHAPI__MatchMakingProfileV2_1a0baac8b2830140229444fabbee01d36d)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a0baac8b2830140229444fabbee01d36d"></a>

Checks whether SessionTemplateId_Optional has been set.

