---
title: RHAPI_InstanceInfo
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_InstanceInfo`](#structFRHAPI__InstanceInfo) | Information about the instance resource in a session.

## struct `FRHAPI_InstanceInfo` <a id="structFRHAPI__InstanceInfo"></a>

```
struct FRHAPI_InstanceInfo
  : public FRHAPI_Model
```

Information about the instance resource in a session.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`AllocationId_Optional`](#structFRHAPI__InstanceInfo_1a670c84ac627eb0148e3b2a094d2a563f) | Allocation ID for instance that's been spun up.
`public bool `[`AllocationId_IsSet`](#structFRHAPI__InstanceInfo_1a3a96f0f93d1d98d9d95b51bca0840b62) | true if AllocationId_Optional has been set to a value
`public FString `[`InstanceId`](#structFRHAPI__InstanceInfo_1a69a816d14656c32583f847c0238b9174) | Unique ID for the host/session relationship.
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
`public `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` `[`JoinParams_Optional`](#structFRHAPI__InstanceInfo_1aefc6530a0ba91ff0e221f296175f1911) | Parameters to join the instance.
`public bool `[`JoinParams_IsSet`](#structFRHAPI__InstanceInfo_1a99ccc5782466d7d8602f505042fbdde1) | true if JoinParams_Optional has been set to a value
`public `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` `[`InstanceStartupParams_Optional`](#structFRHAPI__InstanceInfo_1a6bf1066eee396cfb6169ef12cb0f63a3) | Parameters used by the host to startup. For UE5 this will contain the map and gamemode.
`public bool `[`InstanceStartupParams_IsSet`](#structFRHAPI__InstanceInfo_1a26229b0fc19afb7346a59522a95fe8f0) | true if InstanceStartupParams_Optional has been set to a value
`public FString `[`Version_Optional`](#structFRHAPI__InstanceInfo_1a660e116a2617fc5b28a37c6ea34f93bb) | Product Client Version number. Used for compatibility checking with players.
`public bool `[`Version_IsSet`](#structFRHAPI__InstanceInfo_1a0089cb3ba53b990e04ae69dae2eba0a0) | true if Version_Optional has been set to a value
`public FDateTime `[`Created`](#structFRHAPI__InstanceInfo_1a93af18f5736b9faacdd3fc6301486647) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__InstanceInfo_1af4865b361b57b399511fe0932cb6f066) | instance-defined custom data
`public bool `[`CustomData_IsSet`](#structFRHAPI__InstanceInfo_1a03e270792bf6f6994f6656c65da324b8) | true if CustomData_Optional has been set to a value
`public ERHAPI_InstanceHealthStatus `[`InstanceHealth_Optional`](#structFRHAPI__InstanceInfo_1a8e5826ce58477abb2788b69571438b48) | The current status of the instance.
`public bool `[`InstanceHealth_IsSet`](#structFRHAPI__InstanceInfo_1a03be84bada6a81a63991b0f4513dd2b2) | true if InstanceHealth_Optional has been set to a value
`public FString `[`MatchMakingProfileId_Optional`](#structFRHAPI__InstanceInfo_1a05b49888b26a3e1d4806f7a803912694) | The profile id that this instance was spawned from.
`public bool `[`MatchMakingProfileId_IsSet`](#structFRHAPI__InstanceInfo_1a7ceba240433b15224dd6784b4f0b4b93) | true if MatchMakingProfileId_Optional has been set to a value
`public FString `[`MatchId_Optional`](#structFRHAPI__InstanceInfo_1a9aa0fdfb3745c97dde5d4aa565c10bc3) | The match ID associated with this instance.
`public bool `[`MatchId_IsSet`](#structFRHAPI__InstanceInfo_1aa350da165ae952b6fd3983c18eab0581) | true if MatchId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__InstanceInfo_1a3eeeb470476ed350586298bd6a6b01fb)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InstanceInfo_1a8515867747e57e0c664cece4c1b70e47)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfo_1a32cfba6b5418992afa3718282878b2da)`()` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfo_1afc5b61da4b669bc63f795a1b1fd9293e)`() const` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfo_1aa86999943962318ad3eb1d82e03e7cb4)`(const FString & DefaultValue) const` | Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAllocationId`](#structFRHAPI__InstanceInfo_1a20abc0f45a66988b239097481ac09816)`(FString & OutValue) const` | Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetAllocationIdOrNull`](#structFRHAPI__InstanceInfo_1a339dcfc4f4a3f2ae60dcd8f281f1239f)`()` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__InstanceInfo_1a2a1cb37419814f62e7aead28696df837)`() const` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAllocationId`](#structFRHAPI__InstanceInfo_1a0194e864b3557a140e2c1fe3f0bc60bc)`(const FString & NewValue)` | Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.
`public inline FORCEINLINE void `[`SetAllocationId`](#structFRHAPI__InstanceInfo_1acca8d7e0a4b125362cfecb7f79dbf873)`(FString && NewValue)` | Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true using move semantics.
`public inline void `[`ClearAllocationId`](#structFRHAPI__InstanceInfo_1a17455873e27cdaeefad64ade9f56b587)`()` | Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.
`public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__InstanceInfo_1aa5416118b211df9632b766e71c2d9551)`()` | Gets the value of InstanceId.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__InstanceInfo_1a369ab6fdf8387b560b429f8f51211a46)`() const` | Gets the value of InstanceId.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__InstanceInfo_1ac72e4f1670b44f093ac5243c1040538a)`(const FString & NewValue)` | Sets the value of InstanceId.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__InstanceInfo_1ab06028a9077cab33946e990bf0fd03fb)`(FString && NewValue)` | Sets the value of InstanceId using move semantics.
`public inline FORCEINLINE ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__InstanceInfo_1a88746a374710afd569ffaf7903ee6e17)`()` | Gets the value of HostType.
`public inline FORCEINLINE const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__InstanceInfo_1aab1af5593ad9ef3a7ebf897bf37d89d8)`() const` | Gets the value of HostType.
`public inline FORCEINLINE void `[`SetHostType`](#structFRHAPI__InstanceInfo_1aa0b647f5b0ebb5277b8bc99be891d38e)`(const ERHAPI_HostType & NewValue)` | Sets the value of HostType.
`public inline FORCEINLINE void `[`SetHostType`](#structFRHAPI__InstanceInfo_1ac3f9c07f9808d92e8bf452723165ebf1)`(ERHAPI_HostType && NewValue)` | Sets the value of HostType using move semantics.
`public inline FORCEINLINE int32 & `[`GetHostPlayerId`](#structFRHAPI__InstanceInfo_1a81634e830958a3281ea5a9403328c07d)`()` | Gets the value of HostPlayerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetHostPlayerId`](#structFRHAPI__InstanceInfo_1ae7bf0c32a627dfd75923c20f140dd736)`() const` | Gets the value of HostPlayerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetHostPlayerId`](#structFRHAPI__InstanceInfo_1ab93d6623ad09908e4036192dd8a6aef8)`(const int32 & DefaultValue) const` | Gets the value of HostPlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetHostPlayerId`](#structFRHAPI__InstanceInfo_1aae0ceb59216c9c7eda8b64709433316a)`(int32 & OutValue) const` | Fills OutValue with the value of HostPlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetHostPlayerIdOrNull`](#structFRHAPI__InstanceInfo_1a0e21aab67c68d5a66ac5bed6494c17db)`()` | Returns a pointer to HostPlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetHostPlayerIdOrNull`](#structFRHAPI__InstanceInfo_1aedb5583463de86e70a39b668366c401a)`() const` | Returns a pointer to HostPlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetHostPlayerId`](#structFRHAPI__InstanceInfo_1a995de1dac4bcf9a1eb6ccdd09ca7abd8)`(const int32 & NewValue)` | Sets the value of HostPlayerId_Optional and also sets HostPlayerId_IsSet to true.
`public inline FORCEINLINE void `[`SetHostPlayerId`](#structFRHAPI__InstanceInfo_1a7df0898c474ba701dc4160951706d950)`(int32 && NewValue)` | Sets the value of HostPlayerId_Optional and also sets HostPlayerId_IsSet to true using move semantics.
`public inline void `[`ClearHostPlayerId`](#structFRHAPI__InstanceInfo_1aacebdba3138a046478b14f4c0d34acaa)`()` | Clears the value of HostPlayerId_Optional and sets HostPlayerId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_HostPlayerId`](#structFRHAPI__InstanceInfo_1af3f0fb9e8e92ccd0c4110b03bf46a064)`()` | Returns the default value of HostPlayerId.
`public inline FORCEINLINE FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a9c5344435804a69afca5eeff7637eadb)`()` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1ac4eeb642e98c9788f4a9dbe11c7d9038)`() const` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a395bf7eb4f4b09a67d81dc2f13fe270e)`(const FGuid & DefaultValue) const` | Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a4315cca0e1dd559d8cc09e501cec81ab)`(FGuid & OutValue) const` | Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__InstanceInfo_1a6f2d9cfe48518cfd3374d0834de83e98)`()` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__InstanceInfo_1aea605c24a6e7db5d5b490823036e7fd9)`() const` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1af1fa257a58d2b4ec07cd03496e258361)`(const FGuid & NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a769204d48af3b37069387bf88ae9930f)`(FGuid && NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a3a9817e7888778f65ce3e24f146a8eb8)`()` | Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.
`public inline FORCEINLINE FString & `[`GetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a3388c9bf3bbe1f9f6743f276df03d802)`()` | Gets the value of HostDedicatedProcessId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a63e35a18f40b39249d51ad05103d7122)`() const` | Gets the value of HostDedicatedProcessId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a78423ea9105d3ef7d7589314b2029942)`(const FString & DefaultValue) const` | Gets the value of HostDedicatedProcessId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a1a0d07775e12fe43b702b9caa316f7ab)`(FString & OutValue) const` | Fills OutValue with the value of HostDedicatedProcessId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetHostDedicatedProcessIdOrNull`](#structFRHAPI__InstanceInfo_1a2b02cf3cabffbf0a46ec38b8312e23ce)`()` | Returns a pointer to HostDedicatedProcessId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetHostDedicatedProcessIdOrNull`](#structFRHAPI__InstanceInfo_1a697ef5550f952cce9a8d9512f66dd968)`() const` | Returns a pointer to HostDedicatedProcessId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1ac1aa34ea61e55a7b6b4c891a211fcef6)`(const FString & NewValue)` | Sets the value of HostDedicatedProcessId_Optional and also sets HostDedicatedProcessId_IsSet to true.
`public inline FORCEINLINE void `[`SetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a68f24f5cd2cb1db52f9d52d31ef5044f)`(FString && NewValue)` | Sets the value of HostDedicatedProcessId_Optional and also sets HostDedicatedProcessId_IsSet to true using move semantics.
`public inline void `[`ClearHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a0f9c42f75908fd7a719a5751d360646d)`()` | Clears the value of HostDedicatedProcessId_Optional and sets HostDedicatedProcessId_IsSet to false.
`public inline FORCEINLINE FString & `[`GetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1ac8eb4c0bd26b32985197e32df8de09fe)`()` | Gets the value of HostDedicatedServerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1a2b3f8c299187f59089d1f9383a73b0df)`() const` | Gets the value of HostDedicatedServerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1a02bb28cdd1caa998c84dd6a2862ebe2c)`(const FString & DefaultValue) const` | Gets the value of HostDedicatedServerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1af500c23d2536db341ad0da2062b42251)`(FString & OutValue) const` | Fills OutValue with the value of HostDedicatedServerId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetHostDedicatedServerIdOrNull`](#structFRHAPI__InstanceInfo_1aba32ad400c99ebb6645fc1656827dc98)`()` | Returns a pointer to HostDedicatedServerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetHostDedicatedServerIdOrNull`](#structFRHAPI__InstanceInfo_1a5a1d6d02bfac7aaee31a4b6f0761b937)`() const` | Returns a pointer to HostDedicatedServerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1a8417836161b9d5a41932da19bc2db9fc)`(const FString & NewValue)` | Sets the value of HostDedicatedServerId_Optional and also sets HostDedicatedServerId_IsSet to true.
`public inline FORCEINLINE void `[`SetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1afba0c4bc0265d312af173cb9b9656988)`(FString && NewValue)` | Sets the value of HostDedicatedServerId_Optional and also sets HostDedicatedServerId_IsSet to true using move semantics.
`public inline void `[`ClearHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1ac659005e87cb03a194cbdfccca754abf)`()` | Clears the value of HostDedicatedServerId_Optional and sets HostDedicatedServerId_IsSet to false.
`public inline FORCEINLINE ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__InstanceInfo_1a1ca889aed1b0aa6283c166db4e5303b1)`()` | Gets the value of JoinStatus.
`public inline FORCEINLINE const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__InstanceInfo_1ac137ab223c804b7f43a7ac21f03d36d0)`() const` | Gets the value of JoinStatus.
`public inline FORCEINLINE void `[`SetJoinStatus`](#structFRHAPI__InstanceInfo_1a5e4445b01e3af874b41291485c094ae2)`(const ERHAPI_InstanceJoinableStatus & NewValue)` | Sets the value of JoinStatus.
`public inline FORCEINLINE void `[`SetJoinStatus`](#structFRHAPI__InstanceInfo_1a7e61e509989614d1aed04effd90afc08)`(ERHAPI_InstanceJoinableStatus && NewValue)` | Sets the value of JoinStatus using move semantics.
`public inline FORCEINLINE `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfo_1a54de5f05651b59aa0bee902800873e58)`()` | Gets the value of JoinParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfo_1afa3abc93c81f2ee0c535909de9058d2b)`() const` | Gets the value of JoinParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfo_1a2403dd8458b394a81309c7f71a094ce4)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & DefaultValue) const` | Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetJoinParams`](#structFRHAPI__InstanceInfo_1af250b8e14649c4e43df72b649354ff78)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & OutValue) const` | Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__InstanceInfo_1a68ee85818189257da51f345c11a734bf)`()` | Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__InstanceInfo_1aef13c94fc5f1ce46f1e53208b58426ba)`() const` | Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetJoinParams`](#structFRHAPI__InstanceInfo_1abcdb726b727cea96ec17fd68014f2e23)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & NewValue)` | Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.
`public inline FORCEINLINE void `[`SetJoinParams`](#structFRHAPI__InstanceInfo_1a9ee5989b30cf116382d8e8bad1c74825)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` && NewValue)` | Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true using move semantics.
`public inline void `[`ClearJoinParams`](#structFRHAPI__InstanceInfo_1a79d4953e7dc5d7d603a1bd3c0f078d99)`()` | Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1a49fdc88606ba5d6844529d2fb673f938)`()` | Gets the value of InstanceStartupParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1af77508f1de1b567121b5ba07efcb62c1)`() const` | Gets the value of InstanceStartupParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1a960333c9c38f28318c3758c261522dfe)`(const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & DefaultValue) const` | Gets the value of InstanceStartupParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1a869911f9721bd04ef559cb6f4164f439)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & OutValue) const` | Fills OutValue with the value of InstanceStartupParams_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetInstanceStartupParamsOrNull`](#structFRHAPI__InstanceInfo_1a0fdb077282a5498dfa8488fa5df1afd9)`()` | Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetInstanceStartupParamsOrNull`](#structFRHAPI__InstanceInfo_1a9cf7588bbf81529731867d2f422ec584)`() const` | Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1aefb5da9cc9d34770620ee446317cf487)`(const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & NewValue)` | Sets the value of InstanceStartupParams_Optional and also sets InstanceStartupParams_IsSet to true.
`public inline FORCEINLINE void `[`SetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1ad07fd6ea70563f4b9147320166992866)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` && NewValue)` | Sets the value of InstanceStartupParams_Optional and also sets InstanceStartupParams_IsSet to true using move semantics.
`public inline void `[`ClearInstanceStartupParams`](#structFRHAPI__InstanceInfo_1aef5d1a846e3bc2d56421f87d9e5595fd)`()` | Clears the value of InstanceStartupParams_Optional and sets InstanceStartupParams_IsSet to false.
`public inline FORCEINLINE FString & `[`GetVersion`](#structFRHAPI__InstanceInfo_1a2299c165efbdec3e23b1096f9f62297d)`()` | Gets the value of Version_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetVersion`](#structFRHAPI__InstanceInfo_1acb83ab6c52c1803ef46230c8b95efd98)`() const` | Gets the value of Version_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetVersion`](#structFRHAPI__InstanceInfo_1af5da9c84e13f3527057261cb5768af39)`(const FString & DefaultValue) const` | Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetVersion`](#structFRHAPI__InstanceInfo_1a3cddb79a09178831b5034307b83a9cd9)`(FString & OutValue) const` | Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetVersionOrNull`](#structFRHAPI__InstanceInfo_1aa027ea8fd0290d19799c708b9e725629)`()` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetVersionOrNull`](#structFRHAPI__InstanceInfo_1a6a82482e754bb7a26ec023f1b417ab30)`() const` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetVersion`](#structFRHAPI__InstanceInfo_1a55342d1d141d6bb06ff8aedd940133f6)`(const FString & NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true.
`public inline FORCEINLINE void `[`SetVersion`](#structFRHAPI__InstanceInfo_1a3e09232e2424a2378360687f63745a1f)`(FString && NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics.
`public inline void `[`ClearVersion`](#structFRHAPI__InstanceInfo_1af29e85d43799d74da9897137984fb0be)`()` | Clears the value of Version_Optional and sets Version_IsSet to false.
`public inline FORCEINLINE FDateTime & `[`GetCreated`](#structFRHAPI__InstanceInfo_1a99c2661e42efc4d3176730cc450be437)`()` | Gets the value of Created.
`public inline FORCEINLINE const FDateTime & `[`GetCreated`](#structFRHAPI__InstanceInfo_1a3ee8758c9aa96ea4e696050d3725a962)`() const` | Gets the value of Created.
`public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__InstanceInfo_1a2d8defa3ec81815dc4080249426e88e4)`(const FDateTime & NewValue)` | Sets the value of Created.
`public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__InstanceInfo_1a0c39a8f82d3ec913bca01ad6edb35819)`(FDateTime && NewValue)` | Sets the value of Created using move semantics.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfo_1afc12b1a8507239f874f2b45b17d6cc30)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfo_1a7029b27a648f75d268ec47bf2ac2c396)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfo_1a57b3d62669903a13e60b0c6046053995)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__InstanceInfo_1af4a5c1605caed2253f47c0f151a92178)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceInfo_1ac90538d29d0030720a13e7b9f3004624)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceInfo_1ac2fd60a945e9ae0edb92e346a87fcd13)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InstanceInfo_1a09b9c2c195b3ce18a67772b5d1e7e513)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InstanceInfo_1a143a16ee4f290110b68f8807e346b541)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__InstanceInfo_1adc5b55f5426979daa0d97885088268ed)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__InstanceInfo_1aa1d4a35ab19a69ac7cbaf096d269e8e3)`()` | Gets the value of InstanceHealth_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__InstanceInfo_1a1e208762121dc9fcba87bf140d315ffa)`() const` | Gets the value of InstanceHealth_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__InstanceInfo_1ad0ff73858711829477a8a9be0654cf22)`(const ERHAPI_InstanceHealthStatus & DefaultValue) const` | Gets the value of InstanceHealth_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstanceHealth`](#structFRHAPI__InstanceInfo_1a654071319fe7c5955ab205d4fcb06d60)`(ERHAPI_InstanceHealthStatus & OutValue) const` | Fills OutValue with the value of InstanceHealth_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__InstanceInfo_1a747d2b0b8beedf4388c21ec3ed18290e)`()` | Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__InstanceInfo_1af7ae8ff423b57a049869fe5b2f06ddf5)`() const` | Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstanceHealth`](#structFRHAPI__InstanceInfo_1ae317b558b3ac7b1aa3d9815ae50f7e8c)`(const ERHAPI_InstanceHealthStatus & NewValue)` | Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true.
`public inline FORCEINLINE void `[`SetInstanceHealth`](#structFRHAPI__InstanceInfo_1a97c84a27aaed1964be7d89fddbd074f2)`(ERHAPI_InstanceHealthStatus && NewValue)` | Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true using move semantics.
`public inline void `[`ClearInstanceHealth`](#structFRHAPI__InstanceInfo_1abd4b04df319d6b3af78cbd8a5c50ca9f)`()` | Clears the value of InstanceHealth_Optional and sets InstanceHealth_IsSet to false.
`public inline FORCEINLINE FString & `[`GetMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1a4cfc5fb1b46433b15d20ef3a14388c93)`()` | Gets the value of MatchMakingProfileId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1a9bdebf61a6abf9d0f6bb5fe1d02ec3de)`() const` | Gets the value of MatchMakingProfileId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1aa57476355dbec4587655a3b921c1c222)`(const FString & DefaultValue) const` | Gets the value of MatchMakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1ac7402e732cac10440a4eeb8ea91a2014)`(FString & OutValue) const` | Fills OutValue with the value of MatchMakingProfileId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMatchMakingProfileIdOrNull`](#structFRHAPI__InstanceInfo_1a664b19e1605321dda25cac256371b476)`()` | Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMatchMakingProfileIdOrNull`](#structFRHAPI__InstanceInfo_1adf292868215f771afbf6267465915724)`() const` | Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1ad6d3dafcfd64ea8ba20892b6f01a7ecb)`(const FString & NewValue)` | Sets the value of MatchMakingProfileId_Optional and also sets MatchMakingProfileId_IsSet to true.
`public inline FORCEINLINE void `[`SetMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1a84ab8f6b79457c07d95aac47f49b532f)`(FString && NewValue)` | Sets the value of MatchMakingProfileId_Optional and also sets MatchMakingProfileId_IsSet to true using move semantics.
`public inline void `[`ClearMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1ae29004885f4edeb474dbee20fd20eaba)`()` | Clears the value of MatchMakingProfileId_Optional and sets MatchMakingProfileId_IsSet to false.
`public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__InstanceInfo_1a33b65907327c88265ad9d0d94150a0c8)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__InstanceInfo_1aea80779f4198c015879dbaba5604196c)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__InstanceInfo_1a163518126385eb2b7c624303fe6bcfb0)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__InstanceInfo_1acd5b1a4a30a6fcaae412bd6cb21b3e7f)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__InstanceInfo_1a49047ce58b3f0116a86cc74b31a8d059)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__InstanceInfo_1a6d3c208113930298abebb5c2225501cd)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__InstanceInfo_1a13f5020a93c14b80c342610f4c253987)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__InstanceInfo_1afc928621b53c7ba5eba49f647272a6f4)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__InstanceInfo_1a24595e50bdcf1728aa8b6558058c388a)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

### Members

#### `public FString `[`AllocationId_Optional`](#structFRHAPI__InstanceInfo_1a670c84ac627eb0148e3b2a094d2a563f) <a id="structFRHAPI__InstanceInfo_1a670c84ac627eb0148e3b2a094d2a563f"></a>

Allocation ID for instance that's been spun up.

#### `public bool `[`AllocationId_IsSet`](#structFRHAPI__InstanceInfo_1a3a96f0f93d1d98d9d95b51bca0840b62) <a id="structFRHAPI__InstanceInfo_1a3a96f0f93d1d98d9d95b51bca0840b62"></a>

true if AllocationId_Optional has been set to a value

#### `public FString `[`InstanceId`](#structFRHAPI__InstanceInfo_1a69a816d14656c32583f847c0238b9174) <a id="structFRHAPI__InstanceInfo_1a69a816d14656c32583f847c0238b9174"></a>

Unique ID for the host/session relationship.

#### `public ERHAPI_HostType `[`HostType`](#structFRHAPI__InstanceInfo_1aa4fa57c88e13cde9833ee29b000027a9) <a id="structFRHAPI__InstanceInfo_1aa4fa57c88e13cde9833ee29b000027a9"></a>

Type of the host.

#### `public int32 `[`HostPlayerId_Optional`](#structFRHAPI__InstanceInfo_1a655893d75309d6c5d7d13c130192c60a) <a id="structFRHAPI__InstanceInfo_1a655893d75309d6c5d7d13c130192c60a"></a>

Player ID of the host, if the host type is player.

#### `public bool `[`HostPlayerId_IsSet`](#structFRHAPI__InstanceInfo_1adac8c1cdc99823b434cced3a50abf3cf) <a id="structFRHAPI__InstanceInfo_1adac8c1cdc99823b434cced3a50abf3cf"></a>

true if HostPlayerId_Optional has been set to a value

#### `public FGuid `[`HostPlayerUuid_Optional`](#structFRHAPI__InstanceInfo_1a8af67b2308b97be4d9e4e561a9e39623) <a id="structFRHAPI__InstanceInfo_1a8af67b2308b97be4d9e4e561a9e39623"></a>

Player UUID of the host, if the host type is player.

#### `public bool `[`HostPlayerUuid_IsSet`](#structFRHAPI__InstanceInfo_1ad6c2343cdd2cdaa72bb93c9ddd500346) <a id="structFRHAPI__InstanceInfo_1ad6c2343cdd2cdaa72bb93c9ddd500346"></a>

true if HostPlayerUuid_Optional has been set to a value

#### `public FString `[`HostDedicatedProcessId_Optional`](#structFRHAPI__InstanceInfo_1a619c79477d6db4f713dbb601ca52f32c) <a id="structFRHAPI__InstanceInfo_1a619c79477d6db4f713dbb601ca52f32c"></a>

Unique ID for the process that is running this instance.

#### `public bool `[`HostDedicatedProcessId_IsSet`](#structFRHAPI__InstanceInfo_1acdf9bd2233cc01d4537bf2576d5d4391) <a id="structFRHAPI__InstanceInfo_1acdf9bd2233cc01d4537bf2576d5d4391"></a>

true if HostDedicatedProcessId_Optional has been set to a value

#### `public FString `[`HostDedicatedServerId_Optional`](#structFRHAPI__InstanceInfo_1adb1a41b1de0b1e457cc9cd22220a6c10) <a id="structFRHAPI__InstanceInfo_1adb1a41b1de0b1e457cc9cd22220a6c10"></a>

Unique ID for the machine running the instance.

#### `public bool `[`HostDedicatedServerId_IsSet`](#structFRHAPI__InstanceInfo_1a668423caac5dcade44b138c9468bfd6d) <a id="structFRHAPI__InstanceInfo_1a668423caac5dcade44b138c9468bfd6d"></a>

true if HostDedicatedServerId_Optional has been set to a value

#### `public ERHAPI_InstanceJoinableStatus `[`JoinStatus`](#structFRHAPI__InstanceInfo_1a540045ffc3cb213adbd178f75d8d8f4f) <a id="structFRHAPI__InstanceInfo_1a540045ffc3cb213adbd178f75d8d8f4f"></a>

Is the instance joinable at this time?

#### `public `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` `[`JoinParams_Optional`](#structFRHAPI__InstanceInfo_1aefc6530a0ba91ff0e221f296175f1911) <a id="structFRHAPI__InstanceInfo_1aefc6530a0ba91ff0e221f296175f1911"></a>

Parameters to join the instance.

#### `public bool `[`JoinParams_IsSet`](#structFRHAPI__InstanceInfo_1a99ccc5782466d7d8602f505042fbdde1) <a id="structFRHAPI__InstanceInfo_1a99ccc5782466d7d8602f505042fbdde1"></a>

true if JoinParams_Optional has been set to a value

#### `public `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` `[`InstanceStartupParams_Optional`](#structFRHAPI__InstanceInfo_1a6bf1066eee396cfb6169ef12cb0f63a3) <a id="structFRHAPI__InstanceInfo_1a6bf1066eee396cfb6169ef12cb0f63a3"></a>

Parameters used by the host to startup. For UE5 this will contain the map and gamemode.

#### `public bool `[`InstanceStartupParams_IsSet`](#structFRHAPI__InstanceInfo_1a26229b0fc19afb7346a59522a95fe8f0) <a id="structFRHAPI__InstanceInfo_1a26229b0fc19afb7346a59522a95fe8f0"></a>

true if InstanceStartupParams_Optional has been set to a value

#### `public FString `[`Version_Optional`](#structFRHAPI__InstanceInfo_1a660e116a2617fc5b28a37c6ea34f93bb) <a id="structFRHAPI__InstanceInfo_1a660e116a2617fc5b28a37c6ea34f93bb"></a>

Product Client Version number. Used for compatibility checking with players.

#### `public bool `[`Version_IsSet`](#structFRHAPI__InstanceInfo_1a0089cb3ba53b990e04ae69dae2eba0a0) <a id="structFRHAPI__InstanceInfo_1a0089cb3ba53b990e04ae69dae2eba0a0"></a>

true if Version_Optional has been set to a value

#### `public FDateTime `[`Created`](#structFRHAPI__InstanceInfo_1a93af18f5736b9faacdd3fc6301486647) <a id="structFRHAPI__InstanceInfo_1a93af18f5736b9faacdd3fc6301486647"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__InstanceInfo_1af4865b361b57b399511fe0932cb6f066) <a id="structFRHAPI__InstanceInfo_1af4865b361b57b399511fe0932cb6f066"></a>

instance-defined custom data

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__InstanceInfo_1a03e270792bf6f6994f6656c65da324b8) <a id="structFRHAPI__InstanceInfo_1a03e270792bf6f6994f6656c65da324b8"></a>

true if CustomData_Optional has been set to a value

#### `public ERHAPI_InstanceHealthStatus `[`InstanceHealth_Optional`](#structFRHAPI__InstanceInfo_1a8e5826ce58477abb2788b69571438b48) <a id="structFRHAPI__InstanceInfo_1a8e5826ce58477abb2788b69571438b48"></a>

The current status of the instance.

#### `public bool `[`InstanceHealth_IsSet`](#structFRHAPI__InstanceInfo_1a03be84bada6a81a63991b0f4513dd2b2) <a id="structFRHAPI__InstanceInfo_1a03be84bada6a81a63991b0f4513dd2b2"></a>

true if InstanceHealth_Optional has been set to a value

#### `public FString `[`MatchMakingProfileId_Optional`](#structFRHAPI__InstanceInfo_1a05b49888b26a3e1d4806f7a803912694) <a id="structFRHAPI__InstanceInfo_1a05b49888b26a3e1d4806f7a803912694"></a>

The profile id that this instance was spawned from.

#### `public bool `[`MatchMakingProfileId_IsSet`](#structFRHAPI__InstanceInfo_1a7ceba240433b15224dd6784b4f0b4b93) <a id="structFRHAPI__InstanceInfo_1a7ceba240433b15224dd6784b4f0b4b93"></a>

true if MatchMakingProfileId_Optional has been set to a value

#### `public FString `[`MatchId_Optional`](#structFRHAPI__InstanceInfo_1a9aa0fdfb3745c97dde5d4aa565c10bc3) <a id="structFRHAPI__InstanceInfo_1a9aa0fdfb3745c97dde5d4aa565c10bc3"></a>

The match ID associated with this instance.

#### `public bool `[`MatchId_IsSet`](#structFRHAPI__InstanceInfo_1aa350da165ae952b6fd3983c18eab0581) <a id="structFRHAPI__InstanceInfo_1aa350da165ae952b6fd3983c18eab0581"></a>

true if MatchId_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__InstanceInfo_1a3eeeb470476ed350586298bd6a6b01fb)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InstanceInfo_1a3eeeb470476ed350586298bd6a6b01fb"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InstanceInfo_1a8515867747e57e0c664cece4c1b70e47)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__InstanceInfo_1a8515867747e57e0c664cece4c1b70e47"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfo_1a32cfba6b5418992afa3718282878b2da)`()` <a id="structFRHAPI__InstanceInfo_1a32cfba6b5418992afa3718282878b2da"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfo_1afc5b61da4b669bc63f795a1b1fd9293e)`() const` <a id="structFRHAPI__InstanceInfo_1afc5b61da4b669bc63f795a1b1fd9293e"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfo_1aa86999943962318ad3eb1d82e03e7cb4)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1aa86999943962318ad3eb1d82e03e7cb4"></a>

Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAllocationId`](#structFRHAPI__InstanceInfo_1a20abc0f45a66988b239097481ac09816)`(FString & OutValue) const` <a id="structFRHAPI__InstanceInfo_1a20abc0f45a66988b239097481ac09816"></a>

Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetAllocationIdOrNull`](#structFRHAPI__InstanceInfo_1a339dcfc4f4a3f2ae60dcd8f281f1239f)`()` <a id="structFRHAPI__InstanceInfo_1a339dcfc4f4a3f2ae60dcd8f281f1239f"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__InstanceInfo_1a2a1cb37419814f62e7aead28696df837)`() const` <a id="structFRHAPI__InstanceInfo_1a2a1cb37419814f62e7aead28696df837"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAllocationId`](#structFRHAPI__InstanceInfo_1a0194e864b3557a140e2c1fe3f0bc60bc)`(const FString & NewValue)` <a id="structFRHAPI__InstanceInfo_1a0194e864b3557a140e2c1fe3f0bc60bc"></a>

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAllocationId`](#structFRHAPI__InstanceInfo_1acca8d7e0a4b125362cfecb7f79dbf873)`(FString && NewValue)` <a id="structFRHAPI__InstanceInfo_1acca8d7e0a4b125362cfecb7f79dbf873"></a>

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true using move semantics.

#### `public inline void `[`ClearAllocationId`](#structFRHAPI__InstanceInfo_1a17455873e27cdaeefad64ade9f56b587)`()` <a id="structFRHAPI__InstanceInfo_1a17455873e27cdaeefad64ade9f56b587"></a>

Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__InstanceInfo_1aa5416118b211df9632b766e71c2d9551)`()` <a id="structFRHAPI__InstanceInfo_1aa5416118b211df9632b766e71c2d9551"></a>

Gets the value of InstanceId.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__InstanceInfo_1a369ab6fdf8387b560b429f8f51211a46)`() const` <a id="structFRHAPI__InstanceInfo_1a369ab6fdf8387b560b429f8f51211a46"></a>

Gets the value of InstanceId.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__InstanceInfo_1ac72e4f1670b44f093ac5243c1040538a)`(const FString & NewValue)` <a id="structFRHAPI__InstanceInfo_1ac72e4f1670b44f093ac5243c1040538a"></a>

Sets the value of InstanceId.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__InstanceInfo_1ab06028a9077cab33946e990bf0fd03fb)`(FString && NewValue)` <a id="structFRHAPI__InstanceInfo_1ab06028a9077cab33946e990bf0fd03fb"></a>

Sets the value of InstanceId using move semantics.

#### `public inline FORCEINLINE ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__InstanceInfo_1a88746a374710afd569ffaf7903ee6e17)`()` <a id="structFRHAPI__InstanceInfo_1a88746a374710afd569ffaf7903ee6e17"></a>

Gets the value of HostType.

#### `public inline FORCEINLINE const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__InstanceInfo_1aab1af5593ad9ef3a7ebf897bf37d89d8)`() const` <a id="structFRHAPI__InstanceInfo_1aab1af5593ad9ef3a7ebf897bf37d89d8"></a>

Gets the value of HostType.

#### `public inline FORCEINLINE void `[`SetHostType`](#structFRHAPI__InstanceInfo_1aa0b647f5b0ebb5277b8bc99be891d38e)`(const ERHAPI_HostType & NewValue)` <a id="structFRHAPI__InstanceInfo_1aa0b647f5b0ebb5277b8bc99be891d38e"></a>

Sets the value of HostType.

#### `public inline FORCEINLINE void `[`SetHostType`](#structFRHAPI__InstanceInfo_1ac3f9c07f9808d92e8bf452723165ebf1)`(ERHAPI_HostType && NewValue)` <a id="structFRHAPI__InstanceInfo_1ac3f9c07f9808d92e8bf452723165ebf1"></a>

Sets the value of HostType using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetHostPlayerId`](#structFRHAPI__InstanceInfo_1a81634e830958a3281ea5a9403328c07d)`()` <a id="structFRHAPI__InstanceInfo_1a81634e830958a3281ea5a9403328c07d"></a>

Gets the value of HostPlayerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetHostPlayerId`](#structFRHAPI__InstanceInfo_1ae7bf0c32a627dfd75923c20f140dd736)`() const` <a id="structFRHAPI__InstanceInfo_1ae7bf0c32a627dfd75923c20f140dd736"></a>

Gets the value of HostPlayerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetHostPlayerId`](#structFRHAPI__InstanceInfo_1ab93d6623ad09908e4036192dd8a6aef8)`(const int32 & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1ab93d6623ad09908e4036192dd8a6aef8"></a>

Gets the value of HostPlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetHostPlayerId`](#structFRHAPI__InstanceInfo_1aae0ceb59216c9c7eda8b64709433316a)`(int32 & OutValue) const` <a id="structFRHAPI__InstanceInfo_1aae0ceb59216c9c7eda8b64709433316a"></a>

Fills OutValue with the value of HostPlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetHostPlayerIdOrNull`](#structFRHAPI__InstanceInfo_1a0e21aab67c68d5a66ac5bed6494c17db)`()` <a id="structFRHAPI__InstanceInfo_1a0e21aab67c68d5a66ac5bed6494c17db"></a>

Returns a pointer to HostPlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetHostPlayerIdOrNull`](#structFRHAPI__InstanceInfo_1aedb5583463de86e70a39b668366c401a)`() const` <a id="structFRHAPI__InstanceInfo_1aedb5583463de86e70a39b668366c401a"></a>

Returns a pointer to HostPlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetHostPlayerId`](#structFRHAPI__InstanceInfo_1a995de1dac4bcf9a1eb6ccdd09ca7abd8)`(const int32 & NewValue)` <a id="structFRHAPI__InstanceInfo_1a995de1dac4bcf9a1eb6ccdd09ca7abd8"></a>

Sets the value of HostPlayerId_Optional and also sets HostPlayerId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetHostPlayerId`](#structFRHAPI__InstanceInfo_1a7df0898c474ba701dc4160951706d950)`(int32 && NewValue)` <a id="structFRHAPI__InstanceInfo_1a7df0898c474ba701dc4160951706d950"></a>

Sets the value of HostPlayerId_Optional and also sets HostPlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearHostPlayerId`](#structFRHAPI__InstanceInfo_1aacebdba3138a046478b14f4c0d34acaa)`()` <a id="structFRHAPI__InstanceInfo_1aacebdba3138a046478b14f4c0d34acaa"></a>

Clears the value of HostPlayerId_Optional and sets HostPlayerId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_HostPlayerId`](#structFRHAPI__InstanceInfo_1af3f0fb9e8e92ccd0c4110b03bf46a064)`()` <a id="structFRHAPI__InstanceInfo_1af3f0fb9e8e92ccd0c4110b03bf46a064"></a>

Returns the default value of HostPlayerId.

#### `public inline FORCEINLINE FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a9c5344435804a69afca5eeff7637eadb)`()` <a id="structFRHAPI__InstanceInfo_1a9c5344435804a69afca5eeff7637eadb"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1ac4eeb642e98c9788f4a9dbe11c7d9038)`() const` <a id="structFRHAPI__InstanceInfo_1ac4eeb642e98c9788f4a9dbe11c7d9038"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a395bf7eb4f4b09a67d81dc2f13fe270e)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1a395bf7eb4f4b09a67d81dc2f13fe270e"></a>

Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a4315cca0e1dd559d8cc09e501cec81ab)`(FGuid & OutValue) const` <a id="structFRHAPI__InstanceInfo_1a4315cca0e1dd559d8cc09e501cec81ab"></a>

Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__InstanceInfo_1a6f2d9cfe48518cfd3374d0834de83e98)`()` <a id="structFRHAPI__InstanceInfo_1a6f2d9cfe48518cfd3374d0834de83e98"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__InstanceInfo_1aea605c24a6e7db5d5b490823036e7fd9)`() const` <a id="structFRHAPI__InstanceInfo_1aea605c24a6e7db5d5b490823036e7fd9"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1af1fa257a58d2b4ec07cd03496e258361)`(const FGuid & NewValue)` <a id="structFRHAPI__InstanceInfo_1af1fa257a58d2b4ec07cd03496e258361"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a769204d48af3b37069387bf88ae9930f)`(FGuid && NewValue)` <a id="structFRHAPI__InstanceInfo_1a769204d48af3b37069387bf88ae9930f"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a3a9817e7888778f65ce3e24f146a8eb8)`()` <a id="structFRHAPI__InstanceInfo_1a3a9817e7888778f65ce3e24f146a8eb8"></a>

Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a3388c9bf3bbe1f9f6743f276df03d802)`()` <a id="structFRHAPI__InstanceInfo_1a3388c9bf3bbe1f9f6743f276df03d802"></a>

