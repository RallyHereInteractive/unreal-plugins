# RHAPI_CreateAuditRequest <a id="group__RHAPI__CreateAuditRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_CreateAuditRequest`](#structFRHAPI__CreateAuditRequest) | 

## struct `FRHAPI_CreateAuditRequest` <a id="structFRHAPI__CreateAuditRequest"></a>

```
struct FRHAPI_CreateAuditRequest
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`EventName`](#structFRHAPI__CreateAuditRequest_1ae34f7ce8c8b4026dac0e127a26675792) | Name of the audit event you are creating. Customer created events will be prepended with 'customer.'.
`public FString `[`SessionId`](#structFRHAPI__CreateAuditRequest_1a96ea5b0bba5f6138edd463fe70754e12) | ID of the session this event occurred in.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__CreateAuditRequest_1adcb02cf43f2f10325f81639c5c8f2406) | Custom data for this audit request.
`public bool `[`CustomData_IsSet`](#structFRHAPI__CreateAuditRequest_1a65dca695cd5d761a47f019c3de090c34) | true if CustomData_Optional has been set to a value
`public FString `[`SessionType_Optional`](#structFRHAPI__CreateAuditRequest_1ac5167ce52494f7cc9fceabe4b75c75dc) | Type of the session this event occurred in.
`public bool `[`SessionType_IsSet`](#structFRHAPI__CreateAuditRequest_1a8d32416409395e59bf980547fbc8f1f2) | true if SessionType_Optional has been set to a value
`public FString `[`RegionId_Optional`](#structFRHAPI__CreateAuditRequest_1a744aaaa83eaf7c9cf646cc77541d83d3) | Region ID for this event.
`public bool `[`RegionId_IsSet`](#structFRHAPI__CreateAuditRequest_1a4d214e0d34e156c3a2b92d2ab65fd475) | true if RegionId_Optional has been set to a value
`public bool `[`Joinable_Optional`](#structFRHAPI__CreateAuditRequest_1a9f3304100757b064fdbd47075d7c0c55) | Whether or not the session is publicly joinable.
`public bool `[`Joinable_IsSet`](#structFRHAPI__CreateAuditRequest_1a259b8292d3a4ab56b356e524bea80519) | true if Joinable_Optional has been set to a value
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
`public TArray< FGuid > `[`Players_Optional`](#structFRHAPI__CreateAuditRequest_1abe826ab73a0dc0fe032c05e47d2ad99e) | List of players uuids that were effected in this event. Each player will get a unique event.
`public bool `[`Players_IsSet`](#structFRHAPI__CreateAuditRequest_1a36dda49738de4ed403e47e362802bb90) | true if Players_Optional has been set to a value
`public FString `[`TicketId_Optional`](#structFRHAPI__CreateAuditRequest_1a3f8b22370629dd0c4e8d93e156b0abef) | Matchmaking ticket id in this event.
`public bool `[`TicketId_IsSet`](#structFRHAPI__CreateAuditRequest_1a2ed780530b3dc6c0cfd88806aad5a896) | true if TicketId_Optional has been set to a value
`public TMap< FString, FString > `[`AdditionalParams_Optional`](#structFRHAPI__CreateAuditRequest_1a772dc96326c1a24973dfaabfa5b9d9f7) | Additional matchmaking parameters in this event.
`public bool `[`AdditionalParams_IsSet`](#structFRHAPI__CreateAuditRequest_1aa844253d42e5991bdc88e8f702644a49) | true if AdditionalParams_Optional has been set to a value
`public TArray< FString > `[`MapPreferences_Optional`](#structFRHAPI__CreateAuditRequest_1ad10350cf5ce7ee4f8b9ac157f2d36693) | Map preferences in this event.
`public bool `[`MapPreferences_IsSet`](#structFRHAPI__CreateAuditRequest_1a7b640c1e80ac7673d7d05386bdf321bd) | true if MapPreferences_Optional has been set to a value
`public TArray< FString > `[`QueuedSessionId_Optional`](#structFRHAPI__CreateAuditRequest_1a0756b71d3ac835de39f34c9613511486) | ID of the session that was/is in a matchmaking queue for this event.
`public bool `[`QueuedSessionId_IsSet`](#structFRHAPI__CreateAuditRequest_1a13ebd2ffdd7e54c09b028608574392af) | true if QueuedSessionId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__CreateAuditRequest_1a9c51e7e0f9ac95e95d007a8fb833d102)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__CreateAuditRequest_1ac696b1985f631fb86f841f9cd27cdf8a)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetEventName`](#structFRHAPI__CreateAuditRequest_1aa4a17675c2a78ca4f473cf85653116a5)`()` | Gets the value of EventName.
`public inline const FString & `[`GetEventName`](#structFRHAPI__CreateAuditRequest_1a1cce8fcaaef32f855cf439c5e92be1e9)`() const` | Gets the value of EventName.
`public inline void `[`SetEventName`](#structFRHAPI__CreateAuditRequest_1a5f8be3f4ec593fc28e48bec0c535c4d5)`(FString NewValue)` | Sets the value of EventName.
`public inline FString & `[`GetSessionId`](#structFRHAPI__CreateAuditRequest_1aba561d41189351cf4ad942d29362cbf5)`()` | Gets the value of SessionId.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__CreateAuditRequest_1a5a507d05676fecbde6db910f83b59a1e)`() const` | Gets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__CreateAuditRequest_1a95276458492d5d7a40851d876caa6419)`(FString NewValue)` | Sets the value of SessionId.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateAuditRequest_1ac6137b5ba28de2510ca045de3b141852)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateAuditRequest_1a9733c6a414ea1d08d0d72a3663959644)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateAuditRequest_1a3ff8afd006df25c52fed991ee0255dbb)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__CreateAuditRequest_1afd2181839cebc1c6475d7bea33ad5cac)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CreateAuditRequest_1abd3f2143562064e020924bba5c75e44f)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CreateAuditRequest_1ae02cd2af41d9a56217701954c0631b7c)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__CreateAuditRequest_1a9162cc697e5456346893e94270c1040e)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__CreateAuditRequest_1a7133cb0e9ac9b3e7655c25af45943313)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FString & `[`GetSessionType`](#structFRHAPI__CreateAuditRequest_1a9218ec8cf293e0ce9f0bf36af7805124)`()` | Gets the value of SessionType_Optional, regardless of it having been set.
`public inline const FString & `[`GetSessionType`](#structFRHAPI__CreateAuditRequest_1a970ad500cb6d926c026598fd94ae38ba)`() const` | Gets the value of SessionType_Optional, regardless of it having been set.
`public inline const FString & `[`GetSessionType`](#structFRHAPI__CreateAuditRequest_1aea5a295a2993a6836ec53775f5f5e342)`(const FString & DefaultValue) const` | Gets the value of SessionType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessionType`](#structFRHAPI__CreateAuditRequest_1a09d309e2cc5ae94783d0fa64806f1dbb)`(FString & OutValue) const` | Fills OutValue with the value of SessionType_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetSessionTypeOrNull`](#structFRHAPI__CreateAuditRequest_1a097874c7e1f1692247a30360e3a3d125)`()` | Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetSessionTypeOrNull`](#structFRHAPI__CreateAuditRequest_1ab5325a614e2c05e08fff50fa7160dde0)`() const` | Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessionType`](#structFRHAPI__CreateAuditRequest_1a6e8447766dc9976ffa82e42f38abef4a)`(FString NewValue)` | Sets the value of SessionType_Optional and also sets SessionType_IsSet to true.
`public inline void `[`ClearSessionType`](#structFRHAPI__CreateAuditRequest_1a0c8c5695ea72a10ca77f647277460c2e)`()` | Clears the value of SessionType_Optional and sets SessionType_IsSet to false.
`public inline FString & `[`GetRegionId`](#structFRHAPI__CreateAuditRequest_1af1da4e53404bafa4f1f2b5311621bcdb)`()` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__CreateAuditRequest_1ac7ed84695e109fc1da51e0869ca7f4ee)`() const` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__CreateAuditRequest_1ac30babb068319967bb336e60f28904f1)`(const FString & DefaultValue) const` | Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRegionId`](#structFRHAPI__CreateAuditRequest_1a2a2ecd3fb1ef53a481e2188ba4ffd09a)`(FString & OutValue) const` | Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a17d62bb45ec482bfe76a888791f0aeae)`()` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__CreateAuditRequest_1add96a66f20a5f90b5c1505c477b5b920)`() const` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRegionId`](#structFRHAPI__CreateAuditRequest_1afbcb12f21df742d6b56677eaea40da74)`(FString NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.
`public inline void `[`ClearRegionId`](#structFRHAPI__CreateAuditRequest_1a14abaecf3f777b3b40a01a6c5451dcda)`()` | Clears the value of RegionId_Optional and sets RegionId_IsSet to false.
`public inline bool & `[`GetJoinable`](#structFRHAPI__CreateAuditRequest_1a243d38c015894effb67798462ea7129e)`()` | Gets the value of Joinable_Optional, regardless of it having been set.
`public inline const bool & `[`GetJoinable`](#structFRHAPI__CreateAuditRequest_1ab6db17e5cd994ab18c793d13b3034e07)`() const` | Gets the value of Joinable_Optional, regardless of it having been set.
`public inline const bool & `[`GetJoinable`](#structFRHAPI__CreateAuditRequest_1aa19765b5a672ebd5a8110ae1d5745227)`(const bool & DefaultValue) const` | Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinable`](#structFRHAPI__CreateAuditRequest_1ae9e66299e97761bbe1504eb82639ba15)`(bool & OutValue) const` | Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetJoinableOrNull`](#structFRHAPI__CreateAuditRequest_1a5aea8b739e9b252223e3d6a4f3f6dbec)`()` | Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetJoinableOrNull`](#structFRHAPI__CreateAuditRequest_1a094523a60e8d8ea591edd5853a66b1e9)`() const` | Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinable`](#structFRHAPI__CreateAuditRequest_1a6ca5ef60d0d3271bc4d35faca36ab06a)`(bool NewValue)` | Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.
`public inline void `[`ClearJoinable`](#structFRHAPI__CreateAuditRequest_1a0ac0cef2dbb03a224cad1ff1fc91f775)`()` | Clears the value of Joinable_Optional and sets Joinable_IsSet to false.
`public inline bool `[`IsJoinableDefaultValue`](#structFRHAPI__CreateAuditRequest_1a403d50e31135af836820d6c44669de4f)`() const` | Returns true if Joinable_Optional is set and matches the default value.
`public inline void `[`SetJoinableToDefault`](#structFRHAPI__CreateAuditRequest_1a762a5ecf56a2621c55720c43737baa22)`()` | Sets the value of Joinable_Optional to its default and also sets Joinable_IsSet to true.
`public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1a4d6952f7634bf91d7a3c9fa5bddf563f)`()` | Gets the value of UpdatedTeams_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1a488f20bd6923d163d9e16cbe5b10a2fa)`() const` | Gets the value of UpdatedTeams_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1a1ba68ecc5d31bc68151760fcf4e14f16)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & DefaultValue) const` | Gets the value of UpdatedTeams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1afb1d34fa2fc6857aa5b3880894776bee)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & OutValue) const` | Fills OutValue with the value of UpdatedTeams_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__CreateAuditRequest_1aff529874fda15e1ccc0c33b4a08b6cba)`()` | Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__CreateAuditRequest_1a7b9a98caad106c4f21f96476c7c32536)`() const` | Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1a0c569c7ad990ed7092a2f695a4011da8)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > NewValue)` | Sets the value of UpdatedTeams_Optional and also sets UpdatedTeams_IsSet to true.
`public inline void `[`ClearUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1aa746bed0b171151c8a5aec6a7ae86416)`()` | Clears the value of UpdatedTeams_Optional and sets UpdatedTeams_IsSet to false.
`public inline ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__CreateAuditRequest_1aa1194afecd9f486ee7109a69bbadd7a3)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__CreateAuditRequest_1a34b36583a67f98ec61d9b29e13bd9c09)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__CreateAuditRequest_1af3b3dd1646f99d5eef729beeae8f7661)`(const ERHAPI_InviteSource & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSource`](#structFRHAPI__CreateAuditRequest_1a807edcef33ddade2e8b0e7e296541ba0)`(ERHAPI_InviteSource & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__CreateAuditRequest_1acf4f38472375fd7081911aa09c005ded)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__CreateAuditRequest_1a970bb9e57efdcd0ab0661e35770c4c85)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSource`](#structFRHAPI__CreateAuditRequest_1acd4ca55cb815589f9a6d11105356c63f)`(ERHAPI_InviteSource NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline void `[`ClearSource`](#structFRHAPI__CreateAuditRequest_1a25d9609c33c16ac066005e2f25199298)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1adefdeaffad65938aa37b7252bccc5532)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a6a8b020176dc5ab02096f074c779e966)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a1cdd31cd3d1fa5da4366e8d097a2467f)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a859fa7f16137cf84a56ca18ff42e186b)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__CreateAuditRequest_1a7ffdd7c35b2a7e1062748e3285d53057)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__CreateAuditRequest_1a8d3fc12f560f2e199db5c2c154081de7)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a50028e4cc4f20e2fe5ffa5c905a2d3ab)`(FGuid NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a0956a708f854855adca4bfa696c69bb1)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline int32 & `[`GetTeamId`](#structFRHAPI__CreateAuditRequest_1a579d70fafc7f484d339f87e5c007a080)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__CreateAuditRequest_1ae785284adc8c85a8169ee70713d2f3fb)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__CreateAuditRequest_1aa95403e1734d32228b242342914c7b70)`(const int32 & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTeamId`](#structFRHAPI__CreateAuditRequest_1aae1fea2ab5fce15c8b7c435b3ed11be1)`(int32 & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTeamIdOrNull`](#structFRHAPI__CreateAuditRequest_1a2373a30e1e89112f2e48f541befc2760)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__CreateAuditRequest_1a1afe4945518f3bf32072ed9ab12b4d6c)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTeamId`](#structFRHAPI__CreateAuditRequest_1a89aece8ba7dcb226d5dfe9505e6c2cdc)`(int32 NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline void `[`ClearTeamId`](#structFRHAPI__CreateAuditRequest_1aa9a5d8c6979465a0cedcc8d92c1e7339)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__CreateAuditRequest_1a92d110f8e76830b8e09d2130d944375c)`() const` | Returns true if TeamId_Optional is set and matches the default value.
`public inline void `[`SetTeamIdToDefault`](#structFRHAPI__CreateAuditRequest_1a14a28726fafe414c46eaa6ef272c1c59)`()` | Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.
`public inline FString & `[`GetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1a9248040d6c461ab6c1d1a8e7db6a4165)`()` | Gets the value of InvitedSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1a508c22251f7b27c5ebbbe8ae28503f7d)`() const` | Gets the value of InvitedSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1a341d4319e62fdadcad69f5b2f723e0d8)`(const FString & DefaultValue) const` | Gets the value of InvitedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1ac1bc7812e39f92561a6cb739e7631b0e)`(FString & OutValue) const` | Fills OutValue with the value of InvitedSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a53fddf64952a6026ac364a6d3e0cced4)`()` | Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a65ca6e11759404ffcdebca430d239e89)`() const` | Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1ace97b4c6fba19c6794f50f844f288182)`(FString NewValue)` | Sets the value of InvitedSessionId_Optional and also sets InvitedSessionId_IsSet to true.
`public inline void `[`ClearInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1a003fbcbcc014ab71c196030852972989)`()` | Clears the value of InvitedSessionId_Optional and sets InvitedSessionId_IsSet to false.
`public inline FString & `[`GetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1ab8661f081341eccc06a65dca7803c75b)`()` | Gets the value of RemovedSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1a183ccfad9cf63ff0ffa5428f349e6b95)`() const` | Gets the value of RemovedSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1a940b04794cf359663f7e1b918a31a449)`(const FString & DefaultValue) const` | Gets the value of RemovedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1ad07e2414b0341608d76cc096200463ac)`(FString & OutValue) const` | Fills OutValue with the value of RemovedSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1ae6bb89338cbd17f8f015bd23083a3318)`()` | Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1abcde1d6f922741cc9409b14ab062c17a)`() const` | Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1a2107cba684db0be28e0ff7e900cb3eeb)`(FString NewValue)` | Sets the value of RemovedSessionId_Optional and also sets RemovedSessionId_IsSet to true.
`public inline void `[`ClearRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1a0ba952c57b0beb6e05103932a1736217)`()` | Clears the value of RemovedSessionId_Optional and sets RemovedSessionId_IsSet to false.
`public inline FString & `[`GetVersion`](#structFRHAPI__CreateAuditRequest_1a5fef9221eb6635ca453b3699eef1c92f)`()` | Gets the value of Version_Optional, regardless of it having been set.
`public inline const FString & `[`GetVersion`](#structFRHAPI__CreateAuditRequest_1a57db100f53e691d715e2d4966fdb6763)`() const` | Gets the value of Version_Optional, regardless of it having been set.
`public inline const FString & `[`GetVersion`](#structFRHAPI__CreateAuditRequest_1af3837152324ba9b649a3b358843591c7)`(const FString & DefaultValue) const` | Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVersion`](#structFRHAPI__CreateAuditRequest_1a45ac7be38700622875542395b7e8beaa)`(FString & OutValue) const` | Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetVersionOrNull`](#structFRHAPI__CreateAuditRequest_1abe1c8ef36f2725aa6ab59bc25eb95704)`()` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetVersionOrNull`](#structFRHAPI__CreateAuditRequest_1a011ecc85cef6ea65971b2e5e91131517)`() const` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVersion`](#structFRHAPI__CreateAuditRequest_1a55a17bdd908e45877b5765d99736749f)`(FString NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true.
`public inline void `[`ClearVersion`](#structFRHAPI__CreateAuditRequest_1a22db967094d806cfbb1c530cb7c0ce2b)`()` | Clears the value of Version_Optional and sets Version_IsSet to false.
`public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateAuditRequest_1a38821330e36f12ec8fe21680be4efeca)`()` | Gets the value of ClientSettings_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateAuditRequest_1a8286b54e233974fe784ea0d96b5ce14c)`() const` | Gets the value of ClientSettings_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateAuditRequest_1aefb0576317289cd2ddc1d0d14660a297)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & DefaultValue) const` | Gets the value of ClientSettings_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetClientSettings`](#structFRHAPI__CreateAuditRequest_1a2159929fa77e4bd44c374828c5d5c5f6)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & OutValue) const` | Fills OutValue with the value of ClientSettings_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__CreateAuditRequest_1af399f1da1bdbde13bfe2110f3b65c89d)`()` | Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__CreateAuditRequest_1a1e1bb889d7d60d9dd6f2edc0007663fb)`() const` | Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetClientSettings`](#structFRHAPI__CreateAuditRequest_1ac12c3f96b5df01fe52face75258959e5)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` NewValue)` | Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true.
`public inline void `[`ClearClientSettings`](#structFRHAPI__CreateAuditRequest_1a3e934aa4d91799c86b881ee72ac33d90)`()` | Clears the value of ClientSettings_Optional and sets ClientSettings_IsSet to false.
`public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1a8b2d5ff52498e5691c9a900dbfe69305)`()` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1a66e4b0cdd47e06bbfbc042423f4a375d)`() const` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1a5503fa32c71f79466327c6a7876a194b)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` | Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1ad0f274b4a55c1a6b0fdc3374895a64b8)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` | Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CreateAuditRequest_1abe502e4fc52955e2a407d795c33e5731)`()` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CreateAuditRequest_1afd75a3fc3fd2aa49cee7bbe526d83f7c)`() const` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1a0fc19ebafb1aec77347166b820ba3f08)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` NewValue)` | Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.
`public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1ab104c0b6b379b56cfad6bf75bc9a2c92)`()` | Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.
`public inline ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1ad0307b9c2f45c6cd65fd8b3fc795e02c)`()` | Gets the value of PlayerStatus_Optional, regardless of it having been set.
`public inline const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1a41c2bb0397d84c67d3053cf76786cf44)`() const` | Gets the value of PlayerStatus_Optional, regardless of it having been set.
`public inline const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1ae653ef4d4f159f034f2e23a9eb2a608b)`(const ERHAPI_SessionPlayerStatus & DefaultValue) const` | Gets the value of PlayerStatus_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1a336bd58fc8d4b87020cf0b362ce134cc)`(ERHAPI_SessionPlayerStatus & OutValue) const` | Fills OutValue with the value of PlayerStatus_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__CreateAuditRequest_1aed433034066ec57e97931fd2b82db96c)`()` | Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__CreateAuditRequest_1aacbf52dd96e0afdddd57e4debd301a08)`() const` | Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1aee91317460129fde6a983abd5a96b448)`(ERHAPI_SessionPlayerStatus NewValue)` | Sets the value of PlayerStatus_Optional and also sets PlayerStatus_IsSet to true.
`public inline void `[`ClearPlayerStatus`](#structFRHAPI__CreateAuditRequest_1ae86a75654a5952dcc1813e446ad45184)`()` | Clears the value of PlayerStatus_Optional and sets PlayerStatus_IsSet to false.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateAuditRequest_1a5d3cb2711fbde1e3592e242c444aa1d7)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateAuditRequest_1ad585ef4f88c1cdd8b34db52851d4402c)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateAuditRequest_1ade6f622d599128c2adcba29985f03c16)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatform`](#structFRHAPI__CreateAuditRequest_1afee614de8a25e8721f63b903f32bf50c)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__CreateAuditRequest_1a05da64e2dbc3f2270c8e5aa56ae4e9ea)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__CreateAuditRequest_1ad8e7ce0aa9dead8ff8f129a5a4cdc308)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatform`](#structFRHAPI__CreateAuditRequest_1a37c1731caa623ef5a07a869fc1304b5b)`(ERHAPI_Platform NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline void `[`ClearPlatform`](#structFRHAPI__CreateAuditRequest_1a9294795dd22e58391495a5820047116e)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline FString & `[`GetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1af24d5a4f8aa0bc4494fbc0ecce6dbba7)`()` | Gets the value of PlatformSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1a5916caec1bec77ea0511c182d85a7012)`() const` | Gets the value of PlatformSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1a01c49169f038007f7f16623bae749de3)`(const FString & DefaultValue) const` | Gets the value of PlatformSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1af73bf1bb1704f497d2eca0f00d6c474c)`(FString & OutValue) const` | Fills OutValue with the value of PlatformSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1ad88e5964500582110862dee8e0dc0e16)`()` | Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1abc954ea54b1b97266f97f7df76dbf058)`() const` | Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1a6a3055383b4d3dc0407d5843f0e07be8)`(FString NewValue)` | Sets the value of PlatformSessionId_Optional and also sets PlatformSessionId_IsSet to true.
`public inline void `[`ClearPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1a6dd45a5ba092f17721dd818e1e41828c)`()` | Clears the value of PlatformSessionId_Optional and sets PlatformSessionId_IsSet to false.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__CreateAuditRequest_1a9e45185ecccb614936183a22d88c3774)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__CreateAuditRequest_1a89548b388ce8c37ab4539848f2d433dd)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__CreateAuditRequest_1acb61202419812b1b09c297bed977a633)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceId`](#structFRHAPI__CreateAuditRequest_1a7cd6ef071095030ec44d5d7e8cf9e358)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__CreateAuditRequest_1a8a0a8463d4194f8423540a50955a8ebe)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__CreateAuditRequest_1a8ee9910ce7fd720c25be0122a2ac06cd)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceId`](#structFRHAPI__CreateAuditRequest_1a92cc046a05c4f664f1af6cddfe1a3a53)`(FString NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline void `[`ClearInstanceId`](#structFRHAPI__CreateAuditRequest_1a803e29cff308198839171d53385e9c6f)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__CreateAuditRequest_1a9179fc83d868afdbd75ce2c5936a15e5)`()` | Gets the value of HostType_Optional, regardless of it having been set.
`public inline const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__CreateAuditRequest_1a04ec106a17dc41317181cb5b3df18192)`() const` | Gets the value of HostType_Optional, regardless of it having been set.
`public inline const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__CreateAuditRequest_1a63090b940925d956074bd1e24f860a2a)`(const ERHAPI_HostType & DefaultValue) const` | Gets the value of HostType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostType`](#structFRHAPI__CreateAuditRequest_1aeefdb1869f7f1a64e9c591f10c043d8d)`(ERHAPI_HostType & OutValue) const` | Fills OutValue with the value of HostType_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__CreateAuditRequest_1a9c6f29da194be906bf54442aa77d1b68)`()` | Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__CreateAuditRequest_1ab42fe054f9c58c57cbd3d4511b1eaae5)`() const` | Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostType`](#structFRHAPI__CreateAuditRequest_1aaf737afa3e0e3ecc66c5459ccbf7c7ff)`(ERHAPI_HostType NewValue)` | Sets the value of HostType_Optional and also sets HostType_IsSet to true.
`public inline void `[`ClearHostType`](#structFRHAPI__CreateAuditRequest_1ac6e3e2d5e89bb9b51f01198c08689a74)`()` | Clears the value of HostType_Optional and sets HostType_IsSet to false.
`public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a27a63653797661a4da35f0d9437eb934)`()` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1aada9003799f55435ee2ad6e84d09a6da)`() const` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1af8a1a143a5830e4a42c9fd065a9ed667)`(const FGuid & DefaultValue) const` | Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1acf14c3e6b339b6b395fb0b9978deb2ea)`(FGuid & OutValue) const` | Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__CreateAuditRequest_1a841ef9816d9d68b744f154cfeaa307a3)`()` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__CreateAuditRequest_1ac64b8cbf9c8451e82af2a2c47997cf30)`() const` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1ae93419029383eaad5b65c0bc391ff3af)`(FGuid NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.
`public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a348e2be106677dc4e989c1255f11894c)`()` | Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.
`public inline FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a065e479a886baef9e48f98d6a38c2857)`()` | Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a968674d2c82946528400646b4bbb7ab1)`() const` | Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a8f1c65ff91ca271f43d87cbc0f753773)`(const FGuid & DefaultValue) const` | Gets the value of InstanceRequestTemplate_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1ae16409d611b20fdd15b53ec98a22910c)`(FGuid & OutValue) const` | Fills OutValue with the value of InstanceRequestTemplate_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__CreateAuditRequest_1ad4a18d50d62e9ea32cbed5513ddd201c)`()` | Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__CreateAuditRequest_1a33ce07e5eda5ed4c07824e3bd45834e7)`() const` | Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1ad008b333785e9101f8cb3b7bfde3f9af)`(FGuid NewValue)` | Sets the value of InstanceRequestTemplate_Optional and also sets InstanceRequestTemplate_IsSet to true.
`public inline void `[`ClearInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a2381105fae3b7d26c8ec2a77bf18ecd5)`()` | Clears the value of InstanceRequestTemplate_Optional and sets InstanceRequestTemplate_IsSet to false.
`public inline FString & `[`GetMap`](#structFRHAPI__CreateAuditRequest_1a16d7c829b2f5009d5105825aa715714f)`()` | Gets the value of Map_Optional, regardless of it having been set.
`public inline const FString & `[`GetMap`](#structFRHAPI__CreateAuditRequest_1a115063adc41183201c8d35f0af94606c)`() const` | Gets the value of Map_Optional, regardless of it having been set.
`public inline const FString & `[`GetMap`](#structFRHAPI__CreateAuditRequest_1a224f453b7c28efe9669f7a28a76a20a1)`(const FString & DefaultValue) const` | Gets the value of Map_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMap`](#structFRHAPI__CreateAuditRequest_1a97d80b625f52b84dca15dc536d336167)`(FString & OutValue) const` | Fills OutValue with the value of Map_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMapOrNull`](#structFRHAPI__CreateAuditRequest_1a637ee7bba4e100b241948e4ba54a3c20)`()` | Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMapOrNull`](#structFRHAPI__CreateAuditRequest_1ab79de0e3358bbbbc72c2d32d96e13e6c)`() const` | Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMap`](#structFRHAPI__CreateAuditRequest_1a9980eeb7ea6bc7e3ad228aee3facb67e)`(FString NewValue)` | Sets the value of Map_Optional and also sets Map_IsSet to true.
`public inline void `[`ClearMap`](#structFRHAPI__CreateAuditRequest_1a98e2084cc570644d016cc2caf3ce08ff)`()` | Clears the value of Map_Optional and sets Map_IsSet to false.
`public inline FString & `[`GetMode`](#structFRHAPI__CreateAuditRequest_1a8421f3ab7ef8d8cea60a4e5352510259)`()` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline const FString & `[`GetMode`](#structFRHAPI__CreateAuditRequest_1a0443acf7bcea38bb8b8fdb032e8fb00f)`() const` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline const FString & `[`GetMode`](#structFRHAPI__CreateAuditRequest_1a29a44e9b8aa647a39c61bf581485b3cf)`(const FString & DefaultValue) const` | Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMode`](#structFRHAPI__CreateAuditRequest_1ac1bbf0a254a38fa5d1e5733a1d1ebd33)`(FString & OutValue) const` | Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetModeOrNull`](#structFRHAPI__CreateAuditRequest_1a74e6ab79f0bb70f32092aa41252555f7)`()` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetModeOrNull`](#structFRHAPI__CreateAuditRequest_1a3c1cab4c01ff606c03cc5c28b8964cbb)`() const` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMode`](#structFRHAPI__CreateAuditRequest_1a2448d1a95814a367076e84930b4ce72e)`(FString NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true.
`public inline void `[`ClearMode`](#structFRHAPI__CreateAuditRequest_1a708273853f8264d35bb53364faa1baeb)`()` | Clears the value of Mode_Optional and sets Mode_IsSet to false.
`public inline FString & `[`GetAllocationId`](#structFRHAPI__CreateAuditRequest_1ae9adb321b2e78434bc56ea2f3b4e8b13)`()` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetAllocationId`](#structFRHAPI__CreateAuditRequest_1ace2211a6fbc29ac0668dacf6ff56aaaa)`() const` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetAllocationId`](#structFRHAPI__CreateAuditRequest_1a4ba214418c6499597d86c16e4d37c7f1)`(const FString & DefaultValue) const` | Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAllocationId`](#structFRHAPI__CreateAuditRequest_1a261bc74d9eb7e33dd33956f805be4aba)`(FString & OutValue) const` | Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetAllocationIdOrNull`](#structFRHAPI__CreateAuditRequest_1a82bb7f7b78637241beb6024c4e24ef0b)`()` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__CreateAuditRequest_1a90ecc935c43df0ed34bdcbadc8ce05bd)`() const` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAllocationId`](#structFRHAPI__CreateAuditRequest_1a0cb573479fe97b258ba4fde22440a643)`(FString NewValue)` | Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.
`public inline void `[`ClearAllocationId`](#structFRHAPI__CreateAuditRequest_1a32fabf3a37474ad325e7c0e1150c5b19)`()` | Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.
`public inline ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__CreateAuditRequest_1a96c66817df758ddf70817d570d4f368f)`()` | Gets the value of JoinStatus_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__CreateAuditRequest_1a447c72de3776804a67df24537aa1d793)`() const` | Gets the value of JoinStatus_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__CreateAuditRequest_1adb9219151d3184f1fe4fe5e05432020b)`(const ERHAPI_InstanceJoinableStatus & DefaultValue) const` | Gets the value of JoinStatus_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinStatus`](#structFRHAPI__CreateAuditRequest_1afb3c7c2bcc6002eb402a207cea8d4f48)`(ERHAPI_InstanceJoinableStatus & OutValue) const` | Fills OutValue with the value of JoinStatus_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__CreateAuditRequest_1ac5183638ac6169496fb78e05dd91166b)`()` | Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__CreateAuditRequest_1aea924da2d7febd851f4db65d0f00261d)`() const` | Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinStatus`](#structFRHAPI__CreateAuditRequest_1a0310ca35c0978cb9c8abb9c50847bdac)`(ERHAPI_InstanceJoinableStatus NewValue)` | Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true.
`public inline void `[`ClearJoinStatus`](#structFRHAPI__CreateAuditRequest_1af8a6f2207119beda87c49a8aa237a1bd)`()` | Clears the value of JoinStatus_Optional and sets JoinStatus_IsSet to false.
`public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__CreateAuditRequest_1aae2ab58db342087b9f2662557fc8a0e8)`()` | Gets the value of JoinParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__CreateAuditRequest_1a82961ddc8817d957b170e6a9eac181aa)`() const` | Gets the value of JoinParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__CreateAuditRequest_1aef26c817f7860b642032522e6dc901cf)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & DefaultValue) const` | Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinParams`](#structFRHAPI__CreateAuditRequest_1a12457dd3a291960d1196fdc1d59ca8d3)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & OutValue) const` | Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__CreateAuditRequest_1a98d4a611eedaf54627939909ae2a7a72)`()` | Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__CreateAuditRequest_1a0bf6f22bd7d7aed7fb27ad7085fa3bf2)`() const` | Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinParams`](#structFRHAPI__CreateAuditRequest_1a6145d6b665524acd90cf51c088f010d7)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` NewValue)` | Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.
`public inline void `[`ClearJoinParams`](#structFRHAPI__CreateAuditRequest_1ae15128c077fc62ffeec86842240dbd52)`()` | Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.
`public inline ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1a84fd690b95e3fc58f832ac260b61414b)`()` | Gets the value of InstanceHealth_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1a7a4854a7d729d43575b94ccae3f915e3)`() const` | Gets the value of InstanceHealth_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1ac9fc934271c4e481f8c574ba5b12a47e)`(const ERHAPI_InstanceHealthStatus & DefaultValue) const` | Gets the value of InstanceHealth_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1acb1a1a9952d63d9c73763d62cf0b365a)`(ERHAPI_InstanceHealthStatus & OutValue) const` | Fills OutValue with the value of InstanceHealth_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__CreateAuditRequest_1a231a1f77055dba45c48dd575b0baba2c)`()` | Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__CreateAuditRequest_1a6e89298f7702a23817c504ba73f58666)`() const` | Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1a91147d5811c089b3ce28c9dfb8f9e9b6)`(ERHAPI_InstanceHealthStatus NewValue)` | Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true.
`public inline void `[`ClearInstanceHealth`](#structFRHAPI__CreateAuditRequest_1ab839fe4135e907ee3a6949f4a2ed4473)`()` | Clears the value of InstanceHealth_Optional and sets InstanceHealth_IsSet to false.
`public inline FString & `[`GetQueueId`](#structFRHAPI__CreateAuditRequest_1aba4dda82a6b38ba44f0a7ccd19ddba33)`()` | Gets the value of QueueId_Optional, regardless of it having been set.
`public inline const FString & `[`GetQueueId`](#structFRHAPI__CreateAuditRequest_1a1ecdcc737d47c8bc53fd78d918b340a8)`() const` | Gets the value of QueueId_Optional, regardless of it having been set.
`public inline const FString & `[`GetQueueId`](#structFRHAPI__CreateAuditRequest_1ac9259ddaa72a948ccfb083f0300ac015)`(const FString & DefaultValue) const` | Gets the value of QueueId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetQueueId`](#structFRHAPI__CreateAuditRequest_1ab252dda258e552a005a8ad65e5ef28f1)`(FString & OutValue) const` | Fills OutValue with the value of QueueId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetQueueIdOrNull`](#structFRHAPI__CreateAuditRequest_1a48ab7aa11f469405333562c73a18518d)`()` | Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetQueueIdOrNull`](#structFRHAPI__CreateAuditRequest_1a18704e28e6ecbb753b159cdcd8cd4756)`() const` | Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetQueueId`](#structFRHAPI__CreateAuditRequest_1a816a97a61b4c21ae6a8335b018da1508)`(FString NewValue)` | Sets the value of QueueId_Optional and also sets QueueId_IsSet to true.
`public inline void `[`ClearQueueId`](#structFRHAPI__CreateAuditRequest_1aea875a3118fee4f648079eebaac9b656)`()` | Clears the value of QueueId_Optional and sets QueueId_IsSet to false.
`public inline TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__CreateAuditRequest_1a1061e0d89d34c2256654b9834656343e)`()` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__CreateAuditRequest_1a8d19748f7eb81fbcd2cae82970ba482c)`() const` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__CreateAuditRequest_1a4c599ad2b223e07aa49a1a600002a1c6)`(const TArray< FGuid > & DefaultValue) const` | Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayers`](#structFRHAPI__CreateAuditRequest_1a95ae9ad1d82ff35800aa5d6b76b55131)`(TArray< FGuid > & OutValue) const` | Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FGuid > * `[`GetPlayersOrNull`](#structFRHAPI__CreateAuditRequest_1ac3708be790419ca5e80ddda011b21e19)`()` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FGuid > * `[`GetPlayersOrNull`](#structFRHAPI__CreateAuditRequest_1ac2860605be9737cf5aae22be6f7bc047)`() const` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayers`](#structFRHAPI__CreateAuditRequest_1a94247061ed3667973d238b6941bfce07)`(TArray< FGuid > NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true.
`public inline void `[`ClearPlayers`](#structFRHAPI__CreateAuditRequest_1a69f092c9a60a172af8618766f7946567)`()` | Clears the value of Players_Optional and sets Players_IsSet to false.
`public inline FString & `[`GetTicketId`](#structFRHAPI__CreateAuditRequest_1a6ace7b6397fc1f9b2a8c4a1e5ee2b551)`()` | Gets the value of TicketId_Optional, regardless of it having been set.
`public inline const FString & `[`GetTicketId`](#structFRHAPI__CreateAuditRequest_1ab5691f47854a7ca674155a88d70d29e5)`() const` | Gets the value of TicketId_Optional, regardless of it having been set.
`public inline const FString & `[`GetTicketId`](#structFRHAPI__CreateAuditRequest_1adc19213747cc456d849fa2b10fb0faae)`(const FString & DefaultValue) const` | Gets the value of TicketId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTicketId`](#structFRHAPI__CreateAuditRequest_1ac888136c65f76f71e47436cb14fa87e3)`(FString & OutValue) const` | Fills OutValue with the value of TicketId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTicketIdOrNull`](#structFRHAPI__CreateAuditRequest_1aaee44237660e63d3eb4e5bccfa2f12ce)`()` | Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTicketIdOrNull`](#structFRHAPI__CreateAuditRequest_1ae1b7b483e27871a1bb982f441206837e)`() const` | Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTicketId`](#structFRHAPI__CreateAuditRequest_1a8e98c4842c5b12ea89e223cdf43f21c7)`(FString NewValue)` | Sets the value of TicketId_Optional and also sets TicketId_IsSet to true.
`public inline void `[`ClearTicketId`](#structFRHAPI__CreateAuditRequest_1aabb4b486f8327532dd975262f8fcc5b3)`()` | Clears the value of TicketId_Optional and sets TicketId_IsSet to false.
`public inline TMap< FString, FString > & `[`GetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1a3089cfc2631770708d05388bdaab443c)`()` | Gets the value of AdditionalParams_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1a1d0a78a9854c9e8db1afbb712d7a9f54)`() const` | Gets the value of AdditionalParams_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1a0cd6c3b8b2c54b90c511177487692c05)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of AdditionalParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1a2621c5f0a4d2e2069c8b5c3f8cdee347)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of AdditionalParams_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetAdditionalParamsOrNull`](#structFRHAPI__CreateAuditRequest_1a2cecb612483b1b2b04a5f7500e52cd20)`()` | Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetAdditionalParamsOrNull`](#structFRHAPI__CreateAuditRequest_1a748eeb9ffaf74f9d83eaade41d894a20)`() const` | Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1ad6975c102ab5fdad9e9524ba9e243679)`(TMap< FString, FString > NewValue)` | Sets the value of AdditionalParams_Optional and also sets AdditionalParams_IsSet to true.
`public inline void `[`ClearAdditionalParams`](#structFRHAPI__CreateAuditRequest_1a55b2ec8eefed3283bed95f9afbd2b247)`()` | Clears the value of AdditionalParams_Optional and sets AdditionalParams_IsSet to false.
`public inline TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__CreateAuditRequest_1a902dc3c30894738280e9985a25592b3a)`()` | Gets the value of MapPreferences_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__CreateAuditRequest_1a5a1a5c2320d0c59abb3501c422270160)`() const` | Gets the value of MapPreferences_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__CreateAuditRequest_1aba774087427bee9eae83e1d6fad650ab)`(const TArray< FString > & DefaultValue) const` | Gets the value of MapPreferences_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMapPreferences`](#structFRHAPI__CreateAuditRequest_1a37c4fefc9ecb554e6e008a2d94cf2f51)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of MapPreferences_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__CreateAuditRequest_1a51c19b7050a706d3cd8f5a1e014e226c)`()` | Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__CreateAuditRequest_1a3d22eacd4d736e018bea7f0ce3782c42)`() const` | Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMapPreferences`](#structFRHAPI__CreateAuditRequest_1a9db5a649b5d425f11c48a74ac172d04a)`(TArray< FString > NewValue)` | Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true.
`public inline void `[`ClearMapPreferences`](#structFRHAPI__CreateAuditRequest_1a8f074dc9b8affdbefbf78306c64e52a5)`()` | Clears the value of MapPreferences_Optional and sets MapPreferences_IsSet to false.
`public inline TArray< FString > & `[`GetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1a0178eb1454a2cb61023375de420f1b04)`()` | Gets the value of QueuedSessionId_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1aef500ce4fea1d3b9b8295a42ee137cac)`() const` | Gets the value of QueuedSessionId_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1acd6f36dfb2565ef27b306b3deff4eae3)`(const TArray< FString > & DefaultValue) const` | Gets the value of QueuedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1ab3915c24c90c2a9239e3decd23f98ddb)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of QueuedSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FString > * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1ac89cb184886212621b591541baabad1f)`()` | Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FString > * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a61c8fed561398c72f86ad7bbffe66f25)`() const` | Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1a1f1aee360df79a3f41dc37f67b29ff0b)`(TArray< FString > NewValue)` | Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true.
`public inline void `[`ClearQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1af13bcc59cc707c792aa29f45d8f5c6a3)`()` | Clears the value of QueuedSessionId_Optional and sets QueuedSessionId_IsSet to false.

#### Members

#### `public FString `[`EventName`](#structFRHAPI__CreateAuditRequest_1ae34f7ce8c8b4026dac0e127a26675792) <a id="structFRHAPI__CreateAuditRequest_1ae34f7ce8c8b4026dac0e127a26675792"></a>

Name of the audit event you are creating. Customer created events will be prepended with 'customer.'.

<br>
#### `public FString `[`SessionId`](#structFRHAPI__CreateAuditRequest_1a96ea5b0bba5f6138edd463fe70754e12) <a id="structFRHAPI__CreateAuditRequest_1a96ea5b0bba5f6138edd463fe70754e12"></a>

ID of the session this event occurred in.

<br>
#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__CreateAuditRequest_1adcb02cf43f2f10325f81639c5c8f2406) <a id="structFRHAPI__CreateAuditRequest_1adcb02cf43f2f10325f81639c5c8f2406"></a>

Custom data for this audit request.

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__CreateAuditRequest_1a65dca695cd5d761a47f019c3de090c34) <a id="structFRHAPI__CreateAuditRequest_1a65dca695cd5d761a47f019c3de090c34"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public FString `[`SessionType_Optional`](#structFRHAPI__CreateAuditRequest_1ac5167ce52494f7cc9fceabe4b75c75dc) <a id="structFRHAPI__CreateAuditRequest_1ac5167ce52494f7cc9fceabe4b75c75dc"></a>

Type of the session this event occurred in.

<br>
#### `public bool `[`SessionType_IsSet`](#structFRHAPI__CreateAuditRequest_1a8d32416409395e59bf980547fbc8f1f2) <a id="structFRHAPI__CreateAuditRequest_1a8d32416409395e59bf980547fbc8f1f2"></a>

true if SessionType_Optional has been set to a value

<br>
#### `public FString `[`RegionId_Optional`](#structFRHAPI__CreateAuditRequest_1a744aaaa83eaf7c9cf646cc77541d83d3) <a id="structFRHAPI__CreateAuditRequest_1a744aaaa83eaf7c9cf646cc77541d83d3"></a>

Region ID for this event.

<br>
#### `public bool `[`RegionId_IsSet`](#structFRHAPI__CreateAuditRequest_1a4d214e0d34e156c3a2b92d2ab65fd475) <a id="structFRHAPI__CreateAuditRequest_1a4d214e0d34e156c3a2b92d2ab65fd475"></a>

true if RegionId_Optional has been set to a value

<br>
#### `public bool `[`Joinable_Optional`](#structFRHAPI__CreateAuditRequest_1a9f3304100757b064fdbd47075d7c0c55) <a id="structFRHAPI__CreateAuditRequest_1a9f3304100757b064fdbd47075d7c0c55"></a>

Whether or not the session is publicly joinable.

<br>
#### `public bool `[`Joinable_IsSet`](#structFRHAPI__CreateAuditRequest_1a259b8292d3a4ab56b356e524bea80519) <a id="structFRHAPI__CreateAuditRequest_1a259b8292d3a4ab56b356e524bea80519"></a>

true if Joinable_Optional has been set to a value

<br>
#### `public TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > `[`UpdatedTeams_Optional`](#structFRHAPI__CreateAuditRequest_1aa8d813efe40db81fda5ade9961ae3c9f) <a id="structFRHAPI__CreateAuditRequest_1aa8d813efe40db81fda5ade9961ae3c9f"></a>

Updated team numbers and sizes.

<br>
#### `public bool `[`UpdatedTeams_IsSet`](#structFRHAPI__CreateAuditRequest_1a6b5582a227f80efdb2af6f9327d1b95a) <a id="structFRHAPI__CreateAuditRequest_1a6b5582a227f80efdb2af6f9327d1b95a"></a>

true if UpdatedTeams_Optional has been set to a value

<br>
#### `public ERHAPI_InviteSource `[`Source_Optional`](#structFRHAPI__CreateAuditRequest_1a22d4a4ddfe83c8d432f57c190d104272) <a id="structFRHAPI__CreateAuditRequest_1a22d4a4ddfe83c8d432f57c190d104272"></a>

The source of an invite.

<br>
#### `public bool `[`Source_IsSet`](#structFRHAPI__CreateAuditRequest_1a83901ab582ce004b5d67bed317c63201) <a id="structFRHAPI__CreateAuditRequest_1a83901ab582ce004b5d67bed317c63201"></a>

true if Source_Optional has been set to a value

<br>
#### `public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__CreateAuditRequest_1aef8703ff5d7ef629e9247a5b3a275f1f) <a id="structFRHAPI__CreateAuditRequest_1aef8703ff5d7ef629e9247a5b3a275f1f"></a>

UUID of a specific player being effected in this event.

<br>
#### `public bool `[`PlayerUuid_IsSet`](#structFRHAPI__CreateAuditRequest_1a6d63c9c319b655d832c31aed9867d31e) <a id="structFRHAPI__CreateAuditRequest_1a6d63c9c319b655d832c31aed9867d31e"></a>

true if PlayerUuid_Optional has been set to a value

<br>
#### `public int32 `[`TeamId_Optional`](#structFRHAPI__CreateAuditRequest_1a72eae3936fd40619c9e96954a471dc1b) <a id="structFRHAPI__CreateAuditRequest_1a72eae3936fd40619c9e96954a471dc1b"></a>

ID of the team being effected in this event.

<br>
#### `public bool `[`TeamId_IsSet`](#structFRHAPI__CreateAuditRequest_1a6de1cdc9673c15ca162970cc481d3fea) <a id="structFRHAPI__CreateAuditRequest_1a6de1cdc9673c15ca162970cc481d3fea"></a>

true if TeamId_Optional has been set to a value

<br>
#### `public FString `[`InvitedSessionId_Optional`](#structFRHAPI__CreateAuditRequest_1a0fd113d1d33f120bf8060ba29aa94e76) <a id="structFRHAPI__CreateAuditRequest_1a0fd113d1d33f120bf8060ba29aa94e76"></a>

ID of the session being invited in this event.

<br>
#### `public bool `[`InvitedSessionId_IsSet`](#structFRHAPI__CreateAuditRequest_1acfaf8fdaa5f1de6131c0ff1f4a3f6bb3) <a id="structFRHAPI__CreateAuditRequest_1acfaf8fdaa5f1de6131c0ff1f4a3f6bb3"></a>

true if InvitedSessionId_Optional has been set to a value

<br>
#### `public FString `[`RemovedSessionId_Optional`](#structFRHAPI__CreateAuditRequest_1a155be9ae832737f9d919bbdd96c40221) <a id="structFRHAPI__CreateAuditRequest_1a155be9ae832737f9d919bbdd96c40221"></a>

ID of the session being removed in this event.

<br>
#### `public bool `[`RemovedSessionId_IsSet`](#structFRHAPI__CreateAuditRequest_1a9476149ebc3d770e96f76b9b7eaf13b3) <a id="structFRHAPI__CreateAuditRequest_1a9476149ebc3d770e96f76b9b7eaf13b3"></a>

true if RemovedSessionId_Optional has been set to a value

<br>
#### `public FString `[`Version_Optional`](#structFRHAPI__CreateAuditRequest_1a625d9b4048249dcda8ba4e6923e22656) <a id="structFRHAPI__CreateAuditRequest_1a625d9b4048249dcda8ba4e6923e22656"></a>

Version updated in this event.

<br>
#### `public bool `[`Version_IsSet`](#structFRHAPI__CreateAuditRequest_1a4a86632f8adbfcf8ce872a62314a7912) <a id="structFRHAPI__CreateAuditRequest_1a4a86632f8adbfcf8ce872a62314a7912"></a>

true if Version_Optional has been set to a value

<br>
#### `public `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` `[`ClientSettings_Optional`](#structFRHAPI__CreateAuditRequest_1af8355202a720d072c45922c9b0e87d83) <a id="structFRHAPI__CreateAuditRequest_1af8355202a720d072c45922c9b0e87d83"></a>

Client settings updated as part of this event.

<br>
#### `public bool `[`ClientSettings_IsSet`](#structFRHAPI__CreateAuditRequest_1a8a1a393006948116c21c6ca4196c1522) <a id="structFRHAPI__CreateAuditRequest_1a8a1a393006948116c21c6ca4196c1522"></a>

true if ClientSettings_Optional has been set to a value

<br>
#### `public `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` `[`CrossplayPreferences_Optional`](#structFRHAPI__CreateAuditRequest_1a5c575064b352dacbe6207d19c606c3ca) <a id="structFRHAPI__CreateAuditRequest_1a5c575064b352dacbe6207d19c606c3ca"></a>

Crossplay preferences updated as part of this event.

<br>
#### `public bool `[`CrossplayPreferences_IsSet`](#structFRHAPI__CreateAuditRequest_1a558741f351c43cb4d0d5d2d4b0acd216) <a id="structFRHAPI__CreateAuditRequest_1a558741f351c43cb4d0d5d2d4b0acd216"></a>

true if CrossplayPreferences_Optional has been set to a value

<br>
#### `public ERHAPI_SessionPlayerStatus `[`PlayerStatus_Optional`](#structFRHAPI__CreateAuditRequest_1ae7a0b2ca6f57a40ac73b2de6a53c99cd) <a id="structFRHAPI__CreateAuditRequest_1ae7a0b2ca6f57a40ac73b2de6a53c99cd"></a>

Player's status updated as part of this event.

<br>
#### `public bool `[`PlayerStatus_IsSet`](#structFRHAPI__CreateAuditRequest_1a6d8b775c09d21bc36b4a7ceaa40f8b8d) <a id="structFRHAPI__CreateAuditRequest_1a6d8b775c09d21bc36b4a7ceaa40f8b8d"></a>

true if PlayerStatus_Optional has been set to a value

<br>
#### `public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__CreateAuditRequest_1aaa958d58d0207abb32ab381565ce6cb1) <a id="structFRHAPI__CreateAuditRequest_1aaa958d58d0207abb32ab381565ce6cb1"></a>

Platform updated as part of this event.

<br>
#### `public bool `[`Platform_IsSet`](#structFRHAPI__CreateAuditRequest_1a8fe8f6efb8a139ab3d0ee449d6ecc61e) <a id="structFRHAPI__CreateAuditRequest_1a8fe8f6efb8a139ab3d0ee449d6ecc61e"></a>

true if Platform_Optional has been set to a value

<br>
#### `public FString `[`PlatformSessionId_Optional`](#structFRHAPI__CreateAuditRequest_1a8be4994b5b51d169bf0b90621eee4098) <a id="structFRHAPI__CreateAuditRequest_1a8be4994b5b51d169bf0b90621eee4098"></a>

ID of the platform session being effected in this event.

<br>
#### `public bool `[`PlatformSessionId_IsSet`](#structFRHAPI__CreateAuditRequest_1aea46d48487f9029cb84b1f4e41a9599f) <a id="structFRHAPI__CreateAuditRequest_1aea46d48487f9029cb84b1f4e41a9599f"></a>

true if PlatformSessionId_Optional has been set to a value

<br>
#### `public FString `[`InstanceId_Optional`](#structFRHAPI__CreateAuditRequest_1ab9dc8810646d503afe67d17e8373b7ad) <a id="structFRHAPI__CreateAuditRequest_1ab9dc8810646d503afe67d17e8373b7ad"></a>

ID of the instance being effected in this event.

<br>
#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__CreateAuditRequest_1a7185293d84a7b4f8bb6cbf5aa1519d95) <a id="structFRHAPI__CreateAuditRequest_1a7185293d84a7b4f8bb6cbf5aa1519d95"></a>

true if InstanceId_Optional has been set to a value

<br>
#### `public ERHAPI_HostType `[`HostType_Optional`](#structFRHAPI__CreateAuditRequest_1ae88cc44817501b46a12f686a36cd8fb7) <a id="structFRHAPI__CreateAuditRequest_1ae88cc44817501b46a12f686a36cd8fb7"></a>

Type of the host being effected in this event.

<br>
#### `public bool `[`HostType_IsSet`](#structFRHAPI__CreateAuditRequest_1a0de246bfc46e1e712020c71a3648a595) <a id="structFRHAPI__CreateAuditRequest_1a0de246bfc46e1e712020c71a3648a595"></a>

true if HostType_Optional has been set to a value

<br>
#### `public FGuid `[`HostPlayerUuid_Optional`](#structFRHAPI__CreateAuditRequest_1afe58bae101bca55046fe0e6974d6efa0) <a id="structFRHAPI__CreateAuditRequest_1afe58bae101bca55046fe0e6974d6efa0"></a>

UUID of the player hosting during this event.

<br>
#### `public bool `[`HostPlayerUuid_IsSet`](#structFRHAPI__CreateAuditRequest_1a87f2e34ff5eff166a7a77e17d9af82dd) <a id="structFRHAPI__CreateAuditRequest_1a87f2e34ff5eff166a7a77e17d9af82dd"></a>

true if HostPlayerUuid_Optional has been set to a value

<br>
#### `public FGuid `[`InstanceRequestTemplate_Optional`](#structFRHAPI__CreateAuditRequest_1a3e7ce81809e67c7f40e52481b39c8c54) <a id="structFRHAPI__CreateAuditRequest_1a3e7ce81809e67c7f40e52481b39c8c54"></a>

ID of the instance request template being used in this event.

<br>
#### `public bool `[`InstanceRequestTemplate_IsSet`](#structFRHAPI__CreateAuditRequest_1ae93e20acaaf87c32ce1c6c27a2367fbf) <a id="structFRHAPI__CreateAuditRequest_1ae93e20acaaf87c32ce1c6c27a2367fbf"></a>

true if InstanceRequestTemplate_Optional has been set to a value

<br>
#### `public FString `[`Map_Optional`](#structFRHAPI__CreateAuditRequest_1a4fc3f650df5a9895c375361f3c0ba46b) <a id="structFRHAPI__CreateAuditRequest_1a4fc3f650df5a9895c375361f3c0ba46b"></a>

Map being used in this event.

<br>
#### `public bool `[`Map_IsSet`](#structFRHAPI__CreateAuditRequest_1a3d678693191517d49b22dcf83851b8e3) <a id="structFRHAPI__CreateAuditRequest_1a3d678693191517d49b22dcf83851b8e3"></a>

true if Map_Optional has been set to a value

<br>
#### `public FString `[`Mode_Optional`](#structFRHAPI__CreateAuditRequest_1aa57bb3b654ccae7ea6d569c0f5a9d564) <a id="structFRHAPI__CreateAuditRequest_1aa57bb3b654ccae7ea6d569c0f5a9d564"></a>

Mode being used in this event.

<br>
#### `public bool `[`Mode_IsSet`](#structFRHAPI__CreateAuditRequest_1afb75c6dec715b5308da4e078c34f37d3) <a id="structFRHAPI__CreateAuditRequest_1afb75c6dec715b5308da4e078c34f37d3"></a>

true if Mode_Optional has been set to a value

<br>
#### `public FString `[`AllocationId_Optional`](#structFRHAPI__CreateAuditRequest_1a8de4f0ff7d678ea5cdb8c6e18c858579) <a id="structFRHAPI__CreateAuditRequest_1a8de4f0ff7d678ea5cdb8c6e18c858579"></a>

Allocation ID of instance in this event.

<br>
#### `public bool `[`AllocationId_IsSet`](#structFRHAPI__CreateAuditRequest_1ae6ce17f4e166d5ae42a2bd36540c6d23) <a id="structFRHAPI__CreateAuditRequest_1ae6ce17f4e166d5ae42a2bd36540c6d23"></a>

true if AllocationId_Optional has been set to a value

<br>
#### `public ERHAPI_InstanceJoinableStatus `[`JoinStatus_Optional`](#structFRHAPI__CreateAuditRequest_1a80d15eb2ff72db95513034689a8e5f49) <a id="structFRHAPI__CreateAuditRequest_1a80d15eb2ff72db95513034689a8e5f49"></a>

Instance's joinability status.

<br>
#### `public bool `[`JoinStatus_IsSet`](#structFRHAPI__CreateAuditRequest_1afcc5070c0d78ee8eb09fb89bce690631) <a id="structFRHAPI__CreateAuditRequest_1afcc5070c0d78ee8eb09fb89bce690631"></a>

true if JoinStatus_Optional has been set to a value

<br>
#### `public `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` `[`JoinParams_Optional`](#structFRHAPI__CreateAuditRequest_1adf0f4eb09c63e7e31ebd27f43321e295) <a id="structFRHAPI__CreateAuditRequest_1adf0f4eb09c63e7e31ebd27f43321e295"></a>

Instance's join parameters for this event.

<br>
#### `public bool `[`JoinParams_IsSet`](#structFRHAPI__CreateAuditRequest_1afae35410e3949dfa72b4c019a69f4a83) <a id="structFRHAPI__CreateAuditRequest_1afae35410e3949dfa72b4c019a69f4a83"></a>

true if JoinParams_Optional has been set to a value

<br>
#### `public ERHAPI_InstanceHealthStatus `[`InstanceHealth_Optional`](#structFRHAPI__CreateAuditRequest_1a50c92400c789c133c90ccba0971efd48) <a id="structFRHAPI__CreateAuditRequest_1a50c92400c789c133c90ccba0971efd48"></a>

Instance's health status for this event.

<br>
#### `public bool `[`InstanceHealth_IsSet`](#structFRHAPI__CreateAuditRequest_1a6098f159f074b79af45f80b3c7b29ec9) <a id="structFRHAPI__CreateAuditRequest_1a6098f159f074b79af45f80b3c7b29ec9"></a>

true if InstanceHealth_Optional has been set to a value

<br>
#### `public FString `[`QueueId_Optional`](#structFRHAPI__CreateAuditRequest_1a228dd979eccff977abf706d94c1fa674) <a id="structFRHAPI__CreateAuditRequest_1a228dd979eccff977abf706d94c1fa674"></a>

ID for the queue in this event.

<br>
#### `public bool `[`QueueId_IsSet`](#structFRHAPI__CreateAuditRequest_1ad8dee7f755eb2a525cd121ec9a38100d) <a id="structFRHAPI__CreateAuditRequest_1ad8dee7f755eb2a525cd121ec9a38100d"></a>

true if QueueId_Optional has been set to a value

<br>
#### `public TArray< FGuid > `[`Players_Optional`](#structFRHAPI__CreateAuditRequest_1abe826ab73a0dc0fe032c05e47d2ad99e) <a id="structFRHAPI__CreateAuditRequest_1abe826ab73a0dc0fe032c05e47d2ad99e"></a>

List of players uuids that were effected in this event. Each player will get a unique event.

<br>
#### `public bool `[`Players_IsSet`](#structFRHAPI__CreateAuditRequest_1a36dda49738de4ed403e47e362802bb90) <a id="structFRHAPI__CreateAuditRequest_1a36dda49738de4ed403e47e362802bb90"></a>

true if Players_Optional has been set to a value

<br>
#### `public FString `[`TicketId_Optional`](#structFRHAPI__CreateAuditRequest_1a3f8b22370629dd0c4e8d93e156b0abef) <a id="structFRHAPI__CreateAuditRequest_1a3f8b22370629dd0c4e8d93e156b0abef"></a>

Matchmaking ticket id in this event.

<br>
#### `public bool `[`TicketId_IsSet`](#structFRHAPI__CreateAuditRequest_1a2ed780530b3dc6c0cfd88806aad5a896) <a id="structFRHAPI__CreateAuditRequest_1a2ed780530b3dc6c0cfd88806aad5a896"></a>

true if TicketId_Optional has been set to a value

<br>
#### `public TMap< FString, FString > `[`AdditionalParams_Optional`](#structFRHAPI__CreateAuditRequest_1a772dc96326c1a24973dfaabfa5b9d9f7) <a id="structFRHAPI__CreateAuditRequest_1a772dc96326c1a24973dfaabfa5b9d9f7"></a>

Additional matchmaking parameters in this event.

<br>
#### `public bool `[`AdditionalParams_IsSet`](#structFRHAPI__CreateAuditRequest_1aa844253d42e5991bdc88e8f702644a49) <a id="structFRHAPI__CreateAuditRequest_1aa844253d42e5991bdc88e8f702644a49"></a>

true if AdditionalParams_Optional has been set to a value

<br>
#### `public TArray< FString > `[`MapPreferences_Optional`](#structFRHAPI__CreateAuditRequest_1ad10350cf5ce7ee4f8b9ac157f2d36693) <a id="structFRHAPI__CreateAuditRequest_1ad10350cf5ce7ee4f8b9ac157f2d36693"></a>

Map preferences in this event.

<br>
#### `public bool `[`MapPreferences_IsSet`](#structFRHAPI__CreateAuditRequest_1a7b640c1e80ac7673d7d05386bdf321bd) <a id="structFRHAPI__CreateAuditRequest_1a7b640c1e80ac7673d7d05386bdf321bd"></a>

true if MapPreferences_Optional has been set to a value

<br>
#### `public TArray< FString > `[`QueuedSessionId_Optional`](#structFRHAPI__CreateAuditRequest_1a0756b71d3ac835de39f34c9613511486) <a id="structFRHAPI__CreateAuditRequest_1a0756b71d3ac835de39f34c9613511486"></a>

ID of the session that was/is in a matchmaking queue for this event.

<br>
#### `public bool `[`QueuedSessionId_IsSet`](#structFRHAPI__CreateAuditRequest_1a13ebd2ffdd7e54c09b028608574392af) <a id="structFRHAPI__CreateAuditRequest_1a13ebd2ffdd7e54c09b028608574392af"></a>

true if QueuedSessionId_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__CreateAuditRequest_1a9c51e7e0f9ac95e95d007a8fb833d102)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__CreateAuditRequest_1a9c51e7e0f9ac95e95d007a8fb833d102"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__CreateAuditRequest_1ac696b1985f631fb86f841f9cd27cdf8a)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__CreateAuditRequest_1ac696b1985f631fb86f841f9cd27cdf8a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetEventName`](#structFRHAPI__CreateAuditRequest_1aa4a17675c2a78ca4f473cf85653116a5)`()` <a id="structFRHAPI__CreateAuditRequest_1aa4a17675c2a78ca4f473cf85653116a5"></a>

Gets the value of EventName.

<br>
#### `public inline const FString & `[`GetEventName`](#structFRHAPI__CreateAuditRequest_1a1cce8fcaaef32f855cf439c5e92be1e9)`() const` <a id="structFRHAPI__CreateAuditRequest_1a1cce8fcaaef32f855cf439c5e92be1e9"></a>

Gets the value of EventName.

<br>
#### `public inline void `[`SetEventName`](#structFRHAPI__CreateAuditRequest_1a5f8be3f4ec593fc28e48bec0c535c4d5)`(FString NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a5f8be3f4ec593fc28e48bec0c535c4d5"></a>

Sets the value of EventName.

<br>
#### `public inline FString & `[`GetSessionId`](#structFRHAPI__CreateAuditRequest_1aba561d41189351cf4ad942d29362cbf5)`()` <a id="structFRHAPI__CreateAuditRequest_1aba561d41189351cf4ad942d29362cbf5"></a>

Gets the value of SessionId.

<br>
#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__CreateAuditRequest_1a5a507d05676fecbde6db910f83b59a1e)`() const` <a id="structFRHAPI__CreateAuditRequest_1a5a507d05676fecbde6db910f83b59a1e"></a>

Gets the value of SessionId.

<br>
#### `public inline void `[`SetSessionId`](#structFRHAPI__CreateAuditRequest_1a95276458492d5d7a40851d876caa6419)`(FString NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a95276458492d5d7a40851d876caa6419"></a>

Sets the value of SessionId.

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateAuditRequest_1ac6137b5ba28de2510ca045de3b141852)`()` <a id="structFRHAPI__CreateAuditRequest_1ac6137b5ba28de2510ca045de3b141852"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateAuditRequest_1a9733c6a414ea1d08d0d72a3663959644)`() const` <a id="structFRHAPI__CreateAuditRequest_1a9733c6a414ea1d08d0d72a3663959644"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CreateAuditRequest_1a3ff8afd006df25c52fed991ee0255dbb)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a3ff8afd006df25c52fed991ee0255dbb"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__CreateAuditRequest_1afd2181839cebc1c6475d7bea33ad5cac)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1afd2181839cebc1c6475d7bea33ad5cac"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CreateAuditRequest_1abd3f2143562064e020924bba5c75e44f)`()` <a id="structFRHAPI__CreateAuditRequest_1abd3f2143562064e020924bba5c75e44f"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CreateAuditRequest_1ae02cd2af41d9a56217701954c0631b7c)`() const` <a id="structFRHAPI__CreateAuditRequest_1ae02cd2af41d9a56217701954c0631b7c"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__CreateAuditRequest_1a9162cc697e5456346893e94270c1040e)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a9162cc697e5456346893e94270c1040e"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__CreateAuditRequest_1a7133cb0e9ac9b3e7655c25af45943313)`()` <a id="structFRHAPI__CreateAuditRequest_1a7133cb0e9ac9b3e7655c25af45943313"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
#### `public inline FString & `[`GetSessionType`](#structFRHAPI__CreateAuditRequest_1a9218ec8cf293e0ce9f0bf36af7805124)`()` <a id="structFRHAPI__CreateAuditRequest_1a9218ec8cf293e0ce9f0bf36af7805124"></a>

Gets the value of SessionType_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetSessionType`](#structFRHAPI__CreateAuditRequest_1a970ad500cb6d926c026598fd94ae38ba)`() const` <a id="structFRHAPI__CreateAuditRequest_1a970ad500cb6d926c026598fd94ae38ba"></a>

Gets the value of SessionType_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetSessionType`](#structFRHAPI__CreateAuditRequest_1aea5a295a2993a6836ec53775f5f5e342)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1aea5a295a2993a6836ec53775f5f5e342"></a>

Gets the value of SessionType_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSessionType`](#structFRHAPI__CreateAuditRequest_1a09d309e2cc5ae94783d0fa64806f1dbb)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a09d309e2cc5ae94783d0fa64806f1dbb"></a>

Fills OutValue with the value of SessionType_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetSessionTypeOrNull`](#structFRHAPI__CreateAuditRequest_1a097874c7e1f1692247a30360e3a3d125)`()` <a id="structFRHAPI__CreateAuditRequest_1a097874c7e1f1692247a30360e3a3d125"></a>

Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetSessionTypeOrNull`](#structFRHAPI__CreateAuditRequest_1ab5325a614e2c05e08fff50fa7160dde0)`() const` <a id="structFRHAPI__CreateAuditRequest_1ab5325a614e2c05e08fff50fa7160dde0"></a>

Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSessionType`](#structFRHAPI__CreateAuditRequest_1a6e8447766dc9976ffa82e42f38abef4a)`(FString NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a6e8447766dc9976ffa82e42f38abef4a"></a>

Sets the value of SessionType_Optional and also sets SessionType_IsSet to true.

<br>
#### `public inline void `[`ClearSessionType`](#structFRHAPI__CreateAuditRequest_1a0c8c5695ea72a10ca77f647277460c2e)`()` <a id="structFRHAPI__CreateAuditRequest_1a0c8c5695ea72a10ca77f647277460c2e"></a>

Clears the value of SessionType_Optional and sets SessionType_IsSet to false.

<br>
#### `public inline FString & `[`GetRegionId`](#structFRHAPI__CreateAuditRequest_1af1da4e53404bafa4f1f2b5311621bcdb)`()` <a id="structFRHAPI__CreateAuditRequest_1af1da4e53404bafa4f1f2b5311621bcdb"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__CreateAuditRequest_1ac7ed84695e109fc1da51e0869ca7f4ee)`() const` <a id="structFRHAPI__CreateAuditRequest_1ac7ed84695e109fc1da51e0869ca7f4ee"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__CreateAuditRequest_1ac30babb068319967bb336e60f28904f1)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1ac30babb068319967bb336e60f28904f1"></a>

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetRegionId`](#structFRHAPI__CreateAuditRequest_1a2a2ecd3fb1ef53a481e2188ba4ffd09a)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a2a2ecd3fb1ef53a481e2188ba4ffd09a"></a>

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a17d62bb45ec482bfe76a888791f0aeae)`()` <a id="structFRHAPI__CreateAuditRequest_1a17d62bb45ec482bfe76a888791f0aeae"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__CreateAuditRequest_1add96a66f20a5f90b5c1505c477b5b920)`() const` <a id="structFRHAPI__CreateAuditRequest_1add96a66f20a5f90b5c1505c477b5b920"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetRegionId`](#structFRHAPI__CreateAuditRequest_1afbcb12f21df742d6b56677eaea40da74)`(FString NewValue)` <a id="structFRHAPI__CreateAuditRequest_1afbcb12f21df742d6b56677eaea40da74"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.

<br>
#### `public inline void `[`ClearRegionId`](#structFRHAPI__CreateAuditRequest_1a14abaecf3f777b3b40a01a6c5451dcda)`()` <a id="structFRHAPI__CreateAuditRequest_1a14abaecf3f777b3b40a01a6c5451dcda"></a>

Clears the value of RegionId_Optional and sets RegionId_IsSet to false.

<br>
#### `public inline bool & `[`GetJoinable`](#structFRHAPI__CreateAuditRequest_1a243d38c015894effb67798462ea7129e)`()` <a id="structFRHAPI__CreateAuditRequest_1a243d38c015894effb67798462ea7129e"></a>

Gets the value of Joinable_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetJoinable`](#structFRHAPI__CreateAuditRequest_1ab6db17e5cd994ab18c793d13b3034e07)`() const` <a id="structFRHAPI__CreateAuditRequest_1ab6db17e5cd994ab18c793d13b3034e07"></a>

Gets the value of Joinable_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetJoinable`](#structFRHAPI__CreateAuditRequest_1aa19765b5a672ebd5a8110ae1d5745227)`(const bool & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1aa19765b5a672ebd5a8110ae1d5745227"></a>

Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetJoinable`](#structFRHAPI__CreateAuditRequest_1ae9e66299e97761bbe1504eb82639ba15)`(bool & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1ae9e66299e97761bbe1504eb82639ba15"></a>

Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline bool * `[`GetJoinableOrNull`](#structFRHAPI__CreateAuditRequest_1a5aea8b739e9b252223e3d6a4f3f6dbec)`()` <a id="structFRHAPI__CreateAuditRequest_1a5aea8b739e9b252223e3d6a4f3f6dbec"></a>

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const bool * `[`GetJoinableOrNull`](#structFRHAPI__CreateAuditRequest_1a094523a60e8d8ea591edd5853a66b1e9)`() const` <a id="structFRHAPI__CreateAuditRequest_1a094523a60e8d8ea591edd5853a66b1e9"></a>

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetJoinable`](#structFRHAPI__CreateAuditRequest_1a6ca5ef60d0d3271bc4d35faca36ab06a)`(bool NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a6ca5ef60d0d3271bc4d35faca36ab06a"></a>

Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.

<br>
#### `public inline void `[`ClearJoinable`](#structFRHAPI__CreateAuditRequest_1a0ac0cef2dbb03a224cad1ff1fc91f775)`()` <a id="structFRHAPI__CreateAuditRequest_1a0ac0cef2dbb03a224cad1ff1fc91f775"></a>

Clears the value of Joinable_Optional and sets Joinable_IsSet to false.

<br>
#### `public inline bool `[`IsJoinableDefaultValue`](#structFRHAPI__CreateAuditRequest_1a403d50e31135af836820d6c44669de4f)`() const` <a id="structFRHAPI__CreateAuditRequest_1a403d50e31135af836820d6c44669de4f"></a>

Returns true if Joinable_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetJoinableToDefault`](#structFRHAPI__CreateAuditRequest_1a762a5ecf56a2621c55720c43737baa22)`()` <a id="structFRHAPI__CreateAuditRequest_1a762a5ecf56a2621c55720c43737baa22"></a>

Sets the value of Joinable_Optional to its default and also sets Joinable_IsSet to true.

<br>
#### `public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1a4d6952f7634bf91d7a3c9fa5bddf563f)`()` <a id="structFRHAPI__CreateAuditRequest_1a4d6952f7634bf91d7a3c9fa5bddf563f"></a>

Gets the value of UpdatedTeams_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1a488f20bd6923d163d9e16cbe5b10a2fa)`() const` <a id="structFRHAPI__CreateAuditRequest_1a488f20bd6923d163d9e16cbe5b10a2fa"></a>

Gets the value of UpdatedTeams_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1a1ba68ecc5d31bc68151760fcf4e14f16)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a1ba68ecc5d31bc68151760fcf4e14f16"></a>

Gets the value of UpdatedTeams_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1afb1d34fa2fc6857aa5b3880894776bee)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1afb1d34fa2fc6857aa5b3880894776bee"></a>

Fills OutValue with the value of UpdatedTeams_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__CreateAuditRequest_1aff529874fda15e1ccc0c33b4a08b6cba)`()` <a id="structFRHAPI__CreateAuditRequest_1aff529874fda15e1ccc0c33b4a08b6cba"></a>

Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__CreateAuditRequest_1a7b9a98caad106c4f21f96476c7c32536)`() const` <a id="structFRHAPI__CreateAuditRequest_1a7b9a98caad106c4f21f96476c7c32536"></a>

Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1a0c569c7ad990ed7092a2f695a4011da8)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a0c569c7ad990ed7092a2f695a4011da8"></a>

