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
`public inline FORCEINLINE FString & `[`GetProfileId`](#structFRHAPI__MatchMakingProfile_1a0fea863fcd0879061725e3acd8cf8d3e)`()` | Gets the value of ProfileId.
`public inline FORCEINLINE const FString & `[`GetProfileId`](#structFRHAPI__MatchMakingProfile_1a130a8b750170e2dd13a65b133dd92a5e)`() const` | Gets the value of ProfileId.
`public inline FORCEINLINE void `[`SetProfileId`](#structFRHAPI__MatchMakingProfile_1a0e86033d99991cf36f0575c258a5a23f)`(const FString & NewValue)` | Sets the value of ProfileId.
`public inline FORCEINLINE void `[`SetProfileId`](#structFRHAPI__MatchMakingProfile_1a55be643e1b80526088484b4ec338f48f)`(FString && NewValue)` | Sets the value of ProfileId using move semantics.
`public inline FORCEINLINE ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1a76c13b7f0efd7254bb282813658de0d2)`()` | Gets the value of JoinMode_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1a4597434dbcb70fd9bcb9b6b4ef2d817e)`() const` | Gets the value of JoinMode_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1ac867186727e090d31fbb568fd1f4ee90)`(const ERHAPI_ProfileJoinMode & DefaultValue) const` | Gets the value of JoinMode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1a6099a2ba3dd04c897dea1ffb34241e9f)`(ERHAPI_ProfileJoinMode & OutValue) const` | Fills OutValue with the value of JoinMode_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfile_1a2107ad58248136d9b2239837f4e4fbab)`()` | Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfile_1a070a733afefb65987c063c8de6fb0914)`() const` | Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetJoinMode`](#structFRHAPI__MatchMakingProfile_1a0e8533d6d30386981df11057f56eb78b)`(const ERHAPI_ProfileJoinMode & NewValue)` | Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true.
`public inline FORCEINLINE void `[`SetJoinMode`](#structFRHAPI__MatchMakingProfile_1af1c85e0c27995cdebb433ae8d30dceeb)`(ERHAPI_ProfileJoinMode && NewValue)` | Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true using move semantics.
`public inline void `[`ClearJoinMode`](#structFRHAPI__MatchMakingProfile_1a591447779ffd6e4456be9b421b4b6382)`()` | Clears the value of JoinMode_Optional and sets JoinMode_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1ae7de385ed52818e7168fbfddc2c89f9b)`()` | Gets the value of InstanceLaunchTemplateId.
`public inline FORCEINLINE const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1a6334f792d3ca961ad94b4215f3cc684e)`() const` | Gets the value of InstanceLaunchTemplateId.
`public inline FORCEINLINE void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1a0bb5738118e8471db1c3bfb8ed38bd24)`(const FGuid & NewValue)` | Sets the value of InstanceLaunchTemplateId.
`public inline FORCEINLINE void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1ad65bd2ccd65ad8e89e9166c745abb7c2)`(FGuid && NewValue)` | Sets the value of InstanceLaunchTemplateId using move semantics.
`public inline FORCEINLINE FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfile_1a1a6e405b9e0730fe607944847483c36b)`()` | Gets the value of RankId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfile_1ada2b5d2305eade4d88aacb33388c3ca4)`() const` | Gets the value of RankId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfile_1a79f550be9968b2dfb906ed22ff0d55bb)`(const FString & DefaultValue) const` | Gets the value of RankId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRankId`](#structFRHAPI__MatchMakingProfile_1a2d1eb1b2227a52341068167c5bf36ace)`(FString & OutValue) const` | Fills OutValue with the value of RankId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRankIdOrNull`](#structFRHAPI__MatchMakingProfile_1abde8c13c66f435628de455a74b46dd3f)`()` | Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRankIdOrNull`](#structFRHAPI__MatchMakingProfile_1aef9acae7a24b96278bbb27b6669673fa)`() const` | Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__MatchMakingProfile_1aa3d6a2ab7b2daf15f27d30deef6d2fe3)`(const FString & NewValue)` | Sets the value of RankId_Optional and also sets RankId_IsSet to true.
`public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__MatchMakingProfile_1a92ce52c558140f0c99b392150cccc279)`(FString && NewValue)` | Sets the value of RankId_Optional and also sets RankId_IsSet to true using move semantics.
`public inline void `[`ClearRankId`](#structFRHAPI__MatchMakingProfile_1a7dc46b691d4bd534e1bddd8291f35fe9)`()` | Clears the value of RankId_Optional and sets RankId_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfile_1a4475a966cc67af5736c8a9683b951401)`()` | Gets the value of NumSides_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfile_1a4e6029515fa0095316a299c453fb13bc)`() const` | Gets the value of NumSides_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfile_1acadcb85566da7e4ebfee3fa342d89e2e)`(const int32 & DefaultValue) const` | Gets the value of NumSides_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetNumSides`](#structFRHAPI__MatchMakingProfile_1aea4cecc6c9415ceb7cde9b18bb7a441f)`(int32 & OutValue) const` | Fills OutValue with the value of NumSides_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetNumSidesOrNull`](#structFRHAPI__MatchMakingProfile_1ae9b84ff496313e92aaa9adfbb0f41b66)`()` | Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetNumSidesOrNull`](#structFRHAPI__MatchMakingProfile_1ab2434923f4f987fbd2efb637ffc6d13e)`() const` | Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetNumSides`](#structFRHAPI__MatchMakingProfile_1ab9660019efbdaa0658b8144c3a942a71)`(const int32 & NewValue)` | Sets the value of NumSides_Optional and also sets NumSides_IsSet to true.
`public inline FORCEINLINE void `[`SetNumSides`](#structFRHAPI__MatchMakingProfile_1ab3abe7b82e449afee677d522fc9ded5b)`(int32 && NewValue)` | Sets the value of NumSides_Optional and also sets NumSides_IsSet to true using move semantics.
`public inline void `[`ClearNumSides`](#structFRHAPI__MatchMakingProfile_1adbd3b3d2dfdf792e2ba9a3b87d4971b5)`()` | Clears the value of NumSides_Optional and sets NumSides_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_NumSides`](#structFRHAPI__MatchMakingProfile_1acb3fa743e71f8a9a488f40f243637a36)`()` | Returns the default value of NumSides.
`public inline FORCEINLINE int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a308eaccecc26283808a1ba207536dd8a)`()` | Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1ae0f556150f28015605d6ff77bee02984)`() const` | Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a0ade2ffe470d8c391dc7f7d5ae8da988)`(const int32 & DefaultValue) const` | Gets the value of MaxPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1aa5ae423e56b08b40ee0227ca86e0d2f2)`(int32 & OutValue) const` | Fills OutValue with the value of MaxPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetMaxPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfile_1a52ef503ce4bea970985601bb11c634be)`()` | Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetMaxPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfile_1ac0362ae3366b6acb0f9e691e94bfc1a2)`() const` | Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1af1c0bc3920b5da2c67d632c4ce69a7e7)`(const int32 & NewValue)` | Sets the value of MaxPlayersPerSide_Optional and also sets MaxPlayersPerSide_IsSet to true.
`public inline FORCEINLINE void `[`SetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a5769c30762a8819d4cfda54d3684f945)`(int32 && NewValue)` | Sets the value of MaxPlayersPerSide_Optional and also sets MaxPlayersPerSide_IsSet to true using move semantics.
`public inline void `[`ClearMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a9c46fa3b709180c0cb8dfa13cf8682d9)`()` | Clears the value of MaxPlayersPerSide_Optional and sets MaxPlayersPerSide_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_MaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1af9343e8744501ac32eccc700551eb06b)`()` | Returns the default value of MaxPlayersPerSide.
`public inline FORCEINLINE int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a82ec5bb5d4826038c43f435e3ee39712)`()` | Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a105d0799165d7afcd63b6ffd41d40506)`() const` | Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a13136848c84d7b7b36305891e62809bb)`(const int32 & DefaultValue) const` | Gets the value of MinPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a8d890c4e09132f04cebe894471f56d09)`(int32 & OutValue) const` | Fills OutValue with the value of MinPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetMinPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfile_1ad2042b6a83f8149ca27a2700741f6126)`()` | Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetMinPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfile_1ae2761ede2e934151aa7f23dd7c249f0a)`() const` | Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a8be299c09de6ccbb040941ca2280e647)`(const int32 & NewValue)` | Sets the value of MinPlayersPerSide_Optional and also sets MinPlayersPerSide_IsSet to true.
`public inline FORCEINLINE void `[`SetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1abd5f76449aeeb8efeb2cdfd90c8cbd9c)`(int32 && NewValue)` | Sets the value of MinPlayersPerSide_Optional and also sets MinPlayersPerSide_IsSet to true using move semantics.
`public inline void `[`ClearMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1af64883df4ee7bc9e41717b3771f1e4aa)`()` | Clears the value of MinPlayersPerSide_Optional and sets MinPlayersPerSide_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_MinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1ae9757ad0be56c76a96ceba3b2b4bc5b0)`()` | Returns the default value of MinPlayersPerSide.
`public inline FORCEINLINE FString & `[`GetDeserterId`](#structFRHAPI__MatchMakingProfile_1a0042ddeb5f6cad0f79f4933229a41c96)`()` | Gets the value of DeserterId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDeserterId`](#structFRHAPI__MatchMakingProfile_1a4d9a15c31fe5f0afb11eb20bc56b7915)`() const` | Gets the value of DeserterId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDeserterId`](#structFRHAPI__MatchMakingProfile_1acd77662984fefbbe46a691cf68f27e2a)`(const FString & DefaultValue) const` | Gets the value of DeserterId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDeserterId`](#structFRHAPI__MatchMakingProfile_1afa2dc9db3662260984aa2acae0fa591a)`(FString & OutValue) const` | Fills OutValue with the value of DeserterId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetDeserterIdOrNull`](#structFRHAPI__MatchMakingProfile_1a1a3e6dafd0786e510e45713fb6eea0fc)`()` | Returns a pointer to DeserterId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetDeserterIdOrNull`](#structFRHAPI__MatchMakingProfile_1a5cf7ef1d4686e57c2474d08c726aa5dc)`() const` | Returns a pointer to DeserterId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDeserterId`](#structFRHAPI__MatchMakingProfile_1a7f8ba34c0ffbadb62a676eb6ee933439)`(const FString & NewValue)` | Sets the value of DeserterId_Optional and also sets DeserterId_IsSet to true.
`public inline FORCEINLINE void `[`SetDeserterId`](#structFRHAPI__MatchMakingProfile_1a8d175d5be931e00df23e51089c737dfb)`(FString && NewValue)` | Sets the value of DeserterId_Optional and also sets DeserterId_IsSet to true using move semantics.
`public inline void `[`ClearDeserterId`](#structFRHAPI__MatchMakingProfile_1a7aeaae90106e6c977fb15571ddc71aac)`()` | Clears the value of DeserterId_Optional and sets DeserterId_IsSet to false.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1ae8470b072b4849d6c63542a6eea5391f)`()` | Gets the value of LegacyConfig_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1ab2f481e2348294b63607c05b3bf8d2c3)`() const` | Gets the value of LegacyConfig_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a7dedcbc8310fc56c6ce8d9e14740d1df)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a802707bcb2a7c027e055b3c7effa57ee)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__MatchMakingProfile_1a15d1c2300e67cc96a0dadac8b7c05ea8)`()` | Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__MatchMakingProfile_1a1ec103fc8112412db85022a570e0fd18)`() const` | Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a70b6b3461d9bfc0e88b60972ce27b1ff)`(const TMap< FString, FString > & NewValue)` | Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true.
`public inline FORCEINLINE void `[`SetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1adc6a011668ed2e5cb4b8de4f4eb01737)`(TMap< FString, FString > && NewValue)` | Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true using move semantics.
`public inline void `[`ClearLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a9c2b21c1908fd7cc906ee9b8adbb4581)`()` | Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false.

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

#### `public inline FORCEINLINE FString & `[`GetProfileId`](#structFRHAPI__MatchMakingProfile_1a0fea863fcd0879061725e3acd8cf8d3e)`()` <a id="structFRHAPI__MatchMakingProfile_1a0fea863fcd0879061725e3acd8cf8d3e"></a>

Gets the value of ProfileId.

#### `public inline FORCEINLINE const FString & `[`GetProfileId`](#structFRHAPI__MatchMakingProfile_1a130a8b750170e2dd13a65b133dd92a5e)`() const` <a id="structFRHAPI__MatchMakingProfile_1a130a8b750170e2dd13a65b133dd92a5e"></a>

Gets the value of ProfileId.

#### `public inline FORCEINLINE void `[`SetProfileId`](#structFRHAPI__MatchMakingProfile_1a0e86033d99991cf36f0575c258a5a23f)`(const FString & NewValue)` <a id="structFRHAPI__MatchMakingProfile_1a0e86033d99991cf36f0575c258a5a23f"></a>

Sets the value of ProfileId.

#### `public inline FORCEINLINE void `[`SetProfileId`](#structFRHAPI__MatchMakingProfile_1a55be643e1b80526088484b4ec338f48f)`(FString && NewValue)` <a id="structFRHAPI__MatchMakingProfile_1a55be643e1b80526088484b4ec338f48f"></a>

Sets the value of ProfileId using move semantics.

#### `public inline FORCEINLINE ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1a76c13b7f0efd7254bb282813658de0d2)`()` <a id="structFRHAPI__MatchMakingProfile_1a76c13b7f0efd7254bb282813658de0d2"></a>

Gets the value of JoinMode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1a4597434dbcb70fd9bcb9b6b4ef2d817e)`() const` <a id="structFRHAPI__MatchMakingProfile_1a4597434dbcb70fd9bcb9b6b4ef2d817e"></a>

Gets the value of JoinMode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1ac867186727e090d31fbb568fd1f4ee90)`(const ERHAPI_ProfileJoinMode & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfile_1ac867186727e090d31fbb568fd1f4ee90"></a>

Gets the value of JoinMode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1a6099a2ba3dd04c897dea1ffb34241e9f)`(ERHAPI_ProfileJoinMode & OutValue) const` <a id="structFRHAPI__MatchMakingProfile_1a6099a2ba3dd04c897dea1ffb34241e9f"></a>

Fills OutValue with the value of JoinMode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfile_1a2107ad58248136d9b2239837f4e4fbab)`()` <a id="structFRHAPI__MatchMakingProfile_1a2107ad58248136d9b2239837f4e4fbab"></a>

Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfile_1a070a733afefb65987c063c8de6fb0914)`() const` <a id="structFRHAPI__MatchMakingProfile_1a070a733afefb65987c063c8de6fb0914"></a>

Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetJoinMode`](#structFRHAPI__MatchMakingProfile_1a0e8533d6d30386981df11057f56eb78b)`(const ERHAPI_ProfileJoinMode & NewValue)` <a id="structFRHAPI__MatchMakingProfile_1a0e8533d6d30386981df11057f56eb78b"></a>

Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true.

#### `public inline FORCEINLINE void `[`SetJoinMode`](#structFRHAPI__MatchMakingProfile_1af1c85e0c27995cdebb433ae8d30dceeb)`(ERHAPI_ProfileJoinMode && NewValue)` <a id="structFRHAPI__MatchMakingProfile_1af1c85e0c27995cdebb433ae8d30dceeb"></a>

Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinMode`](#structFRHAPI__MatchMakingProfile_1a591447779ffd6e4456be9b421b4b6382)`()` <a id="structFRHAPI__MatchMakingProfile_1a591447779ffd6e4456be9b421b4b6382"></a>

Clears the value of JoinMode_Optional and sets JoinMode_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1ae7de385ed52818e7168fbfddc2c89f9b)`()` <a id="structFRHAPI__MatchMakingProfile_1ae7de385ed52818e7168fbfddc2c89f9b"></a>

Gets the value of InstanceLaunchTemplateId.

#### `public inline FORCEINLINE const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1a6334f792d3ca961ad94b4215f3cc684e)`() const` <a id="structFRHAPI__MatchMakingProfile_1a6334f792d3ca961ad94b4215f3cc684e"></a>