Gets the value of HostDedicatedProcessId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a63e35a18f40b39249d51ad05103d7122)`() const` <a id="structFRHAPI__InstanceInfo_1a63e35a18f40b39249d51ad05103d7122"></a>

Gets the value of HostDedicatedProcessId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a78423ea9105d3ef7d7589314b2029942)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1a78423ea9105d3ef7d7589314b2029942"></a>

Gets the value of HostDedicatedProcessId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a1a0d07775e12fe43b702b9caa316f7ab)`(FString & OutValue) const` <a id="structFRHAPI__InstanceInfo_1a1a0d07775e12fe43b702b9caa316f7ab"></a>

Fills OutValue with the value of HostDedicatedProcessId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetHostDedicatedProcessIdOrNull`](#structFRHAPI__InstanceInfo_1a2b02cf3cabffbf0a46ec38b8312e23ce)`()` <a id="structFRHAPI__InstanceInfo_1a2b02cf3cabffbf0a46ec38b8312e23ce"></a>

Returns a pointer to HostDedicatedProcessId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetHostDedicatedProcessIdOrNull`](#structFRHAPI__InstanceInfo_1a697ef5550f952cce9a8d9512f66dd968)`() const` <a id="structFRHAPI__InstanceInfo_1a697ef5550f952cce9a8d9512f66dd968"></a>

Returns a pointer to HostDedicatedProcessId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1ac1aa34ea61e55a7b6b4c891a211fcef6)`(const FString & NewValue)` <a id="structFRHAPI__InstanceInfo_1ac1aa34ea61e55a7b6b4c891a211fcef6"></a>

