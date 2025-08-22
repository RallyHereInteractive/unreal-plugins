---
title: RHAPI_MatchMakingProfileV2
---

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

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`MatchMakingProfileId`](#structFRHAPI__MatchMakingProfileV2_1a1fac1d90d7052f77ed54c7ef0158d767) | ID of the matchmaking profile to join.
`public ERHAPI_ProfileJoinMode `[`JoinMode_Optional`](#structFRHAPI__MatchMakingProfileV2_1a942eea841d6b9ab8a304ecc1e3486967) | What mode to set on the matchmaking profile (normal, backfill etc)
`public bool `[`JoinMode_IsSet`](#structFRHAPI__MatchMakingProfileV2_1a7d05d638ad7e6bdc38adbee05fc65bb1) | true if JoinMode_Optional has been set to a value
`public FGuid `[`InstanceRequestTemplateId_Optional`](#structFRHAPI__MatchMakingProfileV2_1a00bde0c1cfcea95fd3d1c3e3d43f621a) | Which instance template to use when launching a match in this profile.
`public bool `[`InstanceRequestTemplateId_IsSet`](#structFRHAPI__MatchMakingProfileV2_1ac43efaeb9480938620528c2af51d1f45) | true if InstanceRequestTemplateId_Optional has been set to a value
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
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchMakingProfileV2_1af0ac0b525353859666c32ac12728bcac) | Custom data about this profile.
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchMakingProfileV2_1a5901e08685830cc4d88072433627804f) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingProfileV2_1aa73d4e9aa317675d9c1bfc43d25680ef)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingProfileV2_1a69502b565cf4b64e5107098fabe6caf9)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetMatchMakingProfileId`](#structFRHAPI__MatchMakingProfileV2_1aa6d52d35127df9ad38884525004ee3a6)`()` | Gets the value of MatchMakingProfileId.
`public inline FORCEINLINE const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__MatchMakingProfileV2_1af08db9f4026418e4226df0a423e90a67)`() const` | Gets the value of MatchMakingProfileId.
`public inline FORCEINLINE void `[`SetMatchMakingProfileId`](#structFRHAPI__MatchMakingProfileV2_1a8c12faa599fbab5002464cabcec1b059)`(const FString & NewValue)` | Sets the value of MatchMakingProfileId.
`public inline FORCEINLINE void `[`SetMatchMakingProfileId`](#structFRHAPI__MatchMakingProfileV2_1aee06a3eeb1125a415df6fb33a982d994)`(FString && NewValue)` | Sets the value of MatchMakingProfileId using move semantics.
`public inline FORCEINLINE ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1a5b465c2ec269b662cb8831cfb8bf3d72)`()` | Gets the value of JoinMode_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1af28e908fdd7cd2e70f5084bdd06ab36d)`() const` | Gets the value of JoinMode_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1a5dfe3eb52085f9e6f1dd3b92753ee349)`(const ERHAPI_ProfileJoinMode & DefaultValue) const` | Gets the value of JoinMode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1a8485a30e8cfdf7f46de7734119514935)`(ERHAPI_ProfileJoinMode & OutValue) const` | Fills OutValue with the value of JoinMode_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfileV2_1a3d70f06336501ac403abaf5a8b5da004)`()` | Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfileV2_1a337a4998711b010cacf2fe86cc298001)`() const` | Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1ad2a1a2831833cc6fa88d4db80fa3433e)`(const ERHAPI_ProfileJoinMode & NewValue)` | Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true.
`public inline FORCEINLINE void `[`SetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1ad01f899940065fc21e3f074642ff9943)`(ERHAPI_ProfileJoinMode && NewValue)` | Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true using move semantics.
`public inline void `[`ClearJoinMode`](#structFRHAPI__MatchMakingProfileV2_1aab63f74fb4ae0fb21419a3cecdacb647)`()` | Clears the value of JoinMode_Optional and sets JoinMode_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1ad3aee76b74bb112c4b049d0e47fc7e61)`()` | Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a124afb5d1ac5fa19365155b42a6c0847)`() const` | Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a10cc9deaf15b036134aded1264b31bd0)`(const FGuid & DefaultValue) const` | Gets the value of InstanceRequestTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a2da4cadfe4b7edcdadbe9c87983792a8)`(FGuid & OutValue) const` | Fills OutValue with the value of InstanceRequestTemplateId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1ae7aa41936b2879118073c7c34689104b)`()` | Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1a8ccf2d3c625e411b757ca71370f4490a)`() const` | Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1ab5eda8f284fa45d465c8107221c1bf1d)`(const FGuid & NewValue)` | Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true.
`public inline FORCEINLINE void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a17fbcc5844d3187bddd73d40024639d7)`(FGuid && NewValue)` | Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1af7bc7c5a7798d61a73e030162eaa4298)`()` | Clears the value of InstanceRequestTemplateId_Optional and sets InstanceRequestTemplateId_IsSet to false.
`public inline FORCEINLINE FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfileV2_1a24713246406be7a2857a522e2a1c6af1)`()` | Gets the value of RankId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfileV2_1a0be2b9c6d9532bda36d0c8a079d525cc)`() const` | Gets the value of RankId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfileV2_1a608f991905cde666b5b23bd23b58196b)`(const FString & DefaultValue) const` | Gets the value of RankId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRankId`](#structFRHAPI__MatchMakingProfileV2_1aa4ee3b32eec2dacc2a580c1c2a7fecc7)`(FString & OutValue) const` | Fills OutValue with the value of RankId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRankIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1aab4fb19c504d792f7b1e082fc795176d)`()` | Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRankIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1acf61b404c0de51ab8ea4c89d018a583f)`() const` | Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__MatchMakingProfileV2_1af1f0c70c555509b617c6321f0f3467d2)`(const FString & NewValue)` | Sets the value of RankId_Optional and also sets RankId_IsSet to true.
`public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__MatchMakingProfileV2_1a8480159c2b8fb2b6e916b3fdc1e7d723)`(FString && NewValue)` | Sets the value of RankId_Optional and also sets RankId_IsSet to true using move semantics.
`public inline void `[`ClearRankId`](#structFRHAPI__MatchMakingProfileV2_1a897e53f524139e9885b59fe28ca26b6f)`()` | Clears the value of RankId_Optional and sets RankId_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfileV2_1a7b23d89902a5184228b32b8c3b93adc9)`()` | Gets the value of NumSides_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfileV2_1abcc78c11898e03c9b59dccad596d709e)`() const` | Gets the value of NumSides_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfileV2_1a66613732b76e28c9a2bf760c277f1e60)`(const int32 & DefaultValue) const` | Gets the value of NumSides_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetNumSides`](#structFRHAPI__MatchMakingProfileV2_1ab6a1bc3e3515049abf03954d1e172304)`(int32 & OutValue) const` | Fills OutValue with the value of NumSides_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetNumSidesOrNull`](#structFRHAPI__MatchMakingProfileV2_1a709c47f1cf6cf637c4a0dac46e99d893)`()` | Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetNumSidesOrNull`](#structFRHAPI__MatchMakingProfileV2_1a036f7be2f293927ede31228bf61f67cf)`() const` | Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetNumSides`](#structFRHAPI__MatchMakingProfileV2_1a5142097f9870331855f028d4902df64c)`(const int32 & NewValue)` | Sets the value of NumSides_Optional and also sets NumSides_IsSet to true.
`public inline FORCEINLINE void `[`SetNumSides`](#structFRHAPI__MatchMakingProfileV2_1a4f432a8600af127333e2f0ecd76772b7)`(int32 && NewValue)` | Sets the value of NumSides_Optional and also sets NumSides_IsSet to true using move semantics.
`public inline void `[`ClearNumSides`](#structFRHAPI__MatchMakingProfileV2_1a4b5d018076f15a9cf92d33bb7422ffb3)`()` | Clears the value of NumSides_Optional and sets NumSides_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_NumSides`](#structFRHAPI__MatchMakingProfileV2_1ad026e7f4b108d35da3890d6d170d65de)`()` | Returns the default value of NumSides.
`public inline FORCEINLINE int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a9fc5efe16613434e2ef094fb1a56c34b)`()` | Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a7694ca1ca7107124ff77fc846434c1c7)`() const` | Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a56bdc1029f076b27c527d9da38da0533)`(const int32 & DefaultValue) const` | Gets the value of MaxPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a67dd46d167473aabd8fe1be2c1f6d962)`(int32 & OutValue) const` | Fills OutValue with the value of MaxPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetMaxPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfileV2_1a69f645b85f87b0e7351593b67a149768)`()` | Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetMaxPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfileV2_1a9e5c358b935f8cd4c85e072d4ef9235a)`() const` | Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1af2cb630630d926e481da4dd54e9dede9)`(const int32 & NewValue)` | Sets the value of MaxPlayersPerSide_Optional and also sets MaxPlayersPerSide_IsSet to true.
`public inline FORCEINLINE void `[`SetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a836daf450c002b8611da49d6b6eeb4ea)`(int32 && NewValue)` | Sets the value of MaxPlayersPerSide_Optional and also sets MaxPlayersPerSide_IsSet to true using move semantics.
`public inline void `[`ClearMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a8deb6676caa04797a00ad24169150878)`()` | Clears the value of MaxPlayersPerSide_Optional and sets MaxPlayersPerSide_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_MaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1af879260f24db4bc370299597999985c5)`()` | Returns the default value of MaxPlayersPerSide.
`public inline FORCEINLINE int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a3ab569ceea372e07078545a0b315318f)`()` | Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a7d1a1be24c02101d870aa65aa2dc07e0)`() const` | Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1ac4cdd88705f58de6df96150e2413242c)`(const int32 & DefaultValue) const` | Gets the value of MinPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a264b0c8d420c6a1aff612b2fe6c61c8f)`(int32 & OutValue) const` | Fills OutValue with the value of MinPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetMinPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfileV2_1ad5bc41b2553fbbe44ec2ee56442ae697)`()` | Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetMinPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfileV2_1acfb8175169133d4b1dd29bd1bebcdcba)`() const` | Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1aaa889b36412443802fc4d7761f395351)`(const int32 & NewValue)` | Sets the value of MinPlayersPerSide_Optional and also sets MinPlayersPerSide_IsSet to true.
`public inline FORCEINLINE void `[`SetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a4de115a0bc2dd9870d2cc5b2108b5744)`(int32 && NewValue)` | Sets the value of MinPlayersPerSide_Optional and also sets MinPlayersPerSide_IsSet to true using move semantics.
`public inline void `[`ClearMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a718d5fad0a7afd7c7d123ecf3f6561a0)`()` | Clears the value of MinPlayersPerSide_Optional and sets MinPlayersPerSide_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_MinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a315a9fff8dfc2ffa877ce1baa40630ad)`()` | Returns the default value of MinPlayersPerSide.
`public inline FORCEINLINE `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1afdcb0770e04d3526cbfcb5beb8f27307)`()` | Gets the value of LegacyConfig_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1af6c0059236a76b5f4f9864abf533fc87)`() const` | Gets the value of LegacyConfig_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1af8fe73153d7fbb1e1a5159b4184af3d8)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` | Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1acd5fad4bf51584435f0325dc295fe4d8)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` | Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetLegacyConfigOrNull`](#structFRHAPI__MatchMakingProfileV2_1a88f7225f93e3648407584120213a179e)`()` | Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetLegacyConfigOrNull`](#structFRHAPI__MatchMakingProfileV2_1a70077dbf72a6ce29b1707c0020b74372)`() const` | Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1a932d44efe258ec13b2fa679c5f714e41)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` | Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true.
`public inline FORCEINLINE void `[`SetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1a3e6f8231a43c28e3e7b3d21807a1059e)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` | Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true using move semantics.
`public inline void `[`ClearLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1aa51a7cf8d677bd0f57eed39122d5d6af)`()` | Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false.
`public inline FORCEINLINE FString & `[`GetDeserterId`](#structFRHAPI__MatchMakingProfileV2_1a355ef9f03c805260d01d096f8edd744f)`()` | Gets the value of DeserterId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDeserterId`](#structFRHAPI__MatchMakingProfileV2_1a3b8c46e0901b227d18542b010337d6a9)`() const` | Gets the value of DeserterId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDeserterId`](#structFRHAPI__MatchMakingProfileV2_1aa36d9ceff53c2ba9aad54d2cd5f23868)`(const FString & DefaultValue) const` | Gets the value of DeserterId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDeserterId`](#structFRHAPI__MatchMakingProfileV2_1a670eaf8ce4f0f66501c27c6215f2bbfd)`(FString & OutValue) const` | Fills OutValue with the value of DeserterId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetDeserterIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1ac77b92f9c244018c16fc5c5f69e6e638)`()` | Returns a pointer to DeserterId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetDeserterIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1ad7bdcc2c53698e9e0d1fca2bd69893e7)`() const` | Returns a pointer to DeserterId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDeserterId`](#structFRHAPI__MatchMakingProfileV2_1a23351d61389caa2b34d2447ce2548dbc)`(const FString & NewValue)` | Sets the value of DeserterId_Optional and also sets DeserterId_IsSet to true.
`public inline FORCEINLINE void `[`SetDeserterId`](#structFRHAPI__MatchMakingProfileV2_1aef19b8b204cf394141c4e79911935f57)`(FString && NewValue)` | Sets the value of DeserterId_Optional and also sets DeserterId_IsSet to true using move semantics.
`public inline void `[`ClearDeserterId`](#structFRHAPI__MatchMakingProfileV2_1a8f6b926107cd9f277a465b93b2c47d19)`()` | Clears the value of DeserterId_Optional and sets DeserterId_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a00d8a6f6ae379a32df758b80bad39154)`()` | Gets the value of SessionTemplateId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a2179c3ff3883d98bad37b84b0b5e823b)`() const` | Gets the value of SessionTemplateId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a987e59fdc6e028cd630e1c7bd80cfbf1)`(const FGuid & DefaultValue) const` | Gets the value of SessionTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1af39db7c21f7b8754356e824fae0add22)`(FGuid & OutValue) const` | Fills OutValue with the value of SessionTemplateId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetSessionTemplateIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1a4206115faafd3c199ed5df82935826c3)`()` | Returns a pointer to SessionTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetSessionTemplateIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1a950474ffcb357b14238de6e2ec62636c)`() const` | Returns a pointer to SessionTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1ada00de3c51c69fb78ddf6f6738a3cab2)`(const FGuid & NewValue)` | Sets the value of SessionTemplateId_Optional and also sets SessionTemplateId_IsSet to true.
`public inline FORCEINLINE void `[`SetSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a4c31db2b3b695846c76b654115590a9d)`(FGuid && NewValue)` | Sets the value of SessionTemplateId_Optional and also sets SessionTemplateId_IsSet to true using move semantics.
`public inline void `[`ClearSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1aa0a57023b70ac8d739eace48091a70ef)`()` | Clears the value of SessionTemplateId_Optional and sets SessionTemplateId_IsSet to false.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingProfileV2_1a704da7c0a12b68a3e73920f526d2fffa)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingProfileV2_1a9421e6a8ca52506474b2316ab4002007)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingProfileV2_1a62555ca0279a1d7864fd76b50b536f2e)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchMakingProfileV2_1aaf0e8edff97cc90f9593ea6340f33234)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchMakingProfileV2_1afa3c88201101d23b3b9f1641730e82cf)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchMakingProfileV2_1a3670d19304bb779cc00f595f99cc946c)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchMakingProfileV2_1ab8c41de3c966e24aac0f1ebfda609dd6)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchMakingProfileV2_1a79772480e245eaf3d3060db597d80837)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchMakingProfileV2_1a9002805ee39e14eceff5cf3acdb17c9a)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