Sets the value of UpdatedTeams_Optional and also sets UpdatedTeams_IsSet to true.

<br>
#### `public inline void `[`ClearUpdatedTeams`](#structFRHAPI__CreateAuditRequest_1aa746bed0b171151c8a5aec6a7ae86416)`()` <a id="structFRHAPI__CreateAuditRequest_1aa746bed0b171151c8a5aec6a7ae86416"></a>

Clears the value of UpdatedTeams_Optional and sets UpdatedTeams_IsSet to false.

<br>
#### `public inline ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__CreateAuditRequest_1aa1194afecd9f486ee7109a69bbadd7a3)`()` <a id="structFRHAPI__CreateAuditRequest_1aa1194afecd9f486ee7109a69bbadd7a3"></a>

Gets the value of Source_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__CreateAuditRequest_1a34b36583a67f98ec61d9b29e13bd9c09)`() const` <a id="structFRHAPI__CreateAuditRequest_1a34b36583a67f98ec61d9b29e13bd9c09"></a>

Gets the value of Source_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__CreateAuditRequest_1af3b3dd1646f99d5eef729beeae8f7661)`(const ERHAPI_InviteSource & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1af3b3dd1646f99d5eef729beeae8f7661"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSource`](#structFRHAPI__CreateAuditRequest_1a807edcef33ddade2e8b0e7e296541ba0)`(ERHAPI_InviteSource & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a807edcef33ddade2e8b0e7e296541ba0"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__CreateAuditRequest_1acf4f38472375fd7081911aa09c005ded)`()` <a id="structFRHAPI__CreateAuditRequest_1acf4f38472375fd7081911aa09c005ded"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__CreateAuditRequest_1a970bb9e57efdcd0ab0661e35770c4c85)`() const` <a id="structFRHAPI__CreateAuditRequest_1a970bb9e57efdcd0ab0661e35770c4c85"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSource`](#structFRHAPI__CreateAuditRequest_1acd4ca55cb815589f9a6d11105356c63f)`(ERHAPI_InviteSource NewValue)` <a id="structFRHAPI__CreateAuditRequest_1acd4ca55cb815589f9a6d11105356c63f"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

<br>
#### `public inline void `[`ClearSource`](#structFRHAPI__CreateAuditRequest_1a25d9609c33c16ac066005e2f25199298)`()` <a id="structFRHAPI__CreateAuditRequest_1a25d9609c33c16ac066005e2f25199298"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

<br>
#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1adefdeaffad65938aa37b7252bccc5532)`()` <a id="structFRHAPI__CreateAuditRequest_1adefdeaffad65938aa37b7252bccc5532"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a6a8b020176dc5ab02096f074c779e966)`() const` <a id="structFRHAPI__CreateAuditRequest_1a6a8b020176dc5ab02096f074c779e966"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a1cdd31cd3d1fa5da4366e8d097a2467f)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a1cdd31cd3d1fa5da4366e8d097a2467f"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a859fa7f16137cf84a56ca18ff42e186b)`(FGuid & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a859fa7f16137cf84a56ca18ff42e186b"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__CreateAuditRequest_1a7ffdd7c35b2a7e1062748e3285d53057)`()` <a id="structFRHAPI__CreateAuditRequest_1a7ffdd7c35b2a7e1062748e3285d53057"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__CreateAuditRequest_1a8d3fc12f560f2e199db5c2c154081de7)`() const` <a id="structFRHAPI__CreateAuditRequest_1a8d3fc12f560f2e199db5c2c154081de7"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a50028e4cc4f20e2fe5ffa5c905a2d3ab)`(FGuid NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a50028e4cc4f20e2fe5ffa5c905a2d3ab"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

<br>
#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a0956a708f854855adca4bfa696c69bb1)`()` <a id="structFRHAPI__CreateAuditRequest_1a0956a708f854855adca4bfa696c69bb1"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

<br>
#### `public inline int32 & `[`GetTeamId`](#structFRHAPI__CreateAuditRequest_1a579d70fafc7f484d339f87e5c007a080)`()` <a id="structFRHAPI__CreateAuditRequest_1a579d70fafc7f484d339f87e5c007a080"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__CreateAuditRequest_1ae785284adc8c85a8169ee70713d2f3fb)`() const` <a id="structFRHAPI__CreateAuditRequest_1ae785284adc8c85a8169ee70713d2f3fb"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__CreateAuditRequest_1aa95403e1734d32228b242342914c7b70)`(const int32 & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1aa95403e1734d32228b242342914c7b70"></a>

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetTeamId`](#structFRHAPI__CreateAuditRequest_1aae1fea2ab5fce15c8b7c435b3ed11be1)`(int32 & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1aae1fea2ab5fce15c8b7c435b3ed11be1"></a>

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetTeamIdOrNull`](#structFRHAPI__CreateAuditRequest_1a2373a30e1e89112f2e48f541befc2760)`()` <a id="structFRHAPI__CreateAuditRequest_1a2373a30e1e89112f2e48f541befc2760"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__CreateAuditRequest_1a1afe4945518f3bf32072ed9ab12b4d6c)`() const` <a id="structFRHAPI__CreateAuditRequest_1a1afe4945518f3bf32072ed9ab12b4d6c"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetTeamId`](#structFRHAPI__CreateAuditRequest_1a89aece8ba7dcb226d5dfe9505e6c2cdc)`(int32 NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a89aece8ba7dcb226d5dfe9505e6c2cdc"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.

<br>
#### `public inline void `[`ClearTeamId`](#structFRHAPI__CreateAuditRequest_1aa9a5d8c6979465a0cedcc8d92c1e7339)`()` <a id="structFRHAPI__CreateAuditRequest_1aa9a5d8c6979465a0cedcc8d92c1e7339"></a>

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.

<br>
#### `public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__CreateAuditRequest_1a92d110f8e76830b8e09d2130d944375c)`() const` <a id="structFRHAPI__CreateAuditRequest_1a92d110f8e76830b8e09d2130d944375c"></a>

Returns true if TeamId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetTeamIdToDefault`](#structFRHAPI__CreateAuditRequest_1a14a28726fafe414c46eaa6ef272c1c59)`()` <a id="structFRHAPI__CreateAuditRequest_1a14a28726fafe414c46eaa6ef272c1c59"></a>

Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.

<br>
#### `public inline FString & `[`GetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1a9248040d6c461ab6c1d1a8e7db6a4165)`()` <a id="structFRHAPI__CreateAuditRequest_1a9248040d6c461ab6c1d1a8e7db6a4165"></a>

Gets the value of InvitedSessionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1a508c22251f7b27c5ebbbe8ae28503f7d)`() const` <a id="structFRHAPI__CreateAuditRequest_1a508c22251f7b27c5ebbbe8ae28503f7d"></a>

