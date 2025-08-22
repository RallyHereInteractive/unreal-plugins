---
title: RHAPI_CreateAuditRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_CreateAuditRequest`](#structFRHAPI__CreateAuditRequest) | 

## struct `FRHAPI_CreateAuditRequest` <a id="structFRHAPI__CreateAuditRequest"></a>

```
struct FRHAPI_CreateAuditRequest
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`EventName`](#structFRHAPI__CreateAuditRequest_1ae34f7ce8c8b4026dac0e127a26675792) | Name of the audit event you are creating. Customer created events will be prepended with 'customer.'.
`public FString `[`SessionId`](#structFRHAPI__CreateAuditRequest_1a96ea5b0bba5f6138edd463fe70754e12) | ID of the session this event occurred in.
`public FString `[`Reason_Optional`](#structFRHAPI__CreateAuditRequest_1ac966719ae7731b9d6838580a935c46fe) | Reason for this event to occur.
`public bool `[`Reason_IsSet`](#structFRHAPI__CreateAuditRequest_1af5b2daa64d6e20dba16e9e7ae043487b) | true if Reason_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__CreateAuditRequest_1adcb02cf43f2f10325f81639c5c8f2406) | Custom data for this audit request.
`public bool `[`CustomData_IsSet`](#structFRHAPI__CreateAuditRequest_1a65dca695cd5d761a47f019c3de090c34) | true if CustomData_Optional has been set to a value
`public FString `[`SessionType_Optional`](#structFRHAPI__CreateAuditRequest_1ac5167ce52494f7cc9fceabe4b75c75dc) | Type of the session this event occurred in.
`public bool `[`SessionType_IsSet`](#structFRHAPI__CreateAuditRequest_1a8d32416409395e59bf980547fbc8f1f2) | true if SessionType_Optional has been set to a value
`public FString `[`RegionId_Optional`](#structFRHAPI__CreateAuditRequest_1a744aaaa83eaf7c9cf646cc77541d83d3) | Region ID for this event.
`public bool `[`RegionId_IsSet`](#structFRHAPI__CreateAuditRequest_1a4d214e0d34e156c3a2b92d2ab65fd475) | true if RegionId_Optional has been set to a value
`public bool `[`Joinable_Optional`](#structFRHAPI__CreateAuditRequest_1a9f3304100757b064fdbd47075d7c0c55) | Whether or not the session is publicly joinable.
`public bool `[`Joinable_IsSet`](#structFRHAPI__CreateAuditRequest_1a259b8292d3a4ab56b356e524bea80519) | true if Joinable_Optional has been set to a value
`public `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` `[`Joinability_Optional`](#structFRHAPI__CreateAuditRequest_1a3a6e998eac6b7152fbf7aa67bbae4b23) | Joinability flags about the session.
`public bool `[`Joinability_IsSet`](#structFRHAPI__CreateAuditRequest_1a94fa9cddcd9b3ae78c94cf4d210b5bb9) | true if Joinability_Optional has been set to a value
`public TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > `[`UpdatedTeams_Optional`](#structFRHAPI__CreateAuditRequest_1aa8d813efe40db81fda5ade9961ae3c9f) | Updated team numbers and sizes.
`public bool `[`UpdatedTeams_IsSet`](#structFRHAPI__CreateAuditRequest_1a6b5582a227f80efdb2af6f9327d1b95a) | true if UpdatedTeams_Optional has been set to a value
`public ERHAPI_InviteSource `[`Source_Optional`](#structFRHAPI__CreateAuditRequest_1a22d4a4ddfe83c8d432f57c190d104272) | The source of an invite.
`public bool `[`Source_IsSet`](#structFRHAPI__CreateAuditRequest_1a83901ab582ce004b5d67bed317c63201) | true if Source_Optional has been set to a value
`public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__CreateAuditRequest_1aef8703ff5d7ef629e9247a5b3a275f1f) | UUID of a specific player being effected in this event.
`public bool `[`PlayerUuid_IsSet`](#structFRHAPI__CreateAuditRequest_1a6d63c9c319b655d832c31aed9867d31e) | true if PlayerUuid_Optional has been set to a value
`public int32 `[`TeamId_Optional`](#structFRHAPI__CreateAuditRequest_1a72eae3936fd40619c9e96954a471dc1b) | ID of the team being effected in this event.
`public bool `[`TeamId_IsSet`](#structFRHAPI__CreateAuditRequest_1a6de1cdc9673c15ca162970cc481d3fea) | true if TeamId_Optional has been set to a value
`public FString `[`InvitedSessionId_Optional`](#structFRHAPI__CreateAuditRequest_1a0fd113d1d33f120bf8060ba29aa94e76) | ID of the session being invited in this event.
`public bool `[`InvitedSessionId_IsSet`](#structFRHAPI__CreateAuditRequest_1acfaf8fdaa5f1de6131c0ff1f4a3f6bb3) | true if InvitedSessionId_Optional has been set to a value
`public FString `[`RemovedSessionId_Optional`](#structFRHAPI__CreateAuditRequest_1a155be9ae832737f9d919bbdd96c40221) | ID of the session being removed in this event.
`public bool `[`RemovedSessionId_IsSet`](#structFRHAPI__CreateAuditRequest_1a9476149ebc3d770e96f76b9b7eaf13b3) | true if RemovedSessionId_Optional has been set to a value
`public FString `[`Version_Optional`](#structFRHAPI__CreateAuditRequest_1a625d9b4048249dcda8ba4e6923e22656) | Version updated in this event.
`public bool `[`Version_IsSet`](#structFRHAPI__CreateAuditRequest_1a4a86632f8adbfcf8ce872a62314a7912) | true if Version_Optional has been set to a value
`public `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` `[`ClientSettings_Optional`](#structFRHAPI__CreateAuditRequest_1af8355202a720d072c45922c9b0e87d83) | Client settings updated as part of this event.
`public bool `[`ClientSettings_IsSet`](#structFRHAPI__CreateAuditRequest_1a8a1a393006948116c21c6ca4196c1522) | true if ClientSettings_Optional has been set to a value
`public `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` `[`CrossplayPreferences_Optional`](#structFRHAPI__CreateAuditRequest_1a5c575064b352dacbe6207d19c606c3ca) | Crossplay preferences updated as part of this event.
`public bool `[`CrossplayPreferences_IsSet`](#structFRHAPI__CreateAuditRequest_1a558741f351c43cb4d0d5d2d4b0acd216) | true if CrossplayPreferences_Optional has been set to a value
`public ERHAPI_SessionPlayerStatus `[`PlayerStatus_Optional`](#structFRHAPI__CreateAuditRequest_1ae7a0b2ca6f57a40ac73b2de6a53c99cd) | Player's status updated as part of this event.
`public bool `[`PlayerStatus_IsSet`](#structFRHAPI__CreateAuditRequest_1a6d8b775c09d21bc36b4a7ceaa40f8b8d) | true if PlayerStatus_Optional has been set to a value
`public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__CreateAuditRequest_1aaa958d58d0207abb32ab381565ce6cb1) | Platform updated as part of this event.
`public bool `[`Platform_IsSet`](#structFRHAPI__CreateAuditRequest_1a8fe8f6efb8a139ab3d0ee449d6ecc61e) | true if Platform_Optional has been set to a value
`public FString `[`PlatformSessionId_Optional`](#structFRHAPI__CreateAuditRequest_1a8be4994b5b51d169bf0b90621eee4098) | ID of the platform session being effected in this event.
`public bool `[`PlatformSessionId_IsSet`](#structFRHAPI__CreateAuditRequest_1aea46d48487f9029cb84b1f4e41a9599f) | true if PlatformSessionId_Optional has been set to a value
`public FString `[`InstanceId_Optional`](#structFRHAPI__CreateAuditRequest_1ab9dc8810646d503afe67d17e8373b7ad) | ID of the instance being effected in this event.
`public bool `[`InstanceId_IsSet`](#structFRHAPI__CreateAuditRequest_1a7185293d84a7b4f8bb6cbf5aa1519d95) | true if InstanceId_Optional has been set to a value
`public ERHAPI_HostType `[`HostType_Optional`](#structFRHAPI__CreateAuditRequest_1ae88cc44817501b46a12f686a36cd8fb7) | Type of the host being effected in this event.
`public bool `[`HostType_IsSet`](#structFRHAPI__CreateAuditRequest_1a0de246bfc46e1e712020c71a3648a595) | true if HostType_Optional has been set to a value
`public FGuid `[`HostPlayerUuid_Optional`](#structFRHAPI__CreateAuditRequest_1afe58bae101bca55046fe0e6974d6efa0) | UUID of the player hosting during this event.
`public bool `[`HostPlayerUuid_IsSet`](#structFRHAPI__CreateAuditRequest_1a87f2e34ff5eff166a7a77e17d9af82dd) | true if HostPlayerUuid_Optional has been set to a value
`public FGuid `[`InstanceRequestTemplate_Optional`](#structFRHAPI__CreateAuditRequest_1a3e7ce81809e67c7f40e52481b39c8c54) | ID of the instance request template being used in this event.
`public bool `[`InstanceRequestTemplate_IsSet`](#structFRHAPI__CreateAuditRequest_1ae93e20acaaf87c32ce1c6c27a2367fbf) | true if InstanceRequestTemplate_Optional has been set to a value
`public FString `[`Map_Optional`](#structFRHAPI__CreateAuditRequest_1a4fc3f650df5a9895c375361f3c0ba46b) | Map being used in this event.
`public bool `[`Map_IsSet`](#structFRHAPI__CreateAuditRequest_1a3d678693191517d49b22dcf83851b8e3) | true if Map_Optional has been set to a value
`public FString `[`Mode_Optional`](#structFRHAPI__CreateAuditRequest_1aa57bb3b654ccae7ea6d569c0f5a9d564) | Mode being used in this event.
`public bool `[`Mode_IsSet`](#structFRHAPI__CreateAuditRequest_1afb75c6dec715b5308da4e078c34f37d3) | true if Mode_Optional has been set to a value
`public FString `[`AllocationId_Optional`](#structFRHAPI__CreateAuditRequest_1a8de4f0ff7d678ea5cdb8c6e18c858579) | Allocation ID of instance in this event.
`public bool `[`AllocationId_IsSet`](#structFRHAPI__CreateAuditRequest_1ae6ce17f4e166d5ae42a2bd36540c6d23) | true if AllocationId_Optional has been set to a value
`public ERHAPI_InstanceJoinableStatus `[`JoinStatus_Optional`](#structFRHAPI__CreateAuditRequest_1a80d15eb2ff72db95513034689a8e5f49) | Instance's joinability status.
`public bool `[`JoinStatus_IsSet`](#structFRHAPI__CreateAuditRequest_1afcc5070c0d78ee8eb09fb89bce690631) | true if JoinStatus_Optional has been set to a value
`public `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` `[`JoinParams_Optional`](#structFRHAPI__CreateAuditRequest_1adf0f4eb09c63e7e31ebd27f43321e295) | Instance's join parameters for this event.
`public bool `[`JoinParams_IsSet`](#structFRHAPI__CreateAuditRequest_1afae35410e3949dfa72b4c019a69f4a83) | true if JoinParams_Optional has been set to a value
`public ERHAPI_InstanceHealthStatus `[`InstanceHealth_Optional`](#structFRHAPI__CreateAuditRequest_1a50c92400c789c133c90ccba0971efd48) | Instance's health status for this event.
`public bool `[`InstanceHealth_IsSet`](#structFRHAPI__CreateAuditRequest_1a6098f159f074b79af45f80b3c7b29ec9) | true if InstanceHealth_Optional has been set to a value
`public FString `[`QueueId_Optional`](#structFRHAPI__CreateAuditRequest_1a228dd979eccff977abf706d94c1fa674) | ID for the queue in this event.
`public bool `[`QueueId_IsSet`](#structFRHAPI__CreateAuditRequest_1ad8dee7f755eb2a525cd121ec9a38100d) | true if QueueId_Optional has been set to a value
`public FString `[`TicketId_Optional`](#structFRHAPI__CreateAuditRequest_1a3f8b22370629dd0c4e8d93e156b0abef) | Matchmaking ticket id in this event.
`public bool `[`TicketId_IsSet`](#structFRHAPI__CreateAuditRequest_1a2ed780530b3dc6c0cfd88806aad5a896) | true if TicketId_Optional has been set to a value
`public `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` `[`AdditionalParams_Optional`](#structFRHAPI__CreateAuditRequest_1a68ae8a84e6ec5d1f615c3ad3ed69ed78) | Additional matchmaking parameters in this event.
`public bool `[`AdditionalParams_IsSet`](#structFRHAPI__CreateAuditRequest_1aa844253d42e5991bdc88e8f702644a49) | true if AdditionalParams_Optional has been set to a value
`public TArray< FString > `[`MapPreferences_Optional`](#structFRHAPI__CreateAuditRequest_1ad10350cf5ce7ee4f8b9ac157f2d36693) | Map preferences in this event.
`public bool `[`MapPreferences_IsSet`](#structFRHAPI__CreateAuditRequest_1a7b640c1e80ac7673d7d05386bdf321bd) | true if MapPreferences_Optional has been set to a value
`public FString `[`QueuedSessionId_Optional`](#structFRHAPI__CreateAuditRequest_1a0026b3e3ab5c755d587dc41fb15be728) | ID of the session that was/is in a matchmaking queue for this event.
`public bool `[`QueuedSessionId_IsSet`](#structFRHAPI__CreateAuditRequest_1a13ebd2ffdd7e54c09b028608574392af) | true if QueuedSessionId_Optional has been set to a value
`public FString `[`MatchId_Optional`](#structFRHAPI__CreateAuditRequest_1ac30965983ef61dd41ef6db11040c2adb) | ID of a match that was associated with this session.
`public bool `[`MatchId_IsSet`](#structFRHAPI__CreateAuditRequest_1a5f055c5ea69c2f8efc0ff7daf576dbb0) | true if MatchId_Optional has been set to a value
`public int32 `[`TicketWaitSeconds_Optional`](#structFRHAPI__CreateAuditRequest_1a84ce04b4d339505a5d26b5337aa14e37) | The total time in seconds that the ticket waited before being assigned to a match.
`public bool `[`TicketWaitSeconds_IsSet`](#structFRHAPI__CreateAuditRequest_1aa25dab29a072dd00806cb6c1dc067cbc) | true if TicketWaitSeconds_Optional has been set to a value
`public FString `[`MatchMakingProfileId_Optional`](#structFRHAPI__CreateAuditRequest_1a79c871094c5a1801c77f708ebc5fec6b) | ID of the MatchMakingProfile used to create this session.
`public bool `[`MatchMakingProfileId_IsSet`](#structFRHAPI__CreateAuditRequest_1ae906ba4356fdc8f6e8a89719da7a73f6) | true if MatchMakingProfileId_Optional has been set to a value
`public TArray< FGuid > `[`Players_Optional`](#structFRHAPI__CreateAuditRequest_1abe826ab73a0dc0fe032c05e47d2ad99e) | List of players uuids that were effected in this event. Each player will get a unique event.
`public bool `[`Players_IsSet`](#structFRHAPI__CreateAuditRequest_1a36dda49738de4ed403e47e362802bb90) | true if Players_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__CreateAuditRequest_1aea991686adf0a922c104f82d8f29db92)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__CreateAuditRequest_1ad2ca04ef13e2e7c7d32fb246f142e118)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetEventName`](#structFRHAPI__CreateAuditRequest_1a3b21ee199efa456dcef0ec1fec8ff360)`()` | Gets the value of EventName.
`public inline FORCEINLINE const FString & `[`GetEventName`](#structFRHAPI__CreateAuditRequest_1a1b5919aa26d18c64ca2656e982a3a804)`() const` | Gets the value of EventName.
`public inline FORCEINLINE void `[`SetEventName`](#structFRHAPI__CreateAuditRequest_1ae7565ddb370a1ab77c072a24882ea066)`(const FString & NewValue)` | Sets the value of EventName.
`public inline FORCEINLINE void `[`SetEventName`](#structFRHAPI__CreateAuditRequest_1a545153f22a47b5c5cc0e9d8f14cbf2a5)`(FString && NewValue)` | Sets the value of EventName using move semantics.
`public inline FORCEINLINE FString & `[`GetSessionId`](#structFRHAPI__CreateAuditRequest_1a8875ffc205169412e62d9d5ef36f7449)`()` | Gets the value of SessionId.
`public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__CreateAuditRequest_1a65a470bc209125812dd05071ab35b191)`() const` | Gets the value of SessionId.
`public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__CreateAuditRequest_1afd5a98cbf0324e3fe0d323a0efc25bf8)`(const FString & NewValue)` | Sets the value of SessionId.
`public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__CreateAuditRequest_1ac47f91a948d0a6aeb4ab54dbcc6cb43c)`(FString && NewValue)` | Sets the value of SessionId using move semantics.
`public inline FORCEINLINE FString & `[`GetReason`](#structFRHAPI__CreateAuditRequest_1a7cdd0d0fb8eb378e5a1d750898c4a887)`()` | Gets the value of Reason_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetReason`](#structFRHAPI__CreateAuditRequest_1a705106821283a0da88fd90262bd82877)`() const` | Gets the value of Reason_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetReason`](#structFRHAPI__CreateAuditRequest_1a0a3a8186d8ae57f87c6f427f759b1a66)`(const FString & DefaultValue) const` | Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetReason`](#structFRHAPI__CreateAuditRequest_1a8991b8cc0f5f18d9cbfff21031c76bd8)`(FString & OutValue) const` | Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetReasonOrNull`](#structFRHAPI__CreateAuditRequest_1a8acb7960a1600cb2ca6b10c45dbc5c74)`()` | Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetReasonOrNull`](#structFRHAPI__CreateAuditRequest_1a1ed0fdaab8cc9072a770b8872807cac5)`() const` | Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__CreateAuditRequest_1a926e56a771f8dfe1a826c5ab203cbf24)`(const FString & NewValue)` | Sets the value of Reason_Optional and also sets Reason_IsSet to true.
`public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__CreateAuditRequest_1a6c46758f2e2a37ab839ae1bb4aa82e72)`(FString && NewValue)` | Sets the value of Reason_Optional and also sets Reason_IsSet to true using move semantics.
`public inline void `[`ClearReason`](#structFRHAPI__CreateAuditRequest_1a6375d709e17e8bb9ecff0c349fd4125c)`()` | Clears the value of Reason_Optional and sets Reason_IsSet to false.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateAuditRequest_1ae8788cd9de1d46bbff51b069f07af7fd)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateAuditRequest_1a71ad649472710166766ce4c6198001e1)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateAuditRequest_1ac1801dec867c0ea031b6f689608ae644)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__CreateAuditRequest_1aaeb73bb40f7b1eb069f503d3328d312e)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CreateAuditRequest_1a4c016bc51454412e18dc2de202b850ba)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CreateAuditRequest_1a7fe32e6abf6139dbb9c7e83c1debf77e)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__CreateAuditRequest_1aee606307cfa4ea1a0c9b3e5f4051a4a8)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__CreateAuditRequest_1acea683e5a1c8d2609bb0ca4246e0e117)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__CreateAuditRequest_1a7133cb0e9ac9b3e7655c25af45943313)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE FString & `[`GetSessionType`](#structFRHAPI__CreateAuditRequest_1a0b00d0f5226719057973baee934caa53)`()` | Gets the value of SessionType_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetSessionType`](#structFRHAPI__CreateAuditRequest_1a1ced8fdce3317d387dae2df322cc04be)`() const` | Gets the value of SessionType_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetSessionType`](#structFRHAPI__CreateAuditRequest_1aaa798f9bc5e9aee8d9d6815f4ab9a60e)`(const FString & DefaultValue) const` | Gets the value of SessionType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSessionType`](#structFRHAPI__CreateAuditRequest_1a74a30df91261e1334ce899816465a3a7)`(FString & OutValue) const` | Fills OutValue with the value of SessionType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetSessionTypeOrNull`](#structFRHAPI__CreateAuditRequest_1a74ecac728aa8265d32c97c039b7b8de9)`()` | Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetSessionTypeOrNull`](#structFRHAPI__CreateAuditRequest_1adaf06b8fbc61db1b8c26bc44e331b9e5)`() const` | Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSessionType`](#structFRHAPI__CreateAuditRequest_1a9b331f51e063e4712062e35a1dee7d74)`(const FString & NewValue)` | Sets the value of SessionType_Optional and also sets SessionType_IsSet to true.
`public inline FORCEINLINE void `[`SetSessionType`](#structFRHAPI__CreateAuditRequest_1ade055e6ab8a5bada8887062c7bc96d0b)`(FString && NewValue)` | Sets the value of SessionType_Optional and also sets SessionType_IsSet to true using move semantics.
`public inline void `[`ClearSessionType`](#structFRHAPI__CreateAuditRequest_1a0c8c5695ea72a10ca77f647277460c2e)`()` | Clears the value of SessionType_Optional and sets SessionType_IsSet to false.
`public inline FORCEINLINE FString & `[`GetRegionId`](#structFRHAPI__CreateAuditRequest_1a675845bd0f0ace3ed89179020c12c09b)`()` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__CreateAuditRequest_1a77962778b4bcb3c8d1ad7dd8681268e2)`() const` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__CreateAuditRequest_1a0a640800699f9518f155b7214abd7464)`(const FString & DefaultValue) const` | Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRegionId`](#structFRHAPI__CreateAuditRequest_1ad64ee3d78b3e10cf19bc3fd9ca9fb9e2)`(FString & OutValue) const` | Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRegionIdOrNull`](#structFRHAPI__CreateAuditRequest_1aabaaf8e6bffcaefda919d3ed97d12f7e)`()` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRegionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a4469a4f9f3a163860a3442bd070536a3)`() const` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__CreateAuditRequest_1a80954d6a57c1154716ca96ef047b0fbd)`(const FString & NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.
`public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__CreateAuditRequest_1a1313e88ce3116ff09e252b3e9bd55413)`(FString && NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.
`public inline void `[`ClearRegionId`](#structFRHAPI__CreateAuditRequest_1a14abaecf3f777b3b40a01a6c5451dcda)`()` | Clears the value of RegionId_Optional and sets RegionId_IsSet to false.
`public inline FORCEINLINE bool & `[`GetJoinable`](#structFRHAPI__CreateAuditRequest_1a985ae5ff85079375cb1dd6288d85bf68)`()` | Gets the value of Joinable_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetJoinable`](#structFRHAPI__CreateAuditRequest_1a54c6712f1e6171ba6881b7fc40991e5d)`() const` | Gets the value of Joinable_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetJoinable`](#structFRHAPI__CreateAuditRequest_1aff9694a22315bb283db0f5bd085f3bf7)`(const bool & DefaultValue) const` | Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetJoinable`](#structFRHAPI__CreateAuditRequest_1a4729eafa99703a0d1c92269425ff9860)`(bool & OutValue) const` | Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetJoinableOrNull`](#structFRHAPI__CreateAuditRequest_1a826ea4ee095519d8ed7e605426ddbf76)`()` | Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetJoinableOrNull`](#structFRHAPI__CreateAuditRequest_1add4c6a546ae477b8a2509b111c44547a)`() const` | Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetJoinable`](#structFRHAPI__CreateAuditRequest_1a35705b6cd2ff779a45effbe966eb4bc8)`(const bool & NewValue)` | Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.
`public inline FORCEINLINE void `[`SetJoinable`](#structFRHAPI__CreateAuditRequest_1a273eca25386501e4d80e61de542d750e)`(bool && NewValue)` | Sets the value of Joinable_Optional and also sets Joinable_IsSet to true using move semantics.
`public inline void `[`ClearJoinable`](#structFRHAPI__CreateAuditRequest_1a0ac0cef2dbb03a224cad1ff1fc91f775)`()` | Clears the value of Joinable_Optional and sets Joinable_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_Joinable`](#structFRHAPI__CreateAuditRequest_1af2a940cab839bca2eb4d6b76814654d0)`()` | Returns the default value of Joinable.
`public inline FORCEINLINE `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__CreateAuditRequest_1a0b671c502d3e80c921032e66149d3ef0)`()` | Gets the value of Joinability_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__CreateAuditRequest_1a7b9685c293a56ce8856629b632251307)`() const` | Gets the value of Joinability_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__CreateAuditRequest_1ab106eaedd79b9d9fbd802aa52231d47c)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & DefaultValue) const` | Gets the value of Joinability_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetJoinability`](#structFRHAPI__CreateAuditRequest_1a40b8b6e48fd5ac8e9d678fe45499b663)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & OutValue) const` | Fills OutValue with the value of Joinability_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__CreateAuditRequest_1a129560102477348fea25435848888d26)`()` | Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__CreateAuditRequest_1a89734cb6464505e2c5dab3521f61c380)`() const` | Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetJoinability`](#structFRHAPI__CreateAuditRequest_1ac81c75bebc37ddffa0f1d27830379726)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & NewValue)` | Sets the value of Joinability_Optional and also sets Joinability_IsSet to true.
`public inline FORCEINLINE void `[`SetJoinability`](#structFRHAPI__CreateAuditRequest_1add031961774d4d609edb919e7e259513)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` && NewValue)` | Sets the value of Joinability_Optional and also sets Joinability_IsSet to true using move semantics.
`public inline void `[`ClearJoinability`](#structFRHAPI__CreateAuditRequest_1a64051a9ab30754347e668674633c49bb)`()` | Clears the value of Joinability_Optional and sets Joinability_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1a0b75d84c34aa58dafcab324889913fcb)`()` | Gets the value of UpdatedTeams_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1a299574c614fe3623b2ef64ff10f552e9)`() const` | Gets the value of UpdatedTeams_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1a08f1079205ac581345f9eab0ba24c5cd)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & DefaultValue) const` | Gets the value of UpdatedTeams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1a123df07710676b591b649c8ae555b3fd)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & OutValue) const` | Fills OutValue with the value of UpdatedTeams_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__CreateAuditRequest_1add5e5cefd676e618c49925951c01777b)`()` | Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__CreateAuditRequest_1a52c36d030ad0277a08b61984836e1f2d)`() const` | Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1a7534bb36ad99ec02b0489d92dc5a092a)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & NewValue)` | Sets the value of UpdatedTeams_Optional and also sets UpdatedTeams_IsSet to true.
`public inline FORCEINLINE void `[`SetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1a45061afeca1175b7bb6ab9324b151f8a)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > && NewValue)` | Sets the value of UpdatedTeams_Optional and also sets UpdatedTeams_IsSet to true using move semantics.
`public inline void `[`ClearUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1aa746bed0b171151c8a5aec6a7ae86416)`()` | Clears the value of UpdatedTeams_Optional and sets UpdatedTeams_IsSet to false.
`public inline FORCEINLINE ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__CreateAuditRequest_1ab9ca289aba0fa36575e66dd38eb4ee36)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__CreateAuditRequest_1ab06cdbaa3f1b7e077e3ee658eaaf6e68)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__CreateAuditRequest_1aa48f801be943246592c6066e36d78086)`(const ERHAPI_InviteSource & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSource`](#structFRHAPI__CreateAuditRequest_1a0c28b7da3b6df53128691395573cfc92)`(ERHAPI_InviteSource & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__CreateAuditRequest_1add61a47ca8d14af3713f4cb96b36a22b)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__CreateAuditRequest_1a6b39e74a5937647dcbddd242570a9793)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__CreateAuditRequest_1a5b36ed228484ca1d3c90b5b1085f34b5)`(const ERHAPI_InviteSource & NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__CreateAuditRequest_1aa8f25feb4e9743b400b7fed16d3acb56)`(ERHAPI_InviteSource && NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.
`public inline void `[`ClearSource`](#structFRHAPI__CreateAuditRequest_1a25d9609c33c16ac066005e2f25199298)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a1e4975cc8debf9031ef3bec6a44dc13d)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a61a17fb7934ba8765d16c314f74904c5)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1abbdb3f68fe9606a29bb3da551e9fc802)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1af48571f54ce8e15f26a1da4672f80517)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__CreateAuditRequest_1ac5a61181ee580f2eaab623232d583a38)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__CreateAuditRequest_1ada2973f97f9194ae35fdfaa96e482f59)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a609ecfd6b2d97d7324328eb7d10dafe3)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1ac68898e11810b6005e03c15516fe37f7)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a0956a708f854855adca4bfa696c69bb1)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetTeamId`](#structFRHAPI__CreateAuditRequest_1a5fc25193df9bffca547bc6486dc73394)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__CreateAuditRequest_1ad7bf2e0b8154d99ff70be38e6f28d802)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__CreateAuditRequest_1adc968f630e7cff4f95f0aeeef185ab31)`(const int32 & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTeamId`](#structFRHAPI__CreateAuditRequest_1a0761b38ae44a438f915939d3d2035d76)`(int32 & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetTeamIdOrNull`](#structFRHAPI__CreateAuditRequest_1ad8483534765b4d8adc7089b54f759525)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__CreateAuditRequest_1a77e1c816f60f0a79043164d4c952b16e)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__CreateAuditRequest_1ad04fcd3f8d152de13a87f69c419ab903)`(const int32 & NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__CreateAuditRequest_1ae7ac5a4d861e01d8cbb0142d9f258a92)`(int32 && NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.
`public inline void `[`ClearTeamId`](#structFRHAPI__CreateAuditRequest_1aa9a5d8c6979465a0cedcc8d92c1e7339)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_TeamId`](#structFRHAPI__CreateAuditRequest_1a09aba03084a81f67541713cd3d1cf7e6)`()` | Returns the default value of TeamId.
`public inline FORCEINLINE FString & `[`GetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1a05d9bdfaca4b14e31f9c5a16c03c5f61)`()` | Gets the value of InvitedSessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1aab6f8956610e4009e195fde6f6348e52)`() const` | Gets the value of InvitedSessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1aeaf1935e717d5ab10ebbe5f7e5d3c72c)`(const FString & DefaultValue) const` | Gets the value of InvitedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1af116e4e8f3ed6b19449031b361706b40)`(FString & OutValue) const` | Fills OutValue with the value of InvitedSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a5afd1b3059c92cf116b76556e9b59bd6)`()` | Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a90c119123f13dc332e992cfa6afb59de)`() const` | Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1ae68d6088bef3099dff8360f92841cd1c)`(const FString & NewValue)` | Sets the value of InvitedSessionId_Optional and also sets InvitedSessionId_IsSet to true.
`public inline FORCEINLINE void `[`SetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1a4ac47775fc3270ed62d781f82d6f320b)`(FString && NewValue)` | Sets the value of InvitedSessionId_Optional and also sets InvitedSessionId_IsSet to true using move semantics.
`public inline void `[`ClearInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1a003fbcbcc014ab71c196030852972989)`()` | Clears the value of InvitedSessionId_Optional and sets InvitedSessionId_IsSet to false.
`public inline FORCEINLINE FString & `[`GetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1a15a7474092d20d5fef37a73e33cd2972)`()` | Gets the value of RemovedSessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1a47712567395885e23298ffa9f83f3f9f)`() const` | Gets the value of RemovedSessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1a825c7fbd90212f3f2edbdd7313e65c84)`(const FString & DefaultValue) const` | Gets the value of RemovedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1a30d6229ad2fa81e03681636a56ac0b16)`(FString & OutValue) const` | Fills OutValue with the value of RemovedSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a41cb88ffa327e743d11147028f62c978)`()` | Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a22136dcbd05c765c8f4cf24b9a02b2c9)`() const` | Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1abb9c7bfda7f6cdae3c3f3f34822e27a0)`(const FString & NewValue)` | Sets the value of RemovedSessionId_Optional and also sets RemovedSessionId_IsSet to true.
`public inline FORCEINLINE void `[`SetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1acfff9855c68487d8b82302766f031668)`(FString && NewValue)` | Sets the value of RemovedSessionId_Optional and also sets RemovedSessionId_IsSet to true using move semantics.
`public inline void `[`ClearRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1a0ba952c57b0beb6e05103932a1736217)`()` | Clears the value of RemovedSessionId_Optional and sets RemovedSessionId_IsSet to false.
`public inline FORCEINLINE FString & `[`GetVersion`](#structFRHAPI__CreateAuditRequest_1a2ab618fefb6de42f4069e30969b290d4)`()` | Gets the value of Version_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetVersion`](#structFRHAPI__CreateAuditRequest_1acc4648c88ebb5bcfc3ce94deedeb6bb6)`() const` | Gets the value of Version_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetVersion`](#structFRHAPI__CreateAuditRequest_1aa12f68713793a03c35e7cb6c2c3b1ee1)`(const FString & DefaultValue) const` | Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetVersion`](#structFRHAPI__CreateAuditRequest_1a0dc1b9c79c20a00fc4e04ca4b6db7dcc)`(FString & OutValue) const` | Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetVersionOrNull`](#structFRHAPI__CreateAuditRequest_1a5ae4143b91b30f2e56b4317f3f94bcb0)`()` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetVersionOrNull`](#structFRHAPI__CreateAuditRequest_1a152d81374bac6ad6cdf6749cca4c3e9b)`() const` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetVersion`](#structFRHAPI__CreateAuditRequest_1a72ba47912bf19a81bb0fefbb9a21e79b)`(const FString & NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true.
`public inline FORCEINLINE void `[`SetVersion`](#structFRHAPI__CreateAuditRequest_1a86c3f84e288d93e9188b589b5f07d07f)`(FString && NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics.
`public inline void `[`ClearVersion`](#structFRHAPI__CreateAuditRequest_1a22db967094d806cfbb1c530cb7c0ce2b)`()` | Clears the value of Version_Optional and sets Version_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateAuditRequest_1a6eb10a2305525235171c2af5bfda5b12)`()` | Gets the value of ClientSettings_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateAuditRequest_1ae90be1753e9481848fc5b5b862ea7de5)`() const` | Gets the value of ClientSettings_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateAuditRequest_1a1c2edb20dc0242486ff0a1945df701b9)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & DefaultValue) const` | Gets the value of ClientSettings_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetClientSettings`](#structFRHAPI__CreateAuditRequest_1a49777426d5df8dfd40d0f2c31a118a3a)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & OutValue) const` | Fills OutValue with the value of ClientSettings_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__CreateAuditRequest_1a043af444c1aa5ad46f314a90d5c81af9)`()` | Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__CreateAuditRequest_1ab01d4573ab527ac796965dc02455e969)`() const` | Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetClientSettings`](#structFRHAPI__CreateAuditRequest_1a49d7d3ef721a9456b2b5e388b2530b6e)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & NewValue)` | Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true.
`public inline FORCEINLINE void `[`SetClientSettings`](#structFRHAPI__CreateAuditRequest_1a6ccce97f3fd81690837fedbd3ad4f133)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` && NewValue)` | Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true using move semantics.
`public inline void `[`ClearClientSettings`](#structFRHAPI__CreateAuditRequest_1a3e934aa4d91799c86b881ee72ac33d90)`()` | Clears the value of ClientSettings_Optional and sets ClientSettings_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1a14870c2d127235bfcc8302ab43e364e7)`()` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1a0a8a4d59079903f850a2b54de302557d)`() const` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1a49b7a2c0526b90fe66f19abb266c9845)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` | Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1aecb729a87eb34b11b3d88b6b282016ed)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` | Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CreateAuditRequest_1a7441185549585d1d7a0c5d44c21898b8)`()` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CreateAuditRequest_1ab4329a8e2ac4ea3c7e1f67456bfc78f1)`() const` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1a12bcb748fe0b5dd2078fbc9ad91675ae)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & NewValue)` | Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.
`public inline FORCEINLINE void `[`SetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1a31e65ee24b5dfce473fe77e36a3a2e83)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` && NewValue)` | Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true using move semantics.
`public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1ab104c0b6b379b56cfad6bf75bc9a2c92)`()` | Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.
`public inline FORCEINLINE ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1a52f1b16e05b470db9d1454438da3f6ae)`()` | Gets the value of PlayerStatus_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1a5e7ffda192f3393b399bbb1adc206072)`() const` | Gets the value of PlayerStatus_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1a1f9f08eeff15512472c91bf64553cf60)`(const ERHAPI_SessionPlayerStatus & DefaultValue) const` | Gets the value of PlayerStatus_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1a17c847f2de543213eb230a003970706d)`(ERHAPI_SessionPlayerStatus & OutValue) const` | Fills OutValue with the value of PlayerStatus_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__CreateAuditRequest_1acf156a6ccb4132b07bd0ea203a1d9b61)`()` | Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__CreateAuditRequest_1a91894b365795ee244e11166dbb5a80fb)`() const` | Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1a1156792824728ed72ae34b759da11ed2)`(const ERHAPI_SessionPlayerStatus & NewValue)` | Sets the value of PlayerStatus_Optional and also sets PlayerStatus_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1a66af38aa67683af26ce09026639e51fe)`(ERHAPI_SessionPlayerStatus && NewValue)` | Sets the value of PlayerStatus_Optional and also sets PlayerStatus_IsSet to true using move semantics.
`public inline void `[`ClearPlayerStatus`](#structFRHAPI__CreateAuditRequest_1ae86a75654a5952dcc1813e446ad45184)`()` | Clears the value of PlayerStatus_Optional and sets PlayerStatus_IsSet to false.
`public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateAuditRequest_1adfcdc7182a4b19f15f0f255824fedbfd)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateAuditRequest_1a726525b0a276ada3166404e13fc48236)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateAuditRequest_1a98822afce928b67fc1fa13a795d67fd9)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatform`](#structFRHAPI__CreateAuditRequest_1a246067154cc9ea8406cf535aa471d479)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__CreateAuditRequest_1a4e24d9c3a052286d8f243eba23a4d0d2)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__CreateAuditRequest_1a35b970c3ec43995e0e0b62f8f8903514)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__CreateAuditRequest_1adeed0c827e42b2512b740b56aea09530)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__CreateAuditRequest_1a3a54698f1fac4f503c5f02b55dcdaaca)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__CreateAuditRequest_1a9294795dd22e58391495a5820047116e)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline FORCEINLINE FString & `[`GetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1a5f79a2bc7fa73140a4b07702370e0830)`()` | Gets the value of PlatformSessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1ab50fe77768921ee0752b778e4b6f9a6a)`() const` | Gets the value of PlatformSessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1aae2988e62b38ad4b1adc29858e100db6)`(const FString & DefaultValue) const` | Gets the value of PlatformSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1a6d4697880ae6e634306555d00b0a891e)`(FString & OutValue) const` | Fills OutValue with the value of PlatformSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a429f1056ae2475a4706ba2d468b78941)`()` | Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1ab44d0d88c743ae1f1f1279d0a55ecd05)`() const` | Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1ab8388b35fc7019eb7e1afca5a7ddf385)`(const FString & NewValue)` | Sets the value of PlatformSessionId_Optional and also sets PlatformSessionId_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1a397a149df8f325cc57e3a5a5fb7f74cc)`(FString && NewValue)` | Sets the value of PlatformSessionId_Optional and also sets PlatformSessionId_IsSet to true using move semantics.
`public inline void `[`ClearPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1a6dd45a5ba092f17721dd818e1e41828c)`()` | Clears the value of PlatformSessionId_Optional and sets PlatformSessionId_IsSet to false.
`public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__CreateAuditRequest_1aba203c161c714a92863f6f98ea471f0f)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__CreateAuditRequest_1a637d191b90a46e474b4dbba552eb5e77)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__CreateAuditRequest_1a0ff72c0b05e5c97e0b3a319b0b639f34)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstanceId`](#structFRHAPI__CreateAuditRequest_1ade2eae5256c3a98a89e8631d86dbfb7b)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetInstanceIdOrNull`](#structFRHAPI__CreateAuditRequest_1ab5f72a9039a03d74deae2fc4f22039ef)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__CreateAuditRequest_1a7327116e166094a81b9e43ab08e11650)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__CreateAuditRequest_1aad89d56a8c37c15f1b15e508dd9e0a22)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__CreateAuditRequest_1ab14d57cb5d48b343795d530e8426337c)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__CreateAuditRequest_1a803e29cff308198839171d53385e9c6f)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline FORCEINLINE ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__CreateAuditRequest_1a973b05acdbe0618dd48484ca891acc68)`()` | Gets the value of HostType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__CreateAuditRequest_1ad4bfd59c0117328b0429b11a117053d7)`() const` | Gets the value of HostType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__CreateAuditRequest_1a56c39020250c2b2681cceacdadc21ddc)`(const ERHAPI_HostType & DefaultValue) const` | Gets the value of HostType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetHostType`](#structFRHAPI__CreateAuditRequest_1af58211991f715b8881f19c52d2310509)`(ERHAPI_HostType & OutValue) const` | Fills OutValue with the value of HostType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__CreateAuditRequest_1aa55a4e3949f8d334496b8bc1f18f9bdc)`()` | Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__CreateAuditRequest_1a73b3786ffbec55ba5b4cbf2387acc166)`() const` | Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetHostType`](#structFRHAPI__CreateAuditRequest_1afd43470a1cd8607766f721f210245cb0)`(const ERHAPI_HostType & NewValue)` | Sets the value of HostType_Optional and also sets HostType_IsSet to true.
`public inline FORCEINLINE void `[`SetHostType`](#structFRHAPI__CreateAuditRequest_1a0a1c69868507e2bc4456f5e8f0d5f673)`(ERHAPI_HostType && NewValue)` | Sets the value of HostType_Optional and also sets HostType_IsSet to true using move semantics.
`public inline void `[`ClearHostType`](#structFRHAPI__CreateAuditRequest_1ac6e3e2d5e89bb9b51f01198c08689a74)`()` | Clears the value of HostType_Optional and sets HostType_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1ab80b8ae196390304e455953149328ca2)`()` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a8b1b9b89e567d8371bf1d144a75c3571)`() const` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1aa6d75d7f152139d16de3859bda7e0538)`(const FGuid & DefaultValue) const` | Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a59e4cb22bcb30565ff3f72b1542c2cfa)`(FGuid & OutValue) const` | Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__CreateAuditRequest_1a6f980e79987e5219c958ed35a10eb8cc)`()` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__CreateAuditRequest_1a9f12274b32b2b3f8ba3aac50e7770210)`() const` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1adfb965b331ecf38d8f824196c1af81d8)`(const FGuid & NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a666c340a8aa662279d9919e947ca9375)`(FGuid && NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a348e2be106677dc4e989c1255f11894c)`()` | Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a59ffb7cf6d1d079bbe7ea9279fc60a30)`()` | Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1afd58f6e8835087414c74d3666a1eeeab)`() const` | Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a4a3b0cb8789a14ef4a2524db52641461)`(const FGuid & DefaultValue) const` | Gets the value of InstanceRequestTemplate_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1afa027a91c8459342f5c95dc0beb9b4f8)`(FGuid & OutValue) const` | Fills OutValue with the value of InstanceRequestTemplate_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__CreateAuditRequest_1a788a213b3706ac24fe4efdefc879ea47)`()` | Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__CreateAuditRequest_1a4092349b8e035d5910636c58c3fbf487)`() const` | Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a600ffc8be7e24c5ebb7f436d979d6d34)`(const FGuid & NewValue)` | Sets the value of InstanceRequestTemplate_Optional and also sets InstanceRequestTemplate_IsSet to true.
`public inline FORCEINLINE void `[`SetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a8977613e6377f6a25e812bb7338b6169)`(FGuid && NewValue)` | Sets the value of InstanceRequestTemplate_Optional and also sets InstanceRequestTemplate_IsSet to true using move semantics.
`public inline void `[`ClearInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a2381105fae3b7d26c8ec2a77bf18ecd5)`()` | Clears the value of InstanceRequestTemplate_Optional and sets InstanceRequestTemplate_IsSet to false.
`public inline FORCEINLINE FString & `[`GetMap`](#structFRHAPI__CreateAuditRequest_1ab56ba62f71344ed0a91770d2e22d4e33)`()` | Gets the value of Map_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMap`](#structFRHAPI__CreateAuditRequest_1a7a29bd671e27d52b1c3fb4a54096eeb6)`() const` | Gets the value of Map_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMap`](#structFRHAPI__CreateAuditRequest_1a2f1acc962186bc4d184f477cdba3024b)`(const FString & DefaultValue) const` | Gets the value of Map_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMap`](#structFRHAPI__CreateAuditRequest_1a4cf8580ff75f81c48721041f21288128)`(FString & OutValue) const` | Fills OutValue with the value of Map_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMapOrNull`](#structFRHAPI__CreateAuditRequest_1a898742a525714547d296e182e000bb1d)`()` | Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMapOrNull`](#structFRHAPI__CreateAuditRequest_1a36d07fd39ed6d4eb6d6534db5fb98682)`() const` | Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMap`](#structFRHAPI__CreateAuditRequest_1aa4eb9899d5e3c044f1749229fae06294)`(const FString & NewValue)` | Sets the value of Map_Optional and also sets Map_IsSet to true.
`public inline FORCEINLINE void `[`SetMap`](#structFRHAPI__CreateAuditRequest_1ad849994c603c0e85a111b4718b4adccc)`(FString && NewValue)` | Sets the value of Map_Optional and also sets Map_IsSet to true using move semantics.
`public inline void `[`ClearMap`](#structFRHAPI__CreateAuditRequest_1a98e2084cc570644d016cc2caf3ce08ff)`()` | Clears the value of Map_Optional and sets Map_IsSet to false.
`public inline FORCEINLINE FString & `[`GetMode`](#structFRHAPI__CreateAuditRequest_1aad5f47feb24f8bdb4821dbe86134b1bb)`()` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMode`](#structFRHAPI__CreateAuditRequest_1abf7fcbf75c4a0a23e3065165b03eb7e9)`() const` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMode`](#structFRHAPI__CreateAuditRequest_1a18ac75779bc0fd5657b918a1140df2a6)`(const FString & DefaultValue) const` | Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMode`](#structFRHAPI__CreateAuditRequest_1a8135c5b8be5a7518b467e47a2dad824f)`(FString & OutValue) const` | Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetModeOrNull`](#structFRHAPI__CreateAuditRequest_1aab560d989d697c4d24c734b9c4b12974)`()` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetModeOrNull`](#structFRHAPI__CreateAuditRequest_1ad74bc3c3bdee0b3b477d22159d680ae6)`() const` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMode`](#structFRHAPI__CreateAuditRequest_1af9af587776b094765f5814761b872262)`(const FString & NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true.
`public inline FORCEINLINE void `[`SetMode`](#structFRHAPI__CreateAuditRequest_1ac1d0729667d7714a5a8fb59b717e1301)`(FString && NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true using move semantics.
`public inline void `[`ClearMode`](#structFRHAPI__CreateAuditRequest_1a708273853f8264d35bb53364faa1baeb)`()` | Clears the value of Mode_Optional and sets Mode_IsSet to false.
`public inline FORCEINLINE FString & `[`GetAllocationId`](#structFRHAPI__CreateAuditRequest_1a6fd844c62dd68a663815783f27558b61)`()` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetAllocationId`](#structFRHAPI__CreateAuditRequest_1a1319a5986ad2f5847894bc4c6d6f4ef1)`() const` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetAllocationId`](#structFRHAPI__CreateAuditRequest_1a54470133a373e0723ffd0de869ed1066)`(const FString & DefaultValue) const` | Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAllocationId`](#structFRHAPI__CreateAuditRequest_1a708d14d1b121b4523b80f5cca0c85064)`(FString & OutValue) const` | Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetAllocationIdOrNull`](#structFRHAPI__CreateAuditRequest_1a501aca9848ff5f78238dd0ed5bb7fcde)`()` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__CreateAuditRequest_1ae9010bafc49cdaffbdc6fb09af25c7c3)`() const` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAllocationId`](#structFRHAPI__CreateAuditRequest_1ae48b10988699accdac259306c2b300a9)`(const FString & NewValue)` | Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.
`public inline FORCEINLINE void `[`SetAllocationId`](#structFRHAPI__CreateAuditRequest_1a05e844b18eb0262907923ace199a694e)`(FString && NewValue)` | Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true using move semantics.
`public inline void `[`ClearAllocationId`](#structFRHAPI__CreateAuditRequest_1a32fabf3a37474ad325e7c0e1150c5b19)`()` | Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.
`public inline FORCEINLINE ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__CreateAuditRequest_1a58d7d75ce7c49d4451714e5991a7b26d)`()` | Gets the value of JoinStatus_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__CreateAuditRequest_1a30516d6256983e4d947ec9cd002f8d5a)`() const` | Gets the value of JoinStatus_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__CreateAuditRequest_1a96730737fae846cb0f2566d9e4d9c9d8)`(const ERHAPI_InstanceJoinableStatus & DefaultValue) const` | Gets the value of JoinStatus_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetJoinStatus`](#structFRHAPI__CreateAuditRequest_1a1d0e57a33f24e6cfaba380c4d913a356)`(ERHAPI_InstanceJoinableStatus & OutValue) const` | Fills OutValue with the value of JoinStatus_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__CreateAuditRequest_1a24ad05360148432091757d2273a6c9c9)`()` | Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__CreateAuditRequest_1a8ad768312a7f1a2a6d48fa8533dce3fd)`() const` | Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetJoinStatus`](#structFRHAPI__CreateAuditRequest_1a09106ee74c547fd4d900c842a92d8c80)`(const ERHAPI_InstanceJoinableStatus & NewValue)` | Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true.
`public inline FORCEINLINE void `[`SetJoinStatus`](#structFRHAPI__CreateAuditRequest_1ac22a0a4cdc7f829e21fa5ac18577be6a)`(ERHAPI_InstanceJoinableStatus && NewValue)` | Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true using move semantics.
`public inline void `[`ClearJoinStatus`](#structFRHAPI__CreateAuditRequest_1af8a6f2207119beda87c49a8aa237a1bd)`()` | Clears the value of JoinStatus_Optional and sets JoinStatus_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__CreateAuditRequest_1a1d8d0b2fb274d60a52f3ce03d2f84e5e)`()` | Gets the value of JoinParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__CreateAuditRequest_1a9e885d381bca122e74eead53c2bf02b1)`() const` | Gets the value of JoinParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__CreateAuditRequest_1a152f80151f2e54d4986d75486637ef92)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & DefaultValue) const` | Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetJoinParams`](#structFRHAPI__CreateAuditRequest_1a3e2a2f1c98af565970c51c712b1bc57e)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & OutValue) const` | Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__CreateAuditRequest_1accc745f7d092c132af1deb803ed627e2)`()` | Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__CreateAuditRequest_1a77eac90bce5a3d34ec23f6f68e256447)`() const` | Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetJoinParams`](#structFRHAPI__CreateAuditRequest_1a6b616553a152f476580bb99619985aca)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & NewValue)` | Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.
`public inline FORCEINLINE void `[`SetJoinParams`](#structFRHAPI__CreateAuditRequest_1ade072285aa4e6dcc6db76cf336fc8243)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` && NewValue)` | Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true using move semantics.
`public inline void `[`ClearJoinParams`](#structFRHAPI__CreateAuditRequest_1ae15128c077fc62ffeec86842240dbd52)`()` | Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.
`public inline FORCEINLINE ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1a0b2550c2e5433ecd25e9d129bb103a9a)`()` | Gets the value of InstanceHealth_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1a2cd6ceafd5e7fb648eca8372620737ab)`() const` | Gets the value of InstanceHealth_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1a15b8d51ec478c1fd94287f366daa27be)`(const ERHAPI_InstanceHealthStatus & DefaultValue) const` | Gets the value of InstanceHealth_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1a0c42a1aa564688e428b499d38d630c3c)`(ERHAPI_InstanceHealthStatus & OutValue) const` | Fills OutValue with the value of InstanceHealth_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__CreateAuditRequest_1ae4e8f1a5798ca840ea41c2b3bf9234fc)`()` | Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__CreateAuditRequest_1acec76fc7090b692fed2288afb7c076b2)`() const` | Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1a96d82cecfa0579c7518285ed7da755d0)`(const ERHAPI_InstanceHealthStatus & NewValue)` | Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true.
`public inline FORCEINLINE void `[`SetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1a31654d147df1cce0531ff36f590455f5)`(ERHAPI_InstanceHealthStatus && NewValue)` | Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true using move semantics.
`public inline void `[`ClearInstanceHealth`](#structFRHAPI__CreateAuditRequest_1ab839fe4135e907ee3a6949f4a2ed4473)`()` | Clears the value of InstanceHealth_Optional and sets InstanceHealth_IsSet to false.
`public inline FORCEINLINE FString & `[`GetQueueId`](#structFRHAPI__CreateAuditRequest_1a3811ab4e3042bd06d0a05c69e6267d92)`()` | Gets the value of QueueId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetQueueId`](#structFRHAPI__CreateAuditRequest_1a191d5c6373b437bb4e59a9346e21d2d7)`() const` | Gets the value of QueueId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetQueueId`](#structFRHAPI__CreateAuditRequest_1ac953bcf757ee34c32be6d8f37aa9f20a)`(const FString & DefaultValue) const` | Gets the value of QueueId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetQueueId`](#structFRHAPI__CreateAuditRequest_1ae518733ce82125254c7786755b4c5e05)`(FString & OutValue) const` | Fills OutValue with the value of QueueId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetQueueIdOrNull`](#structFRHAPI__CreateAuditRequest_1afb1a5c946d3d0f9805671316faf0f405)`()` | Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetQueueIdOrNull`](#structFRHAPI__CreateAuditRequest_1a9d101976f808f94e489421201b91c07e)`() const` | Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__CreateAuditRequest_1a97220acdbfe873da874b9e3708e385f2)`(const FString & NewValue)` | Sets the value of QueueId_Optional and also sets QueueId_IsSet to true.
`public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__CreateAuditRequest_1ab4fd0d0f8af1b7063dbe7dd88f4a3b95)`(FString && NewValue)` | Sets the value of QueueId_Optional and also sets QueueId_IsSet to true using move semantics.
`public inline void `[`ClearQueueId`](#structFRHAPI__CreateAuditRequest_1aea875a3118fee4f648079eebaac9b656)`()` | Clears the value of QueueId_Optional and sets QueueId_IsSet to false.
`public inline FORCEINLINE FString & `[`GetTicketId`](#structFRHAPI__CreateAuditRequest_1ab52cb23df145fee0d9f842069dd88dc4)`()` | Gets the value of TicketId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetTicketId`](#structFRHAPI__CreateAuditRequest_1a401f06d7eb86b3b39abe5bc961cafe4b)`() const` | Gets the value of TicketId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetTicketId`](#structFRHAPI__CreateAuditRequest_1ac439a373fdbab728eb251c5c10fb70f1)`(const FString & DefaultValue) const` | Gets the value of TicketId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTicketId`](#structFRHAPI__CreateAuditRequest_1ade899684ff8deaa82944289b859500e7)`(FString & OutValue) const` | Fills OutValue with the value of TicketId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetTicketIdOrNull`](#structFRHAPI__CreateAuditRequest_1aa674f55956d1c1bd7737219d9efdb4db)`()` | Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetTicketIdOrNull`](#structFRHAPI__CreateAuditRequest_1a832121a405523f2583203fd775a26695)`() const` | Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTicketId`](#structFRHAPI__CreateAuditRequest_1a9b1f1b60e6da070b33129c60c338cd86)`(const FString & NewValue)` | Sets the value of TicketId_Optional and also sets TicketId_IsSet to true.
`public inline FORCEINLINE void `[`SetTicketId`](#structFRHAPI__CreateAuditRequest_1ab05f77e7a422866a31dec6ea8850360f)`(FString && NewValue)` | Sets the value of TicketId_Optional and also sets TicketId_IsSet to true using move semantics.
`public inline void `[`ClearTicketId`](#structFRHAPI__CreateAuditRequest_1aabb4b486f8327532dd975262f8fcc5b3)`()` | Clears the value of TicketId_Optional and sets TicketId_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1ad4fcc6f14aa30264599e9b08c774671b)`()` | Gets the value of AdditionalParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1ad2216e66c798bddc65a7fac404c99f5c)`() const` | Gets the value of AdditionalParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1a7a970be13078198d6c939be8b7409382)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & DefaultValue) const` | Gets the value of AdditionalParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1adf6514a348bae57a9696d46546e05305)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & OutValue) const` | Fills OutValue with the value of AdditionalParams_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalParamsOrNull`](#structFRHAPI__CreateAuditRequest_1ab5d8e3378a0ca5198ff271b7c09dc63a)`()` | Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalParamsOrNull`](#structFRHAPI__CreateAuditRequest_1a40cf2e8dd7ed3f739a71b90761804445)`() const` | Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1ad12ef0ac671f3bf24cad0833c1b86fd9)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & NewValue)` | Sets the value of AdditionalParams_Optional and also sets AdditionalParams_IsSet to true.
`public inline FORCEINLINE void `[`SetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1a8a97452a4e6f69a30e65738a8fe9e004)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` && NewValue)` | Sets the value of AdditionalParams_Optional and also sets AdditionalParams_IsSet to true using move semantics.
`public inline void `[`ClearAdditionalParams`](#structFRHAPI__CreateAuditRequest_1a55b2ec8eefed3283bed95f9afbd2b247)`()` | Clears the value of AdditionalParams_Optional and sets AdditionalParams_IsSet to false.
`public inline FORCEINLINE TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__CreateAuditRequest_1a3339d3192f61766ed3fce25acfc18a31)`()` | Gets the value of MapPreferences_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__CreateAuditRequest_1af7f42bd2892fc9e2789e7088f3343ef7)`() const` | Gets the value of MapPreferences_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__CreateAuditRequest_1aaec10f17ebf063d533607625665a70df)`(const TArray< FString > & DefaultValue) const` | Gets the value of MapPreferences_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMapPreferences`](#structFRHAPI__CreateAuditRequest_1a5384225241fcaf163c97b967f200befc)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of MapPreferences_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__CreateAuditRequest_1a6fd3f31902484b035553568b5fac3407)`()` | Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__CreateAuditRequest_1a65c4349d15bdfc2a2e86675d98006ba8)`() const` | Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMapPreferences`](#structFRHAPI__CreateAuditRequest_1a990560e60b91bed31190ef3823132f08)`(const TArray< FString > & NewValue)` | Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true.
`public inline FORCEINLINE void `[`SetMapPreferences`](#structFRHAPI__CreateAuditRequest_1aa35d57908dddc37e8056c59c32e1ef9f)`(TArray< FString > && NewValue)` | Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true using move semantics.
`public inline void `[`ClearMapPreferences`](#structFRHAPI__CreateAuditRequest_1a8f074dc9b8affdbefbf78306c64e52a5)`()` | Clears the value of MapPreferences_Optional and sets MapPreferences_IsSet to false.
`public inline FORCEINLINE FString & `[`GetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1a2cd516e75ad77e9e8bfca0056cbdb50d)`()` | Gets the value of QueuedSessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1a387219f48362f83d1399df81fd40d806)`() const` | Gets the value of QueuedSessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1a9023de1b71309bccd1b961c12b12c599)`(const FString & DefaultValue) const` | Gets the value of QueuedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1a2bed89afca8d34ddf2ff36f4fff2fb2e)`(FString & OutValue) const` | Fills OutValue with the value of QueuedSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a5f99c07a0242aeac784939f4012cd0d0)`()` | Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a9f11dc0e45892d00a10ea58bbae3dc1e)`() const` | Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1a48f56d5eb9772af525744e1acb501e61)`(const FString & NewValue)` | Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true.
`public inline FORCEINLINE void `[`SetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1a007549c247609f6ceddcebad67fdc515)`(FString && NewValue)` | Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true using move semantics.
`public inline void `[`ClearQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1af13bcc59cc707c792aa29f45d8f5c6a3)`()` | Clears the value of QueuedSessionId_Optional and sets QueuedSessionId_IsSet to false.
`public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__CreateAuditRequest_1af3439a9fbf9624ae10e11a8243fc156a)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__CreateAuditRequest_1af152541bb8d4e1625456192a55ce3e30)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__CreateAuditRequest_1aebfbb54c14deed58fbff94e5873e2e32)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__CreateAuditRequest_1ac6493ff8689421a669720fd1f4653b02)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__CreateAuditRequest_1ad523d42ca3ca231f1f959ae655002b24)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__CreateAuditRequest_1a941db980896465dd795e6ca8cf33e916)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__CreateAuditRequest_1ab3f647b596d9941be7aba4da3f40a3b9)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__CreateAuditRequest_1a70d3c4dd06d484d34283e0a37676af2d)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__CreateAuditRequest_1ae26f168091000aa54c84e0a6a85733f7)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1acc2ebf58a3c5d9bb238e227623117d96)`()` | Gets the value of TicketWaitSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1a0584b10706a029488bde94c23669eb18)`() const` | Gets the value of TicketWaitSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1ae3199fa031eeec0fc046bc4542aea0cd)`(const int32 & DefaultValue) const` | Gets the value of TicketWaitSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1ac05a25269289193e8adc90d5f31754b0)`(int32 & OutValue) const` | Fills OutValue with the value of TicketWaitSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetTicketWaitSecondsOrNull`](#structFRHAPI__CreateAuditRequest_1a5833a1a55e5bbd55bcbddd823aab4a6e)`()` | Returns a pointer to TicketWaitSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetTicketWaitSecondsOrNull`](#structFRHAPI__CreateAuditRequest_1a676020416a2c9db43154102e6ff5436b)`() const` | Returns a pointer to TicketWaitSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1a9e0b30a18f6ecf250afd782b8418aeea)`(const int32 & NewValue)` | Sets the value of TicketWaitSeconds_Optional and also sets TicketWaitSeconds_IsSet to true.
`public inline FORCEINLINE void `[`SetTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1ad864c49727bfb86dc4fb4c671ade06af)`(int32 && NewValue)` | Sets the value of TicketWaitSeconds_Optional and also sets TicketWaitSeconds_IsSet to true using move semantics.
`public inline void `[`ClearTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1ae45761ab68ddfdda0947d1fe8928d7c0)`()` | Clears the value of TicketWaitSeconds_Optional and sets TicketWaitSeconds_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_TicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1a0a69789e2440bd1b94fc4bb003afef71)`()` | Returns the default value of TicketWaitSeconds.
`public inline FORCEINLINE FString & `[`GetMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1a260d532c8776f69d11d794e0871dc899)`()` | Gets the value of MatchMakingProfileId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1a36e7e9f3dde31c94ffb9c66b45ccd166)`() const` | Gets the value of MatchMakingProfileId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1a8302a6d07d99fb1e3a8db87b24a74693)`(const FString & DefaultValue) const` | Gets the value of MatchMakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1a4bdb74cfc5c5c0ba5491ecf816d6ad7a)`(FString & OutValue) const` | Fills OutValue with the value of MatchMakingProfileId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMatchMakingProfileIdOrNull`](#structFRHAPI__CreateAuditRequest_1a8d22bb557fed9ef7acbdce31fe94811b)`()` | Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMatchMakingProfileIdOrNull`](#structFRHAPI__CreateAuditRequest_1a21428bb5141a986c86fd051d20fbc1f3)`() const` | Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1aead9eb8429069fc898ebf25eb2f7359b)`(const FString & NewValue)` | Sets the value of MatchMakingProfileId_Optional and also sets MatchMakingProfileId_IsSet to true.
`public inline FORCEINLINE void `[`SetMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1a10841876b5a91da1a2973f2ce5a84315)`(FString && NewValue)` | Sets the value of MatchMakingProfileId_Optional and also sets MatchMakingProfileId_IsSet to true using move semantics.
`public inline void `[`ClearMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1ae670d764568c78d90313647b80d8ebd8)`()` | Clears the value of MatchMakingProfileId_Optional and sets MatchMakingProfileId_IsSet to false.
`public inline FORCEINLINE TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__CreateAuditRequest_1a6790705a256c6ed843126099a11349a2)`()` | Gets the value of Players_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__CreateAuditRequest_1a687cb999e868f7f850ea1e235ed8b5b3)`() const` | Gets the value of Players_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__CreateAuditRequest_1abe19087f0a96ccb5bc54c8e73e8a833a)`(const TArray< FGuid > & DefaultValue) const` | Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayers`](#structFRHAPI__CreateAuditRequest_1af426bd16b965e0fa0f7b05306e5913bb)`(TArray< FGuid > & OutValue) const` | Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< FGuid > * `[`GetPlayersOrNull`](#structFRHAPI__CreateAuditRequest_1a960aba5e903b9bf21f11a75c27761f1d)`()` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< FGuid > * `[`GetPlayersOrNull`](#structFRHAPI__CreateAuditRequest_1a55e7c812dcf4661103f47f4607bc523f)`() const` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__CreateAuditRequest_1a4fcf20f05daf6161db20609ac4893616)`(const TArray< FGuid > & NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__CreateAuditRequest_1ab0aaafde98003275dfc355c2325fd486)`(TArray< FGuid > && NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.
`public inline void `[`ClearPlayers`](#structFRHAPI__CreateAuditRequest_1a69f092c9a60a172af8618766f7946567)`()` | Clears the value of Players_Optional and sets Players_IsSet to false.

### Members

#### `public FString `[`EventName`](#structFRHAPI__CreateAuditRequest_1ae34f7ce8c8b4026dac0e127a26675792) <a id="structFRHAPI__CreateAuditRequest_1ae34f7ce8c8b4026dac0e127a26675792"></a>

Name of the audit event you are creating. Customer created events will be prepended with 'customer.'.

#### `public FString `[`SessionId`](#structFRHAPI__CreateAuditRequest_1a96ea5b0bba5f6138edd463fe70754e12) <a id="structFRHAPI__CreateAuditRequest_1a96ea5b0bba5f6138edd463fe70754e12"></a>

ID of the session this event occurred in.

#### `public FString `[`Reason_Optional`](#structFRHAPI__CreateAuditRequest_1ac966719ae7731b9d6838580a935c46fe) <a id="structFRHAPI__CreateAuditRequest_1ac966719ae7731b9d6838580a935c46fe"></a>

Reason for this event to occur.

#### `public bool `[`Reason_IsSet`](#structFRHAPI__CreateAuditRequest_1af5b2daa64d6e20dba16e9e7ae043487b) <a id="structFRHAPI__CreateAuditRequest_1af5b2daa64d6e20dba16e9e7ae043487b"></a>

true if Reason_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__CreateAuditRequest_1adcb02cf43f2f10325f81639c5c8f2406) <a id="structFRHAPI__CreateAuditRequest_1adcb02cf43f2f10325f81639c5c8f2406"></a>

Custom data for this audit request.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__CreateAuditRequest_1a65dca695cd5d761a47f019c3de090c34) <a id="structFRHAPI__CreateAuditRequest_1a65dca695cd5d761a47f019c3de090c34"></a>

true if CustomData_Optional has been set to a value

#### `public FString `[`SessionType_Optional`](#structFRHAPI__CreateAuditRequest_1ac5167ce52494f7cc9fceabe4b75c75dc) <a id="structFRHAPI__CreateAuditRequest_1ac5167ce52494f7cc9fceabe4b75c75dc"></a>

Type of the session this event occurred in.

#### `public bool `[`SessionType_IsSet`](#structFRHAPI__CreateAuditRequest_1a8d32416409395e59bf980547fbc8f1f2) <a id="structFRHAPI__CreateAuditRequest_1a8d32416409395e59bf980547fbc8f1f2"></a>

true if SessionType_Optional has been set to a value

#### `public FString `[`RegionId_Optional`](#structFRHAPI__CreateAuditRequest_1a744aaaa83eaf7c9cf646cc77541d83d3) <a id="structFRHAPI__CreateAuditRequest_1a744aaaa83eaf7c9cf646cc77541d83d3"></a>

Region ID for this event.

#### `public bool `[`RegionId_IsSet`](#structFRHAPI__CreateAuditRequest_1a4d214e0d34e156c3a2b92d2ab65fd475) <a id="structFRHAPI__CreateAuditRequest_1a4d214e0d34e156c3a2b92d2ab65fd475"></a>

true if RegionId_Optional has been set to a value

#### `public bool `[`Joinable_Optional`](#structFRHAPI__CreateAuditRequest_1a9f3304100757b064fdbd47075d7c0c55) <a id="structFRHAPI__CreateAuditRequest_1a9f3304100757b064fdbd47075d7c0c55"></a>

Whether or not the session is publicly joinable.

#### `public bool `[`Joinable_IsSet`](#structFRHAPI__CreateAuditRequest_1a259b8292d3a4ab56b356e524bea80519) <a id="structFRHAPI__CreateAuditRequest_1a259b8292d3a4ab56b356e524bea80519"></a>

true if Joinable_Optional has been set to a value

#### `public `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` `[`Joinability_Optional`](#structFRHAPI__CreateAuditRequest_1a3a6e998eac6b7152fbf7aa67bbae4b23) <a id="structFRHAPI__CreateAuditRequest_1a3a6e998eac6b7152fbf7aa67bbae4b23"></a>

Joinability flags about the session.

#### `public bool `[`Joinability_IsSet`](#structFRHAPI__CreateAuditRequest_1a94fa9cddcd9b3ae78c94cf4d210b5bb9) <a id="structFRHAPI__CreateAuditRequest_1a94fa9cddcd9b3ae78c94cf4d210b5bb9"></a>

true if Joinability_Optional has been set to a value

#### `public TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > `[`UpdatedTeams_Optional`](#structFRHAPI__CreateAuditRequest_1aa8d813efe40db81fda5ade9961ae3c9f) <a id="structFRHAPI__CreateAuditRequest_1aa8d813efe40db81fda5ade9961ae3c9f"></a>

Updated team numbers and sizes.

#### `public bool `[`UpdatedTeams_IsSet`](#structFRHAPI__CreateAuditRequest_1a6b5582a227f80efdb2af6f9327d1b95a) <a id="structFRHAPI__CreateAuditRequest_1a6b5582a227f80efdb2af6f9327d1b95a"></a>

true if UpdatedTeams_Optional has been set to a value

#### `public ERHAPI_InviteSource `[`Source_Optional`](#structFRHAPI__CreateAuditRequest_1a22d4a4ddfe83c8d432f57c190d104272) <a id="structFRHAPI__CreateAuditRequest_1a22d4a4ddfe83c8d432f57c190d104272"></a>

The source of an invite.

#### `public bool `[`Source_IsSet`](#structFRHAPI__CreateAuditRequest_1a83901ab582ce004b5d67bed317c63201) <a id="structFRHAPI__CreateAuditRequest_1a83901ab582ce004b5d67bed317c63201"></a>

true if Source_Optional has been set to a value

#### `public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__CreateAuditRequest_1aef8703ff5d7ef629e9247a5b3a275f1f) <a id="structFRHAPI__CreateAuditRequest_1aef8703ff5d7ef629e9247a5b3a275f1f"></a>

UUID of a specific player being effected in this event.

#### `public bool `[`PlayerUuid_IsSet`](#structFRHAPI__CreateAuditRequest_1a6d63c9c319b655d832c31aed9867d31e) <a id="structFRHAPI__CreateAuditRequest_1a6d63c9c319b655d832c31aed9867d31e"></a>

true if PlayerUuid_Optional has been set to a value

#### `public int32 `[`TeamId_Optional`](#structFRHAPI__CreateAuditRequest_1a72eae3936fd40619c9e96954a471dc1b) <a id="structFRHAPI__CreateAuditRequest_1a72eae3936fd40619c9e96954a471dc1b"></a>

ID of the team being effected in this event.

#### `public bool `[`TeamId_IsSet`](#structFRHAPI__CreateAuditRequest_1a6de1cdc9673c15ca162970cc481d3fea) <a id="structFRHAPI__CreateAuditRequest_1a6de1cdc9673c15ca162970cc481d3fea"></a>

true if TeamId_Optional has been set to a value

#### `public FString `[`InvitedSessionId_Optional`](#structFRHAPI__CreateAuditRequest_1a0fd113d1d33f120bf8060ba29aa94e76) <a id="structFRHAPI__CreateAuditRequest_1a0fd113d1d33f120bf8060ba29aa94e76"></a>

ID of the session being invited in this event.

#### `public bool `[`InvitedSessionId_IsSet`](#structFRHAPI__CreateAuditRequest_1acfaf8fdaa5f1de6131c0ff1f4a3f6bb3) <a id="structFRHAPI__CreateAuditRequest_1acfaf8fdaa5f1de6131c0ff1f4a3f6bb3"></a>

true if InvitedSessionId_Optional has been set to a value

#### `public FString `[`RemovedSessionId_Optional`](#structFRHAPI__CreateAuditRequest_1a155be9ae832737f9d919bbdd96c40221) <a id="structFRHAPI__CreateAuditRequest_1a155be9ae832737f9d919bbdd96c40221"></a>

ID of the session being removed in this event.

#### `public bool `[`RemovedSessionId_IsSet`](#structFRHAPI__CreateAuditRequest_1a9476149ebc3d770e96f76b9b7eaf13b3) <a id="structFRHAPI__CreateAuditRequest_1a9476149ebc3d770e96f76b9b7eaf13b3"></a>

true if RemovedSessionId_Optional has been set to a value

#### `public FString `[`Version_Optional`](#structFRHAPI__CreateAuditRequest_1a625d9b4048249dcda8ba4e6923e22656) <a id="structFRHAPI__CreateAuditRequest_1a625d9b4048249dcda8ba4e6923e22656"></a>

Version updated in this event.

#### `public bool `[`Version_IsSet`](#structFRHAPI__CreateAuditRequest_1a4a86632f8adbfcf8ce872a62314a7912) <a id="structFRHAPI__CreateAuditRequest_1a4a86632f8adbfcf8ce872a62314a7912"></a>

true if Version_Optional has been set to a value

#### `public `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` `[`ClientSettings_Optional`](#structFRHAPI__CreateAuditRequest_1af8355202a720d072c45922c9b0e87d83) <a id="structFRHAPI__CreateAuditRequest_1af8355202a720d072c45922c9b0e87d83"></a>

Client settings updated as part of this event.

#### `public bool `[`ClientSettings_IsSet`](#structFRHAPI__CreateAuditRequest_1a8a1a393006948116c21c6ca4196c1522) <a id="structFRHAPI__CreateAuditRequest_1a8a1a393006948116c21c6ca4196c1522"></a>

true if ClientSettings_Optional has been set to a value

#### `public `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` `[`CrossplayPreferences_Optional`](#structFRHAPI__CreateAuditRequest_1a5c575064b352dacbe6207d19c606c3ca) <a id="structFRHAPI__CreateAuditRequest_1a5c575064b352dacbe6207d19c606c3ca"></a>

Crossplay preferences updated as part of this event.

#### `public bool `[`CrossplayPreferences_IsSet`](#structFRHAPI__CreateAuditRequest_1a558741f351c43cb4d0d5d2d4b0acd216) <a id="structFRHAPI__CreateAuditRequest_1a558741f351c43cb4d0d5d2d4b0acd216"></a>

true if CrossplayPreferences_Optional has been set to a value

#### `public ERHAPI_SessionPlayerStatus `[`PlayerStatus_Optional`](#structFRHAPI__CreateAuditRequest_1ae7a0b2ca6f57a40ac73b2de6a53c99cd) <a id="structFRHAPI__CreateAuditRequest_1ae7a0b2ca6f57a40ac73b2de6a53c99cd"></a>

Player's status updated as part of this event.

#### `public bool `[`PlayerStatus_IsSet`](#structFRHAPI__CreateAuditRequest_1a6d8b775c09d21bc36b4a7ceaa40f8b8d) <a id="structFRHAPI__CreateAuditRequest_1a6d8b775c09d21bc36b4a7ceaa40f8b8d"></a>

true if PlayerStatus_Optional has been set to a value

#### `public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__CreateAuditRequest_1aaa958d58d0207abb32ab381565ce6cb1) <a id="structFRHAPI__CreateAuditRequest_1aaa958d58d0207abb32ab381565ce6cb1"></a>

Platform updated as part of this event.

#### `public bool `[`Platform_IsSet`](#structFRHAPI__CreateAuditRequest_1a8fe8f6efb8a139ab3d0ee449d6ecc61e) <a id="structFRHAPI__CreateAuditRequest_1a8fe8f6efb8a139ab3d0ee449d6ecc61e"></a>

true if Platform_Optional has been set to a value

#### `public FString `[`PlatformSessionId_Optional`](#structFRHAPI__CreateAuditRequest_1a8be4994b5b51d169bf0b90621eee4098) <a id="structFRHAPI__CreateAuditRequest_1a8be4994b5b51d169bf0b90621eee4098"></a>

ID of the platform session being effected in this event.

#### `public bool `[`PlatformSessionId_IsSet`](#structFRHAPI__CreateAuditRequest_1aea46d48487f9029cb84b1f4e41a9599f) <a id="structFRHAPI__CreateAuditRequest_1aea46d48487f9029cb84b1f4e41a9599f"></a>

true if PlatformSessionId_Optional has been set to a value

#### `public FString `[`InstanceId_Optional`](#structFRHAPI__CreateAuditRequest_1ab9dc8810646d503afe67d17e8373b7ad) <a id="structFRHAPI__CreateAuditRequest_1ab9dc8810646d503afe67d17e8373b7ad"></a>

ID of the instance being effected in this event.

#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__CreateAuditRequest_1a7185293d84a7b4f8bb6cbf5aa1519d95) <a id="structFRHAPI__CreateAuditRequest_1a7185293d84a7b4f8bb6cbf5aa1519d95"></a>

true if InstanceId_Optional has been set to a value

#### `public ERHAPI_HostType `[`HostType_Optional`](#structFRHAPI__CreateAuditRequest_1ae88cc44817501b46a12f686a36cd8fb7) <a id="structFRHAPI__CreateAuditRequest_1ae88cc44817501b46a12f686a36cd8fb7"></a>

Type of the host being effected in this event.

#### `public bool `[`HostType_IsSet`](#structFRHAPI__CreateAuditRequest_1a0de246bfc46e1e712020c71a3648a595) <a id="structFRHAPI__CreateAuditRequest_1a0de246bfc46e1e712020c71a3648a595"></a>

true if HostType_Optional has been set to a value

#### `public FGuid `[`HostPlayerUuid_Optional`](#structFRHAPI__CreateAuditRequest_1afe58bae101bca55046fe0e6974d6efa0) <a id="structFRHAPI__CreateAuditRequest_1afe58bae101bca55046fe0e6974d6efa0"></a>

UUID of the player hosting during this event.

#### `public bool `[`HostPlayerUuid_IsSet`](#structFRHAPI__CreateAuditRequest_1a87f2e34ff5eff166a7a77e17d9af82dd) <a id="structFRHAPI__CreateAuditRequest_1a87f2e34ff5eff166a7a77e17d9af82dd"></a>

true if HostPlayerUuid_Optional has been set to a value

#### `public FGuid `[`InstanceRequestTemplate_Optional`](#structFRHAPI__CreateAuditRequest_1a3e7ce81809e67c7f40e52481b39c8c54) <a id="structFRHAPI__CreateAuditRequest_1a3e7ce81809e67c7f40e52481b39c8c54"></a>

ID of the instance request template being used in this event.

#### `public bool `[`InstanceRequestTemplate_IsSet`](#structFRHAPI__CreateAuditRequest_1ae93e20acaaf87c32ce1c6c27a2367fbf) <a id="structFRHAPI__CreateAuditRequest_1ae93e20acaaf87c32ce1c6c27a2367fbf"></a>

true if InstanceRequestTemplate_Optional has been set to a value

#### `public FString `[`Map_Optional`](#structFRHAPI__CreateAuditRequest_1a4fc3f650df5a9895c375361f3c0ba46b) <a id="structFRHAPI__CreateAuditRequest_1a4fc3f650df5a9895c375361f3c0ba46b"></a>

Map being used in this event.

#### `public bool `[`Map_IsSet`](#structFRHAPI__CreateAuditRequest_1a3d678693191517d49b22dcf83851b8e3) <a id="structFRHAPI__CreateAuditRequest_1a3d678693191517d49b22dcf83851b8e3"></a>

true if Map_Optional has been set to a value

#### `public FString `[`Mode_Optional`](#structFRHAPI__CreateAuditRequest_1aa57bb3b654ccae7ea6d569c0f5a9d564) <a id="structFRHAPI__CreateAuditRequest_1aa57bb3b654ccae7ea6d569c0f5a9d564"></a>

Mode being used in this event.

#### `public bool `[`Mode_IsSet`](#structFRHAPI__CreateAuditRequest_1afb75c6dec715b5308da4e078c34f37d3) <a id="structFRHAPI__CreateAuditRequest_1afb75c6dec715b5308da4e078c34f37d3"></a>

true if Mode_Optional has been set to a value

#### `public FString `[`AllocationId_Optional`](#structFRHAPI__CreateAuditRequest_1a8de4f0ff7d678ea5cdb8c6e18c858579) <a id="structFRHAPI__CreateAuditRequest_1a8de4f0ff7d678ea5cdb8c6e18c858579"></a>

Allocation ID of instance in this event.

#### `public bool `[`AllocationId_IsSet`](#structFRHAPI__CreateAuditRequest_1ae6ce17f4e166d5ae42a2bd36540c6d23) <a id="structFRHAPI__CreateAuditRequest_1ae6ce17f4e166d5ae42a2bd36540c6d23"></a>

true if AllocationId_Optional has been set to a value

#### `public ERHAPI_InstanceJoinableStatus `[`JoinStatus_Optional`](#structFRHAPI__CreateAuditRequest_1a80d15eb2ff72db95513034689a8e5f49) <a id="structFRHAPI__CreateAuditRequest_1a80d15eb2ff72db95513034689a8e5f49"></a>

Instance's joinability status.

#### `public bool `[`JoinStatus_IsSet`](#structFRHAPI__CreateAuditRequest_1afcc5070c0d78ee8eb09fb89bce690631) <a id="structFRHAPI__CreateAuditRequest_1afcc5070c0d78ee8eb09fb89bce690631"></a>

true if JoinStatus_Optional has been set to a value

#### `public `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` `[`JoinParams_Optional`](#structFRHAPI__CreateAuditRequest_1adf0f4eb09c63e7e31ebd27f43321e295) <a id="structFRHAPI__CreateAuditRequest_1adf0f4eb09c63e7e31ebd27f43321e295"></a>

Instance's join parameters for this event.

#### `public bool `[`JoinParams_IsSet`](#structFRHAPI__CreateAuditRequest_1afae35410e3949dfa72b4c019a69f4a83) <a id="structFRHAPI__CreateAuditRequest_1afae35410e3949dfa72b4c019a69f4a83"></a>

true if JoinParams_Optional has been set to a value

#### `public ERHAPI_InstanceHealthStatus `[`InstanceHealth_Optional`](#structFRHAPI__CreateAuditRequest_1a50c92400c789c133c90ccba0971efd48) <a id="structFRHAPI__CreateAuditRequest_1a50c92400c789c133c90ccba0971efd48"></a>

Instance's health status for this event.

#### `public bool `[`InstanceHealth_IsSet`](#structFRHAPI__CreateAuditRequest_1a6098f159f074b79af45f80b3c7b29ec9) <a id="structFRHAPI__CreateAuditRequest_1a6098f159f074b79af45f80b3c7b29ec9"></a>

true if InstanceHealth_Optional has been set to a value

#### `public FString `[`QueueId_Optional`](#structFRHAPI__CreateAuditRequest_1a228dd979eccff977abf706d94c1fa674) <a id="structFRHAPI__CreateAuditRequest_1a228dd979eccff977abf706d94c1fa674"></a>

ID for the queue in this event.

#### `public bool `[`QueueId_IsSet`](#structFRHAPI__CreateAuditRequest_1ad8dee7f755eb2a525cd121ec9a38100d) <a id="structFRHAPI__CreateAuditRequest_1ad8dee7f755eb2a525cd121ec9a38100d"></a>

true if QueueId_Optional has been set to a value

#### `public FString `[`TicketId_Optional`](#structFRHAPI__CreateAuditRequest_1a3f8b22370629dd0c4e8d93e156b0abef) <a id="structFRHAPI__CreateAuditRequest_1a3f8b22370629dd0c4e8d93e156b0abef"></a>

Matchmaking ticket id in this event.

#### `public bool `[`TicketId_IsSet`](#structFRHAPI__CreateAuditRequest_1a2ed780530b3dc6c0cfd88806aad5a896) <a id="structFRHAPI__CreateAuditRequest_1a2ed780530b3dc6c0cfd88806aad5a896"></a>

true if TicketId_Optional has been set to a value

#### `public `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` `[`AdditionalParams_Optional`](#structFRHAPI__CreateAuditRequest_1a68ae8a84e6ec5d1f615c3ad3ed69ed78) <a id="structFRHAPI__CreateAuditRequest_1a68ae8a84e6ec5d1f615c3ad3ed69ed78"></a>

Additional matchmaking parameters in this event.

#### `public bool `[`AdditionalParams_IsSet`](#structFRHAPI__CreateAuditRequest_1aa844253d42e5991bdc88e8f702644a49) <a id="structFRHAPI__CreateAuditRequest_1aa844253d42e5991bdc88e8f702644a49"></a>

true if AdditionalParams_Optional has been set to a value

#### `public TArray< FString > `[`MapPreferences_Optional`](#structFRHAPI__CreateAuditRequest_1ad10350cf5ce7ee4f8b9ac157f2d36693) <a id="structFRHAPI__CreateAuditRequest_1ad10350cf5ce7ee4f8b9ac157f2d36693"></a>

Map preferences in this event.

#### `public bool `[`MapPreferences_IsSet`](#structFRHAPI__CreateAuditRequest_1a7b640c1e80ac7673d7d05386bdf321bd) <a id="structFRHAPI__CreateAuditRequest_1a7b640c1e80ac7673d7d05386bdf321bd"></a>

true if MapPreferences_Optional has been set to a value

#### `public FString `[`QueuedSessionId_Optional`](#structFRHAPI__CreateAuditRequest_1a0026b3e3ab5c755d587dc41fb15be728) <a id="structFRHAPI__CreateAuditRequest_1a0026b3e3ab5c755d587dc41fb15be728"></a>

ID of the session that was/is in a matchmaking queue for this event.

#### `public bool `[`QueuedSessionId_IsSet`](#structFRHAPI__CreateAuditRequest_1a13ebd2ffdd7e54c09b028608574392af) <a id="structFRHAPI__CreateAuditRequest_1a13ebd2ffdd7e54c09b028608574392af"></a>

true if QueuedSessionId_Optional has been set to a value

#### `public FString `[`MatchId_Optional`](#structFRHAPI__CreateAuditRequest_1ac30965983ef61dd41ef6db11040c2adb) <a id="structFRHAPI__CreateAuditRequest_1ac30965983ef61dd41ef6db11040c2adb"></a>

ID of a match that was associated with this session.

#### `public bool `[`MatchId_IsSet`](#structFRHAPI__CreateAuditRequest_1a5f055c5ea69c2f8efc0ff7daf576dbb0) <a id="structFRHAPI__CreateAuditRequest_1a5f055c5ea69c2f8efc0ff7daf576dbb0"></a>

true if MatchId_Optional has been set to a value

#### `public int32 `[`TicketWaitSeconds_Optional`](#structFRHAPI__CreateAuditRequest_1a84ce04b4d339505a5d26b5337aa14e37) <a id="structFRHAPI__CreateAuditRequest_1a84ce04b4d339505a5d26b5337aa14e37"></a>

The total time in seconds that the ticket waited before being assigned to a match.

#### `public bool `[`TicketWaitSeconds_IsSet`](#structFRHAPI__CreateAuditRequest_1aa25dab29a072dd00806cb6c1dc067cbc) <a id="structFRHAPI__CreateAuditRequest_1aa25dab29a072dd00806cb6c1dc067cbc"></a>

true if TicketWaitSeconds_Optional has been set to a value

#### `public FString `[`MatchMakingProfileId_Optional`](#structFRHAPI__CreateAuditRequest_1a79c871094c5a1801c77f708ebc5fec6b) <a id="structFRHAPI__CreateAuditRequest_1a79c871094c5a1801c77f708ebc5fec6b"></a>

ID of the MatchMakingProfile used to create this session.

#### `public bool `[`MatchMakingProfileId_IsSet`](#structFRHAPI__CreateAuditRequest_1ae906ba4356fdc8f6e8a89719da7a73f6) <a id="structFRHAPI__CreateAuditRequest_1ae906ba4356fdc8f6e8a89719da7a73f6"></a>

true if MatchMakingProfileId_Optional has been set to a value

#### `public TArray< FGuid > `[`Players_Optional`](#structFRHAPI__CreateAuditRequest_1abe826ab73a0dc0fe032c05e47d2ad99e) <a id="structFRHAPI__CreateAuditRequest_1abe826ab73a0dc0fe032c05e47d2ad99e"></a>

List of players uuids that were effected in this event. Each player will get a unique event.

#### `public bool `[`Players_IsSet`](#structFRHAPI__CreateAuditRequest_1a36dda49738de4ed403e47e362802bb90) <a id="structFRHAPI__CreateAuditRequest_1a36dda49738de4ed403e47e362802bb90"></a>

true if Players_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__CreateAuditRequest_1aea991686adf0a922c104f82d8f29db92)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__CreateAuditRequest_1aea991686adf0a922c104f82d8f29db92"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__CreateAuditRequest_1ad2ca04ef13e2e7c7d32fb246f142e118)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__CreateAuditRequest_1ad2ca04ef13e2e7c7d32fb246f142e118"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetEventName`](#structFRHAPI__CreateAuditRequest_1a3b21ee199efa456dcef0ec1fec8ff360)`()` <a id="structFRHAPI__CreateAuditRequest_1a3b21ee199efa456dcef0ec1fec8ff360"></a>

Gets the value of EventName.

#### `public inline FORCEINLINE const FString & `[`GetEventName`](#structFRHAPI__CreateAuditRequest_1a1b5919aa26d18c64ca2656e982a3a804)`() const` <a id="structFRHAPI__CreateAuditRequest_1a1b5919aa26d18c64ca2656e982a3a804"></a>

Gets the value of EventName.

#### `public inline FORCEINLINE void `[`SetEventName`](#structFRHAPI__CreateAuditRequest_1ae7565ddb370a1ab77c072a24882ea066)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ae7565ddb370a1ab77c072a24882ea066"></a>

Sets the value of EventName.

#### `public inline FORCEINLINE void `[`SetEventName`](#structFRHAPI__CreateAuditRequest_1a545153f22a47b5c5cc0e9d8f14cbf2a5)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a545153f22a47b5c5cc0e9d8f14cbf2a5"></a>

Sets the value of EventName using move semantics.

#### `public inline FORCEINLINE FString & `[`GetSessionId`](#structFRHAPI__CreateAuditRequest_1a8875ffc205169412e62d9d5ef36f7449)`()` <a id="structFRHAPI__CreateAuditRequest_1a8875ffc205169412e62d9d5ef36f7449"></a>

Gets the value of SessionId.

#### `public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__CreateAuditRequest_1a65a470bc209125812dd05071ab35b191)`() const` <a id="structFRHAPI__CreateAuditRequest_1a65a470bc209125812dd05071ab35b191"></a>

Gets the value of SessionId.

#### `public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__CreateAuditRequest_1afd5a98cbf0324e3fe0d323a0efc25bf8)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1afd5a98cbf0324e3fe0d323a0efc25bf8"></a>

Sets the value of SessionId.

#### `public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__CreateAuditRequest_1ac47f91a948d0a6aeb4ab54dbcc6cb43c)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ac47f91a948d0a6aeb4ab54dbcc6cb43c"></a>

Sets the value of SessionId using move semantics.

#### `public inline FORCEINLINE FString & `[`GetReason`](#structFRHAPI__CreateAuditRequest_1a7cdd0d0fb8eb378e5a1d750898c4a887)`()` <a id="structFRHAPI__CreateAuditRequest_1a7cdd0d0fb8eb378e5a1d750898c4a887"></a>

Gets the value of Reason_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetReason`](#structFRHAPI__CreateAuditRequest_1a705106821283a0da88fd90262bd82877)`() const` <a id="structFRHAPI__CreateAuditRequest_1a705106821283a0da88fd90262bd82877"></a>

Gets the value of Reason_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetReason`](#structFRHAPI__CreateAuditRequest_1a0a3a8186d8ae57f87c6f427f759b1a66)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a0a3a8186d8ae57f87c6f427f759b1a66"></a>

Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetReason`](#structFRHAPI__CreateAuditRequest_1a8991b8cc0f5f18d9cbfff21031c76bd8)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a8991b8cc0f5f18d9cbfff21031c76bd8"></a>

Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetReasonOrNull`](#structFRHAPI__CreateAuditRequest_1a8acb7960a1600cb2ca6b10c45dbc5c74)`()` <a id="structFRHAPI__CreateAuditRequest_1a8acb7960a1600cb2ca6b10c45dbc5c74"></a>

Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetReasonOrNull`](#structFRHAPI__CreateAuditRequest_1a1ed0fdaab8cc9072a770b8872807cac5)`() const` <a id="structFRHAPI__CreateAuditRequest_1a1ed0fdaab8cc9072a770b8872807cac5"></a>

Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__CreateAuditRequest_1a926e56a771f8dfe1a826c5ab203cbf24)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a926e56a771f8dfe1a826c5ab203cbf24"></a>

Sets the value of Reason_Optional and also sets Reason_IsSet to true.

#### `public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__CreateAuditRequest_1a6c46758f2e2a37ab839ae1bb4aa82e72)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a6c46758f2e2a37ab839ae1bb4aa82e72"></a>

Sets the value of Reason_Optional and also sets Reason_IsSet to true using move semantics.

#### `public inline void `[`ClearReason`](#structFRHAPI__CreateAuditRequest_1a6375d709e17e8bb9ecff0c349fd4125c)`()` <a id="structFRHAPI__CreateAuditRequest_1a6375d709e17e8bb9ecff0c349fd4125c"></a>

Clears the value of Reason_Optional and sets Reason_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateAuditRequest_1ae8788cd9de1d46bbff51b069f07af7fd)`()` <a id="structFRHAPI__CreateAuditRequest_1ae8788cd9de1d46bbff51b069f07af7fd"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateAuditRequest_1a71ad649472710166766ce4c6198001e1)`() const` <a id="structFRHAPI__CreateAuditRequest_1a71ad649472710166766ce4c6198001e1"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateAuditRequest_1ac1801dec867c0ea031b6f689608ae644)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1ac1801dec867c0ea031b6f689608ae644"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__CreateAuditRequest_1aaeb73bb40f7b1eb069f503d3328d312e)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1aaeb73bb40f7b1eb069f503d3328d312e"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CreateAuditRequest_1a4c016bc51454412e18dc2de202b850ba)`()` <a id="structFRHAPI__CreateAuditRequest_1a4c016bc51454412e18dc2de202b850ba"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CreateAuditRequest_1a7fe32e6abf6139dbb9c7e83c1debf77e)`() const` <a id="structFRHAPI__CreateAuditRequest_1a7fe32e6abf6139dbb9c7e83c1debf77e"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__CreateAuditRequest_1aee606307cfa4ea1a0c9b3e5f4051a4a8)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1aee606307cfa4ea1a0c9b3e5f4051a4a8"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__CreateAuditRequest_1acea683e5a1c8d2609bb0ca4246e0e117)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1acea683e5a1c8d2609bb0ca4246e0e117"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__CreateAuditRequest_1a7133cb0e9ac9b3e7655c25af45943313)`()` <a id="structFRHAPI__CreateAuditRequest_1a7133cb0e9ac9b3e7655c25af45943313"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetSessionType`](#structFRHAPI__CreateAuditRequest_1a0b00d0f5226719057973baee934caa53)`()` <a id="structFRHAPI__CreateAuditRequest_1a0b00d0f5226719057973baee934caa53"></a>

Gets the value of SessionType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetSessionType`](#structFRHAPI__CreateAuditRequest_1a1ced8fdce3317d387dae2df322cc04be)`() const` <a id="structFRHAPI__CreateAuditRequest_1a1ced8fdce3317d387dae2df322cc04be"></a>

Gets the value of SessionType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetSessionType`](#structFRHAPI__CreateAuditRequest_1aaa798f9bc5e9aee8d9d6815f4ab9a60e)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1aaa798f9bc5e9aee8d9d6815f4ab9a60e"></a>

Gets the value of SessionType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSessionType`](#structFRHAPI__CreateAuditRequest_1a74a30df91261e1334ce899816465a3a7)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a74a30df91261e1334ce899816465a3a7"></a>

Fills OutValue with the value of SessionType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetSessionTypeOrNull`](#structFRHAPI__CreateAuditRequest_1a74ecac728aa8265d32c97c039b7b8de9)`()` <a id="structFRHAPI__CreateAuditRequest_1a74ecac728aa8265d32c97c039b7b8de9"></a>

Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetSessionTypeOrNull`](#structFRHAPI__CreateAuditRequest_1adaf06b8fbc61db1b8c26bc44e331b9e5)`() const` <a id="structFRHAPI__CreateAuditRequest_1adaf06b8fbc61db1b8c26bc44e331b9e5"></a>

Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSessionType`](#structFRHAPI__CreateAuditRequest_1a9b331f51e063e4712062e35a1dee7d74)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a9b331f51e063e4712062e35a1dee7d74"></a>

Sets the value of SessionType_Optional and also sets SessionType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSessionType`](#structFRHAPI__CreateAuditRequest_1ade055e6ab8a5bada8887062c7bc96d0b)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ade055e6ab8a5bada8887062c7bc96d0b"></a>

Sets the value of SessionType_Optional and also sets SessionType_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionType`](#structFRHAPI__CreateAuditRequest_1a0c8c5695ea72a10ca77f647277460c2e)`()` <a id="structFRHAPI__CreateAuditRequest_1a0c8c5695ea72a10ca77f647277460c2e"></a>

Clears the value of SessionType_Optional and sets SessionType_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetRegionId`](#structFRHAPI__CreateAuditRequest_1a675845bd0f0ace3ed89179020c12c09b)`()` <a id="structFRHAPI__CreateAuditRequest_1a675845bd0f0ace3ed89179020c12c09b"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__CreateAuditRequest_1a77962778b4bcb3c8d1ad7dd8681268e2)`() const` <a id="structFRHAPI__CreateAuditRequest_1a77962778b4bcb3c8d1ad7dd8681268e2"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRegionId`](#structFRHAPI__CreateAuditRequest_1a0a640800699f9518f155b7214abd7464)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a0a640800699f9518f155b7214abd7464"></a>

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRegionId`](#structFRHAPI__CreateAuditRequest_1ad64ee3d78b3e10cf19bc3fd9ca9fb9e2)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1ad64ee3d78b3e10cf19bc3fd9ca9fb9e2"></a>

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRegionIdOrNull`](#structFRHAPI__CreateAuditRequest_1aabaaf8e6bffcaefda919d3ed97d12f7e)`()` <a id="structFRHAPI__CreateAuditRequest_1aabaaf8e6bffcaefda919d3ed97d12f7e"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRegionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a4469a4f9f3a163860a3442bd070536a3)`() const` <a id="structFRHAPI__CreateAuditRequest_1a4469a4f9f3a163860a3442bd070536a3"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__CreateAuditRequest_1a80954d6a57c1154716ca96ef047b0fbd)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a80954d6a57c1154716ca96ef047b0fbd"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRegionId`](#structFRHAPI__CreateAuditRequest_1a1313e88ce3116ff09e252b3e9bd55413)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a1313e88ce3116ff09e252b3e9bd55413"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.

#### `public inline void `[`ClearRegionId`](#structFRHAPI__CreateAuditRequest_1a14abaecf3f777b3b40a01a6c5451dcda)`()` <a id="structFRHAPI__CreateAuditRequest_1a14abaecf3f777b3b40a01a6c5451dcda"></a>

Clears the value of RegionId_Optional and sets RegionId_IsSet to false.

#### `public inline FORCEINLINE bool & `[`GetJoinable`](#structFRHAPI__CreateAuditRequest_1a985ae5ff85079375cb1dd6288d85bf68)`()` <a id="structFRHAPI__CreateAuditRequest_1a985ae5ff85079375cb1dd6288d85bf68"></a>

Gets the value of Joinable_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetJoinable`](#structFRHAPI__CreateAuditRequest_1a54c6712f1e6171ba6881b7fc40991e5d)`() const` <a id="structFRHAPI__CreateAuditRequest_1a54c6712f1e6171ba6881b7fc40991e5d"></a>

Gets the value of Joinable_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetJoinable`](#structFRHAPI__CreateAuditRequest_1aff9694a22315bb283db0f5bd085f3bf7)`(const bool & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1aff9694a22315bb283db0f5bd085f3bf7"></a>

Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetJoinable`](#structFRHAPI__CreateAuditRequest_1a4729eafa99703a0d1c92269425ff9860)`(bool & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a4729eafa99703a0d1c92269425ff9860"></a>

Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetJoinableOrNull`](#structFRHAPI__CreateAuditRequest_1a826ea4ee095519d8ed7e605426ddbf76)`()` <a id="structFRHAPI__CreateAuditRequest_1a826ea4ee095519d8ed7e605426ddbf76"></a>

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetJoinableOrNull`](#structFRHAPI__CreateAuditRequest_1add4c6a546ae477b8a2509b111c44547a)`() const` <a id="structFRHAPI__CreateAuditRequest_1add4c6a546ae477b8a2509b111c44547a"></a>

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetJoinable`](#structFRHAPI__CreateAuditRequest_1a35705b6cd2ff779a45effbe966eb4bc8)`(const bool & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a35705b6cd2ff779a45effbe966eb4bc8"></a>

Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.

#### `public inline FORCEINLINE void `[`SetJoinable`](#structFRHAPI__CreateAuditRequest_1a273eca25386501e4d80e61de542d750e)`(bool && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a273eca25386501e4d80e61de542d750e"></a>

Sets the value of Joinable_Optional and also sets Joinable_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinable`](#structFRHAPI__CreateAuditRequest_1a0ac0cef2dbb03a224cad1ff1fc91f775)`()` <a id="structFRHAPI__CreateAuditRequest_1a0ac0cef2dbb03a224cad1ff1fc91f775"></a>

Clears the value of Joinable_Optional and sets Joinable_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_Joinable`](#structFRHAPI__CreateAuditRequest_1af2a940cab839bca2eb4d6b76814654d0)`()` <a id="structFRHAPI__CreateAuditRequest_1af2a940cab839bca2eb4d6b76814654d0"></a>

Returns the default value of Joinable.

#### `public inline FORCEINLINE `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__CreateAuditRequest_1a0b671c502d3e80c921032e66149d3ef0)`()` <a id="structFRHAPI__CreateAuditRequest_1a0b671c502d3e80c921032e66149d3ef0"></a>

Gets the value of Joinability_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__CreateAuditRequest_1a7b9685c293a56ce8856629b632251307)`() const` <a id="structFRHAPI__CreateAuditRequest_1a7b9685c293a56ce8856629b632251307"></a>

Gets the value of Joinability_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__CreateAuditRequest_1ab106eaedd79b9d9fbd802aa52231d47c)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1ab106eaedd79b9d9fbd802aa52231d47c"></a>

Gets the value of Joinability_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetJoinability`](#structFRHAPI__CreateAuditRequest_1a40b8b6e48fd5ac8e9d678fe45499b663)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a40b8b6e48fd5ac8e9d678fe45499b663"></a>

Fills OutValue with the value of Joinability_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__CreateAuditRequest_1a129560102477348fea25435848888d26)`()` <a id="structFRHAPI__CreateAuditRequest_1a129560102477348fea25435848888d26"></a>

Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__CreateAuditRequest_1a89734cb6464505e2c5dab3521f61c380)`() const` <a id="structFRHAPI__CreateAuditRequest_1a89734cb6464505e2c5dab3521f61c380"></a>

Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetJoinability`](#structFRHAPI__CreateAuditRequest_1ac81c75bebc37ddffa0f1d27830379726)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ac81c75bebc37ddffa0f1d27830379726"></a>

Sets the value of Joinability_Optional and also sets Joinability_IsSet to true.

#### `public inline FORCEINLINE void `[`SetJoinability`](#structFRHAPI__CreateAuditRequest_1add031961774d4d609edb919e7e259513)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1add031961774d4d609edb919e7e259513"></a>

Sets the value of Joinability_Optional and also sets Joinability_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinability`](#structFRHAPI__CreateAuditRequest_1a64051a9ab30754347e668674633c49bb)`()` <a id="structFRHAPI__CreateAuditRequest_1a64051a9ab30754347e668674633c49bb"></a>

Clears the value of Joinability_Optional and sets Joinability_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1a0b75d84c34aa58dafcab324889913fcb)`()` <a id="structFRHAPI__CreateAuditRequest_1a0b75d84c34aa58dafcab324889913fcb"></a>

Gets the value of UpdatedTeams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1a299574c614fe3623b2ef64ff10f552e9)`() const` <a id="structFRHAPI__CreateAuditRequest_1a299574c614fe3623b2ef64ff10f552e9"></a>

Gets the value of UpdatedTeams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1a08f1079205ac581345f9eab0ba24c5cd)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a08f1079205ac581345f9eab0ba24c5cd"></a>

Gets the value of UpdatedTeams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1a123df07710676b591b649c8ae555b3fd)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a123df07710676b591b649c8ae555b3fd"></a>

Fills OutValue with the value of UpdatedTeams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__CreateAuditRequest_1add5e5cefd676e618c49925951c01777b)`()` <a id="structFRHAPI__CreateAuditRequest_1add5e5cefd676e618c49925951c01777b"></a>

Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__CreateAuditRequest_1a52c36d030ad0277a08b61984836e1f2d)`() const` <a id="structFRHAPI__CreateAuditRequest_1a52c36d030ad0277a08b61984836e1f2d"></a>

Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1a7534bb36ad99ec02b0489d92dc5a092a)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a7534bb36ad99ec02b0489d92dc5a092a"></a>

Sets the value of UpdatedTeams_Optional and also sets UpdatedTeams_IsSet to true.

#### `public inline FORCEINLINE void `[`SetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1a45061afeca1175b7bb6ab9324b151f8a)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a45061afeca1175b7bb6ab9324b151f8a"></a>

Sets the value of UpdatedTeams_Optional and also sets UpdatedTeams_IsSet to true using move semantics.

#### `public inline void `[`ClearUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1aa746bed0b171151c8a5aec6a7ae86416)`()` <a id="structFRHAPI__CreateAuditRequest_1aa746bed0b171151c8a5aec6a7ae86416"></a>

Clears the value of UpdatedTeams_Optional and sets UpdatedTeams_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__CreateAuditRequest_1ab9ca289aba0fa36575e66dd38eb4ee36)`()` <a id="structFRHAPI__CreateAuditRequest_1ab9ca289aba0fa36575e66dd38eb4ee36"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__CreateAuditRequest_1ab06cdbaa3f1b7e077e3ee658eaaf6e68)`() const` <a id="structFRHAPI__CreateAuditRequest_1ab06cdbaa3f1b7e077e3ee658eaaf6e68"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__CreateAuditRequest_1aa48f801be943246592c6066e36d78086)`(const ERHAPI_InviteSource & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1aa48f801be943246592c6066e36d78086"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSource`](#structFRHAPI__CreateAuditRequest_1a0c28b7da3b6df53128691395573cfc92)`(ERHAPI_InviteSource & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a0c28b7da3b6df53128691395573cfc92"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__CreateAuditRequest_1add61a47ca8d14af3713f4cb96b36a22b)`()` <a id="structFRHAPI__CreateAuditRequest_1add61a47ca8d14af3713f4cb96b36a22b"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__CreateAuditRequest_1a6b39e74a5937647dcbddd242570a9793)`() const` <a id="structFRHAPI__CreateAuditRequest_1a6b39e74a5937647dcbddd242570a9793"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__CreateAuditRequest_1a5b36ed228484ca1d3c90b5b1085f34b5)`(const ERHAPI_InviteSource & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a5b36ed228484ca1d3c90b5b1085f34b5"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSource`](#structFRHAPI__CreateAuditRequest_1aa8f25feb4e9743b400b7fed16d3acb56)`(ERHAPI_InviteSource && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1aa8f25feb4e9743b400b7fed16d3acb56"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.

#### `public inline void `[`ClearSource`](#structFRHAPI__CreateAuditRequest_1a25d9609c33c16ac066005e2f25199298)`()` <a id="structFRHAPI__CreateAuditRequest_1a25d9609c33c16ac066005e2f25199298"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a1e4975cc8debf9031ef3bec6a44dc13d)`()` <a id="structFRHAPI__CreateAuditRequest_1a1e4975cc8debf9031ef3bec6a44dc13d"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a61a17fb7934ba8765d16c314f74904c5)`() const` <a id="structFRHAPI__CreateAuditRequest_1a61a17fb7934ba8765d16c314f74904c5"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1abbdb3f68fe9606a29bb3da551e9fc802)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1abbdb3f68fe9606a29bb3da551e9fc802"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1af48571f54ce8e15f26a1da4672f80517)`(FGuid & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1af48571f54ce8e15f26a1da4672f80517"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__CreateAuditRequest_1ac5a61181ee580f2eaab623232d583a38)`()` <a id="structFRHAPI__CreateAuditRequest_1ac5a61181ee580f2eaab623232d583a38"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__CreateAuditRequest_1ada2973f97f9194ae35fdfaa96e482f59)`() const` <a id="structFRHAPI__CreateAuditRequest_1ada2973f97f9194ae35fdfaa96e482f59"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a609ecfd6b2d97d7324328eb7d10dafe3)`(const FGuid & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a609ecfd6b2d97d7324328eb7d10dafe3"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1ac68898e11810b6005e03c15516fe37f7)`(FGuid && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ac68898e11810b6005e03c15516fe37f7"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a0956a708f854855adca4bfa696c69bb1)`()` <a id="structFRHAPI__CreateAuditRequest_1a0956a708f854855adca4bfa696c69bb1"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetTeamId`](#structFRHAPI__CreateAuditRequest_1a5fc25193df9bffca547bc6486dc73394)`()` <a id="structFRHAPI__CreateAuditRequest_1a5fc25193df9bffca547bc6486dc73394"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__CreateAuditRequest_1ad7bf2e0b8154d99ff70be38e6f28d802)`() const` <a id="structFRHAPI__CreateAuditRequest_1ad7bf2e0b8154d99ff70be38e6f28d802"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__CreateAuditRequest_1adc968f630e7cff4f95f0aeeef185ab31)`(const int32 & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1adc968f630e7cff4f95f0aeeef185ab31"></a>

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTeamId`](#structFRHAPI__CreateAuditRequest_1a0761b38ae44a438f915939d3d2035d76)`(int32 & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a0761b38ae44a438f915939d3d2035d76"></a>

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetTeamIdOrNull`](#structFRHAPI__CreateAuditRequest_1ad8483534765b4d8adc7089b54f759525)`()` <a id="structFRHAPI__CreateAuditRequest_1ad8483534765b4d8adc7089b54f759525"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__CreateAuditRequest_1a77e1c816f60f0a79043164d4c952b16e)`() const` <a id="structFRHAPI__CreateAuditRequest_1a77e1c816f60f0a79043164d4c952b16e"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__CreateAuditRequest_1ad04fcd3f8d152de13a87f69c419ab903)`(const int32 & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ad04fcd3f8d152de13a87f69c419ab903"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__CreateAuditRequest_1ae7ac5a4d861e01d8cbb0142d9f258a92)`(int32 && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ae7ac5a4d861e01d8cbb0142d9f258a92"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.

#### `public inline void `[`ClearTeamId`](#structFRHAPI__CreateAuditRequest_1aa9a5d8c6979465a0cedcc8d92c1e7339)`()` <a id="structFRHAPI__CreateAuditRequest_1aa9a5d8c6979465a0cedcc8d92c1e7339"></a>

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_TeamId`](#structFRHAPI__CreateAuditRequest_1a09aba03084a81f67541713cd3d1cf7e6)`()` <a id="structFRHAPI__CreateAuditRequest_1a09aba03084a81f67541713cd3d1cf7e6"></a>

Returns the default value of TeamId.

#### `public inline FORCEINLINE FString & `[`GetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1a05d9bdfaca4b14e31f9c5a16c03c5f61)`()` <a id="structFRHAPI__CreateAuditRequest_1a05d9bdfaca4b14e31f9c5a16c03c5f61"></a>

Gets the value of InvitedSessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1aab6f8956610e4009e195fde6f6348e52)`() const` <a id="structFRHAPI__CreateAuditRequest_1aab6f8956610e4009e195fde6f6348e52"></a>

Gets the value of InvitedSessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1aeaf1935e717d5ab10ebbe5f7e5d3c72c)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1aeaf1935e717d5ab10ebbe5f7e5d3c72c"></a>

Gets the value of InvitedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1af116e4e8f3ed6b19449031b361706b40)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1af116e4e8f3ed6b19449031b361706b40"></a>

Fills OutValue with the value of InvitedSessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a5afd1b3059c92cf116b76556e9b59bd6)`()` <a id="structFRHAPI__CreateAuditRequest_1a5afd1b3059c92cf116b76556e9b59bd6"></a>

Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a90c119123f13dc332e992cfa6afb59de)`() const` <a id="structFRHAPI__CreateAuditRequest_1a90c119123f13dc332e992cfa6afb59de"></a>

Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1ae68d6088bef3099dff8360f92841cd1c)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ae68d6088bef3099dff8360f92841cd1c"></a>

Sets the value of InvitedSessionId_Optional and also sets InvitedSessionId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1a4ac47775fc3270ed62d781f82d6f320b)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a4ac47775fc3270ed62d781f82d6f320b"></a>

Sets the value of InvitedSessionId_Optional and also sets InvitedSessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1a003fbcbcc014ab71c196030852972989)`()` <a id="structFRHAPI__CreateAuditRequest_1a003fbcbcc014ab71c196030852972989"></a>

Clears the value of InvitedSessionId_Optional and sets InvitedSessionId_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1a15a7474092d20d5fef37a73e33cd2972)`()` <a id="structFRHAPI__CreateAuditRequest_1a15a7474092d20d5fef37a73e33cd2972"></a>

Gets the value of RemovedSessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1a47712567395885e23298ffa9f83f3f9f)`() const` <a id="structFRHAPI__CreateAuditRequest_1a47712567395885e23298ffa9f83f3f9f"></a>

Gets the value of RemovedSessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1a825c7fbd90212f3f2edbdd7313e65c84)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a825c7fbd90212f3f2edbdd7313e65c84"></a>

Gets the value of RemovedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1a30d6229ad2fa81e03681636a56ac0b16)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a30d6229ad2fa81e03681636a56ac0b16"></a>

Fills OutValue with the value of RemovedSessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a41cb88ffa327e743d11147028f62c978)`()` <a id="structFRHAPI__CreateAuditRequest_1a41cb88ffa327e743d11147028f62c978"></a>

Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a22136dcbd05c765c8f4cf24b9a02b2c9)`() const` <a id="structFRHAPI__CreateAuditRequest_1a22136dcbd05c765c8f4cf24b9a02b2c9"></a>

Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1abb9c7bfda7f6cdae3c3f3f34822e27a0)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1abb9c7bfda7f6cdae3c3f3f34822e27a0"></a>

Sets the value of RemovedSessionId_Optional and also sets RemovedSessionId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1acfff9855c68487d8b82302766f031668)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1acfff9855c68487d8b82302766f031668"></a>

Sets the value of RemovedSessionId_Optional and also sets RemovedSessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1a0ba952c57b0beb6e05103932a1736217)`()` <a id="structFRHAPI__CreateAuditRequest_1a0ba952c57b0beb6e05103932a1736217"></a>

Clears the value of RemovedSessionId_Optional and sets RemovedSessionId_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetVersion`](#structFRHAPI__CreateAuditRequest_1a2ab618fefb6de42f4069e30969b290d4)`()` <a id="structFRHAPI__CreateAuditRequest_1a2ab618fefb6de42f4069e30969b290d4"></a>

Gets the value of Version_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetVersion`](#structFRHAPI__CreateAuditRequest_1acc4648c88ebb5bcfc3ce94deedeb6bb6)`() const` <a id="structFRHAPI__CreateAuditRequest_1acc4648c88ebb5bcfc3ce94deedeb6bb6"></a>

Gets the value of Version_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetVersion`](#structFRHAPI__CreateAuditRequest_1aa12f68713793a03c35e7cb6c2c3b1ee1)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1aa12f68713793a03c35e7cb6c2c3b1ee1"></a>

Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetVersion`](#structFRHAPI__CreateAuditRequest_1a0dc1b9c79c20a00fc4e04ca4b6db7dcc)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a0dc1b9c79c20a00fc4e04ca4b6db7dcc"></a>

Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetVersionOrNull`](#structFRHAPI__CreateAuditRequest_1a5ae4143b91b30f2e56b4317f3f94bcb0)`()` <a id="structFRHAPI__CreateAuditRequest_1a5ae4143b91b30f2e56b4317f3f94bcb0"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetVersionOrNull`](#structFRHAPI__CreateAuditRequest_1a152d81374bac6ad6cdf6749cca4c3e9b)`() const` <a id="structFRHAPI__CreateAuditRequest_1a152d81374bac6ad6cdf6749cca4c3e9b"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetVersion`](#structFRHAPI__CreateAuditRequest_1a72ba47912bf19a81bb0fefbb9a21e79b)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a72ba47912bf19a81bb0fefbb9a21e79b"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true.

#### `public inline FORCEINLINE void `[`SetVersion`](#structFRHAPI__CreateAuditRequest_1a86c3f84e288d93e9188b589b5f07d07f)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a86c3f84e288d93e9188b589b5f07d07f"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics.

#### `public inline void `[`ClearVersion`](#structFRHAPI__CreateAuditRequest_1a22db967094d806cfbb1c530cb7c0ce2b)`()` <a id="structFRHAPI__CreateAuditRequest_1a22db967094d806cfbb1c530cb7c0ce2b"></a>

Clears the value of Version_Optional and sets Version_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateAuditRequest_1a6eb10a2305525235171c2af5bfda5b12)`()` <a id="structFRHAPI__CreateAuditRequest_1a6eb10a2305525235171c2af5bfda5b12"></a>

Gets the value of ClientSettings_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateAuditRequest_1ae90be1753e9481848fc5b5b862ea7de5)`() const` <a id="structFRHAPI__CreateAuditRequest_1ae90be1753e9481848fc5b5b862ea7de5"></a>

Gets the value of ClientSettings_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateAuditRequest_1a1c2edb20dc0242486ff0a1945df701b9)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a1c2edb20dc0242486ff0a1945df701b9"></a>

Gets the value of ClientSettings_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetClientSettings`](#structFRHAPI__CreateAuditRequest_1a49777426d5df8dfd40d0f2c31a118a3a)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a49777426d5df8dfd40d0f2c31a118a3a"></a>

Fills OutValue with the value of ClientSettings_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__CreateAuditRequest_1a043af444c1aa5ad46f314a90d5c81af9)`()` <a id="structFRHAPI__CreateAuditRequest_1a043af444c1aa5ad46f314a90d5c81af9"></a>

Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__CreateAuditRequest_1ab01d4573ab527ac796965dc02455e969)`() const` <a id="structFRHAPI__CreateAuditRequest_1ab01d4573ab527ac796965dc02455e969"></a>

Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetClientSettings`](#structFRHAPI__CreateAuditRequest_1a49d7d3ef721a9456b2b5e388b2530b6e)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a49d7d3ef721a9456b2b5e388b2530b6e"></a>

Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true.

#### `public inline FORCEINLINE void `[`SetClientSettings`](#structFRHAPI__CreateAuditRequest_1a6ccce97f3fd81690837fedbd3ad4f133)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a6ccce97f3fd81690837fedbd3ad4f133"></a>

Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true using move semantics.

#### `public inline void `[`ClearClientSettings`](#structFRHAPI__CreateAuditRequest_1a3e934aa4d91799c86b881ee72ac33d90)`()` <a id="structFRHAPI__CreateAuditRequest_1a3e934aa4d91799c86b881ee72ac33d90"></a>

Clears the value of ClientSettings_Optional and sets ClientSettings_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1a14870c2d127235bfcc8302ab43e364e7)`()` <a id="structFRHAPI__CreateAuditRequest_1a14870c2d127235bfcc8302ab43e364e7"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1a0a8a4d59079903f850a2b54de302557d)`() const` <a id="structFRHAPI__CreateAuditRequest_1a0a8a4d59079903f850a2b54de302557d"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1a49b7a2c0526b90fe66f19abb266c9845)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a49b7a2c0526b90fe66f19abb266c9845"></a>

Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1aecb729a87eb34b11b3d88b6b282016ed)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1aecb729a87eb34b11b3d88b6b282016ed"></a>

Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CreateAuditRequest_1a7441185549585d1d7a0c5d44c21898b8)`()` <a id="structFRHAPI__CreateAuditRequest_1a7441185549585d1d7a0c5d44c21898b8"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CreateAuditRequest_1ab4329a8e2ac4ea3c7e1f67456bfc78f1)`() const` <a id="structFRHAPI__CreateAuditRequest_1ab4329a8e2ac4ea3c7e1f67456bfc78f1"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1a12bcb748fe0b5dd2078fbc9ad91675ae)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a12bcb748fe0b5dd2078fbc9ad91675ae"></a>

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1a31e65ee24b5dfce473fe77e36a3a2e83)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a31e65ee24b5dfce473fe77e36a3a2e83"></a>

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true using move semantics.

#### `public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1ab104c0b6b379b56cfad6bf75bc9a2c92)`()` <a id="structFRHAPI__CreateAuditRequest_1ab104c0b6b379b56cfad6bf75bc9a2c92"></a>

Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1a52f1b16e05b470db9d1454438da3f6ae)`()` <a id="structFRHAPI__CreateAuditRequest_1a52f1b16e05b470db9d1454438da3f6ae"></a>

Gets the value of PlayerStatus_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1a5e7ffda192f3393b399bbb1adc206072)`() const` <a id="structFRHAPI__CreateAuditRequest_1a5e7ffda192f3393b399bbb1adc206072"></a>

Gets the value of PlayerStatus_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1a1f9f08eeff15512472c91bf64553cf60)`(const ERHAPI_SessionPlayerStatus & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a1f9f08eeff15512472c91bf64553cf60"></a>

Gets the value of PlayerStatus_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1a17c847f2de543213eb230a003970706d)`(ERHAPI_SessionPlayerStatus & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a17c847f2de543213eb230a003970706d"></a>

Fills OutValue with the value of PlayerStatus_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__CreateAuditRequest_1acf156a6ccb4132b07bd0ea203a1d9b61)`()` <a id="structFRHAPI__CreateAuditRequest_1acf156a6ccb4132b07bd0ea203a1d9b61"></a>

Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__CreateAuditRequest_1a91894b365795ee244e11166dbb5a80fb)`() const` <a id="structFRHAPI__CreateAuditRequest_1a91894b365795ee244e11166dbb5a80fb"></a>

Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1a1156792824728ed72ae34b759da11ed2)`(const ERHAPI_SessionPlayerStatus & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a1156792824728ed72ae34b759da11ed2"></a>

Sets the value of PlayerStatus_Optional and also sets PlayerStatus_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1a66af38aa67683af26ce09026639e51fe)`(ERHAPI_SessionPlayerStatus && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a66af38aa67683af26ce09026639e51fe"></a>

Sets the value of PlayerStatus_Optional and also sets PlayerStatus_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerStatus`](#structFRHAPI__CreateAuditRequest_1ae86a75654a5952dcc1813e446ad45184)`()` <a id="structFRHAPI__CreateAuditRequest_1ae86a75654a5952dcc1813e446ad45184"></a>

Clears the value of PlayerStatus_Optional and sets PlayerStatus_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateAuditRequest_1adfcdc7182a4b19f15f0f255824fedbfd)`()` <a id="structFRHAPI__CreateAuditRequest_1adfcdc7182a4b19f15f0f255824fedbfd"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateAuditRequest_1a726525b0a276ada3166404e13fc48236)`() const` <a id="structFRHAPI__CreateAuditRequest_1a726525b0a276ada3166404e13fc48236"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateAuditRequest_1a98822afce928b67fc1fa13a795d67fd9)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a98822afce928b67fc1fa13a795d67fd9"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatform`](#structFRHAPI__CreateAuditRequest_1a246067154cc9ea8406cf535aa471d479)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a246067154cc9ea8406cf535aa471d479"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__CreateAuditRequest_1a4e24d9c3a052286d8f243eba23a4d0d2)`()` <a id="structFRHAPI__CreateAuditRequest_1a4e24d9c3a052286d8f243eba23a4d0d2"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__CreateAuditRequest_1a35b970c3ec43995e0e0b62f8f8903514)`() const` <a id="structFRHAPI__CreateAuditRequest_1a35b970c3ec43995e0e0b62f8f8903514"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__CreateAuditRequest_1adeed0c827e42b2512b740b56aea09530)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1adeed0c827e42b2512b740b56aea09530"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__CreateAuditRequest_1a3a54698f1fac4f503c5f02b55dcdaaca)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a3a54698f1fac4f503c5f02b55dcdaaca"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__CreateAuditRequest_1a9294795dd22e58391495a5820047116e)`()` <a id="structFRHAPI__CreateAuditRequest_1a9294795dd22e58391495a5820047116e"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1a5f79a2bc7fa73140a4b07702370e0830)`()` <a id="structFRHAPI__CreateAuditRequest_1a5f79a2bc7fa73140a4b07702370e0830"></a>

Gets the value of PlatformSessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1ab50fe77768921ee0752b778e4b6f9a6a)`() const` <a id="structFRHAPI__CreateAuditRequest_1ab50fe77768921ee0752b778e4b6f9a6a"></a>

Gets the value of PlatformSessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1aae2988e62b38ad4b1adc29858e100db6)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1aae2988e62b38ad4b1adc29858e100db6"></a>

Gets the value of PlatformSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1a6d4697880ae6e634306555d00b0a891e)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a6d4697880ae6e634306555d00b0a891e"></a>

Fills OutValue with the value of PlatformSessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a429f1056ae2475a4706ba2d468b78941)`()` <a id="structFRHAPI__CreateAuditRequest_1a429f1056ae2475a4706ba2d468b78941"></a>

Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1ab44d0d88c743ae1f1f1279d0a55ecd05)`() const` <a id="structFRHAPI__CreateAuditRequest_1ab44d0d88c743ae1f1f1279d0a55ecd05"></a>

Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1ab8388b35fc7019eb7e1afca5a7ddf385)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ab8388b35fc7019eb7e1afca5a7ddf385"></a>

Sets the value of PlatformSessionId_Optional and also sets PlatformSessionId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1a397a149df8f325cc57e3a5a5fb7f74cc)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a397a149df8f325cc57e3a5a5fb7f74cc"></a>

Sets the value of PlatformSessionId_Optional and also sets PlatformSessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1a6dd45a5ba092f17721dd818e1e41828c)`()` <a id="structFRHAPI__CreateAuditRequest_1a6dd45a5ba092f17721dd818e1e41828c"></a>

Clears the value of PlatformSessionId_Optional and sets PlatformSessionId_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__CreateAuditRequest_1aba203c161c714a92863f6f98ea471f0f)`()` <a id="structFRHAPI__CreateAuditRequest_1aba203c161c714a92863f6f98ea471f0f"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__CreateAuditRequest_1a637d191b90a46e474b4dbba552eb5e77)`() const` <a id="structFRHAPI__CreateAuditRequest_1a637d191b90a46e474b4dbba552eb5e77"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__CreateAuditRequest_1a0ff72c0b05e5c97e0b3a319b0b639f34)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a0ff72c0b05e5c97e0b3a319b0b639f34"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstanceId`](#structFRHAPI__CreateAuditRequest_1ade2eae5256c3a98a89e8631d86dbfb7b)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1ade2eae5256c3a98a89e8631d86dbfb7b"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetInstanceIdOrNull`](#structFRHAPI__CreateAuditRequest_1ab5f72a9039a03d74deae2fc4f22039ef)`()` <a id="structFRHAPI__CreateAuditRequest_1ab5f72a9039a03d74deae2fc4f22039ef"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__CreateAuditRequest_1a7327116e166094a81b9e43ab08e11650)`() const` <a id="structFRHAPI__CreateAuditRequest_1a7327116e166094a81b9e43ab08e11650"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__CreateAuditRequest_1aad89d56a8c37c15f1b15e508dd9e0a22)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1aad89d56a8c37c15f1b15e508dd9e0a22"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__CreateAuditRequest_1ab14d57cb5d48b343795d530e8426337c)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ab14d57cb5d48b343795d530e8426337c"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__CreateAuditRequest_1a803e29cff308198839171d53385e9c6f)`()` <a id="structFRHAPI__CreateAuditRequest_1a803e29cff308198839171d53385e9c6f"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__CreateAuditRequest_1a973b05acdbe0618dd48484ca891acc68)`()` <a id="structFRHAPI__CreateAuditRequest_1a973b05acdbe0618dd48484ca891acc68"></a>

Gets the value of HostType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__CreateAuditRequest_1ad4bfd59c0117328b0429b11a117053d7)`() const` <a id="structFRHAPI__CreateAuditRequest_1ad4bfd59c0117328b0429b11a117053d7"></a>

Gets the value of HostType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__CreateAuditRequest_1a56c39020250c2b2681cceacdadc21ddc)`(const ERHAPI_HostType & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a56c39020250c2b2681cceacdadc21ddc"></a>

Gets the value of HostType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetHostType`](#structFRHAPI__CreateAuditRequest_1af58211991f715b8881f19c52d2310509)`(ERHAPI_HostType & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1af58211991f715b8881f19c52d2310509"></a>

Fills OutValue with the value of HostType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__CreateAuditRequest_1aa55a4e3949f8d334496b8bc1f18f9bdc)`()` <a id="structFRHAPI__CreateAuditRequest_1aa55a4e3949f8d334496b8bc1f18f9bdc"></a>

Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__CreateAuditRequest_1a73b3786ffbec55ba5b4cbf2387acc166)`() const` <a id="structFRHAPI__CreateAuditRequest_1a73b3786ffbec55ba5b4cbf2387acc166"></a>

Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetHostType`](#structFRHAPI__CreateAuditRequest_1afd43470a1cd8607766f721f210245cb0)`(const ERHAPI_HostType & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1afd43470a1cd8607766f721f210245cb0"></a>

Sets the value of HostType_Optional and also sets HostType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetHostType`](#structFRHAPI__CreateAuditRequest_1a0a1c69868507e2bc4456f5e8f0d5f673)`(ERHAPI_HostType && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a0a1c69868507e2bc4456f5e8f0d5f673"></a>

Sets the value of HostType_Optional and also sets HostType_IsSet to true using move semantics.

#### `public inline void `[`ClearHostType`](#structFRHAPI__CreateAuditRequest_1ac6e3e2d5e89bb9b51f01198c08689a74)`()` <a id="structFRHAPI__CreateAuditRequest_1ac6e3e2d5e89bb9b51f01198c08689a74"></a>

Clears the value of HostType_Optional and sets HostType_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1ab80b8ae196390304e455953149328ca2)`()` <a id="structFRHAPI__CreateAuditRequest_1ab80b8ae196390304e455953149328ca2"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a8b1b9b89e567d8371bf1d144a75c3571)`() const` <a id="structFRHAPI__CreateAuditRequest_1a8b1b9b89e567d8371bf1d144a75c3571"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1aa6d75d7f152139d16de3859bda7e0538)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1aa6d75d7f152139d16de3859bda7e0538"></a>

Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a59e4cb22bcb30565ff3f72b1542c2cfa)`(FGuid & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a59e4cb22bcb30565ff3f72b1542c2cfa"></a>

Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__CreateAuditRequest_1a6f980e79987e5219c958ed35a10eb8cc)`()` <a id="structFRHAPI__CreateAuditRequest_1a6f980e79987e5219c958ed35a10eb8cc"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__CreateAuditRequest_1a9f12274b32b2b3f8ba3aac50e7770210)`() const` <a id="structFRHAPI__CreateAuditRequest_1a9f12274b32b2b3f8ba3aac50e7770210"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1adfb965b331ecf38d8f824196c1af81d8)`(const FGuid & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1adfb965b331ecf38d8f824196c1af81d8"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a666c340a8aa662279d9919e947ca9375)`(FGuid && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a666c340a8aa662279d9919e947ca9375"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a348e2be106677dc4e989c1255f11894c)`()` <a id="structFRHAPI__CreateAuditRequest_1a348e2be106677dc4e989c1255f11894c"></a>

Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a59ffb7cf6d1d079bbe7ea9279fc60a30)`()` <a id="structFRHAPI__CreateAuditRequest_1a59ffb7cf6d1d079bbe7ea9279fc60a30"></a>

Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1afd58f6e8835087414c74d3666a1eeeab)`() const` <a id="structFRHAPI__CreateAuditRequest_1afd58f6e8835087414c74d3666a1eeeab"></a>

Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a4a3b0cb8789a14ef4a2524db52641461)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a4a3b0cb8789a14ef4a2524db52641461"></a>

Gets the value of InstanceRequestTemplate_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1afa027a91c8459342f5c95dc0beb9b4f8)`(FGuid & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1afa027a91c8459342f5c95dc0beb9b4f8"></a>

Fills OutValue with the value of InstanceRequestTemplate_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__CreateAuditRequest_1a788a213b3706ac24fe4efdefc879ea47)`()` <a id="structFRHAPI__CreateAuditRequest_1a788a213b3706ac24fe4efdefc879ea47"></a>

Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__CreateAuditRequest_1a4092349b8e035d5910636c58c3fbf487)`() const` <a id="structFRHAPI__CreateAuditRequest_1a4092349b8e035d5910636c58c3fbf487"></a>

Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a600ffc8be7e24c5ebb7f436d979d6d34)`(const FGuid & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a600ffc8be7e24c5ebb7f436d979d6d34"></a>

Sets the value of InstanceRequestTemplate_Optional and also sets InstanceRequestTemplate_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a8977613e6377f6a25e812bb7338b6169)`(FGuid && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a8977613e6377f6a25e812bb7338b6169"></a>

Sets the value of InstanceRequestTemplate_Optional and also sets InstanceRequestTemplate_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a2381105fae3b7d26c8ec2a77bf18ecd5)`()` <a id="structFRHAPI__CreateAuditRequest_1a2381105fae3b7d26c8ec2a77bf18ecd5"></a>

Clears the value of InstanceRequestTemplate_Optional and sets InstanceRequestTemplate_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetMap`](#structFRHAPI__CreateAuditRequest_1ab56ba62f71344ed0a91770d2e22d4e33)`()` <a id="structFRHAPI__CreateAuditRequest_1ab56ba62f71344ed0a91770d2e22d4e33"></a>

Gets the value of Map_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMap`](#structFRHAPI__CreateAuditRequest_1a7a29bd671e27d52b1c3fb4a54096eeb6)`() const` <a id="structFRHAPI__CreateAuditRequest_1a7a29bd671e27d52b1c3fb4a54096eeb6"></a>

Gets the value of Map_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMap`](#structFRHAPI__CreateAuditRequest_1a2f1acc962186bc4d184f477cdba3024b)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a2f1acc962186bc4d184f477cdba3024b"></a>

Gets the value of Map_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMap`](#structFRHAPI__CreateAuditRequest_1a4cf8580ff75f81c48721041f21288128)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a4cf8580ff75f81c48721041f21288128"></a>

Fills OutValue with the value of Map_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMapOrNull`](#structFRHAPI__CreateAuditRequest_1a898742a525714547d296e182e000bb1d)`()` <a id="structFRHAPI__CreateAuditRequest_1a898742a525714547d296e182e000bb1d"></a>

Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMapOrNull`](#structFRHAPI__CreateAuditRequest_1a36d07fd39ed6d4eb6d6534db5fb98682)`() const` <a id="structFRHAPI__CreateAuditRequest_1a36d07fd39ed6d4eb6d6534db5fb98682"></a>

Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMap`](#structFRHAPI__CreateAuditRequest_1aa4eb9899d5e3c044f1749229fae06294)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1aa4eb9899d5e3c044f1749229fae06294"></a>

Sets the value of Map_Optional and also sets Map_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMap`](#structFRHAPI__CreateAuditRequest_1ad849994c603c0e85a111b4718b4adccc)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ad849994c603c0e85a111b4718b4adccc"></a>

Sets the value of Map_Optional and also sets Map_IsSet to true using move semantics.

#### `public inline void `[`ClearMap`](#structFRHAPI__CreateAuditRequest_1a98e2084cc570644d016cc2caf3ce08ff)`()` <a id="structFRHAPI__CreateAuditRequest_1a98e2084cc570644d016cc2caf3ce08ff"></a>

Clears the value of Map_Optional and sets Map_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetMode`](#structFRHAPI__CreateAuditRequest_1aad5f47feb24f8bdb4821dbe86134b1bb)`()` <a id="structFRHAPI__CreateAuditRequest_1aad5f47feb24f8bdb4821dbe86134b1bb"></a>

Gets the value of Mode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMode`](#structFRHAPI__CreateAuditRequest_1abf7fcbf75c4a0a23e3065165b03eb7e9)`() const` <a id="structFRHAPI__CreateAuditRequest_1abf7fcbf75c4a0a23e3065165b03eb7e9"></a>

Gets the value of Mode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMode`](#structFRHAPI__CreateAuditRequest_1a18ac75779bc0fd5657b918a1140df2a6)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a18ac75779bc0fd5657b918a1140df2a6"></a>

Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMode`](#structFRHAPI__CreateAuditRequest_1a8135c5b8be5a7518b467e47a2dad824f)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a8135c5b8be5a7518b467e47a2dad824f"></a>

Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetModeOrNull`](#structFRHAPI__CreateAuditRequest_1aab560d989d697c4d24c734b9c4b12974)`()` <a id="structFRHAPI__CreateAuditRequest_1aab560d989d697c4d24c734b9c4b12974"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetModeOrNull`](#structFRHAPI__CreateAuditRequest_1ad74bc3c3bdee0b3b477d22159d680ae6)`() const` <a id="structFRHAPI__CreateAuditRequest_1ad74bc3c3bdee0b3b477d22159d680ae6"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMode`](#structFRHAPI__CreateAuditRequest_1af9af587776b094765f5814761b872262)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1af9af587776b094765f5814761b872262"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMode`](#structFRHAPI__CreateAuditRequest_1ac1d0729667d7714a5a8fb59b717e1301)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ac1d0729667d7714a5a8fb59b717e1301"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true using move semantics.

#### `public inline void `[`ClearMode`](#structFRHAPI__CreateAuditRequest_1a708273853f8264d35bb53364faa1baeb)`()` <a id="structFRHAPI__CreateAuditRequest_1a708273853f8264d35bb53364faa1baeb"></a>

Clears the value of Mode_Optional and sets Mode_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetAllocationId`](#structFRHAPI__CreateAuditRequest_1a6fd844c62dd68a663815783f27558b61)`()` <a id="structFRHAPI__CreateAuditRequest_1a6fd844c62dd68a663815783f27558b61"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetAllocationId`](#structFRHAPI__CreateAuditRequest_1a1319a5986ad2f5847894bc4c6d6f4ef1)`() const` <a id="structFRHAPI__CreateAuditRequest_1a1319a5986ad2f5847894bc4c6d6f4ef1"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetAllocationId`](#structFRHAPI__CreateAuditRequest_1a54470133a373e0723ffd0de869ed1066)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a54470133a373e0723ffd0de869ed1066"></a>

Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAllocationId`](#structFRHAPI__CreateAuditRequest_1a708d14d1b121b4523b80f5cca0c85064)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a708d14d1b121b4523b80f5cca0c85064"></a>

Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetAllocationIdOrNull`](#structFRHAPI__CreateAuditRequest_1a501aca9848ff5f78238dd0ed5bb7fcde)`()` <a id="structFRHAPI__CreateAuditRequest_1a501aca9848ff5f78238dd0ed5bb7fcde"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__CreateAuditRequest_1ae9010bafc49cdaffbdc6fb09af25c7c3)`() const` <a id="structFRHAPI__CreateAuditRequest_1ae9010bafc49cdaffbdc6fb09af25c7c3"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAllocationId`](#structFRHAPI__CreateAuditRequest_1ae48b10988699accdac259306c2b300a9)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ae48b10988699accdac259306c2b300a9"></a>

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAllocationId`](#structFRHAPI__CreateAuditRequest_1a05e844b18eb0262907923ace199a694e)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a05e844b18eb0262907923ace199a694e"></a>

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true using move semantics.

#### `public inline void `[`ClearAllocationId`](#structFRHAPI__CreateAuditRequest_1a32fabf3a37474ad325e7c0e1150c5b19)`()` <a id="structFRHAPI__CreateAuditRequest_1a32fabf3a37474ad325e7c0e1150c5b19"></a>

Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__CreateAuditRequest_1a58d7d75ce7c49d4451714e5991a7b26d)`()` <a id="structFRHAPI__CreateAuditRequest_1a58d7d75ce7c49d4451714e5991a7b26d"></a>

Gets the value of JoinStatus_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__CreateAuditRequest_1a30516d6256983e4d947ec9cd002f8d5a)`() const` <a id="structFRHAPI__CreateAuditRequest_1a30516d6256983e4d947ec9cd002f8d5a"></a>

Gets the value of JoinStatus_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__CreateAuditRequest_1a96730737fae846cb0f2566d9e4d9c9d8)`(const ERHAPI_InstanceJoinableStatus & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a96730737fae846cb0f2566d9e4d9c9d8"></a>

Gets the value of JoinStatus_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetJoinStatus`](#structFRHAPI__CreateAuditRequest_1a1d0e57a33f24e6cfaba380c4d913a356)`(ERHAPI_InstanceJoinableStatus & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a1d0e57a33f24e6cfaba380c4d913a356"></a>

Fills OutValue with the value of JoinStatus_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__CreateAuditRequest_1a24ad05360148432091757d2273a6c9c9)`()` <a id="structFRHAPI__CreateAuditRequest_1a24ad05360148432091757d2273a6c9c9"></a>

Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__CreateAuditRequest_1a8ad768312a7f1a2a6d48fa8533dce3fd)`() const` <a id="structFRHAPI__CreateAuditRequest_1a8ad768312a7f1a2a6d48fa8533dce3fd"></a>

Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetJoinStatus`](#structFRHAPI__CreateAuditRequest_1a09106ee74c547fd4d900c842a92d8c80)`(const ERHAPI_InstanceJoinableStatus & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a09106ee74c547fd4d900c842a92d8c80"></a>

Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true.

#### `public inline FORCEINLINE void `[`SetJoinStatus`](#structFRHAPI__CreateAuditRequest_1ac22a0a4cdc7f829e21fa5ac18577be6a)`(ERHAPI_InstanceJoinableStatus && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ac22a0a4cdc7f829e21fa5ac18577be6a"></a>

Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinStatus`](#structFRHAPI__CreateAuditRequest_1af8a6f2207119beda87c49a8aa237a1bd)`()` <a id="structFRHAPI__CreateAuditRequest_1af8a6f2207119beda87c49a8aa237a1bd"></a>

Clears the value of JoinStatus_Optional and sets JoinStatus_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__CreateAuditRequest_1a1d8d0b2fb274d60a52f3ce03d2f84e5e)`()` <a id="structFRHAPI__CreateAuditRequest_1a1d8d0b2fb274d60a52f3ce03d2f84e5e"></a>

Gets the value of JoinParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__CreateAuditRequest_1a9e885d381bca122e74eead53c2bf02b1)`() const` <a id="structFRHAPI__CreateAuditRequest_1a9e885d381bca122e74eead53c2bf02b1"></a>

Gets the value of JoinParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__CreateAuditRequest_1a152f80151f2e54d4986d75486637ef92)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a152f80151f2e54d4986d75486637ef92"></a>

Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetJoinParams`](#structFRHAPI__CreateAuditRequest_1a3e2a2f1c98af565970c51c712b1bc57e)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a3e2a2f1c98af565970c51c712b1bc57e"></a>

Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__CreateAuditRequest_1accc745f7d092c132af1deb803ed627e2)`()` <a id="structFRHAPI__CreateAuditRequest_1accc745f7d092c132af1deb803ed627e2"></a>

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__CreateAuditRequest_1a77eac90bce5a3d34ec23f6f68e256447)`() const` <a id="structFRHAPI__CreateAuditRequest_1a77eac90bce5a3d34ec23f6f68e256447"></a>

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetJoinParams`](#structFRHAPI__CreateAuditRequest_1a6b616553a152f476580bb99619985aca)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a6b616553a152f476580bb99619985aca"></a>

Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.

#### `public inline FORCEINLINE void `[`SetJoinParams`](#structFRHAPI__CreateAuditRequest_1ade072285aa4e6dcc6db76cf336fc8243)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ade072285aa4e6dcc6db76cf336fc8243"></a>

Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinParams`](#structFRHAPI__CreateAuditRequest_1ae15128c077fc62ffeec86842240dbd52)`()` <a id="structFRHAPI__CreateAuditRequest_1ae15128c077fc62ffeec86842240dbd52"></a>

Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1a0b2550c2e5433ecd25e9d129bb103a9a)`()` <a id="structFRHAPI__CreateAuditRequest_1a0b2550c2e5433ecd25e9d129bb103a9a"></a>

Gets the value of InstanceHealth_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1a2cd6ceafd5e7fb648eca8372620737ab)`() const` <a id="structFRHAPI__CreateAuditRequest_1a2cd6ceafd5e7fb648eca8372620737ab"></a>

Gets the value of InstanceHealth_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1a15b8d51ec478c1fd94287f366daa27be)`(const ERHAPI_InstanceHealthStatus & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a15b8d51ec478c1fd94287f366daa27be"></a>

Gets the value of InstanceHealth_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1a0c42a1aa564688e428b499d38d630c3c)`(ERHAPI_InstanceHealthStatus & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a0c42a1aa564688e428b499d38d630c3c"></a>

Fills OutValue with the value of InstanceHealth_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__CreateAuditRequest_1ae4e8f1a5798ca840ea41c2b3bf9234fc)`()` <a id="structFRHAPI__CreateAuditRequest_1ae4e8f1a5798ca840ea41c2b3bf9234fc"></a>

Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__CreateAuditRequest_1acec76fc7090b692fed2288afb7c076b2)`() const` <a id="structFRHAPI__CreateAuditRequest_1acec76fc7090b692fed2288afb7c076b2"></a>

Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1a96d82cecfa0579c7518285ed7da755d0)`(const ERHAPI_InstanceHealthStatus & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a96d82cecfa0579c7518285ed7da755d0"></a>

Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1a31654d147df1cce0531ff36f590455f5)`(ERHAPI_InstanceHealthStatus && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a31654d147df1cce0531ff36f590455f5"></a>

Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceHealth`](#structFRHAPI__CreateAuditRequest_1ab839fe4135e907ee3a6949f4a2ed4473)`()` <a id="structFRHAPI__CreateAuditRequest_1ab839fe4135e907ee3a6949f4a2ed4473"></a>

Clears the value of InstanceHealth_Optional and sets InstanceHealth_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetQueueId`](#structFRHAPI__CreateAuditRequest_1a3811ab4e3042bd06d0a05c69e6267d92)`()` <a id="structFRHAPI__CreateAuditRequest_1a3811ab4e3042bd06d0a05c69e6267d92"></a>

Gets the value of QueueId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetQueueId`](#structFRHAPI__CreateAuditRequest_1a191d5c6373b437bb4e59a9346e21d2d7)`() const` <a id="structFRHAPI__CreateAuditRequest_1a191d5c6373b437bb4e59a9346e21d2d7"></a>

Gets the value of QueueId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetQueueId`](#structFRHAPI__CreateAuditRequest_1ac953bcf757ee34c32be6d8f37aa9f20a)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1ac953bcf757ee34c32be6d8f37aa9f20a"></a>

Gets the value of QueueId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetQueueId`](#structFRHAPI__CreateAuditRequest_1ae518733ce82125254c7786755b4c5e05)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1ae518733ce82125254c7786755b4c5e05"></a>

Fills OutValue with the value of QueueId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetQueueIdOrNull`](#structFRHAPI__CreateAuditRequest_1afb1a5c946d3d0f9805671316faf0f405)`()` <a id="structFRHAPI__CreateAuditRequest_1afb1a5c946d3d0f9805671316faf0f405"></a>

Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetQueueIdOrNull`](#structFRHAPI__CreateAuditRequest_1a9d101976f808f94e489421201b91c07e)`() const` <a id="structFRHAPI__CreateAuditRequest_1a9d101976f808f94e489421201b91c07e"></a>

Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__CreateAuditRequest_1a97220acdbfe873da874b9e3708e385f2)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a97220acdbfe873da874b9e3708e385f2"></a>

Sets the value of QueueId_Optional and also sets QueueId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetQueueId`](#structFRHAPI__CreateAuditRequest_1ab4fd0d0f8af1b7063dbe7dd88f4a3b95)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ab4fd0d0f8af1b7063dbe7dd88f4a3b95"></a>

Sets the value of QueueId_Optional and also sets QueueId_IsSet to true using move semantics.

#### `public inline void `[`ClearQueueId`](#structFRHAPI__CreateAuditRequest_1aea875a3118fee4f648079eebaac9b656)`()` <a id="structFRHAPI__CreateAuditRequest_1aea875a3118fee4f648079eebaac9b656"></a>

Clears the value of QueueId_Optional and sets QueueId_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetTicketId`](#structFRHAPI__CreateAuditRequest_1ab52cb23df145fee0d9f842069dd88dc4)`()` <a id="structFRHAPI__CreateAuditRequest_1ab52cb23df145fee0d9f842069dd88dc4"></a>

Gets the value of TicketId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetTicketId`](#structFRHAPI__CreateAuditRequest_1a401f06d7eb86b3b39abe5bc961cafe4b)`() const` <a id="structFRHAPI__CreateAuditRequest_1a401f06d7eb86b3b39abe5bc961cafe4b"></a>

Gets the value of TicketId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetTicketId`](#structFRHAPI__CreateAuditRequest_1ac439a373fdbab728eb251c5c10fb70f1)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1ac439a373fdbab728eb251c5c10fb70f1"></a>

Gets the value of TicketId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTicketId`](#structFRHAPI__CreateAuditRequest_1ade899684ff8deaa82944289b859500e7)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1ade899684ff8deaa82944289b859500e7"></a>

Fills OutValue with the value of TicketId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetTicketIdOrNull`](#structFRHAPI__CreateAuditRequest_1aa674f55956d1c1bd7737219d9efdb4db)`()` <a id="structFRHAPI__CreateAuditRequest_1aa674f55956d1c1bd7737219d9efdb4db"></a>

Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetTicketIdOrNull`](#structFRHAPI__CreateAuditRequest_1a832121a405523f2583203fd775a26695)`() const` <a id="structFRHAPI__CreateAuditRequest_1a832121a405523f2583203fd775a26695"></a>

Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTicketId`](#structFRHAPI__CreateAuditRequest_1a9b1f1b60e6da070b33129c60c338cd86)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a9b1f1b60e6da070b33129c60c338cd86"></a>

Sets the value of TicketId_Optional and also sets TicketId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTicketId`](#structFRHAPI__CreateAuditRequest_1ab05f77e7a422866a31dec6ea8850360f)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ab05f77e7a422866a31dec6ea8850360f"></a>

Sets the value of TicketId_Optional and also sets TicketId_IsSet to true using move semantics.

#### `public inline void `[`ClearTicketId`](#structFRHAPI__CreateAuditRequest_1aabb4b486f8327532dd975262f8fcc5b3)`()` <a id="structFRHAPI__CreateAuditRequest_1aabb4b486f8327532dd975262f8fcc5b3"></a>

Clears the value of TicketId_Optional and sets TicketId_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1ad4fcc6f14aa30264599e9b08c774671b)`()` <a id="structFRHAPI__CreateAuditRequest_1ad4fcc6f14aa30264599e9b08c774671b"></a>

