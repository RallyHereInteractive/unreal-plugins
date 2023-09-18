# RHAPI_MatchMakingProfile <a id="group__RHAPI__MatchMakingProfile"></a>

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

#### Summary

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
`public TMap< FString, FString > `[`LegacyConfig_Optional`](#structFRHAPI__MatchMakingProfile_1a82f7edc14d19bacfa218226e96c57f29) | Legacy config to help migrate clients.
`public bool `[`LegacyConfig_IsSet`](#structFRHAPI__MatchMakingProfile_1a932134d92b44ad0db39f10a8a48b7d87) | true if LegacyConfig_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingProfile_1a926c25fdf3917f9ec57e8965ba90b371)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingProfile_1aec99c0e46c947e020304609dd64d0022)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetProfileId`](#structFRHAPI__MatchMakingProfile_1a325009e6d686c3e1062170544f98bda4)`()` | Gets the value of ProfileId.
`public inline const FString & `[`GetProfileId`](#structFRHAPI__MatchMakingProfile_1a846e1b7751a84856c1c0bf69fbb9ec4f)`() const` | Gets the value of ProfileId.
`public inline void `[`SetProfileId`](#structFRHAPI__MatchMakingProfile_1af35b3cec1e43338b9816c114d03853e2)`(FString NewValue)` | Sets the value of ProfileId.
`public inline ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1a938fc2592de88267b7dc2a257bff0db7)`()` | Gets the value of JoinMode_Optional, regardless of it having been set.
`public inline const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1a62cee2b7fd57fd26acce3b36146da19c)`() const` | Gets the value of JoinMode_Optional, regardless of it having been set.
`public inline const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1af075cc3ac35d1d46de55755ffc562268)`(const ERHAPI_ProfileJoinMode & DefaultValue) const` | Gets the value of JoinMode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1a804d6b3e9d062aa6ce63c5ed5c85e8b1)`(ERHAPI_ProfileJoinMode & OutValue) const` | Fills OutValue with the value of JoinMode_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfile_1aaccd82d364438fb9298719c8d6da902b)`()` | Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfile_1a5d96eb392d7f13c45145fe0b36d84f22)`() const` | Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinMode`](#structFRHAPI__MatchMakingProfile_1afa311bd029ba4c1e4f0865a50037cc50)`(ERHAPI_ProfileJoinMode NewValue)` | Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true.
`public inline void `[`ClearJoinMode`](#structFRHAPI__MatchMakingProfile_1a591447779ffd6e4456be9b421b4b6382)`()` | Clears the value of JoinMode_Optional and sets JoinMode_IsSet to false.
`public inline FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1ac68534da0a153d27eb2bb1353852a8ac)`()` | Gets the value of InstanceLaunchTemplateId.
`public inline const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1a437c471d232a1aa430f1d7b6b3672f46)`() const` | Gets the value of InstanceLaunchTemplateId.
`public inline void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1ab839256414fa37f1002a23e9fc0b9db2)`(FGuid NewValue)` | Sets the value of InstanceLaunchTemplateId.
`public inline FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfile_1a64d7eba8baa4071a6a0449a1abad5e8c)`()` | Gets the value of RankId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfile_1abead1b6b01af270126dff29b8f52d287)`() const` | Gets the value of RankId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfile_1acbe0ea351644f65368300679cbab4204)`(const FString & DefaultValue) const` | Gets the value of RankId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRankId`](#structFRHAPI__MatchMakingProfile_1a2654bd34bf6966a75c0a1df48f720bee)`(FString & OutValue) const` | Fills OutValue with the value of RankId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRankIdOrNull`](#structFRHAPI__MatchMakingProfile_1adfeb85505b614beb1fcd69fc550b717c)`()` | Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRankIdOrNull`](#structFRHAPI__MatchMakingProfile_1aa2455ca07cbc7fc4d75b1a0952ccf99c)`() const` | Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRankId`](#structFRHAPI__MatchMakingProfile_1ab020b41c164077af04163874218dbbdf)`(FString NewValue)` | Sets the value of RankId_Optional and also sets RankId_IsSet to true.
`public inline void `[`ClearRankId`](#structFRHAPI__MatchMakingProfile_1a7dc46b691d4bd534e1bddd8291f35fe9)`()` | Clears the value of RankId_Optional and sets RankId_IsSet to false.
`public inline int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfile_1a85cb479ab18626077b15bdc95a3345d7)`()` | Gets the value of NumSides_Optional, regardless of it having been set.
`public inline const int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfile_1a0e6af571f53001e6120fa14df4d2a81e)`() const` | Gets the value of NumSides_Optional, regardless of it having been set.
`public inline const int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfile_1aeb49bf3667333b87282708aa9171ebc4)`(const int32 & DefaultValue) const` | Gets the value of NumSides_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNumSides`](#structFRHAPI__MatchMakingProfile_1a76fc0cd134b968f0a6b598b666a13913)`(int32 & OutValue) const` | Fills OutValue with the value of NumSides_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetNumSidesOrNull`](#structFRHAPI__MatchMakingProfile_1a5899800ea6e0a57b3d344fc4c2426d1c)`()` | Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetNumSidesOrNull`](#structFRHAPI__MatchMakingProfile_1ad3554e015771a79049927963fd6cf656)`() const` | Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNumSides`](#structFRHAPI__MatchMakingProfile_1addbaad1ab2a145ae06c71422c7f049b5)`(int32 NewValue)` | Sets the value of NumSides_Optional and also sets NumSides_IsSet to true.
`public inline void `[`ClearNumSides`](#structFRHAPI__MatchMakingProfile_1adbd3b3d2dfdf792e2ba9a3b87d4971b5)`()` | Clears the value of NumSides_Optional and sets NumSides_IsSet to false.
`public inline bool `[`IsNumSidesDefaultValue`](#structFRHAPI__MatchMakingProfile_1a04c527c2a8e245ec1111b55ac1d57afe)`() const` | Returns true if NumSides_Optional is set and matches the default value.
`public inline void `[`SetNumSidesToDefault`](#structFRHAPI__MatchMakingProfile_1acdd3709142b1d73ae8c210dfd0b56e2b)`()` | Sets the value of NumSides_Optional to its default and also sets NumSides_IsSet to true.
`public inline int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a571af0f2f02bbdace5a9c3b8b571c7a9)`()` | Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1ae53b015bd6ea2be5167be4df78ceefc4)`() const` | Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a0fb2dbb4c5a7b8582202db7930da8e74)`(const int32 & DefaultValue) const` | Gets the value of MaxPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1aa829a94b1580b6c316a633128fcd4a30)`(int32 & OutValue) const` | Fills OutValue with the value of MaxPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetMaxPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfile_1a3273014df732195285fd74dbf8b97bda)`()` | Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetMaxPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfile_1a84166d96d5bb054e214e2dc4b79cee88)`() const` | Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1af0a39232eb4d48b180a37417da652719)`(int32 NewValue)` | Sets the value of MaxPlayersPerSide_Optional and also sets MaxPlayersPerSide_IsSet to true.
`public inline void `[`ClearMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a9c46fa3b709180c0cb8dfa13cf8682d9)`()` | Clears the value of MaxPlayersPerSide_Optional and sets MaxPlayersPerSide_IsSet to false.
`public inline bool `[`IsMaxPlayersPerSideDefaultValue`](#structFRHAPI__MatchMakingProfile_1af3ea11a219f7818274befe51f51aaac6)`() const` | Returns true if MaxPlayersPerSide_Optional is set and matches the default value.
`public inline void `[`SetMaxPlayersPerSideToDefault`](#structFRHAPI__MatchMakingProfile_1a46cf62bfdb9a5f3a4f2b27cca1b0d547)`()` | Sets the value of MaxPlayersPerSide_Optional to its default and also sets MaxPlayersPerSide_IsSet to true.
`public inline int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a10ef95855d1435b5df3351435a2c4f79)`()` | Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a27f2c4d87150ab3e94ea0f5e57d0fa8f)`() const` | Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a3730a735ef94d280ddc316ba050ef8db)`(const int32 & DefaultValue) const` | Gets the value of MinPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a69530af9e9ffafc85ea9e2e0906b9b0a)`(int32 & OutValue) const` | Fills OutValue with the value of MinPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetMinPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfile_1afd8e0f5c25858d497ca492058914dcae)`()` | Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetMinPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfile_1a176152e4ba65e6604896f64a2c69d03d)`() const` | Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1ab1cf0a4dcbb9dadf9535438838cc4ef4)`(int32 NewValue)` | Sets the value of MinPlayersPerSide_Optional and also sets MinPlayersPerSide_IsSet to true.
`public inline void `[`ClearMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1af64883df4ee7bc9e41717b3771f1e4aa)`()` | Clears the value of MinPlayersPerSide_Optional and sets MinPlayersPerSide_IsSet to false.
`public inline bool `[`IsMinPlayersPerSideDefaultValue`](#structFRHAPI__MatchMakingProfile_1a1b8b05015fb5b760433bc1c3b892bb91)`() const` | Returns true if MinPlayersPerSide_Optional is set and matches the default value.
`public inline void `[`SetMinPlayersPerSideToDefault`](#structFRHAPI__MatchMakingProfile_1a139922c7aab9fa67996bc30d4c44955d)`()` | Sets the value of MinPlayersPerSide_Optional to its default and also sets MinPlayersPerSide_IsSet to true.
`public inline TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a17276781f19ea4550740fbe935f8581a)`()` | Gets the value of LegacyConfig_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a87a0dee1bb92f04b8f214d3064cbe450)`() const` | Gets the value of LegacyConfig_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a71a5fbf0a4cd5e53c0a192c07e18f67b)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a3811ac51de751ba8ce37e957f7c692c8)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__MatchMakingProfile_1a9c9d7d7e850e00c32edf366d61fb0755)`()` | Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__MatchMakingProfile_1acfece284c01af426c66e8c87d8ef9a50)`() const` | Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a29e207c093690b0b1e82028d168d7e49)`(TMap< FString, FString > NewValue)` | Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true.
`public inline void `[`ClearLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a9c2b21c1908fd7cc906ee9b8adbb4581)`()` | Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false.

#### Members

#### `public FString `[`ProfileId`](#structFRHAPI__MatchMakingProfile_1a0a74ac27207ff64f83a281aa95a98b2c) <a id="structFRHAPI__MatchMakingProfile_1a0a74ac27207ff64f83a281aa95a98b2c"></a>

ID of the matchmaking profile to join.

<br>
#### `public ERHAPI_ProfileJoinMode `[`JoinMode_Optional`](#structFRHAPI__MatchMakingProfile_1a854bc2af42f6a6733037de752bb1f2a8) <a id="structFRHAPI__MatchMakingProfile_1a854bc2af42f6a6733037de752bb1f2a8"></a>

What mode to set on the matchmaking profile (normal, backfill etc)

<br>
#### `public bool `[`JoinMode_IsSet`](#structFRHAPI__MatchMakingProfile_1abc8efa50c12813c551f98d5d6c75cf88) <a id="structFRHAPI__MatchMakingProfile_1abc8efa50c12813c551f98d5d6c75cf88"></a>

true if JoinMode_Optional has been set to a value

<br>
#### `public FGuid `[`InstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1a4646c558004a653ad7af7820b1a7184d) <a id="structFRHAPI__MatchMakingProfile_1a4646c558004a653ad7af7820b1a7184d"></a>

Which instance template to use when launching a match in this profile.

<br>
#### `public FString `[`RankId_Optional`](#structFRHAPI__MatchMakingProfile_1a9261282df8310485db627cb7a3443291) <a id="structFRHAPI__MatchMakingProfile_1a9261282df8310485db627cb7a3443291"></a>

Which rank this profile should use MMR from to make matches from, and update at the end of match (1v1 MMR or 2v2 MMR for example)

<br>
#### `public bool `[`RankId_IsSet`](#structFRHAPI__MatchMakingProfile_1aec74c353c9e3f0af024461fbef8ee0f7) <a id="structFRHAPI__MatchMakingProfile_1aec74c353c9e3f0af024461fbef8ee0f7"></a>

true if RankId_Optional has been set to a value

<br>
#### `public int32 `[`NumSides_Optional`](#structFRHAPI__MatchMakingProfile_1a3820d9b2543a5df9bd65faab136bda1d) <a id="structFRHAPI__MatchMakingProfile_1a3820d9b2543a5df9bd65faab136bda1d"></a>

The number of sides a game in this profile will have (2 in a 1v1 and 3 in a 1v1v1 for example.

<br>
#### `public bool `[`NumSides_IsSet`](#structFRHAPI__MatchMakingProfile_1a787fb7e15a241dc3f0179996773f7e2b) <a id="structFRHAPI__MatchMakingProfile_1a787fb7e15a241dc3f0179996773f7e2b"></a>

true if NumSides_Optional has been set to a value

<br>
#### `public int32 `[`MaxPlayersPerSide_Optional`](#structFRHAPI__MatchMakingProfile_1a3ce22f882f970f664cf8eaebf0e1ff32) <a id="structFRHAPI__MatchMakingProfile_1a3ce22f882f970f664cf8eaebf0e1ff32"></a>

The maximum number of players that can be on each team.

<br>
#### `public bool `[`MaxPlayersPerSide_IsSet`](#structFRHAPI__MatchMakingProfile_1ad9511e9b83286bb09049fc0f2587fe0a) <a id="structFRHAPI__MatchMakingProfile_1ad9511e9b83286bb09049fc0f2587fe0a"></a>

true if MaxPlayersPerSide_Optional has been set to a value

<br>
#### `public int32 `[`MinPlayersPerSide_Optional`](#structFRHAPI__MatchMakingProfile_1a5032bbef5186c72c2bf53d3c26693663) <a id="structFRHAPI__MatchMakingProfile_1a5032bbef5186c72c2bf53d3c26693663"></a>

The minimum number of players that can be on each team.

<br>
#### `public bool `[`MinPlayersPerSide_IsSet`](#structFRHAPI__MatchMakingProfile_1a1d23e5a2ed43e8601e063d469bdf6665) <a id="structFRHAPI__MatchMakingProfile_1a1d23e5a2ed43e8601e063d469bdf6665"></a>

true if MinPlayersPerSide_Optional has been set to a value

<br>
#### `public TMap< FString, FString > `[`LegacyConfig_Optional`](#structFRHAPI__MatchMakingProfile_1a82f7edc14d19bacfa218226e96c57f29) <a id="structFRHAPI__MatchMakingProfile_1a82f7edc14d19bacfa218226e96c57f29"></a>

Legacy config to help migrate clients.

<br>
#### `public bool `[`LegacyConfig_IsSet`](#structFRHAPI__MatchMakingProfile_1a932134d92b44ad0db39f10a8a48b7d87) <a id="structFRHAPI__MatchMakingProfile_1a932134d92b44ad0db39f10a8a48b7d87"></a>

true if LegacyConfig_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingProfile_1a926c25fdf3917f9ec57e8965ba90b371)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchMakingProfile_1a926c25fdf3917f9ec57e8965ba90b371"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingProfile_1aec99c0e46c947e020304609dd64d0022)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchMakingProfile_1aec99c0e46c947e020304609dd64d0022"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetProfileId`](#structFRHAPI__MatchMakingProfile_1a325009e6d686c3e1062170544f98bda4)`()` <a id="structFRHAPI__MatchMakingProfile_1a325009e6d686c3e1062170544f98bda4"></a>

Gets the value of ProfileId.

<br>
#### `public inline const FString & `[`GetProfileId`](#structFRHAPI__MatchMakingProfile_1a846e1b7751a84856c1c0bf69fbb9ec4f)`() const` <a id="structFRHAPI__MatchMakingProfile_1a846e1b7751a84856c1c0bf69fbb9ec4f"></a>

Gets the value of ProfileId.

<br>
#### `public inline void `[`SetProfileId`](#structFRHAPI__MatchMakingProfile_1af35b3cec1e43338b9816c114d03853e2)`(FString NewValue)` <a id="structFRHAPI__MatchMakingProfile_1af35b3cec1e43338b9816c114d03853e2"></a>

Sets the value of ProfileId.

<br>
#### `public inline ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1a938fc2592de88267b7dc2a257bff0db7)`()` <a id="structFRHAPI__MatchMakingProfile_1a938fc2592de88267b7dc2a257bff0db7"></a>

Gets the value of JoinMode_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1a62cee2b7fd57fd26acce3b36146da19c)`() const` <a id="structFRHAPI__MatchMakingProfile_1a62cee2b7fd57fd26acce3b36146da19c"></a>

Gets the value of JoinMode_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_ProfileJoinMode & `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1af075cc3ac35d1d46de55755ffc562268)`(const ERHAPI_ProfileJoinMode & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfile_1af075cc3ac35d1d46de55755ffc562268"></a>

Gets the value of JoinMode_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetJoinMode`](#structFRHAPI__MatchMakingProfile_1a804d6b3e9d062aa6ce63c5ed5c85e8b1)`(ERHAPI_ProfileJoinMode & OutValue) const` <a id="structFRHAPI__MatchMakingProfile_1a804d6b3e9d062aa6ce63c5ed5c85e8b1"></a>

Fills OutValue with the value of JoinMode_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfile_1aaccd82d364438fb9298719c8d6da902b)`()` <a id="structFRHAPI__MatchMakingProfile_1aaccd82d364438fb9298719c8d6da902b"></a>

Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_ProfileJoinMode * `[`GetJoinModeOrNull`](#structFRHAPI__MatchMakingProfile_1a5d96eb392d7f13c45145fe0b36d84f22)`() const` <a id="structFRHAPI__MatchMakingProfile_1a5d96eb392d7f13c45145fe0b36d84f22"></a>

Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetJoinMode`](#structFRHAPI__MatchMakingProfile_1afa311bd029ba4c1e4f0865a50037cc50)`(ERHAPI_ProfileJoinMode NewValue)` <a id="structFRHAPI__MatchMakingProfile_1afa311bd029ba4c1e4f0865a50037cc50"></a>

Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true.

<br>
#### `public inline void `[`ClearJoinMode`](#structFRHAPI__MatchMakingProfile_1a591447779ffd6e4456be9b421b4b6382)`()` <a id="structFRHAPI__MatchMakingProfile_1a591447779ffd6e4456be9b421b4b6382"></a>

Clears the value of JoinMode_Optional and sets JoinMode_IsSet to false.

<br>
#### `public inline FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1ac68534da0a153d27eb2bb1353852a8ac)`()` <a id="structFRHAPI__MatchMakingProfile_1ac68534da0a153d27eb2bb1353852a8ac"></a>

Gets the value of InstanceLaunchTemplateId.

<br>
#### `public inline const FGuid & `[`GetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1a437c471d232a1aa430f1d7b6b3672f46)`() const` <a id="structFRHAPI__MatchMakingProfile_1a437c471d232a1aa430f1d7b6b3672f46"></a>

Gets the value of InstanceLaunchTemplateId.

<br>
#### `public inline void `[`SetInstanceLaunchTemplateId`](#structFRHAPI__MatchMakingProfile_1ab839256414fa37f1002a23e9fc0b9db2)`(FGuid NewValue)` <a id="structFRHAPI__MatchMakingProfile_1ab839256414fa37f1002a23e9fc0b9db2"></a>

Sets the value of InstanceLaunchTemplateId.

<br>
#### `public inline FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfile_1a64d7eba8baa4071a6a0449a1abad5e8c)`()` <a id="structFRHAPI__MatchMakingProfile_1a64d7eba8baa4071a6a0449a1abad5e8c"></a>

Gets the value of RankId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfile_1abead1b6b01af270126dff29b8f52d287)`() const` <a id="structFRHAPI__MatchMakingProfile_1abead1b6b01af270126dff29b8f52d287"></a>

Gets the value of RankId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetRankId`](#structFRHAPI__MatchMakingProfile_1acbe0ea351644f65368300679cbab4204)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfile_1acbe0ea351644f65368300679cbab4204"></a>

Gets the value of RankId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetRankId`](#structFRHAPI__MatchMakingProfile_1a2654bd34bf6966a75c0a1df48f720bee)`(FString & OutValue) const` <a id="structFRHAPI__MatchMakingProfile_1a2654bd34bf6966a75c0a1df48f720bee"></a>

Fills OutValue with the value of RankId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetRankIdOrNull`](#structFRHAPI__MatchMakingProfile_1adfeb85505b614beb1fcd69fc550b717c)`()` <a id="structFRHAPI__MatchMakingProfile_1adfeb85505b614beb1fcd69fc550b717c"></a>

Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetRankIdOrNull`](#structFRHAPI__MatchMakingProfile_1aa2455ca07cbc7fc4d75b1a0952ccf99c)`() const` <a id="structFRHAPI__MatchMakingProfile_1aa2455ca07cbc7fc4d75b1a0952ccf99c"></a>

Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetRankId`](#structFRHAPI__MatchMakingProfile_1ab020b41c164077af04163874218dbbdf)`(FString NewValue)` <a id="structFRHAPI__MatchMakingProfile_1ab020b41c164077af04163874218dbbdf"></a>

Sets the value of RankId_Optional and also sets RankId_IsSet to true.

<br>
#### `public inline void `[`ClearRankId`](#structFRHAPI__MatchMakingProfile_1a7dc46b691d4bd534e1bddd8291f35fe9)`()` <a id="structFRHAPI__MatchMakingProfile_1a7dc46b691d4bd534e1bddd8291f35fe9"></a>

Clears the value of RankId_Optional and sets RankId_IsSet to false.

<br>
#### `public inline int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfile_1a85cb479ab18626077b15bdc95a3345d7)`()` <a id="structFRHAPI__MatchMakingProfile_1a85cb479ab18626077b15bdc95a3345d7"></a>

Gets the value of NumSides_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfile_1a0e6af571f53001e6120fa14df4d2a81e)`() const` <a id="structFRHAPI__MatchMakingProfile_1a0e6af571f53001e6120fa14df4d2a81e"></a>

Gets the value of NumSides_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetNumSides`](#structFRHAPI__MatchMakingProfile_1aeb49bf3667333b87282708aa9171ebc4)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfile_1aeb49bf3667333b87282708aa9171ebc4"></a>

Gets the value of NumSides_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetNumSides`](#structFRHAPI__MatchMakingProfile_1a76fc0cd134b968f0a6b598b666a13913)`(int32 & OutValue) const` <a id="structFRHAPI__MatchMakingProfile_1a76fc0cd134b968f0a6b598b666a13913"></a>

Fills OutValue with the value of NumSides_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetNumSidesOrNull`](#structFRHAPI__MatchMakingProfile_1a5899800ea6e0a57b3d344fc4c2426d1c)`()` <a id="structFRHAPI__MatchMakingProfile_1a5899800ea6e0a57b3d344fc4c2426d1c"></a>

Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetNumSidesOrNull`](#structFRHAPI__MatchMakingProfile_1ad3554e015771a79049927963fd6cf656)`() const` <a id="structFRHAPI__MatchMakingProfile_1ad3554e015771a79049927963fd6cf656"></a>

Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetNumSides`](#structFRHAPI__MatchMakingProfile_1addbaad1ab2a145ae06c71422c7f049b5)`(int32 NewValue)` <a id="structFRHAPI__MatchMakingProfile_1addbaad1ab2a145ae06c71422c7f049b5"></a>

Sets the value of NumSides_Optional and also sets NumSides_IsSet to true.

<br>
#### `public inline void `[`ClearNumSides`](#structFRHAPI__MatchMakingProfile_1adbd3b3d2dfdf792e2ba9a3b87d4971b5)`()` <a id="structFRHAPI__MatchMakingProfile_1adbd3b3d2dfdf792e2ba9a3b87d4971b5"></a>

Clears the value of NumSides_Optional and sets NumSides_IsSet to false.

<br>
#### `public inline bool `[`IsNumSidesDefaultValue`](#structFRHAPI__MatchMakingProfile_1a04c527c2a8e245ec1111b55ac1d57afe)`() const` <a id="structFRHAPI__MatchMakingProfile_1a04c527c2a8e245ec1111b55ac1d57afe"></a>

Returns true if NumSides_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetNumSidesToDefault`](#structFRHAPI__MatchMakingProfile_1acdd3709142b1d73ae8c210dfd0b56e2b)`()` <a id="structFRHAPI__MatchMakingProfile_1acdd3709142b1d73ae8c210dfd0b56e2b"></a>

Sets the value of NumSides_Optional to its default and also sets NumSides_IsSet to true.

<br>
#### `public inline int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a571af0f2f02bbdace5a9c3b8b571c7a9)`()` <a id="structFRHAPI__MatchMakingProfile_1a571af0f2f02bbdace5a9c3b8b571c7a9"></a>

Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1ae53b015bd6ea2be5167be4df78ceefc4)`() const` <a id="structFRHAPI__MatchMakingProfile_1ae53b015bd6ea2be5167be4df78ceefc4"></a>

Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a0fb2dbb4c5a7b8582202db7930da8e74)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfile_1a0fb2dbb4c5a7b8582202db7930da8e74"></a>

