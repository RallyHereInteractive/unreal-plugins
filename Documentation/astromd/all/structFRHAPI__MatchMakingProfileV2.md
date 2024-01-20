---
title: FRHAPI_MatchMakingProfileV2 Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A profile that describes what pools of players a session will be a part of when matchmaking.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[MatchMakingProfileId](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a1fac1d90d7052f77ed54c7ef0158d767)|ID of the matchmaking profile to join.|
|ERHAPI_ProfileJoinMode|[JoinMode_Optional](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a942eea841d6b9ab8a304ecc1e3486967)|What mode to set on the matchmaking profile (normal, backfill etc)|
|bool|[JoinMode_IsSet](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a7d05d638ad7e6bdc38adbee05fc65bb1)|true if JoinMode_Optional has been set to a value|
|FGuid|[InstanceRequestTemplateId](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1acc1ae567ca4eae15dd5ba058009eb1bf)|Which instance template to use when launching a match in this profile.|
|FString|[RankId_Optional](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1afd26627e8543724e350b3961995a4434)|Which rank this profile should use MMR from to make matches from, and update at the end of match (1v1 MMR or 2v2 MMR for example)|
|bool|[RankId_IsSet](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a60ec35f19ebed9d47879447dcc660f39)|true if RankId_Optional has been set to a value|
|int32|[NumSides_Optional](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a05d7bde5226bb55b7361fc9d447b2639)|The number of sides a game in this profile will have (2 in a 1v1 and 3 in a 1v1v1 for example.|
|bool|[NumSides_IsSet](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a8a5f02725af6685c6fae0145c1e03ef2)|true if NumSides_Optional has been set to a value|
|int32|[MaxPlayersPerSide_Optional](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1acfb2f4481ae253fe40c2bb2ce3b7bfbb)|The maximum number of players that can be on each team.|
|bool|[MaxPlayersPerSide_IsSet](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1acc2a1fd5d9019b960edbf25865c0310d)|true if MaxPlayersPerSide_Optional has been set to a value|
|int32|[MinPlayersPerSide_Optional](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a134fd567423d422235de46bba637faa2)|The minimum number of players that can be on each team.|
|bool|[MinPlayersPerSide_IsSet](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a7b9cc3870d306efd0f9c59e62d96e38e)|true if MinPlayersPerSide_Optional has been set to a value|
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject)|[LegacyConfig_Optional](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1af6d5bc75fe36551e65c7d61585ac2e65)|Legacy config to help migrate clients.|
|bool|[LegacyConfig_IsSet](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1af417de3e8a601609b54e0310551c9caa)|true if LegacyConfig_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a27b71626be2a2edef0ed660aa42fcaa6)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1aa6ebcdc58854a72f9cb8c75b9f86834c)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetMatchMakingProfileId](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a4ae3b82d9d3c2bb53a131330dfe71e59)()|Gets the value of MatchMakingProfileId.|
|const FString &|[GetMatchMakingProfileId](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a2546a8d06702b1dd5a24f4d001f98688)()|Gets the value of MatchMakingProfileId.|
|void|[SetMatchMakingProfileId](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1ad06533915af39e0591af3d6a135990ca)(FString NewValue)|Sets the value of MatchMakingProfileId.|
|ERHAPI_ProfileJoinMode &|[GetJoinMode](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1acca3ed8e4eaac20c40fc1cb590bc1a40)()|Gets the value of JoinMode_Optional, regardless of it having been set.|
|const ERHAPI_ProfileJoinMode &|[GetJoinMode](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1af93faf8294555ca09913a242027c0e10)()|Gets the value of JoinMode_Optional, regardless of it having been set.|
|const ERHAPI_ProfileJoinMode &|[GetJoinMode](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a470e7b74c7d01ff76ddbe193aae39050)(const ERHAPI_ProfileJoinMode & DefaultValue)|Gets the value of JoinMode_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetJoinMode](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a698163252c3bc913772d2c6f7c046225)(ERHAPI_ProfileJoinMode & OutValue)|Fills OutValue with the value of JoinMode_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_ProfileJoinMode *|[GetJoinModeOrNull](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a951f51f8957ac2b177fb73d471ade8a9)()|Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_ProfileJoinMode *|[GetJoinModeOrNull](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a473dbf0d119cd9c3a167816772d63ddc)()|Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetJoinMode](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1af09ae2e4a0a93c57ef3441b3e0016897)(ERHAPI_ProfileJoinMode NewValue)|Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true.|
|void|[ClearJoinMode](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1aab63f74fb4ae0fb21419a3cecdacb647)()|Clears the value of JoinMode_Optional and sets JoinMode_IsSet to false.|
|FGuid &|[GetInstanceRequestTemplateId](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a8bd2d9571b74ae730f49da3265cd52d9)()|Gets the value of InstanceRequestTemplateId.|
|const FGuid &|[GetInstanceRequestTemplateId](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a9b376d843d7b97b2540be8f226e7c3ea)()|Gets the value of InstanceRequestTemplateId.|
|void|[SetInstanceRequestTemplateId](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a983cd05dcafc65def71e70fa9a646598)(FGuid NewValue)|Sets the value of InstanceRequestTemplateId.|
|FString &|[GetRankId](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a072dcd90d711229eadc0a0b765233cac)()|Gets the value of RankId_Optional, regardless of it having been set.|
|const FString &|[GetRankId](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a44e1a5ddc56d3d7d957aef529a008983)()|Gets the value of RankId_Optional, regardless of it having been set.|
|const FString &|[GetRankId](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a872d95940df64fe58cd9674fedd33126)(const FString & DefaultValue)|Gets the value of RankId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetRankId](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1afc8b52a3625120cb5893535059288df1)(FString & OutValue)|Fills OutValue with the value of RankId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetRankIdOrNull](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1ad27d1e25492cd7c62834360f42897f42)()|Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetRankIdOrNull](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a2d2c3762f37155df05423c4ac7fb4a0e)()|Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetRankId](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1ac8cd53f1c162284f8d88db8c56c05140)(FString NewValue)|Sets the value of RankId_Optional and also sets RankId_IsSet to true.|
|void|[ClearRankId](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a897e53f524139e9885b59fe28ca26b6f)()|Clears the value of RankId_Optional and sets RankId_IsSet to false.|
|int32 &|[GetNumSides](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1aa563f13e67e9b818e62f8a087a5bcb40)()|Gets the value of NumSides_Optional, regardless of it having been set.|
|const int32 &|[GetNumSides](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a110ef77dbe42d217beb59c97bc2b46cb)()|Gets the value of NumSides_Optional, regardless of it having been set.|
|const int32 &|[GetNumSides](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1aea61c2b21146e917855542f8af93d31b)(const int32 & DefaultValue)|Gets the value of NumSides_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetNumSides](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1af343eff64a902f25d50fbf423b4f81f0)(int32 & OutValue)|Fills OutValue with the value of NumSides_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetNumSidesOrNull](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1acdf478cadb8c7e198b34958a5a7ceeb6)()|Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetNumSidesOrNull](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a0b6f4509991348462aacee8c9b3ac0dd)()|Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetNumSides](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a273701f77d1cedaa6550c048dd0ff244)(int32 NewValue)|Sets the value of NumSides_Optional and also sets NumSides_IsSet to true.|
|void|[ClearNumSides](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a4b5d018076f15a9cf92d33bb7422ffb3)()|Clears the value of NumSides_Optional and sets NumSides_IsSet to false.|
|bool|[IsNumSidesDefaultValue](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a66b7c48d8cc8248a686ddd756ab4bb78)()|Returns true if NumSides_Optional is set and matches the default value.|
|void|[SetNumSidesToDefault](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a24a38c894c073d4219d42a06390d84bd)()|Sets the value of NumSides_Optional to its default and also sets NumSides_IsSet to true.|
|int32 &|[GetMaxPlayersPerSide](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a79018b4bac31b293445a4b79ebd75b6c)()|Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.|
|const int32 &|[GetMaxPlayersPerSide](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1ab36e8292e53555d824c4c8257c15dbd4)()|Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.|
|const int32 &|[GetMaxPlayersPerSide](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1ac6ac3675bc9034d2d1dda6ad5e2aba83)(const int32 & DefaultValue)|Gets the value of MaxPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetMaxPlayersPerSide](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a31cda4199401eb0c57419e45a7c3810a)(int32 & OutValue)|Fills OutValue with the value of MaxPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetMaxPlayersPerSideOrNull](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1adafaa70e4226ea96b269d0a207359827)()|Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetMaxPlayersPerSideOrNull](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1ada03ad1166940ce885192b921399afd5)()|Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetMaxPlayersPerSide](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a2277e9935a6a4cf8b78ad8552051e9c3)(int32 NewValue)|Sets the value of MaxPlayersPerSide_Optional and also sets MaxPlayersPerSide_IsSet to true.|
|void|[ClearMaxPlayersPerSide](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a8deb6676caa04797a00ad24169150878)()|Clears the value of MaxPlayersPerSide_Optional and sets MaxPlayersPerSide_IsSet to false.|
|bool|[IsMaxPlayersPerSideDefaultValue](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a834129c1dc734d80921a47a67ed13dbf)()|Returns true if MaxPlayersPerSide_Optional is set and matches the default value.|
|void|[SetMaxPlayersPerSideToDefault](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a3641c66672a47129b61a22e239a89df2)()|Sets the value of MaxPlayersPerSide_Optional to its default and also sets MaxPlayersPerSide_IsSet to true.|
|int32 &|[GetMinPlayersPerSide](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a2d6ef0ba56a361bb3eccd2efa26952d1)()|Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.|
|const int32 &|[GetMinPlayersPerSide](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1ae75b32465d0a5aad7a55b11f86fd8739)()|Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.|
|const int32 &|[GetMinPlayersPerSide](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a7edb0b620ad22d752940c60028330862)(const int32 & DefaultValue)|Gets the value of MinPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetMinPlayersPerSide](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a8eecd9c9114cc4ef9a43fbf94dfee801)(int32 & OutValue)|Fills OutValue with the value of MinPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetMinPlayersPerSideOrNull](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a5f657d787b0409f585eef7efd77a4efd)()|Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetMinPlayersPerSideOrNull](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1afc889300c68d018be0408236c110d827)()|Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetMinPlayersPerSide](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a2d3046489c766d465fa104e5b8a1677a)(int32 NewValue)|Sets the value of MinPlayersPerSide_Optional and also sets MinPlayersPerSide_IsSet to true.|
|void|[ClearMinPlayersPerSide](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a718d5fad0a7afd7c7d123ecf3f6561a0)()|Clears the value of MinPlayersPerSide_Optional and sets MinPlayersPerSide_IsSet to false.|
|bool|[IsMinPlayersPerSideDefaultValue](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a815a3c8c494a1d04e3403918d4498f49)()|Returns true if MinPlayersPerSide_Optional is set and matches the default value.|
|void|[SetMinPlayersPerSideToDefault](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a620b2a35235eed724c9f14d8df2ab3bc)()|Sets the value of MinPlayersPerSide_Optional to its default and also sets MinPlayersPerSide_IsSet to true.|
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|[GetLegacyConfig](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1ad326532ecc62acb511177c0e343587bd)()|Gets the value of LegacyConfig_Optional, regardless of it having been set.|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|[GetLegacyConfig](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a180fcdd0c151179672faee4cd8e046a9)()|Gets the value of LegacyConfig_Optional, regardless of it having been set.|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|[GetLegacyConfig](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1adc8741647a8c155ee13dfc8009c3e1b3)(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & DefaultValue)|Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetLegacyConfig](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a94ad71fbad7c8f49329b5bac9dd9be20)([FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & OutValue)|Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) *|[GetLegacyConfigOrNull](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1affd3bac0fc61edb4b9b67feb189eb4ca)()|Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) *|[GetLegacyConfigOrNull](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1ad8cabc5ac1976c08c6b8b8a3defd6988)()|Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetLegacyConfig](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1a629a0a6f1cdfdc1fd1b53c33b01190b2)([FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) NewValue)|Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true.|
|void|[ClearLegacyConfig](/unreal-plugins/all/structfrhapi__matchmakingprofilev2/#structFRHAPI__MatchMakingProfileV2_1aa51a7cf8d677bd0f57eed39122d5d6af)()|Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false.|
## Public Attributes



### `MatchMakingProfileId` <a id="structFRHAPI__MatchMakingProfileV2_1a1fac1d90d7052f77ed54c7ef0158d767"></a>

`FString FRHAPI_MatchMakingProfileV2::MatchMakingProfileId`

ID of the matchmaking profile to join.




### `JoinMode_Optional` <a id="structFRHAPI__MatchMakingProfileV2_1a942eea841d6b9ab8a304ecc1e3486967"></a>

`ERHAPI_ProfileJoinMode FRHAPI_MatchMakingProfileV2::JoinMode_Optional`

What mode to set on the matchmaking profile (normal, backfill etc)




### `JoinMode_IsSet` <a id="structFRHAPI__MatchMakingProfileV2_1a7d05d638ad7e6bdc38adbee05fc65bb1"></a>

`bool FRHAPI_MatchMakingProfileV2::JoinMode_IsSet`

true if JoinMode_Optional has been set to a value




### `InstanceRequestTemplateId` <a id="structFRHAPI__MatchMakingProfileV2_1acc1ae567ca4eae15dd5ba058009eb1bf"></a>

`FGuid FRHAPI_MatchMakingProfileV2::InstanceRequestTemplateId`

Which instance template to use when launching a match in this profile.




### `RankId_Optional` <a id="structFRHAPI__MatchMakingProfileV2_1afd26627e8543724e350b3961995a4434"></a>

`FString FRHAPI_MatchMakingProfileV2::RankId_Optional`

Which rank this profile should use MMR from to make matches from, and update at the end of match (1v1 MMR or 2v2 MMR for example)




### `RankId_IsSet` <a id="structFRHAPI__MatchMakingProfileV2_1a60ec35f19ebed9d47879447dcc660f39"></a>

`bool FRHAPI_MatchMakingProfileV2::RankId_IsSet`

true if RankId_Optional has been set to a value




### `NumSides_Optional` <a id="structFRHAPI__MatchMakingProfileV2_1a05d7bde5226bb55b7361fc9d447b2639"></a>

`int32 FRHAPI_MatchMakingProfileV2::NumSides_Optional`

The number of sides a game in this profile will have (2 in a 1v1 and 3 in a 1v1v1 for example.




### `NumSides_IsSet` <a id="structFRHAPI__MatchMakingProfileV2_1a8a5f02725af6685c6fae0145c1e03ef2"></a>

`bool FRHAPI_MatchMakingProfileV2::NumSides_IsSet`

true if NumSides_Optional has been set to a value




### `MaxPlayersPerSide_Optional` <a id="structFRHAPI__MatchMakingProfileV2_1acfb2f4481ae253fe40c2bb2ce3b7bfbb"></a>

`int32 FRHAPI_MatchMakingProfileV2::MaxPlayersPerSide_Optional`

The maximum number of players that can be on each team.




### `MaxPlayersPerSide_IsSet` <a id="structFRHAPI__MatchMakingProfileV2_1acc2a1fd5d9019b960edbf25865c0310d"></a>

`bool FRHAPI_MatchMakingProfileV2::MaxPlayersPerSide_IsSet`

true if MaxPlayersPerSide_Optional has been set to a value




### `MinPlayersPerSide_Optional` <a id="structFRHAPI__MatchMakingProfileV2_1a134fd567423d422235de46bba637faa2"></a>

`int32 FRHAPI_MatchMakingProfileV2::MinPlayersPerSide_Optional`

The minimum number of players that can be on each team.




### `MinPlayersPerSide_IsSet` <a id="structFRHAPI__MatchMakingProfileV2_1a7b9cc3870d306efd0f9c59e62d96e38e"></a>

`bool FRHAPI_MatchMakingProfileV2::MinPlayersPerSide_IsSet`

true if MinPlayersPerSide_Optional has been set to a value




### `LegacyConfig_Optional` <a id="structFRHAPI__MatchMakingProfileV2_1af6d5bc75fe36551e65c7d61585ac2e65"></a>

`FRHAPI_JsonObject FRHAPI_MatchMakingProfileV2::LegacyConfig_Optional`

Legacy config to help migrate clients.




### `LegacyConfig_IsSet` <a id="structFRHAPI__MatchMakingProfileV2_1af417de3e8a601609b54e0310551c9caa"></a>

`bool FRHAPI_MatchMakingProfileV2::LegacyConfig_IsSet`

true if LegacyConfig_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__MatchMakingProfileV2_1a27b71626be2a2edef0ed660aa42fcaa6"></a>

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



### `WriteJson` <a id="structFRHAPI__MatchMakingProfileV2_1aa6ebcdc58854a72f9cb8c75b9f86834c"></a>

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



### `GetMatchMakingProfileId` <a id="structFRHAPI__MatchMakingProfileV2_1a4ae3b82d9d3c2bb53a131330dfe71e59"></a>

FString & GetMatchMakingProfileId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchMakingProfileId.




### `GetMatchMakingProfileId` <a id="structFRHAPI__MatchMakingProfileV2_1a2546a8d06702b1dd5a24f4d001f98688"></a>

const FString & GetMatchMakingProfileId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MatchMakingProfileId.




### `SetMatchMakingProfileId` <a id="structFRHAPI__MatchMakingProfileV2_1ad06533915af39e0591af3d6a135990ca"></a>

void SetMatchMakingProfileId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of MatchMakingProfileId.




### `GetJoinMode` <a id="structFRHAPI__MatchMakingProfileV2_1acca3ed8e4eaac20c40fc1cb590bc1a40"></a>

ERHAPI_ProfileJoinMode & GetJoinMode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of JoinMode_Optional, regardless of it having been set.




### `GetJoinMode` <a id="structFRHAPI__MatchMakingProfileV2_1af93faf8294555ca09913a242027c0e10"></a>

const ERHAPI_ProfileJoinMode & GetJoinMode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of JoinMode_Optional, regardless of it having been set.




### `GetJoinMode` <a id="structFRHAPI__MatchMakingProfileV2_1a470e7b74c7d01ff76ddbe193aae39050"></a>

const ERHAPI_ProfileJoinMode & GetJoinMode(const ERHAPI_ProfileJoinMode & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_ProfileJoinMode &|DefaultValue|

#### Description

Gets the value of JoinMode_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetJoinMode` <a id="structFRHAPI__MatchMakingProfileV2_1a698163252c3bc913772d2c6f7c046225"></a>

bool GetJoinMode(ERHAPI_ProfileJoinMode & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_ProfileJoinMode &|OutValue|

#### Description

Fills OutValue with the value of JoinMode_Optional and returns true if it has been set, otherwise returns false.




### `GetJoinModeOrNull` <a id="structFRHAPI__MatchMakingProfileV2_1a951f51f8957ac2b177fb73d471ade8a9"></a>

ERHAPI_ProfileJoinMode * GetJoinModeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.




### `GetJoinModeOrNull` <a id="structFRHAPI__MatchMakingProfileV2_1a473dbf0d119cd9c3a167816772d63ddc"></a>

const ERHAPI_ProfileJoinMode * GetJoinModeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr.




### `SetJoinMode` <a id="structFRHAPI__MatchMakingProfileV2_1af09ae2e4a0a93c57ef3441b3e0016897"></a>

void SetJoinMode(ERHAPI_ProfileJoinMode NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_ProfileJoinMode|NewValue|

#### Description

Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true.




### `ClearJoinMode` <a id="structFRHAPI__MatchMakingProfileV2_1aab63f74fb4ae0fb21419a3cecdacb647"></a>

void ClearJoinMode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of JoinMode_Optional and sets JoinMode_IsSet to false.




### `GetInstanceRequestTemplateId` <a id="structFRHAPI__MatchMakingProfileV2_1a8bd2d9571b74ae730f49da3265cd52d9"></a>

FGuid & GetInstanceRequestTemplateId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceRequestTemplateId.




### `GetInstanceRequestTemplateId` <a id="structFRHAPI__MatchMakingProfileV2_1a9b376d843d7b97b2540be8f226e7c3ea"></a>

const FGuid & GetInstanceRequestTemplateId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceRequestTemplateId.




### `SetInstanceRequestTemplateId` <a id="structFRHAPI__MatchMakingProfileV2_1a983cd05dcafc65def71e70fa9a646598"></a>

void SetInstanceRequestTemplateId(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of InstanceRequestTemplateId.




### `GetRankId` <a id="structFRHAPI__MatchMakingProfileV2_1a072dcd90d711229eadc0a0b765233cac"></a>

FString & GetRankId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RankId_Optional, regardless of it having been set.




### `GetRankId` <a id="structFRHAPI__MatchMakingProfileV2_1a44e1a5ddc56d3d7d957aef529a008983"></a>

const FString & GetRankId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RankId_Optional, regardless of it having been set.




### `GetRankId` <a id="structFRHAPI__MatchMakingProfileV2_1a872d95940df64fe58cd9674fedd33126"></a>

const FString & GetRankId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of RankId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetRankId` <a id="structFRHAPI__MatchMakingProfileV2_1afc8b52a3625120cb5893535059288df1"></a>

bool GetRankId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of RankId_Optional and returns true if it has been set, otherwise returns false.




### `GetRankIdOrNull` <a id="structFRHAPI__MatchMakingProfileV2_1ad27d1e25492cd7c62834360f42897f42"></a>

FString * GetRankIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.




### `GetRankIdOrNull` <a id="structFRHAPI__MatchMakingProfileV2_1a2d2c3762f37155df05423c4ac7fb4a0e"></a>

const FString * GetRankIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr.




### `SetRankId` <a id="structFRHAPI__MatchMakingProfileV2_1ac8cd53f1c162284f8d88db8c56c05140"></a>

void SetRankId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of RankId_Optional and also sets RankId_IsSet to true.




### `ClearRankId` <a id="structFRHAPI__MatchMakingProfileV2_1a897e53f524139e9885b59fe28ca26b6f"></a>

void ClearRankId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of RankId_Optional and sets RankId_IsSet to false.




### `GetNumSides` <a id="structFRHAPI__MatchMakingProfileV2_1aa563f13e67e9b818e62f8a087a5bcb40"></a>

int32 & GetNumSides()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of NumSides_Optional, regardless of it having been set.




### `GetNumSides` <a id="structFRHAPI__MatchMakingProfileV2_1a110ef77dbe42d217beb59c97bc2b46cb"></a>

const int32 & GetNumSides()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of NumSides_Optional, regardless of it having been set.




### `GetNumSides` <a id="structFRHAPI__MatchMakingProfileV2_1aea61c2b21146e917855542f8af93d31b"></a>

const int32 & GetNumSides(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of NumSides_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetNumSides` <a id="structFRHAPI__MatchMakingProfileV2_1af343eff64a902f25d50fbf423b4f81f0"></a>

bool GetNumSides(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of NumSides_Optional and returns true if it has been set, otherwise returns false.




### `GetNumSidesOrNull` <a id="structFRHAPI__MatchMakingProfileV2_1acdf478cadb8c7e198b34958a5a7ceeb6"></a>

int32 * GetNumSidesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.




### `GetNumSidesOrNull` <a id="structFRHAPI__MatchMakingProfileV2_1a0b6f4509991348462aacee8c9b3ac0dd"></a>

const int32 * GetNumSidesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr.




### `SetNumSides` <a id="structFRHAPI__MatchMakingProfileV2_1a273701f77d1cedaa6550c048dd0ff244"></a>

void SetNumSides(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of NumSides_Optional and also sets NumSides_IsSet to true.




### `ClearNumSides` <a id="structFRHAPI__MatchMakingProfileV2_1a4b5d018076f15a9cf92d33bb7422ffb3"></a>

void ClearNumSides()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of NumSides_Optional and sets NumSides_IsSet to false.




### `IsNumSidesDefaultValue` <a id="structFRHAPI__MatchMakingProfileV2_1a66b7c48d8cc8248a686ddd756ab4bb78"></a>

bool IsNumSidesDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if NumSides_Optional is set and matches the default value.




### `SetNumSidesToDefault` <a id="structFRHAPI__MatchMakingProfileV2_1a24a38c894c073d4219d42a06390d84bd"></a>

void SetNumSidesToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of NumSides_Optional to its default and also sets NumSides_IsSet to true.




### `GetMaxPlayersPerSide` <a id="structFRHAPI__MatchMakingProfileV2_1a79018b4bac31b293445a4b79ebd75b6c"></a>

int32 & GetMaxPlayersPerSide()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.




### `GetMaxPlayersPerSide` <a id="structFRHAPI__MatchMakingProfileV2_1ab36e8292e53555d824c4c8257c15dbd4"></a>

const int32 & GetMaxPlayersPerSide()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set.




### `GetMaxPlayersPerSide` <a id="structFRHAPI__MatchMakingProfileV2_1ac6ac3675bc9034d2d1dda6ad5e2aba83"></a>

const int32 & GetMaxPlayersPerSide(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of MaxPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetMaxPlayersPerSide` <a id="structFRHAPI__MatchMakingProfileV2_1a31cda4199401eb0c57419e45a7c3810a"></a>

bool GetMaxPlayersPerSide(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of MaxPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.




### `GetMaxPlayersPerSideOrNull` <a id="structFRHAPI__MatchMakingProfileV2_1adafaa70e4226ea96b269d0a207359827"></a>

int32 * GetMaxPlayersPerSideOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.




### `GetMaxPlayersPerSideOrNull` <a id="structFRHAPI__MatchMakingProfileV2_1ada03ad1166940ce885192b921399afd5"></a>

const int32 * GetMaxPlayersPerSideOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.




### `SetMaxPlayersPerSide` <a id="structFRHAPI__MatchMakingProfileV2_1a2277e9935a6a4cf8b78ad8552051e9c3"></a>

void SetMaxPlayersPerSide(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of MaxPlayersPerSide_Optional and also sets MaxPlayersPerSide_IsSet to true.




### `ClearMaxPlayersPerSide` <a id="structFRHAPI__MatchMakingProfileV2_1a8deb6676caa04797a00ad24169150878"></a>

void ClearMaxPlayersPerSide()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of MaxPlayersPerSide_Optional and sets MaxPlayersPerSide_IsSet to false.




### `IsMaxPlayersPerSideDefaultValue` <a id="structFRHAPI__MatchMakingProfileV2_1a834129c1dc734d80921a47a67ed13dbf"></a>

bool IsMaxPlayersPerSideDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if MaxPlayersPerSide_Optional is set and matches the default value.




### `SetMaxPlayersPerSideToDefault` <a id="structFRHAPI__MatchMakingProfileV2_1a3641c66672a47129b61a22e239a89df2"></a>

void SetMaxPlayersPerSideToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of MaxPlayersPerSide_Optional to its default and also sets MaxPlayersPerSide_IsSet to true.




### `GetMinPlayersPerSide` <a id="structFRHAPI__MatchMakingProfileV2_1a2d6ef0ba56a361bb3eccd2efa26952d1"></a>

int32 & GetMinPlayersPerSide()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.




### `GetMinPlayersPerSide` <a id="structFRHAPI__MatchMakingProfileV2_1ae75b32465d0a5aad7a55b11f86fd8739"></a>

const int32 & GetMinPlayersPerSide()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MinPlayersPerSide_Optional, regardless of it having been set.




### `GetMinPlayersPerSide` <a id="structFRHAPI__MatchMakingProfileV2_1a7edb0b620ad22d752940c60028330862"></a>

const int32 & GetMinPlayersPerSide(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of MinPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetMinPlayersPerSide` <a id="structFRHAPI__MatchMakingProfileV2_1a8eecd9c9114cc4ef9a43fbf94dfee801"></a>

bool GetMinPlayersPerSide(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of MinPlayersPerSide_Optional and returns true if it has been set, otherwise returns false.




### `GetMinPlayersPerSideOrNull` <a id="structFRHAPI__MatchMakingProfileV2_1a5f657d787b0409f585eef7efd77a4efd"></a>

int32 * GetMinPlayersPerSideOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.




### `GetMinPlayersPerSideOrNull` <a id="structFRHAPI__MatchMakingProfileV2_1afc889300c68d018be0408236c110d827"></a>

const int32 * GetMinPlayersPerSideOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr.




### `SetMinPlayersPerSide` <a id="structFRHAPI__MatchMakingProfileV2_1a2d3046489c766d465fa104e5b8a1677a"></a>

void SetMinPlayersPerSide(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of MinPlayersPerSide_Optional and also sets MinPlayersPerSide_IsSet to true.




### `ClearMinPlayersPerSide` <a id="structFRHAPI__MatchMakingProfileV2_1a718d5fad0a7afd7c7d123ecf3f6561a0"></a>

void ClearMinPlayersPerSide()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of MinPlayersPerSide_Optional and sets MinPlayersPerSide_IsSet to false.




### `IsMinPlayersPerSideDefaultValue` <a id="structFRHAPI__MatchMakingProfileV2_1a815a3c8c494a1d04e3403918d4498f49"></a>

bool IsMinPlayersPerSideDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if MinPlayersPerSide_Optional is set and matches the default value.




### `SetMinPlayersPerSideToDefault` <a id="structFRHAPI__MatchMakingProfileV2_1a620b2a35235eed724c9f14d8df2ab3bc"></a>

void SetMinPlayersPerSideToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of MinPlayersPerSide_Optional to its default and also sets MinPlayersPerSide_IsSet to true.




### `GetLegacyConfig` <a id="structFRHAPI__MatchMakingProfileV2_1ad326532ecc62acb511177c0e343587bd"></a>

[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & GetLegacyConfig()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LegacyConfig_Optional, regardless of it having been set.




### `GetLegacyConfig` <a id="structFRHAPI__MatchMakingProfileV2_1a180fcdd0c151179672faee4cd8e046a9"></a>

const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & GetLegacyConfig()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of LegacyConfig_Optional, regardless of it having been set.




### `GetLegacyConfig` <a id="structFRHAPI__MatchMakingProfileV2_1adc8741647a8c155ee13dfc8009c3e1b3"></a>

const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & GetLegacyConfig(const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|DefaultValue|

#### Description

Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetLegacyConfig` <a id="structFRHAPI__MatchMakingProfileV2_1a94ad71fbad7c8f49329b5bac9dd9be20"></a>

bool GetLegacyConfig([FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) &|OutValue|

#### Description

Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false.




### `GetLegacyConfigOrNull` <a id="structFRHAPI__MatchMakingProfileV2_1affd3bac0fc61edb4b9b67feb189eb4ca"></a>

[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) * GetLegacyConfigOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.




### `GetLegacyConfigOrNull` <a id="structFRHAPI__MatchMakingProfileV2_1ad8cabc5ac1976c08c6b8b8a3defd6988"></a>

const [FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) * GetLegacyConfigOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.




### `SetLegacyConfig` <a id="structFRHAPI__MatchMakingProfileV2_1a629a0a6f1cdfdc1fd1b53c33b01190b2"></a>

void SetLegacyConfig([FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_JsonObject](/unreal-plugins/all/structfrhapi__jsonobject/#structFRHAPI__JsonObject)|NewValue|

#### Description

Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true.




### `ClearLegacyConfig` <a id="structFRHAPI__MatchMakingProfileV2_1aa51a7cf8d677bd0f57eed39122d5d6af"></a>

void ClearLegacyConfig()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false.