### Members

#### `public FString `[`MatchMakingProfileId`](#structFRHAPI__MatchMakingProfileV2_1a1fac1d90d7052f77ed54c7ef0158d767) <a id="structFRHAPI__MatchMakingProfileV2_1a1fac1d90d7052f77ed54c7ef0158d767"></a>

ID of the matchmaking profile to join.

#### `public ERHAPI_ProfileJoinMode `[`JoinMode_Optional`](#structFRHAPI__MatchMakingProfileV2_1a942eea841d6b9ab8a304ecc1e3486967) <a id="structFRHAPI__MatchMakingProfileV2_1a942eea841d6b9ab8a304ecc1e3486967"></a>

What mode to set on the matchmaking profile (normal, backfill etc)

#### `public bool `[`JoinMode_IsSet`](#structFRHAPI__MatchMakingProfileV2_1a7d05d638ad7e6bdc38adbee05fc65bb1) <a id="structFRHAPI__MatchMakingProfileV2_1a7d05d638ad7e6bdc38adbee05fc65bb1"></a>

true if JoinMode_Optional has been set to a value

#### `public FGuid `[`InstanceRequestTemplateId_Optional`](#structFRHAPI__MatchMakingProfileV2_1a00bde0c1cfcea95fd3d1c3e3d43f621a) <a id="structFRHAPI__MatchMakingProfileV2_1a00bde0c1cfcea95fd3d1c3e3d43f621a"></a>

