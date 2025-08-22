---
title: RHAPI_MatchWithPlayers
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchWithPlayers`](#structFRHAPI__MatchWithPlayers) | 

## struct `FRHAPI_MatchWithPlayers` <a id="structFRHAPI__MatchWithPlayers"></a>

```
struct FRHAPI_MatchWithPlayers
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FDateTime `[`LastModifiedTimestamp_Optional`](#structFRHAPI__MatchWithPlayers_1a5628f211d41028e24c5c16f18245a2a1) | Timestamp of when the resource was last modified.
`public bool `[`LastModifiedTimestamp_IsSet`](#structFRHAPI__MatchWithPlayers_1a00acf4b4ad5e4ad5fe5869bc6c807992) | true if LastModifiedTimestamp_Optional has been set to a value
`public FDateTime `[`CreatedTimestamp_Optional`](#structFRHAPI__MatchWithPlayers_1ac344460c57fc5d3f0660f305fe4dbd1e) | Timestamp of when the resource was created.
`public bool `[`CreatedTimestamp_IsSet`](#structFRHAPI__MatchWithPlayers_1afacaaac54f38f7a0a8a7b422db16c75f) | true if CreatedTimestamp_Optional has been set to a value
`public FString `[`Type_Optional`](#structFRHAPI__MatchWithPlayers_1a659236b15b05f230d2716f9be31aee67) | 
`public bool `[`Type_IsSet`](#structFRHAPI__MatchWithPlayers_1ace102a653b3f208eddd528df76288a74) | true if Type_Optional has been set to a value
`public bool `[`Type_IsNull`](#structFRHAPI__MatchWithPlayers_1a05a1a15c61b3850fcbe6d9f9da98b647) | true if Type_Optional has been explicitly set to null
`public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchWithPlayers_1abc3bfff7ef2994d9a411543a9d54dd31) | 
`public bool `[`State_IsSet`](#structFRHAPI__MatchWithPlayers_1af2add4306978accd23b3d39d3f74f79f) | true if State_Optional has been set to a value
`public bool `[`State_IsNull`](#structFRHAPI__MatchWithPlayers_1a5256556f3747265a04d7190b6370a414) | true if State_Optional has been explicitly set to null
`public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchWithPlayers_1a3befa8a77889fee718742ad18b820853) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchWithPlayers_1a8efa84c4e181023de46d742bca705805) | true if StartTimestamp_Optional has been set to a value
`public bool `[`StartTimestamp_IsNull`](#structFRHAPI__MatchWithPlayers_1af16392ca3424f02ebd267c640ce93431) | true if StartTimestamp_Optional has been explicitly set to null
`public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchWithPlayers_1a0e48a16cc0b6ca8f0e39f4a3618c8b2f) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchWithPlayers_1ac4ad4dcf7d89b667b8d29ec956d057aa) | true if EndTimestamp_Optional has been set to a value
`public bool `[`EndTimestamp_IsNull`](#structFRHAPI__MatchWithPlayers_1afa5563b8c5649c522c8b1b1952faa9f6) | true if EndTimestamp_Optional has been explicitly set to null
`public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchWithPlayers_1a0ea6f1121c18c0926fec8fc7a27f460d) | 
`public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchWithPlayers_1a8a265fb4e7cee101a6d1411933728606) | true if DurationSeconds_Optional has been set to a value
`public bool `[`DurationSeconds_IsNull`](#structFRHAPI__MatchWithPlayers_1ad30e363f56aeb8d83b0a3c7251ade227) | true if DurationSeconds_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchWithPlayers_1a0dc2bfd9e3319685c00846a81e2a610d) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchWithPlayers_1accd783d40f7eabecaad610755a628889) | true if CustomData_Optional has been set to a value
`public bool `[`CustomData_IsNull`](#structFRHAPI__MatchWithPlayers_1a7dd9cf43760d44bbe1d4e780fcd45df9) | true if CustomData_Optional has been explicitly set to null
`public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchWithPlayers_1a41a0406798245ba6e5c2534aeb6fbaf0) | 
`public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchWithPlayers_1abdf507772e60249c93da5ff188346e24) | true if CorrelationId_Optional has been set to a value
`public bool `[`CorrelationId_IsNull`](#structFRHAPI__MatchWithPlayers_1a8962ab4190c3372c2057d346bc1cb877) | true if CorrelationId_Optional has been explicitly set to null
`public TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > `[`Sessions_Optional`](#structFRHAPI__MatchWithPlayers_1a947c4070cc7d61a78ea796bf6e3f7f1f) | List of session IDs for the match.
`public bool `[`Sessions_IsSet`](#structFRHAPI__MatchWithPlayers_1af263e14c93f881c3616fd44afca05bb2) | true if Sessions_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > `[`Instances_Optional`](#structFRHAPI__MatchWithPlayers_1a6a98fb6ddb8255f72962c405a2fea0bf) | List of MatchInstances for the match.
`public bool `[`Instances_IsSet`](#structFRHAPI__MatchWithPlayers_1af42654ffd3f46b248f5f48b5c8cde8f9) | true if Instances_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > `[`Allocations_Optional`](#structFRHAPI__MatchWithPlayers_1af8508fb5bd07eb01b53af4a6fa9eeacc) | List of allocation IDs for the match.
`public bool `[`Allocations_IsSet`](#structFRHAPI__MatchWithPlayers_1a634ec951054d0e4b760976ccb4a8f529) | true if Allocations_Optional has been set to a value
`public FString `[`MatchId_Optional`](#structFRHAPI__MatchWithPlayers_1a9145dd76d8fed562312d9b2495752290) | 
`public bool `[`MatchId_IsSet`](#structFRHAPI__MatchWithPlayers_1adf0a808f0238349b98515027957864fc) | true if MatchId_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > `[`Segments_Optional`](#structFRHAPI__MatchWithPlayers_1a2927cb22ad7fa59ca2ff1f99b5168a51) | List of segments for the match.
`public bool `[`Segments_IsSet`](#structFRHAPI__MatchWithPlayers_1adae97c7f001028002546a4949f9268a8) | true if Segments_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > `[`Players_Optional`](#structFRHAPI__MatchWithPlayers_1ac846c80718ec521337a5d8c5c30ae55d) | List of players in the match.
`public bool `[`Players_IsSet`](#structFRHAPI__MatchWithPlayers_1a89153749417713a1d74653a5cd476a60) | true if Players_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchWithPlayers_1ad6404d79f7e010369675888d45f87e19)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchWithPlayers_1a8bf8433840ea543e83a0b4eb2b7bc988)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a79b721068a640e9e638288d29450bf83)`()` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a80d75d1e24044da0fe04c6f45646210d)`() const` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1ae92d398ec4113a173ad740f710721c97)`(const FDateTime & DefaultValue) const` | Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a560af52c2a694b81fec074af9eb6b33f)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1abe757087dc2301ffdc43df19b9f7a4ac)`()` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a049f00b98c636b4e3a7444394eea619f)`() const` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a9faf42752e32dbd32be077a26d9284f2)`(const FDateTime & NewValue)` | Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a489798c894c2c1b0f3f3337d4b0b38f5)`(FDateTime && NewValue)` | Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a4e3e368f11262aecbd8a9a00efe86a64)`()` | Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.
`public inline FORCEINLINE FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1a6608b151ea3a070857fd46fd68f03923)`()` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1ac286cfbc8cff076038cd24b11bc7eee0)`() const` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1a57957ae3c43821b4796055fc37df0ba0)`(const FDateTime & DefaultValue) const` | Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1a7fa1818c6c6f6ef6241b48de8fff5c56)`(FDateTime & OutValue) const` | Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a6accb727198f346ea743457169047843)`()` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a4fc2311f4a23cee25cc19340b3950c9a)`() const` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1a353add3fee8718232fc39434847afb6b)`(const FDateTime & NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1a04d89e9fe53942abb95ae87f0fa1dd49)`(FDateTime && NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1a4c7b58dd67ad205c840f4799e86f3141)`()` | Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.
`public inline FORCEINLINE FString & `[`GetType`](#structFRHAPI__MatchWithPlayers_1a58cc3adeeb03e7b754006a067dbacac8)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__MatchWithPlayers_1aacfe07a38e10818a41f51e3fc066f4cd)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__MatchWithPlayers_1ae1a82e7236395afbf689c6cd5183cd01)`(const FString & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetType`](#structFRHAPI__MatchWithPlayers_1adb9e4a191120508fe9aeec2a9607fe99)`(FString & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetTypeOrNull`](#structFRHAPI__MatchWithPlayers_1ab5bf632c80729860704543973b7e03d5)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchWithPlayers_1a1d4e5667d9304b8d81d6c1db9fdb412e)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__MatchWithPlayers_1a747b3bf508ece1ffa2d32b6b92aa1af4)`(const FString & NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__MatchWithPlayers_1af262c4ee8ce8350011faeab124826692)`(FString && NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.
`public inline void `[`ClearType`](#structFRHAPI__MatchWithPlayers_1a701d0e7bc85a24c0b27dc79b2d70f103)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline FORCEINLINE void `[`SetTypeToNull`](#structFRHAPI__MatchWithPlayers_1ae49fa01264f2edf52ce79f7361573c17)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsTypeNull`](#structFRHAPI__MatchWithPlayers_1a0560981d558f1c0776b7fc903dcd910f)`() const` | Checks whether Type_Optional is set to null.
`public inline FORCEINLINE ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchWithPlayers_1a7f551ba3ada11e6f0c5ee69589b5464c)`()` | Gets the value of State_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchWithPlayers_1a3d5b1236f8a2cc5372346d860d8e90af)`() const` | Gets the value of State_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchWithPlayers_1a625094b679844e06c125f88f9a26a5d6)`(const ERHAPI_MatchState & DefaultValue) const` | Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetState`](#structFRHAPI__MatchWithPlayers_1ad6afc97e30bd17716d62ed75759b6504)`(ERHAPI_MatchState & OutValue) const` | Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchWithPlayers_1aa56db8ec0eaafb9332b56880d426a89a)`()` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchWithPlayers_1adb188e70763843740fd9bfa7c76eacce)`() const` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetState`](#structFRHAPI__MatchWithPlayers_1ad0cf65028c3468be8ea8883188efd358)`(const ERHAPI_MatchState & NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true.
`public inline FORCEINLINE void `[`SetState`](#structFRHAPI__MatchWithPlayers_1ab34222c31b0b989f9f407fe502e1a8a6)`(ERHAPI_MatchState && NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true using move semantics.
`public inline void `[`ClearState`](#structFRHAPI__MatchWithPlayers_1ae5f274757061314b2f09b2013e7a6c0c)`()` | Clears the value of State_Optional and sets State_IsSet to false.
`public inline FORCEINLINE void `[`SetStateToNull`](#structFRHAPI__MatchWithPlayers_1ad9d06421e1d059b2739da1730697e4d0)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStateNull`](#structFRHAPI__MatchWithPlayers_1a57eca8334e723082fc570d619e1560d5)`() const` | Checks whether State_Optional is set to null.
`public inline FORCEINLINE FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1afa03b451763b08f0c1427c33e33febea)`()` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a9fd292c6143e53bb016ded3ecdcbe63b)`() const` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a232858ca7a6ef3ad02363131b95a69d6)`(const FDateTime & DefaultValue) const` | Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1aaac1e0faa39ad6e9a899ce4ec11f2472)`(FDateTime & OutValue) const` | Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a9d23e0b21940bb39179ba3fd54cce879)`()` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a4be5151a124f734e0506daf75044cea3)`() const` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a4ca5326f89e833bc2d5dae375537c81e)`(const FDateTime & NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a934d5918d03f09457fb87b1eb834f5cd)`(FDateTime && NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a641f7901d874710f0e4871f9acd283f8)`()` | Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.
`public inline FORCEINLINE void `[`SetStartTimestampToNull`](#structFRHAPI__MatchWithPlayers_1ae93cd4e91dcf99783e63e4b840c6f9fa)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStartTimestampNull`](#structFRHAPI__MatchWithPlayers_1a210785dd5f2485ff2913ff0da845f1ab)`() const` | Checks whether StartTimestamp_Optional is set to null.
`public inline FORCEINLINE FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1a263267c48087053b3fb6625429bb786d)`()` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1a5e08293a28774b3ec05f622c2ba34d0d)`() const` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1ab7ae21c4b3fa2fcdc5e4c5f295c05a20)`(const FDateTime & DefaultValue) const` | Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1a84bf96c0cad1679fed316f4844b20931)`(FDateTime & OutValue) const` | Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1aa359c2157e41e2b727c6ff41af728bbf)`()` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a53294f4ebbcf85e55b402741fbea5a2e)`() const` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1a085c1d0efcb859341c90c511a7b87cc0)`(const FDateTime & NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1a926bee9005438277c3813df62847c830)`(FDateTime && NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchWithPlayers_1a720ccb68e29bd18392e98e6ba681f0b3)`()` | Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.
`public inline FORCEINLINE void `[`SetEndTimestampToNull`](#structFRHAPI__MatchWithPlayers_1a35e1a72cebd07ee30547571b2c635039)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsEndTimestampNull`](#structFRHAPI__MatchWithPlayers_1ab91194289e599dd6ab2538a57d42ae90)`() const` | Checks whether EndTimestamp_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a6675f688d051344150501a700b45de68)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1ad4e562747e220ae3c080ff5af05caca3)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a355e26f3e7e77066fa90b753d4bcb755)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a3ed7c6428d397a9f00c8e9ad30a8ed31)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchWithPlayers_1aa46c04a9a4d85225f7e0e44a38bc4424)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchWithPlayers_1aa640f8c76307955aa51ecc6f15bf0f17)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a5c8150ef35e25aa5a452a94714013111)`(const int32 & NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a0021b57116fe160c8087d3c280cfc086)`(int32 && NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchWithPlayers_1aaa3f48e241f0728fc8fbe273f97b0f6b)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_DurationSeconds`](#structFRHAPI__MatchWithPlayers_1a47eebaa979e2366d45ee7c8859185de3)`()` | Returns the default value of DurationSeconds.
`public inline FORCEINLINE void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchWithPlayers_1abb8383a55f1efcac59e77c84f8078b43)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchWithPlayers_1a7901a6c47b2d646ef6e3a72005c83c6f)`() const` | Checks whether DurationSeconds_Optional is set to null.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchWithPlayers_1a085650bae876e625cced4cd069ebcca5)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchWithPlayers_1af749b76035dffd912182f23982915468)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchWithPlayers_1a6d9f1a53704dca8557105bcf8c78799f)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchWithPlayers_1a52e1d9360920308c672a687abe57ebb4)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchWithPlayers_1aa1a688bc0cf9aff613e72166d19c073a)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchWithPlayers_1a0a598d94c61e4ab862b168e82f8d132f)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchWithPlayers_1a6007e752f83598d52e11df18ed62b0e5)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchWithPlayers_1aeb44ce64180020a7f06063fffa7a5332)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchWithPlayers_1a9cf848863e68de7670c31053b3062688)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__MatchWithPlayers_1a2cb94819c3b745c82ee4f71a5614ec36)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__MatchWithPlayers_1a3f4cced997fa5a104c435afb08591c48)`() const` | Checks whether CustomData_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a6af626f7335ac761db5f967efdbb8a14)`()` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a611907b8ca1b8d6d4ab8c5d49012ced6)`() const` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a0485ee22570875cb713440df71f15343)`(const FString & DefaultValue) const` | Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a41956df3541757cc54d9d0a5603b72bc)`(FString & OutValue) const` | Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchWithPlayers_1a9120a6537ab68732e86ee03ca23c519c)`()` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchWithPlayers_1ab0f9e19facf3a2e74f4a27f18605daad)`() const` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a407a2e2c35a02db884f1362e5b3fff4b)`(const FString & NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.
`public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__MatchWithPlayers_1ab329420e8f817206319b4aa105788a9c)`(FString && NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.
`public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchWithPlayers_1a68f5a07bf08e9d29e5ab87051d4b258b)`()` | Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.
`public inline FORCEINLINE void `[`SetCorrelationIdToNull`](#structFRHAPI__MatchWithPlayers_1abc9bc70bc89cc071ee2e23e2b3f7fa2d)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCorrelationIdNull`](#structFRHAPI__MatchWithPlayers_1a3e1a65acda0413647cab8ffa674cfa35)`() const` | Checks whether CorrelationId_Optional is set to null.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchWithPlayers_1ad5a37a45dc1c7c04e904e93e94b1d787)`()` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchWithPlayers_1a4dc9ea9a387c44580ba0da44b99a4e41)`() const` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchWithPlayers_1af7abb3ea959a4c5a6a3315093f26f28f)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` | Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSessions`](#structFRHAPI__MatchWithPlayers_1a518d5729478d77ffb55aa609536c636c)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` | Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchWithPlayers_1a98315c06518dde66012e4797973d4694)`()` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchWithPlayers_1ac70125973410e6faf03296d25d674cdc)`() const` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchWithPlayers_1a0a72d16538f73e063f0686ee9a1793d4)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.
`public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchWithPlayers_1a93e8999000835f14d72a6a6228364079)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.
`public inline void `[`ClearSessions`](#structFRHAPI__MatchWithPlayers_1a5ecfbae79a24684b17957054f9d0108b)`()` | Clears the value of Sessions_Optional and sets Sessions_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchWithPlayers_1a6bca15620a5559eeb353113061173e44)`()` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchWithPlayers_1ab18f6c286ba1320194fa40c22d948af7)`() const` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchWithPlayers_1adcbe40390e1da4cfe41e29f726cd5f70)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` | Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstances`](#structFRHAPI__MatchWithPlayers_1a6b5e3ac1d8f7f9b3f70a3a69362ec67c)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` | Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchWithPlayers_1a91b218343e88252486f6ece222e8228a)`()` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchWithPlayers_1a6055e79d7b1e82bb337ce200aeb07787)`() const` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstances`](#structFRHAPI__MatchWithPlayers_1a407c2096810359d43cef10f6015392f2)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true.
`public inline FORCEINLINE void `[`SetInstances`](#structFRHAPI__MatchWithPlayers_1a75208e310ed71725452cd82a226b001a)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.
`public inline void `[`ClearInstances`](#structFRHAPI__MatchWithPlayers_1ab9984a8c8ffce98a08718561f0d29a96)`()` | Clears the value of Instances_Optional and sets Instances_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchWithPlayers_1a745f0135b6b87c9acca3b945d22145eb)`()` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchWithPlayers_1a2d55feb6a92b1f4e3d9040dc6e605825)`() const` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchWithPlayers_1abbf0a13dc7f2f4fa1b278ac07a40a198)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` | Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAllocations`](#structFRHAPI__MatchWithPlayers_1a0f15a5c5acd83e3d6a6d5f2dcddffc97)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` | Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchWithPlayers_1a746a11c001a4cb4d2c9ffb89a511d434)`()` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchWithPlayers_1ad4b21e013d88e5b1a769b87a79945aa6)`() const` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAllocations`](#structFRHAPI__MatchWithPlayers_1ae9963daeead0f48b6ecf7d3b9be45dba)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.
`public inline FORCEINLINE void `[`SetAllocations`](#structFRHAPI__MatchWithPlayers_1ae00f55bca474e17cb443fb284a94b71d)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.
`public inline void `[`ClearAllocations`](#structFRHAPI__MatchWithPlayers_1a50c98e5a3851d361a455a9093c73e106)`()` | Clears the value of Allocations_Optional and sets Allocations_IsSet to false.
`public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__MatchWithPlayers_1a9418a5bab01448dc3bcd6890ffb6188b)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__MatchWithPlayers_1a5d6077e49bd79ad2cf1cd3bec7826631)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__MatchWithPlayers_1add7bda44c62b4e801192f0bb5a944038)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__MatchWithPlayers_1af763a7dbdab3df19ac1a4afb9c28f718)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchWithPlayers_1ad51ac017b46cc7075e5f7563cbdf36ef)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchWithPlayers_1a61360a5b200d7d9c7c064ca797b555be)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__MatchWithPlayers_1a8918eb30e9dc5dea71b0fa8190a30fad)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__MatchWithPlayers_1a70ff6ce828f6f1b068bf873642c60794)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__MatchWithPlayers_1af0199003a37780a5d2932dff41b5757b)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & `[`GetSegments`](#structFRHAPI__MatchWithPlayers_1af94badb43d9e8b33c7c3de9e922fc85c)`()` | Gets the value of Segments_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & `[`GetSegments`](#structFRHAPI__MatchWithPlayers_1a6891c47a837c8c4eb48d5870cb105615)`() const` | Gets the value of Segments_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & `[`GetSegments`](#structFRHAPI__MatchWithPlayers_1a3879d74c4ad7bf149211618d934117b9)`(const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & DefaultValue) const` | Gets the value of Segments_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSegments`](#structFRHAPI__MatchWithPlayers_1a691648b0ff02e6ada5b0abbe0096c8ac)`(TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & OutValue) const` | Fills OutValue with the value of Segments_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > * `[`GetSegmentsOrNull`](#structFRHAPI__MatchWithPlayers_1a3e4fefb11372f40a24f17ed2e2c52aa6)`()` | Returns a pointer to Segments_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > * `[`GetSegmentsOrNull`](#structFRHAPI__MatchWithPlayers_1a2c494ee4dfa49f9076b536c8931013b2)`() const` | Returns a pointer to Segments_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSegments`](#structFRHAPI__MatchWithPlayers_1a67b2df9253dfc718b8729ecef991bb82)`(const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & NewValue)` | Sets the value of Segments_Optional and also sets Segments_IsSet to true.
`public inline FORCEINLINE void `[`SetSegments`](#structFRHAPI__MatchWithPlayers_1a40e9d9ad835083319816908c2b73ecc5)`(TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > && NewValue)` | Sets the value of Segments_Optional and also sets Segments_IsSet to true using move semantics.
`public inline void `[`ClearSegments`](#structFRHAPI__MatchWithPlayers_1a46b69c45f30aba090d9cb4520b83feb6)`()` | Clears the value of Segments_Optional and sets Segments_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchWithPlayers_1a8deac8d1faf5b3bb567ad930c705dd14)`()` | Gets the value of Players_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchWithPlayers_1ac25a05def0b4d826e328fe9aa1f458e2)`() const` | Gets the value of Players_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchWithPlayers_1acafffa49c937a817cfacd6bdb3bffb2c)`(const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & DefaultValue) const` | Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayers`](#structFRHAPI__MatchWithPlayers_1a9da94fc38aa3902942e31f58e02b879f)`(TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & OutValue) const` | Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchWithPlayers_1a378daf537070401d9f66cb33ad014208)`()` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchWithPlayers_1af270a07f1a8e401b01cc118c49ac0ed4)`() const` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__MatchWithPlayers_1af581929385566d586214030be9824689)`(const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__MatchWithPlayers_1a96e6e6cb3fdd0b07ac9cf04a2accb0e6)`(TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > && NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.
`public inline void `[`ClearPlayers`](#structFRHAPI__MatchWithPlayers_1adc79fb23da80d7a20ccd18c8bfe2801f)`()` | Clears the value of Players_Optional and sets Players_IsSet to false.

### Members

#### `public FDateTime `[`LastModifiedTimestamp_Optional`](#structFRHAPI__MatchWithPlayers_1a5628f211d41028e24c5c16f18245a2a1) <a id="structFRHAPI__MatchWithPlayers_1a5628f211d41028e24c5c16f18245a2a1"></a>

Timestamp of when the resource was last modified.

#### `public bool `[`LastModifiedTimestamp_IsSet`](#structFRHAPI__MatchWithPlayers_1a00acf4b4ad5e4ad5fe5869bc6c807992) <a id="structFRHAPI__MatchWithPlayers_1a00acf4b4ad5e4ad5fe5869bc6c807992"></a>

true if LastModifiedTimestamp_Optional has been set to a value

#### `public FDateTime `[`CreatedTimestamp_Optional`](#structFRHAPI__MatchWithPlayers_1ac344460c57fc5d3f0660f305fe4dbd1e) <a id="structFRHAPI__MatchWithPlayers_1ac344460c57fc5d3f0660f305fe4dbd1e"></a>

Timestamp of when the resource was created.

#### `public bool `[`CreatedTimestamp_IsSet`](#structFRHAPI__MatchWithPlayers_1afacaaac54f38f7a0a8a7b422db16c75f) <a id="structFRHAPI__MatchWithPlayers_1afacaaac54f38f7a0a8a7b422db16c75f"></a>

true if CreatedTimestamp_Optional has been set to a value

#### `public FString `[`Type_Optional`](#structFRHAPI__MatchWithPlayers_1a659236b15b05f230d2716f9be31aee67) <a id="structFRHAPI__MatchWithPlayers_1a659236b15b05f230d2716f9be31aee67"></a>

#### `public bool `[`Type_IsSet`](#structFRHAPI__MatchWithPlayers_1ace102a653b3f208eddd528df76288a74) <a id="structFRHAPI__MatchWithPlayers_1ace102a653b3f208eddd528df76288a74"></a>

true if Type_Optional has been set to a value

#### `public bool `[`Type_IsNull`](#structFRHAPI__MatchWithPlayers_1a05a1a15c61b3850fcbe6d9f9da98b647) <a id="structFRHAPI__MatchWithPlayers_1a05a1a15c61b3850fcbe6d9f9da98b647"></a>

true if Type_Optional has been explicitly set to null

#### `public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchWithPlayers_1abc3bfff7ef2994d9a411543a9d54dd31) <a id="structFRHAPI__MatchWithPlayers_1abc3bfff7ef2994d9a411543a9d54dd31"></a>

#### `public bool `[`State_IsSet`](#structFRHAPI__MatchWithPlayers_1af2add4306978accd23b3d39d3f74f79f) <a id="structFRHAPI__MatchWithPlayers_1af2add4306978accd23b3d39d3f74f79f"></a>

true if State_Optional has been set to a value

#### `public bool `[`State_IsNull`](#structFRHAPI__MatchWithPlayers_1a5256556f3747265a04d7190b6370a414) <a id="structFRHAPI__MatchWithPlayers_1a5256556f3747265a04d7190b6370a414"></a>

true if State_Optional has been explicitly set to null

#### `public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchWithPlayers_1a3befa8a77889fee718742ad18b820853) <a id="structFRHAPI__MatchWithPlayers_1a3befa8a77889fee718742ad18b820853"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchWithPlayers_1a8efa84c4e181023de46d742bca705805) <a id="structFRHAPI__MatchWithPlayers_1a8efa84c4e181023de46d742bca705805"></a>

true if StartTimestamp_Optional has been set to a value

#### `public bool `[`StartTimestamp_IsNull`](#structFRHAPI__MatchWithPlayers_1af16392ca3424f02ebd267c640ce93431) <a id="structFRHAPI__MatchWithPlayers_1af16392ca3424f02ebd267c640ce93431"></a>

true if StartTimestamp_Optional has been explicitly set to null

#### `public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchWithPlayers_1a0e48a16cc0b6ca8f0e39f4a3618c8b2f) <a id="structFRHAPI__MatchWithPlayers_1a0e48a16cc0b6ca8f0e39f4a3618c8b2f"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchWithPlayers_1ac4ad4dcf7d89b667b8d29ec956d057aa) <a id="structFRHAPI__MatchWithPlayers_1ac4ad4dcf7d89b667b8d29ec956d057aa"></a>

true if EndTimestamp_Optional has been set to a value

#### `public bool `[`EndTimestamp_IsNull`](#structFRHAPI__MatchWithPlayers_1afa5563b8c5649c522c8b1b1952faa9f6) <a id="structFRHAPI__MatchWithPlayers_1afa5563b8c5649c522c8b1b1952faa9f6"></a>

true if EndTimestamp_Optional has been explicitly set to null

#### `public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchWithPlayers_1a0ea6f1121c18c0926fec8fc7a27f460d) <a id="structFRHAPI__MatchWithPlayers_1a0ea6f1121c18c0926fec8fc7a27f460d"></a>

#### `public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchWithPlayers_1a8a265fb4e7cee101a6d1411933728606) <a id="structFRHAPI__MatchWithPlayers_1a8a265fb4e7cee101a6d1411933728606"></a>

true if DurationSeconds_Optional has been set to a value

#### `public bool `[`DurationSeconds_IsNull`](#structFRHAPI__MatchWithPlayers_1ad30e363f56aeb8d83b0a3c7251ade227) <a id="structFRHAPI__MatchWithPlayers_1ad30e363f56aeb8d83b0a3c7251ade227"></a>

true if DurationSeconds_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchWithPlayers_1a0dc2bfd9e3319685c00846a81e2a610d) <a id="structFRHAPI__MatchWithPlayers_1a0dc2bfd9e3319685c00846a81e2a610d"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchWithPlayers_1accd783d40f7eabecaad610755a628889) <a id="structFRHAPI__MatchWithPlayers_1accd783d40f7eabecaad610755a628889"></a>

true if CustomData_Optional has been set to a value

#### `public bool `[`CustomData_IsNull`](#structFRHAPI__MatchWithPlayers_1a7dd9cf43760d44bbe1d4e780fcd45df9) <a id="structFRHAPI__MatchWithPlayers_1a7dd9cf43760d44bbe1d4e780fcd45df9"></a>

true if CustomData_Optional has been explicitly set to null

#### `public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchWithPlayers_1a41a0406798245ba6e5c2534aeb6fbaf0) <a id="structFRHAPI__MatchWithPlayers_1a41a0406798245ba6e5c2534aeb6fbaf0"></a>

#### `public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchWithPlayers_1abdf507772e60249c93da5ff188346e24) <a id="structFRHAPI__MatchWithPlayers_1abdf507772e60249c93da5ff188346e24"></a>

true if CorrelationId_Optional has been set to a value

#### `public bool `[`CorrelationId_IsNull`](#structFRHAPI__MatchWithPlayers_1a8962ab4190c3372c2057d346bc1cb877) <a id="structFRHAPI__MatchWithPlayers_1a8962ab4190c3372c2057d346bc1cb877"></a>

true if CorrelationId_Optional has been explicitly set to null

#### `public TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > `[`Sessions_Optional`](#structFRHAPI__MatchWithPlayers_1a947c4070cc7d61a78ea796bf6e3f7f1f) <a id="structFRHAPI__MatchWithPlayers_1a947c4070cc7d61a78ea796bf6e3f7f1f"></a>

List of session IDs for the match.

#### `public bool `[`Sessions_IsSet`](#structFRHAPI__MatchWithPlayers_1af263e14c93f881c3616fd44afca05bb2) <a id="structFRHAPI__MatchWithPlayers_1af263e14c93f881c3616fd44afca05bb2"></a>

true if Sessions_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > `[`Instances_Optional`](#structFRHAPI__MatchWithPlayers_1a6a98fb6ddb8255f72962c405a2fea0bf) <a id="structFRHAPI__MatchWithPlayers_1a6a98fb6ddb8255f72962c405a2fea0bf"></a>

List of MatchInstances for the match.

#### `public bool `[`Instances_IsSet`](#structFRHAPI__MatchWithPlayers_1af42654ffd3f46b248f5f48b5c8cde8f9) <a id="structFRHAPI__MatchWithPlayers_1af42654ffd3f46b248f5f48b5c8cde8f9"></a>

true if Instances_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > `[`Allocations_Optional`](#structFRHAPI__MatchWithPlayers_1af8508fb5bd07eb01b53af4a6fa9eeacc) <a id="structFRHAPI__MatchWithPlayers_1af8508fb5bd07eb01b53af4a6fa9eeacc"></a>

List of allocation IDs for the match.

#### `public bool `[`Allocations_IsSet`](#structFRHAPI__MatchWithPlayers_1a634ec951054d0e4b760976ccb4a8f529) <a id="structFRHAPI__MatchWithPlayers_1a634ec951054d0e4b760976ccb4a8f529"></a>

true if Allocations_Optional has been set to a value

#### `public FString `[`MatchId_Optional`](#structFRHAPI__MatchWithPlayers_1a9145dd76d8fed562312d9b2495752290) <a id="structFRHAPI__MatchWithPlayers_1a9145dd76d8fed562312d9b2495752290"></a>

#### `public bool `[`MatchId_IsSet`](#structFRHAPI__MatchWithPlayers_1adf0a808f0238349b98515027957864fc) <a id="structFRHAPI__MatchWithPlayers_1adf0a808f0238349b98515027957864fc"></a>

true if MatchId_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > `[`Segments_Optional`](#structFRHAPI__MatchWithPlayers_1a2927cb22ad7fa59ca2ff1f99b5168a51) <a id="structFRHAPI__MatchWithPlayers_1a2927cb22ad7fa59ca2ff1f99b5168a51"></a>

List of segments for the match.

#### `public bool `[`Segments_IsSet`](#structFRHAPI__MatchWithPlayers_1adae97c7f001028002546a4949f9268a8) <a id="structFRHAPI__MatchWithPlayers_1adae97c7f001028002546a4949f9268a8"></a>

true if Segments_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > `[`Players_Optional`](#structFRHAPI__MatchWithPlayers_1ac846c80718ec521337a5d8c5c30ae55d) <a id="structFRHAPI__MatchWithPlayers_1ac846c80718ec521337a5d8c5c30ae55d"></a>

List of players in the match.

#### `public bool `[`Players_IsSet`](#structFRHAPI__MatchWithPlayers_1a89153749417713a1d74653a5cd476a60) <a id="structFRHAPI__MatchWithPlayers_1a89153749417713a1d74653a5cd476a60"></a>

true if Players_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchWithPlayers_1ad6404d79f7e010369675888d45f87e19)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchWithPlayers_1ad6404d79f7e010369675888d45f87e19"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchWithPlayers_1a8bf8433840ea543e83a0b4eb2b7bc988)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchWithPlayers_1a8bf8433840ea543e83a0b4eb2b7bc988"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a79b721068a640e9e638288d29450bf83)`()` <a id="structFRHAPI__MatchWithPlayers_1a79b721068a640e9e638288d29450bf83"></a>

Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a80d75d1e24044da0fe04c6f45646210d)`() const` <a id="structFRHAPI__MatchWithPlayers_1a80d75d1e24044da0fe04c6f45646210d"></a>

Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1ae92d398ec4113a173ad740f710721c97)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1ae92d398ec4113a173ad740f710721c97"></a>

Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a560af52c2a694b81fec074af9eb6b33f)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a560af52c2a694b81fec074af9eb6b33f"></a>

Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1abe757087dc2301ffdc43df19b9f7a4ac)`()` <a id="structFRHAPI__MatchWithPlayers_1abe757087dc2301ffdc43df19b9f7a4ac"></a>

Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a049f00b98c636b4e3a7444394eea619f)`() const` <a id="structFRHAPI__MatchWithPlayers_1a049f00b98c636b4e3a7444394eea619f"></a>

Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a9faf42752e32dbd32be077a26d9284f2)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a9faf42752e32dbd32be077a26d9284f2"></a>

Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a489798c894c2c1b0f3f3337d4b0b38f5)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a489798c894c2c1b0f3f3337d4b0b38f5"></a>

Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchWithPlayers_1a4e3e368f11262aecbd8a9a00efe86a64)`()` <a id="structFRHAPI__MatchWithPlayers_1a4e3e368f11262aecbd8a9a00efe86a64"></a>

Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.

