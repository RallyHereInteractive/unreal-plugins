---
title: FRHAPI_InstanceInfo Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Information about the instance resource in a session.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[AllocationId_Optional](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a670c84ac627eb0148e3b2a094d2a563f)|Allocation ID for instance that's been spun up.|
|bool|[AllocationId_IsSet](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a3a96f0f93d1d98d9d95b51bca0840b62)|true if AllocationId_Optional has been set to a value|
|FString|[InstanceId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a69a816d14656c32583f847c0238b9174)|Unique ID for the host/session relationship.|
|ERHAPI_HostType|[HostType](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1aa4fa57c88e13cde9833ee29b000027a9)|Type of the host.|
|int32|[HostPlayerId_Optional](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a655893d75309d6c5d7d13c130192c60a)|Player ID of the host, if the host type is player.|
|bool|[HostPlayerId_IsSet](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1adac8c1cdc99823b434cced3a50abf3cf)|true if HostPlayerId_Optional has been set to a value|
|FGuid|[HostPlayerUuid_Optional](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a8af67b2308b97be4d9e4e561a9e39623)|Player UUID of the host, if the host type is player.|
|bool|[HostPlayerUuid_IsSet](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1ad6c2343cdd2cdaa72bb93c9ddd500346)|true if HostPlayerUuid_Optional has been set to a value|
|FString|[HostDedicatedProcessId_Optional](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a619c79477d6db4f713dbb601ca52f32c)|Unique ID for the process that is running this instance.|
|bool|[HostDedicatedProcessId_IsSet](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1acdf9bd2233cc01d4537bf2576d5d4391)|true if HostDedicatedProcessId_Optional has been set to a value|
|FString|[HostDedicatedServerId_Optional](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1adb1a41b1de0b1e457cc9cd22220a6c10)|Unique ID for the machine running the instance.|
|bool|[HostDedicatedServerId_IsSet](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a668423caac5dcade44b138c9468bfd6d)|true if HostDedicatedServerId_Optional has been set to a value|
|ERHAPI_InstanceJoinableStatus|[JoinStatus](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a540045ffc3cb213adbd178f75d8d8f4f)|Is the instance joinable at this time?|
|[FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams)|[JoinParams_Optional](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1aefc6530a0ba91ff0e221f296175f1911)||
|bool|[JoinParams_IsSet](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a99ccc5782466d7d8602f505042fbdde1)|true if JoinParams_Optional has been set to a value|
|[FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams)|[InstanceStartupParams_Optional](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a6bf1066eee396cfb6169ef12cb0f63a3)||
|bool|[InstanceStartupParams_IsSet](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a26229b0fc19afb7346a59522a95fe8f0)|true if InstanceStartupParams_Optional has been set to a value|
|FString|[Version_Optional](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a660e116a2617fc5b28a37c6ea34f93bb)|Product Client Version number. Used for compatibility checking with players.|
|bool|[Version_IsSet](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a0089cb3ba53b990e04ae69dae2eba0a0)|true if Version_Optional has been set to a value|
|FDateTime|[Created](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a93af18f5736b9faacdd3fc6301486647)|Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1af4865b361b57b399511fe0932cb6f066)|instance-defined custom data|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a03e270792bf6f6994f6656c65da324b8)|true if CustomData_Optional has been set to a value|
|ERHAPI_InstanceHealthStatus|[InstanceHealth_Optional](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a8e5826ce58477abb2788b69571438b48)|The current status of the instance.|
|bool|[InstanceHealth_IsSet](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a03be84bada6a81a63991b0f4513dd2b2)|true if InstanceHealth_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a6534ad7c92643f1e74f384ecea120524)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1ad647ee64ac9cdb174f6780b91bceda2e)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetAllocationId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1af406c06b9e864153010e790b5104f51b)()|Gets the value of AllocationId_Optional, regardless of it having been set.|
|const FString &|[GetAllocationId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1ac283bcaab47367154941fd32a51a0b44)()|Gets the value of AllocationId_Optional, regardless of it having been set.|
|const FString &|[GetAllocationId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1ae9404356d57942108cfb76e43fa25487)(const FString & DefaultValue)|Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetAllocationId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a8ba744444eb8302fda92a24a818534a5)(FString & OutValue)|Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetAllocationIdOrNull](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a5d37536867f853757ca88f1e97eeac51)()|Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetAllocationIdOrNull](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a6fc3b478077d55757324da2d24fbc8ab)()|Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetAllocationId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1ad7f8218d610756db98f4f037ce44db54)(FString NewValue)|Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.|
|void|[ClearAllocationId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a17455873e27cdaeefad64ade9f56b587)()|Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.|
|FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a18c54761dca0b26947c7d883a1abbaac)()|Gets the value of InstanceId.|
|const FString &|[GetInstanceId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a154eb50a6f8cf9404603c3e375169c15)()|Gets the value of InstanceId.|
|void|[SetInstanceId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a712ecfd5920ad5c15907e51f9698ed26)(FString NewValue)|Sets the value of InstanceId.|
|ERHAPI_HostType &|[GetHostType](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a8da5134593917a34f267c070738d690e)()|Gets the value of HostType.|
|const ERHAPI_HostType &|[GetHostType](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a143e42f2667631cfd3eef757d9ebbebf)()|Gets the value of HostType.|
|void|[SetHostType](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a9c91b1f15cbe4b4e3c3390e1610ca699)(ERHAPI_HostType NewValue)|Sets the value of HostType.|
|int32 &|[GetHostPlayerId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a0b6652288870477d9ff0cfbe3aea6adb)()|Gets the value of HostPlayerId_Optional, regardless of it having been set.|
|const int32 &|[GetHostPlayerId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1abd92c8a3926a4de83d78e4bf15f8706a)()|Gets the value of HostPlayerId_Optional, regardless of it having been set.|
|const int32 &|[GetHostPlayerId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a695a3efd18583c1e8b30774f2b9e1ced)(const int32 & DefaultValue)|Gets the value of HostPlayerId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetHostPlayerId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a830763d3e0fadf19c61f87ad687b3a0b)(int32 & OutValue)|Fills OutValue with the value of HostPlayerId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetHostPlayerIdOrNull](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1af020cad119e021fc175781d0b2d853a2)()|Returns a pointer to HostPlayerId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetHostPlayerIdOrNull](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a9288f104f3bcdae99203322665f67248)()|Returns a pointer to HostPlayerId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetHostPlayerId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a9896d1580219888bc9b4104f9eb2e59c)(int32 NewValue)|Sets the value of HostPlayerId_Optional and also sets HostPlayerId_IsSet to true.|
|void|[ClearHostPlayerId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1aacebdba3138a046478b14f4c0d34acaa)()|Clears the value of HostPlayerId_Optional and sets HostPlayerId_IsSet to false.|
|bool|[IsHostPlayerIdDefaultValue](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1aabe585ad639e35768dc024e49aa411fe)()|Returns true if HostPlayerId_Optional is set and matches the default value.|
|void|[SetHostPlayerIdToDefault](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a2715c138efedba7f2dbb48e69076fbcf)()|Sets the value of HostPlayerId_Optional to its default and also sets HostPlayerId_IsSet to true.|
|FGuid &|[GetHostPlayerUuid](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a043d691ac9a0db83acaa0613efbfea3a)()|Gets the value of HostPlayerUuid_Optional, regardless of it having been set.|
|const FGuid &|[GetHostPlayerUuid](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a3eff71200a32e3c4d539a7c36fe3b13b)()|Gets the value of HostPlayerUuid_Optional, regardless of it having been set.|
|const FGuid &|[GetHostPlayerUuid](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1ac77e7293596af4ace5eb6dd22cc95291)(const FGuid & DefaultValue)|Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetHostPlayerUuid](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a977e668da90c8d57f0325c8f6fcc7d51)(FGuid & OutValue)|Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.|
|FGuid *|[GetHostPlayerUuidOrNull](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a7d8c64c91e2de31c1d0535703a70b4d9)()|Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.|
|const FGuid *|[GetHostPlayerUuidOrNull](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1aaa6e9f6653b0fef91bd4e09412aca140)()|Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetHostPlayerUuid](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a04c7df40c9ea00f62c05e496d20f2e90)(FGuid NewValue)|Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.|
|void|[ClearHostPlayerUuid](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a3a9817e7888778f65ce3e24f146a8eb8)()|Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.|
|FString &|[GetHostDedicatedProcessId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a5fc73a07ce0fdf93a09101c0be14572d)()|Gets the value of HostDedicatedProcessId_Optional, regardless of it having been set.|
|const FString &|[GetHostDedicatedProcessId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a54a902e35a98954092bfa2f976def04b)()|Gets the value of HostDedicatedProcessId_Optional, regardless of it having been set.|
|const FString &|[GetHostDedicatedProcessId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a45295309e0f694fe61ec22e33da28780)(const FString & DefaultValue)|Gets the value of HostDedicatedProcessId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetHostDedicatedProcessId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a1d291b8c7cd76659d888af875ee0892f)(FString & OutValue)|Fills OutValue with the value of HostDedicatedProcessId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetHostDedicatedProcessIdOrNull](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1aa5098d03202def1f74ff3f8de8a011b0)()|Returns a pointer to HostDedicatedProcessId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetHostDedicatedProcessIdOrNull](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a0bbb0be7a12c70e108969b8dac0486f9)()|Returns a pointer to HostDedicatedProcessId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetHostDedicatedProcessId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1ab4bff559ff184ac14049aec5d90803b9)(FString NewValue)|Sets the value of HostDedicatedProcessId_Optional and also sets HostDedicatedProcessId_IsSet to true.|
|void|[ClearHostDedicatedProcessId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a0f9c42f75908fd7a719a5751d360646d)()|Clears the value of HostDedicatedProcessId_Optional and sets HostDedicatedProcessId_IsSet to false.|
|FString &|[GetHostDedicatedServerId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a3994b9018e2d35338a484a557eaab4a5)()|Gets the value of HostDedicatedServerId_Optional, regardless of it having been set.|
|const FString &|[GetHostDedicatedServerId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a4543e63450caf2b218153171e892edd2)()|Gets the value of HostDedicatedServerId_Optional, regardless of it having been set.|
|const FString &|[GetHostDedicatedServerId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1af2e107ea45921adce71e666a7a21b049)(const FString & DefaultValue)|Gets the value of HostDedicatedServerId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetHostDedicatedServerId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1ae18becab3f83d76873ad3bb2830ae69d)(FString & OutValue)|Fills OutValue with the value of HostDedicatedServerId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetHostDedicatedServerIdOrNull](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1ac6ec9f3bab08ef39b5f2ad6fa7f9e769)()|Returns a pointer to HostDedicatedServerId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetHostDedicatedServerIdOrNull](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1ab891a1b26ef284c385f1bed2c8c5e66b)()|Returns a pointer to HostDedicatedServerId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetHostDedicatedServerId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1ac1c605ed2793e6237785458a50476b79)(FString NewValue)|Sets the value of HostDedicatedServerId_Optional and also sets HostDedicatedServerId_IsSet to true.|
|void|[ClearHostDedicatedServerId](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1ac659005e87cb03a194cbdfccca754abf)()|Clears the value of HostDedicatedServerId_Optional and sets HostDedicatedServerId_IsSet to false.|
|ERHAPI_InstanceJoinableStatus &|[GetJoinStatus](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1abe78f8152b47515a7f877c2ec503dfd9)()|Gets the value of JoinStatus.|
|const ERHAPI_InstanceJoinableStatus &|[GetJoinStatus](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1af9c996aa878ee1ea47f8ba76902edf3a)()|Gets the value of JoinStatus.|
|void|[SetJoinStatus](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a5521bcc6f6ec28fee628900b0a5eb9ba)(ERHAPI_InstanceJoinableStatus NewValue)|Sets the value of JoinStatus.|
|[FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) &|[GetJoinParams](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1ae66b49473796d0e8c133e20594903a34)()|Gets the value of JoinParams_Optional, regardless of it having been set.|
|const [FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) &|[GetJoinParams](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1ad566fd7b798229c17377ff333023f6dc)()|Gets the value of JoinParams_Optional, regardless of it having been set.|
|const [FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) &|[GetJoinParams](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1ab111e70ca1edb3c4d03fb6469c6e6c90)(const [FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) & DefaultValue)|Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetJoinParams](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a45938b171ea35d078e9fd6b30e1080a1)([FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) & OutValue)|Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) *|[GetJoinParamsOrNull](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a1793e55dfba5d3d571280f2feac76dd2)()|Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) *|[GetJoinParamsOrNull](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a10b644db084f0258487a386207d56d92)()|Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetJoinParams](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a5e6b4f7e29fbdac3fdbffb3afce817ef)([FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) NewValue)|Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.|
|void|[ClearJoinParams](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a79d4953e7dc5d7d603a1bd3c0f078d99)()|Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.|
|[FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) &|[GetInstanceStartupParams](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a463691c3070675071dcec534bfe86785)()|Gets the value of InstanceStartupParams_Optional, regardless of it having been set.|
|const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) &|[GetInstanceStartupParams](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a7d15398759260666a632e1e7973ab709)()|Gets the value of InstanceStartupParams_Optional, regardless of it having been set.|
|const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) &|[GetInstanceStartupParams](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a01e716b0fbd9c08ce72ba410f88b0363)(const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) & DefaultValue)|Gets the value of InstanceStartupParams_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetInstanceStartupParams](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1ae1391ba5d4a7e883c435bdad1355e413)([FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) & OutValue)|Fills OutValue with the value of InstanceStartupParams_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) *|[GetInstanceStartupParamsOrNull](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a392aa0bdcc65317b337a6bbb1481eb2f)()|Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) *|[GetInstanceStartupParamsOrNull](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1aafe5e7418fa2ea84e6666be9fab0c1fc)()|Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetInstanceStartupParams](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a56730c9a269f8cd6b2134caaf3df04bb)([FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) NewValue)|Sets the value of InstanceStartupParams_Optional and also sets InstanceStartupParams_IsSet to true.|
|void|[ClearInstanceStartupParams](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1aef5d1a846e3bc2d56421f87d9e5595fd)()|Clears the value of InstanceStartupParams_Optional and sets InstanceStartupParams_IsSet to false.|
|FString &|[GetVersion](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a94905d54570928aa18e2e27754c07120)()|Gets the value of Version_Optional, regardless of it having been set.|
|const FString &|[GetVersion](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a61d0030f2059135070c5c6515f89d7aa)()|Gets the value of Version_Optional, regardless of it having been set.|
|const FString &|[GetVersion](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a3b6b79c92bac8ae086d7fbf716b05bf7)(const FString & DefaultValue)|Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetVersion](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1ae4ad200ba900ced02d5a154170d42694)(FString & OutValue)|Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetVersionOrNull](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1ace193d4148d67735184dd7b0a0a3cfba)()|Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetVersionOrNull](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1ae551d2147354e52137a1a52608ba80f9)()|Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetVersion](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a335086fda934db40b6217b06802bb5cf)(FString NewValue)|Sets the value of Version_Optional and also sets Version_IsSet to true.|
|void|[ClearVersion](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1af29e85d43799d74da9897137984fb0be)()|Clears the value of Version_Optional and sets Version_IsSet to false.|
|FDateTime &|[GetCreated](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1af4752269bbebaa67428b95d068c95794)()|Gets the value of Created.|
|const FDateTime &|[GetCreated](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1ac92e2a6de759a7fd00971d30f5ec2552)()|Gets the value of Created.|
|void|[SetCreated](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a26d08c984e8606c5109a08761812bd42)(FDateTime NewValue)|Sets the value of Created.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a1384bb92f83176f32258ed44cc7cba1c)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a12fb9b09751b65d311cb84c19fdf88eb)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1ae56d37f17e4d7b44cb8d7a340b5bd6f4)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a046fc3e6195a4270741e60be0ef1564e)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a22786189ec220666a6e14d71c6c851e3)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a41650e460c8f774984418299bb173551)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a6b371ffb911a4ff7d5f666de2505253d)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1adc5b55f5426979daa0d97885088268ed)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
|ERHAPI_InstanceHealthStatus &|[GetInstanceHealth](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1af222f46ab9fad6a96af788183b09b13e)()|Gets the value of InstanceHealth_Optional, regardless of it having been set.|
|const ERHAPI_InstanceHealthStatus &|[GetInstanceHealth](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1aeba44ed749fe71950fd4e689dc2f5924)()|Gets the value of InstanceHealth_Optional, regardless of it having been set.|
|const ERHAPI_InstanceHealthStatus &|[GetInstanceHealth](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1ad01a7c78279ff0f3be3c5ba4fe781efb)(const ERHAPI_InstanceHealthStatus & DefaultValue)|Gets the value of InstanceHealth_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetInstanceHealth](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a31b0f139b535515679628d25d591042b)(ERHAPI_InstanceHealthStatus & OutValue)|Fills OutValue with the value of InstanceHealth_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_InstanceHealthStatus *|[GetInstanceHealthOrNull](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1ae0b13879ebffdb546204bd5d46ee46ea)()|Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_InstanceHealthStatus *|[GetInstanceHealthOrNull](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1af278ac0b3df4a018f7683e0fb52a1cbe)()|Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetInstanceHealth](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1a487a71d1326071756c253177e1572c4d)(ERHAPI_InstanceHealthStatus NewValue)|Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true.|
|void|[ClearInstanceHealth](/unreal-plugins/all/structfrhapi__instanceinfo/#structFRHAPI__InstanceInfo_1abd4b04df319d6b3af78cbd8a5c50ca9f)()|Clears the value of InstanceHealth_Optional and sets InstanceHealth_IsSet to false.|
## Public Attributes



### `AllocationId_Optional` <a id="structFRHAPI__InstanceInfo_1a670c84ac627eb0148e3b2a094d2a563f"></a>

`FString FRHAPI_InstanceInfo::AllocationId_Optional`

Allocation ID for instance that's been spun up.




### `AllocationId_IsSet` <a id="structFRHAPI__InstanceInfo_1a3a96f0f93d1d98d9d95b51bca0840b62"></a>

`bool FRHAPI_InstanceInfo::AllocationId_IsSet`

true if AllocationId_Optional has been set to a value




### `InstanceId` <a id="structFRHAPI__InstanceInfo_1a69a816d14656c32583f847c0238b9174"></a>

`FString FRHAPI_InstanceInfo::InstanceId`

Unique ID for the host/session relationship.




### `HostType` <a id="structFRHAPI__InstanceInfo_1aa4fa57c88e13cde9833ee29b000027a9"></a>

`ERHAPI_HostType FRHAPI_InstanceInfo::HostType`

Type of the host.




### `HostPlayerId_Optional` <a id="structFRHAPI__InstanceInfo_1a655893d75309d6c5d7d13c130192c60a"></a>

`int32 FRHAPI_InstanceInfo::HostPlayerId_Optional`

Player ID of the host, if the host type is player.




### `HostPlayerId_IsSet` <a id="structFRHAPI__InstanceInfo_1adac8c1cdc99823b434cced3a50abf3cf"></a>

`bool FRHAPI_InstanceInfo::HostPlayerId_IsSet`

true if HostPlayerId_Optional has been set to a value




### `HostPlayerUuid_Optional` <a id="structFRHAPI__InstanceInfo_1a8af67b2308b97be4d9e4e561a9e39623"></a>

`FGuid FRHAPI_InstanceInfo::HostPlayerUuid_Optional`

Player UUID of the host, if the host type is player.




### `HostPlayerUuid_IsSet` <a id="structFRHAPI__InstanceInfo_1ad6c2343cdd2cdaa72bb93c9ddd500346"></a>

`bool FRHAPI_InstanceInfo::HostPlayerUuid_IsSet`

true if HostPlayerUuid_Optional has been set to a value




### `HostDedicatedProcessId_Optional` <a id="structFRHAPI__InstanceInfo_1a619c79477d6db4f713dbb601ca52f32c"></a>

`FString FRHAPI_InstanceInfo::HostDedicatedProcessId_Optional`

Unique ID for the process that is running this instance.




### `HostDedicatedProcessId_IsSet` <a id="structFRHAPI__InstanceInfo_1acdf9bd2233cc01d4537bf2576d5d4391"></a>

`bool FRHAPI_InstanceInfo::HostDedicatedProcessId_IsSet`

true if HostDedicatedProcessId_Optional has been set to a value




### `HostDedicatedServerId_Optional` <a id="structFRHAPI__InstanceInfo_1adb1a41b1de0b1e457cc9cd22220a6c10"></a>

`FString FRHAPI_InstanceInfo::HostDedicatedServerId_Optional`

Unique ID for the machine running the instance.




### `HostDedicatedServerId_IsSet` <a id="structFRHAPI__InstanceInfo_1a668423caac5dcade44b138c9468bfd6d"></a>

`bool FRHAPI_InstanceInfo::HostDedicatedServerId_IsSet`

true if HostDedicatedServerId_Optional has been set to a value




### `JoinStatus` <a id="structFRHAPI__InstanceInfo_1a540045ffc3cb213adbd178f75d8d8f4f"></a>

`ERHAPI_InstanceJoinableStatus FRHAPI_InstanceInfo::JoinStatus`

Is the instance joinable at this time?




### `JoinParams_Optional` <a id="structFRHAPI__InstanceInfo_1aefc6530a0ba91ff0e221f296175f1911"></a>

`FRHAPI_JoinParams FRHAPI_InstanceInfo::JoinParams_Optional`






### `JoinParams_IsSet` <a id="structFRHAPI__InstanceInfo_1a99ccc5782466d7d8602f505042fbdde1"></a>

`bool FRHAPI_InstanceInfo::JoinParams_IsSet`

true if JoinParams_Optional has been set to a value




### `InstanceStartupParams_Optional` <a id="structFRHAPI__InstanceInfo_1a6bf1066eee396cfb6169ef12cb0f63a3"></a>

`FRHAPI_InstanceStartupParams FRHAPI_InstanceInfo::InstanceStartupParams_Optional`






### `InstanceStartupParams_IsSet` <a id="structFRHAPI__InstanceInfo_1a26229b0fc19afb7346a59522a95fe8f0"></a>

`bool FRHAPI_InstanceInfo::InstanceStartupParams_IsSet`

true if InstanceStartupParams_Optional has been set to a value




### `Version_Optional` <a id="structFRHAPI__InstanceInfo_1a660e116a2617fc5b28a37c6ea34f93bb"></a>

`FString FRHAPI_InstanceInfo::Version_Optional`

Product Client Version number. Used for compatibility checking with players.




### `Version_IsSet` <a id="structFRHAPI__InstanceInfo_1a0089cb3ba53b990e04ae69dae2eba0a0"></a>

`bool FRHAPI_InstanceInfo::Version_IsSet`

true if Version_Optional has been set to a value




### `Created` <a id="structFRHAPI__InstanceInfo_1a93af18f5736b9faacdd3fc6301486647"></a>

`FDateTime FRHAPI_InstanceInfo::Created`

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.




### `CustomData_Optional` <a id="structFRHAPI__InstanceInfo_1af4865b361b57b399511fe0932cb6f066"></a>

`TMap<FString, FString> FRHAPI_InstanceInfo::CustomData_Optional`

instance-defined custom data




### `CustomData_IsSet` <a id="structFRHAPI__InstanceInfo_1a03e270792bf6f6994f6656c65da324b8"></a>

`bool FRHAPI_InstanceInfo::CustomData_IsSet`

true if CustomData_Optional has been set to a value




### `InstanceHealth_Optional` <a id="structFRHAPI__InstanceInfo_1a8e5826ce58477abb2788b69571438b48"></a>

`ERHAPI_InstanceHealthStatus FRHAPI_InstanceInfo::InstanceHealth_Optional`

The current status of the instance.




### `InstanceHealth_IsSet` <a id="structFRHAPI__InstanceInfo_1a03be84bada6a81a63991b0f4513dd2b2"></a>

`bool FRHAPI_InstanceInfo::InstanceHealth_IsSet`

true if InstanceHealth_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__InstanceInfo_1a6534ad7c92643f1e74f384ecea120524"></a>

bool FromJson(const TSharedPtr< FJsonValue > & JsonValue)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|

#### Description

Fills this object with data from the passed in JSON.


#### Parameters

JsonValue
: Data from the API call.

#### Returns
true if parsing of the JSON data was successful. 



### `WriteJson` <a id="structFRHAPI__InstanceInfo_1ad647ee64ac9cdb174f6780b91bceda2e"></a>

void WriteJson(TSharedRef< TJsonWriter<>> & Writer)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|

#### Description

Writes the data from this object into the specified JSON Writer stream.


#### Parameters

Writer
: JSON Writer stream to push . 



### `GetAllocationId` <a id="structFRHAPI__InstanceInfo_1af406c06b9e864153010e790b5104f51b"></a>

FString & GetAllocationId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AllocationId_Optional, regardless of it having been set.




### `GetAllocationId` <a id="structFRHAPI__InstanceInfo_1ac283bcaab47367154941fd32a51a0b44"></a>

const FString & GetAllocationId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of AllocationId_Optional, regardless of it having been set.




### `GetAllocationId` <a id="structFRHAPI__InstanceInfo_1ae9404356d57942108cfb76e43fa25487"></a>

const FString & GetAllocationId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetAllocationId` <a id="structFRHAPI__InstanceInfo_1a8ba744444eb8302fda92a24a818534a5"></a>

bool GetAllocationId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.




### `GetAllocationIdOrNull` <a id="structFRHAPI__InstanceInfo_1a5d37536867f853757ca88f1e97eeac51"></a>

FString * GetAllocationIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.




### `GetAllocationIdOrNull` <a id="structFRHAPI__InstanceInfo_1a6fc3b478077d55757324da2d24fbc8ab"></a>

const FString * GetAllocationIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.




### `SetAllocationId` <a id="structFRHAPI__InstanceInfo_1ad7f8218d610756db98f4f037ce44db54"></a>

void SetAllocationId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.




### `ClearAllocationId` <a id="structFRHAPI__InstanceInfo_1a17455873e27cdaeefad64ade9f56b587"></a>

void ClearAllocationId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.




### `GetInstanceId` <a id="structFRHAPI__InstanceInfo_1a18c54761dca0b26947c7d883a1abbaac"></a>

FString & GetInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceId.




### `GetInstanceId` <a id="structFRHAPI__InstanceInfo_1a154eb50a6f8cf9404603c3e375169c15"></a>

const FString & GetInstanceId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceId.




### `SetInstanceId` <a id="structFRHAPI__InstanceInfo_1a712ecfd5920ad5c15907e51f9698ed26"></a>

void SetInstanceId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of InstanceId.




### `GetHostType` <a id="structFRHAPI__InstanceInfo_1a8da5134593917a34f267c070738d690e"></a>

ERHAPI_HostType & GetHostType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of HostType.




### `GetHostType` <a id="structFRHAPI__InstanceInfo_1a143e42f2667631cfd3eef757d9ebbebf"></a>

const ERHAPI_HostType & GetHostType()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of HostType.




### `SetHostType` <a id="structFRHAPI__InstanceInfo_1a9c91b1f15cbe4b4e3c3390e1610ca699"></a>

void SetHostType(ERHAPI_HostType NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_HostType|NewValue|

#### Description

Sets the value of HostType.




### `GetHostPlayerId` <a id="structFRHAPI__InstanceInfo_1a0b6652288870477d9ff0cfbe3aea6adb"></a>

int32 & GetHostPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of HostPlayerId_Optional, regardless of it having been set.




### `GetHostPlayerId` <a id="structFRHAPI__InstanceInfo_1abd92c8a3926a4de83d78e4bf15f8706a"></a>

const int32 & GetHostPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of HostPlayerId_Optional, regardless of it having been set.




### `GetHostPlayerId` <a id="structFRHAPI__InstanceInfo_1a695a3efd18583c1e8b30774f2b9e1ced"></a>

const int32 & GetHostPlayerId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of HostPlayerId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetHostPlayerId` <a id="structFRHAPI__InstanceInfo_1a830763d3e0fadf19c61f87ad687b3a0b"></a>

bool GetHostPlayerId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of HostPlayerId_Optional and returns true if it has been set, otherwise returns false.




### `GetHostPlayerIdOrNull` <a id="structFRHAPI__InstanceInfo_1af020cad119e021fc175781d0b2d853a2"></a>

int32 * GetHostPlayerIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to HostPlayerId_Optional, if it has been set, otherwise returns nullptr.




### `GetHostPlayerIdOrNull` <a id="structFRHAPI__InstanceInfo_1a9288f104f3bcdae99203322665f67248"></a>

const int32 * GetHostPlayerIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to HostPlayerId_Optional, if it has been set, otherwise returns nullptr.




### `SetHostPlayerId` <a id="structFRHAPI__InstanceInfo_1a9896d1580219888bc9b4104f9eb2e59c"></a>

void SetHostPlayerId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of HostPlayerId_Optional and also sets HostPlayerId_IsSet to true.




### `ClearHostPlayerId` <a id="structFRHAPI__InstanceInfo_1aacebdba3138a046478b14f4c0d34acaa"></a>

void ClearHostPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of HostPlayerId_Optional and sets HostPlayerId_IsSet to false.




### `IsHostPlayerIdDefaultValue` <a id="structFRHAPI__InstanceInfo_1aabe585ad639e35768dc024e49aa411fe"></a>

bool IsHostPlayerIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if HostPlayerId_Optional is set and matches the default value.




### `SetHostPlayerIdToDefault` <a id="structFRHAPI__InstanceInfo_1a2715c138efedba7f2dbb48e69076fbcf"></a>

void SetHostPlayerIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of HostPlayerId_Optional to its default and also sets HostPlayerId_IsSet to true.




### `GetHostPlayerUuid` <a id="structFRHAPI__InstanceInfo_1a043d691ac9a0db83acaa0613efbfea3a"></a>

FGuid & GetHostPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.




### `GetHostPlayerUuid` <a id="structFRHAPI__InstanceInfo_1a3eff71200a32e3c4d539a7c36fe3b13b"></a>

const FGuid & GetHostPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.




### `GetHostPlayerUuid` <a id="structFRHAPI__InstanceInfo_1ac77e7293596af4ace5eb6dd22cc95291"></a>

const FGuid & GetHostPlayerUuid(const FGuid & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|DefaultValue|

#### Description

Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetHostPlayerUuid` <a id="structFRHAPI__InstanceInfo_1a977e668da90c8d57f0325c8f6fcc7d51"></a>

bool GetHostPlayerUuid(FGuid & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid &|OutValue|

#### Description

Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.




### `GetHostPlayerUuidOrNull` <a id="structFRHAPI__InstanceInfo_1a7d8c64c91e2de31c1d0535703a70b4d9"></a>

FGuid * GetHostPlayerUuidOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.




### `GetHostPlayerUuidOrNull` <a id="structFRHAPI__InstanceInfo_1aaa6e9f6653b0fef91bd4e09412aca140"></a>

const FGuid * GetHostPlayerUuidOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.




### `SetHostPlayerUuid` <a id="structFRHAPI__InstanceInfo_1a04c7df40c9ea00f62c05e496d20f2e90"></a>

void SetHostPlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.




### `ClearHostPlayerUuid` <a id="structFRHAPI__InstanceInfo_1a3a9817e7888778f65ce3e24f146a8eb8"></a>

void ClearHostPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.




### `GetHostDedicatedProcessId` <a id="structFRHAPI__InstanceInfo_1a5fc73a07ce0fdf93a09101c0be14572d"></a>

FString & GetHostDedicatedProcessId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of HostDedicatedProcessId_Optional, regardless of it having been set.




### `GetHostDedicatedProcessId` <a id="structFRHAPI__InstanceInfo_1a54a902e35a98954092bfa2f976def04b"></a>

const FString & GetHostDedicatedProcessId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of HostDedicatedProcessId_Optional, regardless of it having been set.




### `GetHostDedicatedProcessId` <a id="structFRHAPI__InstanceInfo_1a45295309e0f694fe61ec22e33da28780"></a>

const FString & GetHostDedicatedProcessId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of HostDedicatedProcessId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetHostDedicatedProcessId` <a id="structFRHAPI__InstanceInfo_1a1d291b8c7cd76659d888af875ee0892f"></a>

bool GetHostDedicatedProcessId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of HostDedicatedProcessId_Optional and returns true if it has been set, otherwise returns false.




### `GetHostDedicatedProcessIdOrNull` <a id="structFRHAPI__InstanceInfo_1aa5098d03202def1f74ff3f8de8a011b0"></a>

FString * GetHostDedicatedProcessIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to HostDedicatedProcessId_Optional, if it has been set, otherwise returns nullptr.




### `GetHostDedicatedProcessIdOrNull` <a id="structFRHAPI__InstanceInfo_1a0bbb0be7a12c70e108969b8dac0486f9"></a>

const FString * GetHostDedicatedProcessIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to HostDedicatedProcessId_Optional, if it has been set, otherwise returns nullptr.




### `SetHostDedicatedProcessId` <a id="structFRHAPI__InstanceInfo_1ab4bff559ff184ac14049aec5d90803b9"></a>

void SetHostDedicatedProcessId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of HostDedicatedProcessId_Optional and also sets HostDedicatedProcessId_IsSet to true.




### `ClearHostDedicatedProcessId` <a id="structFRHAPI__InstanceInfo_1a0f9c42f75908fd7a719a5751d360646d"></a>

void ClearHostDedicatedProcessId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of HostDedicatedProcessId_Optional and sets HostDedicatedProcessId_IsSet to false.




### `GetHostDedicatedServerId` <a id="structFRHAPI__InstanceInfo_1a3994b9018e2d35338a484a557eaab4a5"></a>

FString & GetHostDedicatedServerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of HostDedicatedServerId_Optional, regardless of it having been set.




### `GetHostDedicatedServerId` <a id="structFRHAPI__InstanceInfo_1a4543e63450caf2b218153171e892edd2"></a>

const FString & GetHostDedicatedServerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of HostDedicatedServerId_Optional, regardless of it having been set.




### `GetHostDedicatedServerId` <a id="structFRHAPI__InstanceInfo_1af2e107ea45921adce71e666a7a21b049"></a>

const FString & GetHostDedicatedServerId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of HostDedicatedServerId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetHostDedicatedServerId` <a id="structFRHAPI__InstanceInfo_1ae18becab3f83d76873ad3bb2830ae69d"></a>

bool GetHostDedicatedServerId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of HostDedicatedServerId_Optional and returns true if it has been set, otherwise returns false.




### `GetHostDedicatedServerIdOrNull` <a id="structFRHAPI__InstanceInfo_1ac6ec9f3bab08ef39b5f2ad6fa7f9e769"></a>

FString * GetHostDedicatedServerIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to HostDedicatedServerId_Optional, if it has been set, otherwise returns nullptr.




### `GetHostDedicatedServerIdOrNull` <a id="structFRHAPI__InstanceInfo_1ab891a1b26ef284c385f1bed2c8c5e66b"></a>

const FString * GetHostDedicatedServerIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to HostDedicatedServerId_Optional, if it has been set, otherwise returns nullptr.




### `SetHostDedicatedServerId` <a id="structFRHAPI__InstanceInfo_1ac1c605ed2793e6237785458a50476b79"></a>

void SetHostDedicatedServerId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of HostDedicatedServerId_Optional and also sets HostDedicatedServerId_IsSet to true.




### `ClearHostDedicatedServerId` <a id="structFRHAPI__InstanceInfo_1ac659005e87cb03a194cbdfccca754abf"></a>

void ClearHostDedicatedServerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of HostDedicatedServerId_Optional and sets HostDedicatedServerId_IsSet to false.




### `GetJoinStatus` <a id="structFRHAPI__InstanceInfo_1abe78f8152b47515a7f877c2ec503dfd9"></a>

ERHAPI_InstanceJoinableStatus & GetJoinStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of JoinStatus.




### `GetJoinStatus` <a id="structFRHAPI__InstanceInfo_1af9c996aa878ee1ea47f8ba76902edf3a"></a>

const ERHAPI_InstanceJoinableStatus & GetJoinStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of JoinStatus.




### `SetJoinStatus` <a id="structFRHAPI__InstanceInfo_1a5521bcc6f6ec28fee628900b0a5eb9ba"></a>

void SetJoinStatus(ERHAPI_InstanceJoinableStatus NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InstanceJoinableStatus|NewValue|

#### Description

Sets the value of JoinStatus.




### `GetJoinParams` <a id="structFRHAPI__InstanceInfo_1ae66b49473796d0e8c133e20594903a34"></a>

[FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) & GetJoinParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of JoinParams_Optional, regardless of it having been set.




### `GetJoinParams` <a id="structFRHAPI__InstanceInfo_1ad566fd7b798229c17377ff333023f6dc"></a>

const [FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) & GetJoinParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of JoinParams_Optional, regardless of it having been set.




### `GetJoinParams` <a id="structFRHAPI__InstanceInfo_1ab111e70ca1edb3c4d03fb6469c6e6c90"></a>

const [FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) & GetJoinParams(const [FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) &|DefaultValue|

#### Description

Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetJoinParams` <a id="structFRHAPI__InstanceInfo_1a45938b171ea35d078e9fd6b30e1080a1"></a>

bool GetJoinParams([FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) &|OutValue|

#### Description

Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.




### `GetJoinParamsOrNull` <a id="structFRHAPI__InstanceInfo_1a1793e55dfba5d3d571280f2feac76dd2"></a>

[FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) * GetJoinParamsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.




### `GetJoinParamsOrNull` <a id="structFRHAPI__InstanceInfo_1a10b644db084f0258487a386207d56d92"></a>

const [FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) * GetJoinParamsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.




### `SetJoinParams` <a id="structFRHAPI__InstanceInfo_1a5e6b4f7e29fbdac3fdbffb3afce817ef"></a>

void SetJoinParams([FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_JoinParams](/unreal-plugins/all/structfrhapi__joinparams/#structFRHAPI__JoinParams)|NewValue|

#### Description

Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.




### `ClearJoinParams` <a id="structFRHAPI__InstanceInfo_1a79d4953e7dc5d7d603a1bd3c0f078d99"></a>

void ClearJoinParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.




### `GetInstanceStartupParams` <a id="structFRHAPI__InstanceInfo_1a463691c3070675071dcec534bfe86785"></a>

[FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) & GetInstanceStartupParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceStartupParams_Optional, regardless of it having been set.




### `GetInstanceStartupParams` <a id="structFRHAPI__InstanceInfo_1a7d15398759260666a632e1e7973ab709"></a>

const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) & GetInstanceStartupParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceStartupParams_Optional, regardless of it having been set.




### `GetInstanceStartupParams` <a id="structFRHAPI__InstanceInfo_1a01e716b0fbd9c08ce72ba410f88b0363"></a>

const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) & GetInstanceStartupParams(const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) &|DefaultValue|

#### Description

Gets the value of InstanceStartupParams_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetInstanceStartupParams` <a id="structFRHAPI__InstanceInfo_1ae1391ba5d4a7e883c435bdad1355e413"></a>

bool GetInstanceStartupParams([FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) &|OutValue|

#### Description

Fills OutValue with the value of InstanceStartupParams_Optional and returns true if it has been set, otherwise returns false.




### `GetInstanceStartupParamsOrNull` <a id="structFRHAPI__InstanceInfo_1a392aa0bdcc65317b337a6bbb1481eb2f"></a>

[FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) * GetInstanceStartupParamsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.




### `GetInstanceStartupParamsOrNull` <a id="structFRHAPI__InstanceInfo_1aafe5e7418fa2ea84e6666be9fab0c1fc"></a>

const [FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) * GetInstanceStartupParamsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.




### `SetInstanceStartupParams` <a id="structFRHAPI__InstanceInfo_1a56730c9a269f8cd6b2134caaf3df04bb"></a>

void SetInstanceStartupParams([FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_InstanceStartupParams](/unreal-plugins/all/structfrhapi__instancestartupparams/#structFRHAPI__InstanceStartupParams)|NewValue|

#### Description

Sets the value of InstanceStartupParams_Optional and also sets InstanceStartupParams_IsSet to true.




### `ClearInstanceStartupParams` <a id="structFRHAPI__InstanceInfo_1aef5d1a846e3bc2d56421f87d9e5595fd"></a>

void ClearInstanceStartupParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of InstanceStartupParams_Optional and sets InstanceStartupParams_IsSet to false.




### `GetVersion` <a id="structFRHAPI__InstanceInfo_1a94905d54570928aa18e2e27754c07120"></a>

FString & GetVersion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Version_Optional, regardless of it having been set.




### `GetVersion` <a id="structFRHAPI__InstanceInfo_1a61d0030f2059135070c5c6515f89d7aa"></a>

const FString & GetVersion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Version_Optional, regardless of it having been set.




### `GetVersion` <a id="structFRHAPI__InstanceInfo_1a3b6b79c92bac8ae086d7fbf716b05bf7"></a>

const FString & GetVersion(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetVersion` <a id="structFRHAPI__InstanceInfo_1ae4ad200ba900ced02d5a154170d42694"></a>

bool GetVersion(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.




### `GetVersionOrNull` <a id="structFRHAPI__InstanceInfo_1ace193d4148d67735184dd7b0a0a3cfba"></a>

FString * GetVersionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.




### `GetVersionOrNull` <a id="structFRHAPI__InstanceInfo_1ae551d2147354e52137a1a52608ba80f9"></a>

const FString * GetVersionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.




### `SetVersion` <a id="structFRHAPI__InstanceInfo_1a335086fda934db40b6217b06802bb5cf"></a>

void SetVersion(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Version_Optional and also sets Version_IsSet to true.




### `ClearVersion` <a id="structFRHAPI__InstanceInfo_1af29e85d43799d74da9897137984fb0be"></a>

void ClearVersion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Version_Optional and sets Version_IsSet to false.




### `GetCreated` <a id="structFRHAPI__InstanceInfo_1af4752269bbebaa67428b95d068c95794"></a>

FDateTime & GetCreated()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Created.




### `GetCreated` <a id="structFRHAPI__InstanceInfo_1ac92e2a6de759a7fd00971d30f5ec2552"></a>

const FDateTime & GetCreated()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Created.




### `SetCreated` <a id="structFRHAPI__InstanceInfo_1a26d08c984e8606c5109a08761812bd42"></a>

void SetCreated(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of Created.




### `GetCustomData` <a id="structFRHAPI__InstanceInfo_1a1384bb92f83176f32258ed44cc7cba1c"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__InstanceInfo_1a12fb9b09751b65d311cb84c19fdf88eb"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__InstanceInfo_1ae56d37f17e4d7b44cb8d7a340b5bd6f4"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__InstanceInfo_1a046fc3e6195a4270741e60be0ef1564e"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__InstanceInfo_1a22786189ec220666a6e14d71c6c851e3"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__InstanceInfo_1a41650e460c8f774984418299bb173551"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__InstanceInfo_1a6b371ffb911a4ff7d5f666de2505253d"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__InstanceInfo_1adc5b55f5426979daa0d97885088268ed"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.




### `GetInstanceHealth` <a id="structFRHAPI__InstanceInfo_1af222f46ab9fad6a96af788183b09b13e"></a>

ERHAPI_InstanceHealthStatus & GetInstanceHealth()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceHealth_Optional, regardless of it having been set.




### `GetInstanceHealth` <a id="structFRHAPI__InstanceInfo_1aeba44ed749fe71950fd4e689dc2f5924"></a>

const ERHAPI_InstanceHealthStatus & GetInstanceHealth()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InstanceHealth_Optional, regardless of it having been set.




### `GetInstanceHealth` <a id="structFRHAPI__InstanceInfo_1ad01a7c78279ff0f3be3c5ba4fe781efb"></a>

const ERHAPI_InstanceHealthStatus & GetInstanceHealth(const ERHAPI_InstanceHealthStatus & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_InstanceHealthStatus &|DefaultValue|

#### Description

Gets the value of InstanceHealth_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetInstanceHealth` <a id="structFRHAPI__InstanceInfo_1a31b0f139b535515679628d25d591042b"></a>

bool GetInstanceHealth(ERHAPI_InstanceHealthStatus & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InstanceHealthStatus &|OutValue|

#### Description

Fills OutValue with the value of InstanceHealth_Optional and returns true if it has been set, otherwise returns false.




### `GetInstanceHealthOrNull` <a id="structFRHAPI__InstanceInfo_1ae0b13879ebffdb546204bd5d46ee46ea"></a>

ERHAPI_InstanceHealthStatus * GetInstanceHealthOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.




### `GetInstanceHealthOrNull` <a id="structFRHAPI__InstanceInfo_1af278ac0b3df4a018f7683e0fb52a1cbe"></a>

const ERHAPI_InstanceHealthStatus * GetInstanceHealthOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InstanceHealth_Optional, if it has been set, otherwise returns nullptr.




### `SetInstanceHealth` <a id="structFRHAPI__InstanceInfo_1a487a71d1326071756c253177e1572c4d"></a>

void SetInstanceHealth(ERHAPI_InstanceHealthStatus NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_InstanceHealthStatus|NewValue|

#### Description

Sets the value of InstanceHealth_Optional and also sets InstanceHealth_IsSet to true.




### `ClearInstanceHealth` <a id="structFRHAPI__InstanceInfo_1abd4b04df319d6b3af78cbd8a5c50ca9f"></a>

void ClearInstanceHealth()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of InstanceHealth_Optional and sets InstanceHealth_IsSet to false.





