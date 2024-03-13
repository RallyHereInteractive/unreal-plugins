---
title: FRHAPI_SessionTemplate Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Template used to create new RallyHere sessions of a specific type. Configurable in the developer portal.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[SessionType](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a294a5c42b68d1960ade23eb2b8ebed03)|unique name for this template|
|FString|[EngineSessionType_Optional](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a5215d82c4b5a1849115e1192ce85a42a)|Engine identifier for sessions of this type. For UE, this is commonly Party or Game.|
|bool|[EngineSessionType_IsSet](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a7fe48b7d9dd76d0918d6c8cfef6ddabe)|true if EngineSessionType_Optional has been set to a value|
|bool|[CanJoinMatchmaking_Optional](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a5acc833f588d8b29365429498cfe2a7b)|Are sessions of this type allowed to join matchmaking?|
|bool|[CanJoinMatchmaking_IsSet](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a2e4fd1ddce8e54ae5242c6a839b9a446)|true if CanJoinMatchmaking_Optional has been set to a value|
|bool|[CanBeCreatedByPlayersDirectly_Optional](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ab6aed074db1776677efeedae942a6dde)|Are players allowed to create sessions of this type?|
|bool|[CanBeCreatedByPlayersDirectly_IsSet](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1af34cf526890cc59a7c99aeb31fe47f86)|true if CanBeCreatedByPlayersDirectly_Optional has been set to a value|
|bool|[Joinable_Optional](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1af726850d2f0a47c0d363bc6fe56649d2)|DEPRECATED. Use 'attempt_auto_join' instead. Should players join existing sessions of this type before creating a new one.|
|bool|[Joinable_IsSet](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a640852541c1622264fb0b45e8bcba358)|true if Joinable_Optional has been set to a value|
|bool|[AttemptAutoJoin_Optional](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a7d1c0ca1b78e58fe1b0e1b4bc14c7d1d)|Should players join existing sessions of this type before creating a new one.|
|bool|[AttemptAutoJoin_IsSet](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a3ef337d1d127c53479600fd601327932)|true if AttemptAutoJoin_Optional has been set to a value|
|bool|[DefaultPublic_Optional](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ad23d2d7b28599c82e031a8ec8e0044bd)|Should sessions of this type should be publicly joinable by default.|
|bool|[DefaultPublic_IsSet](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ad56e88aba80b14f4a35817228bc1de98)|true if DefaultPublic_Optional has been set to a value|
|bool|[AutoAddToBrowser_Optional](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1acd767d33d578663a2ae87266051aee21)|Should session be automatically added to the browser list.|
|bool|[AutoAddToBrowser_IsSet](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a3680cbdc548742735a67e6b5aa39f17a)|true if AutoAddToBrowser_Optional has been set to a value|
|TMap< FString, FString >|[AutoBrowserParams_Optional](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a82787643aa3e38fe0da7bf1500e0ef62)|Browser parameters that can be used to filter results.|
|bool|[AutoBrowserParams_IsSet](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a72c52c990ae499219e09ac48b95dfb1b)|true if AutoBrowserParams_Optional has been set to a value|
|bool|[CanBeAddedToServerBrowser_Optional](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a76d1142e89d2951f77aca49fae032565)|Are sessions of this type able to be added to the server browser by players?|
|bool|[CanBeAddedToServerBrowser_IsSet](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1af405bbeacdcad1f1edeec8066557d282)|true if CanBeAddedToServerBrowser_Optional has been set to a value|
|bool|[KeepAliveOnEmpty_Optional](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a9e9d05c256bcee13ec7a503fff383a9f)|Should the session stay around, or be destroyed when the last player leaves it?|
|bool|[KeepAliveOnEmpty_IsSet](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a7a021f27573b66f03bddb164ba2baea4)|true if KeepAliveOnEmpty_Optional has been set to a value|
|TMap< FString, [FRHAPI_PlatformSessionTemplate](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate) >|[PlatformTemplates_Optional](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a4a953d98de7701f09938b03e88dc447d)|Platform-Specific session mappings that are used to coordinate Rally Here sessions with OnlineSubsystem sessions.|
|bool|[PlatformTemplates_IsSet](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a98480d277fd8e297e5b90560f3c10f1a)|true if PlatformTemplates_Optional has been set to a value|
|[FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams)|[AutoStartupParams_Optional](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a32d9a060ff0208b639415cee5d9f7287)||
|bool|[AutoStartupParams_IsSet](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a1ae179a6de476981a9a38197758b7e14)|true if AutoStartupParams_Optional has been set to a value|
|int32|[MinSessionCount_Optional](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1aecf6bdd55d8dc8e92bf1d6e2dc032fc6)|Minimum number of this type of session to be running at any given time per region.|
|bool|[MinSessionCount_IsSet](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a067eb5ca1f241b90407f3a373cb0bd79)|true if MinSessionCount_Optional has been set to a value|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a8dc395b5c32a277ba6a8098613b19c90)|Product-defined custom data about this session type.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a74b694f3d97279b0f69b5d9c45cef5cc)|true if CustomData_Optional has been set to a value|
|int32|[NumTeams_Optional](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a5a6263a13f22dc9fab381d24dd85b07d)|The number of teams this session type can have.|
|bool|[NumTeams_IsSet](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a5aae055f985bbecae420f583bffcc0a8)|true if NumTeams_Optional has been set to a value|
|int32|[PlayersPerTeam_Optional](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1acc07f08f5c7dc3262717a590f3de6764)|The number of players that can be on each team.|
|bool|[PlayersPerTeam_IsSet](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a4351b4b52f5240e0bff65fb92b36b3a2)|true if PlayersPerTeam_Optional has been set to a value|
|bool|[CanChangeOwnTeam_Optional](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1aa2d67a98c7bcf96cc848ae81ca3387e3)|Whether or not a player can change which team they are on. If true, they are able to. If False, they player's team can only be changed by an admin.|
|bool|[CanChangeOwnTeam_IsSet](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ad6b80d668b66266c71f70affb0cae587)|true if CanChangeOwnTeam_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a4a45fc40eed406ae864f33e45c0eadf2)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a8ddb8c09f6817591c4927b4a5c49df76)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetSessionType](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a7772fb5d40d6b5c69dc188065146a39c)()|Gets the value of SessionType.|
|const FString &|[GetSessionType](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1affce611355a919ed8acc4bbd307ae642)()|Gets the value of SessionType.|
|void|[SetSessionType](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ad361f7865488bf9dbb073c2fa606b744)(FString NewValue)|Sets the value of SessionType.|
|FString &|[GetEngineSessionType](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a762d5ee11b4fbdcf9cc38632fc97765f)()|Gets the value of EngineSessionType_Optional, regardless of it having been set.|
|const FString &|[GetEngineSessionType](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a24a915b19cee9cc45c130fa81cf37942)()|Gets the value of EngineSessionType_Optional, regardless of it having been set.|
|const FString &|[GetEngineSessionType](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ae11165b1eca1372b3ea911977fd53855)(const FString & DefaultValue)|Gets the value of EngineSessionType_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetEngineSessionType](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ac4fce3fe7bfb35f5ded0559c3d4ddb8d)(FString & OutValue)|Fills OutValue with the value of EngineSessionType_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetEngineSessionTypeOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1aa4a5b7deb5f1c36b8be8959629ccd7dd)()|Returns a pointer to EngineSessionType_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetEngineSessionTypeOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a09dcea68cfc96a44fb3e1e5a5e75b62c)()|Returns a pointer to EngineSessionType_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetEngineSessionType](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a6e3a3c92d0edddcb592919871403829b)(FString NewValue)|Sets the value of EngineSessionType_Optional and also sets EngineSessionType_IsSet to true.|
|void|[ClearEngineSessionType](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a49cf645ee28f75e34b7e82a375b0b7a0)()|Clears the value of EngineSessionType_Optional and sets EngineSessionType_IsSet to false.|
|bool|[IsEngineSessionTypeDefaultValue](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a3cfbdbc7f9037595cd081510a49b47be)()|Returns true if EngineSessionType_Optional is set and matches the default value.|
|void|[SetEngineSessionTypeToDefault](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a63b6dfef02bbfc4c1602f59da2e7f468)()|Sets the value of EngineSessionType_Optional to its default and also sets EngineSessionType_IsSet to true.|
|bool &|[GetCanJoinMatchmaking](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a0cf738471cdd5148be692454ccc855ba)()|Gets the value of CanJoinMatchmaking_Optional, regardless of it having been set.|
|const bool &|[GetCanJoinMatchmaking](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a5099fafdd07ecb7d5572dac0c00aee7e)()|Gets the value of CanJoinMatchmaking_Optional, regardless of it having been set.|
|const bool &|[GetCanJoinMatchmaking](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a3dde27074a0c0b2e6785e23ec3c6fe4c)(const bool & DefaultValue)|Gets the value of CanJoinMatchmaking_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCanJoinMatchmaking](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ad8ade8f89b17c3544ddeb227951fcf83)(bool & OutValue)|Fills OutValue with the value of CanJoinMatchmaking_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetCanJoinMatchmakingOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1adce54ea0278bbf251c3e43cad020c191)()|Returns a pointer to CanJoinMatchmaking_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetCanJoinMatchmakingOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a07543fefd2c5ac05df610cdbf89c9e04)()|Returns a pointer to CanJoinMatchmaking_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCanJoinMatchmaking](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a2e4f26ae74921b4b76ebab0d12c58777)(bool NewValue)|Sets the value of CanJoinMatchmaking_Optional and also sets CanJoinMatchmaking_IsSet to true.|
|void|[ClearCanJoinMatchmaking](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1aea8827859a78eea75ccb378ae6d34536)()|Clears the value of CanJoinMatchmaking_Optional and sets CanJoinMatchmaking_IsSet to false.|
|bool|[IsCanJoinMatchmakingDefaultValue](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a712f72abd63eda494b43154b029822e9)()|Returns true if CanJoinMatchmaking_Optional is set and matches the default value.|
|void|[SetCanJoinMatchmakingToDefault](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ab1db9565664aea038731887f24deff21)()|Sets the value of CanJoinMatchmaking_Optional to its default and also sets CanJoinMatchmaking_IsSet to true.|
|bool &|[GetCanBeCreatedByPlayersDirectly](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a245738afb53726c0b785aec39bf86106)()|Gets the value of CanBeCreatedByPlayersDirectly_Optional, regardless of it having been set.|
|const bool &|[GetCanBeCreatedByPlayersDirectly](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1aaae97aee94c5b5f89181dd0e7be3e95b)()|Gets the value of CanBeCreatedByPlayersDirectly_Optional, regardless of it having been set.|
|const bool &|[GetCanBeCreatedByPlayersDirectly](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1acc909772786edaff5c8a7a7a31fc9133)(const bool & DefaultValue)|Gets the value of CanBeCreatedByPlayersDirectly_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCanBeCreatedByPlayersDirectly](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a17cb4c890a7a9329f9c84300193a5c32)(bool & OutValue)|Fills OutValue with the value of CanBeCreatedByPlayersDirectly_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetCanBeCreatedByPlayersDirectlyOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ac670ec04c83f5e5ae6fc1b4ca1b368dc)()|Returns a pointer to CanBeCreatedByPlayersDirectly_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetCanBeCreatedByPlayersDirectlyOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a1edf03762e4cf2988e745f8d3dc5d35d)()|Returns a pointer to CanBeCreatedByPlayersDirectly_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCanBeCreatedByPlayersDirectly](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a284728a7560987dc34a0fba0ef815cfb)(bool NewValue)|Sets the value of CanBeCreatedByPlayersDirectly_Optional and also sets CanBeCreatedByPlayersDirectly_IsSet to true.|
|void|[ClearCanBeCreatedByPlayersDirectly](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1aeeead6ecb3330ef0ab4e0d0f1d51be6f)()|Clears the value of CanBeCreatedByPlayersDirectly_Optional and sets CanBeCreatedByPlayersDirectly_IsSet to false.|
|bool|[IsCanBeCreatedByPlayersDirectlyDefaultValue](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1afc9d293d6290f5c2de49e0abc1da9c4d)()|Returns true if CanBeCreatedByPlayersDirectly_Optional is set and matches the default value.|
|void|[SetCanBeCreatedByPlayersDirectlyToDefault](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a5895d02285be3538be2d7e59412f7466)()|Sets the value of CanBeCreatedByPlayersDirectly_Optional to its default and also sets CanBeCreatedByPlayersDirectly_IsSet to true.|
|bool &|[GetJoinable](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1af9cffd42d338984ff9c90540bc8ab561)()|Gets the value of Joinable_Optional, regardless of it having been set.|
|const bool &|[GetJoinable](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ad8599b59763995fa1ed26cf7d89f6697)()|Gets the value of Joinable_Optional, regardless of it having been set.|
|const bool &|[GetJoinable](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1af2829ec666b5d54b5b9b35efb05358a4)(const bool & DefaultValue)|Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetJoinable](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a284913a49f55998220ccbae7ffa31df4)(bool & OutValue)|Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetJoinableOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1aeeb6fe105d9e3ba735122f45ee32a40a)()|Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetJoinableOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a7c9bfc444c99da66f448977682d24985)()|Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetJoinable](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ac7e6f063c170b4cfe3d31d2ca7994e88)(bool NewValue)|Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.|
|void|[ClearJoinable](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a2656215bcf0eb51c71fed328166e6b68)()|Clears the value of Joinable_Optional and sets Joinable_IsSet to false.|
|bool|[IsJoinableDefaultValue](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a7005e50d8cbe3b02a9ce17dbb7d4bd4c)()|Returns true if Joinable_Optional is set and matches the default value.|
|void|[SetJoinableToDefault](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1aab55eb4066768dc2f660b6f7148789c6)()|Sets the value of Joinable_Optional to its default and also sets Joinable_IsSet to true.|
|bool &|[GetAttemptAutoJoin](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a0784581eddfc3da5b8d0d9053c1870c2)()|Gets the value of AttemptAutoJoin_Optional, regardless of it having been set.|
|const bool &|[GetAttemptAutoJoin](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a90c6ede8f6a6e572ed0f2502e47056ef)()|Gets the value of AttemptAutoJoin_Optional, regardless of it having been set.|
|const bool &|[GetAttemptAutoJoin](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a004e18b9442ec10e4b100d998553ff38)(const bool & DefaultValue)|Gets the value of AttemptAutoJoin_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAttemptAutoJoin](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a746d02f50e4c48a2255984bcae98d864)(bool & OutValue)|Fills OutValue with the value of AttemptAutoJoin_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetAttemptAutoJoinOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1acc02b9c5cb69200d7aa7eb9cf0b5816d)()|Returns a pointer to AttemptAutoJoin_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetAttemptAutoJoinOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1aafad240b056cbf756bd05e0d0a49dbfa)()|Returns a pointer to AttemptAutoJoin_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAttemptAutoJoin](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a8f5a20a38ee91d6199ef73404c116485)(bool NewValue)|Sets the value of AttemptAutoJoin_Optional and also sets AttemptAutoJoin_IsSet to true.|
|void|[ClearAttemptAutoJoin](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1af01c65d9412c08982e1d810d821508e6)()|Clears the value of AttemptAutoJoin_Optional and sets AttemptAutoJoin_IsSet to false.|
|bool|[IsAttemptAutoJoinDefaultValue](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a6272851fd94d2aae9769e3f49251f26e)()|Returns true if AttemptAutoJoin_Optional is set and matches the default value.|
|void|[SetAttemptAutoJoinToDefault](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a625067a334f5914ab7695522f608984b)()|Sets the value of AttemptAutoJoin_Optional to its default and also sets AttemptAutoJoin_IsSet to true.|
|bool &|[GetDefaultPublic](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ad7fe254c574fc3e7253c753331a7ae4f)()|Gets the value of DefaultPublic_Optional, regardless of it having been set.|
|const bool &|[GetDefaultPublic](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ad5653be593ce23f0445f7edc71cd1184)()|Gets the value of DefaultPublic_Optional, regardless of it having been set.|
|const bool &|[GetDefaultPublic](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a70a157efbf3c9380527c3c6da81bc515)(const bool & DefaultValue)|Gets the value of DefaultPublic_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetDefaultPublic](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1abc8a258803a6af1a06337bfd38790b1d)(bool & OutValue)|Fills OutValue with the value of DefaultPublic_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetDefaultPublicOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a41c1b2304383e8191962c347c27a9bf9)()|Returns a pointer to DefaultPublic_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetDefaultPublicOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ab9be70682b6378354fe5c18b805a0222)()|Returns a pointer to DefaultPublic_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetDefaultPublic](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a4670fa8d3d2e7f048dbf81bcfa658ed5)(bool NewValue)|Sets the value of DefaultPublic_Optional and also sets DefaultPublic_IsSet to true.|
|void|[ClearDefaultPublic](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a0b7ec628161b7d1a8317204875d476e5)()|Clears the value of DefaultPublic_Optional and sets DefaultPublic_IsSet to false.|
|bool|[IsDefaultPublicDefaultValue](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1aded9e905d1ae97b71569316e9a93249f)()|Returns true if DefaultPublic_Optional is set and matches the default value.|
|void|[SetDefaultPublicToDefault](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1aeff38f0e7c8d477f6175359b09bf33e7)()|Sets the value of DefaultPublic_Optional to its default and also sets DefaultPublic_IsSet to true.|
|bool &|[GetAutoAddToBrowser](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1adfdd95d3bbe2abb2bec34a1e505d1420)()|Gets the value of AutoAddToBrowser_Optional, regardless of it having been set.|
|const bool &|[GetAutoAddToBrowser](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a1922eb1b6a75e8e3e704ffc247ce68bc)()|Gets the value of AutoAddToBrowser_Optional, regardless of it having been set.|
|const bool &|[GetAutoAddToBrowser](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ab22d912b63beca54e9eb97754afa2f92)(const bool & DefaultValue)|Gets the value of AutoAddToBrowser_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAutoAddToBrowser](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ae622425b3ab30a45ced3fe65d4e23f24)(bool & OutValue)|Fills OutValue with the value of AutoAddToBrowser_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetAutoAddToBrowserOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ac6ee66ffed0a42dd58bc556fb1015faa)()|Returns a pointer to AutoAddToBrowser_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetAutoAddToBrowserOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a68aebb2e292a17a1e41691af29e1e55f)()|Returns a pointer to AutoAddToBrowser_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAutoAddToBrowser](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1aa783957ce6ec058e41016a574c43ed61)(bool NewValue)|Sets the value of AutoAddToBrowser_Optional and also sets AutoAddToBrowser_IsSet to true.|
|void|[ClearAutoAddToBrowser](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ae71defa87a1bc92560786421ece26aa0)()|Clears the value of AutoAddToBrowser_Optional and sets AutoAddToBrowser_IsSet to false.|
|bool|[IsAutoAddToBrowserDefaultValue](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a1aef6318593a8e024bab505bdc238fc9)()|Returns true if AutoAddToBrowser_Optional is set and matches the default value.|
|void|[SetAutoAddToBrowserToDefault](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a78e197d8caad7dcbdb0a6325c5828d07)()|Sets the value of AutoAddToBrowser_Optional to its default and also sets AutoAddToBrowser_IsSet to true.|
|TMap< FString, FString > &|[GetAutoBrowserParams](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a9fbce9936f06a5974cc4c754cc6ba2be)()|Gets the value of AutoBrowserParams_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetAutoBrowserParams](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1aa684894af0b0039c175f754ce967c2ba)()|Gets the value of AutoBrowserParams_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetAutoBrowserParams](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1afc5d4149477d0f71fb54811c0e956e5c)(const TMap< FString, FString > & DefaultValue)|Gets the value of AutoBrowserParams_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAutoBrowserParams](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a28c63280b5b76ebb4ca52054211a2876)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of AutoBrowserParams_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetAutoBrowserParamsOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a89e159e41c6b6b645f5643d2a1e2e916)()|Returns a pointer to AutoBrowserParams_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetAutoBrowserParamsOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a5b7903355ba0fc847ac83f864aa9805a)()|Returns a pointer to AutoBrowserParams_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAutoBrowserParams](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a30902dcd2ac35f55b8f1b13d05b5fb81)(TMap< FString, FString > NewValue)|Sets the value of AutoBrowserParams_Optional and also sets AutoBrowserParams_IsSet to true.|
|void|[ClearAutoBrowserParams](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1afc6ccbb82066817f3e22ad01730802db)()|Clears the value of AutoBrowserParams_Optional and sets AutoBrowserParams_IsSet to false.|
|bool &|[GetCanBeAddedToServerBrowser](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a356373eb133f994e7ac8d8efbb1775d1)()|Gets the value of CanBeAddedToServerBrowser_Optional, regardless of it having been set.|
|const bool &|[GetCanBeAddedToServerBrowser](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ad943f3983e02ba20c1e8216cbb1db291)()|Gets the value of CanBeAddedToServerBrowser_Optional, regardless of it having been set.|
|const bool &|[GetCanBeAddedToServerBrowser](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a749dc792aaf08e7bb6f76273c6da485a)(const bool & DefaultValue)|Gets the value of CanBeAddedToServerBrowser_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCanBeAddedToServerBrowser](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ab18e4d2ed25195e8d0f76dc39810daff)(bool & OutValue)|Fills OutValue with the value of CanBeAddedToServerBrowser_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetCanBeAddedToServerBrowserOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a1f82f9ee862c907b625f5c8f461103a2)()|Returns a pointer to CanBeAddedToServerBrowser_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetCanBeAddedToServerBrowserOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a764001d77e82becf0bba7e9c362f3dd4)()|Returns a pointer to CanBeAddedToServerBrowser_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCanBeAddedToServerBrowser](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ac6eac725b488f4a0e1a80ba8be13368b)(bool NewValue)|Sets the value of CanBeAddedToServerBrowser_Optional and also sets CanBeAddedToServerBrowser_IsSet to true.|
|void|[ClearCanBeAddedToServerBrowser](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a23f4b3075ad5c6cf66442b7fb9ff4731)()|Clears the value of CanBeAddedToServerBrowser_Optional and sets CanBeAddedToServerBrowser_IsSet to false.|
|bool|[IsCanBeAddedToServerBrowserDefaultValue](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a7d34d65f47086fd753f7ac691a4c0df5)()|Returns true if CanBeAddedToServerBrowser_Optional is set and matches the default value.|
|void|[SetCanBeAddedToServerBrowserToDefault](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a933ba7bff1d990c9c0e12b47abd0864f)()|Sets the value of CanBeAddedToServerBrowser_Optional to its default and also sets CanBeAddedToServerBrowser_IsSet to true.|
|bool &|[GetKeepAliveOnEmpty](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a8ea968025808651306147a75bd67e3f4)()|Gets the value of KeepAliveOnEmpty_Optional, regardless of it having been set.|
|const bool &|[GetKeepAliveOnEmpty](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a6844b0f1086a52ae8f4abbaa7d6015dd)()|Gets the value of KeepAliveOnEmpty_Optional, regardless of it having been set.|
|const bool &|[GetKeepAliveOnEmpty](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a3d2f2c8cd62e4e08e1a6cdf1d1edd5f0)(const bool & DefaultValue)|Gets the value of KeepAliveOnEmpty_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetKeepAliveOnEmpty](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1acdfbfbafa3f03348b60c82c0b6625ac8)(bool & OutValue)|Fills OutValue with the value of KeepAliveOnEmpty_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetKeepAliveOnEmptyOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ab6c0900c63fb8470b63e487b59072bfe)()|Returns a pointer to KeepAliveOnEmpty_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetKeepAliveOnEmptyOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ab15dd91b8e7fb45d13a6f94f60067c2b)()|Returns a pointer to KeepAliveOnEmpty_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetKeepAliveOnEmpty](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a96ab8d6994b4d813d42e85e64a15e68f)(bool NewValue)|Sets the value of KeepAliveOnEmpty_Optional and also sets KeepAliveOnEmpty_IsSet to true.|
|void|[ClearKeepAliveOnEmpty](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a296512654f450ed319f63f8b648c53b8)()|Clears the value of KeepAliveOnEmpty_Optional and sets KeepAliveOnEmpty_IsSet to false.|
|bool|[IsKeepAliveOnEmptyDefaultValue](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a55aba4ea889f042e220c937f19078a59)()|Returns true if KeepAliveOnEmpty_Optional is set and matches the default value.|
|void|[SetKeepAliveOnEmptyToDefault](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a8a37912d37e10efa335771cbdb045138)()|Sets the value of KeepAliveOnEmpty_Optional to its default and also sets KeepAliveOnEmpty_IsSet to true.|
|TMap< FString, [FRHAPI_PlatformSessionTemplate](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate) > &|[GetPlatformTemplates](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ac6c83f72faa66211afc8ae944090b3d0)()|Gets the value of PlatformTemplates_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_PlatformSessionTemplate](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate) > &|[GetPlatformTemplates](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1aebef26179db7006243d80f71b54ec4b3)()|Gets the value of PlatformTemplates_Optional, regardless of it having been set.|
|const TMap< FString, [FRHAPI_PlatformSessionTemplate](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate) > &|[GetPlatformTemplates](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1aea4d305d4f6294a06c6a18e869229e7d)(const TMap< FString, [FRHAPI_PlatformSessionTemplate](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate) > & DefaultValue)|Gets the value of PlatformTemplates_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPlatformTemplates](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a56834a7a902d9cff7d59c3e78d1cf3e9)(TMap< FString, [FRHAPI_PlatformSessionTemplate](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate) > & OutValue)|Fills OutValue with the value of PlatformTemplates_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, [FRHAPI_PlatformSessionTemplate](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate) > *|[GetPlatformTemplatesOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a07808f2ecbaa8e97a7be56c7a441b802)()|Returns a pointer to PlatformTemplates_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, [FRHAPI_PlatformSessionTemplate](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate) > *|[GetPlatformTemplatesOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ab8f18c47ff1f542e4f6595c35bd7be0f)()|Returns a pointer to PlatformTemplates_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPlatformTemplates](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a09102a0c2c86e1e96d7b21ec4c483154)(TMap< FString, [FRHAPI_PlatformSessionTemplate](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate) > NewValue)|Sets the value of PlatformTemplates_Optional and also sets PlatformTemplates_IsSet to true.|
|void|[ClearPlatformTemplates](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a63f0a0474639a53f8a0789e3850321dd)()|Clears the value of PlatformTemplates_Optional and sets PlatformTemplates_IsSet to false.|
|[FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) &|[GetAutoStartupParams](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ab8dd54ee2f4348500f01e44af3448a4a)()|Gets the value of AutoStartupParams_Optional, regardless of it having been set.|
|const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) &|[GetAutoStartupParams](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a6695f79c7358ba7b6dc665219044f694)()|Gets the value of AutoStartupParams_Optional, regardless of it having been set.|
|const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) &|[GetAutoStartupParams](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a89c852cf18006b6e93e52086db3ffa82)(const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) & DefaultValue)|Gets the value of AutoStartupParams_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAutoStartupParams](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1add791f7825789aeab338cf381a333094)([FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) & OutValue)|Fills OutValue with the value of AutoStartupParams_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) *|[GetAutoStartupParamsOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a2cb1eee8abb2d118c644cb7421f393aa)()|Returns a pointer to AutoStartupParams_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) *|[GetAutoStartupParamsOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a423eba55e9b185ead6f0f8d17eb640b8)()|Returns a pointer to AutoStartupParams_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAutoStartupParams](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ae8aea581ff24bb8fcc059e70dd233c83)([FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) NewValue)|Sets the value of AutoStartupParams_Optional and also sets AutoStartupParams_IsSet to true.|
|void|[ClearAutoStartupParams](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a41041ffbd8775231d249554a072116d7)()|Clears the value of AutoStartupParams_Optional and sets AutoStartupParams_IsSet to false.|
|int32 &|[GetMinSessionCount](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1aab1a67e445ca5338fbb66baa3d3bcb9f)()|Gets the value of MinSessionCount_Optional, regardless of it having been set.|
|const int32 &|[GetMinSessionCount](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ab7376fd46c054e32668b755907ac0d90)()|Gets the value of MinSessionCount_Optional, regardless of it having been set.|
|const int32 &|[GetMinSessionCount](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a1e5c95d760b8e9f40c01e6fb729c5398)(const int32 & DefaultValue)|Gets the value of MinSessionCount_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetMinSessionCount](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a01b84d2a460388a199d7c375fad38fd3)(int32 & OutValue)|Fills OutValue with the value of MinSessionCount_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetMinSessionCountOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a8e5543499a18eba17eac324c956c0231)()|Returns a pointer to MinSessionCount_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetMinSessionCountOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a3555ef17f28ad123940629efa5aea9d6)()|Returns a pointer to MinSessionCount_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetMinSessionCount](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a254d335fd5933d1f3d3bb157d7f98b04)(int32 NewValue)|Sets the value of MinSessionCount_Optional and also sets MinSessionCount_IsSet to true.|
|void|[ClearMinSessionCount](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a563b899213f0a6ff1e7ab855e18df3a5)()|Clears the value of MinSessionCount_Optional and sets MinSessionCount_IsSet to false.|
|bool|[IsMinSessionCountDefaultValue](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a8215c4b5ea50cf0228490c27c5db60fb)()|Returns true if MinSessionCount_Optional is set and matches the default value.|
|void|[SetMinSessionCountToDefault](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1af3b075285782037409643751bbaaa19d)()|Sets the value of MinSessionCount_Optional to its default and also sets MinSessionCount_IsSet to true.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a82fc45eec30dd2fdbc21dfd89596622b)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a93d7a2dbc3d1ef21263a08ee990d51fc)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ad619a0c4c3891bff333558fc77926a88)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ab19f81eb52ffd9f199a884befe791d2a)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a210b362e85e3b02527bfe2a1f0d78bb2)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a1f6d298122b0f91adbbcf4b3c188b0c1)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a8f039c1cc05ec90391072c0f9bf69d03)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ac20b3669d3a9488606e5e2afd59df8f1)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
|int32 &|[GetNumTeams](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a756f008bb020837ad8503308147df6e2)()|Gets the value of NumTeams_Optional, regardless of it having been set.|
|const int32 &|[GetNumTeams](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a0700118646093644624de6a22c77afbf)()|Gets the value of NumTeams_Optional, regardless of it having been set.|
|const int32 &|[GetNumTeams](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a96d38df114e19c81017a8e5a4b86061c)(const int32 & DefaultValue)|Gets the value of NumTeams_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetNumTeams](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a6ce27d5e98f039a4111fd089abc115df)(int32 & OutValue)|Fills OutValue with the value of NumTeams_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetNumTeamsOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ad24010c350f353abae43817ce6a7fa7c)()|Returns a pointer to NumTeams_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetNumTeamsOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a1fe6d852ba498e482f018cb525a73a03)()|Returns a pointer to NumTeams_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetNumTeams](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1aee7845d212604eda9ea8ddad496cc87c)(int32 NewValue)|Sets the value of NumTeams_Optional and also sets NumTeams_IsSet to true.|
|void|[ClearNumTeams](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ab05fd0888c21bacaaab9bd4b0ca92e00)()|Clears the value of NumTeams_Optional and sets NumTeams_IsSet to false.|
|bool|[IsNumTeamsDefaultValue](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a4c6f7c1655e76727f7cb5b5ffc5c66af)()|Returns true if NumTeams_Optional is set and matches the default value.|
|void|[SetNumTeamsToDefault](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a76d7e80355b9705e3a1ea1c86817fd45)()|Sets the value of NumTeams_Optional to its default and also sets NumTeams_IsSet to true.|
|int32 &|[GetPlayersPerTeam](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a6ae47ea0d86ead702c351b6f06d5b1bb)()|Gets the value of PlayersPerTeam_Optional, regardless of it having been set.|
|const int32 &|[GetPlayersPerTeam](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ab586729d347edb3ddd5df0fd5beec5f1)()|Gets the value of PlayersPerTeam_Optional, regardless of it having been set.|
|const int32 &|[GetPlayersPerTeam](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a7069808829529cd76ec7f294df72cacd)(const int32 & DefaultValue)|Gets the value of PlayersPerTeam_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPlayersPerTeam](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ac380d35a8a8a1758ade954aa9f4c09ca)(int32 & OutValue)|Fills OutValue with the value of PlayersPerTeam_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetPlayersPerTeamOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a3268494a760b7e14302fae97cae4266b)()|Returns a pointer to PlayersPerTeam_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetPlayersPerTeamOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ac0ba30015039756fbe49ea2f237f0d50)()|Returns a pointer to PlayersPerTeam_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPlayersPerTeam](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a0eebc89ec7961b126d546bdd9cd9796b)(int32 NewValue)|Sets the value of PlayersPerTeam_Optional and also sets PlayersPerTeam_IsSet to true.|
|void|[ClearPlayersPerTeam](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1aa2773b8e861aae5dd66d271167b6e2fb)()|Clears the value of PlayersPerTeam_Optional and sets PlayersPerTeam_IsSet to false.|
|bool|[IsPlayersPerTeamDefaultValue](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1afc394c69e5ec383de5296897550060eb)()|Returns true if PlayersPerTeam_Optional is set and matches the default value.|
|void|[SetPlayersPerTeamToDefault](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a8434c5519b75cac25c55f491f314dc7e)()|Sets the value of PlayersPerTeam_Optional to its default and also sets PlayersPerTeam_IsSet to true.|
|bool &|[GetCanChangeOwnTeam](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a05e870ee9cdc2c46e50ab7fc28482cc7)()|Gets the value of CanChangeOwnTeam_Optional, regardless of it having been set.|
|const bool &|[GetCanChangeOwnTeam](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ab308d57c9a744e7ff316c2ffb6b5c0be)()|Gets the value of CanChangeOwnTeam_Optional, regardless of it having been set.|
|const bool &|[GetCanChangeOwnTeam](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a78c0b25be27b024aff1e68a020cc3845)(const bool & DefaultValue)|Gets the value of CanChangeOwnTeam_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCanChangeOwnTeam](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1acff401368fdba4b7bc966fe2d79d1923)(bool & OutValue)|Fills OutValue with the value of CanChangeOwnTeam_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetCanChangeOwnTeamOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a96d97777749d18bd98f740f0dcf69275)()|Returns a pointer to CanChangeOwnTeam_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetCanChangeOwnTeamOrNull](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a89094a04c692a9ef55267b1033500b88)()|Returns a pointer to CanChangeOwnTeam_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCanChangeOwnTeam](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ad2a6502d9c243417a2394f73e91c974d)(bool NewValue)|Sets the value of CanChangeOwnTeam_Optional and also sets CanChangeOwnTeam_IsSet to true.|
|void|[ClearCanChangeOwnTeam](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a9aa2afa1842ee1cab22a7b1a9a772c08)()|Clears the value of CanChangeOwnTeam_Optional and sets CanChangeOwnTeam_IsSet to false.|
|bool|[IsCanChangeOwnTeamDefaultValue](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1a26a5ebe40250064f888d423e23531bfa)()|Returns true if CanChangeOwnTeam_Optional is set and matches the default value.|
|void|[SetCanChangeOwnTeamToDefault](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate_1ac1a42404ac65f492acfd7e7fe75e4afb)()|Sets the value of CanChangeOwnTeam_Optional to its default and also sets CanChangeOwnTeam_IsSet to true.|
## Public Attributes



