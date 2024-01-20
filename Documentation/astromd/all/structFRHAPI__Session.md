---
title: FRHAPI_Session Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A session resource.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[Type](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1aa99c74b9cc52640a6c132b3517d7fcf1)|template type|
|FString|[SessionId](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1adb1ba4643cbd9dabfde8d3e359500909)|unique ID for this session within its type|
|[FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo)|[Instance_Optional](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a9d5d31fd3e79b62891ba654cfa1bf6e2)||
|bool|[Instance_IsSet](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a9e166a0d902369089a9362287090e1f8)|true if Instance_Optional has been set to a value|
|[FRHAPI_MatchInfo](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo)|[Match_Optional](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a865f37ad58a4c3eae21fc72d843b6a3a)||
|bool|[Match_IsSet](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a97d359ac0758f38f0df5ee49c54c8108)|true if Match_Optional has been set to a value|
|[FRHAPI_MatchmakingInfo](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo)|[Matchmaking_Optional](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1af3225af871f86c2aae3381a62dfdd5db)||
|bool|[Matchmaking_IsSet](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a61ea704dec07fefa55e7f47d4c47c744)|true if Matchmaking_Optional has been set to a value|
|[FRHAPI_BackfillInfo](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo)|[Backfill_Optional](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a241a85d41265c1bfdc254c4ba230f518)||
|bool|[Backfill_IsSet](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a7d8bfe390d73575b4e826316bf6e6594)|true if Backfill_Optional has been set to a value|
|[FRHAPI_BrowserInfo](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo)|[Browser_Optional](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a7595f83d2fded5187f30268f207bfc54)||
|bool|[Browser_IsSet](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1aa1ace01879821c9c9b2b978cf2d3bcb4)|true if Browser_Optional has been set to a value|
|bool|[Joinable](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a9a4a29da2db810fc7b40b6e955839907)|Is this session freely joinable by players without an invite?|
|TArray< [FRHAPI_SessionTeam](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam) >|[Teams](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a3489eec79e810de928f11a6d36b6d16e)|List of teams of players currently in the session.|
|TArray< [FRHAPI_PlatformSession](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession) >|[PlatformSession_Optional](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1aef33c93a7e5567b34d41af76b8441fe3)|Child Platform Sessions for this session. A player joining one of the child platform sessions implicitly joins the parent session.|
|bool|[PlatformSession_IsSet](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a6f2c00e800ad78c74ead76a70720d494)|true if PlatformSession_Optional has been set to a value|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a0d426749efebca34803c875e390e1c4b)|Leader Player or instance defined custom data about this session.|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a02208d99aadc08bc3ccc982f92db99c8)|true if CustomData_Optional has been set to a value|
|FDateTime|[Created](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1ab51fce893a31fce6b645ffb16c34544b)|Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.|
|FString|[RegionId_Optional](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a4d0e9ae0e853919fe3c48fee1c2ff734)|Preferred region for the instance and match to take place in.|
|bool|[RegionId_IsSet](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1abae73173741ad3d3897e92421d1dfd92)|true if RegionId_Optional has been set to a value|
|bool|[CreatedByMatchmaking_Optional](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1affa742fa5462aa1c981d0a9612205d24)|Flag of whether or not this session was created by matchmaking or not.|
|bool|[CreatedByMatchmaking_IsSet](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1ab568dee593d8d974177ac40172c87413)|true if CreatedByMatchmaking_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a21a3afd198e0ca8834b3da27eac1ff6d)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a84c8664b032ad2b3f0afd414af4819aa)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetType](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a4b8005e8cc0e349c7c6e9ea8a8b83259)()|Gets the value of Type.|
|const FString &|[GetType](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a8cee3a500baa546a077d8fa572dd4a09)()|Gets the value of Type.|
|void|[SetType](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1ae442d9294aea3fa2e28da1f5bde0ea29)(FString NewValue)|Sets the value of Type.|
|FString &|[GetSessionId](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a534fc1fa04faa28a5efcb160fa9764e9)()|Gets the value of SessionId.|
|const FString &|[GetSessionId](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a49c80fd3293ed2083b5ce39387bdae29)()|Gets the value of SessionId.|
|void|[SetSessionId](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1ab4a277c6bb8a9d996c92696cabfd4135)(FString NewValue)|Sets the value of SessionId.|
|[FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo) &|[GetInstance](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a978c6c105acee5cc6a4cd8a81786b5d3)()|Gets the value of Instance_Optional, regardless of it having been set.|
|const [FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo) &|[GetInstance](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a97d938a1e2cd367f47dfaf6254c25142)()|Gets the value of Instance_Optional, regardless of it having been set.|
|const [FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo) &|[GetInstance](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a7aefd48c5fcf292677de1c5a5a41ef92)(const [FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo) & DefaultValue)|Gets the value of Instance_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetInstance](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1af45c7ac833c61962d1bc430614ed947c)([FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo) & OutValue)|Fills OutValue with the value of Instance_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo) *|[GetInstanceOrNull](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1ae5c1e0c01810bdccbb8f0ca609f2f78d)()|Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo) *|[GetInstanceOrNull](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1ac5f8e4ac9f5b33873d6a4aa8248e163d)()|Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetInstance](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1ae7a17cfcfc3b2bc60e7b3697ca5407e2)([FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo) NewValue)|Sets the value of Instance_Optional and also sets Instance_IsSet to true.|
|void|[ClearInstance](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a8f06253ad1ab15f087a1fac3c994176f)()|Clears the value of Instance_Optional and sets Instance_IsSet to false.|
|[FRHAPI_MatchInfo](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo) &|[GetMatch](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a663056f65075925d379ff552e603ea96)()|Gets the value of Match_Optional, regardless of it having been set.|
|const [FRHAPI_MatchInfo](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo) &|[GetMatch](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a3900428342a3a13ee73497256dd0e424)()|Gets the value of Match_Optional, regardless of it having been set.|
|const [FRHAPI_MatchInfo](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo) &|[GetMatch](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a96fc4698bfc574871cde9f8f92e144c5)(const [FRHAPI_MatchInfo](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo) & DefaultValue)|Gets the value of Match_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetMatch](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1ab86a9b84d9d6c3e79ea272dc2d74071d)([FRHAPI_MatchInfo](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo) & OutValue)|Fills OutValue with the value of Match_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_MatchInfo](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo) *|[GetMatchOrNull](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a621dbcbd722c00a2bbec90d69e37ef44)()|Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_MatchInfo](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo) *|[GetMatchOrNull](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1acea2787f1ec14dcf5f068ae8178004bb)()|Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetMatch](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1acdf2a6ab7835697ad201a39a74a1cf48)([FRHAPI_MatchInfo](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo) NewValue)|Sets the value of Match_Optional and also sets Match_IsSet to true.|
|void|[ClearMatch](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a3f5be584d7ac7a9d06a4f8b9b6ff9ace)()|Clears the value of Match_Optional and sets Match_IsSet to false.|
|[FRHAPI_MatchmakingInfo](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo) &|[GetMatchmaking](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a7e72ca984908081c10f44bcec1763cc3)()|Gets the value of Matchmaking_Optional, regardless of it having been set.|
|const [FRHAPI_MatchmakingInfo](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo) &|[GetMatchmaking](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a3b04668ebd59b9dd384b1f25eb06d968)()|Gets the value of Matchmaking_Optional, regardless of it having been set.|
|const [FRHAPI_MatchmakingInfo](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo) &|[GetMatchmaking](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a545e19b64f506b5f3793e85941240d86)(const [FRHAPI_MatchmakingInfo](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo) & DefaultValue)|Gets the value of Matchmaking_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetMatchmaking](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a58e60dc4c2d4443301862a4815d83480)([FRHAPI_MatchmakingInfo](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo) & OutValue)|Fills OutValue with the value of Matchmaking_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_MatchmakingInfo](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo) *|[GetMatchmakingOrNull](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1ad0c2005853a2d3d3a3158cfff70eae22)()|Returns a pointer to Matchmaking_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_MatchmakingInfo](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo) *|[GetMatchmakingOrNull](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1aa65a144963e796b6ca2fcfb5f1d77dff)()|Returns a pointer to Matchmaking_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetMatchmaking](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a9273519506c598c2a816c2f8a83ba611)([FRHAPI_MatchmakingInfo](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo) NewValue)|Sets the value of Matchmaking_Optional and also sets Matchmaking_IsSet to true.|
|void|[ClearMatchmaking](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a91953108c08db083b5fce7614b2b2596)()|Clears the value of Matchmaking_Optional and sets Matchmaking_IsSet to false.|
|[FRHAPI_BackfillInfo](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo) &|[GetBackfill](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a15f72525350f452e25fd61d66fd7a756)()|Gets the value of Backfill_Optional, regardless of it having been set.|
|const [FRHAPI_BackfillInfo](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo) &|[GetBackfill](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a21b593a805dc945474b4ec9e30e63fdf)()|Gets the value of Backfill_Optional, regardless of it having been set.|
|const [FRHAPI_BackfillInfo](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo) &|[GetBackfill](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1ae16601ab6c078bc61d792e27287dde2a)(const [FRHAPI_BackfillInfo](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo) & DefaultValue)|Gets the value of Backfill_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetBackfill](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1ab84409512d3ec81b4d5da14b3795978a)([FRHAPI_BackfillInfo](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo) & OutValue)|Fills OutValue with the value of Backfill_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_BackfillInfo](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo) *|[GetBackfillOrNull](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1aa468234b83a765da84939b62d4099e18)()|Returns a pointer to Backfill_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_BackfillInfo](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo) *|[GetBackfillOrNull](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1adb356a68ec0f1a96a374d60929017b1c)()|Returns a pointer to Backfill_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetBackfill](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a638a1d301daa4f29030c3f97e37681d3)([FRHAPI_BackfillInfo](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo) NewValue)|Sets the value of Backfill_Optional and also sets Backfill_IsSet to true.|
|void|[ClearBackfill](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a2326b644868f5f64e80aab9b67d81a90)()|Clears the value of Backfill_Optional and sets Backfill_IsSet to false.|
|[FRHAPI_BrowserInfo](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo) &|[GetBrowser](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a2cfa5643b7ba91b7efa751adba2c6fd2)()|Gets the value of Browser_Optional, regardless of it having been set.|
|const [FRHAPI_BrowserInfo](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo) &|[GetBrowser](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1afddcc33cd67e5b5d41a30e135136c1ed)()|Gets the value of Browser_Optional, regardless of it having been set.|
|const [FRHAPI_BrowserInfo](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo) &|[GetBrowser](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a1cce194385a9388b08dbd1be9fdf61cf)(const [FRHAPI_BrowserInfo](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo) & DefaultValue)|Gets the value of Browser_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetBrowser](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1af58dceb39835a33a837360a773e6b94d)([FRHAPI_BrowserInfo](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo) & OutValue)|Fills OutValue with the value of Browser_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_BrowserInfo](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo) *|[GetBrowserOrNull](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a5ca76953f5b54edcd38534e3063f5021)()|Returns a pointer to Browser_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_BrowserInfo](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo) *|[GetBrowserOrNull](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a88606729e6afe871b10edceddd76ea7f)()|Returns a pointer to Browser_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetBrowser](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1aef47b5ce1532e9a2e5672ef1071ce225)([FRHAPI_BrowserInfo](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo) NewValue)|Sets the value of Browser_Optional and also sets Browser_IsSet to true.|
|void|[ClearBrowser](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a8300261fe2260b8077d81a0b2a10ed95)()|Clears the value of Browser_Optional and sets Browser_IsSet to false.|
|bool &|[GetJoinable](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a8003484ab6879e9688a03c7491409e1c)()|Gets the value of Joinable.|
|const bool &|[GetJoinable](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1ae8ea9ac7155aec5ede4e0db19be45819)()|Gets the value of Joinable.|
|void|[SetJoinable](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a32d534d6a28718ac8056dd5edad60524)(bool NewValue)|Sets the value of Joinable.|
|bool|[IsJoinableDefaultValue](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1ab2c839e89e7ef8c8d3517f4dea32e913)()|Returns true if Joinable matches the default value.|
|void|[SetJoinableToDefault](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1ad32ed242c030d95e88564f3f0bd98711)()|Sets the value of Joinable to its default|
|TArray< [FRHAPI_SessionTeam](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam) > &|[GetTeams](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1ab7008a5afdc6a77a9b21d9f0a687866e)()|Gets the value of Teams.|
|const TArray< [FRHAPI_SessionTeam](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam) > &|[GetTeams](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1ad7cdb19d35e96ccfdf95561febc18a60)()|Gets the value of Teams.|
|void|[SetTeams](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a85f7b809ec82e117ac80ba4593f221df)(TArray< [FRHAPI_SessionTeam](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam) > NewValue)|Sets the value of Teams.|
|TArray< [FRHAPI_PlatformSession](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession) > &|[GetPlatformSession](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a8c178d130dfbf6984477186bba10bdb6)()|Gets the value of PlatformSession_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_PlatformSession](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession) > &|[GetPlatformSession](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a50bf670c4cad94a91c9dcef23a7826a2)()|Gets the value of PlatformSession_Optional, regardless of it having been set.|
|const TArray< [FRHAPI_PlatformSession](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession) > &|[GetPlatformSession](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a4d80598db285868a62904cc7a4087fd0)(const TArray< [FRHAPI_PlatformSession](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession) > & DefaultValue)|Gets the value of PlatformSession_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPlatformSession](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a3ad19c94403f3b16a21e32ac63308f39)(TArray< [FRHAPI_PlatformSession](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession) > & OutValue)|Fills OutValue with the value of PlatformSession_Optional and returns true if it has been set, otherwise returns false.|
|TArray< [FRHAPI_PlatformSession](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession) > *|[GetPlatformSessionOrNull](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a399665b2b0c76f170f8997913152b613)()|Returns a pointer to PlatformSession_Optional, if it has been set, otherwise returns nullptr.|
|const TArray< [FRHAPI_PlatformSession](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession) > *|[GetPlatformSessionOrNull](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a18f938d6a17d7f32dc52a327e55b98c0)()|Returns a pointer to PlatformSession_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPlatformSession](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a1e57ebcbe14f2f5190acab3972ead250)(TArray< [FRHAPI_PlatformSession](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession) > NewValue)|Sets the value of PlatformSession_Optional and also sets PlatformSession_IsSet to true.|
|void|[ClearPlatformSession](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1ab2a2e49368eff0e0b474a8698449ee59)()|Clears the value of PlatformSession_Optional and sets PlatformSession_IsSet to false.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1abed072171f304dcb8b90486b80943efa)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1ad27ca08587eedfe4b8e9ec79233cc0c4)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a7b13eb31cdc9b0badc6cdff6f96b9f5b)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a3c79c259ca67fda3d78a5e9fb8524196)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1ac249be887fd6245e401a68aa7d511bd9)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a3fca4472cba176ea8c34aa97de65895e)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a1fbb989121313dfebf951e98202effb3)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a32314b8c9e8d7b7ce270550cff54ab02)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
|FDateTime &|[GetCreated](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a4a913a2628bb2e473ac8f41c97628613)()|Gets the value of Created.|
|const FDateTime &|[GetCreated](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a3d258ecf804b00ae3b7d44d2eafdd08d)()|Gets the value of Created.|
|void|[SetCreated](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a8868880c047000f8ea10662e426d2035)(FDateTime NewValue)|Sets the value of Created.|
|FString &|[GetRegionId](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a5823c390317676a992c6de596b07726e)()|Gets the value of RegionId_Optional, regardless of it having been set.|
|const FString &|[GetRegionId](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1afc68b80e9f4e79b40704a20ad62946a3)()|Gets the value of RegionId_Optional, regardless of it having been set.|
|const FString &|[GetRegionId](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1acdeb08926396cda4a845f46f2686d30b)(const FString & DefaultValue)|Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetRegionId](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1ac5e6fe80b1ca4307432e555b0babdcd3)(FString & OutValue)|Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetRegionIdOrNull](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1ae11e272a5b85d6af7d79b67b5ee09989)()|Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetRegionIdOrNull](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a80e86b3b03b44086aff3e9d090fe1267)()|Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetRegionId](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a556488693f5dbb2409e5e2a41a55358d)(FString NewValue)|Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.|
|void|[ClearRegionId](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a30fad9245a3b507c31661ea5b585e11c)()|Clears the value of RegionId_Optional and sets RegionId_IsSet to false.|
|bool &|[GetCreatedByMatchmaking](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1ae5447a41db818e93919c1bb590b8ba93)()|Gets the value of CreatedByMatchmaking_Optional, regardless of it having been set.|
|const bool &|[GetCreatedByMatchmaking](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a2491fbf7efba2d8eecd8aa3712a47048)()|Gets the value of CreatedByMatchmaking_Optional, regardless of it having been set.|
|const bool &|[GetCreatedByMatchmaking](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a93939c7bd58a685b2c86a7a7ef284c8c)(const bool & DefaultValue)|Gets the value of CreatedByMatchmaking_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCreatedByMatchmaking](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1abc3bdbaf68c4c37a60f9f81fa64debe2)(bool & OutValue)|Fills OutValue with the value of CreatedByMatchmaking_Optional and returns true if it has been set, otherwise returns false.|
|bool *|[GetCreatedByMatchmakingOrNull](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a1ee4a02d8cef77499ea1bafe725a8a52)()|Returns a pointer to CreatedByMatchmaking_Optional, if it has been set, otherwise returns nullptr.|
|const bool *|[GetCreatedByMatchmakingOrNull](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a6c95acf174c2fc5e4d6c4f59febd8ca6)()|Returns a pointer to CreatedByMatchmaking_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCreatedByMatchmaking](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1ae6b9e72e6aae07f2cbf4d3bc38458665)(bool NewValue)|Sets the value of CreatedByMatchmaking_Optional and also sets CreatedByMatchmaking_IsSet to true.|
|void|[ClearCreatedByMatchmaking](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1af85992cc0259a2a30e553b1320c1e224)()|Clears the value of CreatedByMatchmaking_Optional and sets CreatedByMatchmaking_IsSet to false.|
|bool|[IsCreatedByMatchmakingDefaultValue](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1a4497fa87bd0e35ecdf5b09b0714d36ad)()|Returns true if CreatedByMatchmaking_Optional is set and matches the default value.|
|void|[SetCreatedByMatchmakingToDefault](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session_1ac89a96065989ec35f4c1e11ca9bc81c6)()|Sets the value of CreatedByMatchmaking_Optional to its default and also sets CreatedByMatchmaking_IsSet to true.|
## Public Attributes



