---
title: RHAPI_PlayerReport
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerReport`](#structFRHAPI__PlayerReport) | 

## struct `FRHAPI_PlayerReport` <a id="structFRHAPI__PlayerReport"></a>

```
struct FRHAPI_PlayerReport
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`ReportId`](#structFRHAPI__PlayerReport_1a93c9d12fc7e83a4a07602d3b3e58d8e5) | Unique ID for the player report.
`public FGuid `[`SourcePlayerUuid_Optional`](#structFRHAPI__PlayerReport_1a08fcb28e363b0a610b2094345fef71e8) | 
`public bool `[`SourcePlayerUuid_IsSet`](#structFRHAPI__PlayerReport_1a94013524f43688f57365448ab547f541) | true if SourcePlayerUuid_Optional has been set to a value
`public bool `[`SourcePlayerUuid_IsNull`](#structFRHAPI__PlayerReport_1a654dcc14800c231a347ef13c9d146c4f) | true if SourcePlayerUuid_Optional has been explicitly set to null
`public int32 `[`SourcePlayerId_Optional`](#structFRHAPI__PlayerReport_1a29877b89c3d77b314fa88b0a36498b2e) | 
`public bool `[`SourcePlayerId_IsSet`](#structFRHAPI__PlayerReport_1aae1e2d68510288a651f3c428885584ce) | true if SourcePlayerId_Optional has been set to a value
`public bool `[`SourcePlayerId_IsNull`](#structFRHAPI__PlayerReport_1af65cf90e564feaf36c9a7fff46cd3554) | true if SourcePlayerId_Optional has been explicitly set to null
`public FGuid `[`TargetPlayerUuid`](#structFRHAPI__PlayerReport_1ac7f4d142d3bcdb3fe0f0514190135171) | 
`public bool `[`TargetPlayerUuid_IsNull`](#structFRHAPI__PlayerReport_1a89d8759f295f1fa913309de597037e26) | true if TargetPlayerUuid has been explicitly set to null
`public int32 `[`TargetPlayerId_Optional`](#structFRHAPI__PlayerReport_1a77af8cbee84b001e9392e1e98e1b3cbb) | 
`public bool `[`TargetPlayerId_IsSet`](#structFRHAPI__PlayerReport_1a044e3dabe75fcf0fe113bf41889b7a78) | true if TargetPlayerId_Optional has been set to a value
`public bool `[`TargetPlayerId_IsNull`](#structFRHAPI__PlayerReport_1a612f015e64f6b35b05d5d347a1bf16a5) | true if TargetPlayerId_Optional has been explicitly set to null
`public ERHAPI_ReportReason `[`Reason`](#structFRHAPI__PlayerReport_1ae3feb519772ec26847bab22bfea8f9c9) | The reason for the report.
`public FString `[`Description_Optional`](#structFRHAPI__PlayerReport_1a9a2aae9e03ee80fe7c057261fa5f4a08) | 
`public bool `[`Description_IsSet`](#structFRHAPI__PlayerReport_1a21ca401a324d2c44569fe1d39f567983) | true if Description_Optional has been set to a value
`public bool `[`Description_IsNull`](#structFRHAPI__PlayerReport_1a7ef876da931a7878b9ef383dee6fec53) | true if Description_Optional has been explicitly set to null
`public FString `[`SessionId_Optional`](#structFRHAPI__PlayerReport_1ac5f256086a91a6e57a0d2108d4a80e65) | 
`public bool `[`SessionId_IsSet`](#structFRHAPI__PlayerReport_1a6ba5108860799819379363ea7a158c25) | true if SessionId_Optional has been set to a value
`public bool `[`SessionId_IsNull`](#structFRHAPI__PlayerReport_1af7eda6bc423f0b27dc37168179e9159f) | true if SessionId_Optional has been explicitly set to null
`public FString `[`InstanceId_Optional`](#structFRHAPI__PlayerReport_1a693fd4fc9c39e2c2acb9df94ead6e63d) | 
`public bool `[`InstanceId_IsSet`](#structFRHAPI__PlayerReport_1af6c6bde55f0204d93fefb5736905b2d2) | true if InstanceId_Optional has been set to a value
`public bool `[`InstanceId_IsNull`](#structFRHAPI__PlayerReport_1a136924969190ccb3d00057665c51e742) | true if InstanceId_Optional has been explicitly set to null
`public FString `[`MatchId_Optional`](#structFRHAPI__PlayerReport_1a51b57e66148af98ebe8a417a1934ebcd) | 
`public bool `[`MatchId_IsSet`](#structFRHAPI__PlayerReport_1a1329755fd98ef7f472e74f80292c613a) | true if MatchId_Optional has been set to a value
`public bool `[`MatchId_IsNull`](#structFRHAPI__PlayerReport_1a8d84366bfaac59225207032bb7e821f0) | true if MatchId_Optional has been explicitly set to null
`public FString `[`MatchSegment_Optional`](#structFRHAPI__PlayerReport_1a89059c798981790d55bc8139f471e6da) | 
`public bool `[`MatchSegment_IsSet`](#structFRHAPI__PlayerReport_1a1dd8140a5aa65f4811c2792939fcab8c) | true if MatchSegment_Optional has been set to a value
`public bool `[`MatchSegment_IsNull`](#structFRHAPI__PlayerReport_1ace124fe04042dfb20bd74bb0a7d962f6) | true if MatchSegment_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerReport_1a80153d5a0c0581838a4dd5d0f4fd0599) | Custom data for the report.
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerReport_1a0abbc656b7e49086f1d00fbf6c7efabd) | true if CustomData_Optional has been set to a value
`public FDateTime `[`Created_Optional`](#structFRHAPI__PlayerReport_1a2c81b6a985bb83ebde61d6aab1cbafea) | 
`public bool `[`Created_IsSet`](#structFRHAPI__PlayerReport_1a700bd42011d3674794ef12e43464e2fc) | true if Created_Optional has been set to a value
`public bool `[`Created_IsNull`](#structFRHAPI__PlayerReport_1afa350471d4bfc6240a3d382b5a678143) | true if Created_Optional has been explicitly set to null
`public FDateTime `[`Modified_Optional`](#structFRHAPI__PlayerReport_1a3bfc047d489eac3451a0966e32625228) | 
`public bool `[`Modified_IsSet`](#structFRHAPI__PlayerReport_1ad7fc9d8e0748891e1201a5df50c7a6b3) | true if Modified_Optional has been set to a value
`public bool `[`Modified_IsNull`](#structFRHAPI__PlayerReport_1a9d64070fe902e61898c072ad97ee5a1f) | true if Modified_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerReport_1a4aec662e297dc459fc66bfbbb9958ea4)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerReport_1a9d4364ef4218dbe0f0c2294e5eac4cfe)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetReportId`](#structFRHAPI__PlayerReport_1a30da2c1e9cf27299a3258fe36fec9d10)`()` | Gets the value of ReportId.
`public inline const FString & `[`GetReportId`](#structFRHAPI__PlayerReport_1a2fe2c5386e3bf320d142ddfcc146420b)`() const` | Gets the value of ReportId.
`public inline void `[`SetReportId`](#structFRHAPI__PlayerReport_1a96b1cc940a091c0d1d255caa285f29e5)`(const FString & NewValue)` | Sets the value of ReportId.
`public inline void `[`SetReportId`](#structFRHAPI__PlayerReport_1a56512ffa8f68fe8a82c7876a21e17d58)`(FString && NewValue)` | Sets the value of ReportId using move semantics.
`public inline FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a1f07b0329b84200359e695de0bf3182e)`()` | Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a1d411472b7b3d438a9f088ae964833f2)`() const` | Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a945edb6ad419b235d57ba038677bdc1f)`(const FGuid & DefaultValue) const` | Gets the value of SourcePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a069a886e501f96577f546bef5bbdfbcc)`(FGuid & OutValue) const` | Fills OutValue with the value of SourcePlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__PlayerReport_1acc79074e24e5261a14ad88bb8a78be83)`()` | Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__PlayerReport_1ae2be5bcb8dcfb94b5970aad3fea2cee8)`() const` | Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a1b2a7ccded8f0137999f985c330ec86b)`(const FGuid & NewValue)` | Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true.
`public inline void `[`SetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a235e0fc406bb3253abf22df85276cc66)`(FGuid && NewValue)` | Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a97a7000fa35325ceb49685aad4d82199)`()` | Clears the value of SourcePlayerUuid_Optional and sets SourcePlayerUuid_IsSet to false.
`public inline bool `[`IsSourcePlayerUuidSet`](#structFRHAPI__PlayerReport_1a19685c16bfe938ef80b09d7c0dea09e6)`() const` | Checks whether SourcePlayerUuid_Optional has been set.
`public inline void `[`SetSourcePlayerUuidToNull`](#structFRHAPI__PlayerReport_1ac613bc48b0693b90ec3829320e38093b)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsSourcePlayerUuidNull`](#structFRHAPI__PlayerReport_1a01882d5c3a7ce1debd5066a7882a14f5)`() const` | Checks whether SourcePlayerUuid_Optional is set to null.
`public inline int32 & `[`GetSourcePlayerId`](#structFRHAPI__PlayerReport_1aec964b15e5223e0c21f0e23e84153d70)`()` | Gets the value of SourcePlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetSourcePlayerId`](#structFRHAPI__PlayerReport_1a4d189f845852f372acf023d4157c51c7)`() const` | Gets the value of SourcePlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetSourcePlayerId`](#structFRHAPI__PlayerReport_1a79642d0bdc0a7e1843a503f2e9e8bff5)`(const int32 & DefaultValue) const` | Gets the value of SourcePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSourcePlayerId`](#structFRHAPI__PlayerReport_1a8013eb0e7b523c8b63de5afc26490a2d)`(int32 & OutValue) const` | Fills OutValue with the value of SourcePlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetSourcePlayerIdOrNull`](#structFRHAPI__PlayerReport_1a691166cce7c841a756b029d4d2215304)`()` | Returns a pointer to SourcePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetSourcePlayerIdOrNull`](#structFRHAPI__PlayerReport_1a8120b354341b2205d6bd92c5dbb16fb6)`() const` | Returns a pointer to SourcePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSourcePlayerId`](#structFRHAPI__PlayerReport_1a025e2e94ce6fa3329cdbe88e09d16fca)`(const int32 & NewValue)` | Sets the value of SourcePlayerId_Optional and also sets SourcePlayerId_IsSet to true.
`public inline void `[`SetSourcePlayerId`](#structFRHAPI__PlayerReport_1a25b4a6df5139c4e34069d52e5f2f9b34)`(int32 && NewValue)` | Sets the value of SourcePlayerId_Optional and also sets SourcePlayerId_IsSet to true using move semantics.
`public inline void `[`ClearSourcePlayerId`](#structFRHAPI__PlayerReport_1a2344462927f94ee3533b684debd2c485)`()` | Clears the value of SourcePlayerId_Optional and sets SourcePlayerId_IsSet to false.
`public inline bool `[`IsSourcePlayerIdSet`](#structFRHAPI__PlayerReport_1a58b42370588b10da37586d071be6bda6)`() const` | Checks whether SourcePlayerId_Optional has been set.
`public inline bool `[`IsSourcePlayerIdDefaultValue`](#structFRHAPI__PlayerReport_1a8c5ae31a8f7e3f52c62469cc39f120b1)`() const` | Returns true if SourcePlayerId_Optional is set and matches the default value.
`public inline void `[`SetSourcePlayerIdToDefault`](#structFRHAPI__PlayerReport_1adcd70f55ebd032fddcc57a5f0fc69b40)`()` | Sets the value of SourcePlayerId_Optional to its default and also sets SourcePlayerId_IsSet to true.
`public inline void `[`SetSourcePlayerIdToNull`](#structFRHAPI__PlayerReport_1ab959e4ec115dd6cdbb990f5a47c9dde6)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsSourcePlayerIdNull`](#structFRHAPI__PlayerReport_1ab5830a73b00038f2a99e7ce45f77b4a3)`() const` | Checks whether SourcePlayerId_Optional is set to null.
`public inline FGuid & `[`GetTargetPlayerUuid`](#structFRHAPI__PlayerReport_1ac12cec6acca4e7bbfa3d70fa91297644)`()` | Gets the value of TargetPlayerUuid.
`public inline const FGuid & `[`GetTargetPlayerUuid`](#structFRHAPI__PlayerReport_1a110581b0741cc6714638b0335a1c696a)`() const` | Gets the value of TargetPlayerUuid.
`public inline void `[`SetTargetPlayerUuid`](#structFRHAPI__PlayerReport_1af96b8aa959f9f33a9e668f89d3c74d40)`(const FGuid & NewValue)` | Sets the value of TargetPlayerUuid.
`public inline void `[`SetTargetPlayerUuid`](#structFRHAPI__PlayerReport_1a26e75da7e2f8d60c3529530d48fb13d4)`(FGuid && NewValue)` | Sets the value of TargetPlayerUuid using move semantics.
`public inline void `[`SetTargetPlayerUuidToNull`](#structFRHAPI__PlayerReport_1a7a05210bda603712cc76bf52cc6091fb)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsTargetPlayerUuidNull`](#structFRHAPI__PlayerReport_1a83cd6826fdf7254b9d55ebb8a90fa24e)`() const` | Checks whether TargetPlayerUuid is set to null.
`public inline int32 & `[`GetTargetPlayerId`](#structFRHAPI__PlayerReport_1acfce542dfc3fd155b0a0f60759b0d59c)`()` | Gets the value of TargetPlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTargetPlayerId`](#structFRHAPI__PlayerReport_1a4aa8786a504512c2ea044baa8591251e)`() const` | Gets the value of TargetPlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTargetPlayerId`](#structFRHAPI__PlayerReport_1a0c824582bbbe54d6dcb527463370483e)`(const int32 & DefaultValue) const` | Gets the value of TargetPlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTargetPlayerId`](#structFRHAPI__PlayerReport_1a1e18509dd703d846ffb96fa1b1e5dbc4)`(int32 & OutValue) const` | Fills OutValue with the value of TargetPlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTargetPlayerIdOrNull`](#structFRHAPI__PlayerReport_1ad7812788856a9ab95988754ab182c9e4)`()` | Returns a pointer to TargetPlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTargetPlayerIdOrNull`](#structFRHAPI__PlayerReport_1abe4bd9b5beb1a1ea711abae0ea6b79f0)`() const` | Returns a pointer to TargetPlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTargetPlayerId`](#structFRHAPI__PlayerReport_1a18356f9f48f15e5abc0e52aaf4007af5)`(const int32 & NewValue)` | Sets the value of TargetPlayerId_Optional and also sets TargetPlayerId_IsSet to true.
`public inline void `[`SetTargetPlayerId`](#structFRHAPI__PlayerReport_1a89cb5fbc44dbc9e1a1817b07e5bead9c)`(int32 && NewValue)` | Sets the value of TargetPlayerId_Optional and also sets TargetPlayerId_IsSet to true using move semantics.
`public inline void `[`ClearTargetPlayerId`](#structFRHAPI__PlayerReport_1a9e65eafed1ef63b813a5e989a342503d)`()` | Clears the value of TargetPlayerId_Optional and sets TargetPlayerId_IsSet to false.
`public inline bool `[`IsTargetPlayerIdSet`](#structFRHAPI__PlayerReport_1af312552fc155490cdaad049946e6fd98)`() const` | Checks whether TargetPlayerId_Optional has been set.
`public inline bool `[`IsTargetPlayerIdDefaultValue`](#structFRHAPI__PlayerReport_1acb350781b50b85ef46ca2baec0cf0ce2)`() const` | Returns true if TargetPlayerId_Optional is set and matches the default value.
`public inline void `[`SetTargetPlayerIdToDefault`](#structFRHAPI__PlayerReport_1a181c104cf04cab05e21564fe328fc901)`()` | Sets the value of TargetPlayerId_Optional to its default and also sets TargetPlayerId_IsSet to true.
`public inline void `[`SetTargetPlayerIdToNull`](#structFRHAPI__PlayerReport_1ae43f5d15fc9dfef152b53eb5cd06156a)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsTargetPlayerIdNull`](#structFRHAPI__PlayerReport_1a62b26d50e71061265393a2a66c48a7bf)`() const` | Checks whether TargetPlayerId_Optional is set to null.
`public inline ERHAPI_ReportReason & `[`GetReason`](#structFRHAPI__PlayerReport_1ab4bb02130cc091947179ebc4204846f9)`()` | Gets the value of Reason.
`public inline const ERHAPI_ReportReason & `[`GetReason`](#structFRHAPI__PlayerReport_1a61131a2ff5979d7723eaacaaa720abc3)`() const` | Gets the value of Reason.
`public inline void `[`SetReason`](#structFRHAPI__PlayerReport_1a9a91c5b782ecb79a37930d0c0ba1e4d5)`(const ERHAPI_ReportReason & NewValue)` | Sets the value of Reason.
`public inline void `[`SetReason`](#structFRHAPI__PlayerReport_1adf35badf48befcc45d669d7b55e55295)`(ERHAPI_ReportReason && NewValue)` | Sets the value of Reason using move semantics.
`public inline FString & `[`GetDescription`](#structFRHAPI__PlayerReport_1a913f1b49eb8c15f86290695ffb1fe652)`()` | Gets the value of Description_Optional, regardless of it having been set.
`public inline const FString & `[`GetDescription`](#structFRHAPI__PlayerReport_1a2aae0da9effe6efad32d9035f9b173d2)`() const` | Gets the value of Description_Optional, regardless of it having been set.
`public inline const FString & `[`GetDescription`](#structFRHAPI__PlayerReport_1a8317edb22de93a4e76c8288533aead60)`(const FString & DefaultValue) const` | Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDescription`](#structFRHAPI__PlayerReport_1a3c207c11ac9578efe9e663194d0f5055)`(FString & OutValue) const` | Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDescriptionOrNull`](#structFRHAPI__PlayerReport_1ac96de3cd4b16c034d9ce122281949d75)`()` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDescriptionOrNull`](#structFRHAPI__PlayerReport_1a1e268a4410965a93ea36975cf44d00e6)`() const` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDescription`](#structFRHAPI__PlayerReport_1a88a8ad2c7fc3344868e18ec05a843741)`(const FString & NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true.
`public inline void `[`SetDescription`](#structFRHAPI__PlayerReport_1a641d00640d6c78ef304caf4c1711f226)`(FString && NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true using move semantics.
`public inline void `[`ClearDescription`](#structFRHAPI__PlayerReport_1a538e1c8d7a4c7ee210040970d062c7b7)`()` | Clears the value of Description_Optional and sets Description_IsSet to false.
`public inline bool `[`IsDescriptionSet`](#structFRHAPI__PlayerReport_1abe02f62faae0df826efa9235abd23bd0)`() const` | Checks whether Description_Optional has been set.
`public inline void `[`SetDescriptionToNull`](#structFRHAPI__PlayerReport_1a3ecfd514af0f169a7e537b84a9930d01)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsDescriptionNull`](#structFRHAPI__PlayerReport_1ae81b9b9a03e2c42a329bab6404b65e21)`() const` | Checks whether Description_Optional is set to null.
`public inline FString & `[`GetSessionId`](#structFRHAPI__PlayerReport_1a786a82bf4147f6b7376c7e98bc94cfa4)`()` | Gets the value of SessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__PlayerReport_1ac397b13af8dfab88dda65c5e5f616701)`() const` | Gets the value of SessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__PlayerReport_1a1ca377fa1bfb3fce9cab02aa70cf7243)`(const FString & DefaultValue) const` | Gets the value of SessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessionId`](#structFRHAPI__PlayerReport_1a11b3bf55c8ab407496f6282d7c89b528)`(FString & OutValue) const` | Fills OutValue with the value of SessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetSessionIdOrNull`](#structFRHAPI__PlayerReport_1a3b12418b69690b26d838fe2f0d653475)`()` | Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetSessionIdOrNull`](#structFRHAPI__PlayerReport_1a6850fa05a881d0b8c98a735d9f9f9864)`() const` | Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessionId`](#structFRHAPI__PlayerReport_1a3b873cc5b9d5f599c3ac8790371ab28c)`(const FString & NewValue)` | Sets the value of SessionId_Optional and also sets SessionId_IsSet to true.
`public inline void `[`SetSessionId`](#structFRHAPI__PlayerReport_1a6713c9260321f8580f439f11afecdb0b)`(FString && NewValue)` | Sets the value of SessionId_Optional and also sets SessionId_IsSet to true using move semantics.
`public inline void `[`ClearSessionId`](#structFRHAPI__PlayerReport_1ac11ae75048c12ead402ab706c2942b51)`()` | Clears the value of SessionId_Optional and sets SessionId_IsSet to false.
`public inline bool `[`IsSessionIdSet`](#structFRHAPI__PlayerReport_1aeacefe3a88ebe5e6d9ba79558a2ebda8)`() const` | Checks whether SessionId_Optional has been set.
`public inline void `[`SetSessionIdToNull`](#structFRHAPI__PlayerReport_1a1e4f2b28cbeaac64fbede3a9e5703af4)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsSessionIdNull`](#structFRHAPI__PlayerReport_1a59fa40f324859242774adb429f6ac806)`() const` | Checks whether SessionId_Optional is set to null.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__PlayerReport_1aa50c886b0dc5dbccd74c52b42c176852)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerReport_1a9c56c0f77d6eff83145f04bc0c4d3305)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerReport_1a1c6ed1cd2fcfb832c3b2d84afe24372c)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceId`](#structFRHAPI__PlayerReport_1a78888291edce495a6edfdef4568e4cf9)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerReport_1ae55d935dd5194a2e2e4bb32d3374661f)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerReport_1af029d1e60a2eead86cc2741b264ea65a)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceId`](#structFRHAPI__PlayerReport_1a4d049d31e0d46d18352b1472ae4c1ce0)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline void `[`SetInstanceId`](#structFRHAPI__PlayerReport_1a7485b014ec1b0b1c88ae9e72b7a22885)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerReport_1a318e81296d4530aa395cb9ce323aaf10)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline bool `[`IsInstanceIdSet`](#structFRHAPI__PlayerReport_1ad659bcb7118d58cc9272c5678add8913)`() const` | Checks whether InstanceId_Optional has been set.
`public inline void `[`SetInstanceIdToNull`](#structFRHAPI__PlayerReport_1a9a3788eb20d7c94e998857329831d9fc)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInstanceIdNull`](#structFRHAPI__PlayerReport_1aefa93ed3db1d8c6f5836a42f277d20ed)`() const` | Checks whether InstanceId_Optional is set to null.
`public inline FString & `[`GetMatchId`](#structFRHAPI__PlayerReport_1a911f58552b663e6605d856f10093d22f)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerReport_1a39c20daed468b80460c671115f28d5ff)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerReport_1aea3e6ef38720907b977eb712fdb4dbd1)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchId`](#structFRHAPI__PlayerReport_1aeee2a7624a172f08980ed46a7f5a299b)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerReport_1af4051cece051b30bd850bcdf3407a1af)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerReport_1acc8f97b54d9abfa0e4ffc1d5481a6cce)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchId`](#structFRHAPI__PlayerReport_1a911259e83f86488a3892467edc921250)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline void `[`SetMatchId`](#structFRHAPI__PlayerReport_1aad4d02b2c7bf6134271adf152550ac1e)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__PlayerReport_1ac5cdcfbdb2a8fd6732bd130cf6da9a56)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline bool `[`IsMatchIdSet`](#structFRHAPI__PlayerReport_1a71b8050bab1bfb81f22e2c40590b50e2)`() const` | Checks whether MatchId_Optional has been set.
`public inline void `[`SetMatchIdToNull`](#structFRHAPI__PlayerReport_1a0c94556db5eab62e375e2f3bab856457)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsMatchIdNull`](#structFRHAPI__PlayerReport_1ab872caed922c26f83384b6743a4be1fa)`() const` | Checks whether MatchId_Optional is set to null.
`public inline FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReport_1a6a1c6e07a789e072bd312c5f48116c1a)`()` | Gets the value of MatchSegment_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReport_1a4ded81600fdca17cce2b020bc6b6d123)`() const` | Gets the value of MatchSegment_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReport_1abb20b774e437fd580e95192518c4fe5a)`(const FString & DefaultValue) const` | Gets the value of MatchSegment_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchSegment`](#structFRHAPI__PlayerReport_1a25a74a37312065b9d0d43d4361f42e50)`(FString & OutValue) const` | Fills OutValue with the value of MatchSegment_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchSegmentOrNull`](#structFRHAPI__PlayerReport_1a9783e8be7f0ddd29046d8f90caa65aa0)`()` | Returns a pointer to MatchSegment_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchSegmentOrNull`](#structFRHAPI__PlayerReport_1abbcf05c7dcbd3dbcdf28e01a3327c1c9)`() const` | Returns a pointer to MatchSegment_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchSegment`](#structFRHAPI__PlayerReport_1aff85e1a6c8f2c0c5cbdb5553f22fe50c)`(const FString & NewValue)` | Sets the value of MatchSegment_Optional and also sets MatchSegment_IsSet to true.
`public inline void `[`SetMatchSegment`](#structFRHAPI__PlayerReport_1a56181a729b56ee6dc566efdc4ce124eb)`(FString && NewValue)` | Sets the value of MatchSegment_Optional and also sets MatchSegment_IsSet to true using move semantics.
`public inline void `[`ClearMatchSegment`](#structFRHAPI__PlayerReport_1ae4cc911288e101f606d03eff84cda53e)`()` | Clears the value of MatchSegment_Optional and sets MatchSegment_IsSet to false.
`public inline bool `[`IsMatchSegmentSet`](#structFRHAPI__PlayerReport_1a6e69a8f17645a8491be141f617a312e2)`() const` | Checks whether MatchSegment_Optional has been set.
`public inline void `[`SetMatchSegmentToNull`](#structFRHAPI__PlayerReport_1a0511f1cbcf54a11a63d74255d67cbeb4)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsMatchSegmentNull`](#structFRHAPI__PlayerReport_1a194d421fe1a38829b74bfde4ff58ba32)`() const` | Checks whether MatchSegment_Optional is set to null.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReport_1a325448b4428849c551ff6b20f3d4da40)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReport_1a74226ffea4a0e871e554c52709fbf4a7)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReport_1a6c4c0887589a8e93cc815489c00eb715)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PlayerReport_1a6c4782fe7af4eb5bb5e56c6949af09dd)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerReport_1adbbe628fbae7ec5cad4c92fd095fe6ce)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerReport_1aa3b3bd5c80fdf939abff8d2613f9e6eb)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PlayerReport_1a2d3a4d1c6f554a43f0b5930cc9aa26d7)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__PlayerReport_1acd1915e78e6e0af5ec1cb40e4505fd55)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlayerReport_1a9606358d4d6002b8c069eeeb1b3c4ae8)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlayerReport_1a74facbcda459bb100c45c958fd5b4091)`() const` | Checks whether CustomData_Optional has been set.
`public inline FDateTime & `[`GetCreated`](#structFRHAPI__PlayerReport_1a6003fb1cfbd1d2ba075247c5e1fd1504)`()` | Gets the value of Created_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetCreated`](#structFRHAPI__PlayerReport_1a1fabba1ac6d7c689d5ca3814807deedb)`() const` | Gets the value of Created_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetCreated`](#structFRHAPI__PlayerReport_1afff0fb8bc2ea776f4b58541613bf4693)`(const FDateTime & DefaultValue) const` | Gets the value of Created_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCreated`](#structFRHAPI__PlayerReport_1a1ea1f362d419449035758fe38c0d1e1c)`(FDateTime & OutValue) const` | Fills OutValue with the value of Created_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetCreatedOrNull`](#structFRHAPI__PlayerReport_1aa0805386945d051b0b9f00edcf8b0a0f)`()` | Returns a pointer to Created_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetCreatedOrNull`](#structFRHAPI__PlayerReport_1a9d3bcd5395b1c5cb1ac02fbf7cd9241d)`() const` | Returns a pointer to Created_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCreated`](#structFRHAPI__PlayerReport_1a9288cc57ae10007f7236313f0597d013)`(const FDateTime & NewValue)` | Sets the value of Created_Optional and also sets Created_IsSet to true.
`public inline void `[`SetCreated`](#structFRHAPI__PlayerReport_1aa555723bf6c4d472b0847cd1e27b30e1)`(FDateTime && NewValue)` | Sets the value of Created_Optional and also sets Created_IsSet to true using move semantics.
`public inline void `[`ClearCreated`](#structFRHAPI__PlayerReport_1ab68bb775bda9f07033c7e810999e8f0d)`()` | Clears the value of Created_Optional and sets Created_IsSet to false.
`public inline bool `[`IsCreatedSet`](#structFRHAPI__PlayerReport_1a30bfbef810ba19b8bdb60eb9ca99e9af)`() const` | Checks whether Created_Optional has been set.
`public inline void `[`SetCreatedToNull`](#structFRHAPI__PlayerReport_1af1a13465492f3362adcd4f9060c14249)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCreatedNull`](#structFRHAPI__PlayerReport_1aecb487e34add5d5886efd663070334f0)`() const` | Checks whether Created_Optional is set to null.
`public inline FDateTime & `[`GetModified`](#structFRHAPI__PlayerReport_1af1c65b4f1bbdd5148bc98b6b46032521)`()` | Gets the value of Modified_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetModified`](#structFRHAPI__PlayerReport_1a85868985d0a4945f43a941963fb20366)`() const` | Gets the value of Modified_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetModified`](#structFRHAPI__PlayerReport_1a7422c0b9f564cab799285fef28159836)`(const FDateTime & DefaultValue) const` | Gets the value of Modified_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetModified`](#structFRHAPI__PlayerReport_1a9eb7bbd95743e4021ea5ae436322bb4b)`(FDateTime & OutValue) const` | Fills OutValue with the value of Modified_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetModifiedOrNull`](#structFRHAPI__PlayerReport_1a4f608c33995673142275a97615d6c657)`()` | Returns a pointer to Modified_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetModifiedOrNull`](#structFRHAPI__PlayerReport_1a6132b579c75e3e21e13b6def3ac61bd8)`() const` | Returns a pointer to Modified_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetModified`](#structFRHAPI__PlayerReport_1ad340775dd5b266563cc1e429b0faf332)`(const FDateTime & NewValue)` | Sets the value of Modified_Optional and also sets Modified_IsSet to true.
`public inline void `[`SetModified`](#structFRHAPI__PlayerReport_1aacaab82704aa92d25ee3994e987f81bc)`(FDateTime && NewValue)` | Sets the value of Modified_Optional and also sets Modified_IsSet to true using move semantics.
`public inline void `[`ClearModified`](#structFRHAPI__PlayerReport_1a4fff49337b878205f0b1956483f42b25)`()` | Clears the value of Modified_Optional and sets Modified_IsSet to false.
`public inline bool `[`IsModifiedSet`](#structFRHAPI__PlayerReport_1a4b0c4907861fea0a24df2f4b8794e88a)`() const` | Checks whether Modified_Optional has been set.
`public inline void `[`SetModifiedToNull`](#structFRHAPI__PlayerReport_1aa1b1a8b26ac6eee72b02b04f9718478c)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsModifiedNull`](#structFRHAPI__PlayerReport_1a53575141dfbc85706c0562d2f5ee3958)`() const` | Checks whether Modified_Optional is set to null.

### Members

#### `public FString `[`ReportId`](#structFRHAPI__PlayerReport_1a93c9d12fc7e83a4a07602d3b3e58d8e5) <a id="structFRHAPI__PlayerReport_1a93c9d12fc7e83a4a07602d3b3e58d8e5"></a>

Unique ID for the player report.

#### `public FGuid `[`SourcePlayerUuid_Optional`](#structFRHAPI__PlayerReport_1a08fcb28e363b0a610b2094345fef71e8) <a id="structFRHAPI__PlayerReport_1a08fcb28e363b0a610b2094345fef71e8"></a>

#### `public bool `[`SourcePlayerUuid_IsSet`](#structFRHAPI__PlayerReport_1a94013524f43688f57365448ab547f541) <a id="structFRHAPI__PlayerReport_1a94013524f43688f57365448ab547f541"></a>

true if SourcePlayerUuid_Optional has been set to a value

#### `public bool `[`SourcePlayerUuid_IsNull`](#structFRHAPI__PlayerReport_1a654dcc14800c231a347ef13c9d146c4f) <a id="structFRHAPI__PlayerReport_1a654dcc14800c231a347ef13c9d146c4f"></a>

true if SourcePlayerUuid_Optional has been explicitly set to null

#### `public int32 `[`SourcePlayerId_Optional`](#structFRHAPI__PlayerReport_1a29877b89c3d77b314fa88b0a36498b2e) <a id="structFRHAPI__PlayerReport_1a29877b89c3d77b314fa88b0a36498b2e"></a>

#### `public bool `[`SourcePlayerId_IsSet`](#structFRHAPI__PlayerReport_1aae1e2d68510288a651f3c428885584ce) <a id="structFRHAPI__PlayerReport_1aae1e2d68510288a651f3c428885584ce"></a>

true if SourcePlayerId_Optional has been set to a value

#### `public bool `[`SourcePlayerId_IsNull`](#structFRHAPI__PlayerReport_1af65cf90e564feaf36c9a7fff46cd3554) <a id="structFRHAPI__PlayerReport_1af65cf90e564feaf36c9a7fff46cd3554"></a>

true if SourcePlayerId_Optional has been explicitly set to null

#### `public FGuid `[`TargetPlayerUuid`](#structFRHAPI__PlayerReport_1ac7f4d142d3bcdb3fe0f0514190135171) <a id="structFRHAPI__PlayerReport_1ac7f4d142d3bcdb3fe0f0514190135171"></a>

#### `public bool `[`TargetPlayerUuid_IsNull`](#structFRHAPI__PlayerReport_1a89d8759f295f1fa913309de597037e26) <a id="structFRHAPI__PlayerReport_1a89d8759f295f1fa913309de597037e26"></a>

true if TargetPlayerUuid has been explicitly set to null

#### `public int32 `[`TargetPlayerId_Optional`](#structFRHAPI__PlayerReport_1a77af8cbee84b001e9392e1e98e1b3cbb) <a id="structFRHAPI__PlayerReport_1a77af8cbee84b001e9392e1e98e1b3cbb"></a>

#### `public bool `[`TargetPlayerId_IsSet`](#structFRHAPI__PlayerReport_1a044e3dabe75fcf0fe113bf41889b7a78) <a id="structFRHAPI__PlayerReport_1a044e3dabe75fcf0fe113bf41889b7a78"></a>

true if TargetPlayerId_Optional has been set to a value

#### `public bool `[`TargetPlayerId_IsNull`](#structFRHAPI__PlayerReport_1a612f015e64f6b35b05d5d347a1bf16a5) <a id="structFRHAPI__PlayerReport_1a612f015e64f6b35b05d5d347a1bf16a5"></a>

true if TargetPlayerId_Optional has been explicitly set to null

#### `public ERHAPI_ReportReason `[`Reason`](#structFRHAPI__PlayerReport_1ae3feb519772ec26847bab22bfea8f9c9) <a id="structFRHAPI__PlayerReport_1ae3feb519772ec26847bab22bfea8f9c9"></a>

The reason for the report.

#### `public FString `[`Description_Optional`](#structFRHAPI__PlayerReport_1a9a2aae9e03ee80fe7c057261fa5f4a08) <a id="structFRHAPI__PlayerReport_1a9a2aae9e03ee80fe7c057261fa5f4a08"></a>

#### `public bool `[`Description_IsSet`](#structFRHAPI__PlayerReport_1a21ca401a324d2c44569fe1d39f567983) <a id="structFRHAPI__PlayerReport_1a21ca401a324d2c44569fe1d39f567983"></a>

true if Description_Optional has been set to a value

#### `public bool `[`Description_IsNull`](#structFRHAPI__PlayerReport_1a7ef876da931a7878b9ef383dee6fec53) <a id="structFRHAPI__PlayerReport_1a7ef876da931a7878b9ef383dee6fec53"></a>

true if Description_Optional has been explicitly set to null

#### `public FString `[`SessionId_Optional`](#structFRHAPI__PlayerReport_1ac5f256086a91a6e57a0d2108d4a80e65) <a id="structFRHAPI__PlayerReport_1ac5f256086a91a6e57a0d2108d4a80e65"></a>

#### `public bool `[`SessionId_IsSet`](#structFRHAPI__PlayerReport_1a6ba5108860799819379363ea7a158c25) <a id="structFRHAPI__PlayerReport_1a6ba5108860799819379363ea7a158c25"></a>

true if SessionId_Optional has been set to a value

#### `public bool `[`SessionId_IsNull`](#structFRHAPI__PlayerReport_1af7eda6bc423f0b27dc37168179e9159f) <a id="structFRHAPI__PlayerReport_1af7eda6bc423f0b27dc37168179e9159f"></a>

true if SessionId_Optional has been explicitly set to null

#### `public FString `[`InstanceId_Optional`](#structFRHAPI__PlayerReport_1a693fd4fc9c39e2c2acb9df94ead6e63d) <a id="structFRHAPI__PlayerReport_1a693fd4fc9c39e2c2acb9df94ead6e63d"></a>

#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__PlayerReport_1af6c6bde55f0204d93fefb5736905b2d2) <a id="structFRHAPI__PlayerReport_1af6c6bde55f0204d93fefb5736905b2d2"></a>

true if InstanceId_Optional has been set to a value

#### `public bool `[`InstanceId_IsNull`](#structFRHAPI__PlayerReport_1a136924969190ccb3d00057665c51e742) <a id="structFRHAPI__PlayerReport_1a136924969190ccb3d00057665c51e742"></a>

true if InstanceId_Optional has been explicitly set to null

#### `public FString `[`MatchId_Optional`](#structFRHAPI__PlayerReport_1a51b57e66148af98ebe8a417a1934ebcd) <a id="structFRHAPI__PlayerReport_1a51b57e66148af98ebe8a417a1934ebcd"></a>

#### `public bool `[`MatchId_IsSet`](#structFRHAPI__PlayerReport_1a1329755fd98ef7f472e74f80292c613a) <a id="structFRHAPI__PlayerReport_1a1329755fd98ef7f472e74f80292c613a"></a>

true if MatchId_Optional has been set to a value

#### `public bool `[`MatchId_IsNull`](#structFRHAPI__PlayerReport_1a8d84366bfaac59225207032bb7e821f0) <a id="structFRHAPI__PlayerReport_1a8d84366bfaac59225207032bb7e821f0"></a>

true if MatchId_Optional has been explicitly set to null

#### `public FString `[`MatchSegment_Optional`](#structFRHAPI__PlayerReport_1a89059c798981790d55bc8139f471e6da) <a id="structFRHAPI__PlayerReport_1a89059c798981790d55bc8139f471e6da"></a>

#### `public bool `[`MatchSegment_IsSet`](#structFRHAPI__PlayerReport_1a1dd8140a5aa65f4811c2792939fcab8c) <a id="structFRHAPI__PlayerReport_1a1dd8140a5aa65f4811c2792939fcab8c"></a>

true if MatchSegment_Optional has been set to a value

#### `public bool `[`MatchSegment_IsNull`](#structFRHAPI__PlayerReport_1ace124fe04042dfb20bd74bb0a7d962f6) <a id="structFRHAPI__PlayerReport_1ace124fe04042dfb20bd74bb0a7d962f6"></a>

true if MatchSegment_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerReport_1a80153d5a0c0581838a4dd5d0f4fd0599) <a id="structFRHAPI__PlayerReport_1a80153d5a0c0581838a4dd5d0f4fd0599"></a>

Custom data for the report.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerReport_1a0abbc656b7e49086f1d00fbf6c7efabd) <a id="structFRHAPI__PlayerReport_1a0abbc656b7e49086f1d00fbf6c7efabd"></a>

true if CustomData_Optional has been set to a value

#### `public FDateTime `[`Created_Optional`](#structFRHAPI__PlayerReport_1a2c81b6a985bb83ebde61d6aab1cbafea) <a id="structFRHAPI__PlayerReport_1a2c81b6a985bb83ebde61d6aab1cbafea"></a>

#### `public bool `[`Created_IsSet`](#structFRHAPI__PlayerReport_1a700bd42011d3674794ef12e43464e2fc) <a id="structFRHAPI__PlayerReport_1a700bd42011d3674794ef12e43464e2fc"></a>

true if Created_Optional has been set to a value

#### `public bool `[`Created_IsNull`](#structFRHAPI__PlayerReport_1afa350471d4bfc6240a3d382b5a678143) <a id="structFRHAPI__PlayerReport_1afa350471d4bfc6240a3d382b5a678143"></a>

true if Created_Optional has been explicitly set to null

#### `public FDateTime `[`Modified_Optional`](#structFRHAPI__PlayerReport_1a3bfc047d489eac3451a0966e32625228) <a id="structFRHAPI__PlayerReport_1a3bfc047d489eac3451a0966e32625228"></a>

#### `public bool `[`Modified_IsSet`](#structFRHAPI__PlayerReport_1ad7fc9d8e0748891e1201a5df50c7a6b3) <a id="structFRHAPI__PlayerReport_1ad7fc9d8e0748891e1201a5df50c7a6b3"></a>

true if Modified_Optional has been set to a value

#### `public bool `[`Modified_IsNull`](#structFRHAPI__PlayerReport_1a9d64070fe902e61898c072ad97ee5a1f) <a id="structFRHAPI__PlayerReport_1a9d64070fe902e61898c072ad97ee5a1f"></a>

true if Modified_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerReport_1a4aec662e297dc459fc66bfbbb9958ea4)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerReport_1a4aec662e297dc459fc66bfbbb9958ea4"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerReport_1a9d4364ef4218dbe0f0c2294e5eac4cfe)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerReport_1a9d4364ef4218dbe0f0c2294e5eac4cfe"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetReportId`](#structFRHAPI__PlayerReport_1a30da2c1e9cf27299a3258fe36fec9d10)`()` <a id="structFRHAPI__PlayerReport_1a30da2c1e9cf27299a3258fe36fec9d10"></a>

Gets the value of ReportId.

#### `public inline const FString & `[`GetReportId`](#structFRHAPI__PlayerReport_1a2fe2c5386e3bf320d142ddfcc146420b)`() const` <a id="structFRHAPI__PlayerReport_1a2fe2c5386e3bf320d142ddfcc146420b"></a>

Gets the value of ReportId.

#### `public inline void `[`SetReportId`](#structFRHAPI__PlayerReport_1a96b1cc940a091c0d1d255caa285f29e5)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReport_1a96b1cc940a091c0d1d255caa285f29e5"></a>

Sets the value of ReportId.

#### `public inline void `[`SetReportId`](#structFRHAPI__PlayerReport_1a56512ffa8f68fe8a82c7876a21e17d58)`(FString && NewValue)` <a id="structFRHAPI__PlayerReport_1a56512ffa8f68fe8a82c7876a21e17d58"></a>

Sets the value of ReportId using move semantics.

#### `public inline FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a1f07b0329b84200359e695de0bf3182e)`()` <a id="structFRHAPI__PlayerReport_1a1f07b0329b84200359e695de0bf3182e"></a>

Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a1d411472b7b3d438a9f088ae964833f2)`() const` <a id="structFRHAPI__PlayerReport_1a1d411472b7b3d438a9f088ae964833f2"></a>

Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a945edb6ad419b235d57ba038677bdc1f)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1a945edb6ad419b235d57ba038677bdc1f"></a>

Gets the value of SourcePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a069a886e501f96577f546bef5bbdfbcc)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerReport_1a069a886e501f96577f546bef5bbdfbcc"></a>

Fills OutValue with the value of SourcePlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__PlayerReport_1acc79074e24e5261a14ad88bb8a78be83)`()` <a id="structFRHAPI__PlayerReport_1acc79074e24e5261a14ad88bb8a78be83"></a>

Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__PlayerReport_1ae2be5bcb8dcfb94b5970aad3fea2cee8)`() const` <a id="structFRHAPI__PlayerReport_1ae2be5bcb8dcfb94b5970aad3fea2cee8"></a>

Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a1b2a7ccded8f0137999f985c330ec86b)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerReport_1a1b2a7ccded8f0137999f985c330ec86b"></a>

Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true.

#### `public inline void `[`SetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a235e0fc406bb3253abf22df85276cc66)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerReport_1a235e0fc406bb3253abf22df85276cc66"></a>

Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a97a7000fa35325ceb49685aad4d82199)`()` <a id="structFRHAPI__PlayerReport_1a97a7000fa35325ceb49685aad4d82199"></a>

Clears the value of SourcePlayerUuid_Optional and sets SourcePlayerUuid_IsSet to false.

#### `public inline bool `[`IsSourcePlayerUuidSet`](#structFRHAPI__PlayerReport_1a19685c16bfe938ef80b09d7c0dea09e6)`() const` <a id="structFRHAPI__PlayerReport_1a19685c16bfe938ef80b09d7c0dea09e6"></a>

Checks whether SourcePlayerUuid_Optional has been set.

#### `public inline void `[`SetSourcePlayerUuidToNull`](#structFRHAPI__PlayerReport_1ac613bc48b0693b90ec3829320e38093b)`()` <a id="structFRHAPI__PlayerReport_1ac613bc48b0693b90ec3829320e38093b"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsSourcePlayerUuidNull`](#structFRHAPI__PlayerReport_1a01882d5c3a7ce1debd5066a7882a14f5)`() const` <a id="structFRHAPI__PlayerReport_1a01882d5c3a7ce1debd5066a7882a14f5"></a>

Checks whether SourcePlayerUuid_Optional is set to null.

#### `public inline int32 & `[`GetSourcePlayerId`](#structFRHAPI__PlayerReport_1aec964b15e5223e0c21f0e23e84153d70)`()` <a id="structFRHAPI__PlayerReport_1aec964b15e5223e0c21f0e23e84153d70"></a>

Gets the value of SourcePlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetSourcePlayerId`](#structFRHAPI__PlayerReport_1a4d189f845852f372acf023d4157c51c7)`() const` <a id="structFRHAPI__PlayerReport_1a4d189f845852f372acf023d4157c51c7"></a>

Gets the value of SourcePlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetSourcePlayerId`](#structFRHAPI__PlayerReport_1a79642d0bdc0a7e1843a503f2e9e8bff5)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1a79642d0bdc0a7e1843a503f2e9e8bff5"></a>

Gets the value of SourcePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSourcePlayerId`](#structFRHAPI__PlayerReport_1a8013eb0e7b523c8b63de5afc26490a2d)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerReport_1a8013eb0e7b523c8b63de5afc26490a2d"></a>

Fills OutValue with the value of SourcePlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetSourcePlayerIdOrNull`](#structFRHAPI__PlayerReport_1a691166cce7c841a756b029d4d2215304)`()` <a id="structFRHAPI__PlayerReport_1a691166cce7c841a756b029d4d2215304"></a>

Returns a pointer to SourcePlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetSourcePlayerIdOrNull`](#structFRHAPI__PlayerReport_1a8120b354341b2205d6bd92c5dbb16fb6)`() const` <a id="structFRHAPI__PlayerReport_1a8120b354341b2205d6bd92c5dbb16fb6"></a>

Returns a pointer to SourcePlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSourcePlayerId`](#structFRHAPI__PlayerReport_1a025e2e94ce6fa3329cdbe88e09d16fca)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerReport_1a025e2e94ce6fa3329cdbe88e09d16fca"></a>

Sets the value of SourcePlayerId_Optional and also sets SourcePlayerId_IsSet to true.

#### `public inline void `[`SetSourcePlayerId`](#structFRHAPI__PlayerReport_1a25b4a6df5139c4e34069d52e5f2f9b34)`(int32 && NewValue)` <a id="structFRHAPI__PlayerReport_1a25b4a6df5139c4e34069d52e5f2f9b34"></a>

Sets the value of SourcePlayerId_Optional and also sets SourcePlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearSourcePlayerId`](#structFRHAPI__PlayerReport_1a2344462927f94ee3533b684debd2c485)`()` <a id="structFRHAPI__PlayerReport_1a2344462927f94ee3533b684debd2c485"></a>

Clears the value of SourcePlayerId_Optional and sets SourcePlayerId_IsSet to false.

#### `public inline bool `[`IsSourcePlayerIdSet`](#structFRHAPI__PlayerReport_1a58b42370588b10da37586d071be6bda6)`() const` <a id="structFRHAPI__PlayerReport_1a58b42370588b10da37586d071be6bda6"></a>

Checks whether SourcePlayerId_Optional has been set.

#### `public inline bool `[`IsSourcePlayerIdDefaultValue`](#structFRHAPI__PlayerReport_1a8c5ae31a8f7e3f52c62469cc39f120b1)`() const` <a id="structFRHAPI__PlayerReport_1a8c5ae31a8f7e3f52c62469cc39f120b1"></a>

Returns true if SourcePlayerId_Optional is set and matches the default value.

#### `public inline void `[`SetSourcePlayerIdToDefault`](#structFRHAPI__PlayerReport_1adcd70f55ebd032fddcc57a5f0fc69b40)`()` <a id="structFRHAPI__PlayerReport_1adcd70f55ebd032fddcc57a5f0fc69b40"></a>

Sets the value of SourcePlayerId_Optional to its default and also sets SourcePlayerId_IsSet to true.

#### `public inline void `[`SetSourcePlayerIdToNull`](#structFRHAPI__PlayerReport_1ab959e4ec115dd6cdbb990f5a47c9dde6)`()` <a id="structFRHAPI__PlayerReport_1ab959e4ec115dd6cdbb990f5a47c9dde6"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsSourcePlayerIdNull`](#structFRHAPI__PlayerReport_1ab5830a73b00038f2a99e7ce45f77b4a3)`() const` <a id="structFRHAPI__PlayerReport_1ab5830a73b00038f2a99e7ce45f77b4a3"></a>

Checks whether SourcePlayerId_Optional is set to null.

#### `public inline FGuid & `[`GetTargetPlayerUuid`](#structFRHAPI__PlayerReport_1ac12cec6acca4e7bbfa3d70fa91297644)`()` <a id="structFRHAPI__PlayerReport_1ac12cec6acca4e7bbfa3d70fa91297644"></a>

Gets the value of TargetPlayerUuid.

#### `public inline const FGuid & `[`GetTargetPlayerUuid`](#structFRHAPI__PlayerReport_1a110581b0741cc6714638b0335a1c696a)`() const` <a id="structFRHAPI__PlayerReport_1a110581b0741cc6714638b0335a1c696a"></a>

Gets the value of TargetPlayerUuid.

#### `public inline void `[`SetTargetPlayerUuid`](#structFRHAPI__PlayerReport_1af96b8aa959f9f33a9e668f89d3c74d40)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerReport_1af96b8aa959f9f33a9e668f89d3c74d40"></a>

Sets the value of TargetPlayerUuid.

#### `public inline void `[`SetTargetPlayerUuid`](#structFRHAPI__PlayerReport_1a26e75da7e2f8d60c3529530d48fb13d4)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerReport_1a26e75da7e2f8d60c3529530d48fb13d4"></a>

Sets the value of TargetPlayerUuid using move semantics.

#### `public inline void `[`SetTargetPlayerUuidToNull`](#structFRHAPI__PlayerReport_1a7a05210bda603712cc76bf52cc6091fb)`()` <a id="structFRHAPI__PlayerReport_1a7a05210bda603712cc76bf52cc6091fb"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsTargetPlayerUuidNull`](#structFRHAPI__PlayerReport_1a83cd6826fdf7254b9d55ebb8a90fa24e)`() const` <a id="structFRHAPI__PlayerReport_1a83cd6826fdf7254b9d55ebb8a90fa24e"></a>

Checks whether TargetPlayerUuid is set to null.

#### `public inline int32 & `[`GetTargetPlayerId`](#structFRHAPI__PlayerReport_1acfce542dfc3fd155b0a0f60759b0d59c)`()` <a id="structFRHAPI__PlayerReport_1acfce542dfc3fd155b0a0f60759b0d59c"></a>

Gets the value of TargetPlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTargetPlayerId`](#structFRHAPI__PlayerReport_1a4aa8786a504512c2ea044baa8591251e)`() const` <a id="structFRHAPI__PlayerReport_1a4aa8786a504512c2ea044baa8591251e"></a>

Gets the value of TargetPlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTargetPlayerId`](#structFRHAPI__PlayerReport_1a0c824582bbbe54d6dcb527463370483e)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1a0c824582bbbe54d6dcb527463370483e"></a>

Gets the value of TargetPlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTargetPlayerId`](#structFRHAPI__PlayerReport_1a1e18509dd703d846ffb96fa1b1e5dbc4)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerReport_1a1e18509dd703d846ffb96fa1b1e5dbc4"></a>

Fills OutValue with the value of TargetPlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetTargetPlayerIdOrNull`](#structFRHAPI__PlayerReport_1ad7812788856a9ab95988754ab182c9e4)`()` <a id="structFRHAPI__PlayerReport_1ad7812788856a9ab95988754ab182c9e4"></a>

Returns a pointer to TargetPlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetTargetPlayerIdOrNull`](#structFRHAPI__PlayerReport_1abe4bd9b5beb1a1ea711abae0ea6b79f0)`() const` <a id="structFRHAPI__PlayerReport_1abe4bd9b5beb1a1ea711abae0ea6b79f0"></a>

Returns a pointer to TargetPlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTargetPlayerId`](#structFRHAPI__PlayerReport_1a18356f9f48f15e5abc0e52aaf4007af5)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerReport_1a18356f9f48f15e5abc0e52aaf4007af5"></a>

Sets the value of TargetPlayerId_Optional and also sets TargetPlayerId_IsSet to true.

#### `public inline void `[`SetTargetPlayerId`](#structFRHAPI__PlayerReport_1a89cb5fbc44dbc9e1a1817b07e5bead9c)`(int32 && NewValue)` <a id="structFRHAPI__PlayerReport_1a89cb5fbc44dbc9e1a1817b07e5bead9c"></a>

Sets the value of TargetPlayerId_Optional and also sets TargetPlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearTargetPlayerId`](#structFRHAPI__PlayerReport_1a9e65eafed1ef63b813a5e989a342503d)`()` <a id="structFRHAPI__PlayerReport_1a9e65eafed1ef63b813a5e989a342503d"></a>

Clears the value of TargetPlayerId_Optional and sets TargetPlayerId_IsSet to false.

#### `public inline bool `[`IsTargetPlayerIdSet`](#structFRHAPI__PlayerReport_1af312552fc155490cdaad049946e6fd98)`() const` <a id="structFRHAPI__PlayerReport_1af312552fc155490cdaad049946e6fd98"></a>

Checks whether TargetPlayerId_Optional has been set.

#### `public inline bool `[`IsTargetPlayerIdDefaultValue`](#structFRHAPI__PlayerReport_1acb350781b50b85ef46ca2baec0cf0ce2)`() const` <a id="structFRHAPI__PlayerReport_1acb350781b50b85ef46ca2baec0cf0ce2"></a>

Returns true if TargetPlayerId_Optional is set and matches the default value.

#### `public inline void `[`SetTargetPlayerIdToDefault`](#structFRHAPI__PlayerReport_1a181c104cf04cab05e21564fe328fc901)`()` <a id="structFRHAPI__PlayerReport_1a181c104cf04cab05e21564fe328fc901"></a>

Sets the value of TargetPlayerId_Optional to its default and also sets TargetPlayerId_IsSet to true.

#### `public inline void `[`SetTargetPlayerIdToNull`](#structFRHAPI__PlayerReport_1ae43f5d15fc9dfef152b53eb5cd06156a)`()` <a id="structFRHAPI__PlayerReport_1ae43f5d15fc9dfef152b53eb5cd06156a"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsTargetPlayerIdNull`](#structFRHAPI__PlayerReport_1a62b26d50e71061265393a2a66c48a7bf)`() const` <a id="structFRHAPI__PlayerReport_1a62b26d50e71061265393a2a66c48a7bf"></a>

Checks whether TargetPlayerId_Optional is set to null.

#### `public inline ERHAPI_ReportReason & `[`GetReason`](#structFRHAPI__PlayerReport_1ab4bb02130cc091947179ebc4204846f9)`()` <a id="structFRHAPI__PlayerReport_1ab4bb02130cc091947179ebc4204846f9"></a>

Gets the value of Reason.

#### `public inline const ERHAPI_ReportReason & `[`GetReason`](#structFRHAPI__PlayerReport_1a61131a2ff5979d7723eaacaaa720abc3)`() const` <a id="structFRHAPI__PlayerReport_1a61131a2ff5979d7723eaacaaa720abc3"></a>

Gets the value of Reason.

#### `public inline void `[`SetReason`](#structFRHAPI__PlayerReport_1a9a91c5b782ecb79a37930d0c0ba1e4d5)`(const ERHAPI_ReportReason & NewValue)` <a id="structFRHAPI__PlayerReport_1a9a91c5b782ecb79a37930d0c0ba1e4d5"></a>

Sets the value of Reason.

#### `public inline void `[`SetReason`](#structFRHAPI__PlayerReport_1adf35badf48befcc45d669d7b55e55295)`(ERHAPI_ReportReason && NewValue)` <a id="structFRHAPI__PlayerReport_1adf35badf48befcc45d669d7b55e55295"></a>

Sets the value of Reason using move semantics.

#### `public inline FString & `[`GetDescription`](#structFRHAPI__PlayerReport_1a913f1b49eb8c15f86290695ffb1fe652)`()` <a id="structFRHAPI__PlayerReport_1a913f1b49eb8c15f86290695ffb1fe652"></a>

Gets the value of Description_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDescription`](#structFRHAPI__PlayerReport_1a2aae0da9effe6efad32d9035f9b173d2)`() const` <a id="structFRHAPI__PlayerReport_1a2aae0da9effe6efad32d9035f9b173d2"></a>

Gets the value of Description_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDescription`](#structFRHAPI__PlayerReport_1a8317edb22de93a4e76c8288533aead60)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1a8317edb22de93a4e76c8288533aead60"></a>

Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDescription`](#structFRHAPI__PlayerReport_1a3c207c11ac9578efe9e663194d0f5055)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReport_1a3c207c11ac9578efe9e663194d0f5055"></a>

Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetDescriptionOrNull`](#structFRHAPI__PlayerReport_1ac96de3cd4b16c034d9ce122281949d75)`()` <a id="structFRHAPI__PlayerReport_1ac96de3cd4b16c034d9ce122281949d75"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetDescriptionOrNull`](#structFRHAPI__PlayerReport_1a1e268a4410965a93ea36975cf44d00e6)`() const` <a id="structFRHAPI__PlayerReport_1a1e268a4410965a93ea36975cf44d00e6"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDescription`](#structFRHAPI__PlayerReport_1a88a8ad2c7fc3344868e18ec05a843741)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReport_1a88a8ad2c7fc3344868e18ec05a843741"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true.

#### `public inline void `[`SetDescription`](#structFRHAPI__PlayerReport_1a641d00640d6c78ef304caf4c1711f226)`(FString && NewValue)` <a id="structFRHAPI__PlayerReport_1a641d00640d6c78ef304caf4c1711f226"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true using move semantics.

#### `public inline void `[`ClearDescription`](#structFRHAPI__PlayerReport_1a538e1c8d7a4c7ee210040970d062c7b7)`()` <a id="structFRHAPI__PlayerReport_1a538e1c8d7a4c7ee210040970d062c7b7"></a>

Clears the value of Description_Optional and sets Description_IsSet to false.

#### `public inline bool `[`IsDescriptionSet`](#structFRHAPI__PlayerReport_1abe02f62faae0df826efa9235abd23bd0)`() const` <a id="structFRHAPI__PlayerReport_1abe02f62faae0df826efa9235abd23bd0"></a>

Checks whether Description_Optional has been set.

#### `public inline void `[`SetDescriptionToNull`](#structFRHAPI__PlayerReport_1a3ecfd514af0f169a7e537b84a9930d01)`()` <a id="structFRHAPI__PlayerReport_1a3ecfd514af0f169a7e537b84a9930d01"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsDescriptionNull`](#structFRHAPI__PlayerReport_1ae81b9b9a03e2c42a329bab6404b65e21)`() const` <a id="structFRHAPI__PlayerReport_1ae81b9b9a03e2c42a329bab6404b65e21"></a>

Checks whether Description_Optional is set to null.

#### `public inline FString & `[`GetSessionId`](#structFRHAPI__PlayerReport_1a786a82bf4147f6b7376c7e98bc94cfa4)`()` <a id="structFRHAPI__PlayerReport_1a786a82bf4147f6b7376c7e98bc94cfa4"></a>

Gets the value of SessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__PlayerReport_1ac397b13af8dfab88dda65c5e5f616701)`() const` <a id="structFRHAPI__PlayerReport_1ac397b13af8dfab88dda65c5e5f616701"></a>

Gets the value of SessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__PlayerReport_1a1ca377fa1bfb3fce9cab02aa70cf7243)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1a1ca377fa1bfb3fce9cab02aa70cf7243"></a>

Gets the value of SessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessionId`](#structFRHAPI__PlayerReport_1a11b3bf55c8ab407496f6282d7c89b528)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReport_1a11b3bf55c8ab407496f6282d7c89b528"></a>

Fills OutValue with the value of SessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetSessionIdOrNull`](#structFRHAPI__PlayerReport_1a3b12418b69690b26d838fe2f0d653475)`()` <a id="structFRHAPI__PlayerReport_1a3b12418b69690b26d838fe2f0d653475"></a>

Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetSessionIdOrNull`](#structFRHAPI__PlayerReport_1a6850fa05a881d0b8c98a735d9f9f9864)`() const` <a id="structFRHAPI__PlayerReport_1a6850fa05a881d0b8c98a735d9f9f9864"></a>

Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessionId`](#structFRHAPI__PlayerReport_1a3b873cc5b9d5f599c3ac8790371ab28c)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReport_1a3b873cc5b9d5f599c3ac8790371ab28c"></a>

Sets the value of SessionId_Optional and also sets SessionId_IsSet to true.

#### `public inline void `[`SetSessionId`](#structFRHAPI__PlayerReport_1a6713c9260321f8580f439f11afecdb0b)`(FString && NewValue)` <a id="structFRHAPI__PlayerReport_1a6713c9260321f8580f439f11afecdb0b"></a>

Sets the value of SessionId_Optional and also sets SessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionId`](#structFRHAPI__PlayerReport_1ac11ae75048c12ead402ab706c2942b51)`()` <a id="structFRHAPI__PlayerReport_1ac11ae75048c12ead402ab706c2942b51"></a>

Clears the value of SessionId_Optional and sets SessionId_IsSet to false.

#### `public inline bool `[`IsSessionIdSet`](#structFRHAPI__PlayerReport_1aeacefe3a88ebe5e6d9ba79558a2ebda8)`() const` <a id="structFRHAPI__PlayerReport_1aeacefe3a88ebe5e6d9ba79558a2ebda8"></a>

Checks whether SessionId_Optional has been set.

#### `public inline void `[`SetSessionIdToNull`](#structFRHAPI__PlayerReport_1a1e4f2b28cbeaac64fbede3a9e5703af4)`()` <a id="structFRHAPI__PlayerReport_1a1e4f2b28cbeaac64fbede3a9e5703af4"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsSessionIdNull`](#structFRHAPI__PlayerReport_1a59fa40f324859242774adb429f6ac806)`() const` <a id="structFRHAPI__PlayerReport_1a59fa40f324859242774adb429f6ac806"></a>

Checks whether SessionId_Optional is set to null.

#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__PlayerReport_1aa50c886b0dc5dbccd74c52b42c176852)`()` <a id="structFRHAPI__PlayerReport_1aa50c886b0dc5dbccd74c52b42c176852"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerReport_1a9c56c0f77d6eff83145f04bc0c4d3305)`() const` <a id="structFRHAPI__PlayerReport_1a9c56c0f77d6eff83145f04bc0c4d3305"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerReport_1a1c6ed1cd2fcfb832c3b2d84afe24372c)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1a1c6ed1cd2fcfb832c3b2d84afe24372c"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceId`](#structFRHAPI__PlayerReport_1a78888291edce495a6edfdef4568e4cf9)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReport_1a78888291edce495a6edfdef4568e4cf9"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerReport_1ae55d935dd5194a2e2e4bb32d3374661f)`()` <a id="structFRHAPI__PlayerReport_1ae55d935dd5194a2e2e4bb32d3374661f"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerReport_1af029d1e60a2eead86cc2741b264ea65a)`() const` <a id="structFRHAPI__PlayerReport_1af029d1e60a2eead86cc2741b264ea65a"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__PlayerReport_1a4d049d31e0d46d18352b1472ae4c1ce0)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReport_1a4d049d31e0d46d18352b1472ae4c1ce0"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__PlayerReport_1a7485b014ec1b0b1c88ae9e72b7a22885)`(FString && NewValue)` <a id="structFRHAPI__PlayerReport_1a7485b014ec1b0b1c88ae9e72b7a22885"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerReport_1a318e81296d4530aa395cb9ce323aaf10)`()` <a id="structFRHAPI__PlayerReport_1a318e81296d4530aa395cb9ce323aaf10"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline bool `[`IsInstanceIdSet`](#structFRHAPI__PlayerReport_1ad659bcb7118d58cc9272c5678add8913)`() const` <a id="structFRHAPI__PlayerReport_1ad659bcb7118d58cc9272c5678add8913"></a>

Checks whether InstanceId_Optional has been set.

#### `public inline void `[`SetInstanceIdToNull`](#structFRHAPI__PlayerReport_1a9a3788eb20d7c94e998857329831d9fc)`()` <a id="structFRHAPI__PlayerReport_1a9a3788eb20d7c94e998857329831d9fc"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInstanceIdNull`](#structFRHAPI__PlayerReport_1aefa93ed3db1d8c6f5836a42f277d20ed)`() const` <a id="structFRHAPI__PlayerReport_1aefa93ed3db1d8c6f5836a42f277d20ed"></a>

Checks whether InstanceId_Optional is set to null.

#### `public inline FString & `[`GetMatchId`](#structFRHAPI__PlayerReport_1a911f58552b663e6605d856f10093d22f)`()` <a id="structFRHAPI__PlayerReport_1a911f58552b663e6605d856f10093d22f"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerReport_1a39c20daed468b80460c671115f28d5ff)`() const` <a id="structFRHAPI__PlayerReport_1a39c20daed468b80460c671115f28d5ff"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerReport_1aea3e6ef38720907b977eb712fdb4dbd1)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1aea3e6ef38720907b977eb712fdb4dbd1"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchId`](#structFRHAPI__PlayerReport_1aeee2a7624a172f08980ed46a7f5a299b)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReport_1aeee2a7624a172f08980ed46a7f5a299b"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerReport_1af4051cece051b30bd850bcdf3407a1af)`()` <a id="structFRHAPI__PlayerReport_1af4051cece051b30bd850bcdf3407a1af"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerReport_1acc8f97b54d9abfa0e4ffc1d5481a6cce)`() const` <a id="structFRHAPI__PlayerReport_1acc8f97b54d9abfa0e4ffc1d5481a6cce"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchId`](#structFRHAPI__PlayerReport_1a911259e83f86488a3892467edc921250)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReport_1a911259e83f86488a3892467edc921250"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline void `[`SetMatchId`](#structFRHAPI__PlayerReport_1aad4d02b2c7bf6134271adf152550ac1e)`(FString && NewValue)` <a id="structFRHAPI__PlayerReport_1aad4d02b2c7bf6134271adf152550ac1e"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__PlayerReport_1ac5cdcfbdb2a8fd6732bd130cf6da9a56)`()` <a id="structFRHAPI__PlayerReport_1ac5cdcfbdb2a8fd6732bd130cf6da9a56"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline bool `[`IsMatchIdSet`](#structFRHAPI__PlayerReport_1a71b8050bab1bfb81f22e2c40590b50e2)`() const` <a id="structFRHAPI__PlayerReport_1a71b8050bab1bfb81f22e2c40590b50e2"></a>

Checks whether MatchId_Optional has been set.

#### `public inline void `[`SetMatchIdToNull`](#structFRHAPI__PlayerReport_1a0c94556db5eab62e375e2f3bab856457)`()` <a id="structFRHAPI__PlayerReport_1a0c94556db5eab62e375e2f3bab856457"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsMatchIdNull`](#structFRHAPI__PlayerReport_1ab872caed922c26f83384b6743a4be1fa)`() const` <a id="structFRHAPI__PlayerReport_1ab872caed922c26f83384b6743a4be1fa"></a>

Checks whether MatchId_Optional is set to null.

#### `public inline FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReport_1a6a1c6e07a789e072bd312c5f48116c1a)`()` <a id="structFRHAPI__PlayerReport_1a6a1c6e07a789e072bd312c5f48116c1a"></a>

Gets the value of MatchSegment_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReport_1a4ded81600fdca17cce2b020bc6b6d123)`() const` <a id="structFRHAPI__PlayerReport_1a4ded81600fdca17cce2b020bc6b6d123"></a>

Gets the value of MatchSegment_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReport_1abb20b774e437fd580e95192518c4fe5a)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1abb20b774e437fd580e95192518c4fe5a"></a>

Gets the value of MatchSegment_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchSegment`](#structFRHAPI__PlayerReport_1a25a74a37312065b9d0d43d4361f42e50)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReport_1a25a74a37312065b9d0d43d4361f42e50"></a>

Fills OutValue with the value of MatchSegment_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchSegmentOrNull`](#structFRHAPI__PlayerReport_1a9783e8be7f0ddd29046d8f90caa65aa0)`()` <a id="structFRHAPI__PlayerReport_1a9783e8be7f0ddd29046d8f90caa65aa0"></a>

Returns a pointer to MatchSegment_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchSegmentOrNull`](#structFRHAPI__PlayerReport_1abbcf05c7dcbd3dbcdf28e01a3327c1c9)`() const` <a id="structFRHAPI__PlayerReport_1abbcf05c7dcbd3dbcdf28e01a3327c1c9"></a>

Returns a pointer to MatchSegment_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchSegment`](#structFRHAPI__PlayerReport_1aff85e1a6c8f2c0c5cbdb5553f22fe50c)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReport_1aff85e1a6c8f2c0c5cbdb5553f22fe50c"></a>

Sets the value of MatchSegment_Optional and also sets MatchSegment_IsSet to true.

#### `public inline void `[`SetMatchSegment`](#structFRHAPI__PlayerReport_1a56181a729b56ee6dc566efdc4ce124eb)`(FString && NewValue)` <a id="structFRHAPI__PlayerReport_1a56181a729b56ee6dc566efdc4ce124eb"></a>

Sets the value of MatchSegment_Optional and also sets MatchSegment_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchSegment`](#structFRHAPI__PlayerReport_1ae4cc911288e101f606d03eff84cda53e)`()` <a id="structFRHAPI__PlayerReport_1ae4cc911288e101f606d03eff84cda53e"></a>

Clears the value of MatchSegment_Optional and sets MatchSegment_IsSet to false.

#### `public inline bool `[`IsMatchSegmentSet`](#structFRHAPI__PlayerReport_1a6e69a8f17645a8491be141f617a312e2)`() const` <a id="structFRHAPI__PlayerReport_1a6e69a8f17645a8491be141f617a312e2"></a>

Checks whether MatchSegment_Optional has been set.

#### `public inline void `[`SetMatchSegmentToNull`](#structFRHAPI__PlayerReport_1a0511f1cbcf54a11a63d74255d67cbeb4)`()` <a id="structFRHAPI__PlayerReport_1a0511f1cbcf54a11a63d74255d67cbeb4"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsMatchSegmentNull`](#structFRHAPI__PlayerReport_1a194d421fe1a38829b74bfde4ff58ba32)`() const` <a id="structFRHAPI__PlayerReport_1a194d421fe1a38829b74bfde4ff58ba32"></a>

Checks whether MatchSegment_Optional is set to null.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReport_1a325448b4428849c551ff6b20f3d4da40)`()` <a id="structFRHAPI__PlayerReport_1a325448b4428849c551ff6b20f3d4da40"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReport_1a74226ffea4a0e871e554c52709fbf4a7)`() const` <a id="structFRHAPI__PlayerReport_1a74226ffea4a0e871e554c52709fbf4a7"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReport_1a6c4c0887589a8e93cc815489c00eb715)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1a6c4c0887589a8e93cc815489c00eb715"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__PlayerReport_1a6c4782fe7af4eb5bb5e56c6949af09dd)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerReport_1a6c4782fe7af4eb5bb5e56c6949af09dd"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerReport_1adbbe628fbae7ec5cad4c92fd095fe6ce)`()` <a id="structFRHAPI__PlayerReport_1adbbe628fbae7ec5cad4c92fd095fe6ce"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerReport_1aa3b3bd5c80fdf939abff8d2613f9e6eb)`() const` <a id="structFRHAPI__PlayerReport_1aa3b3bd5c80fdf939abff8d2613f9e6eb"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerReport_1a2d3a4d1c6f554a43f0b5930cc9aa26d7)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlayerReport_1a2d3a4d1c6f554a43f0b5930cc9aa26d7"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerReport_1acd1915e78e6e0af5ec1cb40e4505fd55)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlayerReport_1acd1915e78e6e0af5ec1cb40e4505fd55"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerReport_1a9606358d4d6002b8c069eeeb1b3c4ae8)`()` <a id="structFRHAPI__PlayerReport_1a9606358d4d6002b8c069eeeb1b3c4ae8"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlayerReport_1a74facbcda459bb100c45c958fd5b4091)`() const` <a id="structFRHAPI__PlayerReport_1a74facbcda459bb100c45c958fd5b4091"></a>

Checks whether CustomData_Optional has been set.

#### `public inline FDateTime & `[`GetCreated`](#structFRHAPI__PlayerReport_1a6003fb1cfbd1d2ba075247c5e1fd1504)`()` <a id="structFRHAPI__PlayerReport_1a6003fb1cfbd1d2ba075247c5e1fd1504"></a>

Gets the value of Created_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetCreated`](#structFRHAPI__PlayerReport_1a1fabba1ac6d7c689d5ca3814807deedb)`() const` <a id="structFRHAPI__PlayerReport_1a1fabba1ac6d7c689d5ca3814807deedb"></a>

Gets the value of Created_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetCreated`](#structFRHAPI__PlayerReport_1afff0fb8bc2ea776f4b58541613bf4693)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1afff0fb8bc2ea776f4b58541613bf4693"></a>

Gets the value of Created_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCreated`](#structFRHAPI__PlayerReport_1a1ea1f362d419449035758fe38c0d1e1c)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerReport_1a1ea1f362d419449035758fe38c0d1e1c"></a>

Fills OutValue with the value of Created_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetCreatedOrNull`](#structFRHAPI__PlayerReport_1aa0805386945d051b0b9f00edcf8b0a0f)`()` <a id="structFRHAPI__PlayerReport_1aa0805386945d051b0b9f00edcf8b0a0f"></a>

Returns a pointer to Created_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetCreatedOrNull`](#structFRHAPI__PlayerReport_1a9d3bcd5395b1c5cb1ac02fbf7cd9241d)`() const` <a id="structFRHAPI__PlayerReport_1a9d3bcd5395b1c5cb1ac02fbf7cd9241d"></a>

Returns a pointer to Created_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCreated`](#structFRHAPI__PlayerReport_1a9288cc57ae10007f7236313f0597d013)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerReport_1a9288cc57ae10007f7236313f0597d013"></a>

Sets the value of Created_Optional and also sets Created_IsSet to true.

#### `public inline void `[`SetCreated`](#structFRHAPI__PlayerReport_1aa555723bf6c4d472b0847cd1e27b30e1)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerReport_1aa555723bf6c4d472b0847cd1e27b30e1"></a>

Sets the value of Created_Optional and also sets Created_IsSet to true using move semantics.

#### `public inline void `[`ClearCreated`](#structFRHAPI__PlayerReport_1ab68bb775bda9f07033c7e810999e8f0d)`()` <a id="structFRHAPI__PlayerReport_1ab68bb775bda9f07033c7e810999e8f0d"></a>

Clears the value of Created_Optional and sets Created_IsSet to false.

#### `public inline bool `[`IsCreatedSet`](#structFRHAPI__PlayerReport_1a30bfbef810ba19b8bdb60eb9ca99e9af)`() const` <a id="structFRHAPI__PlayerReport_1a30bfbef810ba19b8bdb60eb9ca99e9af"></a>

Checks whether Created_Optional has been set.

#### `public inline void `[`SetCreatedToNull`](#structFRHAPI__PlayerReport_1af1a13465492f3362adcd4f9060c14249)`()` <a id="structFRHAPI__PlayerReport_1af1a13465492f3362adcd4f9060c14249"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCreatedNull`](#structFRHAPI__PlayerReport_1aecb487e34add5d5886efd663070334f0)`() const` <a id="structFRHAPI__PlayerReport_1aecb487e34add5d5886efd663070334f0"></a>

Checks whether Created_Optional is set to null.

#### `public inline FDateTime & `[`GetModified`](#structFRHAPI__PlayerReport_1af1c65b4f1bbdd5148bc98b6b46032521)`()` <a id="structFRHAPI__PlayerReport_1af1c65b4f1bbdd5148bc98b6b46032521"></a>

Gets the value of Modified_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetModified`](#structFRHAPI__PlayerReport_1a85868985d0a4945f43a941963fb20366)`() const` <a id="structFRHAPI__PlayerReport_1a85868985d0a4945f43a941963fb20366"></a>

Gets the value of Modified_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetModified`](#structFRHAPI__PlayerReport_1a7422c0b9f564cab799285fef28159836)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1a7422c0b9f564cab799285fef28159836"></a>

Gets the value of Modified_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetModified`](#structFRHAPI__PlayerReport_1a9eb7bbd95743e4021ea5ae436322bb4b)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerReport_1a9eb7bbd95743e4021ea5ae436322bb4b"></a>

Fills OutValue with the value of Modified_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetModifiedOrNull`](#structFRHAPI__PlayerReport_1a4f608c33995673142275a97615d6c657)`()` <a id="structFRHAPI__PlayerReport_1a4f608c33995673142275a97615d6c657"></a>

Returns a pointer to Modified_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetModifiedOrNull`](#structFRHAPI__PlayerReport_1a6132b579c75e3e21e13b6def3ac61bd8)`() const` <a id="structFRHAPI__PlayerReport_1a6132b579c75e3e21e13b6def3ac61bd8"></a>

Returns a pointer to Modified_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetModified`](#structFRHAPI__PlayerReport_1ad340775dd5b266563cc1e429b0faf332)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerReport_1ad340775dd5b266563cc1e429b0faf332"></a>

Sets the value of Modified_Optional and also sets Modified_IsSet to true.

#### `public inline void `[`SetModified`](#structFRHAPI__PlayerReport_1aacaab82704aa92d25ee3994e987f81bc)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerReport_1aacaab82704aa92d25ee3994e987f81bc"></a>

Sets the value of Modified_Optional and also sets Modified_IsSet to true using move semantics.

#### `public inline void `[`ClearModified`](#structFRHAPI__PlayerReport_1a4fff49337b878205f0b1956483f42b25)`()` <a id="structFRHAPI__PlayerReport_1a4fff49337b878205f0b1956483f42b25"></a>

Clears the value of Modified_Optional and sets Modified_IsSet to false.

#### `public inline bool `[`IsModifiedSet`](#structFRHAPI__PlayerReport_1a4b0c4907861fea0a24df2f4b8794e88a)`() const` <a id="structFRHAPI__PlayerReport_1a4b0c4907861fea0a24df2f4b8794e88a"></a>

Checks whether Modified_Optional has been set.

#### `public inline void `[`SetModifiedToNull`](#structFRHAPI__PlayerReport_1aa1b1a8b26ac6eee72b02b04f9718478c)`()` <a id="structFRHAPI__PlayerReport_1aa1b1a8b26ac6eee72b02b04f9718478c"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsModifiedNull`](#structFRHAPI__PlayerReport_1a53575141dfbc85706c0562d2f5ee3958)`() const` <a id="structFRHAPI__PlayerReport_1a53575141dfbc85706c0562d2f5ee3958"></a>

Checks whether Modified_Optional is set to null.