Sets the value of HostDedicatedProcessId_Optional and also sets HostDedicatedProcessId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a68f24f5cd2cb1db52f9d52d31ef5044f)`(FString && NewValue)` <a id="structFRHAPI__InstanceInfo_1a68f24f5cd2cb1db52f9d52d31ef5044f"></a>

Sets the value of HostDedicatedProcessId_Optional and also sets HostDedicatedProcessId_IsSet to true using move semantics.

#### `public inline void `[`ClearHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a0f9c42f75908fd7a719a5751d360646d)`()` <a id="structFRHAPI__InstanceInfo_1a0f9c42f75908fd7a719a5751d360646d"></a>

Clears the value of HostDedicatedProcessId_Optional and sets HostDedicatedProcessId_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1ac8eb4c0bd26b32985197e32df8de09fe)`()` <a id="structFRHAPI__InstanceInfo_1ac8eb4c0bd26b32985197e32df8de09fe"></a>

Gets the value of HostDedicatedServerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1a2b3f8c299187f59089d1f9383a73b0df)`() const` <a id="structFRHAPI__InstanceInfo_1a2b3f8c299187f59089d1f9383a73b0df"></a>

Gets the value of HostDedicatedServerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1a02bb28cdd1caa998c84dd6a2862ebe2c)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1a02bb28cdd1caa998c84dd6a2862ebe2c"></a>

