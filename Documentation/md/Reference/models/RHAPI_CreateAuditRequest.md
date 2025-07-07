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
`public inline FString & `[`GetEventName`](#structFRHAPI__CreateAuditRequest_1a86ee131cda0e7618cb6ae6116c07ae09)`()` | Gets the value of EventName.
`public inline const FString & `[`GetEventName`](#structFRHAPI__CreateAuditRequest_1a077ba9a3f2ed091b983b29f7b389406c)`() const` | Gets the value of EventName.
`public inline void `[`SetEventName`](#structFRHAPI__CreateAuditRequest_1aed41954f7bc27eeaee230e697aeb38b1)`(const FString & NewValue)` | Sets the value of EventName.
`public inline void `[`SetEventName`](#structFRHAPI__CreateAuditRequest_1af45ccc10a15638c8c7e0c1e96feb9ab6)`(FString && NewValue)` | Sets the value of EventName using move semantics.
`public inline FString & `[`GetSessionId`](#structFRHAPI__CreateAuditRequest_1a988b219308719aca9de7072a512584bf)`()` | Gets the value of SessionId.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__CreateAuditRequest_1a173d34cd08b2d1f338ca3060c2455cf9)`() const` | Gets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__CreateAuditRequest_1a07b7d6ba6db6a09732b0803cf1613fbc)`(const FString & NewValue)` | Sets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__CreateAuditRequest_1aeab59058eda7191fce7e4ff6b9f3fcb1)`(FString && NewValue)` | Sets the value of SessionId using move semantics.
`public inline FString & `[`GetReason`](#structFRHAPI__CreateAuditRequest_1a42e5353e5bcf2d30d548a20b5231df06)`()` | Gets the value of Reason_Optional, regardless of it having been set.
`public inline const FString & `[`GetReason`](#structFRHAPI__CreateAuditRequest_1a6d5051af11edb7a8a39fe35186f8a39e)`() const` | Gets the value of Reason_Optional, regardless of it having been set.
`public inline const FString & `[`GetReason`](#structFRHAPI__CreateAuditRequest_1acda010d73cfaeb2fdc93d56027caec21)`(const FString & DefaultValue) const` | Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetReason`](#structFRHAPI__CreateAuditRequest_1a9b202928341273a221ed02ff811fcab5)`(FString & OutValue) const` | Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetReasonOrNull`](#structFRHAPI__CreateAuditRequest_1aa362ff6532018bc3bef52963b534ec5d)`()` | Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetReasonOrNull`](#structFRHAPI__CreateAuditRequest_1abcd6571434c02a436aa049ed1d5cc643)`() const` | Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetReason`](#structFRHAPI__CreateAuditRequest_1ab78171a656e3e553d9fd51a739b84030)`(const FString & NewValue)` | Sets the value of Reason_Optional and also sets Reason_IsSet to true.
`public inline void `[`SetReason`](#structFRHAPI__CreateAuditRequest_1a24e233448ca803a91e982338d200aaff)`(FString && NewValue)` | Sets the value of Reason_Optional and also sets Reason_IsSet to true using move semantics.
`public inline void `[`ClearReason`](#structFRHAPI__CreateAuditRequest_1a6375d709e17e8bb9ecff0c349fd4125c)`()` | Clears the value of Reason_Optional and sets Reason_IsSet to false.
`public inline bool `[`IsReasonSet`](#structFRHAPI__CreateAuditRequest_1a6224c0c862b237b11df78bab5c0602fa)`() const` | Checks whether Reason_Optional has been set.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateAuditRequest_1adf7af672642bbeb437739eb502f25bb7)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateAuditRequest_1a40328d64cba30c56951aa09778a444e7)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateAuditRequest_1a85509064a7ef3a5017522c65331f77ff)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__CreateAuditRequest_1afd2181839cebc1c6475d7bea33ad5cac)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CreateAuditRequest_1a705852e5e2dc1ac7cacf5f7dc5c82e93)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CreateAuditRequest_1a122e4ee10464a0b24e9ce4ae5498cd9f)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__CreateAuditRequest_1ada2d3ddecd81d278be5d6d9bf479412d)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__CreateAuditRequest_1a59ae06e963f56f1d8e9d22535294fb47)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__CreateAuditRequest_1a7133cb0e9ac9b3e7655c25af45943313)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__CreateAuditRequest_1ac1b2b913857633d1795deedb7843ec0b)`() const` | Checks whether CustomData_Optional has been set.
`public inline FString & `[`GetSessionType`](#structFRHAPI__CreateAuditRequest_1ad115fadcd79caf371a7c3e8f92b5ea11)`()` | Gets the value of SessionType_Optional, regardless of it having been set.
`public inline const FString & `[`GetSessionType`](#structFRHAPI__CreateAuditRequest_1a23ff7047a8816b5ace986b085cf92eb4)`() const` | Gets the value of SessionType_Optional, regardless of it having been set.
`public inline const FString & `[`GetSessionType`](#structFRHAPI__CreateAuditRequest_1a85ac2bd0973ee2d808842cc5dde40442)`(const FString & DefaultValue) const` | Gets the value of SessionType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessionType`](#structFRHAPI__CreateAuditRequest_1a09d309e2cc5ae94783d0fa64806f1dbb)`(FString & OutValue) const` | Fills OutValue with the value of SessionType_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetSessionTypeOrNull`](#structFRHAPI__CreateAuditRequest_1ae7e06c47aa55aee7e7b862eb0c74bc75)`()` | Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetSessionTypeOrNull`](#structFRHAPI__CreateAuditRequest_1adb656d7ad2674b143e13174b82ca6969)`() const` | Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessionType`](#structFRHAPI__CreateAuditRequest_1ae7d0d6f441b5d5411432b0a6dc88371a)`(const FString & NewValue)` | Sets the value of SessionType_Optional and also sets SessionType_IsSet to true.
`public inline void `[`SetSessionType`](#structFRHAPI__CreateAuditRequest_1a1a4683a662863484e63cd0810343bbbc)`(FString && NewValue)` | Sets the value of SessionType_Optional and also sets SessionType_IsSet to true using move semantics.
`public inline void `[`ClearSessionType`](#structFRHAPI__CreateAuditRequest_1a0c8c5695ea72a10ca77f647277460c2e)`()` | Clears the value of SessionType_Optional and sets SessionType_IsSet to false.
`public inline bool `[`IsSessionTypeSet`](#structFRHAPI__CreateAuditRequest_1ad9ed8cb0b078ca98676aea38c9edbd76)`() const` | Checks whether SessionType_Optional has been set.
`public inline FString & `[`GetRegionId`](#structFRHAPI__CreateAuditRequest_1ab4be35bc5627243f7a5c3f9bf32ef491)`()` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__CreateAuditRequest_1a8554b91ed3144a6fc88565ef953161ba)`() const` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__CreateAuditRequest_1a19abbcf6b39eb040229f1e69481c654d)`(const FString & DefaultValue) const` | Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRegionId`](#structFRHAPI__CreateAuditRequest_1a2a2ecd3fb1ef53a481e2188ba4ffd09a)`(FString & OutValue) const` | Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__CreateAuditRequest_1add5ce14de1f2ee0c2253e286e388b3e0)`()` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__CreateAuditRequest_1ad6b9e4177dc1911b5ec1cf85634b4b90)`() const` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRegionId`](#structFRHAPI__CreateAuditRequest_1a44d49b646a716c01fe2f474aa55f6ab1)`(const FString & NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.
`public inline void `[`SetRegionId`](#structFRHAPI__CreateAuditRequest_1a3d078cc23e3f1d377345b6b3860c4e62)`(FString && NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.
`public inline void `[`ClearRegionId`](#structFRHAPI__CreateAuditRequest_1a14abaecf3f777b3b40a01a6c5451dcda)`()` | Clears the value of RegionId_Optional and sets RegionId_IsSet to false.
`public inline bool `[`IsRegionIdSet`](#structFRHAPI__CreateAuditRequest_1a4395cb10ea927f2dc4840985acd63bc0)`() const` | Checks whether RegionId_Optional has been set.
`public inline bool & `[`GetJoinable`](#structFRHAPI__CreateAuditRequest_1a331b85868751c83a2a62134e88c34a53)`()` | Gets the value of Joinable_Optional, regardless of it having been set.
`public inline const bool & `[`GetJoinable`](#structFRHAPI__CreateAuditRequest_1a9b5c8eda9acfa624948cda64421c5d18)`() const` | Gets the value of Joinable_Optional, regardless of it having been set.
`public inline const bool & `[`GetJoinable`](#structFRHAPI__CreateAuditRequest_1a2ddede1dc8860347a189980d6ded76d7)`(const bool & DefaultValue) const` | Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinable`](#structFRHAPI__CreateAuditRequest_1ae9e66299e97761bbe1504eb82639ba15)`(bool & OutValue) const` | Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetJoinableOrNull`](#structFRHAPI__CreateAuditRequest_1a11cfe1abd415fa62912fa04aef7a0b71)`()` | Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetJoinableOrNull`](#structFRHAPI__CreateAuditRequest_1acdae58c2588a7ae511ae633620978e19)`() const` | Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinable`](#structFRHAPI__CreateAuditRequest_1ab30dfdd2bd39491a2f07298b6c77ac2d)`(const bool & NewValue)` | Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.
`public inline void `[`SetJoinable`](#structFRHAPI__CreateAuditRequest_1a2f4071a1b1ae7e91e3e532313412ebf4)`(bool && NewValue)` | Sets the value of Joinable_Optional and also sets Joinable_IsSet to true using move semantics.
`public inline void `[`ClearJoinable`](#structFRHAPI__CreateAuditRequest_1a0ac0cef2dbb03a224cad1ff1fc91f775)`()` | Clears the value of Joinable_Optional and sets Joinable_IsSet to false.
`public inline bool `[`IsJoinableSet`](#structFRHAPI__CreateAuditRequest_1a1a3d912bd22d77ef6c08c87fb945dc63)`() const` | Checks whether Joinable_Optional has been set.
`public inline bool `[`IsJoinableDefaultValue`](#structFRHAPI__CreateAuditRequest_1a403d50e31135af836820d6c44669de4f)`() const` | Returns true if Joinable_Optional is set and matches the default value.
`public inline void `[`SetJoinableToDefault`](#structFRHAPI__CreateAuditRequest_1a762a5ecf56a2621c55720c43737baa22)`()` | Sets the value of Joinable_Optional to its default and also sets Joinable_IsSet to true.
`public inline `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__CreateAuditRequest_1a41e5e31e6e49feb191e91b11613527f3)`()` | Gets the value of Joinability_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__CreateAuditRequest_1ad81180e015dcb5ccea395972b776b876)`() const` | Gets the value of Joinability_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__CreateAuditRequest_1a79bef05200b0288caeb1167115922cec)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & DefaultValue) const` | Gets the value of Joinability_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinability`](#structFRHAPI__CreateAuditRequest_1a5deb54500b9522231fbdb9b21d1c3799)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & OutValue) const` | Fills OutValue with the value of Joinability_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__CreateAuditRequest_1a45e40c33ffd52e9b08a95c67bb03dae0)`()` | Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__CreateAuditRequest_1ac689222fc8508e0951a61da5c09a0762)`() const` | Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinability`](#structFRHAPI__CreateAuditRequest_1a3be627b5c3a1c42631bd7628429381f4)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & NewValue)` | Sets the value of Joinability_Optional and also sets Joinability_IsSet to true.
`public inline void `[`SetJoinability`](#structFRHAPI__CreateAuditRequest_1ad1c647e3bb60e032f109426bd9e7206e)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` && NewValue)` | Sets the value of Joinability_Optional and also sets Joinability_IsSet to true using move semantics.
`public inline void `[`ClearJoinability`](#structFRHAPI__CreateAuditRequest_1a64051a9ab30754347e668674633c49bb)`()` | Clears the value of Joinability_Optional and sets Joinability_IsSet to false.
`public inline bool `[`IsJoinabilitySet`](#structFRHAPI__CreateAuditRequest_1a1403a4555b113b95df38051be9e755eb)`() const` | Checks whether Joinability_Optional has been set.
`public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1af890c60755c6e4f04148d3a53fe8f130)`()` | Gets the value of UpdatedTeams_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1a2c9cda8be0778735e240b547ab694dd4)`() const` | Gets the value of UpdatedTeams_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1a70c8142b6b45ecc4e9a3470346e472b7)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & DefaultValue) const` | Gets the value of UpdatedTeams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1afb1d34fa2fc6857aa5b3880894776bee)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & OutValue) const` | Fills OutValue with the value of UpdatedTeams_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__CreateAuditRequest_1a268adc2204d34899630cb2e257a4acf3)`()` | Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__CreateAuditRequest_1ab7826537efa06ade1f9ea8579de68ecd)`() const` | Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1a80cd058b68ae33779130980ddb24d28b)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & NewValue)` | Sets the value of UpdatedTeams_Optional and also sets UpdatedTeams_IsSet to true.
`public inline void `[`SetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1aa18feb60ee4acb40abee74beeb30d6af)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > && NewValue)` | Sets the value of UpdatedTeams_Optional and also sets UpdatedTeams_IsSet to true using move semantics.
`public inline void `[`ClearUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1aa746bed0b171151c8a5aec6a7ae86416)`()` | Clears the value of UpdatedTeams_Optional and sets UpdatedTeams_IsSet to false.
`public inline bool `[`IsUpdatedTeamsSet`](#structFRHAPI__CreateAuditRequest_1ae437d1f153449047329138dcd0ddaa52)`() const` | Checks whether UpdatedTeams_Optional has been set.
`public inline ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__CreateAuditRequest_1ac1e02a96b7cc2fa523a8e2352575c957)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__CreateAuditRequest_1a79f788471a75aa12bb1c0a5663d67ef6)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__CreateAuditRequest_1ae2d4b262eadaea0e1e7aee3ac81d4d0d)`(const ERHAPI_InviteSource & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSource`](#structFRHAPI__CreateAuditRequest_1a807edcef33ddade2e8b0e7e296541ba0)`(ERHAPI_InviteSource & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__CreateAuditRequest_1a50909d9db4214864e7ad3b39328d949c)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__CreateAuditRequest_1a9356de55ceba8c2863823d0f3edec376)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSource`](#structFRHAPI__CreateAuditRequest_1a380746044e19865bab2035981cce00c8)`(const ERHAPI_InviteSource & NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline void `[`SetSource`](#structFRHAPI__CreateAuditRequest_1a50a8ecd1cb23c40b5bdb1089d7f9fe1d)`(ERHAPI_InviteSource && NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.
`public inline void `[`ClearSource`](#structFRHAPI__CreateAuditRequest_1a25d9609c33c16ac066005e2f25199298)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline bool `[`IsSourceSet`](#structFRHAPI__CreateAuditRequest_1af7ea182a15cfc71411ec56f51a4956db)`() const` | Checks whether Source_Optional has been set.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a7d60d17162128c29be50caad03379298)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a4f491bd24b46cb6c0a3fa0488ebfee28)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a31004ffb545a53e14fd4270c51cec42b)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a859fa7f16137cf84a56ca18ff42e186b)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__CreateAuditRequest_1a0bc7ed3c71829eb880691e9875a95923)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__CreateAuditRequest_1ae1040947a12c75dc89e988676a2522d3)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a93a3ab7944c6791c3b05db557f1534c3)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a4da124acb660fef8b78ad76540a33b20)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a0956a708f854855adca4bfa696c69bb1)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__CreateAuditRequest_1a17c1822bfee15f9b222c2d23149fe82f)`() const` | Checks whether PlayerUuid_Optional has been set.
`public inline int32 & `[`GetTeamId`](#structFRHAPI__CreateAuditRequest_1a6a78770e4ab3ff86e3ecc6e34c9096be)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__CreateAuditRequest_1a53a694a2ccf579abe79b8d97378f8029)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__CreateAuditRequest_1ad59c3bbbe89885f9524093ee8cc0ded0)`(const int32 & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTeamId`](#structFRHAPI__CreateAuditRequest_1aae1fea2ab5fce15c8b7c435b3ed11be1)`(int32 & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTeamIdOrNull`](#structFRHAPI__CreateAuditRequest_1ae2482a28042ced2576d23878ddf1e46e)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__CreateAuditRequest_1aa6e170140feaf57172bab0e37f162f4a)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTeamId`](#structFRHAPI__CreateAuditRequest_1a07e4a473133244dc2c89cb7bb86feab8)`(const int32 & NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline void `[`SetTeamId`](#structFRHAPI__CreateAuditRequest_1ab71c7aa4029e29943ec3ed87a3616875)`(int32 && NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.
`public inline void `[`ClearTeamId`](#structFRHAPI__CreateAuditRequest_1aa9a5d8c6979465a0cedcc8d92c1e7339)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline bool `[`IsTeamIdSet`](#structFRHAPI__CreateAuditRequest_1a28b0b2bbe9cd08befd7272a9f17fdcd7)`() const` | Checks whether TeamId_Optional has been set.
`public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__CreateAuditRequest_1a92d110f8e76830b8e09d2130d944375c)`() const` | Returns true if TeamId_Optional is set and matches the default value.
`public inline void `[`SetTeamIdToDefault`](#structFRHAPI__CreateAuditRequest_1a14a28726fafe414c46eaa6ef272c1c59)`()` | Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.
`public inline FString & `[`GetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1a1fe1881100216208349973f92d1dcddf)`()` | Gets the value of InvitedSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1a47a6095e57f8421bafe8205568a06f92)`() const` | Gets the value of InvitedSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1acf6f05da2ef2742b2f9cc54f7ed18be3)`(const FString & DefaultValue) const` | Gets the value of InvitedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1ac1bc7812e39f92561a6cb739e7631b0e)`(FString & OutValue) const` | Fills OutValue with the value of InvitedSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a06fbda03abb3a25db1ad67c0fa0d4207)`()` | Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a4916a384bbae2a15ffff9e0192fd36d4)`() const` | Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1a51031d5edf6acf8520e34ea569b9480d)`(const FString & NewValue)` | Sets the value of InvitedSessionId_Optional and also sets InvitedSessionId_IsSet to true.
`public inline void `[`SetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1af85fc27baa5023a53c5075af35150237)`(FString && NewValue)` | Sets the value of InvitedSessionId_Optional and also sets InvitedSessionId_IsSet to true using move semantics.
`public inline void `[`ClearInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1a003fbcbcc014ab71c196030852972989)`()` | Clears the value of InvitedSessionId_Optional and sets InvitedSessionId_IsSet to false.
`public inline bool `[`IsInvitedSessionIdSet`](#structFRHAPI__CreateAuditRequest_1ac2d3623058407cead246f0dbeb3b5464)`() const` | Checks whether InvitedSessionId_Optional has been set.
`public inline FString & `[`GetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1ad43e78dd7b0f28aeacafb57ad9122060)`()` | Gets the value of RemovedSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1ab3973526b657b2c2c6b897edc77f6432)`() const` | Gets the value of RemovedSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1a8069311a130bc8a2a96ef93da72ef919)`(const FString & DefaultValue) const` | Gets the value of RemovedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1ad07e2414b0341608d76cc096200463ac)`(FString & OutValue) const` | Fills OutValue with the value of RemovedSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a8fb9feb5e65b16accfe11bc0869fe1db)`()` | Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1aa0a6a2fa61ba63d3c54fe8594568098e)`() const` | Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1a96382df954d508bfa01497fe9d067620)`(const FString & NewValue)` | Sets the value of RemovedSessionId_Optional and also sets RemovedSessionId_IsSet to true.
`public inline void `[`SetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1a1b98d71fd9aa2967820a28611b4ac58a)`(FString && NewValue)` | Sets the value of RemovedSessionId_Optional and also sets RemovedSessionId_IsSet to true using move semantics.
`public inline void `[`ClearRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1a0ba952c57b0beb6e05103932a1736217)`()` | Clears the value of RemovedSessionId_Optional and sets RemovedSessionId_IsSet to false.
`public inline bool `[`IsRemovedSessionIdSet`](#structFRHAPI__CreateAuditRequest_1ab70928faf1009ec1b8f9e9fc3b2d5339)`() const` | Checks whether RemovedSessionId_Optional has been set.
`public inline FString & `[`GetVersion`](#structFRHAPI__CreateAuditRequest_1a7b824db8daf4feea91ddd7157acf3930)`()` | Gets the value of Version_Optional, regardless of it having been set.
`public inline const FString & `[`GetVersion`](#structFRHAPI__CreateAuditRequest_1ad7d49d126c662cca431fa0106b1a6993)`() const` | Gets the value of Version_Optional, regardless of it having been set.
`public inline const FString & `[`GetVersion`](#structFRHAPI__CreateAuditRequest_1a8306c8068faea666becc757aa6ab11ec)`(const FString & DefaultValue) const` | Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVersion`](#structFRHAPI__CreateAuditRequest_1a45ac7be38700622875542395b7e8beaa)`(FString & OutValue) const` | Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetVersionOrNull`](#structFRHAPI__CreateAuditRequest_1a0a860ad8c0c6c1746de38926ad48e966)`()` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetVersionOrNull`](#structFRHAPI__CreateAuditRequest_1a86f4ce35ce9a6b9eac202d5aaef63c5a)`() const` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVersion`](#structFRHAPI__CreateAuditRequest_1a653891f577209216bd653d1bffab77ec)`(const FString & NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true.
`public inline void `[`SetVersion`](#structFRHAPI__CreateAuditRequest_1a54ab662da9155cb7adf43ca9b204b824)`(FString && NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics.
`public inline void `[`ClearVersion`](#structFRHAPI__CreateAuditRequest_1a22db967094d806cfbb1c530cb7c0ce2b)`()` | Clears the value of Version_Optional and sets Version_IsSet to false.
`public inline bool `[`IsVersionSet`](#structFRHAPI__CreateAuditRequest_1afbeff456947cc20ce5aa6a84c44d258d)`() const` | Checks whether Version_Optional has been set.
`public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateAuditRequest_1a8da7b0217c849271a236607bc6a3166b)`()` | Gets the value of ClientSettings_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateAuditRequest_1a6d059196a4308c6580dee718b285fed4)`() const` | Gets the value of ClientSettings_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateAuditRequest_1a1d4cea5854d4ab76cec81f51abe59bae)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & DefaultValue) const` | Gets the value of ClientSettings_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetClientSettings`](#structFRHAPI__CreateAuditRequest_1a2159929fa77e4bd44c374828c5d5c5f6)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & OutValue) const` | Fills OutValue with the value of ClientSettings_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__CreateAuditRequest_1ad85f73978e7106dbbc5e1830eaa36ce4)`()` | Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__CreateAuditRequest_1a4dac817be63c74d81184ef24275efc47)`() const` | Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetClientSettings`](#structFRHAPI__CreateAuditRequest_1aa7d4af8c0ff1d9604aca7b461194384e)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & NewValue)` | Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true.
`public inline void `[`SetClientSettings`](#structFRHAPI__CreateAuditRequest_1a3dc203e960ee17af80f53b54d2b42592)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` && NewValue)` | Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true using move semantics.
`public inline void `[`ClearClientSettings`](#structFRHAPI__CreateAuditRequest_1a3e934aa4d91799c86b881ee72ac33d90)`()` | Clears the value of ClientSettings_Optional and sets ClientSettings_IsSet to false.
`public inline bool `[`IsClientSettingsSet`](#structFRHAPI__CreateAuditRequest_1a07571cd250fc38ecb777089543bfb4cb)`() const` | Checks whether ClientSettings_Optional has been set.
`public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1aacd0805dca4d95aa304834497380a3be)`()` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1a8d93e049d47103a50a28d4ebaa3ed4e5)`() const` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1a37f3909d37179369ce81d867e921d168)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` | Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1ad0f274b4a55c1a6b0fdc3374895a64b8)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` | Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CreateAuditRequest_1a8030ffd3d3f0ebbdc00a7ccbf778f537)`()` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CreateAuditRequest_1a98625feff9235b24a435efc25c17148f)`() const` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1a8eba8dc17f3ea9089bc781a30bdc60c5)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & NewValue)` | Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.
`public inline void `[`SetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1ab572deefe79b1ccf0a6f7c980013dd8d)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` && NewValue)` | Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true using move semantics.
`public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1ab104c0b6b379b56cfad6bf75bc9a2c92)`()` | Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.
`public inline bool `[`IsCrossplayPreferencesSet`](#structFRHAPI__CreateAuditRequest_1a1c1aecbffd2947da1790553e062a97b9)`() const` | Checks whether CrossplayPreferences_Optional has been set.
`public inline ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1a3303c2682b0bab7bdb4f8de406faf407)`()` | Gets the value of PlayerStatus_Optional, regardless of it having been set.
`public inline const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1a67bce8917cbadac24c6e433d85fe8d94)`() const` | Gets the value of PlayerStatus_Optional, regardless of it having been set.
`public inline const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1ad6ebfff9c6af0183e1d0bfa8652be03a)`(const ERHAPI_SessionPlayerStatus & DefaultValue) const` | Gets the value of PlayerStatus_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1a336bd58fc8d4b87020cf0b362ce134cc)`(ERHAPI_SessionPlayerStatus & OutValue) const` | Fills OutValue with the value of PlayerStatus_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__CreateAuditRequest_1a3e9287874032f5caf29e5bfe5346ab5f)`()` | Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__CreateAuditRequest_1ae47f3286d3588899b0be734285476b78)`() const` | Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1a9f6c77d1c9be5b23aa3fd759c26e3bd4)`(const ERHAPI_SessionPlayerStatus & NewValue)` | Sets the value of PlayerStatus_Optional and also sets PlayerStatus_IsSet to true.
`public inline void `[`SetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1a4969dae0b620ec8d9395c39b3f3caa71)`(ERHAPI_SessionPlayerStatus && NewValue)` | Sets the value of PlayerStatus_Optional and also sets PlayerStatus_IsSet to true using move semantics.
`public inline void `[`ClearPlayerStatus`](#structFRHAPI__CreateAuditRequest_1ae86a75654a5952dcc1813e446ad45184)`()` | Clears the value of PlayerStatus_Optional and sets PlayerStatus_IsSet to false.
`public inline bool `[`IsPlayerStatusSet`](#structFRHAPI__CreateAuditRequest_1a0512b424e952593da892715926f87bbc)`() const` | Checks whether PlayerStatus_Optional has been set.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateAuditRequest_1a6646cfc3b4a56ac7308d196ee37732d5)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateAuditRequest_1ae2adeb5435e4f8f25337c5b4d4155707)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateAuditRequest_1a6b6dcd5164d57d144e18a8bd8dc1d8da)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatform`](#structFRHAPI__CreateAuditRequest_1afee614de8a25e8721f63b903f32bf50c)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__CreateAuditRequest_1a2929ec16f85170db37b16cbdf1f72739)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__CreateAuditRequest_1a9098cc9edf6cbac7b767742917fc5cf0)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatform`](#structFRHAPI__CreateAuditRequest_1aa95dfcd7d642e0d9ab853d5fc013a6c3)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline void `[`SetPlatform`](#structFRHAPI__CreateAuditRequest_1a5153f1e1647e18d24c92df5a1538e0b7)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__CreateAuditRequest_1a9294795dd22e58391495a5820047116e)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline bool `[`IsPlatformSet`](#structFRHAPI__CreateAuditRequest_1aaeb9462daf766530dec01c2ff64ffc57)`() const` | Checks whether Platform_Optional has been set.
`public inline FString & `[`GetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1aa0fdc4434ff960682ba5685a3ce7905b)`()` | Gets the value of PlatformSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1a6de40b96d598f82008b6488da97ad502)`() const` | Gets the value of PlatformSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1a8cf873f5b3b285152eea866005ca0db6)`(const FString & DefaultValue) const` | Gets the value of PlatformSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1af73bf1bb1704f497d2eca0f00d6c474c)`(FString & OutValue) const` | Fills OutValue with the value of PlatformSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a60ecb674f8b6c8424460d3e010de7e9e)`()` | Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a33dd77a1484230aa772f13eebf93ae5e)`() const` | Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1ab047c6d154acdddeaa2b7736c7928be8)`(const FString & NewValue)` | Sets the value of PlatformSessionId_Optional and also sets PlatformSessionId_IsSet to true.
`public inline void `[`SetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1a7a8593542bc780ed61e2107a41cfcaaf)`(FString && NewValue)` | Sets the value of PlatformSessionId_Optional and also sets PlatformSessionId_IsSet to true using move semantics.
`public inline void `[`ClearPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1a6dd45a5ba092f17721dd818e1e41828c)`()` | Clears the value of PlatformSessionId_Optional and sets PlatformSessionId_IsSet to false.
`public inline bool `[`IsPlatformSessionIdSet`](#structFRHAPI__CreateAuditRequest_1aaa8c508d16db4057edbff84d750fd216)`() const` | Checks whether PlatformSessionId_Optional has been set.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__CreateAuditRequest_1a9319a275ef4d548bc65e9bee2f90d5b2)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__CreateAuditRequest_1ae0595e359b56003e60050cca45b6379c)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__CreateAuditRequest_1a2dadee72337572e13cf6ef96ed99e526)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceId`](#structFRHAPI__CreateAuditRequest_1a7cd6ef071095030ec44d5d7e8cf9e358)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__CreateAuditRequest_1a9d14d8ee039c04d4bc5bf75541497ebb)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__CreateAuditRequest_1ac71877575fa7aa90cff7fc5c4dbf32c0)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceId`](#structFRHAPI__CreateAuditRequest_1a3386085307d949fd5d5101080a1c6127)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline void `[`SetInstanceId`](#structFRHAPI__CreateAuditRequest_1aa460b0657a4da40aa622df126aa4a72f)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__CreateAuditRequest_1a803e29cff308198839171d53385e9c6f)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline bool `[`IsInstanceIdSet`](#structFRHAPI__CreateAuditRequest_1a16b55bca2c3bdae614273687abaad8ca)`() const` | Checks whether InstanceId_Optional has been set.
`public inline ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__CreateAuditRequest_1a499ba7f492845a80e2c9be52e7ca0442)`()` | Gets the value of HostType_Optional, regardless of it having been set.
`public inline const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__CreateAuditRequest_1a8cff585cfd1b0c94974ba94408903571)`() const` | Gets the value of HostType_Optional, regardless of it having been set.
`public inline const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__CreateAuditRequest_1aafebc7013f650c8432737a6f0ed85b34)`(const ERHAPI_HostType & DefaultValue) const` | Gets the value of HostType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostType`](#structFRHAPI__CreateAuditRequest_1aeefdb1869f7f1a64e9c591f10c043d8d)`(ERHAPI_HostType & OutValue) const` | Fills OutValue with the value of HostType_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__CreateAuditRequest_1a3d1a1aa472e267e3f053d238da019ca1)`()` | Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__CreateAuditRequest_1aef95c43f3b9d13d59e58327a8746d67b)`() const` | Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostType`](#structFRHAPI__CreateAuditRequest_1a3ac0e26336e22edfb2401625af2ec5eb)`(const ERHAPI_HostType & NewValue)` | Sets the value of HostType_Optional and also sets HostType_IsSet to true.
`public inline void `[`SetHostType`](#structFRHAPI__CreateAuditRequest_1ab5abf7c2d767bdde9b464ac1820fe460)`(ERHAPI_HostType && NewValue)` | Sets the value of HostType_Optional and also sets HostType_IsSet to true using move semantics.
`public inline void `[`ClearHostType`](#structFRHAPI__CreateAuditRequest_1ac6e3e2d5e89bb9b51f01198c08689a74)`()` | Clears the value of HostType_Optional and sets HostType_IsSet to false.
`public inline bool `[`IsHostTypeSet`](#structFRHAPI__CreateAuditRequest_1a400e6592849c4382dc720852dc75f0c7)`() const` | Checks whether HostType_Optional has been set.
`public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a534cb96ed69e4026462fe8414b8c1df1)`()` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1ac82b413df7ecadccc02bd13d71e6d248)`() const` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a728a62a7acc4420cfa904775b3c4932c)`(const FGuid & DefaultValue) const` | Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1acf14c3e6b339b6b395fb0b9978deb2ea)`(FGuid & OutValue) const` | Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__CreateAuditRequest_1aa50688d1603c552bd941d677815c4ac2)`()` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__CreateAuditRequest_1a6d23c232219f22bd147a8886f504652d)`() const` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a41f0844b0e396e08efb6d1f3c0337496)`(const FGuid & NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.
`public inline void `[`SetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1af31876571e305a13d52780fc62a4fe5e)`(FGuid && NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a348e2be106677dc4e989c1255f11894c)`()` | Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.
`public inline bool `[`IsHostPlayerUuidSet`](#structFRHAPI__CreateAuditRequest_1a66f6f85d641d41885bd751367fa1b332)`() const` | Checks whether HostPlayerUuid_Optional has been set.
`public inline FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a6b6eede033c6fc78d07d7ebafe465c1c)`()` | Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a17de3cbcd8e46d5c0b621e9e1f93760c)`() const` | Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1ae77b23720ed9925fe4c295b421a0562b)`(const FGuid & DefaultValue) const` | Gets the value of InstanceRequestTemplate_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1ae16409d611b20fdd15b53ec98a22910c)`(FGuid & OutValue) const` | Fills OutValue with the value of InstanceRequestTemplate_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__CreateAuditRequest_1ae3c2d7390370bd294d51d92ef423df9f)`()` | Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__CreateAuditRequest_1ab61bf8fc7221025a0249871d9c9d6125)`() const` | Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a13146ca85ee068c7dc7cc5669ac3c615)`(const FGuid & NewValue)` | Sets the value of InstanceRequestTemplate_Optional and also sets InstanceRequestTemplate_IsSet to true.
`public inline void `[`SetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a64cac6a22f58ac93f6ace27e83bf21b4)`(FGuid && NewValue)` | Sets the value of InstanceRequestTemplate_Optional and also sets InstanceRequestTemplate_IsSet to true using move semantics.
`public inline void `[`ClearInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a2381105fae3b7d26c8ec2a77bf18ecd5)`()` | Clears the value of InstanceRequestTemplate_Optional and sets InstanceRequestTemplate_IsSet to false.
`public inline bool `[`IsInstanceRequestTemplateSet`](#structFRHAPI__CreateAuditRequest_1a6aba6ad641a9a92969214744bbe69d10)`() const` | Checks whether InstanceRequestTemplate_Optional has been set.
`public inline FString & `[`GetMap`](#structFRHAPI__CreateAuditRequest_1ac48c252a6205adfe772fbe36f6a1bf7e)`()` | Gets the value of Map_Optional, regardless of it having been set.
`public inline const FString & `[`GetMap`](#structFRHAPI__CreateAuditRequest_1aeb15da264f3d1b45bc7f1a55684cdac6)`() const` | Gets the value of Map_Optional, regardless of it having been set.
`public inline const FString & `[`GetMap`](#structFRHAPI__CreateAuditRequest_1a56c4dfa07dbe1b027b5e30ad9c2bbf34)`(const FString & DefaultValue) const` | Gets the value of Map_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMap`](#structFRHAPI__CreateAuditRequest_1a97d80b625f52b84dca15dc536d336167)`(FString & OutValue) const` | Fills OutValue with the value of Map_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMapOrNull`](#structFRHAPI__CreateAuditRequest_1a7216dd6058a00bb67e3fdcd90a04575c)`()` | Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMapOrNull`](#structFRHAPI__CreateAuditRequest_1a10f1d4656bf55d1a79b30e46829f6ae4)`() const` | Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMap`](#structFRHAPI__CreateAuditRequest_1ad56fa8cc823775c8011265e7fcf0c5c7)`(const FString & NewValue)` | Sets the value of Map_Optional and also sets Map_IsSet to true.
`public inline void `[`SetMap`](#structFRHAPI__CreateAuditRequest_1a1c30b501b0444fa188f466ddcb7d66e1)`(FString && NewValue)` | Sets the value of Map_Optional and also sets Map_IsSet to true using move semantics.
`public inline void `[`ClearMap`](#structFRHAPI__CreateAuditRequest_1a98e2084cc570644d016cc2caf3ce08ff)`()` | Clears the value of Map_Optional and sets Map_IsSet to false.
`public inline bool `[`IsMapSet`](#structFRHAPI__CreateAuditRequest_1a8c1f4d5dfc4374a8212b700d3fb7387b)`() const` | Checks whether Map_Optional has been set.
`public inline FString & `[`GetMode`](#structFRHAPI__CreateAuditRequest_1a49f4a1929b5cccc216f0fa521fdaf73a)`()` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline const FString & `[`GetMode`](#structFRHAPI__CreateAuditRequest_1afb6877f6a90515abd71c0b5b2a137353)`() const` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline const FString & `[`GetMode`](#structFRHAPI__CreateAuditRequest_1a8dff1f5cd5296c3147a9c77d69474a67)`(const FString & DefaultValue) const` | Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMode`](#structFRHAPI__CreateAuditRequest_1ac1bbf0a254a38fa5d1e5733a1d1ebd33)`(FString & OutValue) const` | Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetModeOrNull`](#structFRHAPI__CreateAuditRequest_1aa0db28e6b2476061e258ddadeed422a0)`()` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetModeOrNull`](#structFRHAPI__CreateAuditRequest_1a92e6a7eeca4ce27f01897b1651998393)`() const` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMode`](#structFRHAPI__CreateAuditRequest_1aaa7b508284b5b497c99c729aadb8043f)`(const FString & NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true.
`public inline void `[`SetMode`](#structFRHAPI__CreateAuditRequest_1a24750266f7d9d94ae0edcc8ae27e8017)`(FString && NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true using move semantics.
`public inline void `[`ClearMode`](#structFRHAPI__CreateAuditRequest_1a708273853f8264d35bb53364faa1baeb)`()` | Clears the value of Mode_Optional and sets Mode_IsSet to false.
`public inline bool `[`IsModeSet`](#structFRHAPI__CreateAuditRequest_1a4a4df3be248dfc1bab24d5ae7a156c28)`() const` | Checks whether Mode_Optional has been set.
`public inline FString & `[`GetAllocationId`](#structFRHAPI__CreateAuditRequest_1af144ee422d5823b8f46d2c3b08d26914)`()` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetAllocationId`](#structFRHAPI__CreateAuditRequest_1a00cebcad83fe5f9aae9cc3a64c512cb8)`() const` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetAllocationId`](#structFRHAPI__CreateAuditRequest_1a0316a4153ac94b3003de2e8775222183)`(const FString & DefaultValue) const` | Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAllocationId`](#structFRHAPI__CreateAuditRequest_1a261bc74d9eb7e33dd33956f805be4aba)`(FString & OutValue) const` | Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetAllocationIdOrNull`](#structFRHAPI__CreateAuditRequest_1a48d2a1b2632f62c2890c45014a854c16)`()` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__CreateAuditRequest_1a82e826947ee275fbed1af6360804f685)`() const` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAllocationId`](#structFRHAPI__CreateAuditRequest_1af64f323eda0a1125c9200145377474ae)`(const FString & NewValue)` | Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.
`public inline void `[`SetAllocationId`](#structFRHAPI__CreateAuditRequest_1a7d36f5e4eb62a7d40b0a83f763a3b881)`(FString && NewValue)` | Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true using move semantics.
`public inline void `[`ClearAllocationId`](#structFRHAPI__CreateAuditRequest_1a32fabf3a37474ad325e7c0e1150c5b19)`()` | Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.
`public inline bool `[`IsAllocationIdSet`](#structFRHAPI__CreateAuditRequest_1a68d51dd67fbbb4cc6b4675a261b2295f)`() const` | Checks whether AllocationId_Optional has been set.
`public inline ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__CreateAuditRequest_1a02717b573f82063bfe1600f1a08a6023)`()` | Gets the value of JoinStatus_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__CreateAuditRequest_1a495bd36dd601f9ca8a6e477d3cd2dc22)`() const` | Gets the value of JoinStatus_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__CreateAuditRequest_1a993f99d842f9a0f4468e68043c30e496)`(const ERHAPI_InstanceJoinableStatus & DefaultValue) const` | Gets the value of JoinStatus_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinStatus`](#structFRHAPI__CreateAuditRequest_1afb3c7c2bcc6002eb402a207cea8d4f48)`(ERHAPI_InstanceJoinableStatus & OutValue) const` | Fills OutValue with the value of JoinStatus_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__CreateAuditRequest_1a7b5c22e49a53cd23888a05f51931c171)`()` | Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__CreateAuditRequest_1a8458f2355502e57f504c3cac955b1329)`() const` | Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinStatus`](#structFRHAPI__CreateAuditRequest_1a2152ba44323c1f87a820355d64c2cb1a)`(const ERHAPI_InstanceJoinableStatus & NewValue)` | Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true.
`public inline void `[`SetJoinStatus`](#structFRHAPI__CreateAuditRequest_1af8beab19156c078a25ab480f1a5463c0)`(ERHAPI_InstanceJoinableStatus && NewValue)` | Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true using move semantics.
`public inline void `[`ClearJoinStatus`](#structFRHAPI__CreateAuditRequest_1af8a6f2207119beda87c49a8aa237a1bd)`()` | Clears the value of JoinStatus_Optional and sets JoinStatus_IsSet to false.
`public inline bool `[`IsJoinStatusSet`](#structFRHAPI__CreateAuditRequest_1a85220a89c6fd3f026c1ebdf835d7f49f)`() const` | Checks whether JoinStatus_Optional has been set.
`public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__CreateAuditRequest_1ad8d2c9a5a80d9ca93387635486e6dd85)`()` | Gets the value of JoinParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__CreateAuditRequest_1ac7cc14fcc92014336af8b117f6181884)`() const` | Gets the value of JoinParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__CreateAuditRequest_1a780fcf772a221859ae8675beb3fb4015)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & DefaultValue) const` | Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinParams`](#structFRHAPI__CreateAuditRequest_1a12457dd3a291960d1196fdc1d59ca8d3)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & OutValue) const` | Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__CreateAuditRequest_1a02a8dbb2f17d534e668a200a65780eee)`()` | Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__CreateAuditRequest_1ac47bd50514e861f6ec1fd1badb80aba2)`() const` | Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinParams`](#structFRHAPI__CreateAuditRequest_1ab35c7bcdd65e446d18390f68a2a9ab4c)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & NewValue)` | Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.
`public inline void `[`SetJoinParams`](#structFRHAPI__CreateAuditRequest_1a5d236d7b7d31ebb4c106d81d86daf173)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` && NewValue)` | Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true using move semantics.
`public inline void `[`ClearJoinParams`](#structFRHAPI__CreateAuditRequest_1ae15128c077fc62ffeec86842240dbd52)`()` | Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.
`public inline bool `[`IsJoinParamsSet`](#structFRHAPI__CreateAuditRequest_1af77cace8935b4f5066c2b42db463d516)`() const` | Checks whether JoinParams_Optional has been set.
`public inline ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1aeeae4ac3490c4f867c815abc0a67b827)`()` | Gets the value of InstanceHealth_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1a98472a520db0025bd1d44dfcdc1b2c4a)`() const` | Gets the value of InstanceHealth_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1a3b3cb5ea70f2eb35b78c789970e4da7a)`(const ERHAPI_InstanceHealthStatus & DefaultValue) const` | Gets the value of InstanceHealth_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1acb1a1a9952d63d9c73763d62cf0b365a)`(ERHAPI_InstanceHealthStatus & OutValue) const` | Fills OutValue with the value of InstanceHealth_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__CreateAuditRequest_1ad59b9628eb9d93e9577c8e3a460c8aba)`()` | Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__CreateAuditRequest_1afba0d696c24ce15ee5f012e7b0a9d14e)`() const` | Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1ad69511b7a460fe40dc140c6ec511c967)`(const ERHAPI_InstanceHealthStatus & NewValue)` | Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true.
`public inline void `[`SetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1a2bbc0eb1595cb867f0db25289df36a9c)`(ERHAPI_InstanceHealthStatus && NewValue)` | Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true using move semantics.
`public inline void `[`ClearInstanceHealth`](#structFRHAPI__CreateAuditRequest_1ab839fe4135e907ee3a6949f4a2ed4473)`()` | Clears the value of InstanceHealth_Optional and sets InstanceHealth_IsSet to false.
`public inline bool `[`IsInstanceHealthSet`](#structFRHAPI__CreateAuditRequest_1a77b70c35b6745f675d4e6442f608f724)`() const` | Checks whether InstanceHealth_Optional has been set.
`public inline FString & `[`GetQueueId`](#structFRHAPI__CreateAuditRequest_1af4cb36a9962bf3f4c6fdd4df5aaeb3c1)`()` | Gets the value of QueueId_Optional, regardless of it having been set.
`public inline const FString & `[`GetQueueId`](#structFRHAPI__CreateAuditRequest_1a0d27601e37ca7e4344bdbd96159e313e)`() const` | Gets the value of QueueId_Optional, regardless of it having been set.
`public inline const FString & `[`GetQueueId`](#structFRHAPI__CreateAuditRequest_1a945bd797960cd2731b288ff469b98e87)`(const FString & DefaultValue) const` | Gets the value of QueueId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetQueueId`](#structFRHAPI__CreateAuditRequest_1ab252dda258e552a005a8ad65e5ef28f1)`(FString & OutValue) const` | Fills OutValue with the value of QueueId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetQueueIdOrNull`](#structFRHAPI__CreateAuditRequest_1a78993b9321c9ebfe8324610ba8bd6e35)`()` | Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetQueueIdOrNull`](#structFRHAPI__CreateAuditRequest_1ad38395e301644c9a4fb56bfa92c77851)`() const` | Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetQueueId`](#structFRHAPI__CreateAuditRequest_1afc2aed681ceb2cbcfcf58bb1557d2ee2)`(const FString & NewValue)` | Sets the value of QueueId_Optional and also sets QueueId_IsSet to true.
`public inline void `[`SetQueueId`](#structFRHAPI__CreateAuditRequest_1afe6b41722861cab68fed72fbfaec5539)`(FString && NewValue)` | Sets the value of QueueId_Optional and also sets QueueId_IsSet to true using move semantics.
`public inline void `[`ClearQueueId`](#structFRHAPI__CreateAuditRequest_1aea875a3118fee4f648079eebaac9b656)`()` | Clears the value of QueueId_Optional and sets QueueId_IsSet to false.
`public inline bool `[`IsQueueIdSet`](#structFRHAPI__CreateAuditRequest_1a3143cd287727bf6d30baa05031715ad2)`() const` | Checks whether QueueId_Optional has been set.
`public inline FString & `[`GetTicketId`](#structFRHAPI__CreateAuditRequest_1a097d0c0ef7adc62c5f036e1d6bbd9f48)`()` | Gets the value of TicketId_Optional, regardless of it having been set.
`public inline const FString & `[`GetTicketId`](#structFRHAPI__CreateAuditRequest_1a8d399efcaa28feca1aed8e64ee8204d3)`() const` | Gets the value of TicketId_Optional, regardless of it having been set.
`public inline const FString & `[`GetTicketId`](#structFRHAPI__CreateAuditRequest_1a83a072f60c17ddeeecca0d4070fd7504)`(const FString & DefaultValue) const` | Gets the value of TicketId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTicketId`](#structFRHAPI__CreateAuditRequest_1ac888136c65f76f71e47436cb14fa87e3)`(FString & OutValue) const` | Fills OutValue with the value of TicketId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTicketIdOrNull`](#structFRHAPI__CreateAuditRequest_1a452854995442b4a4b64e6e479bcaf0d3)`()` | Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTicketIdOrNull`](#structFRHAPI__CreateAuditRequest_1a16b5778b4c8b0b8084b30d035dc0ea40)`() const` | Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTicketId`](#structFRHAPI__CreateAuditRequest_1ac993cace76c2b0d7697de0b1f7267256)`(const FString & NewValue)` | Sets the value of TicketId_Optional and also sets TicketId_IsSet to true.
`public inline void `[`SetTicketId`](#structFRHAPI__CreateAuditRequest_1ad13d1cd222f6cb913dbc86fccb233add)`(FString && NewValue)` | Sets the value of TicketId_Optional and also sets TicketId_IsSet to true using move semantics.
`public inline void `[`ClearTicketId`](#structFRHAPI__CreateAuditRequest_1aabb4b486f8327532dd975262f8fcc5b3)`()` | Clears the value of TicketId_Optional and sets TicketId_IsSet to false.
`public inline bool `[`IsTicketIdSet`](#structFRHAPI__CreateAuditRequest_1a5bac07b97fe83aec371a481ee3cb48e0)`() const` | Checks whether TicketId_Optional has been set.
`public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1aad41f6d5fc61915702563a14f1646b78)`()` | Gets the value of AdditionalParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1a0a4c8dbdd8b4ef4d45110d89abf156ec)`() const` | Gets the value of AdditionalParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1ac30f7a3bb5300a65a659d82b34021d80)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & DefaultValue) const` | Gets the value of AdditionalParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1a12b6244e61512df9258105d75766ce5a)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & OutValue) const` | Fills OutValue with the value of AdditionalParams_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalParamsOrNull`](#structFRHAPI__CreateAuditRequest_1a7933162f5bd42ae8669ff95f0c366f44)`()` | Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalParamsOrNull`](#structFRHAPI__CreateAuditRequest_1accf51419dbc09a19615b3230d3d7c2e1)`() const` | Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1a51003e63aa473ba4a57946b67592ac82)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & NewValue)` | Sets the value of AdditionalParams_Optional and also sets AdditionalParams_IsSet to true.
`public inline void `[`SetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1a90e8b490126217352ce5b1eea1983c81)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` && NewValue)` | Sets the value of AdditionalParams_Optional and also sets AdditionalParams_IsSet to true using move semantics.
`public inline void `[`ClearAdditionalParams`](#structFRHAPI__CreateAuditRequest_1a55b2ec8eefed3283bed95f9afbd2b247)`()` | Clears the value of AdditionalParams_Optional and sets AdditionalParams_IsSet to false.
`public inline bool `[`IsAdditionalParamsSet`](#structFRHAPI__CreateAuditRequest_1a5a5a3271372ce22e3a99f7c072817a6e)`() const` | Checks whether AdditionalParams_Optional has been set.
`public inline TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__CreateAuditRequest_1a25cea94929bd54104a3d93a43970e8a1)`()` | Gets the value of MapPreferences_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__CreateAuditRequest_1a4d10d9f0eaa9045d3ce5c0fef48e5c76)`() const` | Gets the value of MapPreferences_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__CreateAuditRequest_1a89df686ab7820938b16ffc33f6a8b184)`(const TArray< FString > & DefaultValue) const` | Gets the value of MapPreferences_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMapPreferences`](#structFRHAPI__CreateAuditRequest_1a37c4fefc9ecb554e6e008a2d94cf2f51)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of MapPreferences_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__CreateAuditRequest_1a7d6cee9c06b92d35a507ba9b09c4255b)`()` | Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__CreateAuditRequest_1ae3119c2715c7e0d11d854bb16483f320)`() const` | Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMapPreferences`](#structFRHAPI__CreateAuditRequest_1a104f4ed44d42139cf43e6f074573c284)`(const TArray< FString > & NewValue)` | Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true.
`public inline void `[`SetMapPreferences`](#structFRHAPI__CreateAuditRequest_1a190510e02edbce45cd046c29dc7023f0)`(TArray< FString > && NewValue)` | Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true using move semantics.
`public inline void `[`ClearMapPreferences`](#structFRHAPI__CreateAuditRequest_1a8f074dc9b8affdbefbf78306c64e52a5)`()` | Clears the value of MapPreferences_Optional and sets MapPreferences_IsSet to false.
`public inline bool `[`IsMapPreferencesSet`](#structFRHAPI__CreateAuditRequest_1a71cc9fb23a4a5b3d64ee922fae6824f6)`() const` | Checks whether MapPreferences_Optional has been set.
`public inline FString & `[`GetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1a2e4b37c279e3efa9fb26e2c7862920e3)`()` | Gets the value of QueuedSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1a9c5449a0f87838029feafe67d651ebb3)`() const` | Gets the value of QueuedSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1a873143f6ceaecd3e47f1c24bae7ee398)`(const FString & DefaultValue) const` | Gets the value of QueuedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1a32eb6900dd01f487af94f5733da67c11)`(FString & OutValue) const` | Fills OutValue with the value of QueuedSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a7c8e4ce8865bcee0da2d932f33ca1a84)`()` | Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a308aa33acb4e2c7063b7026e6b1ffdee)`() const` | Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1ab60c381f7fe68e785b06bd1fcc3bfa3f)`(const FString & NewValue)` | Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true.
`public inline void `[`SetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1afbc35250ab24fa16d94c61e629c12aff)`(FString && NewValue)` | Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true using move semantics.
`public inline void `[`ClearQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1af13bcc59cc707c792aa29f45d8f5c6a3)`()` | Clears the value of QueuedSessionId_Optional and sets QueuedSessionId_IsSet to false.
`public inline bool `[`IsQueuedSessionIdSet`](#structFRHAPI__CreateAuditRequest_1a23170c3745badb95c89a65beb5e0f51b)`() const` | Checks whether QueuedSessionId_Optional has been set.
`public inline FString & `[`GetMatchId`](#structFRHAPI__CreateAuditRequest_1af229074ec8d59b623a0c46ad60cd15c0)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__CreateAuditRequest_1a21f52b8222c5fd448ed48ac4a7e6546e)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__CreateAuditRequest_1ab50434ca8b3e49555ea5c158b684bc25)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchId`](#structFRHAPI__CreateAuditRequest_1a1b9b01289b2835e9a247ef300686af0a)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__CreateAuditRequest_1afb3deb659c3d15514d9654e4f11f7bc9)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__CreateAuditRequest_1acc981ce04991bc9d32eed4760a9f698d)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchId`](#structFRHAPI__CreateAuditRequest_1ade4710fa3da7402ec8681d338d3d032a)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline void `[`SetMatchId`](#structFRHAPI__CreateAuditRequest_1aee26be37ede3329fb17c66cfd8e56f24)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__CreateAuditRequest_1ae26f168091000aa54c84e0a6a85733f7)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline bool `[`IsMatchIdSet`](#structFRHAPI__CreateAuditRequest_1a2e8c9253a9dc1413c6d1d70282866b5c)`() const` | Checks whether MatchId_Optional has been set.
`public inline int32 & `[`GetTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1a25a28ce99b8a69c52f6ec14dbd2bd30a)`()` | Gets the value of TicketWaitSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1a85dd85346a5846a08e15df867e866e64)`() const` | Gets the value of TicketWaitSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1a9d8e8bc89fcf6e35d9f9257052d1f643)`(const int32 & DefaultValue) const` | Gets the value of TicketWaitSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1a76831d2990a8bfb20a6b43877f7d6d14)`(int32 & OutValue) const` | Fills OutValue with the value of TicketWaitSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTicketWaitSecondsOrNull`](#structFRHAPI__CreateAuditRequest_1a701fa14946e3545e9f8b12614606f9b5)`()` | Returns a pointer to TicketWaitSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTicketWaitSecondsOrNull`](#structFRHAPI__CreateAuditRequest_1acf8f73c333aebff33b15c96542936fa8)`() const` | Returns a pointer to TicketWaitSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1a2728846b4fc5e5e1fbf070fe0e5e85a1)`(const int32 & NewValue)` | Sets the value of TicketWaitSeconds_Optional and also sets TicketWaitSeconds_IsSet to true.
`public inline void `[`SetTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1aba4ce0bbc984efe64fd91bb62598aac3)`(int32 && NewValue)` | Sets the value of TicketWaitSeconds_Optional and also sets TicketWaitSeconds_IsSet to true using move semantics.
`public inline void `[`ClearTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1ae45761ab68ddfdda0947d1fe8928d7c0)`()` | Clears the value of TicketWaitSeconds_Optional and sets TicketWaitSeconds_IsSet to false.
`public inline bool `[`IsTicketWaitSecondsSet`](#structFRHAPI__CreateAuditRequest_1a52343152f3293de87fc2ec4918336684)`() const` | Checks whether TicketWaitSeconds_Optional has been set.
`public inline bool `[`IsTicketWaitSecondsDefaultValue`](#structFRHAPI__CreateAuditRequest_1ab9b627f396e7b866349920f327a2a9c8)`() const` | Returns true if TicketWaitSeconds_Optional is set and matches the default value.
`public inline void `[`SetTicketWaitSecondsToDefault`](#structFRHAPI__CreateAuditRequest_1a5d48d5f12b1a0769d481a0d7c395050d)`()` | Sets the value of TicketWaitSeconds_Optional to its default and also sets TicketWaitSeconds_IsSet to true.
`public inline FString & `[`GetMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1a9ac3d71fa3995a8651d6cf9d2e6c3e8b)`()` | Gets the value of MatchMakingProfileId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1af97be7a440238261229a48a6347ecbd0)`() const` | Gets the value of MatchMakingProfileId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1a9b22d8bc514fa6a6f73492e1e45bae41)`(const FString & DefaultValue) const` | Gets the value of MatchMakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1ab69bf22037d8639911f1afab6779d37a)`(FString & OutValue) const` | Fills OutValue with the value of MatchMakingProfileId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchMakingProfileIdOrNull`](#structFRHAPI__CreateAuditRequest_1a3f7f8c1980892f83dc76283300747d3b)`()` | Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchMakingProfileIdOrNull`](#structFRHAPI__CreateAuditRequest_1a3c278d00b6be4c8a32e5329177964cac)`() const` | Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1a2eedaf732090dcef9b06f9aeadd3279a)`(const FString & NewValue)` | Sets the value of MatchMakingProfileId_Optional and also sets MatchMakingProfileId_IsSet to true.
`public inline void `[`SetMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1a47d52817a5635580697f12874162a076)`(FString && NewValue)` | Sets the value of MatchMakingProfileId_Optional and also sets MatchMakingProfileId_IsSet to true using move semantics.
`public inline void `[`ClearMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1ae670d764568c78d90313647b80d8ebd8)`()` | Clears the value of MatchMakingProfileId_Optional and sets MatchMakingProfileId_IsSet to false.
`public inline bool `[`IsMatchMakingProfileIdSet`](#structFRHAPI__CreateAuditRequest_1a2eb79aaeef41f2259f7fb1c88e56c458)`() const` | Checks whether MatchMakingProfileId_Optional has been set.
`public inline TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__CreateAuditRequest_1afebed56fea6fa477b05815140b679629)`()` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__CreateAuditRequest_1a490f789b1f95acc9ada05aa539a4311a)`() const` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__CreateAuditRequest_1a9cabad629bdd8a81a00e7aeeef9da25d)`(const TArray< FGuid > & DefaultValue) const` | Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayers`](#structFRHAPI__CreateAuditRequest_1a95ae9ad1d82ff35800aa5d6b76b55131)`(TArray< FGuid > & OutValue) const` | Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FGuid > * `[`GetPlayersOrNull`](#structFRHAPI__CreateAuditRequest_1aeceb0d50391fb4ef42e74dbfb2051542)`()` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FGuid > * `[`GetPlayersOrNull`](#structFRHAPI__CreateAuditRequest_1af9a6d1ffc9c0ae8324e9779976b6e9cd)`() const` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayers`](#structFRHAPI__CreateAuditRequest_1afa6191f6205810616ef7e39b759851c6)`(const TArray< FGuid > & NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true.
`public inline void `[`SetPlayers`](#structFRHAPI__CreateAuditRequest_1a64039e25664e109e15c09915db58d1b7)`(TArray< FGuid > && NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.
`public inline void `[`ClearPlayers`](#structFRHAPI__CreateAuditRequest_1a69f092c9a60a172af8618766f7946567)`()` | Clears the value of Players_Optional and sets Players_IsSet to false.
`public inline bool `[`IsPlayersSet`](#structFRHAPI__CreateAuditRequest_1ad0ed9bae8ae588e4b820233690d44327)`() const` | Checks whether Players_Optional has been set.

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

#### `public inline FString & `[`GetEventName`](#structFRHAPI__CreateAuditRequest_1a86ee131cda0e7618cb6ae6116c07ae09)`()` <a id="structFRHAPI__CreateAuditRequest_1a86ee131cda0e7618cb6ae6116c07ae09"></a>

Gets the value of EventName.

#### `public inline const FString & `[`GetEventName`](#structFRHAPI__CreateAuditRequest_1a077ba9a3f2ed091b983b29f7b389406c)`() const` <a id="structFRHAPI__CreateAuditRequest_1a077ba9a3f2ed091b983b29f7b389406c"></a>

Gets the value of EventName.

#### `public inline void `[`SetEventName`](#structFRHAPI__CreateAuditRequest_1aed41954f7bc27eeaee230e697aeb38b1)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1aed41954f7bc27eeaee230e697aeb38b1"></a>

Sets the value of EventName.

#### `public inline void `[`SetEventName`](#structFRHAPI__CreateAuditRequest_1af45ccc10a15638c8c7e0c1e96feb9ab6)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1af45ccc10a15638c8c7e0c1e96feb9ab6"></a>

Sets the value of EventName using move semantics.

#### `public inline FString & `[`GetSessionId`](#structFRHAPI__CreateAuditRequest_1a988b219308719aca9de7072a512584bf)`()` <a id="structFRHAPI__CreateAuditRequest_1a988b219308719aca9de7072a512584bf"></a>

Gets the value of SessionId.

#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__CreateAuditRequest_1a173d34cd08b2d1f338ca3060c2455cf9)`() const` <a id="structFRHAPI__CreateAuditRequest_1a173d34cd08b2d1f338ca3060c2455cf9"></a>

Gets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__CreateAuditRequest_1a07b7d6ba6db6a09732b0803cf1613fbc)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a07b7d6ba6db6a09732b0803cf1613fbc"></a>

Sets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__CreateAuditRequest_1aeab59058eda7191fce7e4ff6b9f3fcb1)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1aeab59058eda7191fce7e4ff6b9f3fcb1"></a>

Sets the value of SessionId using move semantics.

#### `public inline FString & `[`GetReason`](#structFRHAPI__CreateAuditRequest_1a42e5353e5bcf2d30d548a20b5231df06)`()` <a id="structFRHAPI__CreateAuditRequest_1a42e5353e5bcf2d30d548a20b5231df06"></a>

Gets the value of Reason_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetReason`](#structFRHAPI__CreateAuditRequest_1a6d5051af11edb7a8a39fe35186f8a39e)`() const` <a id="structFRHAPI__CreateAuditRequest_1a6d5051af11edb7a8a39fe35186f8a39e"></a>

Gets the value of Reason_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetReason`](#structFRHAPI__CreateAuditRequest_1acda010d73cfaeb2fdc93d56027caec21)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1acda010d73cfaeb2fdc93d56027caec21"></a>

Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetReason`](#structFRHAPI__CreateAuditRequest_1a9b202928341273a221ed02ff811fcab5)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a9b202928341273a221ed02ff811fcab5"></a>

Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetReasonOrNull`](#structFRHAPI__CreateAuditRequest_1aa362ff6532018bc3bef52963b534ec5d)`()` <a id="structFRHAPI__CreateAuditRequest_1aa362ff6532018bc3bef52963b534ec5d"></a>

Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetReasonOrNull`](#structFRHAPI__CreateAuditRequest_1abcd6571434c02a436aa049ed1d5cc643)`() const` <a id="structFRHAPI__CreateAuditRequest_1abcd6571434c02a436aa049ed1d5cc643"></a>

Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetReason`](#structFRHAPI__CreateAuditRequest_1ab78171a656e3e553d9fd51a739b84030)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ab78171a656e3e553d9fd51a739b84030"></a>

Sets the value of Reason_Optional and also sets Reason_IsSet to true.

#### `public inline void `[`SetReason`](#structFRHAPI__CreateAuditRequest_1a24e233448ca803a91e982338d200aaff)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a24e233448ca803a91e982338d200aaff"></a>

Sets the value of Reason_Optional and also sets Reason_IsSet to true using move semantics.

#### `public inline void `[`ClearReason`](#structFRHAPI__CreateAuditRequest_1a6375d709e17e8bb9ecff0c349fd4125c)`()` <a id="structFRHAPI__CreateAuditRequest_1a6375d709e17e8bb9ecff0c349fd4125c"></a>

Clears the value of Reason_Optional and sets Reason_IsSet to false.

#### `public inline bool `[`IsReasonSet`](#structFRHAPI__CreateAuditRequest_1a6224c0c862b237b11df78bab5c0602fa)`() const` <a id="structFRHAPI__CreateAuditRequest_1a6224c0c862b237b11df78bab5c0602fa"></a>

Checks whether Reason_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateAuditRequest_1adf7af672642bbeb437739eb502f25bb7)`()` <a id="structFRHAPI__CreateAuditRequest_1adf7af672642bbeb437739eb502f25bb7"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateAuditRequest_1a40328d64cba30c56951aa09778a444e7)`() const` <a id="structFRHAPI__CreateAuditRequest_1a40328d64cba30c56951aa09778a444e7"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateAuditRequest_1a85509064a7ef3a5017522c65331f77ff)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a85509064a7ef3a5017522c65331f77ff"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__CreateAuditRequest_1afd2181839cebc1c6475d7bea33ad5cac)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1afd2181839cebc1c6475d7bea33ad5cac"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CreateAuditRequest_1a705852e5e2dc1ac7cacf5f7dc5c82e93)`()` <a id="structFRHAPI__CreateAuditRequest_1a705852e5e2dc1ac7cacf5f7dc5c82e93"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CreateAuditRequest_1a122e4ee10464a0b24e9ce4ae5498cd9f)`() const` <a id="structFRHAPI__CreateAuditRequest_1a122e4ee10464a0b24e9ce4ae5498cd9f"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__CreateAuditRequest_1ada2d3ddecd81d278be5d6d9bf479412d)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ada2d3ddecd81d278be5d6d9bf479412d"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__CreateAuditRequest_1a59ae06e963f56f1d8e9d22535294fb47)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a59ae06e963f56f1d8e9d22535294fb47"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__CreateAuditRequest_1a7133cb0e9ac9b3e7655c25af45943313)`()` <a id="structFRHAPI__CreateAuditRequest_1a7133cb0e9ac9b3e7655c25af45943313"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__CreateAuditRequest_1ac1b2b913857633d1795deedb7843ec0b)`() const` <a id="structFRHAPI__CreateAuditRequest_1ac1b2b913857633d1795deedb7843ec0b"></a>

Checks whether CustomData_Optional has been set.

#### `public inline FString & `[`GetSessionType`](#structFRHAPI__CreateAuditRequest_1ad115fadcd79caf371a7c3e8f92b5ea11)`()` <a id="structFRHAPI__CreateAuditRequest_1ad115fadcd79caf371a7c3e8f92b5ea11"></a>

Gets the value of SessionType_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetSessionType`](#structFRHAPI__CreateAuditRequest_1a23ff7047a8816b5ace986b085cf92eb4)`() const` <a id="structFRHAPI__CreateAuditRequest_1a23ff7047a8816b5ace986b085cf92eb4"></a>

Gets the value of SessionType_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetSessionType`](#structFRHAPI__CreateAuditRequest_1a85ac2bd0973ee2d808842cc5dde40442)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a85ac2bd0973ee2d808842cc5dde40442"></a>

Gets the value of SessionType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessionType`](#structFRHAPI__CreateAuditRequest_1a09d309e2cc5ae94783d0fa64806f1dbb)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a09d309e2cc5ae94783d0fa64806f1dbb"></a>

Fills OutValue with the value of SessionType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetSessionTypeOrNull`](#structFRHAPI__CreateAuditRequest_1ae7e06c47aa55aee7e7b862eb0c74bc75)`()` <a id="structFRHAPI__CreateAuditRequest_1ae7e06c47aa55aee7e7b862eb0c74bc75"></a>

Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetSessionTypeOrNull`](#structFRHAPI__CreateAuditRequest_1adb656d7ad2674b143e13174b82ca6969)`() const` <a id="structFRHAPI__CreateAuditRequest_1adb656d7ad2674b143e13174b82ca6969"></a>

Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessionType`](#structFRHAPI__CreateAuditRequest_1ae7d0d6f441b5d5411432b0a6dc88371a)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ae7d0d6f441b5d5411432b0a6dc88371a"></a>

Sets the value of SessionType_Optional and also sets SessionType_IsSet to true.

#### `public inline void `[`SetSessionType`](#structFRHAPI__CreateAuditRequest_1a1a4683a662863484e63cd0810343bbbc)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a1a4683a662863484e63cd0810343bbbc"></a>

Sets the value of SessionType_Optional and also sets SessionType_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionType`](#structFRHAPI__CreateAuditRequest_1a0c8c5695ea72a10ca77f647277460c2e)`()` <a id="structFRHAPI__CreateAuditRequest_1a0c8c5695ea72a10ca77f647277460c2e"></a>

Clears the value of SessionType_Optional and sets SessionType_IsSet to false.

#### `public inline bool `[`IsSessionTypeSet`](#structFRHAPI__CreateAuditRequest_1ad9ed8cb0b078ca98676aea38c9edbd76)`() const` <a id="structFRHAPI__CreateAuditRequest_1ad9ed8cb0b078ca98676aea38c9edbd76"></a>

Checks whether SessionType_Optional has been set.

#### `public inline FString & `[`GetRegionId`](#structFRHAPI__CreateAuditRequest_1ab4be35bc5627243f7a5c3f9bf32ef491)`()` <a id="structFRHAPI__CreateAuditRequest_1ab4be35bc5627243f7a5c3f9bf32ef491"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__CreateAuditRequest_1a8554b91ed3144a6fc88565ef953161ba)`() const` <a id="structFRHAPI__CreateAuditRequest_1a8554b91ed3144a6fc88565ef953161ba"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__CreateAuditRequest_1a19abbcf6b39eb040229f1e69481c654d)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a19abbcf6b39eb040229f1e69481c654d"></a>

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRegionId`](#structFRHAPI__CreateAuditRequest_1a2a2ecd3fb1ef53a481e2188ba4ffd09a)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a2a2ecd3fb1ef53a481e2188ba4ffd09a"></a>

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__CreateAuditRequest_1add5ce14de1f2ee0c2253e286e388b3e0)`()` <a id="structFRHAPI__CreateAuditRequest_1add5ce14de1f2ee0c2253e286e388b3e0"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__CreateAuditRequest_1ad6b9e4177dc1911b5ec1cf85634b4b90)`() const` <a id="structFRHAPI__CreateAuditRequest_1ad6b9e4177dc1911b5ec1cf85634b4b90"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRegionId`](#structFRHAPI__CreateAuditRequest_1a44d49b646a716c01fe2f474aa55f6ab1)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a44d49b646a716c01fe2f474aa55f6ab1"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.

#### `public inline void `[`SetRegionId`](#structFRHAPI__CreateAuditRequest_1a3d078cc23e3f1d377345b6b3860c4e62)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a3d078cc23e3f1d377345b6b3860c4e62"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.

#### `public inline void `[`ClearRegionId`](#structFRHAPI__CreateAuditRequest_1a14abaecf3f777b3b40a01a6c5451dcda)`()` <a id="structFRHAPI__CreateAuditRequest_1a14abaecf3f777b3b40a01a6c5451dcda"></a>

Clears the value of RegionId_Optional and sets RegionId_IsSet to false.

#### `public inline bool `[`IsRegionIdSet`](#structFRHAPI__CreateAuditRequest_1a4395cb10ea927f2dc4840985acd63bc0)`() const` <a id="structFRHAPI__CreateAuditRequest_1a4395cb10ea927f2dc4840985acd63bc0"></a>

Checks whether RegionId_Optional has been set.

#### `public inline bool & `[`GetJoinable`](#structFRHAPI__CreateAuditRequest_1a331b85868751c83a2a62134e88c34a53)`()` <a id="structFRHAPI__CreateAuditRequest_1a331b85868751c83a2a62134e88c34a53"></a>

Gets the value of Joinable_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetJoinable`](#structFRHAPI__CreateAuditRequest_1a9b5c8eda9acfa624948cda64421c5d18)`() const` <a id="structFRHAPI__CreateAuditRequest_1a9b5c8eda9acfa624948cda64421c5d18"></a>

Gets the value of Joinable_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetJoinable`](#structFRHAPI__CreateAuditRequest_1a2ddede1dc8860347a189980d6ded76d7)`(const bool & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a2ddede1dc8860347a189980d6ded76d7"></a>

Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetJoinable`](#structFRHAPI__CreateAuditRequest_1ae9e66299e97761bbe1504eb82639ba15)`(bool & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1ae9e66299e97761bbe1504eb82639ba15"></a>

Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetJoinableOrNull`](#structFRHAPI__CreateAuditRequest_1a11cfe1abd415fa62912fa04aef7a0b71)`()` <a id="structFRHAPI__CreateAuditRequest_1a11cfe1abd415fa62912fa04aef7a0b71"></a>

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetJoinableOrNull`](#structFRHAPI__CreateAuditRequest_1acdae58c2588a7ae511ae633620978e19)`() const` <a id="structFRHAPI__CreateAuditRequest_1acdae58c2588a7ae511ae633620978e19"></a>

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetJoinable`](#structFRHAPI__CreateAuditRequest_1ab30dfdd2bd39491a2f07298b6c77ac2d)`(const bool & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ab30dfdd2bd39491a2f07298b6c77ac2d"></a>

Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.

#### `public inline void `[`SetJoinable`](#structFRHAPI__CreateAuditRequest_1a2f4071a1b1ae7e91e3e532313412ebf4)`(bool && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a2f4071a1b1ae7e91e3e532313412ebf4"></a>

Sets the value of Joinable_Optional and also sets Joinable_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinable`](#structFRHAPI__CreateAuditRequest_1a0ac0cef2dbb03a224cad1ff1fc91f775)`()` <a id="structFRHAPI__CreateAuditRequest_1a0ac0cef2dbb03a224cad1ff1fc91f775"></a>

Clears the value of Joinable_Optional and sets Joinable_IsSet to false.

#### `public inline bool `[`IsJoinableSet`](#structFRHAPI__CreateAuditRequest_1a1a3d912bd22d77ef6c08c87fb945dc63)`() const` <a id="structFRHAPI__CreateAuditRequest_1a1a3d912bd22d77ef6c08c87fb945dc63"></a>

Checks whether Joinable_Optional has been set.

#### `public inline bool `[`IsJoinableDefaultValue`](#structFRHAPI__CreateAuditRequest_1a403d50e31135af836820d6c44669de4f)`() const` <a id="structFRHAPI__CreateAuditRequest_1a403d50e31135af836820d6c44669de4f"></a>

Returns true if Joinable_Optional is set and matches the default value.

#### `public inline void `[`SetJoinableToDefault`](#structFRHAPI__CreateAuditRequest_1a762a5ecf56a2621c55720c43737baa22)`()` <a id="structFRHAPI__CreateAuditRequest_1a762a5ecf56a2621c55720c43737baa22"></a>

Sets the value of Joinable_Optional to its default and also sets Joinable_IsSet to true.

#### `public inline `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__CreateAuditRequest_1a41e5e31e6e49feb191e91b11613527f3)`()` <a id="structFRHAPI__CreateAuditRequest_1a41e5e31e6e49feb191e91b11613527f3"></a>

Gets the value of Joinability_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__CreateAuditRequest_1ad81180e015dcb5ccea395972b776b876)`() const` <a id="structFRHAPI__CreateAuditRequest_1ad81180e015dcb5ccea395972b776b876"></a>

Gets the value of Joinability_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & `[`GetJoinability`](#structFRHAPI__CreateAuditRequest_1a79bef05200b0288caeb1167115922cec)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a79bef05200b0288caeb1167115922cec"></a>

Gets the value of Joinability_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetJoinability`](#structFRHAPI__CreateAuditRequest_1a5deb54500b9522231fbdb9b21d1c3799)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a5deb54500b9522231fbdb9b21d1c3799"></a>

Fills OutValue with the value of Joinability_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__CreateAuditRequest_1a45e40c33ffd52e9b08a95c67bb03dae0)`()` <a id="structFRHAPI__CreateAuditRequest_1a45e40c33ffd52e9b08a95c67bb03dae0"></a>

Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` * `[`GetJoinabilityOrNull`](#structFRHAPI__CreateAuditRequest_1ac689222fc8508e0951a61da5c09a0762)`() const` <a id="structFRHAPI__CreateAuditRequest_1ac689222fc8508e0951a61da5c09a0762"></a>

Returns a pointer to Joinability_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetJoinability`](#structFRHAPI__CreateAuditRequest_1a3be627b5c3a1c42631bd7628429381f4)`(const `[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a3be627b5c3a1c42631bd7628429381f4"></a>

Sets the value of Joinability_Optional and also sets Joinability_IsSet to true.

#### `public inline void `[`SetJoinability`](#structFRHAPI__CreateAuditRequest_1ad1c647e3bb60e032f109426bd9e7206e)`(`[`FRHAPI_SessionJoinability`](RHAPI_SessionJoinability.md#structFRHAPI__SessionJoinability)` && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ad1c647e3bb60e032f109426bd9e7206e"></a>

Sets the value of Joinability_Optional and also sets Joinability_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinability`](#structFRHAPI__CreateAuditRequest_1a64051a9ab30754347e668674633c49bb)`()` <a id="structFRHAPI__CreateAuditRequest_1a64051a9ab30754347e668674633c49bb"></a>

Clears the value of Joinability_Optional and sets Joinability_IsSet to false.

#### `public inline bool `[`IsJoinabilitySet`](#structFRHAPI__CreateAuditRequest_1a1403a4555b113b95df38051be9e755eb)`() const` <a id="structFRHAPI__CreateAuditRequest_1a1403a4555b113b95df38051be9e755eb"></a>

Checks whether Joinability_Optional has been set.

#### `public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1af890c60755c6e4f04148d3a53fe8f130)`()` <a id="structFRHAPI__CreateAuditRequest_1af890c60755c6e4f04148d3a53fe8f130"></a>

Gets the value of UpdatedTeams_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1a2c9cda8be0778735e240b547ab694dd4)`() const` <a id="structFRHAPI__CreateAuditRequest_1a2c9cda8be0778735e240b547ab694dd4"></a>

Gets the value of UpdatedTeams_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1a70c8142b6b45ecc4e9a3470346e472b7)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a70c8142b6b45ecc4e9a3470346e472b7"></a>

Gets the value of UpdatedTeams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1afb1d34fa2fc6857aa5b3880894776bee)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1afb1d34fa2fc6857aa5b3880894776bee"></a>

Fills OutValue with the value of UpdatedTeams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__CreateAuditRequest_1a268adc2204d34899630cb2e257a4acf3)`()` <a id="structFRHAPI__CreateAuditRequest_1a268adc2204d34899630cb2e257a4acf3"></a>

Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__CreateAuditRequest_1ab7826537efa06ade1f9ea8579de68ecd)`() const` <a id="structFRHAPI__CreateAuditRequest_1ab7826537efa06ade1f9ea8579de68ecd"></a>

Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1a80cd058b68ae33779130980ddb24d28b)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a80cd058b68ae33779130980ddb24d28b"></a>

Sets the value of UpdatedTeams_Optional and also sets UpdatedTeams_IsSet to true.

#### `public inline void `[`SetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1aa18feb60ee4acb40abee74beeb30d6af)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1aa18feb60ee4acb40abee74beeb30d6af"></a>

Sets the value of UpdatedTeams_Optional and also sets UpdatedTeams_IsSet to true using move semantics.

#### `public inline void `[`ClearUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1aa746bed0b171151c8a5aec6a7ae86416)`()` <a id="structFRHAPI__CreateAuditRequest_1aa746bed0b171151c8a5aec6a7ae86416"></a>

Clears the value of UpdatedTeams_Optional and sets UpdatedTeams_IsSet to false.

#### `public inline bool `[`IsUpdatedTeamsSet`](#structFRHAPI__CreateAuditRequest_1ae437d1f153449047329138dcd0ddaa52)`() const` <a id="structFRHAPI__CreateAuditRequest_1ae437d1f153449047329138dcd0ddaa52"></a>

Checks whether UpdatedTeams_Optional has been set.

#### `public inline ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__CreateAuditRequest_1ac1e02a96b7cc2fa523a8e2352575c957)`()` <a id="structFRHAPI__CreateAuditRequest_1ac1e02a96b7cc2fa523a8e2352575c957"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__CreateAuditRequest_1a79f788471a75aa12bb1c0a5663d67ef6)`() const` <a id="structFRHAPI__CreateAuditRequest_1a79f788471a75aa12bb1c0a5663d67ef6"></a>

Gets the value of Source_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__CreateAuditRequest_1ae2d4b262eadaea0e1e7aee3ac81d4d0d)`(const ERHAPI_InviteSource & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1ae2d4b262eadaea0e1e7aee3ac81d4d0d"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSource`](#structFRHAPI__CreateAuditRequest_1a807edcef33ddade2e8b0e7e296541ba0)`(ERHAPI_InviteSource & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a807edcef33ddade2e8b0e7e296541ba0"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__CreateAuditRequest_1a50909d9db4214864e7ad3b39328d949c)`()` <a id="structFRHAPI__CreateAuditRequest_1a50909d9db4214864e7ad3b39328d949c"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__CreateAuditRequest_1a9356de55ceba8c2863823d0f3edec376)`() const` <a id="structFRHAPI__CreateAuditRequest_1a9356de55ceba8c2863823d0f3edec376"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSource`](#structFRHAPI__CreateAuditRequest_1a380746044e19865bab2035981cce00c8)`(const ERHAPI_InviteSource & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a380746044e19865bab2035981cce00c8"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

#### `public inline void `[`SetSource`](#structFRHAPI__CreateAuditRequest_1a50a8ecd1cb23c40b5bdb1089d7f9fe1d)`(ERHAPI_InviteSource && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a50a8ecd1cb23c40b5bdb1089d7f9fe1d"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true using move semantics.

#### `public inline void `[`ClearSource`](#structFRHAPI__CreateAuditRequest_1a25d9609c33c16ac066005e2f25199298)`()` <a id="structFRHAPI__CreateAuditRequest_1a25d9609c33c16ac066005e2f25199298"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

#### `public inline bool `[`IsSourceSet`](#structFRHAPI__CreateAuditRequest_1af7ea182a15cfc71411ec56f51a4956db)`() const` <a id="structFRHAPI__CreateAuditRequest_1af7ea182a15cfc71411ec56f51a4956db"></a>

Checks whether Source_Optional has been set.

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a7d60d17162128c29be50caad03379298)`()` <a id="structFRHAPI__CreateAuditRequest_1a7d60d17162128c29be50caad03379298"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a4f491bd24b46cb6c0a3fa0488ebfee28)`() const` <a id="structFRHAPI__CreateAuditRequest_1a4f491bd24b46cb6c0a3fa0488ebfee28"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a31004ffb545a53e14fd4270c51cec42b)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a31004ffb545a53e14fd4270c51cec42b"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a859fa7f16137cf84a56ca18ff42e186b)`(FGuid & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a859fa7f16137cf84a56ca18ff42e186b"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__CreateAuditRequest_1a0bc7ed3c71829eb880691e9875a95923)`()` <a id="structFRHAPI__CreateAuditRequest_1a0bc7ed3c71829eb880691e9875a95923"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__CreateAuditRequest_1ae1040947a12c75dc89e988676a2522d3)`() const` <a id="structFRHAPI__CreateAuditRequest_1ae1040947a12c75dc89e988676a2522d3"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a93a3ab7944c6791c3b05db557f1534c3)`(const FGuid & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a93a3ab7944c6791c3b05db557f1534c3"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a4da124acb660fef8b78ad76540a33b20)`(FGuid && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a4da124acb660fef8b78ad76540a33b20"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a0956a708f854855adca4bfa696c69bb1)`()` <a id="structFRHAPI__CreateAuditRequest_1a0956a708f854855adca4bfa696c69bb1"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__CreateAuditRequest_1a17c1822bfee15f9b222c2d23149fe82f)`() const` <a id="structFRHAPI__CreateAuditRequest_1a17c1822bfee15f9b222c2d23149fe82f"></a>

Checks whether PlayerUuid_Optional has been set.

#### `public inline int32 & `[`GetTeamId`](#structFRHAPI__CreateAuditRequest_1a6a78770e4ab3ff86e3ecc6e34c9096be)`()` <a id="structFRHAPI__CreateAuditRequest_1a6a78770e4ab3ff86e3ecc6e34c9096be"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__CreateAuditRequest_1a53a694a2ccf579abe79b8d97378f8029)`() const` <a id="structFRHAPI__CreateAuditRequest_1a53a694a2ccf579abe79b8d97378f8029"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__CreateAuditRequest_1ad59c3bbbe89885f9524093ee8cc0ded0)`(const int32 & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1ad59c3bbbe89885f9524093ee8cc0ded0"></a>

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTeamId`](#structFRHAPI__CreateAuditRequest_1aae1fea2ab5fce15c8b7c435b3ed11be1)`(int32 & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1aae1fea2ab5fce15c8b7c435b3ed11be1"></a>

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetTeamIdOrNull`](#structFRHAPI__CreateAuditRequest_1ae2482a28042ced2576d23878ddf1e46e)`()` <a id="structFRHAPI__CreateAuditRequest_1ae2482a28042ced2576d23878ddf1e46e"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__CreateAuditRequest_1aa6e170140feaf57172bab0e37f162f4a)`() const` <a id="structFRHAPI__CreateAuditRequest_1aa6e170140feaf57172bab0e37f162f4a"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTeamId`](#structFRHAPI__CreateAuditRequest_1a07e4a473133244dc2c89cb7bb86feab8)`(const int32 & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a07e4a473133244dc2c89cb7bb86feab8"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.

#### `public inline void `[`SetTeamId`](#structFRHAPI__CreateAuditRequest_1ab71c7aa4029e29943ec3ed87a3616875)`(int32 && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ab71c7aa4029e29943ec3ed87a3616875"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.

#### `public inline void `[`ClearTeamId`](#structFRHAPI__CreateAuditRequest_1aa9a5d8c6979465a0cedcc8d92c1e7339)`()` <a id="structFRHAPI__CreateAuditRequest_1aa9a5d8c6979465a0cedcc8d92c1e7339"></a>

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.

#### `public inline bool `[`IsTeamIdSet`](#structFRHAPI__CreateAuditRequest_1a28b0b2bbe9cd08befd7272a9f17fdcd7)`() const` <a id="structFRHAPI__CreateAuditRequest_1a28b0b2bbe9cd08befd7272a9f17fdcd7"></a>

Checks whether TeamId_Optional has been set.

#### `public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__CreateAuditRequest_1a92d110f8e76830b8e09d2130d944375c)`() const` <a id="structFRHAPI__CreateAuditRequest_1a92d110f8e76830b8e09d2130d944375c"></a>

Returns true if TeamId_Optional is set and matches the default value.

#### `public inline void `[`SetTeamIdToDefault`](#structFRHAPI__CreateAuditRequest_1a14a28726fafe414c46eaa6ef272c1c59)`()` <a id="structFRHAPI__CreateAuditRequest_1a14a28726fafe414c46eaa6ef272c1c59"></a>

Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.

#### `public inline FString & `[`GetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1a1fe1881100216208349973f92d1dcddf)`()` <a id="structFRHAPI__CreateAuditRequest_1a1fe1881100216208349973f92d1dcddf"></a>

Gets the value of InvitedSessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1a47a6095e57f8421bafe8205568a06f92)`() const` <a id="structFRHAPI__CreateAuditRequest_1a47a6095e57f8421bafe8205568a06f92"></a>

Gets the value of InvitedSessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1acf6f05da2ef2742b2f9cc54f7ed18be3)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1acf6f05da2ef2742b2f9cc54f7ed18be3"></a>

Gets the value of InvitedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1ac1bc7812e39f92561a6cb739e7631b0e)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1ac1bc7812e39f92561a6cb739e7631b0e"></a>

Fills OutValue with the value of InvitedSessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a06fbda03abb3a25db1ad67c0fa0d4207)`()` <a id="structFRHAPI__CreateAuditRequest_1a06fbda03abb3a25db1ad67c0fa0d4207"></a>

Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a4916a384bbae2a15ffff9e0192fd36d4)`() const` <a id="structFRHAPI__CreateAuditRequest_1a4916a384bbae2a15ffff9e0192fd36d4"></a>

Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1a51031d5edf6acf8520e34ea569b9480d)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a51031d5edf6acf8520e34ea569b9480d"></a>

Sets the value of InvitedSessionId_Optional and also sets InvitedSessionId_IsSet to true.

#### `public inline void `[`SetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1af85fc27baa5023a53c5075af35150237)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1af85fc27baa5023a53c5075af35150237"></a>

Sets the value of InvitedSessionId_Optional and also sets InvitedSessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1a003fbcbcc014ab71c196030852972989)`()` <a id="structFRHAPI__CreateAuditRequest_1a003fbcbcc014ab71c196030852972989"></a>

Clears the value of InvitedSessionId_Optional and sets InvitedSessionId_IsSet to false.

#### `public inline bool `[`IsInvitedSessionIdSet`](#structFRHAPI__CreateAuditRequest_1ac2d3623058407cead246f0dbeb3b5464)`() const` <a id="structFRHAPI__CreateAuditRequest_1ac2d3623058407cead246f0dbeb3b5464"></a>

Checks whether InvitedSessionId_Optional has been set.

#### `public inline FString & `[`GetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1ad43e78dd7b0f28aeacafb57ad9122060)`()` <a id="structFRHAPI__CreateAuditRequest_1ad43e78dd7b0f28aeacafb57ad9122060"></a>

Gets the value of RemovedSessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1ab3973526b657b2c2c6b897edc77f6432)`() const` <a id="structFRHAPI__CreateAuditRequest_1ab3973526b657b2c2c6b897edc77f6432"></a>

Gets the value of RemovedSessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1a8069311a130bc8a2a96ef93da72ef919)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a8069311a130bc8a2a96ef93da72ef919"></a>

Gets the value of RemovedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1ad07e2414b0341608d76cc096200463ac)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1ad07e2414b0341608d76cc096200463ac"></a>

Fills OutValue with the value of RemovedSessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a8fb9feb5e65b16accfe11bc0869fe1db)`()` <a id="structFRHAPI__CreateAuditRequest_1a8fb9feb5e65b16accfe11bc0869fe1db"></a>

Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1aa0a6a2fa61ba63d3c54fe8594568098e)`() const` <a id="structFRHAPI__CreateAuditRequest_1aa0a6a2fa61ba63d3c54fe8594568098e"></a>

Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1a96382df954d508bfa01497fe9d067620)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a96382df954d508bfa01497fe9d067620"></a>

Sets the value of RemovedSessionId_Optional and also sets RemovedSessionId_IsSet to true.

#### `public inline void `[`SetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1a1b98d71fd9aa2967820a28611b4ac58a)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a1b98d71fd9aa2967820a28611b4ac58a"></a>

Sets the value of RemovedSessionId_Optional and also sets RemovedSessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1a0ba952c57b0beb6e05103932a1736217)`()` <a id="structFRHAPI__CreateAuditRequest_1a0ba952c57b0beb6e05103932a1736217"></a>

Clears the value of RemovedSessionId_Optional and sets RemovedSessionId_IsSet to false.

#### `public inline bool `[`IsRemovedSessionIdSet`](#structFRHAPI__CreateAuditRequest_1ab70928faf1009ec1b8f9e9fc3b2d5339)`() const` <a id="structFRHAPI__CreateAuditRequest_1ab70928faf1009ec1b8f9e9fc3b2d5339"></a>

Checks whether RemovedSessionId_Optional has been set.

#### `public inline FString & `[`GetVersion`](#structFRHAPI__CreateAuditRequest_1a7b824db8daf4feea91ddd7157acf3930)`()` <a id="structFRHAPI__CreateAuditRequest_1a7b824db8daf4feea91ddd7157acf3930"></a>

Gets the value of Version_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetVersion`](#structFRHAPI__CreateAuditRequest_1ad7d49d126c662cca431fa0106b1a6993)`() const` <a id="structFRHAPI__CreateAuditRequest_1ad7d49d126c662cca431fa0106b1a6993"></a>

Gets the value of Version_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetVersion`](#structFRHAPI__CreateAuditRequest_1a8306c8068faea666becc757aa6ab11ec)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a8306c8068faea666becc757aa6ab11ec"></a>

Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetVersion`](#structFRHAPI__CreateAuditRequest_1a45ac7be38700622875542395b7e8beaa)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a45ac7be38700622875542395b7e8beaa"></a>

Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetVersionOrNull`](#structFRHAPI__CreateAuditRequest_1a0a860ad8c0c6c1746de38926ad48e966)`()` <a id="structFRHAPI__CreateAuditRequest_1a0a860ad8c0c6c1746de38926ad48e966"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetVersionOrNull`](#structFRHAPI__CreateAuditRequest_1a86f4ce35ce9a6b9eac202d5aaef63c5a)`() const` <a id="structFRHAPI__CreateAuditRequest_1a86f4ce35ce9a6b9eac202d5aaef63c5a"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetVersion`](#structFRHAPI__CreateAuditRequest_1a653891f577209216bd653d1bffab77ec)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a653891f577209216bd653d1bffab77ec"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true.

#### `public inline void `[`SetVersion`](#structFRHAPI__CreateAuditRequest_1a54ab662da9155cb7adf43ca9b204b824)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a54ab662da9155cb7adf43ca9b204b824"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics.

#### `public inline void `[`ClearVersion`](#structFRHAPI__CreateAuditRequest_1a22db967094d806cfbb1c530cb7c0ce2b)`()` <a id="structFRHAPI__CreateAuditRequest_1a22db967094d806cfbb1c530cb7c0ce2b"></a>

Clears the value of Version_Optional and sets Version_IsSet to false.

#### `public inline bool `[`IsVersionSet`](#structFRHAPI__CreateAuditRequest_1afbeff456947cc20ce5aa6a84c44d258d)`() const` <a id="structFRHAPI__CreateAuditRequest_1afbeff456947cc20ce5aa6a84c44d258d"></a>

Checks whether Version_Optional has been set.

#### `public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateAuditRequest_1a8da7b0217c849271a236607bc6a3166b)`()` <a id="structFRHAPI__CreateAuditRequest_1a8da7b0217c849271a236607bc6a3166b"></a>

Gets the value of ClientSettings_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateAuditRequest_1a6d059196a4308c6580dee718b285fed4)`() const` <a id="structFRHAPI__CreateAuditRequest_1a6d059196a4308c6580dee718b285fed4"></a>

Gets the value of ClientSettings_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateAuditRequest_1a1d4cea5854d4ab76cec81f51abe59bae)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a1d4cea5854d4ab76cec81f51abe59bae"></a>

Gets the value of ClientSettings_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetClientSettings`](#structFRHAPI__CreateAuditRequest_1a2159929fa77e4bd44c374828c5d5c5f6)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a2159929fa77e4bd44c374828c5d5c5f6"></a>

Fills OutValue with the value of ClientSettings_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__CreateAuditRequest_1ad85f73978e7106dbbc5e1830eaa36ce4)`()` <a id="structFRHAPI__CreateAuditRequest_1ad85f73978e7106dbbc5e1830eaa36ce4"></a>

Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__CreateAuditRequest_1a4dac817be63c74d81184ef24275efc47)`() const` <a id="structFRHAPI__CreateAuditRequest_1a4dac817be63c74d81184ef24275efc47"></a>

Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetClientSettings`](#structFRHAPI__CreateAuditRequest_1aa7d4af8c0ff1d9604aca7b461194384e)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1aa7d4af8c0ff1d9604aca7b461194384e"></a>

Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true.

#### `public inline void `[`SetClientSettings`](#structFRHAPI__CreateAuditRequest_1a3dc203e960ee17af80f53b54d2b42592)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a3dc203e960ee17af80f53b54d2b42592"></a>

Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true using move semantics.

#### `public inline void `[`ClearClientSettings`](#structFRHAPI__CreateAuditRequest_1a3e934aa4d91799c86b881ee72ac33d90)`()` <a id="structFRHAPI__CreateAuditRequest_1a3e934aa4d91799c86b881ee72ac33d90"></a>

Clears the value of ClientSettings_Optional and sets ClientSettings_IsSet to false.

#### `public inline bool `[`IsClientSettingsSet`](#structFRHAPI__CreateAuditRequest_1a07571cd250fc38ecb777089543bfb4cb)`() const` <a id="structFRHAPI__CreateAuditRequest_1a07571cd250fc38ecb777089543bfb4cb"></a>

Checks whether ClientSettings_Optional has been set.

#### `public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1aacd0805dca4d95aa304834497380a3be)`()` <a id="structFRHAPI__CreateAuditRequest_1aacd0805dca4d95aa304834497380a3be"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1a8d93e049d47103a50a28d4ebaa3ed4e5)`() const` <a id="structFRHAPI__CreateAuditRequest_1a8d93e049d47103a50a28d4ebaa3ed4e5"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1a37f3909d37179369ce81d867e921d168)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a37f3909d37179369ce81d867e921d168"></a>

Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1ad0f274b4a55c1a6b0fdc3374895a64b8)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1ad0f274b4a55c1a6b0fdc3374895a64b8"></a>

Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CreateAuditRequest_1a8030ffd3d3f0ebbdc00a7ccbf778f537)`()` <a id="structFRHAPI__CreateAuditRequest_1a8030ffd3d3f0ebbdc00a7ccbf778f537"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CreateAuditRequest_1a98625feff9235b24a435efc25c17148f)`() const` <a id="structFRHAPI__CreateAuditRequest_1a98625feff9235b24a435efc25c17148f"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1a8eba8dc17f3ea9089bc781a30bdc60c5)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a8eba8dc17f3ea9089bc781a30bdc60c5"></a>

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.

#### `public inline void `[`SetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1ab572deefe79b1ccf0a6f7c980013dd8d)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ab572deefe79b1ccf0a6f7c980013dd8d"></a>

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true using move semantics.

#### `public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1ab104c0b6b379b56cfad6bf75bc9a2c92)`()` <a id="structFRHAPI__CreateAuditRequest_1ab104c0b6b379b56cfad6bf75bc9a2c92"></a>

Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.

#### `public inline bool `[`IsCrossplayPreferencesSet`](#structFRHAPI__CreateAuditRequest_1a1c1aecbffd2947da1790553e062a97b9)`() const` <a id="structFRHAPI__CreateAuditRequest_1a1c1aecbffd2947da1790553e062a97b9"></a>

Checks whether CrossplayPreferences_Optional has been set.

#### `public inline ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1a3303c2682b0bab7bdb4f8de406faf407)`()` <a id="structFRHAPI__CreateAuditRequest_1a3303c2682b0bab7bdb4f8de406faf407"></a>

Gets the value of PlayerStatus_Optional, regardless of it having been set.

#### `public inline const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1a67bce8917cbadac24c6e433d85fe8d94)`() const` <a id="structFRHAPI__CreateAuditRequest_1a67bce8917cbadac24c6e433d85fe8d94"></a>

Gets the value of PlayerStatus_Optional, regardless of it having been set.

#### `public inline const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1ad6ebfff9c6af0183e1d0bfa8652be03a)`(const ERHAPI_SessionPlayerStatus & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1ad6ebfff9c6af0183e1d0bfa8652be03a"></a>

Gets the value of PlayerStatus_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1a336bd58fc8d4b87020cf0b362ce134cc)`(ERHAPI_SessionPlayerStatus & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a336bd58fc8d4b87020cf0b362ce134cc"></a>

Fills OutValue with the value of PlayerStatus_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__CreateAuditRequest_1a3e9287874032f5caf29e5bfe5346ab5f)`()` <a id="structFRHAPI__CreateAuditRequest_1a3e9287874032f5caf29e5bfe5346ab5f"></a>

Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__CreateAuditRequest_1ae47f3286d3588899b0be734285476b78)`() const` <a id="structFRHAPI__CreateAuditRequest_1ae47f3286d3588899b0be734285476b78"></a>

Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1a9f6c77d1c9be5b23aa3fd759c26e3bd4)`(const ERHAPI_SessionPlayerStatus & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a9f6c77d1c9be5b23aa3fd759c26e3bd4"></a>

Sets the value of PlayerStatus_Optional and also sets PlayerStatus_IsSet to true.

#### `public inline void `[`SetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1a4969dae0b620ec8d9395c39b3f3caa71)`(ERHAPI_SessionPlayerStatus && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a4969dae0b620ec8d9395c39b3f3caa71"></a>

Sets the value of PlayerStatus_Optional and also sets PlayerStatus_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerStatus`](#structFRHAPI__CreateAuditRequest_1ae86a75654a5952dcc1813e446ad45184)`()` <a id="structFRHAPI__CreateAuditRequest_1ae86a75654a5952dcc1813e446ad45184"></a>

Clears the value of PlayerStatus_Optional and sets PlayerStatus_IsSet to false.

#### `public inline bool `[`IsPlayerStatusSet`](#structFRHAPI__CreateAuditRequest_1a0512b424e952593da892715926f87bbc)`() const` <a id="structFRHAPI__CreateAuditRequest_1a0512b424e952593da892715926f87bbc"></a>

Checks whether PlayerStatus_Optional has been set.

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateAuditRequest_1a6646cfc3b4a56ac7308d196ee37732d5)`()` <a id="structFRHAPI__CreateAuditRequest_1a6646cfc3b4a56ac7308d196ee37732d5"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateAuditRequest_1ae2adeb5435e4f8f25337c5b4d4155707)`() const` <a id="structFRHAPI__CreateAuditRequest_1ae2adeb5435e4f8f25337c5b4d4155707"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateAuditRequest_1a6b6dcd5164d57d144e18a8bd8dc1d8da)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a6b6dcd5164d57d144e18a8bd8dc1d8da"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatform`](#structFRHAPI__CreateAuditRequest_1afee614de8a25e8721f63b903f32bf50c)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1afee614de8a25e8721f63b903f32bf50c"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__CreateAuditRequest_1a2929ec16f85170db37b16cbdf1f72739)`()` <a id="structFRHAPI__CreateAuditRequest_1a2929ec16f85170db37b16cbdf1f72739"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__CreateAuditRequest_1a9098cc9edf6cbac7b767742917fc5cf0)`() const` <a id="structFRHAPI__CreateAuditRequest_1a9098cc9edf6cbac7b767742917fc5cf0"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatform`](#structFRHAPI__CreateAuditRequest_1aa95dfcd7d642e0d9ab853d5fc013a6c3)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1aa95dfcd7d642e0d9ab853d5fc013a6c3"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline void `[`SetPlatform`](#structFRHAPI__CreateAuditRequest_1a5153f1e1647e18d24c92df5a1538e0b7)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a5153f1e1647e18d24c92df5a1538e0b7"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__CreateAuditRequest_1a9294795dd22e58391495a5820047116e)`()` <a id="structFRHAPI__CreateAuditRequest_1a9294795dd22e58391495a5820047116e"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline bool `[`IsPlatformSet`](#structFRHAPI__CreateAuditRequest_1aaeb9462daf766530dec01c2ff64ffc57)`() const` <a id="structFRHAPI__CreateAuditRequest_1aaeb9462daf766530dec01c2ff64ffc57"></a>

Checks whether Platform_Optional has been set.

#### `public inline FString & `[`GetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1aa0fdc4434ff960682ba5685a3ce7905b)`()` <a id="structFRHAPI__CreateAuditRequest_1aa0fdc4434ff960682ba5685a3ce7905b"></a>

Gets the value of PlatformSessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1a6de40b96d598f82008b6488da97ad502)`() const` <a id="structFRHAPI__CreateAuditRequest_1a6de40b96d598f82008b6488da97ad502"></a>

Gets the value of PlatformSessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1a8cf873f5b3b285152eea866005ca0db6)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a8cf873f5b3b285152eea866005ca0db6"></a>

Gets the value of PlatformSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1af73bf1bb1704f497d2eca0f00d6c474c)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1af73bf1bb1704f497d2eca0f00d6c474c"></a>

Fills OutValue with the value of PlatformSessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a60ecb674f8b6c8424460d3e010de7e9e)`()` <a id="structFRHAPI__CreateAuditRequest_1a60ecb674f8b6c8424460d3e010de7e9e"></a>

Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a33dd77a1484230aa772f13eebf93ae5e)`() const` <a id="structFRHAPI__CreateAuditRequest_1a33dd77a1484230aa772f13eebf93ae5e"></a>

Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1ab047c6d154acdddeaa2b7736c7928be8)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ab047c6d154acdddeaa2b7736c7928be8"></a>

Sets the value of PlatformSessionId_Optional and also sets PlatformSessionId_IsSet to true.

#### `public inline void `[`SetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1a7a8593542bc780ed61e2107a41cfcaaf)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a7a8593542bc780ed61e2107a41cfcaaf"></a>

Sets the value of PlatformSessionId_Optional and also sets PlatformSessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1a6dd45a5ba092f17721dd818e1e41828c)`()` <a id="structFRHAPI__CreateAuditRequest_1a6dd45a5ba092f17721dd818e1e41828c"></a>

Clears the value of PlatformSessionId_Optional and sets PlatformSessionId_IsSet to false.

#### `public inline bool `[`IsPlatformSessionIdSet`](#structFRHAPI__CreateAuditRequest_1aaa8c508d16db4057edbff84d750fd216)`() const` <a id="structFRHAPI__CreateAuditRequest_1aaa8c508d16db4057edbff84d750fd216"></a>

Checks whether PlatformSessionId_Optional has been set.

#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__CreateAuditRequest_1a9319a275ef4d548bc65e9bee2f90d5b2)`()` <a id="structFRHAPI__CreateAuditRequest_1a9319a275ef4d548bc65e9bee2f90d5b2"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__CreateAuditRequest_1ae0595e359b56003e60050cca45b6379c)`() const` <a id="structFRHAPI__CreateAuditRequest_1ae0595e359b56003e60050cca45b6379c"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__CreateAuditRequest_1a2dadee72337572e13cf6ef96ed99e526)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a2dadee72337572e13cf6ef96ed99e526"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceId`](#structFRHAPI__CreateAuditRequest_1a7cd6ef071095030ec44d5d7e8cf9e358)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a7cd6ef071095030ec44d5d7e8cf9e358"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__CreateAuditRequest_1a9d14d8ee039c04d4bc5bf75541497ebb)`()` <a id="structFRHAPI__CreateAuditRequest_1a9d14d8ee039c04d4bc5bf75541497ebb"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__CreateAuditRequest_1ac71877575fa7aa90cff7fc5c4dbf32c0)`() const` <a id="structFRHAPI__CreateAuditRequest_1ac71877575fa7aa90cff7fc5c4dbf32c0"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__CreateAuditRequest_1a3386085307d949fd5d5101080a1c6127)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a3386085307d949fd5d5101080a1c6127"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__CreateAuditRequest_1aa460b0657a4da40aa622df126aa4a72f)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1aa460b0657a4da40aa622df126aa4a72f"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__CreateAuditRequest_1a803e29cff308198839171d53385e9c6f)`()` <a id="structFRHAPI__CreateAuditRequest_1a803e29cff308198839171d53385e9c6f"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline bool `[`IsInstanceIdSet`](#structFRHAPI__CreateAuditRequest_1a16b55bca2c3bdae614273687abaad8ca)`() const` <a id="structFRHAPI__CreateAuditRequest_1a16b55bca2c3bdae614273687abaad8ca"></a>

Checks whether InstanceId_Optional has been set.

#### `public inline ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__CreateAuditRequest_1a499ba7f492845a80e2c9be52e7ca0442)`()` <a id="structFRHAPI__CreateAuditRequest_1a499ba7f492845a80e2c9be52e7ca0442"></a>

Gets the value of HostType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__CreateAuditRequest_1a8cff585cfd1b0c94974ba94408903571)`() const` <a id="structFRHAPI__CreateAuditRequest_1a8cff585cfd1b0c94974ba94408903571"></a>

Gets the value of HostType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__CreateAuditRequest_1aafebc7013f650c8432737a6f0ed85b34)`(const ERHAPI_HostType & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1aafebc7013f650c8432737a6f0ed85b34"></a>

Gets the value of HostType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetHostType`](#structFRHAPI__CreateAuditRequest_1aeefdb1869f7f1a64e9c591f10c043d8d)`(ERHAPI_HostType & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1aeefdb1869f7f1a64e9c591f10c043d8d"></a>

Fills OutValue with the value of HostType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__CreateAuditRequest_1a3d1a1aa472e267e3f053d238da019ca1)`()` <a id="structFRHAPI__CreateAuditRequest_1a3d1a1aa472e267e3f053d238da019ca1"></a>

Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__CreateAuditRequest_1aef95c43f3b9d13d59e58327a8746d67b)`() const` <a id="structFRHAPI__CreateAuditRequest_1aef95c43f3b9d13d59e58327a8746d67b"></a>

Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetHostType`](#structFRHAPI__CreateAuditRequest_1a3ac0e26336e22edfb2401625af2ec5eb)`(const ERHAPI_HostType & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a3ac0e26336e22edfb2401625af2ec5eb"></a>

Sets the value of HostType_Optional and also sets HostType_IsSet to true.

#### `public inline void `[`SetHostType`](#structFRHAPI__CreateAuditRequest_1ab5abf7c2d767bdde9b464ac1820fe460)`(ERHAPI_HostType && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ab5abf7c2d767bdde9b464ac1820fe460"></a>

Sets the value of HostType_Optional and also sets HostType_IsSet to true using move semantics.

#### `public inline void `[`ClearHostType`](#structFRHAPI__CreateAuditRequest_1ac6e3e2d5e89bb9b51f01198c08689a74)`()` <a id="structFRHAPI__CreateAuditRequest_1ac6e3e2d5e89bb9b51f01198c08689a74"></a>

Clears the value of HostType_Optional and sets HostType_IsSet to false.

#### `public inline bool `[`IsHostTypeSet`](#structFRHAPI__CreateAuditRequest_1a400e6592849c4382dc720852dc75f0c7)`() const` <a id="structFRHAPI__CreateAuditRequest_1a400e6592849c4382dc720852dc75f0c7"></a>

Checks whether HostType_Optional has been set.

#### `public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a534cb96ed69e4026462fe8414b8c1df1)`()` <a id="structFRHAPI__CreateAuditRequest_1a534cb96ed69e4026462fe8414b8c1df1"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1ac82b413df7ecadccc02bd13d71e6d248)`() const` <a id="structFRHAPI__CreateAuditRequest_1ac82b413df7ecadccc02bd13d71e6d248"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a728a62a7acc4420cfa904775b3c4932c)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a728a62a7acc4420cfa904775b3c4932c"></a>

Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1acf14c3e6b339b6b395fb0b9978deb2ea)`(FGuid & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1acf14c3e6b339b6b395fb0b9978deb2ea"></a>

Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__CreateAuditRequest_1aa50688d1603c552bd941d677815c4ac2)`()` <a id="structFRHAPI__CreateAuditRequest_1aa50688d1603c552bd941d677815c4ac2"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__CreateAuditRequest_1a6d23c232219f22bd147a8886f504652d)`() const` <a id="structFRHAPI__CreateAuditRequest_1a6d23c232219f22bd147a8886f504652d"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a41f0844b0e396e08efb6d1f3c0337496)`(const FGuid & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a41f0844b0e396e08efb6d1f3c0337496"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.

#### `public inline void `[`SetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1af31876571e305a13d52780fc62a4fe5e)`(FGuid && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1af31876571e305a13d52780fc62a4fe5e"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a348e2be106677dc4e989c1255f11894c)`()` <a id="structFRHAPI__CreateAuditRequest_1a348e2be106677dc4e989c1255f11894c"></a>

Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.

#### `public inline bool `[`IsHostPlayerUuidSet`](#structFRHAPI__CreateAuditRequest_1a66f6f85d641d41885bd751367fa1b332)`() const` <a id="structFRHAPI__CreateAuditRequest_1a66f6f85d641d41885bd751367fa1b332"></a>

Checks whether HostPlayerUuid_Optional has been set.

#### `public inline FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a6b6eede033c6fc78d07d7ebafe465c1c)`()` <a id="structFRHAPI__CreateAuditRequest_1a6b6eede033c6fc78d07d7ebafe465c1c"></a>

Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a17de3cbcd8e46d5c0b621e9e1f93760c)`() const` <a id="structFRHAPI__CreateAuditRequest_1a17de3cbcd8e46d5c0b621e9e1f93760c"></a>

Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1ae77b23720ed9925fe4c295b421a0562b)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1ae77b23720ed9925fe4c295b421a0562b"></a>

Gets the value of InstanceRequestTemplate_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1ae16409d611b20fdd15b53ec98a22910c)`(FGuid & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1ae16409d611b20fdd15b53ec98a22910c"></a>

Fills OutValue with the value of InstanceRequestTemplate_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__CreateAuditRequest_1ae3c2d7390370bd294d51d92ef423df9f)`()` <a id="structFRHAPI__CreateAuditRequest_1ae3c2d7390370bd294d51d92ef423df9f"></a>

Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__CreateAuditRequest_1ab61bf8fc7221025a0249871d9c9d6125)`() const` <a id="structFRHAPI__CreateAuditRequest_1ab61bf8fc7221025a0249871d9c9d6125"></a>

Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a13146ca85ee068c7dc7cc5669ac3c615)`(const FGuid & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a13146ca85ee068c7dc7cc5669ac3c615"></a>

Sets the value of InstanceRequestTemplate_Optional and also sets InstanceRequestTemplate_IsSet to true.

#### `public inline void `[`SetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a64cac6a22f58ac93f6ace27e83bf21b4)`(FGuid && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a64cac6a22f58ac93f6ace27e83bf21b4"></a>

Sets the value of InstanceRequestTemplate_Optional and also sets InstanceRequestTemplate_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a2381105fae3b7d26c8ec2a77bf18ecd5)`()` <a id="structFRHAPI__CreateAuditRequest_1a2381105fae3b7d26c8ec2a77bf18ecd5"></a>

Clears the value of InstanceRequestTemplate_Optional and sets InstanceRequestTemplate_IsSet to false.

#### `public inline bool `[`IsInstanceRequestTemplateSet`](#structFRHAPI__CreateAuditRequest_1a6aba6ad641a9a92969214744bbe69d10)`() const` <a id="structFRHAPI__CreateAuditRequest_1a6aba6ad641a9a92969214744bbe69d10"></a>

Checks whether InstanceRequestTemplate_Optional has been set.

#### `public inline FString & `[`GetMap`](#structFRHAPI__CreateAuditRequest_1ac48c252a6205adfe772fbe36f6a1bf7e)`()` <a id="structFRHAPI__CreateAuditRequest_1ac48c252a6205adfe772fbe36f6a1bf7e"></a>

Gets the value of Map_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMap`](#structFRHAPI__CreateAuditRequest_1aeb15da264f3d1b45bc7f1a55684cdac6)`() const` <a id="structFRHAPI__CreateAuditRequest_1aeb15da264f3d1b45bc7f1a55684cdac6"></a>

Gets the value of Map_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMap`](#structFRHAPI__CreateAuditRequest_1a56c4dfa07dbe1b027b5e30ad9c2bbf34)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a56c4dfa07dbe1b027b5e30ad9c2bbf34"></a>

Gets the value of Map_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMap`](#structFRHAPI__CreateAuditRequest_1a97d80b625f52b84dca15dc536d336167)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a97d80b625f52b84dca15dc536d336167"></a>

Fills OutValue with the value of Map_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMapOrNull`](#structFRHAPI__CreateAuditRequest_1a7216dd6058a00bb67e3fdcd90a04575c)`()` <a id="structFRHAPI__CreateAuditRequest_1a7216dd6058a00bb67e3fdcd90a04575c"></a>

Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMapOrNull`](#structFRHAPI__CreateAuditRequest_1a10f1d4656bf55d1a79b30e46829f6ae4)`() const` <a id="structFRHAPI__CreateAuditRequest_1a10f1d4656bf55d1a79b30e46829f6ae4"></a>

Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMap`](#structFRHAPI__CreateAuditRequest_1ad56fa8cc823775c8011265e7fcf0c5c7)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ad56fa8cc823775c8011265e7fcf0c5c7"></a>

Sets the value of Map_Optional and also sets Map_IsSet to true.

#### `public inline void `[`SetMap`](#structFRHAPI__CreateAuditRequest_1a1c30b501b0444fa188f466ddcb7d66e1)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a1c30b501b0444fa188f466ddcb7d66e1"></a>

Sets the value of Map_Optional and also sets Map_IsSet to true using move semantics.

#### `public inline void `[`ClearMap`](#structFRHAPI__CreateAuditRequest_1a98e2084cc570644d016cc2caf3ce08ff)`()` <a id="structFRHAPI__CreateAuditRequest_1a98e2084cc570644d016cc2caf3ce08ff"></a>

Clears the value of Map_Optional and sets Map_IsSet to false.

#### `public inline bool `[`IsMapSet`](#structFRHAPI__CreateAuditRequest_1a8c1f4d5dfc4374a8212b700d3fb7387b)`() const` <a id="structFRHAPI__CreateAuditRequest_1a8c1f4d5dfc4374a8212b700d3fb7387b"></a>

Checks whether Map_Optional has been set.

#### `public inline FString & `[`GetMode`](#structFRHAPI__CreateAuditRequest_1a49f4a1929b5cccc216f0fa521fdaf73a)`()` <a id="structFRHAPI__CreateAuditRequest_1a49f4a1929b5cccc216f0fa521fdaf73a"></a>

Gets the value of Mode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMode`](#structFRHAPI__CreateAuditRequest_1afb6877f6a90515abd71c0b5b2a137353)`() const` <a id="structFRHAPI__CreateAuditRequest_1afb6877f6a90515abd71c0b5b2a137353"></a>

Gets the value of Mode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMode`](#structFRHAPI__CreateAuditRequest_1a8dff1f5cd5296c3147a9c77d69474a67)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a8dff1f5cd5296c3147a9c77d69474a67"></a>

Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMode`](#structFRHAPI__CreateAuditRequest_1ac1bbf0a254a38fa5d1e5733a1d1ebd33)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1ac1bbf0a254a38fa5d1e5733a1d1ebd33"></a>

Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetModeOrNull`](#structFRHAPI__CreateAuditRequest_1aa0db28e6b2476061e258ddadeed422a0)`()` <a id="structFRHAPI__CreateAuditRequest_1aa0db28e6b2476061e258ddadeed422a0"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetModeOrNull`](#structFRHAPI__CreateAuditRequest_1a92e6a7eeca4ce27f01897b1651998393)`() const` <a id="structFRHAPI__CreateAuditRequest_1a92e6a7eeca4ce27f01897b1651998393"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMode`](#structFRHAPI__CreateAuditRequest_1aaa7b508284b5b497c99c729aadb8043f)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1aaa7b508284b5b497c99c729aadb8043f"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true.

#### `public inline void `[`SetMode`](#structFRHAPI__CreateAuditRequest_1a24750266f7d9d94ae0edcc8ae27e8017)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a24750266f7d9d94ae0edcc8ae27e8017"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true using move semantics.

#### `public inline void `[`ClearMode`](#structFRHAPI__CreateAuditRequest_1a708273853f8264d35bb53364faa1baeb)`()` <a id="structFRHAPI__CreateAuditRequest_1a708273853f8264d35bb53364faa1baeb"></a>

Clears the value of Mode_Optional and sets Mode_IsSet to false.

#### `public inline bool `[`IsModeSet`](#structFRHAPI__CreateAuditRequest_1a4a4df3be248dfc1bab24d5ae7a156c28)`() const` <a id="structFRHAPI__CreateAuditRequest_1a4a4df3be248dfc1bab24d5ae7a156c28"></a>

Checks whether Mode_Optional has been set.

#### `public inline FString & `[`GetAllocationId`](#structFRHAPI__CreateAuditRequest_1af144ee422d5823b8f46d2c3b08d26914)`()` <a id="structFRHAPI__CreateAuditRequest_1af144ee422d5823b8f46d2c3b08d26914"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetAllocationId`](#structFRHAPI__CreateAuditRequest_1a00cebcad83fe5f9aae9cc3a64c512cb8)`() const` <a id="structFRHAPI__CreateAuditRequest_1a00cebcad83fe5f9aae9cc3a64c512cb8"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetAllocationId`](#structFRHAPI__CreateAuditRequest_1a0316a4153ac94b3003de2e8775222183)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a0316a4153ac94b3003de2e8775222183"></a>

Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAllocationId`](#structFRHAPI__CreateAuditRequest_1a261bc74d9eb7e33dd33956f805be4aba)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a261bc74d9eb7e33dd33956f805be4aba"></a>

Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetAllocationIdOrNull`](#structFRHAPI__CreateAuditRequest_1a48d2a1b2632f62c2890c45014a854c16)`()` <a id="structFRHAPI__CreateAuditRequest_1a48d2a1b2632f62c2890c45014a854c16"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__CreateAuditRequest_1a82e826947ee275fbed1af6360804f685)`() const` <a id="structFRHAPI__CreateAuditRequest_1a82e826947ee275fbed1af6360804f685"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAllocationId`](#structFRHAPI__CreateAuditRequest_1af64f323eda0a1125c9200145377474ae)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1af64f323eda0a1125c9200145377474ae"></a>

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.

#### `public inline void `[`SetAllocationId`](#structFRHAPI__CreateAuditRequest_1a7d36f5e4eb62a7d40b0a83f763a3b881)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a7d36f5e4eb62a7d40b0a83f763a3b881"></a>

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true using move semantics.

#### `public inline void `[`ClearAllocationId`](#structFRHAPI__CreateAuditRequest_1a32fabf3a37474ad325e7c0e1150c5b19)`()` <a id="structFRHAPI__CreateAuditRequest_1a32fabf3a37474ad325e7c0e1150c5b19"></a>

Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.

#### `public inline bool `[`IsAllocationIdSet`](#structFRHAPI__CreateAuditRequest_1a68d51dd67fbbb4cc6b4675a261b2295f)`() const` <a id="structFRHAPI__CreateAuditRequest_1a68d51dd67fbbb4cc6b4675a261b2295f"></a>

Checks whether AllocationId_Optional has been set.

#### `public inline ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__CreateAuditRequest_1a02717b573f82063bfe1600f1a08a6023)`()` <a id="structFRHAPI__CreateAuditRequest_1a02717b573f82063bfe1600f1a08a6023"></a>

Gets the value of JoinStatus_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__CreateAuditRequest_1a495bd36dd601f9ca8a6e477d3cd2dc22)`() const` <a id="structFRHAPI__CreateAuditRequest_1a495bd36dd601f9ca8a6e477d3cd2dc22"></a>

Gets the value of JoinStatus_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__CreateAuditRequest_1a993f99d842f9a0f4468e68043c30e496)`(const ERHAPI_InstanceJoinableStatus & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a993f99d842f9a0f4468e68043c30e496"></a>

Gets the value of JoinStatus_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetJoinStatus`](#structFRHAPI__CreateAuditRequest_1afb3c7c2bcc6002eb402a207cea8d4f48)`(ERHAPI_InstanceJoinableStatus & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1afb3c7c2bcc6002eb402a207cea8d4f48"></a>

Fills OutValue with the value of JoinStatus_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__CreateAuditRequest_1a7b5c22e49a53cd23888a05f51931c171)`()` <a id="structFRHAPI__CreateAuditRequest_1a7b5c22e49a53cd23888a05f51931c171"></a>

Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__CreateAuditRequest_1a8458f2355502e57f504c3cac955b1329)`() const` <a id="structFRHAPI__CreateAuditRequest_1a8458f2355502e57f504c3cac955b1329"></a>

Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetJoinStatus`](#structFRHAPI__CreateAuditRequest_1a2152ba44323c1f87a820355d64c2cb1a)`(const ERHAPI_InstanceJoinableStatus & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a2152ba44323c1f87a820355d64c2cb1a"></a>

Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true.

#### `public inline void `[`SetJoinStatus`](#structFRHAPI__CreateAuditRequest_1af8beab19156c078a25ab480f1a5463c0)`(ERHAPI_InstanceJoinableStatus && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1af8beab19156c078a25ab480f1a5463c0"></a>

Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinStatus`](#structFRHAPI__CreateAuditRequest_1af8a6f2207119beda87c49a8aa237a1bd)`()` <a id="structFRHAPI__CreateAuditRequest_1af8a6f2207119beda87c49a8aa237a1bd"></a>

Clears the value of JoinStatus_Optional and sets JoinStatus_IsSet to false.

#### `public inline bool `[`IsJoinStatusSet`](#structFRHAPI__CreateAuditRequest_1a85220a89c6fd3f026c1ebdf835d7f49f)`() const` <a id="structFRHAPI__CreateAuditRequest_1a85220a89c6fd3f026c1ebdf835d7f49f"></a>

Checks whether JoinStatus_Optional has been set.

#### `public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__CreateAuditRequest_1ad8d2c9a5a80d9ca93387635486e6dd85)`()` <a id="structFRHAPI__CreateAuditRequest_1ad8d2c9a5a80d9ca93387635486e6dd85"></a>

Gets the value of JoinParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__CreateAuditRequest_1ac7cc14fcc92014336af8b117f6181884)`() const` <a id="structFRHAPI__CreateAuditRequest_1ac7cc14fcc92014336af8b117f6181884"></a>

Gets the value of JoinParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__CreateAuditRequest_1a780fcf772a221859ae8675beb3fb4015)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a780fcf772a221859ae8675beb3fb4015"></a>

Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetJoinParams`](#structFRHAPI__CreateAuditRequest_1a12457dd3a291960d1196fdc1d59ca8d3)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a12457dd3a291960d1196fdc1d59ca8d3"></a>

Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__CreateAuditRequest_1a02a8dbb2f17d534e668a200a65780eee)`()` <a id="structFRHAPI__CreateAuditRequest_1a02a8dbb2f17d534e668a200a65780eee"></a>

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__CreateAuditRequest_1ac47bd50514e861f6ec1fd1badb80aba2)`() const` <a id="structFRHAPI__CreateAuditRequest_1ac47bd50514e861f6ec1fd1badb80aba2"></a>

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetJoinParams`](#structFRHAPI__CreateAuditRequest_1ab35c7bcdd65e446d18390f68a2a9ab4c)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ab35c7bcdd65e446d18390f68a2a9ab4c"></a>

Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.

#### `public inline void `[`SetJoinParams`](#structFRHAPI__CreateAuditRequest_1a5d236d7b7d31ebb4c106d81d86daf173)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a5d236d7b7d31ebb4c106d81d86daf173"></a>

Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinParams`](#structFRHAPI__CreateAuditRequest_1ae15128c077fc62ffeec86842240dbd52)`()` <a id="structFRHAPI__CreateAuditRequest_1ae15128c077fc62ffeec86842240dbd52"></a>

Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.

#### `public inline bool `[`IsJoinParamsSet`](#structFRHAPI__CreateAuditRequest_1af77cace8935b4f5066c2b42db463d516)`() const` <a id="structFRHAPI__CreateAuditRequest_1af77cace8935b4f5066c2b42db463d516"></a>

Checks whether JoinParams_Optional has been set.

#### `public inline ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1aeeae4ac3490c4f867c815abc0a67b827)`()` <a id="structFRHAPI__CreateAuditRequest_1aeeae4ac3490c4f867c815abc0a67b827"></a>

Gets the value of InstanceHealth_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1a98472a520db0025bd1d44dfcdc1b2c4a)`() const` <a id="structFRHAPI__CreateAuditRequest_1a98472a520db0025bd1d44dfcdc1b2c4a"></a>

Gets the value of InstanceHealth_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1a3b3cb5ea70f2eb35b78c789970e4da7a)`(const ERHAPI_InstanceHealthStatus & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a3b3cb5ea70f2eb35b78c789970e4da7a"></a>

Gets the value of InstanceHealth_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1acb1a1a9952d63d9c73763d62cf0b365a)`(ERHAPI_InstanceHealthStatus & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1acb1a1a9952d63d9c73763d62cf0b365a"></a>

Fills OutValue with the value of InstanceHealth_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__CreateAuditRequest_1ad59b9628eb9d93e9577c8e3a460c8aba)`()` <a id="structFRHAPI__CreateAuditRequest_1ad59b9628eb9d93e9577c8e3a460c8aba"></a>

Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__CreateAuditRequest_1afba0d696c24ce15ee5f012e7b0a9d14e)`() const` <a id="structFRHAPI__CreateAuditRequest_1afba0d696c24ce15ee5f012e7b0a9d14e"></a>

Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1ad69511b7a460fe40dc140c6ec511c967)`(const ERHAPI_InstanceHealthStatus & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ad69511b7a460fe40dc140c6ec511c967"></a>

Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true.

#### `public inline void `[`SetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1a2bbc0eb1595cb867f0db25289df36a9c)`(ERHAPI_InstanceHealthStatus && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a2bbc0eb1595cb867f0db25289df36a9c"></a>

Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceHealth`](#structFRHAPI__CreateAuditRequest_1ab839fe4135e907ee3a6949f4a2ed4473)`()` <a id="structFRHAPI__CreateAuditRequest_1ab839fe4135e907ee3a6949f4a2ed4473"></a>

Clears the value of InstanceHealth_Optional and sets InstanceHealth_IsSet to false.

#### `public inline bool `[`IsInstanceHealthSet`](#structFRHAPI__CreateAuditRequest_1a77b70c35b6745f675d4e6442f608f724)`() const` <a id="structFRHAPI__CreateAuditRequest_1a77b70c35b6745f675d4e6442f608f724"></a>

Checks whether InstanceHealth_Optional has been set.

#### `public inline FString & `[`GetQueueId`](#structFRHAPI__CreateAuditRequest_1af4cb36a9962bf3f4c6fdd4df5aaeb3c1)`()` <a id="structFRHAPI__CreateAuditRequest_1af4cb36a9962bf3f4c6fdd4df5aaeb3c1"></a>

Gets the value of QueueId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetQueueId`](#structFRHAPI__CreateAuditRequest_1a0d27601e37ca7e4344bdbd96159e313e)`() const` <a id="structFRHAPI__CreateAuditRequest_1a0d27601e37ca7e4344bdbd96159e313e"></a>

Gets the value of QueueId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetQueueId`](#structFRHAPI__CreateAuditRequest_1a945bd797960cd2731b288ff469b98e87)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a945bd797960cd2731b288ff469b98e87"></a>

Gets the value of QueueId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetQueueId`](#structFRHAPI__CreateAuditRequest_1ab252dda258e552a005a8ad65e5ef28f1)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1ab252dda258e552a005a8ad65e5ef28f1"></a>

Fills OutValue with the value of QueueId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetQueueIdOrNull`](#structFRHAPI__CreateAuditRequest_1a78993b9321c9ebfe8324610ba8bd6e35)`()` <a id="structFRHAPI__CreateAuditRequest_1a78993b9321c9ebfe8324610ba8bd6e35"></a>

Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetQueueIdOrNull`](#structFRHAPI__CreateAuditRequest_1ad38395e301644c9a4fb56bfa92c77851)`() const` <a id="structFRHAPI__CreateAuditRequest_1ad38395e301644c9a4fb56bfa92c77851"></a>

Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetQueueId`](#structFRHAPI__CreateAuditRequest_1afc2aed681ceb2cbcfcf58bb1557d2ee2)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1afc2aed681ceb2cbcfcf58bb1557d2ee2"></a>

Sets the value of QueueId_Optional and also sets QueueId_IsSet to true.

#### `public inline void `[`SetQueueId`](#structFRHAPI__CreateAuditRequest_1afe6b41722861cab68fed72fbfaec5539)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1afe6b41722861cab68fed72fbfaec5539"></a>

Sets the value of QueueId_Optional and also sets QueueId_IsSet to true using move semantics.

#### `public inline void `[`ClearQueueId`](#structFRHAPI__CreateAuditRequest_1aea875a3118fee4f648079eebaac9b656)`()` <a id="structFRHAPI__CreateAuditRequest_1aea875a3118fee4f648079eebaac9b656"></a>

Clears the value of QueueId_Optional and sets QueueId_IsSet to false.

#### `public inline bool `[`IsQueueIdSet`](#structFRHAPI__CreateAuditRequest_1a3143cd287727bf6d30baa05031715ad2)`() const` <a id="structFRHAPI__CreateAuditRequest_1a3143cd287727bf6d30baa05031715ad2"></a>

Checks whether QueueId_Optional has been set.

#### `public inline FString & `[`GetTicketId`](#structFRHAPI__CreateAuditRequest_1a097d0c0ef7adc62c5f036e1d6bbd9f48)`()` <a id="structFRHAPI__CreateAuditRequest_1a097d0c0ef7adc62c5f036e1d6bbd9f48"></a>

Gets the value of TicketId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetTicketId`](#structFRHAPI__CreateAuditRequest_1a8d399efcaa28feca1aed8e64ee8204d3)`() const` <a id="structFRHAPI__CreateAuditRequest_1a8d399efcaa28feca1aed8e64ee8204d3"></a>

Gets the value of TicketId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetTicketId`](#structFRHAPI__CreateAuditRequest_1a83a072f60c17ddeeecca0d4070fd7504)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a83a072f60c17ddeeecca0d4070fd7504"></a>

Gets the value of TicketId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTicketId`](#structFRHAPI__CreateAuditRequest_1ac888136c65f76f71e47436cb14fa87e3)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1ac888136c65f76f71e47436cb14fa87e3"></a>

Fills OutValue with the value of TicketId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetTicketIdOrNull`](#structFRHAPI__CreateAuditRequest_1a452854995442b4a4b64e6e479bcaf0d3)`()` <a id="structFRHAPI__CreateAuditRequest_1a452854995442b4a4b64e6e479bcaf0d3"></a>

Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetTicketIdOrNull`](#structFRHAPI__CreateAuditRequest_1a16b5778b4c8b0b8084b30d035dc0ea40)`() const` <a id="structFRHAPI__CreateAuditRequest_1a16b5778b4c8b0b8084b30d035dc0ea40"></a>

Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTicketId`](#structFRHAPI__CreateAuditRequest_1ac993cace76c2b0d7697de0b1f7267256)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ac993cace76c2b0d7697de0b1f7267256"></a>

Sets the value of TicketId_Optional and also sets TicketId_IsSet to true.

#### `public inline void `[`SetTicketId`](#structFRHAPI__CreateAuditRequest_1ad13d1cd222f6cb913dbc86fccb233add)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ad13d1cd222f6cb913dbc86fccb233add"></a>

Sets the value of TicketId_Optional and also sets TicketId_IsSet to true using move semantics.

#### `public inline void `[`ClearTicketId`](#structFRHAPI__CreateAuditRequest_1aabb4b486f8327532dd975262f8fcc5b3)`()` <a id="structFRHAPI__CreateAuditRequest_1aabb4b486f8327532dd975262f8fcc5b3"></a>

Clears the value of TicketId_Optional and sets TicketId_IsSet to false.

#### `public inline bool `[`IsTicketIdSet`](#structFRHAPI__CreateAuditRequest_1a5bac07b97fe83aec371a481ee3cb48e0)`() const` <a id="structFRHAPI__CreateAuditRequest_1a5bac07b97fe83aec371a481ee3cb48e0"></a>

Checks whether TicketId_Optional has been set.

#### `public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1aad41f6d5fc61915702563a14f1646b78)`()` <a id="structFRHAPI__CreateAuditRequest_1aad41f6d5fc61915702563a14f1646b78"></a>

Gets the value of AdditionalParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1a0a4c8dbdd8b4ef4d45110d89abf156ec)`() const` <a id="structFRHAPI__CreateAuditRequest_1a0a4c8dbdd8b4ef4d45110d89abf156ec"></a>

Gets the value of AdditionalParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1ac30f7a3bb5300a65a659d82b34021d80)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1ac30f7a3bb5300a65a659d82b34021d80"></a>

Gets the value of AdditionalParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1a12b6244e61512df9258105d75766ce5a)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a12b6244e61512df9258105d75766ce5a"></a>

