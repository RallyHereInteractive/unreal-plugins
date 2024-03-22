# RHAPI_PlayerReport <a id="group__RHAPI__PlayerReport"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerReport`](#structFRHAPI__PlayerReport) | 

## struct `FRHAPI_PlayerReport` <a id="structFRHAPI__PlayerReport"></a>

```
struct FRHAPI_PlayerReport
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`ReportId`](#structFRHAPI__PlayerReport_1a93c9d12fc7e83a4a07602d3b3e58d8e5) | Unique ID for the player report.
`public FGuid `[`SourcePlayerUuid_Optional`](#structFRHAPI__PlayerReport_1a08fcb28e363b0a610b2094345fef71e8) | 
`public bool `[`SourcePlayerUuid_IsSet`](#structFRHAPI__PlayerReport_1a94013524f43688f57365448ab547f541) | true if SourcePlayerUuid_Optional has been set to a value
`public int32 `[`SourcePlayerId_Optional`](#structFRHAPI__PlayerReport_1a29877b89c3d77b314fa88b0a36498b2e) | 
`public bool `[`SourcePlayerId_IsSet`](#structFRHAPI__PlayerReport_1aae1e2d68510288a651f3c428885584ce) | true if SourcePlayerId_Optional has been set to a value
`public FGuid `[`TargetPlayerUuid`](#structFRHAPI__PlayerReport_1ac7f4d142d3bcdb3fe0f0514190135171) | 
`public int32 `[`TargetPlayerId_Optional`](#structFRHAPI__PlayerReport_1a77af8cbee84b001e9392e1e98e1b3cbb) | 
`public bool `[`TargetPlayerId_IsSet`](#structFRHAPI__PlayerReport_1a044e3dabe75fcf0fe113bf41889b7a78) | true if TargetPlayerId_Optional has been set to a value
`public ERHAPI_ReportReason `[`Reason`](#structFRHAPI__PlayerReport_1ae3feb519772ec26847bab22bfea8f9c9) | The reason for the report.
`public FString `[`Description_Optional`](#structFRHAPI__PlayerReport_1a9a2aae9e03ee80fe7c057261fa5f4a08) | 
`public bool `[`Description_IsSet`](#structFRHAPI__PlayerReport_1a21ca401a324d2c44569fe1d39f567983) | true if Description_Optional has been set to a value
`public FString `[`SessionId_Optional`](#structFRHAPI__PlayerReport_1ac5f256086a91a6e57a0d2108d4a80e65) | 
`public bool `[`SessionId_IsSet`](#structFRHAPI__PlayerReport_1a6ba5108860799819379363ea7a158c25) | true if SessionId_Optional has been set to a value
`public FString `[`InstanceId_Optional`](#structFRHAPI__PlayerReport_1a693fd4fc9c39e2c2acb9df94ead6e63d) | 
`public bool `[`InstanceId_IsSet`](#structFRHAPI__PlayerReport_1af6c6bde55f0204d93fefb5736905b2d2) | true if InstanceId_Optional has been set to a value
`public FString `[`MatchId_Optional`](#structFRHAPI__PlayerReport_1a51b57e66148af98ebe8a417a1934ebcd) | 
`public bool `[`MatchId_IsSet`](#structFRHAPI__PlayerReport_1a1329755fd98ef7f472e74f80292c613a) | true if MatchId_Optional has been set to a value
`public FString `[`MatchSegment_Optional`](#structFRHAPI__PlayerReport_1a89059c798981790d55bc8139f471e6da) | 
`public bool `[`MatchSegment_IsSet`](#structFRHAPI__PlayerReport_1a1dd8140a5aa65f4811c2792939fcab8c) | true if MatchSegment_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerReport_1a80153d5a0c0581838a4dd5d0f4fd0599) | Custom data for the report.
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerReport_1a0abbc656b7e49086f1d00fbf6c7efabd) | true if CustomData_Optional has been set to a value
`public FDateTime `[`Created_Optional`](#structFRHAPI__PlayerReport_1a2c81b6a985bb83ebde61d6aab1cbafea) | 
`public bool `[`Created_IsSet`](#structFRHAPI__PlayerReport_1a700bd42011d3674794ef12e43464e2fc) | true if Created_Optional has been set to a value
`public FDateTime `[`Modified_Optional`](#structFRHAPI__PlayerReport_1a3bfc047d489eac3451a0966e32625228) | 
`public bool `[`Modified_IsSet`](#structFRHAPI__PlayerReport_1ad7fc9d8e0748891e1201a5df50c7a6b3) | true if Modified_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerReport_1a79d167f3dd25bcb0eabd6e44e9c06dc7)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerReport_1a6874963318331b37acc0ad0f213e095c)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetReportId`](#structFRHAPI__PlayerReport_1ab4c39a98b4871a277ac52ad03f1253ad)`()` | Gets the value of ReportId.
`public inline const FString & `[`GetReportId`](#structFRHAPI__PlayerReport_1a7c9e91d3f9f506d9e45d20ed23921950)`() const` | Gets the value of ReportId.
`public inline void `[`SetReportId`](#structFRHAPI__PlayerReport_1aa7b092369949c6573164de168302f3eb)`(FString NewValue)` | Sets the value of ReportId.
`public inline FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a93a0c4d2184728454dc9d42e6178ee43)`()` | Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a31a41b32a29390f9dc02b3df8bbc9937)`() const` | Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a6227875c14b46efd46fe433fd6d4d8f0)`(const FGuid & DefaultValue) const` | Gets the value of SourcePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a069a886e501f96577f546bef5bbdfbcc)`(FGuid & OutValue) const` | Fills OutValue with the value of SourcePlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__PlayerReport_1a0c41eb704dac53779c22123b2edf63c3)`()` | Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__PlayerReport_1a3bbb0f2c0a0cbc6105706881caf97f60)`() const` | Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a026cc48060612c2dfea9232d1b23a211)`(FGuid NewValue)` | Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true.
`public inline void `[`ClearSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a97a7000fa35325ceb49685aad4d82199)`()` | Clears the value of SourcePlayerUuid_Optional and sets SourcePlayerUuid_IsSet to false.
`public inline int32 & `[`GetSourcePlayerId`](#structFRHAPI__PlayerReport_1a73ac1bbf3c771eee81e3ec7099f4e06a)`()` | Gets the value of SourcePlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetSourcePlayerId`](#structFRHAPI__PlayerReport_1ace19edf3a6b2142c98f13daf5e8eecee)`() const` | Gets the value of SourcePlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetSourcePlayerId`](#structFRHAPI__PlayerReport_1a8e159137710337e3c0cb37943822d20c)`(const int32 & DefaultValue) const` | Gets the value of SourcePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSourcePlayerId`](#structFRHAPI__PlayerReport_1a8013eb0e7b523c8b63de5afc26490a2d)`(int32 & OutValue) const` | Fills OutValue with the value of SourcePlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetSourcePlayerIdOrNull`](#structFRHAPI__PlayerReport_1a42604d45bda53c5ec10a3c56a82c9891)`()` | Returns a pointer to SourcePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetSourcePlayerIdOrNull`](#structFRHAPI__PlayerReport_1a0ea3e53fea379328ee6bdd13cdee0013)`() const` | Returns a pointer to SourcePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSourcePlayerId`](#structFRHAPI__PlayerReport_1a804659bca51a2a654fdde550c2447672)`(int32 NewValue)` | Sets the value of SourcePlayerId_Optional and also sets SourcePlayerId_IsSet to true.
`public inline void `[`ClearSourcePlayerId`](#structFRHAPI__PlayerReport_1a2344462927f94ee3533b684debd2c485)`()` | Clears the value of SourcePlayerId_Optional and sets SourcePlayerId_IsSet to false.
`public inline bool `[`IsSourcePlayerIdDefaultValue`](#structFRHAPI__PlayerReport_1a8c5ae31a8f7e3f52c62469cc39f120b1)`() const` | Returns true if SourcePlayerId_Optional is set and matches the default value.
`public inline void `[`SetSourcePlayerIdToDefault`](#structFRHAPI__PlayerReport_1adcd70f55ebd032fddcc57a5f0fc69b40)`()` | Sets the value of SourcePlayerId_Optional to its default and also sets SourcePlayerId_IsSet to true.
`public inline FGuid & `[`GetTargetPlayerUuid`](#structFRHAPI__PlayerReport_1ad04c7cca8f8c35532e7b9c6bad4bede7)`()` | Gets the value of TargetPlayerUuid.
`public inline const FGuid & `[`GetTargetPlayerUuid`](#structFRHAPI__PlayerReport_1a86f6785326b18ef84ebc51564c5683c9)`() const` | Gets the value of TargetPlayerUuid.
`public inline void `[`SetTargetPlayerUuid`](#structFRHAPI__PlayerReport_1a61846d11140a54da7d23df68a314ab51)`(FGuid NewValue)` | Sets the value of TargetPlayerUuid.
`public inline int32 & `[`GetTargetPlayerId`](#structFRHAPI__PlayerReport_1a32090bcc0dee423c1accff6bd0f0dba5)`()` | Gets the value of TargetPlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTargetPlayerId`](#structFRHAPI__PlayerReport_1a2742dc1bf1cab16c6a61234dd70cfadb)`() const` | Gets the value of TargetPlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTargetPlayerId`](#structFRHAPI__PlayerReport_1a7669d909e0ce3674e4fd4e974c0d6ddb)`(const int32 & DefaultValue) const` | Gets the value of TargetPlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTargetPlayerId`](#structFRHAPI__PlayerReport_1a1e18509dd703d846ffb96fa1b1e5dbc4)`(int32 & OutValue) const` | Fills OutValue with the value of TargetPlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTargetPlayerIdOrNull`](#structFRHAPI__PlayerReport_1a1b42b9b2b0b3b20c08bd6be38ff004f7)`()` | Returns a pointer to TargetPlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTargetPlayerIdOrNull`](#structFRHAPI__PlayerReport_1aee8fc296f90df7824f803b32f1e43828)`() const` | Returns a pointer to TargetPlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTargetPlayerId`](#structFRHAPI__PlayerReport_1a2efb03115e10a762b98ef458fe7a3865)`(int32 NewValue)` | Sets the value of TargetPlayerId_Optional and also sets TargetPlayerId_IsSet to true.
`public inline void `[`ClearTargetPlayerId`](#structFRHAPI__PlayerReport_1a9e65eafed1ef63b813a5e989a342503d)`()` | Clears the value of TargetPlayerId_Optional and sets TargetPlayerId_IsSet to false.
`public inline bool `[`IsTargetPlayerIdDefaultValue`](#structFRHAPI__PlayerReport_1acb350781b50b85ef46ca2baec0cf0ce2)`() const` | Returns true if TargetPlayerId_Optional is set and matches the default value.
`public inline void `[`SetTargetPlayerIdToDefault`](#structFRHAPI__PlayerReport_1a181c104cf04cab05e21564fe328fc901)`()` | Sets the value of TargetPlayerId_Optional to its default and also sets TargetPlayerId_IsSet to true.
`public inline ERHAPI_ReportReason & `[`GetReason`](#structFRHAPI__PlayerReport_1a3ef68d3bb707b6dc33f345d1e87945dd)`()` | Gets the value of Reason.
`public inline const ERHAPI_ReportReason & `[`GetReason`](#structFRHAPI__PlayerReport_1a6790a6cdab4dfd8e3feb61517e36c695)`() const` | Gets the value of Reason.
`public inline void `[`SetReason`](#structFRHAPI__PlayerReport_1abdf609e84ff905f91748ea8b0fec56b6)`(ERHAPI_ReportReason NewValue)` | Sets the value of Reason.
`public inline FString & `[`GetDescription`](#structFRHAPI__PlayerReport_1a9dfd0b7ed1b2daa68de505e74257cfc4)`()` | Gets the value of Description_Optional, regardless of it having been set.
`public inline const FString & `[`GetDescription`](#structFRHAPI__PlayerReport_1a2796eb0d3946624a95f46f9d617466ba)`() const` | Gets the value of Description_Optional, regardless of it having been set.
`public inline const FString & `[`GetDescription`](#structFRHAPI__PlayerReport_1ac9b71466803edaac70d3a6293eb0939f)`(const FString & DefaultValue) const` | Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDescription`](#structFRHAPI__PlayerReport_1a3c207c11ac9578efe9e663194d0f5055)`(FString & OutValue) const` | Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDescriptionOrNull`](#structFRHAPI__PlayerReport_1adc611d918e7f50baea915f932e8731aa)`()` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDescriptionOrNull`](#structFRHAPI__PlayerReport_1aeefe485b95a23e7cefd83c036666c853)`() const` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDescription`](#structFRHAPI__PlayerReport_1a44c712dca6c1fba0faa6053f0180cc96)`(FString NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true.
`public inline void `[`ClearDescription`](#structFRHAPI__PlayerReport_1a538e1c8d7a4c7ee210040970d062c7b7)`()` | Clears the value of Description_Optional and sets Description_IsSet to false.
`public inline FString & `[`GetSessionId`](#structFRHAPI__PlayerReport_1a8731c3b9d616ff92ae98128206537c97)`()` | Gets the value of SessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__PlayerReport_1a6ecfa71a96ba19391440a8831b5c7d44)`() const` | Gets the value of SessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__PlayerReport_1a5e4496844f950ad3e0b3c2cf22f77e84)`(const FString & DefaultValue) const` | Gets the value of SessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessionId`](#structFRHAPI__PlayerReport_1a11b3bf55c8ab407496f6282d7c89b528)`(FString & OutValue) const` | Fills OutValue with the value of SessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetSessionIdOrNull`](#structFRHAPI__PlayerReport_1aa1ab51621417fae2a910b309b104f041)`()` | Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetSessionIdOrNull`](#structFRHAPI__PlayerReport_1adb2af501e23c02536c0299410797f4ef)`() const` | Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessionId`](#structFRHAPI__PlayerReport_1a24081d8b7c6a11eeb058cc16710b7e4d)`(FString NewValue)` | Sets the value of SessionId_Optional and also sets SessionId_IsSet to true.
`public inline void `[`ClearSessionId`](#structFRHAPI__PlayerReport_1ac11ae75048c12ead402ab706c2942b51)`()` | Clears the value of SessionId_Optional and sets SessionId_IsSet to false.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__PlayerReport_1a59d2fe4b4c5a9c23f928a5a2a8e951d7)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerReport_1a1eefda99cc438ac48d8dc71fb66503af)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerReport_1a5d734a2b8adeed93960dbd3096e55f8c)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceId`](#structFRHAPI__PlayerReport_1a78888291edce495a6edfdef4568e4cf9)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerReport_1a06390c1b8a93773f384ab48d7c48ce9d)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerReport_1aa3ce10a5070c0b13210c32591f78608b)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceId`](#structFRHAPI__PlayerReport_1afd8d90ccb77922e12c2c5c416d31dba0)`(FString NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerReport_1a318e81296d4530aa395cb9ce323aaf10)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline FString & `[`GetMatchId`](#structFRHAPI__PlayerReport_1ac8cae5c589a66e76c9c95a9f9685c2d0)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerReport_1a90b4f7ea58c6c8cf5ec5896c635d94c5)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerReport_1ae7c85c38336233527c768349a6dfa1b4)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchId`](#structFRHAPI__PlayerReport_1aeee2a7624a172f08980ed46a7f5a299b)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerReport_1a583e203c2535592f32c537347194442f)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerReport_1a1a299f5caeb2956dc082f7446495135f)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchId`](#structFRHAPI__PlayerReport_1ab4bac1ec8cc2fde28dae7ef28616fb01)`(FString NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline void `[`ClearMatchId`](#structFRHAPI__PlayerReport_1ac5cdcfbdb2a8fd6732bd130cf6da9a56)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReport_1a6bdf6e172d55a4a68b5f48eb16279798)`()` | Gets the value of MatchSegment_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReport_1a792a0720a227a09674d0f141e42ba703)`() const` | Gets the value of MatchSegment_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReport_1a742f6456cf9030cce693381401119ce3)`(const FString & DefaultValue) const` | Gets the value of MatchSegment_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchSegment`](#structFRHAPI__PlayerReport_1a25a74a37312065b9d0d43d4361f42e50)`(FString & OutValue) const` | Fills OutValue with the value of MatchSegment_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchSegmentOrNull`](#structFRHAPI__PlayerReport_1a07289dad1ffb0aeb4f93f78544c7bfde)`()` | Returns a pointer to MatchSegment_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchSegmentOrNull`](#structFRHAPI__PlayerReport_1aaf744a5aa01eb905210f295f191b27d5)`() const` | Returns a pointer to MatchSegment_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchSegment`](#structFRHAPI__PlayerReport_1a68eee1f512a12d5d8f244169406ee434)`(FString NewValue)` | Sets the value of MatchSegment_Optional and also sets MatchSegment_IsSet to true.
`public inline void `[`ClearMatchSegment`](#structFRHAPI__PlayerReport_1ae4cc911288e101f606d03eff84cda53e)`()` | Clears the value of MatchSegment_Optional and sets MatchSegment_IsSet to false.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReport_1a2385a92118ebd2247349552a20412750)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReport_1ac0ad68bcd23572a99d93abb31b6c97d1)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReport_1a3451382935b44826946f90595f7826ff)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PlayerReport_1a6c4782fe7af4eb5bb5e56c6949af09dd)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerReport_1a3d2b3be40690754366d6a50265ffdc51)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerReport_1a2288794fdfa59d31f29a21caa0c65a53)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PlayerReport_1a013051eb7b11443e183f261961433aed)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlayerReport_1a9606358d4d6002b8c069eeeb1b3c4ae8)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FDateTime & `[`GetCreated`](#structFRHAPI__PlayerReport_1ad53c4c368a4c0cc87cafc0dc7e95a1c9)`()` | Gets the value of Created_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetCreated`](#structFRHAPI__PlayerReport_1ad4cd7a1bffb0fe0d199e5aa44421e77a)`() const` | Gets the value of Created_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetCreated`](#structFRHAPI__PlayerReport_1a74d05b4ce1514d43b163c472e8692ce6)`(const FDateTime & DefaultValue) const` | Gets the value of Created_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCreated`](#structFRHAPI__PlayerReport_1a1ea1f362d419449035758fe38c0d1e1c)`(FDateTime & OutValue) const` | Fills OutValue with the value of Created_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetCreatedOrNull`](#structFRHAPI__PlayerReport_1a689df5ec540aef88c7e37ca86abdc660)`()` | Returns a pointer to Created_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetCreatedOrNull`](#structFRHAPI__PlayerReport_1a155bc71c4f9adbea8b1f5b871dbc50b6)`() const` | Returns a pointer to Created_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCreated`](#structFRHAPI__PlayerReport_1ace5fd28391063fd4a78dd46695f8fcc3)`(FDateTime NewValue)` | Sets the value of Created_Optional and also sets Created_IsSet to true.
`public inline void `[`ClearCreated`](#structFRHAPI__PlayerReport_1ab68bb775bda9f07033c7e810999e8f0d)`()` | Clears the value of Created_Optional and sets Created_IsSet to false.
`public inline FDateTime & `[`GetModified`](#structFRHAPI__PlayerReport_1ab5cd0a5216fd16a6ab2222b803d27ef6)`()` | Gets the value of Modified_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetModified`](#structFRHAPI__PlayerReport_1aa9c5683655b7ee870c0f756ee3d85f73)`() const` | Gets the value of Modified_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetModified`](#structFRHAPI__PlayerReport_1afcb979548d9a4e7979d7adf4d389acb9)`(const FDateTime & DefaultValue) const` | Gets the value of Modified_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetModified`](#structFRHAPI__PlayerReport_1a9eb7bbd95743e4021ea5ae436322bb4b)`(FDateTime & OutValue) const` | Fills OutValue with the value of Modified_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetModifiedOrNull`](#structFRHAPI__PlayerReport_1a22d9ab5c79aaec45e029241309f3ef05)`()` | Returns a pointer to Modified_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetModifiedOrNull`](#structFRHAPI__PlayerReport_1afe2bbd7ef40b775532e18bd9b7dadbaa)`() const` | Returns a pointer to Modified_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetModified`](#structFRHAPI__PlayerReport_1a7082bfdf1169d3bedef923c9e9a880b1)`(FDateTime NewValue)` | Sets the value of Modified_Optional and also sets Modified_IsSet to true.
`public inline void `[`ClearModified`](#structFRHAPI__PlayerReport_1a4fff49337b878205f0b1956483f42b25)`()` | Clears the value of Modified_Optional and sets Modified_IsSet to false.

#### Members

#### `public FString `[`ReportId`](#structFRHAPI__PlayerReport_1a93c9d12fc7e83a4a07602d3b3e58d8e5) <a id="structFRHAPI__PlayerReport_1a93c9d12fc7e83a4a07602d3b3e58d8e5"></a>

Unique ID for the player report.

<br>
#### `public FGuid `[`SourcePlayerUuid_Optional`](#structFRHAPI__PlayerReport_1a08fcb28e363b0a610b2094345fef71e8) <a id="structFRHAPI__PlayerReport_1a08fcb28e363b0a610b2094345fef71e8"></a>

<br>
#### `public bool `[`SourcePlayerUuid_IsSet`](#structFRHAPI__PlayerReport_1a94013524f43688f57365448ab547f541) <a id="structFRHAPI__PlayerReport_1a94013524f43688f57365448ab547f541"></a>

true if SourcePlayerUuid_Optional has been set to a value

<br>
#### `public int32 `[`SourcePlayerId_Optional`](#structFRHAPI__PlayerReport_1a29877b89c3d77b314fa88b0a36498b2e) <a id="structFRHAPI__PlayerReport_1a29877b89c3d77b314fa88b0a36498b2e"></a>

<br>
#### `public bool `[`SourcePlayerId_IsSet`](#structFRHAPI__PlayerReport_1aae1e2d68510288a651f3c428885584ce) <a id="structFRHAPI__PlayerReport_1aae1e2d68510288a651f3c428885584ce"></a>

true if SourcePlayerId_Optional has been set to a value

<br>
#### `public FGuid `[`TargetPlayerUuid`](#structFRHAPI__PlayerReport_1ac7f4d142d3bcdb3fe0f0514190135171) <a id="structFRHAPI__PlayerReport_1ac7f4d142d3bcdb3fe0f0514190135171"></a>

<br>
#### `public int32 `[`TargetPlayerId_Optional`](#structFRHAPI__PlayerReport_1a77af8cbee84b001e9392e1e98e1b3cbb) <a id="structFRHAPI__PlayerReport_1a77af8cbee84b001e9392e1e98e1b3cbb"></a>

<br>
#### `public bool `[`TargetPlayerId_IsSet`](#structFRHAPI__PlayerReport_1a044e3dabe75fcf0fe113bf41889b7a78) <a id="structFRHAPI__PlayerReport_1a044e3dabe75fcf0fe113bf41889b7a78"></a>

true if TargetPlayerId_Optional has been set to a value

<br>
#### `public ERHAPI_ReportReason `[`Reason`](#structFRHAPI__PlayerReport_1ae3feb519772ec26847bab22bfea8f9c9) <a id="structFRHAPI__PlayerReport_1ae3feb519772ec26847bab22bfea8f9c9"></a>

The reason for the report.

<br>
#### `public FString `[`Description_Optional`](#structFRHAPI__PlayerReport_1a9a2aae9e03ee80fe7c057261fa5f4a08) <a id="structFRHAPI__PlayerReport_1a9a2aae9e03ee80fe7c057261fa5f4a08"></a>

<br>
#### `public bool `[`Description_IsSet`](#structFRHAPI__PlayerReport_1a21ca401a324d2c44569fe1d39f567983) <a id="structFRHAPI__PlayerReport_1a21ca401a324d2c44569fe1d39f567983"></a>

true if Description_Optional has been set to a value

<br>
#### `public FString `[`SessionId_Optional`](#structFRHAPI__PlayerReport_1ac5f256086a91a6e57a0d2108d4a80e65) <a id="structFRHAPI__PlayerReport_1ac5f256086a91a6e57a0d2108d4a80e65"></a>

<br>
#### `public bool `[`SessionId_IsSet`](#structFRHAPI__PlayerReport_1a6ba5108860799819379363ea7a158c25) <a id="structFRHAPI__PlayerReport_1a6ba5108860799819379363ea7a158c25"></a>

true if SessionId_Optional has been set to a value

<br>
#### `public FString `[`InstanceId_Optional`](#structFRHAPI__PlayerReport_1a693fd4fc9c39e2c2acb9df94ead6e63d) <a id="structFRHAPI__PlayerReport_1a693fd4fc9c39e2c2acb9df94ead6e63d"></a>

<br>
#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__PlayerReport_1af6c6bde55f0204d93fefb5736905b2d2) <a id="structFRHAPI__PlayerReport_1af6c6bde55f0204d93fefb5736905b2d2"></a>

true if InstanceId_Optional has been set to a value

<br>
#### `public FString `[`MatchId_Optional`](#structFRHAPI__PlayerReport_1a51b57e66148af98ebe8a417a1934ebcd) <a id="structFRHAPI__PlayerReport_1a51b57e66148af98ebe8a417a1934ebcd"></a>

<br>
#### `public bool `[`MatchId_IsSet`](#structFRHAPI__PlayerReport_1a1329755fd98ef7f472e74f80292c613a) <a id="structFRHAPI__PlayerReport_1a1329755fd98ef7f472e74f80292c613a"></a>

true if MatchId_Optional has been set to a value

<br>
#### `public FString `[`MatchSegment_Optional`](#structFRHAPI__PlayerReport_1a89059c798981790d55bc8139f471e6da) <a id="structFRHAPI__PlayerReport_1a89059c798981790d55bc8139f471e6da"></a>

<br>
#### `public bool `[`MatchSegment_IsSet`](#structFRHAPI__PlayerReport_1a1dd8140a5aa65f4811c2792939fcab8c) <a id="structFRHAPI__PlayerReport_1a1dd8140a5aa65f4811c2792939fcab8c"></a>

true if MatchSegment_Optional has been set to a value

<br>
#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerReport_1a80153d5a0c0581838a4dd5d0f4fd0599) <a id="structFRHAPI__PlayerReport_1a80153d5a0c0581838a4dd5d0f4fd0599"></a>

Custom data for the report.

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerReport_1a0abbc656b7e49086f1d00fbf6c7efabd) <a id="structFRHAPI__PlayerReport_1a0abbc656b7e49086f1d00fbf6c7efabd"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public FDateTime `[`Created_Optional`](#structFRHAPI__PlayerReport_1a2c81b6a985bb83ebde61d6aab1cbafea) <a id="structFRHAPI__PlayerReport_1a2c81b6a985bb83ebde61d6aab1cbafea"></a>

<br>
#### `public bool `[`Created_IsSet`](#structFRHAPI__PlayerReport_1a700bd42011d3674794ef12e43464e2fc) <a id="structFRHAPI__PlayerReport_1a700bd42011d3674794ef12e43464e2fc"></a>

true if Created_Optional has been set to a value

<br>
#### `public FDateTime `[`Modified_Optional`](#structFRHAPI__PlayerReport_1a3bfc047d489eac3451a0966e32625228) <a id="structFRHAPI__PlayerReport_1a3bfc047d489eac3451a0966e32625228"></a>

<br>
#### `public bool `[`Modified_IsSet`](#structFRHAPI__PlayerReport_1ad7fc9d8e0748891e1201a5df50c7a6b3) <a id="structFRHAPI__PlayerReport_1ad7fc9d8e0748891e1201a5df50c7a6b3"></a>

true if Modified_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerReport_1a79d167f3dd25bcb0eabd6e44e9c06dc7)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerReport_1a79d167f3dd25bcb0eabd6e44e9c06dc7"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerReport_1a6874963318331b37acc0ad0f213e095c)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerReport_1a6874963318331b37acc0ad0f213e095c"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetReportId`](#structFRHAPI__PlayerReport_1ab4c39a98b4871a277ac52ad03f1253ad)`()` <a id="structFRHAPI__PlayerReport_1ab4c39a98b4871a277ac52ad03f1253ad"></a>

Gets the value of ReportId.

<br>
#### `public inline const FString & `[`GetReportId`](#structFRHAPI__PlayerReport_1a7c9e91d3f9f506d9e45d20ed23921950)`() const` <a id="structFRHAPI__PlayerReport_1a7c9e91d3f9f506d9e45d20ed23921950"></a>

Gets the value of ReportId.

<br>
#### `public inline void `[`SetReportId`](#structFRHAPI__PlayerReport_1aa7b092369949c6573164de168302f3eb)`(FString NewValue)` <a id="structFRHAPI__PlayerReport_1aa7b092369949c6573164de168302f3eb"></a>

Sets the value of ReportId.

<br>
#### `public inline FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a93a0c4d2184728454dc9d42e6178ee43)`()` <a id="structFRHAPI__PlayerReport_1a93a0c4d2184728454dc9d42e6178ee43"></a>

Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a31a41b32a29390f9dc02b3df8bbc9937)`() const` <a id="structFRHAPI__PlayerReport_1a31a41b32a29390f9dc02b3df8bbc9937"></a>

Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a6227875c14b46efd46fe433fd6d4d8f0)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1a6227875c14b46efd46fe433fd6d4d8f0"></a>

Gets the value of SourcePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a069a886e501f96577f546bef5bbdfbcc)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerReport_1a069a886e501f96577f546bef5bbdfbcc"></a>

Fills OutValue with the value of SourcePlayerUuid_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__PlayerReport_1a0c41eb704dac53779c22123b2edf63c3)`()` <a id="structFRHAPI__PlayerReport_1a0c41eb704dac53779c22123b2edf63c3"></a>

Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__PlayerReport_1a3bbb0f2c0a0cbc6105706881caf97f60)`() const` <a id="structFRHAPI__PlayerReport_1a3bbb0f2c0a0cbc6105706881caf97f60"></a>

Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a026cc48060612c2dfea9232d1b23a211)`(FGuid NewValue)` <a id="structFRHAPI__PlayerReport_1a026cc48060612c2dfea9232d1b23a211"></a>

Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true.

<br>
#### `public inline void `[`ClearSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a97a7000fa35325ceb49685aad4d82199)`()` <a id="structFRHAPI__PlayerReport_1a97a7000fa35325ceb49685aad4d82199"></a>

Clears the value of SourcePlayerUuid_Optional and sets SourcePlayerUuid_IsSet to false.

<br>
#### `public inline int32 & `[`GetSourcePlayerId`](#structFRHAPI__PlayerReport_1a73ac1bbf3c771eee81e3ec7099f4e06a)`()` <a id="structFRHAPI__PlayerReport_1a73ac1bbf3c771eee81e3ec7099f4e06a"></a>

Gets the value of SourcePlayerId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetSourcePlayerId`](#structFRHAPI__PlayerReport_1ace19edf3a6b2142c98f13daf5e8eecee)`() const` <a id="structFRHAPI__PlayerReport_1ace19edf3a6b2142c98f13daf5e8eecee"></a>

Gets the value of SourcePlayerId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetSourcePlayerId`](#structFRHAPI__PlayerReport_1a8e159137710337e3c0cb37943822d20c)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1a8e159137710337e3c0cb37943822d20c"></a>

Gets the value of SourcePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSourcePlayerId`](#structFRHAPI__PlayerReport_1a8013eb0e7b523c8b63de5afc26490a2d)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerReport_1a8013eb0e7b523c8b63de5afc26490a2d"></a>

Fills OutValue with the value of SourcePlayerId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetSourcePlayerIdOrNull`](#structFRHAPI__PlayerReport_1a42604d45bda53c5ec10a3c56a82c9891)`()` <a id="structFRHAPI__PlayerReport_1a42604d45bda53c5ec10a3c56a82c9891"></a>

Returns a pointer to SourcePlayerId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetSourcePlayerIdOrNull`](#structFRHAPI__PlayerReport_1a0ea3e53fea379328ee6bdd13cdee0013)`() const` <a id="structFRHAPI__PlayerReport_1a0ea3e53fea379328ee6bdd13cdee0013"></a>

Returns a pointer to SourcePlayerId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSourcePlayerId`](#structFRHAPI__PlayerReport_1a804659bca51a2a654fdde550c2447672)`(int32 NewValue)` <a id="structFRHAPI__PlayerReport_1a804659bca51a2a654fdde550c2447672"></a>

Sets the value of SourcePlayerId_Optional and also sets SourcePlayerId_IsSet to true.

<br>
#### `public inline void `[`ClearSourcePlayerId`](#structFRHAPI__PlayerReport_1a2344462927f94ee3533b684debd2c485)`()` <a id="structFRHAPI__PlayerReport_1a2344462927f94ee3533b684debd2c485"></a>

Clears the value of SourcePlayerId_Optional and sets SourcePlayerId_IsSet to false.

<br>
#### `public inline bool `[`IsSourcePlayerIdDefaultValue`](#structFRHAPI__PlayerReport_1a8c5ae31a8f7e3f52c62469cc39f120b1)`() const` <a id="structFRHAPI__PlayerReport_1a8c5ae31a8f7e3f52c62469cc39f120b1"></a>

Returns true if SourcePlayerId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetSourcePlayerIdToDefault`](#structFRHAPI__PlayerReport_1adcd70f55ebd032fddcc57a5f0fc69b40)`()` <a id="structFRHAPI__PlayerReport_1adcd70f55ebd032fddcc57a5f0fc69b40"></a>

Sets the value of SourcePlayerId_Optional to its default and also sets SourcePlayerId_IsSet to true.

<br>
#### `public inline FGuid & `[`GetTargetPlayerUuid`](#structFRHAPI__PlayerReport_1ad04c7cca8f8c35532e7b9c6bad4bede7)`()` <a id="structFRHAPI__PlayerReport_1ad04c7cca8f8c35532e7b9c6bad4bede7"></a>

Gets the value of TargetPlayerUuid.

<br>
#### `public inline const FGuid & `[`GetTargetPlayerUuid`](#structFRHAPI__PlayerReport_1a86f6785326b18ef84ebc51564c5683c9)`() const` <a id="structFRHAPI__PlayerReport_1a86f6785326b18ef84ebc51564c5683c9"></a>

Gets the value of TargetPlayerUuid.

<br>
#### `public inline void `[`SetTargetPlayerUuid`](#structFRHAPI__PlayerReport_1a61846d11140a54da7d23df68a314ab51)`(FGuid NewValue)` <a id="structFRHAPI__PlayerReport_1a61846d11140a54da7d23df68a314ab51"></a>

Sets the value of TargetPlayerUuid.

<br>
#### `public inline int32 & `[`GetTargetPlayerId`](#structFRHAPI__PlayerReport_1a32090bcc0dee423c1accff6bd0f0dba5)`()` <a id="structFRHAPI__PlayerReport_1a32090bcc0dee423c1accff6bd0f0dba5"></a>

Gets the value of TargetPlayerId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetTargetPlayerId`](#structFRHAPI__PlayerReport_1a2742dc1bf1cab16c6a61234dd70cfadb)`() const` <a id="structFRHAPI__PlayerReport_1a2742dc1bf1cab16c6a61234dd70cfadb"></a>

Gets the value of TargetPlayerId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetTargetPlayerId`](#structFRHAPI__PlayerReport_1a7669d909e0ce3674e4fd4e974c0d6ddb)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1a7669d909e0ce3674e4fd4e974c0d6ddb"></a>

Gets the value of TargetPlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetTargetPlayerId`](#structFRHAPI__PlayerReport_1a1e18509dd703d846ffb96fa1b1e5dbc4)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerReport_1a1e18509dd703d846ffb96fa1b1e5dbc4"></a>

Fills OutValue with the value of TargetPlayerId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetTargetPlayerIdOrNull`](#structFRHAPI__PlayerReport_1a1b42b9b2b0b3b20c08bd6be38ff004f7)`()` <a id="structFRHAPI__PlayerReport_1a1b42b9b2b0b3b20c08bd6be38ff004f7"></a>

Returns a pointer to TargetPlayerId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetTargetPlayerIdOrNull`](#structFRHAPI__PlayerReport_1aee8fc296f90df7824f803b32f1e43828)`() const` <a id="structFRHAPI__PlayerReport_1aee8fc296f90df7824f803b32f1e43828"></a>

Returns a pointer to TargetPlayerId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetTargetPlayerId`](#structFRHAPI__PlayerReport_1a2efb03115e10a762b98ef458fe7a3865)`(int32 NewValue)` <a id="structFRHAPI__PlayerReport_1a2efb03115e10a762b98ef458fe7a3865"></a>

Sets the value of TargetPlayerId_Optional and also sets TargetPlayerId_IsSet to true.

<br>
#### `public inline void `[`ClearTargetPlayerId`](#structFRHAPI__PlayerReport_1a9e65eafed1ef63b813a5e989a342503d)`()` <a id="structFRHAPI__PlayerReport_1a9e65eafed1ef63b813a5e989a342503d"></a>

Clears the value of TargetPlayerId_Optional and sets TargetPlayerId_IsSet to false.

<br>
#### `public inline bool `[`IsTargetPlayerIdDefaultValue`](#structFRHAPI__PlayerReport_1acb350781b50b85ef46ca2baec0cf0ce2)`() const` <a id="structFRHAPI__PlayerReport_1acb350781b50b85ef46ca2baec0cf0ce2"></a>

Returns true if TargetPlayerId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetTargetPlayerIdToDefault`](#structFRHAPI__PlayerReport_1a181c104cf04cab05e21564fe328fc901)`()` <a id="structFRHAPI__PlayerReport_1a181c104cf04cab05e21564fe328fc901"></a>

Sets the value of TargetPlayerId_Optional to its default and also sets TargetPlayerId_IsSet to true.

<br>
#### `public inline ERHAPI_ReportReason & `[`GetReason`](#structFRHAPI__PlayerReport_1a3ef68d3bb707b6dc33f345d1e87945dd)`()` <a id="structFRHAPI__PlayerReport_1a3ef68d3bb707b6dc33f345d1e87945dd"></a>

Gets the value of Reason.

<br>
#### `public inline const ERHAPI_ReportReason & `[`GetReason`](#structFRHAPI__PlayerReport_1a6790a6cdab4dfd8e3feb61517e36c695)`() const` <a id="structFRHAPI__PlayerReport_1a6790a6cdab4dfd8e3feb61517e36c695"></a>

Gets the value of Reason.

<br>
#### `public inline void `[`SetReason`](#structFRHAPI__PlayerReport_1abdf609e84ff905f91748ea8b0fec56b6)`(ERHAPI_ReportReason NewValue)` <a id="structFRHAPI__PlayerReport_1abdf609e84ff905f91748ea8b0fec56b6"></a>

Sets the value of Reason.

<br>
#### `public inline FString & `[`GetDescription`](#structFRHAPI__PlayerReport_1a9dfd0b7ed1b2daa68de505e74257cfc4)`()` <a id="structFRHAPI__PlayerReport_1a9dfd0b7ed1b2daa68de505e74257cfc4"></a>

Gets the value of Description_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetDescription`](#structFRHAPI__PlayerReport_1a2796eb0d3946624a95f46f9d617466ba)`() const` <a id="structFRHAPI__PlayerReport_1a2796eb0d3946624a95f46f9d617466ba"></a>

Gets the value of Description_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetDescription`](#structFRHAPI__PlayerReport_1ac9b71466803edaac70d3a6293eb0939f)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1ac9b71466803edaac70d3a6293eb0939f"></a>

Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetDescription`](#structFRHAPI__PlayerReport_1a3c207c11ac9578efe9e663194d0f5055)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReport_1a3c207c11ac9578efe9e663194d0f5055"></a>

Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetDescriptionOrNull`](#structFRHAPI__PlayerReport_1adc611d918e7f50baea915f932e8731aa)`()` <a id="structFRHAPI__PlayerReport_1adc611d918e7f50baea915f932e8731aa"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetDescriptionOrNull`](#structFRHAPI__PlayerReport_1aeefe485b95a23e7cefd83c036666c853)`() const` <a id="structFRHAPI__PlayerReport_1aeefe485b95a23e7cefd83c036666c853"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetDescription`](#structFRHAPI__PlayerReport_1a44c712dca6c1fba0faa6053f0180cc96)`(FString NewValue)` <a id="structFRHAPI__PlayerReport_1a44c712dca6c1fba0faa6053f0180cc96"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true.

<br>
#### `public inline void `[`ClearDescription`](#structFRHAPI__PlayerReport_1a538e1c8d7a4c7ee210040970d062c7b7)`()` <a id="structFRHAPI__PlayerReport_1a538e1c8d7a4c7ee210040970d062c7b7"></a>

Clears the value of Description_Optional and sets Description_IsSet to false.

<br>
#### `public inline FString & `[`GetSessionId`](#structFRHAPI__PlayerReport_1a8731c3b9d616ff92ae98128206537c97)`()` <a id="structFRHAPI__PlayerReport_1a8731c3b9d616ff92ae98128206537c97"></a>

Gets the value of SessionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__PlayerReport_1a6ecfa71a96ba19391440a8831b5c7d44)`() const` <a id="structFRHAPI__PlayerReport_1a6ecfa71a96ba19391440a8831b5c7d44"></a>

Gets the value of SessionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__PlayerReport_1a5e4496844f950ad3e0b3c2cf22f77e84)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1a5e4496844f950ad3e0b3c2cf22f77e84"></a>

Gets the value of SessionId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSessionId`](#structFRHAPI__PlayerReport_1a11b3bf55c8ab407496f6282d7c89b528)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReport_1a11b3bf55c8ab407496f6282d7c89b528"></a>

Fills OutValue with the value of SessionId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetSessionIdOrNull`](#structFRHAPI__PlayerReport_1aa1ab51621417fae2a910b309b104f041)`()` <a id="structFRHAPI__PlayerReport_1aa1ab51621417fae2a910b309b104f041"></a>

Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetSessionIdOrNull`](#structFRHAPI__PlayerReport_1adb2af501e23c02536c0299410797f4ef)`() const` <a id="structFRHAPI__PlayerReport_1adb2af501e23c02536c0299410797f4ef"></a>

Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSessionId`](#structFRHAPI__PlayerReport_1a24081d8b7c6a11eeb058cc16710b7e4d)`(FString NewValue)` <a id="structFRHAPI__PlayerReport_1a24081d8b7c6a11eeb058cc16710b7e4d"></a>

Sets the value of SessionId_Optional and also sets SessionId_IsSet to true.

<br>
#### `public inline void `[`ClearSessionId`](#structFRHAPI__PlayerReport_1ac11ae75048c12ead402ab706c2942b51)`()` <a id="structFRHAPI__PlayerReport_1ac11ae75048c12ead402ab706c2942b51"></a>

Clears the value of SessionId_Optional and sets SessionId_IsSet to false.

<br>
#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__PlayerReport_1a59d2fe4b4c5a9c23f928a5a2a8e951d7)`()` <a id="structFRHAPI__PlayerReport_1a59d2fe4b4c5a9c23f928a5a2a8e951d7"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerReport_1a1eefda99cc438ac48d8dc71fb66503af)`() const` <a id="structFRHAPI__PlayerReport_1a1eefda99cc438ac48d8dc71fb66503af"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerReport_1a5d734a2b8adeed93960dbd3096e55f8c)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1a5d734a2b8adeed93960dbd3096e55f8c"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInstanceId`](#structFRHAPI__PlayerReport_1a78888291edce495a6edfdef4568e4cf9)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReport_1a78888291edce495a6edfdef4568e4cf9"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerReport_1a06390c1b8a93773f384ab48d7c48ce9d)`()` <a id="structFRHAPI__PlayerReport_1a06390c1b8a93773f384ab48d7c48ce9d"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerReport_1aa3ce10a5070c0b13210c32591f78608b)`() const` <a id="structFRHAPI__PlayerReport_1aa3ce10a5070c0b13210c32591f78608b"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInstanceId`](#structFRHAPI__PlayerReport_1afd8d90ccb77922e12c2c5c416d31dba0)`(FString NewValue)` <a id="structFRHAPI__PlayerReport_1afd8d90ccb77922e12c2c5c416d31dba0"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

<br>
#### `public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerReport_1a318e81296d4530aa395cb9ce323aaf10)`()` <a id="structFRHAPI__PlayerReport_1a318e81296d4530aa395cb9ce323aaf10"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

<br>
#### `public inline FString & `[`GetMatchId`](#structFRHAPI__PlayerReport_1ac8cae5c589a66e76c9c95a9f9685c2d0)`()` <a id="structFRHAPI__PlayerReport_1ac8cae5c589a66e76c9c95a9f9685c2d0"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerReport_1a90b4f7ea58c6c8cf5ec5896c635d94c5)`() const` <a id="structFRHAPI__PlayerReport_1a90b4f7ea58c6c8cf5ec5896c635d94c5"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerReport_1ae7c85c38336233527c768349a6dfa1b4)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1ae7c85c38336233527c768349a6dfa1b4"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMatchId`](#structFRHAPI__PlayerReport_1aeee2a7624a172f08980ed46a7f5a299b)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReport_1aeee2a7624a172f08980ed46a7f5a299b"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerReport_1a583e203c2535592f32c537347194442f)`()` <a id="structFRHAPI__PlayerReport_1a583e203c2535592f32c537347194442f"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerReport_1a1a299f5caeb2956dc082f7446495135f)`() const` <a id="structFRHAPI__PlayerReport_1a1a299f5caeb2956dc082f7446495135f"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMatchId`](#structFRHAPI__PlayerReport_1ab4bac1ec8cc2fde28dae7ef28616fb01)`(FString NewValue)` <a id="structFRHAPI__PlayerReport_1ab4bac1ec8cc2fde28dae7ef28616fb01"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

<br>
#### `public inline void `[`ClearMatchId`](#structFRHAPI__PlayerReport_1ac5cdcfbdb2a8fd6732bd130cf6da9a56)`()` <a id="structFRHAPI__PlayerReport_1ac5cdcfbdb2a8fd6732bd130cf6da9a56"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

<br>
#### `public inline FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReport_1a6bdf6e172d55a4a68b5f48eb16279798)`()` <a id="structFRHAPI__PlayerReport_1a6bdf6e172d55a4a68b5f48eb16279798"></a>

Gets the value of MatchSegment_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReport_1a792a0720a227a09674d0f141e42ba703)`() const` <a id="structFRHAPI__PlayerReport_1a792a0720a227a09674d0f141e42ba703"></a>

Gets the value of MatchSegment_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReport_1a742f6456cf9030cce693381401119ce3)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1a742f6456cf9030cce693381401119ce3"></a>

Gets the value of MatchSegment_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMatchSegment`](#structFRHAPI__PlayerReport_1a25a74a37312065b9d0d43d4361f42e50)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReport_1a25a74a37312065b9d0d43d4361f42e50"></a>

Fills OutValue with the value of MatchSegment_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetMatchSegmentOrNull`](#structFRHAPI__PlayerReport_1a07289dad1ffb0aeb4f93f78544c7bfde)`()` <a id="structFRHAPI__PlayerReport_1a07289dad1ffb0aeb4f93f78544c7bfde"></a>

Returns a pointer to MatchSegment_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetMatchSegmentOrNull`](#structFRHAPI__PlayerReport_1aaf744a5aa01eb905210f295f191b27d5)`() const` <a id="structFRHAPI__PlayerReport_1aaf744a5aa01eb905210f295f191b27d5"></a>

Returns a pointer to MatchSegment_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMatchSegment`](#structFRHAPI__PlayerReport_1a68eee1f512a12d5d8f244169406ee434)`(FString NewValue)` <a id="structFRHAPI__PlayerReport_1a68eee1f512a12d5d8f244169406ee434"></a>

Sets the value of MatchSegment_Optional and also sets MatchSegment_IsSet to true.

<br>
#### `public inline void `[`ClearMatchSegment`](#structFRHAPI__PlayerReport_1ae4cc911288e101f606d03eff84cda53e)`()` <a id="structFRHAPI__PlayerReport_1ae4cc911288e101f606d03eff84cda53e"></a>

Clears the value of MatchSegment_Optional and sets MatchSegment_IsSet to false.

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReport_1a2385a92118ebd2247349552a20412750)`()` <a id="structFRHAPI__PlayerReport_1a2385a92118ebd2247349552a20412750"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReport_1ac0ad68bcd23572a99d93abb31b6c97d1)`() const` <a id="structFRHAPI__PlayerReport_1ac0ad68bcd23572a99d93abb31b6c97d1"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReport_1a3451382935b44826946f90595f7826ff)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1a3451382935b44826946f90595f7826ff"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__PlayerReport_1a6c4782fe7af4eb5bb5e56c6949af09dd)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerReport_1a6c4782fe7af4eb5bb5e56c6949af09dd"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerReport_1a3d2b3be40690754366d6a50265ffdc51)`()` <a id="structFRHAPI__PlayerReport_1a3d2b3be40690754366d6a50265ffdc51"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerReport_1a2288794fdfa59d31f29a21caa0c65a53)`() const` <a id="structFRHAPI__PlayerReport_1a2288794fdfa59d31f29a21caa0c65a53"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerReport_1a013051eb7b11443e183f261961433aed)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__PlayerReport_1a013051eb7b11443e183f261961433aed"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerReport_1a9606358d4d6002b8c069eeeb1b3c4ae8)`()` <a id="structFRHAPI__PlayerReport_1a9606358d4d6002b8c069eeeb1b3c4ae8"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
#### `public inline FDateTime & `[`GetCreated`](#structFRHAPI__PlayerReport_1ad53c4c368a4c0cc87cafc0dc7e95a1c9)`()` <a id="structFRHAPI__PlayerReport_1ad53c4c368a4c0cc87cafc0dc7e95a1c9"></a>

Gets the value of Created_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetCreated`](#structFRHAPI__PlayerReport_1ad4cd7a1bffb0fe0d199e5aa44421e77a)`() const` <a id="structFRHAPI__PlayerReport_1ad4cd7a1bffb0fe0d199e5aa44421e77a"></a>

Gets the value of Created_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetCreated`](#structFRHAPI__PlayerReport_1a74d05b4ce1514d43b163c472e8692ce6)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1a74d05b4ce1514d43b163c472e8692ce6"></a>

Gets the value of Created_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCreated`](#structFRHAPI__PlayerReport_1a1ea1f362d419449035758fe38c0d1e1c)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerReport_1a1ea1f362d419449035758fe38c0d1e1c"></a>

Fills OutValue with the value of Created_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FDateTime * `[`GetCreatedOrNull`](#structFRHAPI__PlayerReport_1a689df5ec540aef88c7e37ca86abdc660)`()` <a id="structFRHAPI__PlayerReport_1a689df5ec540aef88c7e37ca86abdc660"></a>

Returns a pointer to Created_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FDateTime * `[`GetCreatedOrNull`](#structFRHAPI__PlayerReport_1a155bc71c4f9adbea8b1f5b871dbc50b6)`() const` <a id="structFRHAPI__PlayerReport_1a155bc71c4f9adbea8b1f5b871dbc50b6"></a>

Returns a pointer to Created_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCreated`](#structFRHAPI__PlayerReport_1ace5fd28391063fd4a78dd46695f8fcc3)`(FDateTime NewValue)` <a id="structFRHAPI__PlayerReport_1ace5fd28391063fd4a78dd46695f8fcc3"></a>

Sets the value of Created_Optional and also sets Created_IsSet to true.

<br>
#### `public inline void `[`ClearCreated`](#structFRHAPI__PlayerReport_1ab68bb775bda9f07033c7e810999e8f0d)`()` <a id="structFRHAPI__PlayerReport_1ab68bb775bda9f07033c7e810999e8f0d"></a>

Clears the value of Created_Optional and sets Created_IsSet to false.

<br>
#### `public inline FDateTime & `[`GetModified`](#structFRHAPI__PlayerReport_1ab5cd0a5216fd16a6ab2222b803d27ef6)`()` <a id="structFRHAPI__PlayerReport_1ab5cd0a5216fd16a6ab2222b803d27ef6"></a>

Gets the value of Modified_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetModified`](#structFRHAPI__PlayerReport_1aa9c5683655b7ee870c0f756ee3d85f73)`() const` <a id="structFRHAPI__PlayerReport_1aa9c5683655b7ee870c0f756ee3d85f73"></a>

Gets the value of Modified_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetModified`](#structFRHAPI__PlayerReport_1afcb979548d9a4e7979d7adf4d389acb9)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1afcb979548d9a4e7979d7adf4d389acb9"></a>

Gets the value of Modified_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetModified`](#structFRHAPI__PlayerReport_1a9eb7bbd95743e4021ea5ae436322bb4b)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerReport_1a9eb7bbd95743e4021ea5ae436322bb4b"></a>

Fills OutValue with the value of Modified_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FDateTime * `[`GetModifiedOrNull`](#structFRHAPI__PlayerReport_1a22d9ab5c79aaec45e029241309f3ef05)`()` <a id="structFRHAPI__PlayerReport_1a22d9ab5c79aaec45e029241309f3ef05"></a>

Returns a pointer to Modified_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FDateTime * `[`GetModifiedOrNull`](#structFRHAPI__PlayerReport_1afe2bbd7ef40b775532e18bd9b7dadbaa)`() const` <a id="structFRHAPI__PlayerReport_1afe2bbd7ef40b775532e18bd9b7dadbaa"></a>

Returns a pointer to Modified_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetModified`](#structFRHAPI__PlayerReport_1a7082bfdf1169d3bedef923c9e9a880b1)`(FDateTime NewValue)` <a id="structFRHAPI__PlayerReport_1a7082bfdf1169d3bedef923c9e9a880b1"></a>

Sets the value of Modified_Optional and also sets Modified_IsSet to true.

<br>
#### `public inline void `[`ClearModified`](#structFRHAPI__PlayerReport_1a4fff49337b878205f0b1956483f42b25)`()` <a id="structFRHAPI__PlayerReport_1a4fff49337b878205f0b1956483f42b25"></a>

Clears the value of Modified_Optional and sets Modified_IsSet to false.

<br>
