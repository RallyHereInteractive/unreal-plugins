# IntegrationSettings <a id="group__IntegrationSettings"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`URH_IntegrationSettings`](#classURH__IntegrationSettings) | Main settings for the Integration.
`struct `[`FRH_SandboxConfiguration`](#structFRH__SandboxConfiguration) | Settings for Sandbox Configuration.

## class `URH_IntegrationSettings` <a id="classURH__IntegrationSettings"></a>

```
class URH_IntegrationSettings
  : public UDeveloperSettings
```

Main settings for the Integration.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`BaseUrl`](#classURH__IntegrationSettings_1aa57205106485722ad90ab0320d711d07) | RallyHere BaseURL. Determines the base URL to use when connecting to the RallyHere API.
`public TArray< `[`FRH_SandboxConfiguration`](IntegrationSettings.md#structFRH__SandboxConfiguration)` > `[`SandboxURLs`](#classURH__IntegrationSettings_1abd6119f6b530649a9fa6ecdc0e288dec) | Per-Sandbox overrides for BaseUrl. These sandboxes are alias names used for a BaseURL, and by default will automatically be looked up based on the OnlineEnvironment from the engine (Development, Certification, etc), but can be overridden via commandline (see SandboxCommandLineKeys)
`public FString `[`ClientId`](#classURH__IntegrationSettings_1a9c55437f52ee8d85a75596a52481ecd3) | RallyHere Client ID. Determines the available permissions for RallyHere APIs.
`public FString `[`ClientSecret`](#classURH__IntegrationSettings_1a359d6746b2a532d751334ff4fb4e2a90) | RallyHere Client secret. Must be associated with the defined client ID.
`public TArray< FString > `[`BaseURLCommandLineKeys`](#classURH__IntegrationSettings_1a69a2e01e56d3c5cf9378cadf95bf8eeb) | Keys to check for on the command line for an override to the default BaseURL.
`public TArray< FString > `[`SandboxCommandLineKeys`](#classURH__IntegrationSettings_1a7e1e9322f4b305961a84b24bf27e9dde) | Keys to check for on the command line for an override to the default Sandbox when using SandboxURLs.
`public TArray< FString > `[`DefaultOSSCommandLineKeys`](#classURH__IntegrationSettings_1a93e491f7bab4fed912f9281cd1bac0e7) | Keys to check for on the command line for an override to the default OSS.
`public TArray< FString > `[`ClientIdCommandLineKeys`](#classURH__IntegrationSettings_1afcc89f50b0d312cc200afb153b43a29a) | Keys to check for on the command line for an override to the default ClientId.
`public TArray< FString > `[`ClientSecretCommandLineKeys`](#classURH__IntegrationSettings_1af66963c6acda2ab28c6cf959a33ca65e) | Keys to check for on the command line for an override to the default ClientSecret.
`public FName `[`SandboxOSSName`](#classURH__IntegrationSettings_1acbcc5a93cfa141e8b72723f51d2009f6) | Online Subsystem to use for selecting the base URL sandbox. If not provided, will use the default OSS.
`public bool `[`bAutoStartSessionsAfterJoin`](#classURH__IntegrationSettings_1a43e468e0d80e224c6fc7479940e0bcab) | RallyHere BaseURL. Determines the base URL to use when connecting to the RallyHere API.
`public int32 `[`MaxSimultaneousRequests`](#classURH__IntegrationSettings_1a250923c3c001c712d54691a9efa5f98b) | Sets the maximum number of Http Requests that can be made simultaneously. 0 = No Limit.
`public FSoftClassPath `[`LocalPlayerLoginSubsystemClass`](#classURH__IntegrationSettings_1aea8c51bec96a3a50100085354f8fe816) | Extensible LocalPlayerLoginSubsystem class path.
`public FSoftClassPath `[`AdSubsystemClass`](#classURH__IntegrationSettings_1a134dbaebd973ab90d1bdb12027285009) | Extensible AdSubsystem class path.
`public FSoftClassPath `[`FriendSubsystemClass`](#classURH__IntegrationSettings_1af67c19ac851c03c6e667a609182e1ac9) | Extensible FriendSubsystem class path.
`public FSoftClassPath `[`LocalPlayerSessionSubsystemClass`](#classURH__IntegrationSettings_1a6310101e25a7cff30adda4456bb02b55) | Extensible LocalPlayerSessionSubsystem class path.
`public FSoftClassPath `[`LocalPlayerPresenceSubsystemClass`](#classURH__IntegrationSettings_1aed317ed3d7b4e6af1e69e1db42215d01) | Extensible LocalPlayerPresenceSubsystem class path.
`public FSoftClassPath `[`PurgeSubsystemClass`](#classURH__IntegrationSettings_1a1b99ec094d05b2b2daa8e83c2917e0e4) | Extensible PurgeSubsystem class path.
`public FSoftClassPath `[`EntitlementSubsystemClass`](#classURH__IntegrationSettings_1a4c054d97c0884323627b2fdad7062da9) | Extensible EntitlementSubsystem class path.
`public FSoftClassPath `[`GameInstanceSessionInfoSubsystemClass`](#classURH__IntegrationSettings_1a2a17243cca23933136ae9925cee7adc9) | Extensible GameInstanceSessionInfoSubsystem class path.
`public FSoftClassPath `[`GameInstanceServerBootstrappermClass`](#classURH__IntegrationSettings_1a6153060e13b8e5fc5f03f4beb6233392) | Extensible GameInstanceServerBootstrapperm class path.
`public FSoftClassPath `[`GameInstanceClientBootstrapperClass`](#classURH__IntegrationSettings_1a1fab4344e7cae47f3dad36da33aa0d98) | Extensible GameInstanceClientBootstrapper class path.
`public FSoftClassPath `[`PlayerInfoSubsystemClass`](#classURH__IntegrationSettings_1ac0a71beae9a83e6316787d8647d43f1a) | Extensible PlayerInfoSubsystem class path.
`public FSoftClassPath `[`PlayerInfoClass`](#classURH__IntegrationSettings_1a6d45dfa55caf64da1b6b5beeaf559270) | Extensible PlayerInfo class path.
`public FSoftClassPath `[`CatalogSubsystemClass`](#classURH__IntegrationSettings_1a0e60706b4b45ea9aed327c74e92df3a5) | Extensible CatalogSubsystem class path.
`public FSoftClassPath `[`ConfigSubsystemClass`](#classURH__IntegrationSettings_1a22f747a1fe7afba820828fb46d2a8780) | Extensible ConfigSubsystem class path.
`public FSoftClassPath `[`SessionBrowserCacheClass`](#classURH__IntegrationSettings_1af5ecb3103ab065d38eed4634e6916817) | Extensible SessionBrowserCache class path.
`public FSoftClassPath `[`MatchmakingBrowserCacheClass`](#classURH__IntegrationSettings_1a035a0b0d29e2ed12a2663446c60d811c) | Extensible MatchmakingBrowserCache class path.
`public int32 `[`BeginNewAdSessionPriority`](#classURH__IntegrationSettings_1afc878742df435a86affa3c28c65da19a) | Sets the request priority of Begin New Session calls, lower number is higher priority.
`public int32 `[`FindAdOppertunitiesPriority`](#classURH__IntegrationSettings_1a9e9a3b6b65a8ae71a7d5f7e985066f36) | Sets the request priority of Find Oppertunities calls, lower number is higher priority.
`public int32 `[`UpdateAdOppertunitiesPriority`](#classURH__IntegrationSettings_1ab6514b00e3e6df87716cf78829c89e58) | Sets the request priority of Update Oppertunities calls, lower number is higher priority.
`public int32 `[`AuthLogoutPriority`](#classURH__IntegrationSettings_1aa8a89a53c4e538c0e7f424d5a28c4a2a) | Sets the request priority of Logouts calls, lower number is higher priority.
`public int32 `[`AuthLoginPriority`](#classURH__IntegrationSettings_1aba8b87a3871ea3ad301106a3377fb6b8) | Sets the request priority of Login calls, lower number is higher priority.
`public int32 `[`GetCatalogAllPriority`](#classURH__IntegrationSettings_1ac5304b5175309e77721ee07577179516) | Sets the request priority of Get Catalog All calls, lower number is higher priority.
`public int32 `[`GetCatalogXpAllPriority`](#classURH__IntegrationSettings_1afbd579a4e0b16b0facf310ba0a0d2ab3) | Sets the request priority of Get Catalog Xp All calls, lower number is higher priority.
`public int32 `[`GetCatalogItemPriority`](#classURH__IntegrationSettings_1a74c72d3fa3881c2f059fd06760eff569) | Sets the request priority of Get Catalog Item calls, lower number is higher priority.
`public int32 `[`GetCatalogInventoryBucketUseRuleSetsAllPriority`](#classURH__IntegrationSettings_1a0ad65a15b3ca3c2e0a558af557728978) | Sets the request priority of Get Catalog Inventory Bucket Use Rulesets All calls, lower number is higher priority.
`public int32 `[`GetCatalogPricePointsAllPriority`](#classURH__IntegrationSettings_1af39c9174f441784d5210c67af3065f95) | Sets the request priority of Get Catalog Price Points All calls, lower number is higher priority.
`public int32 `[`GetCatalogTimeFramesAllPriority`](#classURH__IntegrationSettings_1a360927cc23f433d0d9ac088a8b92ec43) | Sets the request priority of Get Catalog Time Frame All calls, lower number is higher priority.
`public int32 `[`GetCatalogVendorPriority`](#classURH__IntegrationSettings_1a4bb561f179cd44b43b77f972b84674a9) | Sets the request priority of Get Catalog Vendor calls, lower number is higher priority.
`public int32 `[`GetCatalogVendorsAllPriority`](#classURH__IntegrationSettings_1a553832ec54c28a627a521a8586900dc6) | Sets the request priority of Get Catalog Vendor All calls, lower number is higher priority.
`public int32 `[`FetchAppSettingsPriority`](#classURH__IntegrationSettings_1a5b6cdb5b53fb4727535f234ac5293ebd) | Sets the request priority of Fetch App Settings calls, lower number is higher priority.
`public int32 `[`ProcessPlatformEntitlementsPriority`](#classURH__IntegrationSettings_1adb8db52d23e20d65889800005f7fb65c) | Sets the request priority of Process Platform Entitlements calls, lower number is higher priority.
`public int32 `[`RetrievePlatformEntitlementsPriority`](#classURH__IntegrationSettings_1a2b78270f3e088baa257d05c12dfaab83) | Sets the request priority of Retrieve Platform Entitlements calls, lower number is higher priority.
`public int32 `[`FetchFriendListPriority`](#classURH__IntegrationSettings_1aa04f014b56725364b833d681b307b32c) | Sets the request priority of Fetch Friend List calls, lower number is higher priority.
`public int32 `[`FetchFriendPriority`](#classURH__IntegrationSettings_1a743b7a579348813ef7231ea2d67e038c) | Sets the request priority of Fetch Friend calls, lower number is higher priority.
`public int32 `[`AddFriendPriority`](#classURH__IntegrationSettings_1a82b8352b5c0526593d079be4ff561307) | Sets the request priority of Add Friend calls, lower number is higher priority.
`public int32 `[`RemoveFriendPriority`](#classURH__IntegrationSettings_1a0930cf2032ed31eb40e27b3a7a905d57) | Sets the request priority of Remove Friend calls, lower number is higher priority.
`public int32 `[`AddFriendNotesPriority`](#classURH__IntegrationSettings_1af017cda61c8266057e659e4e40fb4a7f) | Sets the request priority of Add Friend Notes calls, lower number is higher priority.
`public int32 `[`FetchBlockedListPriority`](#classURH__IntegrationSettings_1a0811cf621f6195bef8b68d962d24e4a2) | Sets the request priority of Fetch Blocked List calls, lower number is higher priority.
`public int32 `[`FetchBlockedPlayerPriority`](#classURH__IntegrationSettings_1ae37c306e4c6d4d0445f0a4568f7019f4) | Sets the request priority of Fetch Blocked Player calls, lower number is higher priority.
`public int32 `[`BlockUnblockPlayerPriority`](#classURH__IntegrationSettings_1a27e8d4c4ed86d705228e5d9891033459) | Sets the request priority of Block/Unblock Player calls, lower number is higher priority.
`public int32 `[`InventoryCreateSessionPriority`](#classURH__IntegrationSettings_1acca6f7ccd6c074f64a3355430b15f583) | Sets the request priority of Create Inventory Session calls, lower number is higher priority.
`public int32 `[`InventoryGetSessionPriority`](#classURH__IntegrationSettings_1a79a291b54a550f58fd855662cf939d39) | Sets the request priority of Get Inventory Session calls, lower number is higher priority.
`public int32 `[`InventoryGetPriority`](#classURH__IntegrationSettings_1a3d819bda1fefdcd646f39186009a08dc) | Sets the request priority of Get Inventory calls, lower number is higher priority.
`public int32 `[`InventoryCreatePriority`](#classURH__IntegrationSettings_1aaef9534e9968f0b89933fb2fa693b928) | Sets the request priority of Create Inventory calls, lower number is higher priority.
`public int32 `[`InventoryUpdatePriority`](#classURH__IntegrationSettings_1ae79f97bf4ff6de4c0d75e41358f59ad7) | Sets the request priority of Update Inventory calls, lower number is higher priority.
`public int32 `[`InventoryCreateOrderPriority`](#classURH__IntegrationSettings_1a95e05009c2789ca27a98205d5fb127f2) | Sets the request priority of Create Inventory Order calls, lower number is higher priority.
`public int32 `[`InventoryGetOrdersPriority`](#classURH__IntegrationSettings_1addf34f3287bd3312846a5978d2703b9f) | Sets the request priority of Get Inventory Orders calls, lower number is higher priority.
`public int32 `[`NotificationPollSelfPriority`](#classURH__IntegrationSettings_1a132a698085ea97992ec3bb57e1eae3e1) | Sets the request priority of Polling Notifications for Self calls, lower number is higher priority.
`public int32 `[`NotificationPollOtherPriority`](#classURH__IntegrationSettings_1a8fb41ebf25098232d3ee26134da6b5a3) | Sets the request priority of Polling Notifications for Others calls, lower number is higher priority.
`public int32 `[`NotificationCreatePriority`](#classURH__IntegrationSettings_1a14606a57f206abd1a317be741f4b6ccd) | Sets the request priority of Create Notifications calls, lower number is higher priority.
`public int32 `[`PresenceUpdatePriority`](#classURH__IntegrationSettings_1a90564c0a9a445a9993766545c0888329) | Sets the request priority of Updating Presence calls, lower number is higher priority.
`public int32 `[`PresenceGetSelfPriority`](#classURH__IntegrationSettings_1af38e4ac7b3d269fc66636c05e1a3c633) | Sets the request priority of Get Self Presence calls, lower number is higher priority.
`public int32 `[`PresenceGetOtherPriority`](#classURH__IntegrationSettings_1a83ccef552bfe76b46cb79a1afc87d57a) | Sets the request priority of Get Other Presence calls, lower number is higher priority.
`public int32 `[`PresenceGetSettingsPriority`](#classURH__IntegrationSettings_1a1d2689266c6b0924e316055789d73a3d) | Sets the request priority of Get Presence Settings calls, lower number is higher priority.
`public int32 `[`PurgeQueuePriority`](#classURH__IntegrationSettings_1a9aa7b532b8d9aa1767f9e177a8c2f73a) | Sets the request priority of Queue/Dequeue for Purge calls, lower number is higher priority.
`public int32 `[`PurgeGetStatusPriority`](#classURH__IntegrationSettings_1a078df1fcff1db371904259f77a44b32e) | Sets the request priority of Get Purge Status calls, lower number is higher priority.
`public int32 `[`GetAllQueueInfoPriority`](#classURH__IntegrationSettings_1aad14de47a305aab4368d7a38b80f766e) | Sets the request priority of Get Queue Info calls, lower number is higher priority.
`public int32 `[`GetMatchmakingTemplatePriority`](#classURH__IntegrationSettings_1aa73827ffcdabb3149c07d6ad14cc7d98) | Sets the request priority of Get Matchmaking Template calls, lower number is higher priority.
`public int32 `[`GetMapGameInfoPriority`](#classURH__IntegrationSettings_1a8ac2b60ca262eb1fbf75a5ffd309d39d) | Sets the request priority of Get Map Game Info calls, lower number is higher priority.
`public int32 `[`RankingGetPriority`](#classURH__IntegrationSettings_1a9991ff7aba2e69e137d1665e40a45bd7) | Sets the request priority of Get Rank calls, lower number is higher priority.
`public int32 `[`RankingUpdatePriority`](#classURH__IntegrationSettings_1ab2b4525c715fdce6b9ee3b8f5ab98439) | Sets the request priority of Update Rank calls, lower number is higher priority.
`public int32 `[`SessionPollPriority`](#classURH__IntegrationSettings_1aa1c2aa3d6f602b685b21eaefc0ddc962) | Sets the request priority of Session Polling calls, lower number is higher priority.
`public int32 `[`SessionJoinPriority`](#classURH__IntegrationSettings_1aa7578d63de36b65bf984e6811a05c856) | Sets the request priority of Session Joining calls, lower number is higher priority.
`public int32 `[`SessionLeavePriority`](#classURH__IntegrationSettings_1a9defab236e36fba1c40113449827b6ae) | Sets the request priority of Session Leave calls, lower number is higher priority.
`public int32 `[`SessionInvitePriority`](#classURH__IntegrationSettings_1a67c03b5ad16327dfaa897369144f5916) | Sets the request priority of Session Invite calls, lower number is higher priority.
`public int32 `[`SessionKickPriority`](#classURH__IntegrationSettings_1a300315aecd41cf1116a62763d22e4d0d) | Sets the request priority of Session Kick calls, lower number is higher priority.
`public int32 `[`SessionLeaderChangePriority`](#classURH__IntegrationSettings_1a704d79c0a0689673f6cc7e8547b0b399) | Sets the request priority of Session Leader Change calls, lower number is higher priority.
`public int32 `[`SessionChangeTeamsPriority`](#classURH__IntegrationSettings_1ae4e4de1ecf3af71039d248dcc4c45b0c) | Sets the request priority of Session Change Teams calls, lower number is higher priority.
`public int32 `[`SessionLeaveQueuePriority`](#classURH__IntegrationSettings_1ad5ae84d1c1570a2f385ec24e57108fd4) | Sets the request priority of Session Leave Queue calls, lower number is higher priority.
`public int32 `[`SessionRequestInstancePriority`](#classURH__IntegrationSettings_1abc945d76430a5ab6f692bf0a5e999180) | Sets the request priority of Session Request Instance calls, lower number is higher priority.
`public int32 `[`SessionEndInstancePriority`](#classURH__IntegrationSettings_1a1a0840b1eca26c8342fa9cbee7e4b80b) | Sets the request priority of Session End Instance calls, lower number is higher priority.
`public int32 `[`SessionStartMatchPriority`](#classURH__IntegrationSettings_1aec835451bde71a190fc1e695aef4ff7f) | Sets the request priority of Session Start Match calls, lower number is higher priority.
`public int32 `[`SessionEndMatchPriority`](#classURH__IntegrationSettings_1aaf32bfec46ea7d08fcf2c29ed615aa65) | Sets the request priority of Session End Match calls, lower number is higher priority.
`public int32 `[`SessionUpdateSessionInfoPriority`](#classURH__IntegrationSettings_1a9c7c6d6cfb6af07f0fe3f81aa8a69c34) | Sets the request priority of Update Session Info calls, lower number is higher priority.
`public int32 `[`SessionUpdateInstanceInfoPriority`](#classURH__IntegrationSettings_1a0865134ce8ddd336130583187cd67aa4) | Sets the request priority of Update Instance Info calls, lower number is higher priority.
`public int32 `[`SessionUpdateBrowserInfoPriority`](#classURH__IntegrationSettings_1aa5e0c76dbae5e34b456bcaaafa68cf94) | Sets the request priority of Update Browser Info calls, lower number is higher priority.
`public int32 `[`SessionDeleteBrowserInfoPriority`](#classURH__IntegrationSettings_1a005338696286a0b743bfbdb480e12e44) | Sets the request priority of Delete Browser Info calls, lower number is higher priority.
`public int32 `[`SessionInstanceMarkFubarPriority`](#classURH__IntegrationSettings_1adb06a4293164df68adea68c00521e5fb) | Sets the request priority of Marking an Instane Fubar calls, lower number is higher priority.
`public int32 `[`SessionUpdateWithPlatformSessionPriority`](#classURH__IntegrationSettings_1ae52bf61cfe6e937cc6a563133a209991) | Sets the request priority of Session Update With Platform Session calls, lower number is higher priority.
`public int32 `[`SessionGetTemplatePriority`](#classURH__IntegrationSettings_1a40090726415cdd4ed601d26c4a2960d9) | Sets the request priority of Session Get Template calls, lower number is higher priority.
`public int32 `[`SessionGetByAllocationIdPriority`](#classURH__IntegrationSettings_1a0e8868c0d121441924f925de96d66120) | Sets the request priority of Session By Allocation Id calls, lower number is higher priority.
`public int32 `[`SessionGetBySessionIdPriority`](#classURH__IntegrationSettings_1a252127302ea79fe762255b0353809747) | Sets the request priority of Session By Session Id calls, lower number is higher priority.
`public int32 `[`SessionGetByTypePriority`](#classURH__IntegrationSettings_1af20dfabda6e113f75816401bdaca2614) | Sets the request priority of Session By Type calls, lower number is higher priority.
`public int32 `[`SettingsGetPriority`](#classURH__IntegrationSettings_1ab3de492d46aeb771fc964cc02a00f048) | Sets the request priority of Get Settings calls, lower number is higher priority.
`public int32 `[`SettingsUpdatePriority`](#classURH__IntegrationSettings_1aab7ca97767260ad27f6ab2ed2f991f35) | Sets the request priority of Update Settings calls, lower number is higher priority.
`public int32 `[`GetSiteSettingsPriority`](#classURH__IntegrationSettings_1a05394419f792bfa361b0e1b2adccf198) | Sets the request priority of Get Site Settings calls, lower number is higher priority.
`public int32 `[`UsersLookupPlayerPriority`](#classURH__IntegrationSettings_1a17589c62d53386508f41321e98bbfeeb) | Sets the request priority of Lookup Users calls, lower number is higher priority.
`public int32 `[`UsersGetLinkedPlatformsPriority`](#classURH__IntegrationSettings_1a99b0ffa18f2f78923fdd46d4499588e1) | Sets the request priority of Get Linked Platforms calls, lower number is higher priority.

#### Members

#### `public FString `[`BaseUrl`](#classURH__IntegrationSettings_1aa57205106485722ad90ab0320d711d07) <a id="classURH__IntegrationSettings_1aa57205106485722ad90ab0320d711d07"></a>

RallyHere BaseURL. Determines the base URL to use when connecting to the RallyHere API.

<br>
#### `public TArray< `[`FRH_SandboxConfiguration`](IntegrationSettings.md#structFRH__SandboxConfiguration)` > `[`SandboxURLs`](#classURH__IntegrationSettings_1abd6119f6b530649a9fa6ecdc0e288dec) <a id="classURH__IntegrationSettings_1abd6119f6b530649a9fa6ecdc0e288dec"></a>

Per-Sandbox overrides for BaseUrl. These sandboxes are alias names used for a BaseURL, and by default will automatically be looked up based on the OnlineEnvironment from the engine (Development, Certification, etc), but can be overridden via commandline (see SandboxCommandLineKeys)

<br>
#### `public FString `[`ClientId`](#classURH__IntegrationSettings_1a9c55437f52ee8d85a75596a52481ecd3) <a id="classURH__IntegrationSettings_1a9c55437f52ee8d85a75596a52481ecd3"></a>

RallyHere Client ID. Determines the available permissions for RallyHere APIs.

<br>
#### `public FString `[`ClientSecret`](#classURH__IntegrationSettings_1a359d6746b2a532d751334ff4fb4e2a90) <a id="classURH__IntegrationSettings_1a359d6746b2a532d751334ff4fb4e2a90"></a>

RallyHere Client secret. Must be associated with the defined client ID.

<br>
#### `public TArray< FString > `[`BaseURLCommandLineKeys`](#classURH__IntegrationSettings_1a69a2e01e56d3c5cf9378cadf95bf8eeb) <a id="classURH__IntegrationSettings_1a69a2e01e56d3c5cf9378cadf95bf8eeb"></a>

Keys to check for on the command line for an override to the default BaseURL.

<br>
#### `public TArray< FString > `[`SandboxCommandLineKeys`](#classURH__IntegrationSettings_1a7e1e9322f4b305961a84b24bf27e9dde) <a id="classURH__IntegrationSettings_1a7e1e9322f4b305961a84b24bf27e9dde"></a>

Keys to check for on the command line for an override to the default Sandbox when using SandboxURLs.

<br>
#### `public TArray< FString > `[`DefaultOSSCommandLineKeys`](#classURH__IntegrationSettings_1a93e491f7bab4fed912f9281cd1bac0e7) <a id="classURH__IntegrationSettings_1a93e491f7bab4fed912f9281cd1bac0e7"></a>

Keys to check for on the command line for an override to the default OSS.

<br>
#### `public TArray< FString > `[`ClientIdCommandLineKeys`](#classURH__IntegrationSettings_1afcc89f50b0d312cc200afb153b43a29a) <a id="classURH__IntegrationSettings_1afcc89f50b0d312cc200afb153b43a29a"></a>

Keys to check for on the command line for an override to the default ClientId.

<br>
#### `public TArray< FString > `[`ClientSecretCommandLineKeys`](#classURH__IntegrationSettings_1af66963c6acda2ab28c6cf959a33ca65e) <a id="classURH__IntegrationSettings_1af66963c6acda2ab28c6cf959a33ca65e"></a>

Keys to check for on the command line for an override to the default ClientSecret.

<br>
#### `public FName `[`SandboxOSSName`](#classURH__IntegrationSettings_1acbcc5a93cfa141e8b72723f51d2009f6) <a id="classURH__IntegrationSettings_1acbcc5a93cfa141e8b72723f51d2009f6"></a>

Online Subsystem to use for selecting the base URL sandbox. If not provided, will use the default OSS.

<br>
#### `public bool `[`bAutoStartSessionsAfterJoin`](#classURH__IntegrationSettings_1a43e468e0d80e224c6fc7479940e0bcab) <a id="classURH__IntegrationSettings_1a43e468e0d80e224c6fc7479940e0bcab"></a>

RallyHere BaseURL. Determines the base URL to use when connecting to the RallyHere API.

<br>
#### `public int32 `[`MaxSimultaneousRequests`](#classURH__IntegrationSettings_1a250923c3c001c712d54691a9efa5f98b) <a id="classURH__IntegrationSettings_1a250923c3c001c712d54691a9efa5f98b"></a>

Sets the maximum number of Http Requests that can be made simultaneously. 0 = No Limit.

<br>
#### `public FSoftClassPath `[`LocalPlayerLoginSubsystemClass`](#classURH__IntegrationSettings_1aea8c51bec96a3a50100085354f8fe816) <a id="classURH__IntegrationSettings_1aea8c51bec96a3a50100085354f8fe816"></a>

Extensible LocalPlayerLoginSubsystem class path.

<br>
#### `public FSoftClassPath `[`AdSubsystemClass`](#classURH__IntegrationSettings_1a134dbaebd973ab90d1bdb12027285009) <a id="classURH__IntegrationSettings_1a134dbaebd973ab90d1bdb12027285009"></a>

Extensible AdSubsystem class path.

<br>
#### `public FSoftClassPath `[`FriendSubsystemClass`](#classURH__IntegrationSettings_1af67c19ac851c03c6e667a609182e1ac9) <a id="classURH__IntegrationSettings_1af67c19ac851c03c6e667a609182e1ac9"></a>

Extensible FriendSubsystem class path.

<br>
#### `public FSoftClassPath `[`LocalPlayerSessionSubsystemClass`](#classURH__IntegrationSettings_1a6310101e25a7cff30adda4456bb02b55) <a id="classURH__IntegrationSettings_1a6310101e25a7cff30adda4456bb02b55"></a>

Extensible LocalPlayerSessionSubsystem class path.

<br>
#### `public FSoftClassPath `[`LocalPlayerPresenceSubsystemClass`](#classURH__IntegrationSettings_1aed317ed3d7b4e6af1e69e1db42215d01) <a id="classURH__IntegrationSettings_1aed317ed3d7b4e6af1e69e1db42215d01"></a>

Extensible LocalPlayerPresenceSubsystem class path.

<br>
#### `public FSoftClassPath `[`PurgeSubsystemClass`](#classURH__IntegrationSettings_1a1b99ec094d05b2b2daa8e83c2917e0e4) <a id="classURH__IntegrationSettings_1a1b99ec094d05b2b2daa8e83c2917e0e4"></a>

Extensible PurgeSubsystem class path.

<br>
#### `public FSoftClassPath `[`EntitlementSubsystemClass`](#classURH__IntegrationSettings_1a4c054d97c0884323627b2fdad7062da9) <a id="classURH__IntegrationSettings_1a4c054d97c0884323627b2fdad7062da9"></a>

Extensible EntitlementSubsystem class path.

<br>
#### `public FSoftClassPath `[`GameInstanceSessionInfoSubsystemClass`](#classURH__IntegrationSettings_1a2a17243cca23933136ae9925cee7adc9) <a id="classURH__IntegrationSettings_1a2a17243cca23933136ae9925cee7adc9"></a>

Extensible GameInstanceSessionInfoSubsystem class path.

<br>
#### `public FSoftClassPath `[`GameInstanceServerBootstrappermClass`](#classURH__IntegrationSettings_1a6153060e13b8e5fc5f03f4beb6233392) <a id="classURH__IntegrationSettings_1a6153060e13b8e5fc5f03f4beb6233392"></a>

Extensible GameInstanceServerBootstrapperm class path.

<br>
#### `public FSoftClassPath `[`GameInstanceClientBootstrapperClass`](#classURH__IntegrationSettings_1a1fab4344e7cae47f3dad36da33aa0d98) <a id="classURH__IntegrationSettings_1a1fab4344e7cae47f3dad36da33aa0d98"></a>

Extensible GameInstanceClientBootstrapper class path.

<br>
#### `public FSoftClassPath `[`PlayerInfoSubsystemClass`](#classURH__IntegrationSettings_1ac0a71beae9a83e6316787d8647d43f1a) <a id="classURH__IntegrationSettings_1ac0a71beae9a83e6316787d8647d43f1a"></a>

Extensible PlayerInfoSubsystem class path.

<br>
#### `public FSoftClassPath `[`PlayerInfoClass`](#classURH__IntegrationSettings_1a6d45dfa55caf64da1b6b5beeaf559270) <a id="classURH__IntegrationSettings_1a6d45dfa55caf64da1b6b5beeaf559270"></a>

Extensible PlayerInfo class path.

<br>
#### `public FSoftClassPath `[`CatalogSubsystemClass`](#classURH__IntegrationSettings_1a0e60706b4b45ea9aed327c74e92df3a5) <a id="classURH__IntegrationSettings_1a0e60706b4b45ea9aed327c74e92df3a5"></a>

Extensible CatalogSubsystem class path.

<br>
#### `public FSoftClassPath `[`ConfigSubsystemClass`](#classURH__IntegrationSettings_1a22f747a1fe7afba820828fb46d2a8780) <a id="classURH__IntegrationSettings_1a22f747a1fe7afba820828fb46d2a8780"></a>

Extensible ConfigSubsystem class path.

<br>
#### `public FSoftClassPath `[`SessionBrowserCacheClass`](#classURH__IntegrationSettings_1af5ecb3103ab065d38eed4634e6916817) <a id="classURH__IntegrationSettings_1af5ecb3103ab065d38eed4634e6916817"></a>

Extensible SessionBrowserCache class path.

<br>
#### `public FSoftClassPath `[`MatchmakingBrowserCacheClass`](#classURH__IntegrationSettings_1a035a0b0d29e2ed12a2663446c60d811c) <a id="classURH__IntegrationSettings_1a035a0b0d29e2ed12a2663446c60d811c"></a>

Extensible MatchmakingBrowserCache class path.

<br>
#### `public int32 `[`BeginNewAdSessionPriority`](#classURH__IntegrationSettings_1afc878742df435a86affa3c28c65da19a) <a id="classURH__IntegrationSettings_1afc878742df435a86affa3c28c65da19a"></a>

Sets the request priority of Begin New Session calls, lower number is higher priority.

<br>
#### `public int32 `[`FindAdOppertunitiesPriority`](#classURH__IntegrationSettings_1a9e9a3b6b65a8ae71a7d5f7e985066f36) <a id="classURH__IntegrationSettings_1a9e9a3b6b65a8ae71a7d5f7e985066f36"></a>

Sets the request priority of Find Oppertunities calls, lower number is higher priority.

<br>
#### `public int32 `[`UpdateAdOppertunitiesPriority`](#classURH__IntegrationSettings_1ab6514b00e3e6df87716cf78829c89e58) <a id="classURH__IntegrationSettings_1ab6514b00e3e6df87716cf78829c89e58"></a>

Sets the request priority of Update Oppertunities calls, lower number is higher priority.

<br>
#### `public int32 `[`AuthLogoutPriority`](#classURH__IntegrationSettings_1aa8a89a53c4e538c0e7f424d5a28c4a2a) <a id="classURH__IntegrationSettings_1aa8a89a53c4e538c0e7f424d5a28c4a2a"></a>

Sets the request priority of Logouts calls, lower number is higher priority.

<br>
#### `public int32 `[`AuthLoginPriority`](#classURH__IntegrationSettings_1aba8b87a3871ea3ad301106a3377fb6b8) <a id="classURH__IntegrationSettings_1aba8b87a3871ea3ad301106a3377fb6b8"></a>

Sets the request priority of Login calls, lower number is higher priority.

<br>
#### `public int32 `[`GetCatalogAllPriority`](#classURH__IntegrationSettings_1ac5304b5175309e77721ee07577179516) <a id="classURH__IntegrationSettings_1ac5304b5175309e77721ee07577179516"></a>

Sets the request priority of Get Catalog All calls, lower number is higher priority.

<br>
#### `public int32 `[`GetCatalogXpAllPriority`](#classURH__IntegrationSettings_1afbd579a4e0b16b0facf310ba0a0d2ab3) <a id="classURH__IntegrationSettings_1afbd579a4e0b16b0facf310ba0a0d2ab3"></a>

Sets the request priority of Get Catalog Xp All calls, lower number is higher priority.

<br>
#### `public int32 `[`GetCatalogItemPriority`](#classURH__IntegrationSettings_1a74c72d3fa3881c2f059fd06760eff569) <a id="classURH__IntegrationSettings_1a74c72d3fa3881c2f059fd06760eff569"></a>

Sets the request priority of Get Catalog Item calls, lower number is higher priority.

<br>
#### `public int32 `[`GetCatalogInventoryBucketUseRuleSetsAllPriority`](#classURH__IntegrationSettings_1a0ad65a15b3ca3c2e0a558af557728978) <a id="classURH__IntegrationSettings_1a0ad65a15b3ca3c2e0a558af557728978"></a>

Sets the request priority of Get Catalog Inventory Bucket Use Rulesets All calls, lower number is higher priority.

<br>
#### `public int32 `[`GetCatalogPricePointsAllPriority`](#classURH__IntegrationSettings_1af39c9174f441784d5210c67af3065f95) <a id="classURH__IntegrationSettings_1af39c9174f441784d5210c67af3065f95"></a>

Sets the request priority of Get Catalog Price Points All calls, lower number is higher priority.

<br>
#### `public int32 `[`GetCatalogTimeFramesAllPriority`](#classURH__IntegrationSettings_1a360927cc23f433d0d9ac088a8b92ec43) <a id="classURH__IntegrationSettings_1a360927cc23f433d0d9ac088a8b92ec43"></a>

Sets the request priority of Get Catalog Time Frame All calls, lower number is higher priority.

<br>
#### `public int32 `[`GetCatalogVendorPriority`](#classURH__IntegrationSettings_1a4bb561f179cd44b43b77f972b84674a9) <a id="classURH__IntegrationSettings_1a4bb561f179cd44b43b77f972b84674a9"></a>

Sets the request priority of Get Catalog Vendor calls, lower number is higher priority.

<br>
#### `public int32 `[`GetCatalogVendorsAllPriority`](#classURH__IntegrationSettings_1a553832ec54c28a627a521a8586900dc6) <a id="classURH__IntegrationSettings_1a553832ec54c28a627a521a8586900dc6"></a>

Sets the request priority of Get Catalog Vendor All calls, lower number is higher priority.

<br>
#### `public int32 `[`FetchAppSettingsPriority`](#classURH__IntegrationSettings_1a5b6cdb5b53fb4727535f234ac5293ebd) <a id="classURH__IntegrationSettings_1a5b6cdb5b53fb4727535f234ac5293ebd"></a>

Sets the request priority of Fetch App Settings calls, lower number is higher priority.

<br>
#### `public int32 `[`ProcessPlatformEntitlementsPriority`](#classURH__IntegrationSettings_1adb8db52d23e20d65889800005f7fb65c) <a id="classURH__IntegrationSettings_1adb8db52d23e20d65889800005f7fb65c"></a>

Sets the request priority of Process Platform Entitlements calls, lower number is higher priority.

<br>
#### `public int32 `[`RetrievePlatformEntitlementsPriority`](#classURH__IntegrationSettings_1a2b78270f3e088baa257d05c12dfaab83) <a id="classURH__IntegrationSettings_1a2b78270f3e088baa257d05c12dfaab83"></a>

Sets the request priority of Retrieve Platform Entitlements calls, lower number is higher priority.

<br>
#### `public int32 `[`FetchFriendListPriority`](#classURH__IntegrationSettings_1aa04f014b56725364b833d681b307b32c) <a id="classURH__IntegrationSettings_1aa04f014b56725364b833d681b307b32c"></a>

Sets the request priority of Fetch Friend List calls, lower number is higher priority.

<br>
#### `public int32 `[`FetchFriendPriority`](#classURH__IntegrationSettings_1a743b7a579348813ef7231ea2d67e038c) <a id="classURH__IntegrationSettings_1a743b7a579348813ef7231ea2d67e038c"></a>

Sets the request priority of Fetch Friend calls, lower number is higher priority.

<br>
#### `public int32 `[`AddFriendPriority`](#classURH__IntegrationSettings_1a82b8352b5c0526593d079be4ff561307) <a id="classURH__IntegrationSettings_1a82b8352b5c0526593d079be4ff561307"></a>

Sets the request priority of Add Friend calls, lower number is higher priority.

<br>
#### `public int32 `[`RemoveFriendPriority`](#classURH__IntegrationSettings_1a0930cf2032ed31eb40e27b3a7a905d57) <a id="classURH__IntegrationSettings_1a0930cf2032ed31eb40e27b3a7a905d57"></a>

Sets the request priority of Remove Friend calls, lower number is higher priority.

<br>
#### `public int32 `[`AddFriendNotesPriority`](#classURH__IntegrationSettings_1af017cda61c8266057e659e4e40fb4a7f) <a id="classURH__IntegrationSettings_1af017cda61c8266057e659e4e40fb4a7f"></a>

Sets the request priority of Add Friend Notes calls, lower number is higher priority.

<br>
#### `public int32 `[`FetchBlockedListPriority`](#classURH__IntegrationSettings_1a0811cf621f6195bef8b68d962d24e4a2) <a id="classURH__IntegrationSettings_1a0811cf621f6195bef8b68d962d24e4a2"></a>

Sets the request priority of Fetch Blocked List calls, lower number is higher priority.

<br>
#### `public int32 `[`FetchBlockedPlayerPriority`](#classURH__IntegrationSettings_1ae37c306e4c6d4d0445f0a4568f7019f4) <a id="classURH__IntegrationSettings_1ae37c306e4c6d4d0445f0a4568f7019f4"></a>

Sets the request priority of Fetch Blocked Player calls, lower number is higher priority.

<br>
#### `public int32 `[`BlockUnblockPlayerPriority`](#classURH__IntegrationSettings_1a27e8d4c4ed86d705228e5d9891033459) <a id="classURH__IntegrationSettings_1a27e8d4c4ed86d705228e5d9891033459"></a>

Sets the request priority of Block/Unblock Player calls, lower number is higher priority.

<br>
#### `public int32 `[`InventoryCreateSessionPriority`](#classURH__IntegrationSettings_1acca6f7ccd6c074f64a3355430b15f583) <a id="classURH__IntegrationSettings_1acca6f7ccd6c074f64a3355430b15f583"></a>

Sets the request priority of Create Inventory Session calls, lower number is higher priority.

<br>
#### `public int32 `[`InventoryGetSessionPriority`](#classURH__IntegrationSettings_1a79a291b54a550f58fd855662cf939d39) <a id="classURH__IntegrationSettings_1a79a291b54a550f58fd855662cf939d39"></a>

Sets the request priority of Get Inventory Session calls, lower number is higher priority.

<br>
#### `public int32 `[`InventoryGetPriority`](#classURH__IntegrationSettings_1a3d819bda1fefdcd646f39186009a08dc) <a id="classURH__IntegrationSettings_1a3d819bda1fefdcd646f39186009a08dc"></a>

Sets the request priority of Get Inventory calls, lower number is higher priority.

<br>
#### `public int32 `[`InventoryCreatePriority`](#classURH__IntegrationSettings_1aaef9534e9968f0b89933fb2fa693b928) <a id="classURH__IntegrationSettings_1aaef9534e9968f0b89933fb2fa693b928"></a>

Sets the request priority of Create Inventory calls, lower number is higher priority.

<br>
#### `public int32 `[`InventoryUpdatePriority`](#classURH__IntegrationSettings_1ae79f97bf4ff6de4c0d75e41358f59ad7) <a id="classURH__IntegrationSettings_1ae79f97bf4ff6de4c0d75e41358f59ad7"></a>

Sets the request priority of Update Inventory calls, lower number is higher priority.

<br>
#### `public int32 `[`InventoryCreateOrderPriority`](#classURH__IntegrationSettings_1a95e05009c2789ca27a98205d5fb127f2) <a id="classURH__IntegrationSettings_1a95e05009c2789ca27a98205d5fb127f2"></a>

Sets the request priority of Create Inventory Order calls, lower number is higher priority.

<br>
#### `public int32 `[`InventoryGetOrdersPriority`](#classURH__IntegrationSettings_1addf34f3287bd3312846a5978d2703b9f) <a id="classURH__IntegrationSettings_1addf34f3287bd3312846a5978d2703b9f"></a>

Sets the request priority of Get Inventory Orders calls, lower number is higher priority.

<br>
#### `public int32 `[`NotificationPollSelfPriority`](#classURH__IntegrationSettings_1a132a698085ea97992ec3bb57e1eae3e1) <a id="classURH__IntegrationSettings_1a132a698085ea97992ec3bb57e1eae3e1"></a>

Sets the request priority of Polling Notifications for Self calls, lower number is higher priority.

<br>
#### `public int32 `[`NotificationPollOtherPriority`](#classURH__IntegrationSettings_1a8fb41ebf25098232d3ee26134da6b5a3) <a id="classURH__IntegrationSettings_1a8fb41ebf25098232d3ee26134da6b5a3"></a>

Sets the request priority of Polling Notifications for Others calls, lower number is higher priority.

<br>
#### `public int32 `[`NotificationCreatePriority`](#classURH__IntegrationSettings_1a14606a57f206abd1a317be741f4b6ccd) <a id="classURH__IntegrationSettings_1a14606a57f206abd1a317be741f4b6ccd"></a>

Sets the request priority of Create Notifications calls, lower number is higher priority.

<br>
#### `public int32 `[`PresenceUpdatePriority`](#classURH__IntegrationSettings_1a90564c0a9a445a9993766545c0888329) <a id="classURH__IntegrationSettings_1a90564c0a9a445a9993766545c0888329"></a>

Sets the request priority of Updating Presence calls, lower number is higher priority.

<br>
#### `public int32 `[`PresenceGetSelfPriority`](#classURH__IntegrationSettings_1af38e4ac7b3d269fc66636c05e1a3c633) <a id="classURH__IntegrationSettings_1af38e4ac7b3d269fc66636c05e1a3c633"></a>

Sets the request priority of Get Self Presence calls, lower number is higher priority.

<br>
#### `public int32 `[`PresenceGetOtherPriority`](#classURH__IntegrationSettings_1a83ccef552bfe76b46cb79a1afc87d57a) <a id="classURH__IntegrationSettings_1a83ccef552bfe76b46cb79a1afc87d57a"></a>

Sets the request priority of Get Other Presence calls, lower number is higher priority.

<br>
#### `public int32 `[`PresenceGetSettingsPriority`](#classURH__IntegrationSettings_1a1d2689266c6b0924e316055789d73a3d) <a id="classURH__IntegrationSettings_1a1d2689266c6b0924e316055789d73a3d"></a>

Sets the request priority of Get Presence Settings calls, lower number is higher priority.

<br>
#### `public int32 `[`PurgeQueuePriority`](#classURH__IntegrationSettings_1a9aa7b532b8d9aa1767f9e177a8c2f73a) <a id="classURH__IntegrationSettings_1a9aa7b532b8d9aa1767f9e177a8c2f73a"></a>

Sets the request priority of Queue/Dequeue for Purge calls, lower number is higher priority.

<br>
#### `public int32 `[`PurgeGetStatusPriority`](#classURH__IntegrationSettings_1a078df1fcff1db371904259f77a44b32e) <a id="classURH__IntegrationSettings_1a078df1fcff1db371904259f77a44b32e"></a>

Sets the request priority of Get Purge Status calls, lower number is higher priority.

<br>
#### `public int32 `[`GetAllQueueInfoPriority`](#classURH__IntegrationSettings_1aad14de47a305aab4368d7a38b80f766e) <a id="classURH__IntegrationSettings_1aad14de47a305aab4368d7a38b80f766e"></a>

Sets the request priority of Get Queue Info calls, lower number is higher priority.

<br>
#### `public int32 `[`GetMatchmakingTemplatePriority`](#classURH__IntegrationSettings_1aa73827ffcdabb3149c07d6ad14cc7d98) <a id="classURH__IntegrationSettings_1aa73827ffcdabb3149c07d6ad14cc7d98"></a>

Sets the request priority of Get Matchmaking Template calls, lower number is higher priority.

<br>
#### `public int32 `[`GetMapGameInfoPriority`](#classURH__IntegrationSettings_1a8ac2b60ca262eb1fbf75a5ffd309d39d) <a id="classURH__IntegrationSettings_1a8ac2b60ca262eb1fbf75a5ffd309d39d"></a>

Sets the request priority of Get Map Game Info calls, lower number is higher priority.

<br>
#### `public int32 `[`RankingGetPriority`](#classURH__IntegrationSettings_1a9991ff7aba2e69e137d1665e40a45bd7) <a id="classURH__IntegrationSettings_1a9991ff7aba2e69e137d1665e40a45bd7"></a>

Sets the request priority of Get Rank calls, lower number is higher priority.

<br>
#### `public int32 `[`RankingUpdatePriority`](#classURH__IntegrationSettings_1ab2b4525c715fdce6b9ee3b8f5ab98439) <a id="classURH__IntegrationSettings_1ab2b4525c715fdce6b9ee3b8f5ab98439"></a>

Sets the request priority of Update Rank calls, lower number is higher priority.

<br>
#### `public int32 `[`SessionPollPriority`](#classURH__IntegrationSettings_1aa1c2aa3d6f602b685b21eaefc0ddc962) <a id="classURH__IntegrationSettings_1aa1c2aa3d6f602b685b21eaefc0ddc962"></a>

Sets the request priority of Session Polling calls, lower number is higher priority.

<br>
#### `public int32 `[`SessionJoinPriority`](#classURH__IntegrationSettings_1aa7578d63de36b65bf984e6811a05c856) <a id="classURH__IntegrationSettings_1aa7578d63de36b65bf984e6811a05c856"></a>

Sets the request priority of Session Joining calls, lower number is higher priority.

<br>
#### `public int32 `[`SessionLeavePriority`](#classURH__IntegrationSettings_1a9defab236e36fba1c40113449827b6ae) <a id="classURH__IntegrationSettings_1a9defab236e36fba1c40113449827b6ae"></a>

Sets the request priority of Session Leave calls, lower number is higher priority.

<br>
#### `public int32 `[`SessionInvitePriority`](#classURH__IntegrationSettings_1a67c03b5ad16327dfaa897369144f5916) <a id="classURH__IntegrationSettings_1a67c03b5ad16327dfaa897369144f5916"></a>

Sets the request priority of Session Invite calls, lower number is higher priority.

<br>
#### `public int32 `[`SessionKickPriority`](#classURH__IntegrationSettings_1a300315aecd41cf1116a62763d22e4d0d) <a id="classURH__IntegrationSettings_1a300315aecd41cf1116a62763d22e4d0d"></a>

Sets the request priority of Session Kick calls, lower number is higher priority.

<br>
#### `public int32 `[`SessionLeaderChangePriority`](#classURH__IntegrationSettings_1a704d79c0a0689673f6cc7e8547b0b399) <a id="classURH__IntegrationSettings_1a704d79c0a0689673f6cc7e8547b0b399"></a>

Sets the request priority of Session Leader Change calls, lower number is higher priority.

<br>
#### `public int32 `[`SessionChangeTeamsPriority`](#classURH__IntegrationSettings_1ae4e4de1ecf3af71039d248dcc4c45b0c) <a id="classURH__IntegrationSettings_1ae4e4de1ecf3af71039d248dcc4c45b0c"></a>

Sets the request priority of Session Change Teams calls, lower number is higher priority.

<br>
#### `public int32 `[`SessionLeaveQueuePriority`](#classURH__IntegrationSettings_1ad5ae84d1c1570a2f385ec24e57108fd4) <a id="classURH__IntegrationSettings_1ad5ae84d1c1570a2f385ec24e57108fd4"></a>

Sets the request priority of Session Leave Queue calls, lower number is higher priority.

<br>
#### `public int32 `[`SessionRequestInstancePriority`](#classURH__IntegrationSettings_1abc945d76430a5ab6f692bf0a5e999180) <a id="classURH__IntegrationSettings_1abc945d76430a5ab6f692bf0a5e999180"></a>

Sets the request priority of Session Request Instance calls, lower number is higher priority.

<br>
#### `public int32 `[`SessionEndInstancePriority`](#classURH__IntegrationSettings_1a1a0840b1eca26c8342fa9cbee7e4b80b) <a id="classURH__IntegrationSettings_1a1a0840b1eca26c8342fa9cbee7e4b80b"></a>

Sets the request priority of Session End Instance calls, lower number is higher priority.

<br>
#### `public int32 `[`SessionStartMatchPriority`](#classURH__IntegrationSettings_1aec835451bde71a190fc1e695aef4ff7f) <a id="classURH__IntegrationSettings_1aec835451bde71a190fc1e695aef4ff7f"></a>

Sets the request priority of Session Start Match calls, lower number is higher priority.

<br>
#### `public int32 `[`SessionEndMatchPriority`](#classURH__IntegrationSettings_1aaf32bfec46ea7d08fcf2c29ed615aa65) <a id="classURH__IntegrationSettings_1aaf32bfec46ea7d08fcf2c29ed615aa65"></a>

Sets the request priority of Session End Match calls, lower number is higher priority.

<br>
#### `public int32 `[`SessionUpdateSessionInfoPriority`](#classURH__IntegrationSettings_1a9c7c6d6cfb6af07f0fe3f81aa8a69c34) <a id="classURH__IntegrationSettings_1a9c7c6d6cfb6af07f0fe3f81aa8a69c34"></a>

Sets the request priority of Update Session Info calls, lower number is higher priority.

<br>
#### `public int32 `[`SessionUpdateInstanceInfoPriority`](#classURH__IntegrationSettings_1a0865134ce8ddd336130583187cd67aa4) <a id="classURH__IntegrationSettings_1a0865134ce8ddd336130583187cd67aa4"></a>

Sets the request priority of Update Instance Info calls, lower number is higher priority.

<br>
#### `public int32 `[`SessionUpdateBrowserInfoPriority`](#classURH__IntegrationSettings_1aa5e0c76dbae5e34b456bcaaafa68cf94) <a id="classURH__IntegrationSettings_1aa5e0c76dbae5e34b456bcaaafa68cf94"></a>

Sets the request priority of Update Browser Info calls, lower number is higher priority.

<br>
#### `public int32 `[`SessionDeleteBrowserInfoPriority`](#classURH__IntegrationSettings_1a005338696286a0b743bfbdb480e12e44) <a id="classURH__IntegrationSettings_1a005338696286a0b743bfbdb480e12e44"></a>

Sets the request priority of Delete Browser Info calls, lower number is higher priority.

<br>
#### `public int32 `[`SessionInstanceMarkFubarPriority`](#classURH__IntegrationSettings_1adb06a4293164df68adea68c00521e5fb) <a id="classURH__IntegrationSettings_1adb06a4293164df68adea68c00521e5fb"></a>

Sets the request priority of Marking an Instane Fubar calls, lower number is higher priority.

<br>
#### `public int32 `[`SessionUpdateWithPlatformSessionPriority`](#classURH__IntegrationSettings_1ae52bf61cfe6e937cc6a563133a209991) <a id="classURH__IntegrationSettings_1ae52bf61cfe6e937cc6a563133a209991"></a>

Sets the request priority of Session Update With Platform Session calls, lower number is higher priority.

<br>
#### `public int32 `[`SessionGetTemplatePriority`](#classURH__IntegrationSettings_1a40090726415cdd4ed601d26c4a2960d9) <a id="classURH__IntegrationSettings_1a40090726415cdd4ed601d26c4a2960d9"></a>

Sets the request priority of Session Get Template calls, lower number is higher priority.

<br>
#### `public int32 `[`SessionGetByAllocationIdPriority`](#classURH__IntegrationSettings_1a0e8868c0d121441924f925de96d66120) <a id="classURH__IntegrationSettings_1a0e8868c0d121441924f925de96d66120"></a>

Sets the request priority of Session By Allocation Id calls, lower number is higher priority.

<br>
#### `public int32 `[`SessionGetBySessionIdPriority`](#classURH__IntegrationSettings_1a252127302ea79fe762255b0353809747) <a id="classURH__IntegrationSettings_1a252127302ea79fe762255b0353809747"></a>

Sets the request priority of Session By Session Id calls, lower number is higher priority.

<br>
#### `public int32 `[`SessionGetByTypePriority`](#classURH__IntegrationSettings_1af20dfabda6e113f75816401bdaca2614) <a id="classURH__IntegrationSettings_1af20dfabda6e113f75816401bdaca2614"></a>

Sets the request priority of Session By Type calls, lower number is higher priority.

<br>
#### `public int32 `[`SettingsGetPriority`](#classURH__IntegrationSettings_1ab3de492d46aeb771fc964cc02a00f048) <a id="classURH__IntegrationSettings_1ab3de492d46aeb771fc964cc02a00f048"></a>

Sets the request priority of Get Settings calls, lower number is higher priority.

<br>
#### `public int32 `[`SettingsUpdatePriority`](#classURH__IntegrationSettings_1aab7ca97767260ad27f6ab2ed2f991f35) <a id="classURH__IntegrationSettings_1aab7ca97767260ad27f6ab2ed2f991f35"></a>

Sets the request priority of Update Settings calls, lower number is higher priority.

<br>
#### `public int32 `[`GetSiteSettingsPriority`](#classURH__IntegrationSettings_1a05394419f792bfa361b0e1b2adccf198) <a id="classURH__IntegrationSettings_1a05394419f792bfa361b0e1b2adccf198"></a>

Sets the request priority of Get Site Settings calls, lower number is higher priority.

<br>
#### `public int32 `[`UsersLookupPlayerPriority`](#classURH__IntegrationSettings_1a17589c62d53386508f41321e98bbfeeb) <a id="classURH__IntegrationSettings_1a17589c62d53386508f41321e98bbfeeb"></a>

Sets the request priority of Lookup Users calls, lower number is higher priority.

<br>
#### `public int32 `[`UsersGetLinkedPlatformsPriority`](#classURH__IntegrationSettings_1a99b0ffa18f2f78923fdd46d4499588e1) <a id="classURH__IntegrationSettings_1a99b0ffa18f2f78923fdd46d4499588e1"></a>

Sets the request priority of Get Linked Platforms calls, lower number is higher priority.

<br>
## struct `FRH_SandboxConfiguration` <a id="structFRH__SandboxConfiguration"></a>

Settings for Sandbox Configuration.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`SandboxId`](#structFRH__SandboxConfiguration_1a17ce97a49f5278d869a5b9c53be4c1fd) | Sandbox Id.
`public FString `[`BaseUrl`](#structFRH__SandboxConfiguration_1ac431667ae5be14c68111b05aed9200cb) | URL for the sandbox.

#### Members

#### `public FString `[`SandboxId`](#structFRH__SandboxConfiguration_1a17ce97a49f5278d869a5b9c53be4c1fd) <a id="structFRH__SandboxConfiguration_1a17ce97a49f5278d869a5b9c53be4c1fd"></a>

Sandbox Id.

<br>
#### `public FString `[`BaseUrl`](#structFRH__SandboxConfiguration_1ac431667ae5be14c68111b05aed9200cb) <a id="structFRH__SandboxConfiguration_1ac431667ae5be14c68111b05aed9200cb"></a>

URL for the sandbox.

<br>
