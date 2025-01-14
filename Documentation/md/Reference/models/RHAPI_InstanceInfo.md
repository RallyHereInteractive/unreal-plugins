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
`public inline FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfo_1adeedbe9c034d39f3221944537e45bbf1)`()` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfo_1abf937480faf4020f26dc565dd73aa234)`() const` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfo_1a3c392808faf08e51dc435970820fd186)`(const FString & DefaultValue) const` | Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAllocationId`](#structFRHAPI__InstanceInfo_1a8ba744444eb8302fda92a24a818534a5)`(FString & OutValue) const` | Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetAllocationIdOrNull`](#structFRHAPI__InstanceInfo_1aeafa64edfd1ee00db5f8287a0e4c7f9f)`()` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__InstanceInfo_1a77861ff320fc2e91d7f7dc08b35c4f52)`() const` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAllocationId`](#structFRHAPI__InstanceInfo_1a22d12ecf840d82b2ecbb3da5dfeb35ea)`(const FString & NewValue)` | Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.
`public inline void `[`SetAllocationId`](#structFRHAPI__InstanceInfo_1a95554679c66c9fd83efb5a4b77561f4e)`(FString && NewValue)` | Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true using move semantics.
`public inline void `[`ClearAllocationId`](#structFRHAPI__InstanceInfo_1a17455873e27cdaeefad64ade9f56b587)`()` | Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.
`public inline bool `[`IsAllocationIdSet`](#structFRHAPI__InstanceInfo_1a5bfe2f33c29c74cd1b19e60f4027f431)`() const` | Checks whether AllocationId_Optional has been set.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__InstanceInfo_1a08ec4d84111cef7aee454d5edf7be33f)`()` | Gets the value of InstanceId.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__InstanceInfo_1aeabb0cf07a9b0801165a0420b17391e2)`() const` | Gets the value of InstanceId.
`public inline void `[`SetInstanceId`](#structFRHAPI__InstanceInfo_1ac47e5ea3950ffdb52efc45986368d571)`(const FString & NewValue)` | Sets the value of InstanceId.
`public inline void `[`SetInstanceId`](#structFRHAPI__InstanceInfo_1aaa9034b00b0ee620649ab86ad805c3d7)`(FString && NewValue)` | Sets the value of InstanceId using move semantics.
`public inline ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__InstanceInfo_1a2de5b71ea3c056b234c876f301278f85)`()` | Gets the value of HostType.
`public inline const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__InstanceInfo_1ab7a9944dd0ca05dfc20b09e1202f1b76)`() const` | Gets the value of HostType.
`public inline void `[`SetHostType`](#structFRHAPI__InstanceInfo_1aca3627eefda6b36117db13c885f9d4a9)`(const ERHAPI_HostType & NewValue)` | Sets the value of HostType.
`public inline void `[`SetHostType`](#structFRHAPI__InstanceInfo_1ab39272e1763a8fdc686f9f46c18c635b)`(ERHAPI_HostType && NewValue)` | Sets the value of HostType using move semantics.
`public inline int32 & `[`GetHostPlayerId`](#structFRHAPI__InstanceInfo_1a736148ce7ca943753f1679bac6283e5a)`()` | Gets the value of HostPlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetHostPlayerId`](#structFRHAPI__InstanceInfo_1ac340df514ed13caafaa1e2c8636f4afa)`() const` | Gets the value of HostPlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetHostPlayerId`](#structFRHAPI__InstanceInfo_1a1cbdfa2539d7c824635054eea3d70bbb)`(const int32 & DefaultValue) const` | Gets the value of HostPlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostPlayerId`](#structFRHAPI__InstanceInfo_1a830763d3e0fadf19c61f87ad687b3a0b)`(int32 & OutValue) const` | Fills OutValue with the value of HostPlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetHostPlayerIdOrNull`](#structFRHAPI__InstanceInfo_1ab149cab2375b77d6625c2444dfbfad95)`()` | Returns a pointer to HostPlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetHostPlayerIdOrNull`](#structFRHAPI__InstanceInfo_1ad430af2122fda3e7e2d7908f147c5ef3)`() const` | Returns a pointer to HostPlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostPlayerId`](#structFRHAPI__InstanceInfo_1ac706432dfb1befd8049d5603bafeb586)`(const int32 & NewValue)` | Sets the value of HostPlayerId_Optional and also sets HostPlayerId_IsSet to true.
`public inline void `[`SetHostPlayerId`](#structFRHAPI__InstanceInfo_1a3db1324028145f37d22fe59cd3ce4257)`(int32 && NewValue)` | Sets the value of HostPlayerId_Optional and also sets HostPlayerId_IsSet to true using move semantics.
`public inline void `[`ClearHostPlayerId`](#structFRHAPI__InstanceInfo_1aacebdba3138a046478b14f4c0d34acaa)`()` | Clears the value of HostPlayerId_Optional and sets HostPlayerId_IsSet to false.
`public inline bool `[`IsHostPlayerIdSet`](#structFRHAPI__InstanceInfo_1a5508f807cc89c9a297984ff752abf106)`() const` | Checks whether HostPlayerId_Optional has been set.
`public inline bool `[`IsHostPlayerIdDefaultValue`](#structFRHAPI__InstanceInfo_1aabe585ad639e35768dc024e49aa411fe)`() const` | Returns true if HostPlayerId_Optional is set and matches the default value.
`public inline void `[`SetHostPlayerIdToDefault`](#structFRHAPI__InstanceInfo_1a2715c138efedba7f2dbb48e69076fbcf)`()` | Sets the value of HostPlayerId_Optional to its default and also sets HostPlayerId_IsSet to true.
`public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a5aa4261bc7f1091a3e96db5d4eb758d3)`()` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a7b87a9485bf79d119a0a9f4b2630f413)`() const` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1abb1c472319e14b7888af32dae166d923)`(const FGuid & DefaultValue) const` | Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a977e668da90c8d57f0325c8f6fcc7d51)`(FGuid & OutValue) const` | Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__InstanceInfo_1a523cda4217f6e6cf34aa53272953f549)`()` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__InstanceInfo_1afa54fecf543334b7e1f71d0db8117bc3)`() const` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a02296c9c09f430e4e99046d8d97eed38)`(const FGuid & NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.
`public inline void `[`SetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a93ac4a5da0529b0828ef8513d4c14f33)`(FGuid && NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a3a9817e7888778f65ce3e24f146a8eb8)`()` | Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.
`public inline bool `[`IsHostPlayerUuidSet`](#structFRHAPI__InstanceInfo_1a353ecbe307d8299e7c35e4f31aeff0b3)`() const` | Checks whether HostPlayerUuid_Optional has been set.
`public inline FString & `[`GetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a79b1f5eabf65422b083ec98232e76aad)`()` | Gets the value of HostDedicatedProcessId_Optional, regardless of it having been set.
`public inline const FString & `[`GetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1ac00c68a1794d53f8cf7a4b3fadf23a1b)`() const` | Gets the value of HostDedicatedProcessId_Optional, regardless of it having been set.
`public inline const FString & `[`GetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a1ed19c653c5d53705a7dcde7a1941a69)`(const FString & DefaultValue) const` | Gets the value of HostDedicatedProcessId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a1d291b8c7cd76659d888af875ee0892f)`(FString & OutValue) const` | Fills OutValue with the value of HostDedicatedProcessId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetHostDedicatedProcessIdOrNull`](#structFRHAPI__InstanceInfo_1a4e4eca9a2dda648747f18bab8481d83b)`()` | Returns a pointer to HostDedicatedProcessId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetHostDedicatedProcessIdOrNull`](#structFRHAPI__InstanceInfo_1a89725f3c7569b6bcf4de3b661b513aa4)`() const` | Returns a pointer to HostDedicatedProcessId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1adf13b20bda4e45d5bad15e700729f232)`(const FString & NewValue)` | Sets the value of HostDedicatedProcessId_Optional and also sets HostDedicatedProcessId_IsSet to true.
`public inline void `[`SetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1afd82e45cdd6490bb6a69ed7a219e6e40)`(FString && NewValue)` | Sets the value of HostDedicatedProcessId_Optional and also sets HostDedicatedProcessId_IsSet to true using move semantics.
`public inline void `[`ClearHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a0f9c42f75908fd7a719a5751d360646d)`()` | Clears the value of HostDedicatedProcessId_Optional and sets HostDedicatedProcessId_IsSet to false.
`public inline bool `[`IsHostDedicatedProcessIdSet`](#structFRHAPI__InstanceInfo_1a66552942c08da36b07259eae7d938a96)`() const` | Checks whether HostDedicatedProcessId_Optional has been set.
`public inline FString & `[`GetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1ab7b512fcad860182c5e8d9340f29bc68)`()` | Gets the value of HostDedicatedServerId_Optional, regardless of it having been set.
`public inline const FString & `[`GetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1a6481fa7c1777b6536bc49f4fd0f517ca)`() const` | Gets the value of HostDedicatedServerId_Optional, regardless of it having been set.
`public inline const FString & `[`GetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1aad81629538edee69ff294fe5bc2646e7)`(const FString & DefaultValue) const` | Gets the value of HostDedicatedServerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1ae18becab3f83d76873ad3bb2830ae69d)`(FString & OutValue) const` | Fills OutValue with the value of HostDedicatedServerId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetHostDedicatedServerIdOrNull`](#structFRHAPI__InstanceInfo_1adeca4ca67c93c4507e3be20b89ec4b3e)`()` | Returns a pointer to HostDedicatedServerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetHostDedicatedServerIdOrNull`](#structFRHAPI__InstanceInfo_1a6213d77862497504f4d5f37038098dd1)`() const` | Returns a pointer to HostDedicatedServerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1af39e961a8eed36fff6429cc46ba2c7b6)`(const FString & NewValue)` | Sets the value of HostDedicatedServerId_Optional and also sets HostDedicatedServerId_IsSet to true.
`public inline void `[`SetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1a53bed9e668abf810c1d8e4060adff7c1)`(FString && NewValue)` | Sets the value of HostDedicatedServerId_Optional and also sets HostDedicatedServerId_IsSet to true using move semantics.
`public inline void `[`ClearHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1ac659005e87cb03a194cbdfccca754abf)`()` | Clears the value of HostDedicatedServerId_Optional and sets HostDedicatedServerId_IsSet to false.
`public inline bool `[`IsHostDedicatedServerIdSet`](#structFRHAPI__InstanceInfo_1a38d08d7873c148c2f0e9dcb927af62c3)`() const` | Checks whether HostDedicatedServerId_Optional has been set.
`public inline ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__InstanceInfo_1a0e574021efc1a3e17c199929ad5fe079)`()` | Gets the value of JoinStatus.
`public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__InstanceInfo_1ac6eabc2cbcfddcb2e7153a2d8c5e4b2d)`() const` | Gets the value of JoinStatus.
`public inline void `[`SetJoinStatus`](#structFRHAPI__InstanceInfo_1a098b16cfed3942b68f868a55b64908f6)`(const ERHAPI_InstanceJoinableStatus & NewValue)` | Sets the value of JoinStatus.
`public inline void `[`SetJoinStatus`](#structFRHAPI__InstanceInfo_1aab9dcf70696f6a46b8bdddebe824eeb7)`(ERHAPI_InstanceJoinableStatus && NewValue)` | Sets the value of JoinStatus using move semantics.
`public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfo_1aea8378896b9d0ba527909acdc5422bfa)`()` | Gets the value of JoinParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfo_1a10a087bd52e768bcc38172a3f8a4ef26)`() const` | Gets the value of JoinParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfo_1af2addc9a7d66f4f59760731d3f811471)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & DefaultValue) const` | Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinParams`](#structFRHAPI__InstanceInfo_1a45938b171ea35d078e9fd6b30e1080a1)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & OutValue) const` | Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__InstanceInfo_1abe221e7fc8851383b0087747c45e0a70)`()` | Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__InstanceInfo_1ad4fa10b0417bcc7b95e2fe4ce33cd4a2)`() const` | Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinParams`](#structFRHAPI__InstanceInfo_1ab4fc59f3f9297188518512b152f121c9)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & NewValue)` | Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.
`public inline void `[`SetJoinParams`](#structFRHAPI__InstanceInfo_1a62017e79527f3da013b8b809ac0e8076)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` && NewValue)` | Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true using move semantics.
`public inline void `[`ClearJoinParams`](#structFRHAPI__InstanceInfo_1a79d4953e7dc5d7d603a1bd3c0f078d99)`()` | Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.
`public inline bool `[`IsJoinParamsSet`](#structFRHAPI__InstanceInfo_1ae76bd6549efd3b77cba7ef4780dbcf85)`() const` | Checks whether JoinParams_Optional has been set.
`public inline `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1abb7e94770f261ff92ef0810b5d8dc8ef)`()` | Gets the value of InstanceStartupParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1af67d6e3b5557aabefa25815e54c78645)`() const` | Gets the value of InstanceStartupParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1addcc41686775992ef045fc820ceaf9e9)`(const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & DefaultValue) const` | Gets the value of InstanceStartupParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1ae1391ba5d4a7e883c435bdad1355e413)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & OutValue) const` | Fills OutValue with the value of InstanceStartupParams_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetInstanceStartupParamsOrNull`](#structFRHAPI__InstanceInfo_1a282ca0c4827b25308cfa1e1c0b98fa39)`()` | Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetInstanceStartupParamsOrNull`](#structFRHAPI__InstanceInfo_1a5f69f7b57cd4818ddd40fd230b0c1181)`() const` | Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1ae41d0e40cee53896c08df6f1699a1173)`(const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & NewValue)` | Sets the value of InstanceStartupParams_Optional and also sets InstanceStartupParams_IsSet to true.
`public inline void `[`SetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1ab9296cbc6242ad734d5b9dbb92a3394d)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` && NewValue)` | Sets the value of InstanceStartupParams_Optional and also sets InstanceStartupParams_IsSet to true using move semantics.
`public inline void `[`ClearInstanceStartupParams`](#structFRHAPI__InstanceInfo_1aef5d1a846e3bc2d56421f87d9e5595fd)`()` | Clears the value of InstanceStartupParams_Optional and sets InstanceStartupParams_IsSet to false.
`public inline bool `[`IsInstanceStartupParamsSet`](#structFRHAPI__InstanceInfo_1a3f58e87f74b25dadf8652257d71d52c1)`() const` | Checks whether InstanceStartupParams_Optional has been set.
`public inline FString & `[`GetVersion`](#structFRHAPI__InstanceInfo_1aa978adeffeb6230431e34250f65b8d70)`()` | Gets the value of Version_Optional, regardless of it having been set.
`public inline const FString & `[`GetVersion`](#structFRHAPI__InstanceInfo_1a0bd74ebf36b626cc250381bb440e3123)`() const` | Gets the value of Version_Optional, regardless of it having been set.
`public inline const FString & `[`GetVersion`](#structFRHAPI__InstanceInfo_1aa10a189d6919678d1f4d84216d55356a)`(const FString & DefaultValue) const` | Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVersion`](#structFRHAPI__InstanceInfo_1ae4ad200ba900ced02d5a154170d42694)`(FString & OutValue) const` | Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetVersionOrNull`](#structFRHAPI__InstanceInfo_1ae072f4e85826744ff3b112a1693118ba)`()` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetVersionOrNull`](#structFRHAPI__InstanceInfo_1a1993dc7a14c0594fb71c3c44a9a994aa)`() const` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVersion`](#structFRHAPI__InstanceInfo_1a05d81fe4446160a72ce430e1d65dff37)`(const FString & NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true.
`public inline void `[`SetVersion`](#structFRHAPI__InstanceInfo_1a1cd6ab9c50aefff011679daf80684690)`(FString && NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics.
`public inline void `[`ClearVersion`](#structFRHAPI__InstanceInfo_1af29e85d43799d74da9897137984fb0be)`()` | Clears the value of Version_Optional and sets Version_IsSet to false.
`public inline bool `[`IsVersionSet`](#structFRHAPI__InstanceInfo_1ad17baf0f6bbdb7aabd6583290b12c2bd)`() const` | Checks whether Version_Optional has been set.
`public inline FDateTime & `[`GetCreated`](#structFRHAPI__InstanceInfo_1a07ec5c30c724547333c2d1085ad15100)`()` | Gets the value of Created.
`public inline const FDateTime & `[`GetCreated`](#structFRHAPI__InstanceInfo_1ada100d2ca188d43064c28d0ee9412ee4)`() const` | Gets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__InstanceInfo_1a9c3c3f6c1c6456e0da139a175ed41f20)`(const FDateTime & NewValue)` | Sets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__InstanceInfo_1a46b7c799d35f7f593077b3dd876b8661)`(FDateTime && NewValue)` | Sets the value of Created using move semantics.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfo_1a67c0db888429a66887eb7ed71f28b7bf)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfo_1a632569ab12e924a609b2d55a66d6aea9)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfo_1af00b8f51099ff5dfe30c59d34f6d79eb)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__InstanceInfo_1a046fc3e6195a4270741e60be0ef1564e)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceInfo_1a2bb908a88c1be7d09fa974640b3177af)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceInfo_1a2cdcaa4314c526289334bc8792c48be0)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__InstanceInfo_1a178760db9250951ee6f5187e5592034b)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__InstanceInfo_1acbc191b3c2ea0ff5f81c9223658dec04)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__InstanceInfo_1adc5b55f5426979daa0d97885088268ed)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__InstanceInfo_1a050e601048f7a0b0fb36c483168558cb)`() const` | Checks whether CustomData_Optional has been set.
`public inline ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__InstanceInfo_1a983b74b64675c2db4d58f45e18a24534)`()` | Gets the value of InstanceHealth_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__InstanceInfo_1aa3840766cb2bbe3da0e644a762889e7d)`() const` | Gets the value of InstanceHealth_Optional, regardless of it having been set.
`public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__InstanceInfo_1ad7b0ff6e7e02083b3cf6edd8a3c8700a)`(const ERHAPI_InstanceHealthStatus & DefaultValue) const` | Gets the value of InstanceHealth_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceHealth`](#structFRHAPI__InstanceInfo_1a31b0f139b535515679628d25d591042b)`(ERHAPI_InstanceHealthStatus & OutValue) const` | Fills OutValue with the value of InstanceHealth_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__InstanceInfo_1aadabf0af6239022d7dbe31f4bfc55457)`()` | Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__InstanceInfo_1a02092868e7840a4fd5d0468283143500)`() const` | Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceHealth`](#structFRHAPI__InstanceInfo_1a506746a79d63dac7327acc32cb7fa6ae)`(const ERHAPI_InstanceHealthStatus & NewValue)` | Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true.
`public inline void `[`SetInstanceHealth`](#structFRHAPI__InstanceInfo_1ab9785f293dd320c98fe216ed6eaf8d53)`(ERHAPI_InstanceHealthStatus && NewValue)` | Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true using move semantics.
`public inline void `[`ClearInstanceHealth`](#structFRHAPI__InstanceInfo_1abd4b04df319d6b3af78cbd8a5c50ca9f)`()` | Clears the value of InstanceHealth_Optional and sets InstanceHealth_IsSet to false.
`public inline bool `[`IsInstanceHealthSet`](#structFRHAPI__InstanceInfo_1a8d47768ae1c776a5ca0f4bec1561edc3)`() const` | Checks whether InstanceHealth_Optional has been set.
`public inline FString & `[`GetMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1a7de791593c3049049c2959d11614738c)`()` | Gets the value of MatchMakingProfileId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1a0d7f6ab9693a9a917927b749d27d1549)`() const` | Gets the value of MatchMakingProfileId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1aa8ef9d5c7e3ff79a68293f07648da898)`(const FString & DefaultValue) const` | Gets the value of MatchMakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1a42b7d63deb24a9f02d28f46324056918)`(FString & OutValue) const` | Fills OutValue with the value of MatchMakingProfileId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchMakingProfileIdOrNull`](#structFRHAPI__InstanceInfo_1a674cca558e9cd91f625f85425df29c8f)`()` | Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchMakingProfileIdOrNull`](#structFRHAPI__InstanceInfo_1a6da15cb0eb51f8b4f1b7fb110de67b8e)`() const` | Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1af73401a870ffb1be53ef897b4211a4b2)`(const FString & NewValue)` | Sets the value of MatchMakingProfileId_Optional and also sets MatchMakingProfileId_IsSet to true.
`public inline void `[`SetMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1aa21aff8a94c7a3954574d35a8a26d71e)`(FString && NewValue)` | Sets the value of MatchMakingProfileId_Optional and also sets MatchMakingProfileId_IsSet to true using move semantics.
`public inline void `[`ClearMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1ae29004885f4edeb474dbee20fd20eaba)`()` | Clears the value of MatchMakingProfileId_Optional and sets MatchMakingProfileId_IsSet to false.
`public inline bool `[`IsMatchMakingProfileIdSet`](#structFRHAPI__InstanceInfo_1a917f085df24faf29bec1b587d1dfe07b)`() const` | Checks whether MatchMakingProfileId_Optional has been set.
`public inline FString & `[`GetMatchId`](#structFRHAPI__InstanceInfo_1a3c59aff10e566b6201f599b64c4b5c30)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__InstanceInfo_1a39120ebf69b2c34b5c801e1cee8494c2)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__InstanceInfo_1aa56062e6675f4259d9f95e071a707b04)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchId`](#structFRHAPI__InstanceInfo_1a19fd1b25246342616c77faba5b3b8b3a)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__InstanceInfo_1a8baa9e6637be7b1b39015703eebf3bd4)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__InstanceInfo_1a61f17ebcc7e355b184fef512776a6c97)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchId`](#structFRHAPI__InstanceInfo_1a2abcf2628fa1ebc225e2f213aaf8943d)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline void `[`SetMatchId`](#structFRHAPI__InstanceInfo_1ad19957067cd2a6126e847fbd46b4e383)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__InstanceInfo_1a24595e50bdcf1728aa8b6558058c388a)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline bool `[`IsMatchIdSet`](#structFRHAPI__InstanceInfo_1a60dcbe3f5260209a23ba381b0d6310f3)`() const` | Checks whether MatchId_Optional has been set.

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

#### `public inline FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfo_1adeedbe9c034d39f3221944537e45bbf1)`()` <a id="structFRHAPI__InstanceInfo_1adeedbe9c034d39f3221944537e45bbf1"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfo_1abf937480faf4020f26dc565dd73aa234)`() const` <a id="structFRHAPI__InstanceInfo_1abf937480faf4020f26dc565dd73aa234"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfo_1a3c392808faf08e51dc435970820fd186)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1a3c392808faf08e51dc435970820fd186"></a>

Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAllocationId`](#structFRHAPI__InstanceInfo_1a8ba744444eb8302fda92a24a818534a5)`(FString & OutValue) const` <a id="structFRHAPI__InstanceInfo_1a8ba744444eb8302fda92a24a818534a5"></a>

Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetAllocationIdOrNull`](#structFRHAPI__InstanceInfo_1aeafa64edfd1ee00db5f8287a0e4c7f9f)`()` <a id="structFRHAPI__InstanceInfo_1aeafa64edfd1ee00db5f8287a0e4c7f9f"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__InstanceInfo_1a77861ff320fc2e91d7f7dc08b35c4f52)`() const` <a id="structFRHAPI__InstanceInfo_1a77861ff320fc2e91d7f7dc08b35c4f52"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAllocationId`](#structFRHAPI__InstanceInfo_1a22d12ecf840d82b2ecbb3da5dfeb35ea)`(const FString & NewValue)` <a id="structFRHAPI__InstanceInfo_1a22d12ecf840d82b2ecbb3da5dfeb35ea"></a>

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.

#### `public inline void `[`SetAllocationId`](#structFRHAPI__InstanceInfo_1a95554679c66c9fd83efb5a4b77561f4e)`(FString && NewValue)` <a id="structFRHAPI__InstanceInfo_1a95554679c66c9fd83efb5a4b77561f4e"></a>

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true using move semantics.

#### `public inline void `[`ClearAllocationId`](#structFRHAPI__InstanceInfo_1a17455873e27cdaeefad64ade9f56b587)`()` <a id="structFRHAPI__InstanceInfo_1a17455873e27cdaeefad64ade9f56b587"></a>

Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.

#### `public inline bool `[`IsAllocationIdSet`](#structFRHAPI__InstanceInfo_1a5bfe2f33c29c74cd1b19e60f4027f431)`() const` <a id="structFRHAPI__InstanceInfo_1a5bfe2f33c29c74cd1b19e60f4027f431"></a>

Checks whether AllocationId_Optional has been set.

#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__InstanceInfo_1a08ec4d84111cef7aee454d5edf7be33f)`()` <a id="structFRHAPI__InstanceInfo_1a08ec4d84111cef7aee454d5edf7be33f"></a>

Gets the value of InstanceId.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__InstanceInfo_1aeabb0cf07a9b0801165a0420b17391e2)`() const` <a id="structFRHAPI__InstanceInfo_1aeabb0cf07a9b0801165a0420b17391e2"></a>

Gets the value of InstanceId.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__InstanceInfo_1ac47e5ea3950ffdb52efc45986368d571)`(const FString & NewValue)` <a id="structFRHAPI__InstanceInfo_1ac47e5ea3950ffdb52efc45986368d571"></a>

Sets the value of InstanceId.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__InstanceInfo_1aaa9034b00b0ee620649ab86ad805c3d7)`(FString && NewValue)` <a id="structFRHAPI__InstanceInfo_1aaa9034b00b0ee620649ab86ad805c3d7"></a>

Sets the value of InstanceId using move semantics.

#### `public inline ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__InstanceInfo_1a2de5b71ea3c056b234c876f301278f85)`()` <a id="structFRHAPI__InstanceInfo_1a2de5b71ea3c056b234c876f301278f85"></a>

Gets the value of HostType.

#### `public inline const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__InstanceInfo_1ab7a9944dd0ca05dfc20b09e1202f1b76)`() const` <a id="structFRHAPI__InstanceInfo_1ab7a9944dd0ca05dfc20b09e1202f1b76"></a>

Gets the value of HostType.

#### `public inline void `[`SetHostType`](#structFRHAPI__InstanceInfo_1aca3627eefda6b36117db13c885f9d4a9)`(const ERHAPI_HostType & NewValue)` <a id="structFRHAPI__InstanceInfo_1aca3627eefda6b36117db13c885f9d4a9"></a>

Sets the value of HostType.

#### `public inline void `[`SetHostType`](#structFRHAPI__InstanceInfo_1ab39272e1763a8fdc686f9f46c18c635b)`(ERHAPI_HostType && NewValue)` <a id="structFRHAPI__InstanceInfo_1ab39272e1763a8fdc686f9f46c18c635b"></a>

Sets the value of HostType using move semantics.

#### `public inline int32 & `[`GetHostPlayerId`](#structFRHAPI__InstanceInfo_1a736148ce7ca943753f1679bac6283e5a)`()` <a id="structFRHAPI__InstanceInfo_1a736148ce7ca943753f1679bac6283e5a"></a>

Gets the value of HostPlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetHostPlayerId`](#structFRHAPI__InstanceInfo_1ac340df514ed13caafaa1e2c8636f4afa)`() const` <a id="structFRHAPI__InstanceInfo_1ac340df514ed13caafaa1e2c8636f4afa"></a>

Gets the value of HostPlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetHostPlayerId`](#structFRHAPI__InstanceInfo_1a1cbdfa2539d7c824635054eea3d70bbb)`(const int32 & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1a1cbdfa2539d7c824635054eea3d70bbb"></a>

Gets the value of HostPlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetHostPlayerId`](#structFRHAPI__InstanceInfo_1a830763d3e0fadf19c61f87ad687b3a0b)`(int32 & OutValue) const` <a id="structFRHAPI__InstanceInfo_1a830763d3e0fadf19c61f87ad687b3a0b"></a>

Fills OutValue with the value of HostPlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetHostPlayerIdOrNull`](#structFRHAPI__InstanceInfo_1ab149cab2375b77d6625c2444dfbfad95)`()` <a id="structFRHAPI__InstanceInfo_1ab149cab2375b77d6625c2444dfbfad95"></a>

Returns a pointer to HostPlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetHostPlayerIdOrNull`](#structFRHAPI__InstanceInfo_1ad430af2122fda3e7e2d7908f147c5ef3)`() const` <a id="structFRHAPI__InstanceInfo_1ad430af2122fda3e7e2d7908f147c5ef3"></a>

Returns a pointer to HostPlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetHostPlayerId`](#structFRHAPI__InstanceInfo_1ac706432dfb1befd8049d5603bafeb586)`(const int32 & NewValue)` <a id="structFRHAPI__InstanceInfo_1ac706432dfb1befd8049d5603bafeb586"></a>

Sets the value of HostPlayerId_Optional and also sets HostPlayerId_IsSet to true.

#### `public inline void `[`SetHostPlayerId`](#structFRHAPI__InstanceInfo_1a3db1324028145f37d22fe59cd3ce4257)`(int32 && NewValue)` <a id="structFRHAPI__InstanceInfo_1a3db1324028145f37d22fe59cd3ce4257"></a>

Sets the value of HostPlayerId_Optional and also sets HostPlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearHostPlayerId`](#structFRHAPI__InstanceInfo_1aacebdba3138a046478b14f4c0d34acaa)`()` <a id="structFRHAPI__InstanceInfo_1aacebdba3138a046478b14f4c0d34acaa"></a>

Clears the value of HostPlayerId_Optional and sets HostPlayerId_IsSet to false.

#### `public inline bool `[`IsHostPlayerIdSet`](#structFRHAPI__InstanceInfo_1a5508f807cc89c9a297984ff752abf106)`() const` <a id="structFRHAPI__InstanceInfo_1a5508f807cc89c9a297984ff752abf106"></a>

Checks whether HostPlayerId_Optional has been set.

#### `public inline bool `[`IsHostPlayerIdDefaultValue`](#structFRHAPI__InstanceInfo_1aabe585ad639e35768dc024e49aa411fe)`() const` <a id="structFRHAPI__InstanceInfo_1aabe585ad639e35768dc024e49aa411fe"></a>

Returns true if HostPlayerId_Optional is set and matches the default value.

#### `public inline void `[`SetHostPlayerIdToDefault`](#structFRHAPI__InstanceInfo_1a2715c138efedba7f2dbb48e69076fbcf)`()` <a id="structFRHAPI__InstanceInfo_1a2715c138efedba7f2dbb48e69076fbcf"></a>

Sets the value of HostPlayerId_Optional to its default and also sets HostPlayerId_IsSet to true.

#### `public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a5aa4261bc7f1091a3e96db5d4eb758d3)`()` <a id="structFRHAPI__InstanceInfo_1a5aa4261bc7f1091a3e96db5d4eb758d3"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a7b87a9485bf79d119a0a9f4b2630f413)`() const` <a id="structFRHAPI__InstanceInfo_1a7b87a9485bf79d119a0a9f4b2630f413"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1abb1c472319e14b7888af32dae166d923)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1abb1c472319e14b7888af32dae166d923"></a>

Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a977e668da90c8d57f0325c8f6fcc7d51)`(FGuid & OutValue) const` <a id="structFRHAPI__InstanceInfo_1a977e668da90c8d57f0325c8f6fcc7d51"></a>

Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__InstanceInfo_1a523cda4217f6e6cf34aa53272953f549)`()` <a id="structFRHAPI__InstanceInfo_1a523cda4217f6e6cf34aa53272953f549"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__InstanceInfo_1afa54fecf543334b7e1f71d0db8117bc3)`() const` <a id="structFRHAPI__InstanceInfo_1afa54fecf543334b7e1f71d0db8117bc3"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a02296c9c09f430e4e99046d8d97eed38)`(const FGuid & NewValue)` <a id="structFRHAPI__InstanceInfo_1a02296c9c09f430e4e99046d8d97eed38"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.

#### `public inline void `[`SetHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a93ac4a5da0529b0828ef8513d4c14f33)`(FGuid && NewValue)` <a id="structFRHAPI__InstanceInfo_1a93ac4a5da0529b0828ef8513d4c14f33"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__InstanceInfo_1a3a9817e7888778f65ce3e24f146a8eb8)`()` <a id="structFRHAPI__InstanceInfo_1a3a9817e7888778f65ce3e24f146a8eb8"></a>

Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.

#### `public inline bool `[`IsHostPlayerUuidSet`](#structFRHAPI__InstanceInfo_1a353ecbe307d8299e7c35e4f31aeff0b3)`() const` <a id="structFRHAPI__InstanceInfo_1a353ecbe307d8299e7c35e4f31aeff0b3"></a>

Checks whether HostPlayerUuid_Optional has been set.

#### `public inline FString & `[`GetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a79b1f5eabf65422b083ec98232e76aad)`()` <a id="structFRHAPI__InstanceInfo_1a79b1f5eabf65422b083ec98232e76aad"></a>

Gets the value of HostDedicatedProcessId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1ac00c68a1794d53f8cf7a4b3fadf23a1b)`() const` <a id="structFRHAPI__InstanceInfo_1ac00c68a1794d53f8cf7a4b3fadf23a1b"></a>

Gets the value of HostDedicatedProcessId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a1ed19c653c5d53705a7dcde7a1941a69)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1a1ed19c653c5d53705a7dcde7a1941a69"></a>

Gets the value of HostDedicatedProcessId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a1d291b8c7cd76659d888af875ee0892f)`(FString & OutValue) const` <a id="structFRHAPI__InstanceInfo_1a1d291b8c7cd76659d888af875ee0892f"></a>

Fills OutValue with the value of HostDedicatedProcessId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetHostDedicatedProcessIdOrNull`](#structFRHAPI__InstanceInfo_1a4e4eca9a2dda648747f18bab8481d83b)`()` <a id="structFRHAPI__InstanceInfo_1a4e4eca9a2dda648747f18bab8481d83b"></a>

Returns a pointer to HostDedicatedProcessId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetHostDedicatedProcessIdOrNull`](#structFRHAPI__InstanceInfo_1a89725f3c7569b6bcf4de3b661b513aa4)`() const` <a id="structFRHAPI__InstanceInfo_1a89725f3c7569b6bcf4de3b661b513aa4"></a>

Returns a pointer to HostDedicatedProcessId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1adf13b20bda4e45d5bad15e700729f232)`(const FString & NewValue)` <a id="structFRHAPI__InstanceInfo_1adf13b20bda4e45d5bad15e700729f232"></a>

Sets the value of HostDedicatedProcessId_Optional and also sets HostDedicatedProcessId_IsSet to true.

#### `public inline void `[`SetHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1afd82e45cdd6490bb6a69ed7a219e6e40)`(FString && NewValue)` <a id="structFRHAPI__InstanceInfo_1afd82e45cdd6490bb6a69ed7a219e6e40"></a>

Sets the value of HostDedicatedProcessId_Optional and also sets HostDedicatedProcessId_IsSet to true using move semantics.

#### `public inline void `[`ClearHostDedicatedProcessId`](#structFRHAPI__InstanceInfo_1a0f9c42f75908fd7a719a5751d360646d)`()` <a id="structFRHAPI__InstanceInfo_1a0f9c42f75908fd7a719a5751d360646d"></a>

Clears the value of HostDedicatedProcessId_Optional and sets HostDedicatedProcessId_IsSet to false.

#### `public inline bool `[`IsHostDedicatedProcessIdSet`](#structFRHAPI__InstanceInfo_1a66552942c08da36b07259eae7d938a96)`() const` <a id="structFRHAPI__InstanceInfo_1a66552942c08da36b07259eae7d938a96"></a>

Checks whether HostDedicatedProcessId_Optional has been set.

#### `public inline FString & `[`GetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1ab7b512fcad860182c5e8d9340f29bc68)`()` <a id="structFRHAPI__InstanceInfo_1ab7b512fcad860182c5e8d9340f29bc68"></a>

Gets the value of HostDedicatedServerId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1a6481fa7c1777b6536bc49f4fd0f517ca)`() const` <a id="structFRHAPI__InstanceInfo_1a6481fa7c1777b6536bc49f4fd0f517ca"></a>

Gets the value of HostDedicatedServerId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1aad81629538edee69ff294fe5bc2646e7)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1aad81629538edee69ff294fe5bc2646e7"></a>

Gets the value of HostDedicatedServerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1ae18becab3f83d76873ad3bb2830ae69d)`(FString & OutValue) const` <a id="structFRHAPI__InstanceInfo_1ae18becab3f83d76873ad3bb2830ae69d"></a>

Fills OutValue with the value of HostDedicatedServerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetHostDedicatedServerIdOrNull`](#structFRHAPI__InstanceInfo_1adeca4ca67c93c4507e3be20b89ec4b3e)`()` <a id="structFRHAPI__InstanceInfo_1adeca4ca67c93c4507e3be20b89ec4b3e"></a>

Returns a pointer to HostDedicatedServerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetHostDedicatedServerIdOrNull`](#structFRHAPI__InstanceInfo_1a6213d77862497504f4d5f37038098dd1)`() const` <a id="structFRHAPI__InstanceInfo_1a6213d77862497504f4d5f37038098dd1"></a>

Returns a pointer to HostDedicatedServerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1af39e961a8eed36fff6429cc46ba2c7b6)`(const FString & NewValue)` <a id="structFRHAPI__InstanceInfo_1af39e961a8eed36fff6429cc46ba2c7b6"></a>

Sets the value of HostDedicatedServerId_Optional and also sets HostDedicatedServerId_IsSet to true.

#### `public inline void `[`SetHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1a53bed9e668abf810c1d8e4060adff7c1)`(FString && NewValue)` <a id="structFRHAPI__InstanceInfo_1a53bed9e668abf810c1d8e4060adff7c1"></a>

Sets the value of HostDedicatedServerId_Optional and also sets HostDedicatedServerId_IsSet to true using move semantics.

#### `public inline void `[`ClearHostDedicatedServerId`](#structFRHAPI__InstanceInfo_1ac659005e87cb03a194cbdfccca754abf)`()` <a id="structFRHAPI__InstanceInfo_1ac659005e87cb03a194cbdfccca754abf"></a>

Clears the value of HostDedicatedServerId_Optional and sets HostDedicatedServerId_IsSet to false.

#### `public inline bool `[`IsHostDedicatedServerIdSet`](#structFRHAPI__InstanceInfo_1a38d08d7873c148c2f0e9dcb927af62c3)`() const` <a id="structFRHAPI__InstanceInfo_1a38d08d7873c148c2f0e9dcb927af62c3"></a>

Checks whether HostDedicatedServerId_Optional has been set.

#### `public inline ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__InstanceInfo_1a0e574021efc1a3e17c199929ad5fe079)`()` <a id="structFRHAPI__InstanceInfo_1a0e574021efc1a3e17c199929ad5fe079"></a>

Gets the value of JoinStatus.

#### `public inline const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__InstanceInfo_1ac6eabc2cbcfddcb2e7153a2d8c5e4b2d)`() const` <a id="structFRHAPI__InstanceInfo_1ac6eabc2cbcfddcb2e7153a2d8c5e4b2d"></a>

Gets the value of JoinStatus.

#### `public inline void `[`SetJoinStatus`](#structFRHAPI__InstanceInfo_1a098b16cfed3942b68f868a55b64908f6)`(const ERHAPI_InstanceJoinableStatus & NewValue)` <a id="structFRHAPI__InstanceInfo_1a098b16cfed3942b68f868a55b64908f6"></a>

Sets the value of JoinStatus.

#### `public inline void `[`SetJoinStatus`](#structFRHAPI__InstanceInfo_1aab9dcf70696f6a46b8bdddebe824eeb7)`(ERHAPI_InstanceJoinableStatus && NewValue)` <a id="structFRHAPI__InstanceInfo_1aab9dcf70696f6a46b8bdddebe824eeb7"></a>

Sets the value of JoinStatus using move semantics.

#### `public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfo_1aea8378896b9d0ba527909acdc5422bfa)`()` <a id="structFRHAPI__InstanceInfo_1aea8378896b9d0ba527909acdc5422bfa"></a>

Gets the value of JoinParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfo_1a10a087bd52e768bcc38172a3f8a4ef26)`() const` <a id="structFRHAPI__InstanceInfo_1a10a087bd52e768bcc38172a3f8a4ef26"></a>

Gets the value of JoinParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfo_1af2addc9a7d66f4f59760731d3f811471)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1af2addc9a7d66f4f59760731d3f811471"></a>

Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetJoinParams`](#structFRHAPI__InstanceInfo_1a45938b171ea35d078e9fd6b30e1080a1)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & OutValue) const` <a id="structFRHAPI__InstanceInfo_1a45938b171ea35d078e9fd6b30e1080a1"></a>

Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__InstanceInfo_1abe221e7fc8851383b0087747c45e0a70)`()` <a id="structFRHAPI__InstanceInfo_1abe221e7fc8851383b0087747c45e0a70"></a>

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__InstanceInfo_1ad4fa10b0417bcc7b95e2fe4ce33cd4a2)`() const` <a id="structFRHAPI__InstanceInfo_1ad4fa10b0417bcc7b95e2fe4ce33cd4a2"></a>

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetJoinParams`](#structFRHAPI__InstanceInfo_1ab4fc59f3f9297188518512b152f121c9)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & NewValue)` <a id="structFRHAPI__InstanceInfo_1ab4fc59f3f9297188518512b152f121c9"></a>

Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.

#### `public inline void `[`SetJoinParams`](#structFRHAPI__InstanceInfo_1a62017e79527f3da013b8b809ac0e8076)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` && NewValue)` <a id="structFRHAPI__InstanceInfo_1a62017e79527f3da013b8b809ac0e8076"></a>

Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinParams`](#structFRHAPI__InstanceInfo_1a79d4953e7dc5d7d603a1bd3c0f078d99)`()` <a id="structFRHAPI__InstanceInfo_1a79d4953e7dc5d7d603a1bd3c0f078d99"></a>

Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.

#### `public inline bool `[`IsJoinParamsSet`](#structFRHAPI__InstanceInfo_1ae76bd6549efd3b77cba7ef4780dbcf85)`() const` <a id="structFRHAPI__InstanceInfo_1ae76bd6549efd3b77cba7ef4780dbcf85"></a>

Checks whether JoinParams_Optional has been set.

#### `public inline `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1abb7e94770f261ff92ef0810b5d8dc8ef)`()` <a id="structFRHAPI__InstanceInfo_1abb7e94770f261ff92ef0810b5d8dc8ef"></a>

Gets the value of InstanceStartupParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1af67d6e3b5557aabefa25815e54c78645)`() const` <a id="structFRHAPI__InstanceInfo_1af67d6e3b5557aabefa25815e54c78645"></a>

Gets the value of InstanceStartupParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1addcc41686775992ef045fc820ceaf9e9)`(const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1addcc41686775992ef045fc820ceaf9e9"></a>

Gets the value of InstanceStartupParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1ae1391ba5d4a7e883c435bdad1355e413)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & OutValue) const` <a id="structFRHAPI__InstanceInfo_1ae1391ba5d4a7e883c435bdad1355e413"></a>

Fills OutValue with the value of InstanceStartupParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetInstanceStartupParamsOrNull`](#structFRHAPI__InstanceInfo_1a282ca0c4827b25308cfa1e1c0b98fa39)`()` <a id="structFRHAPI__InstanceInfo_1a282ca0c4827b25308cfa1e1c0b98fa39"></a>

Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetInstanceStartupParamsOrNull`](#structFRHAPI__InstanceInfo_1a5f69f7b57cd4818ddd40fd230b0c1181)`() const` <a id="structFRHAPI__InstanceInfo_1a5f69f7b57cd4818ddd40fd230b0c1181"></a>

Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1ae41d0e40cee53896c08df6f1699a1173)`(const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & NewValue)` <a id="structFRHAPI__InstanceInfo_1ae41d0e40cee53896c08df6f1699a1173"></a>

Sets the value of InstanceStartupParams_Optional and also sets InstanceStartupParams_IsSet to true.

#### `public inline void `[`SetInstanceStartupParams`](#structFRHAPI__InstanceInfo_1ab9296cbc6242ad734d5b9dbb92a3394d)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` && NewValue)` <a id="structFRHAPI__InstanceInfo_1ab9296cbc6242ad734d5b9dbb92a3394d"></a>

Sets the value of InstanceStartupParams_Optional and also sets InstanceStartupParams_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceStartupParams`](#structFRHAPI__InstanceInfo_1aef5d1a846e3bc2d56421f87d9e5595fd)`()` <a id="structFRHAPI__InstanceInfo_1aef5d1a846e3bc2d56421f87d9e5595fd"></a>

Clears the value of InstanceStartupParams_Optional and sets InstanceStartupParams_IsSet to false.

#### `public inline bool `[`IsInstanceStartupParamsSet`](#structFRHAPI__InstanceInfo_1a3f58e87f74b25dadf8652257d71d52c1)`() const` <a id="structFRHAPI__InstanceInfo_1a3f58e87f74b25dadf8652257d71d52c1"></a>

Checks whether InstanceStartupParams_Optional has been set.

#### `public inline FString & `[`GetVersion`](#structFRHAPI__InstanceInfo_1aa978adeffeb6230431e34250f65b8d70)`()` <a id="structFRHAPI__InstanceInfo_1aa978adeffeb6230431e34250f65b8d70"></a>

Gets the value of Version_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetVersion`](#structFRHAPI__InstanceInfo_1a0bd74ebf36b626cc250381bb440e3123)`() const` <a id="structFRHAPI__InstanceInfo_1a0bd74ebf36b626cc250381bb440e3123"></a>

Gets the value of Version_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetVersion`](#structFRHAPI__InstanceInfo_1aa10a189d6919678d1f4d84216d55356a)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1aa10a189d6919678d1f4d84216d55356a"></a>

Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetVersion`](#structFRHAPI__InstanceInfo_1ae4ad200ba900ced02d5a154170d42694)`(FString & OutValue) const` <a id="structFRHAPI__InstanceInfo_1ae4ad200ba900ced02d5a154170d42694"></a>

Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetVersionOrNull`](#structFRHAPI__InstanceInfo_1ae072f4e85826744ff3b112a1693118ba)`()` <a id="structFRHAPI__InstanceInfo_1ae072f4e85826744ff3b112a1693118ba"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetVersionOrNull`](#structFRHAPI__InstanceInfo_1a1993dc7a14c0594fb71c3c44a9a994aa)`() const` <a id="structFRHAPI__InstanceInfo_1a1993dc7a14c0594fb71c3c44a9a994aa"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetVersion`](#structFRHAPI__InstanceInfo_1a05d81fe4446160a72ce430e1d65dff37)`(const FString & NewValue)` <a id="structFRHAPI__InstanceInfo_1a05d81fe4446160a72ce430e1d65dff37"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true.

#### `public inline void `[`SetVersion`](#structFRHAPI__InstanceInfo_1a1cd6ab9c50aefff011679daf80684690)`(FString && NewValue)` <a id="structFRHAPI__InstanceInfo_1a1cd6ab9c50aefff011679daf80684690"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics.

#### `public inline void `[`ClearVersion`](#structFRHAPI__InstanceInfo_1af29e85d43799d74da9897137984fb0be)`()` <a id="structFRHAPI__InstanceInfo_1af29e85d43799d74da9897137984fb0be"></a>

Clears the value of Version_Optional and sets Version_IsSet to false.

#### `public inline bool `[`IsVersionSet`](#structFRHAPI__InstanceInfo_1ad17baf0f6bbdb7aabd6583290b12c2bd)`() const` <a id="structFRHAPI__InstanceInfo_1ad17baf0f6bbdb7aabd6583290b12c2bd"></a>

Checks whether Version_Optional has been set.

#### `public inline FDateTime & `[`GetCreated`](#structFRHAPI__InstanceInfo_1a07ec5c30c724547333c2d1085ad15100)`()` <a id="structFRHAPI__InstanceInfo_1a07ec5c30c724547333c2d1085ad15100"></a>

Gets the value of Created.

#### `public inline const FDateTime & `[`GetCreated`](#structFRHAPI__InstanceInfo_1ada100d2ca188d43064c28d0ee9412ee4)`() const` <a id="structFRHAPI__InstanceInfo_1ada100d2ca188d43064c28d0ee9412ee4"></a>

Gets the value of Created.

#### `public inline void `[`SetCreated`](#structFRHAPI__InstanceInfo_1a9c3c3f6c1c6456e0da139a175ed41f20)`(const FDateTime & NewValue)` <a id="structFRHAPI__InstanceInfo_1a9c3c3f6c1c6456e0da139a175ed41f20"></a>

Sets the value of Created.

#### `public inline void `[`SetCreated`](#structFRHAPI__InstanceInfo_1a46b7c799d35f7f593077b3dd876b8661)`(FDateTime && NewValue)` <a id="structFRHAPI__InstanceInfo_1a46b7c799d35f7f593077b3dd876b8661"></a>

Sets the value of Created using move semantics.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfo_1a67c0db888429a66887eb7ed71f28b7bf)`()` <a id="structFRHAPI__InstanceInfo_1a67c0db888429a66887eb7ed71f28b7bf"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfo_1a632569ab12e924a609b2d55a66d6aea9)`() const` <a id="structFRHAPI__InstanceInfo_1a632569ab12e924a609b2d55a66d6aea9"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfo_1af00b8f51099ff5dfe30c59d34f6d79eb)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1af00b8f51099ff5dfe30c59d34f6d79eb"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__InstanceInfo_1a046fc3e6195a4270741e60be0ef1564e)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__InstanceInfo_1a046fc3e6195a4270741e60be0ef1564e"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceInfo_1a2bb908a88c1be7d09fa974640b3177af)`()` <a id="structFRHAPI__InstanceInfo_1a2bb908a88c1be7d09fa974640b3177af"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceInfo_1a2cdcaa4314c526289334bc8792c48be0)`() const` <a id="structFRHAPI__InstanceInfo_1a2cdcaa4314c526289334bc8792c48be0"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__InstanceInfo_1a178760db9250951ee6f5187e5592034b)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__InstanceInfo_1a178760db9250951ee6f5187e5592034b"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__InstanceInfo_1acbc191b3c2ea0ff5f81c9223658dec04)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__InstanceInfo_1acbc191b3c2ea0ff5f81c9223658dec04"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__InstanceInfo_1adc5b55f5426979daa0d97885088268ed)`()` <a id="structFRHAPI__InstanceInfo_1adc5b55f5426979daa0d97885088268ed"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__InstanceInfo_1a050e601048f7a0b0fb36c483168558cb)`() const` <a id="structFRHAPI__InstanceInfo_1a050e601048f7a0b0fb36c483168558cb"></a>