### `Type` <a id="structFRHAPI__Session_1aa99c74b9cc52640a6c132b3517d7fcf1"></a>

`FString FRHAPI_Session::Type`

template type




### `SessionId` <a id="structFRHAPI__Session_1adb1ba4643cbd9dabfde8d3e359500909"></a>

`FString FRHAPI_Session::SessionId`

unique ID for this session within its type




### `Instance_Optional` <a id="structFRHAPI__Session_1a9d5d31fd3e79b62891ba654cfa1bf6e2"></a>

`FRHAPI_InstanceInfo FRHAPI_Session::Instance_Optional`






### `Instance_IsSet` <a id="structFRHAPI__Session_1a9e166a0d902369089a9362287090e1f8"></a>

`bool FRHAPI_Session::Instance_IsSet`

true if Instance_Optional has been set to a value




### `Match_Optional` <a id="structFRHAPI__Session_1a865f37ad58a4c3eae21fc72d843b6a3a"></a>

`FRHAPI_MatchInfo FRHAPI_Session::Match_Optional`






### `Match_IsSet` <a id="structFRHAPI__Session_1a97d359ac0758f38f0df5ee49c54c8108"></a>

`bool FRHAPI_Session::Match_IsSet`

true if Match_Optional has been set to a value




### `Matchmaking_Optional` <a id="structFRHAPI__Session_1af3225af871f86c2aae3381a62dfdd5db"></a>