Gets the value of AdditionalParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1ad2216e66c798bddc65a7fac404c99f5c)`() const` <a id="structFRHAPI__CreateAuditRequest_1ad2216e66c798bddc65a7fac404c99f5c"></a>

Gets the value of AdditionalParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1a7a970be13078198d6c939be8b7409382)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a7a970be13078198d6c939be8b7409382"></a>

Gets the value of AdditionalParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1adf6514a348bae57a9696d46546e05305)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1adf6514a348bae57a9696d46546e05305"></a>

Fills OutValue with the value of AdditionalParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalParamsOrNull`](#structFRHAPI__CreateAuditRequest_1ab5d8e3378a0ca5198ff271b7c09dc63a)`()` <a id="structFRHAPI__CreateAuditRequest_1ab5d8e3378a0ca5198ff271b7c09dc63a"></a>

Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalParamsOrNull`](#structFRHAPI__CreateAuditRequest_1a40cf2e8dd7ed3f739a71b90761804445)`() const` <a id="structFRHAPI__CreateAuditRequest_1a40cf2e8dd7ed3f739a71b90761804445"></a>

Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1ad12ef0ac671f3bf24cad0833c1b86fd9)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ad12ef0ac671f3bf24cad0833c1b86fd9"></a>

Sets the value of AdditionalParams_Optional and also sets AdditionalParams_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1a8a97452a4e6f69a30e65738a8fe9e004)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a8a97452a4e6f69a30e65738a8fe9e004"></a>

