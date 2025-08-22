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
`public inline FORCEINLINE FString & `[`GetReportId`](#structFRHAPI__PlayerReport_1af697c34282ba15fa42c26f0f78c12689)`()` | Gets the value of ReportId.
`public inline FORCEINLINE const FString & `[`GetReportId`](#structFRHAPI__PlayerReport_1afb95e1b75552e609e73e288867e6383e)`() const` | Gets the value of ReportId.
`public inline FORCEINLINE void `[`SetReportId`](#structFRHAPI__PlayerReport_1a3e9d672bc432c3a0f9afe18cf14804ec)`(const FString & NewValue)` | Sets the value of ReportId.
`public inline FORCEINLINE void `[`SetReportId`](#structFRHAPI__PlayerReport_1a377f2e17c6c9f1c32a68808bdaaa9d82)`(FString && NewValue)` | Sets the value of ReportId using move semantics.
`public inline FORCEINLINE FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a158602aac33b5e5d0ad5571bb18401bd)`()` | Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a67094914197d11717193c6bd0d779c54)`() const` | Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a41d7c61a585527d2ab036906e2a75238)`(const FGuid & DefaultValue) const` | Gets the value of SourcePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a1b4d353bda0b91629ab6a04796f9da37)`(FGuid & OutValue) const` | Fills OutValue with the value of SourcePlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__PlayerReport_1a3c50a404e7fd5726912125f70326294e)`()` | Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__PlayerReport_1acd8ebd16d9b1cb2b61a6af618026b25b)`() const` | Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a3a2166770f993f8a3c0ccd8e5b4e11d0)`(const FGuid & NewValue)` | Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1ad506621e842899d9b349e4198ecc8346)`(FGuid && NewValue)` | Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a97a7000fa35325ceb49685aad4d82199)`()` | Clears the value of SourcePlayerUuid_Optional and sets SourcePlayerUuid_IsSet to false.
`public inline FORCEINLINE void `[`SetSourcePlayerUuidToNull`](#structFRHAPI__PlayerReport_1aa40b1cf6cb0334b417f3a6592bce0686)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsSourcePlayerUuidNull`](#structFRHAPI__PlayerReport_1a3037a98d4834c77f16bb6d26079b7284)`() const` | Checks whether SourcePlayerUuid_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetSourcePlayerId`](#structFRHAPI__PlayerReport_1ae150ba6042eddde873d2b3d936909bde)`()` | Gets the value of SourcePlayerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetSourcePlayerId`](#structFRHAPI__PlayerReport_1a7ef1ed59b2ce3c22312e69200760cc60)`() const` | Gets the value of SourcePlayerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetSourcePlayerId`](#structFRHAPI__PlayerReport_1a56f4be5c43609e20b6946cd50c239bef)`(const int32 & DefaultValue) const` | Gets the value of SourcePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSourcePlayerId`](#structFRHAPI__PlayerReport_1ada707d55ea91a74467af3df2483cc1f5)`(int32 & OutValue) const` | Fills OutValue with the value of SourcePlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetSourcePlayerIdOrNull`](#structFRHAPI__PlayerReport_1ae48ebe2de5036ec6851f41f28a7dd558)`()` | Returns a pointer to SourcePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetSourcePlayerIdOrNull`](#structFRHAPI__PlayerReport_1a7749698b2d57d82b6510124e82412526)`() const` | Returns a pointer to SourcePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSourcePlayerId`](#structFRHAPI__PlayerReport_1a56f93e60d592a6df5411daf674004d78)`(const int32 & NewValue)` | Sets the value of SourcePlayerId_Optional and also sets SourcePlayerId_IsSet to true.
`public inline FORCEINLINE void `[`SetSourcePlayerId`](#structFRHAPI__PlayerReport_1a59a2e167cf5d207a60fcaaebf3197e14)`(int32 && NewValue)` | Sets the value of SourcePlayerId_Optional and also sets SourcePlayerId_IsSet to true using move semantics.
`public inline void `[`ClearSourcePlayerId`](#structFRHAPI__PlayerReport_1a2344462927f94ee3533b684debd2c485)`()` | Clears the value of SourcePlayerId_Optional and sets SourcePlayerId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_SourcePlayerId`](#structFRHAPI__PlayerReport_1a9de6c4ee7a49bd9b5cc730691d45cd79)`()` | Returns the default value of SourcePlayerId.
`public inline FORCEINLINE void `[`SetSourcePlayerIdToNull`](#structFRHAPI__PlayerReport_1a850879846c3f5d0d643413aba36e41d5)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsSourcePlayerIdNull`](#structFRHAPI__PlayerReport_1a1b444a1bbf8adbfe5b1cc3ada66105c4)`() const` | Checks whether SourcePlayerId_Optional is set to null.
`public inline FORCEINLINE FGuid & `[`GetTargetPlayerUuid`](#structFRHAPI__PlayerReport_1ae33cabf04657afde09c6c253ac6c8590)`()` | Gets the value of TargetPlayerUuid.
`public inline FORCEINLINE const FGuid & `[`GetTargetPlayerUuid`](#structFRHAPI__PlayerReport_1a9374415ce0dbfba37509fcc1b03b8147)`() const` | Gets the value of TargetPlayerUuid.
`public inline FORCEINLINE void `[`SetTargetPlayerUuid`](#structFRHAPI__PlayerReport_1a64a542cbef6bbdeeed88ab6a682ee378)`(const FGuid & NewValue)` | Sets the value of TargetPlayerUuid.
`public inline FORCEINLINE void `[`SetTargetPlayerUuid`](#structFRHAPI__PlayerReport_1abcf8aad80c6cadc943eaa9d938ecd213)`(FGuid && NewValue)` | Sets the value of TargetPlayerUuid using move semantics.
`public inline FORCEINLINE void `[`SetTargetPlayerUuidToNull`](#structFRHAPI__PlayerReport_1a4d167731f9f91ba3ea4f84779a031294)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsTargetPlayerUuidNull`](#structFRHAPI__PlayerReport_1a5422f21846f460e4a297436ecff2ced4)`() const` | Checks whether TargetPlayerUuid is set to null.
`public inline FORCEINLINE int32 & `[`GetTargetPlayerId`](#structFRHAPI__PlayerReport_1a17e7d538e5de0000654c9a7ef9be752b)`()` | Gets the value of TargetPlayerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTargetPlayerId`](#structFRHAPI__PlayerReport_1ab125375de73c58f5f4c45658e7f0f265)`() const` | Gets the value of TargetPlayerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTargetPlayerId`](#structFRHAPI__PlayerReport_1aeb0abe090f8205796bc65d031dc752d7)`(const int32 & DefaultValue) const` | Gets the value of TargetPlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTargetPlayerId`](#structFRHAPI__PlayerReport_1ad13eca31a636f88cafdb323a22a771dc)`(int32 & OutValue) const` | Fills OutValue with the value of TargetPlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetTargetPlayerIdOrNull`](#structFRHAPI__PlayerReport_1a95743d40931221664c503859636e9b02)`()` | Returns a pointer to TargetPlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetTargetPlayerIdOrNull`](#structFRHAPI__PlayerReport_1a51f747a6ca906228f8dbb848a6842734)`() const` | Returns a pointer to TargetPlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTargetPlayerId`](#structFRHAPI__PlayerReport_1a8a472e02617662cb5db699687ffc62fb)`(const int32 & NewValue)` | Sets the value of TargetPlayerId_Optional and also sets TargetPlayerId_IsSet to true.
`public inline FORCEINLINE void `[`SetTargetPlayerId`](#structFRHAPI__PlayerReport_1a717c6259f63dfd4292c47056cd206bac)`(int32 && NewValue)` | Sets the value of TargetPlayerId_Optional and also sets TargetPlayerId_IsSet to true using move semantics.
`public inline void `[`ClearTargetPlayerId`](#structFRHAPI__PlayerReport_1a9e65eafed1ef63b813a5e989a342503d)`()` | Clears the value of TargetPlayerId_Optional and sets TargetPlayerId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_TargetPlayerId`](#structFRHAPI__PlayerReport_1a1aed1115271980a932ab0e443c16cddf)`()` | Returns the default value of TargetPlayerId.
`public inline FORCEINLINE void `[`SetTargetPlayerIdToNull`](#structFRHAPI__PlayerReport_1addea2e52a358dcb75e6d84f1063dd994)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsTargetPlayerIdNull`](#structFRHAPI__PlayerReport_1a2c2cb75cef0a04900229a58edb906db0)`() const` | Checks whether TargetPlayerId_Optional is set to null.
`public inline FORCEINLINE ERHAPI_ReportReason & `[`GetReason`](#structFRHAPI__PlayerReport_1a4ccca21b47d317a98392dd6a3c0fc883)`()` | Gets the value of Reason.
`public inline FORCEINLINE const ERHAPI_ReportReason & `[`GetReason`](#structFRHAPI__PlayerReport_1a5e9c063fb8dcb1204c8e1fb9cf897357)`() const` | Gets the value of Reason.
`public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__PlayerReport_1a7925113be97ef7012fd9562b66c8f803)`(const ERHAPI_ReportReason & NewValue)` | Sets the value of Reason.
`public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__PlayerReport_1a01157ada44a0063a42b813661692e851)`(ERHAPI_ReportReason && NewValue)` | Sets the value of Reason using move semantics.
`public inline FORCEINLINE FString & `[`GetDescription`](#structFRHAPI__PlayerReport_1a1fe8607a71ee2e28c290f84d98fb6a60)`()` | Gets the value of Description_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDescription`](#structFRHAPI__PlayerReport_1a67d6c3231173edb3187a22166d33934b)`() const` | Gets the value of Description_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDescription`](#structFRHAPI__PlayerReport_1ae085670f364c3de76d7d6f271ada750d)`(const FString & DefaultValue) const` | Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDescription`](#structFRHAPI__PlayerReport_1a83aac36b9074779a1ace559606dcdf59)`(FString & OutValue) const` | Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetDescriptionOrNull`](#structFRHAPI__PlayerReport_1a0b9b34696a14e6b642a3a2a515e69513)`()` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetDescriptionOrNull`](#structFRHAPI__PlayerReport_1a02c7a85161bcbeabf9360dda6b09f311)`() const` | Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDescription`](#structFRHAPI__PlayerReport_1af7ab2aec5aa77b440803ca6fce54458a)`(const FString & NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true.
`public inline FORCEINLINE void `[`SetDescription`](#structFRHAPI__PlayerReport_1ae901181de01fa6bc8cbbf461f128809f)`(FString && NewValue)` | Sets the value of Description_Optional and also sets Description_IsSet to true using move semantics.
`public inline void `[`ClearDescription`](#structFRHAPI__PlayerReport_1a538e1c8d7a4c7ee210040970d062c7b7)`()` | Clears the value of Description_Optional and sets Description_IsSet to false.
`public inline FORCEINLINE void `[`SetDescriptionToNull`](#structFRHAPI__PlayerReport_1ae5f7360522f9b95efd09e752f344fff5)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsDescriptionNull`](#structFRHAPI__PlayerReport_1acc176911e9d107e3a3accb3afcc1c3da)`() const` | Checks whether Description_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetSessionId`](#structFRHAPI__PlayerReport_1a1e3e8e5296b1281f669546e82abd997c)`()` | Gets the value of SessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__PlayerReport_1ab9d764e823dcd3781da8dd5c4ecc8e14)`() const` | Gets the value of SessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__PlayerReport_1a591ecfb362a50aab96d9cc7d4a214ebe)`(const FString & DefaultValue) const` | Gets the value of SessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSessionId`](#structFRHAPI__PlayerReport_1a16171519ba070a47933f37b84a01cd44)`(FString & OutValue) const` | Fills OutValue with the value of SessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetSessionIdOrNull`](#structFRHAPI__PlayerReport_1a9c7fca9aa7d5f4aa6e8f40700d4ce5ed)`()` | Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetSessionIdOrNull`](#structFRHAPI__PlayerReport_1a8af2166c01e25a31a1961ea2e1ff65b3)`() const` | Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__PlayerReport_1a4a92ecaf02178ee35f4746a5e42af398)`(const FString & NewValue)` | Sets the value of SessionId_Optional and also sets SessionId_IsSet to true.
`public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__PlayerReport_1ae0a50bcda29e4ef5e9c262d55ed594aa)`(FString && NewValue)` | Sets the value of SessionId_Optional and also sets SessionId_IsSet to true using move semantics.
`public inline void `[`ClearSessionId`](#structFRHAPI__PlayerReport_1ac11ae75048c12ead402ab706c2942b51)`()` | Clears the value of SessionId_Optional and sets SessionId_IsSet to false.
`public inline FORCEINLINE void `[`SetSessionIdToNull`](#structFRHAPI__PlayerReport_1a86b3f3397e1e456889bd4df236592142)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsSessionIdNull`](#structFRHAPI__PlayerReport_1a27c7263f95372006425b54c131aea138)`() const` | Checks whether SessionId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__PlayerReport_1af8288bb31b55c2a7be9929ff97f1de0e)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerReport_1a43cae75d6b7fd10aef14b5dfa4b6a53c)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerReport_1a7c67d51d24d384b2a73c14af92827c18)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstanceId`](#structFRHAPI__PlayerReport_1ae6db47e7c5a31e4ea9a085f9a407275f)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerReport_1ac53c16474a8c5a13f7e0b82cdec7f871)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerReport_1adda5de203c8ca1019ed84147091a294a)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerReport_1af3469ed5f48d282e50c050be320201ee)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerReport_1a1f0a164163e16c63e37666a40d8aaaec)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerReport_1a318e81296d4530aa395cb9ce323aaf10)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline FORCEINLINE void `[`SetInstanceIdToNull`](#structFRHAPI__PlayerReport_1ad81b8a67cbe01429cf25cc4917bffc04)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsInstanceIdNull`](#structFRHAPI__PlayerReport_1a3b4c00cf29d1af66ac6eccee7237f987)`() const` | Checks whether InstanceId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__PlayerReport_1a760df232950255a6b70f56c12ae687b1)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__PlayerReport_1a069e9288cc1194c4e4ffb20fe970eb79)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__PlayerReport_1af5f51b92c6c441b195c314dfedd9c5dc)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__PlayerReport_1a9cee3a1c5044aaeb6d9ae3560e8c4b64)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerReport_1af2a56d94d6b3a97102a03583bbdb4b87)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerReport_1a526634a0f113bf1723da1c3ebdb91e96)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__PlayerReport_1aa3e11c63095cad0959ce89a4c472a1f0)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__PlayerReport_1a4f17c7b8447ea19df1342327b11fce47)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__PlayerReport_1ac5cdcfbdb2a8fd6732bd130cf6da9a56)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline FORCEINLINE void `[`SetMatchIdToNull`](#structFRHAPI__PlayerReport_1ab5d98e35d8021555afbeaba259f13cdd)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMatchIdNull`](#structFRHAPI__PlayerReport_1a7edf1cdeda68f97d3faed1e601ef903a)`() const` | Checks whether MatchId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReport_1aacef9d6d6589d3b6e223c3f8d8053212)`()` | Gets the value of MatchSegment_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReport_1aab8dfa8f943d1e2309473b1e98222f94)`() const` | Gets the value of MatchSegment_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReport_1ab3ccb2abc7bf66356087aafd207ed44c)`(const FString & DefaultValue) const` | Gets the value of MatchSegment_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatchSegment`](#structFRHAPI__PlayerReport_1a1d8df5ae583740c7ba9c01218164fbec)`(FString & OutValue) const` | Fills OutValue with the value of MatchSegment_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMatchSegmentOrNull`](#structFRHAPI__PlayerReport_1a4d6413387440013bd6940b1936818d81)`()` | Returns a pointer to MatchSegment_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMatchSegmentOrNull`](#structFRHAPI__PlayerReport_1a0c20229a73f251e7c9b6225d3a5b7f4e)`() const` | Returns a pointer to MatchSegment_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatchSegment`](#structFRHAPI__PlayerReport_1a0101e9bcddef0c9832892790770608aa)`(const FString & NewValue)` | Sets the value of MatchSegment_Optional and also sets MatchSegment_IsSet to true.
`public inline FORCEINLINE void `[`SetMatchSegment`](#structFRHAPI__PlayerReport_1a107276eb47d79f9a876bab4dfc7c4853)`(FString && NewValue)` | Sets the value of MatchSegment_Optional and also sets MatchSegment_IsSet to true using move semantics.
`public inline void `[`ClearMatchSegment`](#structFRHAPI__PlayerReport_1ae4cc911288e101f606d03eff84cda53e)`()` | Clears the value of MatchSegment_Optional and sets MatchSegment_IsSet to false.
`public inline FORCEINLINE void `[`SetMatchSegmentToNull`](#structFRHAPI__PlayerReport_1a86a5cf4ad9bdf750e7bfcadf8b24e605)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMatchSegmentNull`](#structFRHAPI__PlayerReport_1aa43eeb47575edcaba3c7880b2ccc55ce)`() const` | Checks whether MatchSegment_Optional is set to null.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReport_1ad4a84c5421b4569a390702743715ed7f)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReport_1ac3c7a02cde32f77b890052fdb332c3c2)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReport_1a16691060eda2078472b57fbe2cec26f4)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PlayerReport_1aace8cd436f850b9e3e1bf0289aa18244)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerReport_1a544679bed261891d6d27c176ecbf9cb6)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerReport_1a32b8cfb58432aa03a434fd1ba1e08e1e)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerReport_1a794ece726feb04ba6b63a3a1cbe7af04)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerReport_1a72460e22485b90c09d17d31c5dc4e5ba)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlayerReport_1a9606358d4d6002b8c069eeeb1b3c4ae8)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE FDateTime & `[`GetCreated`](#structFRHAPI__PlayerReport_1a99b68466a34d4323e278e5871edb1454)`()` | Gets the value of Created_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetCreated`](#structFRHAPI__PlayerReport_1acbaee1d16d9f72055734bd8a009a7555)`() const` | Gets the value of Created_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetCreated`](#structFRHAPI__PlayerReport_1a4438ddd37c3dded22dd9740ae44f790b)`(const FDateTime & DefaultValue) const` | Gets the value of Created_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCreated`](#structFRHAPI__PlayerReport_1a26deed01f0c331e25f6292132dd648cd)`(FDateTime & OutValue) const` | Fills OutValue with the value of Created_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetCreatedOrNull`](#structFRHAPI__PlayerReport_1afff12569597d97d5966bd3bf0492fc6d)`()` | Returns a pointer to Created_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetCreatedOrNull`](#structFRHAPI__PlayerReport_1a06797c1d31b175393ddbfabd674b11f2)`() const` | Returns a pointer to Created_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__PlayerReport_1af707da9b5456191be032fb827d214c62)`(const FDateTime & NewValue)` | Sets the value of Created_Optional and also sets Created_IsSet to true.
`public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__PlayerReport_1ab48c06771856f19bc621e6470bdd7b55)`(FDateTime && NewValue)` | Sets the value of Created_Optional and also sets Created_IsSet to true using move semantics.
`public inline void `[`ClearCreated`](#structFRHAPI__PlayerReport_1ab68bb775bda9f07033c7e810999e8f0d)`()` | Clears the value of Created_Optional and sets Created_IsSet to false.
`public inline FORCEINLINE void `[`SetCreatedToNull`](#structFRHAPI__PlayerReport_1a9fd4a33670ce1fbb71ab288262c29948)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCreatedNull`](#structFRHAPI__PlayerReport_1a643477b2daa3071bef4238a6d27d0a8c)`() const` | Checks whether Created_Optional is set to null.
`public inline FORCEINLINE FDateTime & `[`GetModified`](#structFRHAPI__PlayerReport_1a9846c79634a9fa9539f4b9d3f37d2689)`()` | Gets the value of Modified_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetModified`](#structFRHAPI__PlayerReport_1a28eb7c48795adbebcc83a84c14307bb4)`() const` | Gets the value of Modified_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetModified`](#structFRHAPI__PlayerReport_1af567b7d6926a0a8b6ad8b6cafab399df)`(const FDateTime & DefaultValue) const` | Gets the value of Modified_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetModified`](#structFRHAPI__PlayerReport_1aa3fa5f34d38cd4f1e3004db454378eb2)`(FDateTime & OutValue) const` | Fills OutValue with the value of Modified_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetModifiedOrNull`](#structFRHAPI__PlayerReport_1a77bfaa10b9637b90fcaff0aa37432068)`()` | Returns a pointer to Modified_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetModifiedOrNull`](#structFRHAPI__PlayerReport_1a0cf0bc33cd70d96f566a4189211af2ba)`() const` | Returns a pointer to Modified_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetModified`](#structFRHAPI__PlayerReport_1a6f17161be57435118e37f3ea05368c75)`(const FDateTime & NewValue)` | Sets the value of Modified_Optional and also sets Modified_IsSet to true.
`public inline FORCEINLINE void `[`SetModified`](#structFRHAPI__PlayerReport_1aa539de13d63f51243b947acc9a60eb98)`(FDateTime && NewValue)` | Sets the value of Modified_Optional and also sets Modified_IsSet to true using move semantics.
`public inline void `[`ClearModified`](#structFRHAPI__PlayerReport_1a4fff49337b878205f0b1956483f42b25)`()` | Clears the value of Modified_Optional and sets Modified_IsSet to false.
`public inline FORCEINLINE void `[`SetModifiedToNull`](#structFRHAPI__PlayerReport_1ae2805fa7b6f2b3c2a80fd85698b62127)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsModifiedNull`](#structFRHAPI__PlayerReport_1adfb414c8b295006c5cbbf3ba95421459)`() const` | Checks whether Modified_Optional is set to null.

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

#### `public inline FORCEINLINE FString & `[`GetReportId`](#structFRHAPI__PlayerReport_1af697c34282ba15fa42c26f0f78c12689)`()` <a id="structFRHAPI__PlayerReport_1af697c34282ba15fa42c26f0f78c12689"></a>

Gets the value of ReportId.

#### `public inline FORCEINLINE const FString & `[`GetReportId`](#structFRHAPI__PlayerReport_1afb95e1b75552e609e73e288867e6383e)`() const` <a id="structFRHAPI__PlayerReport_1afb95e1b75552e609e73e288867e6383e"></a>

Gets the value of ReportId.

#### `public inline FORCEINLINE void `[`SetReportId`](#structFRHAPI__PlayerReport_1a3e9d672bc432c3a0f9afe18cf14804ec)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReport_1a3e9d672bc432c3a0f9afe18cf14804ec"></a>

Sets the value of ReportId.

#### `public inline FORCEINLINE void `[`SetReportId`](#structFRHAPI__PlayerReport_1a377f2e17c6c9f1c32a68808bdaaa9d82)`(FString && NewValue)` <a id="structFRHAPI__PlayerReport_1a377f2e17c6c9f1c32a68808bdaaa9d82"></a>

Sets the value of ReportId using move semantics.

#### `public inline FORCEINLINE FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a158602aac33b5e5d0ad5571bb18401bd)`()` <a id="structFRHAPI__PlayerReport_1a158602aac33b5e5d0ad5571bb18401bd"></a>

Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a67094914197d11717193c6bd0d779c54)`() const` <a id="structFRHAPI__PlayerReport_1a67094914197d11717193c6bd0d779c54"></a>

Gets the value of SourcePlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a41d7c61a585527d2ab036906e2a75238)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1a41d7c61a585527d2ab036906e2a75238"></a>

Gets the value of SourcePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a1b4d353bda0b91629ab6a04796f9da37)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerReport_1a1b4d353bda0b91629ab6a04796f9da37"></a>

Fills OutValue with the value of SourcePlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__PlayerReport_1a3c50a404e7fd5726912125f70326294e)`()` <a id="structFRHAPI__PlayerReport_1a3c50a404e7fd5726912125f70326294e"></a>

Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetSourcePlayerUuidOrNull`](#structFRHAPI__PlayerReport_1acd8ebd16d9b1cb2b61a6af618026b25b)`() const` <a id="structFRHAPI__PlayerReport_1acd8ebd16d9b1cb2b61a6af618026b25b"></a>

Returns a pointer to SourcePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a3a2166770f993f8a3c0ccd8e5b4e11d0)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerReport_1a3a2166770f993f8a3c0ccd8e5b4e11d0"></a>

Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSourcePlayerUuid`](#structFRHAPI__PlayerReport_1ad506621e842899d9b349e4198ecc8346)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerReport_1ad506621e842899d9b349e4198ecc8346"></a>

Sets the value of SourcePlayerUuid_Optional and also sets SourcePlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearSourcePlayerUuid`](#structFRHAPI__PlayerReport_1a97a7000fa35325ceb49685aad4d82199)`()` <a id="structFRHAPI__PlayerReport_1a97a7000fa35325ceb49685aad4d82199"></a>

Clears the value of SourcePlayerUuid_Optional and sets SourcePlayerUuid_IsSet to false.

#### `public inline FORCEINLINE void `[`SetSourcePlayerUuidToNull`](#structFRHAPI__PlayerReport_1aa40b1cf6cb0334b417f3a6592bce0686)`()` <a id="structFRHAPI__PlayerReport_1aa40b1cf6cb0334b417f3a6592bce0686"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsSourcePlayerUuidNull`](#structFRHAPI__PlayerReport_1a3037a98d4834c77f16bb6d26079b7284)`() const` <a id="structFRHAPI__PlayerReport_1a3037a98d4834c77f16bb6d26079b7284"></a>

Checks whether SourcePlayerUuid_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetSourcePlayerId`](#structFRHAPI__PlayerReport_1ae150ba6042eddde873d2b3d936909bde)`()` <a id="structFRHAPI__PlayerReport_1ae150ba6042eddde873d2b3d936909bde"></a>

Gets the value of SourcePlayerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetSourcePlayerId`](#structFRHAPI__PlayerReport_1a7ef1ed59b2ce3c22312e69200760cc60)`() const` <a id="structFRHAPI__PlayerReport_1a7ef1ed59b2ce3c22312e69200760cc60"></a>

Gets the value of SourcePlayerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetSourcePlayerId`](#structFRHAPI__PlayerReport_1a56f4be5c43609e20b6946cd50c239bef)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1a56f4be5c43609e20b6946cd50c239bef"></a>

Gets the value of SourcePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSourcePlayerId`](#structFRHAPI__PlayerReport_1ada707d55ea91a74467af3df2483cc1f5)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerReport_1ada707d55ea91a74467af3df2483cc1f5"></a>

Fills OutValue with the value of SourcePlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetSourcePlayerIdOrNull`](#structFRHAPI__PlayerReport_1ae48ebe2de5036ec6851f41f28a7dd558)`()` <a id="structFRHAPI__PlayerReport_1ae48ebe2de5036ec6851f41f28a7dd558"></a>

Returns a pointer to SourcePlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetSourcePlayerIdOrNull`](#structFRHAPI__PlayerReport_1a7749698b2d57d82b6510124e82412526)`() const` <a id="structFRHAPI__PlayerReport_1a7749698b2d57d82b6510124e82412526"></a>

Returns a pointer to SourcePlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSourcePlayerId`](#structFRHAPI__PlayerReport_1a56f93e60d592a6df5411daf674004d78)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerReport_1a56f93e60d592a6df5411daf674004d78"></a>

Sets the value of SourcePlayerId_Optional and also sets SourcePlayerId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSourcePlayerId`](#structFRHAPI__PlayerReport_1a59a2e167cf5d207a60fcaaebf3197e14)`(int32 && NewValue)` <a id="structFRHAPI__PlayerReport_1a59a2e167cf5d207a60fcaaebf3197e14"></a>

Sets the value of SourcePlayerId_Optional and also sets SourcePlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearSourcePlayerId`](#structFRHAPI__PlayerReport_1a2344462927f94ee3533b684debd2c485)`()` <a id="structFRHAPI__PlayerReport_1a2344462927f94ee3533b684debd2c485"></a>

Clears the value of SourcePlayerId_Optional and sets SourcePlayerId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_SourcePlayerId`](#structFRHAPI__PlayerReport_1a9de6c4ee7a49bd9b5cc730691d45cd79)`()` <a id="structFRHAPI__PlayerReport_1a9de6c4ee7a49bd9b5cc730691d45cd79"></a>

Returns the default value of SourcePlayerId.

#### `public inline FORCEINLINE void `[`SetSourcePlayerIdToNull`](#structFRHAPI__PlayerReport_1a850879846c3f5d0d643413aba36e41d5)`()` <a id="structFRHAPI__PlayerReport_1a850879846c3f5d0d643413aba36e41d5"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsSourcePlayerIdNull`](#structFRHAPI__PlayerReport_1a1b444a1bbf8adbfe5b1cc3ada66105c4)`() const` <a id="structFRHAPI__PlayerReport_1a1b444a1bbf8adbfe5b1cc3ada66105c4"></a>

Checks whether SourcePlayerId_Optional is set to null.

#### `public inline FORCEINLINE FGuid & `[`GetTargetPlayerUuid`](#structFRHAPI__PlayerReport_1ae33cabf04657afde09c6c253ac6c8590)`()` <a id="structFRHAPI__PlayerReport_1ae33cabf04657afde09c6c253ac6c8590"></a>

Gets the value of TargetPlayerUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetTargetPlayerUuid`](#structFRHAPI__PlayerReport_1a9374415ce0dbfba37509fcc1b03b8147)`() const` <a id="structFRHAPI__PlayerReport_1a9374415ce0dbfba37509fcc1b03b8147"></a>

Gets the value of TargetPlayerUuid.

#### `public inline FORCEINLINE void `[`SetTargetPlayerUuid`](#structFRHAPI__PlayerReport_1a64a542cbef6bbdeeed88ab6a682ee378)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerReport_1a64a542cbef6bbdeeed88ab6a682ee378"></a>

Sets the value of TargetPlayerUuid.

#### `public inline FORCEINLINE void `[`SetTargetPlayerUuid`](#structFRHAPI__PlayerReport_1abcf8aad80c6cadc943eaa9d938ecd213)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerReport_1abcf8aad80c6cadc943eaa9d938ecd213"></a>

Sets the value of TargetPlayerUuid using move semantics.

#### `public inline FORCEINLINE void `[`SetTargetPlayerUuidToNull`](#structFRHAPI__PlayerReport_1a4d167731f9f91ba3ea4f84779a031294)`()` <a id="structFRHAPI__PlayerReport_1a4d167731f9f91ba3ea4f84779a031294"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsTargetPlayerUuidNull`](#structFRHAPI__PlayerReport_1a5422f21846f460e4a297436ecff2ced4)`() const` <a id="structFRHAPI__PlayerReport_1a5422f21846f460e4a297436ecff2ced4"></a>

Checks whether TargetPlayerUuid is set to null.

#### `public inline FORCEINLINE int32 & `[`GetTargetPlayerId`](#structFRHAPI__PlayerReport_1a17e7d538e5de0000654c9a7ef9be752b)`()` <a id="structFRHAPI__PlayerReport_1a17e7d538e5de0000654c9a7ef9be752b"></a>

Gets the value of TargetPlayerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTargetPlayerId`](#structFRHAPI__PlayerReport_1ab125375de73c58f5f4c45658e7f0f265)`() const` <a id="structFRHAPI__PlayerReport_1ab125375de73c58f5f4c45658e7f0f265"></a>

Gets the value of TargetPlayerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTargetPlayerId`](#structFRHAPI__PlayerReport_1aeb0abe090f8205796bc65d031dc752d7)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1aeb0abe090f8205796bc65d031dc752d7"></a>

Gets the value of TargetPlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTargetPlayerId`](#structFRHAPI__PlayerReport_1ad13eca31a636f88cafdb323a22a771dc)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerReport_1ad13eca31a636f88cafdb323a22a771dc"></a>

Fills OutValue with the value of TargetPlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetTargetPlayerIdOrNull`](#structFRHAPI__PlayerReport_1a95743d40931221664c503859636e9b02)`()` <a id="structFRHAPI__PlayerReport_1a95743d40931221664c503859636e9b02"></a>

Returns a pointer to TargetPlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetTargetPlayerIdOrNull`](#structFRHAPI__PlayerReport_1a51f747a6ca906228f8dbb848a6842734)`() const` <a id="structFRHAPI__PlayerReport_1a51f747a6ca906228f8dbb848a6842734"></a>

Returns a pointer to TargetPlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTargetPlayerId`](#structFRHAPI__PlayerReport_1a8a472e02617662cb5db699687ffc62fb)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerReport_1a8a472e02617662cb5db699687ffc62fb"></a>

Sets the value of TargetPlayerId_Optional and also sets TargetPlayerId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTargetPlayerId`](#structFRHAPI__PlayerReport_1a717c6259f63dfd4292c47056cd206bac)`(int32 && NewValue)` <a id="structFRHAPI__PlayerReport_1a717c6259f63dfd4292c47056cd206bac"></a>

Sets the value of TargetPlayerId_Optional and also sets TargetPlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearTargetPlayerId`](#structFRHAPI__PlayerReport_1a9e65eafed1ef63b813a5e989a342503d)`()` <a id="structFRHAPI__PlayerReport_1a9e65eafed1ef63b813a5e989a342503d"></a>

Clears the value of TargetPlayerId_Optional and sets TargetPlayerId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_TargetPlayerId`](#structFRHAPI__PlayerReport_1a1aed1115271980a932ab0e443c16cddf)`()` <a id="structFRHAPI__PlayerReport_1a1aed1115271980a932ab0e443c16cddf"></a>

Returns the default value of TargetPlayerId.

#### `public inline FORCEINLINE void `[`SetTargetPlayerIdToNull`](#structFRHAPI__PlayerReport_1addea2e52a358dcb75e6d84f1063dd994)`()` <a id="structFRHAPI__PlayerReport_1addea2e52a358dcb75e6d84f1063dd994"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsTargetPlayerIdNull`](#structFRHAPI__PlayerReport_1a2c2cb75cef0a04900229a58edb906db0)`() const` <a id="structFRHAPI__PlayerReport_1a2c2cb75cef0a04900229a58edb906db0"></a>

Checks whether TargetPlayerId_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_ReportReason & `[`GetReason`](#structFRHAPI__PlayerReport_1a4ccca21b47d317a98392dd6a3c0fc883)`()` <a id="structFRHAPI__PlayerReport_1a4ccca21b47d317a98392dd6a3c0fc883"></a>

Gets the value of Reason.

#### `public inline FORCEINLINE const ERHAPI_ReportReason & `[`GetReason`](#structFRHAPI__PlayerReport_1a5e9c063fb8dcb1204c8e1fb9cf897357)`() const` <a id="structFRHAPI__PlayerReport_1a5e9c063fb8dcb1204c8e1fb9cf897357"></a>

Gets the value of Reason.

#### `public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__PlayerReport_1a7925113be97ef7012fd9562b66c8f803)`(const ERHAPI_ReportReason & NewValue)` <a id="structFRHAPI__PlayerReport_1a7925113be97ef7012fd9562b66c8f803"></a>

Sets the value of Reason.

#### `public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__PlayerReport_1a01157ada44a0063a42b813661692e851)`(ERHAPI_ReportReason && NewValue)` <a id="structFRHAPI__PlayerReport_1a01157ada44a0063a42b813661692e851"></a>

Sets the value of Reason using move semantics.

#### `public inline FORCEINLINE FString & `[`GetDescription`](#structFRHAPI__PlayerReport_1a1fe8607a71ee2e28c290f84d98fb6a60)`()` <a id="structFRHAPI__PlayerReport_1a1fe8607a71ee2e28c290f84d98fb6a60"></a>

Gets the value of Description_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDescription`](#structFRHAPI__PlayerReport_1a67d6c3231173edb3187a22166d33934b)`() const` <a id="structFRHAPI__PlayerReport_1a67d6c3231173edb3187a22166d33934b"></a>

Gets the value of Description_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDescription`](#structFRHAPI__PlayerReport_1ae085670f364c3de76d7d6f271ada750d)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1ae085670f364c3de76d7d6f271ada750d"></a>

Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDescription`](#structFRHAPI__PlayerReport_1a83aac36b9074779a1ace559606dcdf59)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReport_1a83aac36b9074779a1ace559606dcdf59"></a>

Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetDescriptionOrNull`](#structFRHAPI__PlayerReport_1a0b9b34696a14e6b642a3a2a515e69513)`()` <a id="structFRHAPI__PlayerReport_1a0b9b34696a14e6b642a3a2a515e69513"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetDescriptionOrNull`](#structFRHAPI__PlayerReport_1a02c7a85161bcbeabf9360dda6b09f311)`() const` <a id="structFRHAPI__PlayerReport_1a02c7a85161bcbeabf9360dda6b09f311"></a>

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDescription`](#structFRHAPI__PlayerReport_1af7ab2aec5aa77b440803ca6fce54458a)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReport_1af7ab2aec5aa77b440803ca6fce54458a"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDescription`](#structFRHAPI__PlayerReport_1ae901181de01fa6bc8cbbf461f128809f)`(FString && NewValue)` <a id="structFRHAPI__PlayerReport_1ae901181de01fa6bc8cbbf461f128809f"></a>

Sets the value of Description_Optional and also sets Description_IsSet to true using move semantics.

#### `public inline void `[`ClearDescription`](#structFRHAPI__PlayerReport_1a538e1c8d7a4c7ee210040970d062c7b7)`()` <a id="structFRHAPI__PlayerReport_1a538e1c8d7a4c7ee210040970d062c7b7"></a>

Clears the value of Description_Optional and sets Description_IsSet to false.

#### `public inline FORCEINLINE void `[`SetDescriptionToNull`](#structFRHAPI__PlayerReport_1ae5f7360522f9b95efd09e752f344fff5)`()` <a id="structFRHAPI__PlayerReport_1ae5f7360522f9b95efd09e752f344fff5"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsDescriptionNull`](#structFRHAPI__PlayerReport_1acc176911e9d107e3a3accb3afcc1c3da)`() const` <a id="structFRHAPI__PlayerReport_1acc176911e9d107e3a3accb3afcc1c3da"></a>

Checks whether Description_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetSessionId`](#structFRHAPI__PlayerReport_1a1e3e8e5296b1281f669546e82abd997c)`()` <a id="structFRHAPI__PlayerReport_1a1e3e8e5296b1281f669546e82abd997c"></a>

Gets the value of SessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__PlayerReport_1ab9d764e823dcd3781da8dd5c4ecc8e14)`() const` <a id="structFRHAPI__PlayerReport_1ab9d764e823dcd3781da8dd5c4ecc8e14"></a>

Gets the value of SessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__PlayerReport_1a591ecfb362a50aab96d9cc7d4a214ebe)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1a591ecfb362a50aab96d9cc7d4a214ebe"></a>

Gets the value of SessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSessionId`](#structFRHAPI__PlayerReport_1a16171519ba070a47933f37b84a01cd44)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReport_1a16171519ba070a47933f37b84a01cd44"></a>

Fills OutValue with the value of SessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetSessionIdOrNull`](#structFRHAPI__PlayerReport_1a9c7fca9aa7d5f4aa6e8f40700d4ce5ed)`()` <a id="structFRHAPI__PlayerReport_1a9c7fca9aa7d5f4aa6e8f40700d4ce5ed"></a>

Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetSessionIdOrNull`](#structFRHAPI__PlayerReport_1a8af2166c01e25a31a1961ea2e1ff65b3)`() const` <a id="structFRHAPI__PlayerReport_1a8af2166c01e25a31a1961ea2e1ff65b3"></a>

Returns a pointer to SessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__PlayerReport_1a4a92ecaf02178ee35f4746a5e42af398)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReport_1a4a92ecaf02178ee35f4746a5e42af398"></a>

Sets the value of SessionId_Optional and also sets SessionId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__PlayerReport_1ae0a50bcda29e4ef5e9c262d55ed594aa)`(FString && NewValue)` <a id="structFRHAPI__PlayerReport_1ae0a50bcda29e4ef5e9c262d55ed594aa"></a>

Sets the value of SessionId_Optional and also sets SessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionId`](#structFRHAPI__PlayerReport_1ac11ae75048c12ead402ab706c2942b51)`()` <a id="structFRHAPI__PlayerReport_1ac11ae75048c12ead402ab706c2942b51"></a>

Clears the value of SessionId_Optional and sets SessionId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetSessionIdToNull`](#structFRHAPI__PlayerReport_1a86b3f3397e1e456889bd4df236592142)`()` <a id="structFRHAPI__PlayerReport_1a86b3f3397e1e456889bd4df236592142"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsSessionIdNull`](#structFRHAPI__PlayerReport_1a27c7263f95372006425b54c131aea138)`() const` <a id="structFRHAPI__PlayerReport_1a27c7263f95372006425b54c131aea138"></a>

Checks whether SessionId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__PlayerReport_1af8288bb31b55c2a7be9929ff97f1de0e)`()` <a id="structFRHAPI__PlayerReport_1af8288bb31b55c2a7be9929ff97f1de0e"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerReport_1a43cae75d6b7fd10aef14b5dfa4b6a53c)`() const` <a id="structFRHAPI__PlayerReport_1a43cae75d6b7fd10aef14b5dfa4b6a53c"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__PlayerReport_1a7c67d51d24d384b2a73c14af92827c18)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1a7c67d51d24d384b2a73c14af92827c18"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstanceId`](#structFRHAPI__PlayerReport_1ae6db47e7c5a31e4ea9a085f9a407275f)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReport_1ae6db47e7c5a31e4ea9a085f9a407275f"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerReport_1ac53c16474a8c5a13f7e0b82cdec7f871)`()` <a id="structFRHAPI__PlayerReport_1ac53c16474a8c5a13f7e0b82cdec7f871"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__PlayerReport_1adda5de203c8ca1019ed84147091a294a)`() const` <a id="structFRHAPI__PlayerReport_1adda5de203c8ca1019ed84147091a294a"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerReport_1af3469ed5f48d282e50c050be320201ee)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReport_1af3469ed5f48d282e50c050be320201ee"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__PlayerReport_1a1f0a164163e16c63e37666a40d8aaaec)`(FString && NewValue)` <a id="structFRHAPI__PlayerReport_1a1f0a164163e16c63e37666a40d8aaaec"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__PlayerReport_1a318e81296d4530aa395cb9ce323aaf10)`()` <a id="structFRHAPI__PlayerReport_1a318e81296d4530aa395cb9ce323aaf10"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetInstanceIdToNull`](#structFRHAPI__PlayerReport_1ad81b8a67cbe01429cf25cc4917bffc04)`()` <a id="structFRHAPI__PlayerReport_1ad81b8a67cbe01429cf25cc4917bffc04"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsInstanceIdNull`](#structFRHAPI__PlayerReport_1a3b4c00cf29d1af66ac6eccee7237f987)`() const` <a id="structFRHAPI__PlayerReport_1a3b4c00cf29d1af66ac6eccee7237f987"></a>

Checks whether InstanceId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__PlayerReport_1a760df232950255a6b70f56c12ae687b1)`()` <a id="structFRHAPI__PlayerReport_1a760df232950255a6b70f56c12ae687b1"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__PlayerReport_1a069e9288cc1194c4e4ffb20fe970eb79)`() const` <a id="structFRHAPI__PlayerReport_1a069e9288cc1194c4e4ffb20fe970eb79"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__PlayerReport_1af5f51b92c6c441b195c314dfedd9c5dc)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1af5f51b92c6c441b195c314dfedd9c5dc"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__PlayerReport_1a9cee3a1c5044aaeb6d9ae3560e8c4b64)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReport_1a9cee3a1c5044aaeb6d9ae3560e8c4b64"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerReport_1af2a56d94d6b3a97102a03583bbdb4b87)`()` <a id="structFRHAPI__PlayerReport_1af2a56d94d6b3a97102a03583bbdb4b87"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__PlayerReport_1a526634a0f113bf1723da1c3ebdb91e96)`() const` <a id="structFRHAPI__PlayerReport_1a526634a0f113bf1723da1c3ebdb91e96"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__PlayerReport_1aa3e11c63095cad0959ce89a4c472a1f0)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReport_1aa3e11c63095cad0959ce89a4c472a1f0"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__PlayerReport_1a4f17c7b8447ea19df1342327b11fce47)`(FString && NewValue)` <a id="structFRHAPI__PlayerReport_1a4f17c7b8447ea19df1342327b11fce47"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__PlayerReport_1ac5cdcfbdb2a8fd6732bd130cf6da9a56)`()` <a id="structFRHAPI__PlayerReport_1ac5cdcfbdb2a8fd6732bd130cf6da9a56"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMatchIdToNull`](#structFRHAPI__PlayerReport_1ab5d98e35d8021555afbeaba259f13cdd)`()` <a id="structFRHAPI__PlayerReport_1ab5d98e35d8021555afbeaba259f13cdd"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMatchIdNull`](#structFRHAPI__PlayerReport_1a7edf1cdeda68f97d3faed1e601ef903a)`() const` <a id="structFRHAPI__PlayerReport_1a7edf1cdeda68f97d3faed1e601ef903a"></a>

Checks whether MatchId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReport_1aacef9d6d6589d3b6e223c3f8d8053212)`()` <a id="structFRHAPI__PlayerReport_1aacef9d6d6589d3b6e223c3f8d8053212"></a>

Gets the value of MatchSegment_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReport_1aab8dfa8f943d1e2309473b1e98222f94)`() const` <a id="structFRHAPI__PlayerReport_1aab8dfa8f943d1e2309473b1e98222f94"></a>

Gets the value of MatchSegment_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchSegment`](#structFRHAPI__PlayerReport_1ab3ccb2abc7bf66356087aafd207ed44c)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1ab3ccb2abc7bf66356087aafd207ed44c"></a>

Gets the value of MatchSegment_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatchSegment`](#structFRHAPI__PlayerReport_1a1d8df5ae583740c7ba9c01218164fbec)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReport_1a1d8df5ae583740c7ba9c01218164fbec"></a>

Fills OutValue with the value of MatchSegment_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMatchSegmentOrNull`](#structFRHAPI__PlayerReport_1a4d6413387440013bd6940b1936818d81)`()` <a id="structFRHAPI__PlayerReport_1a4d6413387440013bd6940b1936818d81"></a>

Returns a pointer to MatchSegment_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMatchSegmentOrNull`](#structFRHAPI__PlayerReport_1a0c20229a73f251e7c9b6225d3a5b7f4e)`() const` <a id="structFRHAPI__PlayerReport_1a0c20229a73f251e7c9b6225d3a5b7f4e"></a>

Returns a pointer to MatchSegment_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatchSegment`](#structFRHAPI__PlayerReport_1a0101e9bcddef0c9832892790770608aa)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReport_1a0101e9bcddef0c9832892790770608aa"></a>

Sets the value of MatchSegment_Optional and also sets MatchSegment_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatchSegment`](#structFRHAPI__PlayerReport_1a107276eb47d79f9a876bab4dfc7c4853)`(FString && NewValue)` <a id="structFRHAPI__PlayerReport_1a107276eb47d79f9a876bab4dfc7c4853"></a>

Sets the value of MatchSegment_Optional and also sets MatchSegment_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchSegment`](#structFRHAPI__PlayerReport_1ae4cc911288e101f606d03eff84cda53e)`()` <a id="structFRHAPI__PlayerReport_1ae4cc911288e101f606d03eff84cda53e"></a>

Clears the value of MatchSegment_Optional and sets MatchSegment_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMatchSegmentToNull`](#structFRHAPI__PlayerReport_1a86a5cf4ad9bdf750e7bfcadf8b24e605)`()` <a id="structFRHAPI__PlayerReport_1a86a5cf4ad9bdf750e7bfcadf8b24e605"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMatchSegmentNull`](#structFRHAPI__PlayerReport_1aa43eeb47575edcaba3c7880b2ccc55ce)`() const` <a id="structFRHAPI__PlayerReport_1aa43eeb47575edcaba3c7880b2ccc55ce"></a>

Checks whether MatchSegment_Optional is set to null.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReport_1ad4a84c5421b4569a390702743715ed7f)`()` <a id="structFRHAPI__PlayerReport_1ad4a84c5421b4569a390702743715ed7f"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReport_1ac3c7a02cde32f77b890052fdb332c3c2)`() const` <a id="structFRHAPI__PlayerReport_1ac3c7a02cde32f77b890052fdb332c3c2"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerReport_1a16691060eda2078472b57fbe2cec26f4)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1a16691060eda2078472b57fbe2cec26f4"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PlayerReport_1aace8cd436f850b9e3e1bf0289aa18244)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerReport_1aace8cd436f850b9e3e1bf0289aa18244"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerReport_1a544679bed261891d6d27c176ecbf9cb6)`()` <a id="structFRHAPI__PlayerReport_1a544679bed261891d6d27c176ecbf9cb6"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerReport_1a32b8cfb58432aa03a434fd1ba1e08e1e)`() const` <a id="structFRHAPI__PlayerReport_1a32b8cfb58432aa03a434fd1ba1e08e1e"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerReport_1a794ece726feb04ba6b63a3a1cbe7af04)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlayerReport_1a794ece726feb04ba6b63a3a1cbe7af04"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerReport_1a72460e22485b90c09d17d31c5dc4e5ba)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlayerReport_1a72460e22485b90c09d17d31c5dc4e5ba"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerReport_1a9606358d4d6002b8c069eeeb1b3c4ae8)`()` <a id="structFRHAPI__PlayerReport_1a9606358d4d6002b8c069eeeb1b3c4ae8"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE FDateTime & `[`GetCreated`](#structFRHAPI__PlayerReport_1a99b68466a34d4323e278e5871edb1454)`()` <a id="structFRHAPI__PlayerReport_1a99b68466a34d4323e278e5871edb1454"></a>

Gets the value of Created_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreated`](#structFRHAPI__PlayerReport_1acbaee1d16d9f72055734bd8a009a7555)`() const` <a id="structFRHAPI__PlayerReport_1acbaee1d16d9f72055734bd8a009a7555"></a>

Gets the value of Created_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreated`](#structFRHAPI__PlayerReport_1a4438ddd37c3dded22dd9740ae44f790b)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1a4438ddd37c3dded22dd9740ae44f790b"></a>

Gets the value of Created_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCreated`](#structFRHAPI__PlayerReport_1a26deed01f0c331e25f6292132dd648cd)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerReport_1a26deed01f0c331e25f6292132dd648cd"></a>

Fills OutValue with the value of Created_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetCreatedOrNull`](#structFRHAPI__PlayerReport_1afff12569597d97d5966bd3bf0492fc6d)`()` <a id="structFRHAPI__PlayerReport_1afff12569597d97d5966bd3bf0492fc6d"></a>

Returns a pointer to Created_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetCreatedOrNull`](#structFRHAPI__PlayerReport_1a06797c1d31b175393ddbfabd674b11f2)`() const` <a id="structFRHAPI__PlayerReport_1a06797c1d31b175393ddbfabd674b11f2"></a>

Returns a pointer to Created_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__PlayerReport_1af707da9b5456191be032fb827d214c62)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerReport_1af707da9b5456191be032fb827d214c62"></a>