`FRHAPI_MatchmakingInfo FRHAPI_Session::Matchmaking_Optional`






### `Matchmaking_IsSet` <a id="structFRHAPI__Session_1a61ea704dec07fefa55e7f47d4c47c744"></a>

`bool FRHAPI_Session::Matchmaking_IsSet`

true if Matchmaking_Optional has been set to a value




### `Backfill_Optional` <a id="structFRHAPI__Session_1a241a85d41265c1bfdc254c4ba230f518"></a>

`FRHAPI_BackfillInfo FRHAPI_Session::Backfill_Optional`






### `Backfill_IsSet` <a id="structFRHAPI__Session_1a7d8bfe390d73575b4e826316bf6e6594"></a>

`bool FRHAPI_Session::Backfill_IsSet`

true if Backfill_Optional has been set to a value




### `Browser_Optional` <a id="structFRHAPI__Session_1a7595f83d2fded5187f30268f207bfc54"></a>

`FRHAPI_BrowserInfo FRHAPI_Session::Browser_Optional`






### `Browser_IsSet` <a id="structFRHAPI__Session_1aa1ace01879821c9c9b2b978cf2d3bcb4"></a>

`bool FRHAPI_Session::Browser_IsSet`

true if Browser_Optional has been set to a value




### `Joinable` <a id="structFRHAPI__Session_1a9a4a29da2db810fc7b40b6e955839907"></a>