Which instance template to use when launching a match in this profile.

#### `public bool `[`InstanceRequestTemplateId_IsSet`](#structFRHAPI__MatchMakingProfileV2_1ac43efaeb9480938620528c2af51d1f45) <a id="structFRHAPI__MatchMakingProfileV2_1ac43efaeb9480938620528c2af51d1f45"></a>

true if InstanceRequestTemplateId_Optional has been set to a value

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

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchMakingProfileV2_1af0ac0b525353859666c32ac12728bcac) <a id="structFRHAPI__MatchMakingProfileV2_1af0ac0b525353859666c32ac12728bcac"></a>

Custom data about this profile.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchMakingProfileV2_1a5901e08685830cc4d88072433627804f) <a id="structFRHAPI__MatchMakingProfileV2_1a5901e08685830cc4d88072433627804f"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingProfileV2_1aa73d4e9aa317675d9c1bfc43d25680ef)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchMakingProfileV2_1aa73d4e9aa317675d9c1bfc43d25680ef"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingProfileV2_1a69502b565cf4b64e5107098fabe6caf9)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchMakingProfileV2_1a69502b565cf4b64e5107098fabe6caf9"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetMatchMakingProfileId`](#structFRHAPI__MatchMakingProfileV2_1aa6d52d35127df9ad38884525004ee3a6)`()` <a id="structFRHAPI__MatchMakingProfileV2_1aa6d52d35127df9ad38884525004ee3a6"></a>

Gets the value of MatchMakingProfileId.

#### `public inline FORCEINLINE const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__MatchMakingProfileV2_1af08db9f4026418e4226df0a423e90a67)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1af08db9f4026418e4226df0a423e90a67"></a>