Checks whether CustomData_Optional has been set.

#### `public inline ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__InstanceInfo_1a983b74b64675c2db4d58f45e18a24534)`()` <a id="structFRHAPI__InstanceInfo_1a983b74b64675c2db4d58f45e18a24534"></a>

Gets the value of InstanceHealth_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__InstanceInfo_1aa3840766cb2bbe3da0e644a762889e7d)`() const` <a id="structFRHAPI__InstanceInfo_1aa3840766cb2bbe3da0e644a762889e7d"></a>

Gets the value of InstanceHealth_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InstanceHealthStatus & `[`GetInstanceHealth`](#structFRHAPI__InstanceInfo_1ad7b0ff6e7e02083b3cf6edd8a3c8700a)`(const ERHAPI_InstanceHealthStatus & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1ad7b0ff6e7e02083b3cf6edd8a3c8700a"></a>

Gets the value of InstanceHealth_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceHealth`](#structFRHAPI__InstanceInfo_1a31b0f139b535515679628d25d591042b)`(ERHAPI_InstanceHealthStatus & OutValue) const` <a id="structFRHAPI__InstanceInfo_1a31b0f139b535515679628d25d591042b"></a>

Fills OutValue with the value of InstanceHealth_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__InstanceInfo_1aadabf0af6239022d7dbe31f4bfc55457)`()` <a id="structFRHAPI__InstanceInfo_1aadabf0af6239022d7dbe31f4bfc55457"></a>

Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InstanceHealthStatus * `[`GetInstanceHealthOrNull`](#structFRHAPI__InstanceInfo_1a02092868e7840a4fd5d0468283143500)`() const` <a id="structFRHAPI__InstanceInfo_1a02092868e7840a4fd5d0468283143500"></a>

Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceHealth`](#structFRHAPI__InstanceInfo_1a506746a79d63dac7327acc32cb7fa6ae)`(const ERHAPI_InstanceHealthStatus & NewValue)` <a id="structFRHAPI__InstanceInfo_1a506746a79d63dac7327acc32cb7fa6ae"></a>

Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true.

#### `public inline void `[`SetInstanceHealth`](#structFRHAPI__InstanceInfo_1ab9785f293dd320c98fe216ed6eaf8d53)`(ERHAPI_InstanceHealthStatus && NewValue)` <a id="structFRHAPI__InstanceInfo_1ab9785f293dd320c98fe216ed6eaf8d53"></a>

Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceHealth`](#structFRHAPI__InstanceInfo_1abd4b04df319d6b3af78cbd8a5c50ca9f)`()` <a id="structFRHAPI__InstanceInfo_1abd4b04df319d6b3af78cbd8a5c50ca9f"></a>

Clears the value of InstanceHealth_Optional and sets InstanceHealth_IsSet to false.

#### `public inline bool `[`IsInstanceHealthSet`](#structFRHAPI__InstanceInfo_1a8d47768ae1c776a5ca0f4bec1561edc3)`() const` <a id="structFRHAPI__InstanceInfo_1a8d47768ae1c776a5ca0f4bec1561edc3"></a>

Checks whether InstanceHealth_Optional has been set.

#### `public inline FString & `[`GetMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1a7de791593c3049049c2959d11614738c)`()` <a id="structFRHAPI__InstanceInfo_1a7de791593c3049049c2959d11614738c"></a>

Gets the value of MatchMakingProfileId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1a0d7f6ab9693a9a917927b749d27d1549)`() const` <a id="structFRHAPI__InstanceInfo_1a0d7f6ab9693a9a917927b749d27d1549"></a>

Gets the value of MatchMakingProfileId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1aa8ef9d5c7e3ff79a68293f07648da898)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1aa8ef9d5c7e3ff79a68293f07648da898"></a>