Sets the value of AdditionalParams_Optional and also sets AdditionalParams_IsSet to true using move semantics.

#### `public inline void `[`ClearAdditionalParams`](#structFRHAPI__CreateAuditRequest_1a55b2ec8eefed3283bed95f9afbd2b247)`()` <a id="structFRHAPI__CreateAuditRequest_1a55b2ec8eefed3283bed95f9afbd2b247"></a>

Clears the value of AdditionalParams_Optional and sets AdditionalParams_IsSet to false.

#### `public inline FORCEINLINE TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__CreateAuditRequest_1a3339d3192f61766ed3fce25acfc18a31)`()` <a id="structFRHAPI__CreateAuditRequest_1a3339d3192f61766ed3fce25acfc18a31"></a>

Gets the value of MapPreferences_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__CreateAuditRequest_1af7f42bd2892fc9e2789e7088f3343ef7)`() const` <a id="structFRHAPI__CreateAuditRequest_1af7f42bd2892fc9e2789e7088f3343ef7"></a>

Gets the value of MapPreferences_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__CreateAuditRequest_1aaec10f17ebf063d533607625665a70df)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1aaec10f17ebf063d533607625665a70df"></a>

Gets the value of MapPreferences_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMapPreferences`](#structFRHAPI__CreateAuditRequest_1a5384225241fcaf163c97b967f200befc)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a5384225241fcaf163c97b967f200befc"></a>

Fills OutValue with the value of MapPreferences_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__CreateAuditRequest_1a6fd3f31902484b035553568b5fac3407)`()` <a id="structFRHAPI__CreateAuditRequest_1a6fd3f31902484b035553568b5fac3407"></a>

Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__CreateAuditRequest_1a65c4349d15bdfc2a2e86675d98006ba8)`() const` <a id="structFRHAPI__CreateAuditRequest_1a65c4349d15bdfc2a2e86675d98006ba8"></a>

Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMapPreferences`](#structFRHAPI__CreateAuditRequest_1a990560e60b91bed31190ef3823132f08)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a990560e60b91bed31190ef3823132f08"></a>

Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMapPreferences`](#structFRHAPI__CreateAuditRequest_1aa35d57908dddc37e8056c59c32e1ef9f)`(TArray< FString > && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1aa35d57908dddc37e8056c59c32e1ef9f"></a>

Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true using move semantics.

#### `public inline void `[`ClearMapPreferences`](#structFRHAPI__CreateAuditRequest_1a8f074dc9b8affdbefbf78306c64e52a5)`()` <a id="structFRHAPI__CreateAuditRequest_1a8f074dc9b8affdbefbf78306c64e52a5"></a>

Clears the value of MapPreferences_Optional and sets MapPreferences_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1a2cd516e75ad77e9e8bfca0056cbdb50d)`()` <a id="structFRHAPI__CreateAuditRequest_1a2cd516e75ad77e9e8bfca0056cbdb50d"></a>

Gets the value of QueuedSessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1a387219f48362f83d1399df81fd40d806)`() const` <a id="structFRHAPI__CreateAuditRequest_1a387219f48362f83d1399df81fd40d806"></a>