Gets the value of MaxPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1aa829a94b1580b6c316a633128fcd4a30)`(int32 & OutValue) const` <a id="structFRHAPI__MatchMakingProfile_1aa829a94b1580b6c316a633128fcd4a30"></a>

Fills OutValue with the value of MaxPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetMaxPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfile_1a3273014df732195285fd74dbf8b97bda)`()` <a id="structFRHAPI__MatchMakingProfile_1a3273014df732195285fd74dbf8b97bda"></a>

Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetMaxPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfile_1a84166d96d5bb054e214e2dc4b79cee88)`() const` <a id="structFRHAPI__MatchMakingProfile_1a84166d96d5bb054e214e2dc4b79cee88"></a>

Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1af0a39232eb4d48b180a37417da652719)`(int32 NewValue)` <a id="structFRHAPI__MatchMakingProfile_1af0a39232eb4d48b180a37417da652719"></a>

Sets the value of MaxPlayersPerSide_Optional and also sets MaxPlayersPerSide_IsSet to true.

<br>
#### `public inline void `[`ClearMaxPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a9c46fa3b709180c0cb8dfa13cf8682d9)`()` <a id="structFRHAPI__MatchMakingProfile_1a9c46fa3b709180c0cb8dfa13cf8682d9"></a>

Clears the value of MaxPlayersPerSide_Optional and sets MaxPlayersPerSide_IsSet to false.

