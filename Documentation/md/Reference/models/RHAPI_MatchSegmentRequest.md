---
title: RHAPI_MatchSegmentRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchSegmentRequest`](#structFRHAPI__MatchSegmentRequest) | 

## struct `FRHAPI_MatchSegmentRequest` <a id="structFRHAPI__MatchSegmentRequest"></a>

```
struct FRHAPI_MatchSegmentRequest
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`MatchSegment`](#structFRHAPI__MatchSegmentRequest_1a89e1688873b68a9d18fd23b1b586788d) | Segment ID of the match.
`public FString `[`Type_Optional`](#structFRHAPI__MatchSegmentRequest_1aab68ef98c0c55fb95b65088da276ad48) | 
`public bool `[`Type_IsSet`](#structFRHAPI__MatchSegmentRequest_1a44f780b34900c4b1927cc0d1e48c2213) | true if Type_Optional has been set to a value
`public bool `[`Type_IsNull`](#structFRHAPI__MatchSegmentRequest_1ae99412195eaab8f558dbb4772d18b55a) | true if Type_Optional has been explicitly set to null
`public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchSegmentRequest_1a9eb3821e617e4c08196d063bc2334c64) | 
`public bool `[`State_IsSet`](#structFRHAPI__MatchSegmentRequest_1ad693cb00bee4281b1e36c8a1c06b6f4f) | true if State_Optional has been set to a value
`public bool `[`State_IsNull`](#structFRHAPI__MatchSegmentRequest_1a6df61807227da37345c3299a24b4dfda) | true if State_Optional has been explicitly set to null
`public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchSegmentRequest_1ad830cbeee12fd3a99218223efc732865) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchSegmentRequest_1aa15cb9adf188d8e5d827a03763d3ab2a) | true if StartTimestamp_Optional has been set to a value
`public bool `[`StartTimestamp_IsNull`](#structFRHAPI__MatchSegmentRequest_1a9bd3cb926a04d91980229ae67b1fa6f2) | true if StartTimestamp_Optional has been explicitly set to null
`public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchSegmentRequest_1ad9e131a06e73944b475c38ffae700bec) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchSegmentRequest_1a9a4793cdf472804b2e7893f657e4ece0) | true if EndTimestamp_Optional has been set to a value
`public bool `[`EndTimestamp_IsNull`](#structFRHAPI__MatchSegmentRequest_1acca6016e7aabd1060d2c6ed6224d0640) | true if EndTimestamp_Optional has been explicitly set to null
`public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchSegmentRequest_1a3de5d52bd1d8dda3b664c502c53ba264) | 
`public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchSegmentRequest_1a77358533af3b31fed689fde879b475cd) | true if DurationSeconds_Optional has been set to a value
`public bool `[`DurationSeconds_IsNull`](#structFRHAPI__MatchSegmentRequest_1a7ed66e8ddad521b805b64f70d8809bd5) | true if DurationSeconds_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchSegmentRequest_1abb0505d707dd5ef98075a053e1e67f2a) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchSegmentRequest_1a715c005955b9c2ac62348cecc532b8ed) | true if CustomData_Optional has been set to a value
`public bool `[`CustomData_IsNull`](#structFRHAPI__MatchSegmentRequest_1adbe6d3276f9d1920f6b651e88b7c6d46) | true if CustomData_Optional has been explicitly set to null
`public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchSegmentRequest_1a311dc63348fd76c42ec53bb0a879a39d) | 
`public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchSegmentRequest_1a983a0c162b2f1c2d5c5c44bda2a3d797) | true if CorrelationId_Optional has been set to a value
`public bool `[`CorrelationId_IsNull`](#structFRHAPI__MatchSegmentRequest_1a5a907045b40bb4ba0efc400258dcf86a) | true if CorrelationId_Optional has been explicitly set to null
`public TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > `[`Sessions_Optional`](#structFRHAPI__MatchSegmentRequest_1abda1f2ffe60706c1f44839a7152c8f46) | List of session IDs for the match.
`public bool `[`Sessions_IsSet`](#structFRHAPI__MatchSegmentRequest_1a7fb1a63926c8d5ebf55b3ff57cf61bf2) | true if Sessions_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > `[`Instances_Optional`](#structFRHAPI__MatchSegmentRequest_1ace3f094d9970fbff99105142014555d3) | List of MatchInstances for the match.
`public bool `[`Instances_IsSet`](#structFRHAPI__MatchSegmentRequest_1a649e5e22b69bb4db84e1e4862e1db942) | true if Instances_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > `[`Allocations_Optional`](#structFRHAPI__MatchSegmentRequest_1a1548d9a5f4346208258780a082ec1d24) | List of allocation IDs for the match.
`public bool `[`Allocations_IsSet`](#structFRHAPI__MatchSegmentRequest_1a9fc5279a288e6118729eda867a549611) | true if Allocations_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > `[`Players_Optional`](#structFRHAPI__MatchSegmentRequest_1a92dcdda0698197aaadf51c1ea420a4f2) | List of players in the match.
`public bool `[`Players_IsSet`](#structFRHAPI__MatchSegmentRequest_1adc3cd94b304bfa1b132b85c34b399b0e) | true if Players_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchSegmentRequest_1aad32599404a25831e3af7f23fd1148ac)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchSegmentRequest_1abe7c450599557fbe93d217a8f2d6f3f1)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1a2b7fff3472898ff0620b954f6626b245)`()` | Gets the value of MatchSegment.
`public inline FORCEINLINE const FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1aaed1781c02008e5971c77303161daaf9)`() const` | Gets the value of MatchSegment.
`public inline FORCEINLINE void `[`SetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1a0de1d2eb84dbbaa9e66330f6e0407d24)`(const FString & NewValue)` | Sets the value of MatchSegment.
`public inline FORCEINLINE void `[`SetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1a410365c34995a91afa270ccab93eb280)`(FString && NewValue)` | Sets the value of MatchSegment using move semantics.
`public inline FORCEINLINE FString & `[`GetType`](#structFRHAPI__MatchSegmentRequest_1a27ca2560a1f4d2e2f55eddf03be966f2)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__MatchSegmentRequest_1a14406455191d32d73912db0b82d904c1)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__MatchSegmentRequest_1a929879efa2c13230b0845a0825d05a49)`(const FString & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetType`](#structFRHAPI__MatchSegmentRequest_1aec3e1330df5f2e14c82d903e8473f7ff)`(FString & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentRequest_1a3b741692e975c24e9fbba41e89593536)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentRequest_1a81578e7ee862d37faacb67e141311c8b)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__MatchSegmentRequest_1a2de39c43ceaf18754d56d53a891458bc)`(const FString & NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__MatchSegmentRequest_1a39ca4422891267b64a4283e50b2b373a)`(FString && NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.
`public inline void `[`ClearType`](#structFRHAPI__MatchSegmentRequest_1a643adb7d68d495cde9a96d4a300721fa)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline FORCEINLINE void `[`SetTypeToNull`](#structFRHAPI__MatchSegmentRequest_1a6439dd603f99714cd5edfcea542a95ce)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsTypeNull`](#structFRHAPI__MatchSegmentRequest_1a762691af7557ce0edb13d032564db9c4)`() const` | Checks whether Type_Optional is set to null.
`public inline FORCEINLINE ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentRequest_1a60abfb026d9fb7deaa9fd999d9707890)`()` | Gets the value of State_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentRequest_1a4fe95419cc501f3046d1c402b2efe85a)`() const` | Gets the value of State_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentRequest_1a91e434ca42cdf3fb49c9f9704d131197)`(const ERHAPI_MatchState & DefaultValue) const` | Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetState`](#structFRHAPI__MatchSegmentRequest_1aaec9b503a49f7e23150f55625c9f4fde)`(ERHAPI_MatchState & OutValue) const` | Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentRequest_1a1aae28e7ce78e516801e282f141d8774)`()` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentRequest_1ace166cfd0ee8d0c58de618e7fd04a275)`() const` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetState`](#structFRHAPI__MatchSegmentRequest_1ad55c2706e1c909399db987430c35e60e)`(const ERHAPI_MatchState & NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true.
`public inline FORCEINLINE void `[`SetState`](#structFRHAPI__MatchSegmentRequest_1a246d421d826fcf177af8838c01da3e17)`(ERHAPI_MatchState && NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true using move semantics.
`public inline void `[`ClearState`](#structFRHAPI__MatchSegmentRequest_1a8c7dcd730489e19c038d0d360941d771)`()` | Clears the value of State_Optional and sets State_IsSet to false.
`public inline FORCEINLINE void `[`SetStateToNull`](#structFRHAPI__MatchSegmentRequest_1a73448f2beff68b32cf8ee8775b62c363)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStateNull`](#structFRHAPI__MatchSegmentRequest_1af2674eefb7bcf29b7630917c2f604ce5)`() const` | Checks whether State_Optional is set to null.
`public inline FORCEINLINE FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a2b23edd85dd970b0b62118c17d8ea708)`()` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1acb27f01ad65d4b88690acc22841080e7)`() const` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a835b22dea883a239e18bd0b35edf0bde)`(const FDateTime & DefaultValue) const` | Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a4d26f4cd7927e73d838619c51a0b09ba)`(FDateTime & OutValue) const` | Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1a15d1f07cc5ce62627425c2b51fabe3c0)`()` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1aa2cf8cc810f8222f2d027e7001c421ff)`() const` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a4b1db379df7dbf77e94f4de49823ae3f)`(const FDateTime & NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a79c8fdc332778f8b1ca62aea9fc59d0b)`(FDateTime && NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a89c74d5e241723f999052d1e198f11a5)`()` | Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.
`public inline FORCEINLINE void `[`SetStartTimestampToNull`](#structFRHAPI__MatchSegmentRequest_1a5dfea92321a62ae38c599adb49a67926)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStartTimestampNull`](#structFRHAPI__MatchSegmentRequest_1aa70735a100bdf43f94f140614013dd7a)`() const` | Checks whether StartTimestamp_Optional is set to null.
`public inline FORCEINLINE FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a113995e1b57337b62fa82f2c97b52e11)`()` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a2de8c8b641c563a5e80ba3e3baa151e3)`() const` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1aeb0324545e27ba2d2ca19ad7d00562f1)`(const FDateTime & DefaultValue) const` | Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a34c5f61d9d1943199ee96877288aefce)`(FDateTime & OutValue) const` | Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1a24ca74b9f3ce0723f803e962a9bcdc3c)`()` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1a55bff3ae0e1252718a9451830f554b3d)`() const` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1ade27fc044c3ebac7820a90542964af23)`(const FDateTime & NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a802faa234078ac37ea033d2828fb0c03)`(FDateTime && NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1ae11be37bd9f3f646a788ad56a5250f55)`()` | Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.
`public inline FORCEINLINE void `[`SetEndTimestampToNull`](#structFRHAPI__MatchSegmentRequest_1a4bd5f71ce3ad8164bf5cb8c80609fe81)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsEndTimestampNull`](#structFRHAPI__MatchSegmentRequest_1a40c4f26bfd4fc0cf447f0f0db535869c)`() const` | Checks whether EndTimestamp_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a9777e07589475c8ccda23a740aff7319)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a7c70549485ed7dec79edb875952888fb)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a39c1219fa03a50d09ee53d23224721f3)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a9aa4eb8cab6d25b329cdf71197ea8d0a)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentRequest_1afc1c8340baacf4ce0f21b3e361434b69)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentRequest_1ad3ce49e186aed27c1b07750b03c2f80e)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a2c1a490a57055a0dddbe05f781646cfb)`(const int32 & NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a84ed25a90b10fa61ce3798df33754fd0)`(int32 && NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1ab41aef77bfcccf8cf329309671101fd8)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_DurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a456e015dc191ba934cae37ca7738c0f9)`()` | Returns the default value of DurationSeconds.
`public inline FORCEINLINE void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchSegmentRequest_1a256b6e1a0bfa6ead4996e9e803ab68a8)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchSegmentRequest_1a79ef4891c4406482cab68c37be1aaa2d)`() const` | Checks whether DurationSeconds_Optional is set to null.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1a996c78100f6a12a10b973d87185aabd9)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1a547d5dc3cecce887202ead7c4c3af10b)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1a54400f6a29a25282e4bb5d660bea1d0a)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1a77fde3bf4a47e99700cf60c3e82b2a4f)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentRequest_1a0915284327c3c1a759229d1dee7ad0ee)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentRequest_1a20489185a6a539d0e9372e5f570deb03)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchSegmentRequest_1a9c67b9f86ecb998cf513930e7a1df44b)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchSegmentRequest_1aedacee8b303fb57bdcb19ecd1bfd32ab)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchSegmentRequest_1adb2c7a7e1606c8ab240c7023ec84fa16)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__MatchSegmentRequest_1a8306c00beb9008868339f78c0e0adbe9)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__MatchSegmentRequest_1a3a48e86d5817eb291007d2ec9124fb85)`() const` | Checks whether CustomData_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a62bcd88b15117fc713bc9b160847dc1d)`()` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a1f2a38e19784d5d063a55d00341c7b19)`() const` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a2a6390d4db1a65091144c3ec78337ee6)`(const FString & DefaultValue) const` | Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a4d9e84ae61213aea4b729a225621f8f6)`(FString & OutValue) const` | Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentRequest_1a4b4bca79bcf5a91849a9e970aa07adfd)`()` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentRequest_1ac6a0b549cd24b8add144b76a2bcde709)`() const` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1acf807bd48af3008ca106df5d8c23b7eb)`(const FString & NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.
`public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a038f7393e393e3c0665e38c1117dbe11)`(FString && NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.
`public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a0dbc4d704dfd89f3f4053397378cf59c)`()` | Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.
`public inline FORCEINLINE void `[`SetCorrelationIdToNull`](#structFRHAPI__MatchSegmentRequest_1a00dc91fc781609cb72d7d78b2a8ff8d3)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCorrelationIdNull`](#structFRHAPI__MatchSegmentRequest_1a24aa9146731a975ca1bf0650daeb1b63)`() const` | Checks whether CorrelationId_Optional is set to null.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1afbd6f63a8fbf8f98587923318c4fbba4)`()` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1a25a51a2667637dc3ca7d3f1ee35f246f)`() const` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1a11920e085c5a7ca7de91c7a02b50ef80)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` | Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1a70449f54088e657411b4057224a4edfe)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` | Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentRequest_1a7242291a9df32364938a9c66013a0e90)`()` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentRequest_1aa55536cc18d6998bf1e4f32280f02865)`() const` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchSegmentRequest_1a36d5f21d4adb1dabf97ce66079291a1b)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.
`public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchSegmentRequest_1a6ae7c069c3788c1311ad8cd1f557457a)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.
`public inline void `[`ClearSessions`](#structFRHAPI__MatchSegmentRequest_1a5eb4fa24ed25d90b716aa55936ecaa29)`()` | Clears the value of Sessions_Optional and sets Sessions_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1a0c44e486c68ebdc4a19cb06750109362)`()` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1ab24615c2ddc90225ede657c9dcbe2349)`() const` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1a32db321f21b43f4e315f415d65be06a3)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` | Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1adcaa6ea64ee675010c284642b323a706)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` | Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentRequest_1a348d7633f24d87a498c80adc5967de15)`()` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentRequest_1ab8f9b93e9fda5353a30065a6a3d48bb9)`() const` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstances`](#structFRHAPI__MatchSegmentRequest_1a0454880c2ff4151fb6b879fce3fb41ae)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true.
`public inline FORCEINLINE void `[`SetInstances`](#structFRHAPI__MatchSegmentRequest_1a5a79e03d843d1e4b3578cb52339d57bc)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.
`public inline void `[`ClearInstances`](#structFRHAPI__MatchSegmentRequest_1a82eb96ccb52be59ac46ed6dff2792784)`()` | Clears the value of Instances_Optional and sets Instances_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1afffa2d87f651d478d3e1c17199321682)`()` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1a9eb3cc2fb26e9d6dc6d0ed043bad9e09)`() const` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1a6ed431f7f954df8f931cb352b185cef6)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` | Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1ac450069bc465d8c0eba4e4e1dbeca5cd)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` | Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentRequest_1affa2494663f952a36f98e1cf903c16c8)`()` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentRequest_1a91dc4568852ac1b33b1bc7c434749bd8)`() const` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAllocations`](#structFRHAPI__MatchSegmentRequest_1a75863d116d54bd82a00b84af27fa3ca0)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.
`public inline FORCEINLINE void `[`SetAllocations`](#structFRHAPI__MatchSegmentRequest_1a524cb0ff31443cceab0b0b14b85d8977)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.
`public inline void `[`ClearAllocations`](#structFRHAPI__MatchSegmentRequest_1a82c44276f3a07d2165c049295e0a168a)`()` | Clears the value of Allocations_Optional and sets Allocations_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1a8b2e0aa8e723aff59742ad574696d5dd)`()` | Gets the value of Players_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1a0e5bbac2ea1a09c6eeb78cb9d01b9e23)`() const` | Gets the value of Players_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1aaedad2f62a70d47f6cb1a305ba1ffe22)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & DefaultValue) const` | Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1a6d2f7ad4f43e2bd748df46c020cee67b)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & OutValue) const` | Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentRequest_1a641026e523b5d6bd31cc3bdc0cfb0f40)`()` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentRequest_1aa2dd46c3d08c6a6273509587a427b13f)`() const` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__MatchSegmentRequest_1ae6a6f671d7fa44946a8434ab1e271bec)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__MatchSegmentRequest_1a84354dfb992a15f0091a8ab3911271c4)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > && NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.
`public inline void `[`ClearPlayers`](#structFRHAPI__MatchSegmentRequest_1a82789e62a1025e16304f51dce9461f75)`()` | Clears the value of Players_Optional and sets Players_IsSet to false.

### Members

#### `public FString `[`MatchSegment`](#structFRHAPI__MatchSegmentRequest_1a89e1688873b68a9d18fd23b1b586788d) <a id="structFRHAPI__MatchSegmentRequest_1a89e1688873b68a9d18fd23b1b586788d"></a>

Segment ID of the match.

#### `public FString `[`Type_Optional`](#structFRHAPI__MatchSegmentRequest_1aab68ef98c0c55fb95b65088da276ad48) <a id="structFRHAPI__MatchSegmentRequest_1aab68ef98c0c55fb95b65088da276ad48"></a>

#### `public bool `[`Type_IsSet`](#structFRHAPI__MatchSegmentRequest_1a44f780b34900c4b1927cc0d1e48c2213) <a id="structFRHAPI__MatchSegmentRequest_1a44f780b34900c4b1927cc0d1e48c2213"></a>

true if Type_Optional has been set to a value

#### `public bool `[`Type_IsNull`](#structFRHAPI__MatchSegmentRequest_1ae99412195eaab8f558dbb4772d18b55a) <a id="structFRHAPI__MatchSegmentRequest_1ae99412195eaab8f558dbb4772d18b55a"></a>

true if Type_Optional has been explicitly set to null

#### `public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchSegmentRequest_1a9eb3821e617e4c08196d063bc2334c64) <a id="structFRHAPI__MatchSegmentRequest_1a9eb3821e617e4c08196d063bc2334c64"></a>

#### `public bool `[`State_IsSet`](#structFRHAPI__MatchSegmentRequest_1ad693cb00bee4281b1e36c8a1c06b6f4f) <a id="structFRHAPI__MatchSegmentRequest_1ad693cb00bee4281b1e36c8a1c06b6f4f"></a>

true if State_Optional has been set to a value

#### `public bool `[`State_IsNull`](#structFRHAPI__MatchSegmentRequest_1a6df61807227da37345c3299a24b4dfda) <a id="structFRHAPI__MatchSegmentRequest_1a6df61807227da37345c3299a24b4dfda"></a>

true if State_Optional has been explicitly set to null

#### `public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchSegmentRequest_1ad830cbeee12fd3a99218223efc732865) <a id="structFRHAPI__MatchSegmentRequest_1ad830cbeee12fd3a99218223efc732865"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchSegmentRequest_1aa15cb9adf188d8e5d827a03763d3ab2a) <a id="structFRHAPI__MatchSegmentRequest_1aa15cb9adf188d8e5d827a03763d3ab2a"></a>

true if StartTimestamp_Optional has been set to a value

#### `public bool `[`StartTimestamp_IsNull`](#structFRHAPI__MatchSegmentRequest_1a9bd3cb926a04d91980229ae67b1fa6f2) <a id="structFRHAPI__MatchSegmentRequest_1a9bd3cb926a04d91980229ae67b1fa6f2"></a>

true if StartTimestamp_Optional has been explicitly set to null

#### `public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchSegmentRequest_1ad9e131a06e73944b475c38ffae700bec) <a id="structFRHAPI__MatchSegmentRequest_1ad9e131a06e73944b475c38ffae700bec"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchSegmentRequest_1a9a4793cdf472804b2e7893f657e4ece0) <a id="structFRHAPI__MatchSegmentRequest_1a9a4793cdf472804b2e7893f657e4ece0"></a>

true if EndTimestamp_Optional has been set to a value

#### `public bool `[`EndTimestamp_IsNull`](#structFRHAPI__MatchSegmentRequest_1acca6016e7aabd1060d2c6ed6224d0640) <a id="structFRHAPI__MatchSegmentRequest_1acca6016e7aabd1060d2c6ed6224d0640"></a>

true if EndTimestamp_Optional has been explicitly set to null

#### `public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchSegmentRequest_1a3de5d52bd1d8dda3b664c502c53ba264) <a id="structFRHAPI__MatchSegmentRequest_1a3de5d52bd1d8dda3b664c502c53ba264"></a>

#### `public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchSegmentRequest_1a77358533af3b31fed689fde879b475cd) <a id="structFRHAPI__MatchSegmentRequest_1a77358533af3b31fed689fde879b475cd"></a>

true if DurationSeconds_Optional has been set to a value

#### `public bool `[`DurationSeconds_IsNull`](#structFRHAPI__MatchSegmentRequest_1a7ed66e8ddad521b805b64f70d8809bd5) <a id="structFRHAPI__MatchSegmentRequest_1a7ed66e8ddad521b805b64f70d8809bd5"></a>

true if DurationSeconds_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchSegmentRequest_1abb0505d707dd5ef98075a053e1e67f2a) <a id="structFRHAPI__MatchSegmentRequest_1abb0505d707dd5ef98075a053e1e67f2a"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchSegmentRequest_1a715c005955b9c2ac62348cecc532b8ed) <a id="structFRHAPI__MatchSegmentRequest_1a715c005955b9c2ac62348cecc532b8ed"></a>

true if CustomData_Optional has been set to a value

#### `public bool `[`CustomData_IsNull`](#structFRHAPI__MatchSegmentRequest_1adbe6d3276f9d1920f6b651e88b7c6d46) <a id="structFRHAPI__MatchSegmentRequest_1adbe6d3276f9d1920f6b651e88b7c6d46"></a>

true if CustomData_Optional has been explicitly set to null

#### `public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchSegmentRequest_1a311dc63348fd76c42ec53bb0a879a39d) <a id="structFRHAPI__MatchSegmentRequest_1a311dc63348fd76c42ec53bb0a879a39d"></a>

#### `public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchSegmentRequest_1a983a0c162b2f1c2d5c5c44bda2a3d797) <a id="structFRHAPI__MatchSegmentRequest_1a983a0c162b2f1c2d5c5c44bda2a3d797"></a>

true if CorrelationId_Optional has been set to a value

#### `public bool `[`CorrelationId_IsNull`](#structFRHAPI__MatchSegmentRequest_1a5a907045b40bb4ba0efc400258dcf86a) <a id="structFRHAPI__MatchSegmentRequest_1a5a907045b40bb4ba0efc400258dcf86a"></a>

true if CorrelationId_Optional has been explicitly set to null

#### `public TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > `[`Sessions_Optional`](#structFRHAPI__MatchSegmentRequest_1abda1f2ffe60706c1f44839a7152c8f46) <a id="structFRHAPI__MatchSegmentRequest_1abda1f2ffe60706c1f44839a7152c8f46"></a>

List of session IDs for the match.

#### `public bool `[`Sessions_IsSet`](#structFRHAPI__MatchSegmentRequest_1a7fb1a63926c8d5ebf55b3ff57cf61bf2) <a id="structFRHAPI__MatchSegmentRequest_1a7fb1a63926c8d5ebf55b3ff57cf61bf2"></a>

true if Sessions_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > `[`Instances_Optional`](#structFRHAPI__MatchSegmentRequest_1ace3f094d9970fbff99105142014555d3) <a id="structFRHAPI__MatchSegmentRequest_1ace3f094d9970fbff99105142014555d3"></a>

List of MatchInstances for the match.

#### `public bool `[`Instances_IsSet`](#structFRHAPI__MatchSegmentRequest_1a649e5e22b69bb4db84e1e4862e1db942) <a id="structFRHAPI__MatchSegmentRequest_1a649e5e22b69bb4db84e1e4862e1db942"></a>

true if Instances_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > `[`Allocations_Optional`](#structFRHAPI__MatchSegmentRequest_1a1548d9a5f4346208258780a082ec1d24) <a id="structFRHAPI__MatchSegmentRequest_1a1548d9a5f4346208258780a082ec1d24"></a>

List of allocation IDs for the match.

#### `public bool `[`Allocations_IsSet`](#structFRHAPI__MatchSegmentRequest_1a9fc5279a288e6118729eda867a549611) <a id="structFRHAPI__MatchSegmentRequest_1a9fc5279a288e6118729eda867a549611"></a>

true if Allocations_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > `[`Players_Optional`](#structFRHAPI__MatchSegmentRequest_1a92dcdda0698197aaadf51c1ea420a4f2) <a id="structFRHAPI__MatchSegmentRequest_1a92dcdda0698197aaadf51c1ea420a4f2"></a>

List of players in the match.

#### `public bool `[`Players_IsSet`](#structFRHAPI__MatchSegmentRequest_1adc3cd94b304bfa1b132b85c34b399b0e) <a id="structFRHAPI__MatchSegmentRequest_1adc3cd94b304bfa1b132b85c34b399b0e"></a>

true if Players_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchSegmentRequest_1aad32599404a25831e3af7f23fd1148ac)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchSegmentRequest_1aad32599404a25831e3af7f23fd1148ac"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchSegmentRequest_1abe7c450599557fbe93d217a8f2d6f3f1)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchSegmentRequest_1abe7c450599557fbe93d217a8f2d6f3f1"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1a2b7fff3472898ff0620b954f6626b245)`()` <a id="structFRHAPI__MatchSegmentRequest_1a2b7fff3472898ff0620b954f6626b245"></a>

Gets the value of MatchSegment.

#### `public inline FORCEINLINE const FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1aaed1781c02008e5971c77303161daaf9)`() const` <a id="structFRHAPI__MatchSegmentRequest_1aaed1781c02008e5971c77303161daaf9"></a>

Gets the value of MatchSegment.

#### `public inline FORCEINLINE void `[`SetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1a0de1d2eb84dbbaa9e66330f6e0407d24)`(const FString & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a0de1d2eb84dbbaa9e66330f6e0407d24"></a>

Sets the value of MatchSegment.

#### `public inline FORCEINLINE void `[`SetMatchSegment`](#structFRHAPI__MatchSegmentRequest_1a410365c34995a91afa270ccab93eb280)`(FString && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a410365c34995a91afa270ccab93eb280"></a>

Sets the value of MatchSegment using move semantics.

#### `public inline FORCEINLINE FString & `[`GetType`](#structFRHAPI__MatchSegmentRequest_1a27ca2560a1f4d2e2f55eddf03be966f2)`()` <a id="structFRHAPI__MatchSegmentRequest_1a27ca2560a1f4d2e2f55eddf03be966f2"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__MatchSegmentRequest_1a14406455191d32d73912db0b82d904c1)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a14406455191d32d73912db0b82d904c1"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__MatchSegmentRequest_1a929879efa2c13230b0845a0825d05a49)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a929879efa2c13230b0845a0825d05a49"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetType`](#structFRHAPI__MatchSegmentRequest_1aec3e1330df5f2e14c82d903e8473f7ff)`(FString & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1aec3e1330df5f2e14c82d903e8473f7ff"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentRequest_1a3b741692e975c24e9fbba41e89593536)`()` <a id="structFRHAPI__MatchSegmentRequest_1a3b741692e975c24e9fbba41e89593536"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentRequest_1a81578e7ee862d37faacb67e141311c8b)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a81578e7ee862d37faacb67e141311c8b"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__MatchSegmentRequest_1a2de39c43ceaf18754d56d53a891458bc)`(const FString & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a2de39c43ceaf18754d56d53a891458bc"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__MatchSegmentRequest_1a39ca4422891267b64a4283e50b2b373a)`(FString && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a39ca4422891267b64a4283e50b2b373a"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.

#### `public inline void `[`ClearType`](#structFRHAPI__MatchSegmentRequest_1a643adb7d68d495cde9a96d4a300721fa)`()` <a id="structFRHAPI__MatchSegmentRequest_1a643adb7d68d495cde9a96d4a300721fa"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

#### `public inline FORCEINLINE void `[`SetTypeToNull`](#structFRHAPI__MatchSegmentRequest_1a6439dd603f99714cd5edfcea542a95ce)`()` <a id="structFRHAPI__MatchSegmentRequest_1a6439dd603f99714cd5edfcea542a95ce"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsTypeNull`](#structFRHAPI__MatchSegmentRequest_1a762691af7557ce0edb13d032564db9c4)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a762691af7557ce0edb13d032564db9c4"></a>

Checks whether Type_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentRequest_1a60abfb026d9fb7deaa9fd999d9707890)`()` <a id="structFRHAPI__MatchSegmentRequest_1a60abfb026d9fb7deaa9fd999d9707890"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentRequest_1a4fe95419cc501f3046d1c402b2efe85a)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a4fe95419cc501f3046d1c402b2efe85a"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentRequest_1a91e434ca42cdf3fb49c9f9704d131197)`(const ERHAPI_MatchState & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a91e434ca42cdf3fb49c9f9704d131197"></a>

Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetState`](#structFRHAPI__MatchSegmentRequest_1aaec9b503a49f7e23150f55625c9f4fde)`(ERHAPI_MatchState & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1aaec9b503a49f7e23150f55625c9f4fde"></a>

Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentRequest_1a1aae28e7ce78e516801e282f141d8774)`()` <a id="structFRHAPI__MatchSegmentRequest_1a1aae28e7ce78e516801e282f141d8774"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentRequest_1ace166cfd0ee8d0c58de618e7fd04a275)`() const` <a id="structFRHAPI__MatchSegmentRequest_1ace166cfd0ee8d0c58de618e7fd04a275"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetState`](#structFRHAPI__MatchSegmentRequest_1ad55c2706e1c909399db987430c35e60e)`(const ERHAPI_MatchState & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1ad55c2706e1c909399db987430c35e60e"></a>

Sets the value of State_Optional and also sets State_IsSet to true.

#### `public inline FORCEINLINE void `[`SetState`](#structFRHAPI__MatchSegmentRequest_1a246d421d826fcf177af8838c01da3e17)`(ERHAPI_MatchState && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a246d421d826fcf177af8838c01da3e17"></a>

Sets the value of State_Optional and also sets State_IsSet to true using move semantics.

#### `public inline void `[`ClearState`](#structFRHAPI__MatchSegmentRequest_1a8c7dcd730489e19c038d0d360941d771)`()` <a id="structFRHAPI__MatchSegmentRequest_1a8c7dcd730489e19c038d0d360941d771"></a>

Clears the value of State_Optional and sets State_IsSet to false.

#### `public inline FORCEINLINE void `[`SetStateToNull`](#structFRHAPI__MatchSegmentRequest_1a73448f2beff68b32cf8ee8775b62c363)`()` <a id="structFRHAPI__MatchSegmentRequest_1a73448f2beff68b32cf8ee8775b62c363"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStateNull`](#structFRHAPI__MatchSegmentRequest_1af2674eefb7bcf29b7630917c2f604ce5)`() const` <a id="structFRHAPI__MatchSegmentRequest_1af2674eefb7bcf29b7630917c2f604ce5"></a>

Checks whether State_Optional is set to null.

#### `public inline FORCEINLINE FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a2b23edd85dd970b0b62118c17d8ea708)`()` <a id="structFRHAPI__MatchSegmentRequest_1a2b23edd85dd970b0b62118c17d8ea708"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1acb27f01ad65d4b88690acc22841080e7)`() const` <a id="structFRHAPI__MatchSegmentRequest_1acb27f01ad65d4b88690acc22841080e7"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a835b22dea883a239e18bd0b35edf0bde)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a835b22dea883a239e18bd0b35edf0bde"></a>

Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a4d26f4cd7927e73d838619c51a0b09ba)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a4d26f4cd7927e73d838619c51a0b09ba"></a>

Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1a15d1f07cc5ce62627425c2b51fabe3c0)`()` <a id="structFRHAPI__MatchSegmentRequest_1a15d1f07cc5ce62627425c2b51fabe3c0"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1aa2cf8cc810f8222f2d027e7001c421ff)`() const` <a id="structFRHAPI__MatchSegmentRequest_1aa2cf8cc810f8222f2d027e7001c421ff"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a4b1db379df7dbf77e94f4de49823ae3f)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a4b1db379df7dbf77e94f4de49823ae3f"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a79c8fdc332778f8b1ca62aea9fc59d0b)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a79c8fdc332778f8b1ca62aea9fc59d0b"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchSegmentRequest_1a89c74d5e241723f999052d1e198f11a5)`()` <a id="structFRHAPI__MatchSegmentRequest_1a89c74d5e241723f999052d1e198f11a5"></a>

Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.

#### `public inline FORCEINLINE void `[`SetStartTimestampToNull`](#structFRHAPI__MatchSegmentRequest_1a5dfea92321a62ae38c599adb49a67926)`()` <a id="structFRHAPI__MatchSegmentRequest_1a5dfea92321a62ae38c599adb49a67926"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStartTimestampNull`](#structFRHAPI__MatchSegmentRequest_1aa70735a100bdf43f94f140614013dd7a)`() const` <a id="structFRHAPI__MatchSegmentRequest_1aa70735a100bdf43f94f140614013dd7a"></a>

Checks whether StartTimestamp_Optional is set to null.

#### `public inline FORCEINLINE FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a113995e1b57337b62fa82f2c97b52e11)`()` <a id="structFRHAPI__MatchSegmentRequest_1a113995e1b57337b62fa82f2c97b52e11"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a2de8c8b641c563a5e80ba3e3baa151e3)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a2de8c8b641c563a5e80ba3e3baa151e3"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1aeb0324545e27ba2d2ca19ad7d00562f1)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1aeb0324545e27ba2d2ca19ad7d00562f1"></a>

Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a34c5f61d9d1943199ee96877288aefce)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a34c5f61d9d1943199ee96877288aefce"></a>

Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1a24ca74b9f3ce0723f803e962a9bcdc3c)`()` <a id="structFRHAPI__MatchSegmentRequest_1a24ca74b9f3ce0723f803e962a9bcdc3c"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentRequest_1a55bff3ae0e1252718a9451830f554b3d)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a55bff3ae0e1252718a9451830f554b3d"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1ade27fc044c3ebac7820a90542964af23)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1ade27fc044c3ebac7820a90542964af23"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1a802faa234078ac37ea033d2828fb0c03)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a802faa234078ac37ea033d2828fb0c03"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchSegmentRequest_1ae11be37bd9f3f646a788ad56a5250f55)`()` <a id="structFRHAPI__MatchSegmentRequest_1ae11be37bd9f3f646a788ad56a5250f55"></a>

Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.

#### `public inline FORCEINLINE void `[`SetEndTimestampToNull`](#structFRHAPI__MatchSegmentRequest_1a4bd5f71ce3ad8164bf5cb8c80609fe81)`()` <a id="structFRHAPI__MatchSegmentRequest_1a4bd5f71ce3ad8164bf5cb8c80609fe81"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsEndTimestampNull`](#structFRHAPI__MatchSegmentRequest_1a40c4f26bfd4fc0cf447f0f0db535869c)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a40c4f26bfd4fc0cf447f0f0db535869c"></a>

Checks whether EndTimestamp_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a9777e07589475c8ccda23a740aff7319)`()` <a id="structFRHAPI__MatchSegmentRequest_1a9777e07589475c8ccda23a740aff7319"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a7c70549485ed7dec79edb875952888fb)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a7c70549485ed7dec79edb875952888fb"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a39c1219fa03a50d09ee53d23224721f3)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a39c1219fa03a50d09ee53d23224721f3"></a>

Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a9aa4eb8cab6d25b329cdf71197ea8d0a)`(int32 & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a9aa4eb8cab6d25b329cdf71197ea8d0a"></a>

Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentRequest_1afc1c8340baacf4ce0f21b3e361434b69)`()` <a id="structFRHAPI__MatchSegmentRequest_1afc1c8340baacf4ce0f21b3e361434b69"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentRequest_1ad3ce49e186aed27c1b07750b03c2f80e)`() const` <a id="structFRHAPI__MatchSegmentRequest_1ad3ce49e186aed27c1b07750b03c2f80e"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a2c1a490a57055a0dddbe05f781646cfb)`(const int32 & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a2c1a490a57055a0dddbe05f781646cfb"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a84ed25a90b10fa61ce3798df33754fd0)`(int32 && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a84ed25a90b10fa61ce3798df33754fd0"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchSegmentRequest_1ab41aef77bfcccf8cf329309671101fd8)`()` <a id="structFRHAPI__MatchSegmentRequest_1ab41aef77bfcccf8cf329309671101fd8"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_DurationSeconds`](#structFRHAPI__MatchSegmentRequest_1a456e015dc191ba934cae37ca7738c0f9)`()` <a id="structFRHAPI__MatchSegmentRequest_1a456e015dc191ba934cae37ca7738c0f9"></a>

Returns the default value of DurationSeconds.

#### `public inline FORCEINLINE void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchSegmentRequest_1a256b6e1a0bfa6ead4996e9e803ab68a8)`()` <a id="structFRHAPI__MatchSegmentRequest_1a256b6e1a0bfa6ead4996e9e803ab68a8"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchSegmentRequest_1a79ef4891c4406482cab68c37be1aaa2d)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a79ef4891c4406482cab68c37be1aaa2d"></a>