Gets the value of HostDedicatedServerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1af500c23d2536db341ad0da2062b42251)`(FString & OutValue) const` <a id="structFRHAPI__InstanceInfo_1af500c23d2536db341ad0da2062b42251"></a>

Fills OutValue with the value of HostDedicatedServerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetHostDedicatedServerIdOrNull`](#structFRHAPI__InstanceInfo_1aba32ad400c99ebb6645fc1656827dc98)`()` <a id="structFRHAPI__InstanceInfo_1aba32ad400c99ebb6645fc1656827dc98"></a>

Returns a pointer to HostDedicatedServerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetHostDedicatedServerIdOrNull`](#structFRHAPI__InstanceInfo_1a5a1d6d02bfac7aaee31a4b6f0761b937)`() const` <a id="structFRHAPI__InstanceInfo_1a5a1d6d02bfac7aaee31a4b6f0761b937"></a>

Returns a pointer to HostDedicatedServerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1a8417836161b9d5a41932da19bc2db9fc)`(const FString & NewValue)` <a id="structFRHAPI__InstanceInfo_1a8417836161b9d5a41932da19bc2db9fc"></a>

Sets the value of HostDedicatedServerId_Optional and also sets HostDedicatedServerId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1afba0c4bc0265d312af173cb9b9656988)`(FString && NewValue)` <a id="structFRHAPI__InstanceInfo_1afba0c4bc0265d312af173cb9b9656988"></a>