#### `public inline FORCEINLINE FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1a6608b151ea3a070857fd46fd68f03923)`()` <a id="structFRHAPI__MatchWithPlayers_1a6608b151ea3a070857fd46fd68f03923"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1ac286cfbc8cff076038cd24b11bc7eee0)`() const` <a id="structFRHAPI__MatchWithPlayers_1ac286cfbc8cff076038cd24b11bc7eee0"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1a57957ae3c43821b4796055fc37df0ba0)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1a57957ae3c43821b4796055fc37df0ba0"></a>

Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1a7fa1818c6c6f6ef6241b48de8fff5c56)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a7fa1818c6c6f6ef6241b48de8fff5c56"></a>

Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a6accb727198f346ea743457169047843)`()` <a id="structFRHAPI__MatchWithPlayers_1a6accb727198f346ea743457169047843"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a4fc2311f4a23cee25cc19340b3950c9a)`() const` <a id="structFRHAPI__MatchWithPlayers_1a4fc2311f4a23cee25cc19340b3950c9a"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1a353add3fee8718232fc39434847afb6b)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a353add3fee8718232fc39434847afb6b"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1a04d89e9fe53942abb95ae87f0fa1dd49)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a04d89e9fe53942abb95ae87f0fa1dd49"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchWithPlayers_1a4c7b58dd67ad205c840f4799e86f3141)`()` <a id="structFRHAPI__MatchWithPlayers_1a4c7b58dd67ad205c840f4799e86f3141"></a>

Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetType`](#structFRHAPI__MatchWithPlayers_1a58cc3adeeb03e7b754006a067dbacac8)`()` <a id="structFRHAPI__MatchWithPlayers_1a58cc3adeeb03e7b754006a067dbacac8"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__MatchWithPlayers_1aacfe07a38e10818a41f51e3fc066f4cd)`() const` <a id="structFRHAPI__MatchWithPlayers_1aacfe07a38e10818a41f51e3fc066f4cd"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__MatchWithPlayers_1ae1a82e7236395afbf689c6cd5183cd01)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1ae1a82e7236395afbf689c6cd5183cd01"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetType`](#structFRHAPI__MatchWithPlayers_1adb9e4a191120508fe9aeec2a9607fe99)`(FString & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1adb9e4a191120508fe9aeec2a9607fe99"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetTypeOrNull`](#structFRHAPI__MatchWithPlayers_1ab5bf632c80729860704543973b7e03d5)`()` <a id="structFRHAPI__MatchWithPlayers_1ab5bf632c80729860704543973b7e03d5"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchWithPlayers_1a1d4e5667d9304b8d81d6c1db9fdb412e)`() const` <a id="structFRHAPI__MatchWithPlayers_1a1d4e5667d9304b8d81d6c1db9fdb412e"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__MatchWithPlayers_1a747b3bf508ece1ffa2d32b6b92aa1af4)`(const FString & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a747b3bf508ece1ffa2d32b6b92aa1af4"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__MatchWithPlayers_1af262c4ee8ce8350011faeab124826692)`(FString && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1af262c4ee8ce8350011faeab124826692"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.

#### `public inline void `[`ClearType`](#structFRHAPI__MatchWithPlayers_1a701d0e7bc85a24c0b27dc79b2d70f103)`()` <a id="structFRHAPI__MatchWithPlayers_1a701d0e7bc85a24c0b27dc79b2d70f103"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

#### `public inline FORCEINLINE void `[`SetTypeToNull`](#structFRHAPI__MatchWithPlayers_1ae49fa01264f2edf52ce79f7361573c17)`()` <a id="structFRHAPI__MatchWithPlayers_1ae49fa01264f2edf52ce79f7361573c17"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsTypeNull`](#structFRHAPI__MatchWithPlayers_1a0560981d558f1c0776b7fc903dcd910f)`() const` <a id="structFRHAPI__MatchWithPlayers_1a0560981d558f1c0776b7fc903dcd910f"></a>

Checks whether Type_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchWithPlayers_1a7f551ba3ada11e6f0c5ee69589b5464c)`()` <a id="structFRHAPI__MatchWithPlayers_1a7f551ba3ada11e6f0c5ee69589b5464c"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchWithPlayers_1a3d5b1236f8a2cc5372346d860d8e90af)`() const` <a id="structFRHAPI__MatchWithPlayers_1a3d5b1236f8a2cc5372346d860d8e90af"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchWithPlayers_1a625094b679844e06c125f88f9a26a5d6)`(const ERHAPI_MatchState & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1a625094b679844e06c125f88f9a26a5d6"></a>

Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetState`](#structFRHAPI__MatchWithPlayers_1ad6afc97e30bd17716d62ed75759b6504)`(ERHAPI_MatchState & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1ad6afc97e30bd17716d62ed75759b6504"></a>

Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchWithPlayers_1aa56db8ec0eaafb9332b56880d426a89a)`()` <a id="structFRHAPI__MatchWithPlayers_1aa56db8ec0eaafb9332b56880d426a89a"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchWithPlayers_1adb188e70763843740fd9bfa7c76eacce)`() const` <a id="structFRHAPI__MatchWithPlayers_1adb188e70763843740fd9bfa7c76eacce"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetState`](#structFRHAPI__MatchWithPlayers_1ad0cf65028c3468be8ea8883188efd358)`(const ERHAPI_MatchState & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1ad0cf65028c3468be8ea8883188efd358"></a>

Sets the value of State_Optional and also sets State_IsSet to true.

#### `public inline FORCEINLINE void `[`SetState`](#structFRHAPI__MatchWithPlayers_1ab34222c31b0b989f9f407fe502e1a8a6)`(ERHAPI_MatchState && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1ab34222c31b0b989f9f407fe502e1a8a6"></a>

Sets the value of State_Optional and also sets State_IsSet to true using move semantics.

#### `public inline void `[`ClearState`](#structFRHAPI__MatchWithPlayers_1ae5f274757061314b2f09b2013e7a6c0c)`()` <a id="structFRHAPI__MatchWithPlayers_1ae5f274757061314b2f09b2013e7a6c0c"></a>

Clears the value of State_Optional and sets State_IsSet to false.

#### `public inline FORCEINLINE void `[`SetStateToNull`](#structFRHAPI__MatchWithPlayers_1ad9d06421e1d059b2739da1730697e4d0)`()` <a id="structFRHAPI__MatchWithPlayers_1ad9d06421e1d059b2739da1730697e4d0"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStateNull`](#structFRHAPI__MatchWithPlayers_1a57eca8334e723082fc570d619e1560d5)`() const` <a id="structFRHAPI__MatchWithPlayers_1a57eca8334e723082fc570d619e1560d5"></a>

Checks whether State_Optional is set to null.

#### `public inline FORCEINLINE FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1afa03b451763b08f0c1427c33e33febea)`()` <a id="structFRHAPI__MatchWithPlayers_1afa03b451763b08f0c1427c33e33febea"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a9fd292c6143e53bb016ded3ecdcbe63b)`() const` <a id="structFRHAPI__MatchWithPlayers_1a9fd292c6143e53bb016ded3ecdcbe63b"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a232858ca7a6ef3ad02363131b95a69d6)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1a232858ca7a6ef3ad02363131b95a69d6"></a>

Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1aaac1e0faa39ad6e9a899ce4ec11f2472)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1aaac1e0faa39ad6e9a899ce4ec11f2472"></a>

Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a9d23e0b21940bb39179ba3fd54cce879)`()` <a id="structFRHAPI__MatchWithPlayers_1a9d23e0b21940bb39179ba3fd54cce879"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a4be5151a124f734e0506daf75044cea3)`() const` <a id="structFRHAPI__MatchWithPlayers_1a4be5151a124f734e0506daf75044cea3"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a4ca5326f89e833bc2d5dae375537c81e)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a4ca5326f89e833bc2d5dae375537c81e"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a934d5918d03f09457fb87b1eb834f5cd)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a934d5918d03f09457fb87b1eb834f5cd"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchWithPlayers_1a641f7901d874710f0e4871f9acd283f8)`()` <a id="structFRHAPI__MatchWithPlayers_1a641f7901d874710f0e4871f9acd283f8"></a>

Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.