Checks whether DurationSeconds_Optional is set to null.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1a996c78100f6a12a10b973d87185aabd9)`()` <a id="structFRHAPI__MatchSegmentRequest_1a996c78100f6a12a10b973d87185aabd9"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1a547d5dc3cecce887202ead7c4c3af10b)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a547d5dc3cecce887202ead7c4c3af10b"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1a54400f6a29a25282e4bb5d660bea1d0a)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a54400f6a29a25282e4bb5d660bea1d0a"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchSegmentRequest_1a77fde3bf4a47e99700cf60c3e82b2a4f)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a77fde3bf4a47e99700cf60c3e82b2a4f"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentRequest_1a0915284327c3c1a759229d1dee7ad0ee)`()` <a id="structFRHAPI__MatchSegmentRequest_1a0915284327c3c1a759229d1dee7ad0ee"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentRequest_1a20489185a6a539d0e9372e5f570deb03)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a20489185a6a539d0e9372e5f570deb03"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchSegmentRequest_1a9c67b9f86ecb998cf513930e7a1df44b)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a9c67b9f86ecb998cf513930e7a1df44b"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchSegmentRequest_1aedacee8b303fb57bdcb19ecd1bfd32ab)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1aedacee8b303fb57bdcb19ecd1bfd32ab"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchSegmentRequest_1adb2c7a7e1606c8ab240c7023ec84fa16)`()` <a id="structFRHAPI__MatchSegmentRequest_1adb2c7a7e1606c8ab240c7023ec84fa16"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__MatchSegmentRequest_1a8306c00beb9008868339f78c0e0adbe9)`()` <a id="structFRHAPI__MatchSegmentRequest_1a8306c00beb9008868339f78c0e0adbe9"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__MatchSegmentRequest_1a3a48e86d5817eb291007d2ec9124fb85)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a3a48e86d5817eb291007d2ec9124fb85"></a>