Fills OutValue with the value of AdditionalParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalParamsOrNull`](#structFRHAPI__CreateAuditRequest_1a7933162f5bd42ae8669ff95f0c366f44)`()` <a id="structFRHAPI__CreateAuditRequest_1a7933162f5bd42ae8669ff95f0c366f44"></a>

Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalParamsOrNull`](#structFRHAPI__CreateAuditRequest_1accf51419dbc09a19615b3230d3d7c2e1)`() const` <a id="structFRHAPI__CreateAuditRequest_1accf51419dbc09a19615b3230d3d7c2e1"></a>

Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1a51003e63aa473ba4a57946b67592ac82)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a51003e63aa473ba4a57946b67592ac82"></a>

Sets the value of AdditionalParams_Optional and also sets AdditionalParams_IsSet to true.

#### `public inline void `[`SetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1a90e8b490126217352ce5b1eea1983c81)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a90e8b490126217352ce5b1eea1983c81"></a>

Sets the value of AdditionalParams_Optional and also sets AdditionalParams_IsSet to true using move semantics.

#### `public inline void `[`ClearAdditionalParams`](#structFRHAPI__CreateAuditRequest_1a55b2ec8eefed3283bed95f9afbd2b247)`()` <a id="structFRHAPI__CreateAuditRequest_1a55b2ec8eefed3283bed95f9afbd2b247"></a>

