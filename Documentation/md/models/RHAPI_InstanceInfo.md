# RHAPI_InstanceInfo <a id="group__RHAPI__InstanceInfo"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_InstanceInfo`](#structFRHAPI__InstanceInfo) | 

## struct `FRHAPI_InstanceInfo` <a id="structFRHAPI__InstanceInfo"></a>

```
struct FRHAPI_InstanceInfo
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`AllocationId_Optional`](#structFRHAPI__InstanceInfo_1a670c84ac627eb0148e3b2a094d2a563f) | Allocation ID for instance that's been spun up.
`public bool `[`AllocationId_IsSet`](#structFRHAPI__InstanceInfo_1a3a96f0f93d1d98d9d95b51bca0840b62) | true if AllocationId_Optional has been set to a value
`public FString `[`InstanceId_Optional`](#structFRHAPI__InstanceInfo_1a1844621b728dcc52af3b4a55747357e7) | Unique ID for the host/session relationship.
`public bool `[`InstanceId_IsSet`](#structFRHAPI__InstanceInfo_1a4d43210610b7a263c55424db540fb4b1) | true if InstanceId_Optional has been set to a value
`public ERHAPI_HostType `[`HostType`](#structFRHAPI__InstanceInfo_1aa4fa57c88e13cde9833ee29b000027a9) | Type of the host.
`public int32 `[`HostPlayerId_Optional`](#structFRHAPI__InstanceInfo_1a655893d75309d6c5d7d13c130192c60a) | Player ID of the host, if the host type is player.
`public bool `[`HostPlayerId_IsSet`](#structFRHAPI__InstanceInfo_1adac8c1cdc99823b434cced3a50abf3cf) | true if HostPlayerId_Optional has been set to a value
`public FGuid `[`HostPlayerUuid_Optional`](#structFRHAPI__InstanceInfo_1a8af67b2308b97be4d9e4e561a9e39623) | Player UUID of the host, if the host type is player.
`public bool `[`HostPlayerUuid_IsSet`](#structFRHAPI__InstanceInfo_1ad6c2343cdd2cdaa72bb93c9ddd500346) | true if HostPlayerUuid_Optional has been set to a value
`public FString `[`HostDedicatedProcessId_Optional`](#structFRHAPI__InstanceInfo_1a619c79477d6db4f713dbb601ca52f32c) | Unique ID for the process that is running this instance.
`public bool `[`HostDedicatedProcessId_IsSet`](#structFRHAPI__InstanceInfo_1acdf9bd2233cc01d4537bf2576d5d4391) | true if HostDedicatedProcessId_Optional has been set to a value
`public FString `[`HostDedicatedServerId_Optional`](#structFRHAPI__InstanceInfo_1adb1a41b1de0b1e457cc9cd22220a6c10) | Unique ID for the machine running the instance.
`public bool `[`HostDedicatedServerId_IsSet`](#structFRHAPI__InstanceInfo_1a668423caac5dcade44b138c9468bfd6d) | true if HostDedicatedServerId_Optional has been set to a value
`public ERHAPI_InstanceJoinableStatus `[`JoinStatus`](#structFRHAPI__InstanceInfo_1a540045ffc3cb213adbd178f75d8d8f4f) | Is the instance joinable at this time?
`public `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` `[`JoinParams_Optional`](#structFRHAPI__InstanceInfo_1aefc6530a0ba91ff0e221f296175f1911) | 
`public bool `[`JoinParams_IsSet`](#structFRHAPI__InstanceInfo_1a99ccc5782466d7d8602f505042fbdde1) | true if JoinParams_Optional has been set to a value
`public `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` `[`InstanceStartupParams_Optional`](#structFRHAPI__InstanceInfo_1a6bf1066eee396cfb6169ef12cb0f63a3) | 
`public bool `[`InstanceStartupParams_IsSet`](#structFRHAPI__InstanceInfo_1a26229b0fc19afb7346a59522a95fe8f0) | true if InstanceStartupParams_Optional has been set to a value
`public FString `[`Version_Optional`](#structFRHAPI__InstanceInfo_1a660e116a2617fc5b28a37c6ea34f93bb) | Product Client Version number. Used for compatibility checking with players.
`public bool `[`Version_IsSet`](#structFRHAPI__InstanceInfo_1a0089cb3ba53b990e04ae69dae2eba0a0) | true if Version_Optional has been set to a value
`public FDateTime `[`Created`](#structFRHAPI__InstanceInfo_1a93af18f5736b9faacdd3fc6301486647) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__InstanceInfo_1af4865b361b57b399511fe0932cb6f066) | instance-defined custom data
`public bool `[`CustomData_IsSet`](#structFRHAPI__InstanceInfo_1a03e270792bf6f6994f6656c65da324b8) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__InstanceInfo_1a6534ad7c92643f1e74f384ecea120524)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InstanceInfo_1ad647ee64ac9cdb174f6780b91bceda2e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfo_1af406c06b9e864153010e790b5104f51b)`()` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfo_1ac283bcaab47367154941fd32a51a0b44)`() const` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfo_1ae9404356d57942108cfb76e43fa25487)`(const FString & DefaultValue) const` | Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAllocationId`](#structFRHAPI__InstanceInfo_1a8ba744444eb8302fda92a24a818534a5)`(FString & OutValue) const` | Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetAllocationIdOrNull`](#structFRHAPI__InstanceInfo_1a5d37536867f853757ca88f1e97eeac51)`()` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__InstanceInfo_1a6fc3b478077d55757324da2d24fbc8ab)`() const` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAllocationId`](#structFRHAPI__InstanceInfo_1ad7f8218d610756db98f4f037ce44db54)`(FString NewValue)` | Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.
`public inline void `[`ClearAllocationId`](#structFRHAPI__InstanceInfo_1a17455873e27cdaeefad64ade9f56b587)`()` | Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__InstanceInfo_1a18c54761dca0b26947c7d883a1abbaac)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__InstanceInfo_1a154eb50a6f8cf9404603c3e375169c15)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__InstanceInfo_1aebba6cbcb04b32a75a15da4333881220)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceId`](#structFRHAPI__InstanceInfo_1a63d00d62852cbea2ffd9ef2155203cca)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__InstanceInfo_1adaa3dede24dfa6a607928aa122c33d1f)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__InstanceInfo_1ac6d4c1df00a3efbadbd912bf1399cb6c)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceId`](#structFRHAPI__InstanceInfo_1a712ecfd5920ad5c15907e51f9698ed26)`(FString NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline void `[`ClearInstanceId`](#structFRHAPI__InstanceInfo_1aa79c4989dd4aac544bd97b1c4af327ac)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__InstanceInfo_1a8da5134593917a34f267c070738d690e)`()` | Gets the value of HostType.
`public inline const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__InstanceInfo_1a143e42f2667631cfd3eef757d9ebbebf)`() const` | Gets the value of HostType.
`public inline void `[`SetHostType`](#structFRHAPI__InstanceInfo_1a9c91b1f15cbe4b4e3c3390e1610ca699)`(ERHAPI_HostType NewValue)` | Sets the value of HostType.
`public inline int32 & `[`GetHostPlayerId`](#structFRHAPI__InstanceInfo_1a0b6652288870477d9ff0cfbe3aea6adb)`()` | Gets the value of HostPlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetHostPlayerId`](#structFRHAPI__InstanceInfo_1abd92c8a3926a4de83d78e4bf15f8706a)`() const` | Gets the value of HostPlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetHostPlayerId`](#structFRHAPI__InstanceInfo_1a695a3efd18583c1e8b30774f2b9e1ced)`(const int32 & DefaultValue) const` | Gets the value of HostPlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostPlayerId`](#structFRHAPI__InstanceInfo_1a830763d3e0fadf19c61f87ad687b3a0b)`(int32 & OutValue) const` | Fills OutValue with the value of HostPlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetHostPlayerIdOrNull`](#structFRHAPI__InstanceInfo_1af020cad119e021fc175781d0b2d853a2)`()` | Returns a pointer to HostPlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetHostPlayerIdOrNull`](#structFRHAPI__InstanceInfo_1a9288f104f3bcdae99203322665f67248)`() const` | Returns a pointer to HostPlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostPlayerId`](#structFRHAPI__InstanceInfo_1a9896d1580219888bc9b4104f9eb2e59c)`(int32 NewValue)` | Sets the value of HostPlayerId_Optional and also sets HostPlayerId_IsSet to true.
`public inline void `[`ClearHostPlayerId`](#structFRHAPI__InstanceInfo_1aacebdba3138a046478b14f4c0d34acaa)`()` | Clears the value of HostPlayerId_Optional and sets HostPlayerId_IsSet to false.
`public inline bool `[`IsHostPlayerIdDefaultValue`](#structFRHAPI__InstanceInfo_1aabe585ad639e35768dc024e49aa411fe)`() const` | Returns true if HostPlayerId_Optional is set and matches the default value.
`public inline void `[`SetHostPlayerIdToDefault`](#structFRHAPI__InstanceInfo_1a2715c138efedba7f2dbb48e69076fbcf)`()` | Sets the value of HostPlayerId_Optional to its default and also sets HostPlayerId_IsSet to true.
`public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a043d691ac9a0db83acaa0613efbfea3a)`()` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a3eff71200a32e3c4d539a7c36fe3b13b)`() const` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1ac77e7293596af4ace5eb6dd22cc95291)`(const FGuid & DefaultValue) const` | Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a977e668da90c8d57f0325c8f6fcc7d51)`(FGuid & OutValue) const` | Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__InstanceInfo_1a7d8c64c91e2de31c1d0535703a70b4d9)`()` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__InstanceInfo_1aaa6e9f6653b0fef91bd4e09412aca140)`() const` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a04c7df40c9ea00f62c05e496d20f2e90)`(FGuid NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.
`public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a3a9817e7888778f65ce3e24f146a8eb8)`()` | Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.
`public inline FString & `[`GetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a5fc73a07ce0fdf93a09101c0be14572d)`()` | Gets the value of HostDedicatedProcessId_Optional, regardless of it having been set.
`public inline const FString & `[`GetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a54a902e35a98954092bfa2f976def04b)`() const` | Gets the value of HostDedicatedProcessId_Optional, regardless of it having been set.
`public inline const FString & `[`GetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a45295309e0f694fe61ec22e33da28780)`(const FString & DefaultValue) const` | Gets the value of HostDedicatedProcessId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a1d291b8c7cd76659d888af875ee0892f)`(FString & OutValue) const` | Fills OutValue with the value of HostDedicatedProcessId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetHostDedicatedProcessIdOrNull`](#structFRHAPI__InstanceInfo_1aa5098d03202def1f74ff3f8de8a011b0)`()` | Returns a pointer to HostDedicatedProcessId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetHostDedicatedProcessIdOrNull`](#structFRHAPI__InstanceInfo_1a0bbb0be7a12c70e108969b8dac0486f9)`() const` | Returns a pointer to HostDedicatedProcessId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1ab4bff559ff184ac14049aec5d90803b9)`(FString NewValue)` | Sets the value of HostDedicatedProcessId_Optional and also sets HostDedicatedProcessId_IsSet to true.
`public inline void `[`ClearHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a0f9c42f75908fd7a719a5751d360646d)`()` | Clears the value of HostDedicatedProcessId_Optional and sets HostDedicatedProcessId_IsSet to false.
`public inline FString & `[`GetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1a3994b9018e2d35338a484a557eaab4a5)`()` | Gets the value of HostDedicatedServerId_Optional, regardless of it having been set.
`public inline const FString & `[`GetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1a4543e63450caf2b218153171e892edd2)`() const` | Gets the value of HostDedicatedServerId_Optional, regardless of it having been set.
`public inline const FString & `[`GetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1af2e107ea45921adce71e666a7a21b049)`(const FString & DefaultValue) const` | Gets the value of HostDedicatedServerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1ae18becab3f83d76873ad3bb2830ae69d)`(FString & OutValue) const` | Fills OutValue with the value of HostDedicatedServerId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetHostDedicatedServerIdOrNull`](#structFRHAPI__InstanceInfo_1ac6ec9f3bab08ef39b5f2ad6fa7f9e769)`()` | Returns a pointer to HostDedicatedServerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetHostDedicatedServerIdOrNull`](#structFRHAPI__InstanceInfo_1ab891a1b26ef284c385f1bed2c8c5e66b)`() const` | Returns a pointer to HostDedicatedServerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1ac1c605ed2793e6237785458a50476b79)`(FString NewValue)` | Sets the value of HostDedicatedServerId_Optional and also sets HostDedicatedServerId_IsSet to true.
`public inline void `[`ClearHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1ac659005e87cb03a194cbdfccca754abf)`()` | Clears the value of HostDedicatedServerId_Optional and sets HostDedicatedServerId_IsSet to false.
`public inline ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__InstanceInfo_1abe78f8152b47515a7f877c2ec503dfd9)`()` | Gets the value of JoinStatus.
`public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__InstanceInfo_1af9c996aa878ee1ea47f8ba76902edf3a)`() const` | Gets the value of JoinStatus.
`public inline void `[`SetJoinStatus`](#structFRHAPI__InstanceInfo_1a5521bcc6f6ec28fee628900b0a5eb9ba)`(ERHAPI_InstanceJoinableStatus NewValue)` | Sets the value of JoinStatus.
`public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfo_1ae66b49473796d0e8c133e20594903a34)`()` | Gets the value of JoinParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfo_1ad566fd7b798229c17377ff333023f6dc)`() const` | Gets the value of JoinParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfo_1ab111e70ca1edb3c4d03fb6469c6e6c90)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & DefaultValue) const` | Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinParams`](#structFRHAPI__InstanceInfo_1a45938b171ea35d078e9fd6b30e1080a1)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & OutValue) const` | Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__InstanceInfo_1a1793e55dfba5d3d571280f2feac76dd2)`()` | Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__InstanceInfo_1a10b644db084f0258487a386207d56d92)`() const` | Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinParams`](#structFRHAPI__InstanceInfo_1a5e6b4f7e29fbdac3fdbffb3afce817ef)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` NewValue)` | Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.
`public inline void `[`ClearJoinParams`](#structFRHAPI__InstanceInfo_1a79d4953e7dc5d7d603a1bd3c0f078d99)`()` | Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.
`public inline `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1a463691c3070675071dcec534bfe86785)`()` | Gets the value of InstanceStartupParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1a7d15398759260666a632e1e7973ab709)`() const` | Gets the value of InstanceStartupParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1a01e716b0fbd9c08ce72ba410f88b0363)`(const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & DefaultValue) const` | Gets the value of InstanceStartupParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1ae1391ba5d4a7e883c435bdad1355e413)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & OutValue) const` | Fills OutValue with the value of InstanceStartupParams_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetInstanceStartupParamsOrNull`](#structFRHAPI__InstanceInfo_1a392aa0bdcc65317b337a6bbb1481eb2f)`()` | Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetInstanceStartupParamsOrNull`](#structFRHAPI__InstanceInfo_1aafe5e7418fa2ea84e6666be9fab0c1fc)`() const` | Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1a56730c9a269f8cd6b2134caaf3df04bb)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` NewValue)` | Sets the value of InstanceStartupParams_Optional and also sets InstanceStartupParams_IsSet to true.
`public inline void `[`ClearInstanceStartupParams`](#structFRHAPI__InstanceInfo_1aef5d1a846e3bc2d56421f87d9e5595fd)`()` | Clears the value of InstanceStartupParams_Optional and sets InstanceStartupParams_IsSet to false.
`public inline FString & `[`GetVersion`](#structFRHAPI__InstanceInfo_1a94905d54570928aa18e2e27754c07120)`()` | Gets the value of Version_Optional, regardless of it having been set.
`public inline const FString & `[`GetVersion`](#structFRHAPI__InstanceInfo_1a61d0030f2059135070c5c6515f89d7aa)`() const` | Gets the value of Version_Optional, regardless of it having been set.
`public inline const FString & `[`GetVersion`](#structFRHAPI__InstanceInfo_1a3b6b79c92bac8ae086d7fbf716b05bf7)`(const FString & DefaultValue) const` | Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVersion`](#structFRHAPI__InstanceInfo_1ae4ad200ba900ced02d5a154170d42694)`(FString & OutValue) const` | Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetVersionOrNull`](#structFRHAPI__InstanceInfo_1ace193d4148d67735184dd7b0a0a3cfba)`()` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetVersionOrNull`](#structFRHAPI__InstanceInfo_1ae551d2147354e52137a1a52608ba80f9)`() const` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVersion`](#structFRHAPI__InstanceInfo_1a335086fda934db40b6217b06802bb5cf)`(FString NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true.
`public inline void `[`ClearVersion`](#structFRHAPI__InstanceInfo_1af29e85d43799d74da9897137984fb0be)`()` | Clears the value of Version_Optional and sets Version_IsSet to false.
`public inline FDateTime & `[`GetCreated`](#structFRHAPI__InstanceInfo_1af4752269bbebaa67428b95d068c95794)`()` | Gets the value of Created.
`public inline const FDateTime & `[`GetCreated`](#structFRHAPI__InstanceInfo_1ac92e2a6de759a7fd00971d30f5ec2552)`() const` | Gets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__InstanceInfo_1a26d08c984e8606c5109a08761812bd42)`(FDateTime NewValue)` | Sets the value of Created.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfo_1a1384bb92f83176f32258ed44cc7cba1c)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfo_1a12fb9b09751b65d311cb84c19fdf88eb)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfo_1ae56d37f17e4d7b44cb8d7a340b5bd6f4)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__InstanceInfo_1a046fc3e6195a4270741e60be0ef1564e)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceInfo_1a22786189ec220666a6e14d71c6c851e3)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceInfo_1a41650e460c8f774984418299bb173551)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__InstanceInfo_1a6b371ffb911a4ff7d5f666de2505253d)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__InstanceInfo_1adc5b55f5426979daa0d97885088268ed)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### Members

#### `public FString `[`AllocationId_Optional`](#structFRHAPI__InstanceInfo_1a670c84ac627eb0148e3b2a094d2a563f) <a id="structFRHAPI__InstanceInfo_1a670c84ac627eb0148e3b2a094d2a563f"></a>

Allocation ID for instance that's been spun up.

<br>
#### `public bool `[`AllocationId_IsSet`](#structFRHAPI__InstanceInfo_1a3a96f0f93d1d98d9d95b51bca0840b62) <a id="structFRHAPI__InstanceInfo_1a3a96f0f93d1d98d9d95b51bca0840b62"></a>

true if AllocationId_Optional has been set to a value

<br>
#### `public FString `[`InstanceId_Optional`](#structFRHAPI__InstanceInfo_1a1844621b728dcc52af3b4a55747357e7) <a id="structFRHAPI__InstanceInfo_1a1844621b728dcc52af3b4a55747357e7"></a>

Unique ID for the host/session relationship.

<br>
#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__InstanceInfo_1a4d43210610b7a263c55424db540fb4b1) <a id="structFRHAPI__InstanceInfo_1a4d43210610b7a263c55424db540fb4b1"></a>

true if InstanceId_Optional has been set to a value

<br>
#### `public ERHAPI_HostType `[`HostType`](#structFRHAPI__InstanceInfo_1aa4fa57c88e13cde9833ee29b000027a9) <a id="structFRHAPI__InstanceInfo_1aa4fa57c88e13cde9833ee29b000027a9"></a>

Type of the host.

<br>
#### `public int32 `[`HostPlayerId_Optional`](#structFRHAPI__InstanceInfo_1a655893d75309d6c5d7d13c130192c60a) <a id="structFRHAPI__InstanceInfo_1a655893d75309d6c5d7d13c130192c60a"></a>

Player ID of the host, if the host type is player.

<br>
#### `public bool `[`HostPlayerId_IsSet`](#structFRHAPI__InstanceInfo_1adac8c1cdc99823b434cced3a50abf3cf) <a id="structFRHAPI__InstanceInfo_1adac8c1cdc99823b434cced3a50abf3cf"></a>

true if HostPlayerId_Optional has been set to a value

<br>
#### `public FGuid `[`HostPlayerUuid_Optional`](#structFRHAPI__InstanceInfo_1a8af67b2308b97be4d9e4e561a9e39623) <a id="structFRHAPI__InstanceInfo_1a8af67b2308b97be4d9e4e561a9e39623"></a>

Player UUID of the host, if the host type is player.

<br>
#### `public bool `[`HostPlayerUuid_IsSet`](#structFRHAPI__InstanceInfo_1ad6c2343cdd2cdaa72bb93c9ddd500346) <a id="structFRHAPI__InstanceInfo_1ad6c2343cdd2cdaa72bb93c9ddd500346"></a>

true if HostPlayerUuid_Optional has been set to a value

<br>
#### `public FString `[`HostDedicatedProcessId_Optional`](#structFRHAPI__InstanceInfo_1a619c79477d6db4f713dbb601ca52f32c) <a id="structFRHAPI__InstanceInfo_1a619c79477d6db4f713dbb601ca52f32c"></a>

Unique ID for the process that is running this instance.

<br>
#### `public bool `[`HostDedicatedProcessId_IsSet`](#structFRHAPI__InstanceInfo_1acdf9bd2233cc01d4537bf2576d5d4391) <a id="structFRHAPI__InstanceInfo_1acdf9bd2233cc01d4537bf2576d5d4391"></a>

true if HostDedicatedProcessId_Optional has been set to a value

<br>
#### `public FString `[`HostDedicatedServerId_Optional`](#structFRHAPI__InstanceInfo_1adb1a41b1de0b1e457cc9cd22220a6c10) <a id="structFRHAPI__InstanceInfo_1adb1a41b1de0b1e457cc9cd22220a6c10"></a>

Unique ID for the machine running the instance.

<br>
#### `public bool `[`HostDedicatedServerId_IsSet`](#structFRHAPI__InstanceInfo_1a668423caac5dcade44b138c9468bfd6d) <a id="structFRHAPI__InstanceInfo_1a668423caac5dcade44b138c9468bfd6d"></a>

true if HostDedicatedServerId_Optional has been set to a value

<br>
#### `public ERHAPI_InstanceJoinableStatus `[`JoinStatus`](#structFRHAPI__InstanceInfo_1a540045ffc3cb213adbd178f75d8d8f4f) <a id="structFRHAPI__InstanceInfo_1a540045ffc3cb213adbd178f75d8d8f4f"></a>

Is the instance joinable at this time?

<br>
#### `public `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` `[`JoinParams_Optional`](#structFRHAPI__InstanceInfo_1aefc6530a0ba91ff0e221f296175f1911) <a id="structFRHAPI__InstanceInfo_1aefc6530a0ba91ff0e221f296175f1911"></a>

<br>
#### `public bool `[`JoinParams_IsSet`](#structFRHAPI__InstanceInfo_1a99ccc5782466d7d8602f505042fbdde1) <a id="structFRHAPI__InstanceInfo_1a99ccc5782466d7d8602f505042fbdde1"></a>

true if JoinParams_Optional has been set to a value

<br>
#### `public `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` `[`InstanceStartupParams_Optional`](#structFRHAPI__InstanceInfo_1a6bf1066eee396cfb6169ef12cb0f63a3) <a id="structFRHAPI__InstanceInfo_1a6bf1066eee396cfb6169ef12cb0f63a3"></a>

<br>
#### `public bool `[`InstanceStartupParams_IsSet`](#structFRHAPI__InstanceInfo_1a26229b0fc19afb7346a59522a95fe8f0) <a id="structFRHAPI__InstanceInfo_1a26229b0fc19afb7346a59522a95fe8f0"></a>

true if InstanceStartupParams_Optional has been set to a value

<br>
#### `public FString `[`Version_Optional`](#structFRHAPI__InstanceInfo_1a660e116a2617fc5b28a37c6ea34f93bb) <a id="structFRHAPI__InstanceInfo_1a660e116a2617fc5b28a37c6ea34f93bb"></a>

Product Client Version number. Used for compatibility checking with players.

<br>
#### `public bool `[`Version_IsSet`](#structFRHAPI__InstanceInfo_1a0089cb3ba53b990e04ae69dae2eba0a0) <a id="structFRHAPI__InstanceInfo_1a0089cb3ba53b990e04ae69dae2eba0a0"></a>

true if Version_Optional has been set to a value

<br>
#### `public FDateTime `[`Created`](#structFRHAPI__InstanceInfo_1a93af18f5736b9faacdd3fc6301486647) <a id="structFRHAPI__InstanceInfo_1a93af18f5736b9faacdd3fc6301486647"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

<br>
#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__InstanceInfo_1af4865b361b57b399511fe0932cb6f066) <a id="structFRHAPI__InstanceInfo_1af4865b361b57b399511fe0932cb6f066"></a>

instance-defined custom data

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__InstanceInfo_1a03e270792bf6f6994f6656c65da324b8) <a id="structFRHAPI__InstanceInfo_1a03e270792bf6f6994f6656c65da324b8"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__InstanceInfo_1a6534ad7c92643f1e74f384ecea120524)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InstanceInfo_1a6534ad7c92643f1e74f384ecea120524"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__InstanceInfo_1ad647ee64ac9cdb174f6780b91bceda2e)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__InstanceInfo_1ad647ee64ac9cdb174f6780b91bceda2e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfo_1af406c06b9e864153010e790b5104f51b)`()` <a id="structFRHAPI__InstanceInfo_1af406c06b9e864153010e790b5104f51b"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfo_1ac283bcaab47367154941fd32a51a0b44)`() const` <a id="structFRHAPI__InstanceInfo_1ac283bcaab47367154941fd32a51a0b44"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfo_1ae9404356d57942108cfb76e43fa25487)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1ae9404356d57942108cfb76e43fa25487"></a>

Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetAllocationId`](#structFRHAPI__InstanceInfo_1a8ba744444eb8302fda92a24a818534a5)`(FString & OutValue) const` <a id="structFRHAPI__InstanceInfo_1a8ba744444eb8302fda92a24a818534a5"></a>

Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetAllocationIdOrNull`](#structFRHAPI__InstanceInfo_1a5d37536867f853757ca88f1e97eeac51)`()` <a id="structFRHAPI__InstanceInfo_1a5d37536867f853757ca88f1e97eeac51"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__InstanceInfo_1a6fc3b478077d55757324da2d24fbc8ab)`() const` <a id="structFRHAPI__InstanceInfo_1a6fc3b478077d55757324da2d24fbc8ab"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetAllocationId`](#structFRHAPI__InstanceInfo_1ad7f8218d610756db98f4f037ce44db54)`(FString NewValue)` <a id="structFRHAPI__InstanceInfo_1ad7f8218d610756db98f4f037ce44db54"></a>

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.

<br>
#### `public inline void `[`ClearAllocationId`](#structFRHAPI__InstanceInfo_1a17455873e27cdaeefad64ade9f56b587)`()` <a id="structFRHAPI__InstanceInfo_1a17455873e27cdaeefad64ade9f56b587"></a>

Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.

<br>
#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__InstanceInfo_1a18c54761dca0b26947c7d883a1abbaac)`()` <a id="structFRHAPI__InstanceInfo_1a18c54761dca0b26947c7d883a1abbaac"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__InstanceInfo_1a154eb50a6f8cf9404603c3e375169c15)`() const` <a id="structFRHAPI__InstanceInfo_1a154eb50a6f8cf9404603c3e375169c15"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__InstanceInfo_1aebba6cbcb04b32a75a15da4333881220)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1aebba6cbcb04b32a75a15da4333881220"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInstanceId`](#structFRHAPI__InstanceInfo_1a63d00d62852cbea2ffd9ef2155203cca)`(FString & OutValue) const` <a id="structFRHAPI__InstanceInfo_1a63d00d62852cbea2ffd9ef2155203cca"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__InstanceInfo_1adaa3dede24dfa6a607928aa122c33d1f)`()` <a id="structFRHAPI__InstanceInfo_1adaa3dede24dfa6a607928aa122c33d1f"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__InstanceInfo_1ac6d4c1df00a3efbadbd912bf1399cb6c)`() const` <a id="structFRHAPI__InstanceInfo_1ac6d4c1df00a3efbadbd912bf1399cb6c"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInstanceId`](#structFRHAPI__InstanceInfo_1a712ecfd5920ad5c15907e51f9698ed26)`(FString NewValue)` <a id="structFRHAPI__InstanceInfo_1a712ecfd5920ad5c15907e51f9698ed26"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

<br>
#### `public inline void `[`ClearInstanceId`](#structFRHAPI__InstanceInfo_1aa79c4989dd4aac544bd97b1c4af327ac)`()` <a id="structFRHAPI__InstanceInfo_1aa79c4989dd4aac544bd97b1c4af327ac"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

<br>
#### `public inline ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__InstanceInfo_1a8da5134593917a34f267c070738d690e)`()` <a id="structFRHAPI__InstanceInfo_1a8da5134593917a34f267c070738d690e"></a>

Gets the value of HostType.

<br>
#### `public inline const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__InstanceInfo_1a143e42f2667631cfd3eef757d9ebbebf)`() const` <a id="structFRHAPI__InstanceInfo_1a143e42f2667631cfd3eef757d9ebbebf"></a>

Gets the value of HostType.

<br>
#### `public inline void `[`SetHostType`](#structFRHAPI__InstanceInfo_1a9c91b1f15cbe4b4e3c3390e1610ca699)`(ERHAPI_HostType NewValue)` <a id="structFRHAPI__InstanceInfo_1a9c91b1f15cbe4b4e3c3390e1610ca699"></a>

Sets the value of HostType.

<br>
#### `public inline int32 & `[`GetHostPlayerId`](#structFRHAPI__InstanceInfo_1a0b6652288870477d9ff0cfbe3aea6adb)`()` <a id="structFRHAPI__InstanceInfo_1a0b6652288870477d9ff0cfbe3aea6adb"></a>

Gets the value of HostPlayerId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetHostPlayerId`](#structFRHAPI__InstanceInfo_1abd92c8a3926a4de83d78e4bf15f8706a)`() const` <a id="structFRHAPI__InstanceInfo_1abd92c8a3926a4de83d78e4bf15f8706a"></a>

Gets the value of HostPlayerId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetHostPlayerId`](#structFRHAPI__InstanceInfo_1a695a3efd18583c1e8b30774f2b9e1ced)`(const int32 & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1a695a3efd18583c1e8b30774f2b9e1ced"></a>

Gets the value of HostPlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetHostPlayerId`](#structFRHAPI__InstanceInfo_1a830763d3e0fadf19c61f87ad687b3a0b)`(int32 & OutValue) const` <a id="structFRHAPI__InstanceInfo_1a830763d3e0fadf19c61f87ad687b3a0b"></a>

Fills OutValue with the value of HostPlayerId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetHostPlayerIdOrNull`](#structFRHAPI__InstanceInfo_1af020cad119e021fc175781d0b2d853a2)`()` <a id="structFRHAPI__InstanceInfo_1af020cad119e021fc175781d0b2d853a2"></a>

Returns a pointer to HostPlayerId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetHostPlayerIdOrNull`](#structFRHAPI__InstanceInfo_1a9288f104f3bcdae99203322665f67248)`() const` <a id="structFRHAPI__InstanceInfo_1a9288f104f3bcdae99203322665f67248"></a>

Returns a pointer to HostPlayerId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetHostPlayerId`](#structFRHAPI__InstanceInfo_1a9896d1580219888bc9b4104f9eb2e59c)`(int32 NewValue)` <a id="structFRHAPI__InstanceInfo_1a9896d1580219888bc9b4104f9eb2e59c"></a>

Sets the value of HostPlayerId_Optional and also sets HostPlayerId_IsSet to true.

<br>
#### `public inline void `[`ClearHostPlayerId`](#structFRHAPI__InstanceInfo_1aacebdba3138a046478b14f4c0d34acaa)`()` <a id="structFRHAPI__InstanceInfo_1aacebdba3138a046478b14f4c0d34acaa"></a>

Clears the value of HostPlayerId_Optional and sets HostPlayerId_IsSet to false.

<br>
#### `public inline bool `[`IsHostPlayerIdDefaultValue`](#structFRHAPI__InstanceInfo_1aabe585ad639e35768dc024e49aa411fe)`() const` <a id="structFRHAPI__InstanceInfo_1aabe585ad639e35768dc024e49aa411fe"></a>

Returns true if HostPlayerId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetHostPlayerIdToDefault`](#structFRHAPI__InstanceInfo_1a2715c138efedba7f2dbb48e69076fbcf)`()` <a id="structFRHAPI__InstanceInfo_1a2715c138efedba7f2dbb48e69076fbcf"></a>

Sets the value of HostPlayerId_Optional to its default and also sets HostPlayerId_IsSet to true.

<br>
#### `public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a043d691ac9a0db83acaa0613efbfea3a)`()` <a id="structFRHAPI__InstanceInfo_1a043d691ac9a0db83acaa0613efbfea3a"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a3eff71200a32e3c4d539a7c36fe3b13b)`() const` <a id="structFRHAPI__InstanceInfo_1a3eff71200a32e3c4d539a7c36fe3b13b"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1ac77e7293596af4ace5eb6dd22cc95291)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1ac77e7293596af4ace5eb6dd22cc95291"></a>

Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a977e668da90c8d57f0325c8f6fcc7d51)`(FGuid & OutValue) const` <a id="structFRHAPI__InstanceInfo_1a977e668da90c8d57f0325c8f6fcc7d51"></a>

Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__InstanceInfo_1a7d8c64c91e2de31c1d0535703a70b4d9)`()` <a id="structFRHAPI__InstanceInfo_1a7d8c64c91e2de31c1d0535703a70b4d9"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__InstanceInfo_1aaa6e9f6653b0fef91bd4e09412aca140)`() const` <a id="structFRHAPI__InstanceInfo_1aaa6e9f6653b0fef91bd4e09412aca140"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a04c7df40c9ea00f62c05e496d20f2e90)`(FGuid NewValue)` <a id="structFRHAPI__InstanceInfo_1a04c7df40c9ea00f62c05e496d20f2e90"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.