<br>
#### `public inline bool `[`IsMaxPlayersPerSideDefaultValue`](#structFRHAPI__MatchMakingProfile_1af3ea11a219f7818274befe51f51aaac6)`() const` <a id="structFRHAPI__MatchMakingProfile_1af3ea11a219f7818274befe51f51aaac6"></a>

Returns true if MaxPlayersPerSide_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetMaxPlayersPerSideToDefault`](#structFRHAPI__MatchMakingProfile_1a46cf62bfdb9a5f3a4f2b27cca1b0d547)`()` <a id="structFRHAPI__MatchMakingProfile_1a46cf62bfdb9a5f3a4f2b27cca1b0d547"></a>

Sets the value of MaxPlayersPerSide_Optional to its default and also sets MaxPlayersPerSide_IsSet to true.

<br>
#### `public inline int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a10ef95855d1435b5df3351435a2c4f79)`()` <a id="structFRHAPI__MatchMakingProfile_1a10ef95855d1435b5df3351435a2c4f79"></a>

Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a27f2c4d87150ab3e94ea0f5e57d0fa8f)`() const` <a id="structFRHAPI__MatchMakingProfile_1a27f2c4d87150ab3e94ea0f5e57d0fa8f"></a>

Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a3730a735ef94d280ddc316ba050ef8db)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfile_1a3730a735ef94d280ddc316ba050ef8db"></a>