Clears the value of AdditionalParams_Optional and sets AdditionalParams_IsSet to false.

#### `public inline bool `[`IsAdditionalParamsSet`](#structFRHAPI__CreateAuditRequest_1a5a5a3271372ce22e3a99f7c072817a6e)`() const` <a id="structFRHAPI__CreateAuditRequest_1a5a5a3271372ce22e3a99f7c072817a6e"></a>

Checks whether AdditionalParams_Optional has been set.

#### `public inline TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__CreateAuditRequest_1a25cea94929bd54104a3d93a43970e8a1)`()` <a id="structFRHAPI__CreateAuditRequest_1a25cea94929bd54104a3d93a43970e8a1"></a>

Gets the value of MapPreferences_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__CreateAuditRequest_1a4d10d9f0eaa9045d3ce5c0fef48e5c76)`() const` <a id="structFRHAPI__CreateAuditRequest_1a4d10d9f0eaa9045d3ce5c0fef48e5c76"></a>

Gets the value of MapPreferences_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__CreateAuditRequest_1a89df686ab7820938b16ffc33f6a8b184)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a89df686ab7820938b16ffc33f6a8b184"></a>

Gets the value of MapPreferences_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMapPreferences`](#structFRHAPI__CreateAuditRequest_1a37c4fefc9ecb554e6e008a2d94cf2f51)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a37c4fefc9ecb554e6e008a2d94cf2f51"></a>

Fills OutValue with the value of MapPreferences_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__CreateAuditRequest_1a7d6cee9c06b92d35a507ba9b09c4255b)`()` <a id="structFRHAPI__CreateAuditRequest_1a7d6cee9c06b92d35a507ba9b09c4255b"></a>

Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__CreateAuditRequest_1ae3119c2715c7e0d11d854bb16483f320)`() const` <a id="structFRHAPI__CreateAuditRequest_1ae3119c2715c7e0d11d854bb16483f320"></a>

Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMapPreferences`](#structFRHAPI__CreateAuditRequest_1a104f4ed44d42139cf43e6f074573c284)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a104f4ed44d42139cf43e6f074573c284"></a>

Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true.

#### `public inline void `[`SetMapPreferences`](#structFRHAPI__CreateAuditRequest_1a190510e02edbce45cd046c29dc7023f0)`(TArray< FString > && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a190510e02edbce45cd046c29dc7023f0"></a>

Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true using move semantics.

#### `public inline void `[`ClearMapPreferences`](#structFRHAPI__CreateAuditRequest_1a8f074dc9b8affdbefbf78306c64e52a5)`()` <a id="structFRHAPI__CreateAuditRequest_1a8f074dc9b8affdbefbf78306c64e52a5"></a>

Clears the value of MapPreferences_Optional and sets MapPreferences_IsSet to false.

#### `public inline bool `[`IsMapPreferencesSet`](#structFRHAPI__CreateAuditRequest_1a71cc9fb23a4a5b3d64ee922fae6824f6)`() const` <a id="structFRHAPI__CreateAuditRequest_1a71cc9fb23a4a5b3d64ee922fae6824f6"></a>

Checks whether MapPreferences_Optional has been set.

#### `public inline FString & `[`GetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1a2e4b37c279e3efa9fb26e2c7862920e3)`()` <a id="structFRHAPI__CreateAuditRequest_1a2e4b37c279e3efa9fb26e2c7862920e3"></a>

Gets the value of QueuedSessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1a9c5449a0f87838029feafe67d651ebb3)`() const` <a id="structFRHAPI__CreateAuditRequest_1a9c5449a0f87838029feafe67d651ebb3"></a>

