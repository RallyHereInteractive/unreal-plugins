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
`public inline FORCEINLINE FString & `[`GetSessionType`](#structFRHAPI__SessionTemplate_1a75dfd31ba192bb89bb1d679c0097822b)`()` | Gets the value of SessionType.
`public inline FORCEINLINE const FString & `[`GetSessionType`](#structFRHAPI__SessionTemplate_1aa5fe5a3106adac2dacc5fc7c3add336b)`() const` | Gets the value of SessionType.
`public inline FORCEINLINE void `[`SetSessionType`](#structFRHAPI__SessionTemplate_1aceb42a8362b4189feaf2c5efee30b481)`(const FString & NewValue)` | Sets the value of SessionType.
`public inline FORCEINLINE void `[`SetSessionType`](#structFRHAPI__SessionTemplate_1ab0c6bb52e998b27b6fc0b3b43441de53)`(FString && NewValue)` | Sets the value of SessionType using move semantics.
`public inline FORCEINLINE FString & `[`GetEngineSessionType`](#structFRHAPI__SessionTemplate_1af201ffb7973c3c526ceb18ae76e8a6dd)`()` | Gets the value of EngineSessionType_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetEngineSessionType`](#structFRHAPI__SessionTemplate_1a3237613110ad2e49f03c8452af203d9a)`() const` | Gets the value of EngineSessionType_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetEngineSessionType`](#structFRHAPI__SessionTemplate_1a6086c174a2f4c86bef007da0cbae53bd)`(const FString & DefaultValue) const` | Gets the value of EngineSessionType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEngineSessionType`](#structFRHAPI__SessionTemplate_1a1528c559d0a9a55d5673b8beea281e97)`(FString & OutValue) const` | Fills OutValue with the value of EngineSessionType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetEngineSessionTypeOrNull`](#structFRHAPI__SessionTemplate_1a4fecdafbf7d351cee4388abb1f2e29d1)`()` | Returns a pointer to EngineSessionType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetEngineSessionTypeOrNull`](#structFRHAPI__SessionTemplate_1a0cc539d55777b8b916862f7e726d49f5)`() const` | Returns a pointer to EngineSessionType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEngineSessionType`](#structFRHAPI__SessionTemplate_1afe357861b8a8c0966ba0897b1c656b20)`(const FString & NewValue)` | Sets the value of EngineSessionType_Optional and also sets EngineSessionType_IsSet to true.
`public inline FORCEINLINE void `[`SetEngineSessionType`](#structFRHAPI__SessionTemplate_1a4b5d222c4e86a096167bf832e78c3a40)`(FString && NewValue)` | Sets the value of EngineSessionType_Optional and also sets EngineSessionType_IsSet to true using move semantics.
`public inline void `[`ClearEngineSessionType`](#structFRHAPI__SessionTemplate_1a49cf645ee28f75e34b7e82a375b0b7a0)`()` | Clears the value of EngineSessionType_Optional and sets EngineSessionType_IsSet to false.
`public inline FORCEINLINE FString `[`GetDefaultValue_EngineSessionType`](#structFRHAPI__SessionTemplate_1a00cfa3a930a0f1078fa762ed0af4c726)`()` | Returns the default value of EngineSessionType.
`public inline FORCEINLINE bool & `[`GetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1a64d2faf9a66b4e1be4a646a873aba57d)`()` | Gets the value of CanJoinMatchmaking_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1ae2115c41541e2d31b5e5feb02e1b70f4)`() const` | Gets the value of CanJoinMatchmaking_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1ab2f684352538ba2ca9a1965abff904f4)`(const bool & DefaultValue) const` | Gets the value of CanJoinMatchmaking_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1a006dfdeea266a03f21a3cafad4fa27a6)`(bool & OutValue) const` | Fills OutValue with the value of CanJoinMatchmaking_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetCanJoinMatchmakingOrNull`](#structFRHAPI__SessionTemplate_1a4994b7c724f972e4b2d4b1b49dbaefbe)`()` | Returns a pointer to CanJoinMatchmaking_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetCanJoinMatchmakingOrNull`](#structFRHAPI__SessionTemplate_1abcd86c9845a8edfee581c0e6bc56ac55)`() const` | Returns a pointer to CanJoinMatchmaking_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1a570ab01fba703f992b55b817ebcc2b26)`(const bool & NewValue)` | Sets the value of CanJoinMatchmaking_Optional and also sets CanJoinMatchmaking_IsSet to true.
`public inline FORCEINLINE void `[`SetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1a644fa64cd53ac4a84d203b5990a181d9)`(bool && NewValue)` | Sets the value of CanJoinMatchmaking_Optional and also sets CanJoinMatchmaking_IsSet to true using move semantics.
`public inline void `[`ClearCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1aea8827859a78eea75ccb378ae6d34536)`()` | Clears the value of CanJoinMatchmaking_Optional and sets CanJoinMatchmaking_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_CanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1a35e30a1e228c30714f6619b8a9392111)`()` | Returns the default value of CanJoinMatchmaking.
`public inline FORCEINLINE bool & `[`GetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1a85827330d0d782c65b226cd3f9f08a03)`()` | Gets the value of CanBeCreatedByPlayersDirectly_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1a79d34dfc7e00d818b1456108f8b113ad)`() const` | Gets the value of CanBeCreatedByPlayersDirectly_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1ad3338aa7e9cdb285b322597c3874a2ea)`(const bool & DefaultValue) const` | Gets the value of CanBeCreatedByPlayersDirectly_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1a0415c5fada8798829c011a196ed6baca)`(bool & OutValue) const` | Fills OutValue with the value of CanBeCreatedByPlayersDirectly_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetCanBeCreatedByPlayersDirectlyOrNull`](#structFRHAPI__SessionTemplate_1a270be6d1bd34146e5c743da283d5dd78)`()` | Returns a pointer to CanBeCreatedByPlayersDirectly_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetCanBeCreatedByPlayersDirectlyOrNull`](#structFRHAPI__SessionTemplate_1ae01b2275e8578277907077c24bcd0c36)`() const` | Returns a pointer to CanBeCreatedByPlayersDirectly_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1a85942c189be6aaec82e3d306af26c034)`(const bool & NewValue)` | Sets the value of CanBeCreatedByPlayersDirectly_Optional and also sets CanBeCreatedByPlayersDirectly_IsSet to true.
`public inline FORCEINLINE void `[`SetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1aadd6b81b0924b94ced1f7cd462f40c74)`(bool && NewValue)` | Sets the value of CanBeCreatedByPlayersDirectly_Optional and also sets CanBeCreatedByPlayersDirectly_IsSet to true using move semantics.
`public inline void `[`ClearCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1aeeead6ecb3330ef0ab4e0d0f1d51be6f)`()` | Clears the value of CanBeCreatedByPlayersDirectly_Optional and sets CanBeCreatedByPlayersDirectly_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_CanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1a3b12246dc014ad72bca73d9b62f759b0)`()` | Returns the default value of CanBeCreatedByPlayersDirectly.
`public inline FORCEINLINE bool & `[`GetJoinable`](#structFRHAPI__SessionTemplate_1a3a330a72ee753ea50d65ea1198834c64)`()` | Gets the value of Joinable_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetJoinable`](#structFRHAPI__SessionTemplate_1aada2c5b06de6f9df94669aa6bc3320c6)`() const` | Gets the value of Joinable_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetJoinable`](#structFRHAPI__SessionTemplate_1acecf08fb4184a8d4291ebb98ab057054)`(const bool & DefaultValue) const` | Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetJoinable`](#structFRHAPI__SessionTemplate_1a6192788aa33db2048bfda5a851f6dbb4)`(bool & OutValue) const` | Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetJoinableOrNull`](#structFRHAPI__SessionTemplate_1a8da8e890b1fe28561f7c15a014e0d22d)`()` | Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetJoinableOrNull`](#structFRHAPI__SessionTemplate_1a3ba9744bb5884d6a10282163c26d4151)`() const` | Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetJoinable`](#structFRHAPI__SessionTemplate_1a3497bafad0631b04e1f68c25d8895012)`(const bool & NewValue)` | Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.
`public inline FORCEINLINE void `[`SetJoinable`](#structFRHAPI__SessionTemplate_1a366be00a8a0eb91d7c2315c9004f4ee4)`(bool && NewValue)` | Sets the value of Joinable_Optional and also sets Joinable_IsSet to true using move semantics.
`public inline void `[`ClearJoinable`](#structFRHAPI__SessionTemplate_1a2656215bcf0eb51c71fed328166e6b68)`()` | Clears the value of Joinable_Optional and sets Joinable_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_Joinable`](#structFRHAPI__SessionTemplate_1aa778c187f2b993a9386fcbf2731f4756)`()` | Returns the default value of Joinable.
`public inline FORCEINLINE bool & `[`GetAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1a463788985f89c48ea6367c1621779491)`()` | Gets the value of AttemptAutoJoin_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1a7d1b388208046209b4d7b3ec03acb622)`() const` | Gets the value of AttemptAutoJoin_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1acc677a648c531e5bfad6aef7545e5394)`(const bool & DefaultValue) const` | Gets the value of AttemptAutoJoin_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1a7b6869ff41b7f89c605d3452b607fcff)`(bool & OutValue) const` | Fills OutValue with the value of AttemptAutoJoin_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetAttemptAutoJoinOrNull`](#structFRHAPI__SessionTemplate_1a27f7dbf7030bc534465bdbda2c2bd199)`()` | Returns a pointer to AttemptAutoJoin_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetAttemptAutoJoinOrNull`](#structFRHAPI__SessionTemplate_1a41fcca59d95c22fd82ac2a39157faba5)`() const` | Returns a pointer to AttemptAutoJoin_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1a686e6bc703f7f02474f5452f39e09cc6)`(const bool & NewValue)` | Sets the value of AttemptAutoJoin_Optional and also sets AttemptAutoJoin_IsSet to true.
`public inline FORCEINLINE void `[`SetAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1ad07bf4d3807d4f42f93248c2e70145eb)`(bool && NewValue)` | Sets the value of AttemptAutoJoin_Optional and also sets AttemptAutoJoin_IsSet to true using move semantics.
`public inline void `[`ClearAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1af01c65d9412c08982e1d810d821508e6)`()` | Clears the value of AttemptAutoJoin_Optional and sets AttemptAutoJoin_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_AttemptAutoJoin`](#structFRHAPI__SessionTemplate_1a62d48e217a42ee8276ad536e3e905a8b)`()` | Returns the default value of AttemptAutoJoin.
`public inline FORCEINLINE bool & `[`GetDefaultPublic`](#structFRHAPI__SessionTemplate_1afa14ebc2e6f34bee3a313d86725ebd2a)`()` | Gets the value of DefaultPublic_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetDefaultPublic`](#structFRHAPI__SessionTemplate_1a2166f6de43c3be6ffeca5f591b884e10)`() const` | Gets the value of DefaultPublic_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetDefaultPublic`](#structFRHAPI__SessionTemplate_1afe82d34a56ce14cf675c7c19e8ca8f63)`(const bool & DefaultValue) const` | Gets the value of DefaultPublic_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDefaultPublic`](#structFRHAPI__SessionTemplate_1af67765bcd3ed4658364236b9f948460b)`(bool & OutValue) const` | Fills OutValue with the value of DefaultPublic_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetDefaultPublicOrNull`](#structFRHAPI__SessionTemplate_1aec79fb6b37c7ef582f2118c4d964c5bc)`()` | Returns a pointer to DefaultPublic_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetDefaultPublicOrNull`](#structFRHAPI__SessionTemplate_1a2b9d31ccfc1dbe69b8771c655275fe87)`() const` | Returns a pointer to DefaultPublic_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDefaultPublic`](#structFRHAPI__SessionTemplate_1aa4684f0d2457421cda62948ce5a8eb92)`(const bool & NewValue)` | Sets the value of DefaultPublic_Optional and also sets DefaultPublic_IsSet to true.
`public inline FORCEINLINE void `[`SetDefaultPublic`](#structFRHAPI__SessionTemplate_1aaccf0b3db709cb269661f2fe418f4914)`(bool && NewValue)` | Sets the value of DefaultPublic_Optional and also sets DefaultPublic_IsSet to true using move semantics.
`public inline void `[`ClearDefaultPublic`](#structFRHAPI__SessionTemplate_1a0b7ec628161b7d1a8317204875d476e5)`()` | Clears the value of DefaultPublic_Optional and sets DefaultPublic_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_DefaultPublic`](#structFRHAPI__SessionTemplate_1a915a7d05d3ef5ccab584f000445fc596)`()` | Returns the default value of DefaultPublic.
`public inline FORCEINLINE bool & `[`GetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1a3e49a409d879151cbf93970e6e350694)`()` | Gets the value of AutoAddToBrowser_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1a2d5c75eabbc30bbcc81ed33be0f2033b)`() const` | Gets the value of AutoAddToBrowser_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1a653664d05e5cdcf55dc4c8dc45a1a472)`(const bool & DefaultValue) const` | Gets the value of AutoAddToBrowser_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1a07eb4d00159c73687fc5bc5c49153942)`(bool & OutValue) const` | Fills OutValue with the value of AutoAddToBrowser_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetAutoAddToBrowserOrNull`](#structFRHAPI__SessionTemplate_1aef11b2e875d64ccd9a39a4ea21cc2d03)`()` | Returns a pointer to AutoAddToBrowser_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetAutoAddToBrowserOrNull`](#structFRHAPI__SessionTemplate_1a619bfc881958e68b63d1d7865ad66255)`() const` | Returns a pointer to AutoAddToBrowser_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1a0f75edb1c3ba442adfbed409fa934e7c)`(const bool & NewValue)` | Sets the value of AutoAddToBrowser_Optional and also sets AutoAddToBrowser_IsSet to true.
`public inline FORCEINLINE void `[`SetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1a70088786a12a5f8a0c498af5ff0efe75)`(bool && NewValue)` | Sets the value of AutoAddToBrowser_Optional and also sets AutoAddToBrowser_IsSet to true using move semantics.
`public inline void `[`ClearAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1ae71defa87a1bc92560786421ece26aa0)`()` | Clears the value of AutoAddToBrowser_Optional and sets AutoAddToBrowser_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_AutoAddToBrowser`](#structFRHAPI__SessionTemplate_1a6b7806543f412eb9fbaea62b7fc0e26f)`()` | Returns the default value of AutoAddToBrowser.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1a54aa6ea8d0962d2126be0f18ad6fad05)`()` | Gets the value of AutoBrowserParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1a569ff5996db7bc783aa17992fbaf6da1)`() const` | Gets the value of AutoBrowserParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1ac84fb4a7e1050ad7abf23346cf4e903a)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of AutoBrowserParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1a58558ace9ca0098f6405046b69df3ace)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of AutoBrowserParams_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetAutoBrowserParamsOrNull`](#structFRHAPI__SessionTemplate_1acdde865416352a141afbf80bb0398210)`()` | Returns a pointer to AutoBrowserParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetAutoBrowserParamsOrNull`](#structFRHAPI__SessionTemplate_1a25bd38bd8640e5fce5ae401c86f11207)`() const` | Returns a pointer to AutoBrowserParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1ad4350ef9f0074f789eb5a8d59c399e65)`(const TMap< FString, FString > & NewValue)` | Sets the value of AutoBrowserParams_Optional and also sets AutoBrowserParams_IsSet to true.
`public inline FORCEINLINE void `[`SetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1a9e8996d44e8bd8b77e1bb531a56993d6)`(TMap< FString, FString > && NewValue)` | Sets the value of AutoBrowserParams_Optional and also sets AutoBrowserParams_IsSet to true using move semantics.
`public inline void `[`ClearAutoBrowserParams`](#structFRHAPI__SessionTemplate_1afc6ccbb82066817f3e22ad01730802db)`()` | Clears the value of AutoBrowserParams_Optional and sets AutoBrowserParams_IsSet to false.
`public inline FORCEINLINE bool & `[`GetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1a7f14e559fc6d58bbdd5f59c2cbadf0a2)`()` | Gets the value of CanBeAddedToServerBrowser_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1a581bf78e925663382aebb4ae057ec782)`() const` | Gets the value of CanBeAddedToServerBrowser_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1a629699aae557c0f5e5876a7a99e4c24f)`(const bool & DefaultValue) const` | Gets the value of CanBeAddedToServerBrowser_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1a41f7dc5bfe55e205bef58e7a2dbdfa32)`(bool & OutValue) const` | Fills OutValue with the value of CanBeAddedToServerBrowser_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetCanBeAddedToServerBrowserOrNull`](#structFRHAPI__SessionTemplate_1a2b87f36612a331a89bf17f8c93a5b060)`()` | Returns a pointer to CanBeAddedToServerBrowser_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetCanBeAddedToServerBrowserOrNull`](#structFRHAPI__SessionTemplate_1aece56863c0c6293cc6ba84ee7abc2ded)`() const` | Returns a pointer to CanBeAddedToServerBrowser_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1a39a51ad19785d49e24aa8c452c89a1ab)`(const bool & NewValue)` | Sets the value of CanBeAddedToServerBrowser_Optional and also sets CanBeAddedToServerBrowser_IsSet to true.
`public inline FORCEINLINE void `[`SetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1a49ac38a51c0dd275e3ec8234cd82dba9)`(bool && NewValue)` | Sets the value of CanBeAddedToServerBrowser_Optional and also sets CanBeAddedToServerBrowser_IsSet to true using move semantics.
`public inline void `[`ClearCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1a23f4b3075ad5c6cf66442b7fb9ff4731)`()` | Clears the value of CanBeAddedToServerBrowser_Optional and sets CanBeAddedToServerBrowser_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_CanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1a74fb9716fddae21fb194df7fce9b5b17)`()` | Returns the default value of CanBeAddedToServerBrowser.
`public inline FORCEINLINE bool & `[`GetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a879b144cd4aef336c79e3424df340a4f)`()` | Gets the value of KeepAliveOnEmpty_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1ac05f99b597707e4110d27f56dfed5528)`() const` | Gets the value of KeepAliveOnEmpty_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a99db29ba4320d64bae99aded3c305534)`(const bool & DefaultValue) const` | Gets the value of KeepAliveOnEmpty_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1aa49adb157d419466f8bbb5d440479c3d)`(bool & OutValue) const` | Fills OutValue with the value of KeepAliveOnEmpty_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetKeepAliveOnEmptyOrNull`](#structFRHAPI__SessionTemplate_1a9fa74f56f30e7268fccedad10da156c6)`()` | Returns a pointer to KeepAliveOnEmpty_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetKeepAliveOnEmptyOrNull`](#structFRHAPI__SessionTemplate_1ae744b78afe0b4539a391a8f4924c3db5)`() const` | Returns a pointer to KeepAliveOnEmpty_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1af3a1ebab6420e4eb8fc259168cb3f5f4)`(const bool & NewValue)` | Sets the value of KeepAliveOnEmpty_Optional and also sets KeepAliveOnEmpty_IsSet to true.
`public inline FORCEINLINE void `[`SetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a3919681832cab47999d46cd1cf059e4e)`(bool && NewValue)` | Sets the value of KeepAliveOnEmpty_Optional and also sets KeepAliveOnEmpty_IsSet to true using move semantics.
`public inline void `[`ClearKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a296512654f450ed319f63f8b648c53b8)`()` | Clears the value of KeepAliveOnEmpty_Optional and sets KeepAliveOnEmpty_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_KeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a9be2e9e8c8a36ef99ef0715eb2c7232c)`()` | Returns the default value of KeepAliveOnEmpty.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & `[`GetPlatformTemplates`](#structFRHAPI__SessionTemplate_1a36d7a0ab9958e3c311dfe494c1d9bf6f)`()` | Gets the value of PlatformTemplates_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & `[`GetPlatformTemplates`](#structFRHAPI__SessionTemplate_1a68b501be1b2309fef017098a8e5600be)`() const` | Gets the value of PlatformTemplates_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & `[`GetPlatformTemplates`](#structFRHAPI__SessionTemplate_1a200ce4fa8791a415470dc0e7b0c7854c)`(const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & DefaultValue) const` | Gets the value of PlatformTemplates_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatformTemplates`](#structFRHAPI__SessionTemplate_1a1fec6c5587008ff6a935e6adaf18f8ba)`(TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & OutValue) const` | Fills OutValue with the value of PlatformTemplates_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > * `[`GetPlatformTemplatesOrNull`](#structFRHAPI__SessionTemplate_1acb64afafb12e315ed008501d7b99497b)`()` | Returns a pointer to PlatformTemplates_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > * `[`GetPlatformTemplatesOrNull`](#structFRHAPI__SessionTemplate_1aae15673e577b1fb3318aef710f8c3acb)`() const` | Returns a pointer to PlatformTemplates_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatformTemplates`](#structFRHAPI__SessionTemplate_1aba3ca6d8025c9f0e2452972cd7ee55f0)`(const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & NewValue)` | Sets the value of PlatformTemplates_Optional and also sets PlatformTemplates_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatformTemplates`](#structFRHAPI__SessionTemplate_1a9874ab324356c7fbda5bcb63982df2ce)`(TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > && NewValue)` | Sets the value of PlatformTemplates_Optional and also sets PlatformTemplates_IsSet to true using move semantics.
`public inline void `[`ClearPlatformTemplates`](#structFRHAPI__SessionTemplate_1a63f0a0474639a53f8a0789e3850321dd)`()` | Clears the value of PlatformTemplates_Optional and sets PlatformTemplates_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetAutoStartupParams`](#structFRHAPI__SessionTemplate_1a1467b33c02abc7ef43c9d36ee797c2bf)`()` | Gets the value of AutoStartupParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetAutoStartupParams`](#structFRHAPI__SessionTemplate_1a1d283a70b49ac08950337d390958f7b8)`() const` | Gets the value of AutoStartupParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetAutoStartupParams`](#structFRHAPI__SessionTemplate_1af90d136445339fc3369de2366e3041e7)`(const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & DefaultValue) const` | Gets the value of AutoStartupParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAutoStartupParams`](#structFRHAPI__SessionTemplate_1a5f90db1cd04776e12895fd25d27368ec)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & OutValue) const` | Fills OutValue with the value of AutoStartupParams_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetAutoStartupParamsOrNull`](#structFRHAPI__SessionTemplate_1a0baa24ab4e5a9450c137655a3507f435)`()` | Returns a pointer to AutoStartupParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetAutoStartupParamsOrNull`](#structFRHAPI__SessionTemplate_1a5ad48f1e595259c58d707a3e2d1c982b)`() const` | Returns a pointer to AutoStartupParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAutoStartupParams`](#structFRHAPI__SessionTemplate_1a46aec1212ed99ca69b8fca3cd4ee5a83)`(const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & NewValue)` | Sets the value of AutoStartupParams_Optional and also sets AutoStartupParams_IsSet to true.
`public inline FORCEINLINE void `[`SetAutoStartupParams`](#structFRHAPI__SessionTemplate_1ad996857b2aea8d56433465ab3fbd21bc)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` && NewValue)` | Sets the value of AutoStartupParams_Optional and also sets AutoStartupParams_IsSet to true using move semantics.
`public inline void `[`ClearAutoStartupParams`](#structFRHAPI__SessionTemplate_1a41041ffbd8775231d249554a072116d7)`()` | Clears the value of AutoStartupParams_Optional and sets AutoStartupParams_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1aea8b81b98d394a020ae20672aeb95aab)`()` | Gets the value of AutoStartupInstanceTemplateId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1ab2d4a399c91bb4759c77371e9d108d38)`() const` | Gets the value of AutoStartupInstanceTemplateId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1a198e975fa47a0fbda925f2e7fbef91ea)`(const FGuid & DefaultValue) const` | Gets the value of AutoStartupInstanceTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1a461e3dac24aae35c17e2f2d1ea1e30f2)`(FGuid & OutValue) const` | Fills OutValue with the value of AutoStartupInstanceTemplateId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetAutoStartupInstanceTemplateIdOrNull`](#structFRHAPI__SessionTemplate_1af5d00a4abb101dd7139ef67ce2d2970d)`()` | Returns a pointer to AutoStartupInstanceTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetAutoStartupInstanceTemplateIdOrNull`](#structFRHAPI__SessionTemplate_1a91d3c16866eb84e1b42ed56010951801)`() const` | Returns a pointer to AutoStartupInstanceTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1a3617a9f7634a5e0624ec313513a8eb98)`(const FGuid & NewValue)` | Sets the value of AutoStartupInstanceTemplateId_Optional and also sets AutoStartupInstanceTemplateId_IsSet to true.
`public inline FORCEINLINE void `[`SetAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1ab92fc06d56bd8902d2dfec4389d8706f)`(FGuid && NewValue)` | Sets the value of AutoStartupInstanceTemplateId_Optional and also sets AutoStartupInstanceTemplateId_IsSet to true using move semantics.
`public inline void `[`ClearAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1a34645ae41e39de740fe31869d3e1a64f)`()` | Clears the value of AutoStartupInstanceTemplateId_Optional and sets AutoStartupInstanceTemplateId_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetMinSessionCount`](#structFRHAPI__SessionTemplate_1a9acd1ba31f150beb4c7c737b9d10ef15)`()` | Gets the value of MinSessionCount_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetMinSessionCount`](#structFRHAPI__SessionTemplate_1ae74e7ec57cd00b21a67017eec6aadc43)`() const` | Gets the value of MinSessionCount_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetMinSessionCount`](#structFRHAPI__SessionTemplate_1aec7f041522a7dd854a73164257b5ed09)`(const int32 & DefaultValue) const` | Gets the value of MinSessionCount_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMinSessionCount`](#structFRHAPI__SessionTemplate_1ac185f12671f64683177fcca899615d5e)`(int32 & OutValue) const` | Fills OutValue with the value of MinSessionCount_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetMinSessionCountOrNull`](#structFRHAPI__SessionTemplate_1a60bc5a5da46be7e8b27b2aa7a30a0e74)`()` | Returns a pointer to MinSessionCount_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetMinSessionCountOrNull`](#structFRHAPI__SessionTemplate_1aa5af77dfec9912ae9e31618c6b5690b6)`() const` | Returns a pointer to MinSessionCount_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMinSessionCount`](#structFRHAPI__SessionTemplate_1a3771d9fc21329b85dfe0d403cdcee35e)`(const int32 & NewValue)` | Sets the value of MinSessionCount_Optional and also sets MinSessionCount_IsSet to true.
`public inline FORCEINLINE void `[`SetMinSessionCount`](#structFRHAPI__SessionTemplate_1acf196221359f5983d54027e4384fbb15)`(int32 && NewValue)` | Sets the value of MinSessionCount_Optional and also sets MinSessionCount_IsSet to true using move semantics.
`public inline void `[`ClearMinSessionCount`](#structFRHAPI__SessionTemplate_1a563b899213f0a6ff1e7ab855e18df3a5)`()` | Clears the value of MinSessionCount_Optional and sets MinSessionCount_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_MinSessionCount`](#structFRHAPI__SessionTemplate_1ad624aade05885b41c3fa6805362c9dac)`()` | Returns the default value of MinSessionCount.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTemplate_1abb25629ce92105ec8a5ef2d92f74bb05)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTemplate_1aea2257a612803ceb8a42a5848ceb403b)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTemplate_1a51119dc2b1843056f72a3ec12cc2021f)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__SessionTemplate_1a431e5443a16848db21c0ba36d248aded)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionTemplate_1a8b6c62b2d3c60b4fdcfa64b0808d22fe)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionTemplate_1a8983d2ff99875fcc687a082720a291cb)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SessionTemplate_1a1295fe9efaa5426f6ae1f1a7dbbfe6ea)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SessionTemplate_1afa202eb68ac54d699ab0f5e3910828db)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__SessionTemplate_1ac20b3669d3a9488606e5e2afd59df8f1)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetNumTeams`](#structFRHAPI__SessionTemplate_1aa3754b1980093bb874c72690c98b4ba7)`()` | Gets the value of NumTeams_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetNumTeams`](#structFRHAPI__SessionTemplate_1a5cd635f02f6b7e17e9023b8f38540ee1)`() const` | Gets the value of NumTeams_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetNumTeams`](#structFRHAPI__SessionTemplate_1a4de8b4a93cee7e7be34560550e32d2e3)`(const int32 & DefaultValue) const` | Gets the value of NumTeams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetNumTeams`](#structFRHAPI__SessionTemplate_1a0d6c68ff21682675e9b24c5b8e932c96)`(int32 & OutValue) const` | Fills OutValue with the value of NumTeams_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetNumTeamsOrNull`](#structFRHAPI__SessionTemplate_1a2e3a4a169a557c591e79858ff5681977)`()` | Returns a pointer to NumTeams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetNumTeamsOrNull`](#structFRHAPI__SessionTemplate_1acf0dc00568241387a4e691b8852b4b40)`() const` | Returns a pointer to NumTeams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetNumTeams`](#structFRHAPI__SessionTemplate_1a942a4e0369593f68a54f2e5dfdc23061)`(const int32 & NewValue)` | Sets the value of NumTeams_Optional and also sets NumTeams_IsSet to true.
`public inline FORCEINLINE void `[`SetNumTeams`](#structFRHAPI__SessionTemplate_1a666fafcd9260395ad8c0a5b7b150a262)`(int32 && NewValue)` | Sets the value of NumTeams_Optional and also sets NumTeams_IsSet to true using move semantics.
`public inline void `[`ClearNumTeams`](#structFRHAPI__SessionTemplate_1ab05fd0888c21bacaaab9bd4b0ca92e00)`()` | Clears the value of NumTeams_Optional and sets NumTeams_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_NumTeams`](#structFRHAPI__SessionTemplate_1a3b47622cdbb5121f719654e599fa2e43)`()` | Returns the default value of NumTeams.
`public inline FORCEINLINE int32 & `[`GetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1abf8c6ebf63e193587a351253b5f56ddf)`()` | Gets the value of PlayersPerTeam_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1a9eed4fc945404d8c7d2ba2c58605dcb3)`() const` | Gets the value of PlayersPerTeam_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1abfb0c94fbe0769b079c28dbe0f66a70c)`(const int32 & DefaultValue) const` | Gets the value of PlayersPerTeam_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1a54d2cce04eb8a269eeda8f83097f9109)`(int32 & OutValue) const` | Fills OutValue with the value of PlayersPerTeam_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetPlayersPerTeamOrNull`](#structFRHAPI__SessionTemplate_1a7eb3d1e476afb55f420ead3a4430519b)`()` | Returns a pointer to PlayersPerTeam_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetPlayersPerTeamOrNull`](#structFRHAPI__SessionTemplate_1aba456ef5739b223643496f40060ff1da)`() const` | Returns a pointer to PlayersPerTeam_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1a32e98c662f0f6d9252004fc8e4f70e15)`(const int32 & NewValue)` | Sets the value of PlayersPerTeam_Optional and also sets PlayersPerTeam_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1a91a43d8010dfc7d80c01395bb7f5d4bf)`(int32 && NewValue)` | Sets the value of PlayersPerTeam_Optional and also sets PlayersPerTeam_IsSet to true using move semantics.
`public inline void `[`ClearPlayersPerTeam`](#structFRHAPI__SessionTemplate_1aa2773b8e861aae5dd66d271167b6e2fb)`()` | Clears the value of PlayersPerTeam_Optional and sets PlayersPerTeam_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PlayersPerTeam`](#structFRHAPI__SessionTemplate_1aa3c3ab12f1489599cdc36cd6f2d1df1a)`()` | Returns the default value of PlayersPerTeam.
`public inline FORCEINLINE bool & `[`GetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1aee3a7f16d973823eba140353698af859)`()` | Gets the value of CanChangeOwnTeam_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1a62dd21102e3ff5bb626e828b798875aa)`() const` | Gets the value of CanChangeOwnTeam_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1aefb68a825f61d7a1c899c0c875442d43)`(const bool & DefaultValue) const` | Gets the value of CanChangeOwnTeam_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1ac0d10b1dc245ebd75a5c64306e27eb09)`(bool & OutValue) const` | Fills OutValue with the value of CanChangeOwnTeam_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetCanChangeOwnTeamOrNull`](#structFRHAPI__SessionTemplate_1acb08d6f54280e8d1d1aa3d7327f43ab6)`()` | Returns a pointer to CanChangeOwnTeam_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetCanChangeOwnTeamOrNull`](#structFRHAPI__SessionTemplate_1aad0a8d9ce613b4e5dda3cbbccc5b1aab)`() const` | Returns a pointer to CanChangeOwnTeam_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1aef1c9cfe4716fb95865664a9a1ab5ed5)`(const bool & NewValue)` | Sets the value of CanChangeOwnTeam_Optional and also sets CanChangeOwnTeam_IsSet to true.
`public inline FORCEINLINE void `[`SetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1aa9e9d22298a7fed5255af44a1a5ad616)`(bool && NewValue)` | Sets the value of CanChangeOwnTeam_Optional and also sets CanChangeOwnTeam_IsSet to true using move semantics.
`public inline void `[`ClearCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1a9aa2afa1842ee1cab22a7b1a9a772c08)`()` | Clears the value of CanChangeOwnTeam_Optional and sets CanChangeOwnTeam_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_CanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1ab20bbceeec882c9212587250b1a6a852)`()` | Returns the default value of CanChangeOwnTeam.
`public inline FORCEINLINE bool & `[`GetNotifyOnReservation`](#structFRHAPI__SessionTemplate_1a49763c906e868cb3fb31d57022f9a2ad)`()` | Gets the value of NotifyOnReservation_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetNotifyOnReservation`](#structFRHAPI__SessionTemplate_1ac7d61b1d3e222c9d000dc00037df9d75)`() const` | Gets the value of NotifyOnReservation_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetNotifyOnReservation`](#structFRHAPI__SessionTemplate_1a30adae3818d8268623b924cfccadf4fd)`(const bool & DefaultValue) const` | Gets the value of NotifyOnReservation_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetNotifyOnReservation`](#structFRHAPI__SessionTemplate_1ac7268ab6469ff9aeab835e104563eb9a)`(bool & OutValue) const` | Fills OutValue with the value of NotifyOnReservation_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetNotifyOnReservationOrNull`](#structFRHAPI__SessionTemplate_1a88fa0fdafdb6735b25a0b576d3d3ad23)`()` | Returns a pointer to NotifyOnReservation_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetNotifyOnReservationOrNull`](#structFRHAPI__SessionTemplate_1a868723303e9541996b5d1ebbe400789a)`() const` | Returns a pointer to NotifyOnReservation_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetNotifyOnReservation`](#structFRHAPI__SessionTemplate_1a5370ad4af665ef1167a566c24daa8fcb)`(const bool & NewValue)` | Sets the value of NotifyOnReservation_Optional and also sets NotifyOnReservation_IsSet to true.
`public inline FORCEINLINE void `[`SetNotifyOnReservation`](#structFRHAPI__SessionTemplate_1a74bc3f3269d82a20d4ac6ee17d6d4200)`(bool && NewValue)` | Sets the value of NotifyOnReservation_Optional and also sets NotifyOnReservation_IsSet to true using move semantics.
`public inline void `[`ClearNotifyOnReservation`](#structFRHAPI__SessionTemplate_1a09e9ca121b22271ccc7debde5c98afd1)`()` | Clears the value of NotifyOnReservation_Optional and sets NotifyOnReservation_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_NotifyOnReservation`](#structFRHAPI__SessionTemplate_1a80a1fd21529ef221d32eeb4cf3b12690)`()` | Returns the default value of NotifyOnReservation.
`public inline FORCEINLINE ERHAPI_PlayerVisibility & `[`GetPlayerVisibility`](#structFRHAPI__SessionTemplate_1add1ad84a18bbf0dbe07ca1966d2281fa)`()` | Gets the value of PlayerVisibility_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_PlayerVisibility & `[`GetPlayerVisibility`](#structFRHAPI__SessionTemplate_1a49db53bab3ebcdba0cfc18ffb02c9e26)`() const` | Gets the value of PlayerVisibility_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_PlayerVisibility & `[`GetPlayerVisibility`](#structFRHAPI__SessionTemplate_1ab92442b18130200a93ccd3653c5a7d71)`(const ERHAPI_PlayerVisibility & DefaultValue) const` | Gets the value of PlayerVisibility_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerVisibility`](#structFRHAPI__SessionTemplate_1a950192f39383ee34163eb367fc8ccab1)`(ERHAPI_PlayerVisibility & OutValue) const` | Fills OutValue with the value of PlayerVisibility_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_PlayerVisibility * `[`GetPlayerVisibilityOrNull`](#structFRHAPI__SessionTemplate_1a4f400c300f488afe04a18ca8a98de745)`()` | Returns a pointer to PlayerVisibility_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_PlayerVisibility * `[`GetPlayerVisibilityOrNull`](#structFRHAPI__SessionTemplate_1a3ef6fc251c6d4384b3f9927f6d1dfdb6)`() const` | Returns a pointer to PlayerVisibility_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerVisibility`](#structFRHAPI__SessionTemplate_1a8a1674bfee26e333e5e2abd5fe986ba5)`(const ERHAPI_PlayerVisibility & NewValue)` | Sets the value of PlayerVisibility_Optional and also sets PlayerVisibility_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerVisibility`](#structFRHAPI__SessionTemplate_1a3db2062fa6127eeb273e692fc9f0c1b4)`(ERHAPI_PlayerVisibility && NewValue)` | Sets the value of PlayerVisibility_Optional and also sets PlayerVisibility_IsSet to true using move semantics.
`public inline void `[`ClearPlayerVisibility`](#structFRHAPI__SessionTemplate_1ad9160f33307545c48ba632f454c4332c)`()` | Clears the value of PlayerVisibility_Optional and sets PlayerVisibility_IsSet to false.
`public inline FORCEINLINE ERHAPI_PlayerVisibility & `[`GetAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1aa0a4a4e470764c2bc692d04c29676d89)`()` | Gets the value of AdminPlayerVisibility_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_PlayerVisibility & `[`GetAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1ab0267e65082d4cd69acbd846414292cf)`() const` | Gets the value of AdminPlayerVisibility_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_PlayerVisibility & `[`GetAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1aa9767e9efa53b5f2988f82ddb1a08783)`(const ERHAPI_PlayerVisibility & DefaultValue) const` | Gets the value of AdminPlayerVisibility_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1a29da66d255894880dbd005fdd8da6a59)`(ERHAPI_PlayerVisibility & OutValue) const` | Fills OutValue with the value of AdminPlayerVisibility_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_PlayerVisibility * `[`GetAdminPlayerVisibilityOrNull`](#structFRHAPI__SessionTemplate_1a87529358dec566a3d730dbe907f6c181)`()` | Returns a pointer to AdminPlayerVisibility_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_PlayerVisibility * `[`GetAdminPlayerVisibilityOrNull`](#structFRHAPI__SessionTemplate_1a8561a2b5bf1cc1ed8d5022a0ce6fa76c)`() const` | Returns a pointer to AdminPlayerVisibility_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1a11427938d35be0ddc636822ef1e6d9c2)`(const ERHAPI_PlayerVisibility & NewValue)` | Sets the value of AdminPlayerVisibility_Optional and also sets AdminPlayerVisibility_IsSet to true.
`public inline FORCEINLINE void `[`SetAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1af598a4a468e6ecd69d951ab0c89de2f9)`(ERHAPI_PlayerVisibility && NewValue)` | Sets the value of AdminPlayerVisibility_Optional and also sets AdminPlayerVisibility_IsSet to true using move semantics.
`public inline void `[`ClearAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1a1ed525f8085823e6ac6ae445ba9932e5)`()` | Clears the value of AdminPlayerVisibility_Optional and sets AdminPlayerVisibility_IsSet to false.
`public inline FORCEINLINE ERHAPI_PlayerVisibility & `[`GetPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1aaf515b9497aefde0d11cfe28ed82b4b0)`()` | Gets the value of PlayerNotificationFrequency_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_PlayerVisibility & `[`GetPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a21e50ee7bf053e700a2840587580541f)`() const` | Gets the value of PlayerNotificationFrequency_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_PlayerVisibility & `[`GetPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1af3a62df60f30b93df92bc25fbcd6aba7)`(const ERHAPI_PlayerVisibility & DefaultValue) const` | Gets the value of PlayerNotificationFrequency_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1aa8e680661377777c62b883b1d53341a2)`(ERHAPI_PlayerVisibility & OutValue) const` | Fills OutValue with the value of PlayerNotificationFrequency_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_PlayerVisibility * `[`GetPlayerNotificationFrequencyOrNull`](#structFRHAPI__SessionTemplate_1ac9bc03bb67c5a079e8e63b0fcbf81f9b)`()` | Returns a pointer to PlayerNotificationFrequency_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_PlayerVisibility * `[`GetPlayerNotificationFrequencyOrNull`](#structFRHAPI__SessionTemplate_1a72bdaddf9ff8de858ed72640439b7c93)`() const` | Returns a pointer to PlayerNotificationFrequency_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1aa024e413dd939c15c7c9a97bf60e4c2a)`(const ERHAPI_PlayerVisibility & NewValue)` | Sets the value of PlayerNotificationFrequency_Optional and also sets PlayerNotificationFrequency_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a7f639600e007321a7a9e1a0906cdce75)`(ERHAPI_PlayerVisibility && NewValue)` | Sets the value of PlayerNotificationFrequency_Optional and also sets PlayerNotificationFrequency_IsSet to true using move semantics.
`public inline void `[`ClearPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a9e283ac577d19794a939f946ac98642d)`()` | Clears the value of PlayerNotificationFrequency_Optional and sets PlayerNotificationFrequency_IsSet to false.
`public inline FORCEINLINE ERHAPI_PlayerVisibility & `[`GetAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1aa9a83b38faaca1f36eb57c2ec0a5e31b)`()` | Gets the value of AdminPlayerNotificationFrequency_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_PlayerVisibility & `[`GetAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a90e91cebbf5279dd6636d398c7dc64fb)`() const` | Gets the value of AdminPlayerNotificationFrequency_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_PlayerVisibility & `[`GetAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a772634c05366c4d397dfae6f1b0e28eb)`(const ERHAPI_PlayerVisibility & DefaultValue) const` | Gets the value of AdminPlayerNotificationFrequency_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a71e18e3fd572269c86e6966be6ff0e26)`(ERHAPI_PlayerVisibility & OutValue) const` | Fills OutValue with the value of AdminPlayerNotificationFrequency_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_PlayerVisibility * `[`GetAdminPlayerNotificationFrequencyOrNull`](#structFRHAPI__SessionTemplate_1a7ef2821dabf7b5b5535ee25bb40c1cbe)`()` | Returns a pointer to AdminPlayerNotificationFrequency_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_PlayerVisibility * `[`GetAdminPlayerNotificationFrequencyOrNull`](#structFRHAPI__SessionTemplate_1ab311de27ac3c478caaa585c65e143fa3)`() const` | Returns a pointer to AdminPlayerNotificationFrequency_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a9007ef486f2a99b9cef831e1f096bef3)`(const ERHAPI_PlayerVisibility & NewValue)` | Sets the value of AdminPlayerNotificationFrequency_Optional and also sets AdminPlayerNotificationFrequency_IsSet to true.
`public inline FORCEINLINE void `[`SetAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1aee29721da293aeab583a02313a1fc7f8)`(ERHAPI_PlayerVisibility && NewValue)` | Sets the value of AdminPlayerNotificationFrequency_Optional and also sets AdminPlayerNotificationFrequency_IsSet to true using move semantics.
`public inline void `[`ClearAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1aed149547b3e1c182e446b8fce5b7d5f6)`()` | Clears the value of AdminPlayerNotificationFrequency_Optional and sets AdminPlayerNotificationFrequency_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1a1bdf55d69087550a2c18f9d3eb09922e)`()` | Gets the value of PlayerCullingTimeout_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1a64acbdba1c431022c242c06b89df6b0c)`() const` | Gets the value of PlayerCullingTimeout_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1ab785a9e10c22c15698e0a0f1d1560176)`(const int32 & DefaultValue) const` | Gets the value of PlayerCullingTimeout_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1a41cfa46e5d697ca8bb51eb6ed06f54a0)`(int32 & OutValue) const` | Fills OutValue with the value of PlayerCullingTimeout_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetPlayerCullingTimeoutOrNull`](#structFRHAPI__SessionTemplate_1ad05be041e9f214e783a07ac5be178614)`()` | Returns a pointer to PlayerCullingTimeout_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetPlayerCullingTimeoutOrNull`](#structFRHAPI__SessionTemplate_1ac2748618d4c423a4b93d5eb9f4de0fa1)`() const` | Returns a pointer to PlayerCullingTimeout_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1ae9e39b6c75f4414c18ce29969c89e8ac)`(const int32 & NewValue)` | Sets the value of PlayerCullingTimeout_Optional and also sets PlayerCullingTimeout_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1a5b12fb22f29d578a692fcdfee21ff0f9)`(int32 && NewValue)` | Sets the value of PlayerCullingTimeout_Optional and also sets PlayerCullingTimeout_IsSet to true using move semantics.
`public inline void `[`ClearPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1ac5f91d7657a5e7cae9199856318f4337)`()` | Clears the value of PlayerCullingTimeout_Optional and sets PlayerCullingTimeout_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1a75695811ed5b8a52c5718609c83bcbf1)`()` | Returns the default value of PlayerCullingTimeout.

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

#### `public inline FORCEINLINE FString & `[`GetSessionType`](#structFRHAPI__SessionTemplate_1a75dfd31ba192bb89bb1d679c0097822b)`()` <a id="structFRHAPI__SessionTemplate_1a75dfd31ba192bb89bb1d679c0097822b"></a>

Gets the value of SessionType.

#### `public inline FORCEINLINE const FString & `[`GetSessionType`](#structFRHAPI__SessionTemplate_1aa5fe5a3106adac2dacc5fc7c3add336b)`() const` <a id="structFRHAPI__SessionTemplate_1aa5fe5a3106adac2dacc5fc7c3add336b"></a>

Gets the value of SessionType.

#### `public inline FORCEINLINE void `[`SetSessionType`](#structFRHAPI__SessionTemplate_1aceb42a8362b4189feaf2c5efee30b481)`(const FString & NewValue)` <a id="structFRHAPI__SessionTemplate_1aceb42a8362b4189feaf2c5efee30b481"></a>

Sets the value of SessionType.

#### `public inline FORCEINLINE void `[`SetSessionType`](#structFRHAPI__SessionTemplate_1ab0c6bb52e998b27b6fc0b3b43441de53)`(FString && NewValue)` <a id="structFRHAPI__SessionTemplate_1ab0c6bb52e998b27b6fc0b3b43441de53"></a>

Sets the value of SessionType using move semantics.

#### `public inline FORCEINLINE FString & `[`GetEngineSessionType`](#structFRHAPI__SessionTemplate_1af201ffb7973c3c526ceb18ae76e8a6dd)`()` <a id="structFRHAPI__SessionTemplate_1af201ffb7973c3c526ceb18ae76e8a6dd"></a>

Gets the value of EngineSessionType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetEngineSessionType`](#structFRHAPI__SessionTemplate_1a3237613110ad2e49f03c8452af203d9a)`() const` <a id="structFRHAPI__SessionTemplate_1a3237613110ad2e49f03c8452af203d9a"></a>

Gets the value of EngineSessionType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetEngineSessionType`](#structFRHAPI__SessionTemplate_1a6086c174a2f4c86bef007da0cbae53bd)`(const FString & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a6086c174a2f4c86bef007da0cbae53bd"></a>

Gets the value of EngineSessionType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEngineSessionType`](#structFRHAPI__SessionTemplate_1a1528c559d0a9a55d5673b8beea281e97)`(FString & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a1528c559d0a9a55d5673b8beea281e97"></a>

Fills OutValue with the value of EngineSessionType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetEngineSessionTypeOrNull`](#structFRHAPI__SessionTemplate_1a4fecdafbf7d351cee4388abb1f2e29d1)`()` <a id="structFRHAPI__SessionTemplate_1a4fecdafbf7d351cee4388abb1f2e29d1"></a>

Returns a pointer to EngineSessionType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetEngineSessionTypeOrNull`](#structFRHAPI__SessionTemplate_1a0cc539d55777b8b916862f7e726d49f5)`() const` <a id="structFRHAPI__SessionTemplate_1a0cc539d55777b8b916862f7e726d49f5"></a>

Returns a pointer to EngineSessionType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEngineSessionType`](#structFRHAPI__SessionTemplate_1afe357861b8a8c0966ba0897b1c656b20)`(const FString & NewValue)` <a id="structFRHAPI__SessionTemplate_1afe357861b8a8c0966ba0897b1c656b20"></a>

Sets the value of EngineSessionType_Optional and also sets EngineSessionType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEngineSessionType`](#structFRHAPI__SessionTemplate_1a4b5d222c4e86a096167bf832e78c3a40)`(FString && NewValue)` <a id="structFRHAPI__SessionTemplate_1a4b5d222c4e86a096167bf832e78c3a40"></a>

Sets the value of EngineSessionType_Optional and also sets EngineSessionType_IsSet to true using move semantics.

#### `public inline void `[`ClearEngineSessionType`](#structFRHAPI__SessionTemplate_1a49cf645ee28f75e34b7e82a375b0b7a0)`()` <a id="structFRHAPI__SessionTemplate_1a49cf645ee28f75e34b7e82a375b0b7a0"></a>

Clears the value of EngineSessionType_Optional and sets EngineSessionType_IsSet to false.

#### `public inline FORCEINLINE FString `[`GetDefaultValue_EngineSessionType`](#structFRHAPI__SessionTemplate_1a00cfa3a930a0f1078fa762ed0af4c726)`()` <a id="structFRHAPI__SessionTemplate_1a00cfa3a930a0f1078fa762ed0af4c726"></a>

Returns the default value of EngineSessionType.

#### `public inline FORCEINLINE bool & `[`GetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1a64d2faf9a66b4e1be4a646a873aba57d)`()` <a id="structFRHAPI__SessionTemplate_1a64d2faf9a66b4e1be4a646a873aba57d"></a>

Gets the value of CanJoinMatchmaking_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1ae2115c41541e2d31b5e5feb02e1b70f4)`() const` <a id="structFRHAPI__SessionTemplate_1ae2115c41541e2d31b5e5feb02e1b70f4"></a>

Gets the value of CanJoinMatchmaking_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1ab2f684352538ba2ca9a1965abff904f4)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1ab2f684352538ba2ca9a1965abff904f4"></a>

Gets the value of CanJoinMatchmaking_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1a006dfdeea266a03f21a3cafad4fa27a6)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a006dfdeea266a03f21a3cafad4fa27a6"></a>

Fills OutValue with the value of CanJoinMatchmaking_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetCanJoinMatchmakingOrNull`](#structFRHAPI__SessionTemplate_1a4994b7c724f972e4b2d4b1b49dbaefbe)`()` <a id="structFRHAPI__SessionTemplate_1a4994b7c724f972e4b2d4b1b49dbaefbe"></a>

Returns a pointer to CanJoinMatchmaking_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetCanJoinMatchmakingOrNull`](#structFRHAPI__SessionTemplate_1abcd86c9845a8edfee581c0e6bc56ac55)`() const` <a id="structFRHAPI__SessionTemplate_1abcd86c9845a8edfee581c0e6bc56ac55"></a>

Returns a pointer to CanJoinMatchmaking_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1a570ab01fba703f992b55b817ebcc2b26)`(const bool & NewValue)` <a id="structFRHAPI__SessionTemplate_1a570ab01fba703f992b55b817ebcc2b26"></a>

Sets the value of CanJoinMatchmaking_Optional and also sets CanJoinMatchmaking_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1a644fa64cd53ac4a84d203b5990a181d9)`(bool && NewValue)` <a id="structFRHAPI__SessionTemplate_1a644fa64cd53ac4a84d203b5990a181d9"></a>

Sets the value of CanJoinMatchmaking_Optional and also sets CanJoinMatchmaking_IsSet to true using move semantics.

#### `public inline void `[`ClearCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1aea8827859a78eea75ccb378ae6d34536)`()` <a id="structFRHAPI__SessionTemplate_1aea8827859a78eea75ccb378ae6d34536"></a>

Clears the value of CanJoinMatchmaking_Optional and sets CanJoinMatchmaking_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_CanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1a35e30a1e228c30714f6619b8a9392111)`()` <a id="structFRHAPI__SessionTemplate_1a35e30a1e228c30714f6619b8a9392111"></a>

Returns the default value of CanJoinMatchmaking.

#### `public inline FORCEINLINE bool & `[`GetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1a85827330d0d782c65b226cd3f9f08a03)`()` <a id="structFRHAPI__SessionTemplate_1a85827330d0d782c65b226cd3f9f08a03"></a>

Gets the value of CanBeCreatedByPlayersDirectly_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1a79d34dfc7e00d818b1456108f8b113ad)`() const` <a id="structFRHAPI__SessionTemplate_1a79d34dfc7e00d818b1456108f8b113ad"></a>

Gets the value of CanBeCreatedByPlayersDirectly_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1ad3338aa7e9cdb285b322597c3874a2ea)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1ad3338aa7e9cdb285b322597c3874a2ea"></a>

Gets the value of CanBeCreatedByPlayersDirectly_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1a0415c5fada8798829c011a196ed6baca)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a0415c5fada8798829c011a196ed6baca"></a>

Fills OutValue with the value of CanBeCreatedByPlayersDirectly_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetCanBeCreatedByPlayersDirectlyOrNull`](#structFRHAPI__SessionTemplate_1a270be6d1bd34146e5c743da283d5dd78)`()` <a id="structFRHAPI__SessionTemplate_1a270be6d1bd34146e5c743da283d5dd78"></a>

Returns a pointer to CanBeCreatedByPlayersDirectly_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetCanBeCreatedByPlayersDirectlyOrNull`](#structFRHAPI__SessionTemplate_1ae01b2275e8578277907077c24bcd0c36)`() const` <a id="structFRHAPI__SessionTemplate_1ae01b2275e8578277907077c24bcd0c36"></a>

Returns a pointer to CanBeCreatedByPlayersDirectly_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1a85942c189be6aaec82e3d306af26c034)`(const bool & NewValue)` <a id="structFRHAPI__SessionTemplate_1a85942c189be6aaec82e3d306af26c034"></a>

Sets the value of CanBeCreatedByPlayersDirectly_Optional and also sets CanBeCreatedByPlayersDirectly_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1aadd6b81b0924b94ced1f7cd462f40c74)`(bool && NewValue)` <a id="structFRHAPI__SessionTemplate_1aadd6b81b0924b94ced1f7cd462f40c74"></a>

Sets the value of CanBeCreatedByPlayersDirectly_Optional and also sets CanBeCreatedByPlayersDirectly_IsSet to true using move semantics.

#### `public inline void `[`ClearCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1aeeead6ecb3330ef0ab4e0d0f1d51be6f)`()` <a id="structFRHAPI__SessionTemplate_1aeeead6ecb3330ef0ab4e0d0f1d51be6f"></a>

Clears the value of CanBeCreatedByPlayersDirectly_Optional and sets CanBeCreatedByPlayersDirectly_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_CanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1a3b12246dc014ad72bca73d9b62f759b0)`()` <a id="structFRHAPI__SessionTemplate_1a3b12246dc014ad72bca73d9b62f759b0"></a>

Returns the default value of CanBeCreatedByPlayersDirectly.

#### `public inline FORCEINLINE bool & `[`GetJoinable`](#structFRHAPI__SessionTemplate_1a3a330a72ee753ea50d65ea1198834c64)`()` <a id="structFRHAPI__SessionTemplate_1a3a330a72ee753ea50d65ea1198834c64"></a>

Gets the value of Joinable_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetJoinable`](#structFRHAPI__SessionTemplate_1aada2c5b06de6f9df94669aa6bc3320c6)`() const` <a id="structFRHAPI__SessionTemplate_1aada2c5b06de6f9df94669aa6bc3320c6"></a>

Gets the value of Joinable_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetJoinable`](#structFRHAPI__SessionTemplate_1acecf08fb4184a8d4291ebb98ab057054)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1acecf08fb4184a8d4291ebb98ab057054"></a>

Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetJoinable`](#structFRHAPI__SessionTemplate_1a6192788aa33db2048bfda5a851f6dbb4)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a6192788aa33db2048bfda5a851f6dbb4"></a>

Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetJoinableOrNull`](#structFRHAPI__SessionTemplate_1a8da8e890b1fe28561f7c15a014e0d22d)`()` <a id="structFRHAPI__SessionTemplate_1a8da8e890b1fe28561f7c15a014e0d22d"></a>

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetJoinableOrNull`](#structFRHAPI__SessionTemplate_1a3ba9744bb5884d6a10282163c26d4151)`() const` <a id="structFRHAPI__SessionTemplate_1a3ba9744bb5884d6a10282163c26d4151"></a>

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetJoinable`](#structFRHAPI__SessionTemplate_1a3497bafad0631b04e1f68c25d8895012)`(const bool & NewValue)` <a id="structFRHAPI__SessionTemplate_1a3497bafad0631b04e1f68c25d8895012"></a>

Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.

#### `public inline FORCEINLINE void `[`SetJoinable`](#structFRHAPI__SessionTemplate_1a366be00a8a0eb91d7c2315c9004f4ee4)`(bool && NewValue)` <a id="structFRHAPI__SessionTemplate_1a366be00a8a0eb91d7c2315c9004f4ee4"></a>

Sets the value of Joinable_Optional and also sets Joinable_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinable`](#structFRHAPI__SessionTemplate_1a2656215bcf0eb51c71fed328166e6b68)`()` <a id="structFRHAPI__SessionTemplate_1a2656215bcf0eb51c71fed328166e6b68"></a>

Clears the value of Joinable_Optional and sets Joinable_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_Joinable`](#structFRHAPI__SessionTemplate_1aa778c187f2b993a9386fcbf2731f4756)`()` <a id="structFRHAPI__SessionTemplate_1aa778c187f2b993a9386fcbf2731f4756"></a>

Returns the default value of Joinable.

#### `public inline FORCEINLINE bool & `[`GetAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1a463788985f89c48ea6367c1621779491)`()` <a id="structFRHAPI__SessionTemplate_1a463788985f89c48ea6367c1621779491"></a>

Gets the value of AttemptAutoJoin_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1a7d1b388208046209b4d7b3ec03acb622)`() const` <a id="structFRHAPI__SessionTemplate_1a7d1b388208046209b4d7b3ec03acb622"></a>

Gets the value of AttemptAutoJoin_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1acc677a648c531e5bfad6aef7545e5394)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1acc677a648c531e5bfad6aef7545e5394"></a>

Gets the value of AttemptAutoJoin_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1a7b6869ff41b7f89c605d3452b607fcff)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a7b6869ff41b7f89c605d3452b607fcff"></a>

Fills OutValue with the value of AttemptAutoJoin_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetAttemptAutoJoinOrNull`](#structFRHAPI__SessionTemplate_1a27f7dbf7030bc534465bdbda2c2bd199)`()` <a id="structFRHAPI__SessionTemplate_1a27f7dbf7030bc534465bdbda2c2bd199"></a>

Returns a pointer to AttemptAutoJoin_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetAttemptAutoJoinOrNull`](#structFRHAPI__SessionTemplate_1a41fcca59d95c22fd82ac2a39157faba5)`() const` <a id="structFRHAPI__SessionTemplate_1a41fcca59d95c22fd82ac2a39157faba5"></a>

Returns a pointer to AttemptAutoJoin_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1a686e6bc703f7f02474f5452f39e09cc6)`(const bool & NewValue)` <a id="structFRHAPI__SessionTemplate_1a686e6bc703f7f02474f5452f39e09cc6"></a>

Sets the value of AttemptAutoJoin_Optional and also sets AttemptAutoJoin_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1ad07bf4d3807d4f42f93248c2e70145eb)`(bool && NewValue)` <a id="structFRHAPI__SessionTemplate_1ad07bf4d3807d4f42f93248c2e70145eb"></a>

Sets the value of AttemptAutoJoin_Optional and also sets AttemptAutoJoin_IsSet to true using move semantics.

#### `public inline void `[`ClearAttemptAutoJoin`](#structFRHAPI__SessionTemplate_1af01c65d9412c08982e1d810d821508e6)`()` <a id="structFRHAPI__SessionTemplate_1af01c65d9412c08982e1d810d821508e6"></a>

Clears the value of AttemptAutoJoin_Optional and sets AttemptAutoJoin_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_AttemptAutoJoin`](#structFRHAPI__SessionTemplate_1a62d48e217a42ee8276ad536e3e905a8b)`()` <a id="structFRHAPI__SessionTemplate_1a62d48e217a42ee8276ad536e3e905a8b"></a>

Returns the default value of AttemptAutoJoin.

#### `public inline FORCEINLINE bool & `[`GetDefaultPublic`](#structFRHAPI__SessionTemplate_1afa14ebc2e6f34bee3a313d86725ebd2a)`()` <a id="structFRHAPI__SessionTemplate_1afa14ebc2e6f34bee3a313d86725ebd2a"></a>

Gets the value of DefaultPublic_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetDefaultPublic`](#structFRHAPI__SessionTemplate_1a2166f6de43c3be6ffeca5f591b884e10)`() const` <a id="structFRHAPI__SessionTemplate_1a2166f6de43c3be6ffeca5f591b884e10"></a>

Gets the value of DefaultPublic_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetDefaultPublic`](#structFRHAPI__SessionTemplate_1afe82d34a56ce14cf675c7c19e8ca8f63)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1afe82d34a56ce14cf675c7c19e8ca8f63"></a>

Gets the value of DefaultPublic_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDefaultPublic`](#structFRHAPI__SessionTemplate_1af67765bcd3ed4658364236b9f948460b)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1af67765bcd3ed4658364236b9f948460b"></a>

Fills OutValue with the value of DefaultPublic_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetDefaultPublicOrNull`](#structFRHAPI__SessionTemplate_1aec79fb6b37c7ef582f2118c4d964c5bc)`()` <a id="structFRHAPI__SessionTemplate_1aec79fb6b37c7ef582f2118c4d964c5bc"></a>

Returns a pointer to DefaultPublic_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetDefaultPublicOrNull`](#structFRHAPI__SessionTemplate_1a2b9d31ccfc1dbe69b8771c655275fe87)`() const` <a id="structFRHAPI__SessionTemplate_1a2b9d31ccfc1dbe69b8771c655275fe87"></a>

Returns a pointer to DefaultPublic_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDefaultPublic`](#structFRHAPI__SessionTemplate_1aa4684f0d2457421cda62948ce5a8eb92)`(const bool & NewValue)` <a id="structFRHAPI__SessionTemplate_1aa4684f0d2457421cda62948ce5a8eb92"></a>

Sets the value of DefaultPublic_Optional and also sets DefaultPublic_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDefaultPublic`](#structFRHAPI__SessionTemplate_1aaccf0b3db709cb269661f2fe418f4914)`(bool && NewValue)` <a id="structFRHAPI__SessionTemplate_1aaccf0b3db709cb269661f2fe418f4914"></a>

Sets the value of DefaultPublic_Optional and also sets DefaultPublic_IsSet to true using move semantics.

#### `public inline void `[`ClearDefaultPublic`](#structFRHAPI__SessionTemplate_1a0b7ec628161b7d1a8317204875d476e5)`()` <a id="structFRHAPI__SessionTemplate_1a0b7ec628161b7d1a8317204875d476e5"></a>

Clears the value of DefaultPublic_Optional and sets DefaultPublic_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_DefaultPublic`](#structFRHAPI__SessionTemplate_1a915a7d05d3ef5ccab584f000445fc596)`()` <a id="structFRHAPI__SessionTemplate_1a915a7d05d3ef5ccab584f000445fc596"></a>

Returns the default value of DefaultPublic.

#### `public inline FORCEINLINE bool & `[`GetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1a3e49a409d879151cbf93970e6e350694)`()` <a id="structFRHAPI__SessionTemplate_1a3e49a409d879151cbf93970e6e350694"></a>

Gets the value of AutoAddToBrowser_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1a2d5c75eabbc30bbcc81ed33be0f2033b)`() const` <a id="structFRHAPI__SessionTemplate_1a2d5c75eabbc30bbcc81ed33be0f2033b"></a>

Gets the value of AutoAddToBrowser_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1a653664d05e5cdcf55dc4c8dc45a1a472)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a653664d05e5cdcf55dc4c8dc45a1a472"></a>

Gets the value of AutoAddToBrowser_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1a07eb4d00159c73687fc5bc5c49153942)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a07eb4d00159c73687fc5bc5c49153942"></a>

Fills OutValue with the value of AutoAddToBrowser_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetAutoAddToBrowserOrNull`](#structFRHAPI__SessionTemplate_1aef11b2e875d64ccd9a39a4ea21cc2d03)`()` <a id="structFRHAPI__SessionTemplate_1aef11b2e875d64ccd9a39a4ea21cc2d03"></a>

Returns a pointer to AutoAddToBrowser_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetAutoAddToBrowserOrNull`](#structFRHAPI__SessionTemplate_1a619bfc881958e68b63d1d7865ad66255)`() const` <a id="structFRHAPI__SessionTemplate_1a619bfc881958e68b63d1d7865ad66255"></a>

Returns a pointer to AutoAddToBrowser_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1a0f75edb1c3ba442adfbed409fa934e7c)`(const bool & NewValue)` <a id="structFRHAPI__SessionTemplate_1a0f75edb1c3ba442adfbed409fa934e7c"></a>

Sets the value of AutoAddToBrowser_Optional and also sets AutoAddToBrowser_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1a70088786a12a5f8a0c498af5ff0efe75)`(bool && NewValue)` <a id="structFRHAPI__SessionTemplate_1a70088786a12a5f8a0c498af5ff0efe75"></a>

Sets the value of AutoAddToBrowser_Optional and also sets AutoAddToBrowser_IsSet to true using move semantics.

#### `public inline void `[`ClearAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1ae71defa87a1bc92560786421ece26aa0)`()` <a id="structFRHAPI__SessionTemplate_1ae71defa87a1bc92560786421ece26aa0"></a>

Clears the value of AutoAddToBrowser_Optional and sets AutoAddToBrowser_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_AutoAddToBrowser`](#structFRHAPI__SessionTemplate_1a6b7806543f412eb9fbaea62b7fc0e26f)`()` <a id="structFRHAPI__SessionTemplate_1a6b7806543f412eb9fbaea62b7fc0e26f"></a>

Returns the default value of AutoAddToBrowser.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1a54aa6ea8d0962d2126be0f18ad6fad05)`()` <a id="structFRHAPI__SessionTemplate_1a54aa6ea8d0962d2126be0f18ad6fad05"></a>

Gets the value of AutoBrowserParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1a569ff5996db7bc783aa17992fbaf6da1)`() const` <a id="structFRHAPI__SessionTemplate_1a569ff5996db7bc783aa17992fbaf6da1"></a>

Gets the value of AutoBrowserParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1ac84fb4a7e1050ad7abf23346cf4e903a)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1ac84fb4a7e1050ad7abf23346cf4e903a"></a>

Gets the value of AutoBrowserParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1a58558ace9ca0098f6405046b69df3ace)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a58558ace9ca0098f6405046b69df3ace"></a>

Fills OutValue with the value of AutoBrowserParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetAutoBrowserParamsOrNull`](#structFRHAPI__SessionTemplate_1acdde865416352a141afbf80bb0398210)`()` <a id="structFRHAPI__SessionTemplate_1acdde865416352a141afbf80bb0398210"></a>

Returns a pointer to AutoBrowserParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetAutoBrowserParamsOrNull`](#structFRHAPI__SessionTemplate_1a25bd38bd8640e5fce5ae401c86f11207)`() const` <a id="structFRHAPI__SessionTemplate_1a25bd38bd8640e5fce5ae401c86f11207"></a>

Returns a pointer to AutoBrowserParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1ad4350ef9f0074f789eb5a8d59c399e65)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__SessionTemplate_1ad4350ef9f0074f789eb5a8d59c399e65"></a>

Sets the value of AutoBrowserParams_Optional and also sets AutoBrowserParams_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1a9e8996d44e8bd8b77e1bb531a56993d6)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__SessionTemplate_1a9e8996d44e8bd8b77e1bb531a56993d6"></a>

Sets the value of AutoBrowserParams_Optional and also sets AutoBrowserParams_IsSet to true using move semantics.

#### `public inline void `[`ClearAutoBrowserParams`](#structFRHAPI__SessionTemplate_1afc6ccbb82066817f3e22ad01730802db)`()` <a id="structFRHAPI__SessionTemplate_1afc6ccbb82066817f3e22ad01730802db"></a>

Clears the value of AutoBrowserParams_Optional and sets AutoBrowserParams_IsSet to false.

#### `public inline FORCEINLINE bool & `[`GetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1a7f14e559fc6d58bbdd5f59c2cbadf0a2)`()` <a id="structFRHAPI__SessionTemplate_1a7f14e559fc6d58bbdd5f59c2cbadf0a2"></a>

Gets the value of CanBeAddedToServerBrowser_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1a581bf78e925663382aebb4ae057ec782)`() const` <a id="structFRHAPI__SessionTemplate_1a581bf78e925663382aebb4ae057ec782"></a>

Gets the value of CanBeAddedToServerBrowser_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1a629699aae557c0f5e5876a7a99e4c24f)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a629699aae557c0f5e5876a7a99e4c24f"></a>

Gets the value of CanBeAddedToServerBrowser_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1a41f7dc5bfe55e205bef58e7a2dbdfa32)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a41f7dc5bfe55e205bef58e7a2dbdfa32"></a>

Fills OutValue with the value of CanBeAddedToServerBrowser_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetCanBeAddedToServerBrowserOrNull`](#structFRHAPI__SessionTemplate_1a2b87f36612a331a89bf17f8c93a5b060)`()` <a id="structFRHAPI__SessionTemplate_1a2b87f36612a331a89bf17f8c93a5b060"></a>

Returns a pointer to CanBeAddedToServerBrowser_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetCanBeAddedToServerBrowserOrNull`](#structFRHAPI__SessionTemplate_1aece56863c0c6293cc6ba84ee7abc2ded)`() const` <a id="structFRHAPI__SessionTemplate_1aece56863c0c6293cc6ba84ee7abc2ded"></a>

Returns a pointer to CanBeAddedToServerBrowser_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1a39a51ad19785d49e24aa8c452c89a1ab)`(const bool & NewValue)` <a id="structFRHAPI__SessionTemplate_1a39a51ad19785d49e24aa8c452c89a1ab"></a>

Sets the value of CanBeAddedToServerBrowser_Optional and also sets CanBeAddedToServerBrowser_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1a49ac38a51c0dd275e3ec8234cd82dba9)`(bool && NewValue)` <a id="structFRHAPI__SessionTemplate_1a49ac38a51c0dd275e3ec8234cd82dba9"></a>

Sets the value of CanBeAddedToServerBrowser_Optional and also sets CanBeAddedToServerBrowser_IsSet to true using move semantics.

#### `public inline void `[`ClearCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1a23f4b3075ad5c6cf66442b7fb9ff4731)`()` <a id="structFRHAPI__SessionTemplate_1a23f4b3075ad5c6cf66442b7fb9ff4731"></a>

Clears the value of CanBeAddedToServerBrowser_Optional and sets CanBeAddedToServerBrowser_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_CanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1a74fb9716fddae21fb194df7fce9b5b17)`()` <a id="structFRHAPI__SessionTemplate_1a74fb9716fddae21fb194df7fce9b5b17"></a>

Returns the default value of CanBeAddedToServerBrowser.

#### `public inline FORCEINLINE bool & `[`GetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a879b144cd4aef336c79e3424df340a4f)`()` <a id="structFRHAPI__SessionTemplate_1a879b144cd4aef336c79e3424df340a4f"></a>

Gets the value of KeepAliveOnEmpty_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1ac05f99b597707e4110d27f56dfed5528)`() const` <a id="structFRHAPI__SessionTemplate_1ac05f99b597707e4110d27f56dfed5528"></a>

