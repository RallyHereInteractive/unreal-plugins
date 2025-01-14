---
title: RHAPI_PlayerReportCreate
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerReportCreate`](#structFRHAPI__PlayerReportCreate) | 

## struct `FRHAPI_PlayerReportCreate` <a id="structFRHAPI__PlayerReportCreate"></a>

```
struct FRHAPI_PlayerReportCreate
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`SourcePlayerUuid_Optional`](#structFRHAPI__PlayerReportCreate_1a0a22b9c85850e2c6ca36c962b0c82b8a) | 
`public bool `[`SourcePlayerUuid_IsSet`](#structFRHAPI__PlayerReportCreate_1a7dbe926afd7c7af7bb8e8b1d68fe4eb2) | true if SourcePlayerUuid_Optional has been set to a value
`public bool `[`SourcePlayerUuid_IsNull`](#structFRHAPI__PlayerReportCreate_1a0a94ccf26f1144e6d4717b69b2915532) | true if SourcePlayerUuid_Optional has been explicitly set to null
`public ERHAPI_ReportReason `[`Reason`](#structFRHAPI__PlayerReportCreate_1a9dd779efbb0b4000c651a4c33b682297) | The reason for the report.
`public FString `[`Description_Optional`](#structFRHAPI__PlayerReportCreate_1a8029079c156afc6dc7b21eeb822682b6) | 
`public bool `[`Description_IsSet`](#structFRHAPI__PlayerReportCreate_1a16c9c28fcf6ae4f95a4af3c5a4f3230b) | true if Description_Optional has been set to a value
`public bool `[`Description_IsNull`](#structFRHAPI__PlayerReportCreate_1a2663c6c07d486e41fd36f3f3139bbe55) | true if Description_Optional has been explicitly set to null
`public FString `[`SessionId_Optional`](#structFRHAPI__PlayerReportCreate_1a43d51bb0656bd9cea60548d53284790e) | 
`public bool `[`SessionId_IsSet`](#structFRHAPI__PlayerReportCreate_1a7d8a9d7f0ea15ae5b5a34ef23fe44bae) | true if SessionId_Optional has been set to a value
`public bool `[`SessionId_IsNull`](#structFRHAPI__PlayerReportCreate_1a6add65bffee98686724982fe33b34869) | true if SessionId_Optional has been explicitly set to null
`public FString `[`InstanceId_Optional`](#structFRHAPI__PlayerReportCreate_1a199c7fdab33446c9deb26a1e8332e882) | 
`public bool `[`InstanceId_IsSet`](#structFRHAPI__PlayerReportCreate_1a78735dd03b4c0d014fb65c9d7fe3f138) | true if InstanceId_Optional has been set to a value
`public bool `[`InstanceId_IsNull`](#structFRHAPI__PlayerReportCreate_1a82aef42873ea07774659af7099661da0) | true if InstanceId_Optional has been explicitly set to null
`public FString `[`MatchId_Optional`](#structFRHAPI__PlayerReportCreate_1a633f9f3c984c3e2378750c61328753c7) | 
`public bool `[`MatchId_IsSet`](#structFRHAPI__PlayerReportCreate_1ad8865f21e04214d91a4b7efae35a4a89) | true if MatchId_Optional has been set to a value
`public bool `[`MatchId_IsNull`](#structFRHAPI__PlayerReportCreate_1a5e0896fc5bb1d1cc169674d8eb2b2852) | true if MatchId_Optional has been explicitly set to null
`public FString `[`MatchSegment_Optional`](#structFRHAPI__PlayerReportCreate_1a3e6ec7b6fa751746fc3976f815044bb2) | 
`public bool `[`MatchSegment_IsSet`](#structFRHAPI__PlayerReportCreate_1a47e7b1ab35e62f470c8280657f61a69f) | true if MatchSegment_Optional has been set to a value
`public bool `[`MatchSegment_IsNull`](#structFRHAPI__PlayerReportCreate_1ac7911ae01e25d49292933b3b982686e5) | true if MatchSegment_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerReportCreate_1af0a6cd9e4b2cdb5da74aaf38a6285ea5) | Custom data for the report.
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerReportCreate_1a1bbfc6abab3eb0dd6fb9969abb090264) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerReportCreate_1a1b9036b5358b0fc4c8b840a9eafd2038)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerReportCreate_1a48081b7e044ad37f4a1c0ab3cd180294)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1a77326f763881f32e277f6d8deab9a46b)`()` | Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1a5e5326ba5cda9f16a5ec7fc5540b880f)`() const` | Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1acdd7962361bed21304af4b76367c8aa1)`(const FGuid & DefaultValue) const` | Gets the value of SourcePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1a0695cf5c40db719be31e3dae571e3fd4)`(FGuid & OutValue) const` | Fills OutValue with the value of SourcePlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__PlayerReportCreate_1ad2bc469e67dd6af0ef0f98d25b51b9cd)`()` | Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__PlayerReportCreate_1ade9a6aa88b15efc533352be6cd3d8fc4)`() const` | Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1a85507784bf68383f220c6ea9550b82f9)`(const FGuid & NewValue)` | Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true.
`public inline void `[`SetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1ae7d091d126d2f9e292815f2ec0d42db6)`(FGuid && NewValue)` | Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1a7d9b960ef7bc98a414db20046a0a57b2)`()` | Clears the value of SourcePlayerUuid_Optional and sets SourcePlayerUuid_IsSet to false.
`public inline bool `[`IsSourcePlayerUuidSet`](#structFRHAPI__PlayerReportCreate_1a09a38fc4c1f40bb344ad92dfe15fa1a3)`() const` | Checks whether SourcePlayerUuid_Optional has been set.
`public inline void `[`SetSourcePlayerUuidToNull`](#structFRHAPI__PlayerReportCreate_1a373ea47be6bbc01d798ee61dc4ff577e)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsSourcePlayerUuidNull`](#structFRHAPI__PlayerReportCreate_1a3d4bedfc2d5baa16d097b2d6935927a1)`() const` | Checks whether SourcePlayerUuid_Optional is set to null.
`public inline ERHAPI_ReportReason & `[`GetReason`](#structFRHAPI__PlayerReportCreate_1a77be964e47f259ca5352b45fa2fa0fbd)`()` | Gets the value of Reason.
`public inline const ERHAPI_ReportReason & `[`GetReason`](#structFRHAPI__PlayerReportCreate_1aec2caf6d131b6c0c97154a27023c21c4)`() const` | Gets the value of Reason.
`public inline void `[`SetReason`](#structFRHAPI__PlayerReportCreate_1ab3ff527fda97ee8c787162817e195c35)`(const ERHAPI_ReportReason & NewValue)` | Sets the value of Reason.
`public inline void `[`SetReason`](#structFRHAPI__PlayerReportCreate_1a8dbfd36c8dbae5c98eb8570961631e0e)`(ERHAPI_ReportReason && NewValue)` | Sets the value of Reason using move semantics.
`public inline FString & `[`GetDescription`](#structFRHAPI__PlayerReportCreate_1af88e443ee720001ed2e8d3f5bbf1b30e)`()` | Gets the value of Description_Optional, regardless of it having been set.
`public inline const FString & `[`GetDescription`](#structFRHAPI__PlayerReportCreate_1a0e0dddcb923813e35a4fe696fdcfbd9d)`() const` | Gets the value of Description_Optional, regardless of it having been set.
`public inline const FString & `[`GetDescription`](#structFRHAPI__PlayerReportCreate_1a28920f4c2390ddecdcba1c948a160c97)`(const FString & DefaultValue) const` | Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDescription`](#structFRHAPI__PlayerReportCreate_1a1700ed6341aed67bf6133d3931e0cbf6)`(FString & OutValue) const` | Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDescriptionOrNull`](#structFRHAPI__PlayerReportCreate_1a64203bce5e3534e6758c8bd97e32a08c)`()` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDescriptionOrNull`](#structFRHAPI__PlayerReportCreate_1a0fbac3f01b36879508f6503af8f42a11)`() const` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDescription`](#structFRHAPI__PlayerReportCreate_1a1f4031fe73e55c113dd99dc8e4516894)`(const FString & NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true.
`public inline void `[`SetDescription`](#structFRHAPI__PlayerReportCreate_1abf63ccedb74f70d5d49f0a138279e017)`(FString && NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true using move semantics.
`public inline void `[`ClearDescription`](#structFRHAPI__PlayerReportCreate_1a7f85bc0a1c63fd0d2b7ea1ec11e50eb9)`()` | Clears the value of Description_Optional and sets Description_IsSet to false.
`public inline bool `[`IsDescriptionSet`](#structFRHAPI__PlayerReportCreate_1a0906ec4a84b6f82f95bd83fb6c41d19c)`() const` | Checks whether Description_Optional has been set.
`public inline void `[`SetDescriptionToNull`](#structFRHAPI__PlayerReportCreate_1a74f9096c4ec6f7fb899c463c2e6c34bd)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsDescriptionNull`](#structFRHAPI__PlayerReportCreate_1a3a0db085577f963100d4055313911f81)`() const` | Checks whether Description_Optional is set to null.
`public inline FString & `[`GetSessionId`](#structFRHAPI__PlayerReportCreate_1a239d6debf14b1bff567a431162da200f)`()` | Gets the value of SessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__PlayerReportCreate_1aa648e9c84931f153603e09bf225ef308)`() const` | Gets the value of SessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__PlayerReportCreate_1ac18da6dc17e19fb49dd994792a2b9bde)`(const FString & DefaultValue) const` | Gets the value of SessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessionId`](#structFRHAPI__PlayerReportCreate_1a9d07dbbbc4aef0a8931d1f7d3550949e)`(FString & OutValue) const` | Fills OutValue with the value of SessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetSessionIdOrNull`](#structFRHAPI__PlayerReportCreate_1ae408820732002fddab2637fc8b62a2e7)`()` | Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetSessionIdOrNull`](#structFRHAPI__PlayerReportCreate_1a2e2883c6faf292b8c44df64a0c836348)`() const` | Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessionId`](#structFRHAPI__PlayerReportCreate_1aadd5ac4eb6255a1cba9b6b36f4561732)`(const FString & NewValue)` | Sets the value of SessionId_Optional and also sets SessionId_IsSet to true.
`public inline void `[`SetSessionId`](#structFRHAPI__PlayerReportCreate_1a85c38202480c41e279f047b94defa6b2)`(FString && NewValue)` | Sets the value of SessionId_Optional and also sets SessionId_IsSet to true using move semantics.
`public inline void `[`ClearSessionId`](#structFRHAPI__PlayerReportCreate_1a2f7e0fd5fcd6d2290806e50386034f92)`()` | Clears the value of SessionId_Optional and sets SessionId_IsSet to false.
`public inline bool `[`IsSessionIdSet`](#structFRHAPI__PlayerReportCreate_1a641b7daadad93acad764c96369b6134d)`() const` | Checks whether SessionId_Optional has been set.
`public inline void `[`SetSessionIdToNull`](#structFRHAPI__PlayerReportCreate_1ac61dc91bc7937d6120354f264022e526)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsSessionIdNull`](#structFRHAPI__PlayerReportCreate_1a99b847edebb945809b9fb98ae2cfdb01)`() const` | Checks whether SessionId_Optional is set to null.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__PlayerReportCreate_1a7fd9deda6c842a6a1e71f5ace290f18c)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerReportCreate_1adabac6d79cdcc24ea70c2057b2854f78)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerReportCreate_1a4c310fc1a2a901f2fe7e5bbfdec59bd8)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceId`](#structFRHAPI__PlayerReportCreate_1a1802f5f02d093309052b209c005f9577)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerReportCreate_1ad30cbd8d0aa31bf1580a64b1d570a9a2)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerReportCreate_1ab9c7152a39df32355edec578987f0375)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceId`](#structFRHAPI__PlayerReportCreate_1ab22f13b3348064b382455efa0f3d713d)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline void `[`SetInstanceId`](#structFRHAPI__PlayerReportCreate_1a1dac2f36edd5310438b7a937ba8151e5)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerReportCreate_1a7e52142db616d9b2511f7849effc6e82)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline bool `[`IsInstanceIdSet`](#structFRHAPI__PlayerReportCreate_1ac011a5bf8c1df9f96dcd373061a1d58c)`() const` | Checks whether InstanceId_Optional has been set.
`public inline void `[`SetInstanceIdToNull`](#structFRHAPI__PlayerReportCreate_1ae8a8057ffc6a4ca56b923006931a1c1c)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsInstanceIdNull`](#structFRHAPI__PlayerReportCreate_1a16c39d7f4b91c36ace0333169f2f58dc)`() const` | Checks whether InstanceId_Optional is set to null.
`public inline FString & `[`GetMatchId`](#structFRHAPI__PlayerReportCreate_1a8899dfba7fe94555a73518d5f5555219)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerReportCreate_1af53edf752ffc6c4549d44d5e610e58d9)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerReportCreate_1adda496e8ae47edc89ea9012b75287565)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchId`](#structFRHAPI__PlayerReportCreate_1a89a20ce0e6e10ee0054175b7004a4979)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerReportCreate_1a62ffb5d3d8468fc8564c31784f1fbe94)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerReportCreate_1aa9ce5d9b5e3bb8ef62f9e76d75cc6f72)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchId`](#structFRHAPI__PlayerReportCreate_1a8862f42ee9ab8bda1d3c4f125bddab3d)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline void `[`SetMatchId`](#structFRHAPI__PlayerReportCreate_1a5046af152ca9bc2c998bb9d2359b7cca)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__PlayerReportCreate_1a38ca328eb0f211ebff244c6aa4928d9b)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline bool `[`IsMatchIdSet`](#structFRHAPI__PlayerReportCreate_1ac317eb21ecb90188e31a1a82e3ac9cb5)`() const` | Checks whether MatchId_Optional has been set.
`public inline void `[`SetMatchIdToNull`](#structFRHAPI__PlayerReportCreate_1a25ec9dad33e5b603e09babfe74859dd4)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsMatchIdNull`](#structFRHAPI__PlayerReportCreate_1a4534118f59eead8ea4897061020389f7)`() const` | Checks whether MatchId_Optional is set to null.
`public inline FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReportCreate_1a9fd2d28cd703d4873e11f3f4af87d278)`()` | Gets the value of MatchSegment_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReportCreate_1ab1d5a036eaff75f92c2da48fd95ef81f)`() const` | Gets the value of MatchSegment_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReportCreate_1a918251ea06e637ba007303793008cbc6)`(const FString & DefaultValue) const` | Gets the value of MatchSegment_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchSegment`](#structFRHAPI__PlayerReportCreate_1a5adbf14f6b6867e841a4c6a0cfe28f5a)`(FString & OutValue) const` | Fills OutValue with the value of MatchSegment_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchSegmentOrNull`](#structFRHAPI__PlayerReportCreate_1a165e48ee54b4213c55d36377fddf12c2)`()` | Returns a pointer to MatchSegment_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchSegmentOrNull`](#structFRHAPI__PlayerReportCreate_1a2b8842a92015b8e07528959866b8c827)`() const` | Returns a pointer to MatchSegment_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchSegment`](#structFRHAPI__PlayerReportCreate_1a0765cf0d0678937260248b87cbd5597f)`(const FString & NewValue)` | Sets the value of MatchSegment_Optional and also sets MatchSegment_IsSet to true.
`public inline void `[`SetMatchSegment`](#structFRHAPI__PlayerReportCreate_1a9004fccff71e32f46c7511b27e0aa246)`(FString && NewValue)` | Sets the value of MatchSegment_Optional and also sets MatchSegment_IsSet to true using move semantics.
`public inline void `[`ClearMatchSegment`](#structFRHAPI__PlayerReportCreate_1a77f62ec257566a8945a0cda87a9c9749)`()` | Clears the value of MatchSegment_Optional and sets MatchSegment_IsSet to false.
`public inline bool `[`IsMatchSegmentSet`](#structFRHAPI__PlayerReportCreate_1a5283afac4827c7503699d2520b0e6244)`() const` | Checks whether MatchSegment_Optional has been set.
`public inline void `[`SetMatchSegmentToNull`](#structFRHAPI__PlayerReportCreate_1a7f40a65b4eb1e69a360cf11f6d164a6d)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsMatchSegmentNull`](#structFRHAPI__PlayerReportCreate_1ab3a7db6568d5038d634d541929b0addb)`() const` | Checks whether MatchSegment_Optional is set to null.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReportCreate_1aa13f56e60699b38130e83b245a4fdfb4)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReportCreate_1ac33af0a5df30b7cfb37d8d5d05f0d14b)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReportCreate_1afe46c9f8866da45b9abbdfa3ec58d4b9)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PlayerReportCreate_1a78e58e71b5702dd40f0708b0895d115e)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerReportCreate_1aeff34d07786a598fe155bb91e59c21f0)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerReportCreate_1a5d2c978f042736e7a2d4de7c6f05a12f)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PlayerReportCreate_1a6cfd837858d0ca90c9e61db025ecaf25)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__PlayerReportCreate_1ad150fa673af72cd1ceafefc7986ea3d8)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlayerReportCreate_1aeb04e4a3eab4d12fe85d012865e7240a)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlayerReportCreate_1a459f0c96dfc18dc23acc9c17007d84a4)`() const` | Checks whether CustomData_Optional has been set.

### Members

#### `public FGuid `[`SourcePlayerUuid_Optional`](#structFRHAPI__PlayerReportCreate_1a0a22b9c85850e2c6ca36c962b0c82b8a) <a id="structFRHAPI__PlayerReportCreate_1a0a22b9c85850e2c6ca36c962b0c82b8a"></a>

#### `public bool `[`SourcePlayerUuid_IsSet`](#structFRHAPI__PlayerReportCreate_1a7dbe926afd7c7af7bb8e8b1d68fe4eb2) <a id="structFRHAPI__PlayerReportCreate_1a7dbe926afd7c7af7bb8e8b1d68fe4eb2"></a>

true if SourcePlayerUuid_Optional has been set to a value

#### `public bool `[`SourcePlayerUuid_IsNull`](#structFRHAPI__PlayerReportCreate_1a0a94ccf26f1144e6d4717b69b2915532) <a id="structFRHAPI__PlayerReportCreate_1a0a94ccf26f1144e6d4717b69b2915532"></a>

true if SourcePlayerUuid_Optional has been explicitly set to null

#### `public ERHAPI_ReportReason `[`Reason`](#structFRHAPI__PlayerReportCreate_1a9dd779efbb0b4000c651a4c33b682297) <a id="structFRHAPI__PlayerReportCreate_1a9dd779efbb0b4000c651a4c33b682297"></a>

The reason for the report.

#### `public FString `[`Description_Optional`](#structFRHAPI__PlayerReportCreate_1a8029079c156afc6dc7b21eeb822682b6) <a id="structFRHAPI__PlayerReportCreate_1a8029079c156afc6dc7b21eeb822682b6"></a>

#### `public bool `[`Description_IsSet`](#structFRHAPI__PlayerReportCreate_1a16c9c28fcf6ae4f95a4af3c5a4f3230b) <a id="structFRHAPI__PlayerReportCreate_1a16c9c28fcf6ae4f95a4af3c5a4f3230b"></a>

true if Description_Optional has been set to a value

#### `public bool `[`Description_IsNull`](#structFRHAPI__PlayerReportCreate_1a2663c6c07d486e41fd36f3f3139bbe55) <a id="structFRHAPI__PlayerReportCreate_1a2663c6c07d486e41fd36f3f3139bbe55"></a>

true if Description_Optional has been explicitly set to null

#### `public FString `[`SessionId_Optional`](#structFRHAPI__PlayerReportCreate_1a43d51bb0656bd9cea60548d53284790e) <a id="structFRHAPI__PlayerReportCreate_1a43d51bb0656bd9cea60548d53284790e"></a>

#### `public bool `[`SessionId_IsSet`](#structFRHAPI__PlayerReportCreate_1a7d8a9d7f0ea15ae5b5a34ef23fe44bae) <a id="structFRHAPI__PlayerReportCreate_1a7d8a9d7f0ea15ae5b5a34ef23fe44bae"></a>

true if SessionId_Optional has been set to a value

#### `public bool `[`SessionId_IsNull`](#structFRHAPI__PlayerReportCreate_1a6add65bffee98686724982fe33b34869) <a id="structFRHAPI__PlayerReportCreate_1a6add65bffee98686724982fe33b34869"></a>

true if SessionId_Optional has been explicitly set to null

#### `public FString `[`InstanceId_Optional`](#structFRHAPI__PlayerReportCreate_1a199c7fdab33446c9deb26a1e8332e882) <a id="structFRHAPI__PlayerReportCreate_1a199c7fdab33446c9deb26a1e8332e882"></a>

#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__PlayerReportCreate_1a78735dd03b4c0d014fb65c9d7fe3f138) <a id="structFRHAPI__PlayerReportCreate_1a78735dd03b4c0d014fb65c9d7fe3f138"></a>

true if InstanceId_Optional has been set to a value

#### `public bool `[`InstanceId_IsNull`](#structFRHAPI__PlayerReportCreate_1a82aef42873ea07774659af7099661da0) <a id="structFRHAPI__PlayerReportCreate_1a82aef42873ea07774659af7099661da0"></a>

true if InstanceId_Optional has been explicitly set to null

#### `public FString `[`MatchId_Optional`](#structFRHAPI__PlayerReportCreate_1a633f9f3c984c3e2378750c61328753c7) <a id="structFRHAPI__PlayerReportCreate_1a633f9f3c984c3e2378750c61328753c7"></a>

#### `public bool `[`MatchId_IsSet`](#structFRHAPI__PlayerReportCreate_1ad8865f21e04214d91a4b7efae35a4a89) <a id="structFRHAPI__PlayerReportCreate_1ad8865f21e04214d91a4b7efae35a4a89"></a>

true if MatchId_Optional has been set to a value

#### `public bool `[`MatchId_IsNull`](#structFRHAPI__PlayerReportCreate_1a5e0896fc5bb1d1cc169674d8eb2b2852) <a id="structFRHAPI__PlayerReportCreate_1a5e0896fc5bb1d1cc169674d8eb2b2852"></a>

true if MatchId_Optional has been explicitly set to null

#### `public FString `[`MatchSegment_Optional`](#structFRHAPI__PlayerReportCreate_1a3e6ec7b6fa751746fc3976f815044bb2) <a id="structFRHAPI__PlayerReportCreate_1a3e6ec7b6fa751746fc3976f815044bb2"></a>

#### `public bool `[`MatchSegment_IsSet`](#structFRHAPI__PlayerReportCreate_1a47e7b1ab35e62f470c8280657f61a69f) <a id="structFRHAPI__PlayerReportCreate_1a47e7b1ab35e62f470c8280657f61a69f"></a>

true if MatchSegment_Optional has been set to a value

#### `public bool `[`MatchSegment_IsNull`](#structFRHAPI__PlayerReportCreate_1ac7911ae01e25d49292933b3b982686e5) <a id="structFRHAPI__PlayerReportCreate_1ac7911ae01e25d49292933b3b982686e5"></a>

true if MatchSegment_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerReportCreate_1af0a6cd9e4b2cdb5da74aaf38a6285ea5) <a id="structFRHAPI__PlayerReportCreate_1af0a6cd9e4b2cdb5da74aaf38a6285ea5"></a>

Custom data for the report.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerReportCreate_1a1bbfc6abab3eb0dd6fb9969abb090264) <a id="structFRHAPI__PlayerReportCreate_1a1bbfc6abab3eb0dd6fb9969abb090264"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerReportCreate_1a1b9036b5358b0fc4c8b840a9eafd2038)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerReportCreate_1a1b9036b5358b0fc4c8b840a9eafd2038"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerReportCreate_1a48081b7e044ad37f4a1c0ab3cd180294)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerReportCreate_1a48081b7e044ad37f4a1c0ab3cd180294"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1a77326f763881f32e277f6d8deab9a46b)`()` <a id="structFRHAPI__PlayerReportCreate_1a77326f763881f32e277f6d8deab9a46b"></a>

Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1a5e5326ba5cda9f16a5ec7fc5540b880f)`() const` <a id="structFRHAPI__PlayerReportCreate_1a5e5326ba5cda9f16a5ec7fc5540b880f"></a>

Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1acdd7962361bed21304af4b76367c8aa1)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerReportCreate_1acdd7962361bed21304af4b76367c8aa1"></a>

Gets the value of SourcePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1a0695cf5c40db719be31e3dae571e3fd4)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerReportCreate_1a0695cf5c40db719be31e3dae571e3fd4"></a>

Fills OutValue with the value of SourcePlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__PlayerReportCreate_1ad2bc469e67dd6af0ef0f98d25b51b9cd)`()` <a id="structFRHAPI__PlayerReportCreate_1ad2bc469e67dd6af0ef0f98d25b51b9cd"></a>

Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__PlayerReportCreate_1ade9a6aa88b15efc533352be6cd3d8fc4)`() const` <a id="structFRHAPI__PlayerReportCreate_1ade9a6aa88b15efc533352be6cd3d8fc4"></a>

Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1a85507784bf68383f220c6ea9550b82f9)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerReportCreate_1a85507784bf68383f220c6ea9550b82f9"></a>

Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true.

#### `public inline void `[`SetSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1ae7d091d126d2f9e292815f2ec0d42db6)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerReportCreate_1ae7d091d126d2f9e292815f2ec0d42db6"></a>

Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearSourcePlayerUuid`](#structFRHAPI__PlayerReportCreate_1a7d9b960ef7bc98a414db20046a0a57b2)`()` <a id="structFRHAPI__PlayerReportCreate_1a7d9b960ef7bc98a414db20046a0a57b2"></a>

Clears the value of SourcePlayerUuid_Optional and sets SourcePlayerUuid_IsSet to false.

#### `public inline bool `[`IsSourcePlayerUuidSet`](#structFRHAPI__PlayerReportCreate_1a09a38fc4c1f40bb344ad92dfe15fa1a3)`() const` <a id="structFRHAPI__PlayerReportCreate_1a09a38fc4c1f40bb344ad92dfe15fa1a3"></a>

Checks whether SourcePlayerUuid_Optional has been set.

#### `public inline void `[`SetSourcePlayerUuidToNull`](#structFRHAPI__PlayerReportCreate_1a373ea47be6bbc01d798ee61dc4ff577e)`()` <a id="structFRHAPI__PlayerReportCreate_1a373ea47be6bbc01d798ee61dc4ff577e"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsSourcePlayerUuidNull`](#structFRHAPI__PlayerReportCreate_1a3d4bedfc2d5baa16d097b2d6935927a1)`() const` <a id="structFRHAPI__PlayerReportCreate_1a3d4bedfc2d5baa16d097b2d6935927a1"></a>

Checks whether SourcePlayerUuid_Optional is set to null.

#### `public inline ERHAPI_ReportReason & `[`GetReason`](#structFRHAPI__PlayerReportCreate_1a77be964e47f259ca5352b45fa2fa0fbd)`()` <a id="structFRHAPI__PlayerReportCreate_1a77be964e47f259ca5352b45fa2fa0fbd"></a>

Gets the value of Reason.

#### `public inline const ERHAPI_ReportReason & `[`GetReason`](#structFRHAPI__PlayerReportCreate_1aec2caf6d131b6c0c97154a27023c21c4)`() const` <a id="structFRHAPI__PlayerReportCreate_1aec2caf6d131b6c0c97154a27023c21c4"></a>

Gets the value of Reason.

#### `public inline void `[`SetReason`](#structFRHAPI__PlayerReportCreate_1ab3ff527fda97ee8c787162817e195c35)`(const ERHAPI_ReportReason & NewValue)` <a id="structFRHAPI__PlayerReportCreate_1ab3ff527fda97ee8c787162817e195c35"></a>

Sets the value of Reason.

#### `public inline void `[`SetReason`](#structFRHAPI__PlayerReportCreate_1a8dbfd36c8dbae5c98eb8570961631e0e)`(ERHAPI_ReportReason && NewValue)` <a id="structFRHAPI__PlayerReportCreate_1a8dbfd36c8dbae5c98eb8570961631e0e"></a>

Sets the value of Reason using move semantics.

#### `public inline FString & `[`GetDescription`](#structFRHAPI__PlayerReportCreate_1af88e443ee720001ed2e8d3f5bbf1b30e)`()` <a id="structFRHAPI__PlayerReportCreate_1af88e443ee720001ed2e8d3f5bbf1b30e"></a>

Gets the value of Description_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDescription`](#structFRHAPI__PlayerReportCreate_1a0e0dddcb923813e35a4fe696fdcfbd9d)`() const` <a id="structFRHAPI__PlayerReportCreate_1a0e0dddcb923813e35a4fe696fdcfbd9d"></a>

Gets the value of Description_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDescription`](#structFRHAPI__PlayerReportCreate_1a28920f4c2390ddecdcba1c948a160c97)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReportCreate_1a28920f4c2390ddecdcba1c948a160c97"></a>

Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDescription`](#structFRHAPI__PlayerReportCreate_1a1700ed6341aed67bf6133d3931e0cbf6)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReportCreate_1a1700ed6341aed67bf6133d3931e0cbf6"></a>

Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetDescriptionOrNull`](#structFRHAPI__PlayerReportCreate_1a64203bce5e3534e6758c8bd97e32a08c)`()` <a id="structFRHAPI__PlayerReportCreate_1a64203bce5e3534e6758c8bd97e32a08c"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetDescriptionOrNull`](#structFRHAPI__PlayerReportCreate_1a0fbac3f01b36879508f6503af8f42a11)`() const` <a id="structFRHAPI__PlayerReportCreate_1a0fbac3f01b36879508f6503af8f42a11"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDescription`](#structFRHAPI__PlayerReportCreate_1a1f4031fe73e55c113dd99dc8e4516894)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReportCreate_1a1f4031fe73e55c113dd99dc8e4516894"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true.

#### `public inline void `[`SetDescription`](#structFRHAPI__PlayerReportCreate_1abf63ccedb74f70d5d49f0a138279e017)`(FString && NewValue)` <a id="structFRHAPI__PlayerReportCreate_1abf63ccedb74f70d5d49f0a138279e017"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true using move semantics.

#### `public inline void `[`ClearDescription`](#structFRHAPI__PlayerReportCreate_1a7f85bc0a1c63fd0d2b7ea1ec11e50eb9)`()` <a id="structFRHAPI__PlayerReportCreate_1a7f85bc0a1c63fd0d2b7ea1ec11e50eb9"></a>

Clears the value of Description_Optional and sets Description_IsSet to false.

#### `public inline bool `[`IsDescriptionSet`](#structFRHAPI__PlayerReportCreate_1a0906ec4a84b6f82f95bd83fb6c41d19c)`() const` <a id="structFRHAPI__PlayerReportCreate_1a0906ec4a84b6f82f95bd83fb6c41d19c"></a>

Checks whether Description_Optional has been set.

#### `public inline void `[`SetDescriptionToNull`](#structFRHAPI__PlayerReportCreate_1a74f9096c4ec6f7fb899c463c2e6c34bd)`()` <a id="structFRHAPI__PlayerReportCreate_1a74f9096c4ec6f7fb899c463c2e6c34bd"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsDescriptionNull`](#structFRHAPI__PlayerReportCreate_1a3a0db085577f963100d4055313911f81)`() const` <a id="structFRHAPI__PlayerReportCreate_1a3a0db085577f963100d4055313911f81"></a>

Checks whether Description_Optional is set to null.

#### `public inline FString & `[`GetSessionId`](#structFRHAPI__PlayerReportCreate_1a239d6debf14b1bff567a431162da200f)`()` <a id="structFRHAPI__PlayerReportCreate_1a239d6debf14b1bff567a431162da200f"></a>

Gets the value of SessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__PlayerReportCreate_1aa648e9c84931f153603e09bf225ef308)`() const` <a id="structFRHAPI__PlayerReportCreate_1aa648e9c84931f153603e09bf225ef308"></a>

Gets the value of SessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__PlayerReportCreate_1ac18da6dc17e19fb49dd994792a2b9bde)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReportCreate_1ac18da6dc17e19fb49dd994792a2b9bde"></a>

Gets the value of SessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessionId`](#structFRHAPI__PlayerReportCreate_1a9d07dbbbc4aef0a8931d1f7d3550949e)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReportCreate_1a9d07dbbbc4aef0a8931d1f7d3550949e"></a>

Fills OutValue with the value of SessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetSessionIdOrNull`](#structFRHAPI__PlayerReportCreate_1ae408820732002fddab2637fc8b62a2e7)`()` <a id="structFRHAPI__PlayerReportCreate_1ae408820732002fddab2637fc8b62a2e7"></a>

Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetSessionIdOrNull`](#structFRHAPI__PlayerReportCreate_1a2e2883c6faf292b8c44df64a0c836348)`() const` <a id="structFRHAPI__PlayerReportCreate_1a2e2883c6faf292b8c44df64a0c836348"></a>

Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessionId`](#structFRHAPI__PlayerReportCreate_1aadd5ac4eb6255a1cba9b6b36f4561732)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReportCreate_1aadd5ac4eb6255a1cba9b6b36f4561732"></a>

Sets the value of SessionId_Optional and also sets SessionId_IsSet to true.

#### `public inline void `[`SetSessionId`](#structFRHAPI__PlayerReportCreate_1a85c38202480c41e279f047b94defa6b2)`(FString && NewValue)` <a id="structFRHAPI__PlayerReportCreate_1a85c38202480c41e279f047b94defa6b2"></a>

Sets the value of SessionId_Optional and also sets SessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionId`](#structFRHAPI__PlayerReportCreate_1a2f7e0fd5fcd6d2290806e50386034f92)`()` <a id="structFRHAPI__PlayerReportCreate_1a2f7e0fd5fcd6d2290806e50386034f92"></a>

Clears the value of SessionId_Optional and sets SessionId_IsSet to false.

#### `public inline bool `[`IsSessionIdSet`](#structFRHAPI__PlayerReportCreate_1a641b7daadad93acad764c96369b6134d)`() const` <a id="structFRHAPI__PlayerReportCreate_1a641b7daadad93acad764c96369b6134d"></a>

Checks whether SessionId_Optional has been set.

#### `public inline void `[`SetSessionIdToNull`](#structFRHAPI__PlayerReportCreate_1ac61dc91bc7937d6120354f264022e526)`()` <a id="structFRHAPI__PlayerReportCreate_1ac61dc91bc7937d6120354f264022e526"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsSessionIdNull`](#structFRHAPI__PlayerReportCreate_1a99b847edebb945809b9fb98ae2cfdb01)`() const` <a id="structFRHAPI__PlayerReportCreate_1a99b847edebb945809b9fb98ae2cfdb01"></a>

Checks whether SessionId_Optional is set to null.

#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__PlayerReportCreate_1a7fd9deda6c842a6a1e71f5ace290f18c)`()` <a id="structFRHAPI__PlayerReportCreate_1a7fd9deda6c842a6a1e71f5ace290f18c"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerReportCreate_1adabac6d79cdcc24ea70c2057b2854f78)`() const` <a id="structFRHAPI__PlayerReportCreate_1adabac6d79cdcc24ea70c2057b2854f78"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__PlayerReportCreate_1a4c310fc1a2a901f2fe7e5bbfdec59bd8)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReportCreate_1a4c310fc1a2a901f2fe7e5bbfdec59bd8"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceId`](#structFRHAPI__PlayerReportCreate_1a1802f5f02d093309052b209c005f9577)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReportCreate_1a1802f5f02d093309052b209c005f9577"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerReportCreate_1ad30cbd8d0aa31bf1580a64b1d570a9a2)`()` <a id="structFRHAPI__PlayerReportCreate_1ad30cbd8d0aa31bf1580a64b1d570a9a2"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerReportCreate_1ab9c7152a39df32355edec578987f0375)`() const` <a id="structFRHAPI__PlayerReportCreate_1ab9c7152a39df32355edec578987f0375"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__PlayerReportCreate_1ab22f13b3348064b382455efa0f3d713d)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReportCreate_1ab22f13b3348064b382455efa0f3d713d"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__PlayerReportCreate_1a1dac2f36edd5310438b7a937ba8151e5)`(FString && NewValue)` <a id="structFRHAPI__PlayerReportCreate_1a1dac2f36edd5310438b7a937ba8151e5"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerReportCreate_1a7e52142db616d9b2511f7849effc6e82)`()` <a id="structFRHAPI__PlayerReportCreate_1a7e52142db616d9b2511f7849effc6e82"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline bool `[`IsInstanceIdSet`](#structFRHAPI__PlayerReportCreate_1ac011a5bf8c1df9f96dcd373061a1d58c)`() const` <a id="structFRHAPI__PlayerReportCreate_1ac011a5bf8c1df9f96dcd373061a1d58c"></a>

Checks whether InstanceId_Optional has been set.

#### `public inline void `[`SetInstanceIdToNull`](#structFRHAPI__PlayerReportCreate_1ae8a8057ffc6a4ca56b923006931a1c1c)`()` <a id="structFRHAPI__PlayerReportCreate_1ae8a8057ffc6a4ca56b923006931a1c1c"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsInstanceIdNull`](#structFRHAPI__PlayerReportCreate_1a16c39d7f4b91c36ace0333169f2f58dc)`() const` <a id="structFRHAPI__PlayerReportCreate_1a16c39d7f4b91c36ace0333169f2f58dc"></a>

Checks whether InstanceId_Optional is set to null.

#### `public inline FString & `[`GetMatchId`](#structFRHAPI__PlayerReportCreate_1a8899dfba7fe94555a73518d5f5555219)`()` <a id="structFRHAPI__PlayerReportCreate_1a8899dfba7fe94555a73518d5f5555219"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerReportCreate_1af53edf752ffc6c4549d44d5e610e58d9)`() const` <a id="structFRHAPI__PlayerReportCreate_1af53edf752ffc6c4549d44d5e610e58d9"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__PlayerReportCreate_1adda496e8ae47edc89ea9012b75287565)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReportCreate_1adda496e8ae47edc89ea9012b75287565"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchId`](#structFRHAPI__PlayerReportCreate_1a89a20ce0e6e10ee0054175b7004a4979)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReportCreate_1a89a20ce0e6e10ee0054175b7004a4979"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerReportCreate_1a62ffb5d3d8468fc8564c31784f1fbe94)`()` <a id="structFRHAPI__PlayerReportCreate_1a62ffb5d3d8468fc8564c31784f1fbe94"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerReportCreate_1aa9ce5d9b5e3bb8ef62f9e76d75cc6f72)`() const` <a id="structFRHAPI__PlayerReportCreate_1aa9ce5d9b5e3bb8ef62f9e76d75cc6f72"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchId`](#structFRHAPI__PlayerReportCreate_1a8862f42ee9ab8bda1d3c4f125bddab3d)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReportCreate_1a8862f42ee9ab8bda1d3c4f125bddab3d"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline void `[`SetMatchId`](#structFRHAPI__PlayerReportCreate_1a5046af152ca9bc2c998bb9d2359b7cca)`(FString && NewValue)` <a id="structFRHAPI__PlayerReportCreate_1a5046af152ca9bc2c998bb9d2359b7cca"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__PlayerReportCreate_1a38ca328eb0f211ebff244c6aa4928d9b)`()` <a id="structFRHAPI__PlayerReportCreate_1a38ca328eb0f211ebff244c6aa4928d9b"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline bool `[`IsMatchIdSet`](#structFRHAPI__PlayerReportCreate_1ac317eb21ecb90188e31a1a82e3ac9cb5)`() const` <a id="structFRHAPI__PlayerReportCreate_1ac317eb21ecb90188e31a1a82e3ac9cb5"></a>

Checks whether MatchId_Optional has been set.

#### `public inline void `[`SetMatchIdToNull`](#structFRHAPI__PlayerReportCreate_1a25ec9dad33e5b603e09babfe74859dd4)`()` <a id="structFRHAPI__PlayerReportCreate_1a25ec9dad33e5b603e09babfe74859dd4"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsMatchIdNull`](#structFRHAPI__PlayerReportCreate_1a4534118f59eead8ea4897061020389f7)`() const` <a id="structFRHAPI__PlayerReportCreate_1a4534118f59eead8ea4897061020389f7"></a>

Checks whether MatchId_Optional is set to null.

#### `public inline FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReportCreate_1a9fd2d28cd703d4873e11f3f4af87d278)`()` <a id="structFRHAPI__PlayerReportCreate_1a9fd2d28cd703d4873e11f3f4af87d278"></a>

Gets the value of MatchSegment_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReportCreate_1ab1d5a036eaff75f92c2da48fd95ef81f)`() const` <a id="structFRHAPI__PlayerReportCreate_1ab1d5a036eaff75f92c2da48fd95ef81f"></a>

Gets the value of MatchSegment_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReportCreate_1a918251ea06e637ba007303793008cbc6)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReportCreate_1a918251ea06e637ba007303793008cbc6"></a>

Gets the value of MatchSegment_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchSegment`](#structFRHAPI__PlayerReportCreate_1a5adbf14f6b6867e841a4c6a0cfe28f5a)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReportCreate_1a5adbf14f6b6867e841a4c6a0cfe28f5a"></a>

Fills OutValue with the value of MatchSegment_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchSegmentOrNull`](#structFRHAPI__PlayerReportCreate_1a165e48ee54b4213c55d36377fddf12c2)`()` <a id="structFRHAPI__PlayerReportCreate_1a165e48ee54b4213c55d36377fddf12c2"></a>

Returns a pointer to MatchSegment_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchSegmentOrNull`](#structFRHAPI__PlayerReportCreate_1a2b8842a92015b8e07528959866b8c827)`() const` <a id="structFRHAPI__PlayerReportCreate_1a2b8842a92015b8e07528959866b8c827"></a>

Returns a pointer to MatchSegment_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchSegment`](#structFRHAPI__PlayerReportCreate_1a0765cf0d0678937260248b87cbd5597f)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReportCreate_1a0765cf0d0678937260248b87cbd5597f"></a>

Sets the value of MatchSegment_Optional and also sets MatchSegment_IsSet to true.

#### `public inline void `[`SetMatchSegment`](#structFRHAPI__PlayerReportCreate_1a9004fccff71e32f46c7511b27e0aa246)`(FString && NewValue)` <a id="structFRHAPI__PlayerReportCreate_1a9004fccff71e32f46c7511b27e0aa246"></a>

Sets the value of MatchSegment_Optional and also sets MatchSegment_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchSegment`](#structFRHAPI__PlayerReportCreate_1a77f62ec257566a8945a0cda87a9c9749)`()` <a id="structFRHAPI__PlayerReportCreate_1a77f62ec257566a8945a0cda87a9c9749"></a>

Clears the value of MatchSegment_Optional and sets MatchSegment_IsSet to false.

#### `public inline bool `[`IsMatchSegmentSet`](#structFRHAPI__PlayerReportCreate_1a5283afac4827c7503699d2520b0e6244)`() const` <a id="structFRHAPI__PlayerReportCreate_1a5283afac4827c7503699d2520b0e6244"></a>

Checks whether MatchSegment_Optional has been set.

#### `public inline void `[`SetMatchSegmentToNull`](#structFRHAPI__PlayerReportCreate_1a7f40a65b4eb1e69a360cf11f6d164a6d)`()` <a id="structFRHAPI__PlayerReportCreate_1a7f40a65b4eb1e69a360cf11f6d164a6d"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsMatchSegmentNull`](#structFRHAPI__PlayerReportCreate_1ab3a7db6568d5038d634d541929b0addb)`() const` <a id="structFRHAPI__PlayerReportCreate_1ab3a7db6568d5038d634d541929b0addb"></a>

Checks whether MatchSegment_Optional is set to null.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReportCreate_1aa13f56e60699b38130e83b245a4fdfb4)`()` <a id="structFRHAPI__PlayerReportCreate_1aa13f56e60699b38130e83b245a4fdfb4"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReportCreate_1ac33af0a5df30b7cfb37d8d5d05f0d14b)`() const` <a id="structFRHAPI__PlayerReportCreate_1ac33af0a5df30b7cfb37d8d5d05f0d14b"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReportCreate_1afe46c9f8866da45b9abbdfa3ec58d4b9)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerReportCreate_1afe46c9f8866da45b9abbdfa3ec58d4b9"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__PlayerReportCreate_1a78e58e71b5702dd40f0708b0895d115e)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerReportCreate_1a78e58e71b5702dd40f0708b0895d115e"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerReportCreate_1aeff34d07786a598fe155bb91e59c21f0)`()` <a id="structFRHAPI__PlayerReportCreate_1aeff34d07786a598fe155bb91e59c21f0"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerReportCreate_1a5d2c978f042736e7a2d4de7c6f05a12f)`() const` <a id="structFRHAPI__PlayerReportCreate_1a5d2c978f042736e7a2d4de7c6f05a12f"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerReportCreate_1a6cfd837858d0ca90c9e61db025ecaf25)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlayerReportCreate_1a6cfd837858d0ca90c9e61db025ecaf25"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerReportCreate_1ad150fa673af72cd1ceafefc7986ea3d8)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlayerReportCreate_1ad150fa673af72cd1ceafefc7986ea3d8"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerReportCreate_1aeb04e4a3eab4d12fe85d012865e7240a)`()` <a id="structFRHAPI__PlayerReportCreate_1aeb04e4a3eab4d12fe85d012865e7240a"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlayerReportCreate_1a459f0c96dfc18dc23acc9c17007d84a4)`() const` <a id="structFRHAPI__PlayerReportCreate_1a459f0c96dfc18dc23acc9c17007d84a4"></a>

Checks whether CustomData_Optional has been set.