### `SessionType` <a id="structFRHAPI__SessionTemplate_1a294a5c42b68d1960ade23eb2b8ebed03"></a>

`FString FRHAPI_SessionTemplate::SessionType`

unique name for this template




### `EngineSessionType_Optional` <a id="structFRHAPI__SessionTemplate_1a5215d82c4b5a1849115e1192ce85a42a"></a>

`FString FRHAPI_SessionTemplate::EngineSessionType_Optional`

Engine identifier for sessions of this type. For UE, this is commonly Party or Game.




### `EngineSessionType_IsSet` <a id="structFRHAPI__SessionTemplate_1a7fe48b7d9dd76d0918d6c8cfef6ddabe"></a>

`bool FRHAPI_SessionTemplate::EngineSessionType_IsSet`

true if EngineSessionType_Optional has been set to a value




### `CanJoinMatchmaking_Optional` <a id="structFRHAPI__SessionTemplate_1a5acc833f588d8b29365429498cfe2a7b"></a>

`bool FRHAPI_SessionTemplate::CanJoinMatchmaking_Optional`

Are sessions of this type allowed to join matchmaking?




### `CanJoinMatchmaking_IsSet` <a id="structFRHAPI__SessionTemplate_1a2e4fd1ddce8e54ae5242c6a839b9a446"></a>