Gets the value of KeepAliveOnEmpty_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a99db29ba4320d64bae99aded3c305534)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a99db29ba4320d64bae99aded3c305534"></a>

Gets the value of KeepAliveOnEmpty_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1aa49adb157d419466f8bbb5d440479c3d)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1aa49adb157d419466f8bbb5d440479c3d"></a>

Fills OutValue with the value of KeepAliveOnEmpty_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetKeepAliveOnEmptyOrNull`](#structFRHAPI__SessionTemplate_1a9fa74f56f30e7268fccedad10da156c6)`()` <a id="structFRHAPI__SessionTemplate_1a9fa74f56f30e7268fccedad10da156c6"></a>

Returns a pointer to KeepAliveOnEmpty_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetKeepAliveOnEmptyOrNull`](#structFRHAPI__SessionTemplate_1ae744b78afe0b4539a391a8f4924c3db5)`() const` <a id="structFRHAPI__SessionTemplate_1ae744b78afe0b4539a391a8f4924c3db5"></a>

Returns a pointer to KeepAliveOnEmpty_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1af3a1ebab6420e4eb8fc259168cb3f5f4)`(const bool & NewValue)` <a id="structFRHAPI__SessionTemplate_1af3a1ebab6420e4eb8fc259168cb3f5f4"></a>