Gets the value of QueuedSessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1a873143f6ceaecd3e47f1c24bae7ee398)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a873143f6ceaecd3e47f1c24bae7ee398"></a>

Gets the value of QueuedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1a32eb6900dd01f487af94f5733da67c11)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a32eb6900dd01f487af94f5733da67c11"></a>

Fills OutValue with the value of QueuedSessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a7c8e4ce8865bcee0da2d932f33ca1a84)`()` <a id="structFRHAPI__CreateAuditRequest_1a7c8e4ce8865bcee0da2d932f33ca1a84"></a>

Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a308aa33acb4e2c7063b7026e6b1ffdee)`() const` <a id="structFRHAPI__CreateAuditRequest_1a308aa33acb4e2c7063b7026e6b1ffdee"></a>

Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1ab60c381f7fe68e785b06bd1fcc3bfa3f)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ab60c381f7fe68e785b06bd1fcc3bfa3f"></a>

Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true.

#### `public inline void `[`SetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1afbc35250ab24fa16d94c61e629c12aff)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1afbc35250ab24fa16d94c61e629c12aff"></a>

Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1af13bcc59cc707c792aa29f45d8f5c6a3)`()` <a id="structFRHAPI__CreateAuditRequest_1af13bcc59cc707c792aa29f45d8f5c6a3"></a>