`bool FRHAPI_SessionTemplate::CanJoinMatchmaking_IsSet`

true if CanJoinMatchmaking_Optional has been set to a value




### `CanBeCreatedByPlayersDirectly_Optional` <a id="structFRHAPI__SessionTemplate_1ab6aed074db1776677efeedae942a6dde"></a>

`bool FRHAPI_SessionTemplate::CanBeCreatedByPlayersDirectly_Optional`

Are players allowed to create sessions of this type?




### `CanBeCreatedByPlayersDirectly_IsSet` <a id="structFRHAPI__SessionTemplate_1af34cf526890cc59a7c99aeb31fe47f86"></a>

`bool FRHAPI_SessionTemplate::CanBeCreatedByPlayersDirectly_IsSet`

true if CanBeCreatedByPlayersDirectly_Optional has been set to a value




### `Joinable_Optional` <a id="structFRHAPI__SessionTemplate_1af726850d2f0a47c0d363bc6fe56649d2"></a>

`bool FRHAPI_SessionTemplate::Joinable_Optional`

DEPRECATED. Use 'attempt_auto_join' instead. Should players join existing sessions of this type before creating a new one.




### `Joinable_IsSet` <a id="structFRHAPI__SessionTemplate_1a640852541c1622264fb0b45e8bcba358"></a>