Sets the value of Created_Optional and also sets Created_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__PlayerReport_1ab48c06771856f19bc621e6470bdd7b55)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerReport_1ab48c06771856f19bc621e6470bdd7b55"></a>

Sets the value of Created_Optional and also sets Created_IsSet to true using move semantics.

#### `public inline void `[`ClearCreated`](#structFRHAPI__PlayerReport_1ab68bb775bda9f07033c7e810999e8f0d)`()` <a id="structFRHAPI__PlayerReport_1ab68bb775bda9f07033c7e810999e8f0d"></a>

Clears the value of Created_Optional and sets Created_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCreatedToNull`](#structFRHAPI__PlayerReport_1a9fd4a33670ce1fbb71ab288262c29948)`()` <a id="structFRHAPI__PlayerReport_1a9fd4a33670ce1fbb71ab288262c29948"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCreatedNull`](#structFRHAPI__PlayerReport_1a643477b2daa3071bef4238a6d27d0a8c)`() const` <a id="structFRHAPI__PlayerReport_1a643477b2daa3071bef4238a6d27d0a8c"></a>

Checks whether Created_Optional is set to null.

#### `public inline FORCEINLINE FDateTime & `[`GetModified`](#structFRHAPI__PlayerReport_1a9846c79634a9fa9539f4b9d3f37d2689)`()` <a id="structFRHAPI__PlayerReport_1a9846c79634a9fa9539f4b9d3f37d2689"></a>

Gets the value of Modified_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetModified`](#structFRHAPI__PlayerReport_1a28eb7c48795adbebcc83a84c14307bb4)`() const` <a id="structFRHAPI__PlayerReport_1a28eb7c48795adbebcc83a84c14307bb4"></a>

Gets the value of Modified_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetModified`](#structFRHAPI__PlayerReport_1af567b7d6926a0a8b6ad8b6cafab399df)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerReport_1af567b7d6926a0a8b6ad8b6cafab399df"></a>

Gets the value of Modified_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetModified`](#structFRHAPI__PlayerReport_1aa3fa5f34d38cd4f1e3004db454378eb2)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerReport_1aa3fa5f34d38cd4f1e3004db454378eb2"></a>

Fills OutValue with the value of Modified_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetModifiedOrNull`](#structFRHAPI__PlayerReport_1a77bfaa10b9637b90fcaff0aa37432068)`()` <a id="structFRHAPI__PlayerReport_1a77bfaa10b9637b90fcaff0aa37432068"></a>

Returns a pointer to Modified_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetModifiedOrNull`](#structFRHAPI__PlayerReport_1a0cf0bc33cd70d96f566a4189211af2ba)`() const` <a id="structFRHAPI__PlayerReport_1a0cf0bc33cd70d96f566a4189211af2ba"></a>

Returns a pointer to Modified_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetModified`](#structFRHAPI__PlayerReport_1a6f17161be57435118e37f3ea05368c75)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerReport_1a6f17161be57435118e37f3ea05368c75"></a>

Sets the value of Modified_Optional and also sets Modified_IsSet to true.

#### `public inline FORCEINLINE void `[`SetModified`](#structFRHAPI__PlayerReport_1aa539de13d63f51243b947acc9a60eb98)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerReport_1aa539de13d63f51243b947acc9a60eb98"></a>

Sets the value of Modified_Optional and also sets Modified_IsSet to true using move semantics.

#### `public inline void `[`ClearModified`](#structFRHAPI__PlayerReport_1a4fff49337b878205f0b1956483f42b25)`()` <a id="structFRHAPI__PlayerReport_1a4fff49337b878205f0b1956483f42b25"></a>

Clears the value of Modified_Optional and sets Modified_IsSet to false.

#### `public inline FORCEINLINE void `[`SetModifiedToNull`](#structFRHAPI__PlayerReport_1ae2805fa7b6f2b3c2a80fd85698b62127)`()` <a id="structFRHAPI__PlayerReport_1ae2805fa7b6f2b3c2a80fd85698b62127"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsModifiedNull`](#structFRHAPI__PlayerReport_1adfb414c8b295006c5cbbf3ba95421459)`() const` <a id="structFRHAPI__PlayerReport_1adfb414c8b295006c5cbbf3ba95421459"></a>

Checks whether Modified_Optional is set to null.