Gets the value of InstanceLaunchTemplateId.

#### `public inline FORCEINLINE void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1a0bb5738118e8471db1c3bfb8ed38bd24)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchMakingProfile_1a0bb5738118e8471db1c3bfb8ed38bd24"></a>

Sets the value of InstanceLaunchTemplateId.

#### `public inline FORCEINLINE void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1ad65bd2ccd65ad8e89e9166c745abb7c2)`(FGuid && NewValue)` <a id="structFRHAPI__MatchMakingProfile_1ad65bd2ccd65ad8e89e9166c745abb7c2"></a>

Sets the value of InstanceLaunchTemplateId using move semantics.

#### `public inline FORCEINLINE FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfile_1a1a6e405b9e0730fe607944847483c36b)`()` <a id="structFRHAPI__MatchMakingProfile_1a1a6e405b9e0730fe607944847483c36b"></a>

Gets the value of RankId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfile_1ada2b5d2305eade4d88aacb33388c3ca4)`() const` <a id="structFRHAPI__MatchMakingProfile_1ada2b5d2305eade4d88aacb33388c3ca4"></a>

Gets the value of RankId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfile_1a79f550be9968b2dfb906ed22ff0d55bb)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfile_1a79f550be9968b2dfb906ed22ff0d55bb"></a>

Gets the value of RankId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRankId`](#structFRHAPI__MatchMakingProfile_1a2d1eb1b2227a52341068167c5bf36ace)`(FString & OutValue) const` <a id="structFRHAPI__MatchMakingProfile_1a2d1eb1b2227a52341068167c5bf36ace"></a>

Fills OutValue with the value of RankId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRankIdOrNull`](#structFRHAPI__MatchMakingProfile_1abde8c13c66f435628de455a74b46dd3f)`()` <a id="structFRHAPI__MatchMakingProfile_1abde8c13c66f435628de455a74b46dd3f"></a>

Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRankIdOrNull`](#structFRHAPI__MatchMakingProfile_1aef9acae7a24b96278bbb27b6669673fa)`() const` <a id="structFRHAPI__MatchMakingProfile_1aef9acae7a24b96278bbb27b6669673fa"></a>

Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__MatchMakingProfile_1aa3d6a2ab7b2daf15f27d30deef6d2fe3)`(const FString & NewValue)` <a id="structFRHAPI__MatchMakingProfile_1aa3d6a2ab7b2daf15f27d30deef6d2fe3"></a>

Sets the value of RankId_Optional and also sets RankId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRankId`](#structFRHAPI__MatchMakingProfile_1a92ce52c558140f0c99b392150cccc279)`(FString && NewValue)` <a id="structFRHAPI__MatchMakingProfile_1a92ce52c558140f0c99b392150cccc279"></a>

Sets the value of RankId_Optional and also sets RankId_IsSet to true using move semantics.

#### `public inline void `[`ClearRankId`](#structFRHAPI__MatchMakingProfile_1a7dc46b691d4bd534e1bddd8291f35fe9)`()` <a id="structFRHAPI__MatchMakingProfile_1a7dc46b691d4bd534e1bddd8291f35fe9"></a>

Clears the value of RankId_Optional and sets RankId_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfile_1a4475a966cc67af5736c8a9683b951401)`()` <a id="structFRHAPI__MatchMakingProfile_1a4475a966cc67af5736c8a9683b951401"></a>

