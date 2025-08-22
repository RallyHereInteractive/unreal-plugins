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
`public inline FORCEINLINE FString & `[`GetEventName`](#structFRHAPI__AuditEvent_1a42518679fcb1f9f4a30c3768c315db8a)`()` | Gets the value of EventName.
`public inline FORCEINLINE const FString & `[`GetEventName`](#structFRHAPI__AuditEvent_1ae70f19a75f9f4beb2b3408e5ca7cf4f1)`() const` | Gets the value of EventName.
`public inline FORCEINLINE void `[`SetEventName`](#structFRHAPI__AuditEvent_1adb97837b39bf09231f3a63c1e93248dc)`(const FString & NewValue)` | Sets the value of EventName.
`public inline FORCEINLINE void `[`SetEventName`](#structFRHAPI__AuditEvent_1aeffd6494d1bca72fdda6f6de4d1eae51)`(FString && NewValue)` | Sets the value of EventName using move semantics.
`public inline FORCEINLINE FString & `[`GetSessionId`](#structFRHAPI__AuditEvent_1aa159347d72eae2f4c806d577cae72fb2)`()` | Gets the value of SessionId.
`public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__AuditEvent_1a620c20a4dea07988c3983f7cb7678ff6)`() const` | Gets the value of SessionId.
`public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__AuditEvent_1acc26f919f5ca9499a117c557f1ee2647)`(const FString & NewValue)` | Sets the value of SessionId.
`public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__AuditEvent_1aac29a4b85c2a907e397e4d151ce975c6)`(FString && NewValue)` | Sets the value of SessionId using move semantics.
`public inline FORCEINLINE FString & `[`GetReason`](#structFRHAPI__AuditEvent_1ae5b3a95f9d0ad09c011cbac4e1701d56)`()` | Gets the value of Reason_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetReason`](#structFRHAPI__AuditEvent_1a0e0b368e8e2c704f5a01945bfbd2e69e)`() const` | Gets the value of Reason_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetReason`](#structFRHAPI__AuditEvent_1aa64c931820a890e1652b6849edb8ca7f)`(const FString & DefaultValue) const` | Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetReason`](#structFRHAPI__AuditEvent_1a56b781112e4f50edcf31b3c3112f20da)`(FString & OutValue) const` | Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetReasonOrNull`](#structFRHAPI__AuditEvent_1a181ab560459b5c5fd0c940e37203ab7f)`()` | Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetReasonOrNull`](#structFRHAPI__AuditEvent_1af435bcf1600bebfad30911d2d742f219)`() const` | Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__AuditEvent_1acd0df6eb344f62b8265cb88e22ff55a6)`(const FString & NewValue)` | Sets the value of Reason_Optional and also sets Reason_IsSet to true.
`public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__AuditEvent_1a9a718771667bc99fbf0b78f045297ab4)`(FString && NewValue)` | Sets the value of Reason_Optional and also sets Reason_IsSet to true using move semantics.
`public inline void `[`ClearReason`](#structFRHAPI__AuditEvent_1a5b5a895bd7fe668e8295807cbf9c75c7)`()` | Clears the value of Reason_Optional and sets Reason_IsSet to false.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__AuditEvent_1aab8f5bcbc036caa7808912f5e3981f2d)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__AuditEvent_1ad362f453b9b4c99eb9b27b8c8d68f75c)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__AuditEvent_1adc0bef00c52c09ef7d1cc37bc00ccb86)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__AuditEvent_1ad7fa83bd7a29f16e5f47456b7dedc400)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__AuditEvent_1ab9daf937464d0a77df948bc701195433)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__AuditEvent_1adbc978e4a8a07292870348662282e6b1)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__AuditEvent_1a8c79cd691b35bc3a32df57cecd6891e9)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__AuditEvent_1a562650f0546b9e3266308d26a42019e9)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__AuditEvent_1a5aaffe4f1be621a24ef6a07d08271ff7)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE FString & `[`GetSessionType`](#structFRHAPI__AuditEvent_1a2f1344e5d9bc5511100d9558586d34c4)`()` | Gets the value of SessionType_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetSessionType`](#structFRHAPI__AuditEvent_1afa4799998256c6e31019694478b9c922)`() const` | Gets the value of SessionType_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetSessionType`](#structFRHAPI__AuditEvent_1aa85a5612edd57ce3cd660b33767bdaee)`(const FString & DefaultValue) const` | Gets the value of SessionType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSessionType`](#structFRHAPI__AuditEvent_1aac0e8957716f612c396bcd3af47acec0)`(FString & OutValue) const` | Fills OutValue with the value of SessionType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetSessionTypeOrNull`](#structFRHAPI__AuditEvent_1a50c9ae7546776dd63a2f1c0d253a5cd6)`()` | Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetSessionTypeOrNull`](#structFRHAPI__AuditEvent_1a05047f0656feacd012cc639a10889971)`() const` | Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSessionType`](#structFRHAPI__AuditEvent_1a4fe7e8cea70017a4e6f3fa78a723caaf)`(const FString & NewValue)` | Sets the value of SessionType_Optional and also sets SessionType_IsSet to true.
`public inline FORCEINLINE void `[`SetSessionType`](#structFRHAPI__AuditEvent_1ab414be50e7b97cc18185876726e347d4)`(FString && NewValue)` | Sets the value of SessionType_Optional and also sets SessionType_IsSet to true using move semantics.
`public inline void `[`ClearSessionType`](#structFRHAPI__AuditEvent_1af485efac1a25386828b114dfc87b5e77)`()` | Clears the value of SessionType_Optional and sets SessionType_IsSet to false.
`public inline FORCEINLINE FString & `[`GetRegionId`](#structFRHAPI__AuditEvent_1ab2188b12862eada7fdfea221e01f2c76)`()` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__AuditEvent_1ac0493413e9a1dc82365c24cd4fcd6532)`() const` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__AuditEvent_1a8f555daa1026a77e9b6e02c010b72dbb)`(const FString & DefaultValue) const` | Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRegionId`](#structFRHAPI__AuditEvent_1ab34c4b541f91e782461e1f056a3d323f)`(FString & OutValue) const` | Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRegionIdOrNull`](#structFRHAPI__AuditEvent_1a74845de9e84a5fa77951952054c86394)`()` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRegionIdOrNull`](#structFRHAPI__AuditEvent_1a902c59a4c5ac3ccfdc7c76e1bd724ffc)`() const` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__AuditEvent_1a6441d73cbd49b21f1d43f9698487e3e4)`(const FString & NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.
`public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__AuditEvent_1a40a79e1846c0468383f0be97b5490046)`(FString && NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.
`public inline void `[`ClearRegionId`](#structFRHAPI__AuditEvent_1ade77c1e5c1364d10ccfd19e9fa122dff)`()` | Clears the value of RegionId_Optional and sets RegionId_IsSet to false.
`public inline FORCEINLINE bool & `[`GetJoinable`](#structFRHAPI__AuditEvent_1a2841f8539972e0b7105ddfe2df8d3b54)`()` | Gets the value of Joinable_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetJoinable`](#structFRHAPI__AuditEvent_1ad5bf2a0f600d97886a9065eeaeb8c1f0)`() const` | Gets the value of Joinable_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetJoinable`](#structFRHAPI__AuditEvent_1af3f5b279bac5b318efbe5935dd54a79b)`(const bool & DefaultValue) const` | Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetJoinable`](#structFRHAPI__AuditEvent_1a2f8ad3030338e3c2836b85cc5ab892b7)`(bool & OutValue) const` | Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetJoinableOrNull`](#structFRHAPI__AuditEvent_1ab5cb91d1937f0d180719c2eb00230017)`()` | Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetJoinableOrNull`](#structFRHAPI__AuditEvent_1adef3ce64eb72882b7e4b9d97bf36be27)`() const` | Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetJoinable`](#structFRHAPI__AuditEvent_1a86266f39758217a9668e10a39fe68135)`(const bool & NewValue)` | Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.
`public inline FORCEINLINE void `[`SetJoinable`](#structFRHAPI__AuditEvent_1ab53617bce87c9c41d4be4163e17a283e)`(bool && NewValue)` | Sets the value of Joinable_Optional and also sets Joinable_IsSet to true using move semantics.
`public inline void `[`ClearJoinable`](#structFRHAPI__AuditEvent_1a563363b7d70117df3e9dd9932903125f)`()` | Clears the value of Joinable_Optional and sets Joinable_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_Joinable`](#structFRHAPI__AuditEvent_1a7bd65fce2f6f4c98728816050319e9cd)`()` | Returns the default value of Joinable.
`public inline FORCEINLINE `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__AuditEvent_1a9c9739f8f782248b2aad786366936b40)`()` | Gets the value of Joinability_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__AuditEvent_1a97bf676f94dc24aac0f8a25d9faf6e00)`() const` | Gets the value of Joinability_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__AuditEvent_1ab057b46388e216398be33fe860f05fd0)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & DefaultValue) const` | Gets the value of Joinability_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetJoinability`](#structFRHAPI__AuditEvent_1acc6d1805d7f4d79db30914aca6db3f58)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & OutValue) const` | Fills OutValue with the value of Joinability_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__AuditEvent_1a0ca26370c41b9e0cb29c40ca5ea91b9f)`()` | Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__AuditEvent_1ad1af9cd0cb48543dcd41a96d7c215e83)`() const` | Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetJoinability`](#structFRHAPI__AuditEvent_1a42fcf19a50ebbef6aabd81c6d48ea211)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & NewValue)` | Sets the value of Joinability_Optional and also sets Joinability_IsSet to true.
`public inline FORCEINLINE void `[`SetJoinability`](#structFRHAPI__AuditEvent_1acf43aa29b190634b2d1bfc7d9435d2f0)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` && NewValue)` | Sets the value of Joinability_Optional and also sets Joinability_IsSet to true using move semantics.
`public inline void `[`ClearJoinability`](#structFRHAPI__AuditEvent_1a08826e9cd16abcb3f0e813fa32468e53)`()` | Clears the value of Joinability_Optional and sets Joinability_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__AuditEvent_1a49a843f78adcf637d0d821fbd0a643a6)`()` | Gets the value of UpdatedTeams_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__AuditEvent_1ac383fc7e966d1c0ff5cac30b180c306b)`() const` | Gets the value of UpdatedTeams_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__AuditEvent_1a50a518eda482aaed6b8fc6b81612d4a6)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & DefaultValue) const` | Gets the value of UpdatedTeams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetUpdatedTeams`](#structFRHAPI__AuditEvent_1a7fa1ca4015328a10bc6753b94170310c)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & OutValue) const` | Fills OutValue with the value of UpdatedTeams_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__AuditEvent_1a6bf9a6280e685d2195f285091257c44a)`()` | Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__AuditEvent_1a57664855d421cc57af0228bf2bd6e70f)`() const` | Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetUpdatedTeams`](#structFRHAPI__AuditEvent_1a10799241aa7dc48e7d68c52557b1578f)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & NewValue)` | Sets the value of UpdatedTeams_Optional and also sets UpdatedTeams_IsSet to true.
`public inline FORCEINLINE void `[`SetUpdatedTeams`](#structFRHAPI__AuditEvent_1ada71353cf70b7f03a271454490b3a886)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > && NewValue)` | Sets the value of UpdatedTeams_Optional and also sets UpdatedTeams_IsSet to true using move semantics.
`public inline void `[`ClearUpdatedTeams`](#structFRHAPI__AuditEvent_1ae7fbb59c682cdadaa713c1cb50332e51)`()` | Clears the value of UpdatedTeams_Optional and sets UpdatedTeams_IsSet to false.
`public inline FORCEINLINE ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__AuditEvent_1ac8c9afe98acf9405de6a12cc236f76f7)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__AuditEvent_1aa840aaf1ca5552124eeb9591c0bef1e2)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__AuditEvent_1ab85e22ee8dd828a2ed265a8114975335)`(const ERHAPI_InviteSource & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSource`](#structFRHAPI__AuditEvent_1abf3e62f85c82787585674db1f54bfbd6)`(ERHAPI_InviteSource & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__AuditEvent_1ab79015b6709fdd67f78282b143946ecb)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__AuditEvent_1a859bff69cba1ffeee936b900c95b2e36)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__AuditEvent_1a932e1e08d4a400614ceaa302b94ca4fc)`(const ERHAPI_InviteSource & NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__AuditEvent_1ac878b21f57be796adef53ca50d39b39d)`(ERHAPI_InviteSource && NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.
`public inline void `[`ClearSource`](#structFRHAPI__AuditEvent_1ae289f75b711f546b5f66d324dce40ac8)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__AuditEvent_1a4b21358faefc8da1754be734f23323ca)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__AuditEvent_1aa953e3920fec929697809bd15f15e552)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__AuditEvent_1a82c28e24f94085b362356816b12732fc)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerUuid`](#structFRHAPI__AuditEvent_1adf46148bc425f47221220947c93b52ab)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__AuditEvent_1a6005b776d5a958930fd3284e1513fca7)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__AuditEvent_1a37ed42c0d1f93f524066fffa708bbae1)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__AuditEvent_1a984a55f708f6364d01d2fe5ea53c2c2a)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__AuditEvent_1a9a423c7ca9e3691f2ba0d9457a8d1884)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__AuditEvent_1a03c6f2362c235c7631ef36c4f3c42beb)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetTeamId`](#structFRHAPI__AuditEvent_1a2b0fc83c296a9b53f3ef675a87a804cb)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__AuditEvent_1aa502d9f3471ba2f3d708a2da78feab82)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__AuditEvent_1a1861c6b4d1be359385477278629d3e0b)`(const int32 & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTeamId`](#structFRHAPI__AuditEvent_1a02b359bf07099e8bfb591a7aa83730f7)`(int32 & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetTeamIdOrNull`](#structFRHAPI__AuditEvent_1a89ab406b99d86034d14e01b40e39fc33)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__AuditEvent_1a7d0010b90149755c56f8e3a6cd59324a)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__AuditEvent_1abf1e0053a904f49213feac0ddaef7bd3)`(const int32 & NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__AuditEvent_1a03cdfb9ada2f55ac2237b9bee820891e)`(int32 && NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.
`public inline void `[`ClearTeamId`](#structFRHAPI__AuditEvent_1a11aaafae2908f427aef5a5efb99382ea)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_TeamId`](#structFRHAPI__AuditEvent_1adff154ac0a34c800a10dc0188283a331)`()` | Returns the default value of TeamId.
`public inline FORCEINLINE FString & `[`GetInvitedSessionId`](#structFRHAPI__AuditEvent_1a5e6decc38db836a0de3caef6f3861046)`()` | Gets the value of InvitedSessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInvitedSessionId`](#structFRHAPI__AuditEvent_1af77dc162efe8ce5dbc7aa78de168e645)`() const` | Gets the value of InvitedSessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInvitedSessionId`](#structFRHAPI__AuditEvent_1a6c0a01fcd0a1a1431428ec0f36a4828a)`(const FString & DefaultValue) const` | Gets the value of InvitedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInvitedSessionId`](#structFRHAPI__AuditEvent_1abcd463eb7d26b4bd37a4c504d5be5e69)`(FString & OutValue) const` | Fills OutValue with the value of InvitedSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__AuditEvent_1abc4e393fb3f19f3f2e1ff41272a18a29)`()` | Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__AuditEvent_1a459e2118abae5705f6c99838fe236854)`() const` | Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInvitedSessionId`](#structFRHAPI__AuditEvent_1a881d8fe30b648fc8b35f925defbc1387)`(const FString & NewValue)` | Sets the value of InvitedSessionId_Optional and also sets InvitedSessionId_IsSet to true.
`public inline FORCEINLINE void `[`SetInvitedSessionId`](#structFRHAPI__AuditEvent_1ac412487d26c212b54a9dbbfb0d8f8654)`(FString && NewValue)` | Sets the value of InvitedSessionId_Optional and also sets InvitedSessionId_IsSet to true using move semantics.
`public inline void `[`ClearInvitedSessionId`](#structFRHAPI__AuditEvent_1af5c9671893728a053fc0ed1c35cd54a0)`()` | Clears the value of InvitedSessionId_Optional and sets InvitedSessionId_IsSet to false.
`public inline FORCEINLINE FString & `[`GetRemovedSessionId`](#structFRHAPI__AuditEvent_1a3720070f938c6f18a933199ddcbccf33)`()` | Gets the value of RemovedSessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRemovedSessionId`](#structFRHAPI__AuditEvent_1a6f24f8d296b1689ff5f8c29dd151bc03)`() const` | Gets the value of RemovedSessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRemovedSessionId`](#structFRHAPI__AuditEvent_1a085752523fc33eb747acfa537571a6c9)`(const FString & DefaultValue) const` | Gets the value of RemovedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRemovedSessionId`](#structFRHAPI__AuditEvent_1a6504e5ca6712fb06ab7f1b509583eea8)`(FString & OutValue) const` | Fills OutValue with the value of RemovedSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__AuditEvent_1a813c3f19e2e93324d3df04d7d0b0f8df)`()` | Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__AuditEvent_1acfaf0120256fae3988f74e7aa01ba41a)`() const` | Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRemovedSessionId`](#structFRHAPI__AuditEvent_1a01abc3fbad6a0863fa80c9730e24bc29)`(const FString & NewValue)` | Sets the value of RemovedSessionId_Optional and also sets RemovedSessionId_IsSet to true.
`public inline FORCEINLINE void `[`SetRemovedSessionId`](#structFRHAPI__AuditEvent_1a918599edffadb5fb601482645497dfd8)`(FString && NewValue)` | Sets the value of RemovedSessionId_Optional and also sets RemovedSessionId_IsSet to true using move semantics.
`public inline void `[`ClearRemovedSessionId`](#structFRHAPI__AuditEvent_1aff216f70ad96469f84d59cace7f26a1a)`()` | Clears the value of RemovedSessionId_Optional and sets RemovedSessionId_IsSet to false.
`public inline FORCEINLINE FString & `[`GetVersion`](#structFRHAPI__AuditEvent_1a17849acb8399db0f08a96e93de254271)`()` | Gets the value of Version_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetVersion`](#structFRHAPI__AuditEvent_1a466612805fb2529767617d3cf56fe5d9)`() const` | Gets the value of Version_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetVersion`](#structFRHAPI__AuditEvent_1a7c2af47324e22a190c3f9b9909bac869)`(const FString & DefaultValue) const` | Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetVersion`](#structFRHAPI__AuditEvent_1ad843aeadf746c733b89771e81a96b429)`(FString & OutValue) const` | Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetVersionOrNull`](#structFRHAPI__AuditEvent_1a9d9b679ecd1a86381183a8b0b4e435c8)`()` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetVersionOrNull`](#structFRHAPI__AuditEvent_1a5e57dbb3769dd2179080d1a4f97bfa07)`() const` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetVersion`](#structFRHAPI__AuditEvent_1afb6eae66c42043e0350c69223c5240a9)`(const FString & NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true.
`public inline FORCEINLINE void `[`SetVersion`](#structFRHAPI__AuditEvent_1a2e03b13b001c0ad356cba84c6d9c368a)`(FString && NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics.
`public inline void `[`ClearVersion`](#structFRHAPI__AuditEvent_1a7ceff8afbf6b5e1ace9ada4c055b1a66)`()` | Clears the value of Version_Optional and sets Version_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__AuditEvent_1a631f939bd87f108594adfc9e1bf71091)`()` | Gets the value of ClientSettings_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__AuditEvent_1a46da4775c5e96d8c604e528c091adaac)`() const` | Gets the value of ClientSettings_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__AuditEvent_1a29c8658263b1550db89b440e5bf3ff65)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & DefaultValue) const` | Gets the value of ClientSettings_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetClientSettings`](#structFRHAPI__AuditEvent_1a87576e709ab1568a50e9023517cd7bf6)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & OutValue) const` | Fills OutValue with the value of ClientSettings_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__AuditEvent_1aaf9c2fd965655a74b11059cf35ebde59)`()` | Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__AuditEvent_1af1013187951bb2c75896df20eb6c0bc4)`() const` | Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetClientSettings`](#structFRHAPI__AuditEvent_1a5d6fa0b0cae0cd46ce3072eab4c33d77)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & NewValue)` | Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true.
`public inline FORCEINLINE void `[`SetClientSettings`](#structFRHAPI__AuditEvent_1ad9b79ac728f02df5193ac2cad0e5ecb0)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` && NewValue)` | Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true using move semantics.
`public inline void `[`ClearClientSettings`](#structFRHAPI__AuditEvent_1a94831c05e3986114c6f2a89b692196e9)`()` | Clears the value of ClientSettings_Optional and sets ClientSettings_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__AuditEvent_1a7e0f58b2174e8866602b0dd9f45348ef)`()` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__AuditEvent_1aeea31a5498262f3f36b6672c26e19f57)`() const` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__AuditEvent_1a7f634dca968006833a7557f17e446b40)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` | Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCrossplayPreferences`](#structFRHAPI__AuditEvent_1ac2b8a06f2b7fc21763ac97b994e6cbb9)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` | Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__AuditEvent_1af4f98be478d304f82fe7b019a7936b9b)`()` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__AuditEvent_1aa61b55df69fcce8c556d50f46f8ce751)`() const` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCrossplayPreferences`](#structFRHAPI__AuditEvent_1a65606a1af8b3121b3d3eac5e2073a5ac)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & NewValue)` | Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.
`public inline FORCEINLINE void `[`SetCrossplayPreferences`](#structFRHAPI__AuditEvent_1a1dd6716652972e5402e7d15e32cc5284)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` && NewValue)` | Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true using move semantics.
`public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__AuditEvent_1af1899c1e5b5181b70c8778ae01c055c7)`()` | Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.
`public inline FORCEINLINE ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__AuditEvent_1ada655b5627b8ed0fa104d0d99b6f48a9)`()` | Gets the value of PlayerStatus_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__AuditEvent_1a35286123ff39f93fa58269a373ccf78b)`() const` | Gets the value of PlayerStatus_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__AuditEvent_1afacda718f53ff7aa791b940ac89b430e)`(const ERHAPI_SessionPlayerStatus & DefaultValue) const` | Gets the value of PlayerStatus_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerStatus`](#structFRHAPI__AuditEvent_1a3b80cecc0b5fece430ccf3eee8df74eb)`(ERHAPI_SessionPlayerStatus & OutValue) const` | Fills OutValue with the value of PlayerStatus_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__AuditEvent_1ae30ef05eb75aeabe4199daf7632f03e0)`()` | Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__AuditEvent_1aed73dc7f9e9a883bca11190a91a839eb)`() const` | Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerStatus`](#structFRHAPI__AuditEvent_1ac41ba0b2dd82c4a93e3b08bf87cc360c)`(const ERHAPI_SessionPlayerStatus & NewValue)` | Sets the value of PlayerStatus_Optional and also sets PlayerStatus_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerStatus`](#structFRHAPI__AuditEvent_1a3a002aa07e49cc1ed93fa71e2a9ec1ed)`(ERHAPI_SessionPlayerStatus && NewValue)` | Sets the value of PlayerStatus_Optional and also sets PlayerStatus_IsSet to true using move semantics.
`public inline void `[`ClearPlayerStatus`](#structFRHAPI__AuditEvent_1aa6d6d3cf6091881b21f450168b45f4c8)`()` | Clears the value of PlayerStatus_Optional and sets PlayerStatus_IsSet to false.
`public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__AuditEvent_1a27c279b9a1c59c9106ef1fc8f605254f)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__AuditEvent_1a2edfd8c13324c45ec00a910c0350d25e)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__AuditEvent_1a70be3370fba07ce40e3b189cded9b906)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatform`](#structFRHAPI__AuditEvent_1ad24996370aa9bc721bbc1035934f9da4)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__AuditEvent_1a443f6ef1985703ca87fcce4fff3ea2ff)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__AuditEvent_1acdb35b32bc55c185ea7a4cbe82113d19)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__AuditEvent_1a10cacd41a1b8cb8cef6731e25db153d3)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__AuditEvent_1aca514847e7fa20b5df3309b23bdb894c)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__AuditEvent_1aa09b2a730eadbccecf65f6491dd39461)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline FORCEINLINE FString & `[`GetPlatformSessionId`](#structFRHAPI__AuditEvent_1ac2f3a67016f72e94da6f366c17833f03)`()` | Gets the value of PlatformSessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformSessionId`](#structFRHAPI__AuditEvent_1a9295689d9e5f2891e12becb5d3924ac0)`() const` | Gets the value of PlatformSessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformSessionId`](#structFRHAPI__AuditEvent_1ad8a105da3a9ba6c61edb9b720c59b42e)`(const FString & DefaultValue) const` | Gets the value of PlatformSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatformSessionId`](#structFRHAPI__AuditEvent_1a35cad7ed82d211f7b1f732e1b8226190)`(FString & OutValue) const` | Fills OutValue with the value of PlatformSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__AuditEvent_1a1e8c2153fe4ac13e8394831afbada6a9)`()` | Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__AuditEvent_1ab107564dddd6001152560a433123374d)`() const` | Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatformSessionId`](#structFRHAPI__AuditEvent_1a0b63a266c286d034681052d0847eaf8c)`(const FString & NewValue)` | Sets the value of PlatformSessionId_Optional and also sets PlatformSessionId_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatformSessionId`](#structFRHAPI__AuditEvent_1ae5c83aa29fb978b025b706ef67ccf8c7)`(FString && NewValue)` | Sets the value of PlatformSessionId_Optional and also sets PlatformSessionId_IsSet to true using move semantics.
`public inline void `[`ClearPlatformSessionId`](#structFRHAPI__AuditEvent_1a5fc4053f6b838a472fbe315133728400)`()` | Clears the value of PlatformSessionId_Optional and sets PlatformSessionId_IsSet to false.
`public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__AuditEvent_1a9767a0215fc2902dbc9fcf094dcc0abe)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__AuditEvent_1a8ea637adeb608b72dfdc678b02ca0418)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__AuditEvent_1aae8d37b8b34f0f4f8e838cc815c09883)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstanceId`](#structFRHAPI__AuditEvent_1a9b535a11bd295988673142504eb973a5)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetInstanceIdOrNull`](#structFRHAPI__AuditEvent_1ae6910ddd9463485eb8bfa7b8f4455918)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__AuditEvent_1ac747e50365dd690212cfb805631285d8)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__AuditEvent_1a3fb12da1adc89716d5143adfd12cc663)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__AuditEvent_1a54470fd1a97360120309a25a1c3af1df)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__AuditEvent_1a22603a0b806c747218532f541db1638b)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline FORCEINLINE ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__AuditEvent_1a386ac2eb9e17d95b76bd495d97bb80cc)`()` | Gets the value of HostType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__AuditEvent_1a35d0843da01040379a15556da6de530b)`() const` | Gets the value of HostType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__AuditEvent_1ac06ce4291fed312e21cc95425279317a)`(const ERHAPI_HostType & DefaultValue) const` | Gets the value of HostType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetHostType`](#structFRHAPI__AuditEvent_1a95197d70498b411795bd55d66c8586b9)`(ERHAPI_HostType & OutValue) const` | Fills OutValue with the value of HostType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__AuditEvent_1a56ba39fc593b29da99b9b22795e27e96)`()` | Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__AuditEvent_1a42c719c0f0ab8d940c987357141feee1)`() const` | Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetHostType`](#structFRHAPI__AuditEvent_1aa5bad71ea033a61f46a1777a7a8edd07)`(const ERHAPI_HostType & NewValue)` | Sets the value of HostType_Optional and also sets HostType_IsSet to true.
`public inline FORCEINLINE void `[`SetHostType`](#structFRHAPI__AuditEvent_1aac8e3dd3176c5d4ca98eeac71266e00d)`(ERHAPI_HostType && NewValue)` | Sets the value of HostType_Optional and also sets HostType_IsSet to true using move semantics.
`public inline void `[`ClearHostType`](#structFRHAPI__AuditEvent_1af2d3969a72d3de486e6730f174d54960)`()` | Clears the value of HostType_Optional and sets HostType_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__AuditEvent_1abdb5a506986706f05f34eeb9f0210f0d)`()` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__AuditEvent_1a2b6e5c79301b6508ec5abbd4c1deddec)`() const` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__AuditEvent_1a53a19c353868c078065a30ce34ae05c6)`(const FGuid & DefaultValue) const` | Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetHostPlayerUuid`](#structFRHAPI__AuditEvent_1ace488d313e0dbb6f8857e15d3b8840e4)`(FGuid & OutValue) const` | Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__AuditEvent_1ad3fff41d57b4bd0099f0ddced73ea49e)`()` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__AuditEvent_1a9f1c0590f096121f7e6e3f806e515a3b)`() const` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetHostPlayerUuid`](#structFRHAPI__AuditEvent_1a2f06e2e1a8a369c5b9d526be34cac7b7)`(const FGuid & NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetHostPlayerUuid`](#structFRHAPI__AuditEvent_1a1a838b80addb82a5cf8d02e59e96574c)`(FGuid && NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__AuditEvent_1aacdcdb79e5bcac41ff75fc7946d361e9)`()` | Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a27e6599db6430603c094299c0ce52816)`()` | Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a5aae84adb4f2b622d39c05a52ed29778)`() const` | Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1aa475de4a2f45bc068a616876d0e22e55)`(const FGuid & DefaultValue) const` | Gets the value of InstanceRequestTemplate_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a0e910250e802e4d43c895598348eee27)`(FGuid & OutValue) const` | Fills OutValue with the value of InstanceRequestTemplate_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__AuditEvent_1acd2b008f549ec2081bff36efff7eb87e)`()` | Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__AuditEvent_1a32d9c7f1697faf23496e060951250674)`() const` | Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1ad656d7b8a38a86f918936db5f9d1b903)`(const FGuid & NewValue)` | Sets the value of InstanceRequestTemplate_Optional and also sets InstanceRequestTemplate_IsSet to true.
`public inline FORCEINLINE void `[`SetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1afafc79e052dff62d1fc32f0ce664c657)`(FGuid && NewValue)` | Sets the value of InstanceRequestTemplate_Optional and also sets InstanceRequestTemplate_IsSet to true using move semantics.
`public inline void `[`ClearInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a524c77ab8b9f19d870035b5ca5882800)`()` | Clears the value of InstanceRequestTemplate_Optional and sets InstanceRequestTemplate_IsSet to false.
`public inline FORCEINLINE FString & `[`GetMap`](#structFRHAPI__AuditEvent_1ae29304dfd2078fb9d58b39a5ddcc3c80)`()` | Gets the value of Map_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMap`](#structFRHAPI__AuditEvent_1a6b6b1d4e992a03988bddceac5212293e)`() const` | Gets the value of Map_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMap`](#structFRHAPI__AuditEvent_1aff99f512234c6aa63aaa07e87a7d0c84)`(const FString & DefaultValue) const` | Gets the value of Map_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMap`](#structFRHAPI__AuditEvent_1ab5caa6311a051f4e6f4b5a2cfb142475)`(FString & OutValue) const` | Fills OutValue with the value of Map_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMapOrNull`](#structFRHAPI__AuditEvent_1ae3e5fdf30eda8508e67ff90611327909)`()` | Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMapOrNull`](#structFRHAPI__AuditEvent_1a4fa483caddfa707d019b71f51f9e114d)`() const` | Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMap`](#structFRHAPI__AuditEvent_1a5862c75241083eef9e7f97bd13f80849)`(const FString & NewValue)` | Sets the value of Map_Optional and also sets Map_IsSet to true.
`public inline FORCEINLINE void `[`SetMap`](#structFRHAPI__AuditEvent_1a4ba6f0bcdab30e569a855ae7dd0b2d59)`(FString && NewValue)` | Sets the value of Map_Optional and also sets Map_IsSet to true using move semantics.
`public inline void `[`ClearMap`](#structFRHAPI__AuditEvent_1a6d6275509b146ad4eba918dbcb22d0ad)`()` | Clears the value of Map_Optional and sets Map_IsSet to false.
`public inline FORCEINLINE FString & `[`GetMode`](#structFRHAPI__AuditEvent_1add27453eb4ec38162568af4621fa8108)`()` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMode`](#structFRHAPI__AuditEvent_1ad7b254bed04fc625bca8217c2ca120ce)`() const` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMode`](#structFRHAPI__AuditEvent_1ab6c0faa0ff73fce7857e952ce7b044a2)`(const FString & DefaultValue) const` | Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMode`](#structFRHAPI__AuditEvent_1a7eaafb2f810d1c72db151eb13aa6df5a)`(FString & OutValue) const` | Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetModeOrNull`](#structFRHAPI__AuditEvent_1a5126cb50f56533feff14bc1cc5304798)`()` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetModeOrNull`](#structFRHAPI__AuditEvent_1aff2ca6d9f91971d7a56ca09c14588a88)`() const` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMode`](#structFRHAPI__AuditEvent_1aa2afba479bd7c405c1c0990dcecef905)`(const FString & NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true.
`public inline FORCEINLINE void `[`SetMode`](#structFRHAPI__AuditEvent_1afb742da8546b37fbedc147651a555637)`(FString && NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true using move semantics.
`public inline void `[`ClearMode`](#structFRHAPI__AuditEvent_1a9ba2ddca1885eb21298dbb4b623759f8)`()` | Clears the value of Mode_Optional and sets Mode_IsSet to false.
`public inline FORCEINLINE FString & `[`GetAllocationId`](#structFRHAPI__AuditEvent_1a43f1df0078ddcad4ea526ad9b83ea3c2)`()` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetAllocationId`](#structFRHAPI__AuditEvent_1a1ca3c1bf2fd2619cdf165041cfc28eb5)`() const` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetAllocationId`](#structFRHAPI__AuditEvent_1af07323c069d63c94f8c053c03ddaa2be)`(const FString & DefaultValue) const` | Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAllocationId`](#structFRHAPI__AuditEvent_1af06177587ca74057c2780339e19e8a67)`(FString & OutValue) const` | Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetAllocationIdOrNull`](#structFRHAPI__AuditEvent_1ad3431f861a022e108d4f50e3f4ab53b5)`()` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__AuditEvent_1a2aa6318686b38991d882f4e23fb26646)`() const` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAllocationId`](#structFRHAPI__AuditEvent_1aea8413ec827237dce3fdcc0795397889)`(const FString & NewValue)` | Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.
`public inline FORCEINLINE void `[`SetAllocationId`](#structFRHAPI__AuditEvent_1a38ae21677cd388c01f1299e54620a6bc)`(FString && NewValue)` | Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true using move semantics.
`public inline void `[`ClearAllocationId`](#structFRHAPI__AuditEvent_1ab04e25609ffcf65ec41946fec4c51f80)`()` | Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.
`public inline FORCEINLINE ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__AuditEvent_1a6536d31eaf5d64fd707ca3cbb5bf4e13)`()` | Gets the value of JoinStatus_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__AuditEvent_1ad40e3c769be936b5ca3221c67880535a)`() const` | Gets the value of JoinStatus_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__AuditEvent_1aa5cccd971c6bbec93d6553c6969f194a)`(const ERHAPI_InstanceJoinableStatus & DefaultValue) const` | Gets the value of JoinStatus_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetJoinStatus`](#structFRHAPI__AuditEvent_1a13b232d79f8644f530025278058fb890)`(ERHAPI_InstanceJoinableStatus & OutValue) const` | Fills OutValue with the value of JoinStatus_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__AuditEvent_1a6502ccd8d2966bb451537c5b9ff25948)`()` | Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__AuditEvent_1a8e7f317dcc90dd08bfdff8ef82088ff7)`() const` | Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetJoinStatus`](#structFRHAPI__AuditEvent_1af12fe97d840b56ad1c138f1383718f83)`(const ERHAPI_InstanceJoinableStatus & NewValue)` | Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true.
`public inline FORCEINLINE void `[`SetJoinStatus`](#structFRHAPI__AuditEvent_1afd6863cfe98fe4dd0a0fc1bf5fc6beee)`(ERHAPI_InstanceJoinableStatus && NewValue)` | Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true using move semantics.
`public inline void `[`ClearJoinStatus`](#structFRHAPI__AuditEvent_1aa2055e3edb743366349cb596e48c6dc9)`()` | Clears the value of JoinStatus_Optional and sets JoinStatus_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__AuditEvent_1ac5c01487f2c78210eddb411ee2175911)`()` | Gets the value of JoinParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__AuditEvent_1a89db963adc7ed928d30d843e089896b8)`() const` | Gets the value of JoinParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__AuditEvent_1a109ce3e6b83566b301fcca1a711aa479)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & DefaultValue) const` | Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetJoinParams`](#structFRHAPI__AuditEvent_1a4593eac653e5f318493e003298bd0c4b)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & OutValue) const` | Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__AuditEvent_1a6e6925dc3584d170219edfa481fe567f)`()` | Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__AuditEvent_1a2b7a23230e85c09d81127d2f71fa0ab9)`() const` | Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetJoinParams`](#structFRHAPI__AuditEvent_1a608e224c4103dfd14d18ac38f5cd4530)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & NewValue)` | Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.
`public inline FORCEINLINE void `[`SetJoinParams`](#structFRHAPI__AuditEvent_1a237d4d7ab4becf4a03cf4d89d0e525da)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` && NewValue)` | Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true using move semantics.
`public inline void `[`ClearJoinParams`](#structFRHAPI__AuditEvent_1a4c60bb357f152966a362b08045e787be)`()` | Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.
`public inline FORCEINLINE ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__AuditEvent_1a8ef3aa72695fc3402086f45ab054885c)`()` | Gets the value of InstanceHealth_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__AuditEvent_1abea092387434db3b7f5a538e8f72e095)`() const` | Gets the value of InstanceHealth_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__AuditEvent_1a37a5641bd15e4a890de7554bbf427b0e)`(const ERHAPI_InstanceHealthStatus & DefaultValue) const` | Gets the value of InstanceHealth_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstanceHealth`](#structFRHAPI__AuditEvent_1a9733a7f053e59c025aaba01ca89892be)`(ERHAPI_InstanceHealthStatus & OutValue) const` | Fills OutValue with the value of InstanceHealth_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__AuditEvent_1a5f4e6f66e6974f0bca6b58e7e362cb5d)`()` | Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__AuditEvent_1af3dfdabc5b3b911e627a29d48f57b163)`() const` | Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstanceHealth`](#structFRHAPI__AuditEvent_1a6d47969038d64b9db300f6f93220a56d)`(const ERHAPI_InstanceHealthStatus & NewValue)` | Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true.
`public inline FORCEINLINE void `[`SetInstanceHealth`](#structFRHAPI__AuditEvent_1a08c98e664563f654d885d50ae3826a17)`(ERHAPI_InstanceHealthStatus && NewValue)` | Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true using move semantics.
`public inline void `[`ClearInstanceHealth`](#structFRHAPI__AuditEvent_1af8b4b7b6a59f3d4bb4ba9529dc729d7c)`()` | Clears the value of InstanceHealth_Optional and sets InstanceHealth_IsSet to false.
`public inline FORCEINLINE FString & `[`GetQueueId`](#structFRHAPI__AuditEvent_1a443ad0dee88ef3a02c7c124c64308378)`()` | Gets the value of QueueId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetQueueId`](#structFRHAPI__AuditEvent_1aae54e0b4fbce4690131a0529b9b1d803)`() const` | Gets the value of QueueId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetQueueId`](#structFRHAPI__AuditEvent_1ad35ebebc38b4cb09d6f8599a5f12b304)`(const FString & DefaultValue) const` | Gets the value of QueueId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetQueueId`](#structFRHAPI__AuditEvent_1aa2cc1f5aa990e71c91de9e31bab6630c)`(FString & OutValue) const` | Fills OutValue with the value of QueueId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetQueueIdOrNull`](#structFRHAPI__AuditEvent_1a8169fd1794171b9f493698d95654f6b2)`()` | Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetQueueIdOrNull`](#structFRHAPI__AuditEvent_1a371cc60ce34be339fdb49a6fc8adccdb)`() const` | Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__AuditEvent_1a40cd09d409535c379ad0da44f3ab3927)`(const FString & NewValue)` | Sets the value of QueueId_Optional and also sets QueueId_IsSet to true.
`public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__AuditEvent_1a63b3dcd2bf0ecbc5d232d19f8cda8b36)`(FString && NewValue)` | Sets the value of QueueId_Optional and also sets QueueId_IsSet to true using move semantics.
`public inline void `[`ClearQueueId`](#structFRHAPI__AuditEvent_1a905562c31a2b45c0ade8bcfe9e0cbfdf)`()` | Clears the value of QueueId_Optional and sets QueueId_IsSet to false.
`public inline FORCEINLINE FString & `[`GetTicketId`](#structFRHAPI__AuditEvent_1abec72192b75797baf855d4756f87afb4)`()` | Gets the value of TicketId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetTicketId`](#structFRHAPI__AuditEvent_1a66911c6a979fb9514072fb0a2322beec)`() const` | Gets the value of TicketId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetTicketId`](#structFRHAPI__AuditEvent_1a85cbf7d345a93f4458f4ae339961d5ce)`(const FString & DefaultValue) const` | Gets the value of TicketId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTicketId`](#structFRHAPI__AuditEvent_1a68c8343207cc2e545538b09741726060)`(FString & OutValue) const` | Fills OutValue with the value of TicketId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetTicketIdOrNull`](#structFRHAPI__AuditEvent_1a5889d85349a4ef714abb4b12dd49f6da)`()` | Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetTicketIdOrNull`](#structFRHAPI__AuditEvent_1acda6e636dbaa19c34e5c658f75c2515c)`() const` | Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTicketId`](#structFRHAPI__AuditEvent_1a8b3c5853df2ef06e9e39a647e3f7f1a7)`(const FString & NewValue)` | Sets the value of TicketId_Optional and also sets TicketId_IsSet to true.
`public inline FORCEINLINE void `[`SetTicketId`](#structFRHAPI__AuditEvent_1ae754f3560bc916632414ae591deb5e14)`(FString && NewValue)` | Sets the value of TicketId_Optional and also sets TicketId_IsSet to true using move semantics.
`public inline void `[`ClearTicketId`](#structFRHAPI__AuditEvent_1a3a95477a2909de1f2322a6dc33532dd5)`()` | Clears the value of TicketId_Optional and sets TicketId_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__AuditEvent_1a3a305722ce164dec0572d9a9fe17357d)`()` | Gets the value of AdditionalParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__AuditEvent_1a9a3c794142657c97d5bc3a71f6899aa7)`() const` | Gets the value of AdditionalParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__AuditEvent_1ad62276a3a951cee521f893326f62d023)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & DefaultValue) const` | Gets the value of AdditionalParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAdditionalParams`](#structFRHAPI__AuditEvent_1ad0fedff28d634dccb6e1c07c42cb1271)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & OutValue) const` | Fills OutValue with the value of AdditionalParams_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalParamsOrNull`](#structFRHAPI__AuditEvent_1ad1844f7729bcc3816e495420e313f588)`()` | Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalParamsOrNull`](#structFRHAPI__AuditEvent_1a120630b5bbf5c44124c574f3d03e67b4)`() const` | Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAdditionalParams`](#structFRHAPI__AuditEvent_1ab7bd3042b17aeabf2f12a63251c9565e)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & NewValue)` | Sets the value of AdditionalParams_Optional and also sets AdditionalParams_IsSet to true.
`public inline FORCEINLINE void `[`SetAdditionalParams`](#structFRHAPI__AuditEvent_1a6749539c425259648dfa86316a2816a6)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` && NewValue)` | Sets the value of AdditionalParams_Optional and also sets AdditionalParams_IsSet to true using move semantics.
`public inline void `[`ClearAdditionalParams`](#structFRHAPI__AuditEvent_1a576652cb7ff7d291a1235fe1116724c4)`()` | Clears the value of AdditionalParams_Optional and sets AdditionalParams_IsSet to false.
`public inline FORCEINLINE TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__AuditEvent_1a27443210868c7f4c06cf4d5a7b3a3626)`()` | Gets the value of MapPreferences_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__AuditEvent_1a99347984b30a408f955bdc07623f599d)`() const` | Gets the value of MapPreferences_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__AuditEvent_1a9260b6ccbc964a42c57685f2844ab599)`(const TArray< FString > & DefaultValue) const` | Gets the value of MapPreferences_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMapPreferences`](#structFRHAPI__AuditEvent_1a521e3490d8d29a9356132c2649b8fbb9)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of MapPreferences_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__AuditEvent_1ab8caae08d146a5407d04b2377a16bf05)`()` | Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__AuditEvent_1acc004b7af034fb8d49dd9c56540220a4)`() const` | Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMapPreferences`](#structFRHAPI__AuditEvent_1a3dba1d1a3c388caba1447a0eac5a88ff)`(const TArray< FString > & NewValue)` | Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true.
`public inline FORCEINLINE void `[`SetMapPreferences`](#structFRHAPI__AuditEvent_1a0d339f5283318ee6ff56b807e02093b2)`(TArray< FString > && NewValue)` | Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true using move semantics.
`public inline void `[`ClearMapPreferences`](#structFRHAPI__AuditEvent_1a33c453410167253e097ed36c2ee93f44)`()` | Clears the value of MapPreferences_Optional and sets MapPreferences_IsSet to false.
`public inline FORCEINLINE FString & `[`GetQueuedSessionId`](#structFRHAPI__AuditEvent_1a6036364e49ec3e4778f10111f569f114)`()` | Gets the value of QueuedSessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetQueuedSessionId`](#structFRHAPI__AuditEvent_1a4219fadaf4bd4555b0b91bc67eab268c)`() const` | Gets the value of QueuedSessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetQueuedSessionId`](#structFRHAPI__AuditEvent_1a3f82ab9a12945e073d626ec8e8023fec)`(const FString & DefaultValue) const` | Gets the value of QueuedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetQueuedSessionId`](#structFRHAPI__AuditEvent_1ab54c3afbd85d98741d4c1006e20fed29)`(FString & OutValue) const` | Fills OutValue with the value of QueuedSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__AuditEvent_1a880e274386cd4c1d2a795323c8088717)`()` | Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__AuditEvent_1a65d5aeb12db371ffdf3193bfa6f925a4)`() const` | Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetQueuedSessionId`](#structFRHAPI__AuditEvent_1a618b2e5a9564cb47cf2363985ebe3b8a)`(const FString & NewValue)` | Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true.
`public inline FORCEINLINE void `[`SetQueuedSessionId`](#structFRHAPI__AuditEvent_1a6febba679409dcca1294838450f4570f)`(FString && NewValue)` | Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true using move semantics.
`public inline void `[`ClearQueuedSessionId`](#structFRHAPI__AuditEvent_1aba3557a10d63a3d8efba7904f34c1c92)`()` | Clears the value of QueuedSessionId_Optional and sets QueuedSessionId_IsSet to false.
`public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__AuditEvent_1ab03d4b0311287d906cc2a41aa218215d)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__AuditEvent_1adc38ea95ad381f6660adac47f45a17b9)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__AuditEvent_1a0a8d1b5aae48d0a461e47706247a2cd5)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__AuditEvent_1aebcc73c8a057b01b3b7499fddb1d007c)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__AuditEvent_1af1492c8924e23b70d8a2724317b7c46e)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__AuditEvent_1a4cdff2104e5408efbccf6c36f10fbac9)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__AuditEvent_1a3160da921f388f9e9bb8af4eea0debae)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__AuditEvent_1a86634460ed69bf9ebdf0880f4dddbb36)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__AuditEvent_1abd7aede0da0d4e281062c95871342c64)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetTicketWaitSeconds`](#structFRHAPI__AuditEvent_1a47fffac728866f7c2f7812faaf8421f5)`()` | Gets the value of TicketWaitSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTicketWaitSeconds`](#structFRHAPI__AuditEvent_1a5ff376fe82f1b70790ba667ba387cc79)`() const` | Gets the value of TicketWaitSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTicketWaitSeconds`](#structFRHAPI__AuditEvent_1ad846f1e74e8df905e50f6d90c516096f)`(const int32 & DefaultValue) const` | Gets the value of TicketWaitSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTicketWaitSeconds`](#structFRHAPI__AuditEvent_1a496024b3578c488382d8e616de1d1cdd)`(int32 & OutValue) const` | Fills OutValue with the value of TicketWaitSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetTicketWaitSecondsOrNull`](#structFRHAPI__AuditEvent_1a873529affe489032379c97186db53da3)`()` | Returns a pointer to TicketWaitSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetTicketWaitSecondsOrNull`](#structFRHAPI__AuditEvent_1a32a3abc8aff639b71ea51a8c7bf619f8)`() const` | Returns a pointer to TicketWaitSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTicketWaitSeconds`](#structFRHAPI__AuditEvent_1ad080308fb2f5599d7807859099b0e521)`(const int32 & NewValue)` | Sets the value of TicketWaitSeconds_Optional and also sets TicketWaitSeconds_IsSet to true.
`public inline FORCEINLINE void `[`SetTicketWaitSeconds`](#structFRHAPI__AuditEvent_1ae206533673eafbda4c66047e82586670)`(int32 && NewValue)` | Sets the value of TicketWaitSeconds_Optional and also sets TicketWaitSeconds_IsSet to true using move semantics.
`public inline void `[`ClearTicketWaitSeconds`](#structFRHAPI__AuditEvent_1a3af20dcc3e27f27208426a7fea762903)`()` | Clears the value of TicketWaitSeconds_Optional and sets TicketWaitSeconds_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_TicketWaitSeconds`](#structFRHAPI__AuditEvent_1a6797f39e672315ad1358ba0895c92f78)`()` | Returns the default value of TicketWaitSeconds.
`public inline FORCEINLINE FString & `[`GetMatchMakingProfileId`](#structFRHAPI__AuditEvent_1acb1600a4a6640ee9a27ee60303e2acd7)`()` | Gets the value of MatchMakingProfileId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__AuditEvent_1aa7195943da5814064ef074dcc5a9540c)`() const` | Gets the value of MatchMakingProfileId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__AuditEvent_1a88999dbc0894b901009f90d67641f4a9)`(const FString & DefaultValue) const` | Gets the value of MatchMakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatchMakingProfileId`](#structFRHAPI__AuditEvent_1a2f5350438cb0edaf803c82a3e1e1bc04)`(FString & OutValue) const` | Fills OutValue with the value of MatchMakingProfileId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMatchMakingProfileIdOrNull`](#structFRHAPI__AuditEvent_1a35edb18190f7ebba96f523f98bf2d43c)`()` | Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMatchMakingProfileIdOrNull`](#structFRHAPI__AuditEvent_1a04e4fb4c498802cb90b893e7260398ed)`() const` | Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatchMakingProfileId`](#structFRHAPI__AuditEvent_1a1eccd1f25d1c6957bb42b7a3658af5bd)`(const FString & NewValue)` | Sets the value of MatchMakingProfileId_Optional and also sets MatchMakingProfileId_IsSet to true.
`public inline FORCEINLINE void `[`SetMatchMakingProfileId`](#structFRHAPI__AuditEvent_1a0ad99ab96e494ea3e56db97640b71bcb)`(FString && NewValue)` | Sets the value of MatchMakingProfileId_Optional and also sets MatchMakingProfileId_IsSet to true using move semantics.
`public inline void `[`ClearMatchMakingProfileId`](#structFRHAPI__AuditEvent_1aa7bfe9b037f73477af70134787142759)`()` | Clears the value of MatchMakingProfileId_Optional and sets MatchMakingProfileId_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a23d4805b96be652dd6a5929162030038)`()` | Gets the value of RequestingUserUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a6f98ded1cf1ad48822085fc425506e58)`() const` | Gets the value of RequestingUserUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a6deb70d1480d969d94b0ad7c86ca235b)`(const FGuid & DefaultValue) const` | Gets the value of RequestingUserUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRequestingUserUuid`](#structFRHAPI__AuditEvent_1ac079ea122bd2835637c0883f12138fd7)`(FGuid & OutValue) const` | Fills OutValue with the value of RequestingUserUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetRequestingUserUuidOrNull`](#structFRHAPI__AuditEvent_1aa33adc865f5a707ed07e01a5380efa93)`()` | Returns a pointer to RequestingUserUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetRequestingUserUuidOrNull`](#structFRHAPI__AuditEvent_1a0d15be1ce59194381c9de81116e1972c)`() const` | Returns a pointer to RequestingUserUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRequestingUserUuid`](#structFRHAPI__AuditEvent_1afda425720a59f56242057ff12dc3e095)`(const FGuid & NewValue)` | Sets the value of RequestingUserUuid_Optional and also sets RequestingUserUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a9e4bc1b052ae7720373c1f5ff5bde56e)`(FGuid && NewValue)` | Sets the value of RequestingUserUuid_Optional and also sets RequestingUserUuid_IsSet to true using move semantics.
`public inline void `[`ClearRequestingUserUuid`](#structFRHAPI__AuditEvent_1a75d20856ad2d8cccdcf2157a1238c0c1)`()` | Clears the value of RequestingUserUuid_Optional and sets RequestingUserUuid_IsSet to false.
`public inline FORCEINLINE FDateTime & `[`GetEventDatetime`](#structFRHAPI__AuditEvent_1aa1790c3091e5515eb672a6453167ab94)`()` | Gets the value of EventDatetime.
`public inline FORCEINLINE const FDateTime & `[`GetEventDatetime`](#structFRHAPI__AuditEvent_1af3ca003110a732421a9385db3cb72713)`() const` | Gets the value of EventDatetime.
`public inline FORCEINLINE void `[`SetEventDatetime`](#structFRHAPI__AuditEvent_1a7f0acb4ac645f70d78eaac130fb823e9)`(const FDateTime & NewValue)` | Sets the value of EventDatetime.
`public inline FORCEINLINE void `[`SetEventDatetime`](#structFRHAPI__AuditEvent_1a186bcef6876e53c8468f5f0981301fc0)`(FDateTime && NewValue)` | Sets the value of EventDatetime using move semantics.

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

#### `public inline FORCEINLINE FString & `[`GetEventName`](#structFRHAPI__AuditEvent_1a42518679fcb1f9f4a30c3768c315db8a)`()` <a id="structFRHAPI__AuditEvent_1a42518679fcb1f9f4a30c3768c315db8a"></a>

Gets the value of EventName.

#### `public inline FORCEINLINE const FString & `[`GetEventName`](#structFRHAPI__AuditEvent_1ae70f19a75f9f4beb2b3408e5ca7cf4f1)`() const` <a id="structFRHAPI__AuditEvent_1ae70f19a75f9f4beb2b3408e5ca7cf4f1"></a>

Gets the value of EventName.

#### `public inline FORCEINLINE void `[`SetEventName`](#structFRHAPI__AuditEvent_1adb97837b39bf09231f3a63c1e93248dc)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1adb97837b39bf09231f3a63c1e93248dc"></a>

Sets the value of EventName.

#### `public inline FORCEINLINE void `[`SetEventName`](#structFRHAPI__AuditEvent_1aeffd6494d1bca72fdda6f6de4d1eae51)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1aeffd6494d1bca72fdda6f6de4d1eae51"></a>

Sets the value of EventName using move semantics.

#### `public inline FORCEINLINE FString & `[`GetSessionId`](#structFRHAPI__AuditEvent_1aa159347d72eae2f4c806d577cae72fb2)`()` <a id="structFRHAPI__AuditEvent_1aa159347d72eae2f4c806d577cae72fb2"></a>

Gets the value of SessionId.

#### `public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__AuditEvent_1a620c20a4dea07988c3983f7cb7678ff6)`() const` <a id="structFRHAPI__AuditEvent_1a620c20a4dea07988c3983f7cb7678ff6"></a>

Gets the value of SessionId.

#### `public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__AuditEvent_1acc26f919f5ca9499a117c557f1ee2647)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1acc26f919f5ca9499a117c557f1ee2647"></a>

Sets the value of SessionId.

#### `public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__AuditEvent_1aac29a4b85c2a907e397e4d151ce975c6)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1aac29a4b85c2a907e397e4d151ce975c6"></a>

Sets the value of SessionId using move semantics.

#### `public inline FORCEINLINE FString & `[`GetReason`](#structFRHAPI__AuditEvent_1ae5b3a95f9d0ad09c011cbac4e1701d56)`()` <a id="structFRHAPI__AuditEvent_1ae5b3a95f9d0ad09c011cbac4e1701d56"></a>

Gets the value of Reason_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetReason`](#structFRHAPI__AuditEvent_1a0e0b368e8e2c704f5a01945bfbd2e69e)`() const` <a id="structFRHAPI__AuditEvent_1a0e0b368e8e2c704f5a01945bfbd2e69e"></a>

Gets the value of Reason_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetReason`](#structFRHAPI__AuditEvent_1aa64c931820a890e1652b6849edb8ca7f)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1aa64c931820a890e1652b6849edb8ca7f"></a>

Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetReason`](#structFRHAPI__AuditEvent_1a56b781112e4f50edcf31b3c3112f20da)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1a56b781112e4f50edcf31b3c3112f20da"></a>

Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetReasonOrNull`](#structFRHAPI__AuditEvent_1a181ab560459b5c5fd0c940e37203ab7f)`()` <a id="structFRHAPI__AuditEvent_1a181ab560459b5c5fd0c940e37203ab7f"></a>

Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetReasonOrNull`](#structFRHAPI__AuditEvent_1af435bcf1600bebfad30911d2d742f219)`() const` <a id="structFRHAPI__AuditEvent_1af435bcf1600bebfad30911d2d742f219"></a>

Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__AuditEvent_1acd0df6eb344f62b8265cb88e22ff55a6)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1acd0df6eb344f62b8265cb88e22ff55a6"></a>

Sets the value of Reason_Optional and also sets Reason_IsSet to true.

#### `public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__AuditEvent_1a9a718771667bc99fbf0b78f045297ab4)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a9a718771667bc99fbf0b78f045297ab4"></a>

Sets the value of Reason_Optional and also sets Reason_IsSet to true using move semantics.

#### `public inline void `[`ClearReason`](#structFRHAPI__AuditEvent_1a5b5a895bd7fe668e8295807cbf9c75c7)`()` <a id="structFRHAPI__AuditEvent_1a5b5a895bd7fe668e8295807cbf9c75c7"></a>

Clears the value of Reason_Optional and sets Reason_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__AuditEvent_1aab8f5bcbc036caa7808912f5e3981f2d)`()` <a id="structFRHAPI__AuditEvent_1aab8f5bcbc036caa7808912f5e3981f2d"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__AuditEvent_1ad362f453b9b4c99eb9b27b8c8d68f75c)`() const` <a id="structFRHAPI__AuditEvent_1ad362f453b9b4c99eb9b27b8c8d68f75c"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__AuditEvent_1adc0bef00c52c09ef7d1cc37bc00ccb86)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1adc0bef00c52c09ef7d1cc37bc00ccb86"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__AuditEvent_1ad7fa83bd7a29f16e5f47456b7dedc400)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__AuditEvent_1ad7fa83bd7a29f16e5f47456b7dedc400"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__AuditEvent_1ab9daf937464d0a77df948bc701195433)`()` <a id="structFRHAPI__AuditEvent_1ab9daf937464d0a77df948bc701195433"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__AuditEvent_1adbc978e4a8a07292870348662282e6b1)`() const` <a id="structFRHAPI__AuditEvent_1adbc978e4a8a07292870348662282e6b1"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__AuditEvent_1a8c79cd691b35bc3a32df57cecd6891e9)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__AuditEvent_1a8c79cd691b35bc3a32df57cecd6891e9"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__AuditEvent_1a562650f0546b9e3266308d26a42019e9)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__AuditEvent_1a562650f0546b9e3266308d26a42019e9"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__AuditEvent_1a5aaffe4f1be621a24ef6a07d08271ff7)`()` <a id="structFRHAPI__AuditEvent_1a5aaffe4f1be621a24ef6a07d08271ff7"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetSessionType`](#structFRHAPI__AuditEvent_1a2f1344e5d9bc5511100d9558586d34c4)`()` <a id="structFRHAPI__AuditEvent_1a2f1344e5d9bc5511100d9558586d34c4"></a>

Gets the value of SessionType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetSessionType`](#structFRHAPI__AuditEvent_1afa4799998256c6e31019694478b9c922)`() const` <a id="structFRHAPI__AuditEvent_1afa4799998256c6e31019694478b9c922"></a>

Gets the value of SessionType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetSessionType`](#structFRHAPI__AuditEvent_1aa85a5612edd57ce3cd660b33767bdaee)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1aa85a5612edd57ce3cd660b33767bdaee"></a>

Gets the value of SessionType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSessionType`](#structFRHAPI__AuditEvent_1aac0e8957716f612c396bcd3af47acec0)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1aac0e8957716f612c396bcd3af47acec0"></a>

Fills OutValue with the value of SessionType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetSessionTypeOrNull`](#structFRHAPI__AuditEvent_1a50c9ae7546776dd63a2f1c0d253a5cd6)`()` <a id="structFRHAPI__AuditEvent_1a50c9ae7546776dd63a2f1c0d253a5cd6"></a>

Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetSessionTypeOrNull`](#structFRHAPI__AuditEvent_1a05047f0656feacd012cc639a10889971)`() const` <a id="structFRHAPI__AuditEvent_1a05047f0656feacd012cc639a10889971"></a>

Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSessionType`](#structFRHAPI__AuditEvent_1a4fe7e8cea70017a4e6f3fa78a723caaf)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a4fe7e8cea70017a4e6f3fa78a723caaf"></a>

Sets the value of SessionType_Optional and also sets SessionType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSessionType`](#structFRHAPI__AuditEvent_1ab414be50e7b97cc18185876726e347d4)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1ab414be50e7b97cc18185876726e347d4"></a>

Sets the value of SessionType_Optional and also sets SessionType_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionType`](#structFRHAPI__AuditEvent_1af485efac1a25386828b114dfc87b5e77)`()` <a id="structFRHAPI__AuditEvent_1af485efac1a25386828b114dfc87b5e77"></a>

Clears the value of SessionType_Optional and sets SessionType_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetRegionId`](#structFRHAPI__AuditEvent_1ab2188b12862eada7fdfea221e01f2c76)`()` <a id="structFRHAPI__AuditEvent_1ab2188b12862eada7fdfea221e01f2c76"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__AuditEvent_1ac0493413e9a1dc82365c24cd4fcd6532)`() const` <a id="structFRHAPI__AuditEvent_1ac0493413e9a1dc82365c24cd4fcd6532"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__AuditEvent_1a8f555daa1026a77e9b6e02c010b72dbb)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a8f555daa1026a77e9b6e02c010b72dbb"></a>

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRegionId`](#structFRHAPI__AuditEvent_1ab34c4b541f91e782461e1f056a3d323f)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1ab34c4b541f91e782461e1f056a3d323f"></a>

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRegionIdOrNull`](#structFRHAPI__AuditEvent_1a74845de9e84a5fa77951952054c86394)`()` <a id="structFRHAPI__AuditEvent_1a74845de9e84a5fa77951952054c86394"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRegionIdOrNull`](#structFRHAPI__AuditEvent_1a902c59a4c5ac3ccfdc7c76e1bd724ffc)`() const` <a id="structFRHAPI__AuditEvent_1a902c59a4c5ac3ccfdc7c76e1bd724ffc"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__AuditEvent_1a6441d73cbd49b21f1d43f9698487e3e4)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a6441d73cbd49b21f1d43f9698487e3e4"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__AuditEvent_1a40a79e1846c0468383f0be97b5490046)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a40a79e1846c0468383f0be97b5490046"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.

#### `public inline void `[`ClearRegionId`](#structFRHAPI__AuditEvent_1ade77c1e5c1364d10ccfd19e9fa122dff)`()` <a id="structFRHAPI__AuditEvent_1ade77c1e5c1364d10ccfd19e9fa122dff"></a>

Clears the value of RegionId_Optional and sets RegionId_IsSet to false.

#### `public inline FORCEINLINE bool & `[`GetJoinable`](#structFRHAPI__AuditEvent_1a2841f8539972e0b7105ddfe2df8d3b54)`()` <a id="structFRHAPI__AuditEvent_1a2841f8539972e0b7105ddfe2df8d3b54"></a>

Gets the value of Joinable_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetJoinable`](#structFRHAPI__AuditEvent_1ad5bf2a0f600d97886a9065eeaeb8c1f0)`() const` <a id="structFRHAPI__AuditEvent_1ad5bf2a0f600d97886a9065eeaeb8c1f0"></a>

Gets the value of Joinable_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetJoinable`](#structFRHAPI__AuditEvent_1af3f5b279bac5b318efbe5935dd54a79b)`(const bool & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1af3f5b279bac5b318efbe5935dd54a79b"></a>

Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetJoinable`](#structFRHAPI__AuditEvent_1a2f8ad3030338e3c2836b85cc5ab892b7)`(bool & OutValue) const` <a id="structFRHAPI__AuditEvent_1a2f8ad3030338e3c2836b85cc5ab892b7"></a>

Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetJoinableOrNull`](#structFRHAPI__AuditEvent_1ab5cb91d1937f0d180719c2eb00230017)`()` <a id="structFRHAPI__AuditEvent_1ab5cb91d1937f0d180719c2eb00230017"></a>

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetJoinableOrNull`](#structFRHAPI__AuditEvent_1adef3ce64eb72882b7e4b9d97bf36be27)`() const` <a id="structFRHAPI__AuditEvent_1adef3ce64eb72882b7e4b9d97bf36be27"></a>

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetJoinable`](#structFRHAPI__AuditEvent_1a86266f39758217a9668e10a39fe68135)`(const bool & NewValue)` <a id="structFRHAPI__AuditEvent_1a86266f39758217a9668e10a39fe68135"></a>

Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.

#### `public inline FORCEINLINE void `[`SetJoinable`](#structFRHAPI__AuditEvent_1ab53617bce87c9c41d4be4163e17a283e)`(bool && NewValue)` <a id="structFRHAPI__AuditEvent_1ab53617bce87c9c41d4be4163e17a283e"></a>

Sets the value of Joinable_Optional and also sets Joinable_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinable`](#structFRHAPI__AuditEvent_1a563363b7d70117df3e9dd9932903125f)`()` <a id="structFRHAPI__AuditEvent_1a563363b7d70117df3e9dd9932903125f"></a>

Clears the value of Joinable_Optional and sets Joinable_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_Joinable`](#structFRHAPI__AuditEvent_1a7bd65fce2f6f4c98728816050319e9cd)`()` <a id="structFRHAPI__AuditEvent_1a7bd65fce2f6f4c98728816050319e9cd"></a>

Returns the default value of Joinable.

#### `public inline FORCEINLINE `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__AuditEvent_1a9c9739f8f782248b2aad786366936b40)`()` <a id="structFRHAPI__AuditEvent_1a9c9739f8f782248b2aad786366936b40"></a>

Gets the value of Joinability_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__AuditEvent_1a97bf676f94dc24aac0f8a25d9faf6e00)`() const` <a id="structFRHAPI__AuditEvent_1a97bf676f94dc24aac0f8a25d9faf6e00"></a>

Gets the value of Joinability_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__AuditEvent_1ab057b46388e216398be33fe860f05fd0)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1ab057b46388e216398be33fe860f05fd0"></a>

Gets the value of Joinability_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetJoinability`](#structFRHAPI__AuditEvent_1acc6d1805d7f4d79db30914aca6db3f58)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & OutValue) const` <a id="structFRHAPI__AuditEvent_1acc6d1805d7f4d79db30914aca6db3f58"></a>

Fills OutValue with the value of Joinability_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__AuditEvent_1a0ca26370c41b9e0cb29c40ca5ea91b9f)`()` <a id="structFRHAPI__AuditEvent_1a0ca26370c41b9e0cb29c40ca5ea91b9f"></a>

Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__AuditEvent_1ad1af9cd0cb48543dcd41a96d7c215e83)`() const` <a id="structFRHAPI__AuditEvent_1ad1af9cd0cb48543dcd41a96d7c215e83"></a>

Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetJoinability`](#structFRHAPI__AuditEvent_1a42fcf19a50ebbef6aabd81c6d48ea211)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & NewValue)` <a id="structFRHAPI__AuditEvent_1a42fcf19a50ebbef6aabd81c6d48ea211"></a>

Sets the value of Joinability_Optional and also sets Joinability_IsSet to true.

#### `public inline FORCEINLINE void `[`SetJoinability`](#structFRHAPI__AuditEvent_1acf43aa29b190634b2d1bfc7d9435d2f0)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` && NewValue)` <a id="structFRHAPI__AuditEvent_1acf43aa29b190634b2d1bfc7d9435d2f0"></a>

Sets the value of Joinability_Optional and also sets Joinability_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinability`](#structFRHAPI__AuditEvent_1a08826e9cd16abcb3f0e813fa32468e53)`()` <a id="structFRHAPI__AuditEvent_1a08826e9cd16abcb3f0e813fa32468e53"></a>

Clears the value of Joinability_Optional and sets Joinability_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__AuditEvent_1a49a843f78adcf637d0d821fbd0a643a6)`()` <a id="structFRHAPI__AuditEvent_1a49a843f78adcf637d0d821fbd0a643a6"></a>

Gets the value of UpdatedTeams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__AuditEvent_1ac383fc7e966d1c0ff5cac30b180c306b)`() const` <a id="structFRHAPI__AuditEvent_1ac383fc7e966d1c0ff5cac30b180c306b"></a>

Gets the value of UpdatedTeams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__AuditEvent_1a50a518eda482aaed6b8fc6b81612d4a6)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a50a518eda482aaed6b8fc6b81612d4a6"></a>

Gets the value of UpdatedTeams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetUpdatedTeams`](#structFRHAPI__AuditEvent_1a7fa1ca4015328a10bc6753b94170310c)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & OutValue) const` <a id="structFRHAPI__AuditEvent_1a7fa1ca4015328a10bc6753b94170310c"></a>

Fills OutValue with the value of UpdatedTeams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__AuditEvent_1a6bf9a6280e685d2195f285091257c44a)`()` <a id="structFRHAPI__AuditEvent_1a6bf9a6280e685d2195f285091257c44a"></a>

Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__AuditEvent_1a57664855d421cc57af0228bf2bd6e70f)`() const` <a id="structFRHAPI__AuditEvent_1a57664855d421cc57af0228bf2bd6e70f"></a>

Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetUpdatedTeams`](#structFRHAPI__AuditEvent_1a10799241aa7dc48e7d68c52557b1578f)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & NewValue)` <a id="structFRHAPI__AuditEvent_1a10799241aa7dc48e7d68c52557b1578f"></a>

Sets the value of UpdatedTeams_Optional and also sets UpdatedTeams_IsSet to true.

#### `public inline FORCEINLINE void `[`SetUpdatedTeams`](#structFRHAPI__AuditEvent_1ada71353cf70b7f03a271454490b3a886)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > && NewValue)` <a id="structFRHAPI__AuditEvent_1ada71353cf70b7f03a271454490b3a886"></a>

Sets the value of UpdatedTeams_Optional and also sets UpdatedTeams_IsSet to true using move semantics.

#### `public inline void `[`ClearUpdatedTeams`](#structFRHAPI__AuditEvent_1ae7fbb59c682cdadaa713c1cb50332e51)`()` <a id="structFRHAPI__AuditEvent_1ae7fbb59c682cdadaa713c1cb50332e51"></a>

Clears the value of UpdatedTeams_Optional and sets UpdatedTeams_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__AuditEvent_1ac8c9afe98acf9405de6a12cc236f76f7)`()` <a id="structFRHAPI__AuditEvent_1ac8c9afe98acf9405de6a12cc236f76f7"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__AuditEvent_1aa840aaf1ca5552124eeb9591c0bef1e2)`() const` <a id="structFRHAPI__AuditEvent_1aa840aaf1ca5552124eeb9591c0bef1e2"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__AuditEvent_1ab85e22ee8dd828a2ed265a8114975335)`(const ERHAPI_InviteSource & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1ab85e22ee8dd828a2ed265a8114975335"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSource`](#structFRHAPI__AuditEvent_1abf3e62f85c82787585674db1f54bfbd6)`(ERHAPI_InviteSource & OutValue) const` <a id="structFRHAPI__AuditEvent_1abf3e62f85c82787585674db1f54bfbd6"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__AuditEvent_1ab79015b6709fdd67f78282b143946ecb)`()` <a id="structFRHAPI__AuditEvent_1ab79015b6709fdd67f78282b143946ecb"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__AuditEvent_1a859bff69cba1ffeee936b900c95b2e36)`() const` <a id="structFRHAPI__AuditEvent_1a859bff69cba1ffeee936b900c95b2e36"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__AuditEvent_1a932e1e08d4a400614ceaa302b94ca4fc)`(const ERHAPI_InviteSource & NewValue)` <a id="structFRHAPI__AuditEvent_1a932e1e08d4a400614ceaa302b94ca4fc"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__AuditEvent_1ac878b21f57be796adef53ca50d39b39d)`(ERHAPI_InviteSource && NewValue)` <a id="structFRHAPI__AuditEvent_1ac878b21f57be796adef53ca50d39b39d"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.

#### `public inline void `[`ClearSource`](#structFRHAPI__AuditEvent_1ae289f75b711f546b5f66d324dce40ac8)`()` <a id="structFRHAPI__AuditEvent_1ae289f75b711f546b5f66d324dce40ac8"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__AuditEvent_1a4b21358faefc8da1754be734f23323ca)`()` <a id="structFRHAPI__AuditEvent_1a4b21358faefc8da1754be734f23323ca"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__AuditEvent_1aa953e3920fec929697809bd15f15e552)`() const` <a id="structFRHAPI__AuditEvent_1aa953e3920fec929697809bd15f15e552"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__AuditEvent_1a82c28e24f94085b362356816b12732fc)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a82c28e24f94085b362356816b12732fc"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerUuid`](#structFRHAPI__AuditEvent_1adf46148bc425f47221220947c93b52ab)`(FGuid & OutValue) const` <a id="structFRHAPI__AuditEvent_1adf46148bc425f47221220947c93b52ab"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__AuditEvent_1a6005b776d5a958930fd3284e1513fca7)`()` <a id="structFRHAPI__AuditEvent_1a6005b776d5a958930fd3284e1513fca7"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__AuditEvent_1a37ed42c0d1f93f524066fffa708bbae1)`() const` <a id="structFRHAPI__AuditEvent_1a37ed42c0d1f93f524066fffa708bbae1"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__AuditEvent_1a984a55f708f6364d01d2fe5ea53c2c2a)`(const FGuid & NewValue)` <a id="structFRHAPI__AuditEvent_1a984a55f708f6364d01d2fe5ea53c2c2a"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__AuditEvent_1a9a423c7ca9e3691f2ba0d9457a8d1884)`(FGuid && NewValue)` <a id="structFRHAPI__AuditEvent_1a9a423c7ca9e3691f2ba0d9457a8d1884"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__AuditEvent_1a03c6f2362c235c7631ef36c4f3c42beb)`()` <a id="structFRHAPI__AuditEvent_1a03c6f2362c235c7631ef36c4f3c42beb"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetTeamId`](#structFRHAPI__AuditEvent_1a2b0fc83c296a9b53f3ef675a87a804cb)`()` <a id="structFRHAPI__AuditEvent_1a2b0fc83c296a9b53f3ef675a87a804cb"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__AuditEvent_1aa502d9f3471ba2f3d708a2da78feab82)`() const` <a id="structFRHAPI__AuditEvent_1aa502d9f3471ba2f3d708a2da78feab82"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__AuditEvent_1a1861c6b4d1be359385477278629d3e0b)`(const int32 & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a1861c6b4d1be359385477278629d3e0b"></a>

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTeamId`](#structFRHAPI__AuditEvent_1a02b359bf07099e8bfb591a7aa83730f7)`(int32 & OutValue) const` <a id="structFRHAPI__AuditEvent_1a02b359bf07099e8bfb591a7aa83730f7"></a>

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetTeamIdOrNull`](#structFRHAPI__AuditEvent_1a89ab406b99d86034d14e01b40e39fc33)`()` <a id="structFRHAPI__AuditEvent_1a89ab406b99d86034d14e01b40e39fc33"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__AuditEvent_1a7d0010b90149755c56f8e3a6cd59324a)`() const` <a id="structFRHAPI__AuditEvent_1a7d0010b90149755c56f8e3a6cd59324a"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__AuditEvent_1abf1e0053a904f49213feac0ddaef7bd3)`(const int32 & NewValue)` <a id="structFRHAPI__AuditEvent_1abf1e0053a904f49213feac0ddaef7bd3"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__AuditEvent_1a03cdfb9ada2f55ac2237b9bee820891e)`(int32 && NewValue)` <a id="structFRHAPI__AuditEvent_1a03cdfb9ada2f55ac2237b9bee820891e"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.

#### `public inline void `[`ClearTeamId`](#structFRHAPI__AuditEvent_1a11aaafae2908f427aef5a5efb99382ea)`()` <a id="structFRHAPI__AuditEvent_1a11aaafae2908f427aef5a5efb99382ea"></a>

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_TeamId`](#structFRHAPI__AuditEvent_1adff154ac0a34c800a10dc0188283a331)`()` <a id="structFRHAPI__AuditEvent_1adff154ac0a34c800a10dc0188283a331"></a>

Returns the default value of TeamId.

#### `public inline FORCEINLINE FString & `[`GetInvitedSessionId`](#structFRHAPI__AuditEvent_1a5e6decc38db836a0de3caef6f3861046)`()` <a id="structFRHAPI__AuditEvent_1a5e6decc38db836a0de3caef6f3861046"></a>

Gets the value of InvitedSessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInvitedSessionId`](#structFRHAPI__AuditEvent_1af77dc162efe8ce5dbc7aa78de168e645)`() const` <a id="structFRHAPI__AuditEvent_1af77dc162efe8ce5dbc7aa78de168e645"></a>

Gets the value of InvitedSessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInvitedSessionId`](#structFRHAPI__AuditEvent_1a6c0a01fcd0a1a1431428ec0f36a4828a)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a6c0a01fcd0a1a1431428ec0f36a4828a"></a>

Gets the value of InvitedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInvitedSessionId`](#structFRHAPI__AuditEvent_1abcd463eb7d26b4bd37a4c504d5be5e69)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1abcd463eb7d26b4bd37a4c504d5be5e69"></a>

Fills OutValue with the value of InvitedSessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__AuditEvent_1abc4e393fb3f19f3f2e1ff41272a18a29)`()` <a id="structFRHAPI__AuditEvent_1abc4e393fb3f19f3f2e1ff41272a18a29"></a>

Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__AuditEvent_1a459e2118abae5705f6c99838fe236854)`() const` <a id="structFRHAPI__AuditEvent_1a459e2118abae5705f6c99838fe236854"></a>

Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInvitedSessionId`](#structFRHAPI__AuditEvent_1a881d8fe30b648fc8b35f925defbc1387)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a881d8fe30b648fc8b35f925defbc1387"></a>

Sets the value of InvitedSessionId_Optional and also sets InvitedSessionId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInvitedSessionId`](#structFRHAPI__AuditEvent_1ac412487d26c212b54a9dbbfb0d8f8654)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1ac412487d26c212b54a9dbbfb0d8f8654"></a>

Sets the value of InvitedSessionId_Optional and also sets InvitedSessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearInvitedSessionId`](#structFRHAPI__AuditEvent_1af5c9671893728a053fc0ed1c35cd54a0)`()` <a id="structFRHAPI__AuditEvent_1af5c9671893728a053fc0ed1c35cd54a0"></a>

Clears the value of InvitedSessionId_Optional and sets InvitedSessionId_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetRemovedSessionId`](#structFRHAPI__AuditEvent_1a3720070f938c6f18a933199ddcbccf33)`()` <a id="structFRHAPI__AuditEvent_1a3720070f938c6f18a933199ddcbccf33"></a>

Gets the value of RemovedSessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRemovedSessionId`](#structFRHAPI__AuditEvent_1a6f24f8d296b1689ff5f8c29dd151bc03)`() const` <a id="structFRHAPI__AuditEvent_1a6f24f8d296b1689ff5f8c29dd151bc03"></a>

Gets the value of RemovedSessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRemovedSessionId`](#structFRHAPI__AuditEvent_1a085752523fc33eb747acfa537571a6c9)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a085752523fc33eb747acfa537571a6c9"></a>

Gets the value of RemovedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRemovedSessionId`](#structFRHAPI__AuditEvent_1a6504e5ca6712fb06ab7f1b509583eea8)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1a6504e5ca6712fb06ab7f1b509583eea8"></a>

Fills OutValue with the value of RemovedSessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__AuditEvent_1a813c3f19e2e93324d3df04d7d0b0f8df)`()` <a id="structFRHAPI__AuditEvent_1a813c3f19e2e93324d3df04d7d0b0f8df"></a>

Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__AuditEvent_1acfaf0120256fae3988f74e7aa01ba41a)`() const` <a id="structFRHAPI__AuditEvent_1acfaf0120256fae3988f74e7aa01ba41a"></a>

Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRemovedSessionId`](#structFRHAPI__AuditEvent_1a01abc3fbad6a0863fa80c9730e24bc29)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a01abc3fbad6a0863fa80c9730e24bc29"></a>

Sets the value of RemovedSessionId_Optional and also sets RemovedSessionId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRemovedSessionId`](#structFRHAPI__AuditEvent_1a918599edffadb5fb601482645497dfd8)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a918599edffadb5fb601482645497dfd8"></a>

Sets the value of RemovedSessionId_Optional and also sets RemovedSessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearRemovedSessionId`](#structFRHAPI__AuditEvent_1aff216f70ad96469f84d59cace7f26a1a)`()` <a id="structFRHAPI__AuditEvent_1aff216f70ad96469f84d59cace7f26a1a"></a>

Clears the value of RemovedSessionId_Optional and sets RemovedSessionId_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetVersion`](#structFRHAPI__AuditEvent_1a17849acb8399db0f08a96e93de254271)`()` <a id="structFRHAPI__AuditEvent_1a17849acb8399db0f08a96e93de254271"></a>

Gets the value of Version_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetVersion`](#structFRHAPI__AuditEvent_1a466612805fb2529767617d3cf56fe5d9)`() const` <a id="structFRHAPI__AuditEvent_1a466612805fb2529767617d3cf56fe5d9"></a>

Gets the value of Version_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetVersion`](#structFRHAPI__AuditEvent_1a7c2af47324e22a190c3f9b9909bac869)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a7c2af47324e22a190c3f9b9909bac869"></a>

Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetVersion`](#structFRHAPI__AuditEvent_1ad843aeadf746c733b89771e81a96b429)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1ad843aeadf746c733b89771e81a96b429"></a>

Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetVersionOrNull`](#structFRHAPI__AuditEvent_1a9d9b679ecd1a86381183a8b0b4e435c8)`()` <a id="structFRHAPI__AuditEvent_1a9d9b679ecd1a86381183a8b0b4e435c8"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetVersionOrNull`](#structFRHAPI__AuditEvent_1a5e57dbb3769dd2179080d1a4f97bfa07)`() const` <a id="structFRHAPI__AuditEvent_1a5e57dbb3769dd2179080d1a4f97bfa07"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetVersion`](#structFRHAPI__AuditEvent_1afb6eae66c42043e0350c69223c5240a9)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1afb6eae66c42043e0350c69223c5240a9"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true.

#### `public inline FORCEINLINE void `[`SetVersion`](#structFRHAPI__AuditEvent_1a2e03b13b001c0ad356cba84c6d9c368a)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a2e03b13b001c0ad356cba84c6d9c368a"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics.

#### `public inline void `[`ClearVersion`](#structFRHAPI__AuditEvent_1a7ceff8afbf6b5e1ace9ada4c055b1a66)`()` <a id="structFRHAPI__AuditEvent_1a7ceff8afbf6b5e1ace9ada4c055b1a66"></a>

Clears the value of Version_Optional and sets Version_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__AuditEvent_1a631f939bd87f108594adfc9e1bf71091)`()` <a id="structFRHAPI__AuditEvent_1a631f939bd87f108594adfc9e1bf71091"></a>

Gets the value of ClientSettings_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__AuditEvent_1a46da4775c5e96d8c604e528c091adaac)`() const` <a id="structFRHAPI__AuditEvent_1a46da4775c5e96d8c604e528c091adaac"></a>

Gets the value of ClientSettings_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__AuditEvent_1a29c8658263b1550db89b440e5bf3ff65)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a29c8658263b1550db89b440e5bf3ff65"></a>

Gets the value of ClientSettings_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetClientSettings`](#structFRHAPI__AuditEvent_1a87576e709ab1568a50e9023517cd7bf6)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & OutValue) const` <a id="structFRHAPI__AuditEvent_1a87576e709ab1568a50e9023517cd7bf6"></a>

Fills OutValue with the value of ClientSettings_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__AuditEvent_1aaf9c2fd965655a74b11059cf35ebde59)`()` <a id="structFRHAPI__AuditEvent_1aaf9c2fd965655a74b11059cf35ebde59"></a>

Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__AuditEvent_1af1013187951bb2c75896df20eb6c0bc4)`() const` <a id="structFRHAPI__AuditEvent_1af1013187951bb2c75896df20eb6c0bc4"></a>

Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetClientSettings`](#structFRHAPI__AuditEvent_1a5d6fa0b0cae0cd46ce3072eab4c33d77)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & NewValue)` <a id="structFRHAPI__AuditEvent_1a5d6fa0b0cae0cd46ce3072eab4c33d77"></a>

Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true.

#### `public inline FORCEINLINE void `[`SetClientSettings`](#structFRHAPI__AuditEvent_1ad9b79ac728f02df5193ac2cad0e5ecb0)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` && NewValue)` <a id="structFRHAPI__AuditEvent_1ad9b79ac728f02df5193ac2cad0e5ecb0"></a>

Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true using move semantics.

#### `public inline void `[`ClearClientSettings`](#structFRHAPI__AuditEvent_1a94831c05e3986114c6f2a89b692196e9)`()` <a id="structFRHAPI__AuditEvent_1a94831c05e3986114c6f2a89b692196e9"></a>

Clears the value of ClientSettings_Optional and sets ClientSettings_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__AuditEvent_1a7e0f58b2174e8866602b0dd9f45348ef)`()` <a id="structFRHAPI__AuditEvent_1a7e0f58b2174e8866602b0dd9f45348ef"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__AuditEvent_1aeea31a5498262f3f36b6672c26e19f57)`() const` <a id="structFRHAPI__AuditEvent_1aeea31a5498262f3f36b6672c26e19f57"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__AuditEvent_1a7f634dca968006833a7557f17e446b40)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a7f634dca968006833a7557f17e446b40"></a>

Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCrossplayPreferences`](#structFRHAPI__AuditEvent_1ac2b8a06f2b7fc21763ac97b994e6cbb9)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` <a id="structFRHAPI__AuditEvent_1ac2b8a06f2b7fc21763ac97b994e6cbb9"></a>

Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__AuditEvent_1af4f98be478d304f82fe7b019a7936b9b)`()` <a id="structFRHAPI__AuditEvent_1af4f98be478d304f82fe7b019a7936b9b"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__AuditEvent_1aa61b55df69fcce8c556d50f46f8ce751)`() const` <a id="structFRHAPI__AuditEvent_1aa61b55df69fcce8c556d50f46f8ce751"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCrossplayPreferences`](#structFRHAPI__AuditEvent_1a65606a1af8b3121b3d3eac5e2073a5ac)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & NewValue)` <a id="structFRHAPI__AuditEvent_1a65606a1af8b3121b3d3eac5e2073a5ac"></a>

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCrossplayPreferences`](#structFRHAPI__AuditEvent_1a1dd6716652972e5402e7d15e32cc5284)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` && NewValue)` <a id="structFRHAPI__AuditEvent_1a1dd6716652972e5402e7d15e32cc5284"></a>

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true using move semantics.

#### `public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__AuditEvent_1af1899c1e5b5181b70c8778ae01c055c7)`()` <a id="structFRHAPI__AuditEvent_1af1899c1e5b5181b70c8778ae01c055c7"></a>

Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__AuditEvent_1ada655b5627b8ed0fa104d0d99b6f48a9)`()` <a id="structFRHAPI__AuditEvent_1ada655b5627b8ed0fa104d0d99b6f48a9"></a>

Gets the value of PlayerStatus_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__AuditEvent_1a35286123ff39f93fa58269a373ccf78b)`() const` <a id="structFRHAPI__AuditEvent_1a35286123ff39f93fa58269a373ccf78b"></a>

Gets the value of PlayerStatus_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__AuditEvent_1afacda718f53ff7aa791b940ac89b430e)`(const ERHAPI_SessionPlayerStatus & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1afacda718f53ff7aa791b940ac89b430e"></a>

Gets the value of PlayerStatus_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerStatus`](#structFRHAPI__AuditEvent_1a3b80cecc0b5fece430ccf3eee8df74eb)`(ERHAPI_SessionPlayerStatus & OutValue) const` <a id="structFRHAPI__AuditEvent_1a3b80cecc0b5fece430ccf3eee8df74eb"></a>

Fills OutValue with the value of PlayerStatus_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__AuditEvent_1ae30ef05eb75aeabe4199daf7632f03e0)`()` <a id="structFRHAPI__AuditEvent_1ae30ef05eb75aeabe4199daf7632f03e0"></a>

Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__AuditEvent_1aed73dc7f9e9a883bca11190a91a839eb)`() const` <a id="structFRHAPI__AuditEvent_1aed73dc7f9e9a883bca11190a91a839eb"></a>

Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerStatus`](#structFRHAPI__AuditEvent_1ac41ba0b2dd82c4a93e3b08bf87cc360c)`(const ERHAPI_SessionPlayerStatus & NewValue)` <a id="structFRHAPI__AuditEvent_1ac41ba0b2dd82c4a93e3b08bf87cc360c"></a>

Sets the value of PlayerStatus_Optional and also sets PlayerStatus_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerStatus`](#structFRHAPI__AuditEvent_1a3a002aa07e49cc1ed93fa71e2a9ec1ed)`(ERHAPI_SessionPlayerStatus && NewValue)` <a id="structFRHAPI__AuditEvent_1a3a002aa07e49cc1ed93fa71e2a9ec1ed"></a>

Sets the value of PlayerStatus_Optional and also sets PlayerStatus_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerStatus`](#structFRHAPI__AuditEvent_1aa6d6d3cf6091881b21f450168b45f4c8)`()` <a id="structFRHAPI__AuditEvent_1aa6d6d3cf6091881b21f450168b45f4c8"></a>

Clears the value of PlayerStatus_Optional and sets PlayerStatus_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__AuditEvent_1a27c279b9a1c59c9106ef1fc8f605254f)`()` <a id="structFRHAPI__AuditEvent_1a27c279b9a1c59c9106ef1fc8f605254f"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__AuditEvent_1a2edfd8c13324c45ec00a910c0350d25e)`() const` <a id="structFRHAPI__AuditEvent_1a2edfd8c13324c45ec00a910c0350d25e"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__AuditEvent_1a70be3370fba07ce40e3b189cded9b906)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a70be3370fba07ce40e3b189cded9b906"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatform`](#structFRHAPI__AuditEvent_1ad24996370aa9bc721bbc1035934f9da4)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__AuditEvent_1ad24996370aa9bc721bbc1035934f9da4"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__AuditEvent_1a443f6ef1985703ca87fcce4fff3ea2ff)`()` <a id="structFRHAPI__AuditEvent_1a443f6ef1985703ca87fcce4fff3ea2ff"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__AuditEvent_1acdb35b32bc55c185ea7a4cbe82113d19)`() const` <a id="structFRHAPI__AuditEvent_1acdb35b32bc55c185ea7a4cbe82113d19"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__AuditEvent_1a10cacd41a1b8cb8cef6731e25db153d3)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__AuditEvent_1a10cacd41a1b8cb8cef6731e25db153d3"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__AuditEvent_1aca514847e7fa20b5df3309b23bdb894c)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__AuditEvent_1aca514847e7fa20b5df3309b23bdb894c"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__AuditEvent_1aa09b2a730eadbccecf65f6491dd39461)`()` <a id="structFRHAPI__AuditEvent_1aa09b2a730eadbccecf65f6491dd39461"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetPlatformSessionId`](#structFRHAPI__AuditEvent_1ac2f3a67016f72e94da6f366c17833f03)`()` <a id="structFRHAPI__AuditEvent_1ac2f3a67016f72e94da6f366c17833f03"></a>

Gets the value of PlatformSessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformSessionId`](#structFRHAPI__AuditEvent_1a9295689d9e5f2891e12becb5d3924ac0)`() const` <a id="structFRHAPI__AuditEvent_1a9295689d9e5f2891e12becb5d3924ac0"></a>

Gets the value of PlatformSessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformSessionId`](#structFRHAPI__AuditEvent_1ad8a105da3a9ba6c61edb9b720c59b42e)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1ad8a105da3a9ba6c61edb9b720c59b42e"></a>

Gets the value of PlatformSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatformSessionId`](#structFRHAPI__AuditEvent_1a35cad7ed82d211f7b1f732e1b8226190)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1a35cad7ed82d211f7b1f732e1b8226190"></a>

Fills OutValue with the value of PlatformSessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__AuditEvent_1a1e8c2153fe4ac13e8394831afbada6a9)`()` <a id="structFRHAPI__AuditEvent_1a1e8c2153fe4ac13e8394831afbada6a9"></a>

Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__AuditEvent_1ab107564dddd6001152560a433123374d)`() const` <a id="structFRHAPI__AuditEvent_1ab107564dddd6001152560a433123374d"></a>

Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatformSessionId`](#structFRHAPI__AuditEvent_1a0b63a266c286d034681052d0847eaf8c)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a0b63a266c286d034681052d0847eaf8c"></a>

Sets the value of PlatformSessionId_Optional and also sets PlatformSessionId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatformSessionId`](#structFRHAPI__AuditEvent_1ae5c83aa29fb978b025b706ef67ccf8c7)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1ae5c83aa29fb978b025b706ef67ccf8c7"></a>

Sets the value of PlatformSessionId_Optional and also sets PlatformSessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformSessionId`](#structFRHAPI__AuditEvent_1a5fc4053f6b838a472fbe315133728400)`()` <a id="structFRHAPI__AuditEvent_1a5fc4053f6b838a472fbe315133728400"></a>

Clears the value of PlatformSessionId_Optional and sets PlatformSessionId_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__AuditEvent_1a9767a0215fc2902dbc9fcf094dcc0abe)`()` <a id="structFRHAPI__AuditEvent_1a9767a0215fc2902dbc9fcf094dcc0abe"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__AuditEvent_1a8ea637adeb608b72dfdc678b02ca0418)`() const` <a id="structFRHAPI__AuditEvent_1a8ea637adeb608b72dfdc678b02ca0418"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__AuditEvent_1aae8d37b8b34f0f4f8e838cc815c09883)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1aae8d37b8b34f0f4f8e838cc815c09883"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstanceId`](#structFRHAPI__AuditEvent_1a9b535a11bd295988673142504eb973a5)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1a9b535a11bd295988673142504eb973a5"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetInstanceIdOrNull`](#structFRHAPI__AuditEvent_1ae6910ddd9463485eb8bfa7b8f4455918)`()` <a id="structFRHAPI__AuditEvent_1ae6910ddd9463485eb8bfa7b8f4455918"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__AuditEvent_1ac747e50365dd690212cfb805631285d8)`() const` <a id="structFRHAPI__AuditEvent_1ac747e50365dd690212cfb805631285d8"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__AuditEvent_1a3fb12da1adc89716d5143adfd12cc663)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a3fb12da1adc89716d5143adfd12cc663"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__AuditEvent_1a54470fd1a97360120309a25a1c3af1df)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a54470fd1a97360120309a25a1c3af1df"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__AuditEvent_1a22603a0b806c747218532f541db1638b)`()` <a id="structFRHAPI__AuditEvent_1a22603a0b806c747218532f541db1638b"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__AuditEvent_1a386ac2eb9e17d95b76bd495d97bb80cc)`()` <a id="structFRHAPI__AuditEvent_1a386ac2eb9e17d95b76bd495d97bb80cc"></a>

Gets the value of HostType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__AuditEvent_1a35d0843da01040379a15556da6de530b)`() const` <a id="structFRHAPI__AuditEvent_1a35d0843da01040379a15556da6de530b"></a>

Gets the value of HostType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__AuditEvent_1ac06ce4291fed312e21cc95425279317a)`(const ERHAPI_HostType & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1ac06ce4291fed312e21cc95425279317a"></a>

Gets the value of HostType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetHostType`](#structFRHAPI__AuditEvent_1a95197d70498b411795bd55d66c8586b9)`(ERHAPI_HostType & OutValue) const` <a id="structFRHAPI__AuditEvent_1a95197d70498b411795bd55d66c8586b9"></a>

Fills OutValue with the value of HostType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__AuditEvent_1a56ba39fc593b29da99b9b22795e27e96)`()` <a id="structFRHAPI__AuditEvent_1a56ba39fc593b29da99b9b22795e27e96"></a>

Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__AuditEvent_1a42c719c0f0ab8d940c987357141feee1)`() const` <a id="structFRHAPI__AuditEvent_1a42c719c0f0ab8d940c987357141feee1"></a>

Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetHostType`](#structFRHAPI__AuditEvent_1aa5bad71ea033a61f46a1777a7a8edd07)`(const ERHAPI_HostType & NewValue)` <a id="structFRHAPI__AuditEvent_1aa5bad71ea033a61f46a1777a7a8edd07"></a>

Sets the value of HostType_Optional and also sets HostType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetHostType`](#structFRHAPI__AuditEvent_1aac8e3dd3176c5d4ca98eeac71266e00d)`(ERHAPI_HostType && NewValue)` <a id="structFRHAPI__AuditEvent_1aac8e3dd3176c5d4ca98eeac71266e00d"></a>

Sets the value of HostType_Optional and also sets HostType_IsSet to true using move semantics.

#### `public inline void `[`ClearHostType`](#structFRHAPI__AuditEvent_1af2d3969a72d3de486e6730f174d54960)`()` <a id="structFRHAPI__AuditEvent_1af2d3969a72d3de486e6730f174d54960"></a>

Clears the value of HostType_Optional and sets HostType_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__AuditEvent_1abdb5a506986706f05f34eeb9f0210f0d)`()` <a id="structFRHAPI__AuditEvent_1abdb5a506986706f05f34eeb9f0210f0d"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__AuditEvent_1a2b6e5c79301b6508ec5abbd4c1deddec)`() const` <a id="structFRHAPI__AuditEvent_1a2b6e5c79301b6508ec5abbd4c1deddec"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__AuditEvent_1a53a19c353868c078065a30ce34ae05c6)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a53a19c353868c078065a30ce34ae05c6"></a>

Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetHostPlayerUuid`](#structFRHAPI__AuditEvent_1ace488d313e0dbb6f8857e15d3b8840e4)`(FGuid & OutValue) const` <a id="structFRHAPI__AuditEvent_1ace488d313e0dbb6f8857e15d3b8840e4"></a>

Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__AuditEvent_1ad3fff41d57b4bd0099f0ddced73ea49e)`()` <a id="structFRHAPI__AuditEvent_1ad3fff41d57b4bd0099f0ddced73ea49e"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__AuditEvent_1a9f1c0590f096121f7e6e3f806e515a3b)`() const` <a id="structFRHAPI__AuditEvent_1a9f1c0590f096121f7e6e3f806e515a3b"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetHostPlayerUuid`](#structFRHAPI__AuditEvent_1a2f06e2e1a8a369c5b9d526be34cac7b7)`(const FGuid & NewValue)` <a id="structFRHAPI__AuditEvent_1a2f06e2e1a8a369c5b9d526be34cac7b7"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetHostPlayerUuid`](#structFRHAPI__AuditEvent_1a1a838b80addb82a5cf8d02e59e96574c)`(FGuid && NewValue)` <a id="structFRHAPI__AuditEvent_1a1a838b80addb82a5cf8d02e59e96574c"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__AuditEvent_1aacdcdb79e5bcac41ff75fc7946d361e9)`()` <a id="structFRHAPI__AuditEvent_1aacdcdb79e5bcac41ff75fc7946d361e9"></a>

Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a27e6599db6430603c094299c0ce52816)`()` <a id="structFRHAPI__AuditEvent_1a27e6599db6430603c094299c0ce52816"></a>

Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a5aae84adb4f2b622d39c05a52ed29778)`() const` <a id="structFRHAPI__AuditEvent_1a5aae84adb4f2b622d39c05a52ed29778"></a>

Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1aa475de4a2f45bc068a616876d0e22e55)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1aa475de4a2f45bc068a616876d0e22e55"></a>

Gets the value of InstanceRequestTemplate_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a0e910250e802e4d43c895598348eee27)`(FGuid & OutValue) const` <a id="structFRHAPI__AuditEvent_1a0e910250e802e4d43c895598348eee27"></a>

Fills OutValue with the value of InstanceRequestTemplate_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__AuditEvent_1acd2b008f549ec2081bff36efff7eb87e)`()` <a id="structFRHAPI__AuditEvent_1acd2b008f549ec2081bff36efff7eb87e"></a>

Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__AuditEvent_1a32d9c7f1697faf23496e060951250674)`() const` <a id="structFRHAPI__AuditEvent_1a32d9c7f1697faf23496e060951250674"></a>

Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1ad656d7b8a38a86f918936db5f9d1b903)`(const FGuid & NewValue)` <a id="structFRHAPI__AuditEvent_1ad656d7b8a38a86f918936db5f9d1b903"></a>

Sets the value of InstanceRequestTemplate_Optional and also sets InstanceRequestTemplate_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1afafc79e052dff62d1fc32f0ce664c657)`(FGuid && NewValue)` <a id="structFRHAPI__AuditEvent_1afafc79e052dff62d1fc32f0ce664c657"></a>

Sets the value of InstanceRequestTemplate_Optional and also sets InstanceRequestTemplate_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceRequestTemplate`](#structFRHAPI__AuditEvent_1a524c77ab8b9f19d870035b5ca5882800)`()` <a id="structFRHAPI__AuditEvent_1a524c77ab8b9f19d870035b5ca5882800"></a>

Clears the value of InstanceRequestTemplate_Optional and sets InstanceRequestTemplate_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetMap`](#structFRHAPI__AuditEvent_1ae29304dfd2078fb9d58b39a5ddcc3c80)`()` <a id="structFRHAPI__AuditEvent_1ae29304dfd2078fb9d58b39a5ddcc3c80"></a>

Gets the value of Map_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMap`](#structFRHAPI__AuditEvent_1a6b6b1d4e992a03988bddceac5212293e)`() const` <a id="structFRHAPI__AuditEvent_1a6b6b1d4e992a03988bddceac5212293e"></a>

Gets the value of Map_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMap`](#structFRHAPI__AuditEvent_1aff99f512234c6aa63aaa07e87a7d0c84)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1aff99f512234c6aa63aaa07e87a7d0c84"></a>

Gets the value of Map_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMap`](#structFRHAPI__AuditEvent_1ab5caa6311a051f4e6f4b5a2cfb142475)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1ab5caa6311a051f4e6f4b5a2cfb142475"></a>

Fills OutValue with the value of Map_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMapOrNull`](#structFRHAPI__AuditEvent_1ae3e5fdf30eda8508e67ff90611327909)`()` <a id="structFRHAPI__AuditEvent_1ae3e5fdf30eda8508e67ff90611327909"></a>

Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMapOrNull`](#structFRHAPI__AuditEvent_1a4fa483caddfa707d019b71f51f9e114d)`() const` <a id="structFRHAPI__AuditEvent_1a4fa483caddfa707d019b71f51f9e114d"></a>

Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMap`](#structFRHAPI__AuditEvent_1a5862c75241083eef9e7f97bd13f80849)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a5862c75241083eef9e7f97bd13f80849"></a>

Sets the value of Map_Optional and also sets Map_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMap`](#structFRHAPI__AuditEvent_1a4ba6f0bcdab30e569a855ae7dd0b2d59)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a4ba6f0bcdab30e569a855ae7dd0b2d59"></a>

Sets the value of Map_Optional and also sets Map_IsSet to true using move semantics.

#### `public inline void `[`ClearMap`](#structFRHAPI__AuditEvent_1a6d6275509b146ad4eba918dbcb22d0ad)`()` <a id="structFRHAPI__AuditEvent_1a6d6275509b146ad4eba918dbcb22d0ad"></a>

Clears the value of Map_Optional and sets Map_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetMode`](#structFRHAPI__AuditEvent_1add27453eb4ec38162568af4621fa8108)`()` <a id="structFRHAPI__AuditEvent_1add27453eb4ec38162568af4621fa8108"></a>

Gets the value of Mode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMode`](#structFRHAPI__AuditEvent_1ad7b254bed04fc625bca8217c2ca120ce)`() const` <a id="structFRHAPI__AuditEvent_1ad7b254bed04fc625bca8217c2ca120ce"></a>

Gets the value of Mode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMode`](#structFRHAPI__AuditEvent_1ab6c0faa0ff73fce7857e952ce7b044a2)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1ab6c0faa0ff73fce7857e952ce7b044a2"></a>

Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMode`](#structFRHAPI__AuditEvent_1a7eaafb2f810d1c72db151eb13aa6df5a)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1a7eaafb2f810d1c72db151eb13aa6df5a"></a>

Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetModeOrNull`](#structFRHAPI__AuditEvent_1a5126cb50f56533feff14bc1cc5304798)`()` <a id="structFRHAPI__AuditEvent_1a5126cb50f56533feff14bc1cc5304798"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetModeOrNull`](#structFRHAPI__AuditEvent_1aff2ca6d9f91971d7a56ca09c14588a88)`() const` <a id="structFRHAPI__AuditEvent_1aff2ca6d9f91971d7a56ca09c14588a88"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMode`](#structFRHAPI__AuditEvent_1aa2afba479bd7c405c1c0990dcecef905)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1aa2afba479bd7c405c1c0990dcecef905"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMode`](#structFRHAPI__AuditEvent_1afb742da8546b37fbedc147651a555637)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1afb742da8546b37fbedc147651a555637"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true using move semantics.

#### `public inline void `[`ClearMode`](#structFRHAPI__AuditEvent_1a9ba2ddca1885eb21298dbb4b623759f8)`()` <a id="structFRHAPI__AuditEvent_1a9ba2ddca1885eb21298dbb4b623759f8"></a>

Clears the value of Mode_Optional and sets Mode_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetAllocationId`](#structFRHAPI__AuditEvent_1a43f1df0078ddcad4ea526ad9b83ea3c2)`()` <a id="structFRHAPI__AuditEvent_1a43f1df0078ddcad4ea526ad9b83ea3c2"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetAllocationId`](#structFRHAPI__AuditEvent_1a1ca3c1bf2fd2619cdf165041cfc28eb5)`() const` <a id="structFRHAPI__AuditEvent_1a1ca3c1bf2fd2619cdf165041cfc28eb5"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetAllocationId`](#structFRHAPI__AuditEvent_1af07323c069d63c94f8c053c03ddaa2be)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1af07323c069d63c94f8c053c03ddaa2be"></a>

Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAllocationId`](#structFRHAPI__AuditEvent_1af06177587ca74057c2780339e19e8a67)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1af06177587ca74057c2780339e19e8a67"></a>

Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetAllocationIdOrNull`](#structFRHAPI__AuditEvent_1ad3431f861a022e108d4f50e3f4ab53b5)`()` <a id="structFRHAPI__AuditEvent_1ad3431f861a022e108d4f50e3f4ab53b5"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__AuditEvent_1a2aa6318686b38991d882f4e23fb26646)`() const` <a id="structFRHAPI__AuditEvent_1a2aa6318686b38991d882f4e23fb26646"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAllocationId`](#structFRHAPI__AuditEvent_1aea8413ec827237dce3fdcc0795397889)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1aea8413ec827237dce3fdcc0795397889"></a>

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAllocationId`](#structFRHAPI__AuditEvent_1a38ae21677cd388c01f1299e54620a6bc)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a38ae21677cd388c01f1299e54620a6bc"></a>

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true using move semantics.

#### `public inline void `[`ClearAllocationId`](#structFRHAPI__AuditEvent_1ab04e25609ffcf65ec41946fec4c51f80)`()` <a id="structFRHAPI__AuditEvent_1ab04e25609ffcf65ec41946fec4c51f80"></a>

Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__AuditEvent_1a6536d31eaf5d64fd707ca3cbb5bf4e13)`()` <a id="structFRHAPI__AuditEvent_1a6536d31eaf5d64fd707ca3cbb5bf4e13"></a>

Gets the value of JoinStatus_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__AuditEvent_1ad40e3c769be936b5ca3221c67880535a)`() const` <a id="structFRHAPI__AuditEvent_1ad40e3c769be936b5ca3221c67880535a"></a>

Gets the value of JoinStatus_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__AuditEvent_1aa5cccd971c6bbec93d6553c6969f194a)`(const ERHAPI_InstanceJoinableStatus & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1aa5cccd971c6bbec93d6553c6969f194a"></a>

Gets the value of JoinStatus_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetJoinStatus`](#structFRHAPI__AuditEvent_1a13b232d79f8644f530025278058fb890)`(ERHAPI_InstanceJoinableStatus & OutValue) const` <a id="structFRHAPI__AuditEvent_1a13b232d79f8644f530025278058fb890"></a>

Fills OutValue with the value of JoinStatus_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__AuditEvent_1a6502ccd8d2966bb451537c5b9ff25948)`()` <a id="structFRHAPI__AuditEvent_1a6502ccd8d2966bb451537c5b9ff25948"></a>

Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__AuditEvent_1a8e7f317dcc90dd08bfdff8ef82088ff7)`() const` <a id="structFRHAPI__AuditEvent_1a8e7f317dcc90dd08bfdff8ef82088ff7"></a>

Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetJoinStatus`](#structFRHAPI__AuditEvent_1af12fe97d840b56ad1c138f1383718f83)`(const ERHAPI_InstanceJoinableStatus & NewValue)` <a id="structFRHAPI__AuditEvent_1af12fe97d840b56ad1c138f1383718f83"></a>

Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true.

#### `public inline FORCEINLINE void `[`SetJoinStatus`](#structFRHAPI__AuditEvent_1afd6863cfe98fe4dd0a0fc1bf5fc6beee)`(ERHAPI_InstanceJoinableStatus && NewValue)` <a id="structFRHAPI__AuditEvent_1afd6863cfe98fe4dd0a0fc1bf5fc6beee"></a>

Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinStatus`](#structFRHAPI__AuditEvent_1aa2055e3edb743366349cb596e48c6dc9)`()` <a id="structFRHAPI__AuditEvent_1aa2055e3edb743366349cb596e48c6dc9"></a>

Clears the value of JoinStatus_Optional and sets JoinStatus_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__AuditEvent_1ac5c01487f2c78210eddb411ee2175911)`()` <a id="structFRHAPI__AuditEvent_1ac5c01487f2c78210eddb411ee2175911"></a>

Gets the value of JoinParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__AuditEvent_1a89db963adc7ed928d30d843e089896b8)`() const` <a id="structFRHAPI__AuditEvent_1a89db963adc7ed928d30d843e089896b8"></a>

Gets the value of JoinParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__AuditEvent_1a109ce3e6b83566b301fcca1a711aa479)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a109ce3e6b83566b301fcca1a711aa479"></a>

Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetJoinParams`](#structFRHAPI__AuditEvent_1a4593eac653e5f318493e003298bd0c4b)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & OutValue) const` <a id="structFRHAPI__AuditEvent_1a4593eac653e5f318493e003298bd0c4b"></a>

Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__AuditEvent_1a6e6925dc3584d170219edfa481fe567f)`()` <a id="structFRHAPI__AuditEvent_1a6e6925dc3584d170219edfa481fe567f"></a>

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__AuditEvent_1a2b7a23230e85c09d81127d2f71fa0ab9)`() const` <a id="structFRHAPI__AuditEvent_1a2b7a23230e85c09d81127d2f71fa0ab9"></a>

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetJoinParams`](#structFRHAPI__AuditEvent_1a608e224c4103dfd14d18ac38f5cd4530)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & NewValue)` <a id="structFRHAPI__AuditEvent_1a608e224c4103dfd14d18ac38f5cd4530"></a>

Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.

#### `public inline FORCEINLINE void `[`SetJoinParams`](#structFRHAPI__AuditEvent_1a237d4d7ab4becf4a03cf4d89d0e525da)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` && NewValue)` <a id="structFRHAPI__AuditEvent_1a237d4d7ab4becf4a03cf4d89d0e525da"></a>

Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinParams`](#structFRHAPI__AuditEvent_1a4c60bb357f152966a362b08045e787be)`()` <a id="structFRHAPI__AuditEvent_1a4c60bb357f152966a362b08045e787be"></a>

Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__AuditEvent_1a8ef3aa72695fc3402086f45ab054885c)`()` <a id="structFRHAPI__AuditEvent_1a8ef3aa72695fc3402086f45ab054885c"></a>

Gets the value of InstanceHealth_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__AuditEvent_1abea092387434db3b7f5a538e8f72e095)`() const` <a id="structFRHAPI__AuditEvent_1abea092387434db3b7f5a538e8f72e095"></a>

Gets the value of InstanceHealth_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__AuditEvent_1a37a5641bd15e4a890de7554bbf427b0e)`(const ERHAPI_InstanceHealthStatus & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a37a5641bd15e4a890de7554bbf427b0e"></a>

Gets the value of InstanceHealth_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstanceHealth`](#structFRHAPI__AuditEvent_1a9733a7f053e59c025aaba01ca89892be)`(ERHAPI_InstanceHealthStatus & OutValue) const` <a id="structFRHAPI__AuditEvent_1a9733a7f053e59c025aaba01ca89892be"></a>

Fills OutValue with the value of InstanceHealth_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__AuditEvent_1a5f4e6f66e6974f0bca6b58e7e362cb5d)`()` <a id="structFRHAPI__AuditEvent_1a5f4e6f66e6974f0bca6b58e7e362cb5d"></a>

Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__AuditEvent_1af3dfdabc5b3b911e627a29d48f57b163)`() const` <a id="structFRHAPI__AuditEvent_1af3dfdabc5b3b911e627a29d48f57b163"></a>

Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstanceHealth`](#structFRHAPI__AuditEvent_1a6d47969038d64b9db300f6f93220a56d)`(const ERHAPI_InstanceHealthStatus & NewValue)` <a id="structFRHAPI__AuditEvent_1a6d47969038d64b9db300f6f93220a56d"></a>

Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstanceHealth`](#structFRHAPI__AuditEvent_1a08c98e664563f654d885d50ae3826a17)`(ERHAPI_InstanceHealthStatus && NewValue)` <a id="structFRHAPI__AuditEvent_1a08c98e664563f654d885d50ae3826a17"></a>

Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceHealth`](#structFRHAPI__AuditEvent_1af8b4b7b6a59f3d4bb4ba9529dc729d7c)`()` <a id="structFRHAPI__AuditEvent_1af8b4b7b6a59f3d4bb4ba9529dc729d7c"></a>

Clears the value of InstanceHealth_Optional and sets InstanceHealth_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetQueueId`](#structFRHAPI__AuditEvent_1a443ad0dee88ef3a02c7c124c64308378)`()` <a id="structFRHAPI__AuditEvent_1a443ad0dee88ef3a02c7c124c64308378"></a>

Gets the value of QueueId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetQueueId`](#structFRHAPI__AuditEvent_1aae54e0b4fbce4690131a0529b9b1d803)`() const` <a id="structFRHAPI__AuditEvent_1aae54e0b4fbce4690131a0529b9b1d803"></a>

Gets the value of QueueId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetQueueId`](#structFRHAPI__AuditEvent_1ad35ebebc38b4cb09d6f8599a5f12b304)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1ad35ebebc38b4cb09d6f8599a5f12b304"></a>

Gets the value of QueueId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetQueueId`](#structFRHAPI__AuditEvent_1aa2cc1f5aa990e71c91de9e31bab6630c)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1aa2cc1f5aa990e71c91de9e31bab6630c"></a>

Fills OutValue with the value of QueueId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetQueueIdOrNull`](#structFRHAPI__AuditEvent_1a8169fd1794171b9f493698d95654f6b2)`()` <a id="structFRHAPI__AuditEvent_1a8169fd1794171b9f493698d95654f6b2"></a>

Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetQueueIdOrNull`](#structFRHAPI__AuditEvent_1a371cc60ce34be339fdb49a6fc8adccdb)`() const` <a id="structFRHAPI__AuditEvent_1a371cc60ce34be339fdb49a6fc8adccdb"></a>

Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__AuditEvent_1a40cd09d409535c379ad0da44f3ab3927)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a40cd09d409535c379ad0da44f3ab3927"></a>

Sets the value of QueueId_Optional and also sets QueueId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__AuditEvent_1a63b3dcd2bf0ecbc5d232d19f8cda8b36)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a63b3dcd2bf0ecbc5d232d19f8cda8b36"></a>

Sets the value of QueueId_Optional and also sets QueueId_IsSet to true using move semantics.

#### `public inline void `[`ClearQueueId`](#structFRHAPI__AuditEvent_1a905562c31a2b45c0ade8bcfe9e0cbfdf)`()` <a id="structFRHAPI__AuditEvent_1a905562c31a2b45c0ade8bcfe9e0cbfdf"></a>

Clears the value of QueueId_Optional and sets QueueId_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetTicketId`](#structFRHAPI__AuditEvent_1abec72192b75797baf855d4756f87afb4)`()` <a id="structFRHAPI__AuditEvent_1abec72192b75797baf855d4756f87afb4"></a>

Gets the value of TicketId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetTicketId`](#structFRHAPI__AuditEvent_1a66911c6a979fb9514072fb0a2322beec)`() const` <a id="structFRHAPI__AuditEvent_1a66911c6a979fb9514072fb0a2322beec"></a>

Gets the value of TicketId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetTicketId`](#structFRHAPI__AuditEvent_1a85cbf7d345a93f4458f4ae339961d5ce)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a85cbf7d345a93f4458f4ae339961d5ce"></a>

Gets the value of TicketId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTicketId`](#structFRHAPI__AuditEvent_1a68c8343207cc2e545538b09741726060)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1a68c8343207cc2e545538b09741726060"></a>

Fills OutValue with the value of TicketId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetTicketIdOrNull`](#structFRHAPI__AuditEvent_1a5889d85349a4ef714abb4b12dd49f6da)`()` <a id="structFRHAPI__AuditEvent_1a5889d85349a4ef714abb4b12dd49f6da"></a>

Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetTicketIdOrNull`](#structFRHAPI__AuditEvent_1acda6e636dbaa19c34e5c658f75c2515c)`() const` <a id="structFRHAPI__AuditEvent_1acda6e636dbaa19c34e5c658f75c2515c"></a>

Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTicketId`](#structFRHAPI__AuditEvent_1a8b3c5853df2ef06e9e39a647e3f7f1a7)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a8b3c5853df2ef06e9e39a647e3f7f1a7"></a>

Sets the value of TicketId_Optional and also sets TicketId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTicketId`](#structFRHAPI__AuditEvent_1ae754f3560bc916632414ae591deb5e14)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1ae754f3560bc916632414ae591deb5e14"></a>

Sets the value of TicketId_Optional and also sets TicketId_IsSet to true using move semantics.

#### `public inline void `[`ClearTicketId`](#structFRHAPI__AuditEvent_1a3a95477a2909de1f2322a6dc33532dd5)`()` <a id="structFRHAPI__AuditEvent_1a3a95477a2909de1f2322a6dc33532dd5"></a>

Clears the value of TicketId_Optional and sets TicketId_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__AuditEvent_1a3a305722ce164dec0572d9a9fe17357d)`()` <a id="structFRHAPI__AuditEvent_1a3a305722ce164dec0572d9a9fe17357d"></a>

Gets the value of AdditionalParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__AuditEvent_1a9a3c794142657c97d5bc3a71f6899aa7)`() const` <a id="structFRHAPI__AuditEvent_1a9a3c794142657c97d5bc3a71f6899aa7"></a>

Gets the value of AdditionalParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__AuditEvent_1ad62276a3a951cee521f893326f62d023)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1ad62276a3a951cee521f893326f62d023"></a>

Gets the value of AdditionalParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAdditionalParams`](#structFRHAPI__AuditEvent_1ad0fedff28d634dccb6e1c07c42cb1271)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & OutValue) const` <a id="structFRHAPI__AuditEvent_1ad0fedff28d634dccb6e1c07c42cb1271"></a>

Fills OutValue with the value of AdditionalParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalParamsOrNull`](#structFRHAPI__AuditEvent_1ad1844f7729bcc3816e495420e313f588)`()` <a id="structFRHAPI__AuditEvent_1ad1844f7729bcc3816e495420e313f588"></a>

Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalParamsOrNull`](#structFRHAPI__AuditEvent_1a120630b5bbf5c44124c574f3d03e67b4)`() const` <a id="structFRHAPI__AuditEvent_1a120630b5bbf5c44124c574f3d03e67b4"></a>

Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAdditionalParams`](#structFRHAPI__AuditEvent_1ab7bd3042b17aeabf2f12a63251c9565e)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & NewValue)` <a id="structFRHAPI__AuditEvent_1ab7bd3042b17aeabf2f12a63251c9565e"></a>

Sets the value of AdditionalParams_Optional and also sets AdditionalParams_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAdditionalParams`](#structFRHAPI__AuditEvent_1a6749539c425259648dfa86316a2816a6)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` && NewValue)` <a id="structFRHAPI__AuditEvent_1a6749539c425259648dfa86316a2816a6"></a>

Sets the value of AdditionalParams_Optional and also sets AdditionalParams_IsSet to true using move semantics.

#### `public inline void `[`ClearAdditionalParams`](#structFRHAPI__AuditEvent_1a576652cb7ff7d291a1235fe1116724c4)`()` <a id="structFRHAPI__AuditEvent_1a576652cb7ff7d291a1235fe1116724c4"></a>

Clears the value of AdditionalParams_Optional and sets AdditionalParams_IsSet to false.

#### `public inline FORCEINLINE TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__AuditEvent_1a27443210868c7f4c06cf4d5a7b3a3626)`()` <a id="structFRHAPI__AuditEvent_1a27443210868c7f4c06cf4d5a7b3a3626"></a>

Gets the value of MapPreferences_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__AuditEvent_1a99347984b30a408f955bdc07623f599d)`() const` <a id="structFRHAPI__AuditEvent_1a99347984b30a408f955bdc07623f599d"></a>

Gets the value of MapPreferences_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__AuditEvent_1a9260b6ccbc964a42c57685f2844ab599)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a9260b6ccbc964a42c57685f2844ab599"></a>

Gets the value of MapPreferences_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMapPreferences`](#structFRHAPI__AuditEvent_1a521e3490d8d29a9356132c2649b8fbb9)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__AuditEvent_1a521e3490d8d29a9356132c2649b8fbb9"></a>

Fills OutValue with the value of MapPreferences_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__AuditEvent_1ab8caae08d146a5407d04b2377a16bf05)`()` <a id="structFRHAPI__AuditEvent_1ab8caae08d146a5407d04b2377a16bf05"></a>

Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__AuditEvent_1acc004b7af034fb8d49dd9c56540220a4)`() const` <a id="structFRHAPI__AuditEvent_1acc004b7af034fb8d49dd9c56540220a4"></a>

Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMapPreferences`](#structFRHAPI__AuditEvent_1a3dba1d1a3c388caba1447a0eac5a88ff)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__AuditEvent_1a3dba1d1a3c388caba1447a0eac5a88ff"></a>

Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMapPreferences`](#structFRHAPI__AuditEvent_1a0d339f5283318ee6ff56b807e02093b2)`(TArray< FString > && NewValue)` <a id="structFRHAPI__AuditEvent_1a0d339f5283318ee6ff56b807e02093b2"></a>

Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true using move semantics.

#### `public inline void `[`ClearMapPreferences`](#structFRHAPI__AuditEvent_1a33c453410167253e097ed36c2ee93f44)`()` <a id="structFRHAPI__AuditEvent_1a33c453410167253e097ed36c2ee93f44"></a>

Clears the value of MapPreferences_Optional and sets MapPreferences_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetQueuedSessionId`](#structFRHAPI__AuditEvent_1a6036364e49ec3e4778f10111f569f114)`()` <a id="structFRHAPI__AuditEvent_1a6036364e49ec3e4778f10111f569f114"></a>

Gets the value of QueuedSessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetQueuedSessionId`](#structFRHAPI__AuditEvent_1a4219fadaf4bd4555b0b91bc67eab268c)`() const` <a id="structFRHAPI__AuditEvent_1a4219fadaf4bd4555b0b91bc67eab268c"></a>

Gets the value of QueuedSessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetQueuedSessionId`](#structFRHAPI__AuditEvent_1a3f82ab9a12945e073d626ec8e8023fec)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a3f82ab9a12945e073d626ec8e8023fec"></a>

Gets the value of QueuedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetQueuedSessionId`](#structFRHAPI__AuditEvent_1ab54c3afbd85d98741d4c1006e20fed29)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1ab54c3afbd85d98741d4c1006e20fed29"></a>

Fills OutValue with the value of QueuedSessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__AuditEvent_1a880e274386cd4c1d2a795323c8088717)`()` <a id="structFRHAPI__AuditEvent_1a880e274386cd4c1d2a795323c8088717"></a>

Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__AuditEvent_1a65d5aeb12db371ffdf3193bfa6f925a4)`() const` <a id="structFRHAPI__AuditEvent_1a65d5aeb12db371ffdf3193bfa6f925a4"></a>

Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetQueuedSessionId`](#structFRHAPI__AuditEvent_1a618b2e5a9564cb47cf2363985ebe3b8a)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a618b2e5a9564cb47cf2363985ebe3b8a"></a>

Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetQueuedSessionId`](#structFRHAPI__AuditEvent_1a6febba679409dcca1294838450f4570f)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a6febba679409dcca1294838450f4570f"></a>

Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearQueuedSessionId`](#structFRHAPI__AuditEvent_1aba3557a10d63a3d8efba7904f34c1c92)`()` <a id="structFRHAPI__AuditEvent_1aba3557a10d63a3d8efba7904f34c1c92"></a>

Clears the value of QueuedSessionId_Optional and sets QueuedSessionId_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__AuditEvent_1ab03d4b0311287d906cc2a41aa218215d)`()` <a id="structFRHAPI__AuditEvent_1ab03d4b0311287d906cc2a41aa218215d"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__AuditEvent_1adc38ea95ad381f6660adac47f45a17b9)`() const` <a id="structFRHAPI__AuditEvent_1adc38ea95ad381f6660adac47f45a17b9"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__AuditEvent_1a0a8d1b5aae48d0a461e47706247a2cd5)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a0a8d1b5aae48d0a461e47706247a2cd5"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__AuditEvent_1aebcc73c8a057b01b3b7499fddb1d007c)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1aebcc73c8a057b01b3b7499fddb1d007c"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__AuditEvent_1af1492c8924e23b70d8a2724317b7c46e)`()` <a id="structFRHAPI__AuditEvent_1af1492c8924e23b70d8a2724317b7c46e"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__AuditEvent_1a4cdff2104e5408efbccf6c36f10fbac9)`() const` <a id="structFRHAPI__AuditEvent_1a4cdff2104e5408efbccf6c36f10fbac9"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__AuditEvent_1a3160da921f388f9e9bb8af4eea0debae)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a3160da921f388f9e9bb8af4eea0debae"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__AuditEvent_1a86634460ed69bf9ebdf0880f4dddbb36)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a86634460ed69bf9ebdf0880f4dddbb36"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__AuditEvent_1abd7aede0da0d4e281062c95871342c64)`()` <a id="structFRHAPI__AuditEvent_1abd7aede0da0d4e281062c95871342c64"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetTicketWaitSeconds`](#structFRHAPI__AuditEvent_1a47fffac728866f7c2f7812faaf8421f5)`()` <a id="structFRHAPI__AuditEvent_1a47fffac728866f7c2f7812faaf8421f5"></a>

Gets the value of TicketWaitSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTicketWaitSeconds`](#structFRHAPI__AuditEvent_1a5ff376fe82f1b70790ba667ba387cc79)`() const` <a id="structFRHAPI__AuditEvent_1a5ff376fe82f1b70790ba667ba387cc79"></a>

Gets the value of TicketWaitSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTicketWaitSeconds`](#structFRHAPI__AuditEvent_1ad846f1e74e8df905e50f6d90c516096f)`(const int32 & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1ad846f1e74e8df905e50f6d90c516096f"></a>

Gets the value of TicketWaitSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTicketWaitSeconds`](#structFRHAPI__AuditEvent_1a496024b3578c488382d8e616de1d1cdd)`(int32 & OutValue) const` <a id="structFRHAPI__AuditEvent_1a496024b3578c488382d8e616de1d1cdd"></a>

Fills OutValue with the value of TicketWaitSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetTicketWaitSecondsOrNull`](#structFRHAPI__AuditEvent_1a873529affe489032379c97186db53da3)`()` <a id="structFRHAPI__AuditEvent_1a873529affe489032379c97186db53da3"></a>

Returns a pointer to TicketWaitSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetTicketWaitSecondsOrNull`](#structFRHAPI__AuditEvent_1a32a3abc8aff639b71ea51a8c7bf619f8)`() const` <a id="structFRHAPI__AuditEvent_1a32a3abc8aff639b71ea51a8c7bf619f8"></a>

Returns a pointer to TicketWaitSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTicketWaitSeconds`](#structFRHAPI__AuditEvent_1ad080308fb2f5599d7807859099b0e521)`(const int32 & NewValue)` <a id="structFRHAPI__AuditEvent_1ad080308fb2f5599d7807859099b0e521"></a>

Sets the value of TicketWaitSeconds_Optional and also sets TicketWaitSeconds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTicketWaitSeconds`](#structFRHAPI__AuditEvent_1ae206533673eafbda4c66047e82586670)`(int32 && NewValue)` <a id="structFRHAPI__AuditEvent_1ae206533673eafbda4c66047e82586670"></a>

Sets the value of TicketWaitSeconds_Optional and also sets TicketWaitSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearTicketWaitSeconds`](#structFRHAPI__AuditEvent_1a3af20dcc3e27f27208426a7fea762903)`()` <a id="structFRHAPI__AuditEvent_1a3af20dcc3e27f27208426a7fea762903"></a>

Clears the value of TicketWaitSeconds_Optional and sets TicketWaitSeconds_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_TicketWaitSeconds`](#structFRHAPI__AuditEvent_1a6797f39e672315ad1358ba0895c92f78)`()` <a id="structFRHAPI__AuditEvent_1a6797f39e672315ad1358ba0895c92f78"></a>

Returns the default value of TicketWaitSeconds.

#### `public inline FORCEINLINE FString & `[`GetMatchMakingProfileId`](#structFRHAPI__AuditEvent_1acb1600a4a6640ee9a27ee60303e2acd7)`()` <a id="structFRHAPI__AuditEvent_1acb1600a4a6640ee9a27ee60303e2acd7"></a>

Gets the value of MatchMakingProfileId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__AuditEvent_1aa7195943da5814064ef074dcc5a9540c)`() const` <a id="structFRHAPI__AuditEvent_1aa7195943da5814064ef074dcc5a9540c"></a>

Gets the value of MatchMakingProfileId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__AuditEvent_1a88999dbc0894b901009f90d67641f4a9)`(const FString & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a88999dbc0894b901009f90d67641f4a9"></a>

Gets the value of MatchMakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatchMakingProfileId`](#structFRHAPI__AuditEvent_1a2f5350438cb0edaf803c82a3e1e1bc04)`(FString & OutValue) const` <a id="structFRHAPI__AuditEvent_1a2f5350438cb0edaf803c82a3e1e1bc04"></a>

Fills OutValue with the value of MatchMakingProfileId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMatchMakingProfileIdOrNull`](#structFRHAPI__AuditEvent_1a35edb18190f7ebba96f523f98bf2d43c)`()` <a id="structFRHAPI__AuditEvent_1a35edb18190f7ebba96f523f98bf2d43c"></a>

Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMatchMakingProfileIdOrNull`](#structFRHAPI__AuditEvent_1a04e4fb4c498802cb90b893e7260398ed)`() const` <a id="structFRHAPI__AuditEvent_1a04e4fb4c498802cb90b893e7260398ed"></a>

Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatchMakingProfileId`](#structFRHAPI__AuditEvent_1a1eccd1f25d1c6957bb42b7a3658af5bd)`(const FString & NewValue)` <a id="structFRHAPI__AuditEvent_1a1eccd1f25d1c6957bb42b7a3658af5bd"></a>

Sets the value of MatchMakingProfileId_Optional and also sets MatchMakingProfileId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatchMakingProfileId`](#structFRHAPI__AuditEvent_1a0ad99ab96e494ea3e56db97640b71bcb)`(FString && NewValue)` <a id="structFRHAPI__AuditEvent_1a0ad99ab96e494ea3e56db97640b71bcb"></a>

Sets the value of MatchMakingProfileId_Optional and also sets MatchMakingProfileId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchMakingProfileId`](#structFRHAPI__AuditEvent_1aa7bfe9b037f73477af70134787142759)`()` <a id="structFRHAPI__AuditEvent_1aa7bfe9b037f73477af70134787142759"></a>

Clears the value of MatchMakingProfileId_Optional and sets MatchMakingProfileId_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a23d4805b96be652dd6a5929162030038)`()` <a id="structFRHAPI__AuditEvent_1a23d4805b96be652dd6a5929162030038"></a>

Gets the value of RequestingUserUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a6f98ded1cf1ad48822085fc425506e58)`() const` <a id="structFRHAPI__AuditEvent_1a6f98ded1cf1ad48822085fc425506e58"></a>

Gets the value of RequestingUserUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a6deb70d1480d969d94b0ad7c86ca235b)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__AuditEvent_1a6deb70d1480d969d94b0ad7c86ca235b"></a>