Gets the value of MatchMakingProfileId.

#### `public inline FORCEINLINE void `[`SetMatchMakingProfileId`](#structFRHAPI__MatchMakingProfileV2_1a8c12faa599fbab5002464cabcec1b059)`(const FString & NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a8c12faa599fbab5002464cabcec1b059"></a>

Sets the value of MatchMakingProfileId.

#### `public inline FORCEINLINE void `[`SetMatchMakingProfileId`](#structFRHAPI__MatchMakingProfileV2_1aee06a3eeb1125a415df6fb33a982d994)`(FString && NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1aee06a3eeb1125a415df6fb33a982d994"></a>

Sets the value of MatchMakingProfileId using move semantics.

#### `public inline FORCEINLINE ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1a5b465c2ec269b662cb8831cfb8bf3d72)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a5b465c2ec269b662cb8831cfb8bf3d72"></a>

Gets the value of JoinMode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1af28e908fdd7cd2e70f5084bdd06ab36d)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1af28e908fdd7cd2e70f5084bdd06ab36d"></a>

Gets the value of JoinMode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1a5dfe3eb52085f9e6f1dd3b92753ee349)`(const ERHAPI_ProfileJoinMode & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a5dfe3eb52085f9e6f1dd3b92753ee349"></a>

Gets the value of JoinMode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1a8485a30e8cfdf7f46de7734119514935)`(ERHAPI_ProfileJoinMode & OutValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a8485a30e8cfdf7f46de7734119514935"></a>

Fills OutValue with the value of JoinMode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfileV2_1a3d70f06336501ac403abaf5a8b5da004)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a3d70f06336501ac403abaf5a8b5da004"></a>

Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfileV2_1a337a4998711b010cacf2fe86cc298001)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a337a4998711b010cacf2fe86cc298001"></a>

Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1ad2a1a2831833cc6fa88d4db80fa3433e)`(const ERHAPI_ProfileJoinMode & NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1ad2a1a2831833cc6fa88d4db80fa3433e"></a>

Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true.

#### `public inline FORCEINLINE void `[`SetJoinMode`](#structFRHAPI__MatchMakingProfileV2_1ad01f899940065fc21e3f074642ff9943)`(ERHAPI_ProfileJoinMode && NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1ad01f899940065fc21e3f074642ff9943"></a>

Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinMode`](#structFRHAPI__MatchMakingProfileV2_1aab63f74fb4ae0fb21419a3cecdacb647)`()` <a id="structFRHAPI__MatchMakingProfileV2_1aab63f74fb4ae0fb21419a3cecdacb647"></a>

Clears the value of JoinMode_Optional and sets JoinMode_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1ad3aee76b74bb112c4b049d0e47fc7e61)`()` <a id="structFRHAPI__MatchMakingProfileV2_1ad3aee76b74bb112c4b049d0e47fc7e61"></a>

Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a124afb5d1ac5fa19365155b42a6c0847)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a124afb5d1ac5fa19365155b42a6c0847"></a>

Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a10cc9deaf15b036134aded1264b31bd0)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a10cc9deaf15b036134aded1264b31bd0"></a>

Gets the value of InstanceRequestTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a2da4cadfe4b7edcdadbe9c87983792a8)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a2da4cadfe4b7edcdadbe9c87983792a8"></a>

Fills OutValue with the value of InstanceRequestTemplateId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1ae7aa41936b2879118073c7c34689104b)`()` <a id="structFRHAPI__MatchMakingProfileV2_1ae7aa41936b2879118073c7c34689104b"></a>

Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1a8ccf2d3c625e411b757ca71370f4490a)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a8ccf2d3c625e411b757ca71370f4490a"></a>

Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1ab5eda8f284fa45d465c8107221c1bf1d)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1ab5eda8f284fa45d465c8107221c1bf1d"></a>

Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a17fbcc5844d3187bddd73d40024639d7)`(FGuid && NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a17fbcc5844d3187bddd73d40024639d7"></a>

Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceRequestTemplateId`](#structFRHAPI__MatchMakingProfileV2_1af7bc7c5a7798d61a73e030162eaa4298)`()` <a id="structFRHAPI__MatchMakingProfileV2_1af7bc7c5a7798d61a73e030162eaa4298"></a>

Clears the value of InstanceRequestTemplateId_Optional and sets InstanceRequestTemplateId_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfileV2_1a24713246406be7a2857a522e2a1c6af1)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a24713246406be7a2857a522e2a1c6af1"></a>

Gets the value of RankId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfileV2_1a0be2b9c6d9532bda36d0c8a079d525cc)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a0be2b9c6d9532bda36d0c8a079d525cc"></a>

Gets the value of RankId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfileV2_1a608f991905cde666b5b23bd23b58196b)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a608f991905cde666b5b23bd23b58196b"></a>

Gets the value of RankId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRankId`](#structFRHAPI__MatchMakingProfileV2_1aa4ee3b32eec2dacc2a580c1c2a7fecc7)`(FString & OutValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1aa4ee3b32eec2dacc2a580c1c2a7fecc7"></a>

Fills OutValue with the value of RankId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRankIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1aab4fb19c504d792f7b1e082fc795176d)`()` <a id="structFRHAPI__MatchMakingProfileV2_1aab4fb19c504d792f7b1e082fc795176d"></a>

Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRankIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1acf61b404c0de51ab8ea4c89d018a583f)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1acf61b404c0de51ab8ea4c89d018a583f"></a>

Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__MatchMakingProfileV2_1af1f0c70c555509b617c6321f0f3467d2)`(const FString & NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1af1f0c70c555509b617c6321f0f3467d2"></a>

Sets the value of RankId_Optional and also sets RankId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__MatchMakingProfileV2_1a8480159c2b8fb2b6e916b3fdc1e7d723)`(FString && NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a8480159c2b8fb2b6e916b3fdc1e7d723"></a>

Sets the value of RankId_Optional and also sets RankId_IsSet to true using move semantics.

#### `public inline void `[`ClearRankId`](#structFRHAPI__MatchMakingProfileV2_1a897e53f524139e9885b59fe28ca26b6f)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a897e53f524139e9885b59fe28ca26b6f"></a>

Clears the value of RankId_Optional and sets RankId_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfileV2_1a7b23d89902a5184228b32b8c3b93adc9)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a7b23d89902a5184228b32b8c3b93adc9"></a>