Gets the value of NumSides_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfile_1a4e6029515fa0095316a299c453fb13bc)`() const` <a id="structFRHAPI__MatchMakingProfile_1a4e6029515fa0095316a299c453fb13bc"></a>

Gets the value of NumSides_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfile_1acadcb85566da7e4ebfee3fa342d89e2e)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfile_1acadcb85566da7e4ebfee3fa342d89e2e"></a>

Gets the value of NumSides_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetNumSides`](#structFRHAPI__MatchMakingProfile_1aea4cecc6c9415ceb7cde9b18bb7a441f)`(int32 & OutValue) const` <a id="structFRHAPI__MatchMakingProfile_1aea4cecc6c9415ceb7cde9b18bb7a441f"></a>

Fills OutValue with the value of NumSides_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetNumSidesOrNull`](#structFRHAPI__MatchMakingProfile_1ae9b84ff496313e92aaa9adfbb0f41b66)`()` <a id="structFRHAPI__MatchMakingProfile_1ae9b84ff496313e92aaa9adfbb0f41b66"></a>

Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetNumSidesOrNull`](#structFRHAPI__MatchMakingProfile_1ab2434923f4f987fbd2efb637ffc6d13e)`() const` <a id="structFRHAPI__MatchMakingProfile_1ab2434923f4f987fbd2efb637ffc6d13e"></a>

Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetNumSides`](#structFRHAPI__MatchMakingProfile_1ab9660019efbdaa0658b8144c3a942a71)`(const int32 & NewValue)` <a id="structFRHAPI__MatchMakingProfile_1ab9660019efbdaa0658b8144c3a942a71"></a>

Sets the value of NumSides_Optional and also sets NumSides_IsSet to true.

#### `public inline FORCEINLINE void `[`SetNumSides`](#structFRHAPI__MatchMakingProfile_1ab3abe7b82e449afee677d522fc9ded5b)`(int32 && NewValue)` <a id="structFRHAPI__MatchMakingProfile_1ab3abe7b82e449afee677d522fc9ded5b"></a>

Sets the value of NumSides_Optional and also sets NumSides_IsSet to true using move semantics.

#### `public inline void `[`ClearNumSides`](#structFRHAPI__MatchMakingProfile_1adbd3b3d2dfdf792e2ba9a3b87d4971b5)`()` <a id="structFRHAPI__MatchMakingProfile_1adbd3b3d2dfdf792e2ba9a3b87d4971b5"></a>

Clears the value of NumSides_Optional and sets NumSides_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_NumSides`](#structFRHAPI__MatchMakingProfile_1acb3fa743e71f8a9a488f40f243637a36)`()` <a id="structFRHAPI__MatchMakingProfile_1acb3fa743e71f8a9a488f40f243637a36"></a>

Returns the default value of NumSides.

#### `public inline FORCEINLINE int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a308eaccecc26283808a1ba207536dd8a)`()` <a id="structFRHAPI__MatchMakingProfile_1a308eaccecc26283808a1ba207536dd8a"></a>

Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1ae0f556150f28015605d6ff77bee02984)`() const` <a id="structFRHAPI__MatchMakingProfile_1ae0f556150f28015605d6ff77bee02984"></a>

Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a0ade2ffe470d8c391dc7f7d5ae8da988)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfile_1a0ade2ffe470d8c391dc7f7d5ae8da988"></a>