Sets the value of HostDedicatedServerId_Optional and also sets HostDedicatedServerId_IsSet to true using move semantics.

#### `public inline void `[`ClearHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1ac659005e87cb03a194cbdfccca754abf)`()` <a id="structFRHAPI__InstanceInfo_1ac659005e87cb03a194cbdfccca754abf"></a>

Clears the value of HostDedicatedServerId_Optional and sets HostDedicatedServerId_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__InstanceInfo_1a1ca889aed1b0aa6283c166db4e5303b1)`()` <a id="structFRHAPI__InstanceInfo_1a1ca889aed1b0aa6283c166db4e5303b1"></a>

Gets the value of JoinStatus.

#### `public inline FORCEINLINE const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__InstanceInfo_1ac137ab223c804b7f43a7ac21f03d36d0)`() const` <a id="structFRHAPI__InstanceInfo_1ac137ab223c804b7f43a7ac21f03d36d0"></a>

Gets the value of JoinStatus.

#### `public inline FORCEINLINE void `[`SetJoinStatus`](#structFRHAPI__InstanceInfo_1a5e4445b01e3af874b41291485c094ae2)`(const ERHAPI_InstanceJoinableStatus & NewValue)` <a id="structFRHAPI__InstanceInfo_1a5e4445b01e3af874b41291485c094ae2"></a>