Gets the value of InvitedSessionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1a341d4319e62fdadcad69f5b2f723e0d8)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a341d4319e62fdadcad69f5b2f723e0d8"></a>

Gets the value of InvitedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1ac1bc7812e39f92561a6cb739e7631b0e)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1ac1bc7812e39f92561a6cb739e7631b0e"></a>

Fills OutValue with the value of InvitedSessionId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a53fddf64952a6026ac364a6d3e0cced4)`()` <a id="structFRHAPI__CreateAuditRequest_1a53fddf64952a6026ac364a6d3e0cced4"></a>

Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a65ca6e11759404ffcdebca430d239e89)`() const` <a id="structFRHAPI__CreateAuditRequest_1a65ca6e11759404ffcdebca430d239e89"></a>

Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1ace97b4c6fba19c6794f50f844f288182)`(FString NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ace97b4c6fba19c6794f50f844f288182"></a>

Sets the value of InvitedSessionId_Optional and also sets InvitedSessionId_IsSet to true.

<br>
#### `public inline void `[`ClearInvitedSessionId`](#structFRHAPI__CreateAuditRequest_1a003fbcbcc014ab71c196030852972989)`()` <a id="structFRHAPI__CreateAuditRequest_1a003fbcbcc014ab71c196030852972989"></a>

Clears the value of InvitedSessionId_Optional and sets InvitedSessionId_IsSet to false.

<br>
#### `public inline FString & `[`GetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1ab8661f081341eccc06a65dca7803c75b)`()` <a id="structFRHAPI__CreateAuditRequest_1ab8661f081341eccc06a65dca7803c75b"></a>