Gets the value of MaxPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1aa5ae423e56b08b40ee0227ca86e0d2f2)`(int32 & OutValue) const` <a id="structFRHAPI__MatchMakingProfile_1aa5ae423e56b08b40ee0227ca86e0d2f2"></a>

Fills OutValue with the value of MaxPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetMaxPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfile_1a52ef503ce4bea970985601bb11c634be)`()` <a id="structFRHAPI__MatchMakingProfile_1a52ef503ce4bea970985601bb11c634be"></a>

Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetMaxPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfile_1ac0362ae3366b6acb0f9e691e94bfc1a2)`() const` <a id="structFRHAPI__MatchMakingProfile_1ac0362ae3366b6acb0f9e691e94bfc1a2"></a>

Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1af1c0bc3920b5da2c67d632c4ce69a7e7)`(const int32 & NewValue)` <a id="structFRHAPI__MatchMakingProfile_1af1c0bc3920b5da2c67d632c4ce69a7e7"></a>

Sets the value of MaxPlayersPerSide_Optional and also sets MaxPlayersPerSide_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a5769c30762a8819d4cfda54d3684f945)`(int32 && NewValue)` <a id="structFRHAPI__MatchMakingProfile_1a5769c30762a8819d4cfda54d3684f945"></a>

Sets the value of MaxPlayersPerSide_Optional and also sets MaxPlayersPerSide_IsSet to true using move semantics.