#### `public inline FORCEINLINE void `[`SetStartTimestampToNull`](#structFRHAPI__MatchWithPlayers_1ae93cd4e91dcf99783e63e4b840c6f9fa)`()` <a id="structFRHAPI__MatchWithPlayers_1ae93cd4e91dcf99783e63e4b840c6f9fa"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStartTimestampNull`](#structFRHAPI__MatchWithPlayers_1a210785dd5f2485ff2913ff0da845f1ab)`() const` <a id="structFRHAPI__MatchWithPlayers_1a210785dd5f2485ff2913ff0da845f1ab"></a>

Checks whether StartTimestamp_Optional is set to null.

#### `public inline FORCEINLINE FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1a263267c48087053b3fb6625429bb786d)`()` <a id="structFRHAPI__MatchWithPlayers_1a263267c48087053b3fb6625429bb786d"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1a5e08293a28774b3ec05f622c2ba34d0d)`() const` <a id="structFRHAPI__MatchWithPlayers_1a5e08293a28774b3ec05f622c2ba34d0d"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1ab7ae21c4b3fa2fcdc5e4c5f295c05a20)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1ab7ae21c4b3fa2fcdc5e4c5f295c05a20"></a>

Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1a84bf96c0cad1679fed316f4844b20931)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a84bf96c0cad1679fed316f4844b20931"></a>

Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1aa359c2157e41e2b727c6ff41af728bbf)`()` <a id="structFRHAPI__MatchWithPlayers_1aa359c2157e41e2b727c6ff41af728bbf"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchWithPlayers_1a53294f4ebbcf85e55b402741fbea5a2e)`() const` <a id="structFRHAPI__MatchWithPlayers_1a53294f4ebbcf85e55b402741fbea5a2e"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1a085c1d0efcb859341c90c511a7b87cc0)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a085c1d0efcb859341c90c511a7b87cc0"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEndTimestamp`](#structFRHAPI__MatchWithPlayers_1a926bee9005438277c3813df62847c830)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a926bee9005438277c3813df62847c830"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchWithPlayers_1a720ccb68e29bd18392e98e6ba681f0b3)`()` <a id="structFRHAPI__MatchWithPlayers_1a720ccb68e29bd18392e98e6ba681f0b3"></a>

Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.