Gets the value of RemovedSessionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1a183ccfad9cf63ff0ffa5428f349e6b95)`() const` <a id="structFRHAPI__CreateAuditRequest_1a183ccfad9cf63ff0ffa5428f349e6b95"></a>

Gets the value of RemovedSessionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1a940b04794cf359663f7e1b918a31a449)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a940b04794cf359663f7e1b918a31a449"></a>

Gets the value of RemovedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1ad07e2414b0341608d76cc096200463ac)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1ad07e2414b0341608d76cc096200463ac"></a>

Fills OutValue with the value of RemovedSessionId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1ae6bb89338cbd17f8f015bd23083a3318)`()` <a id="structFRHAPI__CreateAuditRequest_1ae6bb89338cbd17f8f015bd23083a3318"></a>

Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1abcde1d6f922741cc9409b14ab062c17a)`() const` <a id="structFRHAPI__CreateAuditRequest_1abcde1d6f922741cc9409b14ab062c17a"></a>

Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1a2107cba684db0be28e0ff7e900cb3eeb)`(FString NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a2107cba684db0be28e0ff7e900cb3eeb"></a>

Sets the value of RemovedSessionId_Optional and also sets RemovedSessionId_IsSet to true.

<br>
#### `public inline void `[`ClearRemovedSessionId`](#structFRHAPI__CreateAuditRequest_1a0ba952c57b0beb6e05103932a1736217)`()` <a id="structFRHAPI__CreateAuditRequest_1a0ba952c57b0beb6e05103932a1736217"></a>

Clears the value of RemovedSessionId_Optional and sets RemovedSessionId_IsSet to false.

<br>
#### `public inline FString & `[`GetVersion`](#structFRHAPI__CreateAuditRequest_1a5fef9221eb6635ca453b3699eef1c92f)`()` <a id="structFRHAPI__CreateAuditRequest_1a5fef9221eb6635ca453b3699eef1c92f"></a>

Gets the value of Version_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetVersion`](#structFRHAPI__CreateAuditRequest_1a57db100f53e691d715e2d4966fdb6763)`() const` <a id="structFRHAPI__CreateAuditRequest_1a57db100f53e691d715e2d4966fdb6763"></a>

Gets the value of Version_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetVersion`](#structFRHAPI__CreateAuditRequest_1af3837152324ba9b649a3b358843591c7)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1af3837152324ba9b649a3b358843591c7"></a>

Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetVersion`](#structFRHAPI__CreateAuditRequest_1a45ac7be38700622875542395b7e8beaa)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a45ac7be38700622875542395b7e8beaa"></a>

Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetVersionOrNull`](#structFRHAPI__CreateAuditRequest_1abe1c8ef36f2725aa6ab59bc25eb95704)`()` <a id="structFRHAPI__CreateAuditRequest_1abe1c8ef36f2725aa6ab59bc25eb95704"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetVersionOrNull`](#structFRHAPI__CreateAuditRequest_1a011ecc85cef6ea65971b2e5e91131517)`() const` <a id="structFRHAPI__CreateAuditRequest_1a011ecc85cef6ea65971b2e5e91131517"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetVersion`](#structFRHAPI__CreateAuditRequest_1a55a17bdd908e45877b5765d99736749f)`(FString NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a55a17bdd908e45877b5765d99736749f"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true.

<br>
#### `public inline void `[`ClearVersion`](#structFRHAPI__CreateAuditRequest_1a22db967094d806cfbb1c530cb7c0ce2b)`()` <a id="structFRHAPI__CreateAuditRequest_1a22db967094d806cfbb1c530cb7c0ce2b"></a>

Clears the value of Version_Optional and sets Version_IsSet to false.

<br>
#### `public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateAuditRequest_1a38821330e36f12ec8fe21680be4efeca)`()` <a id="structFRHAPI__CreateAuditRequest_1a38821330e36f12ec8fe21680be4efeca"></a>

Gets the value of ClientSettings_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateAuditRequest_1a8286b54e233974fe784ea0d96b5ce14c)`() const` <a id="structFRHAPI__CreateAuditRequest_1a8286b54e233974fe784ea0d96b5ce14c"></a>