Clears the value of QueuedSessionId_Optional and sets QueuedSessionId_IsSet to false.

#### `public inline bool `[`IsQueuedSessionIdSet`](#structFRHAPI__CreateAuditRequest_1a23170c3745badb95c89a65beb5e0f51b)`() const` <a id="structFRHAPI__CreateAuditRequest_1a23170c3745badb95c89a65beb5e0f51b"></a>

Checks whether QueuedSessionId_Optional has been set.

#### `public inline FString & `[`GetMatchId`](#structFRHAPI__CreateAuditRequest_1af229074ec8d59b623a0c46ad60cd15c0)`()` <a id="structFRHAPI__CreateAuditRequest_1af229074ec8d59b623a0c46ad60cd15c0"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__CreateAuditRequest_1a21f52b8222c5fd448ed48ac4a7e6546e)`() const` <a id="structFRHAPI__CreateAuditRequest_1a21f52b8222c5fd448ed48ac4a7e6546e"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__CreateAuditRequest_1ab50434ca8b3e49555ea5c158b684bc25)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1ab50434ca8b3e49555ea5c158b684bc25"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchId`](#structFRHAPI__CreateAuditRequest_1a1b9b01289b2835e9a247ef300686af0a)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a1b9b01289b2835e9a247ef300686af0a"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__CreateAuditRequest_1afb3deb659c3d15514d9654e4f11f7bc9)`()` <a id="structFRHAPI__CreateAuditRequest_1afb3deb659c3d15514d9654e4f11f7bc9"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__CreateAuditRequest_1acc981ce04991bc9d32eed4760a9f698d)`() const` <a id="structFRHAPI__CreateAuditRequest_1acc981ce04991bc9d32eed4760a9f698d"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchId`](#structFRHAPI__CreateAuditRequest_1ade4710fa3da7402ec8681d338d3d032a)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ade4710fa3da7402ec8681d338d3d032a"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline void `[`SetMatchId`](#structFRHAPI__CreateAuditRequest_1aee26be37ede3329fb17c66cfd8e56f24)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1aee26be37ede3329fb17c66cfd8e56f24"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__CreateAuditRequest_1ae26f168091000aa54c84e0a6a85733f7)`()` <a id="structFRHAPI__CreateAuditRequest_1ae26f168091000aa54c84e0a6a85733f7"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline bool `[`IsMatchIdSet`](#structFRHAPI__CreateAuditRequest_1a2e8c9253a9dc1413c6d1d70282866b5c)`() const` <a id="structFRHAPI__CreateAuditRequest_1a2e8c9253a9dc1413c6d1d70282866b5c"></a>