Gets the value of NumSides_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfileV2_1abcc78c11898e03c9b59dccad596d709e)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1abcc78c11898e03c9b59dccad596d709e"></a>

Gets the value of NumSides_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfileV2_1a66613732b76e28c9a2bf760c277f1e60)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a66613732b76e28c9a2bf760c277f1e60"></a>

Gets the value of NumSides_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetNumSides`](#structFRHAPI__MatchMakingProfileV2_1ab6a1bc3e3515049abf03954d1e172304)`(int32 & OutValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1ab6a1bc3e3515049abf03954d1e172304"></a>

Fills OutValue with the value of NumSides_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetNumSidesOrNull`](#structFRHAPI__MatchMakingProfileV2_1a709c47f1cf6cf637c4a0dac46e99d893)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a709c47f1cf6cf637c4a0dac46e99d893"></a>

Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetNumSidesOrNull`](#structFRHAPI__MatchMakingProfileV2_1a036f7be2f293927ede31228bf61f67cf)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a036f7be2f293927ede31228bf61f67cf"></a>

Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetNumSides`](#structFRHAPI__MatchMakingProfileV2_1a5142097f9870331855f028d4902df64c)`(const int32 & NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a5142097f9870331855f028d4902df64c"></a>

Sets the value of NumSides_Optional and also sets NumSides_IsSet to true.

#### `public inline FORCEINLINE void `[`SetNumSides`](#structFRHAPI__MatchMakingProfileV2_1a4f432a8600af127333e2f0ecd76772b7)`(int32 && NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a4f432a8600af127333e2f0ecd76772b7"></a>

Sets the value of NumSides_Optional and also sets NumSides_IsSet to true using move semantics.

#### `public inline void `[`ClearNumSides`](#structFRHAPI__MatchMakingProfileV2_1a4b5d018076f15a9cf92d33bb7422ffb3)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a4b5d018076f15a9cf92d33bb7422ffb3"></a>

Clears the value of NumSides_Optional and sets NumSides_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_NumSides`](#structFRHAPI__MatchMakingProfileV2_1ad026e7f4b108d35da3890d6d170d65de)`()` <a id="structFRHAPI__MatchMakingProfileV2_1ad026e7f4b108d35da3890d6d170d65de"></a>

Returns the default value of NumSides.

#### `public inline FORCEINLINE int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a9fc5efe16613434e2ef094fb1a56c34b)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a9fc5efe16613434e2ef094fb1a56c34b"></a>

Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a7694ca1ca7107124ff77fc846434c1c7)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a7694ca1ca7107124ff77fc846434c1c7"></a>

Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a56bdc1029f076b27c527d9da38da0533)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a56bdc1029f076b27c527d9da38da0533"></a>