<br>
#### `public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a3a9817e7888778f65ce3e24f146a8eb8)`()` <a id="structFRHAPI__InstanceInfo_1a3a9817e7888778f65ce3e24f146a8eb8"></a>

Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.

<br>
#### `public inline FString & `[`GetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a5fc73a07ce0fdf93a09101c0be14572d)`()` <a id="structFRHAPI__InstanceInfo_1a5fc73a07ce0fdf93a09101c0be14572d"></a>

Gets the value of HostDedicatedProcessId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a54a902e35a98954092bfa2f976def04b)`() const` <a id="structFRHAPI__InstanceInfo_1a54a902e35a98954092bfa2f976def04b"></a>

Gets the value of HostDedicatedProcessId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a45295309e0f694fe61ec22e33da28780)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1a45295309e0f694fe61ec22e33da28780"></a>

Gets the value of HostDedicatedProcessId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a1d291b8c7cd76659d888af875ee0892f)`(FString & OutValue) const` <a id="structFRHAPI__InstanceInfo_1a1d291b8c7cd76659d888af875ee0892f"></a>

Fills OutValue with the value of HostDedicatedProcessId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetHostDedicatedProcessIdOrNull`](#structFRHAPI__InstanceInfo_1aa5098d03202def1f74ff3f8de8a011b0)`()` <a id="structFRHAPI__InstanceInfo_1aa5098d03202def1f74ff3f8de8a011b0"></a>

Returns a pointer to HostDedicatedProcessId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetHostDedicatedProcessIdOrNull`](#structFRHAPI__InstanceInfo_1a0bbb0be7a12c70e108969b8dac0486f9)`() const` <a id="structFRHAPI__InstanceInfo_1a0bbb0be7a12c70e108969b8dac0486f9"></a>

Returns a pointer to HostDedicatedProcessId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1ab4bff559ff184ac14049aec5d90803b9)`(FString NewValue)` <a id="structFRHAPI__InstanceInfo_1ab4bff559ff184ac14049aec5d90803b9"></a>