Sets the value of KeepAliveOnEmpty_Optional and also sets KeepAliveOnEmpty_IsSet to true.

#### `public inline FORCEINLINE void `[`SetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a3919681832cab47999d46cd1cf059e4e)`(bool && NewValue)` <a id="structFRHAPI__SessionTemplate_1a3919681832cab47999d46cd1cf059e4e"></a>

Sets the value of KeepAliveOnEmpty_Optional and also sets KeepAliveOnEmpty_IsSet to true using move semantics.

#### `public inline void `[`ClearKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a296512654f450ed319f63f8b648c53b8)`()` <a id="structFRHAPI__SessionTemplate_1a296512654f450ed319f63f8b648c53b8"></a>

Clears the value of KeepAliveOnEmpty_Optional and sets KeepAliveOnEmpty_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_KeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a9be2e9e8c8a36ef99ef0715eb2c7232c)`()` <a id="structFRHAPI__SessionTemplate_1a9be2e9e8c8a36ef99ef0715eb2c7232c"></a>

Returns the default value of KeepAliveOnEmpty.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & `[`GetPlatformTemplates`](#structFRHAPI__SessionTemplate_1a36d7a0ab9958e3c311dfe494c1d9bf6f)`()` <a id="structFRHAPI__SessionTemplate_1a36d7a0ab9958e3c311dfe494c1d9bf6f"></a>

Gets the value of PlatformTemplates_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & `[`GetPlatformTemplates`](#structFRHAPI__SessionTemplate_1a68b501be1b2309fef017098a8e5600be)`() const` <a id="structFRHAPI__SessionTemplate_1a68b501be1b2309fef017098a8e5600be"></a>

Gets the value of PlatformTemplates_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & `[`GetPlatformTemplates`](#structFRHAPI__SessionTemplate_1a200ce4fa8791a415470dc0e7b0c7854c)`(const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a200ce4fa8791a415470dc0e7b0c7854c"></a>

Gets the value of PlatformTemplates_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatformTemplates`](#structFRHAPI__SessionTemplate_1a1fec6c5587008ff6a935e6adaf18f8ba)`(TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a1fec6c5587008ff6a935e6adaf18f8ba"></a>

Fills OutValue with the value of PlatformTemplates_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > * `[`GetPlatformTemplatesOrNull`](#structFRHAPI__SessionTemplate_1acb64afafb12e315ed008501d7b99497b)`()` <a id="structFRHAPI__SessionTemplate_1acb64afafb12e315ed008501d7b99497b"></a>

Returns a pointer to PlatformTemplates_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > * `[`GetPlatformTemplatesOrNull`](#structFRHAPI__SessionTemplate_1aae15673e577b1fb3318aef710f8c3acb)`() const` <a id="structFRHAPI__SessionTemplate_1aae15673e577b1fb3318aef710f8c3acb"></a>

Returns a pointer to PlatformTemplates_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatformTemplates`](#structFRHAPI__SessionTemplate_1aba3ca6d8025c9f0e2452972cd7ee55f0)`(const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & NewValue)` <a id="structFRHAPI__SessionTemplate_1aba3ca6d8025c9f0e2452972cd7ee55f0"></a>

Sets the value of PlatformTemplates_Optional and also sets PlatformTemplates_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatformTemplates`](#structFRHAPI__SessionTemplate_1a9874ab324356c7fbda5bcb63982df2ce)`(TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > && NewValue)` <a id="structFRHAPI__SessionTemplate_1a9874ab324356c7fbda5bcb63982df2ce"></a>

Sets the value of PlatformTemplates_Optional and also sets PlatformTemplates_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformTemplates`](#structFRHAPI__SessionTemplate_1a63f0a0474639a53f8a0789e3850321dd)`()` <a id="structFRHAPI__SessionTemplate_1a63f0a0474639a53f8a0789e3850321dd"></a>

Clears the value of PlatformTemplates_Optional and sets PlatformTemplates_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetAutoStartupParams`](#structFRHAPI__SessionTemplate_1a1467b33c02abc7ef43c9d36ee797c2bf)`()` <a id="structFRHAPI__SessionTemplate_1a1467b33c02abc7ef43c9d36ee797c2bf"></a>

Gets the value of AutoStartupParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetAutoStartupParams`](#structFRHAPI__SessionTemplate_1a1d283a70b49ac08950337d390958f7b8)`() const` <a id="structFRHAPI__SessionTemplate_1a1d283a70b49ac08950337d390958f7b8"></a>

Gets the value of AutoStartupParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetAutoStartupParams`](#structFRHAPI__SessionTemplate_1af90d136445339fc3369de2366e3041e7)`(const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1af90d136445339fc3369de2366e3041e7"></a>

Gets the value of AutoStartupParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAutoStartupParams`](#structFRHAPI__SessionTemplate_1a5f90db1cd04776e12895fd25d27368ec)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a5f90db1cd04776e12895fd25d27368ec"></a>

Fills OutValue with the value of AutoStartupParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetAutoStartupParamsOrNull`](#structFRHAPI__SessionTemplate_1a0baa24ab4e5a9450c137655a3507f435)`()` <a id="structFRHAPI__SessionTemplate_1a0baa24ab4e5a9450c137655a3507f435"></a>

Returns a pointer to AutoStartupParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetAutoStartupParamsOrNull`](#structFRHAPI__SessionTemplate_1a5ad48f1e595259c58d707a3e2d1c982b)`() const` <a id="structFRHAPI__SessionTemplate_1a5ad48f1e595259c58d707a3e2d1c982b"></a>

Returns a pointer to AutoStartupParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAutoStartupParams`](#structFRHAPI__SessionTemplate_1a46aec1212ed99ca69b8fca3cd4ee5a83)`(const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & NewValue)` <a id="structFRHAPI__SessionTemplate_1a46aec1212ed99ca69b8fca3cd4ee5a83"></a>

Sets the value of AutoStartupParams_Optional and also sets AutoStartupParams_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAutoStartupParams`](#structFRHAPI__SessionTemplate_1ad996857b2aea8d56433465ab3fbd21bc)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` && NewValue)` <a id="structFRHAPI__SessionTemplate_1ad996857b2aea8d56433465ab3fbd21bc"></a>

Sets the value of AutoStartupParams_Optional and also sets AutoStartupParams_IsSet to true using move semantics.

#### `public inline void `[`ClearAutoStartupParams`](#structFRHAPI__SessionTemplate_1a41041ffbd8775231d249554a072116d7)`()` <a id="structFRHAPI__SessionTemplate_1a41041ffbd8775231d249554a072116d7"></a>

Clears the value of AutoStartupParams_Optional and sets AutoStartupParams_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1aea8b81b98d394a020ae20672aeb95aab)`()` <a id="structFRHAPI__SessionTemplate_1aea8b81b98d394a020ae20672aeb95aab"></a>

Gets the value of AutoStartupInstanceTemplateId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1ab2d4a399c91bb4759c77371e9d108d38)`() const` <a id="structFRHAPI__SessionTemplate_1ab2d4a399c91bb4759c77371e9d108d38"></a>

Gets the value of AutoStartupInstanceTemplateId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1a198e975fa47a0fbda925f2e7fbef91ea)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a198e975fa47a0fbda925f2e7fbef91ea"></a>

Gets the value of AutoStartupInstanceTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1a461e3dac24aae35c17e2f2d1ea1e30f2)`(FGuid & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a461e3dac24aae35c17e2f2d1ea1e30f2"></a>

Fills OutValue with the value of AutoStartupInstanceTemplateId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetAutoStartupInstanceTemplateIdOrNull`](#structFRHAPI__SessionTemplate_1af5d00a4abb101dd7139ef67ce2d2970d)`()` <a id="structFRHAPI__SessionTemplate_1af5d00a4abb101dd7139ef67ce2d2970d"></a>

Returns a pointer to AutoStartupInstanceTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetAutoStartupInstanceTemplateIdOrNull`](#structFRHAPI__SessionTemplate_1a91d3c16866eb84e1b42ed56010951801)`() const` <a id="structFRHAPI__SessionTemplate_1a91d3c16866eb84e1b42ed56010951801"></a>

Returns a pointer to AutoStartupInstanceTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1a3617a9f7634a5e0624ec313513a8eb98)`(const FGuid & NewValue)` <a id="structFRHAPI__SessionTemplate_1a3617a9f7634a5e0624ec313513a8eb98"></a>

Sets the value of AutoStartupInstanceTemplateId_Optional and also sets AutoStartupInstanceTemplateId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1ab92fc06d56bd8902d2dfec4389d8706f)`(FGuid && NewValue)` <a id="structFRHAPI__SessionTemplate_1ab92fc06d56bd8902d2dfec4389d8706f"></a>

Sets the value of AutoStartupInstanceTemplateId_Optional and also sets AutoStartupInstanceTemplateId_IsSet to true using move semantics.

#### `public inline void `[`ClearAutoStartupInstanceTemplateId`](#structFRHAPI__SessionTemplate_1a34645ae41e39de740fe31869d3e1a64f)`()` <a id="structFRHAPI__SessionTemplate_1a34645ae41e39de740fe31869d3e1a64f"></a>

Clears the value of AutoStartupInstanceTemplateId_Optional and sets AutoStartupInstanceTemplateId_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetMinSessionCount`](#structFRHAPI__SessionTemplate_1a9acd1ba31f150beb4c7c737b9d10ef15)`()` <a id="structFRHAPI__SessionTemplate_1a9acd1ba31f150beb4c7c737b9d10ef15"></a>

Gets the value of MinSessionCount_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetMinSessionCount`](#structFRHAPI__SessionTemplate_1ae74e7ec57cd00b21a67017eec6aadc43)`() const` <a id="structFRHAPI__SessionTemplate_1ae74e7ec57cd00b21a67017eec6aadc43"></a>

Gets the value of MinSessionCount_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetMinSessionCount`](#structFRHAPI__SessionTemplate_1aec7f041522a7dd854a73164257b5ed09)`(const int32 & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1aec7f041522a7dd854a73164257b5ed09"></a>

Gets the value of MinSessionCount_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMinSessionCount`](#structFRHAPI__SessionTemplate_1ac185f12671f64683177fcca899615d5e)`(int32 & OutValue) const` <a id="structFRHAPI__SessionTemplate_1ac185f12671f64683177fcca899615d5e"></a>

Fills OutValue with the value of MinSessionCount_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetMinSessionCountOrNull`](#structFRHAPI__SessionTemplate_1a60bc5a5da46be7e8b27b2aa7a30a0e74)`()` <a id="structFRHAPI__SessionTemplate_1a60bc5a5da46be7e8b27b2aa7a30a0e74"></a>

Returns a pointer to MinSessionCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetMinSessionCountOrNull`](#structFRHAPI__SessionTemplate_1aa5af77dfec9912ae9e31618c6b5690b6)`() const` <a id="structFRHAPI__SessionTemplate_1aa5af77dfec9912ae9e31618c6b5690b6"></a>

Returns a pointer to MinSessionCount_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMinSessionCount`](#structFRHAPI__SessionTemplate_1a3771d9fc21329b85dfe0d403cdcee35e)`(const int32 & NewValue)` <a id="structFRHAPI__SessionTemplate_1a3771d9fc21329b85dfe0d403cdcee35e"></a>

Sets the value of MinSessionCount_Optional and also sets MinSessionCount_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMinSessionCount`](#structFRHAPI__SessionTemplate_1acf196221359f5983d54027e4384fbb15)`(int32 && NewValue)` <a id="structFRHAPI__SessionTemplate_1acf196221359f5983d54027e4384fbb15"></a>

Sets the value of MinSessionCount_Optional and also sets MinSessionCount_IsSet to true using move semantics.

#### `public inline void `[`ClearMinSessionCount`](#structFRHAPI__SessionTemplate_1a563b899213f0a6ff1e7ab855e18df3a5)`()` <a id="structFRHAPI__SessionTemplate_1a563b899213f0a6ff1e7ab855e18df3a5"></a>

Clears the value of MinSessionCount_Optional and sets MinSessionCount_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_MinSessionCount`](#structFRHAPI__SessionTemplate_1ad624aade05885b41c3fa6805362c9dac)`()` <a id="structFRHAPI__SessionTemplate_1ad624aade05885b41c3fa6805362c9dac"></a>

Returns the default value of MinSessionCount.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTemplate_1abb25629ce92105ec8a5ef2d92f74bb05)`()` <a id="structFRHAPI__SessionTemplate_1abb25629ce92105ec8a5ef2d92f74bb05"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTemplate_1aea2257a612803ceb8a42a5848ceb403b)`() const` <a id="structFRHAPI__SessionTemplate_1aea2257a612803ceb8a42a5848ceb403b"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTemplate_1a51119dc2b1843056f72a3ec12cc2021f)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a51119dc2b1843056f72a3ec12cc2021f"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__SessionTemplate_1a431e5443a16848db21c0ba36d248aded)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a431e5443a16848db21c0ba36d248aded"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionTemplate_1a8b6c62b2d3c60b4fdcfa64b0808d22fe)`()` <a id="structFRHAPI__SessionTemplate_1a8b6c62b2d3c60b4fdcfa64b0808d22fe"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionTemplate_1a8983d2ff99875fcc687a082720a291cb)`() const` <a id="structFRHAPI__SessionTemplate_1a8983d2ff99875fcc687a082720a291cb"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SessionTemplate_1a1295fe9efaa5426f6ae1f1a7dbbfe6ea)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__SessionTemplate_1a1295fe9efaa5426f6ae1f1a7dbbfe6ea"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SessionTemplate_1afa202eb68ac54d699ab0f5e3910828db)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__SessionTemplate_1afa202eb68ac54d699ab0f5e3910828db"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__SessionTemplate_1ac20b3669d3a9488606e5e2afd59df8f1)`()` <a id="structFRHAPI__SessionTemplate_1ac20b3669d3a9488606e5e2afd59df8f1"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetNumTeams`](#structFRHAPI__SessionTemplate_1aa3754b1980093bb874c72690c98b4ba7)`()` <a id="structFRHAPI__SessionTemplate_1aa3754b1980093bb874c72690c98b4ba7"></a>

Gets the value of NumTeams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetNumTeams`](#structFRHAPI__SessionTemplate_1a5cd635f02f6b7e17e9023b8f38540ee1)`() const` <a id="structFRHAPI__SessionTemplate_1a5cd635f02f6b7e17e9023b8f38540ee1"></a>

Gets the value of NumTeams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetNumTeams`](#structFRHAPI__SessionTemplate_1a4de8b4a93cee7e7be34560550e32d2e3)`(const int32 & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a4de8b4a93cee7e7be34560550e32d2e3"></a>

Gets the value of NumTeams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetNumTeams`](#structFRHAPI__SessionTemplate_1a0d6c68ff21682675e9b24c5b8e932c96)`(int32 & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a0d6c68ff21682675e9b24c5b8e932c96"></a>

Fills OutValue with the value of NumTeams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetNumTeamsOrNull`](#structFRHAPI__SessionTemplate_1a2e3a4a169a557c591e79858ff5681977)`()` <a id="structFRHAPI__SessionTemplate_1a2e3a4a169a557c591e79858ff5681977"></a>

Returns a pointer to NumTeams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetNumTeamsOrNull`](#structFRHAPI__SessionTemplate_1acf0dc00568241387a4e691b8852b4b40)`() const` <a id="structFRHAPI__SessionTemplate_1acf0dc00568241387a4e691b8852b4b40"></a>

Returns a pointer to NumTeams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetNumTeams`](#structFRHAPI__SessionTemplate_1a942a4e0369593f68a54f2e5dfdc23061)`(const int32 & NewValue)` <a id="structFRHAPI__SessionTemplate_1a942a4e0369593f68a54f2e5dfdc23061"></a>

Sets the value of NumTeams_Optional and also sets NumTeams_IsSet to true.

#### `public inline FORCEINLINE void `[`SetNumTeams`](#structFRHAPI__SessionTemplate_1a666fafcd9260395ad8c0a5b7b150a262)`(int32 && NewValue)` <a id="structFRHAPI__SessionTemplate_1a666fafcd9260395ad8c0a5b7b150a262"></a>

Sets the value of NumTeams_Optional and also sets NumTeams_IsSet to true using move semantics.

#### `public inline void `[`ClearNumTeams`](#structFRHAPI__SessionTemplate_1ab05fd0888c21bacaaab9bd4b0ca92e00)`()` <a id="structFRHAPI__SessionTemplate_1ab05fd0888c21bacaaab9bd4b0ca92e00"></a>

Clears the value of NumTeams_Optional and sets NumTeams_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_NumTeams`](#structFRHAPI__SessionTemplate_1a3b47622cdbb5121f719654e599fa2e43)`()` <a id="structFRHAPI__SessionTemplate_1a3b47622cdbb5121f719654e599fa2e43"></a>

Returns the default value of NumTeams.

#### `public inline FORCEINLINE int32 & `[`GetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1abf8c6ebf63e193587a351253b5f56ddf)`()` <a id="structFRHAPI__SessionTemplate_1abf8c6ebf63e193587a351253b5f56ddf"></a>

Gets the value of PlayersPerTeam_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1a9eed4fc945404d8c7d2ba2c58605dcb3)`() const` <a id="structFRHAPI__SessionTemplate_1a9eed4fc945404d8c7d2ba2c58605dcb3"></a>

Gets the value of PlayersPerTeam_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1abfb0c94fbe0769b079c28dbe0f66a70c)`(const int32 & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1abfb0c94fbe0769b079c28dbe0f66a70c"></a>

Gets the value of PlayersPerTeam_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1a54d2cce04eb8a269eeda8f83097f9109)`(int32 & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a54d2cce04eb8a269eeda8f83097f9109"></a>

Fills OutValue with the value of PlayersPerTeam_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetPlayersPerTeamOrNull`](#structFRHAPI__SessionTemplate_1a7eb3d1e476afb55f420ead3a4430519b)`()` <a id="structFRHAPI__SessionTemplate_1a7eb3d1e476afb55f420ead3a4430519b"></a>

Returns a pointer to PlayersPerTeam_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetPlayersPerTeamOrNull`](#structFRHAPI__SessionTemplate_1aba456ef5739b223643496f40060ff1da)`() const` <a id="structFRHAPI__SessionTemplate_1aba456ef5739b223643496f40060ff1da"></a>

Returns a pointer to PlayersPerTeam_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1a32e98c662f0f6d9252004fc8e4f70e15)`(const int32 & NewValue)` <a id="structFRHAPI__SessionTemplate_1a32e98c662f0f6d9252004fc8e4f70e15"></a>

Sets the value of PlayersPerTeam_Optional and also sets PlayersPerTeam_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1a91a43d8010dfc7d80c01395bb7f5d4bf)`(int32 && NewValue)` <a id="structFRHAPI__SessionTemplate_1a91a43d8010dfc7d80c01395bb7f5d4bf"></a>