Gets the value of QueuedSessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1a9023de1b71309bccd1b961c12b12c599)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a9023de1b71309bccd1b961c12b12c599"></a>

Gets the value of QueuedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1a2bed89afca8d34ddf2ff36f4fff2fb2e)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a2bed89afca8d34ddf2ff36f4fff2fb2e"></a>

Fills OutValue with the value of QueuedSessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a5f99c07a0242aeac784939f4012cd0d0)`()` <a id="structFRHAPI__CreateAuditRequest_1a5f99c07a0242aeac784939f4012cd0d0"></a>

Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a9f11dc0e45892d00a10ea58bbae3dc1e)`() const` <a id="structFRHAPI__CreateAuditRequest_1a9f11dc0e45892d00a10ea58bbae3dc1e"></a>

Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1a48f56d5eb9772af525744e1acb501e61)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a48f56d5eb9772af525744e1acb501e61"></a>

Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1a007549c247609f6ceddcebad67fdc515)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a007549c247609f6ceddcebad67fdc515"></a>

Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1af13bcc59cc707c792aa29f45d8f5c6a3)`()` <a id="structFRHAPI__CreateAuditRequest_1af13bcc59cc707c792aa29f45d8f5c6a3"></a>

Clears the value of QueuedSessionId_Optional and sets QueuedSessionId_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__CreateAuditRequest_1af3439a9fbf9624ae10e11a8243fc156a)`()` <a id="structFRHAPI__CreateAuditRequest_1af3439a9fbf9624ae10e11a8243fc156a"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__CreateAuditRequest_1af152541bb8d4e1625456192a55ce3e30)`() const` <a id="structFRHAPI__CreateAuditRequest_1af152541bb8d4e1625456192a55ce3e30"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__CreateAuditRequest_1aebfbb54c14deed58fbff94e5873e2e32)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1aebfbb54c14deed58fbff94e5873e2e32"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__CreateAuditRequest_1ac6493ff8689421a669720fd1f4653b02)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1ac6493ff8689421a669720fd1f4653b02"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__CreateAuditRequest_1ad523d42ca3ca231f1f959ae655002b24)`()` <a id="structFRHAPI__CreateAuditRequest_1ad523d42ca3ca231f1f959ae655002b24"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__CreateAuditRequest_1a941db980896465dd795e6ca8cf33e916)`() const` <a id="structFRHAPI__CreateAuditRequest_1a941db980896465dd795e6ca8cf33e916"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__CreateAuditRequest_1ab3f647b596d9941be7aba4da3f40a3b9)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ab3f647b596d9941be7aba4da3f40a3b9"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__CreateAuditRequest_1a70d3c4dd06d484d34283e0a37676af2d)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a70d3c4dd06d484d34283e0a37676af2d"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__CreateAuditRequest_1ae26f168091000aa54c84e0a6a85733f7)`()` <a id="structFRHAPI__CreateAuditRequest_1ae26f168091000aa54c84e0a6a85733f7"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1acc2ebf58a3c5d9bb238e227623117d96)`()` <a id="structFRHAPI__CreateAuditRequest_1acc2ebf58a3c5d9bb238e227623117d96"></a>