Gets the value of MinPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1a69530af9e9ffafc85ea9e2e0906b9b0a)`(int32 & OutValue) const` <a id="structFRHAPI__MatchMakingProfile_1a69530af9e9ffafc85ea9e2e0906b9b0a"></a>

Fills OutValue with the value of MinPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetMinPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfile_1afd8e0f5c25858d497ca492058914dcae)`()` <a id="structFRHAPI__MatchMakingProfile_1afd8e0f5c25858d497ca492058914dcae"></a>

Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetMinPlayersPerSideOrNull`](#structFRHAPI__MatchMakingProfile_1a176152e4ba65e6604896f64a2c69d03d)`() const` <a id="structFRHAPI__MatchMakingProfile_1a176152e4ba65e6604896f64a2c69d03d"></a>

Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1ab1cf0a4dcbb9dadf9535438838cc4ef4)`(int32 NewValue)` <a id="structFRHAPI__MatchMakingProfile_1ab1cf0a4dcbb9dadf9535438838cc4ef4"></a>

Sets the value of MinPlayersPerSide_Optional and also sets MinPlayersPerSide_IsSet to true.

<br>
#### `public inline void `[`ClearMinPlayersPerSide`](#structFRHAPI__MatchMakingProfile_1af64883df4ee7bc9e41717b3771f1e4aa)`()` <a id="structFRHAPI__MatchMakingProfile_1af64883df4ee7bc9e41717b3771f1e4aa"></a>

Clears the value of MinPlayersPerSide_Optional and sets MinPlayersPerSide_IsSet to false.

<br>
#### `public inline bool `[`IsMinPlayersPerSideDefaultValue`](#structFRHAPI__MatchMakingProfile_1a1b8b05015fb5b760433bc1c3b892bb91)`() const` <a id="structFRHAPI__MatchMakingProfile_1a1b8b05015fb5b760433bc1c3b892bb91"></a>

Returns true if MinPlayersPerSide_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetMinPlayersPerSideToDefault`](#structFRHAPI__MatchMakingProfile_1a139922c7aab9fa67996bc30d4c44955d)`()` <a id="structFRHAPI__MatchMakingProfile_1a139922c7aab9fa67996bc30d4c44955d"></a>

Sets the value of MinPlayersPerSide_Optional to its default and also sets MinPlayersPerSide_IsSet to true.

<br>
#### `public inline TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a17276781f19ea4550740fbe935f8581a)`()` <a id="structFRHAPI__MatchMakingProfile_1a17276781f19ea4550740fbe935f8581a"></a>

Gets the value of LegacyConfig_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a87a0dee1bb92f04b8f214d3064cbe450)`() const` <a id="structFRHAPI__MatchMakingProfile_1a87a0dee1bb92f04b8f214d3064cbe450"></a>