Sets the value of PlayersPerTeam_Optional and also sets PlayersPerTeam_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayersPerTeam`](#structFRHAPI__SessionTemplate_1aa2773b8e861aae5dd66d271167b6e2fb)`()` <a id="structFRHAPI__SessionTemplate_1aa2773b8e861aae5dd66d271167b6e2fb"></a>

Clears the value of PlayersPerTeam_Optional and sets PlayersPerTeam_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PlayersPerTeam`](#structFRHAPI__SessionTemplate_1aa3c3ab12f1489599cdc36cd6f2d1df1a)`()` <a id="structFRHAPI__SessionTemplate_1aa3c3ab12f1489599cdc36cd6f2d1df1a"></a>

Returns the default value of PlayersPerTeam.

#### `public inline FORCEINLINE bool & `[`GetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1aee3a7f16d973823eba140353698af859)`()` <a id="structFRHAPI__SessionTemplate_1aee3a7f16d973823eba140353698af859"></a>

Gets the value of CanChangeOwnTeam_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1a62dd21102e3ff5bb626e828b798875aa)`() const` <a id="structFRHAPI__SessionTemplate_1a62dd21102e3ff5bb626e828b798875aa"></a>

Gets the value of CanChangeOwnTeam_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1aefb68a825f61d7a1c899c0c875442d43)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1aefb68a825f61d7a1c899c0c875442d43"></a>

