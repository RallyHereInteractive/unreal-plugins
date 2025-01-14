---
title: RHAPI_MatchMakingProfile
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchMakingProfile`](#structFRHAPI__MatchMakingProfile) | DEPRECATED A profile that describes what pools of players a session will be a part of when matchmaking.

## struct `FRHAPI_MatchMakingProfile` <a id="structFRHAPI__MatchMakingProfile"></a>

```
struct FRHAPI_MatchMakingProfile
  : public FRHAPI_Model
```

DEPRECATED A profile that describes what pools of players a session will be a part of when matchmaking.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`ProfileId`](#structFRHAPI__MatchMakingProfile_1a0a74ac27207ff64f83a281aa95a98b2c) | ID of the matchmaking profile to join.
`public ERHAPI_ProfileJoinMode `[`JoinMode_Optional`](#structFRHAPI__MatchMakingProfile_1a854bc2af42f6a6733037de752bb1f2a8) | What mode to set on the matchmaking profile (normal, backfill etc)
`public bool `[`JoinMode_IsSet`](#structFRHAPI__MatchMakingProfile_1abc8efa50c12813c551f98d5d6c75cf88) | true if JoinMode_Optional has been set to a value
`public FGuid `[`InstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1a4646c558004a653ad7af7820b1a7184d) | Which instance template to use when launching a match in this profile.
`public FString `[`RankId_Optional`](#structFRHAPI__MatchMakingProfile_1a9261282df8310485db627cb7a3443291) | Which rank this profile should use MMR from to make matches from, and update at the end of match (1v1 MMR or 2v2 MMR for example)
`public bool `[`RankId_IsSet`](#structFRHAPI__MatchMakingProfile_1aec74c353c9e3f0af024461fbef8ee0f7) | true if RankId_Optional has been set to a value
`public int32 `[`NumSides_Optional`](#structFRHAPI__MatchMakingProfile_1a3820d9b2543a5df9bd65faab136bda1d) | The number of sides a game in this profile will have (2 in a 1v1 and 3 in a 1v1v1 for example.
`public bool `[`NumSides_IsSet`](#structFRHAPI__MatchMakingProfile_1a787fb7e15a241dc3f0179996773f7e2b) | true if NumSides_Optional has been set to a value
`public int32 `[`MaxPlayersPerSide_Optional`](#structFRHAPI__MatchMakingProfile_1a3ce22f882f970f664cf8eaebf0e1ff32) | The maximum number of players that can be on each team.
`public bool `[`MaxPlayersPerSide_IsSet`](#structFRHAPI__MatchMakingProfile_1ad9511e9b83286bb09049fc0f2587fe0a) | true if MaxPlayersPerSide_Optional has been set to a value
`public int32 `[`MinPlayersPerSide_Optional`](#structFRHAPI__MatchMakingProfile_1a5032bbef5186c72c2bf53d3c26693663) | The minimum number of players that can be on each team.
`public bool `[`MinPlayersPerSide_IsSet`](#structFRHAPI__MatchMakingProfile_1a1d23e5a2ed43e8601e063d469bdf6665) | true if MinPlayersPerSide_Optional has been set to a value
`public FString `[`DeserterId_Optional`](#structFRHAPI__MatchMakingProfile_1aecba27efe2c0feb18a258b67083060b1) | Unused in the legacy profile. Must use V2 for deserter functionality. Which deserter this profile should check before allowing players to join matchmaking.
`public bool `[`DeserterId_IsSet`](#structFRHAPI__MatchMakingProfile_1ab52fb23e2cfa194e5a39e1dadf71a4fc) | true if DeserterId_Optional has been set to a value
`public TMap< FString, FString > `[`LegacyConfig_Optional`](#structFRHAPI__MatchMakingProfile_1a82f7edc14d19bacfa218226e96c57f29) | Legacy config to help migrate clients.
`public bool `[`LegacyConfig_IsSet`](#structFRHAPI__MatchMakingProfile_1a932134d92b44ad0db39f10a8a48b7d87) | true if LegacyConfig_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingProfile_1a162876bd8b36f997ed11d29021a55554)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingProfile_1a9fff6c29f0b33276add17b875f7ec951)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetProfileId`](#structFRHAPI__MatchMakingProfile_1ad360f31866ff599c58dc174b3dacdabe)`()` | Gets the value of ProfileId.
`public inline const FString & `[`GetProfileId`](#structFRHAPI__MatchMakingProfile_1aea4ff03fe9bba3518b2845c4ff6a54e5)`() const` | Gets the value of ProfileId.
`public inline void `[`SetProfileId`](#structFRHAPI__MatchMakingProfile_1a75a79fc82cda780232b1d68861875939)`(const FString & NewValue)` | Sets the value of ProfileId.
`public inline void `[`SetProfileId`](#structFRHAPI__MatchMakingProfile_1a41f72f7affaf7b35f4f5de192a5600b7)`(FString && NewValue)` | Sets the value of ProfileId using move semantics.
`public inline ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1a7c95f60b3a6a93a29debc1bbec83706f)`()` | Gets the value of JoinMode_Optional, regardless of it having been set.
`public inline const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1abeb38224276114b7d6263435bb46759b)`() const` | Gets the value of JoinMode_Optional, regardless of it having been set.
`public inline const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1ab63f4ac51d2630b3a5feebe09d1f2636)`(const ERHAPI_ProfileJoinMode & DefaultValue) const` | Gets the value of JoinMode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1a804d6b3e9d062aa6ce63c5ed5c85e8b1)`(ERHAPI_ProfileJoinMode & OutValue) const` | Fills OutValue with the value of JoinMode_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfile_1ac78b951cb4a5e8d594afe2e152e4b047)`()` | Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfile_1abdecd9eca10be878f911e05c7d8e7d98)`() const` | Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinMode`](#structFRHAPI__MatchMakingProfile_1a6570aa8677645458a0b3226ffb6913c3)`(const ERHAPI_ProfileJoinMode & NewValue)` | Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true.
`public inline void `[`SetJoinMode`](#structFRHAPI__MatchMakingProfile_1a85da3c3bb87fe7da54a65017a46f5a77)`(ERHAPI_ProfileJoinMode && NewValue)` | Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true using move semantics.
`public inline void `[`ClearJoinMode`](#structFRHAPI__MatchMakingProfile_1a591447779ffd6e4456be9b421b4b6382)`()` | Clears the value of JoinMode_Optional and sets JoinMode_IsSet to false.
`public inline bool `[`IsJoinModeSet`](#structFRHAPI__MatchMakingProfile_1a19598b375c12e75a8eb3b8f022d49014)`() const` | Checks whether JoinMode_Optional has been set.
`public inline FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1aede3f8196839a121578204afd6eb2741)`()` | Gets the value of InstanceLaunchTemplateId.
`public inline const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1aeed6db20aaf9f437d44e6c9d3be2557e)`() const` | Gets the value of InstanceLaunchTemplateId.
`public inline void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1ad4ad08b74d8557bae754cef02aba6bf3)`(const FGuid & NewValue)` | Sets the value of InstanceLaunchTemplateId.
`public inline void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1a77021cf81f00a266d43380530bbf196d)`(FGuid && NewValue)` | Sets the value of InstanceLaunchTemplateId using move semantics.
`public inline FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfile_1aa9a38ae83810f028c3ee6706a20e3b83)`()` | Gets the value of RankId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfile_1aa19f3706f7ba74797513eb802cd6afbe)`() const` | Gets the value of RankId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfile_1a06b0480869e69057d0a319dce0c31e95)`(const FString & DefaultValue) const` | Gets the value of RankId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRankId`](#structFRHAPI__MatchMakingProfile_1a2654bd34bf6966a75c0a1df48f720bee)`(FString & OutValue) const` | Fills OutValue with the value of RankId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRankIdOrNull`](#structFRHAPI__MatchMakingProfile_1a6e004c06c53a9bb44b722c8ad27e6c88)`()` | Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRankIdOrNull`](#structFRHAPI__MatchMakingProfile_1aa7d20a8719c2d0733552e7f1daad9f69)`() const` | Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRankId`](#structFRHAPI__MatchMakingProfile_1a1ef437a34c32fbbc5727a29b7dad4d33)`(const FString & NewValue)` | Sets the value of RankId_Optional and also sets RankId_IsSet to true.
`public inline void `[`SetRankId`](#structFRHAPI__MatchMakingProfile_1ab25bc08be630a30fbc8be659b7a3c302)`(FString && NewValue)` | Sets the value of RankId_Optional and also sets RankId_IsSet to true using move semantics.
`public inline void `[`ClearRankId`](#structFRHAPI__MatchMakingProfile_1a7dc46b691d4bd534e1bddd8291f35fe9)`()` | Clears the value of RankId_Optional and sets RankId_IsSet to false.
`public inline bool `[`IsRankIdSet`](#structFRHAPI__MatchMakingProfile_1a8fd6f3f9689f6fe0e7e4379674438a75)`() const` | Checks whether RankId_Optional has been set.
`public inline int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfile_1a8157251446d2c5be2a23ae4a78f7dc8f)`()` | Gets the value of NumSides_Optional, regardless of it having been set.
`public inline const int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfile_1a3dbbd0c92de1fb975d25ad7c0f1a2e29)`() const` | Gets the value of NumSides_Optional, regardless of it having been set.
`public inline const int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfile_1abff97b6b2c834646447c759a3821103d)`(const int32 & DefaultValue) const` | Gets the value of NumSides_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNumSides`](#structFRHAPI__MatchMakingProfile_1a76fc0cd134b968f0a6b598b666a13913)`(int32 & OutValue) const` | Fills OutValue with the value of NumSides_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetNumSidesOrNull`](#structFRHAPI__MatchMakingProfile_1aa992a3eacbad1c5b8feab8162164fb44)`()` | Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetNumSidesOrNull`](#structFRHAPI__MatchMakingProfile_1a392b83d4e6525063a5250aaa5c604f42)`() const` | Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNumSides`](#structFRHAPI__MatchMakingProfile_1a6f0407aa678aa90ad20fb3a5d4de00a1)`(const int32 & NewValue)` | Sets the value of NumSides_Optional and also sets NumSides_IsSet to true.
`public inline void `[`SetNumSides`](#structFRHAPI__MatchMakingProfile_1ad411e7793995cd83c39861644b1855bf)`(int32 && NewValue)` | Sets the value of NumSides_Optional and also sets NumSides_IsSet to true using move semantics.
`public inline void `[`ClearNumSides`](#structFRHAPI__MatchMakingProfile_1adbd3b3d2dfdf792e2ba9a3b87d4971b5)`()` | Clears the value of NumSides_Optional and sets NumSides_IsSet to false.
`public inline bool `[`IsNumSidesSet`](#structFRHAPI__MatchMakingProfile_1a8303b173ce97176edbad9145702e0c01)`() const` | Checks whether NumSides_Optional has been set.
`public inline bool `[`IsNumSidesDefaultValue`](#structFRHAPI__MatchMakingProfile_1a04c527c2a8e245ec1111b55ac1d57afe)`() const` | Returns true if NumSides_Optional is set and matches the default value.
`public inline void `[`SetNumSidesToDefault`](#structFRHAPI__MatchMakingProfile_1acdd3709142b1d73ae8c210dfd0b56e2b)`()` | Sets the value of NumSides_Optional to its default and also sets NumSides_IsSet to true.
`public inline int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a8ed26712509bb29294f2a7cccbb8d5a2)`()` | Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1abdab95aaee636113392e908b09e51bd5)`() const` | Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1ae5ac32405ba73107361fbdb07546738c)`(const int32 & DefaultValue) const` | Gets the value of MaxPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1aa829a94b1580b6c316a633128fcd4a30)`(int32 & OutValue) const` | Fills OutValue with the value of MaxPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetMaxPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfile_1ad1d67c5eff96633711aa575a9cf9cfc4)`()` | Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetMaxPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfile_1ae2d4d9f9b8bc842ead853baf734abdc0)`() const` | Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1adcb37c36945a47f7895d51cc1236b7da)`(const int32 & NewValue)` | Sets the value of MaxPlayersPerSide_Optional and also sets MaxPlayersPerSide_IsSet to true.
`public inline void `[`SetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1ae50df21d62224a4d8341867da61d7e0e)`(int32 && NewValue)` | Sets the value of MaxPlayersPerSide_Optional and also sets MaxPlayersPerSide_IsSet to true using move semantics.
`public inline void `[`ClearMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a9c46fa3b709180c0cb8dfa13cf8682d9)`()` | Clears the value of MaxPlayersPerSide_Optional and sets MaxPlayersPerSide_IsSet to false.
`public inline bool `[`IsMaxPlayersPerSideSet`](#structFRHAPI__MatchMakingProfile_1ae26151a9fc0473ea6d4521f8e6d2f179)`() const` | Checks whether MaxPlayersPerSide_Optional has been set.
`public inline bool `[`IsMaxPlayersPerSideDefaultValue`](#structFRHAPI__MatchMakingProfile_1af3ea11a219f7818274befe51f51aaac6)`() const` | Returns true if MaxPlayersPerSide_Optional is set and matches the default value.
`public inline void `[`SetMaxPlayersPerSideToDefault`](#structFRHAPI__MatchMakingProfile_1a46cf62bfdb9a5f3a4f2b27cca1b0d547)`()` | Sets the value of MaxPlayersPerSide_Optional to its default and also sets MaxPlayersPerSide_IsSet to true.
`public inline int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1aa0a92894d261a9f7b539279e850c946d)`()` | Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a08616f15c1431056900daa123d1d2add)`() const` | Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1aff64a5b1582adc55de189e8251a521a9)`(const int32 & DefaultValue) const` | Gets the value of MinPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a69530af9e9ffafc85ea9e2e0906b9b0a)`(int32 & OutValue) const` | Fills OutValue with the value of MinPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetMinPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfile_1a3d441fa8bcb5c0fc76cee5bd083ebfd4)`()` | Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetMinPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfile_1a301d1fc9430dc62f05a98e1cff3f787f)`() const` | Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1ad18693e430c8113725f707443b6b1181)`(const int32 & NewValue)` | Sets the value of MinPlayersPerSide_Optional and also sets MinPlayersPerSide_IsSet to true.
`public inline void `[`SetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a3ff66363220b6a615b91de5caa9a7292)`(int32 && NewValue)` | Sets the value of MinPlayersPerSide_Optional and also sets MinPlayersPerSide_IsSet to true using move semantics.
`public inline void `[`ClearMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1af64883df4ee7bc9e41717b3771f1e4aa)`()` | Clears the value of MinPlayersPerSide_Optional and sets MinPlayersPerSide_IsSet to false.
`public inline bool `[`IsMinPlayersPerSideSet`](#structFRHAPI__MatchMakingProfile_1afbab75856f3144f5279a964c610ac0b6)`() const` | Checks whether MinPlayersPerSide_Optional has been set.
`public inline bool `[`IsMinPlayersPerSideDefaultValue`](#structFRHAPI__MatchMakingProfile_1a1b8b05015fb5b760433bc1c3b892bb91)`() const` | Returns true if MinPlayersPerSide_Optional is set and matches the default value.
`public inline void `[`SetMinPlayersPerSideToDefault`](#structFRHAPI__MatchMakingProfile_1a139922c7aab9fa67996bc30d4c44955d)`()` | Sets the value of MinPlayersPerSide_Optional to its default and also sets MinPlayersPerSide_IsSet to true.
`public inline FString & `[`GetDeserterId`](#structFRHAPI__MatchMakingProfile_1a936fc1db9ed44c41fecf8aa50ba8cc91)`()` | Gets the value of DeserterId_Optional, regardless of it having been set.
`public inline const FString & `[`GetDeserterId`](#structFRHAPI__MatchMakingProfile_1a130e497f651676b90f2b88460e241ebe)`() const` | Gets the value of DeserterId_Optional, regardless of it having been set.
`public inline const FString & `[`GetDeserterId`](#structFRHAPI__MatchMakingProfile_1a221dbdfbff5b329fc63738a78864f404)`(const FString & DefaultValue) const` | Gets the value of DeserterId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDeserterId`](#structFRHAPI__MatchMakingProfile_1ae1a6c0b922014b309fc56a417c49fe84)`(FString & OutValue) const` | Fills OutValue with the value of DeserterId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDeserterIdOrNull`](#structFRHAPI__MatchMakingProfile_1a1fa149359a1addf961519caf039a3439)`()` | Returns a pointer to DeserterId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDeserterIdOrNull`](#structFRHAPI__MatchMakingProfile_1aeb2958c7bb96d2edca9ee13d93f6353d)`() const` | Returns a pointer to DeserterId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDeserterId`](#structFRHAPI__MatchMakingProfile_1abbc1d7137d7d2dc53a6b0e76c56bdefc)`(const FString & NewValue)` | Sets the value of DeserterId_Optional and also sets DeserterId_IsSet to true.
`public inline void `[`SetDeserterId`](#structFRHAPI__MatchMakingProfile_1a9b3a836f9821f4b884ffab172c5e769a)`(FString && NewValue)` | Sets the value of DeserterId_Optional and also sets DeserterId_IsSet to true using move semantics.
`public inline void `[`ClearDeserterId`](#structFRHAPI__MatchMakingProfile_1a7aeaae90106e6c977fb15571ddc71aac)`()` | Clears the value of DeserterId_Optional and sets DeserterId_IsSet to false.
`public inline bool `[`IsDeserterIdSet`](#structFRHAPI__MatchMakingProfile_1ab01e53cfa62200ae1062ff9d9fa0b5be)`() const` | Checks whether DeserterId_Optional has been set.
`public inline TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a1bca913ce1cb179539a3e55ea888c8f9)`()` | Gets the value of LegacyConfig_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a37975d280261c699165a5830bb2a302b)`() const` | Gets the value of LegacyConfig_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1ab92e2398cec9eacbf2dab73581712e88)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a3811ac51de751ba8ce37e957f7c692c8)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__MatchMakingProfile_1ae9cf80b657cee18855548c7abfd5bb4d)`()` | Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__MatchMakingProfile_1a7ebfbdc10bcc9d54b8c99032324998d1)`() const` | Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1ab531ffcbb142de9e345f45f20eb95476)`(const TMap< FString, FString > & NewValue)` | Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true.
`public inline void `[`SetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a3fdce3d9965b662a6c57c0f15504cbdb)`(TMap< FString, FString > && NewValue)` | Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true using move semantics.
`public inline void `[`ClearLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a9c2b21c1908fd7cc906ee9b8adbb4581)`()` | Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false.
`public inline bool `[`IsLegacyConfigSet`](#structFRHAPI__MatchMakingProfile_1adbae2c744225c105f3e5a12c94e31cd8)`() const` | Checks whether LegacyConfig_Optional has been set.

### Members

#### `public FString `[`ProfileId`](#structFRHAPI__MatchMakingProfile_1a0a74ac27207ff64f83a281aa95a98b2c) <a id="structFRHAPI__MatchMakingProfile_1a0a74ac27207ff64f83a281aa95a98b2c"></a>

ID of the matchmaking profile to join.

#### `public ERHAPI_ProfileJoinMode `[`JoinMode_Optional`](#structFRHAPI__MatchMakingProfile_1a854bc2af42f6a6733037de752bb1f2a8) <a id="structFRHAPI__MatchMakingProfile_1a854bc2af42f6a6733037de752bb1f2a8"></a>

What mode to set on the matchmaking profile (normal, backfill etc)

#### `public bool `[`JoinMode_IsSet`](#structFRHAPI__MatchMakingProfile_1abc8efa50c12813c551f98d5d6c75cf88) <a id="structFRHAPI__MatchMakingProfile_1abc8efa50c12813c551f98d5d6c75cf88"></a>

true if JoinMode_Optional has been set to a value

#### `public FGuid `[`InstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1a4646c558004a653ad7af7820b1a7184d) <a id="structFRHAPI__MatchMakingProfile_1a4646c558004a653ad7af7820b1a7184d"></a>

Which instance template to use when launching a match in this profile.

#### `public FString `[`RankId_Optional`](#structFRHAPI__MatchMakingProfile_1a9261282df8310485db627cb7a3443291) <a id="structFRHAPI__MatchMakingProfile_1a9261282df8310485db627cb7a3443291"></a>

Which rank this profile should use MMR from to make matches from, and update at the end of match (1v1 MMR or 2v2 MMR for example)

#### `public bool `[`RankId_IsSet`](#structFRHAPI__MatchMakingProfile_1aec74c353c9e3f0af024461fbef8ee0f7) <a id="structFRHAPI__MatchMakingProfile_1aec74c353c9e3f0af024461fbef8ee0f7"></a>

true if RankId_Optional has been set to a value

#### `public int32 `[`NumSides_Optional`](#structFRHAPI__MatchMakingProfile_1a3820d9b2543a5df9bd65faab136bda1d) <a id="structFRHAPI__MatchMakingProfile_1a3820d9b2543a5df9bd65faab136bda1d"></a>

The number of sides a game in this profile will have (2 in a 1v1 and 3 in a 1v1v1 for example.

#### `public bool `[`NumSides_IsSet`](#structFRHAPI__MatchMakingProfile_1a787fb7e15a241dc3f0179996773f7e2b) <a id="structFRHAPI__MatchMakingProfile_1a787fb7e15a241dc3f0179996773f7e2b"></a>

true if NumSides_Optional has been set to a value

#### `public int32 `[`MaxPlayersPerSide_Optional`](#structFRHAPI__MatchMakingProfile_1a3ce22f882f970f664cf8eaebf0e1ff32) <a id="structFRHAPI__MatchMakingProfile_1a3ce22f882f970f664cf8eaebf0e1ff32"></a>

The maximum number of players that can be on each team.

#### `public bool `[`MaxPlayersPerSide_IsSet`](#structFRHAPI__MatchMakingProfile_1ad9511e9b83286bb09049fc0f2587fe0a) <a id="structFRHAPI__MatchMakingProfile_1ad9511e9b83286bb09049fc0f2587fe0a"></a>

true if MaxPlayersPerSide_Optional has been set to a value

#### `public int32 `[`MinPlayersPerSide_Optional`](#structFRHAPI__MatchMakingProfile_1a5032bbef5186c72c2bf53d3c26693663) <a id="structFRHAPI__MatchMakingProfile_1a5032bbef5186c72c2bf53d3c26693663"></a>

The minimum number of players that can be on each team.

#### `public bool `[`MinPlayersPerSide_IsSet`](#structFRHAPI__MatchMakingProfile_1a1d23e5a2ed43e8601e063d469bdf6665) <a id="structFRHAPI__MatchMakingProfile_1a1d23e5a2ed43e8601e063d469bdf6665"></a>

true if MinPlayersPerSide_Optional has been set to a value

#### `public FString `[`DeserterId_Optional`](#structFRHAPI__MatchMakingProfile_1aecba27efe2c0feb18a258b67083060b1) <a id="structFRHAPI__MatchMakingProfile_1aecba27efe2c0feb18a258b67083060b1"></a>

Unused in the legacy profile. Must use V2 for deserter functionality. Which deserter this profile should check before allowing players to join matchmaking.

#### `public bool `[`DeserterId_IsSet`](#structFRHAPI__MatchMakingProfile_1ab52fb23e2cfa194e5a39e1dadf71a4fc) <a id="structFRHAPI__MatchMakingProfile_1ab52fb23e2cfa194e5a39e1dadf71a4fc"></a>

true if DeserterId_Optional has been set to a value

#### `public TMap< FString, FString > `[`LegacyConfig_Optional`](#structFRHAPI__MatchMakingProfile_1a82f7edc14d19bacfa218226e96c57f29) <a id="structFRHAPI__MatchMakingProfile_1a82f7edc14d19bacfa218226e96c57f29"></a>

Legacy config to help migrate clients.

#### `public bool `[`LegacyConfig_IsSet`](#structFRHAPI__MatchMakingProfile_1a932134d92b44ad0db39f10a8a48b7d87) <a id="structFRHAPI__MatchMakingProfile_1a932134d92b44ad0db39f10a8a48b7d87"></a>

true if LegacyConfig_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingProfile_1a162876bd8b36f997ed11d29021a55554)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchMakingProfile_1a162876bd8b36f997ed11d29021a55554"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingProfile_1a9fff6c29f0b33276add17b875f7ec951)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchMakingProfile_1a9fff6c29f0b33276add17b875f7ec951"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetProfileId`](#structFRHAPI__MatchMakingProfile_1ad360f31866ff599c58dc174b3dacdabe)`()` <a id="structFRHAPI__MatchMakingProfile_1ad360f31866ff599c58dc174b3dacdabe"></a>

Gets the value of ProfileId.

#### `public inline const FString & `[`GetProfileId`](#structFRHAPI__MatchMakingProfile_1aea4ff03fe9bba3518b2845c4ff6a54e5)`() const` <a id="structFRHAPI__MatchMakingProfile_1aea4ff03fe9bba3518b2845c4ff6a54e5"></a>

Gets the value of ProfileId.

#### `public inline void `[`SetProfileId`](#structFRHAPI__MatchMakingProfile_1a75a79fc82cda780232b1d68861875939)`(const FString & NewValue)` <a id="structFRHAPI__MatchMakingProfile_1a75a79fc82cda780232b1d68861875939"></a>

Sets the value of ProfileId.

#### `public inline void `[`SetProfileId`](#structFRHAPI__MatchMakingProfile_1a41f72f7affaf7b35f4f5de192a5600b7)`(FString && NewValue)` <a id="structFRHAPI__MatchMakingProfile_1a41f72f7affaf7b35f4f5de192a5600b7"></a>

Sets the value of ProfileId using move semantics.

#### `public inline ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1a7c95f60b3a6a93a29debc1bbec83706f)`()` <a id="structFRHAPI__MatchMakingProfile_1a7c95f60b3a6a93a29debc1bbec83706f"></a>

Gets the value of JoinMode_Optional, regardless of it having been set.

#### `public inline const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1abeb38224276114b7d6263435bb46759b)`() const` <a id="structFRHAPI__MatchMakingProfile_1abeb38224276114b7d6263435bb46759b"></a>

Gets the value of JoinMode_Optional, regardless of it having been set.

#### `public inline const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1ab63f4ac51d2630b3a5feebe09d1f2636)`(const ERHAPI_ProfileJoinMode & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfile_1ab63f4ac51d2630b3a5feebe09d1f2636"></a>

Gets the value of JoinMode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1a804d6b3e9d062aa6ce63c5ed5c85e8b1)`(ERHAPI_ProfileJoinMode & OutValue) const` <a id="structFRHAPI__MatchMakingProfile_1a804d6b3e9d062aa6ce63c5ed5c85e8b1"></a>

Fills OutValue with the value of JoinMode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfile_1ac78b951cb4a5e8d594afe2e152e4b047)`()` <a id="structFRHAPI__MatchMakingProfile_1ac78b951cb4a5e8d594afe2e152e4b047"></a>

Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfile_1abdecd9eca10be878f911e05c7d8e7d98)`() const` <a id="structFRHAPI__MatchMakingProfile_1abdecd9eca10be878f911e05c7d8e7d98"></a>

Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetJoinMode`](#structFRHAPI__MatchMakingProfile_1a6570aa8677645458a0b3226ffb6913c3)`(const ERHAPI_ProfileJoinMode & NewValue)` <a id="structFRHAPI__MatchMakingProfile_1a6570aa8677645458a0b3226ffb6913c3"></a>

Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true.

#### `public inline void `[`SetJoinMode`](#structFRHAPI__MatchMakingProfile_1a85da3c3bb87fe7da54a65017a46f5a77)`(ERHAPI_ProfileJoinMode && NewValue)` <a id="structFRHAPI__MatchMakingProfile_1a85da3c3bb87fe7da54a65017a46f5a77"></a>

Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinMode`](#structFRHAPI__MatchMakingProfile_1a591447779ffd6e4456be9b421b4b6382)`()` <a id="structFRHAPI__MatchMakingProfile_1a591447779ffd6e4456be9b421b4b6382"></a>

Clears the value of JoinMode_Optional and sets JoinMode_IsSet to false.

#### `public inline bool `[`IsJoinModeSet`](#structFRHAPI__MatchMakingProfile_1a19598b375c12e75a8eb3b8f022d49014)`() const` <a id="structFRHAPI__MatchMakingProfile_1a19598b375c12e75a8eb3b8f022d49014"></a>

Checks whether JoinMode_Optional has been set.

#### `public inline FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1aede3f8196839a121578204afd6eb2741)`()` <a id="structFRHAPI__MatchMakingProfile_1aede3f8196839a121578204afd6eb2741"></a>

Gets the value of InstanceLaunchTemplateId.

#### `public inline const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1aeed6db20aaf9f437d44e6c9d3be2557e)`() const` <a id="structFRHAPI__MatchMakingProfile_1aeed6db20aaf9f437d44e6c9d3be2557e"></a>

Gets the value of InstanceLaunchTemplateId.

#### `public inline void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1ad4ad08b74d8557bae754cef02aba6bf3)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchMakingProfile_1ad4ad08b74d8557bae754cef02aba6bf3"></a>

Sets the value of InstanceLaunchTemplateId.

#### `public inline void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1a77021cf81f00a266d43380530bbf196d)`(FGuid && NewValue)` <a id="structFRHAPI__MatchMakingProfile_1a77021cf81f00a266d43380530bbf196d"></a>

Sets the value of InstanceLaunchTemplateId using move semantics.

#### `public inline FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfile_1aa9a38ae83810f028c3ee6706a20e3b83)`()` <a id="structFRHAPI__MatchMakingProfile_1aa9a38ae83810f028c3ee6706a20e3b83"></a>

Gets the value of RankId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfile_1aa19f3706f7ba74797513eb802cd6afbe)`() const` <a id="structFRHAPI__MatchMakingProfile_1aa19f3706f7ba74797513eb802cd6afbe"></a>

Gets the value of RankId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfile_1a06b0480869e69057d0a319dce0c31e95)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfile_1a06b0480869e69057d0a319dce0c31e95"></a>

Gets the value of RankId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRankId`](#structFRHAPI__MatchMakingProfile_1a2654bd34bf6966a75c0a1df48f720bee)`(FString & OutValue) const` <a id="structFRHAPI__MatchMakingProfile_1a2654bd34bf6966a75c0a1df48f720bee"></a>

Fills OutValue with the value of RankId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRankIdOrNull`](#structFRHAPI__MatchMakingProfile_1a6e004c06c53a9bb44b722c8ad27e6c88)`()` <a id="structFRHAPI__MatchMakingProfile_1a6e004c06c53a9bb44b722c8ad27e6c88"></a>

Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRankIdOrNull`](#structFRHAPI__MatchMakingProfile_1aa7d20a8719c2d0733552e7f1daad9f69)`() const` <a id="structFRHAPI__MatchMakingProfile_1aa7d20a8719c2d0733552e7f1daad9f69"></a>

Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRankId`](#structFRHAPI__MatchMakingProfile_1a1ef437a34c32fbbc5727a29b7dad4d33)`(const FString & NewValue)` <a id="structFRHAPI__MatchMakingProfile_1a1ef437a34c32fbbc5727a29b7dad4d33"></a>

Sets the value of RankId_Optional and also sets RankId_IsSet to true.

#### `public inline void `[`SetRankId`](#structFRHAPI__MatchMakingProfile_1ab25bc08be630a30fbc8be659b7a3c302)`(FString && NewValue)` <a id="structFRHAPI__MatchMakingProfile_1ab25bc08be630a30fbc8be659b7a3c302"></a>

Sets the value of RankId_Optional and also sets RankId_IsSet to true using move semantics.

#### `public inline void `[`ClearRankId`](#structFRHAPI__MatchMakingProfile_1a7dc46b691d4bd534e1bddd8291f35fe9)`()` <a id="structFRHAPI__MatchMakingProfile_1a7dc46b691d4bd534e1bddd8291f35fe9"></a>

Clears the value of RankId_Optional and sets RankId_IsSet to false.

#### `public inline bool `[`IsRankIdSet`](#structFRHAPI__MatchMakingProfile_1a8fd6f3f9689f6fe0e7e4379674438a75)`() const` <a id="structFRHAPI__MatchMakingProfile_1a8fd6f3f9689f6fe0e7e4379674438a75"></a>

Checks whether RankId_Optional has been set.

#### `public inline int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfile_1a8157251446d2c5be2a23ae4a78f7dc8f)`()` <a id="structFRHAPI__MatchMakingProfile_1a8157251446d2c5be2a23ae4a78f7dc8f"></a>

Gets the value of NumSides_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfile_1a3dbbd0c92de1fb975d25ad7c0f1a2e29)`() const` <a id="structFRHAPI__MatchMakingProfile_1a3dbbd0c92de1fb975d25ad7c0f1a2e29"></a>

Gets the value of NumSides_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfile_1abff97b6b2c834646447c759a3821103d)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfile_1abff97b6b2c834646447c759a3821103d"></a>

Gets the value of NumSides_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetNumSides`](#structFRHAPI__MatchMakingProfile_1a76fc0cd134b968f0a6b598b666a13913)`(int32 & OutValue) const` <a id="structFRHAPI__MatchMakingProfile_1a76fc0cd134b968f0a6b598b666a13913"></a>

Fills OutValue with the value of NumSides_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetNumSidesOrNull`](#structFRHAPI__MatchMakingProfile_1aa992a3eacbad1c5b8feab8162164fb44)`()` <a id="structFRHAPI__MatchMakingProfile_1aa992a3eacbad1c5b8feab8162164fb44"></a>

Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetNumSidesOrNull`](#structFRHAPI__MatchMakingProfile_1a392b83d4e6525063a5250aaa5c604f42)`() const` <a id="structFRHAPI__MatchMakingProfile_1a392b83d4e6525063a5250aaa5c604f42"></a>

Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetNumSides`](#structFRHAPI__MatchMakingProfile_1a6f0407aa678aa90ad20fb3a5d4de00a1)`(const int32 & NewValue)` <a id="structFRHAPI__MatchMakingProfile_1a6f0407aa678aa90ad20fb3a5d4de00a1"></a>

Sets the value of NumSides_Optional and also sets NumSides_IsSet to true.

#### `public inline void `[`SetNumSides`](#structFRHAPI__MatchMakingProfile_1ad411e7793995cd83c39861644b1855bf)`(int32 && NewValue)` <a id="structFRHAPI__MatchMakingProfile_1ad411e7793995cd83c39861644b1855bf"></a>

Sets the value of NumSides_Optional and also sets NumSides_IsSet to true using move semantics.

#### `public inline void `[`ClearNumSides`](#structFRHAPI__MatchMakingProfile_1adbd3b3d2dfdf792e2ba9a3b87d4971b5)`()` <a id="structFRHAPI__MatchMakingProfile_1adbd3b3d2dfdf792e2ba9a3b87d4971b5"></a>

Clears the value of NumSides_Optional and sets NumSides_IsSet to false.

#### `public inline bool `[`IsNumSidesSet`](#structFRHAPI__MatchMakingProfile_1a8303b173ce97176edbad9145702e0c01)`() const` <a id="structFRHAPI__MatchMakingProfile_1a8303b173ce97176edbad9145702e0c01"></a>

Checks whether NumSides_Optional has been set.

#### `public inline bool `[`IsNumSidesDefaultValue`](#structFRHAPI__MatchMakingProfile_1a04c527c2a8e245ec1111b55ac1d57afe)`() const` <a id="structFRHAPI__MatchMakingProfile_1a04c527c2a8e245ec1111b55ac1d57afe"></a>

Returns true if NumSides_Optional is set and matches the default value.

#### `public inline void `[`SetNumSidesToDefault`](#structFRHAPI__MatchMakingProfile_1acdd3709142b1d73ae8c210dfd0b56e2b)`()` <a id="structFRHAPI__MatchMakingProfile_1acdd3709142b1d73ae8c210dfd0b56e2b"></a>

Sets the value of NumSides_Optional to its default and also sets NumSides_IsSet to true.

#### `public inline int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a8ed26712509bb29294f2a7cccbb8d5a2)`()` <a id="structFRHAPI__MatchMakingProfile_1a8ed26712509bb29294f2a7cccbb8d5a2"></a>

Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1abdab95aaee636113392e908b09e51bd5)`() const` <a id="structFRHAPI__MatchMakingProfile_1abdab95aaee636113392e908b09e51bd5"></a>

Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1ae5ac32405ba73107361fbdb07546738c)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfile_1ae5ac32405ba73107361fbdb07546738c"></a>

Gets the value of MaxPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1aa829a94b1580b6c316a633128fcd4a30)`(int32 & OutValue) const` <a id="structFRHAPI__MatchMakingProfile_1aa829a94b1580b6c316a633128fcd4a30"></a>

Fills OutValue with the value of MaxPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetMaxPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfile_1ad1d67c5eff96633711aa575a9cf9cfc4)`()` <a id="structFRHAPI__MatchMakingProfile_1ad1d67c5eff96633711aa575a9cf9cfc4"></a>

Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetMaxPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfile_1ae2d4d9f9b8bc842ead853baf734abdc0)`() const` <a id="structFRHAPI__MatchMakingProfile_1ae2d4d9f9b8bc842ead853baf734abdc0"></a>

Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1adcb37c36945a47f7895d51cc1236b7da)`(const int32 & NewValue)` <a id="structFRHAPI__MatchMakingProfile_1adcb37c36945a47f7895d51cc1236b7da"></a>

Sets the value of MaxPlayersPerSide_Optional and also sets MaxPlayersPerSide_IsSet to true.

#### `public inline void `[`SetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1ae50df21d62224a4d8341867da61d7e0e)`(int32 && NewValue)` <a id="structFRHAPI__MatchMakingProfile_1ae50df21d62224a4d8341867da61d7e0e"></a>

Sets the value of MaxPlayersPerSide_Optional and also sets MaxPlayersPerSide_IsSet to true using move semantics.

#### `public inline void `[`ClearMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a9c46fa3b709180c0cb8dfa13cf8682d9)`()` <a id="structFRHAPI__MatchMakingProfile_1a9c46fa3b709180c0cb8dfa13cf8682d9"></a>

Clears the value of MaxPlayersPerSide_Optional and sets MaxPlayersPerSide_IsSet to false.

#### `public inline bool `[`IsMaxPlayersPerSideSet`](#structFRHAPI__MatchMakingProfile_1ae26151a9fc0473ea6d4521f8e6d2f179)`() const` <a id="structFRHAPI__MatchMakingProfile_1ae26151a9fc0473ea6d4521f8e6d2f179"></a>

Checks whether MaxPlayersPerSide_Optional has been set.

#### `public inline bool `[`IsMaxPlayersPerSideDefaultValue`](#structFRHAPI__MatchMakingProfile_1af3ea11a219f7818274befe51f51aaac6)`() const` <a id="structFRHAPI__MatchMakingProfile_1af3ea11a219f7818274befe51f51aaac6"></a>

Returns true if MaxPlayersPerSide_Optional is set and matches the default value.

#### `public inline void `[`SetMaxPlayersPerSideToDefault`](#structFRHAPI__MatchMakingProfile_1a46cf62bfdb9a5f3a4f2b27cca1b0d547)`()` <a id="structFRHAPI__MatchMakingProfile_1a46cf62bfdb9a5f3a4f2b27cca1b0d547"></a>

Sets the value of MaxPlayersPerSide_Optional to its default and also sets MaxPlayersPerSide_IsSet to true.

#### `public inline int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1aa0a92894d261a9f7b539279e850c946d)`()` <a id="structFRHAPI__MatchMakingProfile_1aa0a92894d261a9f7b539279e850c946d"></a>

Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a08616f15c1431056900daa123d1d2add)`() const` <a id="structFRHAPI__MatchMakingProfile_1a08616f15c1431056900daa123d1d2add"></a>

Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1aff64a5b1582adc55de189e8251a521a9)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfile_1aff64a5b1582adc55de189e8251a521a9"></a>

Gets the value of MinPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a69530af9e9ffafc85ea9e2e0906b9b0a)`(int32 & OutValue) const` <a id="structFRHAPI__MatchMakingProfile_1a69530af9e9ffafc85ea9e2e0906b9b0a"></a>

Fills OutValue with the value of MinPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetMinPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfile_1a3d441fa8bcb5c0fc76cee5bd083ebfd4)`()` <a id="structFRHAPI__MatchMakingProfile_1a3d441fa8bcb5c0fc76cee5bd083ebfd4"></a>

Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetMinPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfile_1a301d1fc9430dc62f05a98e1cff3f787f)`() const` <a id="structFRHAPI__MatchMakingProfile_1a301d1fc9430dc62f05a98e1cff3f787f"></a>

Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1ad18693e430c8113725f707443b6b1181)`(const int32 & NewValue)` <a id="structFRHAPI__MatchMakingProfile_1ad18693e430c8113725f707443b6b1181"></a>

Sets the value of MinPlayersPerSide_Optional and also sets MinPlayersPerSide_IsSet to true.

#### `public inline void `[`SetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a3ff66363220b6a615b91de5caa9a7292)`(int32 && NewValue)` <a id="structFRHAPI__MatchMakingProfile_1a3ff66363220b6a615b91de5caa9a7292"></a>

Sets the value of MinPlayersPerSide_Optional and also sets MinPlayersPerSide_IsSet to true using move semantics.

#### `public inline void `[`ClearMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1af64883df4ee7bc9e41717b3771f1e4aa)`()` <a id="structFRHAPI__MatchMakingProfile_1af64883df4ee7bc9e41717b3771f1e4aa"></a>

Clears the value of MinPlayersPerSide_Optional and sets MinPlayersPerSide_IsSet to false.

#### `public inline bool `[`IsMinPlayersPerSideSet`](#structFRHAPI__MatchMakingProfile_1afbab75856f3144f5279a964c610ac0b6)`() const` <a id="structFRHAPI__MatchMakingProfile_1afbab75856f3144f5279a964c610ac0b6"></a>

Checks whether MinPlayersPerSide_Optional has been set.

#### `public inline bool `[`IsMinPlayersPerSideDefaultValue`](#structFRHAPI__MatchMakingProfile_1a1b8b05015fb5b760433bc1c3b892bb91)`() const` <a id="structFRHAPI__MatchMakingProfile_1a1b8b05015fb5b760433bc1c3b892bb91"></a>

Returns true if MinPlayersPerSide_Optional is set and matches the default value.

#### `public inline void `[`SetMinPlayersPerSideToDefault`](#structFRHAPI__MatchMakingProfile_1a139922c7aab9fa67996bc30d4c44955d)`()` <a id="structFRHAPI__MatchMakingProfile_1a139922c7aab9fa67996bc30d4c44955d"></a>

Sets the value of MinPlayersPerSide_Optional to its default and also sets MinPlayersPerSide_IsSet to true.

#### `public inline FString & `[`GetDeserterId`](#structFRHAPI__MatchMakingProfile_1a936fc1db9ed44c41fecf8aa50ba8cc91)`()` <a id="structFRHAPI__MatchMakingProfile_1a936fc1db9ed44c41fecf8aa50ba8cc91"></a>

Gets the value of DeserterId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDeserterId`](#structFRHAPI__MatchMakingProfile_1a130e497f651676b90f2b88460e241ebe)`() const` <a id="structFRHAPI__MatchMakingProfile_1a130e497f651676b90f2b88460e241ebe"></a>

Gets the value of DeserterId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDeserterId`](#structFRHAPI__MatchMakingProfile_1a221dbdfbff5b329fc63738a78864f404)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfile_1a221dbdfbff5b329fc63738a78864f404"></a>

Gets the value of DeserterId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDeserterId`](#structFRHAPI__MatchMakingProfile_1ae1a6c0b922014b309fc56a417c49fe84)`(FString & OutValue) const` <a id="structFRHAPI__MatchMakingProfile_1ae1a6c0b922014b309fc56a417c49fe84"></a>

Fills OutValue with the value of DeserterId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetDeserterIdOrNull`](#structFRHAPI__MatchMakingProfile_1a1fa149359a1addf961519caf039a3439)`()` <a id="structFRHAPI__MatchMakingProfile_1a1fa149359a1addf961519caf039a3439"></a>

Returns a pointer to DeserterId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetDeserterIdOrNull`](#structFRHAPI__MatchMakingProfile_1aeb2958c7bb96d2edca9ee13d93f6353d)`() const` <a id="structFRHAPI__MatchMakingProfile_1aeb2958c7bb96d2edca9ee13d93f6353d"></a>

Returns a pointer to DeserterId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDeserterId`](#structFRHAPI__MatchMakingProfile_1abbc1d7137d7d2dc53a6b0e76c56bdefc)`(const FString & NewValue)` <a id="structFRHAPI__MatchMakingProfile_1abbc1d7137d7d2dc53a6b0e76c56bdefc"></a>

Sets the value of DeserterId_Optional and also sets DeserterId_IsSet to true.

#### `public inline void `[`SetDeserterId`](#structFRHAPI__MatchMakingProfile_1a9b3a836f9821f4b884ffab172c5e769a)`(FString && NewValue)` <a id="structFRHAPI__MatchMakingProfile_1a9b3a836f9821f4b884ffab172c5e769a"></a>

Sets the value of DeserterId_Optional and also sets DeserterId_IsSet to true using move semantics.

#### `public inline void `[`ClearDeserterId`](#structFRHAPI__MatchMakingProfile_1a7aeaae90106e6c977fb15571ddc71aac)`()` <a id="structFRHAPI__MatchMakingProfile_1a7aeaae90106e6c977fb15571ddc71aac"></a>

Clears the value of DeserterId_Optional and sets DeserterId_IsSet to false.

#### `public inline bool `[`IsDeserterIdSet`](#structFRHAPI__MatchMakingProfile_1ab01e53cfa62200ae1062ff9d9fa0b5be)`() const` <a id="structFRHAPI__MatchMakingProfile_1ab01e53cfa62200ae1062ff9d9fa0b5be"></a>

Checks whether DeserterId_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a1bca913ce1cb179539a3e55ea888c8f9)`()` <a id="structFRHAPI__MatchMakingProfile_1a1bca913ce1cb179539a3e55ea888c8f9"></a>

Gets the value of LegacyConfig_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a37975d280261c699165a5830bb2a302b)`() const` <a id="structFRHAPI__MatchMakingProfile_1a37975d280261c699165a5830bb2a302b"></a>

Gets the value of LegacyConfig_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1ab92e2398cec9eacbf2dab73581712e88)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfile_1ab92e2398cec9eacbf2dab73581712e88"></a>

Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a3811ac51de751ba8ce37e957f7c692c8)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchMakingProfile_1a3811ac51de751ba8ce37e957f7c692c8"></a>

Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__MatchMakingProfile_1ae9cf80b657cee18855548c7abfd5bb4d)`()` <a id="structFRHAPI__MatchMakingProfile_1ae9cf80b657cee18855548c7abfd5bb4d"></a>

Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__MatchMakingProfile_1a7ebfbdc10bcc9d54b8c99032324998d1)`() const` <a id="structFRHAPI__MatchMakingProfile_1a7ebfbdc10bcc9d54b8c99032324998d1"></a>

Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1ab531ffcbb142de9e345f45f20eb95476)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchMakingProfile_1ab531ffcbb142de9e345f45f20eb95476"></a>

Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true.

#### `public inline void `[`SetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a3fdce3d9965b662a6c57c0f15504cbdb)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchMakingProfile_1a3fdce3d9965b662a6c57c0f15504cbdb"></a>

Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true using move semantics.

#### `public inline void `[`ClearLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a9c2b21c1908fd7cc906ee9b8adbb4581)`()` <a id="structFRHAPI__MatchMakingProfile_1a9c2b21c1908fd7cc906ee9b8adbb4581"></a>

Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false.

#### `public inline bool `[`IsLegacyConfigSet`](#structFRHAPI__MatchMakingProfile_1adbae2c744225c105f3e5a12c94e31cd8)`() const` <a id="structFRHAPI__MatchMakingProfile_1adbae2c744225c105f3e5a12c94e31cd8"></a>

Checks whether LegacyConfig_Optional has been set.

