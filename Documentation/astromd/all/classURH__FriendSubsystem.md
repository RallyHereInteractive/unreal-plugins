---
title: URH_FriendSubsystem Class
---Inherits from [URH_LocalPlayerSubsystemPlugin](/unreal-plugins/all/classurh__localplayersubsystemplugin/#classURH__LocalPlayerSubsystemPlugin)

Friends Subsystem for handling a users relationships with other players.

## Summary
| Kind | View | Description |
|------|------|-------------|
|typedef|[GetBlockedListType](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a86947a66ea21048117d78b043f66c2a4)|Type Define for Get Blocked List calls.|
|typedef|[GetBlockedType](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1abf3d2913b2440d3ccf90f73e5466b667)|Type Define for Get Blocked calls.|
|typedef|[BlockType](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1afde127473ff38097c2158547c884c12c)|Type Define for Block Player calls.|
|typedef|[UnblockType](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a873630d80c6b2ec588a0f5057beb4029)|Type Define for Unblock Player calls.|
|typedef|[GetFriendsListType](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a5ea265c6a3d4410edef249077f7a29fc)|Type Define for Get Friends List calls.|
|typedef|[GetFriendRelationshipType](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1abbd85d9a95318bfa9be709e5e98ab6ac)|Type Define for Get Friend Relationship calls.|
|typedef|[AddFriendType](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a5b292ddb94cace20f504e49490cdd640)|Type Define for Add Friend calls.|
|typedef|[DeleteFriendType](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a03a40c4622679a1506a77ff5f33d16e1)|Type Define for Remove Friend calls.|
|typedef|[AddNotesType](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1aab7335b06d00faaa339a13b0d555047e)|Type Define for Add Friend Notes calls.|
|typedef|[DeleteNotesType](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a6552555d4071e1f7272104a44aa0ac60)|Type Define for Delete Friend Notes calls.|
|FRH_FriendListUpdatedDelegate|[FriendListUpdatedDelegate](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a20e7154a76895c2064838778968ab251)|Delegate that fires whenever the friends list is updated.|
|FRH_FriendListUpdatedDynamicDelegate|[BLUEPRINT_FriendListUpdatedDelegate](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a1a8d45aa42a25338045992d167892f0b)|Delegate that fires whenever the friends list is updated.|
|FRH_FriendUpdatedDelegate|[FriendUpdatedDelegate](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1aa33bf82a4a48bdaf7319262dbcceb3a8)|Delegate that fires whenever a friend is updated.|
|FRH_FriendUpdatedDynamicDelegate|[BLUEPRINT_FriendUpdatedDelegate](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a561772a8df3c609d9c2728e060fc9181)|Delegate that fires whenever a friend is updated.|
|FRH_FriendUpdateErrorDelegate|[FriendUpdateErrorDelegate](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1ada2af14fd3ef58b25becd1540231c5c1)|Delegate that fires whenever a friend API call fails.|
|FRH_FriendUpdateErrorDynamicDelegate|[BLUEPRINT_FriendUpdateErrorDelegate](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a834d874dd7faf3296c9a15698c4ff079)|Delegate that fires whenever a friend API call fails.|
|FRH_BlockedListUpdatedDelegate|[BlockedListUpdatedDelegate](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a02a3d66606f6ff33dcb23251ef3e6480)|Delegate that fires whenever blocked players list is updated.|
|FRH_BlockedListUpdatedDynamicDelegate|[BLUEPRINT_BlockedListUpdatedDelegate](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a0699d29f63c7a4c7e0e9175226027418)|Delegate that fires whenever blocked players list is updated.|
|FRH_BlockedPlayerUpdatedDelegate|[BlockedPlayerUpdatedDelegate](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a5390905f22179f57e83cfe3957134594)|Delegate that fires whenever a blocked player is updated.|
|FRH_BlockedPlayerUpdatedDynamicDelegate|[BLUEPRINT_BlockedPlayerUpdatedDelegate](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1aa42084497997dcdeeba00584e436f902)|Delegate that fires whenever a blocked player is updated.|
|FRH_BlockedPlayerUpdateErrorDelegate|[BlockedPlayerUpdateErrorDelegate](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a1847f636c942cbc0e6d9e3d6b90fe817)|Delegate that fires whenever blocked player API call fails.|
|FRH_BlockedPlayerUpdateErrorDynamicDelegate|[BLUEPRINT_BlockedPlayerUpdateErrorDelegate](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1adff0fc8d07ac00aaabf057e555913a32)|Delegate that fires whenever blocked player API call fails.|
|TArray< [URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) * >|[Friends](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a5ba094d058031c840feeb5ed2271bac7)|Cached array of all friends.|
|TArray< FGuid >|[BlockedPlayersUUIDs](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a8cea9f39f35a8c7c8249105f8cdb8c3c)|Array of blocked player ids.|
|TArray< FString >|[PlatformBlockedPlayers](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1abb8c329e6f9d3aa78a094a037bf4a0ec)|Array of blocked platform player ids.|
|FString|[FriendsETag](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1ad31945d455f553d20b46e14884b0058c)|ETag of last Get Friends List call response.|
|FString|[BlockedPlayersETag](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a4c140df2e72bb201c437ec7cadd5104d)|ETag of last Get Blocked Players call response.|
|bool|[FriendsCached](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a34673d7332ff081ffbc0e67d11fad742)|Tracks if friends are currently cached.|
|FRH_AutoPollerPtr|[FriendsListPoller](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1ae4e279605cefbf9699c08c1f9a56a190)|Poller for getting friends list.|
|FRH_AutoPollerPtr|[BlockedListPoller](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a702f1614a6893998c654fd7ee5f340b0)|Poller for getting blocked players list.|
|FDelegateHandle|[OnOSSPresenceReceivedHandle](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1af4dee5d7db87903fc77a81214efdda36)|Delegate to be fired when online subsystem presence is received.|
|void|[Initialize](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1aa7d2fe1ad8d807af77c3432cecd68882)()|Initialize the subsystem.|
|void|[Deinitialize](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a22ad8844b9c65a3ae173d4df9dc2a6a3)()|Safely tears down the subsystem.|
|[URH_PlayerInfoSubsystem](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem) *|[GetRH_PlayerInfoSubsystem](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1ad113da46527b010c8f09a5419c5fa425)()|Helper function to get the Player Info Subsystem that owns this.|
|bool|[FetchFriendsList](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1af9e36bd8e6a590aa0eb34e507aaf52cb)(const FRH_GenericFriendBlock & Delegate)|Calls the Friends API to get the players friends list.|
|bool|[BLUEPRINT_FetchFriendsList](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1ae106f27a44bb1f4845c431889b0fb88c)(const FRH_GenericFriendDynamicDelegate & Delegate)||
|bool|[FetchFriend](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a515eb3d9d965b33473efd7380a5df246)(const FGuid & PlayerUUID, const FRH_GenericFriendWithUuidBlock & Delegate)|Calls the Friends API to get data for a specific friend.|
|bool|[BLUEPRINT_FetchFriend](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1ace3b5156215342fde35c681c7222693b)(UPARAM(ref) const FGuid & PlayerUUID, const FRH_GenericFriendWithUuidDynamicDelegate & Delegate)||
|bool|[AddFriend](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1ad700daa801bab689d87f4b630a5282c5)(const FGuid & PlayerUuid, const FRH_AddFriendBlock & Delegate)|Calls the Friends API to create a new friendship relationship with another player.|
|bool|[BLUEPRINT_AddFriend](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a0981e250c763c837b221fa679ae9b711)(UPARAM(ref) const FGuid & PlayerUuid, const FRH_AddFriendDynamicDelegate & Delegate)||
|bool|[RemoveFriend](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1af6e442d6353bde8467777b267422ea0d)(const FGuid & PlayerUuid, const FRH_GenericFriendWithUuidBlock & Delegate)|Calls the Friends API to remove a friend relationship with another player.|
|bool|[BLUEPRINT_RemoveFriend](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a3f6078048c0446d85d60437b02e5b7c3)(UPARAM(ref) const FGuid & PlayerUuid, const FRH_GenericFriendWithUuidDynamicDelegate & Delegate)||
|bool|[AddNotes](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a10beb339453283fe44aa2c3f71602d7a)(const FGuid & PlayerUuid, const FString & Notes, const FRH_AddNotesBlock & Delegate)|Calls the Friends API to set/modify personal notes for another player.|
|bool|[BLUEPRINT_AddNotes](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1aff6e4e3d7280fe2da1c43b5450393035)(UPARAM(ref) const FGuid & PlayerUuid, UPARAM(ref) const FString & Notes, const FRH_AddNotesDynamicDelegate & Delegate)||
|bool|[DeleteNotes](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a6fe36017bb483c85248c4311e9e01972)(const FGuid & PlayerUuid, const FRH_GenericFriendWithUuidBlock & Delegate)|Calls the Friends API to delete personal notes for another player.|
|bool|[BLUEPRINT_DeleteNotes](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1acb2f583d7e1662b3554e5ac162d25969)(UPARAM(ref) const FGuid & PlayerUuid, const FRH_GenericFriendWithUuidDynamicDelegate & Delegate)||
|bool|[FetchBlockedList](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1ae5920534783b3289cd79af44eb93ac9a)(const FRH_GenericFriendBlock & Delegate)|Calls the Friends API to get the list of players you have blocked.|
|bool|[BLUEPRINT_FetchBlockedList](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a586d0224a947d926c86b7ee4383b7aad)(const FRH_GenericFriendDynamicDelegate & Delegate)||
|bool|[FetchBlockedPlayer](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a1d00d3d9d75ec1d1ee47b4985d09dbf1)(const FGuid & PlayerUuid, const FRH_GenericFriendWithUuidBlock & Delegate)|Calls the Friends API to get data for a specific blocked player.|
|bool|[BLUEPRINT_FetchBlockedPlayer](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a5e7db1366da35064c80bafb05167848a)(UPARAM(ref) const FGuid & PlayerUuid, const FRH_GenericFriendWithUuidDynamicDelegate & Delegate)||
|bool|[BlockPlayer](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1afaf34fd0bab40279aad46eed4ee17989)(const FGuid & PlayerUuid, const FRH_GenericFriendWithUuidBlock & Delegate)|Calls the Friends API to create a new block relationship with another player.|
|bool|[BLUEPRINT_BlockPlayer](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a6c07284e45881126b8975b3d92f02900)(UPARAM(ref) const FGuid & PlayerUUID, const FRH_GenericFriendWithUuidDynamicDelegate & Delegate)||
|bool|[UnblockPlayer](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1ae912cce935704be005779cd45d4bf84e)(const FGuid & PlayerUuid, const FRH_GenericFriendWithUuidBlock & Delegate)|Calls the Friends API to remove a block relationship with another player.|
|bool|[BLUEPRINT_UnblockPlayer](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1acb1949519c95d83ddc15ca9885e5423f)(UPARAM(ref) const FGuid & PlayerUuid, const FRH_GenericFriendWithUuidDynamicDelegate & Delegate)||
|void|[UpdateRecentPlayerForOSS](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1ae3fda9069196b472db23598bc8bfbcee)(const [URH_LocalPlayerSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem) * LocalPlayerSubsystem, const FGuid & PlayerUuid)|Updates the platform OSS with a player you have recently played with.|
|void|[OSSReadFriendsList](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a1d67c41ac34ab52852236256994d545d)(const FString & ListName)|Triggers the OSS call to get platform friends.|
|[URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) *|[GetOrCreateFriend](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1afdd65b2cb3b5c2dcfb41af247426d39e)([URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * PlayerInfo)|Gets if the specified players friend wrapper, or creates one if it doesn't exist yet.|
|[URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) *|[GetFriendByUuid](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a4b30486cb9175913ba77702f9148b3b6)(const FGuid & PlayerUuid)|Gets the cached friend wrapper for the specified player.|
|[URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) *|[GetFriendByPlayerInfo](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a0e8bfdf4e3dbff614e3931ec8e7fec30)([URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * PlayerInfo)|Gets the cached friend wrapper for the specified player.|
|[URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) *|[GetFriendByPlatformId](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1af97f126a67a75dd74416eadf099f4968)(const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) & PlatformPlayerId)|Gets the cached friend wrapper for the specified player.|
|[URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) *|[GetFriendByUuidOrPlatformId](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1af887af8839847c43703f0883912f9030)(const FGuid & PlayerUuid, const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) & PlatformPlayerId)|Gets the cached friend wrapper for the specified player.|
|bool|[IsPlayerBlocked](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a796323262a6d65dbd3871600ec67333a)(const FGuid & PlayerUuid)|Gets if the specified player is blocked via platform or Rally Here.|
|bool|[IsPlayerPlatformBlocked](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a5daea0768eab9487eb4d07b6eec7bcc0)(const FGuid & PlayerUuid)|Gets if the specified player is blocked via platform.|
|bool|[IsPlayerRhBlocked](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a7729188985902b5d94f5f0e6f4c5a99a)(const FGuid & PlayerUuid)|Gets if the specified player is blocked via Rally Here.|
|void|[StartFriendsRefreshTimer](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a712bf02500dd9805476827baac779bf9)()|Starts the polling for Rally Here friends.|
|void|[StopFriendsRefreshTimer](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a498526405f2fafda302f2bebf8d19211)()|Stops the polling for Rally Here friends.|
|void|[StartBlockedRefreshTimer](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1acaa7395b257ae7cd83b95613d7782740)()|Starts the polling for blocked players.|
|void|[StopBlockedRefreshTimer](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a99e71815f47abc452ab5e0961e660d8d)()|Stops the polling for blocked players.|
|void|[ClearBlockedCache](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a725db30767e3f7c8ff1a8c7bb8622d30)()|Clears the cache of blocked players.|
|void|[ClearRHFriendCache](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1aac6111bfbf9164250b79c60ee7377353)()|Clears the cache of Rally Here friends.|
|const TArray< [URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) * > &|[GetFriends](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a159b2f037e79aa087404d2834a4e89a5)()|Gets an array of your friends.|
|const TArray< FGuid > &|[GetBlocked](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a794939965ac249a8a073584b4bb61e29)()|Gets an array of blocked player ids.|
|bool|[HasFriendsCached](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a73865b1583b1952540939321fd19fbda)()|Gets if the subsystem has cached friend data.|
|void|[UpdateRecentPlayerForOSS](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a9e97f88b117998f2acfc786df96802a7)(const [URH_LocalPlayerSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem) * LocalPlayerSubsystem, const TSharedPtr< const FUniqueNetId > & RecentPlayerId)|Updates the platform OSS with a player you have recently played with.|
|void|[OnUserChanged](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1af5610e7a103a6e3fa10cbddf90f5f37c)()|Callback that occurs whenever the local player this subsystem is associated with changes.|
|void|[InitPropertiesWithDefaultValues](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a329dc919c010125a81f508eaf83f3d74)()|Initializes the subsystem with defaults for its cached data.|
|bool|[SetDefaultParamsForGetFriendRequest](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1ac4a8491381ccb8bcc26a031048d628b9)(GetFriendRelationshipType::Request & Request)|Fills our a Get Friend request.|
|void|[PostReloadConfig](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1ad94ca4a65eeae28cd4fde373c4035d8d)(class FProperty * PropertyThatWasLoaded)|Called from ReloadConfig after the object has reloaded its configuration data.|
|void|[OnPresenceUpdated](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1aaaa983d7ebd475108c9664d2bc29bff7)([URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) * PlayerPresence)|Helper function to push out presence updates on delegates on this system.|
|void|[OnFetchFriendsListResponse](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a1f31555fd208d81eaddc8f9fc1aadb17)(const GetFriendsListType::Response & Resp, const FRH_GenericFriendBlock Delegate)|Handles the response to a Fetch Friend List call.|
|void|[OnFetchFriendResponse](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a095efd57afb8653f4deccfd1ca6da1c5)(const GetFriendRelationshipType::Response & Resp, const FRH_GenericFriendWithUuidBlock Delegate)|Handles the response to a Fetch Friend call.|
|void|[OnAddFriendResponse](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a193027a404185d6cb776bca21dcdd9b9)(const AddFriendType::Response & Resp, const FRH_AddFriendBlock Delegate, const AddFriendType::Request Request, int32 RetryEtagFailureCount)|Handles the response to a Add Friend call.|
|void|[OnRemoveFriendResponse](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a59902f0693136bb2c965aaafd3f05c6d)(const DeleteFriendType::Response & Resp, const FRH_GenericFriendWithUuidBlock Delegate, const DeleteFriendType::Request Request, int32 RetryEtagFailureCount)|Handles the response to a Remove Friend call.|
|void|[OnAddNotesResponse](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a027d507e6a10d61a0cd3dd8afdbfd4b7)(const AddNotesType::Response & Resp, const FRH_AddNotesBlock Delegate, const AddNotesType::Request Request, int32 RetryEtagFailureCount)|Handles the response to a Add Friend Notes call.|
|void|[OnDeleteNotesResponse](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1aadb0f0d8b011cf2ac33f422043cde58e)(const DeleteNotesType::Response & Resp, const FRH_GenericFriendWithUuidBlock Delegate, const DeleteNotesType::Request Request, int32 RetryEtagFailureCount)|Handles the response to a Delete Friend Notes call.|
|void|[OnFetchBlockedListResponse](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a767b8f66ab46b1d2d9f1eaf81aa67755)(const GetBlockedListType::Response & Resp, const FRH_GenericFriendBlock Delegate)|Handles the response to a Get Blocked List call.|
|void|[OnFetchBlockedPlayerResponse](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1aa59af9e5e4e2f41bf6f620e0fd54c915)(const GetBlockedType::Response & Resp, const FRH_GenericFriendWithUuidBlock Delegate, const FGuid PlayerUuid)|Handles the response to a Get Blocked Player call.|
|void|[OnBlockPlayerResponse](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1ad0274f1f8b5311b8f6bdbdf8fba419c4)(const BlockType::Response & Resp, const FRH_GenericFriendWithUuidBlock Delegate, const FGuid PlayerUuid)|Handles the response to a Block Player call.|
|void|[OnUnblockPlayerResponse](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1abda83155f03fdc2ebd3cdcf48af081b2)(const UnblockType::Response & Resp, const FRH_GenericFriendWithUuidBlock Delegate, const FGuid PlayerUuid)|Handles the response to a Unblock Player call.|
|void|[OnFetchFriendForAdd](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a8f23c7d98799cf5719444b9fca5f5257)(const GetFriendRelationshipType::Response & Resp, const FRH_AddFriendBlock Delegate, AddFriendType::Request Request, int32 RetryEtagFailureCount)|Handles the response to a Fetch Friend For Add call.|
|void|[OnFetchFriendForAddNote](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1ada9967c9cafff1902cd8495a9bba096d)(const GetFriendRelationshipType::Response & Resp, const FRH_AddNotesBlock Delegate, AddNotesType::Request Request, int32 RetryEtagFailureCount)|Handles the response to a Fetch Friend For Add Note call.|
|void|[OnFetchFriendForDeleteNote](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1ac5785416b739e7c4ac9f35d2de199b05)(const GetFriendRelationshipType::Response & Resp, const FRH_GenericFriendWithUuidBlock Delegate, DeleteNotesType::Request Request, int32 RetryEtagFailureCount)|Handles the response to a Fetch Friend For Delete Note call.|
|void|[OnFetchFriendForRemove](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a2dff0a78994ba66003dd4fd8a4f3db78)(const GetFriendRelationshipType::Response & Resp, const FRH_GenericFriendWithUuidBlock Delegate, DeleteFriendType::Request Request, int32 RetryEtagFailureCount)|Handles the response to a Fetch Friend For Remove call.|
|void|[UpdatePlatformFriends](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a69aae2ad8b7200bf3dc0d51fbb59b3e6)(const TArray< [URH_PlatformFriend](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend) * > & NewFriends)|Updates the cached Platforms friends with the new set of friends data.|
|void|[RemoveAllFriendsWithNoRelationships](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a8e2baea2c4b27a854894385976495cb2)(TArray< [URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) * > & OutArray)|Removes all friends from the cached data that have no relationship to the player the subsystem is for.|
|void|[PollFriendsList](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1ac09b6bec4ef50e2e2c7bc9daee98cc9b)(const FRH_PollCompleteFunc & Delegate)|Executes a poll of the players friends list.|
|void|[PollBlockedPlayers](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a3eb26a11fae901e018b1a1863c576f3b)(const FRH_PollCompleteFunc & Delegate)|Executes a poll of the players blocked list.|
|FName|[ExtractErrorCodeFromResponse](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a132d8e0a874d1f686f085ab4b3a6e68f)(const FHttpResponsePtr & Response)|Gets the error code response name from a http request.|
|void|[OnReadOSSFriendsComplete](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a28e2e549632ea1cde658e352a74e5e71)(int32 LocalUserNum, bool bWasSuccessful, const FString & ListName, const FString & ErrorStr)|Handles the response from the online subsystem call to get friends.|
|void|[OnOSSBlockListChanged](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1ac118c76788b362e16e3c254372921074)(int32 LocalUserNum, const FString & ListName)|Handles the response from the online subsystem call to get list of blocked players.|
|void|[UpdateWithOSSFriends](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1ac1ec831e3a17301014fd02b08cd786e6)(const FString & ListName)|Updates the system with the friends from the online subsystem.|
|void|[OnOSSPresenceReceived](/unreal-plugins/all/classurh__friendsubsystem/#classURH__FriendSubsystem_1a96025e788f843e3af281e4a35bc67f2d)(const FUniqueNetId & UserId, const TSharedRef< FOnlineUserPresence > & NewPresence)|Handles the response from the online subsystem call to get presence.|
## Public Types



### `GetBlockedListType` <a id="classURH__FriendSubsystem_1a86947a66ea21048117d78b043f66c2a4"></a>

typedef RallyHereAPI::Traits_GetBlockedListForPlayerV2 GetBlockedListTypeType Define for Get Blocked List calls.




### `GetBlockedType` <a id="classURH__FriendSubsystem_1abf3d2913b2440d3ccf90f73e5466b667"></a>

typedef RallyHereAPI::Traits_GetBlockedV2 GetBlockedTypeType Define for Get Blocked calls.




### `BlockType` <a id="classURH__FriendSubsystem_1afde127473ff38097c2158547c884c12c"></a>

typedef RallyHereAPI::Traits_BlockV2 BlockTypeType Define for Block Player calls.




### `UnblockType` <a id="classURH__FriendSubsystem_1a873630d80c6b2ec588a0f5057beb4029"></a>

typedef RallyHereAPI::Traits_UnblockV2 UnblockTypeType Define for Unblock Player calls.




### `GetFriendsListType` <a id="classURH__FriendSubsystem_1a5ea265c6a3d4410edef249077f7a29fc"></a>

typedef RallyHereAPI::Traits_GetFriendsListForPlayerV2 GetFriendsListTypeType Define for Get Friends List calls.




### `GetFriendRelationshipType` <a id="classURH__FriendSubsystem_1abbd85d9a95318bfa9be709e5e98ab6ac"></a>

typedef RallyHereAPI::Traits_GetFriendRelationshipV2 GetFriendRelationshipTypeType Define for Get Friend Relationship calls.




### `AddFriendType` <a id="classURH__FriendSubsystem_1a5b292ddb94cace20f504e49490cdd640"></a>

typedef RallyHereAPI::Traits_AddFriendV2 AddFriendTypeType Define for Add Friend calls.




### `DeleteFriendType` <a id="classURH__FriendSubsystem_1a03a40c4622679a1506a77ff5f33d16e1"></a>

typedef RallyHereAPI::Traits_DeleteFriendV2 DeleteFriendTypeType Define for Remove Friend calls.




### `AddNotesType` <a id="classURH__FriendSubsystem_1aab7335b06d00faaa339a13b0d555047e"></a>

typedef RallyHereAPI::Traits_AddNotesV2 AddNotesTypeType Define for Add Friend Notes calls.




### `DeleteNotesType` <a id="classURH__FriendSubsystem_1a6552555d4071e1f7272104a44aa0ac60"></a>

typedef RallyHereAPI::Traits_DeleteNotesV2 DeleteNotesTypeType Define for Delete Friend Notes calls.





## Public Attributes



### `FriendListUpdatedDelegate` <a id="classURH__FriendSubsystem_1a20e7154a76895c2064838778968ab251"></a>

`FRH_FriendListUpdatedDelegate URH_FriendSubsystem::FriendListUpdatedDelegate`

Delegate that fires whenever the friends list is updated.




### `BLUEPRINT_FriendListUpdatedDelegate` <a id="classURH__FriendSubsystem_1a1a8d45aa42a25338045992d167892f0b"></a>

`FRH_FriendListUpdatedDynamicDelegate URH_FriendSubsystem::BLUEPRINT_FriendListUpdatedDelegate`

Delegate that fires whenever the friends list is updated.




### `FriendUpdatedDelegate` <a id="classURH__FriendSubsystem_1aa33bf82a4a48bdaf7319262dbcceb3a8"></a>

`FRH_FriendUpdatedDelegate URH_FriendSubsystem::FriendUpdatedDelegate`

Delegate that fires whenever a friend is updated.




### `BLUEPRINT_FriendUpdatedDelegate` <a id="classURH__FriendSubsystem_1a561772a8df3c609d9c2728e060fc9181"></a>

`FRH_FriendUpdatedDynamicDelegate URH_FriendSubsystem::BLUEPRINT_FriendUpdatedDelegate`

Delegate that fires whenever a friend is updated.




### `FriendUpdateErrorDelegate` <a id="classURH__FriendSubsystem_1ada2af14fd3ef58b25becd1540231c5c1"></a>

`FRH_FriendUpdateErrorDelegate URH_FriendSubsystem::FriendUpdateErrorDelegate`

Delegate that fires whenever a friend API call fails.




### `BLUEPRINT_FriendUpdateErrorDelegate` <a id="classURH__FriendSubsystem_1a834d874dd7faf3296c9a15698c4ff079"></a>

`FRH_FriendUpdateErrorDynamicDelegate URH_FriendSubsystem::BLUEPRINT_FriendUpdateErrorDelegate`

Delegate that fires whenever a friend API call fails.




### `BlockedListUpdatedDelegate` <a id="classURH__FriendSubsystem_1a02a3d66606f6ff33dcb23251ef3e6480"></a>

`FRH_BlockedListUpdatedDelegate URH_FriendSubsystem::BlockedListUpdatedDelegate`

Delegate that fires whenever blocked players list is updated.




### `BLUEPRINT_BlockedListUpdatedDelegate` <a id="classURH__FriendSubsystem_1a0699d29f63c7a4c7e0e9175226027418"></a>

`FRH_BlockedListUpdatedDynamicDelegate URH_FriendSubsystem::BLUEPRINT_BlockedListUpdatedDelegate`

Delegate that fires whenever blocked players list is updated.




### `BlockedPlayerUpdatedDelegate` <a id="classURH__FriendSubsystem_1a5390905f22179f57e83cfe3957134594"></a>

`FRH_BlockedPlayerUpdatedDelegate URH_FriendSubsystem::BlockedPlayerUpdatedDelegate`

Delegate that fires whenever a blocked player is updated.




### `BLUEPRINT_BlockedPlayerUpdatedDelegate` <a id="classURH__FriendSubsystem_1aa42084497997dcdeeba00584e436f902"></a>

`FRH_BlockedPlayerUpdatedDynamicDelegate URH_FriendSubsystem::BLUEPRINT_BlockedPlayerUpdatedDelegate`

Delegate that fires whenever a blocked player is updated.




### `BlockedPlayerUpdateErrorDelegate` <a id="classURH__FriendSubsystem_1a1847f636c942cbc0e6d9e3d6b90fe817"></a>

`FRH_BlockedPlayerUpdateErrorDelegate URH_FriendSubsystem::BlockedPlayerUpdateErrorDelegate`

Delegate that fires whenever blocked player API call fails.




### `BLUEPRINT_BlockedPlayerUpdateErrorDelegate` <a id="classURH__FriendSubsystem_1adff0fc8d07ac00aaabf057e555913a32"></a>

`FRH_BlockedPlayerUpdateErrorDynamicDelegate URH_FriendSubsystem::BLUEPRINT_BlockedPlayerUpdateErrorDelegate`

Delegate that fires whenever blocked player API call fails.





## Protected Attributes



### `Friends` <a id="classURH__FriendSubsystem_1a5ba094d058031c840feeb5ed2271bac7"></a>

`TArray<URH_RHFriendAndPlatformFriend*> URH_FriendSubsystem::Friends`

Cached array of all friends.




### `BlockedPlayersUUIDs` <a id="classURH__FriendSubsystem_1a8cea9f39f35a8c7c8249105f8cdb8c3c"></a>

`TArray<FGuid> URH_FriendSubsystem::BlockedPlayersUUIDs`

Array of blocked player ids.




### `PlatformBlockedPlayers` <a id="classURH__FriendSubsystem_1abb8c329e6f9d3aa78a094a037bf4a0ec"></a>

`TArray<FString> URH_FriendSubsystem::PlatformBlockedPlayers`

Array of blocked platform player ids.




### `FriendsETag` <a id="classURH__FriendSubsystem_1ad31945d455f553d20b46e14884b0058c"></a>

`FString URH_FriendSubsystem::FriendsETag`

ETag of last Get Friends List call response.




### `BlockedPlayersETag` <a id="classURH__FriendSubsystem_1a4c140df2e72bb201c437ec7cadd5104d"></a>

`FString URH_FriendSubsystem::BlockedPlayersETag`

ETag of last Get Blocked Players call response.




### `FriendsCached` <a id="classURH__FriendSubsystem_1a34673d7332ff081ffbc0e67d11fad742"></a>

`bool URH_FriendSubsystem::FriendsCached`

Tracks if friends are currently cached.




### `FriendsListPoller` <a id="classURH__FriendSubsystem_1ae4e279605cefbf9699c08c1f9a56a190"></a>

`FRH_AutoPollerPtr URH_FriendSubsystem::FriendsListPoller`

Poller for getting friends list.




### `BlockedListPoller` <a id="classURH__FriendSubsystem_1a702f1614a6893998c654fd7ee5f340b0"></a>

`FRH_AutoPollerPtr URH_FriendSubsystem::BlockedListPoller`

Poller for getting blocked players list.




### `OnOSSPresenceReceivedHandle` <a id="classURH__FriendSubsystem_1af4dee5d7db87903fc77a81214efdda36"></a>

`FDelegateHandle URH_FriendSubsystem::OnOSSPresenceReceivedHandle`

Delegate to be fired when online subsystem presence is received.





## Public Functions



### `Initialize` <a id="classURH__FriendSubsystem_1aa7d2fe1ad8d807af77c3432cecd68882"></a>

void Initialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Initialize the subsystem.




### `Deinitialize` <a id="classURH__FriendSubsystem_1a22ad8844b9c65a3ae173d4df9dc2a6a3"></a>

void Deinitialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Safely tears down the subsystem.




### `GetRH_PlayerInfoSubsystem` <a id="classURH__FriendSubsystem_1ad113da46527b010c8f09a5419c5fa425"></a>

[URH_PlayerInfoSubsystem](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem) * GetRH_PlayerInfoSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Helper function to get the Player Info Subsystem that owns this.




### `FetchFriendsList` <a id="classURH__FriendSubsystem_1af9e36bd8e6a590aa0eb34e507aaf52cb"></a>

bool FetchFriendsList(const FRH_GenericFriendBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_GenericFriendBlock &|Delegate|

#### Description

Calls the Friends API to get the players friends list.


#### Parameters

Delegate
: Callback delegate for when the call completes. 

#### Returns
If true, the call was executed. 



### `BLUEPRINT_FetchFriendsList` <a id="classURH__FriendSubsystem_1ae106f27a44bb1f4845c431889b0fb88c"></a>

bool BLUEPRINT_FetchFriendsList(const FRH_GenericFriendDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_GenericFriendDynamicDelegate &|Delegate|

#### Description






### `FetchFriend` <a id="classURH__FriendSubsystem_1a515eb3d9d965b33473efd7380a5df246"></a>

bool FetchFriend(const FGuid & PlayerUUID, const FRH_GenericFriendWithUuidBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUUID|
|const FRH_GenericFriendWithUuidBlock &|Delegate|

#### Description

Calls the Friends API to get data for a specific friend.


#### Parameters

PlayerUUID
: The unique player id of the friend to get. 
Delegate
: Callback delegate for when the call completes. 

#### Returns
If true, the call was executed. 



### `BLUEPRINT_FetchFriend` <a id="classURH__FriendSubsystem_1ace3b5156215342fde35c681c7222693b"></a>

bool BLUEPRINT_FetchFriend(UPARAM(ref) const FGuid & PlayerUUID, const FRH_GenericFriendWithUuidDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|UPARAM(ref) const FGuid &|PlayerUUID|
|const FRH_GenericFriendWithUuidDynamicDelegate &|Delegate|

#### Description






### `AddFriend` <a id="classURH__FriendSubsystem_1ad700daa801bab689d87f4b630a5282c5"></a>

bool AddFriend(const FGuid & PlayerUuid, const FRH_AddFriendBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|
|const FRH_AddFriendBlock &|Delegate|

#### Description

Calls the Friends API to create a new friendship relationship with another player.


#### Parameters

PlayerUUID
: The unique player id of the player to add. 
Delegate
: Callback delegate for when the call completes. 

#### Returns
If true, the call was executed. 



### `BLUEPRINT_AddFriend` <a id="classURH__FriendSubsystem_1a0981e250c763c837b221fa679ae9b711"></a>

bool BLUEPRINT_AddFriend(UPARAM(ref) const FGuid & PlayerUuid, const FRH_AddFriendDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|UPARAM(ref) const FGuid &|PlayerUuid|
|const FRH_AddFriendDynamicDelegate &|Delegate|

#### Description






### `RemoveFriend` <a id="classURH__FriendSubsystem_1af6e442d6353bde8467777b267422ea0d"></a>

bool RemoveFriend(const FGuid & PlayerUuid, const FRH_GenericFriendWithUuidBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|
|const FRH_GenericFriendWithUuidBlock &|Delegate|

#### Description

Calls the Friends API to remove a friend relationship with another player.


#### Parameters

PlayerUUID
: The unique player id of the friend to remove. 
Delegate
: Callback delegate for when the call completes. 

#### Returns
If true, the call was executed. 



### `BLUEPRINT_RemoveFriend` <a id="classURH__FriendSubsystem_1a3f6078048c0446d85d60437b02e5b7c3"></a>

bool BLUEPRINT_RemoveFriend(UPARAM(ref) const FGuid & PlayerUuid, const FRH_GenericFriendWithUuidDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|UPARAM(ref) const FGuid &|PlayerUuid|
|const FRH_GenericFriendWithUuidDynamicDelegate &|Delegate|

#### Description






### `AddNotes` <a id="classURH__FriendSubsystem_1a10beb339453283fe44aa2c3f71602d7a"></a>

bool AddNotes(const FGuid & PlayerUuid, const FString & Notes, const FRH_AddNotesBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|
|const FString &|Notes|
|const FRH_AddNotesBlock &|Delegate|

#### Description

Calls the Friends API to set/modify personal notes for another player.


#### Parameters

PlayerUUID
: The unique player id of the friend to remove. 
Notes
: The notes to set for the player. 
Delegate
: Callback delegate for when the call completes. 

#### Returns
If true, the call was executed. 



### `BLUEPRINT_AddNotes` <a id="classURH__FriendSubsystem_1aff6e4e3d7280fe2da1c43b5450393035"></a>

bool BLUEPRINT_AddNotes(UPARAM(ref) const FGuid & PlayerUuid, UPARAM(ref) const FString & Notes, const FRH_AddNotesDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|UPARAM(ref) const FGuid &|PlayerUuid|
|UPARAM(ref) const FString &|Notes|
|const FRH_AddNotesDynamicDelegate &|Delegate|

#### Description






### `DeleteNotes` <a id="classURH__FriendSubsystem_1a6fe36017bb483c85248c4311e9e01972"></a>

bool DeleteNotes(const FGuid & PlayerUuid, const FRH_GenericFriendWithUuidBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|
|const FRH_GenericFriendWithUuidBlock &|Delegate|

#### Description

Calls the Friends API to delete personal notes for another player.


#### Parameters

PlayerUUID
: The unique player id of the friend to whose notes will be modified. 
Delegate
: Callback delegate for when the call completes. 

#### Returns
If true, the call was executed. 



### `BLUEPRINT_DeleteNotes` <a id="classURH__FriendSubsystem_1acb2f583d7e1662b3554e5ac162d25969"></a>

bool BLUEPRINT_DeleteNotes(UPARAM(ref) const FGuid & PlayerUuid, const FRH_GenericFriendWithUuidDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|UPARAM(ref) const FGuid &|PlayerUuid|
|const FRH_GenericFriendWithUuidDynamicDelegate &|Delegate|

#### Description






### `FetchBlockedList` <a id="classURH__FriendSubsystem_1ae5920534783b3289cd79af44eb93ac9a"></a>

bool FetchBlockedList(const FRH_GenericFriendBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_GenericFriendBlock &|Delegate|

#### Description

Calls the Friends API to get the list of players you have blocked.


#### Parameters

Delegate
: Callback delegate for when the call completes. 

#### Returns
If true, the call was executed. 



### `BLUEPRINT_FetchBlockedList` <a id="classURH__FriendSubsystem_1a586d0224a947d926c86b7ee4383b7aad"></a>

bool BLUEPRINT_FetchBlockedList(const FRH_GenericFriendDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_GenericFriendDynamicDelegate &|Delegate|

#### Description






### `FetchBlockedPlayer` <a id="classURH__FriendSubsystem_1a1d00d3d9d75ec1d1ee47b4985d09dbf1"></a>

bool FetchBlockedPlayer(const FGuid & PlayerUuid, const FRH_GenericFriendWithUuidBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|
|const FRH_GenericFriendWithUuidBlock &|Delegate|

#### Description

Calls the Friends API to get data for a specific blocked player.


#### Parameters

PlayerUUID
: The unique player id of the blocked player to get. 
Delegate
: Callback delegate for when the call completes. 

#### Returns
If true, the call was executed. 



### `BLUEPRINT_FetchBlockedPlayer` <a id="classURH__FriendSubsystem_1a5e7db1366da35064c80bafb05167848a"></a>

bool BLUEPRINT_FetchBlockedPlayer(UPARAM(ref) const FGuid & PlayerUuid, const FRH_GenericFriendWithUuidDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|UPARAM(ref) const FGuid &|PlayerUuid|
|const FRH_GenericFriendWithUuidDynamicDelegate &|Delegate|

#### Description






### `BlockPlayer` <a id="classURH__FriendSubsystem_1afaf34fd0bab40279aad46eed4ee17989"></a>

bool BlockPlayer(const FGuid & PlayerUuid, const FRH_GenericFriendWithUuidBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|
|const FRH_GenericFriendWithUuidBlock &|Delegate|

#### Description

Calls the Friends API to create a new block relationship with another player.


#### Parameters

PlayerUUID
: The unique player id of the player to block. 
Delegate
: Callback delegate for when the call completes. 

#### Returns
If true, the call was executed. 



### `BLUEPRINT_BlockPlayer` <a id="classURH__FriendSubsystem_1a6c07284e45881126b8975b3d92f02900"></a>

bool BLUEPRINT_BlockPlayer(UPARAM(ref) const FGuid & PlayerUUID, const FRH_GenericFriendWithUuidDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|UPARAM(ref) const FGuid &|PlayerUUID|
|const FRH_GenericFriendWithUuidDynamicDelegate &|Delegate|

#### Description






### `UnblockPlayer` <a id="classURH__FriendSubsystem_1ae912cce935704be005779cd45d4bf84e"></a>

bool UnblockPlayer(const FGuid & PlayerUuid, const FRH_GenericFriendWithUuidBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|
|const FRH_GenericFriendWithUuidBlock &|Delegate|

#### Description

Calls the Friends API to remove a block relationship with another player.


#### Parameters

PlayerUUID
: The unique player id of the blocked player to unblock. 
Delegate
: Callback delegate for when the call completes. 

#### Returns
If true, the call was executed. 



### `BLUEPRINT_UnblockPlayer` <a id="classURH__FriendSubsystem_1acb1949519c95d83ddc15ca9885e5423f"></a>

bool BLUEPRINT_UnblockPlayer(UPARAM(ref) const FGuid & PlayerUuid, const FRH_GenericFriendWithUuidDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|UPARAM(ref) const FGuid &|PlayerUuid|
|const FRH_GenericFriendWithUuidDynamicDelegate &|Delegate|

#### Description






### `UpdateRecentPlayerForOSS` <a id="classURH__FriendSubsystem_1ae3fda9069196b472db23598bc8bfbcee"></a>

void UpdateRecentPlayerForOSS(const [URH_LocalPlayerSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem) * LocalPlayerSubsystem, const FGuid & PlayerUuid)

#### Parameters

| Type | Name |
|------|------|
|const [URH_LocalPlayerSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem) *|LocalPlayerSubsystem|
|const FGuid &|PlayerUuid|

#### Description

Updates the platform OSS with a player you have recently played with.


#### Parameters

LocalPlayerSubsystem
: The local player subsystem to obtain the unique net id from. 
PlayerUuid
: The recently player with players Unique Player Id. 



### `OSSReadFriendsList` <a id="classURH__FriendSubsystem_1a1d67c41ac34ab52852236256994d545d"></a>

void OSSReadFriendsList(const FString & ListName)

#### Parameters

| Type | Name |
|------|------|
|const FString &|ListName|

#### Description

Triggers the OSS call to get platform friends.




### `GetOrCreateFriend` <a id="classURH__FriendSubsystem_1afdd65b2cb3b5c2dcfb41af247426d39e"></a>

[URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) * GetOrCreateFriend([URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * PlayerInfo)

#### Parameters

| Type | Name |
|------|------|
|[URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) *|PlayerInfo|

#### Description

Gets if the specified players friend wrapper, or creates one if it doesn't exist yet.


#### Parameters

PlayerInfo
: The player info to get the friend wrapper for. 

#### Returns
The friend wrapper for the specified player. 



### `GetFriendByUuid` <a id="classURH__FriendSubsystem_1a4b30486cb9175913ba77702f9148b3b6"></a>

[URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) * GetFriendByUuid(const FGuid & PlayerUuid)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|

#### Description

Gets the cached friend wrapper for the specified player.


#### Parameters

PlayerUuid
: The unique player Id for the requested friend wrapper. 



### `GetFriendByPlayerInfo` <a id="classURH__FriendSubsystem_1a0e8bfdf4e3dbff614e3931ec8e7fec30"></a>

[URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) * GetFriendByPlayerInfo([URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * PlayerInfo)

#### Parameters

| Type | Name |
|------|------|
|[URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) *|PlayerInfo|

#### Description

Gets the cached friend wrapper for the specified player.


#### Parameters

PlayerInfo
: The player info to get the friend wrapper for. 



### `GetFriendByPlatformId` <a id="classURH__FriendSubsystem_1af97f126a67a75dd74416eadf099f4968"></a>

[URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) * GetFriendByPlatformId(const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) & PlatformPlayerId)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) &|PlatformPlayerId|

#### Description

Gets the cached friend wrapper for the specified player.


#### Parameters

PlatformPlayerId
: The player platform id to get the friend wrapper for. 



### `GetFriendByUuidOrPlatformId` <a id="classURH__FriendSubsystem_1af887af8839847c43703f0883912f9030"></a>

[URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) * GetFriendByUuidOrPlatformId(const FGuid & PlayerUuid, const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) & PlatformPlayerId)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|
|const [FRH_PlayerPlatformId](/unreal-plugins/all/structfrh__playerplatformid/#structFRH__PlayerPlatformId) &|PlatformPlayerId|

#### Description

Gets the cached friend wrapper for the specified player.


#### Parameters

PlayerUuid
: The unique player Id for the requested friend wrapper. 
PlatformPlayerId
: The player platform id to get the friend wrapper for. 



### `IsPlayerBlocked` <a id="classURH__FriendSubsystem_1a796323262a6d65dbd3871600ec67333a"></a>

bool IsPlayerBlocked(const FGuid & PlayerUuid)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|

#### Description

Gets if the specified player is blocked via platform or Rally Here.


#### Parameters

PlayerUuid
: The unique player id of the player to check. 



### `IsPlayerPlatformBlocked` <a id="classURH__FriendSubsystem_1a5daea0768eab9487eb4d07b6eec7bcc0"></a>

bool IsPlayerPlatformBlocked(const FGuid & PlayerUuid)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|

#### Description

Gets if the specified player is blocked via platform.


#### Parameters

PlayerUuid
: The unique player id of the player to check. 



### `IsPlayerRhBlocked` <a id="classURH__FriendSubsystem_1a7729188985902b5d94f5f0e6f4c5a99a"></a>

bool IsPlayerRhBlocked(const FGuid & PlayerUuid)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|PlayerUuid|

#### Description

Gets if the specified player is blocked via Rally Here.


#### Parameters

PlayerUuid
: The unique player id of the player to check. 



### `StartFriendsRefreshTimer` <a id="classURH__FriendSubsystem_1a712bf02500dd9805476827baac779bf9"></a>

void StartFriendsRefreshTimer()

#### Parameters

| Type | Name |
|------|------|

#### Description

Starts the polling for Rally Here friends.




### `StopFriendsRefreshTimer` <a id="classURH__FriendSubsystem_1a498526405f2fafda302f2bebf8d19211"></a>

void StopFriendsRefreshTimer()

#### Parameters

| Type | Name |
|------|------|

#### Description

Stops the polling for Rally Here friends.




### `StartBlockedRefreshTimer` <a id="classURH__FriendSubsystem_1acaa7395b257ae7cd83b95613d7782740"></a>

void StartBlockedRefreshTimer()

#### Parameters

| Type | Name |
|------|------|

#### Description

Starts the polling for blocked players.




### `StopBlockedRefreshTimer` <a id="classURH__FriendSubsystem_1a99e71815f47abc452ab5e0961e660d8d"></a>

void StopBlockedRefreshTimer()

#### Parameters

| Type | Name |
|------|------|

#### Description

Stops the polling for blocked players.




### `ClearBlockedCache` <a id="classURH__FriendSubsystem_1a725db30767e3f7c8ff1a8c7bb8622d30"></a>

void ClearBlockedCache()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the cache of blocked players.




### `ClearRHFriendCache` <a id="classURH__FriendSubsystem_1aac6111bfbf9164250b79c60ee7377353"></a>

void ClearRHFriendCache()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the cache of Rally Here friends.




### `GetFriends` <a id="classURH__FriendSubsystem_1a159b2f037e79aa087404d2834a4e89a5"></a>

const TArray< [URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) * > & GetFriends()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets an array of your friends.




### `GetBlocked` <a id="classURH__FriendSubsystem_1a794939965ac249a8a073584b4bb61e29"></a>

const TArray< FGuid > & GetBlocked()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets an array of blocked player ids.




### `HasFriendsCached` <a id="classURH__FriendSubsystem_1a73865b1583b1952540939321fd19fbda"></a>

bool HasFriendsCached()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets if the subsystem has cached friend data.





## Public Static Functions



### `UpdateRecentPlayerForOSS` <a id="classURH__FriendSubsystem_1a9e97f88b117998f2acfc786df96802a7"></a>

void UpdateRecentPlayerForOSS(const [URH_LocalPlayerSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem) * LocalPlayerSubsystem, const TSharedPtr< const FUniqueNetId > & RecentPlayerId)

#### Parameters

| Type | Name |
|------|------|
|const [URH_LocalPlayerSubsystem](/unreal-plugins/all/classurh__localplayersubsystem/#classURH__LocalPlayerSubsystem) *|LocalPlayerSubsystem|
|const TSharedPtr< const FUniqueNetId > &|RecentPlayerId|

#### Description

Updates the platform OSS with a player you have recently played with.


#### Parameters

LocalPlayerSubsystem
: The local player subsystem to obtain the unique net id from. 
RecentPlayerId
: The recently played with players unique net id. 




## Protected Functions



### `OnUserChanged` <a id="classURH__FriendSubsystem_1af5610e7a103a6e3fa10cbddf90f5f37c"></a>

void OnUserChanged()

#### Parameters

| Type | Name |
|------|------|

#### Description

Callback that occurs whenever the local player this subsystem is associated with changes.




### `InitPropertiesWithDefaultValues` <a id="classURH__FriendSubsystem_1a329dc919c010125a81f508eaf83f3d74"></a>

void InitPropertiesWithDefaultValues()

#### Parameters

| Type | Name |
|------|------|

#### Description

Initializes the subsystem with defaults for its cached data.




### `SetDefaultParamsForGetFriendRequest` <a id="classURH__FriendSubsystem_1ac4a8491381ccb8bcc26a031048d628b9"></a>

bool SetDefaultParamsForGetFriendRequest(GetFriendRelationshipType::Request & Request)

#### Parameters

| Type | Name |
|------|------|
|GetFriendRelationshipType::Request &|Request|

#### Description

Fills our a Get Friend request.


#### Parameters

Request
: The request with the default params filled out. 

#### Returns
True, if the request was filled out successfully. 



### `PostReloadConfig` <a id="classURH__FriendSubsystem_1ad94ca4a65eeae28cd4fde373c4035d8d"></a>

void PostReloadConfig(class FProperty * PropertyThatWasLoaded)

#### Parameters

| Type | Name |
|------|------|
|class FProperty *|PropertyThatWasLoaded|

#### Description

Called from ReloadConfig after the object has reloaded its configuration data.


#### Parameters

PropertyThatWasLoaded
: The property loaded. 



### `OnPresenceUpdated` <a id="classURH__FriendSubsystem_1aaaa983d7ebd475108c9664d2bc29bff7"></a>

void OnPresenceUpdated([URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) * PlayerPresence)

#### Parameters

| Type | Name |
|------|------|
|[URH_PlayerPresence](/unreal-plugins/all/classurh__playerpresence/#classURH__PlayerPresence) *|PlayerPresence|

#### Description

Helper function to push out presence updates on delegates on this system.


#### Parameters

PlayerPresence
: The Player Presence updated. 



### `OnFetchFriendsListResponse` <a id="classURH__FriendSubsystem_1a1f31555fd208d81eaddc8f9fc1aadb17"></a>

void OnFetchFriendsListResponse(const GetFriendsListType::Response & Resp, const FRH_GenericFriendBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|const GetFriendsListType::Response &|Resp|
|const FRH_GenericFriendBlock|Delegate|

#### Description

Handles the response to a Fetch Friend List call.


#### Parameters

Resp
: Response given for the call. 
Delegate
: Delegate passed in for original call to respond to when call completes. 



### `OnFetchFriendResponse` <a id="classURH__FriendSubsystem_1a095efd57afb8653f4deccfd1ca6da1c5"></a>

void OnFetchFriendResponse(const GetFriendRelationshipType::Response & Resp, const FRH_GenericFriendWithUuidBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|const GetFriendRelationshipType::Response &|Resp|
|const FRH_GenericFriendWithUuidBlock|Delegate|

#### Description

Handles the response to a Fetch Friend call.


#### Parameters

Resp
: Response given for the call. 
Delegate
: Delegate passed in for original call to respond to when call completes. 



### `OnAddFriendResponse` <a id="classURH__FriendSubsystem_1a193027a404185d6cb776bca21dcdd9b9"></a>

void OnAddFriendResponse(const AddFriendType::Response & Resp, const FRH_AddFriendBlock Delegate, const AddFriendType::Request Request, int32 RetryEtagFailureCount)

#### Parameters

| Type | Name |
|------|------|
|const AddFriendType::Response &|Resp|
|const FRH_AddFriendBlock|Delegate|
|const AddFriendType::Request|Request|
|int32|RetryEtagFailureCount|

#### Description

Handles the response to a Add Friend call.


#### Parameters

Resp
: Response given for the call. 
Delegate
: Delegate passed in for original call to respond to when call completes. 
RetryEtagFailureCount
: Number of times this has failed, to determine course of action. 



### `OnRemoveFriendResponse` <a id="classURH__FriendSubsystem_1a59902f0693136bb2c965aaafd3f05c6d"></a>

void OnRemoveFriendResponse(const DeleteFriendType::Response & Resp, const FRH_GenericFriendWithUuidBlock Delegate, const DeleteFriendType::Request Request, int32 RetryEtagFailureCount)

#### Parameters

| Type | Name |
|------|------|
|const DeleteFriendType::Response &|Resp|
|const FRH_GenericFriendWithUuidBlock|Delegate|
|const DeleteFriendType::Request|Request|
|int32|RetryEtagFailureCount|

#### Description

Handles the response to a Remove Friend call.


#### Parameters

Resp
: Response given for the call. 
Delegate
: Delegate passed in for original call to respond to when call completes. 
Request
: The Request used to make the remove friend call. 
RetryEtagFailureCount
: Number of times this has failed, to determine course of action. 



### `OnAddNotesResponse` <a id="classURH__FriendSubsystem_1a027d507e6a10d61a0cd3dd8afdbfd4b7"></a>

void OnAddNotesResponse(const AddNotesType::Response & Resp, const FRH_AddNotesBlock Delegate, const AddNotesType::Request Request, int32 RetryEtagFailureCount)

#### Parameters

| Type | Name |
|------|------|
|const AddNotesType::Response &|Resp|
|const FRH_AddNotesBlock|Delegate|
|const AddNotesType::Request|Request|
|int32|RetryEtagFailureCount|

#### Description

Handles the response to a Add Friend Notes call.


#### Parameters

Resp
: Response given for the call. 
Delegate
: Delegate passed in for original call to respond to when call completes. 
RetryEtagFailureCount
: Number of times this has failed, to determine course of action. 



### `OnDeleteNotesResponse` <a id="classURH__FriendSubsystem_1aadb0f0d8b011cf2ac33f422043cde58e"></a>

void OnDeleteNotesResponse(const DeleteNotesType::Response & Resp, const FRH_GenericFriendWithUuidBlock Delegate, const DeleteNotesType::Request Request, int32 RetryEtagFailureCount)

#### Parameters

| Type | Name |
|------|------|
|const DeleteNotesType::Response &|Resp|
|const FRH_GenericFriendWithUuidBlock|Delegate|
|const DeleteNotesType::Request|Request|
|int32|RetryEtagFailureCount|

#### Description

Handles the response to a Delete Friend Notes call.


#### Parameters

Resp
: Response given for the call. 
Delegate
: Delegate passed in for original call to respond to when call completes. 
RetryEtagFailureCount
: Number of times this has failed, to determine course of action. 



### `OnFetchBlockedListResponse` <a id="classURH__FriendSubsystem_1a767b8f66ab46b1d2d9f1eaf81aa67755"></a>

void OnFetchBlockedListResponse(const GetBlockedListType::Response & Resp, const FRH_GenericFriendBlock Delegate)

#### Parameters

| Type | Name |
|------|------|
|const GetBlockedListType::Response &|Resp|
|const FRH_GenericFriendBlock|Delegate|

#### Description

Handles the response to a Get Blocked List call.


#### Parameters

Resp
: Response given for the call. 
Delegate
: Delegate passed in for original call to respond to when call completes. 



### `OnFetchBlockedPlayerResponse` <a id="classURH__FriendSubsystem_1aa59af9e5e4e2f41bf6f620e0fd54c915"></a>

void OnFetchBlockedPlayerResponse(const GetBlockedType::Response & Resp, const FRH_GenericFriendWithUuidBlock Delegate, const FGuid PlayerUuid)

#### Parameters

| Type | Name |
|------|------|
|const GetBlockedType::Response &|Resp|
|const FRH_GenericFriendWithUuidBlock|Delegate|
|const FGuid|PlayerUuid|

#### Description

Handles the response to a Get Blocked Player call.


#### Parameters

Resp
: Response given for the call. 
Delegate
: Delegate passed in for original call to respond to when call completes. 
PlayerUuid
: The UUID of the player that is being requested. 



### `OnBlockPlayerResponse` <a id="classURH__FriendSubsystem_1ad0274f1f8b5311b8f6bdbdf8fba419c4"></a>

void OnBlockPlayerResponse(const BlockType::Response & Resp, const FRH_GenericFriendWithUuidBlock Delegate, const FGuid PlayerUuid)

#### Parameters

| Type | Name |
|------|------|
|const BlockType::Response &|Resp|
|const FRH_GenericFriendWithUuidBlock|Delegate|
|const FGuid|PlayerUuid|

#### Description

Handles the response to a Block Player call.


#### Parameters

Resp
: Response given for the call. 
Delegate
: Delegate passed in for original call to respond to when call completes. 
PlayerUuid
: The UUID of the player that is being blocked. 



### `OnUnblockPlayerResponse` <a id="classURH__FriendSubsystem_1abda83155f03fdc2ebd3cdcf48af081b2"></a>

void OnUnblockPlayerResponse(const UnblockType::Response & Resp, const FRH_GenericFriendWithUuidBlock Delegate, const FGuid PlayerUuid)

#### Parameters

| Type | Name |
|------|------|
|const UnblockType::Response &|Resp|
|const FRH_GenericFriendWithUuidBlock|Delegate|
|const FGuid|PlayerUuid|

#### Description

Handles the response to a Unblock Player call.


#### Parameters

Resp
: Response given for the call. 
Delegate
: Delegate passed in for original call to respond to when call completes. 
PlayerUuid
: The UUID of the player that is being unblocked. 



### `OnFetchFriendForAdd` <a id="classURH__FriendSubsystem_1a8f23c7d98799cf5719444b9fca5f5257"></a>

void OnFetchFriendForAdd(const GetFriendRelationshipType::Response & Resp, const FRH_AddFriendBlock Delegate, AddFriendType::Request Request, int32 RetryEtagFailureCount)

#### Parameters

| Type | Name |
|------|------|
|const GetFriendRelationshipType::Response &|Resp|
|const FRH_AddFriendBlock|Delegate|
|AddFriendType::Request|Request|
|int32|RetryEtagFailureCount|

#### Description

Handles the response to a Fetch Friend For Add call.


#### Parameters

Resp
: Response given for the call. 
Delegate
: Delegate passed in for original call to respond to when call completes. 
Request
: The Request used to make the fetch friend call. 
RetryEtagFailureCount
: Number of times this has failed, to determine course of action. 



### `OnFetchFriendForAddNote` <a id="classURH__FriendSubsystem_1ada9967c9cafff1902cd8495a9bba096d"></a>

void OnFetchFriendForAddNote(const GetFriendRelationshipType::Response & Resp, const FRH_AddNotesBlock Delegate, AddNotesType::Request Request, int32 RetryEtagFailureCount)

#### Parameters

| Type | Name |
|------|------|
|const GetFriendRelationshipType::Response &|Resp|
|const FRH_AddNotesBlock|Delegate|
|AddNotesType::Request|Request|
|int32|RetryEtagFailureCount|

#### Description

Handles the response to a Fetch Friend For Add Note call.


#### Parameters

Resp
: Response given for the call. 
Delegate
: Delegate passed in for original call to respond to when call completes. 
Request
: The Request used to make the fetch friend call. 
RetryEtagFailureCount
: Number of times this has failed, to determine course of action. 



### `OnFetchFriendForDeleteNote` <a id="classURH__FriendSubsystem_1ac5785416b739e7c4ac9f35d2de199b05"></a>

void OnFetchFriendForDeleteNote(const GetFriendRelationshipType::Response & Resp, const FRH_GenericFriendWithUuidBlock Delegate, DeleteNotesType::Request Request, int32 RetryEtagFailureCount)

#### Parameters

| Type | Name |
|------|------|
|const GetFriendRelationshipType::Response &|Resp|
|const FRH_GenericFriendWithUuidBlock|Delegate|
|DeleteNotesType::Request|Request|
|int32|RetryEtagFailureCount|

#### Description

Handles the response to a Fetch Friend For Delete Note call.


#### Parameters

Resp
: Response given for the call. 
Delegate
: Delegate passed in for original call to respond to when call completes. 
Request
: The Request used to make the fetch friend call. 
RetryEtagFailureCount
: Number of times this has failed, to determine course of action. 



### `OnFetchFriendForRemove` <a id="classURH__FriendSubsystem_1a2dff0a78994ba66003dd4fd8a4f3db78"></a>

void OnFetchFriendForRemove(const GetFriendRelationshipType::Response & Resp, const FRH_GenericFriendWithUuidBlock Delegate, DeleteFriendType::Request Request, int32 RetryEtagFailureCount)

#### Parameters

| Type | Name |
|------|------|
|const GetFriendRelationshipType::Response &|Resp|
|const FRH_GenericFriendWithUuidBlock|Delegate|
|DeleteFriendType::Request|Request|
|int32|RetryEtagFailureCount|

#### Description

Handles the response to a Fetch Friend For Remove call.


#### Parameters

Resp
: Response given for the call. 
Delegate
: Delegate passed in for original call to respond to when call completes. 
Request
: The Request used to make the fetch friend call. 
RetryEtagFailureCount
: Number of times this has failed, to determine course of action. 



### `UpdatePlatformFriends` <a id="classURH__FriendSubsystem_1a69aae2ad8b7200bf3dc0d51fbb59b3e6"></a>

void UpdatePlatformFriends(const TArray< [URH_PlatformFriend](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend) * > & NewFriends)

#### Parameters

| Type | Name |
|------|------|
|const TArray< [URH_PlatformFriend](/unreal-plugins/all/classurh__platformfriend/#classURH__PlatformFriend) * > &|NewFriends|

#### Description

Updates the cached Platforms friends with the new set of friends data.


#### Parameters

NewFriends
: New platform friend data. 



### `RemoveAllFriendsWithNoRelationships` <a id="classURH__FriendSubsystem_1a8e2baea2c4b27a854894385976495cb2"></a>

void RemoveAllFriendsWithNoRelationships(TArray< [URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) * > & OutArray)

#### Parameters

| Type | Name |
|------|------|
|TArray< [URH_RHFriendAndPlatformFriend](/unreal-plugins/all/classurh__rhfriendandplatformfriend/#classURH__RHFriendAndPlatformFriend) * > &|OutArray|

#### Description

Removes all friends from the cached data that have no relationship to the player the subsystem is for.


#### Parameters

OutArray
: Array of players that were removed. 



### `PollFriendsList` <a id="classURH__FriendSubsystem_1ac09b6bec4ef50e2e2c7bc9daee98cc9b"></a>

void PollFriendsList(const FRH_PollCompleteFunc & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_PollCompleteFunc &|Delegate|

#### Description

Executes a poll of the players friends list.


#### Parameters

Delegate
: Callback delegate for the poll. 



### `PollBlockedPlayers` <a id="classURH__FriendSubsystem_1a3eb26a11fae901e018b1a1863c576f3b"></a>

void PollBlockedPlayers(const FRH_PollCompleteFunc & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_PollCompleteFunc &|Delegate|

#### Description

Executes a poll of the players blocked list.


#### Parameters

Delegate
: Callback delegate for the poll. 



### `ExtractErrorCodeFromResponse` <a id="classURH__FriendSubsystem_1a132d8e0a874d1f686f085ab4b3a6e68f"></a>

FName ExtractErrorCodeFromResponse(const FHttpResponsePtr & Response)

#### Parameters

| Type | Name |
|------|------|
|const FHttpResponsePtr &|Response|

#### Description

Gets the error code response name from a http request.


#### Parameters

Response
: The Http response to get the error from. 

#### Returns
The error code. 



### `OnReadOSSFriendsComplete` <a id="classURH__FriendSubsystem_1a28e2e549632ea1cde658e352a74e5e71"></a>

void OnReadOSSFriendsComplete(int32 LocalUserNum, bool bWasSuccessful, const FString & ListName, const FString & ErrorStr)

#### Parameters

| Type | Name |
|------|------|
|int32|LocalUserNum|
|bool|bWasSuccessful|
|const FString &|ListName|
|const FString &|ErrorStr|

#### Description

Handles the response from the online subsystem call to get friends.


#### Parameters

LocalUserNum
: Controller id of the local player. 
bWasSuccessful
: If the get friends call was successful. 
ListName
: The name of the list that was requested. 
ErrorStr
: Error string if the call failed. 



### `OnOSSBlockListChanged` <a id="classURH__FriendSubsystem_1ac118c76788b362e16e3c254372921074"></a>

void OnOSSBlockListChanged(int32 LocalUserNum, const FString & ListName)

#### Parameters

| Type | Name |
|------|------|
|int32|LocalUserNum|
|const FString &|ListName|

#### Description

Handles the response from the online subsystem call to get list of blocked players.


#### Parameters

LocalUserNum
: Controller id of the local player. 
ListName
: The name of the list that was returned. 



### `UpdateWithOSSFriends` <a id="classURH__FriendSubsystem_1ac1ec831e3a17301014fd02b08cd786e6"></a>

void UpdateWithOSSFriends(const FString & ListName)

#### Parameters

| Type | Name |
|------|------|
|const FString &|ListName|

#### Description

Updates the system with the friends from the online subsystem.


#### Parameters

ListName
: The list name where the friends are stored. 



### `OnOSSPresenceReceived` <a id="classURH__FriendSubsystem_1a96025e788f843e3af281e4a35bc67f2d"></a>

void OnOSSPresenceReceived(const FUniqueNetId & UserId, const TSharedRef< FOnlineUserPresence > & NewPresence)

#### Parameters

| Type | Name |
|------|------|
|const FUniqueNetId &|UserId|
|const TSharedRef< FOnlineUserPresence > &|NewPresence|

#### Description

Handles the response from the online subsystem call to get presence.


#### Parameters

UserId
: Net Id of the player the presence is for. 
NewPresence
: The presence information from the online subsystem. 