`bool FRHAPI_SessionTemplate::Joinable_IsSet`

true if Joinable_Optional has been set to a value




### `AttemptAutoJoin_Optional` <a id="structFRHAPI__SessionTemplate_1a7d1c0ca1b78e58fe1b0e1b4bc14c7d1d"></a>

`bool FRHAPI_SessionTemplate::AttemptAutoJoin_Optional`

Should players join existing sessions of this type before creating a new one.




### `AttemptAutoJoin_IsSet` <a id="structFRHAPI__SessionTemplate_1a3ef337d1d127c53479600fd601327932"></a>

`bool FRHAPI_SessionTemplate::AttemptAutoJoin_IsSet`

true if AttemptAutoJoin_Optional has been set to a value




### `DefaultPublic_Optional` <a id="structFRHAPI__SessionTemplate_1ad23d2d7b28599c82e031a8ec8e0044bd"></a>

`bool FRHAPI_SessionTemplate::DefaultPublic_Optional`

Should sessions of this type should be publicly joinable by default.




### `DefaultPublic_IsSet` <a id="structFRHAPI__SessionTemplate_1ad56e88aba80b14f4a35817228bc1de98"></a>

`bool FRHAPI_SessionTemplate::DefaultPublic_IsSet`

true if DefaultPublic_Optional has been set to a value




### `AutoAddToBrowser_Optional` <a id="structFRHAPI__SessionTemplate_1acd767d33d578663a2ae87266051aee21"></a>

`bool FRHAPI_SessionTemplate::AutoAddToBrowser_Optional`

Should session be automatically added to the browser list.




### `AutoAddToBrowser_IsSet` <a id="structFRHAPI__SessionTemplate_1a3680cbdc548742735a67e6b5aa39f17a"></a>

`bool FRHAPI_SessionTemplate::AutoAddToBrowser_IsSet`

true if AutoAddToBrowser_Optional has been set to a value




### `AutoBrowserParams_Optional` <a id="structFRHAPI__SessionTemplate_1a82787643aa3e38fe0da7bf1500e0ef62"></a>

`TMap<FString, FString> FRHAPI_SessionTemplate::AutoBrowserParams_Optional`

Browser parameters that can be used to filter results.




### `AutoBrowserParams_IsSet` <a id="structFRHAPI__SessionTemplate_1a72c52c990ae499219e09ac48b95dfb1b"></a>

`bool FRHAPI_SessionTemplate::AutoBrowserParams_IsSet`

true if AutoBrowserParams_Optional has been set to a value




### `CanBeAddedToServerBrowser_Optional` <a id="structFRHAPI__SessionTemplate_1a76d1142e89d2951f77aca49fae032565"></a>

`bool FRHAPI_SessionTemplate::CanBeAddedToServerBrowser_Optional`

Are sessions of this type able to be added to the server browser by players?




### `CanBeAddedToServerBrowser_IsSet` <a id="structFRHAPI__SessionTemplate_1af405bbeacdcad1f1edeec8066557d282"></a>

`bool FRHAPI_SessionTemplate::CanBeAddedToServerBrowser_IsSet`

true if CanBeAddedToServerBrowser_Optional has been set to a value




### `KeepAliveOnEmpty_Optional` <a id="structFRHAPI__SessionTemplate_1a9e9d05c256bcee13ec7a503fff383a9f"></a>

`bool FRHAPI_SessionTemplate::KeepAliveOnEmpty_Optional`

Should the session stay around, or be destroyed when the last player leaves it?




### `KeepAliveOnEmpty_IsSet` <a id="structFRHAPI__SessionTemplate_1a7a021f27573b66f03bddb164ba2baea4"></a>

`bool FRHAPI_SessionTemplate::KeepAliveOnEmpty_IsSet`

true if KeepAliveOnEmpty_Optional has been set to a value




### `PlatformTemplates_Optional` <a id="structFRHAPI__SessionTemplate_1a4a953d98de7701f09938b03e88dc447d"></a>

`TMap<FString, FRHAPI_PlatformSessionTemplate> FRHAPI_SessionTemplate::PlatformTemplates_Optional`

Platform-Specific session mappings that are used to coordinate Rally Here sessions with OnlineSubsystem sessions.




### `PlatformTemplates_IsSet` <a id="structFRHAPI__SessionTemplate_1a98480d277fd8e297e5b90560f3c10f1a"></a>

`bool FRHAPI_SessionTemplate::PlatformTemplates_IsSet`

true if PlatformTemplates_Optional has been set to a value




### `AutoStartupParams_Optional` <a id="structFRHAPI__SessionTemplate_1a32d9a060ff0208b639415cee5d9f7287"></a>

`FRHAPI_InstanceStartupParams FRHAPI_SessionTemplate::AutoStartupParams_Optional`






### `AutoStartupParams_IsSet` <a id="structFRHAPI__SessionTemplate_1a1ae179a6de476981a9a38197758b7e14"></a>

`bool FRHAPI_SessionTemplate::AutoStartupParams_IsSet`

true if AutoStartupParams_Optional has been set to a value




### `MinSessionCount_Optional` <a id="structFRHAPI__SessionTemplate_1aecf6bdd55d8dc8e92bf1d6e2dc032fc6"></a>

`int32 FRHAPI_SessionTemplate::MinSessionCount_Optional`

Minimum number of this type of session to be running at any given time per region.




### `MinSessionCount_IsSet` <a id="structFRHAPI__SessionTemplate_1a067eb5ca1f241b90407f3a373cb0bd79"></a>

`bool FRHAPI_SessionTemplate::MinSessionCount_IsSet`

true if MinSessionCount_Optional has been set to a value




### `CustomData_Optional` <a id="structFRHAPI__SessionTemplate_1a8dc395b5c32a277ba6a8098613b19c90"></a>

`TMap<FString, FString> FRHAPI_SessionTemplate::CustomData_Optional`

Product-defined custom data about this session type.




### `CustomData_IsSet` <a id="structFRHAPI__SessionTemplate_1a74b694f3d97279b0f69b5d9c45cef5cc"></a>

`bool FRHAPI_SessionTemplate::CustomData_IsSet`

true if CustomData_Optional has been set to a value




### `NumTeams_Optional` <a id="structFRHAPI__SessionTemplate_1a5a6263a13f22dc9fab381d24dd85b07d"></a>

`int32 FRHAPI_SessionTemplate::NumTeams_Optional`

The number of teams this session type can have.




### `NumTeams_IsSet` <a id="structFRHAPI__SessionTemplate_1a5aae055f985bbecae420f583bffcc0a8"></a>

`bool FRHAPI_SessionTemplate::NumTeams_IsSet`

true if NumTeams_Optional has been set to a value




### `PlayersPerTeam_Optional` <a id="structFRHAPI__SessionTemplate_1acc07f08f5c7dc3262717a590f3de6764"></a>

`int32 FRHAPI_SessionTemplate::PlayersPerTeam_Optional`

