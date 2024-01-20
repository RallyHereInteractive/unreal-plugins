---
title: URH_PlayerInfo Class
---Inherits from UObject

Stores and fetchs all the information about a given player.

## Summary
| Kind | View | Description |
|------|------|-------------|
|typedef|[GetPlatforms](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a88c3597ebf7f47399d936f5a96d344f6)||
|typedef|[GetSettings](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1ae425cac3ffa853a48c03df8caa2c8ca9)||
|typedef|[SetSettings](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1af84cca7ca91da85ceec6caf73af9db11)||
|typedef|[GetRankings](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1ae1180995c5f25cb946b6f47e44886c46)||
|typedef|[UpdateRanking](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a0dde72a36a43d91264f8dc89aafcd5de)||
|FRH_OnPresenceUpdatedMulticastDynamicDelegate|[BLUEPRINT_OnPresenceUpdatedDelegate](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a54c7f292baed18ac0874999ed4aa6887)|Blueprint delegate to listen for presence updates.|
|FRH_OnPresenceUpdatedMulticastDelegate|[OnPresenceUpdatedDelegate](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1ac74aa80ca135a273f845baa99a260b52)|Native delegate to listen for presence updates.|
|FRH_OnPlayerSessionsUpdatedMulticastDynamicDelegate|[BLUEPRINT_OnSessionsUpdatedDelegate](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1af04e5c65d01d1fc0112f5ba31251b803)|Blueprint delegate to listen for session list updates.|
|FRH_OnPlayerSessionsUpdatedMulticastDelegate|[OnSessionsUpdatedDelegate](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a08a5bcbd89a31745fe2d338a73c57d40)|Native delegate to listen for session list updates.|
|FGuid|[RHPlayerUuid](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1abd6b1bad2e1044b59af44d04f822cef1)|The Unique Player Id for the player.|
|TMap< FString, [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) >|[PlayerSettingsByTypeId](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a17fa2a55af8c7efa708db4871753ae07)|Cache of Player Settings Data by their settings types.|
|TMap< FString, [FRH_PlayerSettingKeySetWrapper](/unreal-plugins/all/structfrh__playersettingkeysetwrapper/#structFRH__PlayerSettingKeySetWrapper) >|[PendingSettingRequestsByTypeId](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a65d3de9960e39b3dcacc0d885c14b016)|When requesting multiple Player Settings Updates at once, this keeps track of pending requests so we know when all requests are completed.|
|TMap< FString, [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) >|[SetPlayerSettingResponses](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1ae9c58905a224f950cec5f6fc65de81f3)|Used when requesting multiple Player Settings Updates to track all their responses.|
|TArray< [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) >|[LinkedPlayerPlatforms](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a9f74bbf7a958d7a5a00d7daa8c159c2f)|Cache of all platforms the player is linked to.|
|[URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) *|[PlayerPresence](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1ae3c851503d0b5b8c024dc55252acb688)|The players Presence Information.|
|[URH_PlayerSessions](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions) *|[PlayerSessions](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a7af4d09bb83333d3028bc9a94cf067fd)|The players Sessions Information.|
|[URH_PlayerInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory) *|[PlayerInventory](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1ab06228dae3921d141dbbf2bf895c55da)|The Players Inventory Subsystem.|
|[URH_PlayerNotifications](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications) *|[PlayerNotifications](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1ac1eb1a25b4d89a7f7c75cbb6d4c9e4a8)|The Players Inventory Subsystem.|
|TMap< FString, [FRHAPI_PlayerRankResponseV2](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2) >|[PlayerRankingsByRankingId](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a5728d3241aef0abed0788e90422ad071)|List of the player's rankings.|
|FDateTime|[LastRequestPlatforms](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1aa5e1b18e6f2841b2f1e32914d8552756)|Tracks the last time the players linked platforms were requested for checking if the data is stale.|
|TMap< FString, FDateTime >|[LastRequestSettingsByTypeId](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1aaa55e58e83b940311b96f7869bea9bba)|Tracks the last time each settings type was request for checking if the data is stale.|
|FDateTime|[LastRequestRankings](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a5e9c3bbbc44273cfa7286f52c457d435)|Tracks the last time the player rankings were requested for checking if the data is stale.|
|friend|[URH_PlayerInfoSubsystem](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a58c70010a57073c62251e44b8ccb6fa5)||
|friend|[URH_PlayerPresence](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a4b9d87f97f2a38520db6c8e3af9eff27)||
|friend|[URH_PlayerSessions](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a6070ef9e0c18965de1e6493c52b8229f)||
|FORCEINLINE FGuid &|[GetRHPlayerUuid](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1ab4bac7a190b2e5fec6d242c25f7672f4)()|Gets the players Unique player Id.|
|FORCEINLINE [URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) *|[GetPresence](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a30440b0a7ab410262e696bc6ac976568)()|Gets The players presence class.|
|FORCEINLINE [URH_PlayerSessions](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions) *|[GetSessions](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a3a012da0a55d1edb09a80dcf658ae7f4)()|Gets The players presence class.|
|FORCEINLINE TArray< [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) > &|[GetPlayerPlatformIds](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a6da64917c1815b0048dbf5b770a43480)()|Gets the associated platform ids of the player.|
|FORCEINLINE const TArray< [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) > &|[GetPlayerPlatformIds](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1ab0617adb51499a0c8ce36ef60693e6d6)()|Gets the associated platform ids of the player.|
|TArray< [URH_PlayerPlatformInfo](/unreal-plugins/all/classurh__playerplatforminfo/#classURH__PlayerPlatformInfo) * >|[GetPlayerPlatforms](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a3896d84ba5481158ce3cfc62b39e064e)()|Gets the associated platforms of the player.|
|[URH_PlayerPlatformInfo](/unreal-plugins/all/classurh__playerplatforminfo/#classURH__PlayerPlatformInfo) *|[GetPlayerPlatformInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a0e3a7df23b8a7a183d1b8c94c578e343)(const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) & PlayerPlatformId)|Gets a specific platform for the player.|
|[URH_PlayerInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory) *|[GetPlayerInventory](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a430d123219813a6ba0c8100b367df6ec)()|Gets the players Inventory Subsystem.|
|[URH_PlayerNotifications](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications) *|[GetPlayerNotifications](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a6f1e1f6ef4d38ed87c2c2b920a5cd891)()|Gets the players Notification Subsystem.|
|void|[StartStreamingNotifications](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a15c2a3c44c22cfb7461609fa5e5d45cc)()|Request to start streaming notifications for this player.|
|void|[StopStreamingNotifications](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a17cff21d266da2c72a4f200e316d45b6)(bool bClearCache)|Requests to stop streaming notifications.|
|const TMap< FString, [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) > &|[GetAllStoredPlayerSettings](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a3eb1adffb0e0f4f503241ae5848818ce)()|Gets all the players store settings data.|
|const TMap< FString, [FRHAPI_PlayerRankResponseV2](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2) > &|[GetAllStoredPlayerRankings](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1aa79ba1c1bcb06d02478ec145999b06a3)()|Gets all the players stored ranking data.|
|[URH_PlayerInfoSubsystem](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem) *|[GetPlayerInfoSubsystem](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a0f038ae188d71729b19771f401bee34a)()|Gets the players Info Subsystem that the Player Info is on.|
|void|[InitializeForPlayer](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a38608b8b57751e9db1c1dcfb818d0506)(const FGuid & PlayerUuid)|Initialized the player info from a given Player Unique Id.|
|void|[GetLastKnownDisplayNameAsync](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a748ec2c5cc1c2aa3f3a91d906c8ba04b)(const FTimespan & StaleThreshold, bool bForceRefresh, ERHAPI_Platform PreferredPlatformType, const FRH_PlayerInfoGetDisplayNameBlock & Delegate, const class [URH_LocalPlayerSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem) * LocalPlayerSubsystem)|Gets the last known display name for the player, will make required API calls to retrieve the information if needed.|
|void|[BLUEPRINT_GetLastKnownDisplayNameAsync](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a2a5f9d31fb4c1096e06d68569d617257)(const class [URH_LocalPlayerSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem) * LocalPlayerSubsystem, const FTimespan & StaleThreshold, bool bForceRefresh, ERHAPI_Platform PreferredPlatformType, const FRH_PlayerInfoGetDisplayNameDynamicDelegate & Delegate)||
|bool|[GetLastKnownDisplayName](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a1013650527f7be680adc07896e49d555)(FString & OutDisplayName, ERHAPI_Platform PreferredPlatformType)|Gets the last known display name for the player.|
|bool|[BLUEPRINT_GetLastKnownDisplayName](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a4b096747849fe22e2c7934fb3212bb85)(ERHAPI_Platform PreferredPlatformType, FString & OutDisplayName)||
|void|[GetLinkedPlatformInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1ac5a0056e3adcab2d8a5c65ea7d5e43ca)(const FTimespan & StaleThreshold, bool bForceRefresh, const FRH_PlayerInfoGetPlatformsBlock & Delegate)|Gets the players linked platforms via API call.|
|void|[BLUEPRINT_GetLinkedPlatformInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a17dd835ef46a8418e6cf760eb076d01d)(const FTimespan & StaleThreshold, bool bForceRefresh, const FRH_PlayerInfoGetPlatformsDynamicDelegate & Delegate)||
|void|[GetPlayerSettings](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1aa9d33400032ef41067fbc52f72f092c2)(const FString & SettingTypeId, const FTimespan & StaleThreshold, bool bForceRefresh, const FRH_PlayerInfoGetPlayerSettingsBlock & Delegate)|Gets the players settings information for a given type.|
|void|[BLUEPRINT_GetPlayerSettings](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a76e2f0a5ded932bc524553a9a2d43976)(const FString & SettingTypeId, const FTimespan & StaleThreshold, bool bForceRefresh, const FRH_PlayerInfoGetPlayerSettingsDynamicDelegate & Delegate)||
|void|[SetPlayerSettings](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a74ee0e82383414759503cc731086ab54)(const FString & SettingTypeId, [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) & SettingsData, const FRH_PlayerInfoSetPlayerSettingsBlock & Delegate)|Sets the players settings information for a given type.|
|void|[BLUEPRINT_SetPlayerSettings](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1aebf4859d56d3fc772711fd1c8714d4f0)(const FString & SettingTypeId, [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) SettingsData, const FRH_PlayerInfoSetPlayerSettingsDynamicDelegate & Delegate)||
|void|[GetPlayerRankings](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a7ff2423c28633ab7f4f62039aba32c8d)(const FTimespan & StaleThreshold, bool bForceRefresh, const FRH_PlayerInfoGetPlayerRankingsBlock & Delegate)|Gets the players ranking information for a given type.|
|void|[BLUEPRINT_GetPlayerRankings](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1adbfa47a9d0df7dec931ce18fa7b4f8b4)(const FTimespan & StaleThreshold, bool bForceRefresh, const FRH_PlayerInfoGetPlayerRankingsDynamicDelegate & Delegate)||
|void|[UpdatePlayerRanking](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a504494976ef115b48b620bcbfc914d17)(const FString & RankId, const [FRHAPI_PlayerRankUpdateRequest](/unreal-plugins/all/structfrhapi__playerrankupdaterequest/#structFRHAPI__PlayerRankUpdateRequest) & RankData, const FRH_PlayerInfoGetPlayerRankingsBlock & Delegate)|Sets the players settings information for a given type.|
|void|[BLUEPRINT_UpdatePlayerRanking](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a60648275bd880b33cfb78b403e0832ac)(const FString & RankId, const [FRHAPI_PlayerRankUpdateRequest](/unreal-plugins/all/structfrhapi__playerrankupdaterequest/#structFRHAPI__PlayerRankUpdateRequest) & RankData, const FRH_PlayerInfoGetPlayerRankingsDynamicDelegate & Delegate)||
|FAuthContextPtr|[GetAuthContext](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a38aa7a072a97be36bc623a9cda702cdf)()|Gets the local Auth Context for making API calls.|
|ERHAPI_Platform|[GetLoggedInPlatform](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1ad8fc7aea229a59d52a1c9e3491b8d168)()|Gets the local users logged in platform type.|
|void|[OnGetPlayerLinkedPlatformsForLastKnownDisplayNameResponse](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a49e19ae4082f15e22b2062c1cb78deb0)(bool bSuccess, const TArray< [URH_PlayerPlatformInfo](/unreal-plugins/all/classurh__playerplatforminfo/#classURH__PlayerPlatformInfo) * > & Platforms, ERHAPI_Platform PreferredPlatformType, const FRH_PlayerInfoGetDisplayNameBlock Delegate, const class [URH_LocalPlayerSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem) * LocalPlayerSubsystem)|Handles the response to a Get Linked Platforms For Last Known Display Name call.|
|void|[OnDisplayNameSanitized](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1afe5a34e86382c3f78767f2d72e3819fd)(bool bSuccess, const FString & SanitizedMessage, ERHAPI_Platform PreferredPlatformType, const FRH_PlayerInfoGetDisplayNameBlock Delegate)|Handles the response to sanitizing the players display name.|
|void|[OnGetPlayerLinkedPlatformsResponse](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1ada74501b2e422f1fcf8f76825d74cc58)(const GetPlatforms::Response & Response, const FRH_PlayerInfoGetPlatformsBlock Delegate)|Handles the response to a Get Linked Platforms call.|
|void|[OnGetPlayerSettingsResponse](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a115f584e7b7b210193fd9e302abbd3ed)(const GetSettings::Response & Response, const FRH_PlayerInfoGetPlayerSettingsBlock Delegate, const FString SettingTypeId)|Handles the response to a Get Player Settings call.|
|void|[OnSetPlayerSettingsResponse](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a6f59dae05d5371b867091b180280f091)(const SetSettings::Response & Response, const FRH_PlayerInfoSetPlayerSettingsBlock Delegate, const FString SettingTypeId, const FString SettingKey, [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) SettingsData)|Handles the response to a Set Player Settings call.|
|void|[OnGetPlayerRankingsResponse](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a53c355b2f85273d37008d685c3cc113c)(const GetRankings::Response & Response, const FRH_PlayerInfoGetPlayerRankingsBlock Delegate)|Handles the response to a Get Player Rankings call.|
|void|[OnUpdatePlayerRankingResponse](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a214672d0d5001ec24098b5414b0fc35d)(const UpdateRanking::Response & Response, const FRH_PlayerInfoGetPlayerRankingsBlock Delegate)|Handles the response to a Update Player Ranking call.|
|void|[OnPresenceUpdated](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a838753ffcca41ad5396dfd55a3daaa01)()|Helper to broadcast results from player presences being updated.|
|void|[OnSessionsUpdated](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo_1a69eab03e546d94bfa4ff9eb5bba8c550)()|Helper to broadcast results from player sessions list being updated.|
## Public Types



### `GetPlatforms` <a id="classURH__PlayerInfo_1a88c3597ebf7f47399d936f5a96d344f6"></a>

typedef RallyHereAPI::Traits_GetPlayerLinks GetPlatforms




### `GetSettings` <a id="classURH__PlayerInfo_1ae425cac3ffa853a48c03df8caa2c8ca9"></a>

typedef RallyHereAPI::Traits_GetAllPlayerUuidSettingsForSettingType GetSettings




### `SetSettings` <a id="classURH__PlayerInfo_1af84cca7ca91da85ceec6caf73af9db11"></a>

typedef RallyHereAPI::Traits_SetSinglePlayerUuidSetting SetSettings




### `GetRankings` <a id="classURH__PlayerInfo_1ae1180995c5f25cb946b6f47e44886c46"></a>

typedef RallyHereAPI::Traits_GetAllPlayerUuidRanksV2 GetRankings




### `UpdateRanking` <a id="classURH__PlayerInfo_1a0dde72a36a43d91264f8dc89aafcd5de"></a>

typedef RallyHereAPI::Traits_UpdatePlayerUuidRankV2 UpdateRanking





## Public Attributes



### `BLUEPRINT_OnPresenceUpdatedDelegate` <a id="classURH__PlayerInfo_1a54c7f292baed18ac0874999ed4aa6887"></a>

`FRH_OnPresenceUpdatedMulticastDynamicDelegate URH_PlayerInfo::BLUEPRINT_OnPresenceUpdatedDelegate`

Blueprint delegate to listen for presence updates.




### `OnPresenceUpdatedDelegate` <a id="classURH__PlayerInfo_1ac74aa80ca135a273f845baa99a260b52"></a>

`FRH_OnPresenceUpdatedMulticastDelegate URH_PlayerInfo::OnPresenceUpdatedDelegate`

Native delegate to listen for presence updates.




### `BLUEPRINT_OnSessionsUpdatedDelegate` <a id="classURH__PlayerInfo_1af04e5c65d01d1fc0112f5ba31251b803"></a>

`FRH_OnPlayerSessionsUpdatedMulticastDynamicDelegate URH_PlayerInfo::BLUEPRINT_OnSessionsUpdatedDelegate`

Blueprint delegate to listen for session list updates.




### `OnSessionsUpdatedDelegate` <a id="classURH__PlayerInfo_1a08a5bcbd89a31745fe2d338a73c57d40"></a>

`FRH_OnPlayerSessionsUpdatedMulticastDelegate URH_PlayerInfo::OnSessionsUpdatedDelegate`

Native delegate to listen for session list updates.





## Protected Attributes



### `RHPlayerUuid` <a id="classURH__PlayerInfo_1abd6b1bad2e1044b59af44d04f822cef1"></a>

`FGuid URH_PlayerInfo::RHPlayerUuid`

The Unique Player Id for the player.




### `PlayerSettingsByTypeId` <a id="classURH__PlayerInfo_1a17fa2a55af8c7efa708db4871753ae07"></a>

`TMap<FString, FRH_PlayerSettingsDataWrapper> URH_PlayerInfo::PlayerSettingsByTypeId`

Cache of Player Settings Data by their settings types.




### `PendingSettingRequestsByTypeId` <a id="classURH__PlayerInfo_1a65d3de9960e39b3dcacc0d885c14b016"></a>

`TMap<FString, FRH_PlayerSettingKeySetWrapper> URH_PlayerInfo::PendingSettingRequestsByTypeId`

When requesting multiple Player Settings Updates at once, this keeps track of pending requests so we know when all requests are completed.




### `SetPlayerSettingResponses` <a id="classURH__PlayerInfo_1ae9c58905a224f950cec5f6fc65de81f3"></a>

`TMap<FString, FRH_PlayerSettingsDataWrapper> URH_PlayerInfo::SetPlayerSettingResponses`

Used when requesting multiple Player Settings Updates to track all their responses.




### `LinkedPlayerPlatforms` <a id="classURH__PlayerInfo_1a9f74bbf7a958d7a5a00d7daa8c159c2f"></a>

`TArray<FRH_PlayerPlatformId> URH_PlayerInfo::LinkedPlayerPlatforms`

Cache of all platforms the player is linked to.




### `PlayerPresence` <a id="classURH__PlayerInfo_1ae3c851503d0b5b8c024dc55252acb688"></a>

`URH_PlayerPresence* URH_PlayerInfo::PlayerPresence`

The players Presence Information.




### `PlayerSessions` <a id="classURH__PlayerInfo_1a7af4d09bb83333d3028bc9a94cf067fd"></a>

`URH_PlayerSessions* URH_PlayerInfo::PlayerSessions`

The players Sessions Information.




### `PlayerInventory` <a id="classURH__PlayerInfo_1ab06228dae3921d141dbbf2bf895c55da"></a>

`URH_PlayerInventory* URH_PlayerInfo::PlayerInventory`

The Players Inventory Subsystem.




### `PlayerNotifications` <a id="classURH__PlayerInfo_1ac1eb1a25b4d89a7f7c75cbb6d4c9e4a8"></a>

`URH_PlayerNotifications* URH_PlayerInfo::PlayerNotifications`

The Players Inventory Subsystem.




### `PlayerRankingsByRankingId` <a id="classURH__PlayerInfo_1a5728d3241aef0abed0788e90422ad071"></a>

`TMap<FString, FRHAPI_PlayerRankResponseV2> URH_PlayerInfo::PlayerRankingsByRankingId`

List of the player's rankings.




### `LastRequestPlatforms` <a id="classURH__PlayerInfo_1aa5e1b18e6f2841b2f1e32914d8552756"></a>

`FDateTime URH_PlayerInfo::LastRequestPlatforms`

Tracks the last time the players linked platforms were requested for checking if the data is stale.




### `LastRequestSettingsByTypeId` <a id="classURH__PlayerInfo_1aaa55e58e83b940311b96f7869bea9bba"></a>

`TMap<FString, FDateTime> URH_PlayerInfo::LastRequestSettingsByTypeId`

Tracks the last time each settings type was request for checking if the data is stale.




### `LastRequestRankings` <a id="classURH__PlayerInfo_1a5e9c3bbbc44273cfa7286f52c457d435"></a>

`FDateTime URH_PlayerInfo::LastRequestRankings`

Tracks the last time the player rankings were requested for checking if the data is stale.





## Friends



### `URH_PlayerInfoSubsystem` <a id="classURH__PlayerInfo_1a58c70010a57073c62251e44b8ccb6fa5"></a>

`friend class URH_PlayerInfoSubsystem`

#### Parameters

| Type | Name |
|------|------|
|[URH_PlayerInfoSubsystem](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem)||

#### Description






### `URH_PlayerPresence` <a id="classURH__PlayerInfo_1a4b9d87f97f2a38520db6c8e3af9eff27"></a>

`friend class URH_PlayerPresence`

#### Parameters

| Type | Name |
|------|------|
|[URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence)||

#### Description






### `URH_PlayerSessions` <a id="classURH__PlayerInfo_1a6070ef9e0c18965de1e6493c52b8229f"></a>

`friend class URH_PlayerSessions`

#### Parameters

| Type | Name |
|------|------|
|[URH_PlayerSessions](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions)||

#### Description







## Public Functions



### `GetRHPlayerUuid` <a id="classURH__PlayerInfo_1ab4bac7a190b2e5fec6d242c25f7672f4"></a>

FORCEINLINE FGuid & GetRHPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the players Unique player Id.



#### Returns
The players Unique Player Id. 



### `GetPresence` <a id="classURH__PlayerInfo_1a30440b0a7ab410262e696bc6ac976568"></a>

FORCEINLINE [URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) * GetPresence()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets The players presence class.



#### Returns
The players presence class. 



### `GetSessions` <a id="classURH__PlayerInfo_1a3a012da0a55d1edb09a80dcf658ae7f4"></a>

FORCEINLINE [URH_PlayerSessions](/unreal-plugins/all/classurh__playersessions/#classURH__PlayerSessions) * GetSessions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets The players presence class.



#### Returns
The players presence class. 



### `GetPlayerPlatformIds` <a id="classURH__PlayerInfo_1a6da64917c1815b0048dbf5b770a43480"></a>

FORCEINLINE TArray< [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) > & GetPlayerPlatformIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the associated platform ids of the player.



#### Returns
The players associated platforms ids. 



### `GetPlayerPlatformIds` <a id="classURH__PlayerInfo_1ab0617adb51499a0c8ce36ef60693e6d6"></a>

FORCEINLINE const TArray< [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) > & GetPlayerPlatformIds()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the associated platform ids of the player.



#### Returns
The players associated platforms ids. 



### `GetPlayerPlatforms` <a id="classURH__PlayerInfo_1a3896d84ba5481158ce3cfc62b39e064e"></a>

TArray< [URH_PlayerPlatformInfo](/unreal-plugins/all/classurh__playerplatforminfo/#classURH__PlayerPlatformInfo) * > GetPlayerPlatforms()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the associated platforms of the player.



#### Returns
The players associated platforms. 



### `GetPlayerPlatformInfo` <a id="classURH__PlayerInfo_1a0e3a7df23b8a7a183d1b8c94c578e343"></a>

[URH_PlayerPlatformInfo](/unreal-plugins/all/classurh__playerplatforminfo/#classURH__PlayerPlatformInfo) * GetPlayerPlatformInfo(const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) & PlayerPlatformId)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) &|PlayerPlatformId|

#### Description

Gets a specific platform for the player.


#### Parameters

PlayerPlatformId
: The Id of the platform being requested. 

#### Returns
The platform requested for the player if it exists. 



### `GetPlayerInventory` <a id="classURH__PlayerInfo_1a430d123219813a6ba0c8100b367df6ec"></a>

[URH_PlayerInventory](/unreal-plugins/all/classurh__playerinventory/#classURH__PlayerInventory) * GetPlayerInventory()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the players Inventory Subsystem.



#### Returns
The players Inventory Subsystem. 



### `GetPlayerNotifications` <a id="classURH__PlayerInfo_1a6f1e1f6ef4d38ed87c2c2b920a5cd891"></a>

[URH_PlayerNotifications](/unreal-plugins/all/classurh__playernotifications/#classURH__PlayerNotifications) * GetPlayerNotifications()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the players Notification Subsystem.



#### Returns
The players Notification Subsystem. 



### `StartStreamingNotifications` <a id="classURH__PlayerInfo_1a15c2a3c44c22cfb7461609fa5e5d45cc"></a>

void StartStreamingNotifications()

#### Parameters

| Type | Name |
|------|------|

#### Description

Request to start streaming notifications for this player.




### `StopStreamingNotifications` <a id="classURH__PlayerInfo_1a17cff21d266da2c72a4f200e316d45b6"></a>

void StopStreamingNotifications(bool bClearCache)

#### Parameters

| Type | Name |
|------|------|
|bool|bClearCache|

#### Description

Requests to stop streaming notifications.


#### Parameters

[in[
: bClearCache If true, the cache of notifications will be cleared. 



### `GetAllStoredPlayerSettings` <a id="classURH__PlayerInfo_1a3eb1adffb0e0f4f503241ae5848818ce"></a>

const TMap< FString, [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) > & GetAllStoredPlayerSettings()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets all the players store settings data.



#### Returns
The players stored settings data. 



### `GetAllStoredPlayerRankings` <a id="classURH__PlayerInfo_1aa79ba1c1bcb06d02478ec145999b06a3"></a>

const TMap< FString, [FRHAPI_PlayerRankResponseV2](/unreal-plugins/all/structfrhapi__playerrankresponsev2/#structFRHAPI__PlayerRankResponseV2) > & GetAllStoredPlayerRankings()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets all the players stored ranking data.



#### Returns
The players stored settings data. 



### `GetPlayerInfoSubsystem` <a id="classURH__PlayerInfo_1a0f038ae188d71729b19771f401bee34a"></a>

[URH_PlayerInfoSubsystem](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem) * GetPlayerInfoSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the players Info Subsystem that the Player Info is on.



#### Returns
The Player Info Subsystem. 



### `InitializeForPlayer` <a id="classURH__PlayerInfo_1a38608b8b57751e9db1c1dcfb818d0506"></a>

void InitializeForPlayer(const FGuid & PlayerUuid)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|

#### Description

Initialized the player info from a given Player Unique Id.


#### Parameters

PlayerUuid
: The Unique Id of the player. 



### `GetLastKnownDisplayNameAsync` <a id="classURH__PlayerInfo_1a748ec2c5cc1c2aa3f3a91d906c8ba04b"></a>

void GetLastKnownDisplayNameAsync(const FTimespan & StaleThreshold, bool bForceRefresh, ERHAPI_Platform PreferredPlatformType, const FRH_PlayerInfoGetDisplayNameBlock & Delegate, const class [URH_LocalPlayerSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem) * LocalPlayerSubsystem)

#### Parameters

| Type | Name |
|------|------|
|const FTimespan &|StaleThreshold|
|bool|bForceRefresh|
|ERHAPI_Platform|PreferredPlatformType|
|const FRH_PlayerInfoGetDisplayNameBlock &|Delegate|
|const class [URH_LocalPlayerSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem) *|LocalPlayerSubsystem|

#### Description

Gets the last known display name for the player, will make required API calls to retrieve the information if needed.


#### Parameters

LocalPlayerSubsystem
: The Local Player Subsystem to sanitizing player names. 
StaleThreshold
: If set, will force a re-request of the players information if the last updated time was more than the threshold. 
bForceRefresh
: If true, will force a re-request of the players information. 
PreferredPlatformType
: If set, then that specific platforms display name will be returned if possible, otherwise will use your local platforms, otherwise the first platform found for the player. 
Delegate
: Callback with the players display name. 



### `BLUEPRINT_GetLastKnownDisplayNameAsync` <a id="classURH__PlayerInfo_1a2a5f9d31fb4c1096e06d68569d617257"></a>

void BLUEPRINT_GetLastKnownDisplayNameAsync(const class [URH_LocalPlayerSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem) * LocalPlayerSubsystem, const FTimespan & StaleThreshold, bool bForceRefresh, ERHAPI_Platform PreferredPlatformType, const FRH_PlayerInfoGetDisplayNameDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const class [URH_LocalPlayerSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem) *|LocalPlayerSubsystem|
|const FTimespan &|StaleThreshold|
|bool|bForceRefresh|
|ERHAPI_Platform|PreferredPlatformType|
|const FRH_PlayerInfoGetDisplayNameDynamicDelegate &|Delegate|

#### Description






### `GetLastKnownDisplayName` <a id="classURH__PlayerInfo_1a1013650527f7be680adc07896e49d555"></a>

bool GetLastKnownDisplayName(FString & OutDisplayName, ERHAPI_Platform PreferredPlatformType)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutDisplayName|
|ERHAPI_Platform|PreferredPlatformType|

#### Description

Gets the last known display name for the player.


#### Parameters

PreferredPlatformType
: If set, then that specific platforms display name will be returned if possible, otherwise will use your local platforms, otherwise the first platform found for the player. 
OutDisplayName
: The player's display name. 

#### Returns
If the call successfully found a display name for the player already stored on the client. 



### `BLUEPRINT_GetLastKnownDisplayName` <a id="classURH__PlayerInfo_1a4b096747849fe22e2c7934fb3212bb85"></a>

bool BLUEPRINT_GetLastKnownDisplayName(ERHAPI_Platform PreferredPlatformType, FString & OutDisplayName)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_Platform|PreferredPlatformType|
|FString &|OutDisplayName|

#### Description






### `GetLinkedPlatformInfo` <a id="classURH__PlayerInfo_1ac5a0056e3adcab2d8a5c65ea7d5e43ca"></a>

void GetLinkedPlatformInfo(const FTimespan & StaleThreshold, bool bForceRefresh, const FRH_PlayerInfoGetPlatformsBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FTimespan &|StaleThreshold|
|bool|bForceRefresh|
|const FRH_PlayerInfoGetPlatformsBlock &|Delegate|

#### Description

Gets the players linked platforms via API call.


#### Parameters

StaleThreshold
: If set, will force a re-request of the players information if the last updated time was more than the threshold. 
bForceRefresh
: If true, will force a re-request of the players information. 
Delegate
: Callback with the players linked platforms. 



### `BLUEPRINT_GetLinkedPlatformInfo` <a id="classURH__PlayerInfo_1a17dd835ef46a8418e6cf760eb076d01d"></a>

void BLUEPRINT_GetLinkedPlatformInfo(const FTimespan & StaleThreshold, bool bForceRefresh, const FRH_PlayerInfoGetPlatformsDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FTimespan &|StaleThreshold|
|bool|bForceRefresh|
|const FRH_PlayerInfoGetPlatformsDynamicDelegate &|Delegate|

#### Description






### `GetPlayerSettings` <a id="classURH__PlayerInfo_1aa9d33400032ef41067fbc52f72f092c2"></a>

void GetPlayerSettings(const FString & SettingTypeId, const FTimespan & StaleThreshold, bool bForceRefresh, const FRH_PlayerInfoGetPlayerSettingsBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FString &|SettingTypeId|
|const FTimespan &|StaleThreshold|
|bool|bForceRefresh|
|const FRH_PlayerInfoGetPlayerSettingsBlock &|Delegate|

#### Description

Gets the players settings information for a given type.


#### Parameters

SettingTypeId
: The setting type requested. 
StaleThreshold
: If set, will force a re-request of the players information if the last updated time was more than the threshold. 
bForceRefresh
: If true, will force a re-request of the players information. 
Delegate
: Callback with the players settings for the given type. 



### `BLUEPRINT_GetPlayerSettings` <a id="classURH__PlayerInfo_1a76e2f0a5ded932bc524553a9a2d43976"></a>

void BLUEPRINT_GetPlayerSettings(const FString & SettingTypeId, const FTimespan & StaleThreshold, bool bForceRefresh, const FRH_PlayerInfoGetPlayerSettingsDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FString &|SettingTypeId|
|const FTimespan &|StaleThreshold|
|bool|bForceRefresh|
|const FRH_PlayerInfoGetPlayerSettingsDynamicDelegate &|Delegate|

#### Description






### `SetPlayerSettings` <a id="classURH__PlayerInfo_1a74ee0e82383414759503cc731086ab54"></a>

void SetPlayerSettings(const FString & SettingTypeId, [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) & SettingsData, const FRH_PlayerInfoSetPlayerSettingsBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FString &|SettingTypeId|
|[FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) &|SettingsData|
|const FRH_PlayerInfoSetPlayerSettingsBlock &|Delegate|

#### Description

Sets the players settings information for a given type.


#### Parameters

SettingTypeId
: The setting type to update. 
SettingsData
: Data to be stored into the players settings. 
Delegate
: Callback when the operation is complete with success information. 



### `BLUEPRINT_SetPlayerSettings` <a id="classURH__PlayerInfo_1aebf4859d56d3fc772711fd1c8714d4f0"></a>

void BLUEPRINT_SetPlayerSettings(const FString & SettingTypeId, [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) SettingsData, const FRH_PlayerInfoSetPlayerSettingsDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FString &|SettingTypeId|
|[FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper)|SettingsData|
|const FRH_PlayerInfoSetPlayerSettingsDynamicDelegate &|Delegate|

#### Description






### `GetPlayerRankings` <a id="classURH__PlayerInfo_1a7ff2423c28633ab7f4f62039aba32c8d"></a>

void GetPlayerRankings(const FTimespan & StaleThreshold, bool bForceRefresh, const FRH_PlayerInfoGetPlayerRankingsBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FTimespan &|StaleThreshold|
|bool|bForceRefresh|
|const FRH_PlayerInfoGetPlayerRankingsBlock &|Delegate|

#### Description

Gets the players ranking information for a given type.


#### Parameters

StaleThreshold
: If set, will force a re-request of the players information if the last updated time was more than the threshold. 
bForceRefresh
: If true, will force a re-request of the players information. 
Delegate
: Callback with the players ranking for the given type. 



### `BLUEPRINT_GetPlayerRankings` <a id="classURH__PlayerInfo_1adbfa47a9d0df7dec931ce18fa7b4f8b4"></a>

void BLUEPRINT_GetPlayerRankings(const FTimespan & StaleThreshold, bool bForceRefresh, const FRH_PlayerInfoGetPlayerRankingsDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FTimespan &|StaleThreshold|
|bool|bForceRefresh|
|const FRH_PlayerInfoGetPlayerRankingsDynamicDelegate &|Delegate|

#### Description






### `UpdatePlayerRanking` <a id="classURH__PlayerInfo_1a504494976ef115b48b620bcbfc914d17"></a>

void UpdatePlayerRanking(const FString & RankId, const [FRHAPI_PlayerRankUpdateRequest](/unreal-plugins/all/structfrhapi__playerrankupdaterequest/#structFRHAPI__PlayerRankUpdateRequest) & RankData, const FRH_PlayerInfoGetPlayerRankingsBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FString &|RankId|
|const [FRHAPI_PlayerRankUpdateRequest](/unreal-plugins/all/structfrhapi__playerrankupdaterequest/#structFRHAPI__PlayerRankUpdateRequest) &|RankData|
|const FRH_PlayerInfoGetPlayerRankingsBlock &|Delegate|

#### Description

Sets the players settings information for a given type.


#### Parameters

SettingTypeId
: The setting type to update. 
SettingsData
: Data to be stored into the players settings. 
Delegate
: Callback when the operation is complete with success information. 



### `BLUEPRINT_UpdatePlayerRanking` <a id="classURH__PlayerInfo_1a60648275bd880b33cfb78b403e0832ac"></a>

void BLUEPRINT_UpdatePlayerRanking(const FString & RankId, const [FRHAPI_PlayerRankUpdateRequest](/unreal-plugins/all/structfrhapi__playerrankupdaterequest/#structFRHAPI__PlayerRankUpdateRequest) & RankData, const FRH_PlayerInfoGetPlayerRankingsDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FString &|RankId|
|const [FRHAPI_PlayerRankUpdateRequest](/unreal-plugins/all/structfrhapi__playerrankupdaterequest/#structFRHAPI__PlayerRankUpdateRequest) &|RankData|
|const FRH_PlayerInfoGetPlayerRankingsDynamicDelegate &|Delegate|

#### Description






### `GetAuthContext` <a id="classURH__PlayerInfo_1a38aa7a072a97be36bc623a9cda702cdf"></a>

FAuthContextPtr GetAuthContext()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the local Auth Context for making API calls.



#### Returns
Local auth context for the given player or instance 



### `GetLoggedInPlatform` <a id="classURH__PlayerInfo_1ad8fc7aea229a59d52a1c9e3491b8d168"></a>

ERHAPI_Platform GetLoggedInPlatform()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the local users logged in platform type.



#### Returns
The Platform type of the local user 




## Protected Functions



### `OnGetPlayerLinkedPlatformsForLastKnownDisplayNameResponse` <a id="classURH__PlayerInfo_1a49e19ae4082f15e22b2062c1cb78deb0"></a>

void OnGetPlayerLinkedPlatformsForLastKnownDisplayNameResponse(bool bSuccess, const TArray< [URH_PlayerPlatformInfo](/unreal-plugins/all/classurh__playerplatforminfo/#classURH__PlayerPlatformInfo) * > & Platforms, ERHAPI_Platform PreferredPlatformType, const FRH_PlayerInfoGetDisplayNameBlock Delegate, const class [URH_LocalPlayerSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem) * LocalPlayerSubsystem)

#### Parameters

| Type | Name |
|------|------|
|bool|bSuccess|
|const TArray< [URH_PlayerPlatformInfo](/unreal-plugins/all/classurh__playerplatforminfo/#classURH__PlayerPlatformInfo) * > &|Platforms|
|ERHAPI_Platform|PreferredPlatformType|
|const FRH_PlayerInfoGetDisplayNameBlock|Delegate|
|const class [URH_LocalPlayerSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem) *|LocalPlayerSubsystem|

#### Description

Handles the response to a Get Linked Platforms For Last Known Display Name call.


#### Parameters

bSuccess
: If the call was successful. 
Platforms
: List of platforms the player is linked to. 
PreferredPlatformType
: The preferred platform type to use for the player. 
Delegate
: Delegate passed in for original call to respond to when call completes. 
LocalPlayerSubsystem
: The local player subsystem that made the original call. 



### `OnDisplayNameSanitized` <a id="classURH__PlayerInfo_1afe5a34e86382c3f78767f2d72e3819fd"></a>

void OnDisplayNameSanitized(bool bSuccess, const FString & SanitizedMessage, ERHAPI_Platform PreferredPlatformType, const FRH_PlayerInfoGetDisplayNameBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|bool|bSuccess|
|const FString &|SanitizedMessage|
|ERHAPI_Platform|PreferredPlatformType|
|const FRH_PlayerInfoGetDisplayNameBlock|Delegate|

#### Description

Handles the response to sanitizing the players display name.


#### Parameters

bSuccess
: If the call was successful. 
SanitizedMessage
: The sanitized display name. 
PreferredPlatformType
: The preferred platform type to use for the player. 
Delegate
: Callback Delegate to return the name. 



### `OnGetPlayerLinkedPlatformsResponse` <a id="classURH__PlayerInfo_1ada74501b2e422f1fcf8f76825d74cc58"></a>

void OnGetPlayerLinkedPlatformsResponse(const GetPlatforms::Response & Response, const FRH_PlayerInfoGetPlatformsBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|const GetPlatforms::Response &|Response|
|const FRH_PlayerInfoGetPlatformsBlock|Delegate|

#### Description

Handles the response to a Get Linked Platforms call.


#### Parameters

Resp
: Response given for the call 
Delegate
: Delegate passed in for original call to respond to when call completes. 



### `OnGetPlayerSettingsResponse` <a id="classURH__PlayerInfo_1a115f584e7b7b210193fd9e302abbd3ed"></a>

void OnGetPlayerSettingsResponse(const GetSettings::Response & Response, const FRH_PlayerInfoGetPlayerSettingsBlock Delegate, const FString SettingTypeId)

#### Parameters

| Type | Name |
|------|------|
|const GetSettings::Response &|Response|
|const FRH_PlayerInfoGetPlayerSettingsBlock|Delegate|
|const FString|SettingTypeId|

#### Description

Handles the response to a Get Player Settings call.


#### Parameters

Resp
: Response given for the call 
Delegate
: Delegate passed in for original call to respond to when call completes. 
SettinyTypeId
: The type of settings that were requested. 



### `OnSetPlayerSettingsResponse` <a id="classURH__PlayerInfo_1a6f59dae05d5371b867091b180280f091"></a>

void OnSetPlayerSettingsResponse(const SetSettings::Response & Response, const FRH_PlayerInfoSetPlayerSettingsBlock Delegate, const FString SettingTypeId, const FString SettingKey, [FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper) SettingsData)

#### Parameters

| Type | Name |
|------|------|
|const SetSettings::Response &|Response|
|const FRH_PlayerInfoSetPlayerSettingsBlock|Delegate|
|const FString|SettingTypeId|
|const FString|SettingKey|
|[FRH_PlayerSettingsDataWrapper](/unreal-plugins/all/structfrh__playersettingsdatawrapper/#structFRH__PlayerSettingsDataWrapper)|SettingsData|

#### Description

Handles the response to a Set Player Settings call.


#### Parameters

Resp
: Response given for the call 
Delegate
: Delegate passed in for original call to respond to when call completes. 
SettinyTypeId
: The type of settings that being updated requested. 
SettingKey
: The key of the setting that was updated. 
SettingsData
: The data of the setting that was updated. 



### `OnGetPlayerRankingsResponse` <a id="classURH__PlayerInfo_1a53c355b2f85273d37008d685c3cc113c"></a>

void OnGetPlayerRankingsResponse(const GetRankings::Response & Response, const FRH_PlayerInfoGetPlayerRankingsBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|const GetRankings::Response &|Response|
|const FRH_PlayerInfoGetPlayerRankingsBlock|Delegate|

#### Description

Handles the response to a Get Player Rankings call.


#### Parameters

Resp
: Response given for the call 
Delegate
: Delegate passed in for original call to respond to when call completes. 



### `OnUpdatePlayerRankingResponse` <a id="classURH__PlayerInfo_1a214672d0d5001ec24098b5414b0fc35d"></a>

void OnUpdatePlayerRankingResponse(const UpdateRanking::Response & Response, const FRH_PlayerInfoGetPlayerRankingsBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|const UpdateRanking::Response &|Response|
|const FRH_PlayerInfoGetPlayerRankingsBlock|Delegate|

#### Description

Handles the response to a Update Player Ranking call.


#### Parameters

Resp
: Response given for the call 
Delegate
: Delegate passed in for original call to respond to when call completes. 



### `OnPresenceUpdated` <a id="classURH__PlayerInfo_1a838753ffcca41ad5396dfd55a3daaa01"></a>

void OnPresenceUpdated()

#### Parameters

| Type | Name |
|------|------|

#### Description

Helper to broadcast results from player presences being updated.




### `OnSessionsUpdated` <a id="classURH__PlayerInfo_1a69eab03e546d94bfa4ff9eb5bba8c550"></a>

void OnSessionsUpdated()

#### Parameters

| Type | Name |
|------|------|

#### Description

Helper to broadcast results from player sessions list being updated.





