---
title: FRHAPI_MatchMakingProfile Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

DEPRECATED A profile that describes what pools of players a session will be a part of when matchmaking.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[ProfileId](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a0a74ac27207ff64f83a281aa95a98b2c)|ID of the matchmaking profile to join.|
|ERHAPI_ProfileJoinMode|[JoinMode_Optional](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a854bc2af42f6a6733037de752bb1f2a8)|What mode to set on the matchmaking profile (normal, backfill etc)|
|bool|[JoinMode_IsSet](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1abc8efa50c12813c551f98d5d6c75cf88)|true if JoinMode_Optional has been set to a value|
|FGuid|[InstanceLaunchTemplateId](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a4646c558004a653ad7af7820b1a7184d)|Which instance template to use when launching a match in this profile.|
|FString|[RankId_Optional](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a9261282df8310485db627cb7a3443291)|Which rank this profile should use MMR from to make matches from, and update at the end of match (1v1 MMR or 2v2 MMR for example)|
|bool|[RankId_IsSet](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1aec74c353c9e3f0af024461fbef8ee0f7)|true if RankId_Optional has been set to a value|
|int32|[NumSides_Optional](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a3820d9b2543a5df9bd65faab136bda1d)|The number of sides a game in this profile will have (2 in a 1v1 and 3 in a 1v1v1 for example.|
|bool|[NumSides_IsSet](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a787fb7e15a241dc3f0179996773f7e2b)|true if NumSides_Optional has been set to a value|
|int32|[MaxPlayersPerSide_Optional](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a3ce22f882f970f664cf8eaebf0e1ff32)|The maximum number of players that can be on each team.|
|bool|[MaxPlayersPerSide_IsSet](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1ad9511e9b83286bb09049fc0f2587fe0a)|true if MaxPlayersPerSide_Optional has been set to a value|
|int32|[MinPlayersPerSide_Optional](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a5032bbef5186c72c2bf53d3c26693663)|The minimum number of players that can be on each team.|
|bool|[MinPlayersPerSide_IsSet](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a1d23e5a2ed43e8601e063d469bdf6665)|true if MinPlayersPerSide_Optional has been set to a value|
|TMap< FString, FString >|[LegacyConfig_Optional](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a82f7edc14d19bacfa218226e96c57f29)|Legacy config to help migrate clients.|
|bool|[LegacyConfig_IsSet](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a932134d92b44ad0db39f10a8a48b7d87)|true if LegacyConfig_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a926c25fdf3917f9ec57e8965ba90b371)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1aec99c0e46c947e020304609dd64d0022)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetProfileId](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a325009e6d686c3e1062170544f98bda4)()|Gets the value of ProfileId.|
|const FString &|[GetProfileId](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a846e1b7751a84856c1c0bf69fbb9ec4f)()|Gets the value of ProfileId.|
|void|[SetProfileId](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1af35b3cec1e43338b9816c114d03853e2)(FString NewValue)|Sets the value of ProfileId.|
|ERHAPI_ProfileJoinMode &|[GetJoinMode](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a938fc2592de88267b7dc2a257bff0db7)()|Gets the value of JoinMode_Optional, regardless of it having been set.|
|const ERHAPI_ProfileJoinMode &|[GetJoinMode](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a62cee2b7fd57fd26acce3b36146da19c)()|Gets the value of JoinMode_Optional, regardless of it having been set.|
|const ERHAPI_ProfileJoinMode &|[GetJoinMode](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1af075cc3ac35d1d46de55755ffc562268)(const ERHAPI_ProfileJoinMode & DefaultValue)|Gets the value of JoinMode_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetJoinMode](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a804d6b3e9d062aa6ce63c5ed5c85e8b1)(ERHAPI_ProfileJoinMode & OutValue)|Fills OutValue with the value of JoinMode_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_ProfileJoinMode *|[GetJoinModeOrNull](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1aaccd82d364438fb9298719c8d6da902b)()|Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_ProfileJoinMode *|[GetJoinModeOrNull](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a5d96eb392d7f13c45145fe0b36d84f22)()|Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetJoinMode](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1afa311bd029ba4c1e4f0865a50037cc50)(ERHAPI_ProfileJoinMode NewValue)|Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true.|
|void|[ClearJoinMode](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a591447779ffd6e4456be9b421b4b6382)()|Clears the value of JoinMode_Optional and sets JoinMode_IsSet to false.|
|FGuid &|[GetInstanceLaunchTemplateId](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1ac68534da0a153d27eb2bb1353852a8ac)()|Gets the value of InstanceLaunchTemplateId.|
|const FGuid &|[GetInstanceLaunchTemplateId](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a437c471d232a1aa430f1d7b6b3672f46)()|Gets the value of InstanceLaunchTemplateId.|
|void|[SetInstanceLaunchTemplateId](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1ab839256414fa37f1002a23e9fc0b9db2)(FGuid NewValue)|Sets the value of InstanceLaunchTemplateId.|
|FString &|[GetRankId](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a64d7eba8baa4071a6a0449a1abad5e8c)()|Gets the value of RankId_Optional, regardless of it having been set.|
|const FString &|[GetRankId](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1abead1b6b01af270126dff29b8f52d287)()|Gets the value of RankId_Optional, regardless of it having been set.|
|const FString &|[GetRankId](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1acbe0ea351644f65368300679cbab4204)(const FString & DefaultValue)|Gets the value of RankId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetRankId](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a2654bd34bf6966a75c0a1df48f720bee)(FString & OutValue)|Fills OutValue with the value of RankId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetRankIdOrNull](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1adfeb85505b614beb1fcd69fc550b717c)()|Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetRankIdOrNull](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1aa2455ca07cbc7fc4d75b1a0952ccf99c)()|Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetRankId](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1ab020b41c164077af04163874218dbbdf)(FString NewValue)|Sets the value of RankId_Optional and also sets RankId_IsSet to true.|
|void|[ClearRankId](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a7dc46b691d4bd534e1bddd8291f35fe9)()|Clears the value of RankId_Optional and sets RankId_IsSet to false.|
|int32 &|[GetNumSides](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a85cb479ab18626077b15bdc95a3345d7)()|Gets the value of NumSides_Optional, regardless of it having been set.|
|const int32 &|[GetNumSides](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a0e6af571f53001e6120fa14df4d2a81e)()|Gets the value of NumSides_Optional, regardless of it having been set.|
|const int32 &|[GetNumSides](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1aeb49bf3667333b87282708aa9171ebc4)(const int32 & DefaultValue)|Gets the value of NumSides_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetNumSides](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a76fc0cd134b968f0a6b598b666a13913)(int32 & OutValue)|Fills OutValue with the value of NumSides_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetNumSidesOrNull](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a5899800ea6e0a57b3d344fc4c2426d1c)()|Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetNumSidesOrNull](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1ad3554e015771a79049927963fd6cf656)()|Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetNumSides](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1addbaad1ab2a145ae06c71422c7f049b5)(int32 NewValue)|Sets the value of NumSides_Optional and also sets NumSides_IsSet to true.|
|void|[ClearNumSides](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1adbd3b3d2dfdf792e2ba9a3b87d4971b5)()|Clears the value of NumSides_Optional and sets NumSides_IsSet to false.|
|bool|[IsNumSidesDefaultValue](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a04c527c2a8e245ec1111b55ac1d57afe)()|Returns true if NumSides_Optional is set and matches the default value.|
|void|[SetNumSidesToDefault](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1acdd3709142b1d73ae8c210dfd0b56e2b)()|Sets the value of NumSides_Optional to its default and also sets NumSides_IsSet to true.|
|int32 &|[GetMaxPlayersPerSide](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a571af0f2f02bbdace5a9c3b8b571c7a9)()|Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.|
|const int32 &|[GetMaxPlayersPerSide](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1ae53b015bd6ea2be5167be4df78ceefc4)()|Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.|
|const int32 &|[GetMaxPlayersPerSide](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a0fb2dbb4c5a7b8582202db7930da8e74)(const int32 & DefaultValue)|Gets the value of MaxPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetMaxPlayersPerSide](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1aa829a94b1580b6c316a633128fcd4a30)(int32 & OutValue)|Fills OutValue with the value of MaxPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetMaxPlayersPerSideOrNull](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a3273014df732195285fd74dbf8b97bda)()|Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetMaxPlayersPerSideOrNull](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a84166d96d5bb054e214e2dc4b79cee88)()|Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetMaxPlayersPerSide](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1af0a39232eb4d48b180a37417da652719)(int32 NewValue)|Sets the value of MaxPlayersPerSide_Optional and also sets MaxPlayersPerSide_IsSet to true.|
|void|[ClearMaxPlayersPerSide](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a9c46fa3b709180c0cb8dfa13cf8682d9)()|Clears the value of MaxPlayersPerSide_Optional and sets MaxPlayersPerSide_IsSet to false.|
|bool|[IsMaxPlayersPerSideDefaultValue](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1af3ea11a219f7818274befe51f51aaac6)()|Returns true if MaxPlayersPerSide_Optional is set and matches the default value.|
|void|[SetMaxPlayersPerSideToDefault](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a46cf62bfdb9a5f3a4f2b27cca1b0d547)()|Sets the value of MaxPlayersPerSide_Optional to its default and also sets MaxPlayersPerSide_IsSet to true.|
|int32 &|[GetMinPlayersPerSide](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a10ef95855d1435b5df3351435a2c4f79)()|Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.|
|const int32 &|[GetMinPlayersPerSide](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a27f2c4d87150ab3e94ea0f5e57d0fa8f)()|Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.|
|const int32 &|[GetMinPlayersPerSide](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a3730a735ef94d280ddc316ba050ef8db)(const int32 & DefaultValue)|Gets the value of MinPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetMinPlayersPerSide](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a69530af9e9ffafc85ea9e2e0906b9b0a)(int32 & OutValue)|Fills OutValue with the value of MinPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetMinPlayersPerSideOrNull](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1afd8e0f5c25858d497ca492058914dcae)()|Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetMinPlayersPerSideOrNull](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a176152e4ba65e6604896f64a2c69d03d)()|Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetMinPlayersPerSide](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1ab1cf0a4dcbb9dadf9535438838cc4ef4)(int32 NewValue)|Sets the value of MinPlayersPerSide_Optional and also sets MinPlayersPerSide_IsSet to true.|
|void|[ClearMinPlayersPerSide](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1af64883df4ee7bc9e41717b3771f1e4aa)()|Clears the value of MinPlayersPerSide_Optional and sets MinPlayersPerSide_IsSet to false.|
|bool|[IsMinPlayersPerSideDefaultValue](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a1b8b05015fb5b760433bc1c3b892bb91)()|Returns true if MinPlayersPerSide_Optional is set and matches the default value.|
|void|[SetMinPlayersPerSideToDefault](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a139922c7aab9fa67996bc30d4c44955d)()|Sets the value of MinPlayersPerSide_Optional to its default and also sets MinPlayersPerSide_IsSet to true.|
|TMap< FString, FString > &|[GetLegacyConfig](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a17276781f19ea4550740fbe935f8581a)()|Gets the value of LegacyConfig_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetLegacyConfig](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a87a0dee1bb92f04b8f214d3064cbe450)()|Gets the value of LegacyConfig_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetLegacyConfig](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a71a5fbf0a4cd5e53c0a192c07e18f67b)(const TMap< FString, FString > & DefaultValue)|Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetLegacyConfig](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a3811ac51de751ba8ce37e957f7c692c8)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetLegacyConfigOrNull](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a9c9d7d7e850e00c32edf366d61fb0755)()|Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetLegacyConfigOrNull](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1acfece284c01af426c66e8c87d8ef9a50)()|Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetLegacyConfig](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a29e207c093690b0b1e82028d168d7e49)(TMap< FString, FString > NewValue)|Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true.|
|void|[ClearLegacyConfig](/unreal-plugins/all/structfrhapi__matchmakingprofile/#structFRHAPI__MatchMakingProfile_1a9c2b21c1908fd7cc906ee9b8adbb4581)()|Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false.|
## Public Attributes



### `ProfileId` <a id="structFRHAPI__MatchMakingProfile_1a0a74ac27207ff64f83a281aa95a98b2c"></a>

`FString FRHAPI_MatchMakingProfile::ProfileId`

ID of the matchmaking profile to join.




### `JoinMode_Optional` <a id="structFRHAPI__MatchMakingProfile_1a854bc2af42f6a6733037de752bb1f2a8"></a>

`ERHAPI_ProfileJoinMode FRHAPI_MatchMakingProfile::JoinMode_Optional`

What mode to set on the matchmaking profile (normal, backfill etc)




### `JoinMode_IsSet` <a id="structFRHAPI__MatchMakingProfile_1abc8efa50c12813c551f98d5d6c75cf88"></a>

`bool FRHAPI_MatchMakingProfile::JoinMode_IsSet`

true if JoinMode_Optional has been set to a value




### `InstanceLaunchTemplateId` <a id="structFRHAPI__MatchMakingProfile_1a4646c558004a653ad7af7820b1a7184d"></a>

`FGuid FRHAPI_MatchMakingProfile::InstanceLaunchTemplateId`

Which instance template to use when launching a match in this profile.




### `RankId_Optional` <a id="structFRHAPI__MatchMakingProfile_1a9261282df8310485db627cb7a3443291"></a>

`FString FRHAPI_MatchMakingProfile::RankId_Optional`

Which rank this profile should use MMR from to make matches from, and update at the end of match (1v1 MMR or 2v2 MMR for example)




### `RankId_IsSet` <a id="structFRHAPI__MatchMakingProfile_1aec74c353c9e3f0af024461fbef8ee0f7"></a>

`bool FRHAPI_MatchMakingProfile::RankId_IsSet`

true if RankId_Optional has been set to a value




### `NumSides_Optional` <a id="structFRHAPI__MatchMakingProfile_1a3820d9b2543a5df9bd65faab136bda1d"></a>

`int32 FRHAPI_MatchMakingProfile::NumSides_Optional`

The number of sides a game in this profile will have (2 in a 1v1 and 3 in a 1v1v1 for example.




### `NumSides_IsSet` <a id="structFRHAPI__MatchMakingProfile_1a787fb7e15a241dc3f0179996773f7e2b"></a>

`bool FRHAPI_MatchMakingProfile::NumSides_IsSet`

true if NumSides_Optional has been set to a value




### `MaxPlayersPerSide_Optional` <a id="structFRHAPI__MatchMakingProfile_1a3ce22f882f970f664cf8eaebf0e1ff32"></a>

`int32 FRHAPI_MatchMakingProfile::MaxPlayersPerSide_Optional`

The maximum number of players that can be on each team.




### `MaxPlayersPerSide_IsSet` <a id="structFRHAPI__MatchMakingProfile_1ad9511e9b83286bb09049fc0f2587fe0a"></a>

`bool FRHAPI_MatchMakingProfile::MaxPlayersPerSide_IsSet`

true if MaxPlayersPerSide_Optional has been set to a value




### `MinPlayersPerSide_Optional` <a id="structFRHAPI__MatchMakingProfile_1a5032bbef5186c72c2bf53d3c26693663"></a>

`int32 FRHAPI_MatchMakingProfile::MinPlayersPerSide_Optional`

The minimum number of players that can be on each team.




### `MinPlayersPerSide_IsSet` <a id="structFRHAPI__MatchMakingProfile_1a1d23e5a2ed43e8601e063d469bdf6665"></a>

`bool FRHAPI_MatchMakingProfile::MinPlayersPerSide_IsSet`

true if MinPlayersPerSide_Optional has been set to a value




### `LegacyConfig_Optional` <a id="structFRHAPI__MatchMakingProfile_1a82f7edc14d19bacfa218226e96c57f29"></a>

`TMap<FString, FString> FRHAPI_MatchMakingProfile::LegacyConfig_Optional`

Legacy config to help migrate clients.




### `LegacyConfig_IsSet` <a id="structFRHAPI__MatchMakingProfile_1a932134d92b44ad0db39f10a8a48b7d87"></a>

`bool FRHAPI_MatchMakingProfile::LegacyConfig_IsSet`

true if LegacyConfig_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__MatchMakingProfile_1a926c25fdf3917f9ec57e8965ba90b371"></a>

bool FromJson(const TSharedPtr< FJsonValue > & JsonValue)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|

#### Description

Fills this object with data from the passed in JSON.


#### Parameters

JsonValue
: Data from the API call.

#### Returns
true if parsing of the JSON data was successful. 



### `WriteJson` <a id="structFRHAPI__MatchMakingProfile_1aec99c0e46c947e020304609dd64d0022"></a>

void WriteJson(TSharedRef< TJsonWriter<>> & Writer)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|

#### Description

Writes the data from this object into the specified JSON Writer stream.


#### Parameters

Writer
: JSON Writer stream to push . 



### `GetProfileId` <a id="structFRHAPI__MatchMakingProfile_1a325009e6d686c3e1062170544f98bda4"></a>

FString & GetProfileId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ProfileId.




### `GetProfileId` <a id="structFRHAPI__MatchMakingProfile_1a846e1b7751a84856c1c0bf69fbb9ec4f"></a>

const FString & GetProfileId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ProfileId.




### `SetProfileId` <a id="structFRHAPI__MatchMakingProfile_1af35b3cec1e43338b9816c114d03853e2"></a>

void SetProfileId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of ProfileId.




### `GetJoinMode` <a id="structFRHAPI__MatchMakingProfile_1a938fc2592de88267b7dc2a257bff0db7"></a>

ERHAPI_ProfileJoinMode & GetJoinMode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of JoinMode_Optional, regardless of it having been set.




### `GetJoinMode` <a id="structFRHAPI__MatchMakingProfile_1a62cee2b7fd57fd26acce3b36146da19c"></a>

const ERHAPI_ProfileJoinMode & GetJoinMode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of JoinMode_Optional, regardless of it having been set.




### `GetJoinMode` <a id="structFRHAPI__MatchMakingProfile_1af075cc3ac35d1d46de55755ffc562268"></a>

const ERHAPI_ProfileJoinMode & GetJoinMode(const ERHAPI_ProfileJoinMode & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_ProfileJoinMode &|DefaultValue|

#### Description

Gets the value of JoinMode_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetJoinMode` <a id="structFRHAPI__MatchMakingProfile_1a804d6b3e9d062aa6ce63c5ed5c85e8b1"></a>

bool GetJoinMode(ERHAPI_ProfileJoinMode & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_ProfileJoinMode &|OutValue|

#### Description

Fills OutValue with the value of JoinMode_Optional and returns true if it has been set, otherwise returns false.




### `GetJoinModeOrNull` <a id="structFRHAPI__MatchMakingProfile_1aaccd82d364438fb9298719c8d6da902b"></a>

ERHAPI_ProfileJoinMode * GetJoinModeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.




### `GetJoinModeOrNull` <a id="structFRHAPI__MatchMakingProfile_1a5d96eb392d7f13c45145fe0b36d84f22"></a>

const ERHAPI_ProfileJoinMode * GetJoinModeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.




### `SetJoinMode` <a id="structFRHAPI__MatchMakingProfile_1afa311bd029ba4c1e4f0865a50037cc50"></a>

void SetJoinMode(ERHAPI_ProfileJoinMode NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_ProfileJoinMode|NewValue|

#### Description

Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true.




### `ClearJoinMode` <a id="structFRHAPI__MatchMakingProfile_1a591447779ffd6e4456be9b421b4b6382"></a>

void ClearJoinMode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of JoinMode_Optional and sets JoinMode_IsSet to false.




### `GetInstanceLaunchTemplateId` <a id="structFRHAPI__MatchMakingProfile_1ac68534da0a153d27eb2bb1353852a8ac"></a>

FGuid & GetInstanceLaunchTemplateId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceLaunchTemplateId.




### `GetInstanceLaunchTemplateId` <a id="structFRHAPI__MatchMakingProfile_1a437c471d232a1aa430f1d7b6b3672f46"></a>

const FGuid & GetInstanceLaunchTemplateId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceLaunchTemplateId.




### `SetInstanceLaunchTemplateId` <a id="structFRHAPI__MatchMakingProfile_1ab839256414fa37f1002a23e9fc0b9db2"></a>

void SetInstanceLaunchTemplateId(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of InstanceLaunchTemplateId.




### `GetRankId` <a id="structFRHAPI__MatchMakingProfile_1a64d7eba8baa4071a6a0449a1abad5e8c"></a>

FString & GetRankId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RankId_Optional, regardless of it having been set.




### `GetRankId` <a id="structFRHAPI__MatchMakingProfile_1abead1b6b01af270126dff29b8f52d287"></a>

const FString & GetRankId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RankId_Optional, regardless of it having been set.




### `GetRankId` <a id="structFRHAPI__MatchMakingProfile_1acbe0ea351644f65368300679cbab4204"></a>

const FString & GetRankId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of RankId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetRankId` <a id="structFRHAPI__MatchMakingProfile_1a2654bd34bf6966a75c0a1df48f720bee"></a>

bool GetRankId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of RankId_Optional and returns true if it has been set, otherwise returns false.




### `GetRankIdOrNull` <a id="structFRHAPI__MatchMakingProfile_1adfeb85505b614beb1fcd69fc550b717c"></a>

FString * GetRankIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.




### `GetRankIdOrNull` <a id="structFRHAPI__MatchMakingProfile_1aa2455ca07cbc7fc4d75b1a0952ccf99c"></a>

const FString * GetRankIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.




### `SetRankId` <a id="structFRHAPI__MatchMakingProfile_1ab020b41c164077af04163874218dbbdf"></a>

void SetRankId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of RankId_Optional and also sets RankId_IsSet to true.




### `ClearRankId` <a id="structFRHAPI__MatchMakingProfile_1a7dc46b691d4bd534e1bddd8291f35fe9"></a>

void ClearRankId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of RankId_Optional and sets RankId_IsSet to false.




### `GetNumSides` <a id="structFRHAPI__MatchMakingProfile_1a85cb479ab18626077b15bdc95a3345d7"></a>

int32 & GetNumSides()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of NumSides_Optional, regardless of it having been set.




### `GetNumSides` <a id="structFRHAPI__MatchMakingProfile_1a0e6af571f53001e6120fa14df4d2a81e"></a>

const int32 & GetNumSides()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of NumSides_Optional, regardless of it having been set.




### `GetNumSides` <a id="structFRHAPI__MatchMakingProfile_1aeb49bf3667333b87282708aa9171ebc4"></a>

const int32 & GetNumSides(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of NumSides_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetNumSides` <a id="structFRHAPI__MatchMakingProfile_1a76fc0cd134b968f0a6b598b666a13913"></a>

bool GetNumSides(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of NumSides_Optional and returns true if it has been set, otherwise returns false.




### `GetNumSidesOrNull` <a id="structFRHAPI__MatchMakingProfile_1a5899800ea6e0a57b3d344fc4c2426d1c"></a>

int32 * GetNumSidesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.




### `GetNumSidesOrNull` <a id="structFRHAPI__MatchMakingProfile_1ad3554e015771a79049927963fd6cf656"></a>

const int32 * GetNumSidesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.




### `SetNumSides` <a id="structFRHAPI__MatchMakingProfile_1addbaad1ab2a145ae06c71422c7f049b5"></a>

void SetNumSides(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of NumSides_Optional and also sets NumSides_IsSet to true.




### `ClearNumSides` <a id="structFRHAPI__MatchMakingProfile_1adbd3b3d2dfdf792e2ba9a3b87d4971b5"></a>

void ClearNumSides()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of NumSides_Optional and sets NumSides_IsSet to false.




### `IsNumSidesDefaultValue` <a id="structFRHAPI__MatchMakingProfile_1a04c527c2a8e245ec1111b55ac1d57afe"></a>

bool IsNumSidesDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if NumSides_Optional is set and matches the default value.




### `SetNumSidesToDefault` <a id="structFRHAPI__MatchMakingProfile_1acdd3709142b1d73ae8c210dfd0b56e2b"></a>

void SetNumSidesToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of NumSides_Optional to its default and also sets NumSides_IsSet to true.




### `GetMaxPlayersPerSide` <a id="structFRHAPI__MatchMakingProfile_1a571af0f2f02bbdace5a9c3b8b571c7a9"></a>

int32 & GetMaxPlayersPerSide()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.




### `GetMaxPlayersPerSide` <a id="structFRHAPI__MatchMakingProfile_1ae53b015bd6ea2be5167be4df78ceefc4"></a>

const int32 & GetMaxPlayersPerSide()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.




### `GetMaxPlayersPerSide` <a id="structFRHAPI__MatchMakingProfile_1a0fb2dbb4c5a7b8582202db7930da8e74"></a>

const int32 & GetMaxPlayersPerSide(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of MaxPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetMaxPlayersPerSide` <a id="structFRHAPI__MatchMakingProfile_1aa829a94b1580b6c316a633128fcd4a30"></a>

bool GetMaxPlayersPerSide(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of MaxPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.




### `GetMaxPlayersPerSideOrNull` <a id="structFRHAPI__MatchMakingProfile_1a3273014df732195285fd74dbf8b97bda"></a>

int32 * GetMaxPlayersPerSideOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.




### `GetMaxPlayersPerSideOrNull` <a id="structFRHAPI__MatchMakingProfile_1a84166d96d5bb054e214e2dc4b79cee88"></a>

const int32 * GetMaxPlayersPerSideOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.




### `SetMaxPlayersPerSide` <a id="structFRHAPI__MatchMakingProfile_1af0a39232eb4d48b180a37417da652719"></a>

void SetMaxPlayersPerSide(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of MaxPlayersPerSide_Optional and also sets MaxPlayersPerSide_IsSet to true.




### `ClearMaxPlayersPerSide` <a id="structFRHAPI__MatchMakingProfile_1a9c46fa3b709180c0cb8dfa13cf8682d9"></a>

void ClearMaxPlayersPerSide()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of MaxPlayersPerSide_Optional and sets MaxPlayersPerSide_IsSet to false.




### `IsMaxPlayersPerSideDefaultValue` <a id="structFRHAPI__MatchMakingProfile_1af3ea11a219f7818274befe51f51aaac6"></a>

bool IsMaxPlayersPerSideDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if MaxPlayersPerSide_Optional is set and matches the default value.




### `SetMaxPlayersPerSideToDefault` <a id="structFRHAPI__MatchMakingProfile_1a46cf62bfdb9a5f3a4f2b27cca1b0d547"></a>

void SetMaxPlayersPerSideToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of MaxPlayersPerSide_Optional to its default and also sets MaxPlayersPerSide_IsSet to true.




### `GetMinPlayersPerSide` <a id="structFRHAPI__MatchMakingProfile_1a10ef95855d1435b5df3351435a2c4f79"></a>

int32 & GetMinPlayersPerSide()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.




### `GetMinPlayersPerSide` <a id="structFRHAPI__MatchMakingProfile_1a27f2c4d87150ab3e94ea0f5e57d0fa8f"></a>

const int32 & GetMinPlayersPerSide()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.




### `GetMinPlayersPerSide` <a id="structFRHAPI__MatchMakingProfile_1a3730a735ef94d280ddc316ba050ef8db"></a>

const int32 & GetMinPlayersPerSide(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of MinPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetMinPlayersPerSide` <a id="structFRHAPI__MatchMakingProfile_1a69530af9e9ffafc85ea9e2e0906b9b0a"></a>

bool GetMinPlayersPerSide(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of MinPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.




### `GetMinPlayersPerSideOrNull` <a id="structFRHAPI__MatchMakingProfile_1afd8e0f5c25858d497ca492058914dcae"></a>

int32 * GetMinPlayersPerSideOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.




### `GetMinPlayersPerSideOrNull` <a id="structFRHAPI__MatchMakingProfile_1a176152e4ba65e6604896f64a2c69d03d"></a>

const int32 * GetMinPlayersPerSideOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.




### `SetMinPlayersPerSide` <a id="structFRHAPI__MatchMakingProfile_1ab1cf0a4dcbb9dadf9535438838cc4ef4"></a>

void SetMinPlayersPerSide(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of MinPlayersPerSide_Optional and also sets MinPlayersPerSide_IsSet to true.




### `ClearMinPlayersPerSide` <a id="structFRHAPI__MatchMakingProfile_1af64883df4ee7bc9e41717b3771f1e4aa"></a>

void ClearMinPlayersPerSide()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of MinPlayersPerSide_Optional and sets MinPlayersPerSide_IsSet to false.




### `IsMinPlayersPerSideDefaultValue` <a id="structFRHAPI__MatchMakingProfile_1a1b8b05015fb5b760433bc1c3b892bb91"></a>

bool IsMinPlayersPerSideDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if MinPlayersPerSide_Optional is set and matches the default value.




### `SetMinPlayersPerSideToDefault` <a id="structFRHAPI__MatchMakingProfile_1a139922c7aab9fa67996bc30d4c44955d"></a>

void SetMinPlayersPerSideToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of MinPlayersPerSide_Optional to its default and also sets MinPlayersPerSide_IsSet to true.




### `GetLegacyConfig` <a id="structFRHAPI__MatchMakingProfile_1a17276781f19ea4550740fbe935f8581a"></a>

TMap< FString, FString > & GetLegacyConfig()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LegacyConfig_Optional, regardless of it having been set.




### `GetLegacyConfig` <a id="structFRHAPI__MatchMakingProfile_1a87a0dee1bb92f04b8f214d3064cbe450"></a>

const TMap< FString, FString > & GetLegacyConfig()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LegacyConfig_Optional, regardless of it having been set.




### `GetLegacyConfig` <a id="structFRHAPI__MatchMakingProfile_1a71a5fbf0a4cd5e53c0a192c07e18f67b"></a>

const TMap< FString, FString > & GetLegacyConfig(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetLegacyConfig` <a id="structFRHAPI__MatchMakingProfile_1a3811ac51de751ba8ce37e957f7c692c8"></a>

bool GetLegacyConfig(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false.




### `GetLegacyConfigOrNull` <a id="structFRHAPI__MatchMakingProfile_1a9c9d7d7e850e00c32edf366d61fb0755"></a>

TMap< FString, FString > * GetLegacyConfigOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.




### `GetLegacyConfigOrNull` <a id="structFRHAPI__MatchMakingProfile_1acfece284c01af426c66e8c87d8ef9a50"></a>

const TMap< FString, FString > * GetLegacyConfigOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.




### `SetLegacyConfig` <a id="structFRHAPI__MatchMakingProfile_1a29e207c093690b0b1e82028d168d7e49"></a>

void SetLegacyConfig(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true.




### `ClearLegacyConfig` <a id="structFRHAPI__MatchMakingProfile_1a9c2b21c1908fd7cc906ee9b8adbb4581"></a>

void ClearLegacyConfig()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false.