Sets the value of JoinStatus.

#### `public inline FORCEINLINE void `[`SetJoinStatus`](#structFRHAPI__InstanceInfo_1a7e61e509989614d1aed04effd90afc08)`(ERHAPI_InstanceJoinableStatus && NewValue)` <a id="structFRHAPI__InstanceInfo_1a7e61e509989614d1aed04effd90afc08"></a>

Sets the value of JoinStatus using move semantics.

#### `public inline FORCEINLINE `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfo_1a54de5f05651b59aa0bee902800873e58)`()` <a id="structFRHAPI__InstanceInfo_1a54de5f05651b59aa0bee902800873e58"></a>

Gets the value of JoinParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfo_1afa3abc93c81f2ee0c535909de9058d2b)`() const` <a id="structFRHAPI__InstanceInfo_1afa3abc93c81f2ee0c535909de9058d2b"></a>

Gets the value of JoinParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfo_1a2403dd8458b394a81309c7f71a094ce4)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1a2403dd8458b394a81309c7f71a094ce4"></a>

Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetJoinParams`](#structFRHAPI__InstanceInfo_1af250b8e14649c4e43df72b649354ff78)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & OutValue) const` <a id="structFRHAPI__InstanceInfo_1af250b8e14649c4e43df72b649354ff78"></a>

Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__InstanceInfo_1a68ee85818189257da51f345c11a734bf)`()` <a id="structFRHAPI__InstanceInfo_1a68ee85818189257da51f345c11a734bf"></a>

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__InstanceInfo_1aef13c94fc5f1ce46f1e53208b58426ba)`() const` <a id="structFRHAPI__InstanceInfo_1aef13c94fc5f1ce46f1e53208b58426ba"></a>

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetJoinParams`](#structFRHAPI__InstanceInfo_1abcdb726b727cea96ec17fd68014f2e23)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & NewValue)` <a id="structFRHAPI__InstanceInfo_1abcdb726b727cea96ec17fd68014f2e23"></a>

Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.