Gets the value of ClientSettings_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CreateAuditRequest_1aefb0576317289cd2ddc1d0d14660a297)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1aefb0576317289cd2ddc1d0d14660a297"></a>

Gets the value of ClientSettings_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetClientSettings`](#structFRHAPI__CreateAuditRequest_1a2159929fa77e4bd44c374828c5d5c5f6)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a2159929fa77e4bd44c374828c5d5c5f6"></a>

Fills OutValue with the value of ClientSettings_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__CreateAuditRequest_1af399f1da1bdbde13bfe2110f3b65c89d)`()` <a id="structFRHAPI__CreateAuditRequest_1af399f1da1bdbde13bfe2110f3b65c89d"></a>

Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__CreateAuditRequest_1a1e1bb889d7d60d9dd6f2edc0007663fb)`() const` <a id="structFRHAPI__CreateAuditRequest_1a1e1bb889d7d60d9dd6f2edc0007663fb"></a>

Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetClientSettings`](#structFRHAPI__CreateAuditRequest_1ac12c3f96b5df01fe52face75258959e5)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ac12c3f96b5df01fe52face75258959e5"></a>

Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true.

<br>
#### `public inline void `[`ClearClientSettings`](#structFRHAPI__CreateAuditRequest_1a3e934aa4d91799c86b881ee72ac33d90)`()` <a id="structFRHAPI__CreateAuditRequest_1a3e934aa4d91799c86b881ee72ac33d90"></a>

Clears the value of ClientSettings_Optional and sets ClientSettings_IsSet to false.

<br>
#### `public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1a8b2d5ff52498e5691c9a900dbfe69305)`()` <a id="structFRHAPI__CreateAuditRequest_1a8b2d5ff52498e5691c9a900dbfe69305"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1a66e4b0cdd47e06bbfbc042423f4a375d)`() const` <a id="structFRHAPI__CreateAuditRequest_1a66e4b0cdd47e06bbfbc042423f4a375d"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1a5503fa32c71f79466327c6a7876a194b)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a5503fa32c71f79466327c6a7876a194b"></a>

Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1ad0f274b4a55c1a6b0fdc3374895a64b8)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1ad0f274b4a55c1a6b0fdc3374895a64b8"></a>

Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CreateAuditRequest_1abe502e4fc52955e2a407d795c33e5731)`()` <a id="structFRHAPI__CreateAuditRequest_1abe502e4fc52955e2a407d795c33e5731"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CreateAuditRequest_1afd75a3fc3fd2aa49cee7bbe526d83f7c)`() const` <a id="structFRHAPI__CreateAuditRequest_1afd75a3fc3fd2aa49cee7bbe526d83f7c"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1a0fc19ebafb1aec77347166b820ba3f08)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a0fc19ebafb1aec77347166b820ba3f08"></a>

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.