Gets the value of CanChangeOwnTeam_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1ac0d10b1dc245ebd75a5c64306e27eb09)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1ac0d10b1dc245ebd75a5c64306e27eb09"></a>

Fills OutValue with the value of CanChangeOwnTeam_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetCanChangeOwnTeamOrNull`](#structFRHAPI__SessionTemplate_1acb08d6f54280e8d1d1aa3d7327f43ab6)`()` <a id="structFRHAPI__SessionTemplate_1acb08d6f54280e8d1d1aa3d7327f43ab6"></a>

Returns a pointer to CanChangeOwnTeam_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetCanChangeOwnTeamOrNull`](#structFRHAPI__SessionTemplate_1aad0a8d9ce613b4e5dda3cbbccc5b1aab)`() const` <a id="structFRHAPI__SessionTemplate_1aad0a8d9ce613b4e5dda3cbbccc5b1aab"></a>

Returns a pointer to CanChangeOwnTeam_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1aef1c9cfe4716fb95865664a9a1ab5ed5)`(const bool & NewValue)` <a id="structFRHAPI__SessionTemplate_1aef1c9cfe4716fb95865664a9a1ab5ed5"></a>

Sets the value of CanChangeOwnTeam_Optional and also sets CanChangeOwnTeam_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1aa9e9d22298a7fed5255af44a1a5ad616)`(bool && NewValue)` <a id="structFRHAPI__SessionTemplate_1aa9e9d22298a7fed5255af44a1a5ad616"></a>