Sets the value of HostDedicatedProcessId_Optional and also sets HostDedicatedProcessId_IsSet to true.

<br>
#### `public inline void `[`ClearHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a0f9c42f75908fd7a719a5751d360646d)`()` <a id="structFRHAPI__InstanceInfo_1a0f9c42f75908fd7a719a5751d360646d"></a>

Clears the value of HostDedicatedProcessId_Optional and sets HostDedicatedProcessId_IsSet to false.

<br>
#### `public inline FString & `[`GetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1a3994b9018e2d35338a484a557eaab4a5)`()` <a id="structFRHAPI__InstanceInfo_1a3994b9018e2d35338a484a557eaab4a5"></a>

Gets the value of HostDedicatedServerId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1a4543e63450caf2b218153171e892edd2)`() const` <a id="structFRHAPI__InstanceInfo_1a4543e63450caf2b218153171e892edd2"></a>

Gets the value of HostDedicatedServerId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1af2e107ea45921adce71e666a7a21b049)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1af2e107ea45921adce71e666a7a21b049"></a>

Gets the value of HostDedicatedServerId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1ae18becab3f83d76873ad3bb2830ae69d)`(FString & OutValue) const` <a id="structFRHAPI__InstanceInfo_1ae18becab3f83d76873ad3bb2830ae69d"></a>