Gets the value of TicketWaitSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1a0584b10706a029488bde94c23669eb18)`() const` <a id="structFRHAPI__CreateAuditRequest_1a0584b10706a029488bde94c23669eb18"></a>

Gets the value of TicketWaitSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1ae3199fa031eeec0fc046bc4542aea0cd)`(const int32 & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1ae3199fa031eeec0fc046bc4542aea0cd"></a>

Gets the value of TicketWaitSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1ac05a25269289193e8adc90d5f31754b0)`(int32 & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1ac05a25269289193e8adc90d5f31754b0"></a>

Fills OutValue with the value of TicketWaitSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetTicketWaitSecondsOrNull`](#structFRHAPI__CreateAuditRequest_1a5833a1a55e5bbd55bcbddd823aab4a6e)`()` <a id="structFRHAPI__CreateAuditRequest_1a5833a1a55e5bbd55bcbddd823aab4a6e"></a>

Returns a pointer to TicketWaitSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetTicketWaitSecondsOrNull`](#structFRHAPI__CreateAuditRequest_1a676020416a2c9db43154102e6ff5436b)`() const` <a id="structFRHAPI__CreateAuditRequest_1a676020416a2c9db43154102e6ff5436b"></a>

Returns a pointer to TicketWaitSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1a9e0b30a18f6ecf250afd782b8418aeea)`(const int32 & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a9e0b30a18f6ecf250afd782b8418aeea"></a>

Sets the value of TicketWaitSeconds_Optional and also sets TicketWaitSeconds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1ad864c49727bfb86dc4fb4c671ade06af)`(int32 && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ad864c49727bfb86dc4fb4c671ade06af"></a>

Sets the value of TicketWaitSeconds_Optional and also sets TicketWaitSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1ae45761ab68ddfdda0947d1fe8928d7c0)`()` <a id="structFRHAPI__CreateAuditRequest_1ae45761ab68ddfdda0947d1fe8928d7c0"></a>