Sets the value of CanChangeOwnTeam_Optional and also sets CanChangeOwnTeam_IsSet to true using move semantics.

#### `public inline void `[`ClearCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1a9aa2afa1842ee1cab22a7b1a9a772c08)`()` <a id="structFRHAPI__SessionTemplate_1a9aa2afa1842ee1cab22a7b1a9a772c08"></a>

Clears the value of CanChangeOwnTeam_Optional and sets CanChangeOwnTeam_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_CanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1ab20bbceeec882c9212587250b1a6a852)`()` <a id="structFRHAPI__SessionTemplate_1ab20bbceeec882c9212587250b1a6a852"></a>

Returns the default value of CanChangeOwnTeam.

#### `public inline FORCEINLINE bool & `[`GetNotifyOnReservation`](#structFRHAPI__SessionTemplate_1a49763c906e868cb3fb31d57022f9a2ad)`()` <a id="structFRHAPI__SessionTemplate_1a49763c906e868cb3fb31d57022f9a2ad"></a>

Gets the value of NotifyOnReservation_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetNotifyOnReservation`](#structFRHAPI__SessionTemplate_1ac7d61b1d3e222c9d000dc00037df9d75)`() const` <a id="structFRHAPI__SessionTemplate_1ac7d61b1d3e222c9d000dc00037df9d75"></a>

Gets the value of NotifyOnReservation_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetNotifyOnReservation`](#structFRHAPI__SessionTemplate_1a30adae3818d8268623b924cfccadf4fd)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a30adae3818d8268623b924cfccadf4fd"></a>

Gets the value of NotifyOnReservation_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetNotifyOnReservation`](#structFRHAPI__SessionTemplate_1ac7268ab6469ff9aeab835e104563eb9a)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1ac7268ab6469ff9aeab835e104563eb9a"></a>

Fills OutValue with the value of NotifyOnReservation_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetNotifyOnReservationOrNull`](#structFRHAPI__SessionTemplate_1a88fa0fdafdb6735b25a0b576d3d3ad23)`()` <a id="structFRHAPI__SessionTemplate_1a88fa0fdafdb6735b25a0b576d3d3ad23"></a>

Returns a pointer to NotifyOnReservation_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetNotifyOnReservationOrNull`](#structFRHAPI__SessionTemplate_1a868723303e9541996b5d1ebbe400789a)`() const` <a id="structFRHAPI__SessionTemplate_1a868723303e9541996b5d1ebbe400789a"></a>

Returns a pointer to NotifyOnReservation_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetNotifyOnReservation`](#structFRHAPI__SessionTemplate_1a5370ad4af665ef1167a566c24daa8fcb)`(const bool & NewValue)` <a id="structFRHAPI__SessionTemplate_1a5370ad4af665ef1167a566c24daa8fcb"></a>

Sets the value of NotifyOnReservation_Optional and also sets NotifyOnReservation_IsSet to true.

#### `public inline FORCEINLINE void `[`SetNotifyOnReservation`](#structFRHAPI__SessionTemplate_1a74bc3f3269d82a20d4ac6ee17d6d4200)`(bool && NewValue)` <a id="structFRHAPI__SessionTemplate_1a74bc3f3269d82a20d4ac6ee17d6d4200"></a>

Sets the value of NotifyOnReservation_Optional and also sets NotifyOnReservation_IsSet to true using move semantics.

#### `public inline void `[`ClearNotifyOnReservation`](#structFRHAPI__SessionTemplate_1a09e9ca121b22271ccc7debde5c98afd1)`()` <a id="structFRHAPI__SessionTemplate_1a09e9ca121b22271ccc7debde5c98afd1"></a>

Clears the value of NotifyOnReservation_Optional and sets NotifyOnReservation_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_NotifyOnReservation`](#structFRHAPI__SessionTemplate_1a80a1fd21529ef221d32eeb4cf3b12690)`()` <a id="structFRHAPI__SessionTemplate_1a80a1fd21529ef221d32eeb4cf3b12690"></a>

Returns the default value of NotifyOnReservation.

#### `public inline FORCEINLINE ERHAPI_PlayerVisibility & `[`GetPlayerVisibility`](#structFRHAPI__SessionTemplate_1add1ad84a18bbf0dbe07ca1966d2281fa)`()` <a id="structFRHAPI__SessionTemplate_1add1ad84a18bbf0dbe07ca1966d2281fa"></a>

Gets the value of PlayerVisibility_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_PlayerVisibility & `[`GetPlayerVisibility`](#structFRHAPI__SessionTemplate_1a49db53bab3ebcdba0cfc18ffb02c9e26)`() const` <a id="structFRHAPI__SessionTemplate_1a49db53bab3ebcdba0cfc18ffb02c9e26"></a>

Gets the value of PlayerVisibility_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_PlayerVisibility & `[`GetPlayerVisibility`](#structFRHAPI__SessionTemplate_1ab92442b18130200a93ccd3653c5a7d71)`(const ERHAPI_PlayerVisibility & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1ab92442b18130200a93ccd3653c5a7d71"></a>

Gets the value of PlayerVisibility_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerVisibility`](#structFRHAPI__SessionTemplate_1a950192f39383ee34163eb367fc8ccab1)`(ERHAPI_PlayerVisibility & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a950192f39383ee34163eb367fc8ccab1"></a>

Fills OutValue with the value of PlayerVisibility_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_PlayerVisibility * `[`GetPlayerVisibilityOrNull`](#structFRHAPI__SessionTemplate_1a4f400c300f488afe04a18ca8a98de745)`()` <a id="structFRHAPI__SessionTemplate_1a4f400c300f488afe04a18ca8a98de745"></a>

Returns a pointer to PlayerVisibility_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_PlayerVisibility * `[`GetPlayerVisibilityOrNull`](#structFRHAPI__SessionTemplate_1a3ef6fc251c6d4384b3f9927f6d1dfdb6)`() const` <a id="structFRHAPI__SessionTemplate_1a3ef6fc251c6d4384b3f9927f6d1dfdb6"></a>

Returns a pointer to PlayerVisibility_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerVisibility`](#structFRHAPI__SessionTemplate_1a8a1674bfee26e333e5e2abd5fe986ba5)`(const ERHAPI_PlayerVisibility & NewValue)` <a id="structFRHAPI__SessionTemplate_1a8a1674bfee26e333e5e2abd5fe986ba5"></a>

Sets the value of PlayerVisibility_Optional and also sets PlayerVisibility_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerVisibility`](#structFRHAPI__SessionTemplate_1a3db2062fa6127eeb273e692fc9f0c1b4)`(ERHAPI_PlayerVisibility && NewValue)` <a id="structFRHAPI__SessionTemplate_1a3db2062fa6127eeb273e692fc9f0c1b4"></a>

Sets the value of PlayerVisibility_Optional and also sets PlayerVisibility_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerVisibility`](#structFRHAPI__SessionTemplate_1ad9160f33307545c48ba632f454c4332c)`()` <a id="structFRHAPI__SessionTemplate_1ad9160f33307545c48ba632f454c4332c"></a>

Clears the value of PlayerVisibility_Optional and sets PlayerVisibility_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_PlayerVisibility & `[`GetAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1aa0a4a4e470764c2bc692d04c29676d89)`()` <a id="structFRHAPI__SessionTemplate_1aa0a4a4e470764c2bc692d04c29676d89"></a>

Gets the value of AdminPlayerVisibility_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_PlayerVisibility & `[`GetAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1ab0267e65082d4cd69acbd846414292cf)`() const` <a id="structFRHAPI__SessionTemplate_1ab0267e65082d4cd69acbd846414292cf"></a>

Gets the value of AdminPlayerVisibility_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_PlayerVisibility & `[`GetAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1aa9767e9efa53b5f2988f82ddb1a08783)`(const ERHAPI_PlayerVisibility & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1aa9767e9efa53b5f2988f82ddb1a08783"></a>

Gets the value of AdminPlayerVisibility_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1a29da66d255894880dbd005fdd8da6a59)`(ERHAPI_PlayerVisibility & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a29da66d255894880dbd005fdd8da6a59"></a>

Fills OutValue with the value of AdminPlayerVisibility_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_PlayerVisibility * `[`GetAdminPlayerVisibilityOrNull`](#structFRHAPI__SessionTemplate_1a87529358dec566a3d730dbe907f6c181)`()` <a id="structFRHAPI__SessionTemplate_1a87529358dec566a3d730dbe907f6c181"></a>

Returns a pointer to AdminPlayerVisibility_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_PlayerVisibility * `[`GetAdminPlayerVisibilityOrNull`](#structFRHAPI__SessionTemplate_1a8561a2b5bf1cc1ed8d5022a0ce6fa76c)`() const` <a id="structFRHAPI__SessionTemplate_1a8561a2b5bf1cc1ed8d5022a0ce6fa76c"></a>

Returns a pointer to AdminPlayerVisibility_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1a11427938d35be0ddc636822ef1e6d9c2)`(const ERHAPI_PlayerVisibility & NewValue)` <a id="structFRHAPI__SessionTemplate_1a11427938d35be0ddc636822ef1e6d9c2"></a>

Sets the value of AdminPlayerVisibility_Optional and also sets AdminPlayerVisibility_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1af598a4a468e6ecd69d951ab0c89de2f9)`(ERHAPI_PlayerVisibility && NewValue)` <a id="structFRHAPI__SessionTemplate_1af598a4a468e6ecd69d951ab0c89de2f9"></a>

Sets the value of AdminPlayerVisibility_Optional and also sets AdminPlayerVisibility_IsSet to true using move semantics.

#### `public inline void `[`ClearAdminPlayerVisibility`](#structFRHAPI__SessionTemplate_1a1ed525f8085823e6ac6ae445ba9932e5)`()` <a id="structFRHAPI__SessionTemplate_1a1ed525f8085823e6ac6ae445ba9932e5"></a>

Clears the value of AdminPlayerVisibility_Optional and sets AdminPlayerVisibility_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_PlayerVisibility & `[`GetPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1aaf515b9497aefde0d11cfe28ed82b4b0)`()` <a id="structFRHAPI__SessionTemplate_1aaf515b9497aefde0d11cfe28ed82b4b0"></a>

Gets the value of PlayerNotificationFrequency_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_PlayerVisibility & `[`GetPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a21e50ee7bf053e700a2840587580541f)`() const` <a id="structFRHAPI__SessionTemplate_1a21e50ee7bf053e700a2840587580541f"></a>

Gets the value of PlayerNotificationFrequency_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_PlayerVisibility & `[`GetPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1af3a62df60f30b93df92bc25fbcd6aba7)`(const ERHAPI_PlayerVisibility & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1af3a62df60f30b93df92bc25fbcd6aba7"></a>

Gets the value of PlayerNotificationFrequency_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1aa8e680661377777c62b883b1d53341a2)`(ERHAPI_PlayerVisibility & OutValue) const` <a id="structFRHAPI__SessionTemplate_1aa8e680661377777c62b883b1d53341a2"></a>

Fills OutValue with the value of PlayerNotificationFrequency_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_PlayerVisibility * `[`GetPlayerNotificationFrequencyOrNull`](#structFRHAPI__SessionTemplate_1ac9bc03bb67c5a079e8e63b0fcbf81f9b)`()` <a id="structFRHAPI__SessionTemplate_1ac9bc03bb67c5a079e8e63b0fcbf81f9b"></a>

Returns a pointer to PlayerNotificationFrequency_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_PlayerVisibility * `[`GetPlayerNotificationFrequencyOrNull`](#structFRHAPI__SessionTemplate_1a72bdaddf9ff8de858ed72640439b7c93)`() const` <a id="structFRHAPI__SessionTemplate_1a72bdaddf9ff8de858ed72640439b7c93"></a>

Returns a pointer to PlayerNotificationFrequency_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1aa024e413dd939c15c7c9a97bf60e4c2a)`(const ERHAPI_PlayerVisibility & NewValue)` <a id="structFRHAPI__SessionTemplate_1aa024e413dd939c15c7c9a97bf60e4c2a"></a>

Sets the value of PlayerNotificationFrequency_Optional and also sets PlayerNotificationFrequency_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a7f639600e007321a7a9e1a0906cdce75)`(ERHAPI_PlayerVisibility && NewValue)` <a id="structFRHAPI__SessionTemplate_1a7f639600e007321a7a9e1a0906cdce75"></a>

Sets the value of PlayerNotificationFrequency_Optional and also sets PlayerNotificationFrequency_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a9e283ac577d19794a939f946ac98642d)`()` <a id="structFRHAPI__SessionTemplate_1a9e283ac577d19794a939f946ac98642d"></a>

Clears the value of PlayerNotificationFrequency_Optional and sets PlayerNotificationFrequency_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_PlayerVisibility & `[`GetAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1aa9a83b38faaca1f36eb57c2ec0a5e31b)`()` <a id="structFRHAPI__SessionTemplate_1aa9a83b38faaca1f36eb57c2ec0a5e31b"></a>

Gets the value of AdminPlayerNotificationFrequency_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_PlayerVisibility & `[`GetAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a90e91cebbf5279dd6636d398c7dc64fb)`() const` <a id="structFRHAPI__SessionTemplate_1a90e91cebbf5279dd6636d398c7dc64fb"></a>

Gets the value of AdminPlayerNotificationFrequency_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_PlayerVisibility & `[`GetAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a772634c05366c4d397dfae6f1b0e28eb)`(const ERHAPI_PlayerVisibility & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a772634c05366c4d397dfae6f1b0e28eb"></a>

Gets the value of AdminPlayerNotificationFrequency_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a71e18e3fd572269c86e6966be6ff0e26)`(ERHAPI_PlayerVisibility & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a71e18e3fd572269c86e6966be6ff0e26"></a>

Fills OutValue with the value of AdminPlayerNotificationFrequency_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_PlayerVisibility * `[`GetAdminPlayerNotificationFrequencyOrNull`](#structFRHAPI__SessionTemplate_1a7ef2821dabf7b5b5535ee25bb40c1cbe)`()` <a id="structFRHAPI__SessionTemplate_1a7ef2821dabf7b5b5535ee25bb40c1cbe"></a>

Returns a pointer to AdminPlayerNotificationFrequency_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_PlayerVisibility * `[`GetAdminPlayerNotificationFrequencyOrNull`](#structFRHAPI__SessionTemplate_1ab311de27ac3c478caaa585c65e143fa3)`() const` <a id="structFRHAPI__SessionTemplate_1ab311de27ac3c478caaa585c65e143fa3"></a>

Returns a pointer to AdminPlayerNotificationFrequency_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1a9007ef486f2a99b9cef831e1f096bef3)`(const ERHAPI_PlayerVisibility & NewValue)` <a id="structFRHAPI__SessionTemplate_1a9007ef486f2a99b9cef831e1f096bef3"></a>

Sets the value of AdminPlayerNotificationFrequency_Optional and also sets AdminPlayerNotificationFrequency_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1aee29721da293aeab583a02313a1fc7f8)`(ERHAPI_PlayerVisibility && NewValue)` <a id="structFRHAPI__SessionTemplate_1aee29721da293aeab583a02313a1fc7f8"></a>

Sets the value of AdminPlayerNotificationFrequency_Optional and also sets AdminPlayerNotificationFrequency_IsSet to true using move semantics.

#### `public inline void `[`ClearAdminPlayerNotificationFrequency`](#structFRHAPI__SessionTemplate_1aed149547b3e1c182e446b8fce5b7d5f6)`()` <a id="structFRHAPI__SessionTemplate_1aed149547b3e1c182e446b8fce5b7d5f6"></a>

Clears the value of AdminPlayerNotificationFrequency_Optional and sets AdminPlayerNotificationFrequency_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1a1bdf55d69087550a2c18f9d3eb09922e)`()` <a id="structFRHAPI__SessionTemplate_1a1bdf55d69087550a2c18f9d3eb09922e"></a>

Gets the value of PlayerCullingTimeout_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1a64acbdba1c431022c242c06b89df6b0c)`() const` <a id="structFRHAPI__SessionTemplate_1a64acbdba1c431022c242c06b89df6b0c"></a>

Gets the value of PlayerCullingTimeout_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1ab785a9e10c22c15698e0a0f1d1560176)`(const int32 & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1ab785a9e10c22c15698e0a0f1d1560176"></a>

Gets the value of PlayerCullingTimeout_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1a41cfa46e5d697ca8bb51eb6ed06f54a0)`(int32 & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a41cfa46e5d697ca8bb51eb6ed06f54a0"></a>

Fills OutValue with the value of PlayerCullingTimeout_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetPlayerCullingTimeoutOrNull`](#structFRHAPI__SessionTemplate_1ad05be041e9f214e783a07ac5be178614)`()` <a id="structFRHAPI__SessionTemplate_1ad05be041e9f214e783a07ac5be178614"></a>

Returns a pointer to PlayerCullingTimeout_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetPlayerCullingTimeoutOrNull`](#structFRHAPI__SessionTemplate_1ac2748618d4c423a4b93d5eb9f4de0fa1)`() const` <a id="structFRHAPI__SessionTemplate_1ac2748618d4c423a4b93d5eb9f4de0fa1"></a>

Returns a pointer to PlayerCullingTimeout_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1ae9e39b6c75f4414c18ce29969c89e8ac)`(const int32 & NewValue)` <a id="structFRHAPI__SessionTemplate_1ae9e39b6c75f4414c18ce29969c89e8ac"></a>

Sets the value of PlayerCullingTimeout_Optional and also sets PlayerCullingTimeout_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1a5b12fb22f29d578a692fcdfee21ff0f9)`(int32 && NewValue)` <a id="structFRHAPI__SessionTemplate_1a5b12fb22f29d578a692fcdfee21ff0f9"></a>

Sets the value of PlayerCullingTimeout_Optional and also sets PlayerCullingTimeout_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1ac5f91d7657a5e7cae9199856318f4337)`()` <a id="structFRHAPI__SessionTemplate_1ac5f91d7657a5e7cae9199856318f4337"></a>

Clears the value of PlayerCullingTimeout_Optional and sets PlayerCullingTimeout_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerCullingTimeout`](#structFRHAPI__SessionTemplate_1a75695811ed5b8a52c5718609c83bcbf1)`()` <a id="structFRHAPI__SessionTemplate_1a75695811ed5b8a52c5718609c83bcbf1"></a>

Returns the default value of PlayerCullingTimeout.