The number of players that can be on each team.




### `PlayersPerTeam_IsSet` <a id="structFRHAPI__SessionTemplate_1a4351b4b52f5240e0bff65fb92b36b3a2"></a>

`bool FRHAPI_SessionTemplate::PlayersPerTeam_IsSet`

true if PlayersPerTeam_Optional has been set to a value




### `CanChangeOwnTeam_Optional` <a id="structFRHAPI__SessionTemplate_1aa2d67a98c7bcf96cc848ae81ca3387e3"></a>

`bool FRHAPI_SessionTemplate::CanChangeOwnTeam_Optional`

Whether or not a player can change which team they are on. If true, they are able to. If False, they player's team can only be changed by an admin.




### `CanChangeOwnTeam_IsSet` <a id="structFRHAPI__SessionTemplate_1ad6b80d668b66266c71f70affb0cae587"></a>

`bool FRHAPI_SessionTemplate::CanChangeOwnTeam_IsSet`

true if CanChangeOwnTeam_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__SessionTemplate_1a4a45fc40eed406ae864f33e45c0eadf2"></a>

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



### `WriteJson` <a id="structFRHAPI__SessionTemplate_1a8ddb8c09f6817591c4927b4a5c49df76"></a>

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



### `GetSessionType` <a id="structFRHAPI__SessionTemplate_1a7772fb5d40d6b5c69dc188065146a39c"></a>

FString & GetSessionType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SessionType.




### `GetSessionType` <a id="structFRHAPI__SessionTemplate_1affce611355a919ed8acc4bbd307ae642"></a>

const FString & GetSessionType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SessionType.




### `SetSessionType` <a id="structFRHAPI__SessionTemplate_1ad361f7865488bf9dbb073c2fa606b744"></a>

