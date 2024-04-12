# RHAPI_CustomAudit <a id="group__RHAPI__CustomAudit"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_CustomAudit`](#structFRHAPI__CustomAudit) | 

## struct `FRHAPI_CustomAudit` <a id="structFRHAPI__CustomAudit"></a>

```
struct FRHAPI_CustomAudit
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`EventName`](#structFRHAPI__CustomAudit_1a1f7d62a2d03f04b3efbe129200a0c95d) | Name of the audit event you are creating. Customer created events will be prepended with 'customer.'.
`public FString `[`SessionId`](#structFRHAPI__CustomAudit_1a62b1ca41cb9396abfb5c634e9bef9894) | ID of the session this event occurred in.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__CustomAudit_1a7077f0e2265de4e2bc305c75f0d22eb1) | Custom data for this audit request.
`public bool `[`CustomData_IsSet`](#structFRHAPI__CustomAudit_1a74acc8d4cc8fe343e902bd65d85eb600) | true if CustomData_Optional has been set to a value
`public FString `[`SessionType_Optional`](#structFRHAPI__CustomAudit_1a1054d75a6525349dc4b62946d63d24af) | Type of the session this event occurred in.
`public bool `[`SessionType_IsSet`](#structFRHAPI__CustomAudit_1a689021d27bb9772cb3b86cca9c085e52) | true if SessionType_Optional has been set to a value
`public FString `[`RegionId_Optional`](#structFRHAPI__CustomAudit_1a0f27cb78f2c653e51b0a44f08d0e3f68) | Region ID for this event.
`public bool `[`RegionId_IsSet`](#structFRHAPI__CustomAudit_1aebb6e4308e792eb9bfe9b75443c774dc) | true if RegionId_Optional has been set to a value
`public bool `[`Joinable_Optional`](#structFRHAPI__CustomAudit_1a52ae213eb05fe3a4488cb20784943b8c) | Whether or not the session is publicly joinable.
`public bool `[`Joinable_IsSet`](#structFRHAPI__CustomAudit_1a4eb004fa82857ab524847a9f19800061) | true if Joinable_Optional has been set to a value
`public TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > `[`UpdatedTeams_Optional`](#structFRHAPI__CustomAudit_1a33364c77e595115568a281298496802d) | Updated team numbers and sizes.
`public bool `[`UpdatedTeams_IsSet`](#structFRHAPI__CustomAudit_1a6e1faa4ef78c8e382e0860deda9a190b) | true if UpdatedTeams_Optional has been set to a value
`public ERHAPI_InviteSource `[`Source_Optional`](#structFRHAPI__CustomAudit_1a62de6402bfa40965c01ec5acf4914e1f) | The source of an invite.
`public bool `[`Source_IsSet`](#structFRHAPI__CustomAudit_1a185727ffa35cb83f1482616f5e97fc29) | true if Source_Optional has been set to a value
`public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__CustomAudit_1ac0f99fa1f19715e707dbcf425b6ce03b) | UUID of a specific player being effected in this event.
`public bool `[`PlayerUuid_IsSet`](#structFRHAPI__CustomAudit_1a01402eb2c4e845008bb11b45b1ff8ff7) | true if PlayerUuid_Optional has been set to a value
`public int32 `[`TeamId_Optional`](#structFRHAPI__CustomAudit_1a2321b011347d875f7ad4984e2e8cc85c) | ID of the team being effected in this event.
`public bool `[`TeamId_IsSet`](#structFRHAPI__CustomAudit_1a7946d32a1c7e452d17235003204cd46a) | true if TeamId_Optional has been set to a value
`public FString `[`InvitedSessionId_Optional`](#structFRHAPI__CustomAudit_1a540adcc7e267d2258a6b021c9c681bdf) | ID of the session being invited in this event.
`public bool `[`InvitedSessionId_IsSet`](#structFRHAPI__CustomAudit_1a266a1722e2216252581926844c3476b6) | true if InvitedSessionId_Optional has been set to a value
`public FString `[`RemovedSessionId_Optional`](#structFRHAPI__CustomAudit_1a94bc39db85b98232379cf092823cda18) | ID of the session being removed in this event.
`public bool `[`RemovedSessionId_IsSet`](#structFRHAPI__CustomAudit_1a4eec103c0ff399f2de1c56da4d641a00) | true if RemovedSessionId_Optional has been set to a value
`public FString `[`Version_Optional`](#structFRHAPI__CustomAudit_1a367cc3ba8b0decfa578e44939c393a8d) | Version updated in this event.
`public bool `[`Version_IsSet`](#structFRHAPI__CustomAudit_1a6d70ba02eb83e5146a625a4f276728b1) | true if Version_Optional has been set to a value
`public `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` `[`ClientSettings_Optional`](#structFRHAPI__CustomAudit_1aabd94ef58c459b3238e340002905bff8) | Client settings updated as part of this event.
`public bool `[`ClientSettings_IsSet`](#structFRHAPI__CustomAudit_1a41c3b8132547a11137a7155e5163897c) | true if ClientSettings_Optional has been set to a value
`public `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` `[`CrossplayPreferences_Optional`](#structFRHAPI__CustomAudit_1a25a21996b6827eaddd31f325c47f27c7) | Crossplay preferences updated as part of this event.
`public bool `[`CrossplayPreferences_IsSet`](#structFRHAPI__CustomAudit_1aa562407ac0d196942e15d19ad54921ca) | true if CrossplayPreferences_Optional has been set to a value
`public ERHAPI_SessionPlayerStatus `[`PlayerStatus_Optional`](#structFRHAPI__CustomAudit_1aab4b38b29e73168cd3e33dacdd09b4ac) | Player's status updated as part of this event.
`public bool `[`PlayerStatus_IsSet`](#structFRHAPI__CustomAudit_1abfb111f7ca6110216d164501eece87d3) | true if PlayerStatus_Optional has been set to a value
`public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__CustomAudit_1a69f020d76fc8af743590667527513577) | Platform updated as part of this event.
`public bool `[`Platform_IsSet`](#structFRHAPI__CustomAudit_1aed3acd5d8510f22d988e0088f4791c7d) | true if Platform_Optional has been set to a value
`public FString `[`PlatformSessionId_Optional`](#structFRHAPI__CustomAudit_1a40bb0893cc8d638add4b2dd029a99826) | ID of the platform session being effected in this event.
`public bool `[`PlatformSessionId_IsSet`](#structFRHAPI__CustomAudit_1a20e2e977dbd7ae416bf4f112a6c97ea1) | true if PlatformSessionId_Optional has been set to a value
`public FString `[`InstanceId_Optional`](#structFRHAPI__CustomAudit_1aecb86eceadc04cb5013c1d4e1dc0d799) | ID of the instance being effected in this event.
`public bool `[`InstanceId_IsSet`](#structFRHAPI__CustomAudit_1aacef537d04185517bb31780891f4c9d2) | true if InstanceId_Optional has been set to a value
`public ERHAPI_HostType `[`HostType_Optional`](#structFRHAPI__CustomAudit_1a5fccb94aac8b2a87ee75a8302a1c3ad4) | Type of the host being effected in this event.
`public bool `[`HostType_IsSet`](#structFRHAPI__CustomAudit_1ade3f4a67c242284547c73013c47b9270) | true if HostType_Optional has been set to a value
`public FGuid `[`HostPlayerUuid_Optional`](#structFRHAPI__CustomAudit_1ae0899cd543681930d92050a001ebaca6) | UUID of the player hosting during this event.
`public bool `[`HostPlayerUuid_IsSet`](#structFRHAPI__CustomAudit_1affae4633142e8457e338a5158d31437a) | true if HostPlayerUuid_Optional has been set to a value
`public FGuid `[`InstanceRequestTemplate_Optional`](#structFRHAPI__CustomAudit_1a4676b5f96d9f1465352dd52735d125ed) | ID of the instance request template being used in this event.
`public bool `[`InstanceRequestTemplate_IsSet`](#structFRHAPI__CustomAudit_1a16d32469923a1336b2cd527d8badd32d) | true if InstanceRequestTemplate_Optional has been set to a value
`public FString `[`Map_Optional`](#structFRHAPI__CustomAudit_1ae9b00d6b7c33c5b66e2e2fd36582ea64) | Map being used in this event.
`public bool `[`Map_IsSet`](#structFRHAPI__CustomAudit_1a4aa17299e6c8edaacf03f425763e11c4) | true if Map_Optional has been set to a value
`public FString `[`Mode_Optional`](#structFRHAPI__CustomAudit_1a9f9fc3fcbe849e599339478b03973ae0) | Mode being used in this event.
`public bool `[`Mode_IsSet`](#structFRHAPI__CustomAudit_1ac384da07f71cf17b0f7ba8f76af1fddd) | true if Mode_Optional has been set to a value
`public FString `[`AllocationId_Optional`](#structFRHAPI__CustomAudit_1a82d23df4d216d7719106b44ad726b74a) | Allocation ID of instance in this event.
`public bool `[`AllocationId_IsSet`](#structFRHAPI__CustomAudit_1a6754cec8ea41613e144fbd0ed294b3ce) | true if AllocationId_Optional has been set to a value
`public ERHAPI_InstanceJoinableStatus `[`JoinStatus_Optional`](#structFRHAPI__CustomAudit_1a15a82be4eb9b3d8d80a948bd0273219c) | Instance's joinability status.
`public bool `[`JoinStatus_IsSet`](#structFRHAPI__CustomAudit_1ad7898ef8b2aef76a49ce06dab46ccf1b) | true if JoinStatus_Optional has been set to a value
`public `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` `[`JoinParams_Optional`](#structFRHAPI__CustomAudit_1af614f2cc2c7c711e53630b423ac28097) | Instance's join parameters for this event.
`public bool `[`JoinParams_IsSet`](#structFRHAPI__CustomAudit_1a8d0c96b3e918859b880638542cef375c) | true if JoinParams_Optional has been set to a value
`public ERHAPI_InstanceHealthStatus `[`InstanceHealth_Optional`](#structFRHAPI__CustomAudit_1a7089e7a6a1ada161736bca3c454af3fa) | Instance's health status for this event.
`public bool `[`InstanceHealth_IsSet`](#structFRHAPI__CustomAudit_1ab7f0aa29c33b631158731b6719d795cf) | true if InstanceHealth_Optional has been set to a value
`public FString `[`QueueId_Optional`](#structFRHAPI__CustomAudit_1affce5075a9686aee2cdcac4603f95e0e) | ID for the queue in this event.
`public bool `[`QueueId_IsSet`](#structFRHAPI__CustomAudit_1a22670378c70dc630110e382d5d99c54e) | true if QueueId_Optional has been set to a value
`public TArray< FGuid > `[`Players_Optional`](#structFRHAPI__CustomAudit_1a82264d2c20de4143165cf1e6a78591c0) | List of players uuids that were effected in this event. Each player will get a unique event.
`public bool `[`Players_IsSet`](#structFRHAPI__CustomAudit_1af5264dd487ad4900d91d7624af789dbe) | true if Players_Optional has been set to a value
`public FString `[`TicketId_Optional`](#structFRHAPI__CustomAudit_1a2bf90472c142c20fb2f15059a50a8f30) | Matchmaking ticket id in this event.
`public bool `[`TicketId_IsSet`](#structFRHAPI__CustomAudit_1a09a384cf2240361afa88243481b542af) | true if TicketId_Optional has been set to a value
`public TMap< FString, FString > `[`AdditionalParams_Optional`](#structFRHAPI__CustomAudit_1a496046cd561e047032897b9681e22dfc) | Additional matchmaking parameters in this event.
`public bool `[`AdditionalParams_IsSet`](#structFRHAPI__CustomAudit_1aa117d8da2eb0072a333c9b5f36abd41c) | true if AdditionalParams_Optional has been set to a value
`public TArray< FString > `[`MapPreferences_Optional`](#structFRHAPI__CustomAudit_1a2006fcb25f70c7a4ae4cebaf69d8410e) | Map preferences in this event.
`public bool `[`MapPreferences_IsSet`](#structFRHAPI__CustomAudit_1a54fc0d7441ad89a3fdce78329d74feb4) | true if MapPreferences_Optional has been set to a value
`public TArray< FString > `[`QueuedSessionId_Optional`](#structFRHAPI__CustomAudit_1a51bcb79be9cad08ca41036f6b5de3331) | ID of the session that was/is in a matchmaking queue for this event.
`public bool `[`QueuedSessionId_IsSet`](#structFRHAPI__CustomAudit_1acca01db59e9dc9132f0708db6734d32c) | true if QueuedSessionId_Optional has been set to a value
`public FGuid `[`RequestingUserUuid_Optional`](#structFRHAPI__CustomAudit_1a55ed4339f01639d80817c0051c73411b) | 
`public bool `[`RequestingUserUuid_IsSet`](#structFRHAPI__CustomAudit_1a1668e2d898772536e01eb7131868cb0b) | true if RequestingUserUuid_Optional has been set to a value
`public FDateTime `[`EventDatetime`](#structFRHAPI__CustomAudit_1ab120dde4d71b70e9db19883a974e4929) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public virtual bool `[`FromJson`](#structFRHAPI__CustomAudit_1ae1a2afb13864899f6c64106c02e861c7)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__CustomAudit_1a400d3ebdf7ae98cf80af4a1534f35a25)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetEventName`](#structFRHAPI__CustomAudit_1af72eae961ffe91557d8ab9b7b0e7faa1)`()` | Gets the value of EventName.
`public inline const FString & `[`GetEventName`](#structFRHAPI__CustomAudit_1a293514a6dde9c839f664d1bc543b141c)`() const` | Gets the value of EventName.
`public inline void `[`SetEventName`](#structFRHAPI__CustomAudit_1acfe329a24523fa4028b744ed18c2cb9d)`(FString NewValue)` | Sets the value of EventName.
`public inline FString & `[`GetSessionId`](#structFRHAPI__CustomAudit_1aeaf3d3ca97975fbdbbcb9c15e334fe0a)`()` | Gets the value of SessionId.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__CustomAudit_1a457c23bcc00a726212c231c5d794bf7a)`() const` | Gets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__CustomAudit_1ad808a0164e75f826adf3cea473284bce)`(FString NewValue)` | Sets the value of SessionId.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CustomAudit_1add53f0d8fb00adf5b575b5fb78374db1)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CustomAudit_1ac8ae223f9b7cb3731983387a81cf7e78)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CustomAudit_1a6df24cbebca40fc09bf0c8da8f08511b)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__CustomAudit_1ae52129b6aac9b23058f2d68c927e45c0)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CustomAudit_1abf0844f8977c69b512f0ba00330d5a48)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CustomAudit_1a4b09e4ff7e74c36834af22c5abf4ba77)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__CustomAudit_1ae762535706171cefc40b61b08ea56f4a)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__CustomAudit_1a49bba572c3df065a1f317db145c06f66)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FString & `[`GetSessionType`](#structFRHAPI__CustomAudit_1ac1658d76c64905b9df12627a86feda3f)`()` | Gets the value of SessionType_Optional, regardless of it having been set.
`public inline const FString & `[`GetSessionType`](#structFRHAPI__CustomAudit_1a37bb7b4d2eb43388fc6a44ae28cec126)`() const` | Gets the value of SessionType_Optional, regardless of it having been set.
`public inline const FString & `[`GetSessionType`](#structFRHAPI__CustomAudit_1a119c5e056f772582d42a05de86453e93)`(const FString & DefaultValue) const` | Gets the value of SessionType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessionType`](#structFRHAPI__CustomAudit_1a806c152fb7ba6f144a7348c2a0b406db)`(FString & OutValue) const` | Fills OutValue with the value of SessionType_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetSessionTypeOrNull`](#structFRHAPI__CustomAudit_1ab244a946647ae39ff3d7c4eedd56ac6e)`()` | Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetSessionTypeOrNull`](#structFRHAPI__CustomAudit_1a5a6d71d823c9536437b97298ac94b82f)`() const` | Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessionType`](#structFRHAPI__CustomAudit_1a862af6c966b02a4a3285852c4215d3c3)`(FString NewValue)` | Sets the value of SessionType_Optional and also sets SessionType_IsSet to true.
`public inline void `[`ClearSessionType`](#structFRHAPI__CustomAudit_1a95d52bcfcb975437eaa46d7607c3f7a8)`()` | Clears the value of SessionType_Optional and sets SessionType_IsSet to false.
`public inline FString & `[`GetRegionId`](#structFRHAPI__CustomAudit_1a4dbd8581f626887089badff8618a65e3)`()` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__CustomAudit_1a5886fb1f9343e103c3b700604ed2b7db)`() const` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__CustomAudit_1a0e50a1f281df5c0ee8d8176362478079)`(const FString & DefaultValue) const` | Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRegionId`](#structFRHAPI__CustomAudit_1aaf5c34661fbaf368f3192c780bfef230)`(FString & OutValue) const` | Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__CustomAudit_1aaab075cade4fedac1d5585c19b9ed9d7)`()` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__CustomAudit_1a001f998c2d66e0f81156b362209d8602)`() const` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRegionId`](#structFRHAPI__CustomAudit_1a303526a3cd9e9067b1059aa42d086f95)`(FString NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.
`public inline void `[`ClearRegionId`](#structFRHAPI__CustomAudit_1ad54dc6c2db0fb1da42f497417e797cf7)`()` | Clears the value of RegionId_Optional and sets RegionId_IsSet to false.
`public inline bool & `[`GetJoinable`](#structFRHAPI__CustomAudit_1a50284eb282d529df37a2119bf022d079)`()` | Gets the value of Joinable_Optional, regardless of it having been set.
`public inline const bool & `[`GetJoinable`](#structFRHAPI__CustomAudit_1a8032def0e241242fcdda8437cc02e3e8)`() const` | Gets the value of Joinable_Optional, regardless of it having been set.
`public inline const bool & `[`GetJoinable`](#structFRHAPI__CustomAudit_1a93945eac4627cdcb170312dca25cf18c)`(const bool & DefaultValue) const` | Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinable`](#structFRHAPI__CustomAudit_1aa9342391451b61b55461be42f8968253)`(bool & OutValue) const` | Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetJoinableOrNull`](#structFRHAPI__CustomAudit_1adb48e04ca07af1b38d022db859c62325)`()` | Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetJoinableOrNull`](#structFRHAPI__CustomAudit_1a02c34dfcf411fe7e1b2dccb962e22caf)`() const` | Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinable`](#structFRHAPI__CustomAudit_1a5d9ae0f4bd6a9c325ac99261e2e35590)`(bool NewValue)` | Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.
`public inline void `[`ClearJoinable`](#structFRHAPI__CustomAudit_1ac2c6c3ac97779efc0fc91ca8f15b4dfa)`()` | Clears the value of Joinable_Optional and sets Joinable_IsSet to false.
`public inline bool `[`IsJoinableDefaultValue`](#structFRHAPI__CustomAudit_1aaa0152e4ff594945b6c81f66d2799745)`() const` | Returns true if Joinable_Optional is set and matches the default value.
`public inline void `[`SetJoinableToDefault`](#structFRHAPI__CustomAudit_1aa099b7e38561c0d167cfd3614a32baad)`()` | Sets the value of Joinable_Optional to its default and also sets Joinable_IsSet to true.
`public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__CustomAudit_1af4faf3389de86e8ad16eabca912d8922)`()` | Gets the value of UpdatedTeams_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__CustomAudit_1aabfed0fc228c20c2297359f11c62d4b6)`() const` | Gets the value of UpdatedTeams_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__CustomAudit_1aef5548fd1339ddc562536e79171eab5b)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & DefaultValue) const` | Gets the value of UpdatedTeams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetUpdatedTeams`](#structFRHAPI__CustomAudit_1a808145b5a924dc59c27bf83996d98e88)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & OutValue) const` | Fills OutValue with the value of UpdatedTeams_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__CustomAudit_1a83061f59991c103bcba64f3cd9d253af)`()` | Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__CustomAudit_1ab4bab8854b2a23c434ffec55a5815590)`() const` | Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetUpdatedTeams`](#structFRHAPI__CustomAudit_1aa54a8654fd79df104ce0307078ce8522)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > NewValue)` | Sets the value of UpdatedTeams_Optional and also sets UpdatedTeams_IsSet to true.
`public inline void `[`ClearUpdatedTeams`](#structFRHAPI__CustomAudit_1adca5c037fcaeda435ae09b11baaa26f3)`()` | Clears the value of UpdatedTeams_Optional and sets UpdatedTeams_IsSet to false.
`public inline ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__CustomAudit_1af5f9384668be9274aca8b0a4627b9529)`()` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__CustomAudit_1a127b7ffc586f8f8d74c8e1a237e9d98a)`() const` | Gets the value of Source_Optional, regardless of it having been set.
`public inline const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__CustomAudit_1a6450aa458d772b3a5afec240056a8b5f)`(const ERHAPI_InviteSource & DefaultValue) const` | Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSource`](#structFRHAPI__CustomAudit_1aeb72319c3b3e1ab497bc7678d7a3fa97)`(ERHAPI_InviteSource & OutValue) const` | Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__CustomAudit_1a24c5625733729b9fa76fc771ad0d8769)`()` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__CustomAudit_1a5b0d24629c6277d82760baa697241642)`() const` | Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSource`](#structFRHAPI__CustomAudit_1a8c414cc57a4119f728d10980b35cc78c)`(ERHAPI_InviteSource NewValue)` | Sets the value of Source_Optional and also sets Source_IsSet to true.
`public inline void `[`ClearSource`](#structFRHAPI__CustomAudit_1ac10e9a6eb194e8749578877a4b9f127d)`()` | Clears the value of Source_Optional and sets Source_IsSet to false.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__CustomAudit_1a2163d120a2f0e929af6a5d6ae62d3689)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CustomAudit_1a03a4abb4959738ec8d3acc96730378eb)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CustomAudit_1a4a234b202fa67bf031cc18d810a155d7)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerUuid`](#structFRHAPI__CustomAudit_1a6e73e9d93f1ed265c7be847a72cf4a89)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__CustomAudit_1aa64df08c34818a294231fb738587fecb)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__CustomAudit_1abc78418a2f9d77864b2ddd0d401dc6eb)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__CustomAudit_1ab536a4b5be650f665539078ebc091da7)`(FGuid NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__CustomAudit_1adbc9c9ef7dd44ca156fa1b0f7d3d3d48)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline int32 & `[`GetTeamId`](#structFRHAPI__CustomAudit_1aebd9e68c419cdbd0ae82f00d842c1c60)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__CustomAudit_1a9eecf800ce749d2d9432aa7ffefdeacf)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__CustomAudit_1a15d9cbf500690c53579089df8fa6445d)`(const int32 & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTeamId`](#structFRHAPI__CustomAudit_1a37271efe17c9ec351cc92285ca3c3b25)`(int32 & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTeamIdOrNull`](#structFRHAPI__CustomAudit_1a676ade71fb5c8ba441fe7cae40e73886)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__CustomAudit_1a208aa15c1bbbd141ba7b4b224bf8dcb0)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTeamId`](#structFRHAPI__CustomAudit_1a760d3974aa94ad0f706cb94d7a4861b3)`(int32 NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline void `[`ClearTeamId`](#structFRHAPI__CustomAudit_1a994e880b778021d39d13d2746db6599d)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__CustomAudit_1a08f5013793f736a193ca98d13a72bb7b)`() const` | Returns true if TeamId_Optional is set and matches the default value.
`public inline void `[`SetTeamIdToDefault`](#structFRHAPI__CustomAudit_1a3da5a3c1ff30faf820cb3926a68abaf5)`()` | Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.
`public inline FString & `[`GetInvitedSessionId`](#structFRHAPI__CustomAudit_1ad443245ac2f23e0e73bebceb7c511495)`()` | Gets the value of InvitedSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInvitedSessionId`](#structFRHAPI__CustomAudit_1aecdb461f81348f3aecea238a77e0c791)`() const` | Gets the value of InvitedSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInvitedSessionId`](#structFRHAPI__CustomAudit_1ad363a30b024d85a9ece4be62bc5361b6)`(const FString & DefaultValue) const` | Gets the value of InvitedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInvitedSessionId`](#structFRHAPI__CustomAudit_1a35dc45e21ba2c2d59147ef3c74a6e136)`(FString & OutValue) const` | Fills OutValue with the value of InvitedSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__CustomAudit_1a44c1aa8d4238e0607d19b8ac3ef80f1c)`()` | Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__CustomAudit_1a5aa57b08875b1c6350b7895db81f9f63)`() const` | Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInvitedSessionId`](#structFRHAPI__CustomAudit_1a5d5a55aea134d9cf474fe17ec972b9bb)`(FString NewValue)` | Sets the value of InvitedSessionId_Optional and also sets InvitedSessionId_IsSet to true.
`public inline void `[`ClearInvitedSessionId`](#structFRHAPI__CustomAudit_1acfa1d4373d5d59864dbb66a6e881ccbb)`()` | Clears the value of InvitedSessionId_Optional and sets InvitedSessionId_IsSet to false.
`public inline FString & `[`GetRemovedSessionId`](#structFRHAPI__CustomAudit_1aaa6ae39cb528316cc1774b18df0810d5)`()` | Gets the value of RemovedSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRemovedSessionId`](#structFRHAPI__CustomAudit_1a187c2128064724441532fff16d66d61c)`() const` | Gets the value of RemovedSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRemovedSessionId`](#structFRHAPI__CustomAudit_1a9cf21e48072d26758495a03408b32eb1)`(const FString & DefaultValue) const` | Gets the value of RemovedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRemovedSessionId`](#structFRHAPI__CustomAudit_1a733b74206c7d5a6abb3846867ebc8d38)`(FString & OutValue) const` | Fills OutValue with the value of RemovedSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__CustomAudit_1afdf02b272ad54479c53326f32cbb3baf)`()` | Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__CustomAudit_1afc62b0bdb72e3bffab88762fbd9daf6d)`() const` | Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRemovedSessionId`](#structFRHAPI__CustomAudit_1a7e45f96e71c58b791581732513871728)`(FString NewValue)` | Sets the value of RemovedSessionId_Optional and also sets RemovedSessionId_IsSet to true.
`public inline void `[`ClearRemovedSessionId`](#structFRHAPI__CustomAudit_1aa93d1037c728c90dbc5b40bcc9139a71)`()` | Clears the value of RemovedSessionId_Optional and sets RemovedSessionId_IsSet to false.
`public inline FString & `[`GetVersion`](#structFRHAPI__CustomAudit_1a1ad9dffdea2bcea2b90931e234cad19a)`()` | Gets the value of Version_Optional, regardless of it having been set.
`public inline const FString & `[`GetVersion`](#structFRHAPI__CustomAudit_1a3a3446100a7bc6de9e8cc4289bd60ae6)`() const` | Gets the value of Version_Optional, regardless of it having been set.
`public inline const FString & `[`GetVersion`](#structFRHAPI__CustomAudit_1ae2b906c98a9b4a1164564b47ed01998f)`(const FString & DefaultValue) const` | Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVersion`](#structFRHAPI__CustomAudit_1abaab2955f759c3524731b436ecddae72)`(FString & OutValue) const` | Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetVersionOrNull`](#structFRHAPI__CustomAudit_1ab1b8cb345de09c85306a8584023bafe6)`()` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetVersionOrNull`](#structFRHAPI__CustomAudit_1a6c6b429c779d5076d67451cc931a0ccb)`() const` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVersion`](#structFRHAPI__CustomAudit_1a0d698221baa7905d0f203238df40f113)`(FString NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true.
`public inline void `[`ClearVersion`](#structFRHAPI__CustomAudit_1af5dc950f68c429a50fb99d1e7d09d127)`()` | Clears the value of Version_Optional and sets Version_IsSet to false.
`public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CustomAudit_1afea106c01179a95b0f63267edffaeb70)`()` | Gets the value of ClientSettings_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CustomAudit_1a118a9f26d384fb23405bd425fea21736)`() const` | Gets the value of ClientSettings_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CustomAudit_1aec4854a59b2f708acb12394f42d3a9fc)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & DefaultValue) const` | Gets the value of ClientSettings_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetClientSettings`](#structFRHAPI__CustomAudit_1ae8803119066e55351072fdaf32f1b3e4)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & OutValue) const` | Fills OutValue with the value of ClientSettings_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__CustomAudit_1a39e431def17414aaa8061f5ac7d5f7ed)`()` | Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__CustomAudit_1a90c5ff819997efa52719daeb7fc40d25)`() const` | Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetClientSettings`](#structFRHAPI__CustomAudit_1a25564486063af6b434e84cefb0c2ef98)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` NewValue)` | Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true.
`public inline void `[`ClearClientSettings`](#structFRHAPI__CustomAudit_1a2f6468637629c5df6eef7de2d37fb6bc)`()` | Clears the value of ClientSettings_Optional and sets ClientSettings_IsSet to false.
`public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CustomAudit_1a201bce99fdc628b4b00c9d39171ab96a)`()` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CustomAudit_1aa30a6eb43b06ea6cbacfa2836223af17)`() const` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CustomAudit_1a2b0fcaa555d78ac0e648d2a88691dceb)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` | Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCrossplayPreferences`](#structFRHAPI__CustomAudit_1ad3c9df1669d41d0cba4fdb4620ecd08c)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` | Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CustomAudit_1a92be759180fd9061545d3fccabaa17f2)`()` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CustomAudit_1a61e879d9590aba0d62a1b58b8b566b25)`() const` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCrossplayPreferences`](#structFRHAPI__CustomAudit_1a04f1ab7964d7466ad23810c973721657)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` NewValue)` | Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.
`public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__CustomAudit_1ac98e9e29a0a8dd696f25e00ecc9ee163)`()` | Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.
`public inline ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__CustomAudit_1a2681e133b08d5ede0d45af2fb3a44f58)`()` | Gets the value of PlayerStatus_Optional, regardless of it having been set.
`public inline const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__CustomAudit_1ac378bb0f8d73154c1c0ff38b46716e90)`() const` | Gets the value of PlayerStatus_Optional, regardless of it having been set.
`public inline const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__CustomAudit_1a03830dbc6b22cb939f2271ee5d245524)`(const ERHAPI_SessionPlayerStatus & DefaultValue) const` | Gets the value of PlayerStatus_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerStatus`](#structFRHAPI__CustomAudit_1ae0769e856c1067ed6216ded26263b9f4)`(ERHAPI_SessionPlayerStatus & OutValue) const` | Fills OutValue with the value of PlayerStatus_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__CustomAudit_1a35e05add5fb98ab4035a65e81db0a9af)`()` | Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__CustomAudit_1add58f02102c2d574717f34492c5a21eb)`() const` | Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerStatus`](#structFRHAPI__CustomAudit_1a6191151092c9ee657223d3c8a8f49fc9)`(ERHAPI_SessionPlayerStatus NewValue)` | Sets the value of PlayerStatus_Optional and also sets PlayerStatus_IsSet to true.
`public inline void `[`ClearPlayerStatus`](#structFRHAPI__CustomAudit_1a9a5626e26c7017ddbea053caed5fb1f1)`()` | Clears the value of PlayerStatus_Optional and sets PlayerStatus_IsSet to false.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CustomAudit_1a649086a658a8b24df08a3fa67f63fb70)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CustomAudit_1a1bfcb7d8429440a6901224095d56cc0c)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CustomAudit_1ab8107c765d83c96e2aa100bb95fae29d)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatform`](#structFRHAPI__CustomAudit_1aba0ba10eda906305600bbff459c2971d)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__CustomAudit_1a65d46fdd6118782a80ea06a776e8063d)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__CustomAudit_1aae6644026a8d34e3aefc3dbee989d9fc)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatform`](#structFRHAPI__CustomAudit_1a3de5f8f96caf221d0e1fc47edcef8cbe)`(ERHAPI_Platform NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline void `[`ClearPlatform`](#structFRHAPI__CustomAudit_1a5efd309d02c319a7cd7e8d63fa2e8d7d)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline FString & `[`GetPlatformSessionId`](#structFRHAPI__CustomAudit_1ae2d9a0dc224bc2d79387e71d770354be)`()` | Gets the value of PlatformSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformSessionId`](#structFRHAPI__CustomAudit_1a090fbf54fe24f52d48afaf5a8ff0ae9d)`() const` | Gets the value of PlatformSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformSessionId`](#structFRHAPI__CustomAudit_1ae6771a9096bc2bf403ab881d3f11d6d2)`(const FString & DefaultValue) const` | Gets the value of PlatformSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformSessionId`](#structFRHAPI__CustomAudit_1a3df1944c3d65071422d8009b630ebcb6)`(FString & OutValue) const` | Fills OutValue with the value of PlatformSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__CustomAudit_1a77941066cfabfdc82e35c0aa4c1458d8)`()` | Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__CustomAudit_1aeccc8866035c0664a74b4db0110c4955)`() const` | Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformSessionId`](#structFRHAPI__CustomAudit_1aaa297c8a88d4b9fb6d2b4659a3ee15e4)`(FString NewValue)` | Sets the value of PlatformSessionId_Optional and also sets PlatformSessionId_IsSet to true.
`public inline void `[`ClearPlatformSessionId`](#structFRHAPI__CustomAudit_1ae1be22ffb0733bec292fcf3b8f535e10)`()` | Clears the value of PlatformSessionId_Optional and sets PlatformSessionId_IsSet to false.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__CustomAudit_1a161523dc705c5403dd68973b16acf9f9)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__CustomAudit_1a83b42831bb5262b0e9980c72907050e3)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__CustomAudit_1ac471e7e2b967b073b1e2162aff9ba1c1)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceId`](#structFRHAPI__CustomAudit_1a1dec5d6191da8634d4f7c3e5df773558)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__CustomAudit_1ad756a0154037d17a6775f91cac88b3cd)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__CustomAudit_1a9ca3b503b432777bcd3e95fb04b4d655)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceId`](#structFRHAPI__CustomAudit_1a43ea17d34a6e3967fcd7a78743a3bcf2)`(FString NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline void `[`ClearInstanceId`](#structFRHAPI__CustomAudit_1ab02f0416fbbca81340a2b576125600d7)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__CustomAudit_1a6b9d54efba783d2eefc2cc74d6f23912)`()` | Gets the value of HostType_Optional, regardless of it having been set.
`public inline const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__CustomAudit_1ac44d6f2240010d55dec15c3eb5c78ba2)`() const` | Gets the value of HostType_Optional, regardless of it having been set.
`public inline const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__CustomAudit_1a95c487db204a7c2336d32eca34191d48)`(const ERHAPI_HostType & DefaultValue) const` | Gets the value of HostType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostType`](#structFRHAPI__CustomAudit_1ab5f14711152d53870ec6e482a4c2f6be)`(ERHAPI_HostType & OutValue) const` | Fills OutValue with the value of HostType_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__CustomAudit_1a67eccab36844c7e6c1bfb17e2cb7d0fd)`()` | Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__CustomAudit_1a378ad975167db81b5894a86ea1a1c232)`() const` | Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostType`](#structFRHAPI__CustomAudit_1a99f7b696e379cfe015ecb98c4bbd1e85)`(ERHAPI_HostType NewValue)` | Sets the value of HostType_Optional and also sets HostType_IsSet to true.
`public inline void `[`ClearHostType`](#structFRHAPI__CustomAudit_1ad975aa265e14cefc4b2a83e245ca4806)`()` | Clears the value of HostType_Optional and sets HostType_IsSet to false.
`public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__CustomAudit_1aabd3ce91e4a62146cd2d038af573eaac)`()` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__CustomAudit_1a356dc49f34efb251c7a4d97855826d83)`() const` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__CustomAudit_1a69a7ad9568781e769d703bc42e62345b)`(const FGuid & DefaultValue) const` | Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__CustomAudit_1ac393bd4729de1ef13591e8d9c363652e)`(FGuid & OutValue) const` | Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__CustomAudit_1a6c2441ad9f02131b711694064515332f)`()` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__CustomAudit_1ac4a05423b4961f1faa7f12cad6f63663)`() const` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostPlayerUuid`](#structFRHAPI__CustomAudit_1a34bff47ed878115d1df3b95d607b0f4c)`(FGuid NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.
`public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__CustomAudit_1a9be6e8b4c5a94c557ed2d6d04774d314)`()` | Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.
`public inline FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__CustomAudit_1adad1c225368e6060433ca58df54b9e87)`()` | Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__CustomAudit_1a3200dd1faf8940f41871436569096177)`() const` | Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__CustomAudit_1a85b496150ee82c8d33cb7c61f2214281)`(const FGuid & DefaultValue) const` | Gets the value of InstanceRequestTemplate_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceRequestTemplate`](#structFRHAPI__CustomAudit_1abceaa536422697856293ee8a0ede2129)`(FGuid & OutValue) const` | Fills OutValue with the value of InstanceRequestTemplate_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__CustomAudit_1ad57649d20c3604ba6a21e91b1bc2afd0)`()` | Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__CustomAudit_1a8e8997357bf9d14416da03f86e1e32b8)`() const` | Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceRequestTemplate`](#structFRHAPI__CustomAudit_1aa4e55878f60e1d627741ce86cf283613)`(FGuid NewValue)` | Sets the value of InstanceRequestTemplate_Optional and also sets InstanceRequestTemplate_IsSet to true.
`public inline void `[`ClearInstanceRequestTemplate`](#structFRHAPI__CustomAudit_1a89ac92014e8b1d16ea877998260e89d4)`()` | Clears the value of InstanceRequestTemplate_Optional and sets InstanceRequestTemplate_IsSet to false.
`public inline FString & `[`GetMap`](#structFRHAPI__CustomAudit_1ab738c40f819c17a52c2a88aa3e01365a)`()` | Gets the value of Map_Optional, regardless of it having been set.
`public inline const FString & `[`GetMap`](#structFRHAPI__CustomAudit_1acde3b7dafa6ad1b9cd58a291f0ade78d)`() const` | Gets the value of Map_Optional, regardless of it having been set.
`public inline const FString & `[`GetMap`](#structFRHAPI__CustomAudit_1a6334f6fe12bef40601fc05596225a9f3)`(const FString & DefaultValue) const` | Gets the value of Map_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMap`](#structFRHAPI__CustomAudit_1a16733cdd73c9f2147a8c094c18ecc730)`(FString & OutValue) const` | Fills OutValue with the value of Map_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMapOrNull`](#structFRHAPI__CustomAudit_1ab3bc83b84447a6aa93c23d4eb32f8815)`()` | Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMapOrNull`](#structFRHAPI__CustomAudit_1ada0a14fc7441a7d2cace2dc04e3d1e2e)`() const` | Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMap`](#structFRHAPI__CustomAudit_1a316d4419683b0fe8b43ccfe2c82709da)`(FString NewValue)` | Sets the value of Map_Optional and also sets Map_IsSet to true.
`public inline void `[`ClearMap`](#structFRHAPI__CustomAudit_1ac81e152ee000e51e12e4b3840458100a)`()` | Clears the value of Map_Optional and sets Map_IsSet to false.
`public inline FString & `[`GetMode`](#structFRHAPI__CustomAudit_1ac29c44eb545adc8e20c716e5b080815c)`()` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline const FString & `[`GetMode`](#structFRHAPI__CustomAudit_1a6034c0b8cf0f1399128f9443f665851a)`() const` | Gets the value of Mode_Optional, regardless of it having been set.
`public inline const FString & `[`GetMode`](#structFRHAPI__CustomAudit_1a2c82dcde32ca6110eb5dfe82cf365b4d)`(const FString & DefaultValue) const` | Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMode`](#structFRHAPI__CustomAudit_1a2834c1513685c1245170dabf11ea9a60)`(FString & OutValue) const` | Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetModeOrNull`](#structFRHAPI__CustomAudit_1aa9ee6fb3390edc01eaa2371ebdce53fd)`()` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetModeOrNull`](#structFRHAPI__CustomAudit_1a27d4bca4e052fb9e7424b03cad3fe0cf)`() const` | Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMode`](#structFRHAPI__CustomAudit_1a2d4b0f83df6acf630b10ec5f02e15652)`(FString NewValue)` | Sets the value of Mode_Optional and also sets Mode_IsSet to true.
`public inline void `[`ClearMode`](#structFRHAPI__CustomAudit_1a224e89268651e56dbab1c0f710408898)`()` | Clears the value of Mode_Optional and sets Mode_IsSet to false.
`public inline FString & `[`GetAllocationId`](#structFRHAPI__CustomAudit_1a6451ce413dd610dd208cb4ce9c2c7ba4)`()` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetAllocationId`](#structFRHAPI__CustomAudit_1a9b798d1a65feff126e299451e73e80c2)`() const` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetAllocationId`](#structFRHAPI__CustomAudit_1a4a31452b40cc989b8902440a813199ae)`(const FString & DefaultValue) const` | Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAllocationId`](#structFRHAPI__CustomAudit_1a9af6865692feeb3e52d5c8e5fca5abda)`(FString & OutValue) const` | Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetAllocationIdOrNull`](#structFRHAPI__CustomAudit_1ab0b0930342c925ccb14e82eabf11f563)`()` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__CustomAudit_1a3e1d33deb2e310f9821dc815d75bdbfe)`() const` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAllocationId`](#structFRHAPI__CustomAudit_1acedc874c1467006368eeabf7f9c52131)`(FString NewValue)` | Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.
`public inline void `[`ClearAllocationId`](#structFRHAPI__CustomAudit_1a9fa4b626693bf67e6c5f1b7ffeb2f8fb)`()` | Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.
`public inline ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__CustomAudit_1a7b14441b2d7f9a82f5bc7f13d9df70b9)`()` | Gets the value of JoinStatus_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__CustomAudit_1accd4350b9c5396c4cd246727581c8353)`() const` | Gets the value of JoinStatus_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__CustomAudit_1aba16b69cf492ea43cfee410459ab0536)`(const ERHAPI_InstanceJoinableStatus & DefaultValue) const` | Gets the value of JoinStatus_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinStatus`](#structFRHAPI__CustomAudit_1a1d90935d63e736d93c7908474fa6d564)`(ERHAPI_InstanceJoinableStatus & OutValue) const` | Fills OutValue with the value of JoinStatus_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__CustomAudit_1a3ce2965369359a1fb650eb848f0d12bf)`()` | Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__CustomAudit_1a207d0395e0374dcf8334ce357cf6b42c)`() const` | Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinStatus`](#structFRHAPI__CustomAudit_1aa3c01ede0bde52a9612ed0794b22e750)`(ERHAPI_InstanceJoinableStatus NewValue)` | Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true.
`public inline void `[`ClearJoinStatus`](#structFRHAPI__CustomAudit_1aa81cf7ebc8952929c8598ba0f68bd4ac)`()` | Clears the value of JoinStatus_Optional and sets JoinStatus_IsSet to false.
`public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__CustomAudit_1a824dffaa05097935589e4f583577820d)`()` | Gets the value of JoinParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__CustomAudit_1a7c306ed6b4681b1f2199fc5597758f37)`() const` | Gets the value of JoinParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__CustomAudit_1a3845310c6d31c2dc86d4152c32bf6e96)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & DefaultValue) const` | Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinParams`](#structFRHAPI__CustomAudit_1a33982c312f99ea461f180dee103535af)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & OutValue) const` | Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__CustomAudit_1a4faf9bb165e90c006a00c157a4fc9231)`()` | Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__CustomAudit_1a3ed98ebc1ae016f6b1cc79d16c513a08)`() const` | Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinParams`](#structFRHAPI__CustomAudit_1af8d593d3b5bdeb4d21ad0b89dff72bab)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` NewValue)` | Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.
`public inline void `[`ClearJoinParams`](#structFRHAPI__CustomAudit_1ae733bdded50baedfc3e223d0ba214764)`()` | Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.
`public inline ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__CustomAudit_1ad64bff708aecec2f2c640d07bbcb0c13)`()` | Gets the value of InstanceHealth_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__CustomAudit_1ae8dda3bba79c2e5f51b81dfb401d9d1a)`() const` | Gets the value of InstanceHealth_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__CustomAudit_1a8c2564aa941007da3af7a53a9f151c63)`(const ERHAPI_InstanceHealthStatus & DefaultValue) const` | Gets the value of InstanceHealth_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceHealth`](#structFRHAPI__CustomAudit_1a28e3857a2906eddbc93ac1123d5e93be)`(ERHAPI_InstanceHealthStatus & OutValue) const` | Fills OutValue with the value of InstanceHealth_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__CustomAudit_1a405a340d240ceaa1c711af4fb06a52b1)`()` | Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__CustomAudit_1ab5bcdb45b6622aca3a825de5f4dcbab9)`() const` | Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceHealth`](#structFRHAPI__CustomAudit_1a3194b1e12bcca96f14e66f49cc7a4af0)`(ERHAPI_InstanceHealthStatus NewValue)` | Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true.
`public inline void `[`ClearInstanceHealth`](#structFRHAPI__CustomAudit_1a9de8bcc058469cafdd5e67a5bac02a30)`()` | Clears the value of InstanceHealth_Optional and sets InstanceHealth_IsSet to false.
`public inline FString & `[`GetQueueId`](#structFRHAPI__CustomAudit_1a8e49bd83efa3e8d3e6eff63a5de51341)`()` | Gets the value of QueueId_Optional, regardless of it having been set.
`public inline const FString & `[`GetQueueId`](#structFRHAPI__CustomAudit_1a933e16636313c7849b30fad4e78a14f5)`() const` | Gets the value of QueueId_Optional, regardless of it having been set.
`public inline const FString & `[`GetQueueId`](#structFRHAPI__CustomAudit_1aada59e1146939ce48551b225b326dcb9)`(const FString & DefaultValue) const` | Gets the value of QueueId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetQueueId`](#structFRHAPI__CustomAudit_1a288990494850a7164eeabfd221e057f4)`(FString & OutValue) const` | Fills OutValue with the value of QueueId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetQueueIdOrNull`](#structFRHAPI__CustomAudit_1a3509eb18e45811d2355318aba91c5ca4)`()` | Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetQueueIdOrNull`](#structFRHAPI__CustomAudit_1a9fd461c110819cd96a3a91bc118ff5e0)`() const` | Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetQueueId`](#structFRHAPI__CustomAudit_1ada5b5d590c82b80dac3ba26649717ce0)`(FString NewValue)` | Sets the value of QueueId_Optional and also sets QueueId_IsSet to true.
`public inline void `[`ClearQueueId`](#structFRHAPI__CustomAudit_1a18e3f6d1b8c91874e6675dbf4aec0d31)`()` | Clears the value of QueueId_Optional and sets QueueId_IsSet to false.
`public inline TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__CustomAudit_1a8ed35095fed8d3a430d93f471a459298)`()` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__CustomAudit_1a60fec7ed6a31666bcd388964aef1e1c0)`() const` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__CustomAudit_1a74e7e25f4bc654de67a6d2edfca2bc7c)`(const TArray< FGuid > & DefaultValue) const` | Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayers`](#structFRHAPI__CustomAudit_1a8e2a0313a28aaf0470ebfa1a45e51a9e)`(TArray< FGuid > & OutValue) const` | Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FGuid > * `[`GetPlayersOrNull`](#structFRHAPI__CustomAudit_1a1539b771b5d80db8c83618d81f6b808e)`()` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FGuid > * `[`GetPlayersOrNull`](#structFRHAPI__CustomAudit_1a5c30a7f4ed6821a4f8a0631479bb939c)`() const` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayers`](#structFRHAPI__CustomAudit_1ab48fbfe674fb52d32e6dc7ffd786307e)`(TArray< FGuid > NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true.
`public inline void `[`ClearPlayers`](#structFRHAPI__CustomAudit_1a90f762e35fb330b9a005a4b802a7a195)`()` | Clears the value of Players_Optional and sets Players_IsSet to false.
`public inline FString & `[`GetTicketId`](#structFRHAPI__CustomAudit_1a588b617d2a3fe29b0ce410c6ad9e77ab)`()` | Gets the value of TicketId_Optional, regardless of it having been set.
`public inline const FString & `[`GetTicketId`](#structFRHAPI__CustomAudit_1acf8b8ca12f3fdec61da0baa20deec7d9)`() const` | Gets the value of TicketId_Optional, regardless of it having been set.
`public inline const FString & `[`GetTicketId`](#structFRHAPI__CustomAudit_1ad9f7e60a8abea11af14e26ad4d8013fd)`(const FString & DefaultValue) const` | Gets the value of TicketId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTicketId`](#structFRHAPI__CustomAudit_1a79137fe803783033436506049057e3a7)`(FString & OutValue) const` | Fills OutValue with the value of TicketId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTicketIdOrNull`](#structFRHAPI__CustomAudit_1a23a45b9f39694101bff0defc2830533b)`()` | Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTicketIdOrNull`](#structFRHAPI__CustomAudit_1a395d98b23b7f4d3f89d3fd2fdf11198b)`() const` | Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTicketId`](#structFRHAPI__CustomAudit_1a1c4b0863413d2da42668010f2ca98d99)`(FString NewValue)` | Sets the value of TicketId_Optional and also sets TicketId_IsSet to true.
`public inline void `[`ClearTicketId`](#structFRHAPI__CustomAudit_1a6d342a714e48638ec74d475c020ec213)`()` | Clears the value of TicketId_Optional and sets TicketId_IsSet to false.
`public inline TMap< FString, FString > & `[`GetAdditionalParams`](#structFRHAPI__CustomAudit_1a9cbc9df3ce33a4b55d8cb2fe7544698a)`()` | Gets the value of AdditionalParams_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetAdditionalParams`](#structFRHAPI__CustomAudit_1ab5801f8343afb1effa4d1ec06f160fc2)`() const` | Gets the value of AdditionalParams_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetAdditionalParams`](#structFRHAPI__CustomAudit_1accab5e767c8eeceaa2c1accabf9e8b20)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of AdditionalParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAdditionalParams`](#structFRHAPI__CustomAudit_1aa191c111e89e05a09b5125fdad48259f)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of AdditionalParams_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetAdditionalParamsOrNull`](#structFRHAPI__CustomAudit_1abfe4b6849ad28f270b888f8ada04ea20)`()` | Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetAdditionalParamsOrNull`](#structFRHAPI__CustomAudit_1a3a3553b29d4f0802ff7d69a93ade04f4)`() const` | Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAdditionalParams`](#structFRHAPI__CustomAudit_1a595e62f46d3468ab5c57e4e5ad9679e8)`(TMap< FString, FString > NewValue)` | Sets the value of AdditionalParams_Optional and also sets AdditionalParams_IsSet to true.
`public inline void `[`ClearAdditionalParams`](#structFRHAPI__CustomAudit_1a598afab98de87598b83f1f0b9aff1679)`()` | Clears the value of AdditionalParams_Optional and sets AdditionalParams_IsSet to false.
`public inline TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__CustomAudit_1ae216016f13d7c6dd8a3b4fcadc0faef4)`()` | Gets the value of MapPreferences_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__CustomAudit_1a3048a285279fcbcad5061a562b48771b)`() const` | Gets the value of MapPreferences_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__CustomAudit_1ab0ed1954e1d1d0541a0916b317cae8b0)`(const TArray< FString > & DefaultValue) const` | Gets the value of MapPreferences_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMapPreferences`](#structFRHAPI__CustomAudit_1aa1d76e51b1915aa065c926ed372f343a)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of MapPreferences_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__CustomAudit_1a90b8638a75e24bd5ce74e4bd9c1ac05c)`()` | Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__CustomAudit_1a38bab9ba80b3234d3f7865ed4a1ba2a8)`() const` | Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMapPreferences`](#structFRHAPI__CustomAudit_1a4cf2617b36568d34503e9383164742fe)`(TArray< FString > NewValue)` | Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true.
`public inline void `[`ClearMapPreferences`](#structFRHAPI__CustomAudit_1a57ed5f316fa7f6c7acaab5f7db37ad39)`()` | Clears the value of MapPreferences_Optional and sets MapPreferences_IsSet to false.
`public inline TArray< FString > & `[`GetQueuedSessionId`](#structFRHAPI__CustomAudit_1a98ae96ffd56faab16453ec131a4a1555)`()` | Gets the value of QueuedSessionId_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetQueuedSessionId`](#structFRHAPI__CustomAudit_1a6fe1e506626e05fbef8f5825ffc67042)`() const` | Gets the value of QueuedSessionId_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetQueuedSessionId`](#structFRHAPI__CustomAudit_1a4742afda5bdbe4ba42237a8e38772db4)`(const TArray< FString > & DefaultValue) const` | Gets the value of QueuedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetQueuedSessionId`](#structFRHAPI__CustomAudit_1a7ce02c5299d232a86b234ab11ee429ad)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of QueuedSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FString > * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__CustomAudit_1a420e2060586682ac780d23fdb275c4c8)`()` | Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FString > * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__CustomAudit_1a6cd857867e7221cc1d7a462cbd21297d)`() const` | Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetQueuedSessionId`](#structFRHAPI__CustomAudit_1a9b1f96209d221c22d73355c8efdb2da0)`(TArray< FString > NewValue)` | Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true.
`public inline void `[`ClearQueuedSessionId`](#structFRHAPI__CustomAudit_1a345a66bc15780dbfd77dd1c0393b95b6)`()` | Clears the value of QueuedSessionId_Optional and sets QueuedSessionId_IsSet to false.
`public inline FGuid & `[`GetRequestingUserUuid`](#structFRHAPI__CustomAudit_1a59375e37298141ec2e6e221c729eec0e)`()` | Gets the value of RequestingUserUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetRequestingUserUuid`](#structFRHAPI__CustomAudit_1a79fd7b56c0656d7db7b3ac3cfe139ee6)`() const` | Gets the value of RequestingUserUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetRequestingUserUuid`](#structFRHAPI__CustomAudit_1adbe7c6a06b3d4d101e3fc617c88b3d90)`(const FGuid & DefaultValue) const` | Gets the value of RequestingUserUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRequestingUserUuid`](#structFRHAPI__CustomAudit_1a1194dacfda55f5d60b60e2b74f56e99d)`(FGuid & OutValue) const` | Fills OutValue with the value of RequestingUserUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetRequestingUserUuidOrNull`](#structFRHAPI__CustomAudit_1ab70144ead8ad39c509531ea6237c1765)`()` | Returns a pointer to RequestingUserUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetRequestingUserUuidOrNull`](#structFRHAPI__CustomAudit_1a4bdcb7ca9bc03791f952d6db87e9d739)`() const` | Returns a pointer to RequestingUserUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRequestingUserUuid`](#structFRHAPI__CustomAudit_1a0cecec93d8d576b2b1c05e7be4747284)`(FGuid NewValue)` | Sets the value of RequestingUserUuid_Optional and also sets RequestingUserUuid_IsSet to true.
`public inline void `[`ClearRequestingUserUuid`](#structFRHAPI__CustomAudit_1aea8b28826904047b691947f3d5a0e653)`()` | Clears the value of RequestingUserUuid_Optional and sets RequestingUserUuid_IsSet to false.
`public inline FDateTime & `[`GetEventDatetime`](#structFRHAPI__CustomAudit_1afb18a0667c599ef1d592a4b0e16233f4)`()` | Gets the value of EventDatetime.
`public inline const FDateTime & `[`GetEventDatetime`](#structFRHAPI__CustomAudit_1a6807a2f77cf7c191cc8c940078aa86e0)`() const` | Gets the value of EventDatetime.
`public inline void `[`SetEventDatetime`](#structFRHAPI__CustomAudit_1a8630f2391decc9461c55c1f15bcb1a89)`(FDateTime NewValue)` | Sets the value of EventDatetime.

#### Members

#### `public FString `[`EventName`](#structFRHAPI__CustomAudit_1a1f7d62a2d03f04b3efbe129200a0c95d) <a id="structFRHAPI__CustomAudit_1a1f7d62a2d03f04b3efbe129200a0c95d"></a>

Name of the audit event you are creating. Customer created events will be prepended with 'customer.'.

<br>
#### `public FString `[`SessionId`](#structFRHAPI__CustomAudit_1a62b1ca41cb9396abfb5c634e9bef9894) <a id="structFRHAPI__CustomAudit_1a62b1ca41cb9396abfb5c634e9bef9894"></a>

ID of the session this event occurred in.

<br>
#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__CustomAudit_1a7077f0e2265de4e2bc305c75f0d22eb1) <a id="structFRHAPI__CustomAudit_1a7077f0e2265de4e2bc305c75f0d22eb1"></a>

Custom data for this audit request.

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__CustomAudit_1a74acc8d4cc8fe343e902bd65d85eb600) <a id="structFRHAPI__CustomAudit_1a74acc8d4cc8fe343e902bd65d85eb600"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public FString `[`SessionType_Optional`](#structFRHAPI__CustomAudit_1a1054d75a6525349dc4b62946d63d24af) <a id="structFRHAPI__CustomAudit_1a1054d75a6525349dc4b62946d63d24af"></a>

Type of the session this event occurred in.

<br>
#### `public bool `[`SessionType_IsSet`](#structFRHAPI__CustomAudit_1a689021d27bb9772cb3b86cca9c085e52) <a id="structFRHAPI__CustomAudit_1a689021d27bb9772cb3b86cca9c085e52"></a>

true if SessionType_Optional has been set to a value

<br>
#### `public FString `[`RegionId_Optional`](#structFRHAPI__CustomAudit_1a0f27cb78f2c653e51b0a44f08d0e3f68) <a id="structFRHAPI__CustomAudit_1a0f27cb78f2c653e51b0a44f08d0e3f68"></a>

Region ID for this event.

<br>
#### `public bool `[`RegionId_IsSet`](#structFRHAPI__CustomAudit_1aebb6e4308e792eb9bfe9b75443c774dc) <a id="structFRHAPI__CustomAudit_1aebb6e4308e792eb9bfe9b75443c774dc"></a>

true if RegionId_Optional has been set to a value

<br>
#### `public bool `[`Joinable_Optional`](#structFRHAPI__CustomAudit_1a52ae213eb05fe3a4488cb20784943b8c) <a id="structFRHAPI__CustomAudit_1a52ae213eb05fe3a4488cb20784943b8c"></a>

Whether or not the session is publicly joinable.

<br>
#### `public bool `[`Joinable_IsSet`](#structFRHAPI__CustomAudit_1a4eb004fa82857ab524847a9f19800061) <a id="structFRHAPI__CustomAudit_1a4eb004fa82857ab524847a9f19800061"></a>

true if Joinable_Optional has been set to a value

<br>
#### `public TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > `[`UpdatedTeams_Optional`](#structFRHAPI__CustomAudit_1a33364c77e595115568a281298496802d) <a id="structFRHAPI__CustomAudit_1a33364c77e595115568a281298496802d"></a>

Updated team numbers and sizes.

<br>
#### `public bool `[`UpdatedTeams_IsSet`](#structFRHAPI__CustomAudit_1a6e1faa4ef78c8e382e0860deda9a190b) <a id="structFRHAPI__CustomAudit_1a6e1faa4ef78c8e382e0860deda9a190b"></a>

true if UpdatedTeams_Optional has been set to a value

<br>
#### `public ERHAPI_InviteSource `[`Source_Optional`](#structFRHAPI__CustomAudit_1a62de6402bfa40965c01ec5acf4914e1f) <a id="structFRHAPI__CustomAudit_1a62de6402bfa40965c01ec5acf4914e1f"></a>

The source of an invite.

<br>
#### `public bool `[`Source_IsSet`](#structFRHAPI__CustomAudit_1a185727ffa35cb83f1482616f5e97fc29) <a id="structFRHAPI__CustomAudit_1a185727ffa35cb83f1482616f5e97fc29"></a>

true if Source_Optional has been set to a value

<br>
#### `public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__CustomAudit_1ac0f99fa1f19715e707dbcf425b6ce03b) <a id="structFRHAPI__CustomAudit_1ac0f99fa1f19715e707dbcf425b6ce03b"></a>

UUID of a specific player being effected in this event.

<br>
#### `public bool `[`PlayerUuid_IsSet`](#structFRHAPI__CustomAudit_1a01402eb2c4e845008bb11b45b1ff8ff7) <a id="structFRHAPI__CustomAudit_1a01402eb2c4e845008bb11b45b1ff8ff7"></a>

true if PlayerUuid_Optional has been set to a value

<br>
#### `public int32 `[`TeamId_Optional`](#structFRHAPI__CustomAudit_1a2321b011347d875f7ad4984e2e8cc85c) <a id="structFRHAPI__CustomAudit_1a2321b011347d875f7ad4984e2e8cc85c"></a>

ID of the team being effected in this event.

<br>
#### `public bool `[`TeamId_IsSet`](#structFRHAPI__CustomAudit_1a7946d32a1c7e452d17235003204cd46a) <a id="structFRHAPI__CustomAudit_1a7946d32a1c7e452d17235003204cd46a"></a>

true if TeamId_Optional has been set to a value

<br>
#### `public FString `[`InvitedSessionId_Optional`](#structFRHAPI__CustomAudit_1a540adcc7e267d2258a6b021c9c681bdf) <a id="structFRHAPI__CustomAudit_1a540adcc7e267d2258a6b021c9c681bdf"></a>

ID of the session being invited in this event.

<br>
#### `public bool `[`InvitedSessionId_IsSet`](#structFRHAPI__CustomAudit_1a266a1722e2216252581926844c3476b6) <a id="structFRHAPI__CustomAudit_1a266a1722e2216252581926844c3476b6"></a>

true if InvitedSessionId_Optional has been set to a value

<br>
#### `public FString `[`RemovedSessionId_Optional`](#structFRHAPI__CustomAudit_1a94bc39db85b98232379cf092823cda18) <a id="structFRHAPI__CustomAudit_1a94bc39db85b98232379cf092823cda18"></a>

ID of the session being removed in this event.

<br>
#### `public bool `[`RemovedSessionId_IsSet`](#structFRHAPI__CustomAudit_1a4eec103c0ff399f2de1c56da4d641a00) <a id="structFRHAPI__CustomAudit_1a4eec103c0ff399f2de1c56da4d641a00"></a>

true if RemovedSessionId_Optional has been set to a value

<br>
#### `public FString `[`Version_Optional`](#structFRHAPI__CustomAudit_1a367cc3ba8b0decfa578e44939c393a8d) <a id="structFRHAPI__CustomAudit_1a367cc3ba8b0decfa578e44939c393a8d"></a>

Version updated in this event.

<br>
#### `public bool `[`Version_IsSet`](#structFRHAPI__CustomAudit_1a6d70ba02eb83e5146a625a4f276728b1) <a id="structFRHAPI__CustomAudit_1a6d70ba02eb83e5146a625a4f276728b1"></a>

true if Version_Optional has been set to a value

<br>
#### `public `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` `[`ClientSettings_Optional`](#structFRHAPI__CustomAudit_1aabd94ef58c459b3238e340002905bff8) <a id="structFRHAPI__CustomAudit_1aabd94ef58c459b3238e340002905bff8"></a>

Client settings updated as part of this event.

<br>
#### `public bool `[`ClientSettings_IsSet`](#structFRHAPI__CustomAudit_1a41c3b8132547a11137a7155e5163897c) <a id="structFRHAPI__CustomAudit_1a41c3b8132547a11137a7155e5163897c"></a>

true if ClientSettings_Optional has been set to a value

<br>
#### `public `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` `[`CrossplayPreferences_Optional`](#structFRHAPI__CustomAudit_1a25a21996b6827eaddd31f325c47f27c7) <a id="structFRHAPI__CustomAudit_1a25a21996b6827eaddd31f325c47f27c7"></a>

Crossplay preferences updated as part of this event.

<br>
#### `public bool `[`CrossplayPreferences_IsSet`](#structFRHAPI__CustomAudit_1aa562407ac0d196942e15d19ad54921ca) <a id="structFRHAPI__CustomAudit_1aa562407ac0d196942e15d19ad54921ca"></a>

true if CrossplayPreferences_Optional has been set to a value

<br>
#### `public ERHAPI_SessionPlayerStatus `[`PlayerStatus_Optional`](#structFRHAPI__CustomAudit_1aab4b38b29e73168cd3e33dacdd09b4ac) <a id="structFRHAPI__CustomAudit_1aab4b38b29e73168cd3e33dacdd09b4ac"></a>

Player's status updated as part of this event.

<br>
#### `public bool `[`PlayerStatus_IsSet`](#structFRHAPI__CustomAudit_1abfb111f7ca6110216d164501eece87d3) <a id="structFRHAPI__CustomAudit_1abfb111f7ca6110216d164501eece87d3"></a>

true if PlayerStatus_Optional has been set to a value

<br>
#### `public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__CustomAudit_1a69f020d76fc8af743590667527513577) <a id="structFRHAPI__CustomAudit_1a69f020d76fc8af743590667527513577"></a>

Platform updated as part of this event.

<br>
#### `public bool `[`Platform_IsSet`](#structFRHAPI__CustomAudit_1aed3acd5d8510f22d988e0088f4791c7d) <a id="structFRHAPI__CustomAudit_1aed3acd5d8510f22d988e0088f4791c7d"></a>

true if Platform_Optional has been set to a value

<br>
#### `public FString `[`PlatformSessionId_Optional`](#structFRHAPI__CustomAudit_1a40bb0893cc8d638add4b2dd029a99826) <a id="structFRHAPI__CustomAudit_1a40bb0893cc8d638add4b2dd029a99826"></a>

ID of the platform session being effected in this event.

<br>
#### `public bool `[`PlatformSessionId_IsSet`](#structFRHAPI__CustomAudit_1a20e2e977dbd7ae416bf4f112a6c97ea1) <a id="structFRHAPI__CustomAudit_1a20e2e977dbd7ae416bf4f112a6c97ea1"></a>

true if PlatformSessionId_Optional has been set to a value

<br>
#### `public FString `[`InstanceId_Optional`](#structFRHAPI__CustomAudit_1aecb86eceadc04cb5013c1d4e1dc0d799) <a id="structFRHAPI__CustomAudit_1aecb86eceadc04cb5013c1d4e1dc0d799"></a>

ID of the instance being effected in this event.

<br>
#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__CustomAudit_1aacef537d04185517bb31780891f4c9d2) <a id="structFRHAPI__CustomAudit_1aacef537d04185517bb31780891f4c9d2"></a>

true if InstanceId_Optional has been set to a value

<br>
#### `public ERHAPI_HostType `[`HostType_Optional`](#structFRHAPI__CustomAudit_1a5fccb94aac8b2a87ee75a8302a1c3ad4) <a id="structFRHAPI__CustomAudit_1a5fccb94aac8b2a87ee75a8302a1c3ad4"></a>

Type of the host being effected in this event.

<br>
#### `public bool `[`HostType_IsSet`](#structFRHAPI__CustomAudit_1ade3f4a67c242284547c73013c47b9270) <a id="structFRHAPI__CustomAudit_1ade3f4a67c242284547c73013c47b9270"></a>

true if HostType_Optional has been set to a value

<br>
#### `public FGuid `[`HostPlayerUuid_Optional`](#structFRHAPI__CustomAudit_1ae0899cd543681930d92050a001ebaca6) <a id="structFRHAPI__CustomAudit_1ae0899cd543681930d92050a001ebaca6"></a>

UUID of the player hosting during this event.

<br>
#### `public bool `[`HostPlayerUuid_IsSet`](#structFRHAPI__CustomAudit_1affae4633142e8457e338a5158d31437a) <a id="structFRHAPI__CustomAudit_1affae4633142e8457e338a5158d31437a"></a>

true if HostPlayerUuid_Optional has been set to a value

<br>
#### `public FGuid `[`InstanceRequestTemplate_Optional`](#structFRHAPI__CustomAudit_1a4676b5f96d9f1465352dd52735d125ed) <a id="structFRHAPI__CustomAudit_1a4676b5f96d9f1465352dd52735d125ed"></a>

ID of the instance request template being used in this event.

<br>
#### `public bool `[`InstanceRequestTemplate_IsSet`](#structFRHAPI__CustomAudit_1a16d32469923a1336b2cd527d8badd32d) <a id="structFRHAPI__CustomAudit_1a16d32469923a1336b2cd527d8badd32d"></a>

true if InstanceRequestTemplate_Optional has been set to a value

<br>
#### `public FString `[`Map_Optional`](#structFRHAPI__CustomAudit_1ae9b00d6b7c33c5b66e2e2fd36582ea64) <a id="structFRHAPI__CustomAudit_1ae9b00d6b7c33c5b66e2e2fd36582ea64"></a>

Map being used in this event.

<br>
#### `public bool `[`Map_IsSet`](#structFRHAPI__CustomAudit_1a4aa17299e6c8edaacf03f425763e11c4) <a id="structFRHAPI__CustomAudit_1a4aa17299e6c8edaacf03f425763e11c4"></a>

true if Map_Optional has been set to a value

<br>
#### `public FString `[`Mode_Optional`](#structFRHAPI__CustomAudit_1a9f9fc3fcbe849e599339478b03973ae0) <a id="structFRHAPI__CustomAudit_1a9f9fc3fcbe849e599339478b03973ae0"></a>

Mode being used in this event.

<br>
#### `public bool `[`Mode_IsSet`](#structFRHAPI__CustomAudit_1ac384da07f71cf17b0f7ba8f76af1fddd) <a id="structFRHAPI__CustomAudit_1ac384da07f71cf17b0f7ba8f76af1fddd"></a>

true if Mode_Optional has been set to a value

<br>
#### `public FString `[`AllocationId_Optional`](#structFRHAPI__CustomAudit_1a82d23df4d216d7719106b44ad726b74a) <a id="structFRHAPI__CustomAudit_1a82d23df4d216d7719106b44ad726b74a"></a>

Allocation ID of instance in this event.

<br>
#### `public bool `[`AllocationId_IsSet`](#structFRHAPI__CustomAudit_1a6754cec8ea41613e144fbd0ed294b3ce) <a id="structFRHAPI__CustomAudit_1a6754cec8ea41613e144fbd0ed294b3ce"></a>

true if AllocationId_Optional has been set to a value

<br>
#### `public ERHAPI_InstanceJoinableStatus `[`JoinStatus_Optional`](#structFRHAPI__CustomAudit_1a15a82be4eb9b3d8d80a948bd0273219c) <a id="structFRHAPI__CustomAudit_1a15a82be4eb9b3d8d80a948bd0273219c"></a>

Instance's joinability status.

<br>
#### `public bool `[`JoinStatus_IsSet`](#structFRHAPI__CustomAudit_1ad7898ef8b2aef76a49ce06dab46ccf1b) <a id="structFRHAPI__CustomAudit_1ad7898ef8b2aef76a49ce06dab46ccf1b"></a>

true if JoinStatus_Optional has been set to a value

<br>
#### `public `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` `[`JoinParams_Optional`](#structFRHAPI__CustomAudit_1af614f2cc2c7c711e53630b423ac28097) <a id="structFRHAPI__CustomAudit_1af614f2cc2c7c711e53630b423ac28097"></a>

Instance's join parameters for this event.

<br>
#### `public bool `[`JoinParams_IsSet`](#structFRHAPI__CustomAudit_1a8d0c96b3e918859b880638542cef375c) <a id="structFRHAPI__CustomAudit_1a8d0c96b3e918859b880638542cef375c"></a>

true if JoinParams_Optional has been set to a value

<br>
#### `public ERHAPI_InstanceHealthStatus `[`InstanceHealth_Optional`](#structFRHAPI__CustomAudit_1a7089e7a6a1ada161736bca3c454af3fa) <a id="structFRHAPI__CustomAudit_1a7089e7a6a1ada161736bca3c454af3fa"></a>

Instance's health status for this event.

<br>
#### `public bool `[`InstanceHealth_IsSet`](#structFRHAPI__CustomAudit_1ab7f0aa29c33b631158731b6719d795cf) <a id="structFRHAPI__CustomAudit_1ab7f0aa29c33b631158731b6719d795cf"></a>

true if InstanceHealth_Optional has been set to a value

<br>
#### `public FString `[`QueueId_Optional`](#structFRHAPI__CustomAudit_1affce5075a9686aee2cdcac4603f95e0e) <a id="structFRHAPI__CustomAudit_1affce5075a9686aee2cdcac4603f95e0e"></a>

ID for the queue in this event.

<br>
#### `public bool `[`QueueId_IsSet`](#structFRHAPI__CustomAudit_1a22670378c70dc630110e382d5d99c54e) <a id="structFRHAPI__CustomAudit_1a22670378c70dc630110e382d5d99c54e"></a>

true if QueueId_Optional has been set to a value

<br>
#### `public TArray< FGuid > `[`Players_Optional`](#structFRHAPI__CustomAudit_1a82264d2c20de4143165cf1e6a78591c0) <a id="structFRHAPI__CustomAudit_1a82264d2c20de4143165cf1e6a78591c0"></a>

List of players uuids that were effected in this event. Each player will get a unique event.

<br>
#### `public bool `[`Players_IsSet`](#structFRHAPI__CustomAudit_1af5264dd487ad4900d91d7624af789dbe) <a id="structFRHAPI__CustomAudit_1af5264dd487ad4900d91d7624af789dbe"></a>

true if Players_Optional has been set to a value

<br>
#### `public FString `[`TicketId_Optional`](#structFRHAPI__CustomAudit_1a2bf90472c142c20fb2f15059a50a8f30) <a id="structFRHAPI__CustomAudit_1a2bf90472c142c20fb2f15059a50a8f30"></a>

Matchmaking ticket id in this event.

<br>
#### `public bool `[`TicketId_IsSet`](#structFRHAPI__CustomAudit_1a09a384cf2240361afa88243481b542af) <a id="structFRHAPI__CustomAudit_1a09a384cf2240361afa88243481b542af"></a>

true if TicketId_Optional has been set to a value

<br>
#### `public TMap< FString, FString > `[`AdditionalParams_Optional`](#structFRHAPI__CustomAudit_1a496046cd561e047032897b9681e22dfc) <a id="structFRHAPI__CustomAudit_1a496046cd561e047032897b9681e22dfc"></a>

Additional matchmaking parameters in this event.

<br>
#### `public bool `[`AdditionalParams_IsSet`](#structFRHAPI__CustomAudit_1aa117d8da2eb0072a333c9b5f36abd41c) <a id="structFRHAPI__CustomAudit_1aa117d8da2eb0072a333c9b5f36abd41c"></a>

true if AdditionalParams_Optional has been set to a value

<br>
#### `public TArray< FString > `[`MapPreferences_Optional`](#structFRHAPI__CustomAudit_1a2006fcb25f70c7a4ae4cebaf69d8410e) <a id="structFRHAPI__CustomAudit_1a2006fcb25f70c7a4ae4cebaf69d8410e"></a>

Map preferences in this event.

<br>
#### `public bool `[`MapPreferences_IsSet`](#structFRHAPI__CustomAudit_1a54fc0d7441ad89a3fdce78329d74feb4) <a id="structFRHAPI__CustomAudit_1a54fc0d7441ad89a3fdce78329d74feb4"></a>

true if MapPreferences_Optional has been set to a value

<br>
#### `public TArray< FString > `[`QueuedSessionId_Optional`](#structFRHAPI__CustomAudit_1a51bcb79be9cad08ca41036f6b5de3331) <a id="structFRHAPI__CustomAudit_1a51bcb79be9cad08ca41036f6b5de3331"></a>

ID of the session that was/is in a matchmaking queue for this event.

<br>
#### `public bool `[`QueuedSessionId_IsSet`](#structFRHAPI__CustomAudit_1acca01db59e9dc9132f0708db6734d32c) <a id="structFRHAPI__CustomAudit_1acca01db59e9dc9132f0708db6734d32c"></a>

true if QueuedSessionId_Optional has been set to a value

<br>
#### `public FGuid `[`RequestingUserUuid_Optional`](#structFRHAPI__CustomAudit_1a55ed4339f01639d80817c0051c73411b) <a id="structFRHAPI__CustomAudit_1a55ed4339f01639d80817c0051c73411b"></a>

<br>
#### `public bool `[`RequestingUserUuid_IsSet`](#structFRHAPI__CustomAudit_1a1668e2d898772536e01eb7131868cb0b) <a id="structFRHAPI__CustomAudit_1a1668e2d898772536e01eb7131868cb0b"></a>

true if RequestingUserUuid_Optional has been set to a value

<br>
#### `public FDateTime `[`EventDatetime`](#structFRHAPI__CustomAudit_1ab120dde4d71b70e9db19883a974e4929) <a id="structFRHAPI__CustomAudit_1ab120dde4d71b70e9db19883a974e4929"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__CustomAudit_1ae1a2afb13864899f6c64106c02e861c7)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__CustomAudit_1ae1a2afb13864899f6c64106c02e861c7"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__CustomAudit_1a400d3ebdf7ae98cf80af4a1534f35a25)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__CustomAudit_1a400d3ebdf7ae98cf80af4a1534f35a25"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetEventName`](#structFRHAPI__CustomAudit_1af72eae961ffe91557d8ab9b7b0e7faa1)`()` <a id="structFRHAPI__CustomAudit_1af72eae961ffe91557d8ab9b7b0e7faa1"></a>

Gets the value of EventName.

<br>
#### `public inline const FString & `[`GetEventName`](#structFRHAPI__CustomAudit_1a293514a6dde9c839f664d1bc543b141c)`() const` <a id="structFRHAPI__CustomAudit_1a293514a6dde9c839f664d1bc543b141c"></a>

Gets the value of EventName.

<br>
#### `public inline void `[`SetEventName`](#structFRHAPI__CustomAudit_1acfe329a24523fa4028b744ed18c2cb9d)`(FString NewValue)` <a id="structFRHAPI__CustomAudit_1acfe329a24523fa4028b744ed18c2cb9d"></a>

Sets the value of EventName.

<br>
#### `public inline FString & `[`GetSessionId`](#structFRHAPI__CustomAudit_1aeaf3d3ca97975fbdbbcb9c15e334fe0a)`()` <a id="structFRHAPI__CustomAudit_1aeaf3d3ca97975fbdbbcb9c15e334fe0a"></a>

Gets the value of SessionId.

<br>
#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__CustomAudit_1a457c23bcc00a726212c231c5d794bf7a)`() const` <a id="structFRHAPI__CustomAudit_1a457c23bcc00a726212c231c5d794bf7a"></a>

Gets the value of SessionId.

<br>
#### `public inline void `[`SetSessionId`](#structFRHAPI__CustomAudit_1ad808a0164e75f826adf3cea473284bce)`(FString NewValue)` <a id="structFRHAPI__CustomAudit_1ad808a0164e75f826adf3cea473284bce"></a>

Sets the value of SessionId.

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CustomAudit_1add53f0d8fb00adf5b575b5fb78374db1)`()` <a id="structFRHAPI__CustomAudit_1add53f0d8fb00adf5b575b5fb78374db1"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CustomAudit_1ac8ae223f9b7cb3731983387a81cf7e78)`() const` <a id="structFRHAPI__CustomAudit_1ac8ae223f9b7cb3731983387a81cf7e78"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__CustomAudit_1a6df24cbebca40fc09bf0c8da8f08511b)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1a6df24cbebca40fc09bf0c8da8f08511b"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__CustomAudit_1ae52129b6aac9b23058f2d68c927e45c0)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__CustomAudit_1ae52129b6aac9b23058f2d68c927e45c0"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CustomAudit_1abf0844f8977c69b512f0ba00330d5a48)`()` <a id="structFRHAPI__CustomAudit_1abf0844f8977c69b512f0ba00330d5a48"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__CustomAudit_1a4b09e4ff7e74c36834af22c5abf4ba77)`() const` <a id="structFRHAPI__CustomAudit_1a4b09e4ff7e74c36834af22c5abf4ba77"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__CustomAudit_1ae762535706171cefc40b61b08ea56f4a)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__CustomAudit_1ae762535706171cefc40b61b08ea56f4a"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__CustomAudit_1a49bba572c3df065a1f317db145c06f66)`()` <a id="structFRHAPI__CustomAudit_1a49bba572c3df065a1f317db145c06f66"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
#### `public inline FString & `[`GetSessionType`](#structFRHAPI__CustomAudit_1ac1658d76c64905b9df12627a86feda3f)`()` <a id="structFRHAPI__CustomAudit_1ac1658d76c64905b9df12627a86feda3f"></a>

Gets the value of SessionType_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetSessionType`](#structFRHAPI__CustomAudit_1a37bb7b4d2eb43388fc6a44ae28cec126)`() const` <a id="structFRHAPI__CustomAudit_1a37bb7b4d2eb43388fc6a44ae28cec126"></a>

Gets the value of SessionType_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetSessionType`](#structFRHAPI__CustomAudit_1a119c5e056f772582d42a05de86453e93)`(const FString & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1a119c5e056f772582d42a05de86453e93"></a>

Gets the value of SessionType_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSessionType`](#structFRHAPI__CustomAudit_1a806c152fb7ba6f144a7348c2a0b406db)`(FString & OutValue) const` <a id="structFRHAPI__CustomAudit_1a806c152fb7ba6f144a7348c2a0b406db"></a>

Fills OutValue with the value of SessionType_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetSessionTypeOrNull`](#structFRHAPI__CustomAudit_1ab244a946647ae39ff3d7c4eedd56ac6e)`()` <a id="structFRHAPI__CustomAudit_1ab244a946647ae39ff3d7c4eedd56ac6e"></a>

Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetSessionTypeOrNull`](#structFRHAPI__CustomAudit_1a5a6d71d823c9536437b97298ac94b82f)`() const` <a id="structFRHAPI__CustomAudit_1a5a6d71d823c9536437b97298ac94b82f"></a>

Returns a pointer to SessionType_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSessionType`](#structFRHAPI__CustomAudit_1a862af6c966b02a4a3285852c4215d3c3)`(FString NewValue)` <a id="structFRHAPI__CustomAudit_1a862af6c966b02a4a3285852c4215d3c3"></a>

Sets the value of SessionType_Optional and also sets SessionType_IsSet to true.

<br>
#### `public inline void `[`ClearSessionType`](#structFRHAPI__CustomAudit_1a95d52bcfcb975437eaa46d7607c3f7a8)`()` <a id="structFRHAPI__CustomAudit_1a95d52bcfcb975437eaa46d7607c3f7a8"></a>

Clears the value of SessionType_Optional and sets SessionType_IsSet to false.

<br>
#### `public inline FString & `[`GetRegionId`](#structFRHAPI__CustomAudit_1a4dbd8581f626887089badff8618a65e3)`()` <a id="structFRHAPI__CustomAudit_1a4dbd8581f626887089badff8618a65e3"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__CustomAudit_1a5886fb1f9343e103c3b700604ed2b7db)`() const` <a id="structFRHAPI__CustomAudit_1a5886fb1f9343e103c3b700604ed2b7db"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__CustomAudit_1a0e50a1f281df5c0ee8d8176362478079)`(const FString & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1a0e50a1f281df5c0ee8d8176362478079"></a>

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetRegionId`](#structFRHAPI__CustomAudit_1aaf5c34661fbaf368f3192c780bfef230)`(FString & OutValue) const` <a id="structFRHAPI__CustomAudit_1aaf5c34661fbaf368f3192c780bfef230"></a>

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__CustomAudit_1aaab075cade4fedac1d5585c19b9ed9d7)`()` <a id="structFRHAPI__CustomAudit_1aaab075cade4fedac1d5585c19b9ed9d7"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__CustomAudit_1a001f998c2d66e0f81156b362209d8602)`() const` <a id="structFRHAPI__CustomAudit_1a001f998c2d66e0f81156b362209d8602"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetRegionId`](#structFRHAPI__CustomAudit_1a303526a3cd9e9067b1059aa42d086f95)`(FString NewValue)` <a id="structFRHAPI__CustomAudit_1a303526a3cd9e9067b1059aa42d086f95"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.

<br>
#### `public inline void `[`ClearRegionId`](#structFRHAPI__CustomAudit_1ad54dc6c2db0fb1da42f497417e797cf7)`()` <a id="structFRHAPI__CustomAudit_1ad54dc6c2db0fb1da42f497417e797cf7"></a>

Clears the value of RegionId_Optional and sets RegionId_IsSet to false.

<br>
#### `public inline bool & `[`GetJoinable`](#structFRHAPI__CustomAudit_1a50284eb282d529df37a2119bf022d079)`()` <a id="structFRHAPI__CustomAudit_1a50284eb282d529df37a2119bf022d079"></a>

Gets the value of Joinable_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetJoinable`](#structFRHAPI__CustomAudit_1a8032def0e241242fcdda8437cc02e3e8)`() const` <a id="structFRHAPI__CustomAudit_1a8032def0e241242fcdda8437cc02e3e8"></a>

Gets the value of Joinable_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetJoinable`](#structFRHAPI__CustomAudit_1a93945eac4627cdcb170312dca25cf18c)`(const bool & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1a93945eac4627cdcb170312dca25cf18c"></a>

Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetJoinable`](#structFRHAPI__CustomAudit_1aa9342391451b61b55461be42f8968253)`(bool & OutValue) const` <a id="structFRHAPI__CustomAudit_1aa9342391451b61b55461be42f8968253"></a>

Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline bool * `[`GetJoinableOrNull`](#structFRHAPI__CustomAudit_1adb48e04ca07af1b38d022db859c62325)`()` <a id="structFRHAPI__CustomAudit_1adb48e04ca07af1b38d022db859c62325"></a>

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const bool * `[`GetJoinableOrNull`](#structFRHAPI__CustomAudit_1a02c34dfcf411fe7e1b2dccb962e22caf)`() const` <a id="structFRHAPI__CustomAudit_1a02c34dfcf411fe7e1b2dccb962e22caf"></a>

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetJoinable`](#structFRHAPI__CustomAudit_1a5d9ae0f4bd6a9c325ac99261e2e35590)`(bool NewValue)` <a id="structFRHAPI__CustomAudit_1a5d9ae0f4bd6a9c325ac99261e2e35590"></a>

Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.

<br>
#### `public inline void `[`ClearJoinable`](#structFRHAPI__CustomAudit_1ac2c6c3ac97779efc0fc91ca8f15b4dfa)`()` <a id="structFRHAPI__CustomAudit_1ac2c6c3ac97779efc0fc91ca8f15b4dfa"></a>

Clears the value of Joinable_Optional and sets Joinable_IsSet to false.

<br>
#### `public inline bool `[`IsJoinableDefaultValue`](#structFRHAPI__CustomAudit_1aaa0152e4ff594945b6c81f66d2799745)`() const` <a id="structFRHAPI__CustomAudit_1aaa0152e4ff594945b6c81f66d2799745"></a>

Returns true if Joinable_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetJoinableToDefault`](#structFRHAPI__CustomAudit_1aa099b7e38561c0d167cfd3614a32baad)`()` <a id="structFRHAPI__CustomAudit_1aa099b7e38561c0d167cfd3614a32baad"></a>

Sets the value of Joinable_Optional to its default and also sets Joinable_IsSet to true.

<br>
#### `public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__CustomAudit_1af4faf3389de86e8ad16eabca912d8922)`()` <a id="structFRHAPI__CustomAudit_1af4faf3389de86e8ad16eabca912d8922"></a>

Gets the value of UpdatedTeams_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__CustomAudit_1aabfed0fc228c20c2297359f11c62d4b6)`() const` <a id="structFRHAPI__CustomAudit_1aabfed0fc228c20c2297359f11c62d4b6"></a>

Gets the value of UpdatedTeams_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetUpdatedTeams`](#structFRHAPI__CustomAudit_1aef5548fd1339ddc562536e79171eab5b)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1aef5548fd1339ddc562536e79171eab5b"></a>

Gets the value of UpdatedTeams_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetUpdatedTeams`](#structFRHAPI__CustomAudit_1a808145b5a924dc59c27bf83996d98e88)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & OutValue) const` <a id="structFRHAPI__CustomAudit_1a808145b5a924dc59c27bf83996d98e88"></a>

Fills OutValue with the value of UpdatedTeams_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__CustomAudit_1a83061f59991c103bcba64f3cd9d253af)`()` <a id="structFRHAPI__CustomAudit_1a83061f59991c103bcba64f3cd9d253af"></a>

Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetUpdatedTeamsOrNull`](#structFRHAPI__CustomAudit_1ab4bab8854b2a23c434ffec55a5815590)`() const` <a id="structFRHAPI__CustomAudit_1ab4bab8854b2a23c434ffec55a5815590"></a>

Returns a pointer to UpdatedTeams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetUpdatedTeams`](#structFRHAPI__CustomAudit_1aa54a8654fd79df104ce0307078ce8522)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > NewValue)` <a id="structFRHAPI__CustomAudit_1aa54a8654fd79df104ce0307078ce8522"></a>

Sets the value of UpdatedTeams_Optional and also sets UpdatedTeams_IsSet to true.

<br>
#### `public inline void `[`ClearUpdatedTeams`](#structFRHAPI__CustomAudit_1adca5c037fcaeda435ae09b11baaa26f3)`()` <a id="structFRHAPI__CustomAudit_1adca5c037fcaeda435ae09b11baaa26f3"></a>

Clears the value of UpdatedTeams_Optional and sets UpdatedTeams_IsSet to false.

<br>
#### `public inline ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__CustomAudit_1af5f9384668be9274aca8b0a4627b9529)`()` <a id="structFRHAPI__CustomAudit_1af5f9384668be9274aca8b0a4627b9529"></a>

Gets the value of Source_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__CustomAudit_1a127b7ffc586f8f8d74c8e1a237e9d98a)`() const` <a id="structFRHAPI__CustomAudit_1a127b7ffc586f8f8d74c8e1a237e9d98a"></a>

Gets the value of Source_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_InviteSource & `[`GetSource`](#structFRHAPI__CustomAudit_1a6450aa458d772b3a5afec240056a8b5f)`(const ERHAPI_InviteSource & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1a6450aa458d772b3a5afec240056a8b5f"></a>

Gets the value of Source_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSource`](#structFRHAPI__CustomAudit_1aeb72319c3b3e1ab497bc7678d7a3fa97)`(ERHAPI_InviteSource & OutValue) const` <a id="structFRHAPI__CustomAudit_1aeb72319c3b3e1ab497bc7678d7a3fa97"></a>

Fills OutValue with the value of Source_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__CustomAudit_1a24c5625733729b9fa76fc771ad0d8769)`()` <a id="structFRHAPI__CustomAudit_1a24c5625733729b9fa76fc771ad0d8769"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_InviteSource * `[`GetSourceOrNull`](#structFRHAPI__CustomAudit_1a5b0d24629c6277d82760baa697241642)`() const` <a id="structFRHAPI__CustomAudit_1a5b0d24629c6277d82760baa697241642"></a>

Returns a pointer to Source_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSource`](#structFRHAPI__CustomAudit_1a8c414cc57a4119f728d10980b35cc78c)`(ERHAPI_InviteSource NewValue)` <a id="structFRHAPI__CustomAudit_1a8c414cc57a4119f728d10980b35cc78c"></a>

Sets the value of Source_Optional and also sets Source_IsSet to true.

<br>
#### `public inline void `[`ClearSource`](#structFRHAPI__CustomAudit_1ac10e9a6eb194e8749578877a4b9f127d)`()` <a id="structFRHAPI__CustomAudit_1ac10e9a6eb194e8749578877a4b9f127d"></a>

Clears the value of Source_Optional and sets Source_IsSet to false.

<br>
#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__CustomAudit_1a2163d120a2f0e929af6a5d6ae62d3689)`()` <a id="structFRHAPI__CustomAudit_1a2163d120a2f0e929af6a5d6ae62d3689"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CustomAudit_1a03a4abb4959738ec8d3acc96730378eb)`() const` <a id="structFRHAPI__CustomAudit_1a03a4abb4959738ec8d3acc96730378eb"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CustomAudit_1a4a234b202fa67bf031cc18d810a155d7)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1a4a234b202fa67bf031cc18d810a155d7"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPlayerUuid`](#structFRHAPI__CustomAudit_1a6e73e9d93f1ed265c7be847a72cf4a89)`(FGuid & OutValue) const` <a id="structFRHAPI__CustomAudit_1a6e73e9d93f1ed265c7be847a72cf4a89"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__CustomAudit_1aa64df08c34818a294231fb738587fecb)`()` <a id="structFRHAPI__CustomAudit_1aa64df08c34818a294231fb738587fecb"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__CustomAudit_1abc78418a2f9d77864b2ddd0d401dc6eb)`() const` <a id="structFRHAPI__CustomAudit_1abc78418a2f9d77864b2ddd0d401dc6eb"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__CustomAudit_1ab536a4b5be650f665539078ebc091da7)`(FGuid NewValue)` <a id="structFRHAPI__CustomAudit_1ab536a4b5be650f665539078ebc091da7"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

<br>
#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__CustomAudit_1adbc9c9ef7dd44ca156fa1b0f7d3d3d48)`()` <a id="structFRHAPI__CustomAudit_1adbc9c9ef7dd44ca156fa1b0f7d3d3d48"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

<br>
#### `public inline int32 & `[`GetTeamId`](#structFRHAPI__CustomAudit_1aebd9e68c419cdbd0ae82f00d842c1c60)`()` <a id="structFRHAPI__CustomAudit_1aebd9e68c419cdbd0ae82f00d842c1c60"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__CustomAudit_1a9eecf800ce749d2d9432aa7ffefdeacf)`() const` <a id="structFRHAPI__CustomAudit_1a9eecf800ce749d2d9432aa7ffefdeacf"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__CustomAudit_1a15d9cbf500690c53579089df8fa6445d)`(const int32 & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1a15d9cbf500690c53579089df8fa6445d"></a>

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetTeamId`](#structFRHAPI__CustomAudit_1a37271efe17c9ec351cc92285ca3c3b25)`(int32 & OutValue) const` <a id="structFRHAPI__CustomAudit_1a37271efe17c9ec351cc92285ca3c3b25"></a>

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetTeamIdOrNull`](#structFRHAPI__CustomAudit_1a676ade71fb5c8ba441fe7cae40e73886)`()` <a id="structFRHAPI__CustomAudit_1a676ade71fb5c8ba441fe7cae40e73886"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__CustomAudit_1a208aa15c1bbbd141ba7b4b224bf8dcb0)`() const` <a id="structFRHAPI__CustomAudit_1a208aa15c1bbbd141ba7b4b224bf8dcb0"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetTeamId`](#structFRHAPI__CustomAudit_1a760d3974aa94ad0f706cb94d7a4861b3)`(int32 NewValue)` <a id="structFRHAPI__CustomAudit_1a760d3974aa94ad0f706cb94d7a4861b3"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.

<br>
#### `public inline void `[`ClearTeamId`](#structFRHAPI__CustomAudit_1a994e880b778021d39d13d2746db6599d)`()` <a id="structFRHAPI__CustomAudit_1a994e880b778021d39d13d2746db6599d"></a>

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.

<br>
#### `public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__CustomAudit_1a08f5013793f736a193ca98d13a72bb7b)`() const` <a id="structFRHAPI__CustomAudit_1a08f5013793f736a193ca98d13a72bb7b"></a>

Returns true if TeamId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetTeamIdToDefault`](#structFRHAPI__CustomAudit_1a3da5a3c1ff30faf820cb3926a68abaf5)`()` <a id="structFRHAPI__CustomAudit_1a3da5a3c1ff30faf820cb3926a68abaf5"></a>

Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.

<br>
#### `public inline FString & `[`GetInvitedSessionId`](#structFRHAPI__CustomAudit_1ad443245ac2f23e0e73bebceb7c511495)`()` <a id="structFRHAPI__CustomAudit_1ad443245ac2f23e0e73bebceb7c511495"></a>

Gets the value of InvitedSessionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInvitedSessionId`](#structFRHAPI__CustomAudit_1aecdb461f81348f3aecea238a77e0c791)`() const` <a id="structFRHAPI__CustomAudit_1aecdb461f81348f3aecea238a77e0c791"></a>

Gets the value of InvitedSessionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInvitedSessionId`](#structFRHAPI__CustomAudit_1ad363a30b024d85a9ece4be62bc5361b6)`(const FString & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1ad363a30b024d85a9ece4be62bc5361b6"></a>

Gets the value of InvitedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInvitedSessionId`](#structFRHAPI__CustomAudit_1a35dc45e21ba2c2d59147ef3c74a6e136)`(FString & OutValue) const` <a id="structFRHAPI__CustomAudit_1a35dc45e21ba2c2d59147ef3c74a6e136"></a>

Fills OutValue with the value of InvitedSessionId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__CustomAudit_1a44c1aa8d4238e0607d19b8ac3ef80f1c)`()` <a id="structFRHAPI__CustomAudit_1a44c1aa8d4238e0607d19b8ac3ef80f1c"></a>

Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetInvitedSessionIdOrNull`](#structFRHAPI__CustomAudit_1a5aa57b08875b1c6350b7895db81f9f63)`() const` <a id="structFRHAPI__CustomAudit_1a5aa57b08875b1c6350b7895db81f9f63"></a>

Returns a pointer to InvitedSessionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInvitedSessionId`](#structFRHAPI__CustomAudit_1a5d5a55aea134d9cf474fe17ec972b9bb)`(FString NewValue)` <a id="structFRHAPI__CustomAudit_1a5d5a55aea134d9cf474fe17ec972b9bb"></a>

Sets the value of InvitedSessionId_Optional and also sets InvitedSessionId_IsSet to true.

<br>
#### `public inline void `[`ClearInvitedSessionId`](#structFRHAPI__CustomAudit_1acfa1d4373d5d59864dbb66a6e881ccbb)`()` <a id="structFRHAPI__CustomAudit_1acfa1d4373d5d59864dbb66a6e881ccbb"></a>

Clears the value of InvitedSessionId_Optional and sets InvitedSessionId_IsSet to false.

<br>
#### `public inline FString & `[`GetRemovedSessionId`](#structFRHAPI__CustomAudit_1aaa6ae39cb528316cc1774b18df0810d5)`()` <a id="structFRHAPI__CustomAudit_1aaa6ae39cb528316cc1774b18df0810d5"></a>

Gets the value of RemovedSessionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetRemovedSessionId`](#structFRHAPI__CustomAudit_1a187c2128064724441532fff16d66d61c)`() const` <a id="structFRHAPI__CustomAudit_1a187c2128064724441532fff16d66d61c"></a>

Gets the value of RemovedSessionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetRemovedSessionId`](#structFRHAPI__CustomAudit_1a9cf21e48072d26758495a03408b32eb1)`(const FString & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1a9cf21e48072d26758495a03408b32eb1"></a>

Gets the value of RemovedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetRemovedSessionId`](#structFRHAPI__CustomAudit_1a733b74206c7d5a6abb3846867ebc8d38)`(FString & OutValue) const` <a id="structFRHAPI__CustomAudit_1a733b74206c7d5a6abb3846867ebc8d38"></a>

Fills OutValue with the value of RemovedSessionId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__CustomAudit_1afdf02b272ad54479c53326f32cbb3baf)`()` <a id="structFRHAPI__CustomAudit_1afdf02b272ad54479c53326f32cbb3baf"></a>

Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetRemovedSessionIdOrNull`](#structFRHAPI__CustomAudit_1afc62b0bdb72e3bffab88762fbd9daf6d)`() const` <a id="structFRHAPI__CustomAudit_1afc62b0bdb72e3bffab88762fbd9daf6d"></a>

Returns a pointer to RemovedSessionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetRemovedSessionId`](#structFRHAPI__CustomAudit_1a7e45f96e71c58b791581732513871728)`(FString NewValue)` <a id="structFRHAPI__CustomAudit_1a7e45f96e71c58b791581732513871728"></a>

Sets the value of RemovedSessionId_Optional and also sets RemovedSessionId_IsSet to true.

<br>
#### `public inline void `[`ClearRemovedSessionId`](#structFRHAPI__CustomAudit_1aa93d1037c728c90dbc5b40bcc9139a71)`()` <a id="structFRHAPI__CustomAudit_1aa93d1037c728c90dbc5b40bcc9139a71"></a>

Clears the value of RemovedSessionId_Optional and sets RemovedSessionId_IsSet to false.

<br>
#### `public inline FString & `[`GetVersion`](#structFRHAPI__CustomAudit_1a1ad9dffdea2bcea2b90931e234cad19a)`()` <a id="structFRHAPI__CustomAudit_1a1ad9dffdea2bcea2b90931e234cad19a"></a>

Gets the value of Version_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetVersion`](#structFRHAPI__CustomAudit_1a3a3446100a7bc6de9e8cc4289bd60ae6)`() const` <a id="structFRHAPI__CustomAudit_1a3a3446100a7bc6de9e8cc4289bd60ae6"></a>

Gets the value of Version_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetVersion`](#structFRHAPI__CustomAudit_1ae2b906c98a9b4a1164564b47ed01998f)`(const FString & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1ae2b906c98a9b4a1164564b47ed01998f"></a>

Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetVersion`](#structFRHAPI__CustomAudit_1abaab2955f759c3524731b436ecddae72)`(FString & OutValue) const` <a id="structFRHAPI__CustomAudit_1abaab2955f759c3524731b436ecddae72"></a>

Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetVersionOrNull`](#structFRHAPI__CustomAudit_1ab1b8cb345de09c85306a8584023bafe6)`()` <a id="structFRHAPI__CustomAudit_1ab1b8cb345de09c85306a8584023bafe6"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetVersionOrNull`](#structFRHAPI__CustomAudit_1a6c6b429c779d5076d67451cc931a0ccb)`() const` <a id="structFRHAPI__CustomAudit_1a6c6b429c779d5076d67451cc931a0ccb"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetVersion`](#structFRHAPI__CustomAudit_1a0d698221baa7905d0f203238df40f113)`(FString NewValue)` <a id="structFRHAPI__CustomAudit_1a0d698221baa7905d0f203238df40f113"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true.

<br>
#### `public inline void `[`ClearVersion`](#structFRHAPI__CustomAudit_1af5dc950f68c429a50fb99d1e7d09d127)`()` <a id="structFRHAPI__CustomAudit_1af5dc950f68c429a50fb99d1e7d09d127"></a>

Clears the value of Version_Optional and sets Version_IsSet to false.

<br>
#### `public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CustomAudit_1afea106c01179a95b0f63267edffaeb70)`()` <a id="structFRHAPI__CustomAudit_1afea106c01179a95b0f63267edffaeb70"></a>

Gets the value of ClientSettings_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CustomAudit_1a118a9f26d384fb23405bd425fea21736)`() const` <a id="structFRHAPI__CustomAudit_1a118a9f26d384fb23405bd425fea21736"></a>

Gets the value of ClientSettings_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__CustomAudit_1aec4854a59b2f708acb12394f42d3a9fc)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1aec4854a59b2f708acb12394f42d3a9fc"></a>

Gets the value of ClientSettings_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetClientSettings`](#structFRHAPI__CustomAudit_1ae8803119066e55351072fdaf32f1b3e4)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & OutValue) const` <a id="structFRHAPI__CustomAudit_1ae8803119066e55351072fdaf32f1b3e4"></a>

Fills OutValue with the value of ClientSettings_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__CustomAudit_1a39e431def17414aaa8061f5ac7d5f7ed)`()` <a id="structFRHAPI__CustomAudit_1a39e431def17414aaa8061f5ac7d5f7ed"></a>

Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__CustomAudit_1a90c5ff819997efa52719daeb7fc40d25)`() const` <a id="structFRHAPI__CustomAudit_1a90c5ff819997efa52719daeb7fc40d25"></a>

Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetClientSettings`](#structFRHAPI__CustomAudit_1a25564486063af6b434e84cefb0c2ef98)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` NewValue)` <a id="structFRHAPI__CustomAudit_1a25564486063af6b434e84cefb0c2ef98"></a>

Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true.

<br>
#### `public inline void `[`ClearClientSettings`](#structFRHAPI__CustomAudit_1a2f6468637629c5df6eef7de2d37fb6bc)`()` <a id="structFRHAPI__CustomAudit_1a2f6468637629c5df6eef7de2d37fb6bc"></a>

Clears the value of ClientSettings_Optional and sets ClientSettings_IsSet to false.

<br>
#### `public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CustomAudit_1a201bce99fdc628b4b00c9d39171ab96a)`()` <a id="structFRHAPI__CustomAudit_1a201bce99fdc628b4b00c9d39171ab96a"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CustomAudit_1aa30a6eb43b06ea6cbacfa2836223af17)`() const` <a id="structFRHAPI__CustomAudit_1aa30a6eb43b06ea6cbacfa2836223af17"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__CustomAudit_1a2b0fcaa555d78ac0e648d2a88691dceb)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1a2b0fcaa555d78ac0e648d2a88691dceb"></a>

Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCrossplayPreferences`](#structFRHAPI__CustomAudit_1ad3c9df1669d41d0cba4fdb4620ecd08c)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` <a id="structFRHAPI__CustomAudit_1ad3c9df1669d41d0cba4fdb4620ecd08c"></a>

Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CustomAudit_1a92be759180fd9061545d3fccabaa17f2)`()` <a id="structFRHAPI__CustomAudit_1a92be759180fd9061545d3fccabaa17f2"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__CustomAudit_1a61e879d9590aba0d62a1b58b8b566b25)`() const` <a id="structFRHAPI__CustomAudit_1a61e879d9590aba0d62a1b58b8b566b25"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCrossplayPreferences`](#structFRHAPI__CustomAudit_1a04f1ab7964d7466ad23810c973721657)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` NewValue)` <a id="structFRHAPI__CustomAudit_1a04f1ab7964d7466ad23810c973721657"></a>

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.

<br>
#### `public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__CustomAudit_1ac98e9e29a0a8dd696f25e00ecc9ee163)`()` <a id="structFRHAPI__CustomAudit_1ac98e9e29a0a8dd696f25e00ecc9ee163"></a>

Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.

<br>
#### `public inline ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__CustomAudit_1a2681e133b08d5ede0d45af2fb3a44f58)`()` <a id="structFRHAPI__CustomAudit_1a2681e133b08d5ede0d45af2fb3a44f58"></a>

Gets the value of PlayerStatus_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__CustomAudit_1ac378bb0f8d73154c1c0ff38b46716e90)`() const` <a id="structFRHAPI__CustomAudit_1ac378bb0f8d73154c1c0ff38b46716e90"></a>

Gets the value of PlayerStatus_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_SessionPlayerStatus & `[`GetPlayerStatus`](#structFRHAPI__CustomAudit_1a03830dbc6b22cb939f2271ee5d245524)`(const ERHAPI_SessionPlayerStatus & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1a03830dbc6b22cb939f2271ee5d245524"></a>

Gets the value of PlayerStatus_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPlayerStatus`](#structFRHAPI__CustomAudit_1ae0769e856c1067ed6216ded26263b9f4)`(ERHAPI_SessionPlayerStatus & OutValue) const` <a id="structFRHAPI__CustomAudit_1ae0769e856c1067ed6216ded26263b9f4"></a>

Fills OutValue with the value of PlayerStatus_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__CustomAudit_1a35e05add5fb98ab4035a65e81db0a9af)`()` <a id="structFRHAPI__CustomAudit_1a35e05add5fb98ab4035a65e81db0a9af"></a>

Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_SessionPlayerStatus * `[`GetPlayerStatusOrNull`](#structFRHAPI__CustomAudit_1add58f02102c2d574717f34492c5a21eb)`() const` <a id="structFRHAPI__CustomAudit_1add58f02102c2d574717f34492c5a21eb"></a>

Returns a pointer to PlayerStatus_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPlayerStatus`](#structFRHAPI__CustomAudit_1a6191151092c9ee657223d3c8a8f49fc9)`(ERHAPI_SessionPlayerStatus NewValue)` <a id="structFRHAPI__CustomAudit_1a6191151092c9ee657223d3c8a8f49fc9"></a>

Sets the value of PlayerStatus_Optional and also sets PlayerStatus_IsSet to true.

<br>
#### `public inline void `[`ClearPlayerStatus`](#structFRHAPI__CustomAudit_1a9a5626e26c7017ddbea053caed5fb1f1)`()` <a id="structFRHAPI__CustomAudit_1a9a5626e26c7017ddbea053caed5fb1f1"></a>

Clears the value of PlayerStatus_Optional and sets PlayerStatus_IsSet to false.

<br>
#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CustomAudit_1a649086a658a8b24df08a3fa67f63fb70)`()` <a id="structFRHAPI__CustomAudit_1a649086a658a8b24df08a3fa67f63fb70"></a>

Gets the value of Platform_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CustomAudit_1a1bfcb7d8429440a6901224095d56cc0c)`() const` <a id="structFRHAPI__CustomAudit_1a1bfcb7d8429440a6901224095d56cc0c"></a>

Gets the value of Platform_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CustomAudit_1ab8107c765d83c96e2aa100bb95fae29d)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1ab8107c765d83c96e2aa100bb95fae29d"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPlatform`](#structFRHAPI__CustomAudit_1aba0ba10eda906305600bbff459c2971d)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__CustomAudit_1aba0ba10eda906305600bbff459c2971d"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__CustomAudit_1a65d46fdd6118782a80ea06a776e8063d)`()` <a id="structFRHAPI__CustomAudit_1a65d46fdd6118782a80ea06a776e8063d"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__CustomAudit_1aae6644026a8d34e3aefc3dbee989d9fc)`() const` <a id="structFRHAPI__CustomAudit_1aae6644026a8d34e3aefc3dbee989d9fc"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPlatform`](#structFRHAPI__CustomAudit_1a3de5f8f96caf221d0e1fc47edcef8cbe)`(ERHAPI_Platform NewValue)` <a id="structFRHAPI__CustomAudit_1a3de5f8f96caf221d0e1fc47edcef8cbe"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

<br>
#### `public inline void `[`ClearPlatform`](#structFRHAPI__CustomAudit_1a5efd309d02c319a7cd7e8d63fa2e8d7d)`()` <a id="structFRHAPI__CustomAudit_1a5efd309d02c319a7cd7e8d63fa2e8d7d"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

<br>
#### `public inline FString & `[`GetPlatformSessionId`](#structFRHAPI__CustomAudit_1ae2d9a0dc224bc2d79387e71d770354be)`()` <a id="structFRHAPI__CustomAudit_1ae2d9a0dc224bc2d79387e71d770354be"></a>

Gets the value of PlatformSessionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetPlatformSessionId`](#structFRHAPI__CustomAudit_1a090fbf54fe24f52d48afaf5a8ff0ae9d)`() const` <a id="structFRHAPI__CustomAudit_1a090fbf54fe24f52d48afaf5a8ff0ae9d"></a>

Gets the value of PlatformSessionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetPlatformSessionId`](#structFRHAPI__CustomAudit_1ae6771a9096bc2bf403ab881d3f11d6d2)`(const FString & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1ae6771a9096bc2bf403ab881d3f11d6d2"></a>

Gets the value of PlatformSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPlatformSessionId`](#structFRHAPI__CustomAudit_1a3df1944c3d65071422d8009b630ebcb6)`(FString & OutValue) const` <a id="structFRHAPI__CustomAudit_1a3df1944c3d65071422d8009b630ebcb6"></a>

Fills OutValue with the value of PlatformSessionId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__CustomAudit_1a77941066cfabfdc82e35c0aa4c1458d8)`()` <a id="structFRHAPI__CustomAudit_1a77941066cfabfdc82e35c0aa4c1458d8"></a>

Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetPlatformSessionIdOrNull`](#structFRHAPI__CustomAudit_1aeccc8866035c0664a74b4db0110c4955)`() const` <a id="structFRHAPI__CustomAudit_1aeccc8866035c0664a74b4db0110c4955"></a>

Returns a pointer to PlatformSessionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPlatformSessionId`](#structFRHAPI__CustomAudit_1aaa297c8a88d4b9fb6d2b4659a3ee15e4)`(FString NewValue)` <a id="structFRHAPI__CustomAudit_1aaa297c8a88d4b9fb6d2b4659a3ee15e4"></a>

Sets the value of PlatformSessionId_Optional and also sets PlatformSessionId_IsSet to true.

<br>
#### `public inline void `[`ClearPlatformSessionId`](#structFRHAPI__CustomAudit_1ae1be22ffb0733bec292fcf3b8f535e10)`()` <a id="structFRHAPI__CustomAudit_1ae1be22ffb0733bec292fcf3b8f535e10"></a>

Clears the value of PlatformSessionId_Optional and sets PlatformSessionId_IsSet to false.

<br>
#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__CustomAudit_1a161523dc705c5403dd68973b16acf9f9)`()` <a id="structFRHAPI__CustomAudit_1a161523dc705c5403dd68973b16acf9f9"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__CustomAudit_1a83b42831bb5262b0e9980c72907050e3)`() const` <a id="structFRHAPI__CustomAudit_1a83b42831bb5262b0e9980c72907050e3"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__CustomAudit_1ac471e7e2b967b073b1e2162aff9ba1c1)`(const FString & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1ac471e7e2b967b073b1e2162aff9ba1c1"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInstanceId`](#structFRHAPI__CustomAudit_1a1dec5d6191da8634d4f7c3e5df773558)`(FString & OutValue) const` <a id="structFRHAPI__CustomAudit_1a1dec5d6191da8634d4f7c3e5df773558"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__CustomAudit_1ad756a0154037d17a6775f91cac88b3cd)`()` <a id="structFRHAPI__CustomAudit_1ad756a0154037d17a6775f91cac88b3cd"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__CustomAudit_1a9ca3b503b432777bcd3e95fb04b4d655)`() const` <a id="structFRHAPI__CustomAudit_1a9ca3b503b432777bcd3e95fb04b4d655"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInstanceId`](#structFRHAPI__CustomAudit_1a43ea17d34a6e3967fcd7a78743a3bcf2)`(FString NewValue)` <a id="structFRHAPI__CustomAudit_1a43ea17d34a6e3967fcd7a78743a3bcf2"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

<br>
#### `public inline void `[`ClearInstanceId`](#structFRHAPI__CustomAudit_1ab02f0416fbbca81340a2b576125600d7)`()` <a id="structFRHAPI__CustomAudit_1ab02f0416fbbca81340a2b576125600d7"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

<br>
#### `public inline ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__CustomAudit_1a6b9d54efba783d2eefc2cc74d6f23912)`()` <a id="structFRHAPI__CustomAudit_1a6b9d54efba783d2eefc2cc74d6f23912"></a>

Gets the value of HostType_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__CustomAudit_1ac44d6f2240010d55dec15c3eb5c78ba2)`() const` <a id="structFRHAPI__CustomAudit_1ac44d6f2240010d55dec15c3eb5c78ba2"></a>

Gets the value of HostType_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__CustomAudit_1a95c487db204a7c2336d32eca34191d48)`(const ERHAPI_HostType & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1a95c487db204a7c2336d32eca34191d48"></a>

Gets the value of HostType_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetHostType`](#structFRHAPI__CustomAudit_1ab5f14711152d53870ec6e482a4c2f6be)`(ERHAPI_HostType & OutValue) const` <a id="structFRHAPI__CustomAudit_1ab5f14711152d53870ec6e482a4c2f6be"></a>

Fills OutValue with the value of HostType_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__CustomAudit_1a67eccab36844c7e6c1bfb17e2cb7d0fd)`()` <a id="structFRHAPI__CustomAudit_1a67eccab36844c7e6c1bfb17e2cb7d0fd"></a>

Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__CustomAudit_1a378ad975167db81b5894a86ea1a1c232)`() const` <a id="structFRHAPI__CustomAudit_1a378ad975167db81b5894a86ea1a1c232"></a>

Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetHostType`](#structFRHAPI__CustomAudit_1a99f7b696e379cfe015ecb98c4bbd1e85)`(ERHAPI_HostType NewValue)` <a id="structFRHAPI__CustomAudit_1a99f7b696e379cfe015ecb98c4bbd1e85"></a>

Sets the value of HostType_Optional and also sets HostType_IsSet to true.

<br>
#### `public inline void `[`ClearHostType`](#structFRHAPI__CustomAudit_1ad975aa265e14cefc4b2a83e245ca4806)`()` <a id="structFRHAPI__CustomAudit_1ad975aa265e14cefc4b2a83e245ca4806"></a>

Clears the value of HostType_Optional and sets HostType_IsSet to false.

<br>
#### `public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__CustomAudit_1aabd3ce91e4a62146cd2d038af573eaac)`()` <a id="structFRHAPI__CustomAudit_1aabd3ce91e4a62146cd2d038af573eaac"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__CustomAudit_1a356dc49f34efb251c7a4d97855826d83)`() const` <a id="structFRHAPI__CustomAudit_1a356dc49f34efb251c7a4d97855826d83"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__CustomAudit_1a69a7ad9568781e769d703bc42e62345b)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1a69a7ad9568781e769d703bc42e62345b"></a>

Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__CustomAudit_1ac393bd4729de1ef13591e8d9c363652e)`(FGuid & OutValue) const` <a id="structFRHAPI__CustomAudit_1ac393bd4729de1ef13591e8d9c363652e"></a>

Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__CustomAudit_1a6c2441ad9f02131b711694064515332f)`()` <a id="structFRHAPI__CustomAudit_1a6c2441ad9f02131b711694064515332f"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__CustomAudit_1ac4a05423b4961f1faa7f12cad6f63663)`() const` <a id="structFRHAPI__CustomAudit_1ac4a05423b4961f1faa7f12cad6f63663"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetHostPlayerUuid`](#structFRHAPI__CustomAudit_1a34bff47ed878115d1df3b95d607b0f4c)`(FGuid NewValue)` <a id="structFRHAPI__CustomAudit_1a34bff47ed878115d1df3b95d607b0f4c"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.

<br>
#### `public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__CustomAudit_1a9be6e8b4c5a94c557ed2d6d04774d314)`()` <a id="structFRHAPI__CustomAudit_1a9be6e8b4c5a94c557ed2d6d04774d314"></a>

Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.

<br>
#### `public inline FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__CustomAudit_1adad1c225368e6060433ca58df54b9e87)`()` <a id="structFRHAPI__CustomAudit_1adad1c225368e6060433ca58df54b9e87"></a>

Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__CustomAudit_1a3200dd1faf8940f41871436569096177)`() const` <a id="structFRHAPI__CustomAudit_1a3200dd1faf8940f41871436569096177"></a>

Gets the value of InstanceRequestTemplate_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetInstanceRequestTemplate`](#structFRHAPI__CustomAudit_1a85b496150ee82c8d33cb7c61f2214281)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1a85b496150ee82c8d33cb7c61f2214281"></a>

Gets the value of InstanceRequestTemplate_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInstanceRequestTemplate`](#structFRHAPI__CustomAudit_1abceaa536422697856293ee8a0ede2129)`(FGuid & OutValue) const` <a id="structFRHAPI__CustomAudit_1abceaa536422697856293ee8a0ede2129"></a>

Fills OutValue with the value of InstanceRequestTemplate_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__CustomAudit_1ad57649d20c3604ba6a21e91b1bc2afd0)`()` <a id="structFRHAPI__CustomAudit_1ad57649d20c3604ba6a21e91b1bc2afd0"></a>

Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FGuid * `[`GetInstanceRequestTemplateOrNull`](#structFRHAPI__CustomAudit_1a8e8997357bf9d14416da03f86e1e32b8)`() const` <a id="structFRHAPI__CustomAudit_1a8e8997357bf9d14416da03f86e1e32b8"></a>

Returns a pointer to InstanceRequestTemplate_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInstanceRequestTemplate`](#structFRHAPI__CustomAudit_1aa4e55878f60e1d627741ce86cf283613)`(FGuid NewValue)` <a id="structFRHAPI__CustomAudit_1aa4e55878f60e1d627741ce86cf283613"></a>

Sets the value of InstanceRequestTemplate_Optional and also sets InstanceRequestTemplate_IsSet to true.

<br>
#### `public inline void `[`ClearInstanceRequestTemplate`](#structFRHAPI__CustomAudit_1a89ac92014e8b1d16ea877998260e89d4)`()` <a id="structFRHAPI__CustomAudit_1a89ac92014e8b1d16ea877998260e89d4"></a>

Clears the value of InstanceRequestTemplate_Optional and sets InstanceRequestTemplate_IsSet to false.

<br>
#### `public inline FString & `[`GetMap`](#structFRHAPI__CustomAudit_1ab738c40f819c17a52c2a88aa3e01365a)`()` <a id="structFRHAPI__CustomAudit_1ab738c40f819c17a52c2a88aa3e01365a"></a>

Gets the value of Map_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMap`](#structFRHAPI__CustomAudit_1acde3b7dafa6ad1b9cd58a291f0ade78d)`() const` <a id="structFRHAPI__CustomAudit_1acde3b7dafa6ad1b9cd58a291f0ade78d"></a>

Gets the value of Map_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMap`](#structFRHAPI__CustomAudit_1a6334f6fe12bef40601fc05596225a9f3)`(const FString & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1a6334f6fe12bef40601fc05596225a9f3"></a>

Gets the value of Map_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMap`](#structFRHAPI__CustomAudit_1a16733cdd73c9f2147a8c094c18ecc730)`(FString & OutValue) const` <a id="structFRHAPI__CustomAudit_1a16733cdd73c9f2147a8c094c18ecc730"></a>

Fills OutValue with the value of Map_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetMapOrNull`](#structFRHAPI__CustomAudit_1ab3bc83b84447a6aa93c23d4eb32f8815)`()` <a id="structFRHAPI__CustomAudit_1ab3bc83b84447a6aa93c23d4eb32f8815"></a>

Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetMapOrNull`](#structFRHAPI__CustomAudit_1ada0a14fc7441a7d2cace2dc04e3d1e2e)`() const` <a id="structFRHAPI__CustomAudit_1ada0a14fc7441a7d2cace2dc04e3d1e2e"></a>

Returns a pointer to Map_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMap`](#structFRHAPI__CustomAudit_1a316d4419683b0fe8b43ccfe2c82709da)`(FString NewValue)` <a id="structFRHAPI__CustomAudit_1a316d4419683b0fe8b43ccfe2c82709da"></a>

Sets the value of Map_Optional and also sets Map_IsSet to true.

<br>
#### `public inline void `[`ClearMap`](#structFRHAPI__CustomAudit_1ac81e152ee000e51e12e4b3840458100a)`()` <a id="structFRHAPI__CustomAudit_1ac81e152ee000e51e12e4b3840458100a"></a>

Clears the value of Map_Optional and sets Map_IsSet to false.

<br>
#### `public inline FString & `[`GetMode`](#structFRHAPI__CustomAudit_1ac29c44eb545adc8e20c716e5b080815c)`()` <a id="structFRHAPI__CustomAudit_1ac29c44eb545adc8e20c716e5b080815c"></a>

Gets the value of Mode_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMode`](#structFRHAPI__CustomAudit_1a6034c0b8cf0f1399128f9443f665851a)`() const` <a id="structFRHAPI__CustomAudit_1a6034c0b8cf0f1399128f9443f665851a"></a>

Gets the value of Mode_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMode`](#structFRHAPI__CustomAudit_1a2c82dcde32ca6110eb5dfe82cf365b4d)`(const FString & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1a2c82dcde32ca6110eb5dfe82cf365b4d"></a>

Gets the value of Mode_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMode`](#structFRHAPI__CustomAudit_1a2834c1513685c1245170dabf11ea9a60)`(FString & OutValue) const` <a id="structFRHAPI__CustomAudit_1a2834c1513685c1245170dabf11ea9a60"></a>

Fills OutValue with the value of Mode_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetModeOrNull`](#structFRHAPI__CustomAudit_1aa9ee6fb3390edc01eaa2371ebdce53fd)`()` <a id="structFRHAPI__CustomAudit_1aa9ee6fb3390edc01eaa2371ebdce53fd"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetModeOrNull`](#structFRHAPI__CustomAudit_1a27d4bca4e052fb9e7424b03cad3fe0cf)`() const` <a id="structFRHAPI__CustomAudit_1a27d4bca4e052fb9e7424b03cad3fe0cf"></a>

Returns a pointer to Mode_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMode`](#structFRHAPI__CustomAudit_1a2d4b0f83df6acf630b10ec5f02e15652)`(FString NewValue)` <a id="structFRHAPI__CustomAudit_1a2d4b0f83df6acf630b10ec5f02e15652"></a>

Sets the value of Mode_Optional and also sets Mode_IsSet to true.

<br>
#### `public inline void `[`ClearMode`](#structFRHAPI__CustomAudit_1a224e89268651e56dbab1c0f710408898)`()` <a id="structFRHAPI__CustomAudit_1a224e89268651e56dbab1c0f710408898"></a>

Clears the value of Mode_Optional and sets Mode_IsSet to false.

<br>
#### `public inline FString & `[`GetAllocationId`](#structFRHAPI__CustomAudit_1a6451ce413dd610dd208cb4ce9c2c7ba4)`()` <a id="structFRHAPI__CustomAudit_1a6451ce413dd610dd208cb4ce9c2c7ba4"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetAllocationId`](#structFRHAPI__CustomAudit_1a9b798d1a65feff126e299451e73e80c2)`() const` <a id="structFRHAPI__CustomAudit_1a9b798d1a65feff126e299451e73e80c2"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetAllocationId`](#structFRHAPI__CustomAudit_1a4a31452b40cc989b8902440a813199ae)`(const FString & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1a4a31452b40cc989b8902440a813199ae"></a>

Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetAllocationId`](#structFRHAPI__CustomAudit_1a9af6865692feeb3e52d5c8e5fca5abda)`(FString & OutValue) const` <a id="structFRHAPI__CustomAudit_1a9af6865692feeb3e52d5c8e5fca5abda"></a>

Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetAllocationIdOrNull`](#structFRHAPI__CustomAudit_1ab0b0930342c925ccb14e82eabf11f563)`()` <a id="structFRHAPI__CustomAudit_1ab0b0930342c925ccb14e82eabf11f563"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__CustomAudit_1a3e1d33deb2e310f9821dc815d75bdbfe)`() const` <a id="structFRHAPI__CustomAudit_1a3e1d33deb2e310f9821dc815d75bdbfe"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetAllocationId`](#structFRHAPI__CustomAudit_1acedc874c1467006368eeabf7f9c52131)`(FString NewValue)` <a id="structFRHAPI__CustomAudit_1acedc874c1467006368eeabf7f9c52131"></a>

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.

<br>
#### `public inline void `[`ClearAllocationId`](#structFRHAPI__CustomAudit_1a9fa4b626693bf67e6c5f1b7ffeb2f8fb)`()` <a id="structFRHAPI__CustomAudit_1a9fa4b626693bf67e6c5f1b7ffeb2f8fb"></a>

Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.

<br>
#### `public inline ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__CustomAudit_1a7b14441b2d7f9a82f5bc7f13d9df70b9)`()` <a id="structFRHAPI__CustomAudit_1a7b14441b2d7f9a82f5bc7f13d9df70b9"></a>

Gets the value of JoinStatus_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__CustomAudit_1accd4350b9c5396c4cd246727581c8353)`() const` <a id="structFRHAPI__CustomAudit_1accd4350b9c5396c4cd246727581c8353"></a>

Gets the value of JoinStatus_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__CustomAudit_1aba16b69cf492ea43cfee410459ab0536)`(const ERHAPI_InstanceJoinableStatus & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1aba16b69cf492ea43cfee410459ab0536"></a>

Gets the value of JoinStatus_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetJoinStatus`](#structFRHAPI__CustomAudit_1a1d90935d63e736d93c7908474fa6d564)`(ERHAPI_InstanceJoinableStatus & OutValue) const` <a id="structFRHAPI__CustomAudit_1a1d90935d63e736d93c7908474fa6d564"></a>

Fills OutValue with the value of JoinStatus_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__CustomAudit_1a3ce2965369359a1fb650eb848f0d12bf)`()` <a id="structFRHAPI__CustomAudit_1a3ce2965369359a1fb650eb848f0d12bf"></a>

Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__CustomAudit_1a207d0395e0374dcf8334ce357cf6b42c)`() const` <a id="structFRHAPI__CustomAudit_1a207d0395e0374dcf8334ce357cf6b42c"></a>

Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetJoinStatus`](#structFRHAPI__CustomAudit_1aa3c01ede0bde52a9612ed0794b22e750)`(ERHAPI_InstanceJoinableStatus NewValue)` <a id="structFRHAPI__CustomAudit_1aa3c01ede0bde52a9612ed0794b22e750"></a>

Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true.

<br>
#### `public inline void `[`ClearJoinStatus`](#structFRHAPI__CustomAudit_1aa81cf7ebc8952929c8598ba0f68bd4ac)`()` <a id="structFRHAPI__CustomAudit_1aa81cf7ebc8952929c8598ba0f68bd4ac"></a>

Clears the value of JoinStatus_Optional and sets JoinStatus_IsSet to false.

<br>
#### `public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__CustomAudit_1a824dffaa05097935589e4f583577820d)`()` <a id="structFRHAPI__CustomAudit_1a824dffaa05097935589e4f583577820d"></a>

Gets the value of JoinParams_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__CustomAudit_1a7c306ed6b4681b1f2199fc5597758f37)`() const` <a id="structFRHAPI__CustomAudit_1a7c306ed6b4681b1f2199fc5597758f37"></a>

Gets the value of JoinParams_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__CustomAudit_1a3845310c6d31c2dc86d4152c32bf6e96)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1a3845310c6d31c2dc86d4152c32bf6e96"></a>

Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetJoinParams`](#structFRHAPI__CustomAudit_1a33982c312f99ea461f180dee103535af)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & OutValue) const` <a id="structFRHAPI__CustomAudit_1a33982c312f99ea461f180dee103535af"></a>

Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__CustomAudit_1a4faf9bb165e90c006a00c157a4fc9231)`()` <a id="structFRHAPI__CustomAudit_1a4faf9bb165e90c006a00c157a4fc9231"></a>

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__CustomAudit_1a3ed98ebc1ae016f6b1cc79d16c513a08)`() const` <a id="structFRHAPI__CustomAudit_1a3ed98ebc1ae016f6b1cc79d16c513a08"></a>

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetJoinParams`](#structFRHAPI__CustomAudit_1af8d593d3b5bdeb4d21ad0b89dff72bab)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` NewValue)` <a id="structFRHAPI__CustomAudit_1af8d593d3b5bdeb4d21ad0b89dff72bab"></a>

Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.

<br>
#### `public inline void `[`ClearJoinParams`](#structFRHAPI__CustomAudit_1ae733bdded50baedfc3e223d0ba214764)`()` <a id="structFRHAPI__CustomAudit_1ae733bdded50baedfc3e223d0ba214764"></a>

Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.

<br>
#### `public inline ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__CustomAudit_1ad64bff708aecec2f2c640d07bbcb0c13)`()` <a id="structFRHAPI__CustomAudit_1ad64bff708aecec2f2c640d07bbcb0c13"></a>

Gets the value of InstanceHealth_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__CustomAudit_1ae8dda3bba79c2e5f51b81dfb401d9d1a)`() const` <a id="structFRHAPI__CustomAudit_1ae8dda3bba79c2e5f51b81dfb401d9d1a"></a>

Gets the value of InstanceHealth_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__CustomAudit_1a8c2564aa941007da3af7a53a9f151c63)`(const ERHAPI_InstanceHealthStatus & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1a8c2564aa941007da3af7a53a9f151c63"></a>

Gets the value of InstanceHealth_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInstanceHealth`](#structFRHAPI__CustomAudit_1a28e3857a2906eddbc93ac1123d5e93be)`(ERHAPI_InstanceHealthStatus & OutValue) const` <a id="structFRHAPI__CustomAudit_1a28e3857a2906eddbc93ac1123d5e93be"></a>

Fills OutValue with the value of InstanceHealth_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__CustomAudit_1a405a340d240ceaa1c711af4fb06a52b1)`()` <a id="structFRHAPI__CustomAudit_1a405a340d240ceaa1c711af4fb06a52b1"></a>

Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__CustomAudit_1ab5bcdb45b6622aca3a825de5f4dcbab9)`() const` <a id="structFRHAPI__CustomAudit_1ab5bcdb45b6622aca3a825de5f4dcbab9"></a>

Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInstanceHealth`](#structFRHAPI__CustomAudit_1a3194b1e12bcca96f14e66f49cc7a4af0)`(ERHAPI_InstanceHealthStatus NewValue)` <a id="structFRHAPI__CustomAudit_1a3194b1e12bcca96f14e66f49cc7a4af0"></a>

Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true.

<br>
#### `public inline void `[`ClearInstanceHealth`](#structFRHAPI__CustomAudit_1a9de8bcc058469cafdd5e67a5bac02a30)`()` <a id="structFRHAPI__CustomAudit_1a9de8bcc058469cafdd5e67a5bac02a30"></a>

Clears the value of InstanceHealth_Optional and sets InstanceHealth_IsSet to false.

<br>
#### `public inline FString & `[`GetQueueId`](#structFRHAPI__CustomAudit_1a8e49bd83efa3e8d3e6eff63a5de51341)`()` <a id="structFRHAPI__CustomAudit_1a8e49bd83efa3e8d3e6eff63a5de51341"></a>

Gets the value of QueueId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetQueueId`](#structFRHAPI__CustomAudit_1a933e16636313c7849b30fad4e78a14f5)`() const` <a id="structFRHAPI__CustomAudit_1a933e16636313c7849b30fad4e78a14f5"></a>

Gets the value of QueueId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetQueueId`](#structFRHAPI__CustomAudit_1aada59e1146939ce48551b225b326dcb9)`(const FString & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1aada59e1146939ce48551b225b326dcb9"></a>

Gets the value of QueueId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetQueueId`](#structFRHAPI__CustomAudit_1a288990494850a7164eeabfd221e057f4)`(FString & OutValue) const` <a id="structFRHAPI__CustomAudit_1a288990494850a7164eeabfd221e057f4"></a>

Fills OutValue with the value of QueueId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetQueueIdOrNull`](#structFRHAPI__CustomAudit_1a3509eb18e45811d2355318aba91c5ca4)`()` <a id="structFRHAPI__CustomAudit_1a3509eb18e45811d2355318aba91c5ca4"></a>

Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetQueueIdOrNull`](#structFRHAPI__CustomAudit_1a9fd461c110819cd96a3a91bc118ff5e0)`() const` <a id="structFRHAPI__CustomAudit_1a9fd461c110819cd96a3a91bc118ff5e0"></a>

Returns a pointer to QueueId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetQueueId`](#structFRHAPI__CustomAudit_1ada5b5d590c82b80dac3ba26649717ce0)`(FString NewValue)` <a id="structFRHAPI__CustomAudit_1ada5b5d590c82b80dac3ba26649717ce0"></a>

Sets the value of QueueId_Optional and also sets QueueId_IsSet to true.

<br>
#### `public inline void `[`ClearQueueId`](#structFRHAPI__CustomAudit_1a18e3f6d1b8c91874e6675dbf4aec0d31)`()` <a id="structFRHAPI__CustomAudit_1a18e3f6d1b8c91874e6675dbf4aec0d31"></a>

Clears the value of QueueId_Optional and sets QueueId_IsSet to false.

<br>
#### `public inline TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__CustomAudit_1a8ed35095fed8d3a430d93f471a459298)`()` <a id="structFRHAPI__CustomAudit_1a8ed35095fed8d3a430d93f471a459298"></a>

Gets the value of Players_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__CustomAudit_1a60fec7ed6a31666bcd388964aef1e1c0)`() const` <a id="structFRHAPI__CustomAudit_1a60fec7ed6a31666bcd388964aef1e1c0"></a>

Gets the value of Players_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__CustomAudit_1a74e7e25f4bc654de67a6d2edfca2bc7c)`(const TArray< FGuid > & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1a74e7e25f4bc654de67a6d2edfca2bc7c"></a>

Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPlayers`](#structFRHAPI__CustomAudit_1a8e2a0313a28aaf0470ebfa1a45e51a9e)`(TArray< FGuid > & OutValue) const` <a id="structFRHAPI__CustomAudit_1a8e2a0313a28aaf0470ebfa1a45e51a9e"></a>

Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< FGuid > * `[`GetPlayersOrNull`](#structFRHAPI__CustomAudit_1a1539b771b5d80db8c83618d81f6b808e)`()` <a id="structFRHAPI__CustomAudit_1a1539b771b5d80db8c83618d81f6b808e"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< FGuid > * `[`GetPlayersOrNull`](#structFRHAPI__CustomAudit_1a5c30a7f4ed6821a4f8a0631479bb939c)`() const` <a id="structFRHAPI__CustomAudit_1a5c30a7f4ed6821a4f8a0631479bb939c"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPlayers`](#structFRHAPI__CustomAudit_1ab48fbfe674fb52d32e6dc7ffd786307e)`(TArray< FGuid > NewValue)` <a id="structFRHAPI__CustomAudit_1ab48fbfe674fb52d32e6dc7ffd786307e"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true.

<br>
#### `public inline void `[`ClearPlayers`](#structFRHAPI__CustomAudit_1a90f762e35fb330b9a005a4b802a7a195)`()` <a id="structFRHAPI__CustomAudit_1a90f762e35fb330b9a005a4b802a7a195"></a>

Clears the value of Players_Optional and sets Players_IsSet to false.

<br>
#### `public inline FString & `[`GetTicketId`](#structFRHAPI__CustomAudit_1a588b617d2a3fe29b0ce410c6ad9e77ab)`()` <a id="structFRHAPI__CustomAudit_1a588b617d2a3fe29b0ce410c6ad9e77ab"></a>

Gets the value of TicketId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetTicketId`](#structFRHAPI__CustomAudit_1acf8b8ca12f3fdec61da0baa20deec7d9)`() const` <a id="structFRHAPI__CustomAudit_1acf8b8ca12f3fdec61da0baa20deec7d9"></a>

Gets the value of TicketId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetTicketId`](#structFRHAPI__CustomAudit_1ad9f7e60a8abea11af14e26ad4d8013fd)`(const FString & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1ad9f7e60a8abea11af14e26ad4d8013fd"></a>

Gets the value of TicketId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetTicketId`](#structFRHAPI__CustomAudit_1a79137fe803783033436506049057e3a7)`(FString & OutValue) const` <a id="structFRHAPI__CustomAudit_1a79137fe803783033436506049057e3a7"></a>

Fills OutValue with the value of TicketId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetTicketIdOrNull`](#structFRHAPI__CustomAudit_1a23a45b9f39694101bff0defc2830533b)`()` <a id="structFRHAPI__CustomAudit_1a23a45b9f39694101bff0defc2830533b"></a>

Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetTicketIdOrNull`](#structFRHAPI__CustomAudit_1a395d98b23b7f4d3f89d3fd2fdf11198b)`() const` <a id="structFRHAPI__CustomAudit_1a395d98b23b7f4d3f89d3fd2fdf11198b"></a>

Returns a pointer to TicketId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetTicketId`](#structFRHAPI__CustomAudit_1a1c4b0863413d2da42668010f2ca98d99)`(FString NewValue)` <a id="structFRHAPI__CustomAudit_1a1c4b0863413d2da42668010f2ca98d99"></a>

Sets the value of TicketId_Optional and also sets TicketId_IsSet to true.

<br>
#### `public inline void `[`ClearTicketId`](#structFRHAPI__CustomAudit_1a6d342a714e48638ec74d475c020ec213)`()` <a id="structFRHAPI__CustomAudit_1a6d342a714e48638ec74d475c020ec213"></a>

Clears the value of TicketId_Optional and sets TicketId_IsSet to false.

<br>
#### `public inline TMap< FString, FString > & `[`GetAdditionalParams`](#structFRHAPI__CustomAudit_1a9cbc9df3ce33a4b55d8cb2fe7544698a)`()` <a id="structFRHAPI__CustomAudit_1a9cbc9df3ce33a4b55d8cb2fe7544698a"></a>

Gets the value of AdditionalParams_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetAdditionalParams`](#structFRHAPI__CustomAudit_1ab5801f8343afb1effa4d1ec06f160fc2)`() const` <a id="structFRHAPI__CustomAudit_1ab5801f8343afb1effa4d1ec06f160fc2"></a>

Gets the value of AdditionalParams_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetAdditionalParams`](#structFRHAPI__CustomAudit_1accab5e767c8eeceaa2c1accabf9e8b20)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1accab5e767c8eeceaa2c1accabf9e8b20"></a>

Gets the value of AdditionalParams_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetAdditionalParams`](#structFRHAPI__CustomAudit_1aa191c111e89e05a09b5125fdad48259f)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__CustomAudit_1aa191c111e89e05a09b5125fdad48259f"></a>

Fills OutValue with the value of AdditionalParams_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetAdditionalParamsOrNull`](#structFRHAPI__CustomAudit_1abfe4b6849ad28f270b888f8ada04ea20)`()` <a id="structFRHAPI__CustomAudit_1abfe4b6849ad28f270b888f8ada04ea20"></a>

Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetAdditionalParamsOrNull`](#structFRHAPI__CustomAudit_1a3a3553b29d4f0802ff7d69a93ade04f4)`() const` <a id="structFRHAPI__CustomAudit_1a3a3553b29d4f0802ff7d69a93ade04f4"></a>

Returns a pointer to AdditionalParams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetAdditionalParams`](#structFRHAPI__CustomAudit_1a595e62f46d3468ab5c57e4e5ad9679e8)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__CustomAudit_1a595e62f46d3468ab5c57e4e5ad9679e8"></a>

Sets the value of AdditionalParams_Optional and also sets AdditionalParams_IsSet to true.

<br>
#### `public inline void `[`ClearAdditionalParams`](#structFRHAPI__CustomAudit_1a598afab98de87598b83f1f0b9aff1679)`()` <a id="structFRHAPI__CustomAudit_1a598afab98de87598b83f1f0b9aff1679"></a>

Clears the value of AdditionalParams_Optional and sets AdditionalParams_IsSet to false.

<br>
#### `public inline TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__CustomAudit_1ae216016f13d7c6dd8a3b4fcadc0faef4)`()` <a id="structFRHAPI__CustomAudit_1ae216016f13d7c6dd8a3b4fcadc0faef4"></a>

Gets the value of MapPreferences_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__CustomAudit_1a3048a285279fcbcad5061a562b48771b)`() const` <a id="structFRHAPI__CustomAudit_1a3048a285279fcbcad5061a562b48771b"></a>

Gets the value of MapPreferences_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< FString > & `[`GetMapPreferences`](#structFRHAPI__CustomAudit_1ab0ed1954e1d1d0541a0916b317cae8b0)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1ab0ed1954e1d1d0541a0916b317cae8b0"></a>

Gets the value of MapPreferences_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMapPreferences`](#structFRHAPI__CustomAudit_1aa1d76e51b1915aa065c926ed372f343a)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__CustomAudit_1aa1d76e51b1915aa065c926ed372f343a"></a>

Fills OutValue with the value of MapPreferences_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__CustomAudit_1a90b8638a75e24bd5ce74e4bd9c1ac05c)`()` <a id="structFRHAPI__CustomAudit_1a90b8638a75e24bd5ce74e4bd9c1ac05c"></a>

Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< FString > * `[`GetMapPreferencesOrNull`](#structFRHAPI__CustomAudit_1a38bab9ba80b3234d3f7865ed4a1ba2a8)`() const` <a id="structFRHAPI__CustomAudit_1a38bab9ba80b3234d3f7865ed4a1ba2a8"></a>

Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMapPreferences`](#structFRHAPI__CustomAudit_1a4cf2617b36568d34503e9383164742fe)`(TArray< FString > NewValue)` <a id="structFRHAPI__CustomAudit_1a4cf2617b36568d34503e9383164742fe"></a>

Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true.

<br>
#### `public inline void `[`ClearMapPreferences`](#structFRHAPI__CustomAudit_1a57ed5f316fa7f6c7acaab5f7db37ad39)`()` <a id="structFRHAPI__CustomAudit_1a57ed5f316fa7f6c7acaab5f7db37ad39"></a>

Clears the value of MapPreferences_Optional and sets MapPreferences_IsSet to false.

<br>
#### `public inline TArray< FString > & `[`GetQueuedSessionId`](#structFRHAPI__CustomAudit_1a98ae96ffd56faab16453ec131a4a1555)`()` <a id="structFRHAPI__CustomAudit_1a98ae96ffd56faab16453ec131a4a1555"></a>

Gets the value of QueuedSessionId_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< FString > & `[`GetQueuedSessionId`](#structFRHAPI__CustomAudit_1a6fe1e506626e05fbef8f5825ffc67042)`() const` <a id="structFRHAPI__CustomAudit_1a6fe1e506626e05fbef8f5825ffc67042"></a>

Gets the value of QueuedSessionId_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< FString > & `[`GetQueuedSessionId`](#structFRHAPI__CustomAudit_1a4742afda5bdbe4ba42237a8e38772db4)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1a4742afda5bdbe4ba42237a8e38772db4"></a>

Gets the value of QueuedSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetQueuedSessionId`](#structFRHAPI__CustomAudit_1a7ce02c5299d232a86b234ab11ee429ad)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__CustomAudit_1a7ce02c5299d232a86b234ab11ee429ad"></a>

Fills OutValue with the value of QueuedSessionId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< FString > * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__CustomAudit_1a420e2060586682ac780d23fdb275c4c8)`()` <a id="structFRHAPI__CustomAudit_1a420e2060586682ac780d23fdb275c4c8"></a>

Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< FString > * `[`GetQueuedSessionIdOrNull`](#structFRHAPI__CustomAudit_1a6cd857867e7221cc1d7a462cbd21297d)`() const` <a id="structFRHAPI__CustomAudit_1a6cd857867e7221cc1d7a462cbd21297d"></a>

Returns a pointer to QueuedSessionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetQueuedSessionId`](#structFRHAPI__CustomAudit_1a9b1f96209d221c22d73355c8efdb2da0)`(TArray< FString > NewValue)` <a id="structFRHAPI__CustomAudit_1a9b1f96209d221c22d73355c8efdb2da0"></a>

Sets the value of QueuedSessionId_Optional and also sets QueuedSessionId_IsSet to true.

<br>
#### `public inline void `[`ClearQueuedSessionId`](#structFRHAPI__CustomAudit_1a345a66bc15780dbfd77dd1c0393b95b6)`()` <a id="structFRHAPI__CustomAudit_1a345a66bc15780dbfd77dd1c0393b95b6"></a>

Clears the value of QueuedSessionId_Optional and sets QueuedSessionId_IsSet to false.

<br>
#### `public inline FGuid & `[`GetRequestingUserUuid`](#structFRHAPI__CustomAudit_1a59375e37298141ec2e6e221c729eec0e)`()` <a id="structFRHAPI__CustomAudit_1a59375e37298141ec2e6e221c729eec0e"></a>

Gets the value of RequestingUserUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetRequestingUserUuid`](#structFRHAPI__CustomAudit_1a79fd7b56c0656d7db7b3ac3cfe139ee6)`() const` <a id="structFRHAPI__CustomAudit_1a79fd7b56c0656d7db7b3ac3cfe139ee6"></a>

Gets the value of RequestingUserUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetRequestingUserUuid`](#structFRHAPI__CustomAudit_1adbe7c6a06b3d4d101e3fc617c88b3d90)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__CustomAudit_1adbe7c6a06b3d4d101e3fc617c88b3d90"></a>

Gets the value of RequestingUserUuid_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetRequestingUserUuid`](#structFRHAPI__CustomAudit_1a1194dacfda55f5d60b60e2b74f56e99d)`(FGuid & OutValue) const` <a id="structFRHAPI__CustomAudit_1a1194dacfda55f5d60b60e2b74f56e99d"></a>

Fills OutValue with the value of RequestingUserUuid_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FGuid * `[`GetRequestingUserUuidOrNull`](#structFRHAPI__CustomAudit_1ab70144ead8ad39c509531ea6237c1765)`()` <a id="structFRHAPI__CustomAudit_1ab70144ead8ad39c509531ea6237c1765"></a>

Returns a pointer to RequestingUserUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FGuid * `[`GetRequestingUserUuidOrNull`](#structFRHAPI__CustomAudit_1a4bdcb7ca9bc03791f952d6db87e9d739)`() const` <a id="structFRHAPI__CustomAudit_1a4bdcb7ca9bc03791f952d6db87e9d739"></a>

Returns a pointer to RequestingUserUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetRequestingUserUuid`](#structFRHAPI__CustomAudit_1a0cecec93d8d576b2b1c05e7be4747284)`(FGuid NewValue)` <a id="structFRHAPI__CustomAudit_1a0cecec93d8d576b2b1c05e7be4747284"></a>

Sets the value of RequestingUserUuid_Optional and also sets RequestingUserUuid_IsSet to true.

<br>
#### `public inline void `[`ClearRequestingUserUuid`](#structFRHAPI__CustomAudit_1aea8b28826904047b691947f3d5a0e653)`()` <a id="structFRHAPI__CustomAudit_1aea8b28826904047b691947f3d5a0e653"></a>

Clears the value of RequestingUserUuid_Optional and sets RequestingUserUuid_IsSet to false.

<br>
#### `public inline FDateTime & `[`GetEventDatetime`](#structFRHAPI__CustomAudit_1afb18a0667c599ef1d592a4b0e16233f4)`()` <a id="structFRHAPI__CustomAudit_1afb18a0667c599ef1d592a4b0e16233f4"></a>

Gets the value of EventDatetime.

<br>
#### `public inline const FDateTime & `[`GetEventDatetime`](#structFRHAPI__CustomAudit_1a6807a2f77cf7c191cc8c940078aa86e0)`() const` <a id="structFRHAPI__CustomAudit_1a6807a2f77cf7c191cc8c940078aa86e0"></a>

Gets the value of EventDatetime.

<br>
#### `public inline void `[`SetEventDatetime`](#structFRHAPI__CustomAudit_1a8630f2391decc9461c55c1f15bcb1a89)`(FDateTime NewValue)` <a id="structFRHAPI__CustomAudit_1a8630f2391decc9461c55c1f15bcb1a89"></a>

Sets the value of EventDatetime.

<br>