Fills OutValue with the value of HostDedicatedServerId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetHostDedicatedServerIdOrNull`](#structFRHAPI__InstanceInfo_1ac6ec9f3bab08ef39b5f2ad6fa7f9e769)`()` <a id="structFRHAPI__InstanceInfo_1ac6ec9f3bab08ef39b5f2ad6fa7f9e769"></a>

Returns a pointer to HostDedicatedServerId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetHostDedicatedServerIdOrNull`](#structFRHAPI__InstanceInfo_1ab891a1b26ef284c385f1bed2c8c5e66b)`() const` <a id="structFRHAPI__InstanceInfo_1ab891a1b26ef284c385f1bed2c8c5e66b"></a>

Returns a pointer to HostDedicatedServerId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1ac1c605ed2793e6237785458a50476b79)`(FString NewValue)` <a id="structFRHAPI__InstanceInfo_1ac1c605ed2793e6237785458a50476b79"></a>

Sets the value of HostDedicatedServerId_Optional and also sets HostDedicatedServerId_IsSet to true.

<br>
#### `public inline void `[`ClearHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1ac659005e87cb03a194cbdfccca754abf)`()` <a id="structFRHAPI__InstanceInfo_1ac659005e87cb03a194cbdfccca754abf"></a>

Clears the value of HostDedicatedServerId_Optional and sets HostDedicatedServerId_IsSet to false.