<br>
#### `public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__CreateAuditRequest_1ab104c0b6b379b56cfad6bf75bc9a2c92)`()` <a id="structFRHAPI__CreateAuditRequest_1ab104c0b6b379b56cfad6bf75bc9a2c92"></a>

Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.

<br>
#### `public inline ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1ad0307b9c2f45c6cd65fd8b3fc795e02c)`()` <a id="structFRHAPI__CreateAuditRequest_1ad0307b9c2f45c6cd65fd8b3fc795e02c"></a>

Gets the value of PlayerStatus_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1a41c2bb0397d84c67d3053cf76786cf44)`() const` <a id="structFRHAPI__CreateAuditRequest_1a41c2bb0397d84c67d3053cf76786cf44"></a>

Gets the value of PlayerStatus_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1ae653ef4d4f159f034f2e23a9eb2a608b)`(const ERHAPI_SessionPlayerStatus & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1ae653ef4d4f159f034f2e23a9eb2a608b"></a>

Gets the value of PlayerStatus_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1a336bd58fc8d4b87020cf0b362ce134cc)`(ERHAPI_SessionPlayerStatus & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a336bd58fc8d4b87020cf0b362ce134cc"></a>

Fills OutValue with the value of PlayerStatus_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__CreateAuditRequest_1aed433034066ec57e97931fd2b82db96c)`()` <a id="structFRHAPI__CreateAuditRequest_1aed433034066ec57e97931fd2b82db96c"></a>

Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__CreateAuditRequest_1aacbf52dd96e0afdddd57e4debd301a08)`() const` <a id="structFRHAPI__CreateAuditRequest_1aacbf52dd96e0afdddd57e4debd301a08"></a>

Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPlayerStatus`](#structFRHAPI__CreateAuditRequest_1aee91317460129fde6a983abd5a96b448)`(ERHAPI_SessionPlayerStatus NewValue)` <a id="structFRHAPI__CreateAuditRequest_1aee91317460129fde6a983abd5a96b448"></a>

Sets the value of PlayerStatus_Optional and also sets PlayerStatus_IsSet to true.

<br>
#### `public inline void `[`ClearPlayerStatus`](#structFRHAPI__CreateAuditRequest_1ae86a75654a5952dcc1813e446ad45184)`()` <a id="structFRHAPI__CreateAuditRequest_1ae86a75654a5952dcc1813e446ad45184"></a>

Clears the value of PlayerStatus_Optional and sets PlayerStatus_IsSet to false.

<br>
#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateAuditRequest_1a5d3cb2711fbde1e3592e242c444aa1d7)`()` <a id="structFRHAPI__CreateAuditRequest_1a5d3cb2711fbde1e3592e242c444aa1d7"></a>

Gets the value of Platform_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateAuditRequest_1ad585ef4f88c1cdd8b34db52851d4402c)`() const` <a id="structFRHAPI__CreateAuditRequest_1ad585ef4f88c1cdd8b34db52851d4402c"></a>

Gets the value of Platform_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateAuditRequest_1ade6f622d599128c2adcba29985f03c16)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1ade6f622d599128c2adcba29985f03c16"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPlatform`](#structFRHAPI__CreateAuditRequest_1afee614de8a25e8721f63b903f32bf50c)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1afee614de8a25e8721f63b903f32bf50c"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__CreateAuditRequest_1a05da64e2dbc3f2270c8e5aa56ae4e9ea)`()` <a id="structFRHAPI__CreateAuditRequest_1a05da64e2dbc3f2270c8e5aa56ae4e9ea"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__CreateAuditRequest_1ad8e7ce0aa9dead8ff8f129a5a4cdc308)`() const` <a id="structFRHAPI__CreateAuditRequest_1ad8e7ce0aa9dead8ff8f129a5a4cdc308"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPlatform`](#structFRHAPI__CreateAuditRequest_1a37c1731caa623ef5a07a869fc1304b5b)`(ERHAPI_Platform NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a37c1731caa623ef5a07a869fc1304b5b"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

<br>
#### `public inline void `[`ClearPlatform`](#structFRHAPI__CreateAuditRequest_1a9294795dd22e58391495a5820047116e)`()` <a id="structFRHAPI__CreateAuditRequest_1a9294795dd22e58391495a5820047116e"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

<br>
#### `public inline FString & `[`GetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1af24d5a4f8aa0bc4494fbc0ecce6dbba7)`()` <a id="structFRHAPI__CreateAuditRequest_1af24d5a4f8aa0bc4494fbc0ecce6dbba7"></a>

Gets the value of PlatformSessionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1a5916caec1bec77ea0511c182d85a7012)`() const` <a id="structFRHAPI__CreateAuditRequest_1a5916caec1bec77ea0511c182d85a7012"></a>

Gets the value of PlatformSessionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1a01c49169f038007f7f16623bae749de3)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a01c49169f038007f7f16623bae749de3"></a>

Gets the value of PlatformSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1af73bf1bb1704f497d2eca0f00d6c474c)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1af73bf1bb1704f497d2eca0f00d6c474c"></a>