Gets the value of MaxPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a67dd46d167473aabd8fe1be2c1f6d962)`(int32 & OutValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a67dd46d167473aabd8fe1be2c1f6d962"></a>

Fills OutValue with the value of MaxPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetMaxPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfileV2_1a69f645b85f87b0e7351593b67a149768)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a69f645b85f87b0e7351593b67a149768"></a>

Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetMaxPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfileV2_1a9e5c358b935f8cd4c85e072d4ef9235a)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a9e5c358b935f8cd4c85e072d4ef9235a"></a>

Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1af2cb630630d926e481da4dd54e9dede9)`(const int32 & NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1af2cb630630d926e481da4dd54e9dede9"></a>

Sets the value of MaxPlayersPerSide_Optional and also sets MaxPlayersPerSide_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a836daf450c002b8611da49d6b6eeb4ea)`(int32 && NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a836daf450c002b8611da49d6b6eeb4ea"></a>

Sets the value of MaxPlayersPerSide_Optional and also sets MaxPlayersPerSide_IsSet to true using move semantics.

#### `public inline void `[`ClearMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a8deb6676caa04797a00ad24169150878)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a8deb6676caa04797a00ad24169150878"></a>

Clears the value of MaxPlayersPerSide_Optional and sets MaxPlayersPerSide_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_MaxPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1af879260f24db4bc370299597999985c5)`()` <a id="structFRHAPI__MatchMakingProfileV2_1af879260f24db4bc370299597999985c5"></a>