Clears the value of TicketWaitSeconds_Optional and sets TicketWaitSeconds_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_TicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1a0a69789e2440bd1b94fc4bb003afef71)`()` <a id="structFRHAPI__CreateAuditRequest_1a0a69789e2440bd1b94fc4bb003afef71"></a>

Returns the default value of TicketWaitSeconds.

#### `public inline FORCEINLINE FString & `[`GetMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1a260d532c8776f69d11d794e0871dc899)`()` <a id="structFRHAPI__CreateAuditRequest_1a260d532c8776f69d11d794e0871dc899"></a>

Gets the value of MatchMakingProfileId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1a36e7e9f3dde31c94ffb9c66b45ccd166)`() const` <a id="structFRHAPI__CreateAuditRequest_1a36e7e9f3dde31c94ffb9c66b45ccd166"></a>

Gets the value of MatchMakingProfileId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1a8302a6d07d99fb1e3a8db87b24a74693)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a8302a6d07d99fb1e3a8db87b24a74693"></a>

Gets the value of MatchMakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1a4bdb74cfc5c5c0ba5491ecf816d6ad7a)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a4bdb74cfc5c5c0ba5491ecf816d6ad7a"></a>

Fills OutValue with the value of MatchMakingProfileId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMatchMakingProfileIdOrNull`](#structFRHAPI__CreateAuditRequest_1a8d22bb557fed9ef7acbdce31fe94811b)`()` <a id="structFRHAPI__CreateAuditRequest_1a8d22bb557fed9ef7acbdce31fe94811b"></a>

Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMatchMakingProfileIdOrNull`](#structFRHAPI__CreateAuditRequest_1a21428bb5141a986c86fd051d20fbc1f3)`() const` <a id="structFRHAPI__CreateAuditRequest_1a21428bb5141a986c86fd051d20fbc1f3"></a>

Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1aead9eb8429069fc898ebf25eb2f7359b)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1aead9eb8429069fc898ebf25eb2f7359b"></a>