Fills OutValue with the value of PlatformSessionId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1ad88e5964500582110862dee8e0dc0e16)`()` <a id="structFRHAPI__CreateAuditRequest_1ad88e5964500582110862dee8e0dc0e16"></a>

Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1abc954ea54b1b97266f97f7df76dbf058)`() const` <a id="structFRHAPI__CreateAuditRequest_1abc954ea54b1b97266f97f7df76dbf058"></a>

Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1a6a3055383b4d3dc0407d5843f0e07be8)`(FString NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a6a3055383b4d3dc0407d5843f0e07be8"></a>

Sets the value of PlatformSessionId_Optional and also sets PlatformSessionId_IsSet to true.

<br>
#### `public inline void `[`ClearPlatformSessionId`](#structFRHAPI__CreateAuditRequest_1a6dd45a5ba092f17721dd818e1e41828c)`()` <a id="structFRHAPI__CreateAuditRequest_1a6dd45a5ba092f17721dd818e1e41828c"></a>

Clears the value of PlatformSessionId_Optional and sets PlatformSessionId_IsSet to false.

<br>
#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__CreateAuditRequest_1a9e45185ecccb614936183a22d88c3774)`()` <a id="structFRHAPI__CreateAuditRequest_1a9e45185ecccb614936183a22d88c3774"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__CreateAuditRequest_1a89548b388ce8c37ab4539848f2d433dd)`() const` <a id="structFRHAPI__CreateAuditRequest_1a89548b388ce8c37ab4539848f2d433dd"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__CreateAuditRequest_1acb61202419812b1b09c297bed977a633)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1acb61202419812b1b09c297bed977a633"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInstanceId`](#structFRHAPI__CreateAuditRequest_1a7cd6ef071095030ec44d5d7e8cf9e358)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a7cd6ef071095030ec44d5d7e8cf9e358"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__CreateAuditRequest_1a8a0a8463d4194f8423540a50955a8ebe)`()` <a id="structFRHAPI__CreateAuditRequest_1a8a0a8463d4194f8423540a50955a8ebe"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__CreateAuditRequest_1a8ee9910ce7fd720c25be0122a2ac06cd)`() const` <a id="structFRHAPI__CreateAuditRequest_1a8ee9910ce7fd720c25be0122a2ac06cd"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInstanceId`](#structFRHAPI__CreateAuditRequest_1a92cc046a05c4f664f1af6cddfe1a3a53)`(FString NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a92cc046a05c4f664f1af6cddfe1a3a53"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

<br>
#### `public inline void `[`ClearInstanceId`](#structFRHAPI__CreateAuditRequest_1a803e29cff308198839171d53385e9c6f)`()` <a id="structFRHAPI__CreateAuditRequest_1a803e29cff308198839171d53385e9c6f"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

<br>
#### `public inline ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__CreateAuditRequest_1a9179fc83d868afdbd75ce2c5936a15e5)`()` <a id="structFRHAPI__CreateAuditRequest_1a9179fc83d868afdbd75ce2c5936a15e5"></a>

Gets the value of HostType_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__CreateAuditRequest_1a04ec106a17dc41317181cb5b3df18192)`() const` <a id="structFRHAPI__CreateAuditRequest_1a04ec106a17dc41317181cb5b3df18192"></a>

Gets the value of HostType_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__CreateAuditRequest_1a63090b940925d956074bd1e24f860a2a)`(const ERHAPI_HostType & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a63090b940925d956074bd1e24f860a2a"></a>

Gets the value of HostType_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetHostType`](#structFRHAPI__CreateAuditRequest_1aeefdb1869f7f1a64e9c591f10c043d8d)`(ERHAPI_HostType & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1aeefdb1869f7f1a64e9c591f10c043d8d"></a>

Fills OutValue with the value of HostType_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__CreateAuditRequest_1a9c6f29da194be906bf54442aa77d1b68)`()` <a id="structFRHAPI__CreateAuditRequest_1a9c6f29da194be906bf54442aa77d1b68"></a>

Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__CreateAuditRequest_1ab42fe054f9c58c57cbd3d4511b1eaae5)`() const` <a id="structFRHAPI__CreateAuditRequest_1ab42fe054f9c58c57cbd3d4511b1eaae5"></a>

Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetHostType`](#structFRHAPI__CreateAuditRequest_1aaf737afa3e0e3ecc66c5459ccbf7c7ff)`(ERHAPI_HostType NewValue)` <a id="structFRHAPI__CreateAuditRequest_1aaf737afa3e0e3ecc66c5459ccbf7c7ff"></a>

Sets the value of HostType_Optional and also sets HostType_IsSet to true.

<br>
#### `public inline void `[`ClearHostType`](#structFRHAPI__CreateAuditRequest_1ac6e3e2d5e89bb9b51f01198c08689a74)`()` <a id="structFRHAPI__CreateAuditRequest_1ac6e3e2d5e89bb9b51f01198c08689a74"></a>

Clears the value of HostType_Optional and sets HostType_IsSet to false.

<br>
#### `public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a27a63653797661a4da35f0d9437eb934)`()` <a id="structFRHAPI__CreateAuditRequest_1a27a63653797661a4da35f0d9437eb934"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1aada9003799f55435ee2ad6e84d09a6da)`() const` <a id="structFRHAPI__CreateAuditRequest_1aada9003799f55435ee2ad6e84d09a6da"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1af8a1a143a5830e4a42c9fd065a9ed667)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1af8a1a143a5830e4a42c9fd065a9ed667"></a>

Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1acf14c3e6b339b6b395fb0b9978deb2ea)`(FGuid & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1acf14c3e6b339b6b395fb0b9978deb2ea"></a>

Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__CreateAuditRequest_1a841ef9816d9d68b744f154cfeaa307a3)`()` <a id="structFRHAPI__CreateAuditRequest_1a841ef9816d9d68b744f154cfeaa307a3"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__CreateAuditRequest_1ac64b8cbf9c8451e82af2a2c47997cf30)`() const` <a id="structFRHAPI__CreateAuditRequest_1ac64b8cbf9c8451e82af2a2c47997cf30"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1ae93419029383eaad5b65c0bc391ff3af)`(FGuid NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ae93419029383eaad5b65c0bc391ff3af"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.

<br>
#### `public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__CreateAuditRequest_1a348e2be106677dc4e989c1255f11894c)`()` <a id="structFRHAPI__CreateAuditRequest_1a348e2be106677dc4e989c1255f11894c"></a>

Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.

<br>
#### `public inline FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a065e479a886baef9e48f98d6a38c2857)`()` <a id="structFRHAPI__CreateAuditRequest_1a065e479a886baef9e48f98d6a38c2857"></a>

Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a968674d2c82946528400646b4bbb7ab1)`() const` <a id="structFRHAPI__CreateAuditRequest_1a968674d2c82946528400646b4bbb7ab1"></a>

Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a8f1c65ff91ca271f43d87cbc0f753773)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a8f1c65ff91ca271f43d87cbc0f753773"></a>

Gets the value of InstanceRequestTemplate_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1ae16409d611b20fdd15b53ec98a22910c)`(FGuid & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1ae16409d611b20fdd15b53ec98a22910c"></a>

Fills OutValue with the value of InstanceRequestTemplate_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__CreateAuditRequest_1ad4a18d50d62e9ea32cbed5513ddd201c)`()` <a id="structFRHAPI__CreateAuditRequest_1ad4a18d50d62e9ea32cbed5513ddd201c"></a>

Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__CreateAuditRequest_1a33ce07e5eda5ed4c07824e3bd45834e7)`() const` <a id="structFRHAPI__CreateAuditRequest_1a33ce07e5eda5ed4c07824e3bd45834e7"></a>

Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1ad008b333785e9101f8cb3b7bfde3f9af)`(FGuid NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ad008b333785e9101f8cb3b7bfde3f9af"></a>

Sets the value of InstanceRequestTemplate_Optional and also sets InstanceRequestTemplate_IsSet to true.

<br>
#### `public inline void `[`ClearInstanceRequestTemplate`](#structFRHAPI__CreateAuditRequest_1a2381105fae3b7d26c8ec2a77bf18ecd5)`()` <a id="structFRHAPI__CreateAuditRequest_1a2381105fae3b7d26c8ec2a77bf18ecd5"></a>

Clears the value of InstanceRequestTemplate_Optional and sets InstanceRequestTemplate_IsSet to false.

<br>
#### `public inline FString & `[`GetMap`](#structFRHAPI__CreateAuditRequest_1a16d7c829b2f5009d5105825aa715714f)`()` <a id="structFRHAPI__CreateAuditRequest_1a16d7c829b2f5009d5105825aa715714f"></a>

Gets the value of Map_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMap`](#structFRHAPI__CreateAuditRequest_1a115063adc41183201c8d35f0af94606c)`() const` <a id="structFRHAPI__CreateAuditRequest_1a115063adc41183201c8d35f0af94606c"></a>

Gets the value of Map_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMap`](#structFRHAPI__CreateAuditRequest_1a224f453b7c28efe9669f7a28a76a20a1)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a224f453b7c28efe9669f7a28a76a20a1"></a>

Gets the value of Map_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMap`](#structFRHAPI__CreateAuditRequest_1a97d80b625f52b84dca15dc536d336167)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a97d80b625f52b84dca15dc536d336167"></a>

Fills OutValue with the value of Map_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetMapOrNull`](#structFRHAPI__CreateAuditRequest_1a637ee7bba4e100b241948e4ba54a3c20)`()` <a id="structFRHAPI__CreateAuditRequest_1a637ee7bba4e100b241948e4ba54a3c20"></a>

Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetMapOrNull`](#structFRHAPI__CreateAuditRequest_1ab79de0e3358bbbbc72c2d32d96e13e6c)`() const` <a id="structFRHAPI__CreateAuditRequest_1ab79de0e3358bbbbc72c2d32d96e13e6c"></a>

Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMap`](#structFRHAPI__CreateAuditRequest_1a9980eeb7ea6bc7e3ad228aee3facb67e)`(FString NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a9980eeb7ea6bc7e3ad228aee3facb67e"></a>

Sets the value of Map_Optional and also sets Map_IsSet to true.

<br>
#### `public inline void `[`ClearMap`](#structFRHAPI__CreateAuditRequest_1a98e2084cc570644d016cc2caf3ce08ff)`()` <a id="structFRHAPI__CreateAuditRequest_1a98e2084cc570644d016cc2caf3ce08ff"></a>

Clears the value of Map_Optional and sets Map_IsSet to false.

<br>
#### `public inline FString & `[`GetMode`](#structFRHAPI__CreateAuditRequest_1a8421f3ab7ef8d8cea60a4e5352510259)`()` <a id="structFRHAPI__CreateAuditRequest_1a8421f3ab7ef8d8cea60a4e5352510259"></a>

Gets the value of Mode_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMode`](#structFRHAPI__CreateAuditRequest_1a0443acf7bcea38bb8b8fdb032e8fb00f)`() const` <a id="structFRHAPI__CreateAuditRequest_1a0443acf7bcea38bb8b8fdb032e8fb00f"></a>

Gets the value of Mode_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMode`](#structFRHAPI__CreateAuditRequest_1a29a44e9b8aa647a39c61bf581485b3cf)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a29a44e9b8aa647a39c61bf581485b3cf"></a>

Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMode`](#structFRHAPI__CreateAuditRequest_1ac1bbf0a254a38fa5d1e5733a1d1ebd33)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1ac1bbf0a254a38fa5d1e5733a1d1ebd33"></a>

Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetModeOrNull`](#structFRHAPI__CreateAuditRequest_1a74e6ab79f0bb70f32092aa41252555f7)`()` <a id="structFRHAPI__CreateAuditRequest_1a74e6ab79f0bb70f32092aa41252555f7"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetModeOrNull`](#structFRHAPI__CreateAuditRequest_1a3c1cab4c01ff606c03cc5c28b8964cbb)`() const` <a id="structFRHAPI__CreateAuditRequest_1a3c1cab4c01ff606c03cc5c28b8964cbb"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMode`](#structFRHAPI__CreateAuditRequest_1a2448d1a95814a367076e84930b4ce72e)`(FString NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a2448d1a95814a367076e84930b4ce72e"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true.

<br>
#### `public inline void `[`ClearMode`](#structFRHAPI__CreateAuditRequest_1a708273853f8264d35bb53364faa1baeb)`()` <a id="structFRHAPI__CreateAuditRequest_1a708273853f8264d35bb53364faa1baeb"></a>

Clears the value of Mode_Optional and sets Mode_IsSet to false.

<br>
#### `public inline FString & `[`GetAllocationId`](#structFRHAPI__CreateAuditRequest_1ae9adb321b2e78434bc56ea2f3b4e8b13)`()` <a id="structFRHAPI__CreateAuditRequest_1ae9adb321b2e78434bc56ea2f3b4e8b13"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetAllocationId`](#structFRHAPI__CreateAuditRequest_1ace2211a6fbc29ac0668dacf6ff56aaaa)`() const` <a id="structFRHAPI__CreateAuditRequest_1ace2211a6fbc29ac0668dacf6ff56aaaa"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetAllocationId`](#structFRHAPI__CreateAuditRequest_1a4ba214418c6499597d86c16e4d37c7f1)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a4ba214418c6499597d86c16e4d37c7f1"></a>

Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetAllocationId`](#structFRHAPI__CreateAuditRequest_1a261bc74d9eb7e33dd33956f805be4aba)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a261bc74d9eb7e33dd33956f805be4aba"></a>

Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetAllocationIdOrNull`](#structFRHAPI__CreateAuditRequest_1a82bb7f7b78637241beb6024c4e24ef0b)`()` <a id="structFRHAPI__CreateAuditRequest_1a82bb7f7b78637241beb6024c4e24ef0b"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__CreateAuditRequest_1a90ecc935c43df0ed34bdcbadc8ce05bd)`() const` <a id="structFRHAPI__CreateAuditRequest_1a90ecc935c43df0ed34bdcbadc8ce05bd"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetAllocationId`](#structFRHAPI__CreateAuditRequest_1a0cb573479fe97b258ba4fde22440a643)`(FString NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a0cb573479fe97b258ba4fde22440a643"></a>

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.

<br>
#### `public inline void `[`ClearAllocationId`](#structFRHAPI__CreateAuditRequest_1a32fabf3a37474ad325e7c0e1150c5b19)`()` <a id="structFRHAPI__CreateAuditRequest_1a32fabf3a37474ad325e7c0e1150c5b19"></a>

Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.

<br>
#### `public inline ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__CreateAuditRequest_1a96c66817df758ddf70817d570d4f368f)`()` <a id="structFRHAPI__CreateAuditRequest_1a96c66817df758ddf70817d570d4f368f"></a>

Gets the value of JoinStatus_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__CreateAuditRequest_1a447c72de3776804a67df24537aa1d793)`() const` <a id="structFRHAPI__CreateAuditRequest_1a447c72de3776804a67df24537aa1d793"></a>

Gets the value of JoinStatus_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__CreateAuditRequest_1adb9219151d3184f1fe4fe5e05432020b)`(const ERHAPI_InstanceJoinableStatus & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1adb9219151d3184f1fe4fe5e05432020b"></a>

Gets the value of JoinStatus_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetJoinStatus`](#structFRHAPI__CreateAuditRequest_1afb3c7c2bcc6002eb402a207cea8d4f48)`(ERHAPI_InstanceJoinableStatus & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1afb3c7c2bcc6002eb402a207cea8d4f48"></a>

Fills OutValue with the value of JoinStatus_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__CreateAuditRequest_1ac5183638ac6169496fb78e05dd91166b)`()` <a id="structFRHAPI__CreateAuditRequest_1ac5183638ac6169496fb78e05dd91166b"></a>

Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__CreateAuditRequest_1aea924da2d7febd851f4db65d0f00261d)`() const` <a id="structFRHAPI__CreateAuditRequest_1aea924da2d7febd851f4db65d0f00261d"></a>

Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetJoinStatus`](#structFRHAPI__CreateAuditRequest_1a0310ca35c0978cb9c8abb9c50847bdac)`(ERHAPI_InstanceJoinableStatus NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a0310ca35c0978cb9c8abb9c50847bdac"></a>

Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true.

<br>
#### `public inline void `[`ClearJoinStatus`](#structFRHAPI__CreateAuditRequest_1af8a6f2207119beda87c49a8aa237a1bd)`()` <a id="structFRHAPI__CreateAuditRequest_1af8a6f2207119beda87c49a8aa237a1bd"></a>

Clears the value of JoinStatus_Optional and sets JoinStatus_IsSet to false.

<br>
#### `public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__CreateAuditRequest_1aae2ab58db342087b9f2662557fc8a0e8)`()` <a id="structFRHAPI__CreateAuditRequest_1aae2ab58db342087b9f2662557fc8a0e8"></a>

Gets the value of JoinParams_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__CreateAuditRequest_1a82961ddc8817d957b170e6a9eac181aa)`() const` <a id="structFRHAPI__CreateAuditRequest_1a82961ddc8817d957b170e6a9eac181aa"></a>