#### `public inline FORCEINLINE void `[`SetJoinParams`](#structFRHAPI__InstanceInfo_1a9ee5989b30cf116382d8e8bad1c74825)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` && NewValue)` <a id="structFRHAPI__InstanceInfo_1a9ee5989b30cf116382d8e8bad1c74825"></a>

Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinParams`](#structFRHAPI__InstanceInfo_1a79d4953e7dc5d7d603a1bd3c0f078d99)`()` <a id="structFRHAPI__InstanceInfo_1a79d4953e7dc5d7d603a1bd3c0f078d99"></a>

Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1a49fdc88606ba5d6844529d2fb673f938)`()` <a id="structFRHAPI__InstanceInfo_1a49fdc88606ba5d6844529d2fb673f938"></a>

Gets the value of InstanceStartupParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1af77508f1de1b567121b5ba07efcb62c1)`() const` <a id="structFRHAPI__InstanceInfo_1af77508f1de1b567121b5ba07efcb62c1"></a>

Gets the value of InstanceStartupParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1a960333c9c38f28318c3758c261522dfe)`(const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1a960333c9c38f28318c3758c261522dfe"></a>

Gets the value of InstanceStartupParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1a869911f9721bd04ef559cb6f4164f439)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & OutValue) const` <a id="structFRHAPI__InstanceInfo_1a869911f9721bd04ef559cb6f4164f439"></a>

Fills OutValue with the value of InstanceStartupParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetInstanceStartupParamsOrNull`](#structFRHAPI__InstanceInfo_1a0fdb077282a5498dfa8488fa5df1afd9)`()` <a id="structFRHAPI__InstanceInfo_1a0fdb077282a5498dfa8488fa5df1afd9"></a>

Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetInstanceStartupParamsOrNull`](#structFRHAPI__InstanceInfo_1a9cf7588bbf81529731867d2f422ec584)`() const` <a id="structFRHAPI__InstanceInfo_1a9cf7588bbf81529731867d2f422ec584"></a>

Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1aefb5da9cc9d34770620ee446317cf487)`(const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & NewValue)` <a id="structFRHAPI__InstanceInfo_1aefb5da9cc9d34770620ee446317cf487"></a>

Sets the value of InstanceStartupParams_Optional and also sets InstanceStartupParams_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1ad07fd6ea70563f4b9147320166992866)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` && NewValue)` <a id="structFRHAPI__InstanceInfo_1ad07fd6ea70563f4b9147320166992866"></a>

Sets the value of InstanceStartupParams_Optional and also sets InstanceStartupParams_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceStartupParams`](#structFRHAPI__InstanceInfo_1aef5d1a846e3bc2d56421f87d9e5595fd)`()` <a id="structFRHAPI__InstanceInfo_1aef5d1a846e3bc2d56421f87d9e5595fd"></a>

Clears the value of InstanceStartupParams_Optional and sets InstanceStartupParams_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetVersion`](#structFRHAPI__InstanceInfo_1a2299c165efbdec3e23b1096f9f62297d)`()` <a id="structFRHAPI__InstanceInfo_1a2299c165efbdec3e23b1096f9f62297d"></a>

Gets the value of Version_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetVersion`](#structFRHAPI__InstanceInfo_1acb83ab6c52c1803ef46230c8b95efd98)`() const` <a id="structFRHAPI__InstanceInfo_1acb83ab6c52c1803ef46230c8b95efd98"></a>

Gets the value of Version_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetVersion`](#structFRHAPI__InstanceInfo_1af5da9c84e13f3527057261cb5768af39)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1af5da9c84e13f3527057261cb5768af39"></a>

Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetVersion`](#structFRHAPI__InstanceInfo_1a3cddb79a09178831b5034307b83a9cd9)`(FString & OutValue) const` <a id="structFRHAPI__InstanceInfo_1a3cddb79a09178831b5034307b83a9cd9"></a>

Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetVersionOrNull`](#structFRHAPI__InstanceInfo_1aa027ea8fd0290d19799c708b9e725629)`()` <a id="structFRHAPI__InstanceInfo_1aa027ea8fd0290d19799c708b9e725629"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetVersionOrNull`](#structFRHAPI__InstanceInfo_1a6a82482e754bb7a26ec023f1b417ab30)`() const` <a id="structFRHAPI__InstanceInfo_1a6a82482e754bb7a26ec023f1b417ab30"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetVersion`](#structFRHAPI__InstanceInfo_1a55342d1d141d6bb06ff8aedd940133f6)`(const FString & NewValue)` <a id="structFRHAPI__InstanceInfo_1a55342d1d141d6bb06ff8aedd940133f6"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true.

#### `public inline FORCEINLINE void `[`SetVersion`](#structFRHAPI__InstanceInfo_1a3e09232e2424a2378360687f63745a1f)`(FString && NewValue)` <a id="structFRHAPI__InstanceInfo_1a3e09232e2424a2378360687f63745a1f"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics.

#### `public inline void `[`ClearVersion`](#structFRHAPI__InstanceInfo_1af29e85d43799d74da9897137984fb0be)`()` <a id="structFRHAPI__InstanceInfo_1af29e85d43799d74da9897137984fb0be"></a>

Clears the value of Version_Optional and sets Version_IsSet to false.

#### `public inline FORCEINLINE FDateTime & `[`GetCreated`](#structFRHAPI__InstanceInfo_1a99c2661e42efc4d3176730cc450be437)`()` <a id="structFRHAPI__InstanceInfo_1a99c2661e42efc4d3176730cc450be437"></a>

Gets the value of Created.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreated`](#structFRHAPI__InstanceInfo_1a3ee8758c9aa96ea4e696050d3725a962)`() const` <a id="structFRHAPI__InstanceInfo_1a3ee8758c9aa96ea4e696050d3725a962"></a>

Gets the value of Created.

#### `public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__InstanceInfo_1a2d8defa3ec81815dc4080249426e88e4)`(const FDateTime & NewValue)` <a id="structFRHAPI__InstanceInfo_1a2d8defa3ec81815dc4080249426e88e4"></a>

Sets the value of Created.

#### `public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__InstanceInfo_1a0c39a8f82d3ec913bca01ad6edb35819)`(FDateTime && NewValue)` <a id="structFRHAPI__InstanceInfo_1a0c39a8f82d3ec913bca01ad6edb35819"></a>