#### `public inline void `[`ClearMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a9c46fa3b709180c0cb8dfa13cf8682d9)`()` <a id="structFRHAPI__MatchMakingProfile_1a9c46fa3b709180c0cb8dfa13cf8682d9"></a>

Clears the value of MaxPlayersPerSide_Optional and sets MaxPlayersPerSide_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_MaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1af9343e8744501ac32eccc700551eb06b)`()` <a id="structFRHAPI__MatchMakingProfile_1af9343e8744501ac32eccc700551eb06b"></a>

Returns the default value of MaxPlayersPerSide.

#### `public inline FORCEINLINE int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a82ec5bb5d4826038c43f435e3ee39712)`()` <a id="structFRHAPI__MatchMakingProfile_1a82ec5bb5d4826038c43f435e3ee39712"></a>

Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a105d0799165d7afcd63b6ffd41d40506)`() const` <a id="structFRHAPI__MatchMakingProfile_1a105d0799165d7afcd63b6ffd41d40506"></a>

Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a13136848c84d7b7b36305891e62809bb)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfile_1a13136848c84d7b7b36305891e62809bb"></a>

Gets the value of MinPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a8d890c4e09132f04cebe894471f56d09)`(int32 & OutValue) const` <a id="structFRHAPI__MatchMakingProfile_1a8d890c4e09132f04cebe894471f56d09"></a>