Gets the value of MatchMakingProfileId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1a42b7d63deb24a9f02d28f46324056918)`(FString & OutValue) const` <a id="structFRHAPI__InstanceInfo_1a42b7d63deb24a9f02d28f46324056918"></a>

Fills OutValue with the value of MatchMakingProfileId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchMakingProfileIdOrNull`](#structFRHAPI__InstanceInfo_1a674cca558e9cd91f625f85425df29c8f)`()` <a id="structFRHAPI__InstanceInfo_1a674cca558e9cd91f625f85425df29c8f"></a>

Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchMakingProfileIdOrNull`](#structFRHAPI__InstanceInfo_1a6da15cb0eb51f8b4f1b7fb110de67b8e)`() const` <a id="structFRHAPI__InstanceInfo_1a6da15cb0eb51f8b4f1b7fb110de67b8e"></a>

Returns a pointer to MatchMakingProfileId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1af73401a870ffb1be53ef897b4211a4b2)`(const FString & NewValue)` <a id="structFRHAPI__InstanceInfo_1af73401a870ffb1be53ef897b4211a4b2"></a>

Sets the value of MatchMakingProfileId_Optional and also sets MatchMakingProfileId_IsSet to true.

#### `public inline void `[`SetMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1aa21aff8a94c7a3954574d35a8a26d71e)`(FString && NewValue)` <a id="structFRHAPI__InstanceInfo_1aa21aff8a94c7a3954574d35a8a26d71e"></a>