#### `public inline FORCEINLINE void `[`SetEndTimestampToNull`](#structFRHAPI__MatchWithPlayers_1a35e1a72cebd07ee30547571b2c635039)`()` <a id="structFRHAPI__MatchWithPlayers_1a35e1a72cebd07ee30547571b2c635039"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsEndTimestampNull`](#structFRHAPI__MatchWithPlayers_1ab91194289e599dd6ab2538a57d42ae90)`() const` <a id="structFRHAPI__MatchWithPlayers_1ab91194289e599dd6ab2538a57d42ae90"></a>

Checks whether EndTimestamp_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a6675f688d051344150501a700b45de68)`()` <a id="structFRHAPI__MatchWithPlayers_1a6675f688d051344150501a700b45de68"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1ad4e562747e220ae3c080ff5af05caca3)`() const` <a id="structFRHAPI__MatchWithPlayers_1ad4e562747e220ae3c080ff5af05caca3"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a355e26f3e7e77066fa90b753d4bcb755)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1a355e26f3e7e77066fa90b753d4bcb755"></a>

Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a3ed7c6428d397a9f00c8e9ad30a8ed31)`(int32 & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a3ed7c6428d397a9f00c8e9ad30a8ed31"></a>

Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchWithPlayers_1aa46c04a9a4d85225f7e0e44a38bc4424)`()` <a id="structFRHAPI__MatchWithPlayers_1aa46c04a9a4d85225f7e0e44a38bc4424"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchWithPlayers_1aa640f8c76307955aa51ecc6f15bf0f17)`() const` <a id="structFRHAPI__MatchWithPlayers_1aa640f8c76307955aa51ecc6f15bf0f17"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a5c8150ef35e25aa5a452a94714013111)`(const int32 & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a5c8150ef35e25aa5a452a94714013111"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchWithPlayers_1a0021b57116fe160c8087d3c280cfc086)`(int32 && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a0021b57116fe160c8087d3c280cfc086"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchWithPlayers_1aaa3f48e241f0728fc8fbe273f97b0f6b)`()` <a id="structFRHAPI__MatchWithPlayers_1aaa3f48e241f0728fc8fbe273f97b0f6b"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_DurationSeconds`](#structFRHAPI__MatchWithPlayers_1a47eebaa979e2366d45ee7c8859185de3)`()` <a id="structFRHAPI__MatchWithPlayers_1a47eebaa979e2366d45ee7c8859185de3"></a>

Returns the default value of DurationSeconds.

#### `public inline FORCEINLINE void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchWithPlayers_1abb8383a55f1efcac59e77c84f8078b43)`()` <a id="structFRHAPI__MatchWithPlayers_1abb8383a55f1efcac59e77c84f8078b43"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchWithPlayers_1a7901a6c47b2d646ef6e3a72005c83c6f)`() const` <a id="structFRHAPI__MatchWithPlayers_1a7901a6c47b2d646ef6e3a72005c83c6f"></a>