`bool FRHAPI_Session::Joinable`

Is this session freely joinable by players without an invite?




### `Teams` <a id="structFRHAPI__Session_1a3489eec79e810de928f11a6d36b6d16e"></a>

`TArray<FRHAPI_SessionTeam> FRHAPI_Session::Teams`

List of teams of players currently in the session.




### `PlatformSession_Optional` <a id="structFRHAPI__Session_1aef33c93a7e5567b34d41af76b8441fe3"></a>

`TArray<FRHAPI_PlatformSession> FRHAPI_Session::PlatformSession_Optional`

Child Platform Sessions for this session. A player joining one of the child platform sessions implicitly joins the parent session.




### `PlatformSession_IsSet` <a id="structFRHAPI__Session_1a6f2c00e800ad78c74ead76a70720d494"></a>

`bool FRHAPI_Session::PlatformSession_IsSet`

true if PlatformSession_Optional has been set to a value




### `CustomData_Optional` <a id="structFRHAPI__Session_1a0d426749efebca34803c875e390e1c4b"></a>

`TMap<FString, FString> FRHAPI_Session::CustomData_Optional`

Leader Player or instance defined custom data about this session.




### `CustomData_IsSet` <a id="structFRHAPI__Session_1a02208d99aadc08bc3ccc982f92db99c8"></a>

`bool FRHAPI_Session::CustomData_IsSet`

true if CustomData_Optional has been set to a value




### `Created` <a id="structFRHAPI__Session_1ab51fce893a31fce6b645ffb16c34544b"></a>

`FDateTime FRHAPI_Session::Created`

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.