Sets the value of MatchMakingProfileId_Optional and also sets MatchMakingProfileId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchMakingProfileId`](#structFRHAPI__InstanceInfo_1ae29004885f4edeb474dbee20fd20eaba)`()` <a id="structFRHAPI__InstanceInfo_1ae29004885f4edeb474dbee20fd20eaba"></a>

Clears the value of MatchMakingProfileId_Optional and sets MatchMakingProfileId_IsSet to false.

#### `public inline bool `[`IsMatchMakingProfileIdSet`](#structFRHAPI__InstanceInfo_1a917f085df24faf29bec1b587d1dfe07b)`() const` <a id="structFRHAPI__InstanceInfo_1a917f085df24faf29bec1b587d1dfe07b"></a>

Checks whether MatchMakingProfileId_Optional has been set.

#### `public inline FString & `[`GetMatchId`](#structFRHAPI__InstanceInfo_1a3c59aff10e566b6201f599b64c4b5c30)`()` <a id="structFRHAPI__InstanceInfo_1a3c59aff10e566b6201f599b64c4b5c30"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__InstanceInfo_1a39120ebf69b2c34b5c801e1cee8494c2)`() const` <a id="structFRHAPI__InstanceInfo_1a39120ebf69b2c34b5c801e1cee8494c2"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__InstanceInfo_1aa56062e6675f4259d9f95e071a707b04)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceInfo_1aa56062e6675f4259d9f95e071a707b04"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchId`](#structFRHAPI__InstanceInfo_1a19fd1b25246342616c77faba5b3b8b3a)`(FString & OutValue) const` <a id="structFRHAPI__InstanceInfo_1a19fd1b25246342616c77faba5b3b8b3a"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__InstanceInfo_1a8baa9e6637be7b1b39015703eebf3bd4)`()` <a id="structFRHAPI__InstanceInfo_1a8baa9e6637be7b1b39015703eebf3bd4"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__InstanceInfo_1a61f17ebcc7e355b184fef512776a6c97)`() const` <a id="structFRHAPI__InstanceInfo_1a61f17ebcc7e355b184fef512776a6c97"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchId`](#structFRHAPI__InstanceInfo_1a2abcf2628fa1ebc225e2f213aaf8943d)`(const FString & NewValue)` <a id="structFRHAPI__InstanceInfo_1a2abcf2628fa1ebc225e2f213aaf8943d"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline void `[`SetMatchId`](#structFRHAPI__InstanceInfo_1ad19957067cd2a6126e847fbd46b4e383)`(FString && NewValue)` <a id="structFRHAPI__InstanceInfo_1ad19957067cd2a6126e847fbd46b4e383"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__InstanceInfo_1a24595e50bdcf1728aa8b6558058c388a)`()` <a id="structFRHAPI__InstanceInfo_1a24595e50bdcf1728aa8b6558058c388a"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline bool `[`IsMatchIdSet`](#structFRHAPI__InstanceInfo_1a60dcbe3f5260209a23ba381b0d6310f3)`() const` <a id="structFRHAPI__InstanceInfo_1a60dcbe3f5260209a23ba381b0d6310f3"></a>

Checks whether MatchId_Optional has been set.