Sets the value of MatchMakingProfileId_Optional and also sets MatchMakingProfileId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1a10841876b5a91da1a2973f2ce5a84315)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a10841876b5a91da1a2973f2ce5a84315"></a>

Sets the value of MatchMakingProfileId_Optional and also sets MatchMakingProfileId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1ae670d764568c78d90313647b80d8ebd8)`()` <a id="structFRHAPI__CreateAuditRequest_1ae670d764568c78d90313647b80d8ebd8"></a>

Clears the value of MatchMakingProfileId_Optional and sets MatchMakingProfileId_IsSet to false.

#### `public inline FORCEINLINE TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__CreateAuditRequest_1a6790705a256c6ed843126099a11349a2)`()` <a id="structFRHAPI__CreateAuditRequest_1a6790705a256c6ed843126099a11349a2"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__CreateAuditRequest_1a687cb999e868f7f850ea1e235ed8b5b3)`() const` <a id="structFRHAPI__CreateAuditRequest_1a687cb999e868f7f850ea1e235ed8b5b3"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__CreateAuditRequest_1abe19087f0a96ccb5bc54c8e73e8a833a)`(const TArray< FGuid > & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1abe19087f0a96ccb5bc54c8e73e8a833a"></a>

Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayers`](#structFRHAPI__CreateAuditRequest_1af426bd16b965e0fa0f7b05306e5913bb)`(TArray< FGuid > & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1af426bd16b965e0fa0f7b05306e5913bb"></a>

Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< FGuid > * `[`GetPlayersOrNull`](#structFRHAPI__CreateAuditRequest_1a960aba5e903b9bf21f11a75c27761f1d)`()` <a id="structFRHAPI__CreateAuditRequest_1a960aba5e903b9bf21f11a75c27761f1d"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< FGuid > * `[`GetPlayersOrNull`](#structFRHAPI__CreateAuditRequest_1a55e7c812dcf4661103f47f4607bc523f)`() const` <a id="structFRHAPI__CreateAuditRequest_1a55e7c812dcf4661103f47f4607bc523f"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__CreateAuditRequest_1a4fcf20f05daf6161db20609ac4893616)`(const TArray< FGuid > & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a4fcf20f05daf6161db20609ac4893616"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__CreateAuditRequest_1ab0aaafde98003275dfc355c2325fd486)`(TArray< FGuid > && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ab0aaafde98003275dfc355c2325fd486"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayers`](#structFRHAPI__CreateAuditRequest_1a69f092c9a60a172af8618766f7946567)`()` <a id="structFRHAPI__CreateAuditRequest_1a69f092c9a60a172af8618766f7946567"></a>

Clears the value of Players_Optional and sets Players_IsSet to false.

