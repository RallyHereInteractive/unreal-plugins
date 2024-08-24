# group `RHAPI_AuditEvent` <a id="group__RHAPI__AuditEvent"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_AuditEvent`](#structFRHAPI__AuditEvent) | 

---
title: FRHAPI_AuditEvent
---

```
struct FRHAPI_AuditEvent
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`EventName`](#structFRHAPI__AuditEvent_1a0e11dca6739b8cd51e77938830d9bc34) | Name of the audit event you are creating. Customer created events will be prepended with 'customer.'.
`public FString `[`SessionId`](#structFRHAPI__AuditEvent_1aa3464d29168142e832c39d802bad34ce) | ID of the session this event occurred in.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__AuditEvent_1a82e273285f49d980093cd4bde5510df9) | Custom data for this audit request.
`public bool `[`CustomData_IsSet`](#structFRHAPI__AuditEvent_1aaded55db324c1f64f857369e579564f6) | true if CustomData_Optional has been set to a value
`public FString `[`SessionType_Optional`](#structFRHAPI__AuditEvent_1a87be75fe3f7219468955d7958e106aeb) | Type of the session this event occurred in.
`public bool `[`SessionType_IsSet`](#structFRHAPI__AuditEvent_1abe58daa1f44673b441b284bdd174ad7c) | true if SessionType_Optional has been set to a value
`public FString `[`RegionId_Optional`](#structFRHAPI__AuditEvent_1a3e6a3125468f0e15dbdf54463aac4690) | Region ID for this event.
`public bool `[`RegionId_IsSet`](#structFRHAPI__AuditEvent_1a893d0bec95f55de1e7940e6ddc9e00db) | true if RegionId_Optional has been set to a value
`public bool `[`Joinable_Optional`](#structFRHAPI__AuditEvent_1a1256853740991d081ebf0b20b3dfd1d3) | Whether or not the session is publicly joinable.
`public bool `[`Joinable_IsSet`](#structFRHAPI__AuditEvent_1a012943831fcce2063015ebcaf99528ee) | true if Joinable_Optional has been set to a value
`public TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > `[`UpdatedTeams_Optional`](#structFRHAPI__AuditEvent_1a110622e0fcf6ce7cc039092cf7d850f4) | Updated team numbers and sizes.
`public bool `[`UpdatedTeams_IsSet`](#structFRHAPI__AuditEvent_1a37fafea2ba386d1de011fb7376788931) | true if UpdatedTeams_Optional has been set to a value
`public ERHAPI_InviteSource `[`Source_Optional`](#structFRHAPI__AuditEvent_1ab46da29e9df35e19749e8734b59ef20c) | The source of an invite.
`public bool `[`Source_IsSet`](#structFRHAPI__AuditEvent_1a2545a17496a424e907a6ac8b5bc88bf3) | true if Source_Optional has been set to a value
`public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__AuditEvent_1a1a746c06e774e889164b05f65cd4648f) | UUID of a specific player being effected in this event.
`public bool `[`PlayerUuid_IsSet`](#structFRHAPI__AuditEvent_1ac6585bda344cca1662c6e7767bc3a6e3) | true if PlayerUuid_Optional has been set to a value
`public int32 `[`TeamId_Optional`](#structFRHAPI__AuditEvent_1a3c1ea56fc52dfb0a6a3a11a7e9e2776f) | ID of the team being effected in this event.
`public bool `[`TeamId_IsSet`](#structFRHAPI__AuditEvent_1ab5fb5f7a347c8b9ca824685915af3a5c) | true if TeamId_Optional has been set to a value
`public FString `[`InvitedSessionId_Optional`](#structFRHAPI__AuditEvent_1a637fdc2ea19425afb9e7285914ae887e) | ID of the session being invited in this event.
`public bool `[`InvitedSessionId_IsSet`](#structFRHAPI__AuditEvent_1ac8f296d3cfd2032286634646b407b5fb) | true if InvitedSessionId_Optional has been set to a value
`public FString `[`RemovedSessionId_Optional`](#structFRHAPI__AuditEvent_1abc65b755569a269afa32e150090ae32d) | ID of the session being removed in this event.
`public bool `[`RemovedSessionId_IsSet`](#structFRHAPI__AuditEvent_1aadd12715dc4a140ba10fa35dee6612cc) | true if RemovedSessionId_Optional has been set to a value
`public FString `[`Version_Optional`](#structFRHAPI__AuditEvent_1a718acba9db5dce0bdc5cd0cb33227dba) | Version updated in this event.
`public bool `[`Version_IsSet`](#structFRHAPI__AuditEvent_1a7fc45d7585788fe01bf85773998cd314) | true if Version_Optional has been set to a value
`public `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` `[`ClientSettings_Optional`](#structFRHAPI__AuditEvent_1a3e6d0763a2375148fecc226ecfa4959f) | Client settings updated as part of this event.
`public bool `[`ClientSettings_IsSet`](#structFRHAPI__AuditEvent_1a2b23205573a9cad1f49325265ac88a7b) | true if ClientSettings_Optional has been set to a value
`public `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` `[`CrossplayPreferences_Optional`](#structFRHAPI__AuditEvent_1af4128c7eeea171df0b69206bb14aaa84) | Crossplay preferences updated as part of this event.
`public bool `[`CrossplayPreferences_IsSet`](#structFRHAPI__AuditEvent_1a5904741f5492050b727c07c586610c73) | true if CrossplayPreferences_Optional has been set to a value
`public ERHAPI_SessionPlayerStatus `[`PlayerStatus_Optional`](#structFRHAPI__AuditEvent_1a011023538aa8aa22787927941790776c) | Player's status updated as part of this event.
`public bool `[`PlayerStatus_IsSet`](#structFRHAPI__AuditEvent_1a1a27bd7a28571ddee01714c34835cdd8) | true if PlayerStatus_Optional has been set to a value
`public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__AuditEvent_1a3e550386794807ab125bd2c94dec6a6f) | Platform updated as part of this event.
`public bool `[`Platform_IsSet`](#structFRHAPI__AuditEvent_1a8be45fd83febb526bbe5c40cd6ca0666) | true if Platform_Optional has been set to a value
`public FString `[`PlatformSessionId_Optional`](#structFRHAPI__AuditEvent_1afc67458e33ee2f6af4164ff7b621054f) | ID of the platform session being effected in this event.
`public bool `[`PlatformSessionId_IsSet`](#structFRHAPI__AuditEvent_1afb66af766ab7ba89932a9ceabaf14668) | true if PlatformSessionId_Optional has been set to a value
`public FString `[`InstanceId_Optional`](#structFRHAPI__AuditEvent_1a5073e1005e89648e9df38c9ee20ace4e) | ID of the instance being effected in this event.
`public bool `[`InstanceId_IsSet`](#structFRHAPI__AuditEvent_1aa23f99cf50d41b42abf8f7c8b4fe7692) | true if InstanceId_Optional has been set to a value
`public ERHAPI_HostType `[`HostType_Optional`](#structFRHAPI__AuditEvent_1af1e00eafe674337f347d41d4c2d7dd74) | Type of the host being effected in this event.
`public bool `[`HostType_IsSet`](#structFRHAPI__AuditEvent_1a4da249dfc3b8e7d5250c8bff04c1530e) | true if HostType_Optional has been set to a value
`public FGuid `[`HostPlayerUuid_Optional`](#structFRHAPI__AuditEvent_1acfecc1ab0a6fc39efbd12bacfd3fa2cd) | UUID of the player hosting during this event.
`public bool `[`HostPlayerUuid_IsSet`](#structFRHAPI__AuditEvent_1ac1a66073be73b8217cd5154df723ca9f) | true if HostPlayerUuid_Optional has been set to a value
`public FGuid `[`InstanceRequestTemplate_Optional`](#structFRHAPI__AuditEvent_1a9c86065453e328b4e171d26da7b1b4b0) | ID of the instance request template being used in this event.
`public bool `[`InstanceRequestTemplate_IsSet`](#structFRHAPI__AuditEvent_1a475b99bf20710a06992b102c8ea383dd) | true if InstanceRequestTemplate_Optional has been set to a value
`public FString `[`Map_Optional`](#structFRHAPI__AuditEvent_1ad299bd14adc6a83431b914c661d2575e) | Map being used in this event.
`public bool `[`Map_IsSet`](#structFRHAPI__AuditEvent_1a5c3480ca572ac0c16469b328c3bb650c) | true if Map_Optional has been set to a value
`public FString `[`Mode_Optional`](#structFRHAPI__AuditEvent_1a381a78b7c664542e8f4356a5e8e61bb0) | Mode being used in this event.
`public bool `[`Mode_IsSet`](#structFRHAPI__AuditEvent_1a7eee8859aa0fd0ac057370d254ca5356) | true if Mode_Optional has been set to a value
`public FString `[`AllocationId_Optional`](#structFRHAPI__AuditEvent_1a4f0616b9f1cad3a85c31be46f09bb314) | Allocation ID of instance in this event.
`public bool `[`AllocationId_IsSet`](#structFRHAPI__AuditEvent_1aba24964baee9c9a3509ef9242a8c6b18) | true if AllocationId_Optional has been set to a value
`public ERHAPI_InstanceJoinableStatus `[`JoinStatus_Optional`](#structFRHAPI__AuditEvent_1a6b84853dbf5b2b0b70476fb17eede263) | Instance's joinability status.
`public bool `[`JoinStatus_IsSet`](#structFRHAPI__AuditEvent_1af4abeadcd745f17b0321933f5c428690) | true if JoinStatus_Optional has been set to a value
`public `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` `[`JoinParams_Optional`](#structFRHAPI__AuditEvent_1a07bbc910f5076d442486023659ca44b0) | Instance's join parameters for this event.
`public bool `[`JoinParams_IsSet`](#structFRHAPI__AuditEvent_1ae790d39edc53ee06978d78308de4decb) | true if JoinParams_Optional has been set to a value
`public ERHAPI_InstanceHealthStatus `[`InstanceHealth_Optional`](#structFRHAPI__AuditEvent_1a79e4d43263294ac4d96398ebfb1f847a) | Instance's health status for this event.
`public bool `[`InstanceHealth_IsSet`](#structFRHAPI__AuditEvent_1aae5452e6edf4ee9111651bd081474cfc) | true if InstanceHealth_Optional has been set to a value
`public FString `[`QueueId_Optional`](#structFRHAPI__AuditEvent_1a1e8ad3c21b81b3a193e5642a2bc9df5a) | ID for the queue in this event.
`public bool `[`QueueId_IsSet`](#structFRHAPI__AuditEvent_1a0c590071262c69ad7e882f92ffef67e0) | true if QueueId_Optional has been set to a value
`public FString `[`TicketId_Optional`](#structFRHAPI__AuditEvent_1a613c1fedd3208993935948dd4c06aca5) | Matchmaking ticket id in this event.
`public bool `[`TicketId_IsSet`](#structFRHAPI__AuditEvent_1a19ea5ddf078bcfe9d110c74a43aba959) | true if TicketId_Optional has been set to a value
`public `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` `[`AdditionalParams_Optional`](#structFRHAPI__AuditEvent_1a142b115bf849c03a758379a861e416c2) | Additional matchmaking parameters in this event.
`public bool `[`AdditionalParams_IsSet`](#structFRHAPI__AuditEvent_1a62b9d203eb29efc4450d1009f8f171eb) | true if AdditionalParams_Optional has been set to a value
`public TArray< FString > `[`MapPreferences_Optional`](#structFRHAPI__AuditEvent_1a593175fd3c24d475eb899946de496e07) | Map preferences in this event.
`public bool `[`MapPreferences_IsSet`](#structFRHAPI__AuditEvent_1a1db8cfc451e71b0c3fd83c704a49e54d) | true if MapPreferences_Optional has been set to a value
`public FString `[`QueuedSessionId_Optional`](#structFRHAPI__AuditEvent_1a39b4489b93cc4be72bf5bf0ebc4f9b13) | ID of the session that was/is in a matchmaking queue for this event.
`public bool `[`QueuedSessionId_IsSet`](#structFRHAPI__AuditEvent_1a5a5f65ee89fdfb66ef22a55a163baf57) | true if QueuedSessionId_Optional has been set to a value
`public FString `[`MatchId_Optional`](#structFRHAPI__AuditEvent_1ae7b833650a917745d46a07e479f80666) | ID of a match that was associated with this session.
`public bool `[`MatchId_IsSet`](#structFRHAPI__AuditEvent_1a332d101db5ba1b3e56e508f0a39bc954) | true if MatchId_Optional has been set to a value
`public FGuid `[`RequestingUserUuid_Optional`](#structFRHAPI__AuditEvent_1af0252ad8092c0b033ddf45a8eef3698e) | 
`public bool `[`RequestingUserUuid_IsSet`](#structFRHAPI__AuditEvent_1aa1eaf461666b39f72b48f3a24ba21f85) | true if RequestingUserUuid_Optional has been set to a value
`public FDateTime `[`EventDatetime`](#structFRHAPI__AuditEvent_1abaade7e25cc8bbb04e5efe8ccb7f9800) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public virtual bool `[`FromJson`](#structFRHAPI__AuditEvent_1a191062f32038349f94873cfb420d256c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__AuditEvent_1a9aded3f00dda58a155d3f34327e64f39)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetEventName`](#structFRHAPI__AuditEvent_1a0fea28e2f28cc680306a1832d5ba1b58)`()` | Gets the value of EventName.
`public inline const FString & `[`GetEventName`](#structFRHAPI__AuditEvent_1a39321d5a0fba99ecadc082faafa284cf)`() const` | Gets the value of EventName.
`public inline void `[`SetEventName`](#structFRHAPI__AuditEvent_1a8087921386fdec5296aec7c5e6fea83e)`(const FString & NewValue)` | Sets the value of EventName.
`public inline void `[`SetEventName`](#structFRHAPI__AuditEvent_1a7a159fa0f7311f41152411c263c7ccd2)`(FString && NewValue)` | Sets the value of EventName using move semantics.
`public inline FString & `[`GetSessionId`](#structFRHAPI__AuditEvent_1ade2abca609ed32c45cf9dfddfa8c5a72)`()` | Gets the value of SessionId.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__AuditEvent_1a31c15fe0040044e278b79adb404db74d)`() const` | Gets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__AuditEvent_1a867836397739325b10321b484d3e5b45)`(const FString & NewValue)` | Sets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__AuditEvent_1a0ddb0d8e5c62d564d5e0ff926e7932e6)`(FString && NewValue)` | Sets the value of SessionId using move semantics.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__AuditEvent_1a523d41c3acf3e0f144a342f110e13869)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__AuditEvent_1ae075d8c45605546740058612e9731ff8)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__AuditEvent_1a6dc817996acf24f84364c07683089ee6)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__AuditEvent_1a4960d694b25fbe1a5e4867d02faa918b)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__AuditEvent_1a8b14d2f2a7f6023d93f5de9c0e6ff11e)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__AuditEvent_1a9058659c9549f6ce3c52075eed30596b)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__AuditEvent_1a4affedaaa8d6fa24ecfcf4212fd107ed)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__AuditEvent_1a2718da986bec260504cf9f1d0c7a7459)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__AuditEvent_1a5aaffe4f1be621a24ef6a07d08271ff7)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__AuditEvent_1af3524cd9746aa75174ce89b878bb05f6)`() const` | Checks whether CustomData_Optional has been set.
`public inline FString & `[`GetSessionType`](#structFRHAPI__AuditEvent_1a5a8804834303e0f69626b72f202dae59)`()` | Gets the value of SessionType_Optional, regardless of it having been set.
`public inline const FString & `[`GetSessionType`](#structFRHAPI__AuditEvent_1af57efa3107d5de4207cefaeb93da7ddf)`() const` | Gets the value of SessionType_Optional, regardless of it having been set.
`public inline const FString & `[`GetSessionType`](#structFRHAPI__AuditEvent_1a8ec2668779c742f220866ba278ef9f04)`(const FString & DefaultValue) const` | Gets the value of SessionType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessionType`](#structFRHAPI__AuditEvent_1a0158e378b5f65a76e110981c2cb54f2c)`(FString & OutValue) const` | Fills OutValue with the value of SessionType_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetSessionTypeOrNull`](#structFRHAPI__AuditEvent_1aae6fd8a61abd9b3f2fb41368065d8260)`()` | Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetSessionTypeOrNull`](#structFRHAPI__AuditEvent_1a36229717e139a2234339e82f4fa6f1e3)`() const` | Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessionType`](#structFRHAPI__AuditEvent_1a94d2c114d9c835b2978fb12cff5ac056)`(const FString & NewValue)` | Sets the value of SessionType_Optional and also sets SessionType_IsSet to true.
`public inline void `[`SetSessionType`](#structFRHAPI__AuditEvent_1aa706a9efc4f4d0243a58d1e733774e55)`(FString && NewValue)` | Sets the value of SessionType_Optional and also sets SessionType_IsSet to true using move semantics.
`public inline void `[`ClearSessionType`](#structFRHAPI__AuditEvent_1af485efac1a25386828b114dfc87b5e77)`()` | Clears the value of SessionType_Optional and sets SessionType_IsSet to false.
`public inline bool `[`IsSessionTypeSet`](#structFRHAPI__AuditEvent_1ab19c380b566c11f68c4372d971916dd0)`() const` | Checks whether SessionType_Optional has been set.
`public inline FString & `[`GetRegionId`](#structFRHAPI__AuditEvent_1a91acab3cbb102188d029699297853334)`()` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__AuditEvent_1a25fe49a4f9fa9ce50bf3ba527ce3d2e2)`() const` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__AuditEvent_1ac7cd1b2b74a617537d02bf1a48c80906)`(const FString & DefaultValue) const` | Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRegionId`](#structFRHAPI__AuditEvent_1a99798c97043aa39f5ff4ba032912861f)`(FString & OutValue) const` | Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__AuditEvent_1a16cd6aa12b49b8d4283f548b7b1f23cf)`()` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__AuditEvent_1ad1db6e752d0b1d7d2a93edcf54e6c9e2)`() const` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRegionId`](#structFRHAPI__AuditEvent_1a81d4143343793b2bc8772ea866b7ec6d)`(const FString & NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.
`public inline void `[`SetRegionId`](#structFRHAPI__AuditEvent_1a4f6cd87a8ce93a35108e94daf443fcfc)`(FString && NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.
`public inline void `[`ClearRegionId`](#structFRHAPI__AuditEvent_1ade77c1e5c1364d10ccfd19e9fa122dff)`()` | Clears the value of RegionId_Optional and sets RegionId_IsSet to false.
`public inline bool `[`IsRegionIdSet`](#structFRHAPI__AuditEvent_1afb73e048e9334e0b154a2229fa452f6f)`() const` | Checks whether RegionId_Optional has been set.
`public inline bool & `[`GetJoinable`](#structFRHAPI__AuditEvent_1a3357d78c6f7dfae2786a72c5ecdc278d)`()` | Gets the value of Joinable_Optional, regardless of it having been set.
`public inline const bool & `[`GetJoinable`](#structFRHAPI__AuditEvent_1ad336dd2e9f24138d6dc05349c2316a1e)`() const` | Gets the value of Joinable_Optional, regardless of it having been set.
`public inline const bool & `[`GetJoinable`](#structFRHAPI__AuditEvent_1ada83df49f8f5ee586ae55cb83e6c736b)`(const bool & DefaultValue) const` | Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinable`](#structFRHAPI__AuditEvent_1a2351f67f0c02c17a87a3fb826c72e1a9)`(bool & OutValue) const` | Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetJoinableOrNull`](#structFRHAPI__AuditEvent_1a32bca0dc352a465596742ad71ae439e1)`()` | Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetJoinableOrNull`](#structFRHAPI__AuditEvent_1a891dc40a81c7f379496d59a6a65518ad)`() const` | Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinable`](#structFRHAPI__AuditEvent_1a8849a0e6c3f82d31677920efd479aead)`(const bool & NewValue)` | Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.
`public inline void `[`SetJoinable`](#structFRHAPI__AuditEvent_1a42334e8677be8d3c0c71dc5b4014eca5)`(bool && NewValue)` | Sets the value of Joinable_Optional and also sets Joinable_IsSet to true using move semantics.
`public inline void `[`ClearJoinable`](#structFRHAPI__AuditEvent_1a563363b7d70117df3e9dd9932903125f)`()` | Clears the value of Joinable_Optional and sets Joinable_IsSet to false.
`public inline bool `[`IsJoinableSet`](#structFRHAPI__AuditEvent_1a43ba077bd0755667d6e877f8ae744f32)`() const` | Checks whether Joinable_Optional has been set.
`public inline bool `[`IsJoinableDefaultValue`](#structFRHAPI__AuditEvent_1a062943023a7051996bb465b133bc5958)`() const` | Returns true if Joinable_Optional is set and matches the default value.
`public inline void `[`SetJoinableToDefault`](#structFRHAPI__AuditEvent_1a39e7075fd253eeae1b073585358cf895)`()` | Sets the value of Joinable_Optional to its default and also sets Joinable_IsSet to true.
`public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__AuditEvent_1a808c6918d09d78b629eafb8ee6289117)`()` | Gets the value of UpdatedTeams_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__AuditEvent_1a1053f426a0447b6229236356764b036b)`() const` | Gets the value of UpdatedTeams_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__AuditEvent_1a767b4b8855432558afd31daa6d7f0bc9)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & DefaultValue) const` | Gets the value of UpdatedTeams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetUpdatedTeams`](#structFRHAPI__AuditEvent_1a673e28af1f69b21f6fe06ddd7073cd32)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & OutValue) const` | Fills OutValue with the value of UpdatedTeams_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__AuditEvent_1a215fd844d242f77059e464fe91713971)`()` | Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__AuditEvent_1a202467d80d4a204a7939cef3fe133eab)`() const` | Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetUpdatedTeams`](#structFRHAPI__AuditEvent_1a8238fd52886db81696c362ba9459b0cc)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & NewValue)` | Sets the value of UpdatedTeams_Optional and also sets UpdatedTeams_IsSet to true.
`public inline void `[`SetUpdatedTeams`](#structFRHAPI__AuditEvent_1a5ae33104490c12208b9c766a4e8b971b)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > && NewValue)` | Sets the value of UpdatedTeams_Optional and also sets UpdatedTeams_IsSet to true using move semantics.
`public inline void `[`ClearUpdatedTeams`](#structFRHAPI__AuditEvent_1ae7fbb59c682cdadaa713c1cb50332e51)`()` | Clears the value of UpdatedTeams_Optional and sets UpdatedTeams_IsSet to false.
`public inline bool `[`IsUpdatedTeamsSet`](#structFRHAPI__AuditEvent_1a80604a3d148ea36937ba7803a39ccbee)`() const` | Checks whether UpdatedTeams_Optional has been set.
`public inline ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__AuditEvent_1a7c9da2041bf340202b0458d9d382cbd1)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__AuditEvent_1a8f2c0b9a8b6ec041ffd8678bc0f1f282)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__AuditEvent_1a07b57b67dd7c7f781e16822e17abc77e)`(const ERHAPI_InviteSource & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSource`](#structFRHAPI__AuditEvent_1a97c8b8996109ccfe3ef9914e516db3eb)`(ERHAPI_InviteSource & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__AuditEvent_1adddea8c7887a5c2025071e6a07c91a4e)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__AuditEvent_1a534959d927310092094cd7a4af14ca8e)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSource`](#structFRHAPI__AuditEvent_1acc4da47740c855770e7394e5247f0c13)`(const ERHAPI_InviteSource & NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline void `[`SetSource`](#structFRHAPI__AuditEvent_1aa77d6b7e7a75c222daf289cbc58edf29)`(ERHAPI_InviteSource && NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.
`public inline void `[`ClearSource`](#structFRHAPI__AuditEvent_1ae289f75b711f546b5f66d324dce40ac8)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline bool `[`IsSourceSet`](#structFRHAPI__AuditEvent_1a74018ed8ae1bfbfd9f45ce224b75c4ec)`() const` | Checks whether Source_Optional has been set.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__AuditEvent_1abb468b48f6c0de22bc6c2cd53ba5616c)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__AuditEvent_1a74a441773c5e50cb795ecb29d022817e)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__AuditEvent_1a26921ff3f6d6d9e38364f86748fd47e1)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerUuid`](#structFRHAPI__AuditEvent_1ac554d4e051febbe237753c638a4198c0)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__AuditEvent_1a66d2f901910bbf929f51f1cc0e08d5f5)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__AuditEvent_1ab68949b03a399aacb695603968a17f82)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__AuditEvent_1ae19715aea8b4871a0b72de04887c7ef8)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__AuditEvent_1a88e95b412063e1c90e1da710ab6880c7)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__AuditEvent_1a03c6f2362c235c7631ef36c4f3c42beb)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__AuditEvent_1afec2260e0d9dd9b1721aa7c4214bd739)`() const` | Checks whether PlayerUuid_Optional has been set.
`public inline int32 & `[`GetTeamId`](#structFRHAPI__AuditEvent_1a0de76b15bbf88af7e2a4c76019a43a06)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__AuditEvent_1a98377f3031c49db36f58b8242de8e179)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__AuditEvent_1a270116a8efb36ab3e3e889f6984dc6e8)`(const int32 & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTeamId`](#structFRHAPI__AuditEvent_1a7344ad05cfbb1e0cc893b7f723eea816)`(int32 & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTeamIdOrNull`](#structFRHAPI__AuditEvent_1a55b52093311b66b13e0af0240fa14e38)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__AuditEvent_1ab5b74ecd99e14bc970a61c5571c42efe)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTeamId`](#structFRHAPI__AuditEvent_1a47be0e8b4f61ba41766da5f9315959b5)`(const int32 & NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline void `[`SetTeamId`](#structFRHAPI__AuditEvent_1accabc99661aeab63afd01f33404c7ba9)`(int32 && NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.
`public inline void `[`ClearTeamId`](#structFRHAPI__AuditEvent_1a11aaafae2908f427aef5a5efb99382ea)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline bool `[`IsTeamIdSet`](#structFRHAPI__AuditEvent_1af2681fc55ee0b61827961f53302d914a)`() const` | Checks whether TeamId_Optional has been set.
`public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__AuditEvent_1a77e8d1490e7d0bf2435960dcfb4a615a)`() const` | Returns true if TeamId_Optional is set and matches the default value.
`public inline void `[`SetTeamIdToDefault`](#structFRHAPI__AuditEvent_1a27fd05b2636e3be453c92fed6643e5ac)`()` | Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.
`public inline FString & `[`GetInvitedSessionId`](#structFRHAPI__AuditEvent_1a62eb219b5e0b87ee73f650d901bb6e40)`()` | Gets the value of InvitedSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInvitedSessionId`](#structFRHAPI__AuditEvent_1a634115ed520afe102329cb2ed5f64b6d)`() const` | Gets the value of InvitedSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInvitedSessionId`](#structFRHAPI__AuditEvent_1a30f461792ced15b0e22238647c6180fa)`(const FString & DefaultValue) const` | Gets the value of InvitedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInvitedSessionId`](#structFRHAPI__AuditEvent_1aabb4f44710178fd6e53b95cfdff6ae17)`(FString & OutValue) const` | Fills OutValue with the value of InvitedSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__AuditEvent_1a5cc6af1716b6998ddc948bae760b0568)`()` | Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__AuditEvent_1a06993c9f69fae6bd22547c9c18840295)`() const` | Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInvitedSessionId`](#structFRHAPI__AuditEvent_1a3c32957fb9d0b5e1d7371c6a112b1cba)`(const FString & NewValue)` | Sets the value of InvitedSessionId_Optional and also sets InvitedSessionId_IsSet to true.
`public inline void `[`SetInvitedSessionId`](#structFRHAPI__AuditEvent_1a7badce28c451a3ede11d27c75fcbae4b)`(FString && NewValue)` | Sets the value of InvitedSessionId_Optional and also sets InvitedSessionId_IsSet to true using move semantics.
`public inline void `[`ClearInvitedSessionId`](#structFRHAPI__AuditEvent_1af5c9671893728a053fc0ed1c35cd54a0)`()` | Clears the value of InvitedSessionId_Optional and sets InvitedSessionId_IsSet to false.
`public inline bool `[`IsInvitedSessionIdSet`](#structFRHAPI__AuditEvent_1aee80c206c407b9f83d4e466c399f0132)`() const` | Checks whether InvitedSessionId_Optional has been set.
`public inline FString & `[`GetRemovedSessionId`](#structFRHAPI__AuditEvent_1a0558d4f7cb114dd5e4a5c63823db669f)`()` | Gets the value of RemovedSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRemovedSessionId`](#structFRHAPI__AuditEvent_1a649dc10c448171a7b77b129ba04ebc88)`() const` | Gets the value of RemovedSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRemovedSessionId`](#structFRHAPI__AuditEvent_1a8885d3717ae8711f1b861a8665cf9f67)`(const FString & DefaultValue) const` | Gets the value of RemovedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRemovedSessionId`](#structFRHAPI__AuditEvent_1ade807e3b1634593e4e314a3cc12562ba)`(FString & OutValue) const` | Fills OutValue with the value of RemovedSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__AuditEvent_1a301be296747dca1fa028d581eb26e1a8)`()` | Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__AuditEvent_1adab7542752b238cb1f36b6041a849b92)`() const` | Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRemovedSessionId`](#structFRHAPI__AuditEvent_1af61362af9db9b687702930d07a978a9a)`(const FString & NewValue)` | Sets the value of RemovedSessionId_Optional and also sets RemovedSessionId_IsSet to true.
`public inline void `[`SetRemovedSessionId`](#structFRHAPI__AuditEvent_1a9d61198748341944235b605422454e6e)`(FString && NewValue)` | Sets the value of RemovedSessionId_Optional and also sets RemovedSessionId_IsSet to true using move semantics.
`public inline void `[`ClearRemovedSessionId`](#structFRHAPI__AuditEvent_1aff216f70ad96469f84d59cace7f26a1a)`()` | Clears the value of RemovedSessionId_Optional and sets RemovedSessionId_IsSet to false.
`public inline bool `[`IsRemovedSessionIdSet`](#structFRHAPI__AuditEvent_1a701a19c4cbd0f0dce6e8084988cae627)`() const` | Checks whether RemovedSessionId_Optional has been set.
`public inline FString & `[`GetVersion`](#structFRHAPI__AuditEvent_1a9d793dad68f30dc2711d0caec7f6de7f)`()` | Gets the value of Version_Optional, regardless of it having been set.
`public inline const FString & `[`GetVersion`](#structFRHAPI__AuditEvent_1ae3980476149678887718ea5342dd9fb9)`() const` | Gets the value of Version_Optional, regardless of it having been set.
`public inline const FString & `[`GetVersion`](#structFRHAPI__AuditEvent_1a7757a7ad6ad277652c56baf1526bc540)`(const FString & DefaultValue) const` | Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVersion`](#structFRHAPI__AuditEvent_1a7f3950a12da4cd1035e1894f0c714890)`(FString & OutValue) const` | Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetVersionOrNull`](#structFRHAPI__AuditEvent_1a27285aaf7acd6eebaf889dadb46e51fa)`()` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetVersionOrNull`](#structFRHAPI__AuditEvent_1a7a6bf1df048aa1a694f7c75108affa11)`() const` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVersion`](#structFRHAPI__AuditEvent_1a1c31b5321f12957b29cbb6fd27bc252c)`(const FString & NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true.
`public inline void `[`SetVersion`](#structFRHAPI__AuditEvent_1a4a292c731f135f4bf042ed412da9a915)`(FString && NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics.
`public inline void `[`ClearVersion`](#structFRHAPI__AuditEvent_1a7ceff8afbf6b5e1ace9ada4c055b1a66)`()` | Clears the value of Version_Optional and sets Version_IsSet to false.
`public inline bool `[`IsVersionSet`](#structFRHAPI__AuditEvent_1a54a358e1b91e8639f82106c0c1b762d5)`() const` | Checks whether Version_Optional has been set.
`public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__AuditEvent_1a3b9c38395daf5aa428857c0a1b71c560)`()` | Gets the value of ClientSettings_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__AuditEvent_1ae16e71ce18af000888f1626d14dff2c8)`() const` | Gets the value of ClientSettings_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__AuditEvent_1ac4379a02e5f944d669e39a36f9b96172)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & DefaultValue) const` | Gets the value of ClientSettings_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetClientSettings`](#structFRHAPI__AuditEvent_1a05775d6ef1d3f110a990a843b113f980)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & OutValue) const` | Fills OutValue with the value of ClientSettings_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__AuditEvent_1ad2f161e0f514e33d55120edba4de88af)`()` | Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__AuditEvent_1ab9bba868a0d6be4917ca7c27c8a1e16c)`() const` | Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetClientSettings`](#structFRHAPI__AuditEvent_1aa1287ead01588e4aa867d66bd36b76b7)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & NewValue)` | Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true.
`public inline void `[`SetClientSettings`](#structFRHAPI__AuditEvent_1a18db16fb778956186aa2f39d260b1e69)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` && NewValue)` | Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true using move semantics.
`public inline void `[`ClearClientSettings`](#structFRHAPI__AuditEvent_1a94831c05e3986114c6f2a89b692196e9)`()` | Clears the value of ClientSettings_Optional and sets ClientSettings_IsSet to false.
`public inline bool `[`IsClientSettingsSet`](#structFRHAPI__AuditEvent_1aed553d016754f1f384bfded4f0cb4e86)`() const` | Checks whether ClientSettings_Optional has been set.
`public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__AuditEvent_1a8b90f8299d8e9b4fa6348e7c6b9118e5)`()` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__AuditEvent_1aa5ae5c158be7c1f4574e423dffecdc64)`() const` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__AuditEvent_1ad82913e9b342795ea359d2c2c23c803d)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` | Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCrossplayPreferences`](#structFRHAPI__AuditEvent_1a0e6ff85879b0cedbe7220a084ba75323)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` | Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__AuditEvent_1aad6e79c982e766ab84311fdec1864270)`()` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__AuditEvent_1aa7148c629b1e84ce9366e0a4ffa66948)`() const` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCrossplayPreferences`](#structFRHAPI__AuditEvent_1af3008c45b49c2eb889911d00ebe7ebf0)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & NewValue)` | Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.
`public inline void `[`SetCrossplayPreferences`](#structFRHAPI__AuditEvent_1a7ff6b1395a4c8a8c27669dacbba62ea7)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` && NewValue)` | Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true using move semantics.
`public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__AuditEvent_1af1899c1e5b5181b70c8778ae01c055c7)`()` | Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.
`public inline bool `[`IsCrossplayPreferencesSet`](#structFRHAPI__AuditEvent_1ad106f4fb3165db8eaf5a4f84c87be306)`() const` | Checks whether CrossplayPreferences_Optional has been set.
`public inline ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__AuditEvent_1a09543a4f921c733f0a4c5fc3785a4ae1)`()` | Gets the value of PlayerStatus_Optional, regardless of it having been set.
`public inline const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__AuditEvent_1aa1416f7842b296578e03e11d7f44976f)`() const` | Gets the value of PlayerStatus_Optional, regardless of it having been set.
`public inline const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__AuditEvent_1a4d7cf1baf76fe39fbab83ee914a3bac0)`(const ERHAPI_SessionPlayerStatus & DefaultValue) const` | Gets the value of PlayerStatus_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerStatus`](#structFRHAPI__AuditEvent_1a6a859a33a504f780c5cdac0dcad855de)`(ERHAPI_SessionPlayerStatus & OutValue) const` | Fills OutValue with the value of PlayerStatus_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__AuditEvent_1a79c10ee6be7c0ca6c30f77e602783af8)`()` | Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__AuditEvent_1a37a7e8a742f239651afd63f78f473d29)`() const` | Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerStatus`](#structFRHAPI__AuditEvent_1a1808222701b0c45c69bbbc1dd355f540)`(const ERHAPI_SessionPlayerStatus & NewValue)` | Sets the value of PlayerStatus_Optional and also sets PlayerStatus_IsSet to true.
`public inline void `[`SetPlayerStatus`](#structFRHAPI__AuditEvent_1a8fdc03635bf2ac0aa85dadfd14bcc4b1)`(ERHAPI_SessionPlayerStatus && NewValue)` | Sets the value of PlayerStatus_Optional and also sets PlayerStatus_IsSet to true using move semantics.
`public inline void `[`ClearPlayerStatus`](#structFRHAPI__AuditEvent_1aa6d6d3cf6091881b21f450168b45f4c8)`()` | Clears the value of PlayerStatus_Optional and sets PlayerStatus_IsSet to false.
`public inline bool `[`IsPlayerStatusSet`](#structFRHAPI__AuditEvent_1ab8a02c50baa7a910cdddb0d16821f76e)`() const` | Checks whether PlayerStatus_Optional has been set.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__AuditEvent_1a1c8c5aea286587b45753bbdaf584088b)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__AuditEvent_1a82f98401f9e494b6986703d382d8899c)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__AuditEvent_1a6d06d12af23cf8333d8958f649dc450d)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatform`](#structFRHAPI__AuditEvent_1a2fe237dcd924c666d499899ee49e36d0)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__AuditEvent_1a7bf34fa2f7e4f0099afd3f4da02148c7)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__AuditEvent_1afbc70eef24feb7b67fdc8fbb8ac73b93)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatform`](#structFRHAPI__AuditEvent_1abbd1b1149c514a1526d84bbfac1df1cf)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline void `[`SetPlatform`](#structFRHAPI__AuditEvent_1a1d7407c70e5958528911610f12794cd2)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__AuditEvent_1aa09b2a730eadbccecf65f6491dd39461)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline bool `[`IsPlatformSet`](#structFRHAPI__AuditEvent_1ae0374725fe376fb4276ea59474a0e783)`() const` | Checks whether Platform_Optional has been set.
`public inline FString & `[`GetPlatformSessionId`](#structFRHAPI__AuditEvent_1a008eef53734e140db050a47ebd771326)`()` | Gets the value of PlatformSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformSessionId`](#structFRHAPI__AuditEvent_1a71694e2d4702e7340e562ca176704e03)`() const` | Gets the value of PlatformSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformSessionId`](#structFRHAPI__AuditEvent_1a88838d73e8904fa68b5d4a9bc1d6975f)`(const FString & DefaultValue) const` | Gets the value of PlatformSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformSessionId`](#structFRHAPI__AuditEvent_1a2813c6585a35e3684dc5803706fcd359)`(FString & OutValue) const` | Fills OutValue with the value of PlatformSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__AuditEvent_1ae9b0667b57eeea70e96bef8594476c03)`()` | Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__AuditEvent_1ad1bd61054f2c4279b81d1bd63af5cf51)`() const` | Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformSessionId`](#structFRHAPI__AuditEvent_1ac2eef0648ddb5613c03bfbd36af86360)`(const FString & NewValue)` | Sets the value of PlatformSessionId_Optional and also sets PlatformSessionId_IsSet to true.
`public inline void `[`SetPlatformSessionId`](#structFRHAPI__AuditEvent_1a1e17878a603c771549c57fc5cb95da07)`(FString && NewValue)` | Sets the value of PlatformSessionId_Optional and also sets PlatformSessionId_IsSet to true using move semantics.
`public inline void `[`ClearPlatformSessionId`](#structFRHAPI__AuditEvent_1a5fc4053f6b838a472fbe315133728400)`()` | Clears the value of PlatformSessionId_Optional and sets PlatformSessionId_IsSet to false.
`public inline bool `[`IsPlatformSessionIdSet`](#structFRHAPI__AuditEvent_1a66f950e18c3943f421f566d3d96d8574)`() const` | Checks whether PlatformSessionId_Optional has been set.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__AuditEvent_1a6b5289bc7adb7e630dc2042890893fb3)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__AuditEvent_1a74a2da0c99c4504653080028b8a346ef)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__AuditEvent_1a1cc40d701b4c216c6e0bcade0de06c04)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceId`](#structFRHAPI__AuditEvent_1a22c9fb95a6d83f9f192bbd2e5903ae85)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__AuditEvent_1afe65fcf298fc6509a292f7d0d6a85e79)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__AuditEvent_1aa2d8567baf45a88656b661f0f6f4c2d0)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceId`](#structFRHAPI__AuditEvent_1a4b6b15fe6bb2f8cc822c9da426c6745f)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline void `[`SetInstanceId`](#structFRHAPI__AuditEvent_1a9a7fc2a6faab6778919a07a24220507e)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__AuditEvent_1a22603a0b806c747218532f541db1638b)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline bool `[`IsInstanceIdSet`](#structFRHAPI__AuditEvent_1acc3a47b0824f678387ab3e2291e3c9a4)`() const` | Checks whether InstanceId_Optional has been set.
`public inline ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__AuditEvent_1a9d66c0c2bdc38526dde839fad515cd9e)`()` | Gets the value of HostType_Optional, regardless of it having been set.
`public inline const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__AuditEvent_1a1277d2bfc9f40c60b20a7d0f01078cee)`() const` | Gets the value of HostType_Optional, regardless of it having been set.
`public inline const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__AuditEvent_1ab7498ddc966a1660abd029e5fab21b69)`(const ERHAPI_HostType & DefaultValue) const` | Gets the value of HostType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostType`](#structFRHAPI__AuditEvent_1a3d7240abb4d60f56235c65c6ea077979)`(ERHAPI_HostType & OutValue) const` | Fills OutValue with the value of HostType_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__AuditEvent_1ab98f46ffdbc0180941dd80a140d53abf)`()` | Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__AuditEvent_1adbd22762bbb6a83082063f1ced682e7c)`() const` | Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostType`](#structFRHAPI__AuditEvent_1a227a5d5ebab31508e083798da384a47c)`(const ERHAPI_HostType & NewValue)` | Sets the value of HostType_Optional and also sets HostType_IsSet to true.
`public inline void `[`SetHostType`](#structFRHAPI__AuditEvent_1ac75f49285f71d1ac1fcea3baf5b8ef4a)`(ERHAPI_HostType && NewValue)` | Sets the value of HostType_Optional and also sets HostType_IsSet to true using move semantics.
`public inline void `[`ClearHostType`](#structFRHAPI__AuditEvent_1af2d3969a72d3de486e6730f174d54960)`()` | Clears the value of HostType_Optional and sets HostType_IsSet to false.
`public inline bool `[`IsHostTypeSet`](#structFRHAPI__AuditEvent_1a6100cac42fb0561f9a4848569cf529bf)`() const` | Checks whether HostType_Optional has been set.
`public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__AuditEvent_1a1d61167462309098b1b1e1f133dc25bb)`()` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__AuditEvent_1af5bc1e66532f2b87793b2fab630c020a)`() const` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__AuditEvent_1aa5028f0e917627559ae851da15271490)`(const FGuid & DefaultValue) const` | Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__AuditEvent_1a78914fb5273ca86ef9130daf01c0d299)`(FGuid & OutValue) const` | Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__AuditEvent_1a04283d2d1625817d9fe5ea93ad272c31)`()` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__AuditEvent_1a9eb09e9c55bdb1c3b6f4f4795b537125)`() const` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostPlayerUuid`](#structFRHAPI__AuditEvent_1afe493a5cd3b78599642e2f372e75b9a0)`(const FGuid & NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.
`public inline void `[`SetHostPlayerUuid`](#structFRHAPI__AuditEvent_1a6651e7be036259b5e2cbe048f74c154c)`(FGuid && NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__AuditEvent_1aacdcdb79e5bcac41ff75fc7946d361e9)`()` | Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.
`public inline bool `[`IsHostPlayerUuidSet`](#structFRHAPI__AuditEvent_1a1ee0aa13a2cbd42dc35764feb2da14da)`() const` | Checks whether HostPlayerUuid_Optional has been set.
`public inline FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a2fe9a1a405fcb37045b751d6d886bf17)`()` | Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a3825823cb1b0f1cd6a2b91701a83e401)`() const` | Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a0fd70dd46a2887eceb2fcbb155ea7a99)`(const FGuid & DefaultValue) const` | Gets the value of InstanceRequestTemplate_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a92a8f742f19ffff30d7637eb0a422e26)`(FGuid & OutValue) const` | Fills OutValue with the value of InstanceRequestTemplate_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__AuditEvent_1a9f5d08e9073e49abb45c558a144f3e7d)`()` | Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__AuditEvent_1ac2795590b65bb05a55273f01b35f66bb)`() const` | Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a5c57bc75cb577ee794c672cf55bae07b)`(const FGuid & NewValue)` | Sets the value of InstanceRequestTemplate_Optional and also sets InstanceRequestTemplate_IsSet to true.
`public inline void `[`SetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a76fc5a4577fdf7462180bb4a2979c54e)`(FGuid && NewValue)` | Sets the value of InstanceRequestTemplate_Optional and also sets InstanceRequestTemplate_IsSet to true using move semantics.
`public inline void `[`ClearInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a524c77ab8b9f19d870035b5ca5882800)`()` | Clears the value of InstanceRequestTemplate_Optional and sets InstanceRequestTemplate_IsSet to false.
`public inline bool `[`IsInstanceRequestTemplateSet`](#structFRHAPI__AuditEvent_1aeef6c3214922d53a11bacceb7e3cea68)`() const` | Checks whether InstanceRequestTemplate_Optional has been set.
`public inline FString & `[`GetMap`](#structFRHAPI__AuditEvent_1a289e661e172e547e331d56da351a28be)`()` | Gets the value of Map_Optional, regardless of it having been set.
`public inline const FString & `[`GetMap`](#structFRHAPI__AuditEvent_1a2c4e8a32d546efa92b631b42fb4794e6)`() const` | Gets the value of Map_Optional, regardless of it having been set.
`public inline const FString & `[`GetMap`](#structFRHAPI__AuditEvent_1aedde6a1fd2c099b0c21bacf8595d09f2)`(const FString & DefaultValue) const` | Gets the value of Map_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMap`](#structFRHAPI__AuditEvent_1aa3733fd2051cab50d2a2c5875f035bc5)`(FString & OutValue) const` | Fills OutValue with the value of Map_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMapOrNull`](#structFRHAPI__AuditEvent_1a45077dae475699cd13a936e62efca1b3)`()` | Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMapOrNull`](#structFRHAPI__AuditEvent_1a993511da5e1e0b0fb305cc841a76f65f)`() const` | Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMap`](#structFRHAPI__AuditEvent_1a8c12843b486e7c44895f91e3048c6c16)`(const FString & NewValue)` | Sets the value of Map_Optional and also sets Map_IsSet to true.
`public inline void `[`SetMap`](#structFRHAPI__AuditEvent_1a26bb3a4f8c3a89e44e03fef02d5c0f4c)`(FString && NewValue)` | Sets the value of Map_Optional and also sets Map_IsSet to true using move semantics.
`public inline void `[`ClearMap`](#structFRHAPI__AuditEvent_1a6d6275509b146ad4eba918dbcb22d0ad)`()` | Clears the value of Map_Optional and sets Map_IsSet to false.
`public inline bool `[`IsMapSet`](#structFRHAPI__AuditEvent_1abde78ff0c14f2822e4a94a7677b1c2f8)`() const` | Checks whether Map_Optional has been set.
`public inline FString & `[`GetMode`](#structFRHAPI__AuditEvent_1a8784cb1ac0d41d5012b6580e23ce70c1)`()` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline const FString & `[`GetMode`](#structFRHAPI__AuditEvent_1a67caa96315fe4bc1551eee18cbbe6ec4)`() const` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline const FString & `[`GetMode`](#structFRHAPI__AuditEvent_1aca3d0ef3e302db8240cdad6379dbb640)`(const FString & DefaultValue) const` | Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMode`](#structFRHAPI__AuditEvent_1a3d2d06cc48d5c42680fde1952dacf915)`(FString & OutValue) const` | Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetModeOrNull`](#structFRHAPI__AuditEvent_1a74ef2db4b8cf448fe1b78e5fe08f9523)`()` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetModeOrNull`](#structFRHAPI__AuditEvent_1aca7970fbc5b6f9c6edcb7edb90924a2a)`() const` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMode`](#structFRHAPI__AuditEvent_1acdf423879d2e7c7dd44ad22aa8207c68)`(const FString & NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true.
`public inline void `[`SetMode`](#structFRHAPI__AuditEvent_1a648c4e548da4da4383dce888df33752b)`(FString && NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true using move semantics.
`public inline void `[`ClearMode`](#structFRHAPI__AuditEvent_1a9ba2ddca1885eb21298dbb4b623759f8)`()` | Clears the value of Mode_Optional and sets Mode_IsSet to false.
`public inline bool `[`IsModeSet`](#structFRHAPI__AuditEvent_1ab0ee7f51d48c7152d659dfa1eb26533d)`() const` | Checks whether Mode_Optional has been set.
`public inline FString & `[`GetAllocationId`](#structFRHAPI__AuditEvent_1a6bcd8b3b583aee81da1028103a1f91fc)`()` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetAllocationId`](#structFRHAPI__AuditEvent_1a6a59667aa4533b82179f88688db187af)`() const` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetAllocationId`](#structFRHAPI__AuditEvent_1a8c820d74b60d4f18c84dabfa0763e32c)`(const FString & DefaultValue) const` | Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAllocationId`](#structFRHAPI__AuditEvent_1aca70562b5536641a9011b237a8747858)`(FString & OutValue) const` | Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetAllocationIdOrNull`](#structFRHAPI__AuditEvent_1a0115eb2695ea119644f35ed9a2ee1b0f)`()` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__AuditEvent_1a317ad56a6b66b9e1ac0c2c49b8e75527)`() const` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAllocationId`](#structFRHAPI__AuditEvent_1a26ff30d159006de17d5f4eb37737ecd5)`(const FString & NewValue)` | Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.
`public inline void `[`SetAllocationId`](#structFRHAPI__AuditEvent_1aa84df1132beaf5bb229a539f3dbb268d)`(FString && NewValue)` | Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true using move semantics.
`public inline void `[`ClearAllocationId`](#structFRHAPI__AuditEvent_1ab04e25609ffcf65ec41946fec4c51f80)`()` | Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.
`public inline bool `[`IsAllocationIdSet`](#structFRHAPI__AuditEvent_1a8688ecf4ec4beef7f70b1b8eccb4f6fd)`() const` | Checks whether AllocationId_Optional has been set.
`public inline ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__AuditEvent_1acabc21e1822d2bf322d54dc092e85778)`()` | Gets the value of JoinStatus_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__AuditEvent_1a0f739d993b9a0f8b707c3589fccb1222)`() const` | Gets the value of JoinStatus_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__AuditEvent_1a983dc277f35ecf088b0852cd4fcbc6af)`(const ERHAPI_InstanceJoinableStatus & DefaultValue) const` | Gets the value of JoinStatus_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinStatus`](#structFRHAPI__AuditEvent_1ad317d132732992d96bfa9c87769250d3)`(ERHAPI_InstanceJoinableStatus & OutValue) const` | Fills OutValue with the value of JoinStatus_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__AuditEvent_1a6c023e6850a1e1b1d7dd7c870bdd000c)`()` | Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__AuditEvent_1a62e55c214bd64e4c85149f722232acac)`() const` | Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinStatus`](#structFRHAPI__AuditEvent_1a9ad57b57c4338b2f4f43581d2e7ca6d6)`(const ERHAPI_InstanceJoinableStatus & NewValue)` | Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true.
`public inline void `[`SetJoinStatus`](#structFRHAPI__AuditEvent_1a5490ddb4893256915a7ec8a49e0ce454)`(ERHAPI_InstanceJoinableStatus && NewValue)` | Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true using move semantics.
`public inline void `[`ClearJoinStatus`](#structFRHAPI__AuditEvent_1aa2055e3edb743366349cb596e48c6dc9)`()` | Clears the value of JoinStatus_Optional and sets JoinStatus_IsSet to false.
`public inline bool `[`IsJoinStatusSet`](#structFRHAPI__AuditEvent_1ae5bce6fbd66439f134728541c4c8c429)`() const` | Checks whether JoinStatus_Optional has been set.
`public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__AuditEvent_1a76be82a237bbfbc53e978a4a3a6cd968)`()` | Gets the value of JoinParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__AuditEvent_1a14ede778e2a72bd80813b0f801d2f396)`() const` | Gets the value of JoinParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__AuditEvent_1a139874d28160d5df1a551853bb27dd30)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & DefaultValue) const` | Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinParams`](#structFRHAPI__AuditEvent_1a65fc71a298fad25ea455a43649d890bf)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & OutValue) const` | Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__AuditEvent_1a4f09acb45c110e2946f6d3bd55c2dca1)`()` | Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__AuditEvent_1adbac336271adc89dce543e627e590865)`() const` | Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinParams`](#structFRHAPI__AuditEvent_1af8a036b78938df2363a5297dd9b79703)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & NewValue)` | Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.
`public inline void `[`SetJoinParams`](#structFRHAPI__AuditEvent_1a7b9b2b722b6cd7a68a7aa747f7c438d0)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` && NewValue)` | Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true using move semantics.
`public inline void `[`ClearJoinParams`](#structFRHAPI__AuditEvent_1a4c60bb357f152966a362b08045e787be)`()` | Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.
`public inline bool `[`IsJoinParamsSet`](#structFRHAPI__AuditEvent_1ab2d765ade9bb9866bd5ad7d575e78b81)`() const` | Checks whether JoinParams_Optional has been set.
`public inline ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__AuditEvent_1a37f6523faf2e05665f098bdcf30cfe9f)`()` | Gets the value of InstanceHealth_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__AuditEvent_1a71250a1254772e78c280222c573699da)`() const` | Gets the value of InstanceHealth_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__AuditEvent_1a9ae0d9452271f312d8216051a8311dd1)`(const ERHAPI_InstanceHealthStatus & DefaultValue) const` | Gets the value of InstanceHealth_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceHealth`](#structFRHAPI__AuditEvent_1adb0bc9aab3afcdcffd3ac2ed21dd6380)`(ERHAPI_InstanceHealthStatus & OutValue) const` | Fills OutValue with the value of InstanceHealth_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__AuditEvent_1a51b3da29cffd589b7b4df44e1219b9b4)`()` | Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__AuditEvent_1af549b589a9adb954dd05fff760c70a40)`() const` | Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceHealth`](#structFRHAPI__AuditEvent_1a16e475ad1256789f7bf0a16d21f38c75)`(const ERHAPI_InstanceHealthStatus & NewValue)` | Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true.
`public inline void `[`SetInstanceHealth`](#structFRHAPI__AuditEvent_1a6f54c0cafe05dfa7a852d378988022dc)`(ERHAPI_InstanceHealthStatus && NewValue)` | Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true using move semantics.
`public inline void `[`ClearInstanceHealth`](#structFRHAPI__AuditEvent_1af8b4b7b6a59f3d4bb4ba9529dc729d7c)`()` | Clears the value of InstanceHealth_Optional and sets InstanceHealth_IsSet to false.
`public inline bool `[`IsInstanceHealthSet`](#structFRHAPI__AuditEvent_1ae94e17ff4a1dd18d84cacda3accc4ce0)`() const` | Checks whether InstanceHealth_Optional has been set.
`public inline FString & `[`GetQueueId`](#structFRHAPI__AuditEvent_1aa43b6544f15c89f3a408234d9a3262eb)`()` | Gets the value of QueueId_Optional, regardless of it having been set.
`public inline const FString & `[`GetQueueId`](#structFRHAPI__AuditEvent_1aa49f2fb1a6e0b2bbd4b3efa1aec1706b)`() const` | Gets the value of QueueId_Optional, regardless of it having been set.
`public inline const FString & `[`GetQueueId`](#structFRHAPI__AuditEvent_1a629f9d9e6662bd34de6fcd88fb2b50f3)`(const FString & DefaultValue) const` | Gets the value of QueueId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetQueueId`](#structFRHAPI__AuditEvent_1ad4f3eafb9ca60cef0f70d162bedeefef)`(FString & OutValue) const` | Fills OutValue with the value of QueueId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetQueueIdOrNull`](#structFRHAPI__AuditEvent_1a0d963bbf5a530ea26aecc488eb82706f)`()` | Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetQueueIdOrNull`](#structFRHAPI__AuditEvent_1af2a86e68056f1799bd1574b2840ab2d4)`() const` | Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetQueueId`](#structFRHAPI__AuditEvent_1a92e54b59fe88672a6e0515e0aab8a53c)`(const FString & NewValue)` | Sets the value of QueueId_Optional and also sets QueueId_IsSet to true.
`public inline void `[`SetQueueId`](#structFRHAPI__AuditEvent_1ac0c803793dfbb5cd36a5570b964bc116)`(FString && NewValue)` | Sets the value of QueueId_Optional and also sets QueueId_IsSet to true using move semantics.
`public inline void `[`ClearQueueId`](#structFRHAPI__AuditEvent_1a905562c31a2b45c0ade8bcfe9e0cbfdf)`()` | Clears the value of QueueId_Optional and sets QueueId_IsSet to false.
`public inline bool `[`IsQueueIdSet`](#structFRHAPI__AuditEvent_1a75ba5ab01b9afe2f1701b68116937fd9)`() const` | Checks whether QueueId_Optional has been set.
`public inline FString & `[`GetTicketId`](#structFRHAPI__AuditEvent_1a5cfe2316ee1159b27d7dc7ebeac4717a)`()` | Gets the value of TicketId_Optional, regardless of it having been set.
`public inline const FString & `[`GetTicketId`](#structFRHAPI__AuditEvent_1a28689df37e75f22e6bdce47782d8275b)`() const` | Gets the value of TicketId_Optional, regardless of it having been set.
`public inline const FString & `[`GetTicketId`](#structFRHAPI__AuditEvent_1aea4529db6968163bccf26166f45ee301)`(const FString & DefaultValue) const` | Gets the value of TicketId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTicketId`](#structFRHAPI__AuditEvent_1ab2163ec45ace1d5da478d9a43aeb7f88)`(FString & OutValue) const` | Fills OutValue with the value of TicketId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTicketIdOrNull`](#structFRHAPI__AuditEvent_1acb27402c766cf2920337e3bd07e61d24)`()` | Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTicketIdOrNull`](#structFRHAPI__AuditEvent_1af819b67f9790340dd2f49c0a5d9ad6ce)`() const` | Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTicketId`](#structFRHAPI__AuditEvent_1a0ad577a0200e4c8f3ec0dc23762a6095)`(const FString & NewValue)` | Sets the value of TicketId_Optional and also sets TicketId_IsSet to true.
`public inline void `[`SetTicketId`](#structFRHAPI__AuditEvent_1a84b357130e96b5131419b7bf391d8a4e)`(FString && NewValue)` | Sets the value of TicketId_Optional and also sets TicketId_IsSet to true using move semantics.
`public inline void `[`ClearTicketId`](#structFRHAPI__AuditEvent_1a3a95477a2909de1f2322a6dc33532dd5)`()` | Clears the value of TicketId_Optional and sets TicketId_IsSet to false.
`public inline bool `[`IsTicketIdSet`](#structFRHAPI__AuditEvent_1a1638925762966feb0bd5564fd523c694)`() const` | Checks whether TicketId_Optional has been set.
`public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__AuditEvent_1ab7242432fb5072de114538c9c8442d19)`()` | Gets the value of AdditionalParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__AuditEvent_1ae666aadaff26911ab216eb09b375118d)`() const` | Gets the value of AdditionalParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__AuditEvent_1aff2b399aa09d9cf5a6f7373bc392742b)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & DefaultValue) const` | Gets the value of AdditionalParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAdditionalParams`](#structFRHAPI__AuditEvent_1ab3466dd7744e301ef79c215ccf45e1ca)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & OutValue) const` | Fills OutValue with the value of AdditionalParams_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalParamsOrNull`](#structFRHAPI__AuditEvent_1a69bf6c977ec9df98464c6a7bb074761c)`()` | Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalParamsOrNull`](#structFRHAPI__AuditEvent_1a87d6f4115ba305ca058902dc80c827d0)`() const` | Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAdditionalParams`](#structFRHAPI__AuditEvent_1a7c7a3b41818d9041f02d4f707d0c1b45)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & NewValue)` | Sets the value of AdditionalParams_Optional and also sets AdditionalParams_IsSet to true.
`public inline void `[`SetAdditionalParams`](#structFRHAPI__AuditEvent_1a8e8fd0b1aecfd5302d00f1c16f1a324f)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` && NewValue)` | Sets the value of AdditionalParams_Optional and also sets AdditionalParams_IsSet to true using move semantics.
`public inline void `[`ClearAdditionalParams`](#structFRHAPI__AuditEvent_1a576652cb7ff7d291a1235fe1116724c4)`()` | Clears the value of AdditionalParams_Optional and sets AdditionalParams_IsSet to false.
`public inline bool `[`IsAdditionalParamsSet`](#structFRHAPI__AuditEvent_1a92e5f486e956608fb0dda188d73e003a)`() const` | Checks whether AdditionalParams_Optional has been set.
`public inline TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__AuditEvent_1a2fe433394e2e7913f980c15d9a8e6626)`()` | Gets the value of MapPreferences_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__AuditEvent_1aef35365d5ed232a6ad50f84b7df20764)`() const` | Gets the value of MapPreferences_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__AuditEvent_1abb26bd7c845aa1cb8aa7fe0034bf757b)`(const TArray< FString > & DefaultValue) const` | Gets the value of MapPreferences_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMapPreferences`](#structFRHAPI__AuditEvent_1af5102a96c848850e87d52973a585d314)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of MapPreferences_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__AuditEvent_1a6b55b4c59b1eb9834d4e7ec7a2891de0)`()` | Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__AuditEvent_1ade70d364e0a4ff89e1ef1082d3488af0)`() const` | Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMapPreferences`](#structFRHAPI__AuditEvent_1ac9fb953163a95ff99ea2ef834d19253f)`(const TArray< FString > & NewValue)` | Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true.
`public inline void `[`SetMapPreferences`](#structFRHAPI__AuditEvent_1a56f8ae31a8695e7531e9eb1d68dbfd76)`(TArray< FString > && NewValue)` | Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true using move semantics.
`public inline void `[`ClearMapPreferences`](#structFRHAPI__AuditEvent_1a33c453410167253e097ed36c2ee93f44)`()` | Clears the value of MapPreferences_Optional and sets MapPreferences_IsSet to false.
`public inline bool `[`IsMapPreferencesSet`](#structFRHAPI__AuditEvent_1acfab0741719944600d85244c327c84d7)`() const` | Checks whether MapPreferences_Optional has been set.
`public inline FString & `[`GetQueuedSessionId`](#structFRHAPI__AuditEvent_1adf50042aa36b8d3eebb6e3e7b8fff703)`()` | Gets the value of QueuedSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetQueuedSessionId`](#structFRHAPI__AuditEvent_1aab47942be6e0bc3b5355886ffebdf24c)`() const` | Gets the value of QueuedSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetQueuedSessionId`](#structFRHAPI__AuditEvent_1a86d4d4d5c5621b946dc6bbac39c68bed)`(const FString & DefaultValue) const` | Gets the value of QueuedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetQueuedSessionId`](#structFRHAPI__AuditEvent_1aafda7af949c96b72808c666d0cbd29e3)`(FString & OutValue) const` | Fills OutValue with the value of QueuedSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__AuditEvent_1a323eac4f800388ad3d76ba72cf088a6a)`()` | Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__AuditEvent_1a530fb2df499b7909f52e807c84d7b4ce)`() const` | Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetQueuedSessionId`](#structFRHAPI__AuditEvent_1ae9e67b72fec1cc3b3677be8d0fd19777)`(const FString & NewValue)` | Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true.
`public inline void `[`SetQueuedSessionId`](#structFRHAPI__AuditEvent_1a8ac88751a9d572b7c34c42542563e620)`(FString && NewValue)` | Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true using move semantics.
`public inline void `[`ClearQueuedSessionId`](#structFRHAPI__AuditEvent_1aba3557a10d63a3d8efba7904f34c1c92)`()` | Clears the value of QueuedSessionId_Optional and sets QueuedSessionId_IsSet to false.
`public inline bool `[`IsQueuedSessionIdSet`](#structFRHAPI__AuditEvent_1a363ffaafb8457ba77084ba3c813808b1)`() const` | Checks whether QueuedSessionId_Optional has been set.
`public inline FString & `[`GetMatchId`](#structFRHAPI__AuditEvent_1a163c51822e728d02eccb635f0f854686)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__AuditEvent_1aa58a3dfcbc3f8303d11856a13b9fe12a)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__AuditEvent_1a45d714f3e3bb829b3accab83e90a2199)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchId`](#structFRHAPI__AuditEvent_1a7b6ded106eedb8fb15d3358e89dfd405)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__AuditEvent_1ad311178a5169f61ba75ae20e0cf278b2)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__AuditEvent_1a48bb0aa2a813367487b39d33e6f7d3f5)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchId`](#structFRHAPI__AuditEvent_1a3153129f6b5b0d0b6eb327fe17612222)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline void `[`SetMatchId`](#structFRHAPI__AuditEvent_1a1391a972d06c5729368c556d4071d865)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__AuditEvent_1abd7aede0da0d4e281062c95871342c64)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline bool `[`IsMatchIdSet`](#structFRHAPI__AuditEvent_1acf38bcadf9e3d05e939c9477bbfb9473)`() const` | Checks whether MatchId_Optional has been set.
`public inline FGuid & `[`GetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a105a39d8599c820c8b5bfcbe58c34800)`()` | Gets the value of RequestingUserUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetRequestingUserUuid`](#structFRHAPI__AuditEvent_1af348b03db08f9c3d4e7f4b9020b41b33)`() const` | Gets the value of RequestingUserUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a84ce14b98c5906871df1ca28dbe69dd1)`(const FGuid & DefaultValue) const` | Gets the value of RequestingUserUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a2b54f7415fc9c2b73f037a6be257f393)`(FGuid & OutValue) const` | Fills OutValue with the value of RequestingUserUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetRequestingUserUuidOrNull`](#structFRHAPI__AuditEvent_1a35a4226299a3419a32b5c250719337dd)`()` | Returns a pointer to RequestingUserUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetRequestingUserUuidOrNull`](#structFRHAPI__AuditEvent_1a3b7fa9eb310bb80a950219dbcb60693a)`() const` | Returns a pointer to RequestingUserUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a2c40640e2af1be4c876c2d8e8ac0de34)`(const FGuid & NewValue)` | Sets the value of RequestingUserUuid_Optional and also sets RequestingUserUuid_IsSet to true.
`public inline void `[`SetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a72846483bb51daa209b4c862b7096e11)`(FGuid && NewValue)` | Sets the value of RequestingUserUuid_Optional and also sets RequestingUserUuid_IsSet to true using move semantics.
`public inline void `[`ClearRequestingUserUuid`](#structFRHAPI__AuditEvent_1a75d20856ad2d8cccdcf2157a1238c0c1)`()` | Clears the value of RequestingUserUuid_Optional and sets RequestingUserUuid_IsSet to false.
`public inline bool `[`IsRequestingUserUuidSet`](#structFRHAPI__AuditEvent_1ad62bfca13adf09b1ad8915ceb2c20d84)`() const` | Checks whether RequestingUserUuid_Optional has been set.
`public inline FDateTime & `[`GetEventDatetime`](#structFRHAPI__AuditEvent_1a0b7b8cb1b88f418f93206b689851621c)`()` | Gets the value of EventDatetime.
`public inline const FDateTime & `[`GetEventDatetime`](#structFRHAPI__AuditEvent_1a28830a7a894b9ab55814bad91ae87390)`() const` | Gets the value of EventDatetime.
`public inline void `[`SetEventDatetime`](#structFRHAPI__AuditEvent_1ad4e8f68d0b4064c703124dba80dbfb87)`(const FDateTime & NewValue)` | Sets the value of EventDatetime.
`public inline void `[`SetEventDatetime`](#structFRHAPI__AuditEvent_1a8738833f39eb52d322a8b43157aca869)`(FDateTime && NewValue)` | Sets the value of EventDatetime using move semantics.

### Members

#### `public FString `[`EventName`](#structFRHAPI__AuditEvent_1a0e11dca6739b8cd51e77938830d9bc34) <a id="structFRHAPI__AuditEvent_1a0e11dca6739b8cd51e77938830d9bc34"></a>

Name of the audit event you are creating. Customer created events will be prepended with 'customer.'.

#### `public FString `[`SessionId`](#structFRHAPI__AuditEvent_1aa3464d29168142e832c39d802bad34ce) <a id="structFRHAPI__AuditEvent_1aa3464d29168142e832c39d802bad34ce"></a>

ID of the session this event occurred in.

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__AuditEvent_1a82e273285f49d980093cd4bde5510df9) <a id="structFRHAPI__AuditEvent_1a82e273285f49d980093cd4bde5510df9"></a>

Custom data for this audit request.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__AuditEvent_1aaded55db324c1f64f857369e579564f6) <a id="structFRHAPI__AuditEvent_1aaded55db324c1f64f857369e579564f6"></a>

true if CustomData_Optional has been set to a value

#### `public FString `[`SessionType_Optional`](#structFRHAPI__AuditEvent_1a87be75fe3f7219468955d7958e106aeb) <a id="structFRHAPI__AuditEvent_1a87be75fe3f7219468955d7958e106aeb"></a>

Type of the session this event occurred in.

#### `public bool `[`SessionType_IsSet`](#structFRHAPI__AuditEvent_1abe58daa1f44673b441b284bdd174ad7c) <a id="structFRHAPI__AuditEvent_1abe58daa1f44673b441b284bdd174ad7c"></a>

true if SessionType_Optional has been set to a value

#### `public FString `[`RegionId_Optional`](#structFRHAPI__AuditEvent_1a3e6a3125468f0e15dbdf54463aac4690) <a id="structFRHAPI__AuditEvent_1a3e6a3125468f0e15dbdf54463aac4690"></a>

Region ID for this event.

#### `public bool `[`RegionId_IsSet`](#structFRHAPI__AuditEvent_1a893d0bec95f55de1e7940e6ddc9e00db) <a id="structFRHAPI__AuditEvent_1a893d0bec95f55de1e7940e6ddc9e00db"></a>

true if RegionId_Optional has been set to a value

#### `public bool `[`Joinable_Optional`](#structFRHAPI__AuditEvent_1a1256853740991d081ebf0b20b3dfd1d3) <a id="structFRHAPI__AuditEvent_1a1256853740991d081ebf0b20b3dfd1d3"></a>

Whether or not the session is publicly joinable.

#### `public bool `[`Joinable_IsSet`](#structFRHAPI__AuditEvent_1a012943831fcce2063015ebcaf99528ee) <a id="structFRHAPI__AuditEvent_1a012943831fcce2063015ebcaf99528ee"></a>

true if Joinable_Optional has been set to a value

#### `public TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > `[`UpdatedTeams_Optional`](#structFRHAPI__AuditEvent_1a110622e0fcf6ce7cc039092cf7d850f4) <a id="structFRHAPI__AuditEvent_1a110622e0fcf6ce7cc039092cf7d850f4"></a>

Updated team numbers and sizes.

#### `public bool `[`UpdatedTeams_IsSet`](#structFRHAPI__AuditEvent_1a37fafea2ba386d1de011fb7376788931) <a id="structFRHAPI__AuditEvent_1a37fafea2ba386d1de011fb7376788931"></a>

true if UpdatedTeams_Optional has been set to a value

#### `public ERHAPI_InviteSource `[`Source_Optional`](#structFRHAPI__AuditEvent_1ab46da29e9df35e19749e8734b59ef20c) <a id="structFRHAPI__AuditEvent_1ab46da29e9df35e19749e8734b59ef20c"></a>

The source of an invite.

#### `public bool `[`Source_IsSet`](#structFRHAPI__AuditEvent_1a2545a17496a424e907a6ac8b5bc88bf3) <a id="structFRHAPI__AuditEvent_1a2545a17496a424e907a6ac8b5bc88bf3"></a>

true if Source_Optional has been set to a value

#### `public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__AuditEvent_1a1a746c06e774e889164b05f65cd4648f) <a id="structFRHAPI__AuditEvent_1a1a746c06e774e889164b05f65cd4648f"></a>

UUID of a specific player being effected in this event.

#### `public bool `[`PlayerUuid_IsSet`](#structFRHAPI__AuditEvent_1ac6585bda344cca1662c6e7767bc3a6e3) <a id="structFRHAPI__AuditEvent_1ac6585bda344cca1662c6e7767bc3a6e3"></a>

true if PlayerUuid_Optional has been set to a value

#### `public int32 `[`TeamId_Optional`](#structFRHAPI__AuditEvent_1a3c1ea56fc52dfb0a6a3a11a7e9e2776f) <a id="structFRHAPI__AuditEvent_1a3c1ea56fc52dfb0a6a3a11a7e9e2776f"></a>

ID of the team being effected in this event.

#### `public bool `[`TeamId_IsSet`](#structFRHAPI__AuditEvent_1ab5fb5f7a347c8b9ca824685915af3a5c) <a id="structFRHAPI__AuditEvent_1ab5fb5f7a347c8b9ca824685915af3a5c"></a>

true if TeamId_Optional has been set to a value

#### `public FString `[`InvitedSessionId_Optional`](#structFRHAPI__AuditEvent_1a637fdc2ea19425afb9e7285914ae887e) <a id="structFRHAPI__AuditEvent_1a637fdc2ea19425afb9e7285914ae887e"></a>

ID of the session being invited in this event.

#### `public bool `[`InvitedSessionId_IsSet`](#structFRHAPI__AuditEvent_1ac8f296d3cfd2032286634646b407b5fb) <a id="structFRHAPI__AuditEvent_1ac8f296d3cfd2032286634646b407b5fb"></a>

true if InvitedSessionId_Optional has been set to a value

#### `public FString `[`RemovedSessionId_Optional`](#structFRHAPI__AuditEvent_1abc65b755569a269afa32e150090ae32d) <a id="structFRHAPI__AuditEvent_1abc65b755569a269afa32e150090ae32d"></a>

ID of the session being removed in this event.

#### `public bool `[`RemovedSessionId_IsSet`](#structFRHAPI__AuditEvent_1aadd12715dc4a140ba10fa35dee6612cc) <a id="structFRHAPI__AuditEvent_1aadd12715dc4a140ba10fa35dee6612cc"></a>

true if RemovedSessionId_Optional has been set to a value

#### `public FString `[`Version_Optional`](#structFRHAPI__AuditEvent_1a718acba9db5dce0bdc5cd0cb33227dba) <a id="structFRHAPI__AuditEvent_1a718acba9db5dce0bdc5cd0cb33227dba"></a>

Version updated in this event.

#### `public bool `[`Version_IsSet`](#structFRHAPI__AuditEvent_1a7fc45d7585788fe01bf85773998cd314) <a id="structFRHAPI__AuditEvent_1a7fc45d7585788fe01bf85773998cd314"></a>

true if Version_Optional has been set to a value

#### `public `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` `[`ClientSettings_Optional`](#structFRHAPI__AuditEvent_1a3e6d0763a2375148fecc226ecfa4959f) <a id="structFRHAPI__AuditEvent_1a3e6d0763a2375148fecc226ecfa4959f"></a>

Client settings updated as part of this event.

#### `public bool `[`ClientSettings_IsSet`](#structFRHAPI__AuditEvent_1a2b23205573a9cad1f49325265ac88a7b) <a id="structFRHAPI__AuditEvent_1a2b23205573a9cad1f49325265ac88a7b"></a>

true if ClientSettings_Optional has been set to a value

#### `public `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` `[`CrossplayPreferences_Optional`](#structFRHAPI__AuditEvent_1af4128c7eeea171df0b69206bb14aaa84) <a id="structFRHAPI__AuditEvent_1af4128c7eeea171df0b69206bb14aaa84"></a>

Crossplay preferences updated as part of this event.

#### `public bool `[`CrossplayPreferences_IsSet`](#structFRHAPI__AuditEvent_1a5904741f5492050b727c07c586610c73) <a id="structFRHAPI__AuditEvent_1a5904741f5492050b727c07c586610c73"></a>

true if CrossplayPreferences_Optional has been set to a value

#### `public ERHAPI_SessionPlayerStatus `[`PlayerStatus_Optional`](#structFRHAPI__AuditEvent_1a011023538aa8aa22787927941790776c) <a id="structFRHAPI__AuditEvent_1a011023538aa8aa22787927941790776c"></a>

Player's status updated as part of this event.

#### `public bool `[`PlayerStatus_IsSet`](#structFRHAPI__AuditEvent_1a1a27bd7a28571ddee01714c34835cdd8) <a id="structFRHAPI__AuditEvent_1a1a27bd7a28571ddee01714c34835cdd8"></a>

true if PlayerStatus_Optional has been set to a value

#### `public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__AuditEvent_1a3e550386794807ab125bd2c94dec6a6f) <a id="structFRHAPI__AuditEvent_1a3e550386794807ab125bd2c94dec6a6f"></a>

Platform updated as part of this event.

#### `public bool `[`Platform_IsSet`](#structFRHAPI__AuditEvent_1a8be45fd83febb526bbe5c40cd6ca0666) <a id="structFRHAPI__AuditEvent_1a8be45fd83febb526bbe5c40cd6ca0666"></a>

true if Platform_Optional has been set to a value

#### `public FString `[`PlatformSessionId_Optional`](#structFRHAPI__AuditEvent_1afc67458e33ee2f6af4164ff7b621054f) <a id="structFRHAPI__AuditEvent_1afc67458e33ee2f6af4164ff7b621054f"></a>

ID of the platform session being effected in this event.

#### `public bool `[`PlatformSessionId_IsSet`](#structFRHAPI__AuditEvent_1afb66af766ab7ba89932a9ceabaf14668) <a id="structFRHAPI__AuditEvent_1afb66af766ab7ba89932a9ceabaf14668"></a>

true if PlatformSessionId_Optional has been set to a value

#### `public FString `[`InstanceId_Optional`](#structFRHAPI__AuditEvent_1a5073e1005e89648e9df38c9ee20ace4e) <a id="structFRHAPI__AuditEvent_1a5073e1005e89648e9df38c9ee20ace4e"></a>

ID of the instance being effected in this event.

#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__AuditEvent_1aa23f99cf50d41b42abf8f7c8b4fe7692) <a id="structFRHAPI__AuditEvent_1aa23f99cf50d41b42abf8f7c8b4fe7692"></a>

true if InstanceId_Optional has been set to a value

#### `public ERHAPI_HostType `[`HostType_Optional`](#structFRHAPI__AuditEvent_1af1e00eafe674337f347d41d4c2d7dd74) <a id="structFRHAPI__AuditEvent_1af1e00eafe674337f347d41d4c2d7dd74"></a>

Type of the host being effected in this event.

#### `public bool `[`HostType_IsSet`](#structFRHAPI__AuditEvent_1a4da249dfc3b8e7d5250c8bff04c1530e) <a id="structFRHAPI__AuditEvent_1a4da249dfc3b8e7d5250c8bff04c1530e"></a>

true if HostType_Optional has been set to a value

#### `public FGuid `[`HostPlayerUuid_Optional`](#structFRHAPI__AuditEvent_1acfecc1ab0a6fc39efbd12bacfd3fa2cd) <a id="structFRHAPI__AuditEvent_1acfecc1ab0a6fc39efbd12bacfd3fa2cd"></a>

UUID of the player hosting during this event.

#### `public bool `[`HostPlayerUuid_IsSet`](#structFRHAPI__AuditEvent_1ac1a66073be73b8217cd5154df723ca9f) <a id="structFRHAPI__AuditEvent_1ac1a66073be73b8217cd5154df723ca9f"></a>

true if HostPlayerUuid_Optional has been set to a value

#### `public FGuid `[`InstanceRequestTemplate_Optional`](#structFRHAPI__AuditEvent_1a9c86065453e328b4e171d26da7b1b4b0) <a id="structFRHAPI__AuditEvent_1a9c86065453e328b4e171d26da7b1b4b0"></a>

ID of the instance request template being used in this event.

#### `public bool `[`InstanceRequestTemplate_IsSet`](#structFRHAPI__AuditEvent_1a475b99bf20710a06992b102c8ea383dd) <a id="structFRHAPI__AuditEvent_1a475b99bf20710a06992b102c8ea383dd"></a>

true if InstanceRequestTemplate_Optional has been set to a value

#### `public FString `[`Map_Optional`](#structFRHAPI__AuditEvent_1ad299bd14adc6a83431b914c661d2575e) <a id="structFRHAPI__AuditEvent_1ad299bd14adc6a83431b914c661d2575e"></a>

Map being used in this event.

#### `public bool `[`Map_IsSet`](#structFRHAPI__AuditEvent_1a5c3480ca572ac0c16469b328c3bb650c) <a id="structFRHAPI__AuditEvent_1a5c3480ca572ac0c16469b328c3bb650c"></a>

true if Map_Optional has been set to a value

#### `public FString `[`Mode_Optional`](#structFRHAPI__AuditEvent_1a381a78b7c664542e8f4356a5e8e61bb0) <a id="structFRHAPI__AuditEvent_1a381a78b7c664542e8f4356a5e8e61bb0"></a>

Mode being used in this event.

#### `public bool `[`Mode_IsSet`](#structFRHAPI__AuditEvent_1a7eee8859aa0fd0ac057370d254ca5356) <a id="structFRHAPI__AuditEvent_1a7eee8859aa0fd0ac057370d254ca5356"></a>

true if Mode_Optional has been set to a value

#### `public FString `[`AllocationId_Optional`](#structFRHAPI__AuditEvent_1a4f0616b9f1cad3a85c31be46f09bb314) <a id="structFRHAPI__AuditEvent_1a4f0616b9f1cad3a85c31be46f09bb314"></a>

Allocation ID of instance in this event.

#### `public bool `[`AllocationId_IsSet`](#structFRHAPI__AuditEvent_1aba24964baee9c9a3509ef9242a8c6b18) <a id="structFRHAPI__AuditEvent_1aba24964baee9c9a3509ef9242a8c6b18"></a>

true if AllocationId_Optional has been set to a value

#### `public ERHAPI_InstanceJoinableStatus `[`JoinStatus_Optional`](#structFRHAPI__AuditEvent_1a6b84853dbf5b2b0b70476fb17eede263) <a id="structFRHAPI__AuditEvent_1a6b84853dbf5b2b0b70476fb17eede263"></a>

Instance's joinability status.

#### `public bool `[`JoinStatus_IsSet`](#structFRHAPI__AuditEvent_1af4abeadcd745f17b0321933f5c428690) <a id="structFRHAPI__AuditEvent_1af4abeadcd745f17b0321933f5c428690"></a>

true if JoinStatus_Optional has been set to a value

#### `public `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` `[`JoinParams_Optional`](#structFRHAPI__AuditEvent_1a07bbc910f5076d442486023659ca44b0) <a id="structFRHAPI__AuditEvent_1a07bbc910f5076d442486023659ca44b0"></a>

Instance's join parameters for this event.

#### `public bool `[`JoinParams_IsSet`](#structFRHAPI__AuditEvent_1ae790d39edc53ee06978d78308de4decb) <a id="structFRHAPI__AuditEvent_1ae790d39edc53ee06978d78308de4decb"></a>

true if JoinParams_Optional has been set to a value

#### `public ERHAPI_InstanceHealthStatus `[`InstanceHealth_Optional`](#structFRHAPI__AuditEvent_1a79e4d43263294ac4d96398ebfb1f847a) <a id="structFRHAPI__AuditEvent_1a79e4d43263294ac4d96398ebfb1f847a"></a>

Instance's health status for this event.

#### `public bool `[`InstanceHealth_IsSet`](#structFRHAPI__AuditEvent_1aae5452e6edf4ee9111651bd081474cfc) <a id="structFRHAPI__AuditEvent_1aae5452e6edf4ee9111651bd081474cfc"></a>

true if InstanceHealth_Optional has been set to a value

#### `public FString `[`QueueId_Optional`](#structFRHAPI__AuditEvent_1a1e8ad3c21b81b3a193e5642a2bc9df5a) <a id="structFRHAPI__AuditEvent_1a1e8ad3c21b81b3a193e5642a2bc9df5a"></a>

ID for the queue in this event.

#### `public bool `[`QueueId_IsSet`](#structFRHAPI__AuditEvent_1a0c590071262c69ad7e882f92ffef67e0) <a id="structFRHAPI__AuditEvent_1a0c590071262c69ad7e882f92ffef67e0"></a>

true if QueueId_Optional has been set to a value

#### `public FString `[`TicketId_Optional`](#structFRHAPI__AuditEvent_1a613c1fedd3208993935948dd4c06aca5) <a id="structFRHAPI__AuditEvent_1a613c1fedd3208993935948dd4c06aca5"></a>

Matchmaking ticket id in this event.

#### `public bool `[`TicketId_IsSet`](#structFRHAPI__AuditEvent_1a19ea5ddf078bcfe9d110c74a43aba959) <a id="structFRHAPI__AuditEvent_1a19ea5ddf078bcfe9d110c74a43aba959"></a>

true if TicketId_Optional has been set to a value

#### `public `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` `[`AdditionalParams_Optional`](#structFRHAPI__AuditEvent_1a142b115bf849c03a758379a861e416c2) <a id="structFRHAPI__AuditEvent_1a142b115bf849c03a758379a861e416c2"></a>

Additional matchmaking parameters in this event.

#### `public bool `[`AdditionalParams_IsSet`](#structFRHAPI__AuditEvent_1a62b9d203eb29efc4450d1009f8f171eb) <a id="structFRHAPI__AuditEvent_1a62b9d203eb29efc4450d1009f8f171eb"></a>

true if AdditionalParams_Optional has been set to a value

#### `public TArray< FString > `[`MapPreferences_Optional`](#structFRHAPI__AuditEvent_1a593175fd3c24d475eb899946de496e07) <a id="structFRHAPI__AuditEvent_1a593175fd3c24d475eb899946de496e07"></a>

Map preferences in this event.

#### `public bool `[`MapPreferences_IsSet`](#structFRHAPI__AuditEvent_1a1db8cfc451e71b0c3fd83c704a49e54d) <a id="structFRHAPI__AuditEvent_1a1db8cfc451e71b0c3fd83c704a49e54d"></a>

true if MapPreferences_Optional has been set to a value

#### `public FString `[`QueuedSessionId_Optional`](#structFRHAPI__AuditEvent_1a39b4489b93cc4be72bf5bf0ebc4f9b13) <a id="structFRHAPI__AuditEvent_1a39b4489b93cc4be72bf5bf0ebc4f9b13"></a>

ID of the session that was/is in a matchmaking queue for this event.

#### `public bool `[`QueuedSessionId_IsSet`](#structFRHAPI__AuditEvent_1a5a5f65ee89fdfb66ef22a55a163baf57) <a id="structFRHAPI__AuditEvent_1a5a5f65ee89fdfb66ef22a55a163baf57"></a>

true if QueuedSessionId_Optional has been set to a value

#### `public FString `[`MatchId_Optional`](#structFRHAPI__AuditEvent_1ae7b833650a917745d46a07e479f80666) <a id="structFRHAPI__AuditEvent_1ae7b833650a917745d46a07e479f80666"></a>

ID of a match that was associated with this session.

#### `public bool `[`MatchId_IsSet`](#structFRHAPI__AuditEvent_1a332d101db5ba1b3e56e508f0a39bc954) <a id="structFRHAPI__AuditEvent_1a332d101db5ba1b3e56e508f0a39bc954"></a>

true if MatchId_Optional has been set to a value

#### `public FGuid `[`RequestingUserUuid_Optional`](#structFRHAPI__AuditEvent_1af0252ad8092c0b033ddf45a8eef3698e) <a id="structFRHAPI__AuditEvent_1af0252ad8092c0b033ddf45a8eef3698e"></a>

#### `public bool `[`RequestingUserUuid_IsSet`](#structFRHAPI__AuditEvent_1aa1eaf461666b39f72b48f3a24ba21f85) <a id="structFRHAPI__AuditEvent_1aa1eaf461666b39f72b48f3a24ba21f85"></a>

true if RequestingUserUuid_Optional has been set to a value

#### `public FDateTime `[`EventDatetime`](#structFRHAPI__AuditEvent_1abaade7e25cc8bbb04e5efe8ccb7f9800) <a id="structFRHAPI__AuditEvent_1abaade7e25cc8bbb04e5efe8ccb7f9800"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public virtual bool `[`FromJson`](#structFRHAPI__AuditEvent_1a191062f32038349f94873cfb420d256c)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__AuditEvent_1a191062f32038349f94873cfb420d256c"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__AuditEvent_1a9aded3f00dda58a155d3f34327e64f39)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__AuditEvent_1a9aded3f00dda58a155d3f34327e64f39"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetEventName`](#structFRHAPI__AuditEvent_1a0fea28e2f28cc680306a1832d5ba1b58)`()` <a id="structFRHAPI__AuditEvent_1a0fea28e2f28cc680306a1832d5ba1b58"></a>

Gets the value of EventName.

#### `public inline const FString & `[`GetEventName`](#structFRHAPI__AuditEvent_1a39321d5a0fba99ecadc082faafa284cf)`() const` <a id="structFRHAPI__AuditEvent_1a39321d5a0fba99ecadc082faafa284cf"></a>

Gets the value of EventName.

#### `public inline void `[`SetEventName`](#structFRHAPI__AuditEvent_1a8087921386fdec5296aec7c5e6fea83e)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a8087921386fdec5296aec7c5e6fea83e"></a>

Sets the value of EventName.

#### `public inline void `[`SetEventName`](#structFRHAPI__AuditEvent_1a7a159fa0f7311f41152411c263c7ccd2)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a7a159fa0f7311f41152411c263c7ccd2"></a>

Sets the value of EventName using move semantics.

#### `public inline FString & `[`GetSessionId`](#structFRHAPI__AuditEvent_1ade2abca609ed32c45cf9dfddfa8c5a72)`()` <a id="structFRHAPI__AuditEvent_1ade2abca609ed32c45cf9dfddfa8c5a72"></a>

Gets the value of SessionId.

#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__AuditEvent_1a31c15fe0040044e278b79adb404db74d)`() const` <a id="structFRHAPI__AuditEvent_1a31c15fe0040044e278b79adb404db74d"></a>

Gets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__AuditEvent_1a867836397739325b10321b484d3e5b45)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a867836397739325b10321b484d3e5b45"></a>

Sets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__AuditEvent_1a0ddb0d8e5c62d564d5e0ff926e7932e6)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a0ddb0d8e5c62d564d5e0ff926e7932e6"></a>

Sets the value of SessionId using move semantics.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__AuditEvent_1a523d41c3acf3e0f144a342f110e13869)`()` <a id="structFRHAPI__AuditEvent_1a523d41c3acf3e0f144a342f110e13869"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__AuditEvent_1ae075d8c45605546740058612e9731ff8)`() const` <a id="structFRHAPI__AuditEvent_1ae075d8c45605546740058612e9731ff8"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__AuditEvent_1a6dc817996acf24f84364c07683089ee6)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a6dc817996acf24f84364c07683089ee6"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__AuditEvent_1a4960d694b25fbe1a5e4867d02faa918b)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__AuditEvent_1a4960d694b25fbe1a5e4867d02faa918b"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__AuditEvent_1a8b14d2f2a7f6023d93f5de9c0e6ff11e)`()` <a id="structFRHAPI__AuditEvent_1a8b14d2f2a7f6023d93f5de9c0e6ff11e"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__AuditEvent_1a9058659c9549f6ce3c52075eed30596b)`() const` <a id="structFRHAPI__AuditEvent_1a9058659c9549f6ce3c52075eed30596b"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__AuditEvent_1a4affedaaa8d6fa24ecfcf4212fd107ed)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__AuditEvent_1a4affedaaa8d6fa24ecfcf4212fd107ed"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__AuditEvent_1a2718da986bec260504cf9f1d0c7a7459)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__AuditEvent_1a2718da986bec260504cf9f1d0c7a7459"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__AuditEvent_1a5aaffe4f1be621a24ef6a07d08271ff7)`()` <a id="structFRHAPI__AuditEvent_1a5aaffe4f1be621a24ef6a07d08271ff7"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__AuditEvent_1af3524cd9746aa75174ce89b878bb05f6)`() const` <a id="structFRHAPI__AuditEvent_1af3524cd9746aa75174ce89b878bb05f6"></a>

Checks whether CustomData_Optional has been set.

#### `public inline FString & `[`GetSessionType`](#structFRHAPI__AuditEvent_1a5a8804834303e0f69626b72f202dae59)`()` <a id="structFRHAPI__AuditEvent_1a5a8804834303e0f69626b72f202dae59"></a>

Gets the value of SessionType_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetSessionType`](#structFRHAPI__AuditEvent_1af57efa3107d5de4207cefaeb93da7ddf)`() const` <a id="structFRHAPI__AuditEvent_1af57efa3107d5de4207cefaeb93da7ddf"></a>

Gets the value of SessionType_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetSessionType`](#structFRHAPI__AuditEvent_1a8ec2668779c742f220866ba278ef9f04)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a8ec2668779c742f220866ba278ef9f04"></a>

Gets the value of SessionType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessionType`](#structFRHAPI__AuditEvent_1a0158e378b5f65a76e110981c2cb54f2c)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1a0158e378b5f65a76e110981c2cb54f2c"></a>

Fills OutValue with the value of SessionType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetSessionTypeOrNull`](#structFRHAPI__AuditEvent_1aae6fd8a61abd9b3f2fb41368065d8260)`()` <a id="structFRHAPI__AuditEvent_1aae6fd8a61abd9b3f2fb41368065d8260"></a>

Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetSessionTypeOrNull`](#structFRHAPI__AuditEvent_1a36229717e139a2234339e82f4fa6f1e3)`() const` <a id="structFRHAPI__AuditEvent_1a36229717e139a2234339e82f4fa6f1e3"></a>

Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessionType`](#structFRHAPI__AuditEvent_1a94d2c114d9c835b2978fb12cff5ac056)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a94d2c114d9c835b2978fb12cff5ac056"></a>

Sets the value of SessionType_Optional and also sets SessionType_IsSet to true.

#### `public inline void `[`SetSessionType`](#structFRHAPI__AuditEvent_1aa706a9efc4f4d0243a58d1e733774e55)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1aa706a9efc4f4d0243a58d1e733774e55"></a>

Sets the value of SessionType_Optional and also sets SessionType_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionType`](#structFRHAPI__AuditEvent_1af485efac1a25386828b114dfc87b5e77)`()` <a id="structFRHAPI__AuditEvent_1af485efac1a25386828b114dfc87b5e77"></a>

Clears the value of SessionType_Optional and sets SessionType_IsSet to false.

#### `public inline bool `[`IsSessionTypeSet`](#structFRHAPI__AuditEvent_1ab19c380b566c11f68c4372d971916dd0)`() const` <a id="structFRHAPI__AuditEvent_1ab19c380b566c11f68c4372d971916dd0"></a>

Checks whether SessionType_Optional has been set.

#### `public inline FString & `[`GetRegionId`](#structFRHAPI__AuditEvent_1a91acab3cbb102188d029699297853334)`()` <a id="structFRHAPI__AuditEvent_1a91acab3cbb102188d029699297853334"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__AuditEvent_1a25fe49a4f9fa9ce50bf3ba527ce3d2e2)`() const` <a id="structFRHAPI__AuditEvent_1a25fe49a4f9fa9ce50bf3ba527ce3d2e2"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__AuditEvent_1ac7cd1b2b74a617537d02bf1a48c80906)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1ac7cd1b2b74a617537d02bf1a48c80906"></a>

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRegionId`](#structFRHAPI__AuditEvent_1a99798c97043aa39f5ff4ba032912861f)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1a99798c97043aa39f5ff4ba032912861f"></a>

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__AuditEvent_1a16cd6aa12b49b8d4283f548b7b1f23cf)`()` <a id="structFRHAPI__AuditEvent_1a16cd6aa12b49b8d4283f548b7b1f23cf"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__AuditEvent_1ad1db6e752d0b1d7d2a93edcf54e6c9e2)`() const` <a id="structFRHAPI__AuditEvent_1ad1db6e752d0b1d7d2a93edcf54e6c9e2"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRegionId`](#structFRHAPI__AuditEvent_1a81d4143343793b2bc8772ea866b7ec6d)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a81d4143343793b2bc8772ea866b7ec6d"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.

#### `public inline void `[`SetRegionId`](#structFRHAPI__AuditEvent_1a4f6cd87a8ce93a35108e94daf443fcfc)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a4f6cd87a8ce93a35108e94daf443fcfc"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.

#### `public inline void `[`ClearRegionId`](#structFRHAPI__AuditEvent_1ade77c1e5c1364d10ccfd19e9fa122dff)`()` <a id="structFRHAPI__AuditEvent_1ade77c1e5c1364d10ccfd19e9fa122dff"></a>

Clears the value of RegionId_Optional and sets RegionId_IsSet to false.

#### `public inline bool `[`IsRegionIdSet`](#structFRHAPI__AuditEvent_1afb73e048e9334e0b154a2229fa452f6f)`() const` <a id="structFRHAPI__AuditEvent_1afb73e048e9334e0b154a2229fa452f6f"></a>

Checks whether RegionId_Optional has been set.

#### `public inline bool & `[`GetJoinable`](#structFRHAPI__AuditEvent_1a3357d78c6f7dfae2786a72c5ecdc278d)`()` <a id="structFRHAPI__AuditEvent_1a3357d78c6f7dfae2786a72c5ecdc278d"></a>

Gets the value of Joinable_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetJoinable`](#structFRHAPI__AuditEvent_1ad336dd2e9f24138d6dc05349c2316a1e)`() const` <a id="structFRHAPI__AuditEvent_1ad336dd2e9f24138d6dc05349c2316a1e"></a>

Gets the value of Joinable_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetJoinable`](#structFRHAPI__AuditEvent_1ada83df49f8f5ee586ae55cb83e6c736b)`(const bool & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1ada83df49f8f5ee586ae55cb83e6c736b"></a>

Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetJoinable`](#structFRHAPI__AuditEvent_1a2351f67f0c02c17a87a3fb826c72e1a9)`(bool & OutValue) const` <a id="structFRHAPI__AuditEvent_1a2351f67f0c02c17a87a3fb826c72e1a9"></a>

Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetJoinableOrNull`](#structFRHAPI__AuditEvent_1a32bca0dc352a465596742ad71ae439e1)`()` <a id="structFRHAPI__AuditEvent_1a32bca0dc352a465596742ad71ae439e1"></a>

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetJoinableOrNull`](#structFRHAPI__AuditEvent_1a891dc40a81c7f379496d59a6a65518ad)`() const` <a id="structFRHAPI__AuditEvent_1a891dc40a81c7f379496d59a6a65518ad"></a>

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetJoinable`](#structFRHAPI__AuditEvent_1a8849a0e6c3f82d31677920efd479aead)`(const bool & NewValue)` <a id="structFRHAPI__AuditEvent_1a8849a0e6c3f82d31677920efd479aead"></a>

Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.

#### `public inline void `[`SetJoinable`](#structFRHAPI__AuditEvent_1a42334e8677be8d3c0c71dc5b4014eca5)`(bool && NewValue)` <a id="structFRHAPI__AuditEvent_1a42334e8677be8d3c0c71dc5b4014eca5"></a>

Sets the value of Joinable_Optional and also sets Joinable_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinable`](#structFRHAPI__AuditEvent_1a563363b7d70117df3e9dd9932903125f)`()` <a id="structFRHAPI__AuditEvent_1a563363b7d70117df3e9dd9932903125f"></a>

Clears the value of Joinable_Optional and sets Joinable_IsSet to false.

#### `public inline bool `[`IsJoinableSet`](#structFRHAPI__AuditEvent_1a43ba077bd0755667d6e877f8ae744f32)`() const` <a id="structFRHAPI__AuditEvent_1a43ba077bd0755667d6e877f8ae744f32"></a>

Checks whether Joinable_Optional has been set.

#### `public inline bool `[`IsJoinableDefaultValue`](#structFRHAPI__AuditEvent_1a062943023a7051996bb465b133bc5958)`() const` <a id="structFRHAPI__AuditEvent_1a062943023a7051996bb465b133bc5958"></a>

Returns true if Joinable_Optional is set and matches the default value.

#### `public inline void `[`SetJoinableToDefault`](#structFRHAPI__AuditEvent_1a39e7075fd253eeae1b073585358cf895)`()` <a id="structFRHAPI__AuditEvent_1a39e7075fd253eeae1b073585358cf895"></a>

Sets the value of Joinable_Optional to its default and also sets Joinable_IsSet to true.

#### `public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__AuditEvent_1a808c6918d09d78b629eafb8ee6289117)`()` <a id="structFRHAPI__AuditEvent_1a808c6918d09d78b629eafb8ee6289117"></a>

Gets the value of UpdatedTeams_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__AuditEvent_1a1053f426a0447b6229236356764b036b)`() const` <a id="structFRHAPI__AuditEvent_1a1053f426a0447b6229236356764b036b"></a>

Gets the value of UpdatedTeams_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__AuditEvent_1a767b4b8855432558afd31daa6d7f0bc9)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a767b4b8855432558afd31daa6d7f0bc9"></a>

Gets the value of UpdatedTeams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetUpdatedTeams`](#structFRHAPI__AuditEvent_1a673e28af1f69b21f6fe06ddd7073cd32)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & OutValue) const` <a id="structFRHAPI__AuditEvent_1a673e28af1f69b21f6fe06ddd7073cd32"></a>

Fills OutValue with the value of UpdatedTeams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__AuditEvent_1a215fd844d242f77059e464fe91713971)`()` <a id="structFRHAPI__AuditEvent_1a215fd844d242f77059e464fe91713971"></a>

Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__AuditEvent_1a202467d80d4a204a7939cef3fe133eab)`() const` <a id="structFRHAPI__AuditEvent_1a202467d80d4a204a7939cef3fe133eab"></a>

Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetUpdatedTeams`](#structFRHAPI__AuditEvent_1a8238fd52886db81696c362ba9459b0cc)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & NewValue)` <a id="structFRHAPI__AuditEvent_1a8238fd52886db81696c362ba9459b0cc"></a>

Sets the value of UpdatedTeams_Optional and also sets UpdatedTeams_IsSet to true.

#### `public inline void `[`SetUpdatedTeams`](#structFRHAPI__AuditEvent_1a5ae33104490c12208b9c766a4e8b971b)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > && NewValue)` <a id="structFRHAPI__AuditEvent_1a5ae33104490c12208b9c766a4e8b971b"></a>

Sets the value of UpdatedTeams_Optional and also sets UpdatedTeams_IsSet to true using move semantics.

#### `public inline void `[`ClearUpdatedTeams`](#structFRHAPI__AuditEvent_1ae7fbb59c682cdadaa713c1cb50332e51)`()` <a id="structFRHAPI__AuditEvent_1ae7fbb59c682cdadaa713c1cb50332e51"></a>

Clears the value of UpdatedTeams_Optional and sets UpdatedTeams_IsSet to false.

#### `public inline bool `[`IsUpdatedTeamsSet`](#structFRHAPI__AuditEvent_1a80604a3d148ea36937ba7803a39ccbee)`() const` <a id="structFRHAPI__AuditEvent_1a80604a3d148ea36937ba7803a39ccbee"></a>

Checks whether UpdatedTeams_Optional has been set.

#### `public inline ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__AuditEvent_1a7c9da2041bf340202b0458d9d382cbd1)`()` <a id="structFRHAPI__AuditEvent_1a7c9da2041bf340202b0458d9d382cbd1"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__AuditEvent_1a8f2c0b9a8b6ec041ffd8678bc0f1f282)`() const` <a id="structFRHAPI__AuditEvent_1a8f2c0b9a8b6ec041ffd8678bc0f1f282"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__AuditEvent_1a07b57b67dd7c7f781e16822e17abc77e)`(const ERHAPI_InviteSource & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a07b57b67dd7c7f781e16822e17abc77e"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSource`](#structFRHAPI__AuditEvent_1a97c8b8996109ccfe3ef9914e516db3eb)`(ERHAPI_InviteSource & OutValue) const` <a id="structFRHAPI__AuditEvent_1a97c8b8996109ccfe3ef9914e516db3eb"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__AuditEvent_1adddea8c7887a5c2025071e6a07c91a4e)`()` <a id="structFRHAPI__AuditEvent_1adddea8c7887a5c2025071e6a07c91a4e"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__AuditEvent_1a534959d927310092094cd7a4af14ca8e)`() const` <a id="structFRHAPI__AuditEvent_1a534959d927310092094cd7a4af14ca8e"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSource`](#structFRHAPI__AuditEvent_1acc4da47740c855770e7394e5247f0c13)`(const ERHAPI_InviteSource & NewValue)` <a id="structFRHAPI__AuditEvent_1acc4da47740c855770e7394e5247f0c13"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

#### `public inline void `[`SetSource`](#structFRHAPI__AuditEvent_1aa77d6b7e7a75c222daf289cbc58edf29)`(ERHAPI_InviteSource && NewValue)` <a id="structFRHAPI__AuditEvent_1aa77d6b7e7a75c222daf289cbc58edf29"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.

#### `public inline void `[`ClearSource`](#structFRHAPI__AuditEvent_1ae289f75b711f546b5f66d324dce40ac8)`()` <a id="structFRHAPI__AuditEvent_1ae289f75b711f546b5f66d324dce40ac8"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

#### `public inline bool `[`IsSourceSet`](#structFRHAPI__AuditEvent_1a74018ed8ae1bfbfd9f45ce224b75c4ec)`() const` <a id="structFRHAPI__AuditEvent_1a74018ed8ae1bfbfd9f45ce224b75c4ec"></a>

Checks whether Source_Optional has been set.

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__AuditEvent_1abb468b48f6c0de22bc6c2cd53ba5616c)`()` <a id="structFRHAPI__AuditEvent_1abb468b48f6c0de22bc6c2cd53ba5616c"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__AuditEvent_1a74a441773c5e50cb795ecb29d022817e)`() const` <a id="structFRHAPI__AuditEvent_1a74a441773c5e50cb795ecb29d022817e"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__AuditEvent_1a26921ff3f6d6d9e38364f86748fd47e1)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a26921ff3f6d6d9e38364f86748fd47e1"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerUuid`](#structFRHAPI__AuditEvent_1ac554d4e051febbe237753c638a4198c0)`(FGuid & OutValue) const` <a id="structFRHAPI__AuditEvent_1ac554d4e051febbe237753c638a4198c0"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__AuditEvent_1a66d2f901910bbf929f51f1cc0e08d5f5)`()` <a id="structFRHAPI__AuditEvent_1a66d2f901910bbf929f51f1cc0e08d5f5"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__AuditEvent_1ab68949b03a399aacb695603968a17f82)`() const` <a id="structFRHAPI__AuditEvent_1ab68949b03a399aacb695603968a17f82"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__AuditEvent_1ae19715aea8b4871a0b72de04887c7ef8)`(const FGuid & NewValue)` <a id="structFRHAPI__AuditEvent_1ae19715aea8b4871a0b72de04887c7ef8"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__AuditEvent_1a88e95b412063e1c90e1da710ab6880c7)`(FGuid && NewValue)` <a id="structFRHAPI__AuditEvent_1a88e95b412063e1c90e1da710ab6880c7"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__AuditEvent_1a03c6f2362c235c7631ef36c4f3c42beb)`()` <a id="structFRHAPI__AuditEvent_1a03c6f2362c235c7631ef36c4f3c42beb"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__AuditEvent_1afec2260e0d9dd9b1721aa7c4214bd739)`() const` <a id="structFRHAPI__AuditEvent_1afec2260e0d9dd9b1721aa7c4214bd739"></a>

Checks whether PlayerUuid_Optional has been set.

#### `public inline int32 & `[`GetTeamId`](#structFRHAPI__AuditEvent_1a0de76b15bbf88af7e2a4c76019a43a06)`()` <a id="structFRHAPI__AuditEvent_1a0de76b15bbf88af7e2a4c76019a43a06"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__AuditEvent_1a98377f3031c49db36f58b8242de8e179)`() const` <a id="structFRHAPI__AuditEvent_1a98377f3031c49db36f58b8242de8e179"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__AuditEvent_1a270116a8efb36ab3e3e889f6984dc6e8)`(const int32 & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a270116a8efb36ab3e3e889f6984dc6e8"></a>

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTeamId`](#structFRHAPI__AuditEvent_1a7344ad05cfbb1e0cc893b7f723eea816)`(int32 & OutValue) const` <a id="structFRHAPI__AuditEvent_1a7344ad05cfbb1e0cc893b7f723eea816"></a>

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetTeamIdOrNull`](#structFRHAPI__AuditEvent_1a55b52093311b66b13e0af0240fa14e38)`()` <a id="structFRHAPI__AuditEvent_1a55b52093311b66b13e0af0240fa14e38"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__AuditEvent_1ab5b74ecd99e14bc970a61c5571c42efe)`() const` <a id="structFRHAPI__AuditEvent_1ab5b74ecd99e14bc970a61c5571c42efe"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTeamId`](#structFRHAPI__AuditEvent_1a47be0e8b4f61ba41766da5f9315959b5)`(const int32 & NewValue)` <a id="structFRHAPI__AuditEvent_1a47be0e8b4f61ba41766da5f9315959b5"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.

#### `public inline void `[`SetTeamId`](#structFRHAPI__AuditEvent_1accabc99661aeab63afd01f33404c7ba9)`(int32 && NewValue)` <a id="structFRHAPI__AuditEvent_1accabc99661aeab63afd01f33404c7ba9"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.

#### `public inline void `[`ClearTeamId`](#structFRHAPI__AuditEvent_1a11aaafae2908f427aef5a5efb99382ea)`()` <a id="structFRHAPI__AuditEvent_1a11aaafae2908f427aef5a5efb99382ea"></a>

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.

#### `public inline bool `[`IsTeamIdSet`](#structFRHAPI__AuditEvent_1af2681fc55ee0b61827961f53302d914a)`() const` <a id="structFRHAPI__AuditEvent_1af2681fc55ee0b61827961f53302d914a"></a>

Checks whether TeamId_Optional has been set.

#### `public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__AuditEvent_1a77e8d1490e7d0bf2435960dcfb4a615a)`() const` <a id="structFRHAPI__AuditEvent_1a77e8d1490e7d0bf2435960dcfb4a615a"></a>

Returns true if TeamId_Optional is set and matches the default value.

#### `public inline void `[`SetTeamIdToDefault`](#structFRHAPI__AuditEvent_1a27fd05b2636e3be453c92fed6643e5ac)`()` <a id="structFRHAPI__AuditEvent_1a27fd05b2636e3be453c92fed6643e5ac"></a>

Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.

#### `public inline FString & `[`GetInvitedSessionId`](#structFRHAPI__AuditEvent_1a62eb219b5e0b87ee73f650d901bb6e40)`()` <a id="structFRHAPI__AuditEvent_1a62eb219b5e0b87ee73f650d901bb6e40"></a>

Gets the value of InvitedSessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInvitedSessionId`](#structFRHAPI__AuditEvent_1a634115ed520afe102329cb2ed5f64b6d)`() const` <a id="structFRHAPI__AuditEvent_1a634115ed520afe102329cb2ed5f64b6d"></a>

Gets the value of InvitedSessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInvitedSessionId`](#structFRHAPI__AuditEvent_1a30f461792ced15b0e22238647c6180fa)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a30f461792ced15b0e22238647c6180fa"></a>

Gets the value of InvitedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInvitedSessionId`](#structFRHAPI__AuditEvent_1aabb4f44710178fd6e53b95cfdff6ae17)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1aabb4f44710178fd6e53b95cfdff6ae17"></a>

Fills OutValue with the value of InvitedSessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__AuditEvent_1a5cc6af1716b6998ddc948bae760b0568)`()` <a id="structFRHAPI__AuditEvent_1a5cc6af1716b6998ddc948bae760b0568"></a>

Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__AuditEvent_1a06993c9f69fae6bd22547c9c18840295)`() const` <a id="structFRHAPI__AuditEvent_1a06993c9f69fae6bd22547c9c18840295"></a>

Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInvitedSessionId`](#structFRHAPI__AuditEvent_1a3c32957fb9d0b5e1d7371c6a112b1cba)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a3c32957fb9d0b5e1d7371c6a112b1cba"></a>

Sets the value of InvitedSessionId_Optional and also sets InvitedSessionId_IsSet to true.

#### `public inline void `[`SetInvitedSessionId`](#structFRHAPI__AuditEvent_1a7badce28c451a3ede11d27c75fcbae4b)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a7badce28c451a3ede11d27c75fcbae4b"></a>

Sets the value of InvitedSessionId_Optional and also sets InvitedSessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearInvitedSessionId`](#structFRHAPI__AuditEvent_1af5c9671893728a053fc0ed1c35cd54a0)`()` <a id="structFRHAPI__AuditEvent_1af5c9671893728a053fc0ed1c35cd54a0"></a>

Clears the value of InvitedSessionId_Optional and sets InvitedSessionId_IsSet to false.

#### `public inline bool `[`IsInvitedSessionIdSet`](#structFRHAPI__AuditEvent_1aee80c206c407b9f83d4e466c399f0132)`() const` <a id="structFRHAPI__AuditEvent_1aee80c206c407b9f83d4e466c399f0132"></a>

Checks whether InvitedSessionId_Optional has been set.

#### `public inline FString & `[`GetRemovedSessionId`](#structFRHAPI__AuditEvent_1a0558d4f7cb114dd5e4a5c63823db669f)`()` <a id="structFRHAPI__AuditEvent_1a0558d4f7cb114dd5e4a5c63823db669f"></a>

Gets the value of RemovedSessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRemovedSessionId`](#structFRHAPI__AuditEvent_1a649dc10c448171a7b77b129ba04ebc88)`() const` <a id="structFRHAPI__AuditEvent_1a649dc10c448171a7b77b129ba04ebc88"></a>

Gets the value of RemovedSessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRemovedSessionId`](#structFRHAPI__AuditEvent_1a8885d3717ae8711f1b861a8665cf9f67)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a8885d3717ae8711f1b861a8665cf9f67"></a>

Gets the value of RemovedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRemovedSessionId`](#structFRHAPI__AuditEvent_1ade807e3b1634593e4e314a3cc12562ba)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1ade807e3b1634593e4e314a3cc12562ba"></a>

Fills OutValue with the value of RemovedSessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__AuditEvent_1a301be296747dca1fa028d581eb26e1a8)`()` <a id="structFRHAPI__AuditEvent_1a301be296747dca1fa028d581eb26e1a8"></a>

Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__AuditEvent_1adab7542752b238cb1f36b6041a849b92)`() const` <a id="structFRHAPI__AuditEvent_1adab7542752b238cb1f36b6041a849b92"></a>

Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRemovedSessionId`](#structFRHAPI__AuditEvent_1af61362af9db9b687702930d07a978a9a)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1af61362af9db9b687702930d07a978a9a"></a>

Sets the value of RemovedSessionId_Optional and also sets RemovedSessionId_IsSet to true.

#### `public inline void `[`SetRemovedSessionId`](#structFRHAPI__AuditEvent_1a9d61198748341944235b605422454e6e)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a9d61198748341944235b605422454e6e"></a>

Sets the value of RemovedSessionId_Optional and also sets RemovedSessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearRemovedSessionId`](#structFRHAPI__AuditEvent_1aff216f70ad96469f84d59cace7f26a1a)`()` <a id="structFRHAPI__AuditEvent_1aff216f70ad96469f84d59cace7f26a1a"></a>

Clears the value of RemovedSessionId_Optional and sets RemovedSessionId_IsSet to false.

#### `public inline bool `[`IsRemovedSessionIdSet`](#structFRHAPI__AuditEvent_1a701a19c4cbd0f0dce6e8084988cae627)`() const` <a id="structFRHAPI__AuditEvent_1a701a19c4cbd0f0dce6e8084988cae627"></a>

Checks whether RemovedSessionId_Optional has been set.

#### `public inline FString & `[`GetVersion`](#structFRHAPI__AuditEvent_1a9d793dad68f30dc2711d0caec7f6de7f)`()` <a id="structFRHAPI__AuditEvent_1a9d793dad68f30dc2711d0caec7f6de7f"></a>

Gets the value of Version_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetVersion`](#structFRHAPI__AuditEvent_1ae3980476149678887718ea5342dd9fb9)`() const` <a id="structFRHAPI__AuditEvent_1ae3980476149678887718ea5342dd9fb9"></a>

Gets the value of Version_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetVersion`](#structFRHAPI__AuditEvent_1a7757a7ad6ad277652c56baf1526bc540)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a7757a7ad6ad277652c56baf1526bc540"></a>

Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetVersion`](#structFRHAPI__AuditEvent_1a7f3950a12da4cd1035e1894f0c714890)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1a7f3950a12da4cd1035e1894f0c714890"></a>

Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetVersionOrNull`](#structFRHAPI__AuditEvent_1a27285aaf7acd6eebaf889dadb46e51fa)`()` <a id="structFRHAPI__AuditEvent_1a27285aaf7acd6eebaf889dadb46e51fa"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetVersionOrNull`](#structFRHAPI__AuditEvent_1a7a6bf1df048aa1a694f7c75108affa11)`() const` <a id="structFRHAPI__AuditEvent_1a7a6bf1df048aa1a694f7c75108affa11"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetVersion`](#structFRHAPI__AuditEvent_1a1c31b5321f12957b29cbb6fd27bc252c)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a1c31b5321f12957b29cbb6fd27bc252c"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true.

#### `public inline void `[`SetVersion`](#structFRHAPI__AuditEvent_1a4a292c731f135f4bf042ed412da9a915)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a4a292c731f135f4bf042ed412da9a915"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics.

#### `public inline void `[`ClearVersion`](#structFRHAPI__AuditEvent_1a7ceff8afbf6b5e1ace9ada4c055b1a66)`()` <a id="structFRHAPI__AuditEvent_1a7ceff8afbf6b5e1ace9ada4c055b1a66"></a>

Clears the value of Version_Optional and sets Version_IsSet to false.

#### `public inline bool `[`IsVersionSet`](#structFRHAPI__AuditEvent_1a54a358e1b91e8639f82106c0c1b762d5)`() const` <a id="structFRHAPI__AuditEvent_1a54a358e1b91e8639f82106c0c1b762d5"></a>

Checks whether Version_Optional has been set.

#### `public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__AuditEvent_1a3b9c38395daf5aa428857c0a1b71c560)`()` <a id="structFRHAPI__AuditEvent_1a3b9c38395daf5aa428857c0a1b71c560"></a>

Gets the value of ClientSettings_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__AuditEvent_1ae16e71ce18af000888f1626d14dff2c8)`() const` <a id="structFRHAPI__AuditEvent_1ae16e71ce18af000888f1626d14dff2c8"></a>

Gets the value of ClientSettings_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__AuditEvent_1ac4379a02e5f944d669e39a36f9b96172)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1ac4379a02e5f944d669e39a36f9b96172"></a>

Gets the value of ClientSettings_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetClientSettings`](#structFRHAPI__AuditEvent_1a05775d6ef1d3f110a990a843b113f980)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & OutValue) const` <a id="structFRHAPI__AuditEvent_1a05775d6ef1d3f110a990a843b113f980"></a>

Fills OutValue with the value of ClientSettings_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__AuditEvent_1ad2f161e0f514e33d55120edba4de88af)`()` <a id="structFRHAPI__AuditEvent_1ad2f161e0f514e33d55120edba4de88af"></a>

Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__AuditEvent_1ab9bba868a0d6be4917ca7c27c8a1e16c)`() const` <a id="structFRHAPI__AuditEvent_1ab9bba868a0d6be4917ca7c27c8a1e16c"></a>

Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetClientSettings`](#structFRHAPI__AuditEvent_1aa1287ead01588e4aa867d66bd36b76b7)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & NewValue)` <a id="structFRHAPI__AuditEvent_1aa1287ead01588e4aa867d66bd36b76b7"></a>

Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true.

#### `public inline void `[`SetClientSettings`](#structFRHAPI__AuditEvent_1a18db16fb778956186aa2f39d260b1e69)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` && NewValue)` <a id="structFRHAPI__AuditEvent_1a18db16fb778956186aa2f39d260b1e69"></a>

Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true using move semantics.

#### `public inline void `[`ClearClientSettings`](#structFRHAPI__AuditEvent_1a94831c05e3986114c6f2a89b692196e9)`()` <a id="structFRHAPI__AuditEvent_1a94831c05e3986114c6f2a89b692196e9"></a>

Clears the value of ClientSettings_Optional and sets ClientSettings_IsSet to false.

#### `public inline bool `[`IsClientSettingsSet`](#structFRHAPI__AuditEvent_1aed553d016754f1f384bfded4f0cb4e86)`() const` <a id="structFRHAPI__AuditEvent_1aed553d016754f1f384bfded4f0cb4e86"></a>

Checks whether ClientSettings_Optional has been set.

#### `public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__AuditEvent_1a8b90f8299d8e9b4fa6348e7c6b9118e5)`()` <a id="structFRHAPI__AuditEvent_1a8b90f8299d8e9b4fa6348e7c6b9118e5"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__AuditEvent_1aa5ae5c158be7c1f4574e423dffecdc64)`() const` <a id="structFRHAPI__AuditEvent_1aa5ae5c158be7c1f4574e423dffecdc64"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__AuditEvent_1ad82913e9b342795ea359d2c2c23c803d)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1ad82913e9b342795ea359d2c2c23c803d"></a>

Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCrossplayPreferences`](#structFRHAPI__AuditEvent_1a0e6ff85879b0cedbe7220a084ba75323)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` <a id="structFRHAPI__AuditEvent_1a0e6ff85879b0cedbe7220a084ba75323"></a>

Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__AuditEvent_1aad6e79c982e766ab84311fdec1864270)`()` <a id="structFRHAPI__AuditEvent_1aad6e79c982e766ab84311fdec1864270"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__AuditEvent_1aa7148c629b1e84ce9366e0a4ffa66948)`() const` <a id="structFRHAPI__AuditEvent_1aa7148c629b1e84ce9366e0a4ffa66948"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCrossplayPreferences`](#structFRHAPI__AuditEvent_1af3008c45b49c2eb889911d00ebe7ebf0)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & NewValue)` <a id="structFRHAPI__AuditEvent_1af3008c45b49c2eb889911d00ebe7ebf0"></a>

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.

#### `public inline void `[`SetCrossplayPreferences`](#structFRHAPI__AuditEvent_1a7ff6b1395a4c8a8c27669dacbba62ea7)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` && NewValue)` <a id="structFRHAPI__AuditEvent_1a7ff6b1395a4c8a8c27669dacbba62ea7"></a>

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true using move semantics.

#### `public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__AuditEvent_1af1899c1e5b5181b70c8778ae01c055c7)`()` <a id="structFRHAPI__AuditEvent_1af1899c1e5b5181b70c8778ae01c055c7"></a>

Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.

#### `public inline bool `[`IsCrossplayPreferencesSet`](#structFRHAPI__AuditEvent_1ad106f4fb3165db8eaf5a4f84c87be306)`() const` <a id="structFRHAPI__AuditEvent_1ad106f4fb3165db8eaf5a4f84c87be306"></a>

Checks whether CrossplayPreferences_Optional has been set.

#### `public inline ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__AuditEvent_1a09543a4f921c733f0a4c5fc3785a4ae1)`()` <a id="structFRHAPI__AuditEvent_1a09543a4f921c733f0a4c5fc3785a4ae1"></a>

Gets the value of PlayerStatus_Optional, regardless of it having been set.

#### `public inline const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__AuditEvent_1aa1416f7842b296578e03e11d7f44976f)`() const` <a id="structFRHAPI__AuditEvent_1aa1416f7842b296578e03e11d7f44976f"></a>

Gets the value of PlayerStatus_Optional, regardless of it having been set.

#### `public inline const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__AuditEvent_1a4d7cf1baf76fe39fbab83ee914a3bac0)`(const ERHAPI_SessionPlayerStatus & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a4d7cf1baf76fe39fbab83ee914a3bac0"></a>

Gets the value of PlayerStatus_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerStatus`](#structFRHAPI__AuditEvent_1a6a859a33a504f780c5cdac0dcad855de)`(ERHAPI_SessionPlayerStatus & OutValue) const` <a id="structFRHAPI__AuditEvent_1a6a859a33a504f780c5cdac0dcad855de"></a>

Fills OutValue with the value of PlayerStatus_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__AuditEvent_1a79c10ee6be7c0ca6c30f77e602783af8)`()` <a id="structFRHAPI__AuditEvent_1a79c10ee6be7c0ca6c30f77e602783af8"></a>

Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__AuditEvent_1a37a7e8a742f239651afd63f78f473d29)`() const` <a id="structFRHAPI__AuditEvent_1a37a7e8a742f239651afd63f78f473d29"></a>

Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerStatus`](#structFRHAPI__AuditEvent_1a1808222701b0c45c69bbbc1dd355f540)`(const ERHAPI_SessionPlayerStatus & NewValue)` <a id="structFRHAPI__AuditEvent_1a1808222701b0c45c69bbbc1dd355f540"></a>

Sets the value of PlayerStatus_Optional and also sets PlayerStatus_IsSet to true.

#### `public inline void `[`SetPlayerStatus`](#structFRHAPI__AuditEvent_1a8fdc03635bf2ac0aa85dadfd14bcc4b1)`(ERHAPI_SessionPlayerStatus && NewValue)` <a id="structFRHAPI__AuditEvent_1a8fdc03635bf2ac0aa85dadfd14bcc4b1"></a>

Sets the value of PlayerStatus_Optional and also sets PlayerStatus_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerStatus`](#structFRHAPI__AuditEvent_1aa6d6d3cf6091881b21f450168b45f4c8)`()` <a id="structFRHAPI__AuditEvent_1aa6d6d3cf6091881b21f450168b45f4c8"></a>

Clears the value of PlayerStatus_Optional and sets PlayerStatus_IsSet to false.

#### `public inline bool `[`IsPlayerStatusSet`](#structFRHAPI__AuditEvent_1ab8a02c50baa7a910cdddb0d16821f76e)`() const` <a id="structFRHAPI__AuditEvent_1ab8a02c50baa7a910cdddb0d16821f76e"></a>

Checks whether PlayerStatus_Optional has been set.

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__AuditEvent_1a1c8c5aea286587b45753bbdaf584088b)`()` <a id="structFRHAPI__AuditEvent_1a1c8c5aea286587b45753bbdaf584088b"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__AuditEvent_1a82f98401f9e494b6986703d382d8899c)`() const` <a id="structFRHAPI__AuditEvent_1a82f98401f9e494b6986703d382d8899c"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__AuditEvent_1a6d06d12af23cf8333d8958f649dc450d)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a6d06d12af23cf8333d8958f649dc450d"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatform`](#structFRHAPI__AuditEvent_1a2fe237dcd924c666d499899ee49e36d0)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__AuditEvent_1a2fe237dcd924c666d499899ee49e36d0"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__AuditEvent_1a7bf34fa2f7e4f0099afd3f4da02148c7)`()` <a id="structFRHAPI__AuditEvent_1a7bf34fa2f7e4f0099afd3f4da02148c7"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__AuditEvent_1afbc70eef24feb7b67fdc8fbb8ac73b93)`() const` <a id="structFRHAPI__AuditEvent_1afbc70eef24feb7b67fdc8fbb8ac73b93"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatform`](#structFRHAPI__AuditEvent_1abbd1b1149c514a1526d84bbfac1df1cf)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__AuditEvent_1abbd1b1149c514a1526d84bbfac1df1cf"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline void `[`SetPlatform`](#structFRHAPI__AuditEvent_1a1d7407c70e5958528911610f12794cd2)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__AuditEvent_1a1d7407c70e5958528911610f12794cd2"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__AuditEvent_1aa09b2a730eadbccecf65f6491dd39461)`()` <a id="structFRHAPI__AuditEvent_1aa09b2a730eadbccecf65f6491dd39461"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline bool `[`IsPlatformSet`](#structFRHAPI__AuditEvent_1ae0374725fe376fb4276ea59474a0e783)`() const` <a id="structFRHAPI__AuditEvent_1ae0374725fe376fb4276ea59474a0e783"></a>

Checks whether Platform_Optional has been set.

#### `public inline FString & `[`GetPlatformSessionId`](#structFRHAPI__AuditEvent_1a008eef53734e140db050a47ebd771326)`()` <a id="structFRHAPI__AuditEvent_1a008eef53734e140db050a47ebd771326"></a>

Gets the value of PlatformSessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformSessionId`](#structFRHAPI__AuditEvent_1a71694e2d4702e7340e562ca176704e03)`() const` <a id="structFRHAPI__AuditEvent_1a71694e2d4702e7340e562ca176704e03"></a>

Gets the value of PlatformSessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformSessionId`](#structFRHAPI__AuditEvent_1a88838d73e8904fa68b5d4a9bc1d6975f)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a88838d73e8904fa68b5d4a9bc1d6975f"></a>

Gets the value of PlatformSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformSessionId`](#structFRHAPI__AuditEvent_1a2813c6585a35e3684dc5803706fcd359)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1a2813c6585a35e3684dc5803706fcd359"></a>

Fills OutValue with the value of PlatformSessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__AuditEvent_1ae9b0667b57eeea70e96bef8594476c03)`()` <a id="structFRHAPI__AuditEvent_1ae9b0667b57eeea70e96bef8594476c03"></a>

Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__AuditEvent_1ad1bd61054f2c4279b81d1bd63af5cf51)`() const` <a id="structFRHAPI__AuditEvent_1ad1bd61054f2c4279b81d1bd63af5cf51"></a>

Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformSessionId`](#structFRHAPI__AuditEvent_1ac2eef0648ddb5613c03bfbd36af86360)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1ac2eef0648ddb5613c03bfbd36af86360"></a>

Sets the value of PlatformSessionId_Optional and also sets PlatformSessionId_IsSet to true.

#### `public inline void `[`SetPlatformSessionId`](#structFRHAPI__AuditEvent_1a1e17878a603c771549c57fc5cb95da07)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a1e17878a603c771549c57fc5cb95da07"></a>

Sets the value of PlatformSessionId_Optional and also sets PlatformSessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformSessionId`](#structFRHAPI__AuditEvent_1a5fc4053f6b838a472fbe315133728400)`()` <a id="structFRHAPI__AuditEvent_1a5fc4053f6b838a472fbe315133728400"></a>

Clears the value of PlatformSessionId_Optional and sets PlatformSessionId_IsSet to false.

#### `public inline bool `[`IsPlatformSessionIdSet`](#structFRHAPI__AuditEvent_1a66f950e18c3943f421f566d3d96d8574)`() const` <a id="structFRHAPI__AuditEvent_1a66f950e18c3943f421f566d3d96d8574"></a>

Checks whether PlatformSessionId_Optional has been set.

#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__AuditEvent_1a6b5289bc7adb7e630dc2042890893fb3)`()` <a id="structFRHAPI__AuditEvent_1a6b5289bc7adb7e630dc2042890893fb3"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__AuditEvent_1a74a2da0c99c4504653080028b8a346ef)`() const` <a id="structFRHAPI__AuditEvent_1a74a2da0c99c4504653080028b8a346ef"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__AuditEvent_1a1cc40d701b4c216c6e0bcade0de06c04)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a1cc40d701b4c216c6e0bcade0de06c04"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceId`](#structFRHAPI__AuditEvent_1a22c9fb95a6d83f9f192bbd2e5903ae85)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1a22c9fb95a6d83f9f192bbd2e5903ae85"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__AuditEvent_1afe65fcf298fc6509a292f7d0d6a85e79)`()` <a id="structFRHAPI__AuditEvent_1afe65fcf298fc6509a292f7d0d6a85e79"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__AuditEvent_1aa2d8567baf45a88656b661f0f6f4c2d0)`() const` <a id="structFRHAPI__AuditEvent_1aa2d8567baf45a88656b661f0f6f4c2d0"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__AuditEvent_1a4b6b15fe6bb2f8cc822c9da426c6745f)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a4b6b15fe6bb2f8cc822c9da426c6745f"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__AuditEvent_1a9a7fc2a6faab6778919a07a24220507e)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a9a7fc2a6faab6778919a07a24220507e"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__AuditEvent_1a22603a0b806c747218532f541db1638b)`()` <a id="structFRHAPI__AuditEvent_1a22603a0b806c747218532f541db1638b"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline bool `[`IsInstanceIdSet`](#structFRHAPI__AuditEvent_1acc3a47b0824f678387ab3e2291e3c9a4)`() const` <a id="structFRHAPI__AuditEvent_1acc3a47b0824f678387ab3e2291e3c9a4"></a>

Checks whether InstanceId_Optional has been set.

#### `public inline ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__AuditEvent_1a9d66c0c2bdc38526dde839fad515cd9e)`()` <a id="structFRHAPI__AuditEvent_1a9d66c0c2bdc38526dde839fad515cd9e"></a>

Gets the value of HostType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__AuditEvent_1a1277d2bfc9f40c60b20a7d0f01078cee)`() const` <a id="structFRHAPI__AuditEvent_1a1277d2bfc9f40c60b20a7d0f01078cee"></a>

Gets the value of HostType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__AuditEvent_1ab7498ddc966a1660abd029e5fab21b69)`(const ERHAPI_HostType & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1ab7498ddc966a1660abd029e5fab21b69"></a>

Gets the value of HostType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetHostType`](#structFRHAPI__AuditEvent_1a3d7240abb4d60f56235c65c6ea077979)`(ERHAPI_HostType & OutValue) const` <a id="structFRHAPI__AuditEvent_1a3d7240abb4d60f56235c65c6ea077979"></a>

Fills OutValue with the value of HostType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__AuditEvent_1ab98f46ffdbc0180941dd80a140d53abf)`()` <a id="structFRHAPI__AuditEvent_1ab98f46ffdbc0180941dd80a140d53abf"></a>

Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__AuditEvent_1adbd22762bbb6a83082063f1ced682e7c)`() const` <a id="structFRHAPI__AuditEvent_1adbd22762bbb6a83082063f1ced682e7c"></a>

Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetHostType`](#structFRHAPI__AuditEvent_1a227a5d5ebab31508e083798da384a47c)`(const ERHAPI_HostType & NewValue)` <a id="structFRHAPI__AuditEvent_1a227a5d5ebab31508e083798da384a47c"></a>

Sets the value of HostType_Optional and also sets HostType_IsSet to true.

#### `public inline void `[`SetHostType`](#structFRHAPI__AuditEvent_1ac75f49285f71d1ac1fcea3baf5b8ef4a)`(ERHAPI_HostType && NewValue)` <a id="structFRHAPI__AuditEvent_1ac75f49285f71d1ac1fcea3baf5b8ef4a"></a>

Sets the value of HostType_Optional and also sets HostType_IsSet to true using move semantics.

#### `public inline void `[`ClearHostType`](#structFRHAPI__AuditEvent_1af2d3969a72d3de486e6730f174d54960)`()` <a id="structFRHAPI__AuditEvent_1af2d3969a72d3de486e6730f174d54960"></a>

Clears the value of HostType_Optional and sets HostType_IsSet to false.

#### `public inline bool `[`IsHostTypeSet`](#structFRHAPI__AuditEvent_1a6100cac42fb0561f9a4848569cf529bf)`() const` <a id="structFRHAPI__AuditEvent_1a6100cac42fb0561f9a4848569cf529bf"></a>

Checks whether HostType_Optional has been set.

#### `public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__AuditEvent_1a1d61167462309098b1b1e1f133dc25bb)`()` <a id="structFRHAPI__AuditEvent_1a1d61167462309098b1b1e1f133dc25bb"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__AuditEvent_1af5bc1e66532f2b87793b2fab630c020a)`() const` <a id="structFRHAPI__AuditEvent_1af5bc1e66532f2b87793b2fab630c020a"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__AuditEvent_1aa5028f0e917627559ae851da15271490)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1aa5028f0e917627559ae851da15271490"></a>

Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__AuditEvent_1a78914fb5273ca86ef9130daf01c0d299)`(FGuid & OutValue) const` <a id="structFRHAPI__AuditEvent_1a78914fb5273ca86ef9130daf01c0d299"></a>

Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__AuditEvent_1a04283d2d1625817d9fe5ea93ad272c31)`()` <a id="structFRHAPI__AuditEvent_1a04283d2d1625817d9fe5ea93ad272c31"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__AuditEvent_1a9eb09e9c55bdb1c3b6f4f4795b537125)`() const` <a id="structFRHAPI__AuditEvent_1a9eb09e9c55bdb1c3b6f4f4795b537125"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetHostPlayerUuid`](#structFRHAPI__AuditEvent_1afe493a5cd3b78599642e2f372e75b9a0)`(const FGuid & NewValue)` <a id="structFRHAPI__AuditEvent_1afe493a5cd3b78599642e2f372e75b9a0"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.

#### `public inline void `[`SetHostPlayerUuid`](#structFRHAPI__AuditEvent_1a6651e7be036259b5e2cbe048f74c154c)`(FGuid && NewValue)` <a id="structFRHAPI__AuditEvent_1a6651e7be036259b5e2cbe048f74c154c"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__AuditEvent_1aacdcdb79e5bcac41ff75fc7946d361e9)`()` <a id="structFRHAPI__AuditEvent_1aacdcdb79e5bcac41ff75fc7946d361e9"></a>

Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.

#### `public inline bool `[`IsHostPlayerUuidSet`](#structFRHAPI__AuditEvent_1a1ee0aa13a2cbd42dc35764feb2da14da)`() const` <a id="structFRHAPI__AuditEvent_1a1ee0aa13a2cbd42dc35764feb2da14da"></a>

Checks whether HostPlayerUuid_Optional has been set.

#### `public inline FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a2fe9a1a405fcb37045b751d6d886bf17)`()` <a id="structFRHAPI__AuditEvent_1a2fe9a1a405fcb37045b751d6d886bf17"></a>

Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a3825823cb1b0f1cd6a2b91701a83e401)`() const` <a id="structFRHAPI__AuditEvent_1a3825823cb1b0f1cd6a2b91701a83e401"></a>

Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a0fd70dd46a2887eceb2fcbb155ea7a99)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a0fd70dd46a2887eceb2fcbb155ea7a99"></a>

Gets the value of InstanceRequestTemplate_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a92a8f742f19ffff30d7637eb0a422e26)`(FGuid & OutValue) const` <a id="structFRHAPI__AuditEvent_1a92a8f742f19ffff30d7637eb0a422e26"></a>

Fills OutValue with the value of InstanceRequestTemplate_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__AuditEvent_1a9f5d08e9073e49abb45c558a144f3e7d)`()` <a id="structFRHAPI__AuditEvent_1a9f5d08e9073e49abb45c558a144f3e7d"></a>

Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__AuditEvent_1ac2795590b65bb05a55273f01b35f66bb)`() const` <a id="structFRHAPI__AuditEvent_1ac2795590b65bb05a55273f01b35f66bb"></a>

Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a5c57bc75cb577ee794c672cf55bae07b)`(const FGuid & NewValue)` <a id="structFRHAPI__AuditEvent_1a5c57bc75cb577ee794c672cf55bae07b"></a>

Sets the value of InstanceRequestTemplate_Optional and also sets InstanceRequestTemplate_IsSet to true.

#### `public inline void `[`SetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a76fc5a4577fdf7462180bb4a2979c54e)`(FGuid && NewValue)` <a id="structFRHAPI__AuditEvent_1a76fc5a4577fdf7462180bb4a2979c54e"></a>

Sets the value of InstanceRequestTemplate_Optional and also sets InstanceRequestTemplate_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a524c77ab8b9f19d870035b5ca5882800)`()` <a id="structFRHAPI__AuditEvent_1a524c77ab8b9f19d870035b5ca5882800"></a>

Clears the value of InstanceRequestTemplate_Optional and sets InstanceRequestTemplate_IsSet to false.

#### `public inline bool `[`IsInstanceRequestTemplateSet`](#structFRHAPI__AuditEvent_1aeef6c3214922d53a11bacceb7e3cea68)`() const` <a id="structFRHAPI__AuditEvent_1aeef6c3214922d53a11bacceb7e3cea68"></a>

Checks whether InstanceRequestTemplate_Optional has been set.

#### `public inline FString & `[`GetMap`](#structFRHAPI__AuditEvent_1a289e661e172e547e331d56da351a28be)`()` <a id="structFRHAPI__AuditEvent_1a289e661e172e547e331d56da351a28be"></a>

Gets the value of Map_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMap`](#structFRHAPI__AuditEvent_1a2c4e8a32d546efa92b631b42fb4794e6)`() const` <a id="structFRHAPI__AuditEvent_1a2c4e8a32d546efa92b631b42fb4794e6"></a>

Gets the value of Map_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMap`](#structFRHAPI__AuditEvent_1aedde6a1fd2c099b0c21bacf8595d09f2)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1aedde6a1fd2c099b0c21bacf8595d09f2"></a>

Gets the value of Map_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMap`](#structFRHAPI__AuditEvent_1aa3733fd2051cab50d2a2c5875f035bc5)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1aa3733fd2051cab50d2a2c5875f035bc5"></a>

Fills OutValue with the value of Map_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMapOrNull`](#structFRHAPI__AuditEvent_1a45077dae475699cd13a936e62efca1b3)`()` <a id="structFRHAPI__AuditEvent_1a45077dae475699cd13a936e62efca1b3"></a>

Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMapOrNull`](#structFRHAPI__AuditEvent_1a993511da5e1e0b0fb305cc841a76f65f)`() const` <a id="structFRHAPI__AuditEvent_1a993511da5e1e0b0fb305cc841a76f65f"></a>

Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMap`](#structFRHAPI__AuditEvent_1a8c12843b486e7c44895f91e3048c6c16)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a8c12843b486e7c44895f91e3048c6c16"></a>

Sets the value of Map_Optional and also sets Map_IsSet to true.

#### `public inline void `[`SetMap`](#structFRHAPI__AuditEvent_1a26bb3a4f8c3a89e44e03fef02d5c0f4c)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a26bb3a4f8c3a89e44e03fef02d5c0f4c"></a>

Sets the value of Map_Optional and also sets Map_IsSet to true using move semantics.

#### `public inline void `[`ClearMap`](#structFRHAPI__AuditEvent_1a6d6275509b146ad4eba918dbcb22d0ad)`()` <a id="structFRHAPI__AuditEvent_1a6d6275509b146ad4eba918dbcb22d0ad"></a>

Clears the value of Map_Optional and sets Map_IsSet to false.

#### `public inline bool `[`IsMapSet`](#structFRHAPI__AuditEvent_1abde78ff0c14f2822e4a94a7677b1c2f8)`() const` <a id="structFRHAPI__AuditEvent_1abde78ff0c14f2822e4a94a7677b1c2f8"></a>

Checks whether Map_Optional has been set.

#### `public inline FString & `[`GetMode`](#structFRHAPI__AuditEvent_1a8784cb1ac0d41d5012b6580e23ce70c1)`()` <a id="structFRHAPI__AuditEvent_1a8784cb1ac0d41d5012b6580e23ce70c1"></a>

Gets the value of Mode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMode`](#structFRHAPI__AuditEvent_1a67caa96315fe4bc1551eee18cbbe6ec4)`() const` <a id="structFRHAPI__AuditEvent_1a67caa96315fe4bc1551eee18cbbe6ec4"></a>

Gets the value of Mode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMode`](#structFRHAPI__AuditEvent_1aca3d0ef3e302db8240cdad6379dbb640)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1aca3d0ef3e302db8240cdad6379dbb640"></a>

Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMode`](#structFRHAPI__AuditEvent_1a3d2d06cc48d5c42680fde1952dacf915)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1a3d2d06cc48d5c42680fde1952dacf915"></a>

Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetModeOrNull`](#structFRHAPI__AuditEvent_1a74ef2db4b8cf448fe1b78e5fe08f9523)`()` <a id="structFRHAPI__AuditEvent_1a74ef2db4b8cf448fe1b78e5fe08f9523"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetModeOrNull`](#structFRHAPI__AuditEvent_1aca7970fbc5b6f9c6edcb7edb90924a2a)`() const` <a id="structFRHAPI__AuditEvent_1aca7970fbc5b6f9c6edcb7edb90924a2a"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMode`](#structFRHAPI__AuditEvent_1acdf423879d2e7c7dd44ad22aa8207c68)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1acdf423879d2e7c7dd44ad22aa8207c68"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true.

#### `public inline void `[`SetMode`](#structFRHAPI__AuditEvent_1a648c4e548da4da4383dce888df33752b)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a648c4e548da4da4383dce888df33752b"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true using move semantics.

#### `public inline void `[`ClearMode`](#structFRHAPI__AuditEvent_1a9ba2ddca1885eb21298dbb4b623759f8)`()` <a id="structFRHAPI__AuditEvent_1a9ba2ddca1885eb21298dbb4b623759f8"></a>

Clears the value of Mode_Optional and sets Mode_IsSet to false.

#### `public inline bool `[`IsModeSet`](#structFRHAPI__AuditEvent_1ab0ee7f51d48c7152d659dfa1eb26533d)`() const` <a id="structFRHAPI__AuditEvent_1ab0ee7f51d48c7152d659dfa1eb26533d"></a>

Checks whether Mode_Optional has been set.

#### `public inline FString & `[`GetAllocationId`](#structFRHAPI__AuditEvent_1a6bcd8b3b583aee81da1028103a1f91fc)`()` <a id="structFRHAPI__AuditEvent_1a6bcd8b3b583aee81da1028103a1f91fc"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetAllocationId`](#structFRHAPI__AuditEvent_1a6a59667aa4533b82179f88688db187af)`() const` <a id="structFRHAPI__AuditEvent_1a6a59667aa4533b82179f88688db187af"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetAllocationId`](#structFRHAPI__AuditEvent_1a8c820d74b60d4f18c84dabfa0763e32c)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a8c820d74b60d4f18c84dabfa0763e32c"></a>

Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAllocationId`](#structFRHAPI__AuditEvent_1aca70562b5536641a9011b237a8747858)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1aca70562b5536641a9011b237a8747858"></a>

Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetAllocationIdOrNull`](#structFRHAPI__AuditEvent_1a0115eb2695ea119644f35ed9a2ee1b0f)`()` <a id="structFRHAPI__AuditEvent_1a0115eb2695ea119644f35ed9a2ee1b0f"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__AuditEvent_1a317ad56a6b66b9e1ac0c2c49b8e75527)`() const` <a id="structFRHAPI__AuditEvent_1a317ad56a6b66b9e1ac0c2c49b8e75527"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAllocationId`](#structFRHAPI__AuditEvent_1a26ff30d159006de17d5f4eb37737ecd5)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a26ff30d159006de17d5f4eb37737ecd5"></a>

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.

#### `public inline void `[`SetAllocationId`](#structFRHAPI__AuditEvent_1aa84df1132beaf5bb229a539f3dbb268d)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1aa84df1132beaf5bb229a539f3dbb268d"></a>

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true using move semantics.

#### `public inline void `[`ClearAllocationId`](#structFRHAPI__AuditEvent_1ab04e25609ffcf65ec41946fec4c51f80)`()` <a id="structFRHAPI__AuditEvent_1ab04e25609ffcf65ec41946fec4c51f80"></a>

Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.

#### `public inline bool `[`IsAllocationIdSet`](#structFRHAPI__AuditEvent_1a8688ecf4ec4beef7f70b1b8eccb4f6fd)`() const` <a id="structFRHAPI__AuditEvent_1a8688ecf4ec4beef7f70b1b8eccb4f6fd"></a>

Checks whether AllocationId_Optional has been set.

#### `public inline ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__AuditEvent_1acabc21e1822d2bf322d54dc092e85778)`()` <a id="structFRHAPI__AuditEvent_1acabc21e1822d2bf322d54dc092e85778"></a>

Gets the value of JoinStatus_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__AuditEvent_1a0f739d993b9a0f8b707c3589fccb1222)`() const` <a id="structFRHAPI__AuditEvent_1a0f739d993b9a0f8b707c3589fccb1222"></a>

Gets the value of JoinStatus_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__AuditEvent_1a983dc277f35ecf088b0852cd4fcbc6af)`(const ERHAPI_InstanceJoinableStatus & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a983dc277f35ecf088b0852cd4fcbc6af"></a>

Gets the value of JoinStatus_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetJoinStatus`](#structFRHAPI__AuditEvent_1ad317d132732992d96bfa9c87769250d3)`(ERHAPI_InstanceJoinableStatus & OutValue) const` <a id="structFRHAPI__AuditEvent_1ad317d132732992d96bfa9c87769250d3"></a>

Fills OutValue with the value of JoinStatus_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__AuditEvent_1a6c023e6850a1e1b1d7dd7c870bdd000c)`()` <a id="structFRHAPI__AuditEvent_1a6c023e6850a1e1b1d7dd7c870bdd000c"></a>

Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__AuditEvent_1a62e55c214bd64e4c85149f722232acac)`() const` <a id="structFRHAPI__AuditEvent_1a62e55c214bd64e4c85149f722232acac"></a>

Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetJoinStatus`](#structFRHAPI__AuditEvent_1a9ad57b57c4338b2f4f43581d2e7ca6d6)`(const ERHAPI_InstanceJoinableStatus & NewValue)` <a id="structFRHAPI__AuditEvent_1a9ad57b57c4338b2f4f43581d2e7ca6d6"></a>

Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true.

#### `public inline void `[`SetJoinStatus`](#structFRHAPI__AuditEvent_1a5490ddb4893256915a7ec8a49e0ce454)`(ERHAPI_InstanceJoinableStatus && NewValue)` <a id="structFRHAPI__AuditEvent_1a5490ddb4893256915a7ec8a49e0ce454"></a>

Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinStatus`](#structFRHAPI__AuditEvent_1aa2055e3edb743366349cb596e48c6dc9)`()` <a id="structFRHAPI__AuditEvent_1aa2055e3edb743366349cb596e48c6dc9"></a>

Clears the value of JoinStatus_Optional and sets JoinStatus_IsSet to false.

#### `public inline bool `[`IsJoinStatusSet`](#structFRHAPI__AuditEvent_1ae5bce6fbd66439f134728541c4c8c429)`() const` <a id="structFRHAPI__AuditEvent_1ae5bce6fbd66439f134728541c4c8c429"></a>

Checks whether JoinStatus_Optional has been set.

#### `public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__AuditEvent_1a76be82a237bbfbc53e978a4a3a6cd968)`()` <a id="structFRHAPI__AuditEvent_1a76be82a237bbfbc53e978a4a3a6cd968"></a>

Gets the value of JoinParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__AuditEvent_1a14ede778e2a72bd80813b0f801d2f396)`() const` <a id="structFRHAPI__AuditEvent_1a14ede778e2a72bd80813b0f801d2f396"></a>

Gets the value of JoinParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__AuditEvent_1a139874d28160d5df1a551853bb27dd30)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a139874d28160d5df1a551853bb27dd30"></a>

Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetJoinParams`](#structFRHAPI__AuditEvent_1a65fc71a298fad25ea455a43649d890bf)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & OutValue) const` <a id="structFRHAPI__AuditEvent_1a65fc71a298fad25ea455a43649d890bf"></a>

Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__AuditEvent_1a4f09acb45c110e2946f6d3bd55c2dca1)`()` <a id="structFRHAPI__AuditEvent_1a4f09acb45c110e2946f6d3bd55c2dca1"></a>

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__AuditEvent_1adbac336271adc89dce543e627e590865)`() const` <a id="structFRHAPI__AuditEvent_1adbac336271adc89dce543e627e590865"></a>

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetJoinParams`](#structFRHAPI__AuditEvent_1af8a036b78938df2363a5297dd9b79703)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & NewValue)` <a id="structFRHAPI__AuditEvent_1af8a036b78938df2363a5297dd9b79703"></a>

Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.

#### `public inline void `[`SetJoinParams`](#structFRHAPI__AuditEvent_1a7b9b2b722b6cd7a68a7aa747f7c438d0)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` && NewValue)` <a id="structFRHAPI__AuditEvent_1a7b9b2b722b6cd7a68a7aa747f7c438d0"></a>

Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinParams`](#structFRHAPI__AuditEvent_1a4c60bb357f152966a362b08045e787be)`()` <a id="structFRHAPI__AuditEvent_1a4c60bb357f152966a362b08045e787be"></a>

Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.

#### `public inline bool `[`IsJoinParamsSet`](#structFRHAPI__AuditEvent_1ab2d765ade9bb9866bd5ad7d575e78b81)`() const` <a id="structFRHAPI__AuditEvent_1ab2d765ade9bb9866bd5ad7d575e78b81"></a>

Checks whether JoinParams_Optional has been set.

#### `public inline ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__AuditEvent_1a37f6523faf2e05665f098bdcf30cfe9f)`()` <a id="structFRHAPI__AuditEvent_1a37f6523faf2e05665f098bdcf30cfe9f"></a>

Gets the value of InstanceHealth_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__AuditEvent_1a71250a1254772e78c280222c573699da)`() const` <a id="structFRHAPI__AuditEvent_1a71250a1254772e78c280222c573699da"></a>

Gets the value of InstanceHealth_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__AuditEvent_1a9ae0d9452271f312d8216051a8311dd1)`(const ERHAPI_InstanceHealthStatus & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a9ae0d9452271f312d8216051a8311dd1"></a>

Gets the value of InstanceHealth_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceHealth`](#structFRHAPI__AuditEvent_1adb0bc9aab3afcdcffd3ac2ed21dd6380)`(ERHAPI_InstanceHealthStatus & OutValue) const` <a id="structFRHAPI__AuditEvent_1adb0bc9aab3afcdcffd3ac2ed21dd6380"></a>

Fills OutValue with the value of InstanceHealth_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__AuditEvent_1a51b3da29cffd589b7b4df44e1219b9b4)`()` <a id="structFRHAPI__AuditEvent_1a51b3da29cffd589b7b4df44e1219b9b4"></a>

Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__AuditEvent_1af549b589a9adb954dd05fff760c70a40)`() const` <a id="structFRHAPI__AuditEvent_1af549b589a9adb954dd05fff760c70a40"></a>

Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceHealth`](#structFRHAPI__AuditEvent_1a16e475ad1256789f7bf0a16d21f38c75)`(const ERHAPI_InstanceHealthStatus & NewValue)` <a id="structFRHAPI__AuditEvent_1a16e475ad1256789f7bf0a16d21f38c75"></a>

Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true.

#### `public inline void `[`SetInstanceHealth`](#structFRHAPI__AuditEvent_1a6f54c0cafe05dfa7a852d378988022dc)`(ERHAPI_InstanceHealthStatus && NewValue)` <a id="structFRHAPI__AuditEvent_1a6f54c0cafe05dfa7a852d378988022dc"></a>

Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceHealth`](#structFRHAPI__AuditEvent_1af8b4b7b6a59f3d4bb4ba9529dc729d7c)`()` <a id="structFRHAPI__AuditEvent_1af8b4b7b6a59f3d4bb4ba9529dc729d7c"></a>

Clears the value of InstanceHealth_Optional and sets InstanceHealth_IsSet to false.

#### `public inline bool `[`IsInstanceHealthSet`](#structFRHAPI__AuditEvent_1ae94e17ff4a1dd18d84cacda3accc4ce0)`() const` <a id="structFRHAPI__AuditEvent_1ae94e17ff4a1dd18d84cacda3accc4ce0"></a>

Checks whether InstanceHealth_Optional has been set.

#### `public inline FString & `[`GetQueueId`](#structFRHAPI__AuditEvent_1aa43b6544f15c89f3a408234d9a3262eb)`()` <a id="structFRHAPI__AuditEvent_1aa43b6544f15c89f3a408234d9a3262eb"></a>

Gets the value of QueueId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetQueueId`](#structFRHAPI__AuditEvent_1aa49f2fb1a6e0b2bbd4b3efa1aec1706b)`() const` <a id="structFRHAPI__AuditEvent_1aa49f2fb1a6e0b2bbd4b3efa1aec1706b"></a>

Gets the value of QueueId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetQueueId`](#structFRHAPI__AuditEvent_1a629f9d9e6662bd34de6fcd88fb2b50f3)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a629f9d9e6662bd34de6fcd88fb2b50f3"></a>

Gets the value of QueueId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetQueueId`](#structFRHAPI__AuditEvent_1ad4f3eafb9ca60cef0f70d162bedeefef)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1ad4f3eafb9ca60cef0f70d162bedeefef"></a>

Fills OutValue with the value of QueueId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetQueueIdOrNull`](#structFRHAPI__AuditEvent_1a0d963bbf5a530ea26aecc488eb82706f)`()` <a id="structFRHAPI__AuditEvent_1a0d963bbf5a530ea26aecc488eb82706f"></a>

Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetQueueIdOrNull`](#structFRHAPI__AuditEvent_1af2a86e68056f1799bd1574b2840ab2d4)`() const` <a id="structFRHAPI__AuditEvent_1af2a86e68056f1799bd1574b2840ab2d4"></a>

Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetQueueId`](#structFRHAPI__AuditEvent_1a92e54b59fe88672a6e0515e0aab8a53c)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a92e54b59fe88672a6e0515e0aab8a53c"></a>

Sets the value of QueueId_Optional and also sets QueueId_IsSet to true.

#### `public inline void `[`SetQueueId`](#structFRHAPI__AuditEvent_1ac0c803793dfbb5cd36a5570b964bc116)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1ac0c803793dfbb5cd36a5570b964bc116"></a>

Sets the value of QueueId_Optional and also sets QueueId_IsSet to true using move semantics.

#### `public inline void `[`ClearQueueId`](#structFRHAPI__AuditEvent_1a905562c31a2b45c0ade8bcfe9e0cbfdf)`()` <a id="structFRHAPI__AuditEvent_1a905562c31a2b45c0ade8bcfe9e0cbfdf"></a>

Clears the value of QueueId_Optional and sets QueueId_IsSet to false.

#### `public inline bool `[`IsQueueIdSet`](#structFRHAPI__AuditEvent_1a75ba5ab01b9afe2f1701b68116937fd9)`() const` <a id="structFRHAPI__AuditEvent_1a75ba5ab01b9afe2f1701b68116937fd9"></a>

Checks whether QueueId_Optional has been set.

#### `public inline FString & `[`GetTicketId`](#structFRHAPI__AuditEvent_1a5cfe2316ee1159b27d7dc7ebeac4717a)`()` <a id="structFRHAPI__AuditEvent_1a5cfe2316ee1159b27d7dc7ebeac4717a"></a>

Gets the value of TicketId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetTicketId`](#structFRHAPI__AuditEvent_1a28689df37e75f22e6bdce47782d8275b)`() const` <a id="structFRHAPI__AuditEvent_1a28689df37e75f22e6bdce47782d8275b"></a>

Gets the value of TicketId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetTicketId`](#structFRHAPI__AuditEvent_1aea4529db6968163bccf26166f45ee301)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1aea4529db6968163bccf26166f45ee301"></a>

Gets the value of TicketId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTicketId`](#structFRHAPI__AuditEvent_1ab2163ec45ace1d5da478d9a43aeb7f88)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1ab2163ec45ace1d5da478d9a43aeb7f88"></a>

Fills OutValue with the value of TicketId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetTicketIdOrNull`](#structFRHAPI__AuditEvent_1acb27402c766cf2920337e3bd07e61d24)`()` <a id="structFRHAPI__AuditEvent_1acb27402c766cf2920337e3bd07e61d24"></a>

Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetTicketIdOrNull`](#structFRHAPI__AuditEvent_1af819b67f9790340dd2f49c0a5d9ad6ce)`() const` <a id="structFRHAPI__AuditEvent_1af819b67f9790340dd2f49c0a5d9ad6ce"></a>

Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTicketId`](#structFRHAPI__AuditEvent_1a0ad577a0200e4c8f3ec0dc23762a6095)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a0ad577a0200e4c8f3ec0dc23762a6095"></a>

Sets the value of TicketId_Optional and also sets TicketId_IsSet to true.

#### `public inline void `[`SetTicketId`](#structFRHAPI__AuditEvent_1a84b357130e96b5131419b7bf391d8a4e)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a84b357130e96b5131419b7bf391d8a4e"></a>

Sets the value of TicketId_Optional and also sets TicketId_IsSet to true using move semantics.

#### `public inline void `[`ClearTicketId`](#structFRHAPI__AuditEvent_1a3a95477a2909de1f2322a6dc33532dd5)`()` <a id="structFRHAPI__AuditEvent_1a3a95477a2909de1f2322a6dc33532dd5"></a>

Clears the value of TicketId_Optional and sets TicketId_IsSet to false.

#### `public inline bool `[`IsTicketIdSet`](#structFRHAPI__AuditEvent_1a1638925762966feb0bd5564fd523c694)`() const` <a id="structFRHAPI__AuditEvent_1a1638925762966feb0bd5564fd523c694"></a>

Checks whether TicketId_Optional has been set.

#### `public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__AuditEvent_1ab7242432fb5072de114538c9c8442d19)`()` <a id="structFRHAPI__AuditEvent_1ab7242432fb5072de114538c9c8442d19"></a>

Gets the value of AdditionalParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__AuditEvent_1ae666aadaff26911ab216eb09b375118d)`() const` <a id="structFRHAPI__AuditEvent_1ae666aadaff26911ab216eb09b375118d"></a>

Gets the value of AdditionalParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__AuditEvent_1aff2b399aa09d9cf5a6f7373bc392742b)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1aff2b399aa09d9cf5a6f7373bc392742b"></a>

Gets the value of AdditionalParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAdditionalParams`](#structFRHAPI__AuditEvent_1ab3466dd7744e301ef79c215ccf45e1ca)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & OutValue) const` <a id="structFRHAPI__AuditEvent_1ab3466dd7744e301ef79c215ccf45e1ca"></a>

Fills OutValue with the value of AdditionalParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalParamsOrNull`](#structFRHAPI__AuditEvent_1a69bf6c977ec9df98464c6a7bb074761c)`()` <a id="structFRHAPI__AuditEvent_1a69bf6c977ec9df98464c6a7bb074761c"></a>

Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalParamsOrNull`](#structFRHAPI__AuditEvent_1a87d6f4115ba305ca058902dc80c827d0)`() const` <a id="structFRHAPI__AuditEvent_1a87d6f4115ba305ca058902dc80c827d0"></a>

Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAdditionalParams`](#structFRHAPI__AuditEvent_1a7c7a3b41818d9041f02d4f707d0c1b45)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & NewValue)` <a id="structFRHAPI__AuditEvent_1a7c7a3b41818d9041f02d4f707d0c1b45"></a>

Sets the value of AdditionalParams_Optional and also sets AdditionalParams_IsSet to true.

#### `public inline void `[`SetAdditionalParams`](#structFRHAPI__AuditEvent_1a8e8fd0b1aecfd5302d00f1c16f1a324f)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` && NewValue)` <a id="structFRHAPI__AuditEvent_1a8e8fd0b1aecfd5302d00f1c16f1a324f"></a>

Sets the value of AdditionalParams_Optional and also sets AdditionalParams_IsSet to true using move semantics.

#### `public inline void `[`ClearAdditionalParams`](#structFRHAPI__AuditEvent_1a576652cb7ff7d291a1235fe1116724c4)`()` <a id="structFRHAPI__AuditEvent_1a576652cb7ff7d291a1235fe1116724c4"></a>

Clears the value of AdditionalParams_Optional and sets AdditionalParams_IsSet to false.

#### `public inline bool `[`IsAdditionalParamsSet`](#structFRHAPI__AuditEvent_1a92e5f486e956608fb0dda188d73e003a)`() const` <a id="structFRHAPI__AuditEvent_1a92e5f486e956608fb0dda188d73e003a"></a>

Checks whether AdditionalParams_Optional has been set.

#### `public inline TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__AuditEvent_1a2fe433394e2e7913f980c15d9a8e6626)`()` <a id="structFRHAPI__AuditEvent_1a2fe433394e2e7913f980c15d9a8e6626"></a>

Gets the value of MapPreferences_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__AuditEvent_1aef35365d5ed232a6ad50f84b7df20764)`() const` <a id="structFRHAPI__AuditEvent_1aef35365d5ed232a6ad50f84b7df20764"></a>

Gets the value of MapPreferences_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__AuditEvent_1abb26bd7c845aa1cb8aa7fe0034bf757b)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1abb26bd7c845aa1cb8aa7fe0034bf757b"></a>

Gets the value of MapPreferences_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMapPreferences`](#structFRHAPI__AuditEvent_1af5102a96c848850e87d52973a585d314)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__AuditEvent_1af5102a96c848850e87d52973a585d314"></a>

Fills OutValue with the value of MapPreferences_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__AuditEvent_1a6b55b4c59b1eb9834d4e7ec7a2891de0)`()` <a id="structFRHAPI__AuditEvent_1a6b55b4c59b1eb9834d4e7ec7a2891de0"></a>

Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__AuditEvent_1ade70d364e0a4ff89e1ef1082d3488af0)`() const` <a id="structFRHAPI__AuditEvent_1ade70d364e0a4ff89e1ef1082d3488af0"></a>

Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMapPreferences`](#structFRHAPI__AuditEvent_1ac9fb953163a95ff99ea2ef834d19253f)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__AuditEvent_1ac9fb953163a95ff99ea2ef834d19253f"></a>

Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true.

#### `public inline void `[`SetMapPreferences`](#structFRHAPI__AuditEvent_1a56f8ae31a8695e7531e9eb1d68dbfd76)`(TArray< FString > && NewValue)` <a id="structFRHAPI__AuditEvent_1a56f8ae31a8695e7531e9eb1d68dbfd76"></a>

Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true using move semantics.

#### `public inline void `[`ClearMapPreferences`](#structFRHAPI__AuditEvent_1a33c453410167253e097ed36c2ee93f44)`()` <a id="structFRHAPI__AuditEvent_1a33c453410167253e097ed36c2ee93f44"></a>

Clears the value of MapPreferences_Optional and sets MapPreferences_IsSet to false.

#### `public inline bool `[`IsMapPreferencesSet`](#structFRHAPI__AuditEvent_1acfab0741719944600d85244c327c84d7)`() const` <a id="structFRHAPI__AuditEvent_1acfab0741719944600d85244c327c84d7"></a>

Checks whether MapPreferences_Optional has been set.

#### `public inline FString & `[`GetQueuedSessionId`](#structFRHAPI__AuditEvent_1adf50042aa36b8d3eebb6e3e7b8fff703)`()` <a id="structFRHAPI__AuditEvent_1adf50042aa36b8d3eebb6e3e7b8fff703"></a>

Gets the value of QueuedSessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetQueuedSessionId`](#structFRHAPI__AuditEvent_1aab47942be6e0bc3b5355886ffebdf24c)`() const` <a id="structFRHAPI__AuditEvent_1aab47942be6e0bc3b5355886ffebdf24c"></a>

Gets the value of QueuedSessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetQueuedSessionId`](#structFRHAPI__AuditEvent_1a86d4d4d5c5621b946dc6bbac39c68bed)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a86d4d4d5c5621b946dc6bbac39c68bed"></a>

Gets the value of QueuedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetQueuedSessionId`](#structFRHAPI__AuditEvent_1aafda7af949c96b72808c666d0cbd29e3)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1aafda7af949c96b72808c666d0cbd29e3"></a>

Fills OutValue with the value of QueuedSessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__AuditEvent_1a323eac4f800388ad3d76ba72cf088a6a)`()` <a id="structFRHAPI__AuditEvent_1a323eac4f800388ad3d76ba72cf088a6a"></a>

Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__AuditEvent_1a530fb2df499b7909f52e807c84d7b4ce)`() const` <a id="structFRHAPI__AuditEvent_1a530fb2df499b7909f52e807c84d7b4ce"></a>

Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetQueuedSessionId`](#structFRHAPI__AuditEvent_1ae9e67b72fec1cc3b3677be8d0fd19777)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1ae9e67b72fec1cc3b3677be8d0fd19777"></a>

Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true.

#### `public inline void `[`SetQueuedSessionId`](#structFRHAPI__AuditEvent_1a8ac88751a9d572b7c34c42542563e620)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a8ac88751a9d572b7c34c42542563e620"></a>

Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearQueuedSessionId`](#structFRHAPI__AuditEvent_1aba3557a10d63a3d8efba7904f34c1c92)`()` <a id="structFRHAPI__AuditEvent_1aba3557a10d63a3d8efba7904f34c1c92"></a>

Clears the value of QueuedSessionId_Optional and sets QueuedSessionId_IsSet to false.

#### `public inline bool `[`IsQueuedSessionIdSet`](#structFRHAPI__AuditEvent_1a363ffaafb8457ba77084ba3c813808b1)`() const` <a id="structFRHAPI__AuditEvent_1a363ffaafb8457ba77084ba3c813808b1"></a>

Checks whether QueuedSessionId_Optional has been set.

#### `public inline FString & `[`GetMatchId`](#structFRHAPI__AuditEvent_1a163c51822e728d02eccb635f0f854686)`()` <a id="structFRHAPI__AuditEvent_1a163c51822e728d02eccb635f0f854686"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__AuditEvent_1aa58a3dfcbc3f8303d11856a13b9fe12a)`() const` <a id="structFRHAPI__AuditEvent_1aa58a3dfcbc3f8303d11856a13b9fe12a"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__AuditEvent_1a45d714f3e3bb829b3accab83e90a2199)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a45d714f3e3bb829b3accab83e90a2199"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchId`](#structFRHAPI__AuditEvent_1a7b6ded106eedb8fb15d3358e89dfd405)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1a7b6ded106eedb8fb15d3358e89dfd405"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__AuditEvent_1ad311178a5169f61ba75ae20e0cf278b2)`()` <a id="structFRHAPI__AuditEvent_1ad311178a5169f61ba75ae20e0cf278b2"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__AuditEvent_1a48bb0aa2a813367487b39d33e6f7d3f5)`() const` <a id="structFRHAPI__AuditEvent_1a48bb0aa2a813367487b39d33e6f7d3f5"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchId`](#structFRHAPI__AuditEvent_1a3153129f6b5b0d0b6eb327fe17612222)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a3153129f6b5b0d0b6eb327fe17612222"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline void `[`SetMatchId`](#structFRHAPI__AuditEvent_1a1391a972d06c5729368c556d4071d865)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a1391a972d06c5729368c556d4071d865"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__AuditEvent_1abd7aede0da0d4e281062c95871342c64)`()` <a id="structFRHAPI__AuditEvent_1abd7aede0da0d4e281062c95871342c64"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline bool `[`IsMatchIdSet`](#structFRHAPI__AuditEvent_1acf38bcadf9e3d05e939c9477bbfb9473)`() const` <a id="structFRHAPI__AuditEvent_1acf38bcadf9e3d05e939c9477bbfb9473"></a>

Checks whether MatchId_Optional has been set.

#### `public inline FGuid & `[`GetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a105a39d8599c820c8b5bfcbe58c34800)`()` <a id="structFRHAPI__AuditEvent_1a105a39d8599c820c8b5bfcbe58c34800"></a>

Gets the value of RequestingUserUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetRequestingUserUuid`](#structFRHAPI__AuditEvent_1af348b03db08f9c3d4e7f4b9020b41b33)`() const` <a id="structFRHAPI__AuditEvent_1af348b03db08f9c3d4e7f4b9020b41b33"></a>

Gets the value of RequestingUserUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a84ce14b98c5906871df1ca28dbe69dd1)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a84ce14b98c5906871df1ca28dbe69dd1"></a>

Gets the value of RequestingUserUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a2b54f7415fc9c2b73f037a6be257f393)`(FGuid & OutValue) const` <a id="structFRHAPI__AuditEvent_1a2b54f7415fc9c2b73f037a6be257f393"></a>

Fills OutValue with the value of RequestingUserUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetRequestingUserUuidOrNull`](#structFRHAPI__AuditEvent_1a35a4226299a3419a32b5c250719337dd)`()` <a id="structFRHAPI__AuditEvent_1a35a4226299a3419a32b5c250719337dd"></a>

Returns a pointer to RequestingUserUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetRequestingUserUuidOrNull`](#structFRHAPI__AuditEvent_1a3b7fa9eb310bb80a950219dbcb60693a)`() const` <a id="structFRHAPI__AuditEvent_1a3b7fa9eb310bb80a950219dbcb60693a"></a>

Returns a pointer to RequestingUserUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a2c40640e2af1be4c876c2d8e8ac0de34)`(const FGuid & NewValue)` <a id="structFRHAPI__AuditEvent_1a2c40640e2af1be4c876c2d8e8ac0de34"></a>

Sets the value of RequestingUserUuid_Optional and also sets RequestingUserUuid_IsSet to true.

#### `public inline void `[`SetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a72846483bb51daa209b4c862b7096e11)`(FGuid && NewValue)` <a id="structFRHAPI__AuditEvent_1a72846483bb51daa209b4c862b7096e11"></a>

Sets the value of RequestingUserUuid_Optional and also sets RequestingUserUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearRequestingUserUuid`](#structFRHAPI__AuditEvent_1a75d20856ad2d8cccdcf2157a1238c0c1)`()` <a id="structFRHAPI__AuditEvent_1a75d20856ad2d8cccdcf2157a1238c0c1"></a>

Clears the value of RequestingUserUuid_Optional and sets RequestingUserUuid_IsSet to false.

#### `public inline bool `[`IsRequestingUserUuidSet`](#structFRHAPI__AuditEvent_1ad62bfca13adf09b1ad8915ceb2c20d84)`() const` <a id="structFRHAPI__AuditEvent_1ad62bfca13adf09b1ad8915ceb2c20d84"></a>

Checks whether RequestingUserUuid_Optional has been set.

#### `public inline FDateTime & `[`GetEventDatetime`](#structFRHAPI__AuditEvent_1a0b7b8cb1b88f418f93206b689851621c)`()` <a id="structFRHAPI__AuditEvent_1a0b7b8cb1b88f418f93206b689851621c"></a>

Gets the value of EventDatetime.

#### `public inline const FDateTime & `[`GetEventDatetime`](#structFRHAPI__AuditEvent_1a28830a7a894b9ab55814bad91ae87390)`() const` <a id="structFRHAPI__AuditEvent_1a28830a7a894b9ab55814bad91ae87390"></a>

Gets the value of EventDatetime.

#### `public inline void `[`SetEventDatetime`](#structFRHAPI__AuditEvent_1ad4e8f68d0b4064c703124dba80dbfb87)`(const FDateTime & NewValue)` <a id="structFRHAPI__AuditEvent_1ad4e8f68d0b4064c703124dba80dbfb87"></a>

Sets the value of EventDatetime.

#### `public inline void `[`SetEventDatetime`](#structFRHAPI__AuditEvent_1a8738833f39eb52d322a8b43157aca869)`(FDateTime && NewValue)` <a id="structFRHAPI__AuditEvent_1a8738833f39eb52d322a8b43157aca869"></a>

Sets the value of EventDatetime using move semantics.

