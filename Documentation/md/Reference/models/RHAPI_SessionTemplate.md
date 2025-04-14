---
title: RHAPI_SessionTemplate
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SessionTemplate`](#structFRHAPI__SessionTemplate) | Template used to create new RallyHere sessions of a specific type. Configurable in the developer portal.

## struct `FRHAPI_SessionTemplate` <a id="structFRHAPI__SessionTemplate"></a>

```
struct FRHAPI_SessionTemplate
  : public FRHAPI_Model
```

Template used to create new RallyHere sessions of a specific type. Configurable in the developer portal.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`SessionType`](#structFRHAPI__SessionTemplate_1a294a5c42b68d1960ade23eb2b8ebed03) | unique name for this template
`public FString `[`EngineSessionType_Optional`](#structFRHAPI__SessionTemplate_1a5215d82c4b5a1849115e1192ce85a42a) | Engine identifier for sessions of this type. For UE, this is commonly `Party` or `Game`.
`public bool `[`EngineSessionType_IsSet`](#structFRHAPI__SessionTemplate_1a7fe48b7d9dd76d0918d6c8cfef6ddabe) | true if EngineSessionType_Optional has been set to a value
`public bool `[`CanJoinMatchmaking_Optional`](#structFRHAPI__SessionTemplate_1a5acc833f588d8b29365429498cfe2a7b) | Are sessions of this type allowed to join matchmaking?
`public bool `[`CanJoinMatchmaking_IsSet`](#structFRHAPI__SessionTemplate_1a2e4fd1ddce8e54ae5242c6a839b9a446) | true if CanJoinMatchmaking_Optional has been set to a value
`public bool `[`CanBeCreatedByPlayersDirectly_Optional`](#structFRHAPI__SessionTemplate_1ab6aed074db1776677efeedae942a6dde) | Are players allowed to create sessions of this type?
`public bool `[`CanBeCreatedByPlayersDirectly_IsSet`](#structFRHAPI__SessionTemplate_1af34cf526890cc59a7c99aeb31fe47f86) | true if CanBeCreatedByPlayersDirectly_Optional has been set to a value
`public bool `[`Joinable_Optional`](#structFRHAPI__SessionTemplate_1af726850d2f0a47c0d363bc6fe56649d2) | DEPRECATED. Use 'attempt_auto_join' instead. Should players join existing sessions of this type before creating a new one.
`public bool `[`Joinable_IsSet`](#structFRHAPI__SessionTemplate_1a640852541c1622264fb0b45e8bcba358) | true if Joinable_Optional has been set to a value
`public bool `[`AttemptAutoJoin_Optional`](#structFRHAPI__SessionTemplate_1a7d1c0ca1b78e58fe1b0e1b4bc14c7d1d) | Should players join existing sessions of this type before creating a new one.
`public bool `[`AttemptAutoJoin_IsSet`](#structFRHAPI__SessionTemplate_1a3ef337d1d127c53479600fd601327932) | true if AttemptAutoJoin_Optional has been set to a value
`public bool `[`DefaultPublic_Optional`](#structFRHAPI__SessionTemplate_1ad23d2d7b28599c82e031a8ec8e0044bd) | Should sessions of this type should be publicly joinable by default.
`public bool `[`DefaultPublic_IsSet`](#structFRHAPI__SessionTemplate_1ad56e88aba80b14f4a35817228bc1de98) | true if DefaultPublic_Optional has been set to a value
`public bool `[`AutoAddToBrowser_Optional`](#structFRHAPI__SessionTemplate_1acd767d33d578663a2ae87266051aee21) | Should session be automatically added to the browser list.
`public bool `[`AutoAddToBrowser_IsSet`](#structFRHAPI__SessionTemplate_1a3680cbdc548742735a67e6b5aa39f17a) | true if AutoAddToBrowser_Optional has been set to a value
`public TMap< FString, FString > `[`AutoBrowserParams_Optional`](#structFRHAPI__SessionTemplate_1a82787643aa3e38fe0da7bf1500e0ef62) | Browser parameters that can be used to filter results.
`public bool `[`AutoBrowserParams_IsSet`](#structFRHAPI__SessionTemplate_1a72c52c990ae499219e09ac48b95dfb1b) | true if AutoBrowserParams_Optional has been set to a value
`public bool `[`CanBeAddedToServerBrowser_Optional`](#structFRHAPI__SessionTemplate_1a76d1142e89d2951f77aca49fae032565) | Are sessions of this type able to be added to the server browser by players?
`public bool `[`CanBeAddedToServerBrowser_IsSet`](#structFRHAPI__SessionTemplate_1af405bbeacdcad1f1edeec8066557d282) | true if CanBeAddedToServerBrowser_Optional has been set to a value
`public bool `[`KeepAliveOnEmpty_Optional`](#structFRHAPI__SessionTemplate_1a9e9d05c256bcee13ec7a503fff383a9f) | Should the session stay around, or be destroyed when the last player leaves it?
`public bool `[`KeepAliveOnEmpty_IsSet`](#structFRHAPI__SessionTemplate_1a7a021f27573b66f03bddb164ba2baea4) | true if KeepAliveOnEmpty_Optional has been set to a value
`public TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > `[`PlatformTemplates_Optional`](#structFRHAPI__SessionTemplate_1a4a953d98de7701f09938b03e88dc447d) | Platform-Specific session mappings that are used to coordinate Rally Here sessions with OnlineSubsystem sessions.
`public bool `[`PlatformTemplates_IsSet`](#structFRHAPI__SessionTemplate_1a98480d277fd8e297e5b90560f3c10f1a) | true if PlatformTemplates_Optional has been set to a value
`public `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` `[`AutoStartupParams_Optional`](#structFRHAPI__SessionTemplate_1a32d9a060ff0208b639415cee5d9f7287) | Parameters used to start an instance for this session when it is created. Has lower priority than auto_startup_instance_template_id.
`public bool `[`AutoStartupParams_IsSet`](#structFRHAPI__SessionTemplate_1a1ae179a6de476981a9a38197758b7e14) | true if AutoStartupParams_Optional has been set to a value
`public FGuid `[`AutoStartupInstanceTemplateId_Optional`](#structFRHAPI__SessionTemplate_1a2a49d5a8a5818e817ca11e6d123d9ba1) | ID of instance request template to be used to automatically request an instance on creation of a session of this type. Takes priority over auto_startup_params.
`public bool `[`AutoStartupInstanceTemplateId_IsSet`](#structFRHAPI__SessionTemplate_1acf91e44fde96ae8bf3bbdfca666cc444) | true if AutoStartupInstanceTemplateId_Optional has been set to a value
`public int32 `[`MinSessionCount_Optional`](#structFRHAPI__SessionTemplate_1aecf6bdd55d8dc8e92bf1d6e2dc032fc6) | Minimum number of this type of session to be running at any given time per region.
`public bool `[`MinSessionCount_IsSet`](#structFRHAPI__SessionTemplate_1a067eb5ca1f241b90407f3a373cb0bd79) | true if MinSessionCount_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionTemplate_1a8dc395b5c32a277ba6a8098613b19c90) | Product-defined custom data about this session type.
`public bool `[`CustomData_IsSet`](#structFRHAPI__SessionTemplate_1a74b694f3d97279b0f69b5d9c45cef5cc) | true if CustomData_Optional has been set to a value
`public int32 `[`NumTeams_Optional`](#structFRHAPI__SessionTemplate_1a5a6263a13f22dc9fab381d24dd85b07d) | The number of teams this session type can have.
`public bool `[`NumTeams_IsSet`](#structFRHAPI__SessionTemplate_1a5aae055f985bbecae420f583bffcc0a8) | true if NumTeams_Optional has been set to a value
`public int32 `[`PlayersPerTeam_Optional`](#structFRHAPI__SessionTemplate_1acc07f08f5c7dc3262717a590f3de6764) | The number of players that can be on each team.
`public bool `[`PlayersPerTeam_IsSet`](#structFRHAPI__SessionTemplate_1a4351b4b52f5240e0bff65fb92b36b3a2) | true if PlayersPerTeam_Optional has been set to a value
`public bool `[`CanChangeOwnTeam_Optional`](#structFRHAPI__SessionTemplate_1aa2d67a98c7bcf96cc848ae81ca3387e3) | Whether or not a player can change which team they are on. If true, they are able to. If False, they player's team can only be changed by an admin.
`public bool `[`CanChangeOwnTeam_IsSet`](#structFRHAPI__SessionTemplate_1ad6b80d668b66266c71f70affb0cae587) | true if CanChangeOwnTeam_Optional has been set to a value
`public bool `[`NotifyOnReservation_Optional`](#structFRHAPI__SessionTemplate_1a5c0c06cf8165a39442dfc4ab5e830343) | If players should be notified when they are reserved in this type of session instead of waiting until they're invited.
`public bool `[`NotifyOnReservation_IsSet`](#structFRHAPI__SessionTemplate_1a9fc86e1548fa8e1e0ea7c861f984f15b) | true if NotifyOnReservation_Optional has been set to a value
`public ERHAPI_PlayerVisibility `[`PlayerVisibility_Optional`](#structFRHAPI__SessionTemplate_1ad27b6802b679b1951be33d4b964b0e09) | What subset of players a regular client will receive info about. With sufficiently large sessions, visibility will automatically be lowered.
`public bool `[`PlayerVisibility_IsSet`](#structFRHAPI__SessionTemplate_1a2cc0869cd26d1e484f93e728c82e418c) | true if PlayerVisibility_Optional has been set to a value
`public ERHAPI_PlayerVisibility `[`AdminPlayerVisibility_Optional`](#structFRHAPI__SessionTemplate_1a87ba76ecf706ab2cf9aee0641727cfcb) | What subset of players an admin client with elevated privileges will receive info about.
`public bool `[`AdminPlayerVisibility_IsSet`](#structFRHAPI__SessionTemplate_1a0ad8bb0bbc6bd66b70a9633fb59f2595) | true if AdminPlayerVisibility_Optional has been set to a value
`public ERHAPI_PlayerVisibility `[`PlayerNotificationFrequency_Optional`](#structFRHAPI__SessionTemplate_1ab50695184449cba320e0d576ccfd4716) | What subset of notifications a client should receive about players in a session. With sufficiently large sessions, frequency will be automatically lowered.
`public bool `[`PlayerNotificationFrequency_IsSet`](#structFRHAPI__SessionTemplate_1a88ac6bd193615842594f8235d662f628) | true if PlayerNotificationFrequency_Optional has been set to a value
`public ERHAPI_PlayerVisibility `[`AdminPlayerNotificationFrequency_Optional`](#structFRHAPI__SessionTemplate_1a4c378f3051e15932451e385b55467bf6) | What subset of notifications an admin client with elevated privileges will receive about players in a session.
`public bool `[`AdminPlayerNotificationFrequency_IsSet`](#structFRHAPI__SessionTemplate_1a0800679283a7d5d1ea6ee7fa9dba82a6) | true if AdminPlayerNotificationFrequency_Optional has been set to a value
`public int32 `[`PlayerCullingTimeout_Optional`](#structFRHAPI__SessionTemplate_1ae963851b12ae3d4404870277c7c969db) | How many seconds must pass with a player not querying a session before they get culled. If unset or 0, then players will not be culled.
`public bool `[`PlayerCullingTimeout_IsSet`](#structFRHAPI__SessionTemplate_1a8100672eaf3c30d4e32ff5e341f4ce31) | true if PlayerCullingTimeout_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SessionTemplate_1a584ea37b08d01584233924dd39557b4a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionTemplate_1a302c24f09b7e5dc1c95ab028757a4732)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetSessionType`](#structFRHAPI__SessionTemplate_1ad017b59cb852d1a7fe4422da447c6443)`()` | Gets the value of SessionType.
`public inline const FString & `[`GetSessionType`](#structFRHAPI__SessionTemplate_1a8c84294b7e4e66cfe78080e1be4a6f8d)`() const` | Gets the value of SessionType.
`public inline void `[`SetSessionType`](#structFRHAPI__SessionTemplate_1a775c1663b9ebd28bd3b8ced9fb39b92d)`(const FString & NewValue)` | Sets the value of SessionType.
`public inline void `[`SetSessionType`](#structFRHAPI__SessionTemplate_1aae91a73e92d727b39dd51488c44404b2)`(FString && NewValue)` | Sets the value of SessionType using move semantics.
`public inline FString & `[`GetEngineSessionType`](#structFRHAPI__SessionTemplate_1a9d2832c6d0741e6914c907a3b91849d9)`()` | Gets the value of EngineSessionType_Optional, regardless of it having been set.
`public inline const FString & `[`GetEngineSessionType`](#structFRHAPI__SessionTemplate_1a148ba722b02511cd7ef52aaeaf09eba3)`() const` | Gets the value of EngineSessionType_Optional, regardless of it having been set.
`public inline const FString & `[`GetEngineSessionType`](#structFRHAPI__SessionTemplate_1abae00420326e0f209e6c1ffcc5a427ea)`(const FString & DefaultValue) const` | Gets the value of EngineSessionType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEngineSessionType`](#structFRHAPI__SessionTemplate_1ac4fce3fe7bfb35f5ded0559c3d4ddb8d)`(FString & OutValue) const` | Fills OutValue with the value of EngineSessionType_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetEngineSessionTypeOrNull`](#structFRHAPI__SessionTemplate_1a46a8920195703818cea8e7b1dd8607df)`()` | Returns a pointer to EngineSessionType_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetEngineSessionTypeOrNull`](#structFRHAPI__SessionTemplate_1ae5738827c93759b1f850a743512b4a35)`() const` | Returns a pointer to EngineSessionType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEngineSessionType`](#structFRHAPI__SessionTemplate_1ab49c18e1f0b8c7b4c9bd0e418f380bb6)`(const FString & NewValue)` | Sets the value of EngineSessionType_Optional and also sets EngineSessionType_IsSet to true.
`public inline void `[`SetEngineSessionType`](#structFRHAPI__SessionTemplate_1a32899af07b115593b0148471783286e7)`(FString && NewValue)` | Sets the value of EngineSessionType_Optional and also sets EngineSessionType_IsSet to true using move semantics.
`public inline void `[`ClearEngineSessionType`](#structFRHAPI__SessionTemplate_1a49cf645ee28f75e34b7e82a375b0b7a0)`()` | Clears the value of EngineSessionType_Optional and sets EngineSessionType_IsSet to false.
`public inline bool `[`IsEngineSessionTypeSet`](#structFRHAPI__SessionTemplate_1ad7b96b3d4c45af4889a17bc0700bcb93)`() const` | Checks whether EngineSessionType_Optional has been set.
`public inline bool `[`IsEngineSessionTypeDefaultValue`](#structFRHAPI__SessionTemplate_1a3cfbdbc7f9037595cd081510a49b47be)`() const` | Returns true if EngineSessionType_Optional is set and matches the default value.
`public inline void `[`SetEngineSessionTypeToDefault`](#structFRHAPI__SessionTemplate_1a63b6dfef02bbfc4c1602f59da2e7f468)`()` | Sets the value of EngineSessionType_Optional to its default and also sets EngineSessionType_IsSet to true.
`public inline bool & `[`GetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1ab2390e4919cc3df3a741d1907608de2a)`()` | Gets the value of CanJoinMatchmaking_Optional, regardless of it having been set.
`public inline const bool & `[`GetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1a32e3a5857583b4390f08d99e1112b850)`() const` | Gets the value of CanJoinMatchmaking_Optional, regardless of it having been set.
`public inline const bool & `[`GetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1a0833a033c34d81714fae95bd2146c735)`(const bool & DefaultValue) const` | Gets the value of CanJoinMatchmaking_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1ad8ade8f89b17c3544ddeb227951fcf83)`(bool & OutValue) const` | Fills OutValue with the value of CanJoinMatchmaking_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetCanJoinMatchmakingOrNull`](#structFRHAPI__SessionTemplate_1a02c2a6c3b3c7e692fe5d0c4c57ea386e)`()` | Returns a pointer to CanJoinMatchmaking_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetCanJoinMatchmakingOrNull`](#structFRHAPI__SessionTemplate_1a03d7ab60cfae47cf5a3eb5bad6e525c3)`() const` | Returns a pointer to CanJoinMatchmaking_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1a1b15c4db7b58bc335f847a653d28d503)`(const bool & NewValue)` | Sets the value of CanJoinMatchmaking_Optional and also sets CanJoinMatchmaking_IsSet to true.
`public inline void `[`SetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1abc9239242ba4cf83ce6727b03b389a6e)`(bool && NewValue)` | Sets the value of CanJoinMatchmaking_Optional and also sets CanJoinMatchmaking_IsSet to true using move semantics.
`public inline void `[`ClearCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1aea8827859a78eea75ccb378ae6d34536)`()` | Clears the value of CanJoinMatchmaking_Optional and sets CanJoinMatchmaking_IsSet to false.
`public inline bool `[`IsCanJoinMatchmakingSet`](#structFRHAPI__SessionTemplate_1af213e3709013876100f0230cf90247b7)`() const` | Checks whether CanJoinMatchmaking_Optional has been set.
`public inline bool `[`IsCanJoinMatchmakingDefaultValue`](#structFRHAPI__SessionTemplate_1a712f72abd63eda494b43154b029822e9)`() const` | Returns true if CanJoinMatchmaking_Optional is set and matches the default value.
`public inline void `[`SetCanJoinMatchmakingToDefault`](#structFRHAPI__SessionTemplate_1ab1db9565664aea038731887f24deff21)`()` | Sets the value of CanJoinMatchmaking_Optional to its default and also sets CanJoinMatchmaking_IsSet to true.
`public inline bool & `[`GetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1a2268a6d0fdbb21faf737561fdc47edc3)`()` | Gets the value of CanBeCreatedByPlayersDirectly_Optional, regardless of it having been set.
`public inline const bool & `[`GetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1a506b8839e1e51712abf3a88bca902c01)`() const` | Gets the value of CanBeCreatedByPlayersDirectly_Optional, regardless of it having been set.
`public inline const bool & `[`GetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1abefcee69e75378c695d82f516174fd6f)`(const bool & DefaultValue) const` | Gets the value of CanBeCreatedByPlayersDirectly_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1a17cb4c890a7a9329f9c84300193a5c32)`(bool & OutValue) const` | Fills OutValue with the value of CanBeCreatedByPlayersDirectly_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetCanBeCreatedByPlayersDirectlyOrNull`](#structFRHAPI__SessionTemplate_1aa48b023381de994a979200a0e824af35)`()` | Returns a pointer to CanBeCreatedByPlayersDirectly_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetCanBeCreatedByPlayersDirectlyOrNull`](#structFRHAPI__SessionTemplate_1ab1087af4085176f4e70fe4b3d06031d1)`() const` | Returns a pointer to CanBeCreatedByPlayersDirectly_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1a6bd3ddf628bb4358b89be928c6337759)`(const bool & NewValue)` | Sets the value of CanBeCreatedByPlayersDirectly_Optional and also sets CanBeCreatedByPlayersDirectly_IsSet to true.
`public inline void `[`SetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1a8aef4b2f30edd3721d971df495b8c235)`(bool && NewValue)` | Sets the value of CanBeCreatedByPlayersDirectly_Optional and also sets CanBeCreatedByPlayersDirectly_IsSet to true using move semantics.
`public inline void `[`ClearCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1aeeead6ecb3330ef0ab4e0d0f1d51be6f)`()` | Clears the value of CanBeCreatedByPlayersDirectly_Optional and sets CanBeCreatedByPlayersDirectly_IsSet to false.
`public inline bool `[`IsCanBeCreatedByPlayersDirectlySet`](#structFRHAPI__SessionTemplate_1a43a55df360c1ddf8d21e4771cea65873)`() const` | Checks whether CanBeCreatedByPlayersDirectly_Optional has been set.
`public inline bool `[`IsCanBeCreatedByPlayersDirectlyDefaultValue`](#structFRHAPI__SessionTemplate_1afc9d293d6290f5c2de49e0abc1da9c4d)`() const` | Returns true if CanBeCreatedByPlayersDirectly_Optional is set and matches the default value.
`public inline void `[`SetCanBeCreatedByPlayersDirectlyToDefault`](#structFRHAPI__SessionTemplate_1a5895d02285be3538be2d7e59412f7466)`()` | Sets the value of CanBeCreatedByPlayersDirectly_Optional to its default and also sets CanBeCreatedByPlayersDirectly_IsSet to true.
`public inline bool & `[`GetJoinable`](#structFRHAPI__SessionTemplate_1a4ebcd1cb53b68ee338d5544285997cf4)`()` | Gets the value of Joinable_Optional, regardless of it having been set.
`public inline const bool & `[`GetJoinable`](#structFRHAPI__SessionTemplate_1a74594d3b3a731950d93108ff65bed03b)`() const` | Gets the value of Joinable_Optional, regardless of it having been set.
`public inline const bool & `[`GetJoinable`](#structFRHAPI__SessionTemplate_1a713443d93cafae9176b2961b62633f99)`(const bool & DefaultValue) const` | Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinable`](#structFRHAPI__SessionTemplate_1a284913a49f55998220ccbae7ffa31df4)`(bool & OutValue) const` | Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetJoinableOrNull`](#structFRHAPI__SessionTemplate_1a4c934106fc241c5872526da62575d929)`()` | Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetJoinableOrNull`](#structFRHAPI__SessionTemplate_1a85119b1792eb1b7200ff1ac7cd798d2c)`() const` | Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinable`](#structFRHAPI__SessionTemplate_1a90e3ca10e69dbac64c38b2af379043f8)`(const bool & NewValue)` | Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.
`public inline void `[`SetJoinable`](#structFRHAPI__SessionTemplate_1a72fd1ea3c02fed97a32afac41654bdc3)`(bool && NewValue)` | Sets the value of Joinable_Optional and also sets Joinable_IsSet to true using move semantics.
`public inline void `[`ClearJoinable`](#structFRHAPI__SessionTemplate_1a2656215bcf0eb51c71fed328166e6b68)`()` | Clears the value of Joinable_Optional and sets Joinable_IsSet to false.
`public inline bool `[`IsJoinableSet`](#structFRHAPI__SessionTemplate_1a615f3ae971f8d57843f77db26b3c52bc)`() const` | Checks whether Joinable_Optional has been set.
`public inline bool `[`IsJoinableDefaultValue`](#structFRHAPI__SessionTemplate_1a7005e50d8cbe3b02a9ce17dbb7d4bd4c)`() const` | Returns true if Joinable_Optional is set and matches the default value.
`public inline void `[`SetJoinableToDefault`](#structFRHAPI__SessionTemplate_1aab55eb4066768dc2f660b6f7148789c6)`()` | Sets the value of Joinable_Optional to its default and also sets Joinable_IsSet to true.
`public inline bool & `[`GetAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1a1e6a2621e815b8f04da2649c7857084f)`()` | Gets the value of AttemptAutoJoin_Optional, regardless of it having been set.
`public inline const bool & `[`GetAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1aa9d06e62ca67dd7ec378c6cc5c071b62)`() const` | Gets the value of AttemptAutoJoin_Optional, regardless of it having been set.
`public inline const bool & `[`GetAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1a6b59a1774285f3f1e6abf05faa128424)`(const bool & DefaultValue) const` | Gets the value of AttemptAutoJoin_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1a746d02f50e4c48a2255984bcae98d864)`(bool & OutValue) const` | Fills OutValue with the value of AttemptAutoJoin_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetAttemptAutoJoinOrNull`](#structFRHAPI__SessionTemplate_1a7852ccce3591a81f7340aafeae65d6d9)`()` | Returns a pointer to AttemptAutoJoin_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetAttemptAutoJoinOrNull`](#structFRHAPI__SessionTemplate_1ac6c8e1ff354ada764ea362fe6e152bc2)`() const` | Returns a pointer to AttemptAutoJoin_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1a2af8e5abde9154beb8a02238571eed82)`(const bool & NewValue)` | Sets the value of AttemptAutoJoin_Optional and also sets AttemptAutoJoin_IsSet to true.
`public inline void `[`SetAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1a92a14310dade9c5208574c3c4ac7ae17)`(bool && NewValue)` | Sets the value of AttemptAutoJoin_Optional and also sets AttemptAutoJoin_IsSet to true using move semantics.
`public inline void `[`ClearAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1af01c65d9412c08982e1d810d821508e6)`()` | Clears the value of AttemptAutoJoin_Optional and sets AttemptAutoJoin_IsSet to false.
`public inline bool `[`IsAttemptAutoJoinSet`](#structFRHAPI__SessionTemplate_1a739c5165a310c80b399838bc6bd0532d)`() const` | Checks whether AttemptAutoJoin_Optional has been set.
`public inline bool `[`IsAttemptAutoJoinDefaultValue`](#structFRHAPI__SessionTemplate_1a6272851fd94d2aae9769e3f49251f26e)`() const` | Returns true if AttemptAutoJoin_Optional is set and matches the default value.
`public inline void `[`SetAttemptAutoJoinToDefault`](#structFRHAPI__SessionTemplate_1a625067a334f5914ab7695522f608984b)`()` | Sets the value of AttemptAutoJoin_Optional to its default and also sets AttemptAutoJoin_IsSet to true.
`public inline bool & `[`GetDefaultPublic`](#structFRHAPI__SessionTemplate_1a9e8b876e3708d356da48ce1e93bc86fd)`()` | Gets the value of DefaultPublic_Optional, regardless of it having been set.
`public inline const bool & `[`GetDefaultPublic`](#structFRHAPI__SessionTemplate_1a6d7930b81dfd0896c9504743f57b5a6d)`() const` | Gets the value of DefaultPublic_Optional, regardless of it having been set.
`public inline const bool & `[`GetDefaultPublic`](#structFRHAPI__SessionTemplate_1ab4418aadec64b930214659dbb105d0e6)`(const bool & DefaultValue) const` | Gets the value of DefaultPublic_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDefaultPublic`](#structFRHAPI__SessionTemplate_1abc8a258803a6af1a06337bfd38790b1d)`(bool & OutValue) const` | Fills OutValue with the value of DefaultPublic_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetDefaultPublicOrNull`](#structFRHAPI__SessionTemplate_1af550284b606277f6220381072622486a)`()` | Returns a pointer to DefaultPublic_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetDefaultPublicOrNull`](#structFRHAPI__SessionTemplate_1a85a60b50033db50f0b5e849b0ad022e6)`() const` | Returns a pointer to DefaultPublic_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDefaultPublic`](#structFRHAPI__SessionTemplate_1a917d570df95c56cc8bb10421aa9b07ee)`(const bool & NewValue)` | Sets the value of DefaultPublic_Optional and also sets DefaultPublic_IsSet to true.
`public inline void `[`SetDefaultPublic`](#structFRHAPI__SessionTemplate_1aa895f5b178b0d787dac1c5d31f978965)`(bool && NewValue)` | Sets the value of DefaultPublic_Optional and also sets DefaultPublic_IsSet to true using move semantics.
`public inline void `[`ClearDefaultPublic`](#structFRHAPI__SessionTemplate_1a0b7ec628161b7d1a8317204875d476e5)`()` | Clears the value of DefaultPublic_Optional and sets DefaultPublic_IsSet to false.
`public inline bool `[`IsDefaultPublicSet`](#structFRHAPI__SessionTemplate_1a061b603b9b9c500a4e83172c131e8fce)`() const` | Checks whether DefaultPublic_Optional has been set.
`public inline bool `[`IsDefaultPublicDefaultValue`](#structFRHAPI__SessionTemplate_1aded9e905d1ae97b71569316e9a93249f)`() const` | Returns true if DefaultPublic_Optional is set and matches the default value.
`public inline void `[`SetDefaultPublicToDefault`](#structFRHAPI__SessionTemplate_1aeff38f0e7c8d477f6175359b09bf33e7)`()` | Sets the value of DefaultPublic_Optional to its default and also sets DefaultPublic_IsSet to true.
`public inline bool & `[`GetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1a5faff907f780e0c77a5a07485f69c258)`()` | Gets the value of AutoAddToBrowser_Optional, regardless of it having been set.
`public inline const bool & `[`GetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1a567940651831c41a236c940db9862296)`() const` | Gets the value of AutoAddToBrowser_Optional, regardless of it having been set.
`public inline const bool & `[`GetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1ac1732642f1c86236a2f7b94a71c24218)`(const bool & DefaultValue) const` | Gets the value of AutoAddToBrowser_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1ae622425b3ab30a45ced3fe65d4e23f24)`(bool & OutValue) const` | Fills OutValue with the value of AutoAddToBrowser_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetAutoAddToBrowserOrNull`](#structFRHAPI__SessionTemplate_1a06c4418084ea9f117467ad26bdd233e9)`()` | Returns a pointer to AutoAddToBrowser_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetAutoAddToBrowserOrNull`](#structFRHAPI__SessionTemplate_1abaf6ed37d83447cfb8b600031a1aac81)`() const` | Returns a pointer to AutoAddToBrowser_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1a07064519d9290d4742c9c2c842638738)`(const bool & NewValue)` | Sets the value of AutoAddToBrowser_Optional and also sets AutoAddToBrowser_IsSet to true.
`public inline void `[`SetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1a56942ab4f363d7966f8b3c8c4f54be30)`(bool && NewValue)` | Sets the value of AutoAddToBrowser_Optional and also sets AutoAddToBrowser_IsSet to true using move semantics.
`public inline void `[`ClearAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1ae71defa87a1bc92560786421ece26aa0)`()` | Clears the value of AutoAddToBrowser_Optional and sets AutoAddToBrowser_IsSet to false.
`public inline bool `[`IsAutoAddToBrowserSet`](#structFRHAPI__SessionTemplate_1ab431ba36b8a46d0fedd0443d5c5e38da)`() const` | Checks whether AutoAddToBrowser_Optional has been set.
`public inline bool `[`IsAutoAddToBrowserDefaultValue`](#structFRHAPI__SessionTemplate_1a1aef6318593a8e024bab505bdc238fc9)`() const` | Returns true if AutoAddToBrowser_Optional is set and matches the default value.
`public inline void `[`SetAutoAddToBrowserToDefault`](#structFRHAPI__SessionTemplate_1a78e197d8caad7dcbdb0a6325c5828d07)`()` | Sets the value of AutoAddToBrowser_Optional to its default and also sets AutoAddToBrowser_IsSet to true.
`public inline TMap< FString, FString > & `[`GetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1afae31ff760efb9e22623994bf569d8fc)`()` | Gets the value of AutoBrowserParams_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1a5137c420d75c624c4bde8fba6d0bc7b3)`() const` | Gets the value of AutoBrowserParams_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1a04abcc122b2a77b4a864f9171f2c536e)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of AutoBrowserParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1a28c63280b5b76ebb4ca52054211a2876)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of AutoBrowserParams_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetAutoBrowserParamsOrNull`](#structFRHAPI__SessionTemplate_1a13d798f47cf360811d38e96a9d0d02b8)`()` | Returns a pointer to AutoBrowserParams_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetAutoBrowserParamsOrNull`](#structFRHAPI__SessionTemplate_1a2e3f79ed6491fdfef2310d51f2c15db8)`() const` | Returns a pointer to AutoBrowserParams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1abe4d9b3d9ad4d475ea1915a1b252abae)`(const TMap< FString, FString > & NewValue)` | Sets the value of AutoBrowserParams_Optional and also sets AutoBrowserParams_IsSet to true.
`public inline void `[`SetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1a23b627d4d14851620d18c9acab0a82b6)`(TMap< FString, FString > && NewValue)` | Sets the value of AutoBrowserParams_Optional and also sets AutoBrowserParams_IsSet to true using move semantics.
`public inline void `[`ClearAutoBrowserParams`](#structFRHAPI__SessionTemplate_1afc6ccbb82066817f3e22ad01730802db)`()` | Clears the value of AutoBrowserParams_Optional and sets AutoBrowserParams_IsSet to false.
`public inline bool `[`IsAutoBrowserParamsSet`](#structFRHAPI__SessionTemplate_1a28ad44e91169e211265cb22207a62739)`() const` | Checks whether AutoBrowserParams_Optional has been set.
`public inline bool & `[`GetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1ac9dd9bebba443764f56d8e7529416655)`()` | Gets the value of CanBeAddedToServerBrowser_Optional, regardless of it having been set.
`public inline const bool & `[`GetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1ad1c75d1dda312c3f6aefc6886f744d4b)`() const` | Gets the value of CanBeAddedToServerBrowser_Optional, regardless of it having been set.
`public inline const bool & `[`GetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1a50d795863d18ab4dc9d28e7d31ad4c0b)`(const bool & DefaultValue) const` | Gets the value of CanBeAddedToServerBrowser_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1ab18e4d2ed25195e8d0f76dc39810daff)`(bool & OutValue) const` | Fills OutValue with the value of CanBeAddedToServerBrowser_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetCanBeAddedToServerBrowserOrNull`](#structFRHAPI__SessionTemplate_1af073e035fc89c31f1959ddf681c28aa4)`()` | Returns a pointer to CanBeAddedToServerBrowser_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetCanBeAddedToServerBrowserOrNull`](#structFRHAPI__SessionTemplate_1a072faaa4da8faf2677a53db180d1eda9)`() const` | Returns a pointer to CanBeAddedToServerBrowser_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1adfbb9e7dc7cdcf5053b2f0c2b7245f1b)`(const bool & NewValue)` | Sets the value of CanBeAddedToServerBrowser_Optional and also sets CanBeAddedToServerBrowser_IsSet to true.
`public inline void `[`SetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1ac821ce049020b19861e32ceaf5b2591b)`(bool && NewValue)` | Sets the value of CanBeAddedToServerBrowser_Optional and also sets CanBeAddedToServerBrowser_IsSet to true using move semantics.
`public inline void `[`ClearCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1a23f4b3075ad5c6cf66442b7fb9ff4731)`()` | Clears the value of CanBeAddedToServerBrowser_Optional and sets CanBeAddedToServerBrowser_IsSet to false.
`public inline bool `[`IsCanBeAddedToServerBrowserSet`](#structFRHAPI__SessionTemplate_1ae89419bc9b1476eb90fb40492082bce8)`() const` | Checks whether CanBeAddedToServerBrowser_Optional has been set.
`public inline bool `[`IsCanBeAddedToServerBrowserDefaultValue`](#structFRHAPI__SessionTemplate_1a7d34d65f47086fd753f7ac691a4c0df5)`() const` | Returns true if CanBeAddedToServerBrowser_Optional is set and matches the default value.
`public inline void `[`SetCanBeAddedToServerBrowserToDefault`](#structFRHAPI__SessionTemplate_1a933ba7bff1d990c9c0e12b47abd0864f)`()` | Sets the value of CanBeAddedToServerBrowser_Optional to its default and also sets CanBeAddedToServerBrowser_IsSet to true.
`public inline bool & `[`GetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a9e60ca74d4ac55e0123a33ae64cc44e7)`()` | Gets the value of KeepAliveOnEmpty_Optional, regardless of it having been set.
`public inline const bool & `[`GetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1aedca4751706f6b31fac15cea328d6cc9)`() const` | Gets the value of KeepAliveOnEmpty_Optional, regardless of it having been set.
`public inline const bool & `[`GetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a7b3678b4dfcf411829e793092535dc76)`(const bool & DefaultValue) const` | Gets the value of KeepAliveOnEmpty_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1acdfbfbafa3f03348b60c82c0b6625ac8)`(bool & OutValue) const` | Fills OutValue with the value of KeepAliveOnEmpty_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetKeepAliveOnEmptyOrNull`](#structFRHAPI__SessionTemplate_1a948f9ae27517a4a5505bc52d77a8d328)`()` | Returns a pointer to KeepAliveOnEmpty_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetKeepAliveOnEmptyOrNull`](#structFRHAPI__SessionTemplate_1a327943c3ffe9ddc14f67a9c6bfc7c7fa)`() const` | Returns a pointer to KeepAliveOnEmpty_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a30f13ff4efe0062777248fffdc46887c)`(const bool & NewValue)` | Sets the value of KeepAliveOnEmpty_Optional and also sets KeepAliveOnEmpty_IsSet to true.
`public inline void `[`SetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1ae7c94a6d9624530ce6035ac860672ed2)`(bool && NewValue)` | Sets the value of KeepAliveOnEmpty_Optional and also sets KeepAliveOnEmpty_IsSet to true using move semantics.
`public inline void `[`ClearKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a296512654f450ed319f63f8b648c53b8)`()` | Clears the value of KeepAliveOnEmpty_Optional and sets KeepAliveOnEmpty_IsSet to false.
`public inline bool `[`IsKeepAliveOnEmptySet`](#structFRHAPI__SessionTemplate_1a5aaba552bde3ef07dc59f9c0756c1f90)`() const` | Checks whether KeepAliveOnEmpty_Optional has been set.
`public inline bool `[`IsKeepAliveOnEmptyDefaultValue`](#structFRHAPI__SessionTemplate_1a55aba4ea889f042e220c937f19078a59)`() const` | Returns true if KeepAliveOnEmpty_Optional is set and matches the default value.
`public inline void `[`SetKeepAliveOnEmptyToDefault`](#structFRHAPI__SessionTemplate_1a8a37912d37e10efa335771cbdb045138)`()` | Sets the value of KeepAliveOnEmpty_Optional to its default and also sets KeepAliveOnEmpty_IsSet to true.
`public inline TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & `[`GetPlatformTemplates`](#structFRHAPI__SessionTemplate_1a05cd66e8ea70e87cd6b721f4c56e20d5)`()` | Gets the value of PlatformTemplates_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & `[`GetPlatformTemplates`](#structFRHAPI__SessionTemplate_1a5ff34c95697389fc89e66eba9f533830)`() const` | Gets the value of PlatformTemplates_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & `[`GetPlatformTemplates`](#structFRHAPI__SessionTemplate_1a6f72b0ba06fe6419676cf437bcc96a0b)`(const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & DefaultValue) const` | Gets the value of PlatformTemplates_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformTemplates`](#structFRHAPI__SessionTemplate_1a56834a7a902d9cff7d59c3e78d1cf3e9)`(TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & OutValue) const` | Fills OutValue with the value of PlatformTemplates_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > * `[`GetPlatformTemplatesOrNull`](#structFRHAPI__SessionTemplate_1a12f01e7d8662c13046c9a79f80c8c769)`()` | Returns a pointer to PlatformTemplates_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > * `[`GetPlatformTemplatesOrNull`](#structFRHAPI__SessionTemplate_1a746304e1d37e721d67d71d0a30de7eaf)`() const` | Returns a pointer to PlatformTemplates_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformTemplates`](#structFRHAPI__SessionTemplate_1aef2a22d494689a2c8001ef25ac75b989)`(const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & NewValue)` | Sets the value of PlatformTemplates_Optional and also sets PlatformTemplates_IsSet to true.
`public inline void `[`SetPlatformTemplates`](#structFRHAPI__SessionTemplate_1ad33c9e8eb0653ab89dfa4379ac74b9e8)`(TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > && NewValue)` | Sets the value of PlatformTemplates_Optional and also sets PlatformTemplates_IsSet to true using move semantics.
`public inline void `[`ClearPlatformTemplates`](#structFRHAPI__SessionTemplate_1a63f0a0474639a53f8a0789e3850321dd)`()` | Clears the value of PlatformTemplates_Optional and sets PlatformTemplates_IsSet to false.
`public inline bool `[`IsPlatformTemplatesSet`](#structFRHAPI__SessionTemplate_1ab169ff9497d80c552771861c9e99bd50)`() const` | Checks whether PlatformTemplates_Optional has been set.
`public inline `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetAutoStartupParams`](#structFRHAPI__SessionTemplate_1a9f3f4f012e7474a15e5e716386bff37f)`()` | Gets the value of AutoStartupParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetAutoStartupParams`](#structFRHAPI__SessionTemplate_1af22691ef268a62401d761825acab24ea)`() const` | Gets the value of AutoStartupParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetAutoStartupParams`](#structFRHAPI__SessionTemplate_1a7e7ae8db4bfa746ceef1b237f17f2fbb)`(const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & DefaultValue) const` | Gets the value of AutoStartupParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAutoStartupParams`](#structFRHAPI__SessionTemplate_1add791f7825789aeab338cf381a333094)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & OutValue) const` | Fills OutValue with the value of AutoStartupParams_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetAutoStartupParamsOrNull`](#structFRHAPI__SessionTemplate_1a8585d6d67b8e44ca0c4faf1a84c5a995)`()` | Returns a pointer to AutoStartupParams_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetAutoStartupParamsOrNull`](#structFRHAPI__SessionTemplate_1a643775892067da944afeb15e120ea32e)`() const` | Returns a pointer to AutoStartupParams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAutoStartupParams`](#structFRHAPI__SessionTemplate_1aa59440ea3fe08b7645432484d67097d2)`(const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & NewValue)` | Sets the value of AutoStartupParams_Optional and also sets AutoStartupParams_IsSet to true.
`public inline void `[`SetAutoStartupParams`](#structFRHAPI__SessionTemplate_1a8a5bc47e88fe94a0ac5cc851f66b9b6b)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` && NewValue)` | Sets the value of AutoStartupParams_Optional and also sets AutoStartupParams_IsSet to true using move semantics.
`public inline void `[`ClearAutoStartupParams`](#structFRHAPI__SessionTemplate_1a41041ffbd8775231d249554a072116d7)`()` | Clears the value of AutoStartupParams_Optional and sets AutoStartupParams_IsSet to false.
`public inline bool `[`IsAutoStartupParamsSet`](#structFRHAPI__SessionTemplate_1ad558ef638e92f2195f4a2cd552bf11ee)`() const` | Checks whether AutoStartupParams_Optional has been set.
`public inline FGuid & `[`GetAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1a25ec3ff947009de774a222358c645022)`()` | Gets the value of AutoStartupInstanceTemplateId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1abb2ce02ba496b946f4656da12a236176)`() const` | Gets the value of AutoStartupInstanceTemplateId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1a758fc00617e1c61ac866f78a21e57911)`(const FGuid & DefaultValue) const` | Gets the value of AutoStartupInstanceTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1ae35f80049d7dc1521c2ddccd8addc87e)`(FGuid & OutValue) const` | Fills OutValue with the value of AutoStartupInstanceTemplateId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetAutoStartupInstanceTemplateIdOrNull`](#structFRHAPI__SessionTemplate_1ac8d0ddc053566298a105a517d5617b3d)`()` | Returns a pointer to AutoStartupInstanceTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetAutoStartupInstanceTemplateIdOrNull`](#structFRHAPI__SessionTemplate_1a842f80f7ddaa2101d14f736e9fd2f39a)`() const` | Returns a pointer to AutoStartupInstanceTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1a5309a18ed5a3de1bafcb9cbfabedfc46)`(const FGuid & NewValue)` | Sets the value of AutoStartupInstanceTemplateId_Optional and also sets AutoStartupInstanceTemplateId_IsSet to true.
`public inline void `[`SetAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1a0335c7e457802515a793b2597691dc9f)`(FGuid && NewValue)` | Sets the value of AutoStartupInstanceTemplateId_Optional and also sets AutoStartupInstanceTemplateId_IsSet to true using move semantics.
`public inline void `[`ClearAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1a34645ae41e39de740fe31869d3e1a64f)`()` | Clears the value of AutoStartupInstanceTemplateId_Optional and sets AutoStartupInstanceTemplateId_IsSet to false.
`public inline bool `[`IsAutoStartupInstanceTemplateIdSet`](#structFRHAPI__SessionTemplate_1aea65eda3e21c0d36784eb20408abb6b3)`() const` | Checks whether AutoStartupInstanceTemplateId_Optional has been set.
`public inline int32 & `[`GetMinSessionCount`](#structFRHAPI__SessionTemplate_1a405c96af4d0b35d9a42f0a8acfd544ad)`()` | Gets the value of MinSessionCount_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMinSessionCount`](#structFRHAPI__SessionTemplate_1af4d2e2ea91d29c9e9b07cb6ebe15bb78)`() const` | Gets the value of MinSessionCount_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMinSessionCount`](#structFRHAPI__SessionTemplate_1a778127f9c08a178304a3489f89fd112f)`(const int32 & DefaultValue) const` | Gets the value of MinSessionCount_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMinSessionCount`](#structFRHAPI__SessionTemplate_1a01b84d2a460388a199d7c375fad38fd3)`(int32 & OutValue) const` | Fills OutValue with the value of MinSessionCount_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetMinSessionCountOrNull`](#structFRHAPI__SessionTemplate_1affea787b1da3b1cc110e13cc2b2c70ae)`()` | Returns a pointer to MinSessionCount_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetMinSessionCountOrNull`](#structFRHAPI__SessionTemplate_1a5a9ad460981abf8d88a5ce89add06f31)`() const` | Returns a pointer to MinSessionCount_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMinSessionCount`](#structFRHAPI__SessionTemplate_1ace0c7cda6fdf8aaf0a8800a90b6429ab)`(const int32 & NewValue)` | Sets the value of MinSessionCount_Optional and also sets MinSessionCount_IsSet to true.
`public inline void `[`SetMinSessionCount`](#structFRHAPI__SessionTemplate_1a0ce540f4fccad24c9591f7d44939909c)`(int32 && NewValue)` | Sets the value of MinSessionCount_Optional and also sets MinSessionCount_IsSet to true using move semantics.
`public inline void `[`ClearMinSessionCount`](#structFRHAPI__SessionTemplate_1a563b899213f0a6ff1e7ab855e18df3a5)`()` | Clears the value of MinSessionCount_Optional and sets MinSessionCount_IsSet to false.
`public inline bool `[`IsMinSessionCountSet`](#structFRHAPI__SessionTemplate_1a610dddf4eb602be4fdb0f12c88732fb1)`() const` | Checks whether MinSessionCount_Optional has been set.
`public inline bool `[`IsMinSessionCountDefaultValue`](#structFRHAPI__SessionTemplate_1a8215c4b5ea50cf0228490c27c5db60fb)`() const` | Returns true if MinSessionCount_Optional is set and matches the default value.
`public inline void `[`SetMinSessionCountToDefault`](#structFRHAPI__SessionTemplate_1af3b075285782037409643751bbaaa19d)`()` | Sets the value of MinSessionCount_Optional to its default and also sets MinSessionCount_IsSet to true.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTemplate_1a7ea4e07c8fbbc595050782c15b140213)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTemplate_1af92e15e174e01a237c4f930ffd37a69c)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTemplate_1a3b1f56c30c3101d0a3a5d8212b146124)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__SessionTemplate_1ab19f81eb52ffd9f199a884befe791d2a)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionTemplate_1ae68e97b35880248c26b0421d81f73dbf)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionTemplate_1ad97ca29e69f7c2b668e5daf61e0df11b)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__SessionTemplate_1a993c448647d82c54afa34ce67ba87e2f)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__SessionTemplate_1a869681a3b5716ffe763d5422d7246f9a)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__SessionTemplate_1ac20b3669d3a9488606e5e2afd59df8f1)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__SessionTemplate_1a0bc6aaa6c0c6ded812dd13edf2c6947e)`() const` | Checks whether CustomData_Optional has been set.
`public inline int32 & `[`GetNumTeams`](#structFRHAPI__SessionTemplate_1a938c9616fb6f1b26f4783cb622460bd6)`()` | Gets the value of NumTeams_Optional, regardless of it having been set.
`public inline const int32 & `[`GetNumTeams`](#structFRHAPI__SessionTemplate_1a1266c296154daf2e31ca20a0bdaf5b64)`() const` | Gets the value of NumTeams_Optional, regardless of it having been set.
`public inline const int32 & `[`GetNumTeams`](#structFRHAPI__SessionTemplate_1a09d6164e4c894d2159086a3f97379632)`(const int32 & DefaultValue) const` | Gets the value of NumTeams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNumTeams`](#structFRHAPI__SessionTemplate_1a6ce27d5e98f039a4111fd089abc115df)`(int32 & OutValue) const` | Fills OutValue with the value of NumTeams_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetNumTeamsOrNull`](#structFRHAPI__SessionTemplate_1a209bcf2264a58539b91b29306cc6907d)`()` | Returns a pointer to NumTeams_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetNumTeamsOrNull`](#structFRHAPI__SessionTemplate_1a700e1df3477c11025ae1f9845f9f235f)`() const` | Returns a pointer to NumTeams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNumTeams`](#structFRHAPI__SessionTemplate_1ae9d88bcb1dae718613a5953230c617bd)`(const int32 & NewValue)` | Sets the value of NumTeams_Optional and also sets NumTeams_IsSet to true.
`public inline void `[`SetNumTeams`](#structFRHAPI__SessionTemplate_1abbc1c0ac4092999273bf0ea2268b9ef6)`(int32 && NewValue)` | Sets the value of NumTeams_Optional and also sets NumTeams_IsSet to true using move semantics.
`public inline void `[`ClearNumTeams`](#structFRHAPI__SessionTemplate_1ab05fd0888c21bacaaab9bd4b0ca92e00)`()` | Clears the value of NumTeams_Optional and sets NumTeams_IsSet to false.
`public inline bool `[`IsNumTeamsSet`](#structFRHAPI__SessionTemplate_1a31cc47bed1561fe1337a30ba863c96f9)`() const` | Checks whether NumTeams_Optional has been set.
`public inline bool `[`IsNumTeamsDefaultValue`](#structFRHAPI__SessionTemplate_1a4c6f7c1655e76727f7cb5b5ffc5c66af)`() const` | Returns true if NumTeams_Optional is set and matches the default value.
`public inline void `[`SetNumTeamsToDefault`](#structFRHAPI__SessionTemplate_1a76d7e80355b9705e3a1ea1c86817fd45)`()` | Sets the value of NumTeams_Optional to its default and also sets NumTeams_IsSet to true.
`public inline int32 & `[`GetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1a68f15d94d41e7986235f7013233373aa)`()` | Gets the value of PlayersPerTeam_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1a2bdea78ff22fd2fe00d556336a9c993f)`() const` | Gets the value of PlayersPerTeam_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1a2852a6cfdf4f291e107bcc0987288321)`(const int32 & DefaultValue) const` | Gets the value of PlayersPerTeam_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1ac380d35a8a8a1758ade954aa9f4c09ca)`(int32 & OutValue) const` | Fills OutValue with the value of PlayersPerTeam_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPlayersPerTeamOrNull`](#structFRHAPI__SessionTemplate_1affc69303a94518aad9e45ec8ba7abdd1)`()` | Returns a pointer to PlayersPerTeam_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPlayersPerTeamOrNull`](#structFRHAPI__SessionTemplate_1ae9c75e4ed5503a4799e11eb915e3049f)`() const` | Returns a pointer to PlayersPerTeam_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1adca032e360f65d8887d1dea902dc5518)`(const int32 & NewValue)` | Sets the value of PlayersPerTeam_Optional and also sets PlayersPerTeam_IsSet to true.
`public inline void `[`SetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1acb852dcaf6689c03a4580016a0a795fb)`(int32 && NewValue)` | Sets the value of PlayersPerTeam_Optional and also sets PlayersPerTeam_IsSet to true using move semantics.
`public inline void `[`ClearPlayersPerTeam`](#structFRHAPI__SessionTemplate_1aa2773b8e861aae5dd66d271167b6e2fb)`()` | Clears the value of PlayersPerTeam_Optional and sets PlayersPerTeam_IsSet to false.
`public inline bool `[`IsPlayersPerTeamSet`](#structFRHAPI__SessionTemplate_1acd48ea97746af1fd74b29d2d65908a0c)`() const` | Checks whether PlayersPerTeam_Optional has been set.
`public inline bool `[`IsPlayersPerTeamDefaultValue`](#structFRHAPI__SessionTemplate_1afc394c69e5ec383de5296897550060eb)`() const` | Returns true if PlayersPerTeam_Optional is set and matches the default value.
`public inline void `[`SetPlayersPerTeamToDefault`](#structFRHAPI__SessionTemplate_1a8434c5519b75cac25c55f491f314dc7e)`()` | Sets the value of PlayersPerTeam_Optional to its default and also sets PlayersPerTeam_IsSet to true.
`public inline bool & `[`GetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1a9fdbd80f1f38aa4ac6f7f5f013279f4f)`()` | Gets the value of CanChangeOwnTeam_Optional, regardless of it having been set.
`public inline const bool & `[`GetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1a65935e0d64fb8e6d7cc2ed65a2b40931)`() const` | Gets the value of CanChangeOwnTeam_Optional, regardless of it having been set.
`public inline const bool & `[`GetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1a7885d492876ce00c08c01b5d82dcfc87)`(const bool & DefaultValue) const` | Gets the value of CanChangeOwnTeam_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1acff401368fdba4b7bc966fe2d79d1923)`(bool & OutValue) const` | Fills OutValue with the value of CanChangeOwnTeam_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetCanChangeOwnTeamOrNull`](#structFRHAPI__SessionTemplate_1a4a16991ea9e808180d3f27516aa2fa2d)`()` | Returns a pointer to CanChangeOwnTeam_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetCanChangeOwnTeamOrNull`](#structFRHAPI__SessionTemplate_1a776402a49618b8aff3bee4d762c110ca)`() const` | Returns a pointer to CanChangeOwnTeam_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1acef6ccf6e866904557c924d78547bad8)`(const bool & NewValue)` | Sets the value of CanChangeOwnTeam_Optional and also sets CanChangeOwnTeam_IsSet to true.
`public inline void `[`SetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1a1ef35ff58824fb5c386525eebc5ee6bb)`(bool && NewValue)` | Sets the value of CanChangeOwnTeam_Optional and also sets CanChangeOwnTeam_IsSet to true using move semantics.
`public inline void `[`ClearCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1a9aa2afa1842ee1cab22a7b1a9a772c08)`()` | Clears the value of CanChangeOwnTeam_Optional and sets CanChangeOwnTeam_IsSet to false.
`public inline bool `[`IsCanChangeOwnTeamSet`](#structFRHAPI__SessionTemplate_1ab01565d0f99d6172f027405ea0e2288d)`() const` | Checks whether CanChangeOwnTeam_Optional has been set.
`public inline bool `[`IsCanChangeOwnTeamDefaultValue`](#structFRHAPI__SessionTemplate_1a26a5ebe40250064f888d423e23531bfa)`() const` | Returns true if CanChangeOwnTeam_Optional is set and matches the default value.
`public inline void `[`SetCanChangeOwnTeamToDefault`](#structFRHAPI__SessionTemplate_1ac1a42404ac65f492acfd7e7fe75e4afb)`()` | Sets the value of CanChangeOwnTeam_Optional to its default and also sets CanChangeOwnTeam_IsSet to true.
`public inline bool & `[`GetNotifyOnReservation`](#structFRHAPI__SessionTemplate_1ad24ef00c4199164207d73ac75243a5ff)`()` | Gets the value of NotifyOnReservation_Optional, regardless of it having been set.
`public inline const bool & `[`GetNotifyOnReservation`](#structFRHAPI__SessionTemplate_1a4bb19e6ca88bed2fe793594a0e52a1e9)`() const` | Gets the value of NotifyOnReservation_Optional, regardless of it having been set.
`public inline const bool & `[`GetNotifyOnReservation`](#structFRHAPI__SessionTemplate_1a60d6fb1be3a3bbd8b1e5e91285cafb5e)`(const bool & DefaultValue) const` | Gets the value of NotifyOnReservation_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNotifyOnReservation`](#structFRHAPI__SessionTemplate_1ad328d77d407db71c5bc4f162280751f7)`(bool & OutValue) const` | Fills OutValue with the value of NotifyOnReservation_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetNotifyOnReservationOrNull`](#structFRHAPI__SessionTemplate_1a97ee845f746a900b2460fc4c985acce1)`()` | Returns a pointer to NotifyOnReservation_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetNotifyOnReservationOrNull`](#structFRHAPI__SessionTemplate_1ab13bc1c1799583cda7a8fefb54b60073)`() const` | Returns a pointer to NotifyOnReservation_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNotifyOnReservation`](#structFRHAPI__SessionTemplate_1a987bbef32e73963afa90d7e617393876)`(const bool & NewValue)` | Sets the value of NotifyOnReservation_Optional and also sets NotifyOnReservation_IsSet to true.
`public inline void `[`SetNotifyOnReservation`](#structFRHAPI__SessionTemplate_1a9fb66e4cd55fe694e458248c10d17927)`(bool && NewValue)` | Sets the value of NotifyOnReservation_Optional and also sets NotifyOnReservation_IsSet to true using move semantics.
`public inline void `[`ClearNotifyOnReservation`](#structFRHAPI__SessionTemplate_1a09e9ca121b22271ccc7debde5c98afd1)`()` | Clears the value of NotifyOnReservation_Optional and sets NotifyOnReservation_IsSet to false.
`public inline bool `[`IsNotifyOnReservationSet`](#structFRHAPI__SessionTemplate_1a6d7f33d80f239b54dc51a098fdb773d3)`() const` | Checks whether NotifyOnReservation_Optional has been set.
`public inline bool `[`IsNotifyOnReservationDefaultValue`](#structFRHAPI__SessionTemplate_1a5178c473b0e58f10f8cecfa32f155623)`() const` | Returns true if NotifyOnReservation_Optional is set and matches the default value.
`public inline void `[`SetNotifyOnReservationToDefault`](#structFRHAPI__SessionTemplate_1afbd6260244e4d1471d0049560f3c4ba8)`()` | Sets the value of NotifyOnReservation_Optional to its default and also sets NotifyOnReservation_IsSet to true.
`public inline ERHAPI_PlayerVisibility & `[`GetPlayerVisibility`](#structFRHAPI__SessionTemplate_1a66ad5b16aad2826c95198072d5f84d80)`()` | Gets the value of PlayerVisibility_Optional, regardless of it having been set.
`public inline const ERHAPI_PlayerVisibility & `[`GetPlayerVisibility`](#structFRHAPI__SessionTemplate_1a1d230c6e759964d958ca63c123a08457)`() const` | Gets the value of PlayerVisibility_Optional, regardless of it having been set.
`public inline const ERHAPI_PlayerVisibility & `[`GetPlayerVisibility`](#structFRHAPI__SessionTemplate_1a38785125f1c7f2b63389e36da9394580)`(const ERHAPI_PlayerVisibility & DefaultValue) const` | Gets the value of PlayerVisibility_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerVisibility`](#structFRHAPI__SessionTemplate_1afa179f8285b8b49821c72cdc00e6f9ed)`(ERHAPI_PlayerVisibility & OutValue) const` | Fills OutValue with the value of PlayerVisibility_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_PlayerVisibility * `[`GetPlayerVisibilityOrNull`](#structFRHAPI__SessionTemplate_1ae447a8c59f4bde4d6b9f11e634c33075)`()` | Returns a pointer to PlayerVisibility_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_PlayerVisibility * `[`GetPlayerVisibilityOrNull`](#structFRHAPI__SessionTemplate_1ac0a4a6dadf851aac72e0f3fefd0c95ae)`() const` | Returns a pointer to PlayerVisibility_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerVisibility`](#structFRHAPI__SessionTemplate_1a563117c22429879bdd06e558384fda42)`(const ERHAPI_PlayerVisibility & NewValue)` | Sets the value of PlayerVisibility_Optional and also sets PlayerVisibility_IsSet to true.
`public inline void `[`SetPlayerVisibility`](#structFRHAPI__SessionTemplate_1aaa040bd05b9f42ef694a2f1cbb63f3a1)`(ERHAPI_PlayerVisibility && NewValue)` | Sets the value of PlayerVisibility_Optional and also sets PlayerVisibility_IsSet to true using move semantics.
`public inline void `[`ClearPlayerVisibility`](#structFRHAPI__SessionTemplate_1ad9160f33307545c48ba632f454c4332c)`()` | Clears the value of PlayerVisibility_Optional and sets PlayerVisibility_IsSet to false.
`public inline bool `[`IsPlayerVisibilitySet`](#structFRHAPI__SessionTemplate_1a4cbb01fef0441ce8940ab60a3a79839e)`() const` | Checks whether PlayerVisibility_Optional has been set.
`public inline ERHAPI_PlayerVisibility & `[`GetAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1a13f67f6718aafbf915840985633deb05)`()` | Gets the value of AdminPlayerVisibility_Optional, regardless of it having been set.
`public inline const ERHAPI_PlayerVisibility & `[`GetAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1a8b4e5bfb565a09381b4a0122e54aa167)`() const` | Gets the value of AdminPlayerVisibility_Optional, regardless of it having been set.
`public inline const ERHAPI_PlayerVisibility & `[`GetAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1a51bb824bc7757a9a99e939abd79f38ad)`(const ERHAPI_PlayerVisibility & DefaultValue) const` | Gets the value of AdminPlayerVisibility_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1a4a67111b81d583d142fb63337cae859e)`(ERHAPI_PlayerVisibility & OutValue) const` | Fills OutValue with the value of AdminPlayerVisibility_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_PlayerVisibility * `[`GetAdminPlayerVisibilityOrNull`](#structFRHAPI__SessionTemplate_1a1224ad0432226c839f8a76916c95d943)`()` | Returns a pointer to AdminPlayerVisibility_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_PlayerVisibility * `[`GetAdminPlayerVisibilityOrNull`](#structFRHAPI__SessionTemplate_1a4f29c3b85e173e78be984631dc03c79f)`() const` | Returns a pointer to AdminPlayerVisibility_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1aa215431f4505e3baa98295f2771848ff)`(const ERHAPI_PlayerVisibility & NewValue)` | Sets the value of AdminPlayerVisibility_Optional and also sets AdminPlayerVisibility_IsSet to true.
`public inline void `[`SetAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1ad1830c5d970292a0c98d54f0f593982a)`(ERHAPI_PlayerVisibility && NewValue)` | Sets the value of AdminPlayerVisibility_Optional and also sets AdminPlayerVisibility_IsSet to true using move semantics.
`public inline void `[`ClearAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1a1ed525f8085823e6ac6ae445ba9932e5)`()` | Clears the value of AdminPlayerVisibility_Optional and sets AdminPlayerVisibility_IsSet to false.
`public inline bool `[`IsAdminPlayerVisibilitySet`](#structFRHAPI__SessionTemplate_1a97b99dd83913269e57edce56edbce9ef)`() const` | Checks whether AdminPlayerVisibility_Optional has been set.
`public inline ERHAPI_PlayerVisibility & `[`GetPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a4e9677443642d475578f8c71b562f458)`()` | Gets the value of PlayerNotificationFrequency_Optional, regardless of it having been set.
`public inline const ERHAPI_PlayerVisibility & `[`GetPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a99aa3be977c2175f39610c4159e079d2)`() const` | Gets the value of PlayerNotificationFrequency_Optional, regardless of it having been set.
`public inline const ERHAPI_PlayerVisibility & `[`GetPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a48e91333755b39e1b87138e0101525e4)`(const ERHAPI_PlayerVisibility & DefaultValue) const` | Gets the value of PlayerNotificationFrequency_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a8d84aa3c71a766eb85bd4af6277dea75)`(ERHAPI_PlayerVisibility & OutValue) const` | Fills OutValue with the value of PlayerNotificationFrequency_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_PlayerVisibility * `[`GetPlayerNotificationFrequencyOrNull`](#structFRHAPI__SessionTemplate_1afdf475d68e058be7541b4b9bcc17f3f0)`()` | Returns a pointer to PlayerNotificationFrequency_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_PlayerVisibility * `[`GetPlayerNotificationFrequencyOrNull`](#structFRHAPI__SessionTemplate_1a9f7fede5131e101159602654ea43e2b7)`() const` | Returns a pointer to PlayerNotificationFrequency_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a40087fdd5097362e6d7018eab132bfdc)`(const ERHAPI_PlayerVisibility & NewValue)` | Sets the value of PlayerNotificationFrequency_Optional and also sets PlayerNotificationFrequency_IsSet to true.
`public inline void `[`SetPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1adb3494fb955e2e5f9c8db96c385e3aae)`(ERHAPI_PlayerVisibility && NewValue)` | Sets the value of PlayerNotificationFrequency_Optional and also sets PlayerNotificationFrequency_IsSet to true using move semantics.
`public inline void `[`ClearPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a9e283ac577d19794a939f946ac98642d)`()` | Clears the value of PlayerNotificationFrequency_Optional and sets PlayerNotificationFrequency_IsSet to false.
`public inline bool `[`IsPlayerNotificationFrequencySet`](#structFRHAPI__SessionTemplate_1af5b0c780644985e4123a7197abb762b9)`() const` | Checks whether PlayerNotificationFrequency_Optional has been set.
`public inline ERHAPI_PlayerVisibility & `[`GetAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a2e979b670993487b275a0bbc539b45f4)`()` | Gets the value of AdminPlayerNotificationFrequency_Optional, regardless of it having been set.
`public inline const ERHAPI_PlayerVisibility & `[`GetAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a0e7a55ea9d867d99738b7928efc1a0df)`() const` | Gets the value of AdminPlayerNotificationFrequency_Optional, regardless of it having been set.
`public inline const ERHAPI_PlayerVisibility & `[`GetAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1af3b952f791a272a5aa8819c0af315927)`(const ERHAPI_PlayerVisibility & DefaultValue) const` | Gets the value of AdminPlayerNotificationFrequency_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1aea213cbf702ce04f03062f5966af1a2f)`(ERHAPI_PlayerVisibility & OutValue) const` | Fills OutValue with the value of AdminPlayerNotificationFrequency_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_PlayerVisibility * `[`GetAdminPlayerNotificationFrequencyOrNull`](#structFRHAPI__SessionTemplate_1a64ae855d2b3be9cacb5633fa7949cb33)`()` | Returns a pointer to AdminPlayerNotificationFrequency_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_PlayerVisibility * `[`GetAdminPlayerNotificationFrequencyOrNull`](#structFRHAPI__SessionTemplate_1ad92aa89b9390b4a86e2f5d3a5a8729a8)`() const` | Returns a pointer to AdminPlayerNotificationFrequency_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a6af1921f4955c3aa170e15866a52888d)`(const ERHAPI_PlayerVisibility & NewValue)` | Sets the value of AdminPlayerNotificationFrequency_Optional and also sets AdminPlayerNotificationFrequency_IsSet to true.
`public inline void `[`SetAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a1a460126fd5ae175913eb4667965d36e)`(ERHAPI_PlayerVisibility && NewValue)` | Sets the value of AdminPlayerNotificationFrequency_Optional and also sets AdminPlayerNotificationFrequency_IsSet to true using move semantics.
`public inline void `[`ClearAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1aed149547b3e1c182e446b8fce5b7d5f6)`()` | Clears the value of AdminPlayerNotificationFrequency_Optional and sets AdminPlayerNotificationFrequency_IsSet to false.
`public inline bool `[`IsAdminPlayerNotificationFrequencySet`](#structFRHAPI__SessionTemplate_1a5ea7daf024acb3141141f83420f61665)`() const` | Checks whether AdminPlayerNotificationFrequency_Optional has been set.
`public inline int32 & `[`GetPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1a0843d0ef5c306f25a40e1f4203e848e6)`()` | Gets the value of PlayerCullingTimeout_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1a83d2107ad53df8149f790a0dc00ae2fd)`() const` | Gets the value of PlayerCullingTimeout_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1a836ee8cf341a88e6ea2c62fec8c2ba6f)`(const int32 & DefaultValue) const` | Gets the value of PlayerCullingTimeout_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1a6d9925b7b0e49001b6da209332d30a38)`(int32 & OutValue) const` | Fills OutValue with the value of PlayerCullingTimeout_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPlayerCullingTimeoutOrNull`](#structFRHAPI__SessionTemplate_1a4bddafb6c21d8f11386ccf76353c5c5c)`()` | Returns a pointer to PlayerCullingTimeout_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPlayerCullingTimeoutOrNull`](#structFRHAPI__SessionTemplate_1a07f4c6525a399d8b39d3d618ad28401b)`() const` | Returns a pointer to PlayerCullingTimeout_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1a3790ba4bfcf229f34e98395bca12abfc)`(const int32 & NewValue)` | Sets the value of PlayerCullingTimeout_Optional and also sets PlayerCullingTimeout_IsSet to true.
`public inline void `[`SetPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1ad6f9108bab56aa9feae7fb02534fa31c)`(int32 && NewValue)` | Sets the value of PlayerCullingTimeout_Optional and also sets PlayerCullingTimeout_IsSet to true using move semantics.
`public inline void `[`ClearPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1ac5f91d7657a5e7cae9199856318f4337)`()` | Clears the value of PlayerCullingTimeout_Optional and sets PlayerCullingTimeout_IsSet to false.
`public inline bool `[`IsPlayerCullingTimeoutSet`](#structFRHAPI__SessionTemplate_1aa2dc33d1e65c8438aa77a41e13714e75)`() const` | Checks whether PlayerCullingTimeout_Optional has been set.
`public inline bool `[`IsPlayerCullingTimeoutDefaultValue`](#structFRHAPI__SessionTemplate_1a49088bbeaca752e19695881c88507786)`() const` | Returns true if PlayerCullingTimeout_Optional is set and matches the default value.
`public inline void `[`SetPlayerCullingTimeoutToDefault`](#structFRHAPI__SessionTemplate_1adbc0a086485cde66c84bbe46207c8747)`()` | Sets the value of PlayerCullingTimeout_Optional to its default and also sets PlayerCullingTimeout_IsSet to true.

### Members

#### `public FString `[`SessionType`](#structFRHAPI__SessionTemplate_1a294a5c42b68d1960ade23eb2b8ebed03) <a id="structFRHAPI__SessionTemplate_1a294a5c42b68d1960ade23eb2b8ebed03"></a>

unique name for this template

#### `public FString `[`EngineSessionType_Optional`](#structFRHAPI__SessionTemplate_1a5215d82c4b5a1849115e1192ce85a42a) <a id="structFRHAPI__SessionTemplate_1a5215d82c4b5a1849115e1192ce85a42a"></a>

Engine identifier for sessions of this type. For UE, this is commonly `Party` or `Game`.

#### `public bool `[`EngineSessionType_IsSet`](#structFRHAPI__SessionTemplate_1a7fe48b7d9dd76d0918d6c8cfef6ddabe) <a id="structFRHAPI__SessionTemplate_1a7fe48b7d9dd76d0918d6c8cfef6ddabe"></a>

true if EngineSessionType_Optional has been set to a value

#### `public bool `[`CanJoinMatchmaking_Optional`](#structFRHAPI__SessionTemplate_1a5acc833f588d8b29365429498cfe2a7b) <a id="structFRHAPI__SessionTemplate_1a5acc833f588d8b29365429498cfe2a7b"></a>

Are sessions of this type allowed to join matchmaking?

#### `public bool `[`CanJoinMatchmaking_IsSet`](#structFRHAPI__SessionTemplate_1a2e4fd1ddce8e54ae5242c6a839b9a446) <a id="structFRHAPI__SessionTemplate_1a2e4fd1ddce8e54ae5242c6a839b9a446"></a>

true if CanJoinMatchmaking_Optional has been set to a value

#### `public bool `[`CanBeCreatedByPlayersDirectly_Optional`](#structFRHAPI__SessionTemplate_1ab6aed074db1776677efeedae942a6dde) <a id="structFRHAPI__SessionTemplate_1ab6aed074db1776677efeedae942a6dde"></a>

Are players allowed to create sessions of this type?

#### `public bool `[`CanBeCreatedByPlayersDirectly_IsSet`](#structFRHAPI__SessionTemplate_1af34cf526890cc59a7c99aeb31fe47f86) <a id="structFRHAPI__SessionTemplate_1af34cf526890cc59a7c99aeb31fe47f86"></a>

true if CanBeCreatedByPlayersDirectly_Optional has been set to a value

#### `public bool `[`Joinable_Optional`](#structFRHAPI__SessionTemplate_1af726850d2f0a47c0d363bc6fe56649d2) <a id="structFRHAPI__SessionTemplate_1af726850d2f0a47c0d363bc6fe56649d2"></a>

DEPRECATED. Use 'attempt_auto_join' instead. Should players join existing sessions of this type before creating a new one.

#### `public bool `[`Joinable_IsSet`](#structFRHAPI__SessionTemplate_1a640852541c1622264fb0b45e8bcba358) <a id="structFRHAPI__SessionTemplate_1a640852541c1622264fb0b45e8bcba358"></a>

true if Joinable_Optional has been set to a value

#### `public bool `[`AttemptAutoJoin_Optional`](#structFRHAPI__SessionTemplate_1a7d1c0ca1b78e58fe1b0e1b4bc14c7d1d) <a id="structFRHAPI__SessionTemplate_1a7d1c0ca1b78e58fe1b0e1b4bc14c7d1d"></a>

Should players join existing sessions of this type before creating a new one.

#### `public bool `[`AttemptAutoJoin_IsSet`](#structFRHAPI__SessionTemplate_1a3ef337d1d127c53479600fd601327932) <a id="structFRHAPI__SessionTemplate_1a3ef337d1d127c53479600fd601327932"></a>

true if AttemptAutoJoin_Optional has been set to a value

#### `public bool `[`DefaultPublic_Optional`](#structFRHAPI__SessionTemplate_1ad23d2d7b28599c82e031a8ec8e0044bd) <a id="structFRHAPI__SessionTemplate_1ad23d2d7b28599c82e031a8ec8e0044bd"></a>

Should sessions of this type should be publicly joinable by default.

#### `public bool `[`DefaultPublic_IsSet`](#structFRHAPI__SessionTemplate_1ad56e88aba80b14f4a35817228bc1de98) <a id="structFRHAPI__SessionTemplate_1ad56e88aba80b14f4a35817228bc1de98"></a>

true if DefaultPublic_Optional has been set to a value

#### `public bool `[`AutoAddToBrowser_Optional`](#structFRHAPI__SessionTemplate_1acd767d33d578663a2ae87266051aee21) <a id="structFRHAPI__SessionTemplate_1acd767d33d578663a2ae87266051aee21"></a>

Should session be automatically added to the browser list.

#### `public bool `[`AutoAddToBrowser_IsSet`](#structFRHAPI__SessionTemplate_1a3680cbdc548742735a67e6b5aa39f17a) <a id="structFRHAPI__SessionTemplate_1a3680cbdc548742735a67e6b5aa39f17a"></a>

true if AutoAddToBrowser_Optional has been set to a value

#### `public TMap< FString, FString > `[`AutoBrowserParams_Optional`](#structFRHAPI__SessionTemplate_1a82787643aa3e38fe0da7bf1500e0ef62) <a id="structFRHAPI__SessionTemplate_1a82787643aa3e38fe0da7bf1500e0ef62"></a>

Browser parameters that can be used to filter results.

#### `public bool `[`AutoBrowserParams_IsSet`](#structFRHAPI__SessionTemplate_1a72c52c990ae499219e09ac48b95dfb1b) <a id="structFRHAPI__SessionTemplate_1a72c52c990ae499219e09ac48b95dfb1b"></a>

true if AutoBrowserParams_Optional has been set to a value

#### `public bool `[`CanBeAddedToServerBrowser_Optional`](#structFRHAPI__SessionTemplate_1a76d1142e89d2951f77aca49fae032565) <a id="structFRHAPI__SessionTemplate_1a76d1142e89d2951f77aca49fae032565"></a>

Are sessions of this type able to be added to the server browser by players?

#### `public bool `[`CanBeAddedToServerBrowser_IsSet`](#structFRHAPI__SessionTemplate_1af405bbeacdcad1f1edeec8066557d282) <a id="structFRHAPI__SessionTemplate_1af405bbeacdcad1f1edeec8066557d282"></a>

true if CanBeAddedToServerBrowser_Optional has been set to a value

#### `public bool `[`KeepAliveOnEmpty_Optional`](#structFRHAPI__SessionTemplate_1a9e9d05c256bcee13ec7a503fff383a9f) <a id="structFRHAPI__SessionTemplate_1a9e9d05c256bcee13ec7a503fff383a9f"></a>

Should the session stay around, or be destroyed when the last player leaves it?

#### `public bool `[`KeepAliveOnEmpty_IsSet`](#structFRHAPI__SessionTemplate_1a7a021f27573b66f03bddb164ba2baea4) <a id="structFRHAPI__SessionTemplate_1a7a021f27573b66f03bddb164ba2baea4"></a>

true if KeepAliveOnEmpty_Optional has been set to a value

#### `public TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > `[`PlatformTemplates_Optional`](#structFRHAPI__SessionTemplate_1a4a953d98de7701f09938b03e88dc447d) <a id="structFRHAPI__SessionTemplate_1a4a953d98de7701f09938b03e88dc447d"></a>

Platform-Specific session mappings that are used to coordinate Rally Here sessions with OnlineSubsystem sessions.

#### `public bool `[`PlatformTemplates_IsSet`](#structFRHAPI__SessionTemplate_1a98480d277fd8e297e5b90560f3c10f1a) <a id="structFRHAPI__SessionTemplate_1a98480d277fd8e297e5b90560f3c10f1a"></a>

true if PlatformTemplates_Optional has been set to a value

#### `public `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` `[`AutoStartupParams_Optional`](#structFRHAPI__SessionTemplate_1a32d9a060ff0208b639415cee5d9f7287) <a id="structFRHAPI__SessionTemplate_1a32d9a060ff0208b639415cee5d9f7287"></a>

Parameters used to start an instance for this session when it is created. Has lower priority than auto_startup_instance_template_id.

#### `public bool `[`AutoStartupParams_IsSet`](#structFRHAPI__SessionTemplate_1a1ae179a6de476981a9a38197758b7e14) <a id="structFRHAPI__SessionTemplate_1a1ae179a6de476981a9a38197758b7e14"></a>

true if AutoStartupParams_Optional has been set to a value

#### `public FGuid `[`AutoStartupInstanceTemplateId_Optional`](#structFRHAPI__SessionTemplate_1a2a49d5a8a5818e817ca11e6d123d9ba1) <a id="structFRHAPI__SessionTemplate_1a2a49d5a8a5818e817ca11e6d123d9ba1"></a>

ID of instance request template to be used to automatically request an instance on creation of a session of this type. Takes priority over auto_startup_params.

#### `public bool `[`AutoStartupInstanceTemplateId_IsSet`](#structFRHAPI__SessionTemplate_1acf91e44fde96ae8bf3bbdfca666cc444) <a id="structFRHAPI__SessionTemplate_1acf91e44fde96ae8bf3bbdfca666cc444"></a>

true if AutoStartupInstanceTemplateId_Optional has been set to a value

#### `public int32 `[`MinSessionCount_Optional`](#structFRHAPI__SessionTemplate_1aecf6bdd55d8dc8e92bf1d6e2dc032fc6) <a id="structFRHAPI__SessionTemplate_1aecf6bdd55d8dc8e92bf1d6e2dc032fc6"></a>

Minimum number of this type of session to be running at any given time per region.

#### `public bool `[`MinSessionCount_IsSet`](#structFRHAPI__SessionTemplate_1a067eb5ca1f241b90407f3a373cb0bd79) <a id="structFRHAPI__SessionTemplate_1a067eb5ca1f241b90407f3a373cb0bd79"></a>

true if MinSessionCount_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionTemplate_1a8dc395b5c32a277ba6a8098613b19c90) <a id="structFRHAPI__SessionTemplate_1a8dc395b5c32a277ba6a8098613b19c90"></a>

Product-defined custom data about this session type.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__SessionTemplate_1a74b694f3d97279b0f69b5d9c45cef5cc) <a id="structFRHAPI__SessionTemplate_1a74b694f3d97279b0f69b5d9c45cef5cc"></a>

true if CustomData_Optional has been set to a value

#### `public int32 `[`NumTeams_Optional`](#structFRHAPI__SessionTemplate_1a5a6263a13f22dc9fab381d24dd85b07d) <a id="structFRHAPI__SessionTemplate_1a5a6263a13f22dc9fab381d24dd85b07d"></a>

The number of teams this session type can have.

#### `public bool `[`NumTeams_IsSet`](#structFRHAPI__SessionTemplate_1a5aae055f985bbecae420f583bffcc0a8) <a id="structFRHAPI__SessionTemplate_1a5aae055f985bbecae420f583bffcc0a8"></a>

true if NumTeams_Optional has been set to a value

#### `public int32 `[`PlayersPerTeam_Optional`](#structFRHAPI__SessionTemplate_1acc07f08f5c7dc3262717a590f3de6764) <a id="structFRHAPI__SessionTemplate_1acc07f08f5c7dc3262717a590f3de6764"></a>

The number of players that can be on each team.

#### `public bool `[`PlayersPerTeam_IsSet`](#structFRHAPI__SessionTemplate_1a4351b4b52f5240e0bff65fb92b36b3a2) <a id="structFRHAPI__SessionTemplate_1a4351b4b52f5240e0bff65fb92b36b3a2"></a>

true if PlayersPerTeam_Optional has been set to a value

#### `public bool `[`CanChangeOwnTeam_Optional`](#structFRHAPI__SessionTemplate_1aa2d67a98c7bcf96cc848ae81ca3387e3) <a id="structFRHAPI__SessionTemplate_1aa2d67a98c7bcf96cc848ae81ca3387e3"></a>

Whether or not a player can change which team they are on. If true, they are able to. If False, they player's team can only be changed by an admin.

#### `public bool `[`CanChangeOwnTeam_IsSet`](#structFRHAPI__SessionTemplate_1ad6b80d668b66266c71f70affb0cae587) <a id="structFRHAPI__SessionTemplate_1ad6b80d668b66266c71f70affb0cae587"></a>

true if CanChangeOwnTeam_Optional has been set to a value

#### `public bool `[`NotifyOnReservation_Optional`](#structFRHAPI__SessionTemplate_1a5c0c06cf8165a39442dfc4ab5e830343) <a id="structFRHAPI__SessionTemplate_1a5c0c06cf8165a39442dfc4ab5e830343"></a>

If players should be notified when they are reserved in this type of session instead of waiting until they're invited.

#### `public bool `[`NotifyOnReservation_IsSet`](#structFRHAPI__SessionTemplate_1a9fc86e1548fa8e1e0ea7c861f984f15b) <a id="structFRHAPI__SessionTemplate_1a9fc86e1548fa8e1e0ea7c861f984f15b"></a>

true if NotifyOnReservation_Optional has been set to a value

#### `public ERHAPI_PlayerVisibility `[`PlayerVisibility_Optional`](#structFRHAPI__SessionTemplate_1ad27b6802b679b1951be33d4b964b0e09) <a id="structFRHAPI__SessionTemplate_1ad27b6802b679b1951be33d4b964b0e09"></a>

What subset of players a regular client will receive info about. With sufficiently large sessions, visibility will automatically be lowered.

#### `public bool `[`PlayerVisibility_IsSet`](#structFRHAPI__SessionTemplate_1a2cc0869cd26d1e484f93e728c82e418c) <a id="structFRHAPI__SessionTemplate_1a2cc0869cd26d1e484f93e728c82e418c"></a>

true if PlayerVisibility_Optional has been set to a value

#### `public ERHAPI_PlayerVisibility `[`AdminPlayerVisibility_Optional`](#structFRHAPI__SessionTemplate_1a87ba76ecf706ab2cf9aee0641727cfcb) <a id="structFRHAPI__SessionTemplate_1a87ba76ecf706ab2cf9aee0641727cfcb"></a>

What subset of players an admin client with elevated privileges will receive info about.

#### `public bool `[`AdminPlayerVisibility_IsSet`](#structFRHAPI__SessionTemplate_1a0ad8bb0bbc6bd66b70a9633fb59f2595) <a id="structFRHAPI__SessionTemplate_1a0ad8bb0bbc6bd66b70a9633fb59f2595"></a>

true if AdminPlayerVisibility_Optional has been set to a value

#### `public ERHAPI_PlayerVisibility `[`PlayerNotificationFrequency_Optional`](#structFRHAPI__SessionTemplate_1ab50695184449cba320e0d576ccfd4716) <a id="structFRHAPI__SessionTemplate_1ab50695184449cba320e0d576ccfd4716"></a>

What subset of notifications a client should receive about players in a session. With sufficiently large sessions, frequency will be automatically lowered.

#### `public bool `[`PlayerNotificationFrequency_IsSet`](#structFRHAPI__SessionTemplate_1a88ac6bd193615842594f8235d662f628) <a id="structFRHAPI__SessionTemplate_1a88ac6bd193615842594f8235d662f628"></a>

true if PlayerNotificationFrequency_Optional has been set to a value

#### `public ERHAPI_PlayerVisibility `[`AdminPlayerNotificationFrequency_Optional`](#structFRHAPI__SessionTemplate_1a4c378f3051e15932451e385b55467bf6) <a id="structFRHAPI__SessionTemplate_1a4c378f3051e15932451e385b55467bf6"></a>

What subset of notifications an admin client with elevated privileges will receive about players in a session.

#### `public bool `[`AdminPlayerNotificationFrequency_IsSet`](#structFRHAPI__SessionTemplate_1a0800679283a7d5d1ea6ee7fa9dba82a6) <a id="structFRHAPI__SessionTemplate_1a0800679283a7d5d1ea6ee7fa9dba82a6"></a>

true if AdminPlayerNotificationFrequency_Optional has been set to a value

#### `public int32 `[`PlayerCullingTimeout_Optional`](#structFRHAPI__SessionTemplate_1ae963851b12ae3d4404870277c7c969db) <a id="structFRHAPI__SessionTemplate_1ae963851b12ae3d4404870277c7c969db"></a>

How many seconds must pass with a player not querying a session before they get culled. If unset or 0, then players will not be culled.

#### `public bool `[`PlayerCullingTimeout_IsSet`](#structFRHAPI__SessionTemplate_1a8100672eaf3c30d4e32ff5e341f4ce31) <a id="structFRHAPI__SessionTemplate_1a8100672eaf3c30d4e32ff5e341f4ce31"></a>

true if PlayerCullingTimeout_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionTemplate_1a584ea37b08d01584233924dd39557b4a)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionTemplate_1a584ea37b08d01584233924dd39557b4a"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionTemplate_1a302c24f09b7e5dc1c95ab028757a4732)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__SessionTemplate_1a302c24f09b7e5dc1c95ab028757a4732"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetSessionType`](#structFRHAPI__SessionTemplate_1ad017b59cb852d1a7fe4422da447c6443)`()` <a id="structFRHAPI__SessionTemplate_1ad017b59cb852d1a7fe4422da447c6443"></a>

Gets the value of SessionType.

#### `public inline const FString & `[`GetSessionType`](#structFRHAPI__SessionTemplate_1a8c84294b7e4e66cfe78080e1be4a6f8d)`() const` <a id="structFRHAPI__SessionTemplate_1a8c84294b7e4e66cfe78080e1be4a6f8d"></a>

Gets the value of SessionType.

#### `public inline void `[`SetSessionType`](#structFRHAPI__SessionTemplate_1a775c1663b9ebd28bd3b8ced9fb39b92d)`(const FString & NewValue)` <a id="structFRHAPI__SessionTemplate_1a775c1663b9ebd28bd3b8ced9fb39b92d"></a>

Sets the value of SessionType.

#### `public inline void `[`SetSessionType`](#structFRHAPI__SessionTemplate_1aae91a73e92d727b39dd51488c44404b2)`(FString && NewValue)` <a id="structFRHAPI__SessionTemplate_1aae91a73e92d727b39dd51488c44404b2"></a>

Sets the value of SessionType using move semantics.

#### `public inline FString & `[`GetEngineSessionType`](#structFRHAPI__SessionTemplate_1a9d2832c6d0741e6914c907a3b91849d9)`()` <a id="structFRHAPI__SessionTemplate_1a9d2832c6d0741e6914c907a3b91849d9"></a>

Gets the value of EngineSessionType_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetEngineSessionType`](#structFRHAPI__SessionTemplate_1a148ba722b02511cd7ef52aaeaf09eba3)`() const` <a id="structFRHAPI__SessionTemplate_1a148ba722b02511cd7ef52aaeaf09eba3"></a>

Gets the value of EngineSessionType_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetEngineSessionType`](#structFRHAPI__SessionTemplate_1abae00420326e0f209e6c1ffcc5a427ea)`(const FString & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1abae00420326e0f209e6c1ffcc5a427ea"></a>

Gets the value of EngineSessionType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEngineSessionType`](#structFRHAPI__SessionTemplate_1ac4fce3fe7bfb35f5ded0559c3d4ddb8d)`(FString & OutValue) const` <a id="structFRHAPI__SessionTemplate_1ac4fce3fe7bfb35f5ded0559c3d4ddb8d"></a>

Fills OutValue with the value of EngineSessionType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetEngineSessionTypeOrNull`](#structFRHAPI__SessionTemplate_1a46a8920195703818cea8e7b1dd8607df)`()` <a id="structFRHAPI__SessionTemplate_1a46a8920195703818cea8e7b1dd8607df"></a>

Returns a pointer to EngineSessionType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetEngineSessionTypeOrNull`](#structFRHAPI__SessionTemplate_1ae5738827c93759b1f850a743512b4a35)`() const` <a id="structFRHAPI__SessionTemplate_1ae5738827c93759b1f850a743512b4a35"></a>

Returns a pointer to EngineSessionType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEngineSessionType`](#structFRHAPI__SessionTemplate_1ab49c18e1f0b8c7b4c9bd0e418f380bb6)`(const FString & NewValue)` <a id="structFRHAPI__SessionTemplate_1ab49c18e1f0b8c7b4c9bd0e418f380bb6"></a>

Sets the value of EngineSessionType_Optional and also sets EngineSessionType_IsSet to true.

#### `public inline void `[`SetEngineSessionType`](#structFRHAPI__SessionTemplate_1a32899af07b115593b0148471783286e7)`(FString && NewValue)` <a id="structFRHAPI__SessionTemplate_1a32899af07b115593b0148471783286e7"></a>

Sets the value of EngineSessionType_Optional and also sets EngineSessionType_IsSet to true using move semantics.

#### `public inline void `[`ClearEngineSessionType`](#structFRHAPI__SessionTemplate_1a49cf645ee28f75e34b7e82a375b0b7a0)`()` <a id="structFRHAPI__SessionTemplate_1a49cf645ee28f75e34b7e82a375b0b7a0"></a>

Clears the value of EngineSessionType_Optional and sets EngineSessionType_IsSet to false.

#### `public inline bool `[`IsEngineSessionTypeSet`](#structFRHAPI__SessionTemplate_1ad7b96b3d4c45af4889a17bc0700bcb93)`() const` <a id="structFRHAPI__SessionTemplate_1ad7b96b3d4c45af4889a17bc0700bcb93"></a>

Checks whether EngineSessionType_Optional has been set.

#### `public inline bool `[`IsEngineSessionTypeDefaultValue`](#structFRHAPI__SessionTemplate_1a3cfbdbc7f9037595cd081510a49b47be)`() const` <a id="structFRHAPI__SessionTemplate_1a3cfbdbc7f9037595cd081510a49b47be"></a>

Returns true if EngineSessionType_Optional is set and matches the default value.

#### `public inline void `[`SetEngineSessionTypeToDefault`](#structFRHAPI__SessionTemplate_1a63b6dfef02bbfc4c1602f59da2e7f468)`()` <a id="structFRHAPI__SessionTemplate_1a63b6dfef02bbfc4c1602f59da2e7f468"></a>

Sets the value of EngineSessionType_Optional to its default and also sets EngineSessionType_IsSet to true.

#### `public inline bool & `[`GetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1ab2390e4919cc3df3a741d1907608de2a)`()` <a id="structFRHAPI__SessionTemplate_1ab2390e4919cc3df3a741d1907608de2a"></a>

Gets the value of CanJoinMatchmaking_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1a32e3a5857583b4390f08d99e1112b850)`() const` <a id="structFRHAPI__SessionTemplate_1a32e3a5857583b4390f08d99e1112b850"></a>

Gets the value of CanJoinMatchmaking_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1a0833a033c34d81714fae95bd2146c735)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a0833a033c34d81714fae95bd2146c735"></a>

Gets the value of CanJoinMatchmaking_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1ad8ade8f89b17c3544ddeb227951fcf83)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1ad8ade8f89b17c3544ddeb227951fcf83"></a>

Fills OutValue with the value of CanJoinMatchmaking_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetCanJoinMatchmakingOrNull`](#structFRHAPI__SessionTemplate_1a02c2a6c3b3c7e692fe5d0c4c57ea386e)`()` <a id="structFRHAPI__SessionTemplate_1a02c2a6c3b3c7e692fe5d0c4c57ea386e"></a>

Returns a pointer to CanJoinMatchmaking_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetCanJoinMatchmakingOrNull`](#structFRHAPI__SessionTemplate_1a03d7ab60cfae47cf5a3eb5bad6e525c3)`() const` <a id="structFRHAPI__SessionTemplate_1a03d7ab60cfae47cf5a3eb5bad6e525c3"></a>

Returns a pointer to CanJoinMatchmaking_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1a1b15c4db7b58bc335f847a653d28d503)`(const bool & NewValue)` <a id="structFRHAPI__SessionTemplate_1a1b15c4db7b58bc335f847a653d28d503"></a>

Sets the value of CanJoinMatchmaking_Optional and also sets CanJoinMatchmaking_IsSet to true.

#### `public inline void `[`SetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1abc9239242ba4cf83ce6727b03b389a6e)`(bool && NewValue)` <a id="structFRHAPI__SessionTemplate_1abc9239242ba4cf83ce6727b03b389a6e"></a>

Sets the value of CanJoinMatchmaking_Optional and also sets CanJoinMatchmaking_IsSet to true using move semantics.

#### `public inline void `[`ClearCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1aea8827859a78eea75ccb378ae6d34536)`()` <a id="structFRHAPI__SessionTemplate_1aea8827859a78eea75ccb378ae6d34536"></a>

Clears the value of CanJoinMatchmaking_Optional and sets CanJoinMatchmaking_IsSet to false.

#### `public inline bool `[`IsCanJoinMatchmakingSet`](#structFRHAPI__SessionTemplate_1af213e3709013876100f0230cf90247b7)`() const` <a id="structFRHAPI__SessionTemplate_1af213e3709013876100f0230cf90247b7"></a>

Checks whether CanJoinMatchmaking_Optional has been set.

#### `public inline bool `[`IsCanJoinMatchmakingDefaultValue`](#structFRHAPI__SessionTemplate_1a712f72abd63eda494b43154b029822e9)`() const` <a id="structFRHAPI__SessionTemplate_1a712f72abd63eda494b43154b029822e9"></a>

Returns true if CanJoinMatchmaking_Optional is set and matches the default value.

#### `public inline void `[`SetCanJoinMatchmakingToDefault`](#structFRHAPI__SessionTemplate_1ab1db9565664aea038731887f24deff21)`()` <a id="structFRHAPI__SessionTemplate_1ab1db9565664aea038731887f24deff21"></a>

Sets the value of CanJoinMatchmaking_Optional to its default and also sets CanJoinMatchmaking_IsSet to true.

#### `public inline bool & `[`GetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1a2268a6d0fdbb21faf737561fdc47edc3)`()` <a id="structFRHAPI__SessionTemplate_1a2268a6d0fdbb21faf737561fdc47edc3"></a>

Gets the value of CanBeCreatedByPlayersDirectly_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1a506b8839e1e51712abf3a88bca902c01)`() const` <a id="structFRHAPI__SessionTemplate_1a506b8839e1e51712abf3a88bca902c01"></a>

Gets the value of CanBeCreatedByPlayersDirectly_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1abefcee69e75378c695d82f516174fd6f)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1abefcee69e75378c695d82f516174fd6f"></a>

Gets the value of CanBeCreatedByPlayersDirectly_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1a17cb4c890a7a9329f9c84300193a5c32)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a17cb4c890a7a9329f9c84300193a5c32"></a>

Fills OutValue with the value of CanBeCreatedByPlayersDirectly_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetCanBeCreatedByPlayersDirectlyOrNull`](#structFRHAPI__SessionTemplate_1aa48b023381de994a979200a0e824af35)`()` <a id="structFRHAPI__SessionTemplate_1aa48b023381de994a979200a0e824af35"></a>

Returns a pointer to CanBeCreatedByPlayersDirectly_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetCanBeCreatedByPlayersDirectlyOrNull`](#structFRHAPI__SessionTemplate_1ab1087af4085176f4e70fe4b3d06031d1)`() const` <a id="structFRHAPI__SessionTemplate_1ab1087af4085176f4e70fe4b3d06031d1"></a>

Returns a pointer to CanBeCreatedByPlayersDirectly_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1a6bd3ddf628bb4358b89be928c6337759)`(const bool & NewValue)` <a id="structFRHAPI__SessionTemplate_1a6bd3ddf628bb4358b89be928c6337759"></a>

Sets the value of CanBeCreatedByPlayersDirectly_Optional and also sets CanBeCreatedByPlayersDirectly_IsSet to true.

#### `public inline void `[`SetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1a8aef4b2f30edd3721d971df495b8c235)`(bool && NewValue)` <a id="structFRHAPI__SessionTemplate_1a8aef4b2f30edd3721d971df495b8c235"></a>

Sets the value of CanBeCreatedByPlayersDirectly_Optional and also sets CanBeCreatedByPlayersDirectly_IsSet to true using move semantics.

#### `public inline void `[`ClearCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1aeeead6ecb3330ef0ab4e0d0f1d51be6f)`()` <a id="structFRHAPI__SessionTemplate_1aeeead6ecb3330ef0ab4e0d0f1d51be6f"></a>

Clears the value of CanBeCreatedByPlayersDirectly_Optional and sets CanBeCreatedByPlayersDirectly_IsSet to false.

#### `public inline bool `[`IsCanBeCreatedByPlayersDirectlySet`](#structFRHAPI__SessionTemplate_1a43a55df360c1ddf8d21e4771cea65873)`() const` <a id="structFRHAPI__SessionTemplate_1a43a55df360c1ddf8d21e4771cea65873"></a>

Checks whether CanBeCreatedByPlayersDirectly_Optional has been set.

#### `public inline bool `[`IsCanBeCreatedByPlayersDirectlyDefaultValue`](#structFRHAPI__SessionTemplate_1afc9d293d6290f5c2de49e0abc1da9c4d)`() const` <a id="structFRHAPI__SessionTemplate_1afc9d293d6290f5c2de49e0abc1da9c4d"></a>

Returns true if CanBeCreatedByPlayersDirectly_Optional is set and matches the default value.

#### `public inline void `[`SetCanBeCreatedByPlayersDirectlyToDefault`](#structFRHAPI__SessionTemplate_1a5895d02285be3538be2d7e59412f7466)`()` <a id="structFRHAPI__SessionTemplate_1a5895d02285be3538be2d7e59412f7466"></a>

Sets the value of CanBeCreatedByPlayersDirectly_Optional to its default and also sets CanBeCreatedByPlayersDirectly_IsSet to true.

#### `public inline bool & `[`GetJoinable`](#structFRHAPI__SessionTemplate_1a4ebcd1cb53b68ee338d5544285997cf4)`()` <a id="structFRHAPI__SessionTemplate_1a4ebcd1cb53b68ee338d5544285997cf4"></a>

Gets the value of Joinable_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetJoinable`](#structFRHAPI__SessionTemplate_1a74594d3b3a731950d93108ff65bed03b)`() const` <a id="structFRHAPI__SessionTemplate_1a74594d3b3a731950d93108ff65bed03b"></a>

Gets the value of Joinable_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetJoinable`](#structFRHAPI__SessionTemplate_1a713443d93cafae9176b2961b62633f99)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a713443d93cafae9176b2961b62633f99"></a>

Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetJoinable`](#structFRHAPI__SessionTemplate_1a284913a49f55998220ccbae7ffa31df4)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a284913a49f55998220ccbae7ffa31df4"></a>

Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetJoinableOrNull`](#structFRHAPI__SessionTemplate_1a4c934106fc241c5872526da62575d929)`()` <a id="structFRHAPI__SessionTemplate_1a4c934106fc241c5872526da62575d929"></a>

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetJoinableOrNull`](#structFRHAPI__SessionTemplate_1a85119b1792eb1b7200ff1ac7cd798d2c)`() const` <a id="structFRHAPI__SessionTemplate_1a85119b1792eb1b7200ff1ac7cd798d2c"></a>

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetJoinable`](#structFRHAPI__SessionTemplate_1a90e3ca10e69dbac64c38b2af379043f8)`(const bool & NewValue)` <a id="structFRHAPI__SessionTemplate_1a90e3ca10e69dbac64c38b2af379043f8"></a>

Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.

#### `public inline void `[`SetJoinable`](#structFRHAPI__SessionTemplate_1a72fd1ea3c02fed97a32afac41654bdc3)`(bool && NewValue)` <a id="structFRHAPI__SessionTemplate_1a72fd1ea3c02fed97a32afac41654bdc3"></a>

Sets the value of Joinable_Optional and also sets Joinable_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinable`](#structFRHAPI__SessionTemplate_1a2656215bcf0eb51c71fed328166e6b68)`()` <a id="structFRHAPI__SessionTemplate_1a2656215bcf0eb51c71fed328166e6b68"></a>

Clears the value of Joinable_Optional and sets Joinable_IsSet to false.

#### `public inline bool `[`IsJoinableSet`](#structFRHAPI__SessionTemplate_1a615f3ae971f8d57843f77db26b3c52bc)`() const` <a id="structFRHAPI__SessionTemplate_1a615f3ae971f8d57843f77db26b3c52bc"></a>

Checks whether Joinable_Optional has been set.

#### `public inline bool `[`IsJoinableDefaultValue`](#structFRHAPI__SessionTemplate_1a7005e50d8cbe3b02a9ce17dbb7d4bd4c)`() const` <a id="structFRHAPI__SessionTemplate_1a7005e50d8cbe3b02a9ce17dbb7d4bd4c"></a>

Returns true if Joinable_Optional is set and matches the default value.

#### `public inline void `[`SetJoinableToDefault`](#structFRHAPI__SessionTemplate_1aab55eb4066768dc2f660b6f7148789c6)`()` <a id="structFRHAPI__SessionTemplate_1aab55eb4066768dc2f660b6f7148789c6"></a>

Sets the value of Joinable_Optional to its default and also sets Joinable_IsSet to true.

#### `public inline bool & `[`GetAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1a1e6a2621e815b8f04da2649c7857084f)`()` <a id="structFRHAPI__SessionTemplate_1a1e6a2621e815b8f04da2649c7857084f"></a>

Gets the value of AttemptAutoJoin_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1aa9d06e62ca67dd7ec378c6cc5c071b62)`() const` <a id="structFRHAPI__SessionTemplate_1aa9d06e62ca67dd7ec378c6cc5c071b62"></a>

Gets the value of AttemptAutoJoin_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1a6b59a1774285f3f1e6abf05faa128424)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a6b59a1774285f3f1e6abf05faa128424"></a>

Gets the value of AttemptAutoJoin_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1a746d02f50e4c48a2255984bcae98d864)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a746d02f50e4c48a2255984bcae98d864"></a>

Fills OutValue with the value of AttemptAutoJoin_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetAttemptAutoJoinOrNull`](#structFRHAPI__SessionTemplate_1a7852ccce3591a81f7340aafeae65d6d9)`()` <a id="structFRHAPI__SessionTemplate_1a7852ccce3591a81f7340aafeae65d6d9"></a>

Returns a pointer to AttemptAutoJoin_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetAttemptAutoJoinOrNull`](#structFRHAPI__SessionTemplate_1ac6c8e1ff354ada764ea362fe6e152bc2)`() const` <a id="structFRHAPI__SessionTemplate_1ac6c8e1ff354ada764ea362fe6e152bc2"></a>

Returns a pointer to AttemptAutoJoin_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1a2af8e5abde9154beb8a02238571eed82)`(const bool & NewValue)` <a id="structFRHAPI__SessionTemplate_1a2af8e5abde9154beb8a02238571eed82"></a>

Sets the value of AttemptAutoJoin_Optional and also sets AttemptAutoJoin_IsSet to true.

#### `public inline void `[`SetAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1a92a14310dade9c5208574c3c4ac7ae17)`(bool && NewValue)` <a id="structFRHAPI__SessionTemplate_1a92a14310dade9c5208574c3c4ac7ae17"></a>

Sets the value of AttemptAutoJoin_Optional and also sets AttemptAutoJoin_IsSet to true using move semantics.

#### `public inline void `[`ClearAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1af01c65d9412c08982e1d810d821508e6)`()` <a id="structFRHAPI__SessionTemplate_1af01c65d9412c08982e1d810d821508e6"></a>

Clears the value of AttemptAutoJoin_Optional and sets AttemptAutoJoin_IsSet to false.

#### `public inline bool `[`IsAttemptAutoJoinSet`](#structFRHAPI__SessionTemplate_1a739c5165a310c80b399838bc6bd0532d)`() const` <a id="structFRHAPI__SessionTemplate_1a739c5165a310c80b399838bc6bd0532d"></a>

Checks whether AttemptAutoJoin_Optional has been set.

#### `public inline bool `[`IsAttemptAutoJoinDefaultValue`](#structFRHAPI__SessionTemplate_1a6272851fd94d2aae9769e3f49251f26e)`() const` <a id="structFRHAPI__SessionTemplate_1a6272851fd94d2aae9769e3f49251f26e"></a>

Returns true if AttemptAutoJoin_Optional is set and matches the default value.

#### `public inline void `[`SetAttemptAutoJoinToDefault`](#structFRHAPI__SessionTemplate_1a625067a334f5914ab7695522f608984b)`()` <a id="structFRHAPI__SessionTemplate_1a625067a334f5914ab7695522f608984b"></a>

Sets the value of AttemptAutoJoin_Optional to its default and also sets AttemptAutoJoin_IsSet to true.

#### `public inline bool & `[`GetDefaultPublic`](#structFRHAPI__SessionTemplate_1a9e8b876e3708d356da48ce1e93bc86fd)`()` <a id="structFRHAPI__SessionTemplate_1a9e8b876e3708d356da48ce1e93bc86fd"></a>

Gets the value of DefaultPublic_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetDefaultPublic`](#structFRHAPI__SessionTemplate_1a6d7930b81dfd0896c9504743f57b5a6d)`() const` <a id="structFRHAPI__SessionTemplate_1a6d7930b81dfd0896c9504743f57b5a6d"></a>

Gets the value of DefaultPublic_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetDefaultPublic`](#structFRHAPI__SessionTemplate_1ab4418aadec64b930214659dbb105d0e6)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1ab4418aadec64b930214659dbb105d0e6"></a>

Gets the value of DefaultPublic_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDefaultPublic`](#structFRHAPI__SessionTemplate_1abc8a258803a6af1a06337bfd38790b1d)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1abc8a258803a6af1a06337bfd38790b1d"></a>

Fills OutValue with the value of DefaultPublic_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetDefaultPublicOrNull`](#structFRHAPI__SessionTemplate_1af550284b606277f6220381072622486a)`()` <a id="structFRHAPI__SessionTemplate_1af550284b606277f6220381072622486a"></a>

Returns a pointer to DefaultPublic_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetDefaultPublicOrNull`](#structFRHAPI__SessionTemplate_1a85a60b50033db50f0b5e849b0ad022e6)`() const` <a id="structFRHAPI__SessionTemplate_1a85a60b50033db50f0b5e849b0ad022e6"></a>

Returns a pointer to DefaultPublic_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDefaultPublic`](#structFRHAPI__SessionTemplate_1a917d570df95c56cc8bb10421aa9b07ee)`(const bool & NewValue)` <a id="structFRHAPI__SessionTemplate_1a917d570df95c56cc8bb10421aa9b07ee"></a>

Sets the value of DefaultPublic_Optional and also sets DefaultPublic_IsSet to true.

#### `public inline void `[`SetDefaultPublic`](#structFRHAPI__SessionTemplate_1aa895f5b178b0d787dac1c5d31f978965)`(bool && NewValue)` <a id="structFRHAPI__SessionTemplate_1aa895f5b178b0d787dac1c5d31f978965"></a>

Sets the value of DefaultPublic_Optional and also sets DefaultPublic_IsSet to true using move semantics.

#### `public inline void `[`ClearDefaultPublic`](#structFRHAPI__SessionTemplate_1a0b7ec628161b7d1a8317204875d476e5)`()` <a id="structFRHAPI__SessionTemplate_1a0b7ec628161b7d1a8317204875d476e5"></a>

Clears the value of DefaultPublic_Optional and sets DefaultPublic_IsSet to false.

#### `public inline bool `[`IsDefaultPublicSet`](#structFRHAPI__SessionTemplate_1a061b603b9b9c500a4e83172c131e8fce)`() const` <a id="structFRHAPI__SessionTemplate_1a061b603b9b9c500a4e83172c131e8fce"></a>

Checks whether DefaultPublic_Optional has been set.

#### `public inline bool `[`IsDefaultPublicDefaultValue`](#structFRHAPI__SessionTemplate_1aded9e905d1ae97b71569316e9a93249f)`() const` <a id="structFRHAPI__SessionTemplate_1aded9e905d1ae97b71569316e9a93249f"></a>

Returns true if DefaultPublic_Optional is set and matches the default value.

#### `public inline void `[`SetDefaultPublicToDefault`](#structFRHAPI__SessionTemplate_1aeff38f0e7c8d477f6175359b09bf33e7)`()` <a id="structFRHAPI__SessionTemplate_1aeff38f0e7c8d477f6175359b09bf33e7"></a>

Sets the value of DefaultPublic_Optional to its default and also sets DefaultPublic_IsSet to true.

#### `public inline bool & `[`GetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1a5faff907f780e0c77a5a07485f69c258)`()` <a id="structFRHAPI__SessionTemplate_1a5faff907f780e0c77a5a07485f69c258"></a>

Gets the value of AutoAddToBrowser_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1a567940651831c41a236c940db9862296)`() const` <a id="structFRHAPI__SessionTemplate_1a567940651831c41a236c940db9862296"></a>

Gets the value of AutoAddToBrowser_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1ac1732642f1c86236a2f7b94a71c24218)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1ac1732642f1c86236a2f7b94a71c24218"></a>

Gets the value of AutoAddToBrowser_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1ae622425b3ab30a45ced3fe65d4e23f24)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1ae622425b3ab30a45ced3fe65d4e23f24"></a>

Fills OutValue with the value of AutoAddToBrowser_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetAutoAddToBrowserOrNull`](#structFRHAPI__SessionTemplate_1a06c4418084ea9f117467ad26bdd233e9)`()` <a id="structFRHAPI__SessionTemplate_1a06c4418084ea9f117467ad26bdd233e9"></a>

Returns a pointer to AutoAddToBrowser_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetAutoAddToBrowserOrNull`](#structFRHAPI__SessionTemplate_1abaf6ed37d83447cfb8b600031a1aac81)`() const` <a id="structFRHAPI__SessionTemplate_1abaf6ed37d83447cfb8b600031a1aac81"></a>

Returns a pointer to AutoAddToBrowser_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1a07064519d9290d4742c9c2c842638738)`(const bool & NewValue)` <a id="structFRHAPI__SessionTemplate_1a07064519d9290d4742c9c2c842638738"></a>

Sets the value of AutoAddToBrowser_Optional and also sets AutoAddToBrowser_IsSet to true.

#### `public inline void `[`SetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1a56942ab4f363d7966f8b3c8c4f54be30)`(bool && NewValue)` <a id="structFRHAPI__SessionTemplate_1a56942ab4f363d7966f8b3c8c4f54be30"></a>

Sets the value of AutoAddToBrowser_Optional and also sets AutoAddToBrowser_IsSet to true using move semantics.

#### `public inline void `[`ClearAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1ae71defa87a1bc92560786421ece26aa0)`()` <a id="structFRHAPI__SessionTemplate_1ae71defa87a1bc92560786421ece26aa0"></a>

Clears the value of AutoAddToBrowser_Optional and sets AutoAddToBrowser_IsSet to false.

#### `public inline bool `[`IsAutoAddToBrowserSet`](#structFRHAPI__SessionTemplate_1ab431ba36b8a46d0fedd0443d5c5e38da)`() const` <a id="structFRHAPI__SessionTemplate_1ab431ba36b8a46d0fedd0443d5c5e38da"></a>

Checks whether AutoAddToBrowser_Optional has been set.

#### `public inline bool `[`IsAutoAddToBrowserDefaultValue`](#structFRHAPI__SessionTemplate_1a1aef6318593a8e024bab505bdc238fc9)`() const` <a id="structFRHAPI__SessionTemplate_1a1aef6318593a8e024bab505bdc238fc9"></a>

Returns true if AutoAddToBrowser_Optional is set and matches the default value.

#### `public inline void `[`SetAutoAddToBrowserToDefault`](#structFRHAPI__SessionTemplate_1a78e197d8caad7dcbdb0a6325c5828d07)`()` <a id="structFRHAPI__SessionTemplate_1a78e197d8caad7dcbdb0a6325c5828d07"></a>

Sets the value of AutoAddToBrowser_Optional to its default and also sets AutoAddToBrowser_IsSet to true.

#### `public inline TMap< FString, FString > & `[`GetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1afae31ff760efb9e22623994bf569d8fc)`()` <a id="structFRHAPI__SessionTemplate_1afae31ff760efb9e22623994bf569d8fc"></a>

Gets the value of AutoBrowserParams_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1a5137c420d75c624c4bde8fba6d0bc7b3)`() const` <a id="structFRHAPI__SessionTemplate_1a5137c420d75c624c4bde8fba6d0bc7b3"></a>

Gets the value of AutoBrowserParams_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1a04abcc122b2a77b4a864f9171f2c536e)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a04abcc122b2a77b4a864f9171f2c536e"></a>

Gets the value of AutoBrowserParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1a28c63280b5b76ebb4ca52054211a2876)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a28c63280b5b76ebb4ca52054211a2876"></a>

Fills OutValue with the value of AutoBrowserParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetAutoBrowserParamsOrNull`](#structFRHAPI__SessionTemplate_1a13d798f47cf360811d38e96a9d0d02b8)`()` <a id="structFRHAPI__SessionTemplate_1a13d798f47cf360811d38e96a9d0d02b8"></a>

Returns a pointer to AutoBrowserParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetAutoBrowserParamsOrNull`](#structFRHAPI__SessionTemplate_1a2e3f79ed6491fdfef2310d51f2c15db8)`() const` <a id="structFRHAPI__SessionTemplate_1a2e3f79ed6491fdfef2310d51f2c15db8"></a>

Returns a pointer to AutoBrowserParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1abe4d9b3d9ad4d475ea1915a1b252abae)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__SessionTemplate_1abe4d9b3d9ad4d475ea1915a1b252abae"></a>

Sets the value of AutoBrowserParams_Optional and also sets AutoBrowserParams_IsSet to true.

#### `public inline void `[`SetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1a23b627d4d14851620d18c9acab0a82b6)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__SessionTemplate_1a23b627d4d14851620d18c9acab0a82b6"></a>

Sets the value of AutoBrowserParams_Optional and also sets AutoBrowserParams_IsSet to true using move semantics.

#### `public inline void `[`ClearAutoBrowserParams`](#structFRHAPI__SessionTemplate_1afc6ccbb82066817f3e22ad01730802db)`()` <a id="structFRHAPI__SessionTemplate_1afc6ccbb82066817f3e22ad01730802db"></a>

Clears the value of AutoBrowserParams_Optional and sets AutoBrowserParams_IsSet to false.

#### `public inline bool `[`IsAutoBrowserParamsSet`](#structFRHAPI__SessionTemplate_1a28ad44e91169e211265cb22207a62739)`() const` <a id="structFRHAPI__SessionTemplate_1a28ad44e91169e211265cb22207a62739"></a>

Checks whether AutoBrowserParams_Optional has been set.

#### `public inline bool & `[`GetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1ac9dd9bebba443764f56d8e7529416655)`()` <a id="structFRHAPI__SessionTemplate_1ac9dd9bebba443764f56d8e7529416655"></a>

Gets the value of CanBeAddedToServerBrowser_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1ad1c75d1dda312c3f6aefc6886f744d4b)`() const` <a id="structFRHAPI__SessionTemplate_1ad1c75d1dda312c3f6aefc6886f744d4b"></a>

Gets the value of CanBeAddedToServerBrowser_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1a50d795863d18ab4dc9d28e7d31ad4c0b)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a50d795863d18ab4dc9d28e7d31ad4c0b"></a>

Gets the value of CanBeAddedToServerBrowser_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1ab18e4d2ed25195e8d0f76dc39810daff)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1ab18e4d2ed25195e8d0f76dc39810daff"></a>

Fills OutValue with the value of CanBeAddedToServerBrowser_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetCanBeAddedToServerBrowserOrNull`](#structFRHAPI__SessionTemplate_1af073e035fc89c31f1959ddf681c28aa4)`()` <a id="structFRHAPI__SessionTemplate_1af073e035fc89c31f1959ddf681c28aa4"></a>

Returns a pointer to CanBeAddedToServerBrowser_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetCanBeAddedToServerBrowserOrNull`](#structFRHAPI__SessionTemplate_1a072faaa4da8faf2677a53db180d1eda9)`() const` <a id="structFRHAPI__SessionTemplate_1a072faaa4da8faf2677a53db180d1eda9"></a>

Returns a pointer to CanBeAddedToServerBrowser_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1adfbb9e7dc7cdcf5053b2f0c2b7245f1b)`(const bool & NewValue)` <a id="structFRHAPI__SessionTemplate_1adfbb9e7dc7cdcf5053b2f0c2b7245f1b"></a>

Sets the value of CanBeAddedToServerBrowser_Optional and also sets CanBeAddedToServerBrowser_IsSet to true.

#### `public inline void `[`SetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1ac821ce049020b19861e32ceaf5b2591b)`(bool && NewValue)` <a id="structFRHAPI__SessionTemplate_1ac821ce049020b19861e32ceaf5b2591b"></a>

Sets the value of CanBeAddedToServerBrowser_Optional and also sets CanBeAddedToServerBrowser_IsSet to true using move semantics.

#### `public inline void `[`ClearCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1a23f4b3075ad5c6cf66442b7fb9ff4731)`()` <a id="structFRHAPI__SessionTemplate_1a23f4b3075ad5c6cf66442b7fb9ff4731"></a>

Clears the value of CanBeAddedToServerBrowser_Optional and sets CanBeAddedToServerBrowser_IsSet to false.

#### `public inline bool `[`IsCanBeAddedToServerBrowserSet`](#structFRHAPI__SessionTemplate_1ae89419bc9b1476eb90fb40492082bce8)`() const` <a id="structFRHAPI__SessionTemplate_1ae89419bc9b1476eb90fb40492082bce8"></a>

Checks whether CanBeAddedToServerBrowser_Optional has been set.

#### `public inline bool `[`IsCanBeAddedToServerBrowserDefaultValue`](#structFRHAPI__SessionTemplate_1a7d34d65f47086fd753f7ac691a4c0df5)`() const` <a id="structFRHAPI__SessionTemplate_1a7d34d65f47086fd753f7ac691a4c0df5"></a>

Returns true if CanBeAddedToServerBrowser_Optional is set and matches the default value.

#### `public inline void `[`SetCanBeAddedToServerBrowserToDefault`](#structFRHAPI__SessionTemplate_1a933ba7bff1d990c9c0e12b47abd0864f)`()` <a id="structFRHAPI__SessionTemplate_1a933ba7bff1d990c9c0e12b47abd0864f"></a>

Sets the value of CanBeAddedToServerBrowser_Optional to its default and also sets CanBeAddedToServerBrowser_IsSet to true.

#### `public inline bool & `[`GetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a9e60ca74d4ac55e0123a33ae64cc44e7)`()` <a id="structFRHAPI__SessionTemplate_1a9e60ca74d4ac55e0123a33ae64cc44e7"></a>

Gets the value of KeepAliveOnEmpty_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1aedca4751706f6b31fac15cea328d6cc9)`() const` <a id="structFRHAPI__SessionTemplate_1aedca4751706f6b31fac15cea328d6cc9"></a>

Gets the value of KeepAliveOnEmpty_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a7b3678b4dfcf411829e793092535dc76)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a7b3678b4dfcf411829e793092535dc76"></a>

Gets the value of KeepAliveOnEmpty_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1acdfbfbafa3f03348b60c82c0b6625ac8)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1acdfbfbafa3f03348b60c82c0b6625ac8"></a>

Fills OutValue with the value of KeepAliveOnEmpty_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetKeepAliveOnEmptyOrNull`](#structFRHAPI__SessionTemplate_1a948f9ae27517a4a5505bc52d77a8d328)`()` <a id="structFRHAPI__SessionTemplate_1a948f9ae27517a4a5505bc52d77a8d328"></a>

Returns a pointer to KeepAliveOnEmpty_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetKeepAliveOnEmptyOrNull`](#structFRHAPI__SessionTemplate_1a327943c3ffe9ddc14f67a9c6bfc7c7fa)`() const` <a id="structFRHAPI__SessionTemplate_1a327943c3ffe9ddc14f67a9c6bfc7c7fa"></a>

Returns a pointer to KeepAliveOnEmpty_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a30f13ff4efe0062777248fffdc46887c)`(const bool & NewValue)` <a id="structFRHAPI__SessionTemplate_1a30f13ff4efe0062777248fffdc46887c"></a>

Sets the value of KeepAliveOnEmpty_Optional and also sets KeepAliveOnEmpty_IsSet to true.

#### `public inline void `[`SetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1ae7c94a6d9624530ce6035ac860672ed2)`(bool && NewValue)` <a id="structFRHAPI__SessionTemplate_1ae7c94a6d9624530ce6035ac860672ed2"></a>

Sets the value of KeepAliveOnEmpty_Optional and also sets KeepAliveOnEmpty_IsSet to true using move semantics.

#### `public inline void `[`ClearKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a296512654f450ed319f63f8b648c53b8)`()` <a id="structFRHAPI__SessionTemplate_1a296512654f450ed319f63f8b648c53b8"></a>

Clears the value of KeepAliveOnEmpty_Optional and sets KeepAliveOnEmpty_IsSet to false.

#### `public inline bool `[`IsKeepAliveOnEmptySet`](#structFRHAPI__SessionTemplate_1a5aaba552bde3ef07dc59f9c0756c1f90)`() const` <a id="structFRHAPI__SessionTemplate_1a5aaba552bde3ef07dc59f9c0756c1f90"></a>

Checks whether KeepAliveOnEmpty_Optional has been set.

#### `public inline bool `[`IsKeepAliveOnEmptyDefaultValue`](#structFRHAPI__SessionTemplate_1a55aba4ea889f042e220c937f19078a59)`() const` <a id="structFRHAPI__SessionTemplate_1a55aba4ea889f042e220c937f19078a59"></a>

Returns true if KeepAliveOnEmpty_Optional is set and matches the default value.

#### `public inline void `[`SetKeepAliveOnEmptyToDefault`](#structFRHAPI__SessionTemplate_1a8a37912d37e10efa335771cbdb045138)`()` <a id="structFRHAPI__SessionTemplate_1a8a37912d37e10efa335771cbdb045138"></a>

Sets the value of KeepAliveOnEmpty_Optional to its default and also sets KeepAliveOnEmpty_IsSet to true.

#### `public inline TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & `[`GetPlatformTemplates`](#structFRHAPI__SessionTemplate_1a05cd66e8ea70e87cd6b721f4c56e20d5)`()` <a id="structFRHAPI__SessionTemplate_1a05cd66e8ea70e87cd6b721f4c56e20d5"></a>

Gets the value of PlatformTemplates_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & `[`GetPlatformTemplates`](#structFRHAPI__SessionTemplate_1a5ff34c95697389fc89e66eba9f533830)`() const` <a id="structFRHAPI__SessionTemplate_1a5ff34c95697389fc89e66eba9f533830"></a>

Gets the value of PlatformTemplates_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & `[`GetPlatformTemplates`](#structFRHAPI__SessionTemplate_1a6f72b0ba06fe6419676cf437bcc96a0b)`(const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a6f72b0ba06fe6419676cf437bcc96a0b"></a>

Gets the value of PlatformTemplates_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformTemplates`](#structFRHAPI__SessionTemplate_1a56834a7a902d9cff7d59c3e78d1cf3e9)`(TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a56834a7a902d9cff7d59c3e78d1cf3e9"></a>

Fills OutValue with the value of PlatformTemplates_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > * `[`GetPlatformTemplatesOrNull`](#structFRHAPI__SessionTemplate_1a12f01e7d8662c13046c9a79f80c8c769)`()` <a id="structFRHAPI__SessionTemplate_1a12f01e7d8662c13046c9a79f80c8c769"></a>

Returns a pointer to PlatformTemplates_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > * `[`GetPlatformTemplatesOrNull`](#structFRHAPI__SessionTemplate_1a746304e1d37e721d67d71d0a30de7eaf)`() const` <a id="structFRHAPI__SessionTemplate_1a746304e1d37e721d67d71d0a30de7eaf"></a>

Returns a pointer to PlatformTemplates_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformTemplates`](#structFRHAPI__SessionTemplate_1aef2a22d494689a2c8001ef25ac75b989)`(const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & NewValue)` <a id="structFRHAPI__SessionTemplate_1aef2a22d494689a2c8001ef25ac75b989"></a>

Sets the value of PlatformTemplates_Optional and also sets PlatformTemplates_IsSet to true.

#### `public inline void `[`SetPlatformTemplates`](#structFRHAPI__SessionTemplate_1ad33c9e8eb0653ab89dfa4379ac74b9e8)`(TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > && NewValue)` <a id="structFRHAPI__SessionTemplate_1ad33c9e8eb0653ab89dfa4379ac74b9e8"></a>

Sets the value of PlatformTemplates_Optional and also sets PlatformTemplates_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformTemplates`](#structFRHAPI__SessionTemplate_1a63f0a0474639a53f8a0789e3850321dd)`()` <a id="structFRHAPI__SessionTemplate_1a63f0a0474639a53f8a0789e3850321dd"></a>

Clears the value of PlatformTemplates_Optional and sets PlatformTemplates_IsSet to false.

#### `public inline bool `[`IsPlatformTemplatesSet`](#structFRHAPI__SessionTemplate_1ab169ff9497d80c552771861c9e99bd50)`() const` <a id="structFRHAPI__SessionTemplate_1ab169ff9497d80c552771861c9e99bd50"></a>

Checks whether PlatformTemplates_Optional has been set.

#### `public inline `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetAutoStartupParams`](#structFRHAPI__SessionTemplate_1a9f3f4f012e7474a15e5e716386bff37f)`()` <a id="structFRHAPI__SessionTemplate_1a9f3f4f012e7474a15e5e716386bff37f"></a>

Gets the value of AutoStartupParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetAutoStartupParams`](#structFRHAPI__SessionTemplate_1af22691ef268a62401d761825acab24ea)`() const` <a id="structFRHAPI__SessionTemplate_1af22691ef268a62401d761825acab24ea"></a>

Gets the value of AutoStartupParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetAutoStartupParams`](#structFRHAPI__SessionTemplate_1a7e7ae8db4bfa746ceef1b237f17f2fbb)`(const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a7e7ae8db4bfa746ceef1b237f17f2fbb"></a>

Gets the value of AutoStartupParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAutoStartupParams`](#structFRHAPI__SessionTemplate_1add791f7825789aeab338cf381a333094)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & OutValue) const` <a id="structFRHAPI__SessionTemplate_1add791f7825789aeab338cf381a333094"></a>

Fills OutValue with the value of AutoStartupParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetAutoStartupParamsOrNull`](#structFRHAPI__SessionTemplate_1a8585d6d67b8e44ca0c4faf1a84c5a995)`()` <a id="structFRHAPI__SessionTemplate_1a8585d6d67b8e44ca0c4faf1a84c5a995"></a>

Returns a pointer to AutoStartupParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetAutoStartupParamsOrNull`](#structFRHAPI__SessionTemplate_1a643775892067da944afeb15e120ea32e)`() const` <a id="structFRHAPI__SessionTemplate_1a643775892067da944afeb15e120ea32e"></a>

Returns a pointer to AutoStartupParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAutoStartupParams`](#structFRHAPI__SessionTemplate_1aa59440ea3fe08b7645432484d67097d2)`(const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & NewValue)` <a id="structFRHAPI__SessionTemplate_1aa59440ea3fe08b7645432484d67097d2"></a>

Sets the value of AutoStartupParams_Optional and also sets AutoStartupParams_IsSet to true.

#### `public inline void `[`SetAutoStartupParams`](#structFRHAPI__SessionTemplate_1a8a5bc47e88fe94a0ac5cc851f66b9b6b)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` && NewValue)` <a id="structFRHAPI__SessionTemplate_1a8a5bc47e88fe94a0ac5cc851f66b9b6b"></a>

Sets the value of AutoStartupParams_Optional and also sets AutoStartupParams_IsSet to true using move semantics.

#### `public inline void `[`ClearAutoStartupParams`](#structFRHAPI__SessionTemplate_1a41041ffbd8775231d249554a072116d7)`()` <a id="structFRHAPI__SessionTemplate_1a41041ffbd8775231d249554a072116d7"></a>

Clears the value of AutoStartupParams_Optional and sets AutoStartupParams_IsSet to false.

#### `public inline bool `[`IsAutoStartupParamsSet`](#structFRHAPI__SessionTemplate_1ad558ef638e92f2195f4a2cd552bf11ee)`() const` <a id="structFRHAPI__SessionTemplate_1ad558ef638e92f2195f4a2cd552bf11ee"></a>

Checks whether AutoStartupParams_Optional has been set.

#### `public inline FGuid & `[`GetAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1a25ec3ff947009de774a222358c645022)`()` <a id="structFRHAPI__SessionTemplate_1a25ec3ff947009de774a222358c645022"></a>

Gets the value of AutoStartupInstanceTemplateId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1abb2ce02ba496b946f4656da12a236176)`() const` <a id="structFRHAPI__SessionTemplate_1abb2ce02ba496b946f4656da12a236176"></a>

Gets the value of AutoStartupInstanceTemplateId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1a758fc00617e1c61ac866f78a21e57911)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a758fc00617e1c61ac866f78a21e57911"></a>

Gets the value of AutoStartupInstanceTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1ae35f80049d7dc1521c2ddccd8addc87e)`(FGuid & OutValue) const` <a id="structFRHAPI__SessionTemplate_1ae35f80049d7dc1521c2ddccd8addc87e"></a>

Fills OutValue with the value of AutoStartupInstanceTemplateId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetAutoStartupInstanceTemplateIdOrNull`](#structFRHAPI__SessionTemplate_1ac8d0ddc053566298a105a517d5617b3d)`()` <a id="structFRHAPI__SessionTemplate_1ac8d0ddc053566298a105a517d5617b3d"></a>

Returns a pointer to AutoStartupInstanceTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetAutoStartupInstanceTemplateIdOrNull`](#structFRHAPI__SessionTemplate_1a842f80f7ddaa2101d14f736e9fd2f39a)`() const` <a id="structFRHAPI__SessionTemplate_1a842f80f7ddaa2101d14f736e9fd2f39a"></a>

Returns a pointer to AutoStartupInstanceTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1a5309a18ed5a3de1bafcb9cbfabedfc46)`(const FGuid & NewValue)` <a id="structFRHAPI__SessionTemplate_1a5309a18ed5a3de1bafcb9cbfabedfc46"></a>

Sets the value of AutoStartupInstanceTemplateId_Optional and also sets AutoStartupInstanceTemplateId_IsSet to true.

#### `public inline void `[`SetAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1a0335c7e457802515a793b2597691dc9f)`(FGuid && NewValue)` <a id="structFRHAPI__SessionTemplate_1a0335c7e457802515a793b2597691dc9f"></a>

Sets the value of AutoStartupInstanceTemplateId_Optional and also sets AutoStartupInstanceTemplateId_IsSet to true using move semantics.

#### `public inline void `[`ClearAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1a34645ae41e39de740fe31869d3e1a64f)`()` <a id="structFRHAPI__SessionTemplate_1a34645ae41e39de740fe31869d3e1a64f"></a>

Clears the value of AutoStartupInstanceTemplateId_Optional and sets AutoStartupInstanceTemplateId_IsSet to false.

#### `public inline bool `[`IsAutoStartupInstanceTemplateIdSet`](#structFRHAPI__SessionTemplate_1aea65eda3e21c0d36784eb20408abb6b3)`() const` <a id="structFRHAPI__SessionTemplate_1aea65eda3e21c0d36784eb20408abb6b3"></a>

Checks whether AutoStartupInstanceTemplateId_Optional has been set.

#### `public inline int32 & `[`GetMinSessionCount`](#structFRHAPI__SessionTemplate_1a405c96af4d0b35d9a42f0a8acfd544ad)`()` <a id="structFRHAPI__SessionTemplate_1a405c96af4d0b35d9a42f0a8acfd544ad"></a>

Gets the value of MinSessionCount_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetMinSessionCount`](#structFRHAPI__SessionTemplate_1af4d2e2ea91d29c9e9b07cb6ebe15bb78)`() const` <a id="structFRHAPI__SessionTemplate_1af4d2e2ea91d29c9e9b07cb6ebe15bb78"></a>

Gets the value of MinSessionCount_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetMinSessionCount`](#structFRHAPI__SessionTemplate_1a778127f9c08a178304a3489f89fd112f)`(const int32 & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a778127f9c08a178304a3489f89fd112f"></a>

Gets the value of MinSessionCount_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMinSessionCount`](#structFRHAPI__SessionTemplate_1a01b84d2a460388a199d7c375fad38fd3)`(int32 & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a01b84d2a460388a199d7c375fad38fd3"></a>

Fills OutValue with the value of MinSessionCount_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetMinSessionCountOrNull`](#structFRHAPI__SessionTemplate_1affea787b1da3b1cc110e13cc2b2c70ae)`()` <a id="structFRHAPI__SessionTemplate_1affea787b1da3b1cc110e13cc2b2c70ae"></a>

Returns a pointer to MinSessionCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetMinSessionCountOrNull`](#structFRHAPI__SessionTemplate_1a5a9ad460981abf8d88a5ce89add06f31)`() const` <a id="structFRHAPI__SessionTemplate_1a5a9ad460981abf8d88a5ce89add06f31"></a>

Returns a pointer to MinSessionCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMinSessionCount`](#structFRHAPI__SessionTemplate_1ace0c7cda6fdf8aaf0a8800a90b6429ab)`(const int32 & NewValue)` <a id="structFRHAPI__SessionTemplate_1ace0c7cda6fdf8aaf0a8800a90b6429ab"></a>

Sets the value of MinSessionCount_Optional and also sets MinSessionCount_IsSet to true.

#### `public inline void `[`SetMinSessionCount`](#structFRHAPI__SessionTemplate_1a0ce540f4fccad24c9591f7d44939909c)`(int32 && NewValue)` <a id="structFRHAPI__SessionTemplate_1a0ce540f4fccad24c9591f7d44939909c"></a>

Sets the value of MinSessionCount_Optional and also sets MinSessionCount_IsSet to true using move semantics.

#### `public inline void `[`ClearMinSessionCount`](#structFRHAPI__SessionTemplate_1a563b899213f0a6ff1e7ab855e18df3a5)`()` <a id="structFRHAPI__SessionTemplate_1a563b899213f0a6ff1e7ab855e18df3a5"></a>

Clears the value of MinSessionCount_Optional and sets MinSessionCount_IsSet to false.

#### `public inline bool `[`IsMinSessionCountSet`](#structFRHAPI__SessionTemplate_1a610dddf4eb602be4fdb0f12c88732fb1)`() const` <a id="structFRHAPI__SessionTemplate_1a610dddf4eb602be4fdb0f12c88732fb1"></a>

Checks whether MinSessionCount_Optional has been set.

#### `public inline bool `[`IsMinSessionCountDefaultValue`](#structFRHAPI__SessionTemplate_1a8215c4b5ea50cf0228490c27c5db60fb)`() const` <a id="structFRHAPI__SessionTemplate_1a8215c4b5ea50cf0228490c27c5db60fb"></a>

Returns true if MinSessionCount_Optional is set and matches the default value.

#### `public inline void `[`SetMinSessionCountToDefault`](#structFRHAPI__SessionTemplate_1af3b075285782037409643751bbaaa19d)`()` <a id="structFRHAPI__SessionTemplate_1af3b075285782037409643751bbaaa19d"></a>

Sets the value of MinSessionCount_Optional to its default and also sets MinSessionCount_IsSet to true.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTemplate_1a7ea4e07c8fbbc595050782c15b140213)`()` <a id="structFRHAPI__SessionTemplate_1a7ea4e07c8fbbc595050782c15b140213"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTemplate_1af92e15e174e01a237c4f930ffd37a69c)`() const` <a id="structFRHAPI__SessionTemplate_1af92e15e174e01a237c4f930ffd37a69c"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTemplate_1a3b1f56c30c3101d0a3a5d8212b146124)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a3b1f56c30c3101d0a3a5d8212b146124"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__SessionTemplate_1ab19f81eb52ffd9f199a884befe791d2a)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SessionTemplate_1ab19f81eb52ffd9f199a884befe791d2a"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionTemplate_1ae68e97b35880248c26b0421d81f73dbf)`()` <a id="structFRHAPI__SessionTemplate_1ae68e97b35880248c26b0421d81f73dbf"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionTemplate_1ad97ca29e69f7c2b668e5daf61e0df11b)`() const` <a id="structFRHAPI__SessionTemplate_1ad97ca29e69f7c2b668e5daf61e0df11b"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__SessionTemplate_1a993c448647d82c54afa34ce67ba87e2f)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__SessionTemplate_1a993c448647d82c54afa34ce67ba87e2f"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__SessionTemplate_1a869681a3b5716ffe763d5422d7246f9a)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__SessionTemplate_1a869681a3b5716ffe763d5422d7246f9a"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__SessionTemplate_1ac20b3669d3a9488606e5e2afd59df8f1)`()` <a id="structFRHAPI__SessionTemplate_1ac20b3669d3a9488606e5e2afd59df8f1"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__SessionTemplate_1a0bc6aaa6c0c6ded812dd13edf2c6947e)`() const` <a id="structFRHAPI__SessionTemplate_1a0bc6aaa6c0c6ded812dd13edf2c6947e"></a>

Checks whether CustomData_Optional has been set.

#### `public inline int32 & `[`GetNumTeams`](#structFRHAPI__SessionTemplate_1a938c9616fb6f1b26f4783cb622460bd6)`()` <a id="structFRHAPI__SessionTemplate_1a938c9616fb6f1b26f4783cb622460bd6"></a>

Gets the value of NumTeams_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetNumTeams`](#structFRHAPI__SessionTemplate_1a1266c296154daf2e31ca20a0bdaf5b64)`() const` <a id="structFRHAPI__SessionTemplate_1a1266c296154daf2e31ca20a0bdaf5b64"></a>

Gets the value of NumTeams_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetNumTeams`](#structFRHAPI__SessionTemplate_1a09d6164e4c894d2159086a3f97379632)`(const int32 & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a09d6164e4c894d2159086a3f97379632"></a>

Gets the value of NumTeams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetNumTeams`](#structFRHAPI__SessionTemplate_1a6ce27d5e98f039a4111fd089abc115df)`(int32 & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a6ce27d5e98f039a4111fd089abc115df"></a>

Fills OutValue with the value of NumTeams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetNumTeamsOrNull`](#structFRHAPI__SessionTemplate_1a209bcf2264a58539b91b29306cc6907d)`()` <a id="structFRHAPI__SessionTemplate_1a209bcf2264a58539b91b29306cc6907d"></a>

Returns a pointer to NumTeams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetNumTeamsOrNull`](#structFRHAPI__SessionTemplate_1a700e1df3477c11025ae1f9845f9f235f)`() const` <a id="structFRHAPI__SessionTemplate_1a700e1df3477c11025ae1f9845f9f235f"></a>

Returns a pointer to NumTeams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetNumTeams`](#structFRHAPI__SessionTemplate_1ae9d88bcb1dae718613a5953230c617bd)`(const int32 & NewValue)` <a id="structFRHAPI__SessionTemplate_1ae9d88bcb1dae718613a5953230c617bd"></a>

Sets the value of NumTeams_Optional and also sets NumTeams_IsSet to true.

#### `public inline void `[`SetNumTeams`](#structFRHAPI__SessionTemplate_1abbc1c0ac4092999273bf0ea2268b9ef6)`(int32 && NewValue)` <a id="structFRHAPI__SessionTemplate_1abbc1c0ac4092999273bf0ea2268b9ef6"></a>

Sets the value of NumTeams_Optional and also sets NumTeams_IsSet to true using move semantics.

#### `public inline void `[`ClearNumTeams`](#structFRHAPI__SessionTemplate_1ab05fd0888c21bacaaab9bd4b0ca92e00)`()` <a id="structFRHAPI__SessionTemplate_1ab05fd0888c21bacaaab9bd4b0ca92e00"></a>

Clears the value of NumTeams_Optional and sets NumTeams_IsSet to false.

#### `public inline bool `[`IsNumTeamsSet`](#structFRHAPI__SessionTemplate_1a31cc47bed1561fe1337a30ba863c96f9)`() const` <a id="structFRHAPI__SessionTemplate_1a31cc47bed1561fe1337a30ba863c96f9"></a>

Checks whether NumTeams_Optional has been set.

#### `public inline bool `[`IsNumTeamsDefaultValue`](#structFRHAPI__SessionTemplate_1a4c6f7c1655e76727f7cb5b5ffc5c66af)`() const` <a id="structFRHAPI__SessionTemplate_1a4c6f7c1655e76727f7cb5b5ffc5c66af"></a>

Returns true if NumTeams_Optional is set and matches the default value.

#### `public inline void `[`SetNumTeamsToDefault`](#structFRHAPI__SessionTemplate_1a76d7e80355b9705e3a1ea1c86817fd45)`()` <a id="structFRHAPI__SessionTemplate_1a76d7e80355b9705e3a1ea1c86817fd45"></a>

Sets the value of NumTeams_Optional to its default and also sets NumTeams_IsSet to true.

#### `public inline int32 & `[`GetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1a68f15d94d41e7986235f7013233373aa)`()` <a id="structFRHAPI__SessionTemplate_1a68f15d94d41e7986235f7013233373aa"></a>

Gets the value of PlayersPerTeam_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1a2bdea78ff22fd2fe00d556336a9c993f)`() const` <a id="structFRHAPI__SessionTemplate_1a2bdea78ff22fd2fe00d556336a9c993f"></a>

Gets the value of PlayersPerTeam_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1a2852a6cfdf4f291e107bcc0987288321)`(const int32 & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a2852a6cfdf4f291e107bcc0987288321"></a>

Gets the value of PlayersPerTeam_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1ac380d35a8a8a1758ade954aa9f4c09ca)`(int32 & OutValue) const` <a id="structFRHAPI__SessionTemplate_1ac380d35a8a8a1758ade954aa9f4c09ca"></a>

Fills OutValue with the value of PlayersPerTeam_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPlayersPerTeamOrNull`](#structFRHAPI__SessionTemplate_1affc69303a94518aad9e45ec8ba7abdd1)`()` <a id="structFRHAPI__SessionTemplate_1affc69303a94518aad9e45ec8ba7abdd1"></a>

Returns a pointer to PlayersPerTeam_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPlayersPerTeamOrNull`](#structFRHAPI__SessionTemplate_1ae9c75e4ed5503a4799e11eb915e3049f)`() const` <a id="structFRHAPI__SessionTemplate_1ae9c75e4ed5503a4799e11eb915e3049f"></a>

Returns a pointer to PlayersPerTeam_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1adca032e360f65d8887d1dea902dc5518)`(const int32 & NewValue)` <a id="structFRHAPI__SessionTemplate_1adca032e360f65d8887d1dea902dc5518"></a>

Sets the value of PlayersPerTeam_Optional and also sets PlayersPerTeam_IsSet to true.

#### `public inline void `[`SetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1acb852dcaf6689c03a4580016a0a795fb)`(int32 && NewValue)` <a id="structFRHAPI__SessionTemplate_1acb852dcaf6689c03a4580016a0a795fb"></a>

Sets the value of PlayersPerTeam_Optional and also sets PlayersPerTeam_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayersPerTeam`](#structFRHAPI__SessionTemplate_1aa2773b8e861aae5dd66d271167b6e2fb)`()` <a id="structFRHAPI__SessionTemplate_1aa2773b8e861aae5dd66d271167b6e2fb"></a>

Clears the value of PlayersPerTeam_Optional and sets PlayersPerTeam_IsSet to false.

#### `public inline bool `[`IsPlayersPerTeamSet`](#structFRHAPI__SessionTemplate_1acd48ea97746af1fd74b29d2d65908a0c)`() const` <a id="structFRHAPI__SessionTemplate_1acd48ea97746af1fd74b29d2d65908a0c"></a>

Checks whether PlayersPerTeam_Optional has been set.

#### `public inline bool `[`IsPlayersPerTeamDefaultValue`](#structFRHAPI__SessionTemplate_1afc394c69e5ec383de5296897550060eb)`() const` <a id="structFRHAPI__SessionTemplate_1afc394c69e5ec383de5296897550060eb"></a>

Returns true if PlayersPerTeam_Optional is set and matches the default value.

#### `public inline void `[`SetPlayersPerTeamToDefault`](#structFRHAPI__SessionTemplate_1a8434c5519b75cac25c55f491f314dc7e)`()` <a id="structFRHAPI__SessionTemplate_1a8434c5519b75cac25c55f491f314dc7e"></a>

Sets the value of PlayersPerTeam_Optional to its default and also sets PlayersPerTeam_IsSet to true.

#### `public inline bool & `[`GetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1a9fdbd80f1f38aa4ac6f7f5f013279f4f)`()` <a id="structFRHAPI__SessionTemplate_1a9fdbd80f1f38aa4ac6f7f5f013279f4f"></a>

Gets the value of CanChangeOwnTeam_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1a65935e0d64fb8e6d7cc2ed65a2b40931)`() const` <a id="structFRHAPI__SessionTemplate_1a65935e0d64fb8e6d7cc2ed65a2b40931"></a>

Gets the value of CanChangeOwnTeam_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1a7885d492876ce00c08c01b5d82dcfc87)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a7885d492876ce00c08c01b5d82dcfc87"></a>

Gets the value of CanChangeOwnTeam_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1acff401368fdba4b7bc966fe2d79d1923)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1acff401368fdba4b7bc966fe2d79d1923"></a>

Fills OutValue with the value of CanChangeOwnTeam_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetCanChangeOwnTeamOrNull`](#structFRHAPI__SessionTemplate_1a4a16991ea9e808180d3f27516aa2fa2d)`()` <a id="structFRHAPI__SessionTemplate_1a4a16991ea9e808180d3f27516aa2fa2d"></a>

Returns a pointer to CanChangeOwnTeam_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetCanChangeOwnTeamOrNull`](#structFRHAPI__SessionTemplate_1a776402a49618b8aff3bee4d762c110ca)`() const` <a id="structFRHAPI__SessionTemplate_1a776402a49618b8aff3bee4d762c110ca"></a>

Returns a pointer to CanChangeOwnTeam_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1acef6ccf6e866904557c924d78547bad8)`(const bool & NewValue)` <a id="structFRHAPI__SessionTemplate_1acef6ccf6e866904557c924d78547bad8"></a>

Sets the value of CanChangeOwnTeam_Optional and also sets CanChangeOwnTeam_IsSet to true.

#### `public inline void `[`SetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1a1ef35ff58824fb5c386525eebc5ee6bb)`(bool && NewValue)` <a id="structFRHAPI__SessionTemplate_1a1ef35ff58824fb5c386525eebc5ee6bb"></a>

Sets the value of CanChangeOwnTeam_Optional and also sets CanChangeOwnTeam_IsSet to true using move semantics.

#### `public inline void `[`ClearCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1a9aa2afa1842ee1cab22a7b1a9a772c08)`()` <a id="structFRHAPI__SessionTemplate_1a9aa2afa1842ee1cab22a7b1a9a772c08"></a>

Clears the value of CanChangeOwnTeam_Optional and sets CanChangeOwnTeam_IsSet to false.

#### `public inline bool `[`IsCanChangeOwnTeamSet`](#structFRHAPI__SessionTemplate_1ab01565d0f99d6172f027405ea0e2288d)`() const` <a id="structFRHAPI__SessionTemplate_1ab01565d0f99d6172f027405ea0e2288d"></a>

Checks whether CanChangeOwnTeam_Optional has been set.

#### `public inline bool `[`IsCanChangeOwnTeamDefaultValue`](#structFRHAPI__SessionTemplate_1a26a5ebe40250064f888d423e23531bfa)`() const` <a id="structFRHAPI__SessionTemplate_1a26a5ebe40250064f888d423e23531bfa"></a>

Returns true if CanChangeOwnTeam_Optional is set and matches the default value.

#### `public inline void `[`SetCanChangeOwnTeamToDefault`](#structFRHAPI__SessionTemplate_1ac1a42404ac65f492acfd7e7fe75e4afb)`()` <a id="structFRHAPI__SessionTemplate_1ac1a42404ac65f492acfd7e7fe75e4afb"></a>

Sets the value of CanChangeOwnTeam_Optional to its default and also sets CanChangeOwnTeam_IsSet to true.

#### `public inline bool & `[`GetNotifyOnReservation`](#structFRHAPI__SessionTemplate_1ad24ef00c4199164207d73ac75243a5ff)`()` <a id="structFRHAPI__SessionTemplate_1ad24ef00c4199164207d73ac75243a5ff"></a>

Gets the value of NotifyOnReservation_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetNotifyOnReservation`](#structFRHAPI__SessionTemplate_1a4bb19e6ca88bed2fe793594a0e52a1e9)`() const` <a id="structFRHAPI__SessionTemplate_1a4bb19e6ca88bed2fe793594a0e52a1e9"></a>

Gets the value of NotifyOnReservation_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetNotifyOnReservation`](#structFRHAPI__SessionTemplate_1a60d6fb1be3a3bbd8b1e5e91285cafb5e)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a60d6fb1be3a3bbd8b1e5e91285cafb5e"></a>

Gets the value of NotifyOnReservation_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetNotifyOnReservation`](#structFRHAPI__SessionTemplate_1ad328d77d407db71c5bc4f162280751f7)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1ad328d77d407db71c5bc4f162280751f7"></a>

Fills OutValue with the value of NotifyOnReservation_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetNotifyOnReservationOrNull`](#structFRHAPI__SessionTemplate_1a97ee845f746a900b2460fc4c985acce1)`()` <a id="structFRHAPI__SessionTemplate_1a97ee845f746a900b2460fc4c985acce1"></a>

Returns a pointer to NotifyOnReservation_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetNotifyOnReservationOrNull`](#structFRHAPI__SessionTemplate_1ab13bc1c1799583cda7a8fefb54b60073)`() const` <a id="structFRHAPI__SessionTemplate_1ab13bc1c1799583cda7a8fefb54b60073"></a>

Returns a pointer to NotifyOnReservation_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetNotifyOnReservation`](#structFRHAPI__SessionTemplate_1a987bbef32e73963afa90d7e617393876)`(const bool & NewValue)` <a id="structFRHAPI__SessionTemplate_1a987bbef32e73963afa90d7e617393876"></a>

Sets the value of NotifyOnReservation_Optional and also sets NotifyOnReservation_IsSet to true.

#### `public inline void `[`SetNotifyOnReservation`](#structFRHAPI__SessionTemplate_1a9fb66e4cd55fe694e458248c10d17927)`(bool && NewValue)` <a id="structFRHAPI__SessionTemplate_1a9fb66e4cd55fe694e458248c10d17927"></a>

Sets the value of NotifyOnReservation_Optional and also sets NotifyOnReservation_IsSet to true using move semantics.

#### `public inline void `[`ClearNotifyOnReservation`](#structFRHAPI__SessionTemplate_1a09e9ca121b22271ccc7debde5c98afd1)`()` <a id="structFRHAPI__SessionTemplate_1a09e9ca121b22271ccc7debde5c98afd1"></a>

Clears the value of NotifyOnReservation_Optional and sets NotifyOnReservation_IsSet to false.

#### `public inline bool `[`IsNotifyOnReservationSet`](#structFRHAPI__SessionTemplate_1a6d7f33d80f239b54dc51a098fdb773d3)`() const` <a id="structFRHAPI__SessionTemplate_1a6d7f33d80f239b54dc51a098fdb773d3"></a>

Checks whether NotifyOnReservation_Optional has been set.

#### `public inline bool `[`IsNotifyOnReservationDefaultValue`](#structFRHAPI__SessionTemplate_1a5178c473b0e58f10f8cecfa32f155623)`() const` <a id="structFRHAPI__SessionTemplate_1a5178c473b0e58f10f8cecfa32f155623"></a>

Returns true if NotifyOnReservation_Optional is set and matches the default value.

#### `public inline void `[`SetNotifyOnReservationToDefault`](#structFRHAPI__SessionTemplate_1afbd6260244e4d1471d0049560f3c4ba8)`()` <a id="structFRHAPI__SessionTemplate_1afbd6260244e4d1471d0049560f3c4ba8"></a>

Sets the value of NotifyOnReservation_Optional to its default and also sets NotifyOnReservation_IsSet to true.

#### `public inline ERHAPI_PlayerVisibility & `[`GetPlayerVisibility`](#structFRHAPI__SessionTemplate_1a66ad5b16aad2826c95198072d5f84d80)`()` <a id="structFRHAPI__SessionTemplate_1a66ad5b16aad2826c95198072d5f84d80"></a>

Gets the value of PlayerVisibility_Optional, regardless of it having been set.

#### `public inline const ERHAPI_PlayerVisibility & `[`GetPlayerVisibility`](#structFRHAPI__SessionTemplate_1a1d230c6e759964d958ca63c123a08457)`() const` <a id="structFRHAPI__SessionTemplate_1a1d230c6e759964d958ca63c123a08457"></a>

Gets the value of PlayerVisibility_Optional, regardless of it having been set.

#### `public inline const ERHAPI_PlayerVisibility & `[`GetPlayerVisibility`](#structFRHAPI__SessionTemplate_1a38785125f1c7f2b63389e36da9394580)`(const ERHAPI_PlayerVisibility & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a38785125f1c7f2b63389e36da9394580"></a>

Gets the value of PlayerVisibility_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerVisibility`](#structFRHAPI__SessionTemplate_1afa179f8285b8b49821c72cdc00e6f9ed)`(ERHAPI_PlayerVisibility & OutValue) const` <a id="structFRHAPI__SessionTemplate_1afa179f8285b8b49821c72cdc00e6f9ed"></a>

Fills OutValue with the value of PlayerVisibility_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_PlayerVisibility * `[`GetPlayerVisibilityOrNull`](#structFRHAPI__SessionTemplate_1ae447a8c59f4bde4d6b9f11e634c33075)`()` <a id="structFRHAPI__SessionTemplate_1ae447a8c59f4bde4d6b9f11e634c33075"></a>

Returns a pointer to PlayerVisibility_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_PlayerVisibility * `[`GetPlayerVisibilityOrNull`](#structFRHAPI__SessionTemplate_1ac0a4a6dadf851aac72e0f3fefd0c95ae)`() const` <a id="structFRHAPI__SessionTemplate_1ac0a4a6dadf851aac72e0f3fefd0c95ae"></a>

Returns a pointer to PlayerVisibility_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerVisibility`](#structFRHAPI__SessionTemplate_1a563117c22429879bdd06e558384fda42)`(const ERHAPI_PlayerVisibility & NewValue)` <a id="structFRHAPI__SessionTemplate_1a563117c22429879bdd06e558384fda42"></a>

Sets the value of PlayerVisibility_Optional and also sets PlayerVisibility_IsSet to true.

#### `public inline void `[`SetPlayerVisibility`](#structFRHAPI__SessionTemplate_1aaa040bd05b9f42ef694a2f1cbb63f3a1)`(ERHAPI_PlayerVisibility && NewValue)` <a id="structFRHAPI__SessionTemplate_1aaa040bd05b9f42ef694a2f1cbb63f3a1"></a>

Sets the value of PlayerVisibility_Optional and also sets PlayerVisibility_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerVisibility`](#structFRHAPI__SessionTemplate_1ad9160f33307545c48ba632f454c4332c)`()` <a id="structFRHAPI__SessionTemplate_1ad9160f33307545c48ba632f454c4332c"></a>

Clears the value of PlayerVisibility_Optional and sets PlayerVisibility_IsSet to false.

#### `public inline bool `[`IsPlayerVisibilitySet`](#structFRHAPI__SessionTemplate_1a4cbb01fef0441ce8940ab60a3a79839e)`() const` <a id="structFRHAPI__SessionTemplate_1a4cbb01fef0441ce8940ab60a3a79839e"></a>

Checks whether PlayerVisibility_Optional has been set.

#### `public inline ERHAPI_PlayerVisibility & `[`GetAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1a13f67f6718aafbf915840985633deb05)`()` <a id="structFRHAPI__SessionTemplate_1a13f67f6718aafbf915840985633deb05"></a>

Gets the value of AdminPlayerVisibility_Optional, regardless of it having been set.

#### `public inline const ERHAPI_PlayerVisibility & `[`GetAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1a8b4e5bfb565a09381b4a0122e54aa167)`() const` <a id="structFRHAPI__SessionTemplate_1a8b4e5bfb565a09381b4a0122e54aa167"></a>

Gets the value of AdminPlayerVisibility_Optional, regardless of it having been set.

#### `public inline const ERHAPI_PlayerVisibility & `[`GetAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1a51bb824bc7757a9a99e939abd79f38ad)`(const ERHAPI_PlayerVisibility & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a51bb824bc7757a9a99e939abd79f38ad"></a>

Gets the value of AdminPlayerVisibility_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1a4a67111b81d583d142fb63337cae859e)`(ERHAPI_PlayerVisibility & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a4a67111b81d583d142fb63337cae859e"></a>

Fills OutValue with the value of AdminPlayerVisibility_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_PlayerVisibility * `[`GetAdminPlayerVisibilityOrNull`](#structFRHAPI__SessionTemplate_1a1224ad0432226c839f8a76916c95d943)`()` <a id="structFRHAPI__SessionTemplate_1a1224ad0432226c839f8a76916c95d943"></a>

Returns a pointer to AdminPlayerVisibility_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_PlayerVisibility * `[`GetAdminPlayerVisibilityOrNull`](#structFRHAPI__SessionTemplate_1a4f29c3b85e173e78be984631dc03c79f)`() const` <a id="structFRHAPI__SessionTemplate_1a4f29c3b85e173e78be984631dc03c79f"></a>

Returns a pointer to AdminPlayerVisibility_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1aa215431f4505e3baa98295f2771848ff)`(const ERHAPI_PlayerVisibility & NewValue)` <a id="structFRHAPI__SessionTemplate_1aa215431f4505e3baa98295f2771848ff"></a>

Sets the value of AdminPlayerVisibility_Optional and also sets AdminPlayerVisibility_IsSet to true.

#### `public inline void `[`SetAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1ad1830c5d970292a0c98d54f0f593982a)`(ERHAPI_PlayerVisibility && NewValue)` <a id="structFRHAPI__SessionTemplate_1ad1830c5d970292a0c98d54f0f593982a"></a>

Sets the value of AdminPlayerVisibility_Optional and also sets AdminPlayerVisibility_IsSet to true using move semantics.

#### `public inline void `[`ClearAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1a1ed525f8085823e6ac6ae445ba9932e5)`()` <a id="structFRHAPI__SessionTemplate_1a1ed525f8085823e6ac6ae445ba9932e5"></a>

Clears the value of AdminPlayerVisibility_Optional and sets AdminPlayerVisibility_IsSet to false.

#### `public inline bool `[`IsAdminPlayerVisibilitySet`](#structFRHAPI__SessionTemplate_1a97b99dd83913269e57edce56edbce9ef)`() const` <a id="structFRHAPI__SessionTemplate_1a97b99dd83913269e57edce56edbce9ef"></a>

Checks whether AdminPlayerVisibility_Optional has been set.

#### `public inline ERHAPI_PlayerVisibility & `[`GetPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a4e9677443642d475578f8c71b562f458)`()` <a id="structFRHAPI__SessionTemplate_1a4e9677443642d475578f8c71b562f458"></a>

Gets the value of PlayerNotificationFrequency_Optional, regardless of it having been set.

#### `public inline const ERHAPI_PlayerVisibility & `[`GetPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a99aa3be977c2175f39610c4159e079d2)`() const` <a id="structFRHAPI__SessionTemplate_1a99aa3be977c2175f39610c4159e079d2"></a>

Gets the value of PlayerNotificationFrequency_Optional, regardless of it having been set.

#### `public inline const ERHAPI_PlayerVisibility & `[`GetPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a48e91333755b39e1b87138e0101525e4)`(const ERHAPI_PlayerVisibility & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a48e91333755b39e1b87138e0101525e4"></a>

Gets the value of PlayerNotificationFrequency_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a8d84aa3c71a766eb85bd4af6277dea75)`(ERHAPI_PlayerVisibility & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a8d84aa3c71a766eb85bd4af6277dea75"></a>

Fills OutValue with the value of PlayerNotificationFrequency_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_PlayerVisibility * `[`GetPlayerNotificationFrequencyOrNull`](#structFRHAPI__SessionTemplate_1afdf475d68e058be7541b4b9bcc17f3f0)`()` <a id="structFRHAPI__SessionTemplate_1afdf475d68e058be7541b4b9bcc17f3f0"></a>

Returns a pointer to PlayerNotificationFrequency_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_PlayerVisibility * `[`GetPlayerNotificationFrequencyOrNull`](#structFRHAPI__SessionTemplate_1a9f7fede5131e101159602654ea43e2b7)`() const` <a id="structFRHAPI__SessionTemplate_1a9f7fede5131e101159602654ea43e2b7"></a>

Returns a pointer to PlayerNotificationFrequency_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a40087fdd5097362e6d7018eab132bfdc)`(const ERHAPI_PlayerVisibility & NewValue)` <a id="structFRHAPI__SessionTemplate_1a40087fdd5097362e6d7018eab132bfdc"></a>

Sets the value of PlayerNotificationFrequency_Optional and also sets PlayerNotificationFrequency_IsSet to true.

#### `public inline void `[`SetPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1adb3494fb955e2e5f9c8db96c385e3aae)`(ERHAPI_PlayerVisibility && NewValue)` <a id="structFRHAPI__SessionTemplate_1adb3494fb955e2e5f9c8db96c385e3aae"></a>

Sets the value of PlayerNotificationFrequency_Optional and also sets PlayerNotificationFrequency_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a9e283ac577d19794a939f946ac98642d)`()` <a id="structFRHAPI__SessionTemplate_1a9e283ac577d19794a939f946ac98642d"></a>

Clears the value of PlayerNotificationFrequency_Optional and sets PlayerNotificationFrequency_IsSet to false.

#### `public inline bool `[`IsPlayerNotificationFrequencySet`](#structFRHAPI__SessionTemplate_1af5b0c780644985e4123a7197abb762b9)`() const` <a id="structFRHAPI__SessionTemplate_1af5b0c780644985e4123a7197abb762b9"></a>

Checks whether PlayerNotificationFrequency_Optional has been set.

#### `public inline ERHAPI_PlayerVisibility & `[`GetAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a2e979b670993487b275a0bbc539b45f4)`()` <a id="structFRHAPI__SessionTemplate_1a2e979b670993487b275a0bbc539b45f4"></a>

Gets the value of AdminPlayerNotificationFrequency_Optional, regardless of it having been set.

#### `public inline const ERHAPI_PlayerVisibility & `[`GetAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a0e7a55ea9d867d99738b7928efc1a0df)`() const` <a id="structFRHAPI__SessionTemplate_1a0e7a55ea9d867d99738b7928efc1a0df"></a>

Gets the value of AdminPlayerNotificationFrequency_Optional, regardless of it having been set.

#### `public inline const ERHAPI_PlayerVisibility & `[`GetAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1af3b952f791a272a5aa8819c0af315927)`(const ERHAPI_PlayerVisibility & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1af3b952f791a272a5aa8819c0af315927"></a>

Gets the value of AdminPlayerNotificationFrequency_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1aea213cbf702ce04f03062f5966af1a2f)`(ERHAPI_PlayerVisibility & OutValue) const` <a id="structFRHAPI__SessionTemplate_1aea213cbf702ce04f03062f5966af1a2f"></a>

Fills OutValue with the value of AdminPlayerNotificationFrequency_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_PlayerVisibility * `[`GetAdminPlayerNotificationFrequencyOrNull`](#structFRHAPI__SessionTemplate_1a64ae855d2b3be9cacb5633fa7949cb33)`()` <a id="structFRHAPI__SessionTemplate_1a64ae855d2b3be9cacb5633fa7949cb33"></a>

Returns a pointer to AdminPlayerNotificationFrequency_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_PlayerVisibility * `[`GetAdminPlayerNotificationFrequencyOrNull`](#structFRHAPI__SessionTemplate_1ad92aa89b9390b4a86e2f5d3a5a8729a8)`() const` <a id="structFRHAPI__SessionTemplate_1ad92aa89b9390b4a86e2f5d3a5a8729a8"></a>

Returns a pointer to AdminPlayerNotificationFrequency_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a6af1921f4955c3aa170e15866a52888d)`(const ERHAPI_PlayerVisibility & NewValue)` <a id="structFRHAPI__SessionTemplate_1a6af1921f4955c3aa170e15866a52888d"></a>

Sets the value of AdminPlayerNotificationFrequency_Optional and also sets AdminPlayerNotificationFrequency_IsSet to true.

#### `public inline void `[`SetAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a1a460126fd5ae175913eb4667965d36e)`(ERHAPI_PlayerVisibility && NewValue)` <a id="structFRHAPI__SessionTemplate_1a1a460126fd5ae175913eb4667965d36e"></a>

Sets the value of AdminPlayerNotificationFrequency_Optional and also sets AdminPlayerNotificationFrequency_IsSet to true using move semantics.

#### `public inline void `[`ClearAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1aed149547b3e1c182e446b8fce5b7d5f6)`()` <a id="structFRHAPI__SessionTemplate_1aed149547b3e1c182e446b8fce5b7d5f6"></a>

Clears the value of AdminPlayerNotificationFrequency_Optional and sets AdminPlayerNotificationFrequency_IsSet to false.

#### `public inline bool `[`IsAdminPlayerNotificationFrequencySet`](#structFRHAPI__SessionTemplate_1a5ea7daf024acb3141141f83420f61665)`() const` <a id="structFRHAPI__SessionTemplate_1a5ea7daf024acb3141141f83420f61665"></a>

Checks whether AdminPlayerNotificationFrequency_Optional has been set.

#### `public inline int32 & `[`GetPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1a0843d0ef5c306f25a40e1f4203e848e6)`()` <a id="structFRHAPI__SessionTemplate_1a0843d0ef5c306f25a40e1f4203e848e6"></a>

Gets the value of PlayerCullingTimeout_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1a83d2107ad53df8149f790a0dc00ae2fd)`() const` <a id="structFRHAPI__SessionTemplate_1a83d2107ad53df8149f790a0dc00ae2fd"></a>

Gets the value of PlayerCullingTimeout_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1a836ee8cf341a88e6ea2c62fec8c2ba6f)`(const int32 & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a836ee8cf341a88e6ea2c62fec8c2ba6f"></a>

Gets the value of PlayerCullingTimeout_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1a6d9925b7b0e49001b6da209332d30a38)`(int32 & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a6d9925b7b0e49001b6da209332d30a38"></a>

Fills OutValue with the value of PlayerCullingTimeout_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPlayerCullingTimeoutOrNull`](#structFRHAPI__SessionTemplate_1a4bddafb6c21d8f11386ccf76353c5c5c)`()` <a id="structFRHAPI__SessionTemplate_1a4bddafb6c21d8f11386ccf76353c5c5c"></a>

Returns a pointer to PlayerCullingTimeout_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPlayerCullingTimeoutOrNull`](#structFRHAPI__SessionTemplate_1a07f4c6525a399d8b39d3d618ad28401b)`() const` <a id="structFRHAPI__SessionTemplate_1a07f4c6525a399d8b39d3d618ad28401b"></a>

Returns a pointer to PlayerCullingTimeout_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1a3790ba4bfcf229f34e98395bca12abfc)`(const int32 & NewValue)` <a id="structFRHAPI__SessionTemplate_1a3790ba4bfcf229f34e98395bca12abfc"></a>

Sets the value of PlayerCullingTimeout_Optional and also sets PlayerCullingTimeout_IsSet to true.

#### `public inline void `[`SetPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1ad6f9108bab56aa9feae7fb02534fa31c)`(int32 && NewValue)` <a id="structFRHAPI__SessionTemplate_1ad6f9108bab56aa9feae7fb02534fa31c"></a>

Sets the value of PlayerCullingTimeout_Optional and also sets PlayerCullingTimeout_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1ac5f91d7657a5e7cae9199856318f4337)`()` <a id="structFRHAPI__SessionTemplate_1ac5f91d7657a5e7cae9199856318f4337"></a>

Clears the value of PlayerCullingTimeout_Optional and sets PlayerCullingTimeout_IsSet to false.

#### `public inline bool `[`IsPlayerCullingTimeoutSet`](#structFRHAPI__SessionTemplate_1aa2dc33d1e65c8438aa77a41e13714e75)`() const` <a id="structFRHAPI__SessionTemplate_1aa2dc33d1e65c8438aa77a41e13714e75"></a>

Checks whether PlayerCullingTimeout_Optional has been set.

#### `public inline bool `[`IsPlayerCullingTimeoutDefaultValue`](#structFRHAPI__SessionTemplate_1a49088bbeaca752e19695881c88507786)`() const` <a id="structFRHAPI__SessionTemplate_1a49088bbeaca752e19695881c88507786"></a>

Returns true if PlayerCullingTimeout_Optional is set and matches the default value.

#### `public inline void `[`SetPlayerCullingTimeoutToDefault`](#structFRHAPI__SessionTemplate_1adbc0a086485cde66c84bbe46207c8747)`()` <a id="structFRHAPI__SessionTemplate_1adbc0a086485cde66c84bbe46207c8747"></a>

Sets the value of PlayerCullingTimeout_Optional to its default and also sets PlayerCullingTimeout_IsSet to true.

