---
title: URH_IntegrationSettings Class
---Inherits from UDeveloperSettings

Main settings for the Integration.

## Summary
| Kind | View | Description |
|------|------|-------------|
|[FRH_EnvironmentConfiguration](/unreal-plugins/all/structfrh__environmentconfiguration/#structFRH__EnvironmentConfiguration)|[DefaultEnvironmentConfiguration](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a90c5352a4e6761eb17d6368c839f2b72)|RallyHere default environment configuration.|
|TArray< [FRH_EnvironmentConfiguration](/unreal-plugins/all/structfrh__environmentconfiguration/#structFRH__EnvironmentConfiguration) >|[EnvironmentConfigurations](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a546e792d91e626fec5a89af26b48c4d0)|Per-Environment configuration overrides. These environments are alias names used for a BaseURL, and by default will automatically be looked up based on the OnlineEnvironment from the engine (Development, Certification, etc), but can be overridden via commandline (see EnvironmentCommandLineKeys)|
|TArray< FString >|[BaseURLCommandLineKeys](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a69a2e01e56d3c5cf9378cadf95bf8eeb)|Keys to check for on the command line for an override to the default BaseURL.|
|TArray< FString >|[EnvironmentCommandLineKeys](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a6b6526202cee20d58a499042744656da)|Keys to check for on the command line for an override to the default Environment when using EnvironmentConfigurations.|
|TArray< FString >|[DefaultOSSCommandLineKeys](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a93e491f7bab4fed912f9281cd1bac0e7)|Keys to check for on the command line for an override to the default OSS.|
|TArray< FString >|[ClientIdCommandLineKeys](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1afcc89f50b0d312cc200afb153b43a29a)|Keys to check for on the command line for an override to the default ClientId.|
|TArray< FString >|[ClientSecretCommandLineKeys](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1af66963c6acda2ab28c6cf959a33ca65e)|Keys to check for on the command line for an override to the default ClientSecret.|
|FName|[EnvironmentOSSName](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a6dcea31e94599c761b3616e62f0b65ab)|Online Subsystem to use for selecting the base URL environment. If not provided, will use the default OSS.|
|bool|[bAutoStartSessionsAfterJoin](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a43e468e0d80e224c6fc7479940e0bcab)|Whether to automatically start platform sessions after joining them.|
|bool|[bAutoJoinPlatformSessionsAfterUserChange](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a999a80d02b5974b5be5be331ac13682a)|Whether to automatically join platform sessions after a user change when invites were received while logged out.|
|int32|[MaxSimultaneousRequests](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a250923c3c001c712d54691a9efa5f98b)|Sets the maximum number of Http Requests that can be made simultaneously. 0 = No Limit.|
|FSoftClassPath|[LocalPlayerLoginSubsystemClass](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1aea8c51bec96a3a50100085354f8fe816)|Extensible LocalPlayerLoginSubsystem class path.|
|FSoftClassPath|[AdSubsystemClass](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a134dbaebd973ab90d1bdb12027285009)|Extensible AdSubsystem class path.|
|FSoftClassPath|[FriendSubsystemClass](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1af67c19ac851c03c6e667a609182e1ac9)|Extensible FriendSubsystem class path.|
|FSoftClassPath|[LocalPlayerSessionSubsystemClass](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a6310101e25a7cff30adda4456bb02b55)|Extensible LocalPlayerSessionSubsystem class path.|
|FSoftClassPath|[SessionPlatformSyncerClass](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a5e2e8dd0ec6edb9e9fbfb0d404441795)|Extensible PlayerSessionSyncer class path.|
|FSoftClassPath|[LocalPlayerPresenceSubsystemClass](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1aed317ed3d7b4e6af1e69e1db42215d01)|Extensible LocalPlayerPresenceSubsystem class path.|
|FSoftClassPath|[PurgeSubsystemClass](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a1b99ec094d05b2b2daa8e83c2917e0e4)|Extensible PurgeSubsystem class path.|
|FSoftClassPath|[EntitlementSubsystemClass](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a4c054d97c0884323627b2fdad7062da9)|Extensible EntitlementSubsystem class path.|
|FSoftClassPath|[GameInstanceSessionInfoSubsystemClass](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a2a17243cca23933136ae9925cee7adc9)|Extensible GameInstanceSessionInfoSubsystem class path.|
|FSoftClassPath|[GameInstanceServerBootstrappermClass](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a6153060e13b8e5fc5f03f4beb6233392)|Extensible GameInstanceServerBootstrapperm class path.|
|FSoftClassPath|[GameInstanceClientBootstrapperClass](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a1fab4344e7cae47f3dad36da33aa0d98)|Extensible GameInstanceClientBootstrapper class path.|
|FSoftClassPath|[PlayerInfoSubsystemClass](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1ac0a71beae9a83e6316787d8647d43f1a)|Extensible PlayerInfoSubsystem class path.|
|FSoftClassPath|[PlayerInfoClass](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a6d45dfa55caf64da1b6b5beeaf559270)|Extensible PlayerInfo class path.|
|FSoftClassPath|[CatalogSubsystemClass](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a0e60706b4b45ea9aed327c74e92df3a5)|Extensible CatalogSubsystem class path.|
|FSoftClassPath|[ConfigSubsystemClass](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a22f747a1fe7afba820828fb46d2a8780)|Extensible ConfigSubsystem class path.|
|FSoftClassPath|[SettingsSubsystemClass](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a6115ed0ac4a35c8f131dc5a0fd56900f)|Extensible ConfigSubsystem class path.|
|FSoftClassPath|[SessionBrowserCacheClass](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1af5ecb3103ab065d38eed4634e6916817)|Extensible SessionBrowserCache class path.|
|FSoftClassPath|[MatchmakingBrowserCacheClass](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a035a0b0d29e2ed12a2663446c60d811c)|Extensible MatchmakingBrowserCache class path.|
|bool|[bLocalPlayerSubsystemSandboxing](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a5826903f6e88cefabe7d9c2ede15e9af)|Flag to determine if the local player subsystem should use its own subsystems instead of relying on GameInstanceSubsystem shared caches.|
|int32|[BeginNewAdSessionPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1afc878742df435a86affa3c28c65da19a)|Sets the request priority of Begin New Session calls, lower number is higher priority.|
|int32|[FindAdOppertunitiesPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a9e9a3b6b65a8ae71a7d5f7e985066f36)|Sets the request priority of Find Oppertunities calls, lower number is higher priority.|
|int32|[UpdateAdOppertunitiesPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1ab6514b00e3e6df87716cf78829c89e58)|Sets the request priority of Update Oppertunities calls, lower number is higher priority.|
|int32|[AuthLogoutPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1aa8a89a53c4e538c0e7f424d5a28c4a2a)|Sets the request priority of Logouts calls, lower number is higher priority.|
|int32|[AuthLoginPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1aba8b87a3871ea3ad301106a3377fb6b8)|Sets the request priority of Login calls, lower number is higher priority.|
|int32|[GetCatalogAllPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1ac5304b5175309e77721ee07577179516)|Sets the request priority of Get Catalog All calls, lower number is higher priority.|
|int32|[GetCatalogXpAllPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1afbd579a4e0b16b0facf310ba0a0d2ab3)|Sets the request priority of Get Catalog Xp All calls, lower number is higher priority.|
|int32|[GetCatalogItemPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a74c72d3fa3881c2f059fd06760eff569)|Sets the request priority of Get Catalog Item calls, lower number is higher priority.|
|int32|[GetCatalogInventoryBucketUseRuleSetsAllPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a0ad65a15b3ca3c2e0a558af557728978)|Sets the request priority of Get Catalog Inventory Bucket Use Rulesets All calls, lower number is higher priority.|
|int32|[GetCatalogPricePointsAllPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1af39c9174f441784d5210c67af3065f95)|Sets the request priority of Get Catalog Price Points All calls, lower number is higher priority.|
|int32|[GetCatalogTimeFramesAllPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a360927cc23f433d0d9ac088a8b92ec43)|Sets the request priority of Get Catalog Time Frame All calls, lower number is higher priority.|
|int32|[GetCatalogVendorPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a4bb561f179cd44b43b77f972b84674a9)|Sets the request priority of Get Catalog Vendor calls, lower number is higher priority.|
|int32|[GetCatalogVendorsAllPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a553832ec54c28a627a521a8586900dc6)|Sets the request priority of Get Catalog Vendor All calls, lower number is higher priority.|
|int32|[FetchAppSettingsPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a5b6cdb5b53fb4727535f234ac5293ebd)|Sets the request priority of Fetch App Settings calls, lower number is higher priority.|
|int32|[ProcessPlatformEntitlementsPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1adb8db52d23e20d65889800005f7fb65c)|Sets the request priority of Process Platform Entitlements calls, lower number is higher priority.|
|int32|[RetrievePlatformEntitlementsPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a2b78270f3e088baa257d05c12dfaab83)|Sets the request priority of Retrieve Platform Entitlements calls, lower number is higher priority.|
|int32|[FetchFriendListPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1aa04f014b56725364b833d681b307b32c)|Sets the request priority of Fetch Friend List calls, lower number is higher priority.|
|int32|[FetchFriendPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a743b7a579348813ef7231ea2d67e038c)|Sets the request priority of Fetch Friend calls, lower number is higher priority.|
|int32|[AddFriendPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a82b8352b5c0526593d079be4ff561307)|Sets the request priority of Add Friend calls, lower number is higher priority.|
|int32|[RemoveFriendPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a0930cf2032ed31eb40e27b3a7a905d57)|Sets the request priority of Remove Friend calls, lower number is higher priority.|
|int32|[AddFriendNotesPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1af017cda61c8266057e659e4e40fb4a7f)|Sets the request priority of Add Friend Notes calls, lower number is higher priority.|
|int32|[DeleteFriendNotesPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a6fdecd92611953981a1cf75ee63a2c56)|Sets the request priority of Delete Friend Notes calls, lower number is higher priority.|
|int32|[FetchBlockedListPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a0811cf621f6195bef8b68d962d24e4a2)|Sets the request priority of Fetch Blocked List calls, lower number is higher priority.|
|int32|[FetchBlockedPlayerPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1ae37c306e4c6d4d0445f0a4568f7019f4)|Sets the request priority of Fetch Blocked Player calls, lower number is higher priority.|
|int32|[BlockUnblockPlayerPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a27e8d4c4ed86d705228e5d9891033459)|Sets the request priority of Block/Unblock Player calls, lower number is higher priority.|
|int32|[InventoryCreateSessionPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1acca6f7ccd6c074f64a3355430b15f583)|Sets the request priority of Create Inventory Session calls, lower number is higher priority.|
|int32|[InventoryGetSessionPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a79a291b54a550f58fd855662cf939d39)|Sets the request priority of Get Inventory Session calls, lower number is higher priority.|
|int32|[InventoryGetPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a3d819bda1fefdcd646f39186009a08dc)|Sets the request priority of Get Inventory calls, lower number is higher priority.|
|int32|[InventoryCreatePriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1aaef9534e9968f0b89933fb2fa693b928)|Sets the request priority of Create Inventory calls, lower number is higher priority.|
|int32|[InventoryUpdatePriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1ae79f97bf4ff6de4c0d75e41358f59ad7)|Sets the request priority of Update Inventory calls, lower number is higher priority.|
|int32|[InventoryCreateOrderPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a95e05009c2789ca27a98205d5fb127f2)|Sets the request priority of Create Inventory Order calls, lower number is higher priority.|
|int32|[InventoryGetOrdersPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1addf34f3287bd3312846a5978d2703b9f)|Sets the request priority of Get Inventory Orders calls, lower number is higher priority.|
|int32|[NotificationPollSelfPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a132a698085ea97992ec3bb57e1eae3e1)|Sets the request priority of Polling Notifications for Self calls, lower number is higher priority.|
|int32|[NotificationPollOtherPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a8fb41ebf25098232d3ee26134da6b5a3)|Sets the request priority of Polling Notifications for Others calls, lower number is higher priority.|
|int32|[NotificationCreatePriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a14606a57f206abd1a317be741f4b6ccd)|Sets the request priority of Create Notifications calls, lower number is higher priority.|
|int32|[PresenceUpdatePriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a90564c0a9a445a9993766545c0888329)|Sets the request priority of Updating Presence calls, lower number is higher priority.|
|int32|[PresenceGetSelfPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1af38e4ac7b3d269fc66636c05e1a3c633)|Sets the request priority of Get Self Presence calls, lower number is higher priority.|
|int32|[PresenceGetOtherPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a83ccef552bfe76b46cb79a1afc87d57a)|Sets the request priority of Get Other Presence calls, lower number is higher priority.|
|int32|[PresenceGetSettingsPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a1d2689266c6b0924e316055789d73a3d)|Sets the request priority of Get Presence Settings calls, lower number is higher priority.|
|int32|[PurgeQueuePriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a9aa7b532b8d9aa1767f9e177a8c2f73a)|Sets the request priority of Queue/Dequeue for Purge calls, lower number is higher priority.|
|int32|[PurgeGetStatusPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a078df1fcff1db371904259f77a44b32e)|Sets the request priority of Get Purge Status calls, lower number is higher priority.|
|int32|[GetAllQueueInfoPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1aad14de47a305aab4368d7a38b80f766e)|Sets the request priority of Get Queue Info calls, lower number is higher priority.|
|int32|[GetMatchmakingTemplatePriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1aa73827ffcdabb3149c07d6ad14cc7d98)|Sets the request priority of Get Matchmaking Template calls, lower number is higher priority.|
|int32|[GetMapGameInfoPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a8ac2b60ca262eb1fbf75a5ffd309d39d)|Sets the request priority of Get Map Game Info calls, lower number is higher priority.|
|int32|[RankingGetPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a9991ff7aba2e69e137d1665e40a45bd7)|Sets the request priority of Get Rank calls, lower number is higher priority.|
|int32|[RankingUpdatePriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1ab2b4525c715fdce6b9ee3b8f5ab98439)|Sets the request priority of Update Rank calls, lower number is higher priority.|
|int32|[SessionPollPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1aa1c2aa3d6f602b685b21eaefc0ddc962)|Sets the request priority of Session Polling calls, lower number is higher priority.|
|int32|[SessionJoinPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1aa7578d63de36b65bf984e6811a05c856)|Sets the request priority of Session Joining calls, lower number is higher priority.|
|int32|[SessionLeavePriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a9defab236e36fba1c40113449827b6ae)|Sets the request priority of Session Leave calls, lower number is higher priority.|
|int32|[SessionInvitePriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a67c03b5ad16327dfaa897369144f5916)|Sets the request priority of Session Invite calls, lower number is higher priority.|
|int32|[SessionKickPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a300315aecd41cf1116a62763d22e4d0d)|Sets the request priority of Session Kick calls, lower number is higher priority.|
|int32|[SessionLeaderChangePriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a704d79c0a0689673f6cc7e8547b0b399)|Sets the request priority of Session Leader Change calls, lower number is higher priority.|
|int32|[SessionChangeTeamsPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1ae4e4de1ecf3af71039d248dcc4c45b0c)|Sets the request priority of Session Change Teams calls, lower number is higher priority.|
|int32|[SessionLeaveQueuePriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1ad5ae84d1c1570a2f385ec24e57108fd4)|Sets the request priority of Session Leave Queue calls, lower number is higher priority.|
|int32|[SessionRequestInstancePriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1abc945d76430a5ab6f692bf0a5e999180)|Sets the request priority of Session Request Instance calls, lower number is higher priority.|
|int32|[SessionEndInstancePriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a1a0840b1eca26c8342fa9cbee7e4b80b)|Sets the request priority of Session End Instance calls, lower number is higher priority.|
|int32|[SessionStartMatchPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1aec835451bde71a190fc1e695aef4ff7f)|Sets the request priority of Session Start Match calls, lower number is higher priority.|
|int32|[SessionEndMatchPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1aaf32bfec46ea7d08fcf2c29ed615aa65)|Sets the request priority of Session End Match calls, lower number is higher priority.|
|int32|[SessionUpdateSessionInfoPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a9c7c6d6cfb6af07f0fe3f81aa8a69c34)|Sets the request priority of Update Session Info calls, lower number is higher priority.|
|int32|[SessionUpdateInstanceInfoPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a0865134ce8ddd336130583187cd67aa4)|Sets the request priority of Update Instance Info calls, lower number is higher priority.|
|int32|[SessionUpdateBrowserInfoPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1aa5e0c76dbae5e34b456bcaaafa68cf94)|Sets the request priority of Update Browser Info calls, lower number is higher priority.|
|int32|[SessionDeleteBrowserInfoPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a005338696286a0b743bfbdb480e12e44)|Sets the request priority of Delete Browser Info calls, lower number is higher priority.|
|int32|[SessionInstanceMarkFubarPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1adb06a4293164df68adea68c00521e5fb)|Sets the request priority of Marking an Instane Fubar calls, lower number is higher priority.|
|int32|[SessionInstanceHealthUpdatePriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a48b7cedb5478f436eb426108906f2d6a)|Sets the request priority of Instance Health update calls, lower number is higher priority.|
|int32|[SessionBackfillUpdatePriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1ac2b018d245179295e531c7e170db7663)|Sets the request priority of Backfill update calls, lower number is higher priority.|
|int32|[SessionUpdateWithPlatformSessionPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1ae52bf61cfe6e937cc6a563133a209991)|Sets the request priority of Session Update With Platform Session calls, lower number is higher priority.|
|int32|[SessionGetTemplatePriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a40090726415cdd4ed601d26c4a2960d9)|Sets the request priority of Session Get Template calls, lower number is higher priority.|
|int32|[SessionGetByAllocationIdPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a0e8868c0d121441924f925de96d66120)|Sets the request priority of Session By Allocation Id calls, lower number is higher priority.|
|int32|[SessionGetBySessionIdPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a252127302ea79fe762255b0353809747)|Sets the request priority of Session By Session Id calls, lower number is higher priority.|
|int32|[SessionGetByTypePriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1af20dfabda6e113f75816401bdaca2614)|Sets the request priority of Session By Type calls, lower number is higher priority.|
|int32|[SessionsGetOtherPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a0504cbc9cd9338b377189d62daa790b9)|Sets the request priority of Get Other Sessions calls, lower number is higher priority.|
|int32|[SettingsGetPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1ab3de492d46aeb771fc964cc02a00f048)|Sets the request priority of Get Settings calls, lower number is higher priority.|
|int32|[SettingsGetTypesPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a96483b01899977de1c9c929e83ef0c71)|Sets the request priority of Get Settings Types calls, lower number is higher priority.|
|int32|[SettingsUpdatePriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1aab7ca97767260ad27f6ab2ed2f991f35)|Sets the request priority of Update Settings calls, lower number is higher priority.|
|int32|[GetSiteSettingsPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a05394419f792bfa361b0e1b2adccf198)|Sets the request priority of Get Site Settings calls, lower number is higher priority.|
|int32|[UsersLookupPlayerPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a17589c62d53386508f41321e98bbfeeb)|Sets the request priority of Lookup Users calls, lower number is higher priority.|
|int32|[UsersGetLinkedPlatformsPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a99b0ffa18f2f78923fdd46d4499588e1)|Sets the request priority of Get Linked Platforms calls, lower number is higher priority.|
|int32|[EventsReceiveEventPriority](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a47f81afe37f5fd5d8b49a8c5d5101e08)|Sets the request priority of ReceiveEvent, which is the GETS endpoint, lower number is higher priority.|
|const [FRH_EnvironmentConfiguration](/unreal-plugins/all/structfrh__environmentconfiguration/#structFRH__EnvironmentConfiguration) *|[GetEnvironmentConfiguration](/unreal-plugins/all/classurh__integrationsettings/#classURH__IntegrationSettings_1a833c95a5c96e642faa2a3038d9c8f151)(const FString & EnvironmentId)|Helper to get the configuration for a given environment by EnvironmentId.|
## Public Attributes



### `DefaultEnvironmentConfiguration` <a id="classURH__IntegrationSettings_1a90c5352a4e6761eb17d6368c839f2b72"></a>

`FRH_EnvironmentConfiguration URH_IntegrationSettings::DefaultEnvironmentConfiguration`

RallyHere default environment configuration.




### `EnvironmentConfigurations` <a id="classURH__IntegrationSettings_1a546e792d91e626fec5a89af26b48c4d0"></a>

`TArray<FRH_EnvironmentConfiguration> URH_IntegrationSettings::EnvironmentConfigurations`

Per-Environment configuration overrides. These environments are alias names used for a BaseURL, and by default will automatically be looked up based on the OnlineEnvironment from the engine (Development, Certification, etc), but can be overridden via commandline (see EnvironmentCommandLineKeys)




### `BaseURLCommandLineKeys` <a id="classURH__IntegrationSettings_1a69a2e01e56d3c5cf9378cadf95bf8eeb"></a>

`TArray<FString> URH_IntegrationSettings::BaseURLCommandLineKeys`

Keys to check for on the command line for an override to the default BaseURL.




### `EnvironmentCommandLineKeys` <a id="classURH__IntegrationSettings_1a6b6526202cee20d58a499042744656da"></a>

`TArray<FString> URH_IntegrationSettings::EnvironmentCommandLineKeys`

Keys to check for on the command line for an override to the default Environment when using EnvironmentConfigurations.




### `DefaultOSSCommandLineKeys` <a id="classURH__IntegrationSettings_1a93e491f7bab4fed912f9281cd1bac0e7"></a>

`TArray<FString> URH_IntegrationSettings::DefaultOSSCommandLineKeys`

Keys to check for on the command line for an override to the default OSS.




### `ClientIdCommandLineKeys` <a id="classURH__IntegrationSettings_1afcc89f50b0d312cc200afb153b43a29a"></a>

`TArray<FString> URH_IntegrationSettings::ClientIdCommandLineKeys`

Keys to check for on the command line for an override to the default ClientId.




### `ClientSecretCommandLineKeys` <a id="classURH__IntegrationSettings_1af66963c6acda2ab28c6cf959a33ca65e"></a>

`TArray<FString> URH_IntegrationSettings::ClientSecretCommandLineKeys`

Keys to check for on the command line for an override to the default ClientSecret.




### `EnvironmentOSSName` <a id="classURH__IntegrationSettings_1a6dcea31e94599c761b3616e62f0b65ab"></a>

`FName URH_IntegrationSettings::EnvironmentOSSName`

Online Subsystem to use for selecting the base URL environment. If not provided, will use the default OSS.




### `bAutoStartSessionsAfterJoin` <a id="classURH__IntegrationSettings_1a43e468e0d80e224c6fc7479940e0bcab"></a>

`bool URH_IntegrationSettings::bAutoStartSessionsAfterJoin`

Whether to automatically start platform sessions after joining them.




### `bAutoJoinPlatformSessionsAfterUserChange` <a id="classURH__IntegrationSettings_1a999a80d02b5974b5be5be331ac13682a"></a>

`bool URH_IntegrationSettings::bAutoJoinPlatformSessionsAfterUserChange`

Whether to automatically join platform sessions after a user change when invites were received while logged out.




### `MaxSimultaneousRequests` <a id="classURH__IntegrationSettings_1a250923c3c001c712d54691a9efa5f98b"></a>

`int32 URH_IntegrationSettings::MaxSimultaneousRequests`

Sets the maximum number of Http Requests that can be made simultaneously. 0 = No Limit.




### `LocalPlayerLoginSubsystemClass` <a id="classURH__IntegrationSettings_1aea8c51bec96a3a50100085354f8fe816"></a>

`FSoftClassPath URH_IntegrationSettings::LocalPlayerLoginSubsystemClass`

Extensible LocalPlayerLoginSubsystem class path.




### `AdSubsystemClass` <a id="classURH__IntegrationSettings_1a134dbaebd973ab90d1bdb12027285009"></a>

`FSoftClassPath URH_IntegrationSettings::AdSubsystemClass`

Extensible AdSubsystem class path.




### `FriendSubsystemClass` <a id="classURH__IntegrationSettings_1af67c19ac851c03c6e667a609182e1ac9"></a>

`FSoftClassPath URH_IntegrationSettings::FriendSubsystemClass`

Extensible FriendSubsystem class path.




### `LocalPlayerSessionSubsystemClass` <a id="classURH__IntegrationSettings_1a6310101e25a7cff30adda4456bb02b55"></a>

`FSoftClassPath URH_IntegrationSettings::LocalPlayerSessionSubsystemClass`

Extensible LocalPlayerSessionSubsystem class path.




### `SessionPlatformSyncerClass` <a id="classURH__IntegrationSettings_1a5e2e8dd0ec6edb9e9fbfb0d404441795"></a>

`FSoftClassPath URH_IntegrationSettings::SessionPlatformSyncerClass`

Extensible PlayerSessionSyncer class path.




### `LocalPlayerPresenceSubsystemClass` <a id="classURH__IntegrationSettings_1aed317ed3d7b4e6af1e69e1db42215d01"></a>

`FSoftClassPath URH_IntegrationSettings::LocalPlayerPresenceSubsystemClass`

Extensible LocalPlayerPresenceSubsystem class path.




### `PurgeSubsystemClass` <a id="classURH__IntegrationSettings_1a1b99ec094d05b2b2daa8e83c2917e0e4"></a>

`FSoftClassPath URH_IntegrationSettings::PurgeSubsystemClass`

Extensible PurgeSubsystem class path.




### `EntitlementSubsystemClass` <a id="classURH__IntegrationSettings_1a4c054d97c0884323627b2fdad7062da9"></a>

`FSoftClassPath URH_IntegrationSettings::EntitlementSubsystemClass`

Extensible EntitlementSubsystem class path.




### `GameInstanceSessionInfoSubsystemClass` <a id="classURH__IntegrationSettings_1a2a17243cca23933136ae9925cee7adc9"></a>

`FSoftClassPath URH_IntegrationSettings::GameInstanceSessionInfoSubsystemClass`

Extensible GameInstanceSessionInfoSubsystem class path.




### `GameInstanceServerBootstrappermClass` <a id="classURH__IntegrationSettings_1a6153060e13b8e5fc5f03f4beb6233392"></a>

`FSoftClassPath URH_IntegrationSettings::GameInstanceServerBootstrappermClass`

Extensible GameInstanceServerBootstrapperm class path.




### `GameInstanceClientBootstrapperClass` <a id="classURH__IntegrationSettings_1a1fab4344e7cae47f3dad36da33aa0d98"></a>

`FSoftClassPath URH_IntegrationSettings::GameInstanceClientBootstrapperClass`

Extensible GameInstanceClientBootstrapper class path.




### `PlayerInfoSubsystemClass` <a id="classURH__IntegrationSettings_1ac0a71beae9a83e6316787d8647d43f1a"></a>

`FSoftClassPath URH_IntegrationSettings::PlayerInfoSubsystemClass`

Extensible PlayerInfoSubsystem class path.




### `PlayerInfoClass` <a id="classURH__IntegrationSettings_1a6d45dfa55caf64da1b6b5beeaf559270"></a>

`FSoftClassPath URH_IntegrationSettings::PlayerInfoClass`

Extensible PlayerInfo class path.




### `CatalogSubsystemClass` <a id="classURH__IntegrationSettings_1a0e60706b4b45ea9aed327c74e92df3a5"></a>

`FSoftClassPath URH_IntegrationSettings::CatalogSubsystemClass`

Extensible CatalogSubsystem class path.




### `ConfigSubsystemClass` <a id="classURH__IntegrationSettings_1a22f747a1fe7afba820828fb46d2a8780"></a>

`FSoftClassPath URH_IntegrationSettings::ConfigSubsystemClass`

Extensible ConfigSubsystem class path.




### `SettingsSubsystemClass` <a id="classURH__IntegrationSettings_1a6115ed0ac4a35c8f131dc5a0fd56900f"></a>

`FSoftClassPath URH_IntegrationSettings::SettingsSubsystemClass`

Extensible ConfigSubsystem class path.




### `SessionBrowserCacheClass` <a id="classURH__IntegrationSettings_1af5ecb3103ab065d38eed4634e6916817"></a>

`FSoftClassPath URH_IntegrationSettings::SessionBrowserCacheClass`

Extensible SessionBrowserCache class path.




### `MatchmakingBrowserCacheClass` <a id="classURH__IntegrationSettings_1a035a0b0d29e2ed12a2663446c60d811c"></a>

`FSoftClassPath URH_IntegrationSettings::MatchmakingBrowserCacheClass`

Extensible MatchmakingBrowserCache class path.




### `bLocalPlayerSubsystemSandboxing` <a id="classURH__IntegrationSettings_1a5826903f6e88cefabe7d9c2ede15e9af"></a>

`bool URH_IntegrationSettings::bLocalPlayerSubsystemSandboxing`

Flag to determine if the local player subsystem should use its own subsystems instead of relying on GameInstanceSubsystem shared caches.




### `BeginNewAdSessionPriority` <a id="classURH__IntegrationSettings_1afc878742df435a86affa3c28c65da19a"></a>

`int32 URH_IntegrationSettings::BeginNewAdSessionPriority`

Sets the request priority of Begin New Session calls, lower number is higher priority.




### `FindAdOppertunitiesPriority` <a id="classURH__IntegrationSettings_1a9e9a3b6b65a8ae71a7d5f7e985066f36"></a>

`int32 URH_IntegrationSettings::FindAdOppertunitiesPriority`

Sets the request priority of Find Oppertunities calls, lower number is higher priority.




### `UpdateAdOppertunitiesPriority` <a id="classURH__IntegrationSettings_1ab6514b00e3e6df87716cf78829c89e58"></a>

`int32 URH_IntegrationSettings::UpdateAdOppertunitiesPriority`

Sets the request priority of Update Oppertunities calls, lower number is higher priority.




### `AuthLogoutPriority` <a id="classURH__IntegrationSettings_1aa8a89a53c4e538c0e7f424d5a28c4a2a"></a>

`int32 URH_IntegrationSettings::AuthLogoutPriority`

Sets the request priority of Logouts calls, lower number is higher priority.




### `AuthLoginPriority` <a id="classURH__IntegrationSettings_1aba8b87a3871ea3ad301106a3377fb6b8"></a>

`int32 URH_IntegrationSettings::AuthLoginPriority`

Sets the request priority of Login calls, lower number is higher priority.




### `GetCatalogAllPriority` <a id="classURH__IntegrationSettings_1ac5304b5175309e77721ee07577179516"></a>

`int32 URH_IntegrationSettings::GetCatalogAllPriority`

Sets the request priority of Get Catalog All calls, lower number is higher priority.




### `GetCatalogXpAllPriority` <a id="classURH__IntegrationSettings_1afbd579a4e0b16b0facf310ba0a0d2ab3"></a>

`int32 URH_IntegrationSettings::GetCatalogXpAllPriority`

Sets the request priority of Get Catalog Xp All calls, lower number is higher priority.




### `GetCatalogItemPriority` <a id="classURH__IntegrationSettings_1a74c72d3fa3881c2f059fd06760eff569"></a>

`int32 URH_IntegrationSettings::GetCatalogItemPriority`

Sets the request priority of Get Catalog Item calls, lower number is higher priority.




### `GetCatalogInventoryBucketUseRuleSetsAllPriority` <a id="classURH__IntegrationSettings_1a0ad65a15b3ca3c2e0a558af557728978"></a>

`int32 URH_IntegrationSettings::GetCatalogInventoryBucketUseRuleSetsAllPriority`

Sets the request priority of Get Catalog Inventory Bucket Use Rulesets All calls, lower number is higher priority.




### `GetCatalogPricePointsAllPriority` <a id="classURH__IntegrationSettings_1af39c9174f441784d5210c67af3065f95"></a>

`int32 URH_IntegrationSettings::GetCatalogPricePointsAllPriority`

Sets the request priority of Get Catalog Price Points All calls, lower number is higher priority.




### `GetCatalogTimeFramesAllPriority` <a id="classURH__IntegrationSettings_1a360927cc23f433d0d9ac088a8b92ec43"></a>

`int32 URH_IntegrationSettings::GetCatalogTimeFramesAllPriority`

Sets the request priority of Get Catalog Time Frame All calls, lower number is higher priority.




### `GetCatalogVendorPriority` <a id="classURH__IntegrationSettings_1a4bb561f179cd44b43b77f972b84674a9"></a>

`int32 URH_IntegrationSettings::GetCatalogVendorPriority`

Sets the request priority of Get Catalog Vendor calls, lower number is higher priority.




### `GetCatalogVendorsAllPriority` <a id="classURH__IntegrationSettings_1a553832ec54c28a627a521a8586900dc6"></a>

`int32 URH_IntegrationSettings::GetCatalogVendorsAllPriority`

Sets the request priority of Get Catalog Vendor All calls, lower number is higher priority.




### `FetchAppSettingsPriority` <a id="classURH__IntegrationSettings_1a5b6cdb5b53fb4727535f234ac5293ebd"></a>

`int32 URH_IntegrationSettings::FetchAppSettingsPriority`

Sets the request priority of Fetch App Settings calls, lower number is higher priority.




### `ProcessPlatformEntitlementsPriority` <a id="classURH__IntegrationSettings_1adb8db52d23e20d65889800005f7fb65c"></a>

`int32 URH_IntegrationSettings::ProcessPlatformEntitlementsPriority`

Sets the request priority of Process Platform Entitlements calls, lower number is higher priority.




### `RetrievePlatformEntitlementsPriority` <a id="classURH__IntegrationSettings_1a2b78270f3e088baa257d05c12dfaab83"></a>

`int32 URH_IntegrationSettings::RetrievePlatformEntitlementsPriority`

Sets the request priority of Retrieve Platform Entitlements calls, lower number is higher priority.




### `FetchFriendListPriority` <a id="classURH__IntegrationSettings_1aa04f014b56725364b833d681b307b32c"></a>

`int32 URH_IntegrationSettings::FetchFriendListPriority`

Sets the request priority of Fetch Friend List calls, lower number is higher priority.




### `FetchFriendPriority` <a id="classURH__IntegrationSettings_1a743b7a579348813ef7231ea2d67e038c"></a>

`int32 URH_IntegrationSettings::FetchFriendPriority`

Sets the request priority of Fetch Friend calls, lower number is higher priority.




### `AddFriendPriority` <a id="classURH__IntegrationSettings_1a82b8352b5c0526593d079be4ff561307"></a>

`int32 URH_IntegrationSettings::AddFriendPriority`

Sets the request priority of Add Friend calls, lower number is higher priority.




### `RemoveFriendPriority` <a id="classURH__IntegrationSettings_1a0930cf2032ed31eb40e27b3a7a905d57"></a>

`int32 URH_IntegrationSettings::RemoveFriendPriority`

Sets the request priority of Remove Friend calls, lower number is higher priority.




### `AddFriendNotesPriority` <a id="classURH__IntegrationSettings_1af017cda61c8266057e659e4e40fb4a7f"></a>

`int32 URH_IntegrationSettings::AddFriendNotesPriority`

Sets the request priority of Add Friend Notes calls, lower number is higher priority.




### `DeleteFriendNotesPriority` <a id="classURH__IntegrationSettings_1a6fdecd92611953981a1cf75ee63a2c56"></a>

`int32 URH_IntegrationSettings::DeleteFriendNotesPriority`

Sets the request priority of Delete Friend Notes calls, lower number is higher priority.




### `FetchBlockedListPriority` <a id="classURH__IntegrationSettings_1a0811cf621f6195bef8b68d962d24e4a2"></a>

`int32 URH_IntegrationSettings::FetchBlockedListPriority`

Sets the request priority of Fetch Blocked List calls, lower number is higher priority.




### `FetchBlockedPlayerPriority` <a id="classURH__IntegrationSettings_1ae37c306e4c6d4d0445f0a4568f7019f4"></a>

`int32 URH_IntegrationSettings::FetchBlockedPlayerPriority`

Sets the request priority of Fetch Blocked Player calls, lower number is higher priority.




### `BlockUnblockPlayerPriority` <a id="classURH__IntegrationSettings_1a27e8d4c4ed86d705228e5d9891033459"></a>

`int32 URH_IntegrationSettings::BlockUnblockPlayerPriority`

Sets the request priority of Block/Unblock Player calls, lower number is higher priority.




### `InventoryCreateSessionPriority` <a id="classURH__IntegrationSettings_1acca6f7ccd6c074f64a3355430b15f583"></a>

`int32 URH_IntegrationSettings::InventoryCreateSessionPriority`

Sets the request priority of Create Inventory Session calls, lower number is higher priority.




### `InventoryGetSessionPriority` <a id="classURH__IntegrationSettings_1a79a291b54a550f58fd855662cf939d39"></a>

`int32 URH_IntegrationSettings::InventoryGetSessionPriority`

Sets the request priority of Get Inventory Session calls, lower number is higher priority.




### `InventoryGetPriority` <a id="classURH__IntegrationSettings_1a3d819bda1fefdcd646f39186009a08dc"></a>

`int32 URH_IntegrationSettings::InventoryGetPriority`

Sets the request priority of Get Inventory calls, lower number is higher priority.




### `InventoryCreatePriority` <a id="classURH__IntegrationSettings_1aaef9534e9968f0b89933fb2fa693b928"></a>

`int32 URH_IntegrationSettings::InventoryCreatePriority`

Sets the request priority of Create Inventory calls, lower number is higher priority.




### `InventoryUpdatePriority` <a id="classURH__IntegrationSettings_1ae79f97bf4ff6de4c0d75e41358f59ad7"></a>

`int32 URH_IntegrationSettings::InventoryUpdatePriority`

Sets the request priority of Update Inventory calls, lower number is higher priority.




### `InventoryCreateOrderPriority` <a id="classURH__IntegrationSettings_1a95e05009c2789ca27a98205d5fb127f2"></a>

`int32 URH_IntegrationSettings::InventoryCreateOrderPriority`

Sets the request priority of Create Inventory Order calls, lower number is higher priority.




### `InventoryGetOrdersPriority` <a id="classURH__IntegrationSettings_1addf34f3287bd3312846a5978d2703b9f"></a>

`int32 URH_IntegrationSettings::InventoryGetOrdersPriority`

Sets the request priority of Get Inventory Orders calls, lower number is higher priority.




### `NotificationPollSelfPriority` <a id="classURH__IntegrationSettings_1a132a698085ea97992ec3bb57e1eae3e1"></a>

`int32 URH_IntegrationSettings::NotificationPollSelfPriority`

Sets the request priority of Polling Notifications for Self calls, lower number is higher priority.




### `NotificationPollOtherPriority` <a id="classURH__IntegrationSettings_1a8fb41ebf25098232d3ee26134da6b5a3"></a>

`int32 URH_IntegrationSettings::NotificationPollOtherPriority`

Sets the request priority of Polling Notifications for Others calls, lower number is higher priority.




### `NotificationCreatePriority` <a id="classURH__IntegrationSettings_1a14606a57f206abd1a317be741f4b6ccd"></a>

`int32 URH_IntegrationSettings::NotificationCreatePriority`

Sets the request priority of Create Notifications calls, lower number is higher priority.




### `PresenceUpdatePriority` <a id="classURH__IntegrationSettings_1a90564c0a9a445a9993766545c0888329"></a>

`int32 URH_IntegrationSettings::PresenceUpdatePriority`

Sets the request priority of Updating Presence calls, lower number is higher priority.




### `PresenceGetSelfPriority` <a id="classURH__IntegrationSettings_1af38e4ac7b3d269fc66636c05e1a3c633"></a>

`int32 URH_IntegrationSettings::PresenceGetSelfPriority`

Sets the request priority of Get Self Presence calls, lower number is higher priority.




### `PresenceGetOtherPriority` <a id="classURH__IntegrationSettings_1a83ccef552bfe76b46cb79a1afc87d57a"></a>

`int32 URH_IntegrationSettings::PresenceGetOtherPriority`

Sets the request priority of Get Other Presence calls, lower number is higher priority.




### `PresenceGetSettingsPriority` <a id="classURH__IntegrationSettings_1a1d2689266c6b0924e316055789d73a3d"></a>

`int32 URH_IntegrationSettings::PresenceGetSettingsPriority`

Sets the request priority of Get Presence Settings calls, lower number is higher priority.




### `PurgeQueuePriority` <a id="classURH__IntegrationSettings_1a9aa7b532b8d9aa1767f9e177a8c2f73a"></a>

`int32 URH_IntegrationSettings::PurgeQueuePriority`

Sets the request priority of Queue/Dequeue for Purge calls, lower number is higher priority.




### `PurgeGetStatusPriority` <a id="classURH__IntegrationSettings_1a078df1fcff1db371904259f77a44b32e"></a>

`int32 URH_IntegrationSettings::PurgeGetStatusPriority`

Sets the request priority of Get Purge Status calls, lower number is higher priority.




### `GetAllQueueInfoPriority` <a id="classURH__IntegrationSettings_1aad14de47a305aab4368d7a38b80f766e"></a>

`int32 URH_IntegrationSettings::GetAllQueueInfoPriority`

Sets the request priority of Get Queue Info calls, lower number is higher priority.




### `GetMatchmakingTemplatePriority` <a id="classURH__IntegrationSettings_1aa73827ffcdabb3149c07d6ad14cc7d98"></a>

`int32 URH_IntegrationSettings::GetMatchmakingTemplatePriority`

Sets the request priority of Get Matchmaking Template calls, lower number is higher priority.




### `GetMapGameInfoPriority` <a id="classURH__IntegrationSettings_1a8ac2b60ca262eb1fbf75a5ffd309d39d"></a>

`int32 URH_IntegrationSettings::GetMapGameInfoPriority`

Sets the request priority of Get Map Game Info calls, lower number is higher priority.




### `RankingGetPriority` <a id="classURH__IntegrationSettings_1a9991ff7aba2e69e137d1665e40a45bd7"></a>

`int32 URH_IntegrationSettings::RankingGetPriority`

Sets the request priority of Get Rank calls, lower number is higher priority.




### `RankingUpdatePriority` <a id="classURH__IntegrationSettings_1ab2b4525c715fdce6b9ee3b8f5ab98439"></a>

`int32 URH_IntegrationSettings::RankingUpdatePriority`

Sets the request priority of Update Rank calls, lower number is higher priority.




### `SessionPollPriority` <a id="classURH__IntegrationSettings_1aa1c2aa3d6f602b685b21eaefc0ddc962"></a>

`int32 URH_IntegrationSettings::SessionPollPriority`

Sets the request priority of Session Polling calls, lower number is higher priority.




### `SessionJoinPriority` <a id="classURH__IntegrationSettings_1aa7578d63de36b65bf984e6811a05c856"></a>

`int32 URH_IntegrationSettings::SessionJoinPriority`

Sets the request priority of Session Joining calls, lower number is higher priority.




### `SessionLeavePriority` <a id="classURH__IntegrationSettings_1a9defab236e36fba1c40113449827b6ae"></a>

`int32 URH_IntegrationSettings::SessionLeavePriority`

Sets the request priority of Session Leave calls, lower number is higher priority.




### `SessionInvitePriority` <a id="classURH__IntegrationSettings_1a67c03b5ad16327dfaa897369144f5916"></a>

`int32 URH_IntegrationSettings::SessionInvitePriority`

Sets the request priority of Session Invite calls, lower number is higher priority.




### `SessionKickPriority` <a id="classURH__IntegrationSettings_1a300315aecd41cf1116a62763d22e4d0d"></a>

`int32 URH_IntegrationSettings::SessionKickPriority`

Sets the request priority of Session Kick calls, lower number is higher priority.




### `SessionLeaderChangePriority` <a id="classURH__IntegrationSettings_1a704d79c0a0689673f6cc7e8547b0b399"></a>

`int32 URH_IntegrationSettings::SessionLeaderChangePriority`

Sets the request priority of Session Leader Change calls, lower number is higher priority.




### `SessionChangeTeamsPriority` <a id="classURH__IntegrationSettings_1ae4e4de1ecf3af71039d248dcc4c45b0c"></a>

`int32 URH_IntegrationSettings::SessionChangeTeamsPriority`

Sets the request priority of Session Change Teams calls, lower number is higher priority.




### `SessionLeaveQueuePriority` <a id="classURH__IntegrationSettings_1ad5ae84d1c1570a2f385ec24e57108fd4"></a>

`int32 URH_IntegrationSettings::SessionLeaveQueuePriority`

Sets the request priority of Session Leave Queue calls, lower number is higher priority.




### `SessionRequestInstancePriority` <a id="classURH__IntegrationSettings_1abc945d76430a5ab6f692bf0a5e999180"></a>

`int32 URH_IntegrationSettings::SessionRequestInstancePriority`

Sets the request priority of Session Request Instance calls, lower number is higher priority.




### `SessionEndInstancePriority` <a id="classURH__IntegrationSettings_1a1a0840b1eca26c8342fa9cbee7e4b80b"></a>

`int32 URH_IntegrationSettings::SessionEndInstancePriority`

Sets the request priority of Session End Instance calls, lower number is higher priority.




### `SessionStartMatchPriority` <a id="classURH__IntegrationSettings_1aec835451bde71a190fc1e695aef4ff7f"></a>

`int32 URH_IntegrationSettings::SessionStartMatchPriority`

Sets the request priority of Session Start Match calls, lower number is higher priority.




### `SessionEndMatchPriority` <a id="classURH__IntegrationSettings_1aaf32bfec46ea7d08fcf2c29ed615aa65"></a>

`int32 URH_IntegrationSettings::SessionEndMatchPriority`

Sets the request priority of Session End Match calls, lower number is higher priority.




### `SessionUpdateSessionInfoPriority` <a id="classURH__IntegrationSettings_1a9c7c6d6cfb6af07f0fe3f81aa8a69c34"></a>

`int32 URH_IntegrationSettings::SessionUpdateSessionInfoPriority`

Sets the request priority of Update Session Info calls, lower number is higher priority.




### `SessionUpdateInstanceInfoPriority` <a id="classURH__IntegrationSettings_1a0865134ce8ddd336130583187cd67aa4"></a>

`int32 URH_IntegrationSettings::SessionUpdateInstanceInfoPriority`

Sets the request priority of Update Instance Info calls, lower number is higher priority.




### `SessionUpdateBrowserInfoPriority` <a id="classURH__IntegrationSettings_1aa5e0c76dbae5e34b456bcaaafa68cf94"></a>

`int32 URH_IntegrationSettings::SessionUpdateBrowserInfoPriority`

Sets the request priority of Update Browser Info calls, lower number is higher priority.




### `SessionDeleteBrowserInfoPriority` <a id="classURH__IntegrationSettings_1a005338696286a0b743bfbdb480e12e44"></a>

`int32 URH_IntegrationSettings::SessionDeleteBrowserInfoPriority`

Sets the request priority of Delete Browser Info calls, lower number is higher priority.




### `SessionInstanceMarkFubarPriority` <a id="classURH__IntegrationSettings_1adb06a4293164df68adea68c00521e5fb"></a>

`int32 URH_IntegrationSettings::SessionInstanceMarkFubarPriority`

Sets the request priority of Marking an Instane Fubar calls, lower number is higher priority.




### `SessionInstanceHealthUpdatePriority` <a id="classURH__IntegrationSettings_1a48b7cedb5478f436eb426108906f2d6a"></a>

`int32 URH_IntegrationSettings::SessionInstanceHealthUpdatePriority`

Sets the request priority of Instance Health update calls, lower number is higher priority.




### `SessionBackfillUpdatePriority` <a id="classURH__IntegrationSettings_1ac2b018d245179295e531c7e170db7663"></a>

`int32 URH_IntegrationSettings::SessionBackfillUpdatePriority`

Sets the request priority of Backfill update calls, lower number is higher priority.




### `SessionUpdateWithPlatformSessionPriority` <a id="classURH__IntegrationSettings_1ae52bf61cfe6e937cc6a563133a209991"></a>

`int32 URH_IntegrationSettings::SessionUpdateWithPlatformSessionPriority`

Sets the request priority of Session Update With Platform Session calls, lower number is higher priority.




### `SessionGetTemplatePriority` <a id="classURH__IntegrationSettings_1a40090726415cdd4ed601d26c4a2960d9"></a>

`int32 URH_IntegrationSettings::SessionGetTemplatePriority`

Sets the request priority of Session Get Template calls, lower number is higher priority.




### `SessionGetByAllocationIdPriority` <a id="classURH__IntegrationSettings_1a0e8868c0d121441924f925de96d66120"></a>

`int32 URH_IntegrationSettings::SessionGetByAllocationIdPriority`

Sets the request priority of Session By Allocation Id calls, lower number is higher priority.




### `SessionGetBySessionIdPriority` <a id="classURH__IntegrationSettings_1a252127302ea79fe762255b0353809747"></a>

`int32 URH_IntegrationSettings::SessionGetBySessionIdPriority`

Sets the request priority of Session By Session Id calls, lower number is higher priority.




### `SessionGetByTypePriority` <a id="classURH__IntegrationSettings_1af20dfabda6e113f75816401bdaca2614"></a>

`int32 URH_IntegrationSettings::SessionGetByTypePriority`

Sets the request priority of Session By Type calls, lower number is higher priority.




### `SessionsGetOtherPriority` <a id="classURH__IntegrationSettings_1a0504cbc9cd9338b377189d62daa790b9"></a>

`int32 URH_IntegrationSettings::SessionsGetOtherPriority`

Sets the request priority of Get Other Sessions calls, lower number is higher priority.




### `SettingsGetPriority` <a id="classURH__IntegrationSettings_1ab3de492d46aeb771fc964cc02a00f048"></a>

`int32 URH_IntegrationSettings::SettingsGetPriority`

Sets the request priority of Get Settings calls, lower number is higher priority.




### `SettingsGetTypesPriority` <a id="classURH__IntegrationSettings_1a96483b01899977de1c9c929e83ef0c71"></a>

`int32 URH_IntegrationSettings::SettingsGetTypesPriority`

Sets the request priority of Get Settings Types calls, lower number is higher priority.




### `SettingsUpdatePriority` <a id="classURH__IntegrationSettings_1aab7ca97767260ad27f6ab2ed2f991f35"></a>

`int32 URH_IntegrationSettings::SettingsUpdatePriority`

Sets the request priority of Update Settings calls, lower number is higher priority.




### `GetSiteSettingsPriority` <a id="classURH__IntegrationSettings_1a05394419f792bfa361b0e1b2adccf198"></a>

`int32 URH_IntegrationSettings::GetSiteSettingsPriority`

Sets the request priority of Get Site Settings calls, lower number is higher priority.




### `UsersLookupPlayerPriority` <a id="classURH__IntegrationSettings_1a17589c62d53386508f41321e98bbfeeb"></a>

`int32 URH_IntegrationSettings::UsersLookupPlayerPriority`

Sets the request priority of Lookup Users calls, lower number is higher priority.




### `UsersGetLinkedPlatformsPriority` <a id="classURH__IntegrationSettings_1a99b0ffa18f2f78923fdd46d4499588e1"></a>

`int32 URH_IntegrationSettings::UsersGetLinkedPlatformsPriority`

Sets the request priority of Get Linked Platforms calls, lower number is higher priority.




### `EventsReceiveEventPriority` <a id="classURH__IntegrationSettings_1a47f81afe37f5fd5d8b49a8c5d5101e08"></a>

`int32 URH_IntegrationSettings::EventsReceiveEventPriority`

Sets the request priority of ReceiveEvent, which is the GETS endpoint, lower number is higher priority.





## Public Functions



### `GetEnvironmentConfiguration` <a id="classURH__IntegrationSettings_1a833c95a5c96e642faa2a3038d9c8f151"></a>

const [FRH_EnvironmentConfiguration](/unreal-plugins/all/structfrh__environmentconfiguration/#structFRH__EnvironmentConfiguration) * GetEnvironmentConfiguration(const FString & EnvironmentId)

#### Parameters

| Type | Name |
|------|------|
|const FString &|EnvironmentId|

#### Description

Helper to get the configuration for a given environment by EnvironmentId.