### `RegionId_Optional` <a id="structFRHAPI__Session_1a4d0e9ae0e853919fe3c48fee1c2ff734"></a>

`FString FRHAPI_Session::RegionId_Optional`

Preferred region for the instance and match to take place in.




### `RegionId_IsSet` <a id="structFRHAPI__Session_1abae73173741ad3d3897e92421d1dfd92"></a>

`bool FRHAPI_Session::RegionId_IsSet`

true if RegionId_Optional has been set to a value




### `CreatedByMatchmaking_Optional` <a id="structFRHAPI__Session_1affa742fa5462aa1c981d0a9612205d24"></a>

`bool FRHAPI_Session::CreatedByMatchmaking_Optional`

Flag of whether or not this session was created by matchmaking or not.




### `CreatedByMatchmaking_IsSet` <a id="structFRHAPI__Session_1ab568dee593d8d974177ac40172c87413"></a>

`bool FRHAPI_Session::CreatedByMatchmaking_IsSet`

true if CreatedByMatchmaking_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__Session_1a21a3afd198e0ca8834b3da27eac1ff6d"></a>

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



### `WriteJson` <a id="structFRHAPI__Session_1a84c8664b032ad2b3f0afd414af4819aa"></a>

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



### `GetType` <a id="structFRHAPI__Session_1a4b8005e8cc0e349c7c6e9ea8a8b83259"></a>

FString & GetType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Type.




### `GetType` <a id="structFRHAPI__Session_1a8cee3a500baa546a077d8fa572dd4a09"></a>

const FString & GetType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Type.




### `SetType` <a id="structFRHAPI__Session_1ae442d9294aea3fa2e28da1f5bde0ea29"></a>