Returns the default value of MaxPlayersPerSide.

#### `public inline FORCEINLINE int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a3ab569ceea372e07078545a0b315318f)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a3ab569ceea372e07078545a0b315318f"></a>

Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a7d1a1be24c02101d870aa65aa2dc07e0)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a7d1a1be24c02101d870aa65aa2dc07e0"></a>

Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1ac4cdd88705f58de6df96150e2413242c)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1ac4cdd88705f58de6df96150e2413242c"></a>

Gets the value of MinPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a264b0c8d420c6a1aff612b2fe6c61c8f)`(int32 & OutValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a264b0c8d420c6a1aff612b2fe6c61c8f"></a>

Fills OutValue with the value of MinPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetMinPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfileV2_1ad5bc41b2553fbbe44ec2ee56442ae697)`()` <a id="structFRHAPI__MatchMakingProfileV2_1ad5bc41b2553fbbe44ec2ee56442ae697"></a>

Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetMinPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfileV2_1acfb8175169133d4b1dd29bd1bebcdcba)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1acfb8175169133d4b1dd29bd1bebcdcba"></a>

Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1aaa889b36412443802fc4d7761f395351)`(const int32 & NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1aaa889b36412443802fc4d7761f395351"></a>

Sets the value of MinPlayersPerSide_Optional and also sets MinPlayersPerSide_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a4de115a0bc2dd9870d2cc5b2108b5744)`(int32 && NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a4de115a0bc2dd9870d2cc5b2108b5744"></a>

Sets the value of MinPlayersPerSide_Optional and also sets MinPlayersPerSide_IsSet to true using move semantics.

#### `public inline void `[`ClearMinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a718d5fad0a7afd7c7d123ecf3f6561a0)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a718d5fad0a7afd7c7d123ecf3f6561a0"></a>

Clears the value of MinPlayersPerSide_Optional and sets MinPlayersPerSide_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_MinPlayersPerSide`](#structFRHAPI__MatchMakingProfileV2_1a315a9fff8dfc2ffa877ce1baa40630ad)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a315a9fff8dfc2ffa877ce1baa40630ad"></a>

Returns the default value of MinPlayersPerSide.

#### `public inline FORCEINLINE `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1afdcb0770e04d3526cbfcb5beb8f27307)`()` <a id="structFRHAPI__MatchMakingProfileV2_1afdcb0770e04d3526cbfcb5beb8f27307"></a>

Gets the value of LegacyConfig_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1af6c0059236a76b5f4f9864abf533fc87)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1af6c0059236a76b5f4f9864abf533fc87"></a>

Gets the value of LegacyConfig_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1af8fe73153d7fbb1e1a5159b4184af3d8)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1af8fe73153d7fbb1e1a5159b4184af3d8"></a>

Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1acd5fad4bf51584435f0325dc295fe4d8)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1acd5fad4bf51584435f0325dc295fe4d8"></a>

Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetLegacyConfigOrNull`](#structFRHAPI__MatchMakingProfileV2_1a88f7225f93e3648407584120213a179e)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a88f7225f93e3648407584120213a179e"></a>

Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetLegacyConfigOrNull`](#structFRHAPI__MatchMakingProfileV2_1a70077dbf72a6ce29b1707c0020b74372)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a70077dbf72a6ce29b1707c0020b74372"></a>

Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1a932d44efe258ec13b2fa679c5f714e41)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a932d44efe258ec13b2fa679c5f714e41"></a>

Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1a3e6f8231a43c28e3e7b3d21807a1059e)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a3e6f8231a43c28e3e7b3d21807a1059e"></a>

Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true using move semantics.

#### `public inline void `[`ClearLegacyConfig`](#structFRHAPI__MatchMakingProfileV2_1aa51a7cf8d677bd0f57eed39122d5d6af)`()` <a id="structFRHAPI__MatchMakingProfileV2_1aa51a7cf8d677bd0f57eed39122d5d6af"></a>

Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetDeserterId`](#structFRHAPI__MatchMakingProfileV2_1a355ef9f03c805260d01d096f8edd744f)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a355ef9f03c805260d01d096f8edd744f"></a>

Gets the value of DeserterId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDeserterId`](#structFRHAPI__MatchMakingProfileV2_1a3b8c46e0901b227d18542b010337d6a9)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a3b8c46e0901b227d18542b010337d6a9"></a>

Gets the value of DeserterId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDeserterId`](#structFRHAPI__MatchMakingProfileV2_1aa36d9ceff53c2ba9aad54d2cd5f23868)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1aa36d9ceff53c2ba9aad54d2cd5f23868"></a>

Gets the value of DeserterId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDeserterId`](#structFRHAPI__MatchMakingProfileV2_1a670eaf8ce4f0f66501c27c6215f2bbfd)`(FString & OutValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a670eaf8ce4f0f66501c27c6215f2bbfd"></a>

Fills OutValue with the value of DeserterId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetDeserterIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1ac77b92f9c244018c16fc5c5f69e6e638)`()` <a id="structFRHAPI__MatchMakingProfileV2_1ac77b92f9c244018c16fc5c5f69e6e638"></a>

Returns a pointer to DeserterId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetDeserterIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1ad7bdcc2c53698e9e0d1fca2bd69893e7)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1ad7bdcc2c53698e9e0d1fca2bd69893e7"></a>