Checks whether DurationSeconds_Optional is set to null.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchWithPlayers_1a085650bae876e625cced4cd069ebcca5)`()` <a id="structFRHAPI__MatchWithPlayers_1a085650bae876e625cced4cd069ebcca5"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchWithPlayers_1af749b76035dffd912182f23982915468)`() const` <a id="structFRHAPI__MatchWithPlayers_1af749b76035dffd912182f23982915468"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchWithPlayers_1a6d9f1a53704dca8557105bcf8c78799f)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1a6d9f1a53704dca8557105bcf8c78799f"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchWithPlayers_1a52e1d9360920308c672a687abe57ebb4)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a52e1d9360920308c672a687abe57ebb4"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchWithPlayers_1aa1a688bc0cf9aff613e72166d19c073a)`()` <a id="structFRHAPI__MatchWithPlayers_1aa1a688bc0cf9aff613e72166d19c073a"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchWithPlayers_1a0a598d94c61e4ab862b168e82f8d132f)`() const` <a id="structFRHAPI__MatchWithPlayers_1a0a598d94c61e4ab862b168e82f8d132f"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchWithPlayers_1a6007e752f83598d52e11df18ed62b0e5)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a6007e752f83598d52e11df18ed62b0e5"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchWithPlayers_1aeb44ce64180020a7f06063fffa7a5332)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1aeb44ce64180020a7f06063fffa7a5332"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchWithPlayers_1a9cf848863e68de7670c31053b3062688)`()` <a id="structFRHAPI__MatchWithPlayers_1a9cf848863e68de7670c31053b3062688"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__MatchWithPlayers_1a2cb94819c3b745c82ee4f71a5614ec36)`()` <a id="structFRHAPI__MatchWithPlayers_1a2cb94819c3b745c82ee4f71a5614ec36"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__MatchWithPlayers_1a3f4cced997fa5a104c435afb08591c48)`() const` <a id="structFRHAPI__MatchWithPlayers_1a3f4cced997fa5a104c435afb08591c48"></a>