<br>
#### `public inline ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__InstanceInfo_1abe78f8152b47515a7f877c2ec503dfd9)`()` <a id="structFRHAPI__InstanceInfo_1abe78f8152b47515a7f877c2ec503dfd9"></a>

Gets the value of JoinStatus.

<br>
#### `public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__InstanceInfo_1af9c996aa878ee1ea47f8ba76902edf3a)`() const` <a id="structFRHAPI__InstanceInfo_1af9c996aa878ee1ea47f8ba76902edf3a"></a>

Gets the value of JoinStatus.

<br>
#### `public inline void `[`SetJoinStatus`](#structFRHAPI__InstanceInfo_1a5521bcc6f6ec28fee628900b0a5eb9ba)`(ERHAPI_InstanceJoinableStatus NewValue)` <a id="structFRHAPI__InstanceInfo_1a5521bcc6f6ec28fee628900b0a5eb9ba"></a>

Sets the value of JoinStatus.

<br>
#### `public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfo_1ae66b49473796d0e8c133e20594903a34)`()` <a id="structFRHAPI__InstanceInfo_1ae66b49473796d0e8c133e20594903a34"></a>

Gets the value of JoinParams_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfo_1ad566fd7b798229c17377ff333023f6dc)`() const` <a id="structFRHAPI__InstanceInfo_1ad566fd7b798229c17377ff333023f6dc"></a>