Gets the value of JoinParams_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__CreateAuditRequest_1aef26c817f7860b642032522e6dc901cf)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1aef26c817f7860b642032522e6dc901cf"></a>

Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetJoinParams`](#structFRHAPI__CreateAuditRequest_1a12457dd3a291960d1196fdc1d59ca8d3)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a12457dd3a291960d1196fdc1d59ca8d3"></a>

Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__CreateAuditRequest_1a98d4a611eedaf54627939909ae2a7a72)`()` <a id="structFRHAPI__CreateAuditRequest_1a98d4a611eedaf54627939909ae2a7a72"></a>

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__CreateAuditRequest_1a0bf6f22bd7d7aed7fb27ad7085fa3bf2)`() const` <a id="structFRHAPI__CreateAuditRequest_1a0bf6f22bd7d7aed7fb27ad7085fa3bf2"></a>

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetJoinParams`](#structFRHAPI__CreateAuditRequest_1a6145d6b665524acd90cf51c088f010d7)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a6145d6b665524acd90cf51c088f010d7"></a>

Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.

<br>
#### `public inline void `[`ClearJoinParams`](#structFRHAPI__CreateAuditRequest_1ae15128c077fc62ffeec86842240dbd52)`()` <a id="structFRHAPI__CreateAuditRequest_1ae15128c077fc62ffeec86842240dbd52"></a>

Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.

<br>
#### `public inline ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1a84fd690b95e3fc58f832ac260b61414b)`()` <a id="structFRHAPI__CreateAuditRequest_1a84fd690b95e3fc58f832ac260b61414b"></a>

Gets the value of InstanceHealth_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1a7a4854a7d729d43575b94ccae3f915e3)`() const` <a id="structFRHAPI__CreateAuditRequest_1a7a4854a7d729d43575b94ccae3f915e3"></a>

Gets the value of InstanceHealth_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1ac9fc934271c4e481f8c574ba5b12a47e)`(const ERHAPI_InstanceHealthStatus & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1ac9fc934271c4e481f8c574ba5b12a47e"></a>

Gets the value of InstanceHealth_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1acb1a1a9952d63d9c73763d62cf0b365a)`(ERHAPI_InstanceHealthStatus & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1acb1a1a9952d63d9c73763d62cf0b365a"></a>

Fills OutValue with the value of InstanceHealth_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__CreateAuditRequest_1a231a1f77055dba45c48dd575b0baba2c)`()` <a id="structFRHAPI__CreateAuditRequest_1a231a1f77055dba45c48dd575b0baba2c"></a>

Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__CreateAuditRequest_1a6e89298f7702a23817c504ba73f58666)`() const` <a id="structFRHAPI__CreateAuditRequest_1a6e89298f7702a23817c504ba73f58666"></a>

Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInstanceHealth`](#structFRHAPI__CreateAuditRequest_1a91147d5811c089b3ce28c9dfb8f9e9b6)`(ERHAPI_InstanceHealthStatus NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a91147d5811c089b3ce28c9dfb8f9e9b6"></a>

Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true.

<br>
#### `public inline void `[`ClearInstanceHealth`](#structFRHAPI__CreateAuditRequest_1ab839fe4135e907ee3a6949f4a2ed4473)`()` <a id="structFRHAPI__CreateAuditRequest_1ab839fe4135e907ee3a6949f4a2ed4473"></a>

Clears the value of InstanceHealth_Optional and sets InstanceHealth_IsSet to false.

<br>
#### `public inline FString & `[`GetQueueId`](#structFRHAPI__CreateAuditRequest_1aba4dda82a6b38ba44f0a7ccd19ddba33)`()` <a id="structFRHAPI__CreateAuditRequest_1aba4dda82a6b38ba44f0a7ccd19ddba33"></a>

Gets the value of QueueId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetQueueId`](#structFRHAPI__CreateAuditRequest_1a1ecdcc737d47c8bc53fd78d918b340a8)`() const` <a id="structFRHAPI__CreateAuditRequest_1a1ecdcc737d47c8bc53fd78d918b340a8"></a>

Gets the value of QueueId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetQueueId`](#structFRHAPI__CreateAuditRequest_1ac9259ddaa72a948ccfb083f0300ac015)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1ac9259ddaa72a948ccfb083f0300ac015"></a>

Gets the value of QueueId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetQueueId`](#structFRHAPI__CreateAuditRequest_1ab252dda258e552a005a8ad65e5ef28f1)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1ab252dda258e552a005a8ad65e5ef28f1"></a>

Fills OutValue with the value of QueueId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetQueueIdOrNull`](#structFRHAPI__CreateAuditRequest_1a48ab7aa11f469405333562c73a18518d)`()` <a id="structFRHAPI__CreateAuditRequest_1a48ab7aa11f469405333562c73a18518d"></a>

Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetQueueIdOrNull`](#structFRHAPI__CreateAuditRequest_1a18704e28e6ecbb753b159cdcd8cd4756)`() const` <a id="structFRHAPI__CreateAuditRequest_1a18704e28e6ecbb753b159cdcd8cd4756"></a>

Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetQueueId`](#structFRHAPI__CreateAuditRequest_1a816a97a61b4c21ae6a8335b018da1508)`(FString NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a816a97a61b4c21ae6a8335b018da1508"></a>

Sets the value of QueueId_Optional and also sets QueueId_IsSet to true.

<br>
#### `public inline void `[`ClearQueueId`](#structFRHAPI__CreateAuditRequest_1aea875a3118fee4f648079eebaac9b656)`()` <a id="structFRHAPI__CreateAuditRequest_1aea875a3118fee4f648079eebaac9b656"></a>

Clears the value of QueueId_Optional and sets QueueId_IsSet to false.

<br>
#### `public inline TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__CreateAuditRequest_1a1061e0d89d34c2256654b9834656343e)`()` <a id="structFRHAPI__CreateAuditRequest_1a1061e0d89d34c2256654b9834656343e"></a>

Gets the value of Players_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__CreateAuditRequest_1a8d19748f7eb81fbcd2cae82970ba482c)`() const` <a id="structFRHAPI__CreateAuditRequest_1a8d19748f7eb81fbcd2cae82970ba482c"></a>

Gets the value of Players_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__CreateAuditRequest_1a4c599ad2b223e07aa49a1a600002a1c6)`(const TArray< FGuid > & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a4c599ad2b223e07aa49a1a600002a1c6"></a>

Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPlayers`](#structFRHAPI__CreateAuditRequest_1a95ae9ad1d82ff35800aa5d6b76b55131)`(TArray< FGuid > & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a95ae9ad1d82ff35800aa5d6b76b55131"></a>

Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< FGuid > * `[`GetPlayersOrNull`](#structFRHAPI__CreateAuditRequest_1ac3708be790419ca5e80ddda011b21e19)`()` <a id="structFRHAPI__CreateAuditRequest_1ac3708be790419ca5e80ddda011b21e19"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< FGuid > * `[`GetPlayersOrNull`](#structFRHAPI__CreateAuditRequest_1ac2860605be9737cf5aae22be6f7bc047)`() const` <a id="structFRHAPI__CreateAuditRequest_1ac2860605be9737cf5aae22be6f7bc047"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPlayers`](#structFRHAPI__CreateAuditRequest_1a94247061ed3667973d238b6941bfce07)`(TArray< FGuid > NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a94247061ed3667973d238b6941bfce07"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true.

<br>
#### `public inline void `[`ClearPlayers`](#structFRHAPI__CreateAuditRequest_1a69f092c9a60a172af8618766f7946567)`()` <a id="structFRHAPI__CreateAuditRequest_1a69f092c9a60a172af8618766f7946567"></a>

Clears the value of Players_Optional and sets Players_IsSet to false.

<br>
#### `public inline FString & `[`GetTicketId`](#structFRHAPI__CreateAuditRequest_1a6ace7b6397fc1f9b2a8c4a1e5ee2b551)`()` <a id="structFRHAPI__CreateAuditRequest_1a6ace7b6397fc1f9b2a8c4a1e5ee2b551"></a>

Gets the value of TicketId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetTicketId`](#structFRHAPI__CreateAuditRequest_1ab5691f47854a7ca674155a88d70d29e5)`() const` <a id="structFRHAPI__CreateAuditRequest_1ab5691f47854a7ca674155a88d70d29e5"></a>

Gets the value of TicketId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetTicketId`](#structFRHAPI__CreateAuditRequest_1adc19213747cc456d849fa2b10fb0faae)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1adc19213747cc456d849fa2b10fb0faae"></a>

Gets the value of TicketId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetTicketId`](#structFRHAPI__CreateAuditRequest_1ac888136c65f76f71e47436cb14fa87e3)`(FString & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1ac888136c65f76f71e47436cb14fa87e3"></a>

Fills OutValue with the value of TicketId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetTicketIdOrNull`](#structFRHAPI__CreateAuditRequest_1aaee44237660e63d3eb4e5bccfa2f12ce)`()` <a id="structFRHAPI__CreateAuditRequest_1aaee44237660e63d3eb4e5bccfa2f12ce"></a>

Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetTicketIdOrNull`](#structFRHAPI__CreateAuditRequest_1ae1b7b483e27871a1bb982f441206837e)`() const` <a id="structFRHAPI__CreateAuditRequest_1ae1b7b483e27871a1bb982f441206837e"></a>

Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetTicketId`](#structFRHAPI__CreateAuditRequest_1a8e98c4842c5b12ea89e223cdf43f21c7)`(FString NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a8e98c4842c5b12ea89e223cdf43f21c7"></a>

Sets the value of TicketId_Optional and also sets TicketId_IsSet to true.

<br>
#### `public inline void `[`ClearTicketId`](#structFRHAPI__CreateAuditRequest_1aabb4b486f8327532dd975262f8fcc5b3)`()` <a id="structFRHAPI__CreateAuditRequest_1aabb4b486f8327532dd975262f8fcc5b3"></a>

Clears the value of TicketId_Optional and sets TicketId_IsSet to false.

<br>
#### `public inline TMap< FString, FString > & `[`GetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1a3089cfc2631770708d05388bdaab443c)`()` <a id="structFRHAPI__CreateAuditRequest_1a3089cfc2631770708d05388bdaab443c"></a>

Gets the value of AdditionalParams_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1a1d0a78a9854c9e8db1afbb712d7a9f54)`() const` <a id="structFRHAPI__CreateAuditRequest_1a1d0a78a9854c9e8db1afbb712d7a9f54"></a>

Gets the value of AdditionalParams_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1a0cd6c3b8b2c54b90c511177487692c05)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1a0cd6c3b8b2c54b90c511177487692c05"></a>

Gets the value of AdditionalParams_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1a2621c5f0a4d2e2069c8b5c3f8cdee347)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a2621c5f0a4d2e2069c8b5c3f8cdee347"></a>

Fills OutValue with the value of AdditionalParams_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetAdditionalParamsOrNull`](#structFRHAPI__CreateAuditRequest_1a2cecb612483b1b2b04a5f7500e52cd20)`()` <a id="structFRHAPI__CreateAuditRequest_1a2cecb612483b1b2b04a5f7500e52cd20"></a>

Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetAdditionalParamsOrNull`](#structFRHAPI__CreateAuditRequest_1a748eeb9ffaf74f9d83eaade41d894a20)`() const` <a id="structFRHAPI__CreateAuditRequest_1a748eeb9ffaf74f9d83eaade41d894a20"></a>

Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetAdditionalParams`](#structFRHAPI__CreateAuditRequest_1ad6975c102ab5fdad9e9524ba9e243679)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__CreateAuditRequest_1ad6975c102ab5fdad9e9524ba9e243679"></a>

Sets the value of AdditionalParams_Optional and also sets AdditionalParams_IsSet to true.

<br>
#### `public inline void `[`ClearAdditionalParams`](#structFRHAPI__CreateAuditRequest_1a55b2ec8eefed3283bed95f9afbd2b247)`()` <a id="structFRHAPI__CreateAuditRequest_1a55b2ec8eefed3283bed95f9afbd2b247"></a>

Clears the value of AdditionalParams_Optional and sets AdditionalParams_IsSet to false.

<br>
#### `public inline TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__CreateAuditRequest_1a902dc3c30894738280e9985a25592b3a)`()` <a id="structFRHAPI__CreateAuditRequest_1a902dc3c30894738280e9985a25592b3a"></a>

Gets the value of MapPreferences_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__CreateAuditRequest_1a5a1a5c2320d0c59abb3501c422270160)`() const` <a id="structFRHAPI__CreateAuditRequest_1a5a1a5c2320d0c59abb3501c422270160"></a>

Gets the value of MapPreferences_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__CreateAuditRequest_1aba774087427bee9eae83e1d6fad650ab)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1aba774087427bee9eae83e1d6fad650ab"></a>

Gets the value of MapPreferences_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMapPreferences`](#structFRHAPI__CreateAuditRequest_1a37c4fefc9ecb554e6e008a2d94cf2f51)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1a37c4fefc9ecb554e6e008a2d94cf2f51"></a>

Fills OutValue with the value of MapPreferences_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__CreateAuditRequest_1a51c19b7050a706d3cd8f5a1e014e226c)`()` <a id="structFRHAPI__CreateAuditRequest_1a51c19b7050a706d3cd8f5a1e014e226c"></a>

Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__CreateAuditRequest_1a3d22eacd4d736e018bea7f0ce3782c42)`() const` <a id="structFRHAPI__CreateAuditRequest_1a3d22eacd4d736e018bea7f0ce3782c42"></a>

Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMapPreferences`](#structFRHAPI__CreateAuditRequest_1a9db5a649b5d425f11c48a74ac172d04a)`(TArray< FString > NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a9db5a649b5d425f11c48a74ac172d04a"></a>

Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true.

<br>
#### `public inline void `[`ClearMapPreferences`](#structFRHAPI__CreateAuditRequest_1a8f074dc9b8affdbefbf78306c64e52a5)`()` <a id="structFRHAPI__CreateAuditRequest_1a8f074dc9b8affdbefbf78306c64e52a5"></a>

Clears the value of MapPreferences_Optional and sets MapPreferences_IsSet to false.

<br>
#### `public inline TArray< FString > & `[`GetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1a0178eb1454a2cb61023375de420f1b04)`()` <a id="structFRHAPI__CreateAuditRequest_1a0178eb1454a2cb61023375de420f1b04"></a>

Gets the value of QueuedSessionId_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< FString > & `[`GetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1aef500ce4fea1d3b9b8295a42ee137cac)`() const` <a id="structFRHAPI__CreateAuditRequest_1aef500ce4fea1d3b9b8295a42ee137cac"></a>

Gets the value of QueuedSessionId_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< FString > & `[`GetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1acd6f36dfb2565ef27b306b3deff4eae3)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__CreateAuditRequest_1acd6f36dfb2565ef27b306b3deff4eae3"></a>

Gets the value of QueuedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1ab3915c24c90c2a9239e3decd23f98ddb)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__CreateAuditRequest_1ab3915c24c90c2a9239e3decd23f98ddb"></a>

Fills OutValue with the value of QueuedSessionId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< FString > * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1ac89cb184886212621b591541baabad1f)`()` <a id="structFRHAPI__CreateAuditRequest_1ac89cb184886212621b591541baabad1f"></a>

Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< FString > * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__CreateAuditRequest_1a61c8fed561398c72f86ad7bbffe66f25)`() const` <a id="structFRHAPI__CreateAuditRequest_1a61c8fed561398c72f86ad7bbffe66f25"></a>

Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1a1f1aee360df79a3f41dc37f67b29ff0b)`(TArray< FString > NewValue)` <a id="structFRHAPI__CreateAuditRequest_1a1f1aee360df79a3f41dc37f67b29ff0b"></a>

Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true.

<br>
#### `public inline void `[`ClearQueuedSessionId`](#structFRHAPI__CreateAuditRequest_1af13bcc59cc707c792aa29f45d8f5c6a3)`()` <a id="structFRHAPI__CreateAuditRequest_1af13bcc59cc707c792aa29f45d8f5c6a3"></a>

Clears the value of QueuedSessionId_Optional and sets QueuedSessionId_IsSet to false.

<br>