Checks whether CustomData_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a62bcd88b15117fc713bc9b160847dc1d)`()` <a id="structFRHAPI__MatchSegmentRequest_1a62bcd88b15117fc713bc9b160847dc1d"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a1f2a38e19784d5d063a55d00341c7b19)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a1f2a38e19784d5d063a55d00341c7b19"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a2a6390d4db1a65091144c3ec78337ee6)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a2a6390d4db1a65091144c3ec78337ee6"></a>

Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a4d9e84ae61213aea4b729a225621f8f6)`(FString & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a4d9e84ae61213aea4b729a225621f8f6"></a>

Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentRequest_1a4b4bca79bcf5a91849a9e970aa07adfd)`()` <a id="structFRHAPI__MatchSegmentRequest_1a4b4bca79bcf5a91849a9e970aa07adfd"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentRequest_1ac6a0b549cd24b8add144b76a2bcde709)`() const` <a id="structFRHAPI__MatchSegmentRequest_1ac6a0b549cd24b8add144b76a2bcde709"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1acf807bd48af3008ca106df5d8c23b7eb)`(const FString & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1acf807bd48af3008ca106df5d8c23b7eb"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a038f7393e393e3c0665e38c1117dbe11)`(FString && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a038f7393e393e3c0665e38c1117dbe11"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.

#### `public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchSegmentRequest_1a0dbc4d704dfd89f3f4053397378cf59c)`()` <a id="structFRHAPI__MatchSegmentRequest_1a0dbc4d704dfd89f3f4053397378cf59c"></a>

Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCorrelationIdToNull`](#structFRHAPI__MatchSegmentRequest_1a00dc91fc781609cb72d7d78b2a8ff8d3)`()` <a id="structFRHAPI__MatchSegmentRequest_1a00dc91fc781609cb72d7d78b2a8ff8d3"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCorrelationIdNull`](#structFRHAPI__MatchSegmentRequest_1a24aa9146731a975ca1bf0650daeb1b63)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a24aa9146731a975ca1bf0650daeb1b63"></a>

Checks whether CorrelationId_Optional is set to null.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1afbd6f63a8fbf8f98587923318c4fbba4)`()` <a id="structFRHAPI__MatchSegmentRequest_1afbd6f63a8fbf8f98587923318c4fbba4"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1a25a51a2667637dc3ca7d3f1ee35f246f)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a25a51a2667637dc3ca7d3f1ee35f246f"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1a11920e085c5a7ca7de91c7a02b50ef80)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a11920e085c5a7ca7de91c7a02b50ef80"></a>

Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSessions`](#structFRHAPI__MatchSegmentRequest_1a70449f54088e657411b4057224a4edfe)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a70449f54088e657411b4057224a4edfe"></a>

Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentRequest_1a7242291a9df32364938a9c66013a0e90)`()` <a id="structFRHAPI__MatchSegmentRequest_1a7242291a9df32364938a9c66013a0e90"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentRequest_1aa55536cc18d6998bf1e4f32280f02865)`() const` <a id="structFRHAPI__MatchSegmentRequest_1aa55536cc18d6998bf1e4f32280f02865"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchSegmentRequest_1a36d5f21d4adb1dabf97ce66079291a1b)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a36d5f21d4adb1dabf97ce66079291a1b"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchSegmentRequest_1a6ae7c069c3788c1311ad8cd1f557457a)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a6ae7c069c3788c1311ad8cd1f557457a"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.

#### `public inline void `[`ClearSessions`](#structFRHAPI__MatchSegmentRequest_1a5eb4fa24ed25d90b716aa55936ecaa29)`()` <a id="structFRHAPI__MatchSegmentRequest_1a5eb4fa24ed25d90b716aa55936ecaa29"></a>

Clears the value of Sessions_Optional and sets Sessions_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1a0c44e486c68ebdc4a19cb06750109362)`()` <a id="structFRHAPI__MatchSegmentRequest_1a0c44e486c68ebdc4a19cb06750109362"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1ab24615c2ddc90225ede657c9dcbe2349)`() const` <a id="structFRHAPI__MatchSegmentRequest_1ab24615c2ddc90225ede657c9dcbe2349"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1a32db321f21b43f4e315f415d65be06a3)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a32db321f21b43f4e315f415d65be06a3"></a>

Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstances`](#structFRHAPI__MatchSegmentRequest_1adcaa6ea64ee675010c284642b323a706)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1adcaa6ea64ee675010c284642b323a706"></a>

Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentRequest_1a348d7633f24d87a498c80adc5967de15)`()` <a id="structFRHAPI__MatchSegmentRequest_1a348d7633f24d87a498c80adc5967de15"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentRequest_1ab8f9b93e9fda5353a30065a6a3d48bb9)`() const` <a id="structFRHAPI__MatchSegmentRequest_1ab8f9b93e9fda5353a30065a6a3d48bb9"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstances`](#structFRHAPI__MatchSegmentRequest_1a0454880c2ff4151fb6b879fce3fb41ae)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a0454880c2ff4151fb6b879fce3fb41ae"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstances`](#structFRHAPI__MatchSegmentRequest_1a5a79e03d843d1e4b3578cb52339d57bc)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a5a79e03d843d1e4b3578cb52339d57bc"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.

#### `public inline void `[`ClearInstances`](#structFRHAPI__MatchSegmentRequest_1a82eb96ccb52be59ac46ed6dff2792784)`()` <a id="structFRHAPI__MatchSegmentRequest_1a82eb96ccb52be59ac46ed6dff2792784"></a>

Clears the value of Instances_Optional and sets Instances_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1afffa2d87f651d478d3e1c17199321682)`()` <a id="structFRHAPI__MatchSegmentRequest_1afffa2d87f651d478d3e1c17199321682"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1a9eb3cc2fb26e9d6dc6d0ed043bad9e09)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a9eb3cc2fb26e9d6dc6d0ed043bad9e09"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1a6ed431f7f954df8f931cb352b185cef6)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a6ed431f7f954df8f931cb352b185cef6"></a>

Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAllocations`](#structFRHAPI__MatchSegmentRequest_1ac450069bc465d8c0eba4e4e1dbeca5cd)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1ac450069bc465d8c0eba4e4e1dbeca5cd"></a>

Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentRequest_1affa2494663f952a36f98e1cf903c16c8)`()` <a id="structFRHAPI__MatchSegmentRequest_1affa2494663f952a36f98e1cf903c16c8"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentRequest_1a91dc4568852ac1b33b1bc7c434749bd8)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a91dc4568852ac1b33b1bc7c434749bd8"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAllocations`](#structFRHAPI__MatchSegmentRequest_1a75863d116d54bd82a00b84af27fa3ca0)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a75863d116d54bd82a00b84af27fa3ca0"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAllocations`](#structFRHAPI__MatchSegmentRequest_1a524cb0ff31443cceab0b0b14b85d8977)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a524cb0ff31443cceab0b0b14b85d8977"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.

#### `public inline void `[`ClearAllocations`](#structFRHAPI__MatchSegmentRequest_1a82c44276f3a07d2165c049295e0a168a)`()` <a id="structFRHAPI__MatchSegmentRequest_1a82c44276f3a07d2165c049295e0a168a"></a>

Clears the value of Allocations_Optional and sets Allocations_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1a8b2e0aa8e723aff59742ad574696d5dd)`()` <a id="structFRHAPI__MatchSegmentRequest_1a8b2e0aa8e723aff59742ad574696d5dd"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1a0e5bbac2ea1a09c6eeb78cb9d01b9e23)`() const` <a id="structFRHAPI__MatchSegmentRequest_1a0e5bbac2ea1a09c6eeb78cb9d01b9e23"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1aaedad2f62a70d47f6cb1a305ba1ffe22)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentRequest_1aaedad2f62a70d47f6cb1a305ba1ffe22"></a>

Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayers`](#structFRHAPI__MatchSegmentRequest_1a6d2f7ad4f43e2bd748df46c020cee67b)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentRequest_1a6d2f7ad4f43e2bd748df46c020cee67b"></a>

Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentRequest_1a641026e523b5d6bd31cc3bdc0cfb0f40)`()` <a id="structFRHAPI__MatchSegmentRequest_1a641026e523b5d6bd31cc3bdc0cfb0f40"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentRequest_1aa2dd46c3d08c6a6273509587a427b13f)`() const` <a id="structFRHAPI__MatchSegmentRequest_1aa2dd46c3d08c6a6273509587a427b13f"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__MatchSegmentRequest_1ae6a6f671d7fa44946a8434ab1e271bec)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1ae6a6f671d7fa44946a8434ab1e271bec"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__MatchSegmentRequest_1a84354dfb992a15f0091a8ab3911271c4)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > && NewValue)` <a id="structFRHAPI__MatchSegmentRequest_1a84354dfb992a15f0091a8ab3911271c4"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayers`](#structFRHAPI__MatchSegmentRequest_1a82789e62a1025e16304f51dce9461f75)`()` <a id="structFRHAPI__MatchSegmentRequest_1a82789e62a1025e16304f51dce9461f75"></a>

Clears the value of Players_Optional and sets Players_IsSet to false.