Fills OutValue with the value of MinPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetMinPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfile_1ad2042b6a83f8149ca27a2700741f6126)`()` <a id="structFRHAPI__MatchMakingProfile_1ad2042b6a83f8149ca27a2700741f6126"></a>

Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetMinPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfile_1ae2761ede2e934151aa7f23dd7c249f0a)`() const` <a id="structFRHAPI__MatchMakingProfile_1ae2761ede2e934151aa7f23dd7c249f0a"></a>

Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a8be299c09de6ccbb040941ca2280e647)`(const int32 & NewValue)` <a id="structFRHAPI__MatchMakingProfile_1a8be299c09de6ccbb040941ca2280e647"></a>

Sets the value of MinPlayersPerSide_Optional and also sets MinPlayersPerSide_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1abd5f76449aeeb8efeb2cdfd90c8cbd9c)`(int32 && NewValue)` <a id="structFRHAPI__MatchMakingProfile_1abd5f76449aeeb8efeb2cdfd90c8cbd9c"></a>

Sets the value of MinPlayersPerSide_Optional and also sets MinPlayersPerSide_IsSet to true using move semantics.

#### `public inline void `[`ClearMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1af64883df4ee7bc9e41717b3771f1e4aa)`()` <a id="structFRHAPI__MatchMakingProfile_1af64883df4ee7bc9e41717b3771f1e4aa"></a>