Checks whether MatchId_Optional has been set.

#### `public inline int32 & `[`GetTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1a25a28ce99b8a69c52f6ec14dbd2bd30a)`()` <a id="structFRHAPI__CreateAuditRequest_1a25a28ce99b8a69c52f6ec14dbd2bd30a"></a>

Gets the value of TicketWaitSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1a85dd85346a5846a08e15df867e866e64)`() const` <a id="structFRHAPI__CreateAuditRequest_1a85dd85346a5846a08e15df867e866e64"></a>

Gets the value of TicketWaitSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1a9d8e8bc89fcf6e35d9f9257052d1f643)`(const int32 & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a9d8e8bc89fcf6e35d9f9257052d1f643"></a>

Gets the value of TicketWaitSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1a76831d2990a8bfb20a6b43877f7d6d14)`(int32 & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a76831d2990a8bfb20a6b43877f7d6d14"></a>

Fills OutValue with the value of TicketWaitSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetTicketWaitSecondsOrNull`](#structFRHAPI__CreateAuditRequest_1a701fa14946e3545e9f8b12614606f9b5)`()` <a id="structFRHAPI__CreateAuditRequest_1a701fa14946e3545e9f8b12614606f9b5"></a>

Returns a pointer to TicketWaitSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetTicketWaitSecondsOrNull`](#structFRHAPI__CreateAuditRequest_1acf8f73c333aebff33b15c96542936fa8)`() const` <a id="structFRHAPI__CreateAuditRequest_1acf8f73c333aebff33b15c96542936fa8"></a>

Returns a pointer to TicketWaitSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1a2728846b4fc5e5e1fbf070fe0e5e85a1)`(const int32 & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a2728846b4fc5e5e1fbf070fe0e5e85a1"></a>

Sets the value of TicketWaitSeconds_Optional and also sets TicketWaitSeconds_IsSet to true.

#### `public inline void `[`SetTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1aba4ce0bbc984efe64fd91bb62598aac3)`(int32 && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1aba4ce0bbc984efe64fd91bb62598aac3"></a>

Sets the value of TicketWaitSeconds_Optional and also sets TicketWaitSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearTicketWaitSeconds`](#structFRHAPI__CreateAuditRequest_1ae45761ab68ddfdda0947d1fe8928d7c0)`()` <a id="structFRHAPI__CreateAuditRequest_1ae45761ab68ddfdda0947d1fe8928d7c0"></a>

Clears the value of TicketWaitSeconds_Optional and sets TicketWaitSeconds_IsSet to false.

#### `public inline bool `[`IsTicketWaitSecondsSet`](#structFRHAPI__CreateAuditRequest_1a52343152f3293de87fc2ec4918336684)`() const` <a id="structFRHAPI__CreateAuditRequest_1a52343152f3293de87fc2ec4918336684"></a>

Checks whether TicketWaitSeconds_Optional has been set.

#### `public inline bool `[`IsTicketWaitSecondsDefaultValue`](#structFRHAPI__CreateAuditRequest_1ab9b627f396e7b866349920f327a2a9c8)`() const` <a id="structFRHAPI__CreateAuditRequest_1ab9b627f396e7b866349920f327a2a9c8"></a>

Returns true if TicketWaitSeconds_Optional is set and matches the default value.

#### `public inline void `[`SetTicketWaitSecondsToDefault`](#structFRHAPI__CreateAuditRequest_1a5d48d5f12b1a0769d481a0d7c395050d)`()` <a id="structFRHAPI__CreateAuditRequest_1a5d48d5f12b1a0769d481a0d7c395050d"></a>

Sets the value of TicketWaitSeconds_Optional to its default and also sets TicketWaitSeconds_IsSet to true.

#### `public inline FString & `[`GetMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1a9ac3d71fa3995a8651d6cf9d2e6c3e8b)`()` <a id="structFRHAPI__CreateAuditRequest_1a9ac3d71fa3995a8651d6cf9d2e6c3e8b"></a>

Gets the value of MatchMakingProfileId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1af97be7a440238261229a48a6347ecbd0)`() const` <a id="structFRHAPI__CreateAuditRequest_1af97be7a440238261229a48a6347ecbd0"></a>

