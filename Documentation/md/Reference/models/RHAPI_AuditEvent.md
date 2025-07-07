---
title: RHAPI_AuditEvent
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_AuditEvent`](#structFRHAPI__AuditEvent) | 

## struct `FRHAPI_AuditEvent` <a id="structFRHAPI__AuditEvent"></a>

```
struct FRHAPI_AuditEvent
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`EventName`](#structFRHAPI__AuditEvent_1a0e11dca6739b8cd51e77938830d9bc34) | Name of the audit event you are creating. Customer created events will be prepended with 'customer.'.
`public FString `[`SessionId`](#structFRHAPI__AuditEvent_1aa3464d29168142e832c39d802bad34ce) | ID of the session this event occurred in.
`public FString `[`Reason_Optional`](#structFRHAPI__AuditEvent_1afbf1f56dc145a9a3087e245946cf3bdd) | Reason for this event to occur.
`public bool `[`Reason_IsSet`](#structFRHAPI__AuditEvent_1a083bdd403d58e773ad3deb73034f9369) | true if Reason_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__AuditEvent_1a82e273285f49d980093cd4bde5510df9) | Custom data for this audit request.
`public bool `[`CustomData_IsSet`](#structFRHAPI__AuditEvent_1aaded55db324c1f64f857369e579564f6) | true if CustomData_Optional has been set to a value
`public FString `[`SessionType_Optional`](#structFRHAPI__AuditEvent_1a87be75fe3f7219468955d7958e106aeb) | Type of the session this event occurred in.
`public bool `[`SessionType_IsSet`](#structFRHAPI__AuditEvent_1abe58daa1f44673b441b284bdd174ad7c) | true if SessionType_Optional has been set to a value
`public FString `[`RegionId_Optional`](#structFRHAPI__AuditEvent_1a3e6a3125468f0e15dbdf54463aac4690) | Region ID for this event.
`public bool `[`RegionId_IsSet`](#structFRHAPI__AuditEvent_1a893d0bec95f55de1e7940e6ddc9e00db) | true if RegionId_Optional has been set to a value
`public bool `[`Joinable_Optional`](#structFRHAPI__AuditEvent_1a1256853740991d081ebf0b20b3dfd1d3) | Whether or not the session is publicly joinable.
`public bool `[`Joinable_IsSet`](#structFRHAPI__AuditEvent_1a012943831fcce2063015ebcaf99528ee) | true if Joinable_Optional has been set to a value
`public `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` `[`Joinability_Optional`](#structFRHAPI__AuditEvent_1a99138d0c3ecf5bb9afb306f8ece85e53) | Joinability flags about the session.
`public bool `[`Joinability_IsSet`](#structFRHAPI__AuditEvent_1a705a57dd95f3272b3abefc365762b0d4) | true if Joinability_Optional has been set to a value
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
`public int32 `[`TicketWaitSeconds_Optional`](#structFRHAPI__AuditEvent_1a412d9228a781030cbb71d7957e4b39df) | The total time in seconds that the ticket waited before being assigned to a match.
`public bool `[`TicketWaitSeconds_IsSet`](#structFRHAPI__AuditEvent_1a6def889fe45294b755f47847353b9d97) | true if TicketWaitSeconds_Optional has been set to a value
`public FString `[`MatchMakingProfileId_Optional`](#structFRHAPI__AuditEvent_1adf818df32527ae3d08ee6c2b9dca6aae) | ID of the MatchMakingProfile used to create this session.
`public bool `[`MatchMakingProfileId_IsSet`](#structFRHAPI__AuditEvent_1a4cb9a0e235175385d99767546e0427de) | true if MatchMakingProfileId_Optional has been set to a value
`public FGuid `[`RequestingUserUuid_Optional`](#structFRHAPI__AuditEvent_1af0252ad8092c0b033ddf45a8eef3698e) | 
`public bool `[`RequestingUserUuid_IsSet`](#structFRHAPI__AuditEvent_1aa1eaf461666b39f72b48f3a24ba21f85) | true if RequestingUserUuid_Optional has been set to a value
`public FDateTime `[`EventDatetime`](#structFRHAPI__AuditEvent_1abaade7e25cc8bbb04e5efe8ccb7f9800) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public virtual bool `[`FromJson`](#structFRHAPI__AuditEvent_1a191062f32038349f94873cfb420d256c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__AuditEvent_1a4198616996704e101d5d037edfcbac35)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetEventName`](#structFRHAPI__AuditEvent_1acca984325fb3a7d3412c2f302cffe519)`()` | Gets the value of EventName.
`public inline const FString & `[`GetEventName`](#structFRHAPI__AuditEvent_1a0f11c00e9301287f03b4fc0020484209)`() const` | Gets the value of EventName.
`public inline void `[`SetEventName`](#structFRHAPI__AuditEvent_1a8087921386fdec5296aec7c5e6fea83e)`(const FString & NewValue)` | Sets the value of EventName.
`public inline void `[`SetEventName`](#structFRHAPI__AuditEvent_1a7a159fa0f7311f41152411c263c7ccd2)`(FString && NewValue)` | Sets the value of EventName using move semantics.
`public inline FString & `[`GetSessionId`](#structFRHAPI__AuditEvent_1ac889227260cb777638ee2fe0f4406d84)`()` | Gets the value of SessionId.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__AuditEvent_1a056f977f66692feccf4c31147c051dfa)`() const` | Gets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__AuditEvent_1a867836397739325b10321b484d3e5b45)`(const FString & NewValue)` | Sets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__AuditEvent_1a0ddb0d8e5c62d564d5e0ff926e7932e6)`(FString && NewValue)` | Sets the value of SessionId using move semantics.
`public inline FString & `[`GetReason`](#structFRHAPI__AuditEvent_1a74fb304f2cf2ea5696fd4190a687d6d4)`()` | Gets the value of Reason_Optional, regardless of it having been set.
`public inline const FString & `[`GetReason`](#structFRHAPI__AuditEvent_1a73960ba26ce831ebf47f2b77bfef47fd)`() const` | Gets the value of Reason_Optional, regardless of it having been set.
`public inline const FString & `[`GetReason`](#structFRHAPI__AuditEvent_1ae350385f7b7dc07b9b2ec1ac6dc44ff5)`(const FString & DefaultValue) const` | Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetReason`](#structFRHAPI__AuditEvent_1a0d8dcd2315b4e2875c2d70f0668a1d18)`(FString & OutValue) const` | Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetReasonOrNull`](#structFRHAPI__AuditEvent_1a33987a883e60d5856183396ce6a6437f)`()` | Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetReasonOrNull`](#structFRHAPI__AuditEvent_1ab7ed81802784e1a67659e8a6e710982e)`() const` | Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetReason`](#structFRHAPI__AuditEvent_1a6e36760dd639abb9554ff8eecc7a04e0)`(const FString & NewValue)` | Sets the value of Reason_Optional and also sets Reason_IsSet to true.
`public inline void `[`SetReason`](#structFRHAPI__AuditEvent_1a9396718a1a32d0e9f5f69fb2cdbe6edd)`(FString && NewValue)` | Sets the value of Reason_Optional and also sets Reason_IsSet to true using move semantics.
`public inline void `[`ClearReason`](#structFRHAPI__AuditEvent_1a5b5a895bd7fe668e8295807cbf9c75c7)`()` | Clears the value of Reason_Optional and sets Reason_IsSet to false.
`public inline bool `[`IsReasonSet`](#structFRHAPI__AuditEvent_1add7002cc97abaf8dd6e749f57a53e903)`() const` | Checks whether Reason_Optional has been set.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__AuditEvent_1a72236ce82364b6d33606a35269d3bb3b)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__AuditEvent_1a2315ae2ac06f09beba329f38f9bf9d9c)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__AuditEvent_1a6c0ad3cdb14308c07e2b3686ed139a3d)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__AuditEvent_1a4960d694b25fbe1a5e4867d02faa918b)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__AuditEvent_1ac68e9d744ac298a3790555ba0a331cbf)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__AuditEvent_1acf37d409456cee705ffea658bcc3f38e)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__AuditEvent_1a4affedaaa8d6fa24ecfcf4212fd107ed)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__AuditEvent_1a2718da986bec260504cf9f1d0c7a7459)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__AuditEvent_1a5aaffe4f1be621a24ef6a07d08271ff7)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__AuditEvent_1af3524cd9746aa75174ce89b878bb05f6)`() const` | Checks whether CustomData_Optional has been set.
`public inline FString & `[`GetSessionType`](#structFRHAPI__AuditEvent_1a1dbbd5789767c33e0f61e66ef0c6255d)`()` | Gets the value of SessionType_Optional, regardless of it having been set.
`public inline const FString & `[`GetSessionType`](#structFRHAPI__AuditEvent_1af9ceecfb37fca611a9219f405de3b6e5)`() const` | Gets the value of SessionType_Optional, regardless of it having been set.
`public inline const FString & `[`GetSessionType`](#structFRHAPI__AuditEvent_1a067b7aa1a20118296a60d5eea532e646)`(const FString & DefaultValue) const` | Gets the value of SessionType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessionType`](#structFRHAPI__AuditEvent_1a0158e378b5f65a76e110981c2cb54f2c)`(FString & OutValue) const` | Fills OutValue with the value of SessionType_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetSessionTypeOrNull`](#structFRHAPI__AuditEvent_1a3daa85354c94d16d4696a1d9d09579ad)`()` | Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetSessionTypeOrNull`](#structFRHAPI__AuditEvent_1aeab0859ec3cd64c0b6a7c0680addbdac)`() const` | Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessionType`](#structFRHAPI__AuditEvent_1a94d2c114d9c835b2978fb12cff5ac056)`(const FString & NewValue)` | Sets the value of SessionType_Optional and also sets SessionType_IsSet to true.
`public inline void `[`SetSessionType`](#structFRHAPI__AuditEvent_1aa706a9efc4f4d0243a58d1e733774e55)`(FString && NewValue)` | Sets the value of SessionType_Optional and also sets SessionType_IsSet to true using move semantics.
`public inline void `[`ClearSessionType`](#structFRHAPI__AuditEvent_1af485efac1a25386828b114dfc87b5e77)`()` | Clears the value of SessionType_Optional and sets SessionType_IsSet to false.
`public inline bool `[`IsSessionTypeSet`](#structFRHAPI__AuditEvent_1ab19c380b566c11f68c4372d971916dd0)`() const` | Checks whether SessionType_Optional has been set.
`public inline FString & `[`GetRegionId`](#structFRHAPI__AuditEvent_1a3269e6eb0820c1ba7bf9941d32cac60c)`()` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__AuditEvent_1ae1771e818767b1769460b73c040f69d4)`() const` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__AuditEvent_1aac1d2e8595facf849355f084199d519c)`(const FString & DefaultValue) const` | Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRegionId`](#structFRHAPI__AuditEvent_1a99798c97043aa39f5ff4ba032912861f)`(FString & OutValue) const` | Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__AuditEvent_1a396d62d9514ed46821a57ae323343525)`()` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__AuditEvent_1aceb991752feb24e741ac624c1902319f)`() const` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRegionId`](#structFRHAPI__AuditEvent_1a81d4143343793b2bc8772ea866b7ec6d)`(const FString & NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.
`public inline void `[`SetRegionId`](#structFRHAPI__AuditEvent_1a4f6cd87a8ce93a35108e94daf443fcfc)`(FString && NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.
`public inline void `[`ClearRegionId`](#structFRHAPI__AuditEvent_1ade77c1e5c1364d10ccfd19e9fa122dff)`()` | Clears the value of RegionId_Optional and sets RegionId_IsSet to false.
`public inline bool `[`IsRegionIdSet`](#structFRHAPI__AuditEvent_1afb73e048e9334e0b154a2229fa452f6f)`() const` | Checks whether RegionId_Optional has been set.
`public inline bool & `[`GetJoinable`](#structFRHAPI__AuditEvent_1a8974a9fbd86a1795adfb6d2b6a927518)`()` | Gets the value of Joinable_Optional, regardless of it having been set.
`public inline const bool & `[`GetJoinable`](#structFRHAPI__AuditEvent_1a697508ba45e93a076719648aa32bc8f0)`() const` | Gets the value of Joinable_Optional, regardless of it having been set.
`public inline const bool & `[`GetJoinable`](#structFRHAPI__AuditEvent_1a81b7883b971ffbe356e8e1e194399969)`(const bool & DefaultValue) const` | Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinable`](#structFRHAPI__AuditEvent_1a2351f67f0c02c17a87a3fb826c72e1a9)`(bool & OutValue) const` | Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetJoinableOrNull`](#structFRHAPI__AuditEvent_1aae9de79c193d554609d9ff35fb6abeff)`()` | Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetJoinableOrNull`](#structFRHAPI__AuditEvent_1ae104144d5f55149f6fe7411545e802b1)`() const` | Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinable`](#structFRHAPI__AuditEvent_1a8849a0e6c3f82d31677920efd479aead)`(const bool & NewValue)` | Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.
`public inline void `[`SetJoinable`](#structFRHAPI__AuditEvent_1a42334e8677be8d3c0c71dc5b4014eca5)`(bool && NewValue)` | Sets the value of Joinable_Optional and also sets Joinable_IsSet to true using move semantics.
`public inline void `[`ClearJoinable`](#structFRHAPI__AuditEvent_1a563363b7d70117df3e9dd9932903125f)`()` | Clears the value of Joinable_Optional and sets Joinable_IsSet to false.
`public inline bool `[`IsJoinableSet`](#structFRHAPI__AuditEvent_1a43ba077bd0755667d6e877f8ae744f32)`() const` | Checks whether Joinable_Optional has been set.
`public inline bool `[`IsJoinableDefaultValue`](#structFRHAPI__AuditEvent_1a062943023a7051996bb465b133bc5958)`() const` | Returns true if Joinable_Optional is set and matches the default value.
`public inline void `[`SetJoinableToDefault`](#structFRHAPI__AuditEvent_1a39e7075fd253eeae1b073585358cf895)`()` | Sets the value of Joinable_Optional to its default and also sets Joinable_IsSet to true.
`public inline `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__AuditEvent_1ab29776594ae5adf35c05690666bd0225)`()` | Gets the value of Joinability_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__AuditEvent_1a2278ee347cba2c0b621e7a38e0408b69)`() const` | Gets the value of Joinability_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__AuditEvent_1a4a4ccaa445fab0b6c72affa0e8fa3df9)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & DefaultValue) const` | Gets the value of Joinability_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinability`](#structFRHAPI__AuditEvent_1a37a8a67aac1a5743a8e9cc3571736701)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & OutValue) const` | Fills OutValue with the value of Joinability_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__AuditEvent_1a535a2b68f8e2f3d51d5ca45dbffa64e2)`()` | Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__AuditEvent_1ae377f809f334ec9bcb2517d71d3ba941)`() const` | Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinability`](#structFRHAPI__AuditEvent_1aa154d67561e52ffdccfebc0dd1740917)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & NewValue)` | Sets the value of Joinability_Optional and also sets Joinability_IsSet to true.
`public inline void `[`SetJoinability`](#structFRHAPI__AuditEvent_1ac97de6acc90b3f4810086324e726f31a)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` && NewValue)` | Sets the value of Joinability_Optional and also sets Joinability_IsSet to true using move semantics.
`public inline void `[`ClearJoinability`](#structFRHAPI__AuditEvent_1a08826e9cd16abcb3f0e813fa32468e53)`()` | Clears the value of Joinability_Optional and sets Joinability_IsSet to false.
`public inline bool `[`IsJoinabilitySet`](#structFRHAPI__AuditEvent_1a4da0d72a9169610e8e21d2b017ad2573)`() const` | Checks whether Joinability_Optional has been set.
`public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__AuditEvent_1ac700dbebcf2968bb67ff9cf0fc0823ed)`()` | Gets the value of UpdatedTeams_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__AuditEvent_1a5c824ad3dd4a49348a82de17356c7ce2)`() const` | Gets the value of UpdatedTeams_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__AuditEvent_1ab7571d1e4c48f53f904abe2b15f09a37)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & DefaultValue) const` | Gets the value of UpdatedTeams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetUpdatedTeams`](#structFRHAPI__AuditEvent_1a673e28af1f69b21f6fe06ddd7073cd32)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & OutValue) const` | Fills OutValue with the value of UpdatedTeams_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__AuditEvent_1a532e1a5762df7147bf5b2680d729b19a)`()` | Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__AuditEvent_1a13f7974d0b9dcb9793f86b31adc40508)`() const` | Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetUpdatedTeams`](#structFRHAPI__AuditEvent_1a8238fd52886db81696c362ba9459b0cc)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & NewValue)` | Sets the value of UpdatedTeams_Optional and also sets UpdatedTeams_IsSet to true.
`public inline void `[`SetUpdatedTeams`](#structFRHAPI__AuditEvent_1a5ae33104490c12208b9c766a4e8b971b)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > && NewValue)` | Sets the value of UpdatedTeams_Optional and also sets UpdatedTeams_IsSet to true using move semantics.
`public inline void `[`ClearUpdatedTeams`](#structFRHAPI__AuditEvent_1ae7fbb59c682cdadaa713c1cb50332e51)`()` | Clears the value of UpdatedTeams_Optional and sets UpdatedTeams_IsSet to false.
`public inline bool `[`IsUpdatedTeamsSet`](#structFRHAPI__AuditEvent_1a80604a3d148ea36937ba7803a39ccbee)`() const` | Checks whether UpdatedTeams_Optional has been set.
`public inline ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__AuditEvent_1a963be213fd911f28673375252c84c2d7)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__AuditEvent_1a2f905cce1f909dbf09db4525e2cfba1b)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__AuditEvent_1ab0a8cf255f9167f2869c5f6a4e798d72)`(const ERHAPI_InviteSource & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSource`](#structFRHAPI__AuditEvent_1a97c8b8996109ccfe3ef9914e516db3eb)`(ERHAPI_InviteSource & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__AuditEvent_1a3cde6dffadc67d65a04376f3d5ca4516)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__AuditEvent_1ac361620787d9d936c96accc8aeb43942)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSource`](#structFRHAPI__AuditEvent_1acc4da47740c855770e7394e5247f0c13)`(const ERHAPI_InviteSource & NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline void `[`SetSource`](#structFRHAPI__AuditEvent_1aa77d6b7e7a75c222daf289cbc58edf29)`(ERHAPI_InviteSource && NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.
`public inline void `[`ClearSource`](#structFRHAPI__AuditEvent_1ae289f75b711f546b5f66d324dce40ac8)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline bool `[`IsSourceSet`](#structFRHAPI__AuditEvent_1a74018ed8ae1bfbfd9f45ce224b75c4ec)`() const` | Checks whether Source_Optional has been set.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__AuditEvent_1a9dbd683a5981253cdac1fa1cbdf78abc)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__AuditEvent_1a3bfaf62eee0c9fe3fb84cf0c1b120146)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__AuditEvent_1a194fdda2902267aee20f2fefeb440d46)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerUuid`](#structFRHAPI__AuditEvent_1ac554d4e051febbe237753c638a4198c0)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__AuditEvent_1a3f36db2be50e298ccbb738456e017251)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__AuditEvent_1a26d5049e92e2db5736afb1ffa2103c5c)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__AuditEvent_1ae19715aea8b4871a0b72de04887c7ef8)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__AuditEvent_1a88e95b412063e1c90e1da710ab6880c7)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__AuditEvent_1a03c6f2362c235c7631ef36c4f3c42beb)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__AuditEvent_1afec2260e0d9dd9b1721aa7c4214bd739)`() const` | Checks whether PlayerUuid_Optional has been set.
`public inline int32 & `[`GetTeamId`](#structFRHAPI__AuditEvent_1aab5ce68ba5a8801e810f2a529ba91bed)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__AuditEvent_1a804265f9d635db4ed1c1cac9ac72f594)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__AuditEvent_1a0da8b879f31f057e26e5e4da16a6a55b)`(const int32 & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTeamId`](#structFRHAPI__AuditEvent_1a7344ad05cfbb1e0cc893b7f723eea816)`(int32 & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTeamIdOrNull`](#structFRHAPI__AuditEvent_1a5bc53b49eab6cc95e293b0c8cc3c3427)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__AuditEvent_1afb2190201847c1ca31dbdf8950c9a24b)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTeamId`](#structFRHAPI__AuditEvent_1a47be0e8b4f61ba41766da5f9315959b5)`(const int32 & NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline void `[`SetTeamId`](#structFRHAPI__AuditEvent_1accabc99661aeab63afd01f33404c7ba9)`(int32 && NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.
`public inline void `[`ClearTeamId`](#structFRHAPI__AuditEvent_1a11aaafae2908f427aef5a5efb99382ea)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline bool `[`IsTeamIdSet`](#structFRHAPI__AuditEvent_1af2681fc55ee0b61827961f53302d914a)`() const` | Checks whether TeamId_Optional has been set.
`public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__AuditEvent_1a77e8d1490e7d0bf2435960dcfb4a615a)`() const` | Returns true if TeamId_Optional is set and matches the default value.
`public inline void `[`SetTeamIdToDefault`](#structFRHAPI__AuditEvent_1a27fd05b2636e3be453c92fed6643e5ac)`()` | Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.
`public inline FString & `[`GetInvitedSessionId`](#structFRHAPI__AuditEvent_1aabd0fcb746ed3dcf2b81a0d07b09e22b)`()` | Gets the value of InvitedSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInvitedSessionId`](#structFRHAPI__AuditEvent_1a9bc911d1fc22a5aebf9b88deae99a1df)`() const` | Gets the value of InvitedSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInvitedSessionId`](#structFRHAPI__AuditEvent_1a3a9f77609c3b677a0b16d4fbd0e0b2da)`(const FString & DefaultValue) const` | Gets the value of InvitedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInvitedSessionId`](#structFRHAPI__AuditEvent_1aabb4f44710178fd6e53b95cfdff6ae17)`(FString & OutValue) const` | Fills OutValue with the value of InvitedSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__AuditEvent_1af36fdb60b609d8eb370d75bc6ad6e1be)`()` | Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__AuditEvent_1ad5a3480fd8cd82c265156c1c2eff6fee)`() const` | Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInvitedSessionId`](#structFRHAPI__AuditEvent_1a3c32957fb9d0b5e1d7371c6a112b1cba)`(const FString & NewValue)` | Sets the value of InvitedSessionId_Optional and also sets InvitedSessionId_IsSet to true.
`public inline void `[`SetInvitedSessionId`](#structFRHAPI__AuditEvent_1a7badce28c451a3ede11d27c75fcbae4b)`(FString && NewValue)` | Sets the value of InvitedSessionId_Optional and also sets InvitedSessionId_IsSet to true using move semantics.
`public inline void `[`ClearInvitedSessionId`](#structFRHAPI__AuditEvent_1af5c9671893728a053fc0ed1c35cd54a0)`()` | Clears the value of InvitedSessionId_Optional and sets InvitedSessionId_IsSet to false.
`public inline bool `[`IsInvitedSessionIdSet`](#structFRHAPI__AuditEvent_1aee80c206c407b9f83d4e466c399f0132)`() const` | Checks whether InvitedSessionId_Optional has been set.
`public inline FString & `[`GetRemovedSessionId`](#structFRHAPI__AuditEvent_1a54c85ad140785c445c4bfcb6314a3c0e)`()` | Gets the value of RemovedSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRemovedSessionId`](#structFRHAPI__AuditEvent_1aac5fbe426399173bba6d36e15ffd458b)`() const` | Gets the value of RemovedSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRemovedSessionId`](#structFRHAPI__AuditEvent_1ae13dbafa6a9ddd2e71cb6d385240f470)`(const FString & DefaultValue) const` | Gets the value of RemovedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRemovedSessionId`](#structFRHAPI__AuditEvent_1ade807e3b1634593e4e314a3cc12562ba)`(FString & OutValue) const` | Fills OutValue with the value of RemovedSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__AuditEvent_1ab7e26a4fb21c388bc90d8a5529766951)`()` | Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__AuditEvent_1ae997ddbed19967c4e4bf1164ffe4d5e9)`() const` | Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRemovedSessionId`](#structFRHAPI__AuditEvent_1af61362af9db9b687702930d07a978a9a)`(const FString & NewValue)` | Sets the value of RemovedSessionId_Optional and also sets RemovedSessionId_IsSet to true.
`public inline void `[`SetRemovedSessionId`](#structFRHAPI__AuditEvent_1a9d61198748341944235b605422454e6e)`(FString && NewValue)` | Sets the value of RemovedSessionId_Optional and also sets RemovedSessionId_IsSet to true using move semantics.
`public inline void `[`ClearRemovedSessionId`](#structFRHAPI__AuditEvent_1aff216f70ad96469f84d59cace7f26a1a)`()` | Clears the value of RemovedSessionId_Optional and sets RemovedSessionId_IsSet to false.
`public inline bool `[`IsRemovedSessionIdSet`](#structFRHAPI__AuditEvent_1a701a19c4cbd0f0dce6e8084988cae627)`() const` | Checks whether RemovedSessionId_Optional has been set.
`public inline FString & `[`GetVersion`](#structFRHAPI__AuditEvent_1ab23fad65a4f6e595ed00c55468c6256c)`()` | Gets the value of Version_Optional, regardless of it having been set.
`public inline const FString & `[`GetVersion`](#structFRHAPI__AuditEvent_1a8929938aadae30cbc52121ff67721875)`() const` | Gets the value of Version_Optional, regardless of it having been set.
`public inline const FString & `[`GetVersion`](#structFRHAPI__AuditEvent_1a1e47bbb44333cc6091464033ad502c28)`(const FString & DefaultValue) const` | Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVersion`](#structFRHAPI__AuditEvent_1a7f3950a12da4cd1035e1894f0c714890)`(FString & OutValue) const` | Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetVersionOrNull`](#structFRHAPI__AuditEvent_1ab84e68a8eeb988df709a5efaff2ce2c7)`()` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetVersionOrNull`](#structFRHAPI__AuditEvent_1a5587d83a6b09f69300d4bb2d3611dbb3)`() const` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVersion`](#structFRHAPI__AuditEvent_1a1c31b5321f12957b29cbb6fd27bc252c)`(const FString & NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true.
`public inline void `[`SetVersion`](#structFRHAPI__AuditEvent_1a4a292c731f135f4bf042ed412da9a915)`(FString && NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics.
`public inline void `[`ClearVersion`](#structFRHAPI__AuditEvent_1a7ceff8afbf6b5e1ace9ada4c055b1a66)`()` | Clears the value of Version_Optional and sets Version_IsSet to false.
`public inline bool `[`IsVersionSet`](#structFRHAPI__AuditEvent_1a54a358e1b91e8639f82106c0c1b762d5)`() const` | Checks whether Version_Optional has been set.
`public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__AuditEvent_1ab6e156633883485d2fb53414ecaa4474)`()` | Gets the value of ClientSettings_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__AuditEvent_1a7815dfcab22ffae4063a9c218d3113b6)`() const` | Gets the value of ClientSettings_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__AuditEvent_1ad3c74afecaab787c07af5ea6b3c0344b)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & DefaultValue) const` | Gets the value of ClientSettings_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetClientSettings`](#structFRHAPI__AuditEvent_1a05775d6ef1d3f110a990a843b113f980)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & OutValue) const` | Fills OutValue with the value of ClientSettings_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__AuditEvent_1a954e29e612ec6ce63072757d7e70aeb4)`()` | Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__AuditEvent_1a709914b261bf42e513ec3c59152db0ae)`() const` | Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetClientSettings`](#structFRHAPI__AuditEvent_1aa1287ead01588e4aa867d66bd36b76b7)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & NewValue)` | Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true.
`public inline void `[`SetClientSettings`](#structFRHAPI__AuditEvent_1a18db16fb778956186aa2f39d260b1e69)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` && NewValue)` | Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true using move semantics.
`public inline void `[`ClearClientSettings`](#structFRHAPI__AuditEvent_1a94831c05e3986114c6f2a89b692196e9)`()` | Clears the value of ClientSettings_Optional and sets ClientSettings_IsSet to false.
`public inline bool `[`IsClientSettingsSet`](#structFRHAPI__AuditEvent_1aed553d016754f1f384bfded4f0cb4e86)`() const` | Checks whether ClientSettings_Optional has been set.
`public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__AuditEvent_1ae538e2fea07c0aa6bc7aa7423bf903b7)`()` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__AuditEvent_1a7e40df7b733196f54b2af3defbcf398d)`() const` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__AuditEvent_1a46aaec23542f7772bc14d43f506704fe)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` | Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCrossplayPreferences`](#structFRHAPI__AuditEvent_1a0e6ff85879b0cedbe7220a084ba75323)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` | Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__AuditEvent_1a70c46614019e4b4f0dfe580d419a8ba7)`()` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__AuditEvent_1a383b3c4418be401c958162ab2b2e8e0f)`() const` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCrossplayPreferences`](#structFRHAPI__AuditEvent_1af3008c45b49c2eb889911d00ebe7ebf0)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & NewValue)` | Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.
`public inline void `[`SetCrossplayPreferences`](#structFRHAPI__AuditEvent_1a7ff6b1395a4c8a8c27669dacbba62ea7)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` && NewValue)` | Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true using move semantics.
`public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__AuditEvent_1af1899c1e5b5181b70c8778ae01c055c7)`()` | Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.
`public inline bool `[`IsCrossplayPreferencesSet`](#structFRHAPI__AuditEvent_1ad106f4fb3165db8eaf5a4f84c87be306)`() const` | Checks whether CrossplayPreferences_Optional has been set.
`public inline ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__AuditEvent_1a991d0e034a0c40e9bb3902e8a5d646d1)`()` | Gets the value of PlayerStatus_Optional, regardless of it having been set.
`public inline const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__AuditEvent_1aca963d485b9bbf2e0dcdb06b90b01a18)`() const` | Gets the value of PlayerStatus_Optional, regardless of it having been set.
`public inline const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__AuditEvent_1ac5bbc52c80bd681b2ad90a11d3a72173)`(const ERHAPI_SessionPlayerStatus & DefaultValue) const` | Gets the value of PlayerStatus_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerStatus`](#structFRHAPI__AuditEvent_1a6a859a33a504f780c5cdac0dcad855de)`(ERHAPI_SessionPlayerStatus & OutValue) const` | Fills OutValue with the value of PlayerStatus_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__AuditEvent_1aa5ef2c93c6846b8a83bd458f26803c41)`()` | Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__AuditEvent_1a035f3b8118e43b3411653483851b9160)`() const` | Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerStatus`](#structFRHAPI__AuditEvent_1a1808222701b0c45c69bbbc1dd355f540)`(const ERHAPI_SessionPlayerStatus & NewValue)` | Sets the value of PlayerStatus_Optional and also sets PlayerStatus_IsSet to true.
`public inline void `[`SetPlayerStatus`](#structFRHAPI__AuditEvent_1a8fdc03635bf2ac0aa85dadfd14bcc4b1)`(ERHAPI_SessionPlayerStatus && NewValue)` | Sets the value of PlayerStatus_Optional and also sets PlayerStatus_IsSet to true using move semantics.
`public inline void `[`ClearPlayerStatus`](#structFRHAPI__AuditEvent_1aa6d6d3cf6091881b21f450168b45f4c8)`()` | Clears the value of PlayerStatus_Optional and sets PlayerStatus_IsSet to false.
`public inline bool `[`IsPlayerStatusSet`](#structFRHAPI__AuditEvent_1ab8a02c50baa7a910cdddb0d16821f76e)`() const` | Checks whether PlayerStatus_Optional has been set.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__AuditEvent_1aabc4e741afef959011edeba1e322ed5f)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__AuditEvent_1a8709c5798d7f4680442f5905a0b98ad2)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__AuditEvent_1ac18e3c7dd670a1066cf615b3d0a48f9b)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatform`](#structFRHAPI__AuditEvent_1a2fe237dcd924c666d499899ee49e36d0)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__AuditEvent_1a4b645d47024409c1330df75e63812afa)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__AuditEvent_1a03e96a3d3d369201d6657fe511caabcf)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatform`](#structFRHAPI__AuditEvent_1abbd1b1149c514a1526d84bbfac1df1cf)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline void `[`SetPlatform`](#structFRHAPI__AuditEvent_1a1d7407c70e5958528911610f12794cd2)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__AuditEvent_1aa09b2a730eadbccecf65f6491dd39461)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline bool `[`IsPlatformSet`](#structFRHAPI__AuditEvent_1ae0374725fe376fb4276ea59474a0e783)`() const` | Checks whether Platform_Optional has been set.
`public inline FString & `[`GetPlatformSessionId`](#structFRHAPI__AuditEvent_1a974adc6364cea5eeb2e61710ab53cdf6)`()` | Gets the value of PlatformSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformSessionId`](#structFRHAPI__AuditEvent_1a371217125fdef7b21f87381bf7ae576c)`() const` | Gets the value of PlatformSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformSessionId`](#structFRHAPI__AuditEvent_1aa22d3bd440c61d4081d72ab188a34227)`(const FString & DefaultValue) const` | Gets the value of PlatformSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformSessionId`](#structFRHAPI__AuditEvent_1a2813c6585a35e3684dc5803706fcd359)`(FString & OutValue) const` | Fills OutValue with the value of PlatformSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__AuditEvent_1a8dd9f9235a468b1dfea40aed2c759f34)`()` | Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__AuditEvent_1aa80d516e3369999fde09f8f64719bfa3)`() const` | Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformSessionId`](#structFRHAPI__AuditEvent_1ac2eef0648ddb5613c03bfbd36af86360)`(const FString & NewValue)` | Sets the value of PlatformSessionId_Optional and also sets PlatformSessionId_IsSet to true.
`public inline void `[`SetPlatformSessionId`](#structFRHAPI__AuditEvent_1a1e17878a603c771549c57fc5cb95da07)`(FString && NewValue)` | Sets the value of PlatformSessionId_Optional and also sets PlatformSessionId_IsSet to true using move semantics.
`public inline void `[`ClearPlatformSessionId`](#structFRHAPI__AuditEvent_1a5fc4053f6b838a472fbe315133728400)`()` | Clears the value of PlatformSessionId_Optional and sets PlatformSessionId_IsSet to false.
`public inline bool `[`IsPlatformSessionIdSet`](#structFRHAPI__AuditEvent_1a66f950e18c3943f421f566d3d96d8574)`() const` | Checks whether PlatformSessionId_Optional has been set.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__AuditEvent_1a6c52aaba3aa6f157438949df4e997393)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__AuditEvent_1a95c584986de9559f5ef90be27ae5cf44)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__AuditEvent_1a9c507ad419e5f0f85183685f32b09f27)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceId`](#structFRHAPI__AuditEvent_1a22c9fb95a6d83f9f192bbd2e5903ae85)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__AuditEvent_1a3dc3c17828f2aac3ee575db3b20aa714)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__AuditEvent_1afeee9b72c3a65699e238e3121635917e)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceId`](#structFRHAPI__AuditEvent_1a4b6b15fe6bb2f8cc822c9da426c6745f)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline void `[`SetInstanceId`](#structFRHAPI__AuditEvent_1a9a7fc2a6faab6778919a07a24220507e)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__AuditEvent_1a22603a0b806c747218532f541db1638b)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline bool `[`IsInstanceIdSet`](#structFRHAPI__AuditEvent_1acc3a47b0824f678387ab3e2291e3c9a4)`() const` | Checks whether InstanceId_Optional has been set.
`public inline ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__AuditEvent_1ad89ab1c0a0f645772ce78d27ed2f89b5)`()` | Gets the value of HostType_Optional, regardless of it having been set.
`public inline const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__AuditEvent_1a42374677ebd6e8b1e46e81de44f3514b)`() const` | Gets the value of HostType_Optional, regardless of it having been set.
`public inline const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__AuditEvent_1a6f9994ce760d7019a8c84b54210255ed)`(const ERHAPI_HostType & DefaultValue) const` | Gets the value of HostType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostType`](#structFRHAPI__AuditEvent_1a3d7240abb4d60f56235c65c6ea077979)`(ERHAPI_HostType & OutValue) const` | Fills OutValue with the value of HostType_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__AuditEvent_1aa535e0737848b4f8511041bfd86005df)`()` | Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__AuditEvent_1a822aebccf8bebb0cfa60fb36aaa6bc37)`() const` | Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostType`](#structFRHAPI__AuditEvent_1a227a5d5ebab31508e083798da384a47c)`(const ERHAPI_HostType & NewValue)` | Sets the value of HostType_Optional and also sets HostType_IsSet to true.
`public inline void `[`SetHostType`](#structFRHAPI__AuditEvent_1ac75f49285f71d1ac1fcea3baf5b8ef4a)`(ERHAPI_HostType && NewValue)` | Sets the value of HostType_Optional and also sets HostType_IsSet to true using move semantics.
`public inline void `[`ClearHostType`](#structFRHAPI__AuditEvent_1af2d3969a72d3de486e6730f174d54960)`()` | Clears the value of HostType_Optional and sets HostType_IsSet to false.
`public inline bool `[`IsHostTypeSet`](#structFRHAPI__AuditEvent_1a6100cac42fb0561f9a4848569cf529bf)`() const` | Checks whether HostType_Optional has been set.
`public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__AuditEvent_1aa5691aeaece583dffe9bc8943bd84c37)`()` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__AuditEvent_1ae2f59ee7b85a3d8e2f9b5a9da6111daf)`() const` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__AuditEvent_1a7797b348c4d7cae9df21394fbadd88e8)`(const FGuid & DefaultValue) const` | Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__AuditEvent_1a78914fb5273ca86ef9130daf01c0d299)`(FGuid & OutValue) const` | Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__AuditEvent_1a68b2f715020706363d7242b8a4f1cdcc)`()` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__AuditEvent_1a5affa744845de1cbf2cf16ae43aee5f5)`() const` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostPlayerUuid`](#structFRHAPI__AuditEvent_1afe493a5cd3b78599642e2f372e75b9a0)`(const FGuid & NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.
`public inline void `[`SetHostPlayerUuid`](#structFRHAPI__AuditEvent_1a6651e7be036259b5e2cbe048f74c154c)`(FGuid && NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__AuditEvent_1aacdcdb79e5bcac41ff75fc7946d361e9)`()` | Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.
`public inline bool `[`IsHostPlayerUuidSet`](#structFRHAPI__AuditEvent_1a1ee0aa13a2cbd42dc35764feb2da14da)`() const` | Checks whether HostPlayerUuid_Optional has been set.
`public inline FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1ae23a654f9bc3cf73f3a99d071f5464b8)`()` | Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a8d42f8f8601671ad9673a982aa62b287)`() const` | Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1af1a399766a52e6e04476b72b43156a3b)`(const FGuid & DefaultValue) const` | Gets the value of InstanceRequestTemplate_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a92a8f742f19ffff30d7637eb0a422e26)`(FGuid & OutValue) const` | Fills OutValue with the value of InstanceRequestTemplate_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__AuditEvent_1a8317e0d9827eba8c30cfe674070e6b09)`()` | Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__AuditEvent_1a202953ac712476f6401eb93360a94185)`() const` | Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a5c57bc75cb577ee794c672cf55bae07b)`(const FGuid & NewValue)` | Sets the value of InstanceRequestTemplate_Optional and also sets InstanceRequestTemplate_IsSet to true.
`public inline void `[`SetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a76fc5a4577fdf7462180bb4a2979c54e)`(FGuid && NewValue)` | Sets the value of InstanceRequestTemplate_Optional and also sets InstanceRequestTemplate_IsSet to true using move semantics.
`public inline void `[`ClearInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a524c77ab8b9f19d870035b5ca5882800)`()` | Clears the value of InstanceRequestTemplate_Optional and sets InstanceRequestTemplate_IsSet to false.
`public inline bool `[`IsInstanceRequestTemplateSet`](#structFRHAPI__AuditEvent_1aeef6c3214922d53a11bacceb7e3cea68)`() const` | Checks whether InstanceRequestTemplate_Optional has been set.
`public inline FString & `[`GetMap`](#structFRHAPI__AuditEvent_1a80e751d50d3b93ab4077a12b1e61da87)`()` | Gets the value of Map_Optional, regardless of it having been set.
`public inline const FString & `[`GetMap`](#structFRHAPI__AuditEvent_1a87d0a30f059cbbd967b14abdbf54c59e)`() const` | Gets the value of Map_Optional, regardless of it having been set.
`public inline const FString & `[`GetMap`](#structFRHAPI__AuditEvent_1ad01875a9c3ae376fb5c2bdcf98d04883)`(const FString & DefaultValue) const` | Gets the value of Map_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMap`](#structFRHAPI__AuditEvent_1aa3733fd2051cab50d2a2c5875f035bc5)`(FString & OutValue) const` | Fills OutValue with the value of Map_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMapOrNull`](#structFRHAPI__AuditEvent_1ac34ec183155bd05e5debe7cb4dc14baf)`()` | Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMapOrNull`](#structFRHAPI__AuditEvent_1a2e6dc6c083fad20a72415795ce6acf18)`() const` | Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMap`](#structFRHAPI__AuditEvent_1a8c12843b486e7c44895f91e3048c6c16)`(const FString & NewValue)` | Sets the value of Map_Optional and also sets Map_IsSet to true.
`public inline void `[`SetMap`](#structFRHAPI__AuditEvent_1a26bb3a4f8c3a89e44e03fef02d5c0f4c)`(FString && NewValue)` | Sets the value of Map_Optional and also sets Map_IsSet to true using move semantics.
`public inline void `[`ClearMap`](#structFRHAPI__AuditEvent_1a6d6275509b146ad4eba918dbcb22d0ad)`()` | Clears the value of Map_Optional and sets Map_IsSet to false.
`public inline bool `[`IsMapSet`](#structFRHAPI__AuditEvent_1abde78ff0c14f2822e4a94a7677b1c2f8)`() const` | Checks whether Map_Optional has been set.
`public inline FString & `[`GetMode`](#structFRHAPI__AuditEvent_1adcf28618d9c36a083ab5c1a3df2874b0)`()` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline const FString & `[`GetMode`](#structFRHAPI__AuditEvent_1a8f59d78222ce45cf9221eed98e8f0c67)`() const` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline const FString & `[`GetMode`](#structFRHAPI__AuditEvent_1a51f7fa2042e7984522a5b7d06330e637)`(const FString & DefaultValue) const` | Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMode`](#structFRHAPI__AuditEvent_1a3d2d06cc48d5c42680fde1952dacf915)`(FString & OutValue) const` | Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetModeOrNull`](#structFRHAPI__AuditEvent_1ac8ad52f0c48e256f0a7bcaa389093f58)`()` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetModeOrNull`](#structFRHAPI__AuditEvent_1acbce7e7f278e5d197afdb137fb2e7523)`() const` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMode`](#structFRHAPI__AuditEvent_1acdf423879d2e7c7dd44ad22aa8207c68)`(const FString & NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true.
`public inline void `[`SetMode`](#structFRHAPI__AuditEvent_1a648c4e548da4da4383dce888df33752b)`(FString && NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true using move semantics.
`public inline void `[`ClearMode`](#structFRHAPI__AuditEvent_1a9ba2ddca1885eb21298dbb4b623759f8)`()` | Clears the value of Mode_Optional and sets Mode_IsSet to false.
`public inline bool `[`IsModeSet`](#structFRHAPI__AuditEvent_1ab0ee7f51d48c7152d659dfa1eb26533d)`() const` | Checks whether Mode_Optional has been set.
`public inline FString & `[`GetAllocationId`](#structFRHAPI__AuditEvent_1a00bbbc7432741772125a90b937d63cf5)`()` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetAllocationId`](#structFRHAPI__AuditEvent_1a70e119b3131c908a10ca9f89ce233bc3)`() const` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetAllocationId`](#structFRHAPI__AuditEvent_1a596c69a41a6a66bde6b84791ae838c68)`(const FString & DefaultValue) const` | Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAllocationId`](#structFRHAPI__AuditEvent_1aca70562b5536641a9011b237a8747858)`(FString & OutValue) const` | Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetAllocationIdOrNull`](#structFRHAPI__AuditEvent_1a9d7844f488e7ffce72d12bea8d4a085e)`()` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__AuditEvent_1afbb3c872129c4e3ff18a4764cd9d6068)`() const` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAllocationId`](#structFRHAPI__AuditEvent_1a26ff30d159006de17d5f4eb37737ecd5)`(const FString & NewValue)` | Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.
`public inline void `[`SetAllocationId`](#structFRHAPI__AuditEvent_1aa84df1132beaf5bb229a539f3dbb268d)`(FString && NewValue)` | Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true using move semantics.
`public inline void `[`ClearAllocationId`](#structFRHAPI__AuditEvent_1ab04e25609ffcf65ec41946fec4c51f80)`()` | Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.
`public inline bool `[`IsAllocationIdSet`](#structFRHAPI__AuditEvent_1a8688ecf4ec4beef7f70b1b8eccb4f6fd)`() const` | Checks whether AllocationId_Optional has been set.
`public inline ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__AuditEvent_1abbc75d3173a17443d93ebbd9bf48062e)`()` | Gets the value of JoinStatus_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__AuditEvent_1a965269ec0582b1e0dd86ff1c80769385)`() const` | Gets the value of JoinStatus_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__AuditEvent_1afcefdd3e1390ba511c7d5be3b85bc74a)`(const ERHAPI_InstanceJoinableStatus & DefaultValue) const` | Gets the value of JoinStatus_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinStatus`](#structFRHAPI__AuditEvent_1ad317d132732992d96bfa9c87769250d3)`(ERHAPI_InstanceJoinableStatus & OutValue) const` | Fills OutValue with the value of JoinStatus_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__AuditEvent_1aedfd3be86f904cd0be02a09d8e1613b4)`()` | Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__AuditEvent_1aed404f974e065db380252ab021f70e51)`() const` | Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinStatus`](#structFRHAPI__AuditEvent_1a9ad57b57c4338b2f4f43581d2e7ca6d6)`(const ERHAPI_InstanceJoinableStatus & NewValue)` | Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true.
`public inline void `[`SetJoinStatus`](#structFRHAPI__AuditEvent_1a5490ddb4893256915a7ec8a49e0ce454)`(ERHAPI_InstanceJoinableStatus && NewValue)` | Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true using move semantics.
`public inline void `[`ClearJoinStatus`](#structFRHAPI__AuditEvent_1aa2055e3edb743366349cb596e48c6dc9)`()` | Clears the value of JoinStatus_Optional and sets JoinStatus_IsSet to false.
`public inline bool `[`IsJoinStatusSet`](#structFRHAPI__AuditEvent_1ae5bce6fbd66439f134728541c4c8c429)`() const` | Checks whether JoinStatus_Optional has been set.
`public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__AuditEvent_1adef84f50fef0c37d28c1ed39818b24d8)`()` | Gets the value of JoinParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__AuditEvent_1af43f80174834843587dabc2949c5eacb)`() const` | Gets the value of JoinParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__AuditEvent_1a607cdeb54df5e5bf8a7f2e6fc8480ac9)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & DefaultValue) const` | Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinParams`](#structFRHAPI__AuditEvent_1a65fc71a298fad25ea455a43649d890bf)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & OutValue) const` | Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__AuditEvent_1a15b5d1aa3ec2fde0147eccbddcbb0364)`()` | Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__AuditEvent_1a0f76389308bc770fb8beb74415eb1f21)`() const` | Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinParams`](#structFRHAPI__AuditEvent_1af8a036b78938df2363a5297dd9b79703)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & NewValue)` | Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.
`public inline void `[`SetJoinParams`](#structFRHAPI__AuditEvent_1a7b9b2b722b6cd7a68a7aa747f7c438d0)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` && NewValue)` | Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true using move semantics.
`public inline void `[`ClearJoinParams`](#structFRHAPI__AuditEvent_1a4c60bb357f152966a362b08045e787be)`()` | Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.
`public inline bool `[`IsJoinParamsSet`](#structFRHAPI__AuditEvent_1ab2d765ade9bb9866bd5ad7d575e78b81)`() const` | Checks whether JoinParams_Optional has been set.
`public inline ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__AuditEvent_1a0852c52893dc3099a0dc91d52adc609e)`()` | Gets the value of InstanceHealth_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__AuditEvent_1ac0e00692e62131d9e1f07a7d87812ed3)`() const` | Gets the value of InstanceHealth_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__AuditEvent_1abe695ac68030fdcf8a81ef1c6c78550e)`(const ERHAPI_InstanceHealthStatus & DefaultValue) const` | Gets the value of InstanceHealth_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceHealth`](#structFRHAPI__AuditEvent_1adb0bc9aab3afcdcffd3ac2ed21dd6380)`(ERHAPI_InstanceHealthStatus & OutValue) const` | Fills OutValue with the value of InstanceHealth_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__AuditEvent_1aa17ce5aed4d637d5fe5d4fc666eea672)`()` | Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__AuditEvent_1abdcd0a2f5513398719b8b47b3eeed0e2)`() const` | Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceHealth`](#structFRHAPI__AuditEvent_1a16e475ad1256789f7bf0a16d21f38c75)`(const ERHAPI_InstanceHealthStatus & NewValue)` | Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true.
`public inline void `[`SetInstanceHealth`](#structFRHAPI__AuditEvent_1a6f54c0cafe05dfa7a852d378988022dc)`(ERHAPI_InstanceHealthStatus && NewValue)` | Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true using move semantics.
`public inline void `[`ClearInstanceHealth`](#structFRHAPI__AuditEvent_1af8b4b7b6a59f3d4bb4ba9529dc729d7c)`()` | Clears the value of InstanceHealth_Optional and sets InstanceHealth_IsSet to false.
`public inline bool `[`IsInstanceHealthSet`](#structFRHAPI__AuditEvent_1ae94e17ff4a1dd18d84cacda3accc4ce0)`() const` | Checks whether InstanceHealth_Optional has been set.
`public inline FString & `[`GetQueueId`](#structFRHAPI__AuditEvent_1a97868618be09228a8b6bd5627b6ddabd)`()` | Gets the value of QueueId_Optional, regardless of it having been set.
`public inline const FString & `[`GetQueueId`](#structFRHAPI__AuditEvent_1ac6b16b2e3b99db103cbf07d596186f8d)`() const` | Gets the value of QueueId_Optional, regardless of it having been set.
`public inline const FString & `[`GetQueueId`](#structFRHAPI__AuditEvent_1a4009eb225a078a626b549d4722ba4c4c)`(const FString & DefaultValue) const` | Gets the value of QueueId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetQueueId`](#structFRHAPI__AuditEvent_1ad4f3eafb9ca60cef0f70d162bedeefef)`(FString & OutValue) const` | Fills OutValue with the value of QueueId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetQueueIdOrNull`](#structFRHAPI__AuditEvent_1a6af11b01f0f4d0d116fa72869dae2538)`()` | Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetQueueIdOrNull`](#structFRHAPI__AuditEvent_1aca1c806e592ba4111ea7ae1861198f6b)`() const` | Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetQueueId`](#structFRHAPI__AuditEvent_1a92e54b59fe88672a6e0515e0aab8a53c)`(const FString & NewValue)` | Sets the value of QueueId_Optional and also sets QueueId_IsSet to true.
`public inline void `[`SetQueueId`](#structFRHAPI__AuditEvent_1ac0c803793dfbb5cd36a5570b964bc116)`(FString && NewValue)` | Sets the value of QueueId_Optional and also sets QueueId_IsSet to true using move semantics.
`public inline void `[`ClearQueueId`](#structFRHAPI__AuditEvent_1a905562c31a2b45c0ade8bcfe9e0cbfdf)`()` | Clears the value of QueueId_Optional and sets QueueId_IsSet to false.
`public inline bool `[`IsQueueIdSet`](#structFRHAPI__AuditEvent_1a75ba5ab01b9afe2f1701b68116937fd9)`() const` | Checks whether QueueId_Optional has been set.
`public inline FString & `[`GetTicketId`](#structFRHAPI__AuditEvent_1ad29445385e8bc89961152e07fbcaf951)`()` | Gets the value of TicketId_Optional, regardless of it having been set.
`public inline const FString & `[`GetTicketId`](#structFRHAPI__AuditEvent_1a2cba00dcd30ea914f9678d9d7fb53923)`() const` | Gets the value of TicketId_Optional, regardless of it having been set.
`public inline const FString & `[`GetTicketId`](#structFRHAPI__AuditEvent_1a276dcaeab645409a8dd4eedef1fe4d22)`(const FString & DefaultValue) const` | Gets the value of TicketId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTicketId`](#structFRHAPI__AuditEvent_1ab2163ec45ace1d5da478d9a43aeb7f88)`(FString & OutValue) const` | Fills OutValue with the value of TicketId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTicketIdOrNull`](#structFRHAPI__AuditEvent_1a991daee78659a2c5ef46d7db511ec95e)`()` | Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTicketIdOrNull`](#structFRHAPI__AuditEvent_1a689ce7f5d7864bd2c432608541e2956f)`() const` | Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTicketId`](#structFRHAPI__AuditEvent_1a0ad577a0200e4c8f3ec0dc23762a6095)`(const FString & NewValue)` | Sets the value of TicketId_Optional and also sets TicketId_IsSet to true.
`public inline void `[`SetTicketId`](#structFRHAPI__AuditEvent_1a84b357130e96b5131419b7bf391d8a4e)`(FString && NewValue)` | Sets the value of TicketId_Optional and also sets TicketId_IsSet to true using move semantics.
`public inline void `[`ClearTicketId`](#structFRHAPI__AuditEvent_1a3a95477a2909de1f2322a6dc33532dd5)`()` | Clears the value of TicketId_Optional and sets TicketId_IsSet to false.
`public inline bool `[`IsTicketIdSet`](#structFRHAPI__AuditEvent_1a1638925762966feb0bd5564fd523c694)`() const` | Checks whether TicketId_Optional has been set.
`public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__AuditEvent_1aec2674a2e1104f27399b472e16bdda9d)`()` | Gets the value of AdditionalParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__AuditEvent_1ae59e688681b3f71750b703425f3ffacb)`() const` | Gets the value of AdditionalParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__AuditEvent_1a644054bad40b674c004e8eb69cd3caf5)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & DefaultValue) const` | Gets the value of AdditionalParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAdditionalParams`](#structFRHAPI__AuditEvent_1ab3466dd7744e301ef79c215ccf45e1ca)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & OutValue) const` | Fills OutValue with the value of AdditionalParams_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalParamsOrNull`](#structFRHAPI__AuditEvent_1ae7560ffac55842a93d2eaad3ff5cb94a)`()` | Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalParamsOrNull`](#structFRHAPI__AuditEvent_1accf2ad1e4695de06b0077a47e9cf4160)`() const` | Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAdditionalParams`](#structFRHAPI__AuditEvent_1a7c7a3b41818d9041f02d4f707d0c1b45)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & NewValue)` | Sets the value of AdditionalParams_Optional and also sets AdditionalParams_IsSet to true.
`public inline void `[`SetAdditionalParams`](#structFRHAPI__AuditEvent_1a8e8fd0b1aecfd5302d00f1c16f1a324f)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` && NewValue)` | Sets the value of AdditionalParams_Optional and also sets AdditionalParams_IsSet to true using move semantics.
`public inline void `[`ClearAdditionalParams`](#structFRHAPI__AuditEvent_1a576652cb7ff7d291a1235fe1116724c4)`()` | Clears the value of AdditionalParams_Optional and sets AdditionalParams_IsSet to false.
`public inline bool `[`IsAdditionalParamsSet`](#structFRHAPI__AuditEvent_1a92e5f486e956608fb0dda188d73e003a)`() const` | Checks whether AdditionalParams_Optional has been set.
`public inline TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__AuditEvent_1ae253594ea26f6224ff14ff4a543222d1)`()` | Gets the value of MapPreferences_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__AuditEvent_1af3e608a29918c34a316386164f4f1f2f)`() const` | Gets the value of MapPreferences_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__AuditEvent_1a24af7249f980c81c95299051a73e7e99)`(const TArray< FString > & DefaultValue) const` | Gets the value of MapPreferences_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMapPreferences`](#structFRHAPI__AuditEvent_1af5102a96c848850e87d52973a585d314)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of MapPreferences_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__AuditEvent_1adbcbd1ac91053fccacd67a20fab02867)`()` | Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__AuditEvent_1aec5b5c80ad0a295678113321f7d38cd5)`() const` | Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMapPreferences`](#structFRHAPI__AuditEvent_1ac9fb953163a95ff99ea2ef834d19253f)`(const TArray< FString > & NewValue)` | Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true.
`public inline void `[`SetMapPreferences`](#structFRHAPI__AuditEvent_1a56f8ae31a8695e7531e9eb1d68dbfd76)`(TArray< FString > && NewValue)` | Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true using move semantics.
`public inline void `[`ClearMapPreferences`](#structFRHAPI__AuditEvent_1a33c453410167253e097ed36c2ee93f44)`()` | Clears the value of MapPreferences_Optional and sets MapPreferences_IsSet to false.
`public inline bool `[`IsMapPreferencesSet`](#structFRHAPI__AuditEvent_1acfab0741719944600d85244c327c84d7)`() const` | Checks whether MapPreferences_Optional has been set.
`public inline FString & `[`GetQueuedSessionId`](#structFRHAPI__AuditEvent_1a2bb30770b33c914dfdc26e7fb7369b85)`()` | Gets the value of QueuedSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetQueuedSessionId`](#structFRHAPI__AuditEvent_1aa157884bfbb74ba7dba3d387f468e6d7)`() const` | Gets the value of QueuedSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetQueuedSessionId`](#structFRHAPI__AuditEvent_1af59530ef11ac381c9f47da3ff3f94ad6)`(const FString & DefaultValue) const` | Gets the value of QueuedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetQueuedSessionId`](#structFRHAPI__AuditEvent_1aafda7af949c96b72808c666d0cbd29e3)`(FString & OutValue) const` | Fills OutValue with the value of QueuedSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__AuditEvent_1a2e34402e66eab8cfa933e9712ea25a0a)`()` | Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__AuditEvent_1a2e4c444305cc7a19e5b2d2ea76da2df6)`() const` | Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetQueuedSessionId`](#structFRHAPI__AuditEvent_1ae9e67b72fec1cc3b3677be8d0fd19777)`(const FString & NewValue)` | Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true.
`public inline void `[`SetQueuedSessionId`](#structFRHAPI__AuditEvent_1a8ac88751a9d572b7c34c42542563e620)`(FString && NewValue)` | Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true using move semantics.
`public inline void `[`ClearQueuedSessionId`](#structFRHAPI__AuditEvent_1aba3557a10d63a3d8efba7904f34c1c92)`()` | Clears the value of QueuedSessionId_Optional and sets QueuedSessionId_IsSet to false.
`public inline bool `[`IsQueuedSessionIdSet`](#structFRHAPI__AuditEvent_1a363ffaafb8457ba77084ba3c813808b1)`() const` | Checks whether QueuedSessionId_Optional has been set.
`public inline FString & `[`GetMatchId`](#structFRHAPI__AuditEvent_1a7e3f44d3ff3560cf41d0d1ceff40ef25)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__AuditEvent_1a8cd688b4e46b27904306740805be5f53)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__AuditEvent_1aa1dc84fc44a16f477882d66d5bbc9d5a)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchId`](#structFRHAPI__AuditEvent_1a7b6ded106eedb8fb15d3358e89dfd405)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__AuditEvent_1af4109dc4f4c954d1f9d298a7644864d1)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__AuditEvent_1abddafcd4cf71b091e7bb67744679cac7)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchId`](#structFRHAPI__AuditEvent_1a3153129f6b5b0d0b6eb327fe17612222)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline void `[`SetMatchId`](#structFRHAPI__AuditEvent_1a1391a972d06c5729368c556d4071d865)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__AuditEvent_1abd7aede0da0d4e281062c95871342c64)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline bool `[`IsMatchIdSet`](#structFRHAPI__AuditEvent_1acf38bcadf9e3d05e939c9477bbfb9473)`() const` | Checks whether MatchId_Optional has been set.
`public inline int32 & `[`GetTicketWaitSeconds`](#structFRHAPI__AuditEvent_1ad3d33b518432acdf4b99bff7df4978e4)`()` | Gets the value of TicketWaitSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTicketWaitSeconds`](#structFRHAPI__AuditEvent_1a486e5e758d34b39767a58ead73c31438)`() const` | Gets the value of TicketWaitSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTicketWaitSeconds`](#structFRHAPI__AuditEvent_1abf560aec3fee3de593e17b623fcb92b5)`(const int32 & DefaultValue) const` | Gets the value of TicketWaitSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTicketWaitSeconds`](#structFRHAPI__AuditEvent_1a54d18a2c205dd02d1d9c122c31f06ba0)`(int32 & OutValue) const` | Fills OutValue with the value of TicketWaitSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTicketWaitSecondsOrNull`](#structFRHAPI__AuditEvent_1a4bc693f393a509b00819116e304e4ff5)`()` | Returns a pointer to TicketWaitSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTicketWaitSecondsOrNull`](#structFRHAPI__AuditEvent_1a0061f53a2454f57ed062e6deb4e6794a)`() const` | Returns a pointer to TicketWaitSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTicketWaitSeconds`](#structFRHAPI__AuditEvent_1aa02be7d3ae4c882aa7656d31c19eff8c)`(const int32 & NewValue)` | Sets the value of TicketWaitSeconds_Optional and also sets TicketWaitSeconds_IsSet to true.
`public inline void `[`SetTicketWaitSeconds`](#structFRHAPI__AuditEvent_1ab63f8680973b2905c3218cfbe66c1367)`(int32 && NewValue)` | Sets the value of TicketWaitSeconds_Optional and also sets TicketWaitSeconds_IsSet to true using move semantics.
`public inline void `[`ClearTicketWaitSeconds`](#structFRHAPI__AuditEvent_1a3af20dcc3e27f27208426a7fea762903)`()` | Clears the value of TicketWaitSeconds_Optional and sets TicketWaitSeconds_IsSet to false.
`public inline bool `[`IsTicketWaitSecondsSet`](#structFRHAPI__AuditEvent_1a02ab5fa4ddae185a3d6cf7dfa11a1820)`() const` | Checks whether TicketWaitSeconds_Optional has been set.
`public inline bool `[`IsTicketWaitSecondsDefaultValue`](#structFRHAPI__AuditEvent_1addf11ae30eb6bef1716cf792b7cab53c)`() const` | Returns true if TicketWaitSeconds_Optional is set and matches the default value.
`public inline void `[`SetTicketWaitSecondsToDefault`](#structFRHAPI__AuditEvent_1a9b771ccbad80ad6561e55a1c7a9face2)`()` | Sets the value of TicketWaitSeconds_Optional to its default and also sets TicketWaitSeconds_IsSet to true.
`public inline FString & `[`GetMatchMakingProfileId`](#structFRHAPI__AuditEvent_1aafeacede13da3a0fae86b9499c2fbdd1)`()` | Gets the value of MatchMakingProfileId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__AuditEvent_1a8f1d7eccc2692b594fe27740dedf2472)`() const` | Gets the value of MatchMakingProfileId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__AuditEvent_1a2450dea9d9aaa0f54dc9731216da6956)`(const FString & DefaultValue) const` | Gets the value of MatchMakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchMakingProfileId`](#structFRHAPI__AuditEvent_1a8d64d14b8a49cd3d54569edc92df2904)`(FString & OutValue) const` | Fills OutValue with the value of MatchMakingProfileId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchMakingProfileIdOrNull`](#structFRHAPI__AuditEvent_1aaf9a207f7df898003360655b24f4cf99)`()` | Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchMakingProfileIdOrNull`](#structFRHAPI__AuditEvent_1af8f68c0b847ed31f9ac3f106d117f775)`() const` | Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchMakingProfileId`](#structFRHAPI__AuditEvent_1ad8db2f347cb96ee609b4dd572f10f9ee)`(const FString & NewValue)` | Sets the value of MatchMakingProfileId_Optional and also sets MatchMakingProfileId_IsSet to true.
`public inline void `[`SetMatchMakingProfileId`](#structFRHAPI__AuditEvent_1a240b6ed82f00ff4e8bec365140ee9905)`(FString && NewValue)` | Sets the value of MatchMakingProfileId_Optional and also sets MatchMakingProfileId_IsSet to true using move semantics.
`public inline void `[`ClearMatchMakingProfileId`](#structFRHAPI__AuditEvent_1aa7bfe9b037f73477af70134787142759)`()` | Clears the value of MatchMakingProfileId_Optional and sets MatchMakingProfileId_IsSet to false.
`public inline bool `[`IsMatchMakingProfileIdSet`](#structFRHAPI__AuditEvent_1a72f0bbaa28dacd3ef71ed18ddfd951f4)`() const` | Checks whether MatchMakingProfileId_Optional has been set.
`public inline FGuid & `[`GetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a609df074a0871796fe29aef9dbcbe1fa)`()` | Gets the value of RequestingUserUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a969bfc23d39269e7c1dc7c5fe59d458e)`() const` | Gets the value of RequestingUserUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a1af550c49bda3db684b4fdbe88865058)`(const FGuid & DefaultValue) const` | Gets the value of RequestingUserUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a2b54f7415fc9c2b73f037a6be257f393)`(FGuid & OutValue) const` | Fills OutValue with the value of RequestingUserUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetRequestingUserUuidOrNull`](#structFRHAPI__AuditEvent_1a8b224e01142ab731febfc7df3d5bd3af)`()` | Returns a pointer to RequestingUserUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetRequestingUserUuidOrNull`](#structFRHAPI__AuditEvent_1a395a9b87a2f363ef408aff0ece9b6c09)`() const` | Returns a pointer to RequestingUserUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a2c40640e2af1be4c876c2d8e8ac0de34)`(const FGuid & NewValue)` | Sets the value of RequestingUserUuid_Optional and also sets RequestingUserUuid_IsSet to true.
`public inline void `[`SetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a72846483bb51daa209b4c862b7096e11)`(FGuid && NewValue)` | Sets the value of RequestingUserUuid_Optional and also sets RequestingUserUuid_IsSet to true using move semantics.
`public inline void `[`ClearRequestingUserUuid`](#structFRHAPI__AuditEvent_1a75d20856ad2d8cccdcf2157a1238c0c1)`()` | Clears the value of RequestingUserUuid_Optional and sets RequestingUserUuid_IsSet to false.
`public inline bool `[`IsRequestingUserUuidSet`](#structFRHAPI__AuditEvent_1ad62bfca13adf09b1ad8915ceb2c20d84)`() const` | Checks whether RequestingUserUuid_Optional has been set.
`public inline FDateTime & `[`GetEventDatetime`](#structFRHAPI__AuditEvent_1a3fdbb61c6b4d8c7182a1d0e4400b4d06)`()` | Gets the value of EventDatetime.
`public inline const FDateTime & `[`GetEventDatetime`](#structFRHAPI__AuditEvent_1a4a8bb05a3e3263b71f7c71f91b198d52)`() const` | Gets the value of EventDatetime.
`public inline void `[`SetEventDatetime`](#structFRHAPI__AuditEvent_1ad4e8f68d0b4064c703124dba80dbfb87)`(const FDateTime & NewValue)` | Sets the value of EventDatetime.
`public inline void `[`SetEventDatetime`](#structFRHAPI__AuditEvent_1a8738833f39eb52d322a8b43157aca869)`(FDateTime && NewValue)` | Sets the value of EventDatetime using move semantics.

### Members

#### `public FString `[`EventName`](#structFRHAPI__AuditEvent_1a0e11dca6739b8cd51e77938830d9bc34) <a id="structFRHAPI__AuditEvent_1a0e11dca6739b8cd51e77938830d9bc34"></a>

Name of the audit event you are creating. Customer created events will be prepended with 'customer.'.

#### `public FString `[`SessionId`](#structFRHAPI__AuditEvent_1aa3464d29168142e832c39d802bad34ce) <a id="structFRHAPI__AuditEvent_1aa3464d29168142e832c39d802bad34ce"></a>

ID of the session this event occurred in.

#### `public FString `[`Reason_Optional`](#structFRHAPI__AuditEvent_1afbf1f56dc145a9a3087e245946cf3bdd) <a id="structFRHAPI__AuditEvent_1afbf1f56dc145a9a3087e245946cf3bdd"></a>

Reason for this event to occur.

#### `public bool `[`Reason_IsSet`](#structFRHAPI__AuditEvent_1a083bdd403d58e773ad3deb73034f9369) <a id="structFRHAPI__AuditEvent_1a083bdd403d58e773ad3deb73034f9369"></a>

true if Reason_Optional has been set to a value

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

#### `public `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` `[`Joinability_Optional`](#structFRHAPI__AuditEvent_1a99138d0c3ecf5bb9afb306f8ece85e53) <a id="structFRHAPI__AuditEvent_1a99138d0c3ecf5bb9afb306f8ece85e53"></a>

Joinability flags about the session.

#### `public bool `[`Joinability_IsSet`](#structFRHAPI__AuditEvent_1a705a57dd95f3272b3abefc365762b0d4) <a id="structFRHAPI__AuditEvent_1a705a57dd95f3272b3abefc365762b0d4"></a>

true if Joinability_Optional has been set to a value

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

#### `public int32 `[`TicketWaitSeconds_Optional`](#structFRHAPI__AuditEvent_1a412d9228a781030cbb71d7957e4b39df) <a id="structFRHAPI__AuditEvent_1a412d9228a781030cbb71d7957e4b39df"></a>

The total time in seconds that the ticket waited before being assigned to a match.

#### `public bool `[`TicketWaitSeconds_IsSet`](#structFRHAPI__AuditEvent_1a6def889fe45294b755f47847353b9d97) <a id="structFRHAPI__AuditEvent_1a6def889fe45294b755f47847353b9d97"></a>

true if TicketWaitSeconds_Optional has been set to a value

#### `public FString `[`MatchMakingProfileId_Optional`](#structFRHAPI__AuditEvent_1adf818df32527ae3d08ee6c2b9dca6aae) <a id="structFRHAPI__AuditEvent_1adf818df32527ae3d08ee6c2b9dca6aae"></a>

ID of the MatchMakingProfile used to create this session.

#### `public bool `[`MatchMakingProfileId_IsSet`](#structFRHAPI__AuditEvent_1a4cb9a0e235175385d99767546e0427de) <a id="structFRHAPI__AuditEvent_1a4cb9a0e235175385d99767546e0427de"></a>

true if MatchMakingProfileId_Optional has been set to a value

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__AuditEvent_1a4198616996704e101d5d037edfcbac35)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__AuditEvent_1a4198616996704e101d5d037edfcbac35"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetEventName`](#structFRHAPI__AuditEvent_1acca984325fb3a7d3412c2f302cffe519)`()` <a id="structFRHAPI__AuditEvent_1acca984325fb3a7d3412c2f302cffe519"></a>

Gets the value of EventName.

#### `public inline const FString & `[`GetEventName`](#structFRHAPI__AuditEvent_1a0f11c00e9301287f03b4fc0020484209)`() const` <a id="structFRHAPI__AuditEvent_1a0f11c00e9301287f03b4fc0020484209"></a>

Gets the value of EventName.

#### `public inline void `[`SetEventName`](#structFRHAPI__AuditEvent_1a8087921386fdec5296aec7c5e6fea83e)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a8087921386fdec5296aec7c5e6fea83e"></a>

Sets the value of EventName.

#### `public inline void `[`SetEventName`](#structFRHAPI__AuditEvent_1a7a159fa0f7311f41152411c263c7ccd2)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a7a159fa0f7311f41152411c263c7ccd2"></a>

Sets the value of EventName using move semantics.

#### `public inline FString & `[`GetSessionId`](#structFRHAPI__AuditEvent_1ac889227260cb777638ee2fe0f4406d84)`()` <a id="structFRHAPI__AuditEvent_1ac889227260cb777638ee2fe0f4406d84"></a>

Gets the value of SessionId.

#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__AuditEvent_1a056f977f66692feccf4c31147c051dfa)`() const` <a id="structFRHAPI__AuditEvent_1a056f977f66692feccf4c31147c051dfa"></a>

Gets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__AuditEvent_1a867836397739325b10321b484d3e5b45)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a867836397739325b10321b484d3e5b45"></a>

Sets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__AuditEvent_1a0ddb0d8e5c62d564d5e0ff926e7932e6)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a0ddb0d8e5c62d564d5e0ff926e7932e6"></a>

Sets the value of SessionId using move semantics.

#### `public inline FString & `[`GetReason`](#structFRHAPI__AuditEvent_1a74fb304f2cf2ea5696fd4190a687d6d4)`()` <a id="structFRHAPI__AuditEvent_1a74fb304f2cf2ea5696fd4190a687d6d4"></a>

Gets the value of Reason_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetReason`](#structFRHAPI__AuditEvent_1a73960ba26ce831ebf47f2b77bfef47fd)`() const` <a id="structFRHAPI__AuditEvent_1a73960ba26ce831ebf47f2b77bfef47fd"></a>

Gets the value of Reason_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetReason`](#structFRHAPI__AuditEvent_1ae350385f7b7dc07b9b2ec1ac6dc44ff5)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1ae350385f7b7dc07b9b2ec1ac6dc44ff5"></a>

Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetReason`](#structFRHAPI__AuditEvent_1a0d8dcd2315b4e2875c2d70f0668a1d18)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1a0d8dcd2315b4e2875c2d70f0668a1d18"></a>

Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetReasonOrNull`](#structFRHAPI__AuditEvent_1a33987a883e60d5856183396ce6a6437f)`()` <a id="structFRHAPI__AuditEvent_1a33987a883e60d5856183396ce6a6437f"></a>

Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetReasonOrNull`](#structFRHAPI__AuditEvent_1ab7ed81802784e1a67659e8a6e710982e)`() const` <a id="structFRHAPI__AuditEvent_1ab7ed81802784e1a67659e8a6e710982e"></a>

Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetReason`](#structFRHAPI__AuditEvent_1a6e36760dd639abb9554ff8eecc7a04e0)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a6e36760dd639abb9554ff8eecc7a04e0"></a>

Sets the value of Reason_Optional and also sets Reason_IsSet to true.

#### `public inline void `[`SetReason`](#structFRHAPI__AuditEvent_1a9396718a1a32d0e9f5f69fb2cdbe6edd)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a9396718a1a32d0e9f5f69fb2cdbe6edd"></a>

Sets the value of Reason_Optional and also sets Reason_IsSet to true using move semantics.

#### `public inline void `[`ClearReason`](#structFRHAPI__AuditEvent_1a5b5a895bd7fe668e8295807cbf9c75c7)`()` <a id="structFRHAPI__AuditEvent_1a5b5a895bd7fe668e8295807cbf9c75c7"></a>

Clears the value of Reason_Optional and sets Reason_IsSet to false.

#### `public inline bool `[`IsReasonSet`](#structFRHAPI__AuditEvent_1add7002cc97abaf8dd6e749f57a53e903)`() const` <a id="structFRHAPI__AuditEvent_1add7002cc97abaf8dd6e749f57a53e903"></a>

Checks whether Reason_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__AuditEvent_1a72236ce82364b6d33606a35269d3bb3b)`()` <a id="structFRHAPI__AuditEvent_1a72236ce82364b6d33606a35269d3bb3b"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__AuditEvent_1a2315ae2ac06f09beba329f38f9bf9d9c)`() const` <a id="structFRHAPI__AuditEvent_1a2315ae2ac06f09beba329f38f9bf9d9c"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__AuditEvent_1a6c0ad3cdb14308c07e2b3686ed139a3d)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a6c0ad3cdb14308c07e2b3686ed139a3d"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__AuditEvent_1a4960d694b25fbe1a5e4867d02faa918b)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__AuditEvent_1a4960d694b25fbe1a5e4867d02faa918b"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__AuditEvent_1ac68e9d744ac298a3790555ba0a331cbf)`()` <a id="structFRHAPI__AuditEvent_1ac68e9d744ac298a3790555ba0a331cbf"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__AuditEvent_1acf37d409456cee705ffea658bcc3f38e)`() const` <a id="structFRHAPI__AuditEvent_1acf37d409456cee705ffea658bcc3f38e"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__AuditEvent_1a4affedaaa8d6fa24ecfcf4212fd107ed)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__AuditEvent_1a4affedaaa8d6fa24ecfcf4212fd107ed"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__AuditEvent_1a2718da986bec260504cf9f1d0c7a7459)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__AuditEvent_1a2718da986bec260504cf9f1d0c7a7459"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__AuditEvent_1a5aaffe4f1be621a24ef6a07d08271ff7)`()` <a id="structFRHAPI__AuditEvent_1a5aaffe4f1be621a24ef6a07d08271ff7"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__AuditEvent_1af3524cd9746aa75174ce89b878bb05f6)`() const` <a id="structFRHAPI__AuditEvent_1af3524cd9746aa75174ce89b878bb05f6"></a>

Checks whether CustomData_Optional has been set.

#### `public inline FString & `[`GetSessionType`](#structFRHAPI__AuditEvent_1a1dbbd5789767c33e0f61e66ef0c6255d)`()` <a id="structFRHAPI__AuditEvent_1a1dbbd5789767c33e0f61e66ef0c6255d"></a>

Gets the value of SessionType_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetSessionType`](#structFRHAPI__AuditEvent_1af9ceecfb37fca611a9219f405de3b6e5)`() const` <a id="structFRHAPI__AuditEvent_1af9ceecfb37fca611a9219f405de3b6e5"></a>

Gets the value of SessionType_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetSessionType`](#structFRHAPI__AuditEvent_1a067b7aa1a20118296a60d5eea532e646)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a067b7aa1a20118296a60d5eea532e646"></a>

Gets the value of SessionType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessionType`](#structFRHAPI__AuditEvent_1a0158e378b5f65a76e110981c2cb54f2c)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1a0158e378b5f65a76e110981c2cb54f2c"></a>

Fills OutValue with the value of SessionType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetSessionTypeOrNull`](#structFRHAPI__AuditEvent_1a3daa85354c94d16d4696a1d9d09579ad)`()` <a id="structFRHAPI__AuditEvent_1a3daa85354c94d16d4696a1d9d09579ad"></a>

Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetSessionTypeOrNull`](#structFRHAPI__AuditEvent_1aeab0859ec3cd64c0b6a7c0680addbdac)`() const` <a id="structFRHAPI__AuditEvent_1aeab0859ec3cd64c0b6a7c0680addbdac"></a>

Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessionType`](#structFRHAPI__AuditEvent_1a94d2c114d9c835b2978fb12cff5ac056)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a94d2c114d9c835b2978fb12cff5ac056"></a>

Sets the value of SessionType_Optional and also sets SessionType_IsSet to true.

#### `public inline void `[`SetSessionType`](#structFRHAPI__AuditEvent_1aa706a9efc4f4d0243a58d1e733774e55)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1aa706a9efc4f4d0243a58d1e733774e55"></a>

Sets the value of SessionType_Optional and also sets SessionType_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionType`](#structFRHAPI__AuditEvent_1af485efac1a25386828b114dfc87b5e77)`()` <a id="structFRHAPI__AuditEvent_1af485efac1a25386828b114dfc87b5e77"></a>

Clears the value of SessionType_Optional and sets SessionType_IsSet to false.

#### `public inline bool `[`IsSessionTypeSet`](#structFRHAPI__AuditEvent_1ab19c380b566c11f68c4372d971916dd0)`() const` <a id="structFRHAPI__AuditEvent_1ab19c380b566c11f68c4372d971916dd0"></a>

Checks whether SessionType_Optional has been set.

#### `public inline FString & `[`GetRegionId`](#structFRHAPI__AuditEvent_1a3269e6eb0820c1ba7bf9941d32cac60c)`()` <a id="structFRHAPI__AuditEvent_1a3269e6eb0820c1ba7bf9941d32cac60c"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__AuditEvent_1ae1771e818767b1769460b73c040f69d4)`() const` <a id="structFRHAPI__AuditEvent_1ae1771e818767b1769460b73c040f69d4"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__AuditEvent_1aac1d2e8595facf849355f084199d519c)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1aac1d2e8595facf849355f084199d519c"></a>

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRegionId`](#structFRHAPI__AuditEvent_1a99798c97043aa39f5ff4ba032912861f)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1a99798c97043aa39f5ff4ba032912861f"></a>

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__AuditEvent_1a396d62d9514ed46821a57ae323343525)`()` <a id="structFRHAPI__AuditEvent_1a396d62d9514ed46821a57ae323343525"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__AuditEvent_1aceb991752feb24e741ac624c1902319f)`() const` <a id="structFRHAPI__AuditEvent_1aceb991752feb24e741ac624c1902319f"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRegionId`](#structFRHAPI__AuditEvent_1a81d4143343793b2bc8772ea866b7ec6d)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a81d4143343793b2bc8772ea866b7ec6d"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.

#### `public inline void `[`SetRegionId`](#structFRHAPI__AuditEvent_1a4f6cd87a8ce93a35108e94daf443fcfc)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a4f6cd87a8ce93a35108e94daf443fcfc"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.

#### `public inline void `[`ClearRegionId`](#structFRHAPI__AuditEvent_1ade77c1e5c1364d10ccfd19e9fa122dff)`()` <a id="structFRHAPI__AuditEvent_1ade77c1e5c1364d10ccfd19e9fa122dff"></a>

Clears the value of RegionId_Optional and sets RegionId_IsSet to false.

#### `public inline bool `[`IsRegionIdSet`](#structFRHAPI__AuditEvent_1afb73e048e9334e0b154a2229fa452f6f)`() const` <a id="structFRHAPI__AuditEvent_1afb73e048e9334e0b154a2229fa452f6f"></a>

Checks whether RegionId_Optional has been set.

#### `public inline bool & `[`GetJoinable`](#structFRHAPI__AuditEvent_1a8974a9fbd86a1795adfb6d2b6a927518)`()` <a id="structFRHAPI__AuditEvent_1a8974a9fbd86a1795adfb6d2b6a927518"></a>

Gets the value of Joinable_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetJoinable`](#structFRHAPI__AuditEvent_1a697508ba45e93a076719648aa32bc8f0)`() const` <a id="structFRHAPI__AuditEvent_1a697508ba45e93a076719648aa32bc8f0"></a>

Gets the value of Joinable_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetJoinable`](#structFRHAPI__AuditEvent_1a81b7883b971ffbe356e8e1e194399969)`(const bool & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a81b7883b971ffbe356e8e1e194399969"></a>

Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetJoinable`](#structFRHAPI__AuditEvent_1a2351f67f0c02c17a87a3fb826c72e1a9)`(bool & OutValue) const` <a id="structFRHAPI__AuditEvent_1a2351f67f0c02c17a87a3fb826c72e1a9"></a>

Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetJoinableOrNull`](#structFRHAPI__AuditEvent_1aae9de79c193d554609d9ff35fb6abeff)`()` <a id="structFRHAPI__AuditEvent_1aae9de79c193d554609d9ff35fb6abeff"></a>

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetJoinableOrNull`](#structFRHAPI__AuditEvent_1ae104144d5f55149f6fe7411545e802b1)`() const` <a id="structFRHAPI__AuditEvent_1ae104144d5f55149f6fe7411545e802b1"></a>

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

#### `public inline `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__AuditEvent_1ab29776594ae5adf35c05690666bd0225)`()` <a id="structFRHAPI__AuditEvent_1ab29776594ae5adf35c05690666bd0225"></a>

Gets the value of Joinability_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__AuditEvent_1a2278ee347cba2c0b621e7a38e0408b69)`() const` <a id="structFRHAPI__AuditEvent_1a2278ee347cba2c0b621e7a38e0408b69"></a>

Gets the value of Joinability_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__AuditEvent_1a4a4ccaa445fab0b6c72affa0e8fa3df9)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a4a4ccaa445fab0b6c72affa0e8fa3df9"></a>

Gets the value of Joinability_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetJoinability`](#structFRHAPI__AuditEvent_1a37a8a67aac1a5743a8e9cc3571736701)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & OutValue) const` <a id="structFRHAPI__AuditEvent_1a37a8a67aac1a5743a8e9cc3571736701"></a>

Fills OutValue with the value of Joinability_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__AuditEvent_1a535a2b68f8e2f3d51d5ca45dbffa64e2)`()` <a id="structFRHAPI__AuditEvent_1a535a2b68f8e2f3d51d5ca45dbffa64e2"></a>

Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__AuditEvent_1ae377f809f334ec9bcb2517d71d3ba941)`() const` <a id="structFRHAPI__AuditEvent_1ae377f809f334ec9bcb2517d71d3ba941"></a>

Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetJoinability`](#structFRHAPI__AuditEvent_1aa154d67561e52ffdccfebc0dd1740917)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & NewValue)` <a id="structFRHAPI__AuditEvent_1aa154d67561e52ffdccfebc0dd1740917"></a>

Sets the value of Joinability_Optional and also sets Joinability_IsSet to true.

#### `public inline void `[`SetJoinability`](#structFRHAPI__AuditEvent_1ac97de6acc90b3f4810086324e726f31a)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` && NewValue)` <a id="structFRHAPI__AuditEvent_1ac97de6acc90b3f4810086324e726f31a"></a>

Sets the value of Joinability_Optional and also sets Joinability_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinability`](#structFRHAPI__AuditEvent_1a08826e9cd16abcb3f0e813fa32468e53)`()` <a id="structFRHAPI__AuditEvent_1a08826e9cd16abcb3f0e813fa32468e53"></a>

Clears the value of Joinability_Optional and sets Joinability_IsSet to false.

#### `public inline bool `[`IsJoinabilitySet`](#structFRHAPI__AuditEvent_1a4da0d72a9169610e8e21d2b017ad2573)`() const` <a id="structFRHAPI__AuditEvent_1a4da0d72a9169610e8e21d2b017ad2573"></a>

Checks whether Joinability_Optional has been set.

#### `public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__AuditEvent_1ac700dbebcf2968bb67ff9cf0fc0823ed)`()` <a id="structFRHAPI__AuditEvent_1ac700dbebcf2968bb67ff9cf0fc0823ed"></a>

Gets the value of UpdatedTeams_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__AuditEvent_1a5c824ad3dd4a49348a82de17356c7ce2)`() const` <a id="structFRHAPI__AuditEvent_1a5c824ad3dd4a49348a82de17356c7ce2"></a>

Gets the value of UpdatedTeams_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__AuditEvent_1ab7571d1e4c48f53f904abe2b15f09a37)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1ab7571d1e4c48f53f904abe2b15f09a37"></a>

Gets the value of UpdatedTeams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetUpdatedTeams`](#structFRHAPI__AuditEvent_1a673e28af1f69b21f6fe06ddd7073cd32)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & OutValue) const` <a id="structFRHAPI__AuditEvent_1a673e28af1f69b21f6fe06ddd7073cd32"></a>

Fills OutValue with the value of UpdatedTeams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__AuditEvent_1a532e1a5762df7147bf5b2680d729b19a)`()` <a id="structFRHAPI__AuditEvent_1a532e1a5762df7147bf5b2680d729b19a"></a>

Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__AuditEvent_1a13f7974d0b9dcb9793f86b31adc40508)`() const` <a id="structFRHAPI__AuditEvent_1a13f7974d0b9dcb9793f86b31adc40508"></a>

Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetUpdatedTeams`](#structFRHAPI__AuditEvent_1a8238fd52886db81696c362ba9459b0cc)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & NewValue)` <a id="structFRHAPI__AuditEvent_1a8238fd52886db81696c362ba9459b0cc"></a>

Sets the value of UpdatedTeams_Optional and also sets UpdatedTeams_IsSet to true.

#### `public inline void `[`SetUpdatedTeams`](#structFRHAPI__AuditEvent_1a5ae33104490c12208b9c766a4e8b971b)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > && NewValue)` <a id="structFRHAPI__AuditEvent_1a5ae33104490c12208b9c766a4e8b971b"></a>

Sets the value of UpdatedTeams_Optional and also sets UpdatedTeams_IsSet to true using move semantics.

#### `public inline void `[`ClearUpdatedTeams`](#structFRHAPI__AuditEvent_1ae7fbb59c682cdadaa713c1cb50332e51)`()` <a id="structFRHAPI__AuditEvent_1ae7fbb59c682cdadaa713c1cb50332e51"></a>

Clears the value of UpdatedTeams_Optional and sets UpdatedTeams_IsSet to false.

#### `public inline bool `[`IsUpdatedTeamsSet`](#structFRHAPI__AuditEvent_1a80604a3d148ea36937ba7803a39ccbee)`() const` <a id="structFRHAPI__AuditEvent_1a80604a3d148ea36937ba7803a39ccbee"></a>

Checks whether UpdatedTeams_Optional has been set.

#### `public inline ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__AuditEvent_1a963be213fd911f28673375252c84c2d7)`()` <a id="structFRHAPI__AuditEvent_1a963be213fd911f28673375252c84c2d7"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__AuditEvent_1a2f905cce1f909dbf09db4525e2cfba1b)`() const` <a id="structFRHAPI__AuditEvent_1a2f905cce1f909dbf09db4525e2cfba1b"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__AuditEvent_1ab0a8cf255f9167f2869c5f6a4e798d72)`(const ERHAPI_InviteSource & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1ab0a8cf255f9167f2869c5f6a4e798d72"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSource`](#structFRHAPI__AuditEvent_1a97c8b8996109ccfe3ef9914e516db3eb)`(ERHAPI_InviteSource & OutValue) const` <a id="structFRHAPI__AuditEvent_1a97c8b8996109ccfe3ef9914e516db3eb"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__AuditEvent_1a3cde6dffadc67d65a04376f3d5ca4516)`()` <a id="structFRHAPI__AuditEvent_1a3cde6dffadc67d65a04376f3d5ca4516"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__AuditEvent_1ac361620787d9d936c96accc8aeb43942)`() const` <a id="structFRHAPI__AuditEvent_1ac361620787d9d936c96accc8aeb43942"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSource`](#structFRHAPI__AuditEvent_1acc4da47740c855770e7394e5247f0c13)`(const ERHAPI_InviteSource & NewValue)` <a id="structFRHAPI__AuditEvent_1acc4da47740c855770e7394e5247f0c13"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

#### `public inline void `[`SetSource`](#structFRHAPI__AuditEvent_1aa77d6b7e7a75c222daf289cbc58edf29)`(ERHAPI_InviteSource && NewValue)` <a id="structFRHAPI__AuditEvent_1aa77d6b7e7a75c222daf289cbc58edf29"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.

#### `public inline void `[`ClearSource`](#structFRHAPI__AuditEvent_1ae289f75b711f546b5f66d324dce40ac8)`()` <a id="structFRHAPI__AuditEvent_1ae289f75b711f546b5f66d324dce40ac8"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

#### `public inline bool `[`IsSourceSet`](#structFRHAPI__AuditEvent_1a74018ed8ae1bfbfd9f45ce224b75c4ec)`() const` <a id="structFRHAPI__AuditEvent_1a74018ed8ae1bfbfd9f45ce224b75c4ec"></a>

Checks whether Source_Optional has been set.

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__AuditEvent_1a9dbd683a5981253cdac1fa1cbdf78abc)`()` <a id="structFRHAPI__AuditEvent_1a9dbd683a5981253cdac1fa1cbdf78abc"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__AuditEvent_1a3bfaf62eee0c9fe3fb84cf0c1b120146)`() const` <a id="structFRHAPI__AuditEvent_1a3bfaf62eee0c9fe3fb84cf0c1b120146"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__AuditEvent_1a194fdda2902267aee20f2fefeb440d46)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a194fdda2902267aee20f2fefeb440d46"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerUuid`](#structFRHAPI__AuditEvent_1ac554d4e051febbe237753c638a4198c0)`(FGuid & OutValue) const` <a id="structFRHAPI__AuditEvent_1ac554d4e051febbe237753c638a4198c0"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__AuditEvent_1a3f36db2be50e298ccbb738456e017251)`()` <a id="structFRHAPI__AuditEvent_1a3f36db2be50e298ccbb738456e017251"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__AuditEvent_1a26d5049e92e2db5736afb1ffa2103c5c)`() const` <a id="structFRHAPI__AuditEvent_1a26d5049e92e2db5736afb1ffa2103c5c"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__AuditEvent_1ae19715aea8b4871a0b72de04887c7ef8)`(const FGuid & NewValue)` <a id="structFRHAPI__AuditEvent_1ae19715aea8b4871a0b72de04887c7ef8"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__AuditEvent_1a88e95b412063e1c90e1da710ab6880c7)`(FGuid && NewValue)` <a id="structFRHAPI__AuditEvent_1a88e95b412063e1c90e1da710ab6880c7"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__AuditEvent_1a03c6f2362c235c7631ef36c4f3c42beb)`()` <a id="structFRHAPI__AuditEvent_1a03c6f2362c235c7631ef36c4f3c42beb"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__AuditEvent_1afec2260e0d9dd9b1721aa7c4214bd739)`() const` <a id="structFRHAPI__AuditEvent_1afec2260e0d9dd9b1721aa7c4214bd739"></a>

Checks whether PlayerUuid_Optional has been set.

#### `public inline int32 & `[`GetTeamId`](#structFRHAPI__AuditEvent_1aab5ce68ba5a8801e810f2a529ba91bed)`()` <a id="structFRHAPI__AuditEvent_1aab5ce68ba5a8801e810f2a529ba91bed"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__AuditEvent_1a804265f9d635db4ed1c1cac9ac72f594)`() const` <a id="structFRHAPI__AuditEvent_1a804265f9d635db4ed1c1cac9ac72f594"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__AuditEvent_1a0da8b879f31f057e26e5e4da16a6a55b)`(const int32 & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a0da8b879f31f057e26e5e4da16a6a55b"></a>

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTeamId`](#structFRHAPI__AuditEvent_1a7344ad05cfbb1e0cc893b7f723eea816)`(int32 & OutValue) const` <a id="structFRHAPI__AuditEvent_1a7344ad05cfbb1e0cc893b7f723eea816"></a>

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetTeamIdOrNull`](#structFRHAPI__AuditEvent_1a5bc53b49eab6cc95e293b0c8cc3c3427)`()` <a id="structFRHAPI__AuditEvent_1a5bc53b49eab6cc95e293b0c8cc3c3427"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__AuditEvent_1afb2190201847c1ca31dbdf8950c9a24b)`() const` <a id="structFRHAPI__AuditEvent_1afb2190201847c1ca31dbdf8950c9a24b"></a>

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

#### `public inline FString & `[`GetInvitedSessionId`](#structFRHAPI__AuditEvent_1aabd0fcb746ed3dcf2b81a0d07b09e22b)`()` <a id="structFRHAPI__AuditEvent_1aabd0fcb746ed3dcf2b81a0d07b09e22b"></a>

Gets the value of InvitedSessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInvitedSessionId`](#structFRHAPI__AuditEvent_1a9bc911d1fc22a5aebf9b88deae99a1df)`() const` <a id="structFRHAPI__AuditEvent_1a9bc911d1fc22a5aebf9b88deae99a1df"></a>

Gets the value of InvitedSessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInvitedSessionId`](#structFRHAPI__AuditEvent_1a3a9f77609c3b677a0b16d4fbd0e0b2da)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a3a9f77609c3b677a0b16d4fbd0e0b2da"></a>

Gets the value of InvitedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInvitedSessionId`](#structFRHAPI__AuditEvent_1aabb4f44710178fd6e53b95cfdff6ae17)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1aabb4f44710178fd6e53b95cfdff6ae17"></a>

Fills OutValue with the value of InvitedSessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__AuditEvent_1af36fdb60b609d8eb370d75bc6ad6e1be)`()` <a id="structFRHAPI__AuditEvent_1af36fdb60b609d8eb370d75bc6ad6e1be"></a>

Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__AuditEvent_1ad5a3480fd8cd82c265156c1c2eff6fee)`() const` <a id="structFRHAPI__AuditEvent_1ad5a3480fd8cd82c265156c1c2eff6fee"></a>

Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInvitedSessionId`](#structFRHAPI__AuditEvent_1a3c32957fb9d0b5e1d7371c6a112b1cba)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a3c32957fb9d0b5e1d7371c6a112b1cba"></a>

Sets the value of InvitedSessionId_Optional and also sets InvitedSessionId_IsSet to true.

#### `public inline void `[`SetInvitedSessionId`](#structFRHAPI__AuditEvent_1a7badce28c451a3ede11d27c75fcbae4b)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a7badce28c451a3ede11d27c75fcbae4b"></a>

Sets the value of InvitedSessionId_Optional and also sets InvitedSessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearInvitedSessionId`](#structFRHAPI__AuditEvent_1af5c9671893728a053fc0ed1c35cd54a0)`()` <a id="structFRHAPI__AuditEvent_1af5c9671893728a053fc0ed1c35cd54a0"></a>

Clears the value of InvitedSessionId_Optional and sets InvitedSessionId_IsSet to false.

#### `public inline bool `[`IsInvitedSessionIdSet`](#structFRHAPI__AuditEvent_1aee80c206c407b9f83d4e466c399f0132)`() const` <a id="structFRHAPI__AuditEvent_1aee80c206c407b9f83d4e466c399f0132"></a>

Checks whether InvitedSessionId_Optional has been set.

#### `public inline FString & `[`GetRemovedSessionId`](#structFRHAPI__AuditEvent_1a54c85ad140785c445c4bfcb6314a3c0e)`()` <a id="structFRHAPI__AuditEvent_1a54c85ad140785c445c4bfcb6314a3c0e"></a>

Gets the value of RemovedSessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRemovedSessionId`](#structFRHAPI__AuditEvent_1aac5fbe426399173bba6d36e15ffd458b)`() const` <a id="structFRHAPI__AuditEvent_1aac5fbe426399173bba6d36e15ffd458b"></a>

Gets the value of RemovedSessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRemovedSessionId`](#structFRHAPI__AuditEvent_1ae13dbafa6a9ddd2e71cb6d385240f470)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1ae13dbafa6a9ddd2e71cb6d385240f470"></a>

Gets the value of RemovedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRemovedSessionId`](#structFRHAPI__AuditEvent_1ade807e3b1634593e4e314a3cc12562ba)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1ade807e3b1634593e4e314a3cc12562ba"></a>

Fills OutValue with the value of RemovedSessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__AuditEvent_1ab7e26a4fb21c388bc90d8a5529766951)`()` <a id="structFRHAPI__AuditEvent_1ab7e26a4fb21c388bc90d8a5529766951"></a>

Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__AuditEvent_1ae997ddbed19967c4e4bf1164ffe4d5e9)`() const` <a id="structFRHAPI__AuditEvent_1ae997ddbed19967c4e4bf1164ffe4d5e9"></a>

Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRemovedSessionId`](#structFRHAPI__AuditEvent_1af61362af9db9b687702930d07a978a9a)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1af61362af9db9b687702930d07a978a9a"></a>

Sets the value of RemovedSessionId_Optional and also sets RemovedSessionId_IsSet to true.

#### `public inline void `[`SetRemovedSessionId`](#structFRHAPI__AuditEvent_1a9d61198748341944235b605422454e6e)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a9d61198748341944235b605422454e6e"></a>

Sets the value of RemovedSessionId_Optional and also sets RemovedSessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearRemovedSessionId`](#structFRHAPI__AuditEvent_1aff216f70ad96469f84d59cace7f26a1a)`()` <a id="structFRHAPI__AuditEvent_1aff216f70ad96469f84d59cace7f26a1a"></a>

Clears the value of RemovedSessionId_Optional and sets RemovedSessionId_IsSet to false.

#### `public inline bool `[`IsRemovedSessionIdSet`](#structFRHAPI__AuditEvent_1a701a19c4cbd0f0dce6e8084988cae627)`() const` <a id="structFRHAPI__AuditEvent_1a701a19c4cbd0f0dce6e8084988cae627"></a>

Checks whether RemovedSessionId_Optional has been set.

#### `public inline FString & `[`GetVersion`](#structFRHAPI__AuditEvent_1ab23fad65a4f6e595ed00c55468c6256c)`()` <a id="structFRHAPI__AuditEvent_1ab23fad65a4f6e595ed00c55468c6256c"></a>

Gets the value of Version_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetVersion`](#structFRHAPI__AuditEvent_1a8929938aadae30cbc52121ff67721875)`() const` <a id="structFRHAPI__AuditEvent_1a8929938aadae30cbc52121ff67721875"></a>

Gets the value of Version_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetVersion`](#structFRHAPI__AuditEvent_1a1e47bbb44333cc6091464033ad502c28)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a1e47bbb44333cc6091464033ad502c28"></a>

Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetVersion`](#structFRHAPI__AuditEvent_1a7f3950a12da4cd1035e1894f0c714890)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1a7f3950a12da4cd1035e1894f0c714890"></a>

Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetVersionOrNull`](#structFRHAPI__AuditEvent_1ab84e68a8eeb988df709a5efaff2ce2c7)`()` <a id="structFRHAPI__AuditEvent_1ab84e68a8eeb988df709a5efaff2ce2c7"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetVersionOrNull`](#structFRHAPI__AuditEvent_1a5587d83a6b09f69300d4bb2d3611dbb3)`() const` <a id="structFRHAPI__AuditEvent_1a5587d83a6b09f69300d4bb2d3611dbb3"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetVersion`](#structFRHAPI__AuditEvent_1a1c31b5321f12957b29cbb6fd27bc252c)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a1c31b5321f12957b29cbb6fd27bc252c"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true.

#### `public inline void `[`SetVersion`](#structFRHAPI__AuditEvent_1a4a292c731f135f4bf042ed412da9a915)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a4a292c731f135f4bf042ed412da9a915"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics.

#### `public inline void `[`ClearVersion`](#structFRHAPI__AuditEvent_1a7ceff8afbf6b5e1ace9ada4c055b1a66)`()` <a id="structFRHAPI__AuditEvent_1a7ceff8afbf6b5e1ace9ada4c055b1a66"></a>

Clears the value of Version_Optional and sets Version_IsSet to false.

#### `public inline bool `[`IsVersionSet`](#structFRHAPI__AuditEvent_1a54a358e1b91e8639f82106c0c1b762d5)`() const` <a id="structFRHAPI__AuditEvent_1a54a358e1b91e8639f82106c0c1b762d5"></a>

Checks whether Version_Optional has been set.

#### `public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__AuditEvent_1ab6e156633883485d2fb53414ecaa4474)`()` <a id="structFRHAPI__AuditEvent_1ab6e156633883485d2fb53414ecaa4474"></a>

Gets the value of ClientSettings_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__AuditEvent_1a7815dfcab22ffae4063a9c218d3113b6)`() const` <a id="structFRHAPI__AuditEvent_1a7815dfcab22ffae4063a9c218d3113b6"></a>

Gets the value of ClientSettings_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__AuditEvent_1ad3c74afecaab787c07af5ea6b3c0344b)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1ad3c74afecaab787c07af5ea6b3c0344b"></a>

Gets the value of ClientSettings_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetClientSettings`](#structFRHAPI__AuditEvent_1a05775d6ef1d3f110a990a843b113f980)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & OutValue) const` <a id="structFRHAPI__AuditEvent_1a05775d6ef1d3f110a990a843b113f980"></a>

Fills OutValue with the value of ClientSettings_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__AuditEvent_1a954e29e612ec6ce63072757d7e70aeb4)`()` <a id="structFRHAPI__AuditEvent_1a954e29e612ec6ce63072757d7e70aeb4"></a>

Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__AuditEvent_1a709914b261bf42e513ec3c59152db0ae)`() const` <a id="structFRHAPI__AuditEvent_1a709914b261bf42e513ec3c59152db0ae"></a>

Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetClientSettings`](#structFRHAPI__AuditEvent_1aa1287ead01588e4aa867d66bd36b76b7)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & NewValue)` <a id="structFRHAPI__AuditEvent_1aa1287ead01588e4aa867d66bd36b76b7"></a>

Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true.

#### `public inline void `[`SetClientSettings`](#structFRHAPI__AuditEvent_1a18db16fb778956186aa2f39d260b1e69)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` && NewValue)` <a id="structFRHAPI__AuditEvent_1a18db16fb778956186aa2f39d260b1e69"></a>

Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true using move semantics.

#### `public inline void `[`ClearClientSettings`](#structFRHAPI__AuditEvent_1a94831c05e3986114c6f2a89b692196e9)`()` <a id="structFRHAPI__AuditEvent_1a94831c05e3986114c6f2a89b692196e9"></a>

Clears the value of ClientSettings_Optional and sets ClientSettings_IsSet to false.

#### `public inline bool `[`IsClientSettingsSet`](#structFRHAPI__AuditEvent_1aed553d016754f1f384bfded4f0cb4e86)`() const` <a id="structFRHAPI__AuditEvent_1aed553d016754f1f384bfded4f0cb4e86"></a>

Checks whether ClientSettings_Optional has been set.

#### `public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__AuditEvent_1ae538e2fea07c0aa6bc7aa7423bf903b7)`()` <a id="structFRHAPI__AuditEvent_1ae538e2fea07c0aa6bc7aa7423bf903b7"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__AuditEvent_1a7e40df7b733196f54b2af3defbcf398d)`() const` <a id="structFRHAPI__AuditEvent_1a7e40df7b733196f54b2af3defbcf398d"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__AuditEvent_1a46aaec23542f7772bc14d43f506704fe)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a46aaec23542f7772bc14d43f506704fe"></a>

Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCrossplayPreferences`](#structFRHAPI__AuditEvent_1a0e6ff85879b0cedbe7220a084ba75323)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` <a id="structFRHAPI__AuditEvent_1a0e6ff85879b0cedbe7220a084ba75323"></a>

Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__AuditEvent_1a70c46614019e4b4f0dfe580d419a8ba7)`()` <a id="structFRHAPI__AuditEvent_1a70c46614019e4b4f0dfe580d419a8ba7"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__AuditEvent_1a383b3c4418be401c958162ab2b2e8e0f)`() const` <a id="structFRHAPI__AuditEvent_1a383b3c4418be401c958162ab2b2e8e0f"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCrossplayPreferences`](#structFRHAPI__AuditEvent_1af3008c45b49c2eb889911d00ebe7ebf0)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & NewValue)` <a id="structFRHAPI__AuditEvent_1af3008c45b49c2eb889911d00ebe7ebf0"></a>

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.

#### `public inline void `[`SetCrossplayPreferences`](#structFRHAPI__AuditEvent_1a7ff6b1395a4c8a8c27669dacbba62ea7)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` && NewValue)` <a id="structFRHAPI__AuditEvent_1a7ff6b1395a4c8a8c27669dacbba62ea7"></a>

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true using move semantics.

#### `public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__AuditEvent_1af1899c1e5b5181b70c8778ae01c055c7)`()` <a id="structFRHAPI__AuditEvent_1af1899c1e5b5181b70c8778ae01c055c7"></a>

Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.

#### `public inline bool `[`IsCrossplayPreferencesSet`](#structFRHAPI__AuditEvent_1ad106f4fb3165db8eaf5a4f84c87be306)`() const` <a id="structFRHAPI__AuditEvent_1ad106f4fb3165db8eaf5a4f84c87be306"></a>

Checks whether CrossplayPreferences_Optional has been set.

#### `public inline ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__AuditEvent_1a991d0e034a0c40e9bb3902e8a5d646d1)`()` <a id="structFRHAPI__AuditEvent_1a991d0e034a0c40e9bb3902e8a5d646d1"></a>

Gets the value of PlayerStatus_Optional, regardless of it having been set.

#### `public inline const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__AuditEvent_1aca963d485b9bbf2e0dcdb06b90b01a18)`() const` <a id="structFRHAPI__AuditEvent_1aca963d485b9bbf2e0dcdb06b90b01a18"></a>

Gets the value of PlayerStatus_Optional, regardless of it having been set.

#### `public inline const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__AuditEvent_1ac5bbc52c80bd681b2ad90a11d3a72173)`(const ERHAPI_SessionPlayerStatus & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1ac5bbc52c80bd681b2ad90a11d3a72173"></a>

Gets the value of PlayerStatus_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerStatus`](#structFRHAPI__AuditEvent_1a6a859a33a504f780c5cdac0dcad855de)`(ERHAPI_SessionPlayerStatus & OutValue) const` <a id="structFRHAPI__AuditEvent_1a6a859a33a504f780c5cdac0dcad855de"></a>

Fills OutValue with the value of PlayerStatus_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__AuditEvent_1aa5ef2c93c6846b8a83bd458f26803c41)`()` <a id="structFRHAPI__AuditEvent_1aa5ef2c93c6846b8a83bd458f26803c41"></a>

Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__AuditEvent_1a035f3b8118e43b3411653483851b9160)`() const` <a id="structFRHAPI__AuditEvent_1a035f3b8118e43b3411653483851b9160"></a>

Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerStatus`](#structFRHAPI__AuditEvent_1a1808222701b0c45c69bbbc1dd355f540)`(const ERHAPI_SessionPlayerStatus & NewValue)` <a id="structFRHAPI__AuditEvent_1a1808222701b0c45c69bbbc1dd355f540"></a>

Sets the value of PlayerStatus_Optional and also sets PlayerStatus_IsSet to true.

#### `public inline void `[`SetPlayerStatus`](#structFRHAPI__AuditEvent_1a8fdc03635bf2ac0aa85dadfd14bcc4b1)`(ERHAPI_SessionPlayerStatus && NewValue)` <a id="structFRHAPI__AuditEvent_1a8fdc03635bf2ac0aa85dadfd14bcc4b1"></a>

Sets the value of PlayerStatus_Optional and also sets PlayerStatus_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerStatus`](#structFRHAPI__AuditEvent_1aa6d6d3cf6091881b21f450168b45f4c8)`()` <a id="structFRHAPI__AuditEvent_1aa6d6d3cf6091881b21f450168b45f4c8"></a>

Clears the value of PlayerStatus_Optional and sets PlayerStatus_IsSet to false.

#### `public inline bool `[`IsPlayerStatusSet`](#structFRHAPI__AuditEvent_1ab8a02c50baa7a910cdddb0d16821f76e)`() const` <a id="structFRHAPI__AuditEvent_1ab8a02c50baa7a910cdddb0d16821f76e"></a>

Checks whether PlayerStatus_Optional has been set.

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__AuditEvent_1aabc4e741afef959011edeba1e322ed5f)`()` <a id="structFRHAPI__AuditEvent_1aabc4e741afef959011edeba1e322ed5f"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__AuditEvent_1a8709c5798d7f4680442f5905a0b98ad2)`() const` <a id="structFRHAPI__AuditEvent_1a8709c5798d7f4680442f5905a0b98ad2"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__AuditEvent_1ac18e3c7dd670a1066cf615b3d0a48f9b)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1ac18e3c7dd670a1066cf615b3d0a48f9b"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatform`](#structFRHAPI__AuditEvent_1a2fe237dcd924c666d499899ee49e36d0)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__AuditEvent_1a2fe237dcd924c666d499899ee49e36d0"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__AuditEvent_1a4b645d47024409c1330df75e63812afa)`()` <a id="structFRHAPI__AuditEvent_1a4b645d47024409c1330df75e63812afa"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__AuditEvent_1a03e96a3d3d369201d6657fe511caabcf)`() const` <a id="structFRHAPI__AuditEvent_1a03e96a3d3d369201d6657fe511caabcf"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatform`](#structFRHAPI__AuditEvent_1abbd1b1149c514a1526d84bbfac1df1cf)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__AuditEvent_1abbd1b1149c514a1526d84bbfac1df1cf"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline void `[`SetPlatform`](#structFRHAPI__AuditEvent_1a1d7407c70e5958528911610f12794cd2)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__AuditEvent_1a1d7407c70e5958528911610f12794cd2"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__AuditEvent_1aa09b2a730eadbccecf65f6491dd39461)`()` <a id="structFRHAPI__AuditEvent_1aa09b2a730eadbccecf65f6491dd39461"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline bool `[`IsPlatformSet`](#structFRHAPI__AuditEvent_1ae0374725fe376fb4276ea59474a0e783)`() const` <a id="structFRHAPI__AuditEvent_1ae0374725fe376fb4276ea59474a0e783"></a>

Checks whether Platform_Optional has been set.

#### `public inline FString & `[`GetPlatformSessionId`](#structFRHAPI__AuditEvent_1a974adc6364cea5eeb2e61710ab53cdf6)`()` <a id="structFRHAPI__AuditEvent_1a974adc6364cea5eeb2e61710ab53cdf6"></a>

Gets the value of PlatformSessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformSessionId`](#structFRHAPI__AuditEvent_1a371217125fdef7b21f87381bf7ae576c)`() const` <a id="structFRHAPI__AuditEvent_1a371217125fdef7b21f87381bf7ae576c"></a>

Gets the value of PlatformSessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformSessionId`](#structFRHAPI__AuditEvent_1aa22d3bd440c61d4081d72ab188a34227)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1aa22d3bd440c61d4081d72ab188a34227"></a>

Gets the value of PlatformSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformSessionId`](#structFRHAPI__AuditEvent_1a2813c6585a35e3684dc5803706fcd359)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1a2813c6585a35e3684dc5803706fcd359"></a>

Fills OutValue with the value of PlatformSessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__AuditEvent_1a8dd9f9235a468b1dfea40aed2c759f34)`()` <a id="structFRHAPI__AuditEvent_1a8dd9f9235a468b1dfea40aed2c759f34"></a>

Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__AuditEvent_1aa80d516e3369999fde09f8f64719bfa3)`() const` <a id="structFRHAPI__AuditEvent_1aa80d516e3369999fde09f8f64719bfa3"></a>

Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformSessionId`](#structFRHAPI__AuditEvent_1ac2eef0648ddb5613c03bfbd36af86360)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1ac2eef0648ddb5613c03bfbd36af86360"></a>

Sets the value of PlatformSessionId_Optional and also sets PlatformSessionId_IsSet to true.

#### `public inline void `[`SetPlatformSessionId`](#structFRHAPI__AuditEvent_1a1e17878a603c771549c57fc5cb95da07)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a1e17878a603c771549c57fc5cb95da07"></a>

Sets the value of PlatformSessionId_Optional and also sets PlatformSessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformSessionId`](#structFRHAPI__AuditEvent_1a5fc4053f6b838a472fbe315133728400)`()` <a id="structFRHAPI__AuditEvent_1a5fc4053f6b838a472fbe315133728400"></a>

Clears the value of PlatformSessionId_Optional and sets PlatformSessionId_IsSet to false.

#### `public inline bool `[`IsPlatformSessionIdSet`](#structFRHAPI__AuditEvent_1a66f950e18c3943f421f566d3d96d8574)`() const` <a id="structFRHAPI__AuditEvent_1a66f950e18c3943f421f566d3d96d8574"></a>

Checks whether PlatformSessionId_Optional has been set.

#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__AuditEvent_1a6c52aaba3aa6f157438949df4e997393)`()` <a id="structFRHAPI__AuditEvent_1a6c52aaba3aa6f157438949df4e997393"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__AuditEvent_1a95c584986de9559f5ef90be27ae5cf44)`() const` <a id="structFRHAPI__AuditEvent_1a95c584986de9559f5ef90be27ae5cf44"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__AuditEvent_1a9c507ad419e5f0f85183685f32b09f27)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a9c507ad419e5f0f85183685f32b09f27"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceId`](#structFRHAPI__AuditEvent_1a22c9fb95a6d83f9f192bbd2e5903ae85)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1a22c9fb95a6d83f9f192bbd2e5903ae85"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__AuditEvent_1a3dc3c17828f2aac3ee575db3b20aa714)`()` <a id="structFRHAPI__AuditEvent_1a3dc3c17828f2aac3ee575db3b20aa714"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__AuditEvent_1afeee9b72c3a65699e238e3121635917e)`() const` <a id="structFRHAPI__AuditEvent_1afeee9b72c3a65699e238e3121635917e"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__AuditEvent_1a4b6b15fe6bb2f8cc822c9da426c6745f)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a4b6b15fe6bb2f8cc822c9da426c6745f"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__AuditEvent_1a9a7fc2a6faab6778919a07a24220507e)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a9a7fc2a6faab6778919a07a24220507e"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__AuditEvent_1a22603a0b806c747218532f541db1638b)`()` <a id="structFRHAPI__AuditEvent_1a22603a0b806c747218532f541db1638b"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline bool `[`IsInstanceIdSet`](#structFRHAPI__AuditEvent_1acc3a47b0824f678387ab3e2291e3c9a4)`() const` <a id="structFRHAPI__AuditEvent_1acc3a47b0824f678387ab3e2291e3c9a4"></a>

Checks whether InstanceId_Optional has been set.

#### `public inline ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__AuditEvent_1ad89ab1c0a0f645772ce78d27ed2f89b5)`()` <a id="structFRHAPI__AuditEvent_1ad89ab1c0a0f645772ce78d27ed2f89b5"></a>

Gets the value of HostType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__AuditEvent_1a42374677ebd6e8b1e46e81de44f3514b)`() const` <a id="structFRHAPI__AuditEvent_1a42374677ebd6e8b1e46e81de44f3514b"></a>

Gets the value of HostType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__AuditEvent_1a6f9994ce760d7019a8c84b54210255ed)`(const ERHAPI_HostType & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a6f9994ce760d7019a8c84b54210255ed"></a>

Gets the value of HostType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetHostType`](#structFRHAPI__AuditEvent_1a3d7240abb4d60f56235c65c6ea077979)`(ERHAPI_HostType & OutValue) const` <a id="structFRHAPI__AuditEvent_1a3d7240abb4d60f56235c65c6ea077979"></a>

Fills OutValue with the value of HostType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__AuditEvent_1aa535e0737848b4f8511041bfd86005df)`()` <a id="structFRHAPI__AuditEvent_1aa535e0737848b4f8511041bfd86005df"></a>

Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__AuditEvent_1a822aebccf8bebb0cfa60fb36aaa6bc37)`() const` <a id="structFRHAPI__AuditEvent_1a822aebccf8bebb0cfa60fb36aaa6bc37"></a>

Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetHostType`](#structFRHAPI__AuditEvent_1a227a5d5ebab31508e083798da384a47c)`(const ERHAPI_HostType & NewValue)` <a id="structFRHAPI__AuditEvent_1a227a5d5ebab31508e083798da384a47c"></a>

Sets the value of HostType_Optional and also sets HostType_IsSet to true.

#### `public inline void `[`SetHostType`](#structFRHAPI__AuditEvent_1ac75f49285f71d1ac1fcea3baf5b8ef4a)`(ERHAPI_HostType && NewValue)` <a id="structFRHAPI__AuditEvent_1ac75f49285f71d1ac1fcea3baf5b8ef4a"></a>

Sets the value of HostType_Optional and also sets HostType_IsSet to true using move semantics.

#### `public inline void `[`ClearHostType`](#structFRHAPI__AuditEvent_1af2d3969a72d3de486e6730f174d54960)`()` <a id="structFRHAPI__AuditEvent_1af2d3969a72d3de486e6730f174d54960"></a>

Clears the value of HostType_Optional and sets HostType_IsSet to false.

#### `public inline bool `[`IsHostTypeSet`](#structFRHAPI__AuditEvent_1a6100cac42fb0561f9a4848569cf529bf)`() const` <a id="structFRHAPI__AuditEvent_1a6100cac42fb0561f9a4848569cf529bf"></a>

Checks whether HostType_Optional has been set.

#### `public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__AuditEvent_1aa5691aeaece583dffe9bc8943bd84c37)`()` <a id="structFRHAPI__AuditEvent_1aa5691aeaece583dffe9bc8943bd84c37"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__AuditEvent_1ae2f59ee7b85a3d8e2f9b5a9da6111daf)`() const` <a id="structFRHAPI__AuditEvent_1ae2f59ee7b85a3d8e2f9b5a9da6111daf"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__AuditEvent_1a7797b348c4d7cae9df21394fbadd88e8)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a7797b348c4d7cae9df21394fbadd88e8"></a>

Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__AuditEvent_1a78914fb5273ca86ef9130daf01c0d299)`(FGuid & OutValue) const` <a id="structFRHAPI__AuditEvent_1a78914fb5273ca86ef9130daf01c0d299"></a>

Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__AuditEvent_1a68b2f715020706363d7242b8a4f1cdcc)`()` <a id="structFRHAPI__AuditEvent_1a68b2f715020706363d7242b8a4f1cdcc"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__AuditEvent_1a5affa744845de1cbf2cf16ae43aee5f5)`() const` <a id="structFRHAPI__AuditEvent_1a5affa744845de1cbf2cf16ae43aee5f5"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetHostPlayerUuid`](#structFRHAPI__AuditEvent_1afe493a5cd3b78599642e2f372e75b9a0)`(const FGuid & NewValue)` <a id="structFRHAPI__AuditEvent_1afe493a5cd3b78599642e2f372e75b9a0"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.

#### `public inline void `[`SetHostPlayerUuid`](#structFRHAPI__AuditEvent_1a6651e7be036259b5e2cbe048f74c154c)`(FGuid && NewValue)` <a id="structFRHAPI__AuditEvent_1a6651e7be036259b5e2cbe048f74c154c"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__AuditEvent_1aacdcdb79e5bcac41ff75fc7946d361e9)`()` <a id="structFRHAPI__AuditEvent_1aacdcdb79e5bcac41ff75fc7946d361e9"></a>

Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.

#### `public inline bool `[`IsHostPlayerUuidSet`](#structFRHAPI__AuditEvent_1a1ee0aa13a2cbd42dc35764feb2da14da)`() const` <a id="structFRHAPI__AuditEvent_1a1ee0aa13a2cbd42dc35764feb2da14da"></a>

Checks whether HostPlayerUuid_Optional has been set.

#### `public inline FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1ae23a654f9bc3cf73f3a99d071f5464b8)`()` <a id="structFRHAPI__AuditEvent_1ae23a654f9bc3cf73f3a99d071f5464b8"></a>

Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a8d42f8f8601671ad9673a982aa62b287)`() const` <a id="structFRHAPI__AuditEvent_1a8d42f8f8601671ad9673a982aa62b287"></a>

Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1af1a399766a52e6e04476b72b43156a3b)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1af1a399766a52e6e04476b72b43156a3b"></a>

Gets the value of InstanceRequestTemplate_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a92a8f742f19ffff30d7637eb0a422e26)`(FGuid & OutValue) const` <a id="structFRHAPI__AuditEvent_1a92a8f742f19ffff30d7637eb0a422e26"></a>

Fills OutValue with the value of InstanceRequestTemplate_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__AuditEvent_1a8317e0d9827eba8c30cfe674070e6b09)`()` <a id="structFRHAPI__AuditEvent_1a8317e0d9827eba8c30cfe674070e6b09"></a>

Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__AuditEvent_1a202953ac712476f6401eb93360a94185)`() const` <a id="structFRHAPI__AuditEvent_1a202953ac712476f6401eb93360a94185"></a>

Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a5c57bc75cb577ee794c672cf55bae07b)`(const FGuid & NewValue)` <a id="structFRHAPI__AuditEvent_1a5c57bc75cb577ee794c672cf55bae07b"></a>

Sets the value of InstanceRequestTemplate_Optional and also sets InstanceRequestTemplate_IsSet to true.

#### `public inline void `[`SetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a76fc5a4577fdf7462180bb4a2979c54e)`(FGuid && NewValue)` <a id="structFRHAPI__AuditEvent_1a76fc5a4577fdf7462180bb4a2979c54e"></a>

Sets the value of InstanceRequestTemplate_Optional and also sets InstanceRequestTemplate_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a524c77ab8b9f19d870035b5ca5882800)`()` <a id="structFRHAPI__AuditEvent_1a524c77ab8b9f19d870035b5ca5882800"></a>

Clears the value of InstanceRequestTemplate_Optional and sets InstanceRequestTemplate_IsSet to false.

#### `public inline bool `[`IsInstanceRequestTemplateSet`](#structFRHAPI__AuditEvent_1aeef6c3214922d53a11bacceb7e3cea68)`() const` <a id="structFRHAPI__AuditEvent_1aeef6c3214922d53a11bacceb7e3cea68"></a>

Checks whether InstanceRequestTemplate_Optional has been set.

#### `public inline FString & `[`GetMap`](#structFRHAPI__AuditEvent_1a80e751d50d3b93ab4077a12b1e61da87)`()` <a id="structFRHAPI__AuditEvent_1a80e751d50d3b93ab4077a12b1e61da87"></a>

Gets the value of Map_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMap`](#structFRHAPI__AuditEvent_1a87d0a30f059cbbd967b14abdbf54c59e)`() const` <a id="structFRHAPI__AuditEvent_1a87d0a30f059cbbd967b14abdbf54c59e"></a>

Gets the value of Map_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMap`](#structFRHAPI__AuditEvent_1ad01875a9c3ae376fb5c2bdcf98d04883)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1ad01875a9c3ae376fb5c2bdcf98d04883"></a>

Gets the value of Map_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMap`](#structFRHAPI__AuditEvent_1aa3733fd2051cab50d2a2c5875f035bc5)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1aa3733fd2051cab50d2a2c5875f035bc5"></a>

Fills OutValue with the value of Map_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMapOrNull`](#structFRHAPI__AuditEvent_1ac34ec183155bd05e5debe7cb4dc14baf)`()` <a id="structFRHAPI__AuditEvent_1ac34ec183155bd05e5debe7cb4dc14baf"></a>

Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMapOrNull`](#structFRHAPI__AuditEvent_1a2e6dc6c083fad20a72415795ce6acf18)`() const` <a id="structFRHAPI__AuditEvent_1a2e6dc6c083fad20a72415795ce6acf18"></a>

Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMap`](#structFRHAPI__AuditEvent_1a8c12843b486e7c44895f91e3048c6c16)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a8c12843b486e7c44895f91e3048c6c16"></a>

Sets the value of Map_Optional and also sets Map_IsSet to true.

#### `public inline void `[`SetMap`](#structFRHAPI__AuditEvent_1a26bb3a4f8c3a89e44e03fef02d5c0f4c)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a26bb3a4f8c3a89e44e03fef02d5c0f4c"></a>

Sets the value of Map_Optional and also sets Map_IsSet to true using move semantics.

#### `public inline void `[`ClearMap`](#structFRHAPI__AuditEvent_1a6d6275509b146ad4eba918dbcb22d0ad)`()` <a id="structFRHAPI__AuditEvent_1a6d6275509b146ad4eba918dbcb22d0ad"></a>

Clears the value of Map_Optional and sets Map_IsSet to false.

#### `public inline bool `[`IsMapSet`](#structFRHAPI__AuditEvent_1abde78ff0c14f2822e4a94a7677b1c2f8)`() const` <a id="structFRHAPI__AuditEvent_1abde78ff0c14f2822e4a94a7677b1c2f8"></a>

Checks whether Map_Optional has been set.

#### `public inline FString & `[`GetMode`](#structFRHAPI__AuditEvent_1adcf28618d9c36a083ab5c1a3df2874b0)`()` <a id="structFRHAPI__AuditEvent_1adcf28618d9c36a083ab5c1a3df2874b0"></a>

Gets the value of Mode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMode`](#structFRHAPI__AuditEvent_1a8f59d78222ce45cf9221eed98e8f0c67)`() const` <a id="structFRHAPI__AuditEvent_1a8f59d78222ce45cf9221eed98e8f0c67"></a>

Gets the value of Mode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMode`](#structFRHAPI__AuditEvent_1a51f7fa2042e7984522a5b7d06330e637)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a51f7fa2042e7984522a5b7d06330e637"></a>

Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMode`](#structFRHAPI__AuditEvent_1a3d2d06cc48d5c42680fde1952dacf915)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1a3d2d06cc48d5c42680fde1952dacf915"></a>

Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetModeOrNull`](#structFRHAPI__AuditEvent_1ac8ad52f0c48e256f0a7bcaa389093f58)`()` <a id="structFRHAPI__AuditEvent_1ac8ad52f0c48e256f0a7bcaa389093f58"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetModeOrNull`](#structFRHAPI__AuditEvent_1acbce7e7f278e5d197afdb137fb2e7523)`() const` <a id="structFRHAPI__AuditEvent_1acbce7e7f278e5d197afdb137fb2e7523"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMode`](#structFRHAPI__AuditEvent_1acdf423879d2e7c7dd44ad22aa8207c68)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1acdf423879d2e7c7dd44ad22aa8207c68"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true.

#### `public inline void `[`SetMode`](#structFRHAPI__AuditEvent_1a648c4e548da4da4383dce888df33752b)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a648c4e548da4da4383dce888df33752b"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true using move semantics.

#### `public inline void `[`ClearMode`](#structFRHAPI__AuditEvent_1a9ba2ddca1885eb21298dbb4b623759f8)`()` <a id="structFRHAPI__AuditEvent_1a9ba2ddca1885eb21298dbb4b623759f8"></a>

Clears the value of Mode_Optional and sets Mode_IsSet to false.

#### `public inline bool `[`IsModeSet`](#structFRHAPI__AuditEvent_1ab0ee7f51d48c7152d659dfa1eb26533d)`() const` <a id="structFRHAPI__AuditEvent_1ab0ee7f51d48c7152d659dfa1eb26533d"></a>

Checks whether Mode_Optional has been set.

#### `public inline FString & `[`GetAllocationId`](#structFRHAPI__AuditEvent_1a00bbbc7432741772125a90b937d63cf5)`()` <a id="structFRHAPI__AuditEvent_1a00bbbc7432741772125a90b937d63cf5"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetAllocationId`](#structFRHAPI__AuditEvent_1a70e119b3131c908a10ca9f89ce233bc3)`() const` <a id="structFRHAPI__AuditEvent_1a70e119b3131c908a10ca9f89ce233bc3"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetAllocationId`](#structFRHAPI__AuditEvent_1a596c69a41a6a66bde6b84791ae838c68)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a596c69a41a6a66bde6b84791ae838c68"></a>

Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAllocationId`](#structFRHAPI__AuditEvent_1aca70562b5536641a9011b237a8747858)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1aca70562b5536641a9011b237a8747858"></a>

Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetAllocationIdOrNull`](#structFRHAPI__AuditEvent_1a9d7844f488e7ffce72d12bea8d4a085e)`()` <a id="structFRHAPI__AuditEvent_1a9d7844f488e7ffce72d12bea8d4a085e"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__AuditEvent_1afbb3c872129c4e3ff18a4764cd9d6068)`() const` <a id="structFRHAPI__AuditEvent_1afbb3c872129c4e3ff18a4764cd9d6068"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAllocationId`](#structFRHAPI__AuditEvent_1a26ff30d159006de17d5f4eb37737ecd5)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a26ff30d159006de17d5f4eb37737ecd5"></a>

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.

#### `public inline void `[`SetAllocationId`](#structFRHAPI__AuditEvent_1aa84df1132beaf5bb229a539f3dbb268d)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1aa84df1132beaf5bb229a539f3dbb268d"></a>

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true using move semantics.

#### `public inline void `[`ClearAllocationId`](#structFRHAPI__AuditEvent_1ab04e25609ffcf65ec41946fec4c51f80)`()` <a id="structFRHAPI__AuditEvent_1ab04e25609ffcf65ec41946fec4c51f80"></a>

Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.

#### `public inline bool `[`IsAllocationIdSet`](#structFRHAPI__AuditEvent_1a8688ecf4ec4beef7f70b1b8eccb4f6fd)`() const` <a id="structFRHAPI__AuditEvent_1a8688ecf4ec4beef7f70b1b8eccb4f6fd"></a>

Checks whether AllocationId_Optional has been set.

#### `public inline ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__AuditEvent_1abbc75d3173a17443d93ebbd9bf48062e)`()` <a id="structFRHAPI__AuditEvent_1abbc75d3173a17443d93ebbd9bf48062e"></a>

Gets the value of JoinStatus_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__AuditEvent_1a965269ec0582b1e0dd86ff1c80769385)`() const` <a id="structFRHAPI__AuditEvent_1a965269ec0582b1e0dd86ff1c80769385"></a>

Gets the value of JoinStatus_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__AuditEvent_1afcefdd3e1390ba511c7d5be3b85bc74a)`(const ERHAPI_InstanceJoinableStatus & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1afcefdd3e1390ba511c7d5be3b85bc74a"></a>

Gets the value of JoinStatus_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetJoinStatus`](#structFRHAPI__AuditEvent_1ad317d132732992d96bfa9c87769250d3)`(ERHAPI_InstanceJoinableStatus & OutValue) const` <a id="structFRHAPI__AuditEvent_1ad317d132732992d96bfa9c87769250d3"></a>

Fills OutValue with the value of JoinStatus_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__AuditEvent_1aedfd3be86f904cd0be02a09d8e1613b4)`()` <a id="structFRHAPI__AuditEvent_1aedfd3be86f904cd0be02a09d8e1613b4"></a>

Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__AuditEvent_1aed404f974e065db380252ab021f70e51)`() const` <a id="structFRHAPI__AuditEvent_1aed404f974e065db380252ab021f70e51"></a>

Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetJoinStatus`](#structFRHAPI__AuditEvent_1a9ad57b57c4338b2f4f43581d2e7ca6d6)`(const ERHAPI_InstanceJoinableStatus & NewValue)` <a id="structFRHAPI__AuditEvent_1a9ad57b57c4338b2f4f43581d2e7ca6d6"></a>

Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true.

#### `public inline void `[`SetJoinStatus`](#structFRHAPI__AuditEvent_1a5490ddb4893256915a7ec8a49e0ce454)`(ERHAPI_InstanceJoinableStatus && NewValue)` <a id="structFRHAPI__AuditEvent_1a5490ddb4893256915a7ec8a49e0ce454"></a>

Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinStatus`](#structFRHAPI__AuditEvent_1aa2055e3edb743366349cb596e48c6dc9)`()` <a id="structFRHAPI__AuditEvent_1aa2055e3edb743366349cb596e48c6dc9"></a>

Clears the value of JoinStatus_Optional and sets JoinStatus_IsSet to false.

#### `public inline bool `[`IsJoinStatusSet`](#structFRHAPI__AuditEvent_1ae5bce6fbd66439f134728541c4c8c429)`() const` <a id="structFRHAPI__AuditEvent_1ae5bce6fbd66439f134728541c4c8c429"></a>

Checks whether JoinStatus_Optional has been set.

#### `public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__AuditEvent_1adef84f50fef0c37d28c1ed39818b24d8)`()` <a id="structFRHAPI__AuditEvent_1adef84f50fef0c37d28c1ed39818b24d8"></a>

Gets the value of JoinParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__AuditEvent_1af43f80174834843587dabc2949c5eacb)`() const` <a id="structFRHAPI__AuditEvent_1af43f80174834843587dabc2949c5eacb"></a>

Gets the value of JoinParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__AuditEvent_1a607cdeb54df5e5bf8a7f2e6fc8480ac9)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a607cdeb54df5e5bf8a7f2e6fc8480ac9"></a>

Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetJoinParams`](#structFRHAPI__AuditEvent_1a65fc71a298fad25ea455a43649d890bf)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & OutValue) const` <a id="structFRHAPI__AuditEvent_1a65fc71a298fad25ea455a43649d890bf"></a>

Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__AuditEvent_1a15b5d1aa3ec2fde0147eccbddcbb0364)`()` <a id="structFRHAPI__AuditEvent_1a15b5d1aa3ec2fde0147eccbddcbb0364"></a>

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__AuditEvent_1a0f76389308bc770fb8beb74415eb1f21)`() const` <a id="structFRHAPI__AuditEvent_1a0f76389308bc770fb8beb74415eb1f21"></a>

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetJoinParams`](#structFRHAPI__AuditEvent_1af8a036b78938df2363a5297dd9b79703)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & NewValue)` <a id="structFRHAPI__AuditEvent_1af8a036b78938df2363a5297dd9b79703"></a>

Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.

#### `public inline void `[`SetJoinParams`](#structFRHAPI__AuditEvent_1a7b9b2b722b6cd7a68a7aa747f7c438d0)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` && NewValue)` <a id="structFRHAPI__AuditEvent_1a7b9b2b722b6cd7a68a7aa747f7c438d0"></a>

Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinParams`](#structFRHAPI__AuditEvent_1a4c60bb357f152966a362b08045e787be)`()` <a id="structFRHAPI__AuditEvent_1a4c60bb357f152966a362b08045e787be"></a>

Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.

#### `public inline bool `[`IsJoinParamsSet`](#structFRHAPI__AuditEvent_1ab2d765ade9bb9866bd5ad7d575e78b81)`() const` <a id="structFRHAPI__AuditEvent_1ab2d765ade9bb9866bd5ad7d575e78b81"></a>

Checks whether JoinParams_Optional has been set.

#### `public inline ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__AuditEvent_1a0852c52893dc3099a0dc91d52adc609e)`()` <a id="structFRHAPI__AuditEvent_1a0852c52893dc3099a0dc91d52adc609e"></a>

Gets the value of InstanceHealth_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__AuditEvent_1ac0e00692e62131d9e1f07a7d87812ed3)`() const` <a id="structFRHAPI__AuditEvent_1ac0e00692e62131d9e1f07a7d87812ed3"></a>

Gets the value of InstanceHealth_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__AuditEvent_1abe695ac68030fdcf8a81ef1c6c78550e)`(const ERHAPI_InstanceHealthStatus & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1abe695ac68030fdcf8a81ef1c6c78550e"></a>

Gets the value of InstanceHealth_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceHealth`](#structFRHAPI__AuditEvent_1adb0bc9aab3afcdcffd3ac2ed21dd6380)`(ERHAPI_InstanceHealthStatus & OutValue) const` <a id="structFRHAPI__AuditEvent_1adb0bc9aab3afcdcffd3ac2ed21dd6380"></a>

Fills OutValue with the value of InstanceHealth_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__AuditEvent_1aa17ce5aed4d637d5fe5d4fc666eea672)`()` <a id="structFRHAPI__AuditEvent_1aa17ce5aed4d637d5fe5d4fc666eea672"></a>

Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__AuditEvent_1abdcd0a2f5513398719b8b47b3eeed0e2)`() const` <a id="structFRHAPI__AuditEvent_1abdcd0a2f5513398719b8b47b3eeed0e2"></a>

Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceHealth`](#structFRHAPI__AuditEvent_1a16e475ad1256789f7bf0a16d21f38c75)`(const ERHAPI_InstanceHealthStatus & NewValue)` <a id="structFRHAPI__AuditEvent_1a16e475ad1256789f7bf0a16d21f38c75"></a>

Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true.

#### `public inline void `[`SetInstanceHealth`](#structFRHAPI__AuditEvent_1a6f54c0cafe05dfa7a852d378988022dc)`(ERHAPI_InstanceHealthStatus && NewValue)` <a id="structFRHAPI__AuditEvent_1a6f54c0cafe05dfa7a852d378988022dc"></a>

Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceHealth`](#structFRHAPI__AuditEvent_1af8b4b7b6a59f3d4bb4ba9529dc729d7c)`()` <a id="structFRHAPI__AuditEvent_1af8b4b7b6a59f3d4bb4ba9529dc729d7c"></a>

Clears the value of InstanceHealth_Optional and sets InstanceHealth_IsSet to false.

#### `public inline bool `[`IsInstanceHealthSet`](#structFRHAPI__AuditEvent_1ae94e17ff4a1dd18d84cacda3accc4ce0)`() const` <a id="structFRHAPI__AuditEvent_1ae94e17ff4a1dd18d84cacda3accc4ce0"></a>

Checks whether InstanceHealth_Optional has been set.

#### `public inline FString & `[`GetQueueId`](#structFRHAPI__AuditEvent_1a97868618be09228a8b6bd5627b6ddabd)`()` <a id="structFRHAPI__AuditEvent_1a97868618be09228a8b6bd5627b6ddabd"></a>

Gets the value of QueueId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetQueueId`](#structFRHAPI__AuditEvent_1ac6b16b2e3b99db103cbf07d596186f8d)`() const` <a id="structFRHAPI__AuditEvent_1ac6b16b2e3b99db103cbf07d596186f8d"></a>

Gets the value of QueueId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetQueueId`](#structFRHAPI__AuditEvent_1a4009eb225a078a626b549d4722ba4c4c)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a4009eb225a078a626b549d4722ba4c4c"></a>

Gets the value of QueueId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetQueueId`](#structFRHAPI__AuditEvent_1ad4f3eafb9ca60cef0f70d162bedeefef)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1ad4f3eafb9ca60cef0f70d162bedeefef"></a>

Fills OutValue with the value of QueueId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetQueueIdOrNull`](#structFRHAPI__AuditEvent_1a6af11b01f0f4d0d116fa72869dae2538)`()` <a id="structFRHAPI__AuditEvent_1a6af11b01f0f4d0d116fa72869dae2538"></a>

Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetQueueIdOrNull`](#structFRHAPI__AuditEvent_1aca1c806e592ba4111ea7ae1861198f6b)`() const` <a id="structFRHAPI__AuditEvent_1aca1c806e592ba4111ea7ae1861198f6b"></a>

Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetQueueId`](#structFRHAPI__AuditEvent_1a92e54b59fe88672a6e0515e0aab8a53c)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a92e54b59fe88672a6e0515e0aab8a53c"></a>

Sets the value of QueueId_Optional and also sets QueueId_IsSet to true.

#### `public inline void `[`SetQueueId`](#structFRHAPI__AuditEvent_1ac0c803793dfbb5cd36a5570b964bc116)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1ac0c803793dfbb5cd36a5570b964bc116"></a>

Sets the value of QueueId_Optional and also sets QueueId_IsSet to true using move semantics.

#### `public inline void `[`ClearQueueId`](#structFRHAPI__AuditEvent_1a905562c31a2b45c0ade8bcfe9e0cbfdf)`()` <a id="structFRHAPI__AuditEvent_1a905562c31a2b45c0ade8bcfe9e0cbfdf"></a>

Clears the value of QueueId_Optional and sets QueueId_IsSet to false.

#### `public inline bool `[`IsQueueIdSet`](#structFRHAPI__AuditEvent_1a75ba5ab01b9afe2f1701b68116937fd9)`() const` <a id="structFRHAPI__AuditEvent_1a75ba5ab01b9afe2f1701b68116937fd9"></a>

Checks whether QueueId_Optional has been set.

#### `public inline FString & `[`GetTicketId`](#structFRHAPI__AuditEvent_1ad29445385e8bc89961152e07fbcaf951)`()` <a id="structFRHAPI__AuditEvent_1ad29445385e8bc89961152e07fbcaf951"></a>

Gets the value of TicketId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetTicketId`](#structFRHAPI__AuditEvent_1a2cba00dcd30ea914f9678d9d7fb53923)`() const` <a id="structFRHAPI__AuditEvent_1a2cba00dcd30ea914f9678d9d7fb53923"></a>

Gets the value of TicketId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetTicketId`](#structFRHAPI__AuditEvent_1a276dcaeab645409a8dd4eedef1fe4d22)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a276dcaeab645409a8dd4eedef1fe4d22"></a>

Gets the value of TicketId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTicketId`](#structFRHAPI__AuditEvent_1ab2163ec45ace1d5da478d9a43aeb7f88)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1ab2163ec45ace1d5da478d9a43aeb7f88"></a>

Fills OutValue with the value of TicketId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetTicketIdOrNull`](#structFRHAPI__AuditEvent_1a991daee78659a2c5ef46d7db511ec95e)`()` <a id="structFRHAPI__AuditEvent_1a991daee78659a2c5ef46d7db511ec95e"></a>

Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetTicketIdOrNull`](#structFRHAPI__AuditEvent_1a689ce7f5d7864bd2c432608541e2956f)`() const` <a id="structFRHAPI__AuditEvent_1a689ce7f5d7864bd2c432608541e2956f"></a>

Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTicketId`](#structFRHAPI__AuditEvent_1a0ad577a0200e4c8f3ec0dc23762a6095)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a0ad577a0200e4c8f3ec0dc23762a6095"></a>

Sets the value of TicketId_Optional and also sets TicketId_IsSet to true.

#### `public inline void `[`SetTicketId`](#structFRHAPI__AuditEvent_1a84b357130e96b5131419b7bf391d8a4e)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a84b357130e96b5131419b7bf391d8a4e"></a>

Sets the value of TicketId_Optional and also sets TicketId_IsSet to true using move semantics.

#### `public inline void `[`ClearTicketId`](#structFRHAPI__AuditEvent_1a3a95477a2909de1f2322a6dc33532dd5)`()` <a id="structFRHAPI__AuditEvent_1a3a95477a2909de1f2322a6dc33532dd5"></a>

Clears the value of TicketId_Optional and sets TicketId_IsSet to false.

#### `public inline bool `[`IsTicketIdSet`](#structFRHAPI__AuditEvent_1a1638925762966feb0bd5564fd523c694)`() const` <a id="structFRHAPI__AuditEvent_1a1638925762966feb0bd5564fd523c694"></a>

Checks whether TicketId_Optional has been set.

#### `public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__AuditEvent_1aec2674a2e1104f27399b472e16bdda9d)`()` <a id="structFRHAPI__AuditEvent_1aec2674a2e1104f27399b472e16bdda9d"></a>

Gets the value of AdditionalParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__AuditEvent_1ae59e688681b3f71750b703425f3ffacb)`() const` <a id="structFRHAPI__AuditEvent_1ae59e688681b3f71750b703425f3ffacb"></a>

Gets the value of AdditionalParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__AuditEvent_1a644054bad40b674c004e8eb69cd3caf5)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a644054bad40b674c004e8eb69cd3caf5"></a>

Gets the value of AdditionalParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAdditionalParams`](#structFRHAPI__AuditEvent_1ab3466dd7744e301ef79c215ccf45e1ca)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & OutValue) const` <a id="structFRHAPI__AuditEvent_1ab3466dd7744e301ef79c215ccf45e1ca"></a>

Fills OutValue with the value of AdditionalParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalParamsOrNull`](#structFRHAPI__AuditEvent_1ae7560ffac55842a93d2eaad3ff5cb94a)`()` <a id="structFRHAPI__AuditEvent_1ae7560ffac55842a93d2eaad3ff5cb94a"></a>

Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalParamsOrNull`](#structFRHAPI__AuditEvent_1accf2ad1e4695de06b0077a47e9cf4160)`() const` <a id="structFRHAPI__AuditEvent_1accf2ad1e4695de06b0077a47e9cf4160"></a>

Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAdditionalParams`](#structFRHAPI__AuditEvent_1a7c7a3b41818d9041f02d4f707d0c1b45)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & NewValue)` <a id="structFRHAPI__AuditEvent_1a7c7a3b41818d9041f02d4f707d0c1b45"></a>

Sets the value of AdditionalParams_Optional and also sets AdditionalParams_IsSet to true.

#### `public inline void `[`SetAdditionalParams`](#structFRHAPI__AuditEvent_1a8e8fd0b1aecfd5302d00f1c16f1a324f)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` && NewValue)` <a id="structFRHAPI__AuditEvent_1a8e8fd0b1aecfd5302d00f1c16f1a324f"></a>

Sets the value of AdditionalParams_Optional and also sets AdditionalParams_IsSet to true using move semantics.

#### `public inline void `[`ClearAdditionalParams`](#structFRHAPI__AuditEvent_1a576652cb7ff7d291a1235fe1116724c4)`()` <a id="structFRHAPI__AuditEvent_1a576652cb7ff7d291a1235fe1116724c4"></a>

Clears the value of AdditionalParams_Optional and sets AdditionalParams_IsSet to false.

#### `public inline bool `[`IsAdditionalParamsSet`](#structFRHAPI__AuditEvent_1a92e5f486e956608fb0dda188d73e003a)`() const` <a id="structFRHAPI__AuditEvent_1a92e5f486e956608fb0dda188d73e003a"></a>

Checks whether AdditionalParams_Optional has been set.

#### `public inline TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__AuditEvent_1ae253594ea26f6224ff14ff4a543222d1)`()` <a id="structFRHAPI__AuditEvent_1ae253594ea26f6224ff14ff4a543222d1"></a>

Gets the value of MapPreferences_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__AuditEvent_1af3e608a29918c34a316386164f4f1f2f)`() const` <a id="structFRHAPI__AuditEvent_1af3e608a29918c34a316386164f4f1f2f"></a>

Gets the value of MapPreferences_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__AuditEvent_1a24af7249f980c81c95299051a73e7e99)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a24af7249f980c81c95299051a73e7e99"></a>

Gets the value of MapPreferences_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMapPreferences`](#structFRHAPI__AuditEvent_1af5102a96c848850e87d52973a585d314)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__AuditEvent_1af5102a96c848850e87d52973a585d314"></a>

Fills OutValue with the value of MapPreferences_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__AuditEvent_1adbcbd1ac91053fccacd67a20fab02867)`()` <a id="structFRHAPI__AuditEvent_1adbcbd1ac91053fccacd67a20fab02867"></a>

Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__AuditEvent_1aec5b5c80ad0a295678113321f7d38cd5)`() const` <a id="structFRHAPI__AuditEvent_1aec5b5c80ad0a295678113321f7d38cd5"></a>

Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMapPreferences`](#structFRHAPI__AuditEvent_1ac9fb953163a95ff99ea2ef834d19253f)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__AuditEvent_1ac9fb953163a95ff99ea2ef834d19253f"></a>

Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true.

#### `public inline void `[`SetMapPreferences`](#structFRHAPI__AuditEvent_1a56f8ae31a8695e7531e9eb1d68dbfd76)`(TArray< FString > && NewValue)` <a id="structFRHAPI__AuditEvent_1a56f8ae31a8695e7531e9eb1d68dbfd76"></a>

Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true using move semantics.

#### `public inline void `[`ClearMapPreferences`](#structFRHAPI__AuditEvent_1a33c453410167253e097ed36c2ee93f44)`()` <a id="structFRHAPI__AuditEvent_1a33c453410167253e097ed36c2ee93f44"></a>

Clears the value of MapPreferences_Optional and sets MapPreferences_IsSet to false.

#### `public inline bool `[`IsMapPreferencesSet`](#structFRHAPI__AuditEvent_1acfab0741719944600d85244c327c84d7)`() const` <a id="structFRHAPI__AuditEvent_1acfab0741719944600d85244c327c84d7"></a>

Checks whether MapPreferences_Optional has been set.

#### `public inline FString & `[`GetQueuedSessionId`](#structFRHAPI__AuditEvent_1a2bb30770b33c914dfdc26e7fb7369b85)`()` <a id="structFRHAPI__AuditEvent_1a2bb30770b33c914dfdc26e7fb7369b85"></a>

Gets the value of QueuedSessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetQueuedSessionId`](#structFRHAPI__AuditEvent_1aa157884bfbb74ba7dba3d387f468e6d7)`() const` <a id="structFRHAPI__AuditEvent_1aa157884bfbb74ba7dba3d387f468e6d7"></a>

Gets the value of QueuedSessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetQueuedSessionId`](#structFRHAPI__AuditEvent_1af59530ef11ac381c9f47da3ff3f94ad6)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1af59530ef11ac381c9f47da3ff3f94ad6"></a>

Gets the value of QueuedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetQueuedSessionId`](#structFRHAPI__AuditEvent_1aafda7af949c96b72808c666d0cbd29e3)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1aafda7af949c96b72808c666d0cbd29e3"></a>

Fills OutValue with the value of QueuedSessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__AuditEvent_1a2e34402e66eab8cfa933e9712ea25a0a)`()` <a id="structFRHAPI__AuditEvent_1a2e34402e66eab8cfa933e9712ea25a0a"></a>

Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__AuditEvent_1a2e4c444305cc7a19e5b2d2ea76da2df6)`() const` <a id="structFRHAPI__AuditEvent_1a2e4c444305cc7a19e5b2d2ea76da2df6"></a>

Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetQueuedSessionId`](#structFRHAPI__AuditEvent_1ae9e67b72fec1cc3b3677be8d0fd19777)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1ae9e67b72fec1cc3b3677be8d0fd19777"></a>

Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true.

#### `public inline void `[`SetQueuedSessionId`](#structFRHAPI__AuditEvent_1a8ac88751a9d572b7c34c42542563e620)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a8ac88751a9d572b7c34c42542563e620"></a>

Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearQueuedSessionId`](#structFRHAPI__AuditEvent_1aba3557a10d63a3d8efba7904f34c1c92)`()` <a id="structFRHAPI__AuditEvent_1aba3557a10d63a3d8efba7904f34c1c92"></a>

Clears the value of QueuedSessionId_Optional and sets QueuedSessionId_IsSet to false.

#### `public inline bool `[`IsQueuedSessionIdSet`](#structFRHAPI__AuditEvent_1a363ffaafb8457ba77084ba3c813808b1)`() const` <a id="structFRHAPI__AuditEvent_1a363ffaafb8457ba77084ba3c813808b1"></a>

Checks whether QueuedSessionId_Optional has been set.

#### `public inline FString & `[`GetMatchId`](#structFRHAPI__AuditEvent_1a7e3f44d3ff3560cf41d0d1ceff40ef25)`()` <a id="structFRHAPI__AuditEvent_1a7e3f44d3ff3560cf41d0d1ceff40ef25"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__AuditEvent_1a8cd688b4e46b27904306740805be5f53)`() const` <a id="structFRHAPI__AuditEvent_1a8cd688b4e46b27904306740805be5f53"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__AuditEvent_1aa1dc84fc44a16f477882d66d5bbc9d5a)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1aa1dc84fc44a16f477882d66d5bbc9d5a"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchId`](#structFRHAPI__AuditEvent_1a7b6ded106eedb8fb15d3358e89dfd405)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1a7b6ded106eedb8fb15d3358e89dfd405"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__AuditEvent_1af4109dc4f4c954d1f9d298a7644864d1)`()` <a id="structFRHAPI__AuditEvent_1af4109dc4f4c954d1f9d298a7644864d1"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__AuditEvent_1abddafcd4cf71b091e7bb67744679cac7)`() const` <a id="structFRHAPI__AuditEvent_1abddafcd4cf71b091e7bb67744679cac7"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchId`](#structFRHAPI__AuditEvent_1a3153129f6b5b0d0b6eb327fe17612222)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a3153129f6b5b0d0b6eb327fe17612222"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline void `[`SetMatchId`](#structFRHAPI__AuditEvent_1a1391a972d06c5729368c556d4071d865)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a1391a972d06c5729368c556d4071d865"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__AuditEvent_1abd7aede0da0d4e281062c95871342c64)`()` <a id="structFRHAPI__AuditEvent_1abd7aede0da0d4e281062c95871342c64"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline bool `[`IsMatchIdSet`](#structFRHAPI__AuditEvent_1acf38bcadf9e3d05e939c9477bbfb9473)`() const` <a id="structFRHAPI__AuditEvent_1acf38bcadf9e3d05e939c9477bbfb9473"></a>

Checks whether MatchId_Optional has been set.

#### `public inline int32 & `[`GetTicketWaitSeconds`](#structFRHAPI__AuditEvent_1ad3d33b518432acdf4b99bff7df4978e4)`()` <a id="structFRHAPI__AuditEvent_1ad3d33b518432acdf4b99bff7df4978e4"></a>

Gets the value of TicketWaitSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTicketWaitSeconds`](#structFRHAPI__AuditEvent_1a486e5e758d34b39767a58ead73c31438)`() const` <a id="structFRHAPI__AuditEvent_1a486e5e758d34b39767a58ead73c31438"></a>

Gets the value of TicketWaitSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTicketWaitSeconds`](#structFRHAPI__AuditEvent_1abf560aec3fee3de593e17b623fcb92b5)`(const int32 & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1abf560aec3fee3de593e17b623fcb92b5"></a>

Gets the value of TicketWaitSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTicketWaitSeconds`](#structFRHAPI__AuditEvent_1a54d18a2c205dd02d1d9c122c31f06ba0)`(int32 & OutValue) const` <a id="structFRHAPI__AuditEvent_1a54d18a2c205dd02d1d9c122c31f06ba0"></a>

Fills OutValue with the value of TicketWaitSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetTicketWaitSecondsOrNull`](#structFRHAPI__AuditEvent_1a4bc693f393a509b00819116e304e4ff5)`()` <a id="structFRHAPI__AuditEvent_1a4bc693f393a509b00819116e304e4ff5"></a>

Returns a pointer to TicketWaitSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetTicketWaitSecondsOrNull`](#structFRHAPI__AuditEvent_1a0061f53a2454f57ed062e6deb4e6794a)`() const` <a id="structFRHAPI__AuditEvent_1a0061f53a2454f57ed062e6deb4e6794a"></a>

Returns a pointer to TicketWaitSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTicketWaitSeconds`](#structFRHAPI__AuditEvent_1aa02be7d3ae4c882aa7656d31c19eff8c)`(const int32 & NewValue)` <a id="structFRHAPI__AuditEvent_1aa02be7d3ae4c882aa7656d31c19eff8c"></a>

Sets the value of TicketWaitSeconds_Optional and also sets TicketWaitSeconds_IsSet to true.

#### `public inline void `[`SetTicketWaitSeconds`](#structFRHAPI__AuditEvent_1ab63f8680973b2905c3218cfbe66c1367)`(int32 && NewValue)` <a id="structFRHAPI__AuditEvent_1ab63f8680973b2905c3218cfbe66c1367"></a>

Sets the value of TicketWaitSeconds_Optional and also sets TicketWaitSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearTicketWaitSeconds`](#structFRHAPI__AuditEvent_1a3af20dcc3e27f27208426a7fea762903)`()` <a id="structFRHAPI__AuditEvent_1a3af20dcc3e27f27208426a7fea762903"></a>

Clears the value of TicketWaitSeconds_Optional and sets TicketWaitSeconds_IsSet to false.

#### `public inline bool `[`IsTicketWaitSecondsSet`](#structFRHAPI__AuditEvent_1a02ab5fa4ddae185a3d6cf7dfa11a1820)`() const` <a id="structFRHAPI__AuditEvent_1a02ab5fa4ddae185a3d6cf7dfa11a1820"></a>

Checks whether TicketWaitSeconds_Optional has been set.

#### `public inline bool `[`IsTicketWaitSecondsDefaultValue`](#structFRHAPI__AuditEvent_1addf11ae30eb6bef1716cf792b7cab53c)`() const` <a id="structFRHAPI__AuditEvent_1addf11ae30eb6bef1716cf792b7cab53c"></a>

Returns true if TicketWaitSeconds_Optional is set and matches the default value.

#### `public inline void `[`SetTicketWaitSecondsToDefault`](#structFRHAPI__AuditEvent_1a9b771ccbad80ad6561e55a1c7a9face2)`()` <a id="structFRHAPI__AuditEvent_1a9b771ccbad80ad6561e55a1c7a9face2"></a>

Sets the value of TicketWaitSeconds_Optional to its default and also sets TicketWaitSeconds_IsSet to true.

#### `public inline FString & `[`GetMatchMakingProfileId`](#structFRHAPI__AuditEvent_1aafeacede13da3a0fae86b9499c2fbdd1)`()` <a id="structFRHAPI__AuditEvent_1aafeacede13da3a0fae86b9499c2fbdd1"></a>

Gets the value of MatchMakingProfileId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__AuditEvent_1a8f1d7eccc2692b594fe27740dedf2472)`() const` <a id="structFRHAPI__AuditEvent_1a8f1d7eccc2692b594fe27740dedf2472"></a>

Gets the value of MatchMakingProfileId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__AuditEvent_1a2450dea9d9aaa0f54dc9731216da6956)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a2450dea9d9aaa0f54dc9731216da6956"></a>

Gets the value of MatchMakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchMakingProfileId`](#structFRHAPI__AuditEvent_1a8d64d14b8a49cd3d54569edc92df2904)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1a8d64d14b8a49cd3d54569edc92df2904"></a>

Fills OutValue with the value of MatchMakingProfileId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchMakingProfileIdOrNull`](#structFRHAPI__AuditEvent_1aaf9a207f7df898003360655b24f4cf99)`()` <a id="structFRHAPI__AuditEvent_1aaf9a207f7df898003360655b24f4cf99"></a>

Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchMakingProfileIdOrNull`](#structFRHAPI__AuditEvent_1af8f68c0b847ed31f9ac3f106d117f775)`() const` <a id="structFRHAPI__AuditEvent_1af8f68c0b847ed31f9ac3f106d117f775"></a>

Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchMakingProfileId`](#structFRHAPI__AuditEvent_1ad8db2f347cb96ee609b4dd572f10f9ee)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1ad8db2f347cb96ee609b4dd572f10f9ee"></a>

Sets the value of MatchMakingProfileId_Optional and also sets MatchMakingProfileId_IsSet to true.

#### `public inline void `[`SetMatchMakingProfileId`](#structFRHAPI__AuditEvent_1a240b6ed82f00ff4e8bec365140ee9905)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a240b6ed82f00ff4e8bec365140ee9905"></a>

Sets the value of MatchMakingProfileId_Optional and also sets MatchMakingProfileId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchMakingProfileId`](#structFRHAPI__AuditEvent_1aa7bfe9b037f73477af70134787142759)`()` <a id="structFRHAPI__AuditEvent_1aa7bfe9b037f73477af70134787142759"></a>

Clears the value of MatchMakingProfileId_Optional and sets MatchMakingProfileId_IsSet to false.

#### `public inline bool `[`IsMatchMakingProfileIdSet`](#structFRHAPI__AuditEvent_1a72f0bbaa28dacd3ef71ed18ddfd951f4)`() const` <a id="structFRHAPI__AuditEvent_1a72f0bbaa28dacd3ef71ed18ddfd951f4"></a>

Checks whether MatchMakingProfileId_Optional has been set.

#### `public inline FGuid & `[`GetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a609df074a0871796fe29aef9dbcbe1fa)`()` <a id="structFRHAPI__AuditEvent_1a609df074a0871796fe29aef9dbcbe1fa"></a>

Gets the value of RequestingUserUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a969bfc23d39269e7c1dc7c5fe59d458e)`() const` <a id="structFRHAPI__AuditEvent_1a969bfc23d39269e7c1dc7c5fe59d458e"></a>

Gets the value of RequestingUserUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a1af550c49bda3db684b4fdbe88865058)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a1af550c49bda3db684b4fdbe88865058"></a>

Gets the value of RequestingUserUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a2b54f7415fc9c2b73f037a6be257f393)`(FGuid & OutValue) const` <a id="structFRHAPI__AuditEvent_1a2b54f7415fc9c2b73f037a6be257f393"></a>

Fills OutValue with the value of RequestingUserUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetRequestingUserUuidOrNull`](#structFRHAPI__AuditEvent_1a8b224e01142ab731febfc7df3d5bd3af)`()` <a id="structFRHAPI__AuditEvent_1a8b224e01142ab731febfc7df3d5bd3af"></a>

Returns a pointer to RequestingUserUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetRequestingUserUuidOrNull`](#structFRHAPI__AuditEvent_1a395a9b87a2f363ef408aff0ece9b6c09)`() const` <a id="structFRHAPI__AuditEvent_1a395a9b87a2f363ef408aff0ece9b6c09"></a>

Returns a pointer to RequestingUserUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a2c40640e2af1be4c876c2d8e8ac0de34)`(const FGuid & NewValue)` <a id="structFRHAPI__AuditEvent_1a2c40640e2af1be4c876c2d8e8ac0de34"></a>

Sets the value of RequestingUserUuid_Optional and also sets RequestingUserUuid_IsSet to true.

#### `public inline void `[`SetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a72846483bb51daa209b4c862b7096e11)`(FGuid && NewValue)` <a id="structFRHAPI__AuditEvent_1a72846483bb51daa209b4c862b7096e11"></a>

Sets the value of RequestingUserUuid_Optional and also sets RequestingUserUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearRequestingUserUuid`](#structFRHAPI__AuditEvent_1a75d20856ad2d8cccdcf2157a1238c0c1)`()` <a id="structFRHAPI__AuditEvent_1a75d20856ad2d8cccdcf2157a1238c0c1"></a>

Clears the value of RequestingUserUuid_Optional and sets RequestingUserUuid_IsSet to false.

#### `public inline bool `[`IsRequestingUserUuidSet`](#structFRHAPI__AuditEvent_1ad62bfca13adf09b1ad8915ceb2c20d84)`() const` <a id="structFRHAPI__AuditEvent_1ad62bfca13adf09b1ad8915ceb2c20d84"></a>

Checks whether RequestingUserUuid_Optional has been set.

#### `public inline FDateTime & `[`GetEventDatetime`](#structFRHAPI__AuditEvent_1a3fdbb61c6b4d8c7182a1d0e4400b4d06)`()` <a id="structFRHAPI__AuditEvent_1a3fdbb61c6b4d8c7182a1d0e4400b4d06"></a>

Gets the value of EventDatetime.

#### `public inline const FDateTime & `[`GetEventDatetime`](#structFRHAPI__AuditEvent_1a4a8bb05a3e3263b71f7c71f91b198d52)`() const` <a id="structFRHAPI__AuditEvent_1a4a8bb05a3e3263b71f7c71f91b198d52"></a>

Gets the value of EventDatetime.

#### `public inline void `[`SetEventDatetime`](#structFRHAPI__AuditEvent_1ad4e8f68d0b4064c703124dba80dbfb87)`(const FDateTime & NewValue)` <a id="structFRHAPI__AuditEvent_1ad4e8f68d0b4064c703124dba80dbfb87"></a>

Sets the value of EventDatetime.

#### `public inline void `[`SetEventDatetime`](#structFRHAPI__AuditEvent_1a8738833f39eb52d322a8b43157aca869)`(FDateTime && NewValue)` <a id="structFRHAPI__AuditEvent_1a8738833f39eb52d322a8b43157aca869"></a>

Sets the value of EventDatetime using move semantics.