Sets the value of Created using move semantics.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfo_1afc12b1a8507239f874f2b45b17d6cc30)`()` <a id="structFRHAPI__InstanceInfo_1afc12b1a8507239f874f2b45b17d6cc30"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfo_1a7029b27a648f75d268ec47bf2ac2c396)`() const` <a id="structFRHAPI__InstanceInfo_1a7029b27a648f75d268ec47bf2ac2c396"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfo_1a57b3d62669903a13e60b0c6046053995)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1a57b3d62669903a13e60b0c6046053995"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__InstanceInfo_1af4a5c1605caed2253f47c0f151a92178)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__InstanceInfo_1af4a5c1605caed2253f47c0f151a92178"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceInfo_1ac90538d29d0030720a13e7b9f3004624)`()` <a id="structFRHAPI__InstanceInfo_1ac90538d29d0030720a13e7b9f3004624"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceInfo_1ac2fd60a945e9ae0edb92e346a87fcd13)`() const` <a id="structFRHAPI__InstanceInfo_1ac2fd60a945e9ae0edb92e346a87fcd13"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InstanceInfo_1a09b9c2c195b3ce18a67772b5d1e7e513)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__InstanceInfo_1a09b9c2c195b3ce18a67772b5d1e7e513"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InstanceInfo_1a143a16ee4f290110b68f8807e346b541)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__InstanceInfo_1a143a16ee4f290110b68f8807e346b541"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__InstanceInfo_1adc5b55f5426979daa0d97885088268ed)`()` <a id="structFRHAPI__InstanceInfo_1adc5b55f5426979daa0d97885088268ed"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__InstanceInfo_1aa1d4a35ab19a69ac7cbaf096d269e8e3)`()` <a id="structFRHAPI__InstanceInfo_1aa1d4a35ab19a69ac7cbaf096d269e8e3"></a>

Gets the value of InstanceHealth_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__InstanceInfo_1a1e208762121dc9fcba87bf140d315ffa)`() const` <a id="structFRHAPI__InstanceInfo_1a1e208762121dc9fcba87bf140d315ffa"></a>

Gets the value of InstanceHealth_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__InstanceInfo_1ad0ff73858711829477a8a9be0654cf22)`(const ERHAPI_InstanceHealthStatus & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1ad0ff73858711829477a8a9be0654cf22"></a>

Gets the value of InstanceHealth_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstanceHealth`](#structFRHAPI__InstanceInfo_1a654071319fe7c5955ab205d4fcb06d60)`(ERHAPI_InstanceHealthStatus & OutValue) const` <a id="structFRHAPI__InstanceInfo_1a654071319fe7c5955ab205d4fcb06d60"></a>

Fills OutValue with the value of InstanceHealth_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__InstanceInfo_1a747d2b0b8beedf4388c21ec3ed18290e)`()` <a id="structFRHAPI__InstanceInfo_1a747d2b0b8beedf4388c21ec3ed18290e"></a>

Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__InstanceInfo_1af7ae8ff423b57a049869fe5b2f06ddf5)`() const` <a id="structFRHAPI__InstanceInfo_1af7ae8ff423b57a049869fe5b2f06ddf5"></a>

Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstanceHealth`](#structFRHAPI__InstanceInfo_1ae317b558b3ac7b1aa3d9815ae50f7e8c)`(const ERHAPI_InstanceHealthStatus & NewValue)` <a id="structFRHAPI__InstanceInfo_1ae317b558b3ac7b1aa3d9815ae50f7e8c"></a>

Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstanceHealth`](#structFRHAPI__InstanceInfo_1a97c84a27aaed1964be7d89fddbd074f2)`(ERHAPI_InstanceHealthStatus && NewValue)` <a id="structFRHAPI__InstanceInfo_1a97c84a27aaed1964be7d89fddbd074f2"></a>

Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceHealth`](#structFRHAPI__InstanceInfo_1abd4b04df319d6b3af78cbd8a5c50ca9f)`()` <a id="structFRHAPI__InstanceInfo_1abd4b04df319d6b3af78cbd8a5c50ca9f"></a>

Clears the value of InstanceHealth_Optional and sets InstanceHealth_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1a4cfc5fb1b46433b15d20ef3a14388c93)`()` <a id="structFRHAPI__InstanceInfo_1a4cfc5fb1b46433b15d20ef3a14388c93"></a>

Gets the value of MatchMakingProfileId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1a9bdebf61a6abf9d0f6bb5fe1d02ec3de)`() const` <a id="structFRHAPI__InstanceInfo_1a9bdebf61a6abf9d0f6bb5fe1d02ec3de"></a>

Gets the value of MatchMakingProfileId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1aa57476355dbec4587655a3b921c1c222)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1aa57476355dbec4587655a3b921c1c222"></a>

Gets the value of MatchMakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1ac7402e732cac10440a4eeb8ea91a2014)`(FString & OutValue) const` <a id="structFRHAPI__InstanceInfo_1ac7402e732cac10440a4eeb8ea91a2014"></a>

Fills OutValue with the value of MatchMakingProfileId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMatchMakingProfileIdOrNull`](#structFRHAPI__InstanceInfo_1a664b19e1605321dda25cac256371b476)`()` <a id="structFRHAPI__InstanceInfo_1a664b19e1605321dda25cac256371b476"></a>

Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMatchMakingProfileIdOrNull`](#structFRHAPI__InstanceInfo_1adf292868215f771afbf6267465915724)`() const` <a id="structFRHAPI__InstanceInfo_1adf292868215f771afbf6267465915724"></a>

Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1ad6d3dafcfd64ea8ba20892b6f01a7ecb)`(const FString & NewValue)` <a id="structFRHAPI__InstanceInfo_1ad6d3dafcfd64ea8ba20892b6f01a7ecb"></a>

Sets the value of MatchMakingProfileId_Optional and also sets MatchMakingProfileId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1a84ab8f6b79457c07d95aac47f49b532f)`(FString && NewValue)` <a id="structFRHAPI__InstanceInfo_1a84ab8f6b79457c07d95aac47f49b532f"></a>

Sets the value of MatchMakingProfileId_Optional and also sets MatchMakingProfileId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1ae29004885f4edeb474dbee20fd20eaba)`()` <a id="structFRHAPI__InstanceInfo_1ae29004885f4edeb474dbee20fd20eaba"></a>

Clears the value of MatchMakingProfileId_Optional and sets MatchMakingProfileId_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__InstanceInfo_1a33b65907327c88265ad9d0d94150a0c8)`()` <a id="structFRHAPI__InstanceInfo_1a33b65907327c88265ad9d0d94150a0c8"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__InstanceInfo_1aea80779f4198c015879dbaba5604196c)`() const` <a id="structFRHAPI__InstanceInfo_1aea80779f4198c015879dbaba5604196c"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__InstanceInfo_1a163518126385eb2b7c624303fe6bcfb0)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1a163518126385eb2b7c624303fe6bcfb0"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__InstanceInfo_1acd5b1a4a30a6fcaae412bd6cb21b3e7f)`(FString & OutValue) const` <a id="structFRHAPI__InstanceInfo_1acd5b1a4a30a6fcaae412bd6cb21b3e7f"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__InstanceInfo_1a49047ce58b3f0116a86cc74b31a8d059)`()` <a id="structFRHAPI__InstanceInfo_1a49047ce58b3f0116a86cc74b31a8d059"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__InstanceInfo_1a6d3c208113930298abebb5c2225501cd)`() const` <a id="structFRHAPI__InstanceInfo_1a6d3c208113930298abebb5c2225501cd"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__InstanceInfo_1a13f5020a93c14b80c342610f4c253987)`(const FString & NewValue)` <a id="structFRHAPI__InstanceInfo_1a13f5020a93c14b80c342610f4c253987"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__InstanceInfo_1afc928621b53c7ba5eba49f647272a6f4)`(FString && NewValue)` <a id="structFRHAPI__InstanceInfo_1afc928621b53c7ba5eba49f647272a6f4"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__InstanceInfo_1a24595e50bdcf1728aa8b6558058c388a)`()` <a id="structFRHAPI__InstanceInfo_1a24595e50bdcf1728aa8b6558058c388a"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