Gets the value of MatchMakingProfileId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1a9b22d8bc514fa6a6f73492e1e45bae41)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a9b22d8bc514fa6a6f73492e1e45bae41"></a>

Gets the value of MatchMakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1ab69bf22037d8639911f1afab6779d37a)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1ab69bf22037d8639911f1afab6779d37a"></a>

Fills OutValue with the value of MatchMakingProfileId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchMakingProfileIdOrNull`](#structFRHAPI__CreateAuditRequest_1a3f7f8c1980892f83dc76283300747d3b)`()` <a id="structFRHAPI__CreateAuditRequest_1a3f7f8c1980892f83dc76283300747d3b"></a>

Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchMakingProfileIdOrNull`](#structFRHAPI__CreateAuditRequest_1a3c278d00b6be4c8a32e5329177964cac)`() const` <a id="structFRHAPI__CreateAuditRequest_1a3c278d00b6be4c8a32e5329177964cac"></a>

Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1a2eedaf732090dcef9b06f9aeadd3279a)`(const FString & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a2eedaf732090dcef9b06f9aeadd3279a"></a>

Sets the value of MatchMakingProfileId_Optional and also sets MatchMakingProfileId_IsSet to true.

#### `public inline void `[`SetMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1a47d52817a5635580697f12874162a076)`(FString && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a47d52817a5635580697f12874162a076"></a>

Sets the value of MatchMakingProfileId_Optional and also sets MatchMakingProfileId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchMakingProfileId`](#structFRHAPI__CreateAuditRequest_1ae670d764568c78d90313647b80d8ebd8)`()` <a id="structFRHAPI__CreateAuditRequest_1ae670d764568c78d90313647b80d8ebd8"></a>

Clears the value of MatchMakingProfileId_Optional and sets MatchMakingProfileId_IsSet to false.

#### `public inline bool `[`IsMatchMakingProfileIdSet`](#structFRHAPI__CreateAuditRequest_1a2eb79aaeef41f2259f7fb1c88e56c458)`() const` <a id="structFRHAPI__CreateAuditRequest_1a2eb79aaeef41f2259f7fb1c88e56c458"></a>

Checks whether MatchMakingProfileId_Optional has been set.

#### `public inline TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__CreateAuditRequest_1afebed56fea6fa477b05815140b679629)`()` <a id="structFRHAPI__CreateAuditRequest_1afebed56fea6fa477b05815140b679629"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline const TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__CreateAuditRequest_1a490f789b1f95acc9ada05aa539a4311a)`() const` <a id="structFRHAPI__CreateAuditRequest_1a490f789b1f95acc9ada05aa539a4311a"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline const TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__CreateAuditRequest_1a9cabad629bdd8a81a00e7aeeef9da25d)`(const TArray< FGuid > & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a9cabad629bdd8a81a00e7aeeef9da25d"></a>

Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayers`](#structFRHAPI__CreateAuditRequest_1a95ae9ad1d82ff35800aa5d6b76b55131)`(TArray< FGuid > & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a95ae9ad1d82ff35800aa5d6b76b55131"></a>

Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< FGuid > * `[`GetPlayersOrNull`](#structFRHAPI__CreateAuditRequest_1aeceb0d50391fb4ef42e74dbfb2051542)`()` <a id="structFRHAPI__CreateAuditRequest_1aeceb0d50391fb4ef42e74dbfb2051542"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< FGuid > * `[`GetPlayersOrNull`](#structFRHAPI__CreateAuditRequest_1af9a6d1ffc9c0ae8324e9779976b6e9cd)`() const` <a id="structFRHAPI__CreateAuditRequest_1af9a6d1ffc9c0ae8324e9779976b6e9cd"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayers`](#structFRHAPI__CreateAuditRequest_1afa6191f6205810616ef7e39b759851c6)`(const TArray< FGuid > & NewValue)` <a id="structFRHAPI__CreateAuditRequest_1afa6191f6205810616ef7e39b759851c6"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true.

#### `public inline void `[`SetPlayers`](#structFRHAPI__CreateAuditRequest_1a64039e25664e109e15c09915db58d1b7)`(TArray< FGuid > && NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a64039e25664e109e15c09915db58d1b7"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayers`](#structFRHAPI__CreateAuditRequest_1a69f092c9a60a172af8618766f7946567)`()` <a id="structFRHAPI__CreateAuditRequest_1a69f092c9a60a172af8618766f7946567"></a>

Clears the value of Players_Optional and sets Players_IsSet to false.

#### `public inline bool `[`IsPlayersSet`](#structFRHAPI__CreateAuditRequest_1ad0ed9bae8ae588e4b820233690d44327)`() const` <a id="structFRHAPI__CreateAuditRequest_1ad0ed9bae8ae588e4b820233690d44327"></a>

Checks whether Players_Optional has been set.