Gets the value of LegacyConfig_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a71a5fbf0a4cd5e53c0a192c07e18f67b)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchMakingProfile_1a71a5fbf0a4cd5e53c0a192c07e18f67b"></a>

Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a3811ac51de751ba8ce37e957f7c692c8)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchMakingProfile_1a3811ac51de751ba8ce37e957f7c692c8"></a>

Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__MatchMakingProfile_1a9c9d7d7e850e00c32edf366d61fb0755)`()` <a id="structFRHAPI__MatchMakingProfile_1a9c9d7d7e850e00c32edf366d61fb0755"></a>

Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__MatchMakingProfile_1acfece284c01af426c66e8c87d8ef9a50)`() const` <a id="structFRHAPI__MatchMakingProfile_1acfece284c01af426c66e8c87d8ef9a50"></a>

Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a29e207c093690b0b1e82028d168d7e49)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__MatchMakingProfile_1a29e207c093690b0b1e82028d168d7e49"></a>

Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true.

<br>
#### `public inline void `[`ClearLegacyConfig`](#structFRHAPI__MatchMakingProfile_1a9c2b21c1908fd7cc906ee9b8adbb4581)`()` <a id="structFRHAPI__MatchMakingProfile_1a9c2b21c1908fd7cc906ee9b8adbb4581"></a>

Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false.

<br>