Clears the value of MinPlayersPerSide_Optional and sets MinPlayersPerSide_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_MinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1ae9757ad0be56c76a96ceba3b2b4bc5b0)`()` <a id="structFRHAPI__MatchMakingProfile_1ae9757ad0be56c76a96ceba3b2b4bc5b0"></a>

Returns the default value of MinPlayersPerSide.

#### `public inline FORCEINLINE FString & `[`GetDeserterId`](#structFRHAPI__MatchMakingProfile_1a0042ddeb5f6cad0f79f4933229a41c96)`()` <a id="structFRHAPI__MatchMakingProfile_1a0042ddeb5f6cad0f79f4933229a41c96"></a>

Gets the value of DeserterId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDeserterId`](#structFRHAPI__MatchMakingProfile_1a4d9a15c31fe5f0afb11eb20bc56b7915)`() const` <a id="structFRHAPI__MatchMakingProfile_1a4d9a15c31fe5f0afb11eb20bc56b7915"></a>

Gets the value of DeserterId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDeserterId`](#structFRHAPI__MatchMakingProfile_1acd77662984fefbbe46a691cf68f27e2a)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfile_1acd77662984fefbbe46a691cf68f27e2a"></a>

Gets the value of DeserterId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDeserterId`](#structFRHAPI__MatchMakingProfile_1afa2dc9db3662260984aa2acae0fa591a)`(FString & OutValue) const` <a id="structFRHAPI__MatchMakingProfile_1afa2dc9db3662260984aa2acae0fa591a"></a>

Fills OutValue with the value of DeserterId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetDeserterIdOrNull`](#structFRHAPI__MatchMakingProfile_1a1a3e6dafd0786e510e45713fb6eea0fc)`()` <a id="structFRHAPI__MatchMakingProfile_1a1a3e6dafd0786e510e45713fb6eea0fc"></a>

Returns a pointer to DeserterId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetDeserterIdOrNull`](#structFRHAPI__MatchMakingProfile_1a5cf7ef1d4686e57c2474d08c726aa5dc)`() const` <a id="structFRHAPI__MatchMakingProfile_1a5cf7ef1d4686e57c2474d08c726aa5dc"></a>

Returns a pointer to DeserterId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDeserterId`](#structFRHAPI__MatchMakingProfile_1a7f8ba34c0ffbadb62a676eb6ee933439)`(const FString & NewValue)` <a id="structFRHAPI__MatchMakingProfile_1a7f8ba34c0ffbadb62a676eb6ee933439"></a>

Sets the value of DeserterId_Optional and also sets DeserterId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDeserterId`](#structFRHAPI__MatchMakingProfile_1a8d175d5be931e00df23e51089c737dfb)`(FString && NewValue)` <a id="structFRHAPI__MatchMakingProfile_1a8d175d5be931e00df23e51089c737dfb"></a>

Sets the value of DeserterId_Optional and also sets DeserterId_IsSet to true using move semantics.

#### `public inline void `[`ClearDeserterId`](#structFRHAPI__MatchMakingProfile_1a7aeaae90106e6c977fb15571ddc71aac)`()` <a id="structFRHAPI__MatchMakingProfile_1a7aeaae90106e6c977fb15571ddc71aac"></a>

Clears the value of DeserterId_Optional and sets DeserterId_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1ae8470b072b4849d6c63542a6eea5391f)`()` <a id="structFRHAPI__MatchMakingProfile_1ae8470b072b4849d6c63542a6eea5391f"></a>

Gets the value of LegacyConfig_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1ab2f481e2348294b63607c05b3bf8d2c3)`() const` <a id="structFRHAPI__MatchMakingProfile_1ab2f481e2348294b63607c05b3bf8d2c3"></a>

Gets the value of LegacyConfig_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a7dedcbc8310fc56c6ce8d9e14740d1df)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfile_1a7dedcbc8310fc56c6ce8d9e14740d1df"></a>

Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a802707bcb2a7c027e055b3c7effa57ee)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchMakingProfile_1a802707bcb2a7c027e055b3c7effa57ee"></a>

Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__MatchMakingProfile_1a15d1c2300e67cc96a0dadac8b7c05ea8)`()` <a id="structFRHAPI__MatchMakingProfile_1a15d1c2300e67cc96a0dadac8b7c05ea8"></a>

Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__MatchMakingProfile_1a1ec103fc8112412db85022a570e0fd18)`() const` <a id="structFRHAPI__MatchMakingProfile_1a1ec103fc8112412db85022a570e0fd18"></a>

Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a70b6b3461d9bfc0e88b60972ce27b1ff)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchMakingProfile_1a70b6b3461d9bfc0e88b60972ce27b1ff"></a>

Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1adc6a011668ed2e5cb4b8de4f4eb01737)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchMakingProfile_1adc6a011668ed2e5cb4b8de4f4eb01737"></a>

Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true using move semantics.

#### `public inline void `[`ClearLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a9c2b21c1908fd7cc906ee9b8adbb4581)`()` <a id="structFRHAPI__MatchMakingProfile_1a9c2b21c1908fd7cc906ee9b8adbb4581"></a>

Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false.