Checks whether CustomData_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a6af626f7335ac761db5f967efdbb8a14)`()` <a id="structFRHAPI__MatchWithPlayers_1a6af626f7335ac761db5f967efdbb8a14"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a611907b8ca1b8d6d4ab8c5d49012ced6)`() const` <a id="structFRHAPI__MatchWithPlayers_1a611907b8ca1b8d6d4ab8c5d49012ced6"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a0485ee22570875cb713440df71f15343)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1a0485ee22570875cb713440df71f15343"></a>

Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a41956df3541757cc54d9d0a5603b72bc)`(FString & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a41956df3541757cc54d9d0a5603b72bc"></a>

Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchWithPlayers_1a9120a6537ab68732e86ee03ca23c519c)`()` <a id="structFRHAPI__MatchWithPlayers_1a9120a6537ab68732e86ee03ca23c519c"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchWithPlayers_1ab0f9e19facf3a2e74f4a27f18605daad)`() const` <a id="structFRHAPI__MatchWithPlayers_1ab0f9e19facf3a2e74f4a27f18605daad"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__MatchWithPlayers_1a407a2e2c35a02db884f1362e5b3fff4b)`(const FString & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a407a2e2c35a02db884f1362e5b3fff4b"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__MatchWithPlayers_1ab329420e8f817206319b4aa105788a9c)`(FString && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1ab329420e8f817206319b4aa105788a9c"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.

#### `public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchWithPlayers_1a68f5a07bf08e9d29e5ab87051d4b258b)`()` <a id="structFRHAPI__MatchWithPlayers_1a68f5a07bf08e9d29e5ab87051d4b258b"></a>

Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCorrelationIdToNull`](#structFRHAPI__MatchWithPlayers_1abc9bc70bc89cc071ee2e23e2b3f7fa2d)`()` <a id="structFRHAPI__MatchWithPlayers_1abc9bc70bc89cc071ee2e23e2b3f7fa2d"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCorrelationIdNull`](#structFRHAPI__MatchWithPlayers_1a3e1a65acda0413647cab8ffa674cfa35)`() const` <a id="structFRHAPI__MatchWithPlayers_1a3e1a65acda0413647cab8ffa674cfa35"></a>

Checks whether CorrelationId_Optional is set to null.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchWithPlayers_1ad5a37a45dc1c7c04e904e93e94b1d787)`()` <a id="structFRHAPI__MatchWithPlayers_1ad5a37a45dc1c7c04e904e93e94b1d787"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchWithPlayers_1a4dc9ea9a387c44580ba0da44b99a4e41)`() const` <a id="structFRHAPI__MatchWithPlayers_1a4dc9ea9a387c44580ba0da44b99a4e41"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchWithPlayers_1af7abb3ea959a4c5a6a3315093f26f28f)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1af7abb3ea959a4c5a6a3315093f26f28f"></a>

Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSessions`](#structFRHAPI__MatchWithPlayers_1a518d5729478d77ffb55aa609536c636c)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a518d5729478d77ffb55aa609536c636c"></a>

Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchWithPlayers_1a98315c06518dde66012e4797973d4694)`()` <a id="structFRHAPI__MatchWithPlayers_1a98315c06518dde66012e4797973d4694"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchWithPlayers_1ac70125973410e6faf03296d25d674cdc)`() const` <a id="structFRHAPI__MatchWithPlayers_1ac70125973410e6faf03296d25d674cdc"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchWithPlayers_1a0a72d16538f73e063f0686ee9a1793d4)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a0a72d16538f73e063f0686ee9a1793d4"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchWithPlayers_1a93e8999000835f14d72a6a6228364079)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a93e8999000835f14d72a6a6228364079"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.

#### `public inline void `[`ClearSessions`](#structFRHAPI__MatchWithPlayers_1a5ecfbae79a24684b17957054f9d0108b)`()` <a id="structFRHAPI__MatchWithPlayers_1a5ecfbae79a24684b17957054f9d0108b"></a>

Clears the value of Sessions_Optional and sets Sessions_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchWithPlayers_1a6bca15620a5559eeb353113061173e44)`()` <a id="structFRHAPI__MatchWithPlayers_1a6bca15620a5559eeb353113061173e44"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchWithPlayers_1ab18f6c286ba1320194fa40c22d948af7)`() const` <a id="structFRHAPI__MatchWithPlayers_1ab18f6c286ba1320194fa40c22d948af7"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchWithPlayers_1adcbe40390e1da4cfe41e29f726cd5f70)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1adcbe40390e1da4cfe41e29f726cd5f70"></a>

Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstances`](#structFRHAPI__MatchWithPlayers_1a6b5e3ac1d8f7f9b3f70a3a69362ec67c)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a6b5e3ac1d8f7f9b3f70a3a69362ec67c"></a>

Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchWithPlayers_1a91b218343e88252486f6ece222e8228a)`()` <a id="structFRHAPI__MatchWithPlayers_1a91b218343e88252486f6ece222e8228a"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchWithPlayers_1a6055e79d7b1e82bb337ce200aeb07787)`() const` <a id="structFRHAPI__MatchWithPlayers_1a6055e79d7b1e82bb337ce200aeb07787"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstances`](#structFRHAPI__MatchWithPlayers_1a407c2096810359d43cef10f6015392f2)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a407c2096810359d43cef10f6015392f2"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstances`](#structFRHAPI__MatchWithPlayers_1a75208e310ed71725452cd82a226b001a)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a75208e310ed71725452cd82a226b001a"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.

#### `public inline void `[`ClearInstances`](#structFRHAPI__MatchWithPlayers_1ab9984a8c8ffce98a08718561f0d29a96)`()` <a id="structFRHAPI__MatchWithPlayers_1ab9984a8c8ffce98a08718561f0d29a96"></a>

Clears the value of Instances_Optional and sets Instances_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchWithPlayers_1a745f0135b6b87c9acca3b945d22145eb)`()` <a id="structFRHAPI__MatchWithPlayers_1a745f0135b6b87c9acca3b945d22145eb"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchWithPlayers_1a2d55feb6a92b1f4e3d9040dc6e605825)`() const` <a id="structFRHAPI__MatchWithPlayers_1a2d55feb6a92b1f4e3d9040dc6e605825"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchWithPlayers_1abbf0a13dc7f2f4fa1b278ac07a40a198)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1abbf0a13dc7f2f4fa1b278ac07a40a198"></a>

Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAllocations`](#structFRHAPI__MatchWithPlayers_1a0f15a5c5acd83e3d6a6d5f2dcddffc97)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a0f15a5c5acd83e3d6a6d5f2dcddffc97"></a>

Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchWithPlayers_1a746a11c001a4cb4d2c9ffb89a511d434)`()` <a id="structFRHAPI__MatchWithPlayers_1a746a11c001a4cb4d2c9ffb89a511d434"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchWithPlayers_1ad4b21e013d88e5b1a769b87a79945aa6)`() const` <a id="structFRHAPI__MatchWithPlayers_1ad4b21e013d88e5b1a769b87a79945aa6"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAllocations`](#structFRHAPI__MatchWithPlayers_1ae9963daeead0f48b6ecf7d3b9be45dba)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1ae9963daeead0f48b6ecf7d3b9be45dba"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAllocations`](#structFRHAPI__MatchWithPlayers_1ae00f55bca474e17cb443fb284a94b71d)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1ae00f55bca474e17cb443fb284a94b71d"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.

#### `public inline void `[`ClearAllocations`](#structFRHAPI__MatchWithPlayers_1a50c98e5a3851d361a455a9093c73e106)`()` <a id="structFRHAPI__MatchWithPlayers_1a50c98e5a3851d361a455a9093c73e106"></a>

Clears the value of Allocations_Optional and sets Allocations_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__MatchWithPlayers_1a9418a5bab01448dc3bcd6890ffb6188b)`()` <a id="structFRHAPI__MatchWithPlayers_1a9418a5bab01448dc3bcd6890ffb6188b"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__MatchWithPlayers_1a5d6077e49bd79ad2cf1cd3bec7826631)`() const` <a id="structFRHAPI__MatchWithPlayers_1a5d6077e49bd79ad2cf1cd3bec7826631"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__MatchWithPlayers_1add7bda44c62b4e801192f0bb5a944038)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1add7bda44c62b4e801192f0bb5a944038"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__MatchWithPlayers_1af763a7dbdab3df19ac1a4afb9c28f718)`(FString & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1af763a7dbdab3df19ac1a4afb9c28f718"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchWithPlayers_1ad51ac017b46cc7075e5f7563cbdf36ef)`()` <a id="structFRHAPI__MatchWithPlayers_1ad51ac017b46cc7075e5f7563cbdf36ef"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchWithPlayers_1a61360a5b200d7d9c7c064ca797b555be)`() const` <a id="structFRHAPI__MatchWithPlayers_1a61360a5b200d7d9c7c064ca797b555be"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__MatchWithPlayers_1a8918eb30e9dc5dea71b0fa8190a30fad)`(const FString & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a8918eb30e9dc5dea71b0fa8190a30fad"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__MatchWithPlayers_1a70ff6ce828f6f1b068bf873642c60794)`(FString && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a70ff6ce828f6f1b068bf873642c60794"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__MatchWithPlayers_1af0199003a37780a5d2932dff41b5757b)`()` <a id="structFRHAPI__MatchWithPlayers_1af0199003a37780a5d2932dff41b5757b"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & `[`GetSegments`](#structFRHAPI__MatchWithPlayers_1af94badb43d9e8b33c7c3de9e922fc85c)`()` <a id="structFRHAPI__MatchWithPlayers_1af94badb43d9e8b33c7c3de9e922fc85c"></a>

Gets the value of Segments_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & `[`GetSegments`](#structFRHAPI__MatchWithPlayers_1a6891c47a837c8c4eb48d5870cb105615)`() const` <a id="structFRHAPI__MatchWithPlayers_1a6891c47a837c8c4eb48d5870cb105615"></a>

Gets the value of Segments_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & `[`GetSegments`](#structFRHAPI__MatchWithPlayers_1a3879d74c4ad7bf149211618d934117b9)`(const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1a3879d74c4ad7bf149211618d934117b9"></a>

Gets the value of Segments_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSegments`](#structFRHAPI__MatchWithPlayers_1a691648b0ff02e6ada5b0abbe0096c8ac)`(TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a691648b0ff02e6ada5b0abbe0096c8ac"></a>

Fills OutValue with the value of Segments_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > * `[`GetSegmentsOrNull`](#structFRHAPI__MatchWithPlayers_1a3e4fefb11372f40a24f17ed2e2c52aa6)`()` <a id="structFRHAPI__MatchWithPlayers_1a3e4fefb11372f40a24f17ed2e2c52aa6"></a>

Returns a pointer to Segments_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > * `[`GetSegmentsOrNull`](#structFRHAPI__MatchWithPlayers_1a2c494ee4dfa49f9076b536c8931013b2)`() const` <a id="structFRHAPI__MatchWithPlayers_1a2c494ee4dfa49f9076b536c8931013b2"></a>

Returns a pointer to Segments_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSegments`](#structFRHAPI__MatchWithPlayers_1a67b2df9253dfc718b8729ecef991bb82)`(const TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a67b2df9253dfc718b8729ecef991bb82"></a>

Sets the value of Segments_Optional and also sets Segments_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSegments`](#structFRHAPI__MatchWithPlayers_1a40e9d9ad835083319816908c2b73ecc5)`(TArray< `[`FRHAPI_MatchSegmentWithPlayers`](RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` > && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a40e9d9ad835083319816908c2b73ecc5"></a>

Sets the value of Segments_Optional and also sets Segments_IsSet to true using move semantics.

#### `public inline void `[`ClearSegments`](#structFRHAPI__MatchWithPlayers_1a46b69c45f30aba090d9cb4520b83feb6)`()` <a id="structFRHAPI__MatchWithPlayers_1a46b69c45f30aba090d9cb4520b83feb6"></a>

Clears the value of Segments_Optional and sets Segments_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchWithPlayers_1a8deac8d1faf5b3bb567ad930c705dd14)`()` <a id="structFRHAPI__MatchWithPlayers_1a8deac8d1faf5b3bb567ad930c705dd14"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchWithPlayers_1ac25a05def0b4d826e328fe9aa1f458e2)`() const` <a id="structFRHAPI__MatchWithPlayers_1ac25a05def0b4d826e328fe9aa1f458e2"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchWithPlayers_1acafffa49c937a817cfacd6bdb3bffb2c)`(const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & DefaultValue) const` <a id="structFRHAPI__MatchWithPlayers_1acafffa49c937a817cfacd6bdb3bffb2c"></a>

Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayers`](#structFRHAPI__MatchWithPlayers_1a9da94fc38aa3902942e31f58e02b879f)`(TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & OutValue) const` <a id="structFRHAPI__MatchWithPlayers_1a9da94fc38aa3902942e31f58e02b879f"></a>

Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchWithPlayers_1a378daf537070401d9f66cb33ad014208)`()` <a id="structFRHAPI__MatchWithPlayers_1a378daf537070401d9f66cb33ad014208"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchWithPlayers_1af270a07f1a8e401b01cc118c49ac0ed4)`() const` <a id="structFRHAPI__MatchWithPlayers_1af270a07f1a8e401b01cc118c49ac0ed4"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__MatchWithPlayers_1af581929385566d586214030be9824689)`(const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & NewValue)` <a id="structFRHAPI__MatchWithPlayers_1af581929385566d586214030be9824689"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__MatchWithPlayers_1a96e6e6cb3fdd0b07ac9cf04a2accb0e6)`(TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > && NewValue)` <a id="structFRHAPI__MatchWithPlayers_1a96e6e6cb3fdd0b07ac9cf04a2accb0e6"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayers`](#structFRHAPI__MatchWithPlayers_1adc79fb23da80d7a20ccd18c8bfe2801f)`()` <a id="structFRHAPI__MatchWithPlayers_1adc79fb23da80d7a20ccd18c8bfe2801f"></a>

Clears the value of Players_Optional and sets Players_IsSet to false.