Gets the value of RequestingUserUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRequestingUserUuid`](#structFRHAPI__AuditEvent_1ac079ea122bd2835637c0883f12138fd7)`(FGuid & OutValue) const` <a id="structFRHAPI__AuditEvent_1ac079ea122bd2835637c0883f12138fd7"></a>

Fills OutValue with the value of RequestingUserUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetRequestingUserUuidOrNull`](#structFRHAPI__AuditEvent_1aa33adc865f5a707ed07e01a5380efa93)`()` <a id="structFRHAPI__AuditEvent_1aa33adc865f5a707ed07e01a5380efa93"></a>

Returns a pointer to RequestingUserUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetRequestingUserUuidOrNull`](#structFRHAPI__AuditEvent_1a0d15be1ce59194381c9de81116e1972c)`() const` <a id="structFRHAPI__AuditEvent_1a0d15be1ce59194381c9de81116e1972c"></a>

Returns a pointer to RequestingUserUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRequestingUserUuid`](#structFRHAPI__AuditEvent_1afda425720a59f56242057ff12dc3e095)`(const FGuid & NewValue)` <a id="structFRHAPI__AuditEvent_1afda425720a59f56242057ff12dc3e095"></a>

Sets the value of RequestingUserUuid_Optional and also sets RequestingUserUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRequestingUserUuid`](#structFRHAPI__AuditEvent_1a9e4bc1b052ae7720373c1f5ff5bde56e)`(FGuid && NewValue)` <a id="structFRHAPI__AuditEvent_1a9e4bc1b052ae7720373c1f5ff5bde56e"></a>

Sets the value of RequestingUserUuid_Optional and also sets RequestingUserUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearRequestingUserUuid`](#structFRHAPI__AuditEvent_1a75d20856ad2d8cccdcf2157a1238c0c1)`()` <a id="structFRHAPI__AuditEvent_1a75d20856ad2d8cccdcf2157a1238c0c1"></a>

Clears the value of RequestingUserUuid_Optional and sets RequestingUserUuid_IsSet to false.

#### `public inline FORCEINLINE FDateTime & `[`GetEventDatetime`](#structFRHAPI__AuditEvent_1aa1790c3091e5515eb672a6453167ab94)`()` <a id="structFRHAPI__AuditEvent_1aa1790c3091e5515eb672a6453167ab94"></a>

Gets the value of EventDatetime.

#### `public inline FORCEINLINE const FDateTime & `[`GetEventDatetime`](#structFRHAPI__AuditEvent_1af3ca003110a732421a9385db3cb72713)`() const` <a id="structFRHAPI__AuditEvent_1af3ca003110a732421a9385db3cb72713"></a>

Gets the value of EventDatetime.

#### `public inline FORCEINLINE void `[`SetEventDatetime`](#structFRHAPI__AuditEvent_1a7f0acb4ac645f70d78eaac130fb823e9)`(const FDateTime & NewValue)` <a id="structFRHAPI__AuditEvent_1a7f0acb4ac645f70d78eaac130fb823e9"></a>

Sets the value of EventDatetime.

#### `public inline FORCEINLINE void `[`SetEventDatetime`](#structFRHAPI__AuditEvent_1a186bcef6876e53c8468f5f0981301fc0)`(FDateTime && NewValue)` <a id="structFRHAPI__AuditEvent_1a186bcef6876e53c8468f5f0981301fc0"></a>

Sets the value of EventDatetime using move semantics.