Gets the value of JoinParams_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfo_1ab111e70ca1edb3c4d03fb6469c6e6c90)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1ab111e70ca1edb3c4d03fb6469c6e6c90"></a>

Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetJoinParams`](#structFRHAPI__InstanceInfo_1a45938b171ea35d078e9fd6b30e1080a1)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & OutValue) const` <a id="structFRHAPI__InstanceInfo_1a45938b171ea35d078e9fd6b30e1080a1"></a>

Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__InstanceInfo_1a1793e55dfba5d3d571280f2feac76dd2)`()` <a id="structFRHAPI__InstanceInfo_1a1793e55dfba5d3d571280f2feac76dd2"></a>

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__InstanceInfo_1a10b644db084f0258487a386207d56d92)`() const` <a id="structFRHAPI__InstanceInfo_1a10b644db084f0258487a386207d56d92"></a>

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetJoinParams`](#structFRHAPI__InstanceInfo_1a5e6b4f7e29fbdac3fdbffb3afce817ef)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` NewValue)` <a id="structFRHAPI__InstanceInfo_1a5e6b4f7e29fbdac3fdbffb3afce817ef"></a>

Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.

<br>
#### `public inline void `[`ClearJoinParams`](#structFRHAPI__InstanceInfo_1a79d4953e7dc5d7d603a1bd3c0f078d99)`()` <a id="structFRHAPI__InstanceInfo_1a79d4953e7dc5d7d603a1bd3c0f078d99"></a>

Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.

<br>
#### `public inline `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1a463691c3070675071dcec534bfe86785)`()` <a id="structFRHAPI__InstanceInfo_1a463691c3070675071dcec534bfe86785"></a>

Gets the value of InstanceStartupParams_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1a7d15398759260666a632e1e7973ab709)`() const` <a id="structFRHAPI__InstanceInfo_1a7d15398759260666a632e1e7973ab709"></a>

Gets the value of InstanceStartupParams_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1a01e716b0fbd9c08ce72ba410f88b0363)`(const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1a01e716b0fbd9c08ce72ba410f88b0363"></a>

Gets the value of InstanceStartupParams_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1ae1391ba5d4a7e883c435bdad1355e413)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & OutValue) const` <a id="structFRHAPI__InstanceInfo_1ae1391ba5d4a7e883c435bdad1355e413"></a>

Fills OutValue with the value of InstanceStartupParams_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetInstanceStartupParamsOrNull`](#structFRHAPI__InstanceInfo_1a392aa0bdcc65317b337a6bbb1481eb2f)`()` <a id="structFRHAPI__InstanceInfo_1a392aa0bdcc65317b337a6bbb1481eb2f"></a>

Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetInstanceStartupParamsOrNull`](#structFRHAPI__InstanceInfo_1aafe5e7418fa2ea84e6666be9fab0c1fc)`() const` <a id="structFRHAPI__InstanceInfo_1aafe5e7418fa2ea84e6666be9fab0c1fc"></a>

Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1a56730c9a269f8cd6b2134caaf3df04bb)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` NewValue)` <a id="structFRHAPI__InstanceInfo_1a56730c9a269f8cd6b2134caaf3df04bb"></a>

Sets the value of InstanceStartupParams_Optional and also sets InstanceStartupParams_IsSet to true.

<br>
#### `public inline void `[`ClearInstanceStartupParams`](#structFRHAPI__InstanceInfo_1aef5d1a846e3bc2d56421f87d9e5595fd)`()` <a id="structFRHAPI__InstanceInfo_1aef5d1a846e3bc2d56421f87d9e5595fd"></a>

Clears the value of InstanceStartupParams_Optional and sets InstanceStartupParams_IsSet to false.

<br>
#### `public inline FString & `[`GetVersion`](#structFRHAPI__InstanceInfo_1a94905d54570928aa18e2e27754c07120)`()` <a id="structFRHAPI__InstanceInfo_1a94905d54570928aa18e2e27754c07120"></a>

Gets the value of Version_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetVersion`](#structFRHAPI__InstanceInfo_1a61d0030f2059135070c5c6515f89d7aa)`() const` <a id="structFRHAPI__InstanceInfo_1a61d0030f2059135070c5c6515f89d7aa"></a>

Gets the value of Version_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetVersion`](#structFRHAPI__InstanceInfo_1a3b6b79c92bac8ae086d7fbf716b05bf7)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1a3b6b79c92bac8ae086d7fbf716b05bf7"></a>

Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetVersion`](#structFRHAPI__InstanceInfo_1ae4ad200ba900ced02d5a154170d42694)`(FString & OutValue) const` <a id="structFRHAPI__InstanceInfo_1ae4ad200ba900ced02d5a154170d42694"></a>

Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetVersionOrNull`](#structFRHAPI__InstanceInfo_1ace193d4148d67735184dd7b0a0a3cfba)`()` <a id="structFRHAPI__InstanceInfo_1ace193d4148d67735184dd7b0a0a3cfba"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetVersionOrNull`](#structFRHAPI__InstanceInfo_1ae551d2147354e52137a1a52608ba80f9)`() const` <a id="structFRHAPI__InstanceInfo_1ae551d2147354e52137a1a52608ba80f9"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetVersion`](#structFRHAPI__InstanceInfo_1a335086fda934db40b6217b06802bb5cf)`(FString NewValue)` <a id="structFRHAPI__InstanceInfo_1a335086fda934db40b6217b06802bb5cf"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true.

<br>
#### `public inline void `[`ClearVersion`](#structFRHAPI__InstanceInfo_1af29e85d43799d74da9897137984fb0be)`()` <a id="structFRHAPI__InstanceInfo_1af29e85d43799d74da9897137984fb0be"></a>

Clears the value of Version_Optional and sets Version_IsSet to false.

<br>
#### `public inline FDateTime & `[`GetCreated`](#structFRHAPI__InstanceInfo_1af4752269bbebaa67428b95d068c95794)`()` <a id="structFRHAPI__InstanceInfo_1af4752269bbebaa67428b95d068c95794"></a>

Gets the value of Created.

<br>
#### `public inline const FDateTime & `[`GetCreated`](#structFRHAPI__InstanceInfo_1ac92e2a6de759a7fd00971d30f5ec2552)`() const` <a id="structFRHAPI__InstanceInfo_1ac92e2a6de759a7fd00971d30f5ec2552"></a>

Gets the value of Created.

<br>
#### `public inline void `[`SetCreated`](#structFRHAPI__InstanceInfo_1a26d08c984e8606c5109a08761812bd42)`(FDateTime NewValue)` <a id="structFRHAPI__InstanceInfo_1a26d08c984e8606c5109a08761812bd42"></a>

Sets the value of Created.

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfo_1a1384bb92f83176f32258ed44cc7cba1c)`()` <a id="structFRHAPI__InstanceInfo_1a1384bb92f83176f32258ed44cc7cba1c"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfo_1a12fb9b09751b65d311cb84c19fdf88eb)`() const` <a id="structFRHAPI__InstanceInfo_1a12fb9b09751b65d311cb84c19fdf88eb"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfo_1ae56d37f17e4d7b44cb8d7a340b5bd6f4)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1ae56d37f17e4d7b44cb8d7a340b5bd6f4"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__InstanceInfo_1a046fc3e6195a4270741e60be0ef1564e)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__InstanceInfo_1a046fc3e6195a4270741e60be0ef1564e"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceInfo_1a22786189ec220666a6e14d71c6c851e3)`()` <a id="structFRHAPI__InstanceInfo_1a22786189ec220666a6e14d71c6c851e3"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceInfo_1a41650e460c8f774984418299bb173551)`() const` <a id="structFRHAPI__InstanceInfo_1a41650e460c8f774984418299bb173551"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__InstanceInfo_1a6b371ffb911a4ff7d5f666de2505253d)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__InstanceInfo_1a6b371ffb911a4ff7d5f666de2505253d"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__InstanceInfo_1adc5b55f5426979daa0d97885088268ed)`()` <a id="structFRHAPI__InstanceInfo_1adc5b55f5426979daa0d97885088268ed"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