void SetSessionType(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of SessionType.




### `GetEngineSessionType` <a id="structFRHAPI__SessionTemplate_1a762d5ee11b4fbdcf9cc38632fc97765f"></a>

FString & GetEngineSessionType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EngineSessionType_Optional, regardless of it having been set.




### `GetEngineSessionType` <a id="structFRHAPI__SessionTemplate_1a24a915b19cee9cc45c130fa81cf37942"></a>

const FString & GetEngineSessionType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of EngineSessionType_Optional, regardless of it having been set.




### `GetEngineSessionType` <a id="structFRHAPI__SessionTemplate_1ae11165b1eca1372b3ea911977fd53855"></a>

const FString & GetEngineSessionType(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of EngineSessionType_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetEngineSessionType` <a id="structFRHAPI__SessionTemplate_1ac4fce3fe7bfb35f5ded0559c3d4ddb8d"></a>

bool GetEngineSessionType(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of EngineSessionType_Optional and returns true if it has been set, otherwise returns false.




### `GetEngineSessionTypeOrNull` <a id="structFRHAPI__SessionTemplate_1aa4a5b7deb5f1c36b8be8959629ccd7dd"></a>

FString * GetEngineSessionTypeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to EngineSessionType_Optional, if it has been set, otherwise returns nullptr.




### `GetEngineSessionTypeOrNull` <a id="structFRHAPI__SessionTemplate_1a09dcea68cfc96a44fb3e1e5a5e75b62c"></a>

const FString * GetEngineSessionTypeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to EngineSessionType_Optional, if it has been set, otherwise returns nullptr.




### `SetEngineSessionType` <a id="structFRHAPI__SessionTemplate_1a6e3a3c92d0edddcb592919871403829b"></a>

void SetEngineSessionType(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of EngineSessionType_Optional and also sets EngineSessionType_IsSet to true.




### `ClearEngineSessionType` <a id="structFRHAPI__SessionTemplate_1a49cf645ee28f75e34b7e82a375b0b7a0"></a>

void ClearEngineSessionType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of EngineSessionType_Optional and sets EngineSessionType_IsSet to false.




### `IsEngineSessionTypeDefaultValue` <a id="structFRHAPI__SessionTemplate_1a3cfbdbc7f9037595cd081510a49b47be"></a>

bool IsEngineSessionTypeDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if EngineSessionType_Optional is set and matches the default value.




### `SetEngineSessionTypeToDefault` <a id="structFRHAPI__SessionTemplate_1a63b6dfef02bbfc4c1602f59da2e7f468"></a>

void SetEngineSessionTypeToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of EngineSessionType_Optional to its default and also sets EngineSessionType_IsSet to true.




### `GetCanJoinMatchmaking` <a id="structFRHAPI__SessionTemplate_1a0cf738471cdd5148be692454ccc855ba"></a>

bool & GetCanJoinMatchmaking()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CanJoinMatchmaking_Optional, regardless of it having been set.




### `GetCanJoinMatchmaking` <a id="structFRHAPI__SessionTemplate_1a5099fafdd07ecb7d5572dac0c00aee7e"></a>

const bool & GetCanJoinMatchmaking()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CanJoinMatchmaking_Optional, regardless of it having been set.




### `GetCanJoinMatchmaking` <a id="structFRHAPI__SessionTemplate_1a3dde27074a0c0b2e6785e23ec3c6fe4c"></a>

const bool & GetCanJoinMatchmaking(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of CanJoinMatchmaking_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCanJoinMatchmaking` <a id="structFRHAPI__SessionTemplate_1ad8ade8f89b17c3544ddeb227951fcf83"></a>

bool GetCanJoinMatchmaking(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of CanJoinMatchmaking_Optional and returns true if it has been set, otherwise returns false.




### `GetCanJoinMatchmakingOrNull` <a id="structFRHAPI__SessionTemplate_1adce54ea0278bbf251c3e43cad020c191"></a>

bool * GetCanJoinMatchmakingOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CanJoinMatchmaking_Optional, if it has been set, otherwise returns nullptr.




### `GetCanJoinMatchmakingOrNull` <a id="structFRHAPI__SessionTemplate_1a07543fefd2c5ac05df610cdbf89c9e04"></a>

const bool * GetCanJoinMatchmakingOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CanJoinMatchmaking_Optional, if it has been set, otherwise returns nullptr.




### `SetCanJoinMatchmaking` <a id="structFRHAPI__SessionTemplate_1a2e4f26ae74921b4b76ebab0d12c58777"></a>

void SetCanJoinMatchmaking(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of CanJoinMatchmaking_Optional and also sets CanJoinMatchmaking_IsSet to true.




### `ClearCanJoinMatchmaking` <a id="structFRHAPI__SessionTemplate_1aea8827859a78eea75ccb378ae6d34536"></a>

void ClearCanJoinMatchmaking()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CanJoinMatchmaking_Optional and sets CanJoinMatchmaking_IsSet to false.




### `IsCanJoinMatchmakingDefaultValue` <a id="structFRHAPI__SessionTemplate_1a712f72abd63eda494b43154b029822e9"></a>

bool IsCanJoinMatchmakingDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if CanJoinMatchmaking_Optional is set and matches the default value.




### `SetCanJoinMatchmakingToDefault` <a id="structFRHAPI__SessionTemplate_1ab1db9565664aea038731887f24deff21"></a>

void SetCanJoinMatchmakingToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of CanJoinMatchmaking_Optional to its default and also sets CanJoinMatchmaking_IsSet to true.




### `GetCanBeCreatedByPlayersDirectly` <a id="structFRHAPI__SessionTemplate_1a245738afb53726c0b785aec39bf86106"></a>

bool & GetCanBeCreatedByPlayersDirectly()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CanBeCreatedByPlayersDirectly_Optional, regardless of it having been set.




### `GetCanBeCreatedByPlayersDirectly` <a id="structFRHAPI__SessionTemplate_1aaae97aee94c5b5f89181dd0e7be3e95b"></a>

const bool & GetCanBeCreatedByPlayersDirectly()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CanBeCreatedByPlayersDirectly_Optional, regardless of it having been set.




### `GetCanBeCreatedByPlayersDirectly` <a id="structFRHAPI__SessionTemplate_1acc909772786edaff5c8a7a7a31fc9133"></a>

const bool & GetCanBeCreatedByPlayersDirectly(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of CanBeCreatedByPlayersDirectly_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCanBeCreatedByPlayersDirectly` <a id="structFRHAPI__SessionTemplate_1a17cb4c890a7a9329f9c84300193a5c32"></a>

bool GetCanBeCreatedByPlayersDirectly(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of CanBeCreatedByPlayersDirectly_Optional and returns true if it has been set, otherwise returns false.




### `GetCanBeCreatedByPlayersDirectlyOrNull` <a id="structFRHAPI__SessionTemplate_1ac670ec04c83f5e5ae6fc1b4ca1b368dc"></a>

bool * GetCanBeCreatedByPlayersDirectlyOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CanBeCreatedByPlayersDirectly_Optional, if it has been set, otherwise returns nullptr.




### `GetCanBeCreatedByPlayersDirectlyOrNull` <a id="structFRHAPI__SessionTemplate_1a1edf03762e4cf2988e745f8d3dc5d35d"></a>

const bool * GetCanBeCreatedByPlayersDirectlyOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CanBeCreatedByPlayersDirectly_Optional, if it has been set, otherwise returns nullptr.




### `SetCanBeCreatedByPlayersDirectly` <a id="structFRHAPI__SessionTemplate_1a284728a7560987dc34a0fba0ef815cfb"></a>

void SetCanBeCreatedByPlayersDirectly(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of CanBeCreatedByPlayersDirectly_Optional and also sets CanBeCreatedByPlayersDirectly_IsSet to true.




### `ClearCanBeCreatedByPlayersDirectly` <a id="structFRHAPI__SessionTemplate_1aeeead6ecb3330ef0ab4e0d0f1d51be6f"></a>

void ClearCanBeCreatedByPlayersDirectly()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CanBeCreatedByPlayersDirectly_Optional and sets CanBeCreatedByPlayersDirectly_IsSet to false.




### `IsCanBeCreatedByPlayersDirectlyDefaultValue` <a id="structFRHAPI__SessionTemplate_1afc9d293d6290f5c2de49e0abc1da9c4d"></a>

bool IsCanBeCreatedByPlayersDirectlyDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if CanBeCreatedByPlayersDirectly_Optional is set and matches the default value.




### `SetCanBeCreatedByPlayersDirectlyToDefault` <a id="structFRHAPI__SessionTemplate_1a5895d02285be3538be2d7e59412f7466"></a>

void SetCanBeCreatedByPlayersDirectlyToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of CanBeCreatedByPlayersDirectly_Optional to its default and also sets CanBeCreatedByPlayersDirectly_IsSet to true.




### `GetJoinable` <a id="structFRHAPI__SessionTemplate_1af9cffd42d338984ff9c90540bc8ab561"></a>

bool & GetJoinable()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Joinable_Optional, regardless of it having been set.




### `GetJoinable` <a id="structFRHAPI__SessionTemplate_1ad8599b59763995fa1ed26cf7d89f6697"></a>

const bool & GetJoinable()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Joinable_Optional, regardless of it having been set.




### `GetJoinable` <a id="structFRHAPI__SessionTemplate_1af2829ec666b5d54b5b9b35efb05358a4"></a>

const bool & GetJoinable(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetJoinable` <a id="structFRHAPI__SessionTemplate_1a284913a49f55998220ccbae7ffa31df4"></a>

bool GetJoinable(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.




### `GetJoinableOrNull` <a id="structFRHAPI__SessionTemplate_1aeeb6fe105d9e3ba735122f45ee32a40a"></a>

bool * GetJoinableOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.




### `GetJoinableOrNull` <a id="structFRHAPI__SessionTemplate_1a7c9bfc444c99da66f448977682d24985"></a>

const bool * GetJoinableOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.




### `SetJoinable` <a id="structFRHAPI__SessionTemplate_1ac7e6f063c170b4cfe3d31d2ca7994e88"></a>

void SetJoinable(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.




### `ClearJoinable` <a id="structFRHAPI__SessionTemplate_1a2656215bcf0eb51c71fed328166e6b68"></a>

void ClearJoinable()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Joinable_Optional and sets Joinable_IsSet to false.




### `IsJoinableDefaultValue` <a id="structFRHAPI__SessionTemplate_1a7005e50d8cbe3b02a9ce17dbb7d4bd4c"></a>

bool IsJoinableDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Joinable_Optional is set and matches the default value.




### `SetJoinableToDefault` <a id="structFRHAPI__SessionTemplate_1aab55eb4066768dc2f660b6f7148789c6"></a>

void SetJoinableToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Joinable_Optional to its default and also sets Joinable_IsSet to true.




### `GetAttemptAutoJoin` <a id="structFRHAPI__SessionTemplate_1a0784581eddfc3da5b8d0d9053c1870c2"></a>

bool & GetAttemptAutoJoin()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AttemptAutoJoin_Optional, regardless of it having been set.




### `GetAttemptAutoJoin` <a id="structFRHAPI__SessionTemplate_1a90c6ede8f6a6e572ed0f2502e47056ef"></a>

const bool & GetAttemptAutoJoin()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AttemptAutoJoin_Optional, regardless of it having been set.




### `GetAttemptAutoJoin` <a id="structFRHAPI__SessionTemplate_1a004e18b9442ec10e4b100d998553ff38"></a>

const bool & GetAttemptAutoJoin(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of AttemptAutoJoin_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAttemptAutoJoin` <a id="structFRHAPI__SessionTemplate_1a746d02f50e4c48a2255984bcae98d864"></a>

bool GetAttemptAutoJoin(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of AttemptAutoJoin_Optional and returns true if it has been set, otherwise returns false.




### `GetAttemptAutoJoinOrNull` <a id="structFRHAPI__SessionTemplate_1acc02b9c5cb69200d7aa7eb9cf0b5816d"></a>

bool * GetAttemptAutoJoinOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AttemptAutoJoin_Optional, if it has been set, otherwise returns nullptr.




### `GetAttemptAutoJoinOrNull` <a id="structFRHAPI__SessionTemplate_1aafad240b056cbf756bd05e0d0a49dbfa"></a>

const bool * GetAttemptAutoJoinOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AttemptAutoJoin_Optional, if it has been set, otherwise returns nullptr.




### `SetAttemptAutoJoin` <a id="structFRHAPI__SessionTemplate_1a8f5a20a38ee91d6199ef73404c116485"></a>

void SetAttemptAutoJoin(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of AttemptAutoJoin_Optional and also sets AttemptAutoJoin_IsSet to true.




### `ClearAttemptAutoJoin` <a id="structFRHAPI__SessionTemplate_1af01c65d9412c08982e1d810d821508e6"></a>

void ClearAttemptAutoJoin()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of AttemptAutoJoin_Optional and sets AttemptAutoJoin_IsSet to false.




### `IsAttemptAutoJoinDefaultValue` <a id="structFRHAPI__SessionTemplate_1a6272851fd94d2aae9769e3f49251f26e"></a>

bool IsAttemptAutoJoinDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if AttemptAutoJoin_Optional is set and matches the default value.




### `SetAttemptAutoJoinToDefault` <a id="structFRHAPI__SessionTemplate_1a625067a334f5914ab7695522f608984b"></a>

void SetAttemptAutoJoinToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of AttemptAutoJoin_Optional to its default and also sets AttemptAutoJoin_IsSet to true.




### `GetDefaultPublic` <a id="structFRHAPI__SessionTemplate_1ad7fe254c574fc3e7253c753331a7ae4f"></a>

bool & GetDefaultPublic()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DefaultPublic_Optional, regardless of it having been set.




### `GetDefaultPublic` <a id="structFRHAPI__SessionTemplate_1ad5653be593ce23f0445f7edc71cd1184"></a>

const bool & GetDefaultPublic()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of DefaultPublic_Optional, regardless of it having been set.




### `GetDefaultPublic` <a id="structFRHAPI__SessionTemplate_1a70a157efbf3c9380527c3c6da81bc515"></a>

const bool & GetDefaultPublic(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of DefaultPublic_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetDefaultPublic` <a id="structFRHAPI__SessionTemplate_1abc8a258803a6af1a06337bfd38790b1d"></a>

bool GetDefaultPublic(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of DefaultPublic_Optional and returns true if it has been set, otherwise returns false.




### `GetDefaultPublicOrNull` <a id="structFRHAPI__SessionTemplate_1a41c1b2304383e8191962c347c27a9bf9"></a>

bool * GetDefaultPublicOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to DefaultPublic_Optional, if it has been set, otherwise returns nullptr.




### `GetDefaultPublicOrNull` <a id="structFRHAPI__SessionTemplate_1ab9be70682b6378354fe5c18b805a0222"></a>

const bool * GetDefaultPublicOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to DefaultPublic_Optional, if it has been set, otherwise returns nullptr.




### `SetDefaultPublic` <a id="structFRHAPI__SessionTemplate_1a4670fa8d3d2e7f048dbf81bcfa658ed5"></a>

void SetDefaultPublic(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of DefaultPublic_Optional and also sets DefaultPublic_IsSet to true.




### `ClearDefaultPublic` <a id="structFRHAPI__SessionTemplate_1a0b7ec628161b7d1a8317204875d476e5"></a>

void ClearDefaultPublic()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of DefaultPublic_Optional and sets DefaultPublic_IsSet to false.




### `IsDefaultPublicDefaultValue` <a id="structFRHAPI__SessionTemplate_1aded9e905d1ae97b71569316e9a93249f"></a>

bool IsDefaultPublicDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if DefaultPublic_Optional is set and matches the default value.




### `SetDefaultPublicToDefault` <a id="structFRHAPI__SessionTemplate_1aeff38f0e7c8d477f6175359b09bf33e7"></a>

void SetDefaultPublicToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of DefaultPublic_Optional to its default and also sets DefaultPublic_IsSet to true.




### `GetAutoAddToBrowser` <a id="structFRHAPI__SessionTemplate_1adfdd95d3bbe2abb2bec34a1e505d1420"></a>

bool & GetAutoAddToBrowser()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AutoAddToBrowser_Optional, regardless of it having been set.




### `GetAutoAddToBrowser` <a id="structFRHAPI__SessionTemplate_1a1922eb1b6a75e8e3e704ffc247ce68bc"></a>

const bool & GetAutoAddToBrowser()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AutoAddToBrowser_Optional, regardless of it having been set.




### `GetAutoAddToBrowser` <a id="structFRHAPI__SessionTemplate_1ab22d912b63beca54e9eb97754afa2f92"></a>

const bool & GetAutoAddToBrowser(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of AutoAddToBrowser_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAutoAddToBrowser` <a id="structFRHAPI__SessionTemplate_1ae622425b3ab30a45ced3fe65d4e23f24"></a>

bool GetAutoAddToBrowser(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of AutoAddToBrowser_Optional and returns true if it has been set, otherwise returns false.




### `GetAutoAddToBrowserOrNull` <a id="structFRHAPI__SessionTemplate_1ac6ee66ffed0a42dd58bc556fb1015faa"></a>

bool * GetAutoAddToBrowserOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AutoAddToBrowser_Optional, if it has been set, otherwise returns nullptr.




### `GetAutoAddToBrowserOrNull` <a id="structFRHAPI__SessionTemplate_1a68aebb2e292a17a1e41691af29e1e55f"></a>

const bool * GetAutoAddToBrowserOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AutoAddToBrowser_Optional, if it has been set, otherwise returns nullptr.




### `SetAutoAddToBrowser` <a id="structFRHAPI__SessionTemplate_1aa783957ce6ec058e41016a574c43ed61"></a>

void SetAutoAddToBrowser(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of AutoAddToBrowser_Optional and also sets AutoAddToBrowser_IsSet to true.




### `ClearAutoAddToBrowser` <a id="structFRHAPI__SessionTemplate_1ae71defa87a1bc92560786421ece26aa0"></a>

void ClearAutoAddToBrowser()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of AutoAddToBrowser_Optional and sets AutoAddToBrowser_IsSet to false.




### `IsAutoAddToBrowserDefaultValue` <a id="structFRHAPI__SessionTemplate_1a1aef6318593a8e024bab505bdc238fc9"></a>

bool IsAutoAddToBrowserDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if AutoAddToBrowser_Optional is set and matches the default value.




### `SetAutoAddToBrowserToDefault` <a id="structFRHAPI__SessionTemplate_1a78e197d8caad7dcbdb0a6325c5828d07"></a>

void SetAutoAddToBrowserToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of AutoAddToBrowser_Optional to its default and also sets AutoAddToBrowser_IsSet to true.




### `GetAutoBrowserParams` <a id="structFRHAPI__SessionTemplate_1a9fbce9936f06a5974cc4c754cc6ba2be"></a>

TMap< FString, FString > & GetAutoBrowserParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AutoBrowserParams_Optional, regardless of it having been set.




### `GetAutoBrowserParams` <a id="structFRHAPI__SessionTemplate_1aa684894af0b0039c175f754ce967c2ba"></a>

const TMap< FString, FString > & GetAutoBrowserParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AutoBrowserParams_Optional, regardless of it having been set.




### `GetAutoBrowserParams` <a id="structFRHAPI__SessionTemplate_1afc5d4149477d0f71fb54811c0e956e5c"></a>

const TMap< FString, FString > & GetAutoBrowserParams(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of AutoBrowserParams_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAutoBrowserParams` <a id="structFRHAPI__SessionTemplate_1a28c63280b5b76ebb4ca52054211a2876"></a>

bool GetAutoBrowserParams(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of AutoBrowserParams_Optional and returns true if it has been set, otherwise returns false.




### `GetAutoBrowserParamsOrNull` <a id="structFRHAPI__SessionTemplate_1a89e159e41c6b6b645f5643d2a1e2e916"></a>

TMap< FString, FString > * GetAutoBrowserParamsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AutoBrowserParams_Optional, if it has been set, otherwise returns nullptr.




### `GetAutoBrowserParamsOrNull` <a id="structFRHAPI__SessionTemplate_1a5b7903355ba0fc847ac83f864aa9805a"></a>

const TMap< FString, FString > * GetAutoBrowserParamsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AutoBrowserParams_Optional, if it has been set, otherwise returns nullptr.




### `SetAutoBrowserParams` <a id="structFRHAPI__SessionTemplate_1a30902dcd2ac35f55b8f1b13d05b5fb81"></a>

void SetAutoBrowserParams(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of AutoBrowserParams_Optional and also sets AutoBrowserParams_IsSet to true.




### `ClearAutoBrowserParams` <a id="structFRHAPI__SessionTemplate_1afc6ccbb82066817f3e22ad01730802db"></a>

void ClearAutoBrowserParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of AutoBrowserParams_Optional and sets AutoBrowserParams_IsSet to false.




### `GetCanBeAddedToServerBrowser` <a id="structFRHAPI__SessionTemplate_1a356373eb133f994e7ac8d8efbb1775d1"></a>

bool & GetCanBeAddedToServerBrowser()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CanBeAddedToServerBrowser_Optional, regardless of it having been set.




### `GetCanBeAddedToServerBrowser` <a id="structFRHAPI__SessionTemplate_1ad943f3983e02ba20c1e8216cbb1db291"></a>

const bool & GetCanBeAddedToServerBrowser()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CanBeAddedToServerBrowser_Optional, regardless of it having been set.




### `GetCanBeAddedToServerBrowser` <a id="structFRHAPI__SessionTemplate_1a749dc792aaf08e7bb6f76273c6da485a"></a>

const bool & GetCanBeAddedToServerBrowser(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of CanBeAddedToServerBrowser_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCanBeAddedToServerBrowser` <a id="structFRHAPI__SessionTemplate_1ab18e4d2ed25195e8d0f76dc39810daff"></a>

bool GetCanBeAddedToServerBrowser(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of CanBeAddedToServerBrowser_Optional and returns true if it has been set, otherwise returns false.




### `GetCanBeAddedToServerBrowserOrNull` <a id="structFRHAPI__SessionTemplate_1a1f82f9ee862c907b625f5c8f461103a2"></a>

bool * GetCanBeAddedToServerBrowserOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CanBeAddedToServerBrowser_Optional, if it has been set, otherwise returns nullptr.




### `GetCanBeAddedToServerBrowserOrNull` <a id="structFRHAPI__SessionTemplate_1a764001d77e82becf0bba7e9c362f3dd4"></a>

const bool * GetCanBeAddedToServerBrowserOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CanBeAddedToServerBrowser_Optional, if it has been set, otherwise returns nullptr.




### `SetCanBeAddedToServerBrowser` <a id="structFRHAPI__SessionTemplate_1ac6eac725b488f4a0e1a80ba8be13368b"></a>

void SetCanBeAddedToServerBrowser(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of CanBeAddedToServerBrowser_Optional and also sets CanBeAddedToServerBrowser_IsSet to true.




### `ClearCanBeAddedToServerBrowser` <a id="structFRHAPI__SessionTemplate_1a23f4b3075ad5c6cf66442b7fb9ff4731"></a>

void ClearCanBeAddedToServerBrowser()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CanBeAddedToServerBrowser_Optional and sets CanBeAddedToServerBrowser_IsSet to false.




### `IsCanBeAddedToServerBrowserDefaultValue` <a id="structFRHAPI__SessionTemplate_1a7d34d65f47086fd753f7ac691a4c0df5"></a>

bool IsCanBeAddedToServerBrowserDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if CanBeAddedToServerBrowser_Optional is set and matches the default value.




### `SetCanBeAddedToServerBrowserToDefault` <a id="structFRHAPI__SessionTemplate_1a933ba7bff1d990c9c0e12b47abd0864f"></a>

void SetCanBeAddedToServerBrowserToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of CanBeAddedToServerBrowser_Optional to its default and also sets CanBeAddedToServerBrowser_IsSet to true.




### `GetKeepAliveOnEmpty` <a id="structFRHAPI__SessionTemplate_1a8ea968025808651306147a75bd67e3f4"></a>

bool & GetKeepAliveOnEmpty()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of KeepAliveOnEmpty_Optional, regardless of it having been set.




### `GetKeepAliveOnEmpty` <a id="structFRHAPI__SessionTemplate_1a6844b0f1086a52ae8f4abbaa7d6015dd"></a>

const bool & GetKeepAliveOnEmpty()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of KeepAliveOnEmpty_Optional, regardless of it having been set.




### `GetKeepAliveOnEmpty` <a id="structFRHAPI__SessionTemplate_1a3d2f2c8cd62e4e08e1a6cdf1d1edd5f0"></a>

const bool & GetKeepAliveOnEmpty(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of KeepAliveOnEmpty_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetKeepAliveOnEmpty` <a id="structFRHAPI__SessionTemplate_1acdfbfbafa3f03348b60c82c0b6625ac8"></a>

bool GetKeepAliveOnEmpty(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of KeepAliveOnEmpty_Optional and returns true if it has been set, otherwise returns false.




### `GetKeepAliveOnEmptyOrNull` <a id="structFRHAPI__SessionTemplate_1ab6c0900c63fb8470b63e487b59072bfe"></a>

bool * GetKeepAliveOnEmptyOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to KeepAliveOnEmpty_Optional, if it has been set, otherwise returns nullptr.




### `GetKeepAliveOnEmptyOrNull` <a id="structFRHAPI__SessionTemplate_1ab15dd91b8e7fb45d13a6f94f60067c2b"></a>

const bool * GetKeepAliveOnEmptyOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to KeepAliveOnEmpty_Optional, if it has been set, otherwise returns nullptr.




### `SetKeepAliveOnEmpty` <a id="structFRHAPI__SessionTemplate_1a96ab8d6994b4d813d42e85e64a15e68f"></a>

void SetKeepAliveOnEmpty(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of KeepAliveOnEmpty_Optional and also sets KeepAliveOnEmpty_IsSet to true.




### `ClearKeepAliveOnEmpty` <a id="structFRHAPI__SessionTemplate_1a296512654f450ed319f63f8b648c53b8"></a>

void ClearKeepAliveOnEmpty()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of KeepAliveOnEmpty_Optional and sets KeepAliveOnEmpty_IsSet to false.




### `IsKeepAliveOnEmptyDefaultValue` <a id="structFRHAPI__SessionTemplate_1a55aba4ea889f042e220c937f19078a59"></a>

bool IsKeepAliveOnEmptyDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if KeepAliveOnEmpty_Optional is set and matches the default value.




### `SetKeepAliveOnEmptyToDefault` <a id="structFRHAPI__SessionTemplate_1a8a37912d37e10efa335771cbdb045138"></a>

void SetKeepAliveOnEmptyToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of KeepAliveOnEmpty_Optional to its default and also sets KeepAliveOnEmpty_IsSet to true.




### `GetPlatformTemplates` <a id="structFRHAPI__SessionTemplate_1ac6c83f72faa66211afc8ae944090b3d0"></a>

TMap< FString, [FRHAPI_PlatformSessionTemplate](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate) > & GetPlatformTemplates()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformTemplates_Optional, regardless of it having been set.




### `GetPlatformTemplates` <a id="structFRHAPI__SessionTemplate_1aebef26179db7006243d80f71b54ec4b3"></a>

const TMap< FString, [FRHAPI_PlatformSessionTemplate](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate) > & GetPlatformTemplates()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformTemplates_Optional, regardless of it having been set.




### `GetPlatformTemplates` <a id="structFRHAPI__SessionTemplate_1aea4d305d4f6294a06c6a18e869229e7d"></a>

const TMap< FString, [FRHAPI_PlatformSessionTemplate](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate) > & GetPlatformTemplates(const TMap< FString, [FRHAPI_PlatformSessionTemplate](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, [FRHAPI_PlatformSessionTemplate](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate) > &|DefaultValue|

#### Description

Gets the value of PlatformTemplates_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPlatformTemplates` <a id="structFRHAPI__SessionTemplate_1a56834a7a902d9cff7d59c3e78d1cf3e9"></a>

bool GetPlatformTemplates(TMap< FString, [FRHAPI_PlatformSessionTemplate](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_PlatformSessionTemplate](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate) > &|OutValue|

#### Description

Fills OutValue with the value of PlatformTemplates_Optional and returns true if it has been set, otherwise returns false.




### `GetPlatformTemplatesOrNull` <a id="structFRHAPI__SessionTemplate_1a07808f2ecbaa8e97a7be56c7a441b802"></a>

TMap< FString, [FRHAPI_PlatformSessionTemplate](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate) > * GetPlatformTemplatesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PlatformTemplates_Optional, if it has been set, otherwise returns nullptr.




### `GetPlatformTemplatesOrNull` <a id="structFRHAPI__SessionTemplate_1ab8f18c47ff1f542e4f6595c35bd7be0f"></a>

const TMap< FString, [FRHAPI_PlatformSessionTemplate](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate) > * GetPlatformTemplatesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PlatformTemplates_Optional, if it has been set, otherwise returns nullptr.




### `SetPlatformTemplates` <a id="structFRHAPI__SessionTemplate_1a09102a0c2c86e1e96d7b21ec4c483154"></a>

void SetPlatformTemplates(TMap< FString, [FRHAPI_PlatformSessionTemplate](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, [FRHAPI_PlatformSessionTemplate](/unreal-plugins/all/structfrhapi__platformsessiontemplate/#structFRHAPI__PlatformSessionTemplate) >|NewValue|

#### Description

Sets the value of PlatformTemplates_Optional and also sets PlatformTemplates_IsSet to true.




### `ClearPlatformTemplates` <a id="structFRHAPI__SessionTemplate_1a63f0a0474639a53f8a0789e3850321dd"></a>

void ClearPlatformTemplates()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PlatformTemplates_Optional and sets PlatformTemplates_IsSet to false.




### `GetAutoStartupParams` <a id="structFRHAPI__SessionTemplate_1ab8dd54ee2f4348500f01e44af3448a4a"></a>

[FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) & GetAutoStartupParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AutoStartupParams_Optional, regardless of it having been set.




### `GetAutoStartupParams` <a id="structFRHAPI__SessionTemplate_1a6695f79c7358ba7b6dc665219044f694"></a>

const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) & GetAutoStartupParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AutoStartupParams_Optional, regardless of it having been set.




### `GetAutoStartupParams` <a id="structFRHAPI__SessionTemplate_1a89c852cf18006b6e93e52086db3ffa82"></a>

const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) & GetAutoStartupParams(const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) &|DefaultValue|

#### Description

Gets the value of AutoStartupParams_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAutoStartupParams` <a id="structFRHAPI__SessionTemplate_1add791f7825789aeab338cf381a333094"></a>

bool GetAutoStartupParams([FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) &|OutValue|

#### Description

Fills OutValue with the value of AutoStartupParams_Optional and returns true if it has been set, otherwise returns false.




### `GetAutoStartupParamsOrNull` <a id="structFRHAPI__SessionTemplate_1a2cb1eee8abb2d118c644cb7421f393aa"></a>

[FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) * GetAutoStartupParamsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AutoStartupParams_Optional, if it has been set, otherwise returns nullptr.




### `GetAutoStartupParamsOrNull` <a id="structFRHAPI__SessionTemplate_1a423eba55e9b185ead6f0f8d17eb640b8"></a>

const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) * GetAutoStartupParamsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AutoStartupParams_Optional, if it has been set, otherwise returns nullptr.




### `SetAutoStartupParams` <a id="structFRHAPI__SessionTemplate_1ae8aea581ff24bb8fcc059e70dd233c83"></a>

void SetAutoStartupParams([FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams)|NewValue|

#### Description

Sets the value of AutoStartupParams_Optional and also sets AutoStartupParams_IsSet to true.




### `ClearAutoStartupParams` <a id="structFRHAPI__SessionTemplate_1a41041ffbd8775231d249554a072116d7"></a>

void ClearAutoStartupParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of AutoStartupParams_Optional and sets AutoStartupParams_IsSet to false.




### `GetMinSessionCount` <a id="structFRHAPI__SessionTemplate_1aab1a67e445ca5338fbb66baa3d3bcb9f"></a>

int32 & GetMinSessionCount()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MinSessionCount_Optional, regardless of it having been set.




### `GetMinSessionCount` <a id="structFRHAPI__SessionTemplate_1ab7376fd46c054e32668b755907ac0d90"></a>

const int32 & GetMinSessionCount()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of MinSessionCount_Optional, regardless of it having been set.




### `GetMinSessionCount` <a id="structFRHAPI__SessionTemplate_1a1e5c95d760b8e9f40c01e6fb729c5398"></a>

const int32 & GetMinSessionCount(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of MinSessionCount_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetMinSessionCount` <a id="structFRHAPI__SessionTemplate_1a01b84d2a460388a199d7c375fad38fd3"></a>

bool GetMinSessionCount(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of MinSessionCount_Optional and returns true if it has been set, otherwise returns false.




### `GetMinSessionCountOrNull` <a id="structFRHAPI__SessionTemplate_1a8e5543499a18eba17eac324c956c0231"></a>

int32 * GetMinSessionCountOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MinSessionCount_Optional, if it has been set, otherwise returns nullptr.




### `GetMinSessionCountOrNull` <a id="structFRHAPI__SessionTemplate_1a3555ef17f28ad123940629efa5aea9d6"></a>

const int32 * GetMinSessionCountOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to MinSessionCount_Optional, if it has been set, otherwise returns nullptr.




### `SetMinSessionCount` <a id="structFRHAPI__SessionTemplate_1a254d335fd5933d1f3d3bb157d7f98b04"></a>

void SetMinSessionCount(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of MinSessionCount_Optional and also sets MinSessionCount_IsSet to true.




### `ClearMinSessionCount` <a id="structFRHAPI__SessionTemplate_1a563b899213f0a6ff1e7ab855e18df3a5"></a>

void ClearMinSessionCount()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of MinSessionCount_Optional and sets MinSessionCount_IsSet to false.




### `IsMinSessionCountDefaultValue` <a id="structFRHAPI__SessionTemplate_1a8215c4b5ea50cf0228490c27c5db60fb"></a>

bool IsMinSessionCountDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if MinSessionCount_Optional is set and matches the default value.




### `SetMinSessionCountToDefault` <a id="structFRHAPI__SessionTemplate_1af3b075285782037409643751bbaaa19d"></a>

void SetMinSessionCountToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of MinSessionCount_Optional to its default and also sets MinSessionCount_IsSet to true.




### `GetCustomData` <a id="structFRHAPI__SessionTemplate_1a82fc45eec30dd2fdbc21dfd89596622b"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__SessionTemplate_1a93d7a2dbc3d1ef21263a08ee990d51fc"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__SessionTemplate_1ad619a0c4c3891bff333558fc77926a88"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__SessionTemplate_1ab19f81eb52ffd9f199a884befe791d2a"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__SessionTemplate_1a210b362e85e3b02527bfe2a1f0d78bb2"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__SessionTemplate_1a1f6d298122b0f91adbbcf4b3c188b0c1"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__SessionTemplate_1a8f039c1cc05ec90391072c0f9bf69d03"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__SessionTemplate_1ac20b3669d3a9488606e5e2afd59df8f1"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.




### `GetNumTeams` <a id="structFRHAPI__SessionTemplate_1a756f008bb020837ad8503308147df6e2"></a>

int32 & GetNumTeams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of NumTeams_Optional, regardless of it having been set.




### `GetNumTeams` <a id="structFRHAPI__SessionTemplate_1a0700118646093644624de6a22c77afbf"></a>

const int32 & GetNumTeams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of NumTeams_Optional, regardless of it having been set.




### `GetNumTeams` <a id="structFRHAPI__SessionTemplate_1a96d38df114e19c81017a8e5a4b86061c"></a>

const int32 & GetNumTeams(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of NumTeams_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetNumTeams` <a id="structFRHAPI__SessionTemplate_1a6ce27d5e98f039a4111fd089abc115df"></a>

bool GetNumTeams(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of NumTeams_Optional and returns true if it has been set, otherwise returns false.




### `GetNumTeamsOrNull` <a id="structFRHAPI__SessionTemplate_1ad24010c350f353abae43817ce6a7fa7c"></a>

int32 * GetNumTeamsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to NumTeams_Optional, if it has been set, otherwise returns nullptr.




### `GetNumTeamsOrNull` <a id="structFRHAPI__SessionTemplate_1a1fe6d852ba498e482f018cb525a73a03"></a>

const int32 * GetNumTeamsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to NumTeams_Optional, if it has been set, otherwise returns nullptr.




### `SetNumTeams` <a id="structFRHAPI__SessionTemplate_1aee7845d212604eda9ea8ddad496cc87c"></a>

void SetNumTeams(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of NumTeams_Optional and also sets NumTeams_IsSet to true.




### `ClearNumTeams` <a id="structFRHAPI__SessionTemplate_1ab05fd0888c21bacaaab9bd4b0ca92e00"></a>

void ClearNumTeams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of NumTeams_Optional and sets NumTeams_IsSet to false.




### `IsNumTeamsDefaultValue` <a id="structFRHAPI__SessionTemplate_1a4c6f7c1655e76727f7cb5b5ffc5c66af"></a>

bool IsNumTeamsDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if NumTeams_Optional is set and matches the default value.




### `SetNumTeamsToDefault` <a id="structFRHAPI__SessionTemplate_1a76d7e80355b9705e3a1ea1c86817fd45"></a>

void SetNumTeamsToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of NumTeams_Optional to its default and also sets NumTeams_IsSet to true.




### `GetPlayersPerTeam` <a id="structFRHAPI__SessionTemplate_1a6ae47ea0d86ead702c351b6f06d5b1bb"></a>

int32 & GetPlayersPerTeam()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayersPerTeam_Optional, regardless of it having been set.




### `GetPlayersPerTeam` <a id="structFRHAPI__SessionTemplate_1ab586729d347edb3ddd5df0fd5beec5f1"></a>

const int32 & GetPlayersPerTeam()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayersPerTeam_Optional, regardless of it having been set.




### `GetPlayersPerTeam` <a id="structFRHAPI__SessionTemplate_1a7069808829529cd76ec7f294df72cacd"></a>

const int32 & GetPlayersPerTeam(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of PlayersPerTeam_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPlayersPerTeam` <a id="structFRHAPI__SessionTemplate_1ac380d35a8a8a1758ade954aa9f4c09ca"></a>

bool GetPlayersPerTeam(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of PlayersPerTeam_Optional and returns true if it has been set, otherwise returns false.




### `GetPlayersPerTeamOrNull` <a id="structFRHAPI__SessionTemplate_1a3268494a760b7e14302fae97cae4266b"></a>

int32 * GetPlayersPerTeamOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PlayersPerTeam_Optional, if it has been set, otherwise returns nullptr.




### `GetPlayersPerTeamOrNull` <a id="structFRHAPI__SessionTemplate_1ac0ba30015039756fbe49ea2f237f0d50"></a>

const int32 * GetPlayersPerTeamOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PlayersPerTeam_Optional, if it has been set, otherwise returns nullptr.




### `SetPlayersPerTeam` <a id="structFRHAPI__SessionTemplate_1a0eebc89ec7961b126d546bdd9cd9796b"></a>

void SetPlayersPerTeam(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of PlayersPerTeam_Optional and also sets PlayersPerTeam_IsSet to true.




### `ClearPlayersPerTeam` <a id="structFRHAPI__SessionTemplate_1aa2773b8e861aae5dd66d271167b6e2fb"></a>

void ClearPlayersPerTeam()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PlayersPerTeam_Optional and sets PlayersPerTeam_IsSet to false.




### `IsPlayersPerTeamDefaultValue` <a id="structFRHAPI__SessionTemplate_1afc394c69e5ec383de5296897550060eb"></a>

bool IsPlayersPerTeamDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if PlayersPerTeam_Optional is set and matches the default value.




### `SetPlayersPerTeamToDefault` <a id="structFRHAPI__SessionTemplate_1a8434c5519b75cac25c55f491f314dc7e"></a>

void SetPlayersPerTeamToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of PlayersPerTeam_Optional to its default and also sets PlayersPerTeam_IsSet to true.




### `GetCanChangeOwnTeam` <a id="structFRHAPI__SessionTemplate_1a05e870ee9cdc2c46e50ab7fc28482cc7"></a>

bool & GetCanChangeOwnTeam()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CanChangeOwnTeam_Optional, regardless of it having been set.




### `GetCanChangeOwnTeam` <a id="structFRHAPI__SessionTemplate_1ab308d57c9a744e7ff316c2ffb6b5c0be"></a>

const bool & GetCanChangeOwnTeam()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CanChangeOwnTeam_Optional, regardless of it having been set.




### `GetCanChangeOwnTeam` <a id="structFRHAPI__SessionTemplate_1a78c0b25be27b024aff1e68a020cc3845"></a>

const bool & GetCanChangeOwnTeam(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of CanChangeOwnTeam_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCanChangeOwnTeam` <a id="structFRHAPI__SessionTemplate_1acff401368fdba4b7bc966fe2d79d1923"></a>

bool GetCanChangeOwnTeam(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of CanChangeOwnTeam_Optional and returns true if it has been set, otherwise returns false.




### `GetCanChangeOwnTeamOrNull` <a id="structFRHAPI__SessionTemplate_1a96d97777749d18bd98f740f0dcf69275"></a>

bool * GetCanChangeOwnTeamOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CanChangeOwnTeam_Optional, if it has been set, otherwise returns nullptr.




### `GetCanChangeOwnTeamOrNull` <a id="structFRHAPI__SessionTemplate_1a89094a04c692a9ef55267b1033500b88"></a>

const bool * GetCanChangeOwnTeamOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CanChangeOwnTeam_Optional, if it has been set, otherwise returns nullptr.




### `SetCanChangeOwnTeam` <a id="structFRHAPI__SessionTemplate_1ad2a6502d9c243417a2394f73e91c974d"></a>

void SetCanChangeOwnTeam(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of CanChangeOwnTeam_Optional and also sets CanChangeOwnTeam_IsSet to true.




### `ClearCanChangeOwnTeam` <a id="structFRHAPI__SessionTemplate_1a9aa2afa1842ee1cab22a7b1a9a772c08"></a>

void ClearCanChangeOwnTeam()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CanChangeOwnTeam_Optional and sets CanChangeOwnTeam_IsSet to false.




### `IsCanChangeOwnTeamDefaultValue` <a id="structFRHAPI__SessionTemplate_1a26a5ebe40250064f888d423e23531bfa"></a>

bool IsCanChangeOwnTeamDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if CanChangeOwnTeam_Optional is set and matches the default value.




### `SetCanChangeOwnTeamToDefault` <a id="structFRHAPI__SessionTemplate_1ac1a42404ac65f492acfd7e7fe75e4afb"></a>

void SetCanChangeOwnTeamToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of CanChangeOwnTeam_Optional to its default and also sets CanChangeOwnTeam_IsSet to true.