void SetType(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Type.




### `GetSessionId` <a id="structFRHAPI__Session_1a534fc1fa04faa28a5efcb160fa9764e9"></a>

FString & GetSessionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SessionId.




### `GetSessionId` <a id="structFRHAPI__Session_1a49c80fd3293ed2083b5ce39387bdae29"></a>

const FString & GetSessionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SessionId.




### `SetSessionId` <a id="structFRHAPI__Session_1ab4a277c6bb8a9d996c92696cabfd4135"></a>

void SetSessionId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of SessionId.




### `GetInstance` <a id="structFRHAPI__Session_1a978c6c105acee5cc6a4cd8a81786b5d3"></a>

[FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo) & GetInstance()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Instance_Optional, regardless of it having been set.




### `GetInstance` <a id="structFRHAPI__Session_1a97d938a1e2cd367f47dfaf6254c25142"></a>

const [FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo) & GetInstance()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Instance_Optional, regardless of it having been set.




### `GetInstance` <a id="structFRHAPI__Session_1a7aefd48c5fcf292677de1c5a5a41ef92"></a>

const [FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo) & GetInstance(const [FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo) &|DefaultValue|

#### Description

Gets the value of Instance_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetInstance` <a id="structFRHAPI__Session_1af45c7ac833c61962d1bc430614ed947c"></a>

bool GetInstance([FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo) &|OutValue|

#### Description

Fills OutValue with the value of Instance_Optional and returns true if it has been set, otherwise returns false.




### `GetInstanceOrNull` <a id="structFRHAPI__Session_1ae5c1e0c01810bdccbb8f0ca609f2f78d"></a>

[FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo) * GetInstanceOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.




### `GetInstanceOrNull` <a id="structFRHAPI__Session_1ac5f8e4ac9f5b33873d6a4aa8248e163d"></a>

const [FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo) * GetInstanceOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.




### `SetInstance` <a id="structFRHAPI__Session_1ae7a17cfcfc3b2bc60e7b3697ca5407e2"></a>

void SetInstance([FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_InstanceInfo](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo)|NewValue|

#### Description

Sets the value of Instance_Optional and also sets Instance_IsSet to true.




### `ClearInstance` <a id="structFRHAPI__Session_1a8f06253ad1ab15f087a1fac3c994176f"></a>

void ClearInstance()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Instance_Optional and sets Instance_IsSet to false.




### `GetMatch` <a id="structFRHAPI__Session_1a663056f65075925d379ff552e603ea96"></a>

[FRHAPI_MatchInfo](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo) & GetMatch()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Match_Optional, regardless of it having been set.




### `GetMatch` <a id="structFRHAPI__Session_1a3900428342a3a13ee73497256dd0e424"></a>

const [FRHAPI_MatchInfo](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo) & GetMatch()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Match_Optional, regardless of it having been set.




### `GetMatch` <a id="structFRHAPI__Session_1a96fc4698bfc574871cde9f8f92e144c5"></a>

const [FRHAPI_MatchInfo](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo) & GetMatch(const [FRHAPI_MatchInfo](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_MatchInfo](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo) &|DefaultValue|

#### Description

Gets the value of Match_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetMatch` <a id="structFRHAPI__Session_1ab86a9b84d9d6c3e79ea272dc2d74071d"></a>

bool GetMatch([FRHAPI_MatchInfo](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_MatchInfo](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo) &|OutValue|

#### Description

Fills OutValue with the value of Match_Optional and returns true if it has been set, otherwise returns false.




### `GetMatchOrNull` <a id="structFRHAPI__Session_1a621dbcbd722c00a2bbec90d69e37ef44"></a>

[FRHAPI_MatchInfo](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo) * GetMatchOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.




### `GetMatchOrNull` <a id="structFRHAPI__Session_1acea2787f1ec14dcf5f068ae8178004bb"></a>

const [FRHAPI_MatchInfo](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo) * GetMatchOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.




### `SetMatch` <a id="structFRHAPI__Session_1acdf2a6ab7835697ad201a39a74a1cf48"></a>

void SetMatch([FRHAPI_MatchInfo](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_MatchInfo](/unreal-plugins/all/structfrhapi__matchinfo/#structFRHAPI__MatchInfo)|NewValue|

#### Description

Sets the value of Match_Optional and also sets Match_IsSet to true.




### `ClearMatch` <a id="structFRHAPI__Session_1a3f5be584d7ac7a9d06a4f8b9b6ff9ace"></a>

void ClearMatch()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Match_Optional and sets Match_IsSet to false.




### `GetMatchmaking` <a id="structFRHAPI__Session_1a7e72ca984908081c10f44bcec1763cc3"></a>

[FRHAPI_MatchmakingInfo](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo) & GetMatchmaking()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Matchmaking_Optional, regardless of it having been set.




### `GetMatchmaking` <a id="structFRHAPI__Session_1a3b04668ebd59b9dd384b1f25eb06d968"></a>

const [FRHAPI_MatchmakingInfo](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo) & GetMatchmaking()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Matchmaking_Optional, regardless of it having been set.




### `GetMatchmaking` <a id="structFRHAPI__Session_1a545e19b64f506b5f3793e85941240d86"></a>

const [FRHAPI_MatchmakingInfo](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo) & GetMatchmaking(const [FRHAPI_MatchmakingInfo](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_MatchmakingInfo](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo) &|DefaultValue|

#### Description

Gets the value of Matchmaking_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetMatchmaking` <a id="structFRHAPI__Session_1a58e60dc4c2d4443301862a4815d83480"></a>

bool GetMatchmaking([FRHAPI_MatchmakingInfo](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_MatchmakingInfo](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo) &|OutValue|

#### Description

Fills OutValue with the value of Matchmaking_Optional and returns true if it has been set, otherwise returns false.




### `GetMatchmakingOrNull` <a id="structFRHAPI__Session_1ad0c2005853a2d3d3a3158cfff70eae22"></a>

[FRHAPI_MatchmakingInfo](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo) * GetMatchmakingOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Matchmaking_Optional, if it has been set, otherwise returns nullptr.




### `GetMatchmakingOrNull` <a id="structFRHAPI__Session_1aa65a144963e796b6ca2fcfb5f1d77dff"></a>

const [FRHAPI_MatchmakingInfo](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo) * GetMatchmakingOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Matchmaking_Optional, if it has been set, otherwise returns nullptr.




### `SetMatchmaking` <a id="structFRHAPI__Session_1a9273519506c598c2a816c2f8a83ba611"></a>

void SetMatchmaking([FRHAPI_MatchmakingInfo](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_MatchmakingInfo](/unreal-plugins/all/structfrhapi__matchmakinginfo/#structFRHAPI__MatchmakingInfo)|NewValue|

#### Description

Sets the value of Matchmaking_Optional and also sets Matchmaking_IsSet to true.




### `ClearMatchmaking` <a id="structFRHAPI__Session_1a91953108c08db083b5fce7614b2b2596"></a>

void ClearMatchmaking()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Matchmaking_Optional and sets Matchmaking_IsSet to false.




### `GetBackfill` <a id="structFRHAPI__Session_1a15f72525350f452e25fd61d66fd7a756"></a>

[FRHAPI_BackfillInfo](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo) & GetBackfill()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Backfill_Optional, regardless of it having been set.




### `GetBackfill` <a id="structFRHAPI__Session_1a21b593a805dc945474b4ec9e30e63fdf"></a>

const [FRHAPI_BackfillInfo](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo) & GetBackfill()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Backfill_Optional, regardless of it having been set.




### `GetBackfill` <a id="structFRHAPI__Session_1ae16601ab6c078bc61d792e27287dde2a"></a>

const [FRHAPI_BackfillInfo](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo) & GetBackfill(const [FRHAPI_BackfillInfo](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_BackfillInfo](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo) &|DefaultValue|

#### Description

Gets the value of Backfill_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetBackfill` <a id="structFRHAPI__Session_1ab84409512d3ec81b4d5da14b3795978a"></a>

bool GetBackfill([FRHAPI_BackfillInfo](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_BackfillInfo](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo) &|OutValue|

#### Description

Fills OutValue with the value of Backfill_Optional and returns true if it has been set, otherwise returns false.




### `GetBackfillOrNull` <a id="structFRHAPI__Session_1aa468234b83a765da84939b62d4099e18"></a>

[FRHAPI_BackfillInfo](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo) * GetBackfillOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Backfill_Optional, if it has been set, otherwise returns nullptr.




### `GetBackfillOrNull` <a id="structFRHAPI__Session_1adb356a68ec0f1a96a374d60929017b1c"></a>

const [FRHAPI_BackfillInfo](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo) * GetBackfillOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Backfill_Optional, if it has been set, otherwise returns nullptr.




### `SetBackfill` <a id="structFRHAPI__Session_1a638a1d301daa4f29030c3f97e37681d3"></a>

void SetBackfill([FRHAPI_BackfillInfo](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_BackfillInfo](/unreal-plugins/all/structfrhapi__backfillinfo/#structFRHAPI__BackfillInfo)|NewValue|

#### Description

Sets the value of Backfill_Optional and also sets Backfill_IsSet to true.




### `ClearBackfill` <a id="structFRHAPI__Session_1a2326b644868f5f64e80aab9b67d81a90"></a>

void ClearBackfill()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Backfill_Optional and sets Backfill_IsSet to false.




### `GetBrowser` <a id="structFRHAPI__Session_1a2cfa5643b7ba91b7efa751adba2c6fd2"></a>

[FRHAPI_BrowserInfo](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo) & GetBrowser()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Browser_Optional, regardless of it having been set.




### `GetBrowser` <a id="structFRHAPI__Session_1afddcc33cd67e5b5d41a30e135136c1ed"></a>

const [FRHAPI_BrowserInfo](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo) & GetBrowser()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Browser_Optional, regardless of it having been set.




### `GetBrowser` <a id="structFRHAPI__Session_1a1cce194385a9388b08dbd1be9fdf61cf"></a>

const [FRHAPI_BrowserInfo](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo) & GetBrowser(const [FRHAPI_BrowserInfo](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_BrowserInfo](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo) &|DefaultValue|

#### Description

Gets the value of Browser_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetBrowser` <a id="structFRHAPI__Session_1af58dceb39835a33a837360a773e6b94d"></a>

bool GetBrowser([FRHAPI_BrowserInfo](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_BrowserInfo](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo) &|OutValue|

#### Description

Fills OutValue with the value of Browser_Optional and returns true if it has been set, otherwise returns false.




### `GetBrowserOrNull` <a id="structFRHAPI__Session_1a5ca76953f5b54edcd38534e3063f5021"></a>

[FRHAPI_BrowserInfo](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo) * GetBrowserOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Browser_Optional, if it has been set, otherwise returns nullptr.




### `GetBrowserOrNull` <a id="structFRHAPI__Session_1a88606729e6afe871b10edceddd76ea7f"></a>

const [FRHAPI_BrowserInfo](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo) * GetBrowserOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Browser_Optional, if it has been set, otherwise returns nullptr.




### `SetBrowser` <a id="structFRHAPI__Session_1aef47b5ce1532e9a2e5672ef1071ce225"></a>

void SetBrowser([FRHAPI_BrowserInfo](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_BrowserInfo](/unreal-plugins/all/structfrhapi__browserinfo/#structFRHAPI__BrowserInfo)|NewValue|

#### Description

Sets the value of Browser_Optional and also sets Browser_IsSet to true.




### `ClearBrowser` <a id="structFRHAPI__Session_1a8300261fe2260b8077d81a0b2a10ed95"></a>

void ClearBrowser()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Browser_Optional and sets Browser_IsSet to false.




### `GetJoinable` <a id="structFRHAPI__Session_1a8003484ab6879e9688a03c7491409e1c"></a>

bool & GetJoinable()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Joinable.




### `GetJoinable` <a id="structFRHAPI__Session_1ae8ea9ac7155aec5ede4e0db19be45819"></a>

const bool & GetJoinable()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Joinable.




### `SetJoinable` <a id="structFRHAPI__Session_1a32d534d6a28718ac8056dd5edad60524"></a>

void SetJoinable(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of Joinable.




### `IsJoinableDefaultValue` <a id="structFRHAPI__Session_1ab2c839e89e7ef8c8d3517f4dea32e913"></a>

bool IsJoinableDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Joinable matches the default value.




### `SetJoinableToDefault` <a id="structFRHAPI__Session_1ad32ed242c030d95e88564f3f0bd98711"></a>

void SetJoinableToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Joinable to its default




### `GetTeams` <a id="structFRHAPI__Session_1ab7008a5afdc6a77a9b21d9f0a687866e"></a>

TArray< [FRHAPI_SessionTeam](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam) > & GetTeams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Teams.




### `GetTeams` <a id="structFRHAPI__Session_1ad7cdb19d35e96ccfdf95561febc18a60"></a>

const TArray< [FRHAPI_SessionTeam](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam) > & GetTeams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Teams.




### `SetTeams` <a id="structFRHAPI__Session_1a85f7b809ec82e117ac80ba4593f221df"></a>

void SetTeams(TArray< [FRHAPI_SessionTeam](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_SessionTeam](/unreal-plugins/all/structfrhapi__sessionteam/#structFRHAPI__SessionTeam) >|NewValue|

#### Description

Sets the value of Teams.




### `GetPlatformSession` <a id="structFRHAPI__Session_1a8c178d130dfbf6984477186bba10bdb6"></a>

TArray< [FRHAPI_PlatformSession](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession) > & GetPlatformSession()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformSession_Optional, regardless of it having been set.




### `GetPlatformSession` <a id="structFRHAPI__Session_1a50bf670c4cad94a91c9dcef23a7826a2"></a>

const TArray< [FRHAPI_PlatformSession](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession) > & GetPlatformSession()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformSession_Optional, regardless of it having been set.




### `GetPlatformSession` <a id="structFRHAPI__Session_1a4d80598db285868a62904cc7a4087fd0"></a>

const TArray< [FRHAPI_PlatformSession](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession) > & GetPlatformSession(const TArray< [FRHAPI_PlatformSession](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession) > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TArray< [FRHAPI_PlatformSession](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession) > &|DefaultValue|

#### Description

Gets the value of PlatformSession_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPlatformSession` <a id="structFRHAPI__Session_1a3ad19c94403f3b16a21e32ac63308f39"></a>

bool GetPlatformSession(TArray< [FRHAPI_PlatformSession](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession) > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PlatformSession](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession) > &|OutValue|

#### Description

Fills OutValue with the value of PlatformSession_Optional and returns true if it has been set, otherwise returns false.




### `GetPlatformSessionOrNull` <a id="structFRHAPI__Session_1a399665b2b0c76f170f8997913152b613"></a>

TArray< [FRHAPI_PlatformSession](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession) > * GetPlatformSessionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PlatformSession_Optional, if it has been set, otherwise returns nullptr.




### `GetPlatformSessionOrNull` <a id="structFRHAPI__Session_1a18f938d6a17d7f32dc52a327e55b98c0"></a>

const TArray< [FRHAPI_PlatformSession](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession) > * GetPlatformSessionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PlatformSession_Optional, if it has been set, otherwise returns nullptr.




### `SetPlatformSession` <a id="structFRHAPI__Session_1a1e57ebcbe14f2f5190acab3972ead250"></a>

void SetPlatformSession(TArray< [FRHAPI_PlatformSession](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_PlatformSession](/unreal-plugins/all/structfrhapi__platformsession/#structFRHAPI__PlatformSession) >|NewValue|

#### Description

Sets the value of PlatformSession_Optional and also sets PlatformSession_IsSet to true.




### `ClearPlatformSession` <a id="structFRHAPI__Session_1ab2a2e49368eff0e0b474a8698449ee59"></a>

void ClearPlatformSession()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PlatformSession_Optional and sets PlatformSession_IsSet to false.




### `GetCustomData` <a id="structFRHAPI__Session_1abed072171f304dcb8b90486b80943efa"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__Session_1ad27ca08587eedfe4b8e9ec79233cc0c4"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__Session_1a7b13eb31cdc9b0badc6cdff6f96b9f5b"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__Session_1a3c79c259ca67fda3d78a5e9fb8524196"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__Session_1ac249be887fd6245e401a68aa7d511bd9"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__Session_1a3fca4472cba176ea8c34aa97de65895e"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__Session_1a1fbb989121313dfebf951e98202effb3"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__Session_1a32314b8c9e8d7b7ce270550cff54ab02"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.




### `GetCreated` <a id="structFRHAPI__Session_1a4a913a2628bb2e473ac8f41c97628613"></a>

FDateTime & GetCreated()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Created.




### `GetCreated` <a id="structFRHAPI__Session_1a3d258ecf804b00ae3b7d44d2eafdd08d"></a>

const FDateTime & GetCreated()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Created.




### `SetCreated` <a id="structFRHAPI__Session_1a8868880c047000f8ea10662e426d2035"></a>

void SetCreated(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of Created.




### `GetRegionId` <a id="structFRHAPI__Session_1a5823c390317676a992c6de596b07726e"></a>

FString & GetRegionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RegionId_Optional, regardless of it having been set.




### `GetRegionId` <a id="structFRHAPI__Session_1afc68b80e9f4e79b40704a20ad62946a3"></a>

const FString & GetRegionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RegionId_Optional, regardless of it having been set.




### `GetRegionId` <a id="structFRHAPI__Session_1acdeb08926396cda4a845f46f2686d30b"></a>

const FString & GetRegionId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetRegionId` <a id="structFRHAPI__Session_1ac5e6fe80b1ca4307432e555b0babdcd3"></a>

bool GetRegionId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.




### `GetRegionIdOrNull` <a id="structFRHAPI__Session_1ae11e272a5b85d6af7d79b67b5ee09989"></a>

FString * GetRegionIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.




### `GetRegionIdOrNull` <a id="structFRHAPI__Session_1a80e86b3b03b44086aff3e9d090fe1267"></a>

const FString * GetRegionIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.




### `SetRegionId` <a id="structFRHAPI__Session_1a556488693f5dbb2409e5e2a41a55358d"></a>

void SetRegionId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.




### `ClearRegionId` <a id="structFRHAPI__Session_1a30fad9245a3b507c31661ea5b585e11c"></a>

void ClearRegionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of RegionId_Optional and sets RegionId_IsSet to false.




### `GetCreatedByMatchmaking` <a id="structFRHAPI__Session_1ae5447a41db818e93919c1bb590b8ba93"></a>

bool & GetCreatedByMatchmaking()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CreatedByMatchmaking_Optional, regardless of it having been set.




### `GetCreatedByMatchmaking` <a id="structFRHAPI__Session_1a2491fbf7efba2d8eecd8aa3712a47048"></a>

const bool & GetCreatedByMatchmaking()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CreatedByMatchmaking_Optional, regardless of it having been set.




### `GetCreatedByMatchmaking` <a id="structFRHAPI__Session_1a93939c7bd58a685b2c86a7a7ef284c8c"></a>

const bool & GetCreatedByMatchmaking(const bool & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const bool &|DefaultValue|

#### Description

Gets the value of CreatedByMatchmaking_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCreatedByMatchmaking` <a id="structFRHAPI__Session_1abc3bdbaf68c4c37a60f9f81fa64debe2"></a>

bool GetCreatedByMatchmaking(bool & OutValue)

#### Parameters

| Type | Name |
|------|------|
|bool &|OutValue|

#### Description

Fills OutValue with the value of CreatedByMatchmaking_Optional and returns true if it has been set, otherwise returns false.




### `GetCreatedByMatchmakingOrNull` <a id="structFRHAPI__Session_1a1ee4a02d8cef77499ea1bafe725a8a52"></a>

bool * GetCreatedByMatchmakingOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CreatedByMatchmaking_Optional, if it has been set, otherwise returns nullptr.




### `GetCreatedByMatchmakingOrNull` <a id="structFRHAPI__Session_1a6c95acf174c2fc5e4d6c4f59febd8ca6"></a>

const bool * GetCreatedByMatchmakingOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CreatedByMatchmaking_Optional, if it has been set, otherwise returns nullptr.




### `SetCreatedByMatchmaking` <a id="structFRHAPI__Session_1ae6b9e72e6aae07f2cbf4d3bc38458665"></a>

void SetCreatedByMatchmaking(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of CreatedByMatchmaking_Optional and also sets CreatedByMatchmaking_IsSet to true.




### `ClearCreatedByMatchmaking` <a id="structFRHAPI__Session_1af85992cc0259a2a30e553b1320c1e224"></a>

void ClearCreatedByMatchmaking()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CreatedByMatchmaking_Optional and sets CreatedByMatchmaking_IsSet to false.




### `IsCreatedByMatchmakingDefaultValue` <a id="structFRHAPI__Session_1a4497fa87bd0e35ecdf5b09b0714d36ad"></a>

bool IsCreatedByMatchmakingDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if CreatedByMatchmaking_Optional is set and matches the default value.




### `SetCreatedByMatchmakingToDefault` <a id="structFRHAPI__Session_1ac89a96065989ec35f4c1e11ca9bc81c6"></a>

void SetCreatedByMatchmakingToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of CreatedByMatchmaking_Optional to its default and also sets CreatedByMatchmaking_IsSet to true.