Returns a pointer to DeserterId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDeserterId`](#structFRHAPI__MatchMakingProfileV2_1a23351d61389caa2b34d2447ce2548dbc)`(const FString & NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a23351d61389caa2b34d2447ce2548dbc"></a>

Sets the value of DeserterId_Optional and also sets DeserterId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDeserterId`](#structFRHAPI__MatchMakingProfileV2_1aef19b8b204cf394141c4e79911935f57)`(FString && NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1aef19b8b204cf394141c4e79911935f57"></a>

Sets the value of DeserterId_Optional and also sets DeserterId_IsSet to true using move semantics.

#### `public inline void `[`ClearDeserterId`](#structFRHAPI__MatchMakingProfileV2_1a8f6b926107cd9f277a465b93b2c47d19)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a8f6b926107cd9f277a465b93b2c47d19"></a>

Clears the value of DeserterId_Optional and sets DeserterId_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a00d8a6f6ae379a32df758b80bad39154)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a00d8a6f6ae379a32df758b80bad39154"></a>

Gets the value of SessionTemplateId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a2179c3ff3883d98bad37b84b0b5e823b)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a2179c3ff3883d98bad37b84b0b5e823b"></a>

Gets the value of SessionTemplateId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a987e59fdc6e028cd630e1c7bd80cfbf1)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a987e59fdc6e028cd630e1c7bd80cfbf1"></a>

Gets the value of SessionTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1af39db7c21f7b8754356e824fae0add22)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1af39db7c21f7b8754356e824fae0add22"></a>

Fills OutValue with the value of SessionTemplateId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetSessionTemplateIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1a4206115faafd3c199ed5df82935826c3)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a4206115faafd3c199ed5df82935826c3"></a>

Returns a pointer to SessionTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetSessionTemplateIdOrNull`](#structFRHAPI__MatchMakingProfileV2_1a950474ffcb357b14238de6e2ec62636c)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a950474ffcb357b14238de6e2ec62636c"></a>

Returns a pointer to SessionTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1ada00de3c51c69fb78ddf6f6738a3cab2)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1ada00de3c51c69fb78ddf6f6738a3cab2"></a>

Sets the value of SessionTemplateId_Optional and also sets SessionTemplateId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1a4c31db2b3b695846c76b654115590a9d)`(FGuid && NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a4c31db2b3b695846c76b654115590a9d"></a>

Sets the value of SessionTemplateId_Optional and also sets SessionTemplateId_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionTemplateId`](#structFRHAPI__MatchMakingProfileV2_1aa0a57023b70ac8d739eace48091a70ef)`()` <a id="structFRHAPI__MatchMakingProfileV2_1aa0a57023b70ac8d739eace48091a70ef"></a>

Clears the value of SessionTemplateId_Optional and sets SessionTemplateId_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingProfileV2_1a704da7c0a12b68a3e73920f526d2fffa)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a704da7c0a12b68a3e73920f526d2fffa"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingProfileV2_1a9421e6a8ca52506474b2316ab4002007)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a9421e6a8ca52506474b2316ab4002007"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchMakingProfileV2_1a62555ca0279a1d7864fd76b50b536f2e)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1a62555ca0279a1d7864fd76b50b536f2e"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchMakingProfileV2_1aaf0e8edff97cc90f9593ea6340f33234)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchMakingProfileV2_1aaf0e8edff97cc90f9593ea6340f33234"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchMakingProfileV2_1afa3c88201101d23b3b9f1641730e82cf)`()` <a id="structFRHAPI__MatchMakingProfileV2_1afa3c88201101d23b3b9f1641730e82cf"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchMakingProfileV2_1a3670d19304bb779cc00f595f99cc946c)`() const` <a id="structFRHAPI__MatchMakingProfileV2_1a3670d19304bb779cc00f595f99cc946c"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchMakingProfileV2_1ab8c41de3c966e24aac0f1ebfda609dd6)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1ab8c41de3c966e24aac0f1ebfda609dd6"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchMakingProfileV2_1a79772480e245eaf3d3060db597d80837)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchMakingProfileV2_1a79772480e245eaf3d3060db597d80837"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchMakingProfileV2_1a9002805ee39e14eceff5cf3acdb17c9a)`()` <a id="structFRHAPI__MatchMakingProfileV2_1a9002805ee39e14eceff5cf3acdb17c9a"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

