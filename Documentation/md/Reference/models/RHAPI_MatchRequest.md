---
title: RHAPI_MatchRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchRequest`](#structFRHAPI__MatchRequest) | 

## struct `FRHAPI_MatchRequest` <a id="structFRHAPI__MatchRequest"></a>

```
struct FRHAPI_MatchRequest
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Type_Optional`](#structFRHAPI__MatchRequest_1ab839a817dc40352cb3c0ca73c61d5e02) | 
`public bool `[`Type_IsSet`](#structFRHAPI__MatchRequest_1abe5d4f87abc45267ff46095e574ac1de) | true if Type_Optional has been set to a value
`public bool `[`Type_IsNull`](#structFRHAPI__MatchRequest_1ab1685699625578b1413addf8f2787a8d) | true if Type_Optional has been explicitly set to null
`public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchRequest_1a079c10a2192458369fe50df6ed301801) | 
`public bool `[`State_IsSet`](#structFRHAPI__MatchRequest_1ab27939d169cf0275976a1c881096e05e) | true if State_Optional has been set to a value
`public bool `[`State_IsNull`](#structFRHAPI__MatchRequest_1a97c4d3da732beb89dcceff16a64463e0) | true if State_Optional has been explicitly set to null
`public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchRequest_1a2d24a6a6734be57fb7fe4af5f0ddc658) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchRequest_1a937088d54918ba6a58d8e46ba0492dac) | true if StartTimestamp_Optional has been set to a value
`public bool `[`StartTimestamp_IsNull`](#structFRHAPI__MatchRequest_1a3d23f0ba3438243df34452cc930ca429) | true if StartTimestamp_Optional has been explicitly set to null
`public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchRequest_1aecd9bf7e987b51862ced5c8d2a7f0b9d) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchRequest_1aec3e6dc2e0e7bc5a469a351aef465142) | true if EndTimestamp_Optional has been set to a value
`public bool `[`EndTimestamp_IsNull`](#structFRHAPI__MatchRequest_1aef18a4ea46a0d5bc69cbe683775a98ea) | true if EndTimestamp_Optional has been explicitly set to null
`public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchRequest_1ab5622d8346dbbec062896e30c0b29503) | 
`public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchRequest_1a2e18fe31cac09b08075979ac98a498d3) | true if DurationSeconds_Optional has been set to a value
`public bool `[`DurationSeconds_IsNull`](#structFRHAPI__MatchRequest_1a0f83b12e120beba2b56da60800809ef8) | true if DurationSeconds_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchRequest_1a971fab495719d05d3e2b561db84c5e96) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchRequest_1a26a37a1864d703d013953dc553e91946) | true if CustomData_Optional has been set to a value
`public bool `[`CustomData_IsNull`](#structFRHAPI__MatchRequest_1a5008d5eb04a64c63fff6a8a9efa030c4) | true if CustomData_Optional has been explicitly set to null
`public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchRequest_1a7694e1d2d7f1bbdbd5bd63bd6d567088) | 
`public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchRequest_1a49330730e6494a36d3e8763770938e65) | true if CorrelationId_Optional has been set to a value
`public bool `[`CorrelationId_IsNull`](#structFRHAPI__MatchRequest_1a8222f824cbd582674136119e1150a797) | true if CorrelationId_Optional has been explicitly set to null
`public TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > `[`Sessions_Optional`](#structFRHAPI__MatchRequest_1ad9a2c0cf7acc5bd02df2e041c674acb3) | List of session IDs for the match.
`public bool `[`Sessions_IsSet`](#structFRHAPI__MatchRequest_1a77d5e6f5347b25d8860e90bd6949e1be) | true if Sessions_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > `[`Instances_Optional`](#structFRHAPI__MatchRequest_1a743d81929ccb16b1e331b1340b442dd8) | List of MatchInstances for the match.
`public bool `[`Instances_IsSet`](#structFRHAPI__MatchRequest_1aa46141072f5e845418ce4da0cd1403f2) | true if Instances_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > `[`Allocations_Optional`](#structFRHAPI__MatchRequest_1adc3909cdd7378f7951371fae64d3ff6a) | List of allocation IDs for the match.
`public bool `[`Allocations_IsSet`](#structFRHAPI__MatchRequest_1acd546371928307adf3beddcfbb2efb61) | true if Allocations_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > `[`Players_Optional`](#structFRHAPI__MatchRequest_1a99281a383a8f16fd36c00efcb701613f) | List of players in the match.
`public bool `[`Players_IsSet`](#structFRHAPI__MatchRequest_1adc05ddd9cc82a1d8176d4e49af661f21) | true if Players_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > `[`Segments_Optional`](#structFRHAPI__MatchRequest_1a753f5cdfee938552acc26905798d3a4f) | List of segments for the match.
`public bool `[`Segments_IsSet`](#structFRHAPI__MatchRequest_1a8e1f8809e17f337de345f9866bed6ec1) | true if Segments_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchRequest_1a1f939a058e9c9ea7ea523fcdcae52933)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchRequest_1a334499f4e4b5473c56812031d5d222be)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetType`](#structFRHAPI__MatchRequest_1a478c0f7a4261d6d27b9b8989a563d95c)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__MatchRequest_1a7df64679f80a7e23b6b3d0f729b56c28)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__MatchRequest_1a5c392595cd099f3ad717aeec4284ebb9)`(const FString & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetType`](#structFRHAPI__MatchRequest_1acbb1178e2c3e39dfbb6fd4aa3fda8e68)`(FString & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetTypeOrNull`](#structFRHAPI__MatchRequest_1ab799f2bf246d31826ad81058bc867db8)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchRequest_1a54c7ca6e6fb5d5c9d440f343ab9e1bdb)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__MatchRequest_1ab9cd964811c3f18141f301f0fb2bae73)`(const FString & NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__MatchRequest_1a2de02d8dd78cc25c41b8ce1b77289c89)`(FString && NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.
`public inline void `[`ClearType`](#structFRHAPI__MatchRequest_1af9c61838ea0b0186c0f1bd1754604ab4)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline FORCEINLINE void `[`SetTypeToNull`](#structFRHAPI__MatchRequest_1a63190f5bd3f6cd6ed04de107e003f66b)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsTypeNull`](#structFRHAPI__MatchRequest_1abaa571bbaaa95c5435d81704550b399e)`() const` | Checks whether Type_Optional is set to null.
`public inline FORCEINLINE ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchRequest_1a7da141fdf6875fc3a04edb639543193c)`()` | Gets the value of State_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchRequest_1a71aaa8f30af345fbad641b311792bb90)`() const` | Gets the value of State_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchRequest_1a828898e6028538eb9d2db436ba41a705)`(const ERHAPI_MatchState & DefaultValue) const` | Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetState`](#structFRHAPI__MatchRequest_1ac43c3155e690b52c6a3d1ebe60ed8fad)`(ERHAPI_MatchState & OutValue) const` | Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchRequest_1a3272a8c8dbce6fd9e96a5f255e78de69)`()` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchRequest_1a6afc5d1711f5b03eb5dc172c2aa899a9)`() const` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetState`](#structFRHAPI__MatchRequest_1adc3f43a90901bb5474f4e38251b353e1)`(const ERHAPI_MatchState & NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true.
`public inline FORCEINLINE void `[`SetState`](#structFRHAPI__MatchRequest_1aaea7841c31f8923e2d6cd763b1f9eece)`(ERHAPI_MatchState && NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true using move semantics.
`public inline void `[`ClearState`](#structFRHAPI__MatchRequest_1a9da60b903356716a501e0925f1d4685b)`()` | Clears the value of State_Optional and sets State_IsSet to false.
`public inline FORCEINLINE void `[`SetStateToNull`](#structFRHAPI__MatchRequest_1a32e42f9ff5ad6b1e76038bc4080317f3)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStateNull`](#structFRHAPI__MatchRequest_1a7be15d732e8b8b29cb77ebb2eaa18295)`() const` | Checks whether State_Optional is set to null.
`public inline FORCEINLINE FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchRequest_1ab0c9c1a304513e3333e598c9aa34cd77)`()` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchRequest_1a3579e3383fcf6be0f3d679dd3331c56d)`() const` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchRequest_1ae05c0f0fef26e119983f08da56e94250)`(const FDateTime & DefaultValue) const` | Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStartTimestamp`](#structFRHAPI__MatchRequest_1a9f21a950219537b9a5d1a104b783efdb)`(FDateTime & OutValue) const` | Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchRequest_1a8cd45c9043d6ca52c2c60cb1fb378051)`()` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchRequest_1a71bcf4304d5f4e455a5b20e36aaec101)`() const` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStartTimestamp`](#structFRHAPI__MatchRequest_1ae2d4ae9ef7a4fe7a2fd25ff8dc23072e)`(const FDateTime & NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetStartTimestamp`](#structFRHAPI__MatchRequest_1a9e4549ad66ba864c2beb530aa64c885c)`(FDateTime && NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchRequest_1aa739e4d9ed24db135bf6b2e7d6a430a9)`()` | Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.
`public inline FORCEINLINE void `[`SetStartTimestampToNull`](#structFRHAPI__MatchRequest_1a47feb05fad7e791b974338959cb9ce4a)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStartTimestampNull`](#structFRHAPI__MatchRequest_1a8b1fa6b4d25e7b67cceb3979d3def029)`() const` | Checks whether StartTimestamp_Optional is set to null.
`public inline FORCEINLINE FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchRequest_1a3b8a3c5b19e68237b7f4f4697efe5c15)`()` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchRequest_1a9039c8d220ab6d3572fa43f813647e66)`() const` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchRequest_1ab4dd659310b65f18671522b75724b4a1)`(const FDateTime & DefaultValue) const` | Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEndTimestamp`](#structFRHAPI__MatchRequest_1a3855f0b60adccf7d2e758fca3cc8ce2d)`(FDateTime & OutValue) const` | Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchRequest_1a0ead3d02c560980bc8c430209a26d287)`()` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchRequest_1a2c3e1d0eb40b356f9ec869f4ed448d6b)`() const` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEndTimestamp`](#structFRHAPI__MatchRequest_1ae2ae9ad837601dd1cb9c633da2383da9)`(const FDateTime & NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetEndTimestamp`](#structFRHAPI__MatchRequest_1a7a45ffa4aa6123ce606f176e11ca1a62)`(FDateTime && NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchRequest_1a8e7d61358ad58a7ad43f73e4c25d0d21)`()` | Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.
`public inline FORCEINLINE void `[`SetEndTimestampToNull`](#structFRHAPI__MatchRequest_1aa59db4687e23fe8516b56edc379e0e4b)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsEndTimestampNull`](#structFRHAPI__MatchRequest_1a59f20a6331cb8064d716316e0a004634)`() const` | Checks whether EndTimestamp_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchRequest_1aed028dffbaeac3254e57c5345640e279)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchRequest_1a5efc01caab2a1a42823fc1069e417389)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchRequest_1a193c979bb0d8daea03ded3d4312f8555)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDurationSeconds`](#structFRHAPI__MatchRequest_1a0af26312f41215c803a682fbca7853f5)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchRequest_1a5be3a94be4159dc30ed855d4feb80d15)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchRequest_1a371ccebd16c42edc4af09aa80fb4535b)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchRequest_1ae1d032815ab1bc142b7b30556da528a4)`(const int32 & NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchRequest_1acca89d6efee5cfa29b9fedccda10b3fa)`(int32 && NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchRequest_1a4531d9f94c88c0d046cc0666758574ef)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_DurationSeconds`](#structFRHAPI__MatchRequest_1aa9e364c8664a02d37afd73514b49848e)`()` | Returns the default value of DurationSeconds.
`public inline FORCEINLINE void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchRequest_1a3fd8e2f87c5d07685d81c4e3d06be8cd)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchRequest_1a11a95784a6e51f8887c12934a7bc70c1)`() const` | Checks whether DurationSeconds_Optional is set to null.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchRequest_1ac5f47330eea414a02151434f08369701)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchRequest_1a92c1454c8c5aaa02599f5e9748ca408e)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchRequest_1ae0a854aacefa81032e2966b82ec2f9cd)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchRequest_1afa6bc230f721351a3bbff5b860f46173)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchRequest_1a6eb60dab493e4e5b18d5750290f9c701)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchRequest_1a5a0a86619db0a74e4f68fc4a35d2c664)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchRequest_1abbf698cacf9d3e0b583954fc794d7b3b)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchRequest_1ae7ba1f0b5ba3d4b1356ade0421104036)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchRequest_1ae7113f8974c51027f09948d67cdcffba)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__MatchRequest_1a692c60e8caf97c750d363da5840a6ad9)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__MatchRequest_1a00be3b66f1bf675d2ad4166197f68c4e)`() const` | Checks whether CustomData_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetCorrelationId`](#structFRHAPI__MatchRequest_1a9bcd12dfdc525b1417bfdfa0424b1db2)`()` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__MatchRequest_1af479a33dbb091f1a5c3a51c8a02d8c76)`() const` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__MatchRequest_1a6d6f345ff13dc2a98ec3985866d23137)`(const FString & DefaultValue) const` | Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCorrelationId`](#structFRHAPI__MatchRequest_1abe99c2440e1eadae2f67f74376c06027)`(FString & OutValue) const` | Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchRequest_1acbeca380cf6e3e4042d634d596f5b190)`()` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchRequest_1a2285460c8b57316a47cf0c0fa6a5c115)`() const` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__MatchRequest_1a33077b76f4be90a35347abd2f2a5e1fe)`(const FString & NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.
`public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__MatchRequest_1aec296432c687581971fccf5aa1599855)`(FString && NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.
`public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchRequest_1a48222b428b83d6591288b93689013771)`()` | Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.
`public inline FORCEINLINE void `[`SetCorrelationIdToNull`](#structFRHAPI__MatchRequest_1a60e73baddfa33212fbd404c1e6c079a9)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCorrelationIdNull`](#structFRHAPI__MatchRequest_1a83cf34c843f0792ef4fd759172b11481)`() const` | Checks whether CorrelationId_Optional is set to null.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchRequest_1a53cdf5618ad1a91f725133e1da6e1d27)`()` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchRequest_1a1f3de6e591c9c8ecff830ed223b23346)`() const` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchRequest_1a3d0d6b19fa3c411a1ae92bb0d60ef2e4)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` | Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSessions`](#structFRHAPI__MatchRequest_1a5025a304e37b2319e295f94add28b9b8)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` | Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchRequest_1a835741ff97d62eed3dbc09a1c8b0e160)`()` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchRequest_1a697f7ac9ab54cfa1ae1d1243a99f801f)`() const` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchRequest_1ab67ac27c51cdd64de5c3c00293f23efc)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.
`public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchRequest_1a4dd467191188494a0f548a22fc238c20)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.
`public inline void `[`ClearSessions`](#structFRHAPI__MatchRequest_1a2d5c977d4b55a58006f774fd8ab10b90)`()` | Clears the value of Sessions_Optional and sets Sessions_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchRequest_1adf7b20498bf7de6a036707355122bee8)`()` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchRequest_1ad592b59fba6d94a7cf3952fa96272cff)`() const` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchRequest_1adc38491194eadb61a5d0b3e8d6d550a4)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` | Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstances`](#structFRHAPI__MatchRequest_1aaed2ae5636da3a919811b4ea57dea965)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` | Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchRequest_1a74b995eb8f5a4efe03b6bc5e35f898ef)`()` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchRequest_1a1a254bf1f395d0cd0182c468886d2517)`() const` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstances`](#structFRHAPI__MatchRequest_1a0a3b8237d9549fdcd590145fcd17b8a8)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true.
`public inline FORCEINLINE void `[`SetInstances`](#structFRHAPI__MatchRequest_1a4a16f449afec941dfa67dd74420db2f8)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.
`public inline void `[`ClearInstances`](#structFRHAPI__MatchRequest_1a0019195267b0da04fbe8bf9e97d47de9)`()` | Clears the value of Instances_Optional and sets Instances_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchRequest_1adafcc158f87481c86fb308d74449ed9c)`()` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchRequest_1a03d693845e79dc5bc8ee9896ca7dc04e)`() const` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchRequest_1a379383f2fd678176b8580e07de698798)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` | Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAllocations`](#structFRHAPI__MatchRequest_1a48251cd8bbd93cc19afa7060da74b38a)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` | Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchRequest_1a4a29213016b57a2bb16b24597bcd0773)`()` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchRequest_1a261d55a5593ad539199cf596b8b5d7e0)`() const` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAllocations`](#structFRHAPI__MatchRequest_1a40a25de115fb47c9670f90eb42703a8a)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.
`public inline FORCEINLINE void `[`SetAllocations`](#structFRHAPI__MatchRequest_1a157911ccf0e98de71ad809b29a11a5ab)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.
`public inline void `[`ClearAllocations`](#structFRHAPI__MatchRequest_1a689d90c17bde84c3da9d5a528d3ad571)`()` | Clears the value of Allocations_Optional and sets Allocations_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchRequest_1af7fbac5ca909050a4c89b3eb609be855)`()` | Gets the value of Players_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchRequest_1a29f1d7554ee2fedcaa16bb94d4654f85)`() const` | Gets the value of Players_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchRequest_1a095c18f69a0214ec9d9e0ddfba4c73dc)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & DefaultValue) const` | Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayers`](#structFRHAPI__MatchRequest_1a7a97bb1e3aad08e41cae99f9a570aa9f)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & OutValue) const` | Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchRequest_1af76f5821a0bf8cb2e2ee0c513aa49826)`()` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchRequest_1a89f7f114dc65a1f46a7dcb30fcdd5c28)`() const` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__MatchRequest_1ab250a1018e7038fb4f27a7d1fdfb6217)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__MatchRequest_1a1b6c48ab90d496ec94e4f3ce0bbcdf00)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > && NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.
`public inline void `[`ClearPlayers`](#structFRHAPI__MatchRequest_1a474a625b191c13b7cd9a95430f5a36d0)`()` | Clears the value of Players_Optional and sets Players_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & `[`GetSegments`](#structFRHAPI__MatchRequest_1a73943bd3e31e193a30711edbcec03aff)`()` | Gets the value of Segments_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & `[`GetSegments`](#structFRHAPI__MatchRequest_1a0e9b4b5ce05d078748c95f740ddfdbc0)`() const` | Gets the value of Segments_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & `[`GetSegments`](#structFRHAPI__MatchRequest_1a13dbb6431db029be724fcbf6db81b752)`(const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & DefaultValue) const` | Gets the value of Segments_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSegments`](#structFRHAPI__MatchRequest_1a36231094e128600f6ed026b15ecc9d24)`(TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & OutValue) const` | Fills OutValue with the value of Segments_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > * `[`GetSegmentsOrNull`](#structFRHAPI__MatchRequest_1a78e3648856a6061c24d812df45554dd6)`()` | Returns a pointer to Segments_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > * `[`GetSegmentsOrNull`](#structFRHAPI__MatchRequest_1a6089326a06eae7fa6e346449b3e33657)`() const` | Returns a pointer to Segments_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSegments`](#structFRHAPI__MatchRequest_1a57c697facfc87e1ab7d95d90f7238b4a)`(const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & NewValue)` | Sets the value of Segments_Optional and also sets Segments_IsSet to true.
`public inline FORCEINLINE void `[`SetSegments`](#structFRHAPI__MatchRequest_1acf85f218f6e65392d045966b316647ec)`(TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > && NewValue)` | Sets the value of Segments_Optional and also sets Segments_IsSet to true using move semantics.
`public inline void `[`ClearSegments`](#structFRHAPI__MatchRequest_1a052cf015350c63d2e2d2c3f2df2633df)`()` | Clears the value of Segments_Optional and sets Segments_IsSet to false.

### Members

#### `public FString `[`Type_Optional`](#structFRHAPI__MatchRequest_1ab839a817dc40352cb3c0ca73c61d5e02) <a id="structFRHAPI__MatchRequest_1ab839a817dc40352cb3c0ca73c61d5e02"></a>

#### `public bool `[`Type_IsSet`](#structFRHAPI__MatchRequest_1abe5d4f87abc45267ff46095e574ac1de) <a id="structFRHAPI__MatchRequest_1abe5d4f87abc45267ff46095e574ac1de"></a>

true if Type_Optional has been set to a value

#### `public bool `[`Type_IsNull`](#structFRHAPI__MatchRequest_1ab1685699625578b1413addf8f2787a8d) <a id="structFRHAPI__MatchRequest_1ab1685699625578b1413addf8f2787a8d"></a>

true if Type_Optional has been explicitly set to null

#### `public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchRequest_1a079c10a2192458369fe50df6ed301801) <a id="structFRHAPI__MatchRequest_1a079c10a2192458369fe50df6ed301801"></a>

#### `public bool `[`State_IsSet`](#structFRHAPI__MatchRequest_1ab27939d169cf0275976a1c881096e05e) <a id="structFRHAPI__MatchRequest_1ab27939d169cf0275976a1c881096e05e"></a>

true if State_Optional has been set to a value

#### `public bool `[`State_IsNull`](#structFRHAPI__MatchRequest_1a97c4d3da732beb89dcceff16a64463e0) <a id="structFRHAPI__MatchRequest_1a97c4d3da732beb89dcceff16a64463e0"></a>

true if State_Optional has been explicitly set to null

#### `public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchRequest_1a2d24a6a6734be57fb7fe4af5f0ddc658) <a id="structFRHAPI__MatchRequest_1a2d24a6a6734be57fb7fe4af5f0ddc658"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchRequest_1a937088d54918ba6a58d8e46ba0492dac) <a id="structFRHAPI__MatchRequest_1a937088d54918ba6a58d8e46ba0492dac"></a>

true if StartTimestamp_Optional has been set to a value

#### `public bool `[`StartTimestamp_IsNull`](#structFRHAPI__MatchRequest_1a3d23f0ba3438243df34452cc930ca429) <a id="structFRHAPI__MatchRequest_1a3d23f0ba3438243df34452cc930ca429"></a>

true if StartTimestamp_Optional has been explicitly set to null

#### `public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchRequest_1aecd9bf7e987b51862ced5c8d2a7f0b9d) <a id="structFRHAPI__MatchRequest_1aecd9bf7e987b51862ced5c8d2a7f0b9d"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchRequest_1aec3e6dc2e0e7bc5a469a351aef465142) <a id="structFRHAPI__MatchRequest_1aec3e6dc2e0e7bc5a469a351aef465142"></a>

true if EndTimestamp_Optional has been set to a value

#### `public bool `[`EndTimestamp_IsNull`](#structFRHAPI__MatchRequest_1aef18a4ea46a0d5bc69cbe683775a98ea) <a id="structFRHAPI__MatchRequest_1aef18a4ea46a0d5bc69cbe683775a98ea"></a>

true if EndTimestamp_Optional has been explicitly set to null

#### `public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchRequest_1ab5622d8346dbbec062896e30c0b29503) <a id="structFRHAPI__MatchRequest_1ab5622d8346dbbec062896e30c0b29503"></a>

#### `public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchRequest_1a2e18fe31cac09b08075979ac98a498d3) <a id="structFRHAPI__MatchRequest_1a2e18fe31cac09b08075979ac98a498d3"></a>

true if DurationSeconds_Optional has been set to a value

#### `public bool `[`DurationSeconds_IsNull`](#structFRHAPI__MatchRequest_1a0f83b12e120beba2b56da60800809ef8) <a id="structFRHAPI__MatchRequest_1a0f83b12e120beba2b56da60800809ef8"></a>

true if DurationSeconds_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchRequest_1a971fab495719d05d3e2b561db84c5e96) <a id="structFRHAPI__MatchRequest_1a971fab495719d05d3e2b561db84c5e96"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchRequest_1a26a37a1864d703d013953dc553e91946) <a id="structFRHAPI__MatchRequest_1a26a37a1864d703d013953dc553e91946"></a>

true if CustomData_Optional has been set to a value

#### `public bool `[`CustomData_IsNull`](#structFRHAPI__MatchRequest_1a5008d5eb04a64c63fff6a8a9efa030c4) <a id="structFRHAPI__MatchRequest_1a5008d5eb04a64c63fff6a8a9efa030c4"></a>

true if CustomData_Optional has been explicitly set to null

#### `public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchRequest_1a7694e1d2d7f1bbdbd5bd63bd6d567088) <a id="structFRHAPI__MatchRequest_1a7694e1d2d7f1bbdbd5bd63bd6d567088"></a>

#### `public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchRequest_1a49330730e6494a36d3e8763770938e65) <a id="structFRHAPI__MatchRequest_1a49330730e6494a36d3e8763770938e65"></a>

true if CorrelationId_Optional has been set to a value

#### `public bool `[`CorrelationId_IsNull`](#structFRHAPI__MatchRequest_1a8222f824cbd582674136119e1150a797) <a id="structFRHAPI__MatchRequest_1a8222f824cbd582674136119e1150a797"></a>

true if CorrelationId_Optional has been explicitly set to null

#### `public TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > `[`Sessions_Optional`](#structFRHAPI__MatchRequest_1ad9a2c0cf7acc5bd02df2e041c674acb3) <a id="structFRHAPI__MatchRequest_1ad9a2c0cf7acc5bd02df2e041c674acb3"></a>

List of session IDs for the match.

#### `public bool `[`Sessions_IsSet`](#structFRHAPI__MatchRequest_1a77d5e6f5347b25d8860e90bd6949e1be) <a id="structFRHAPI__MatchRequest_1a77d5e6f5347b25d8860e90bd6949e1be"></a>

true if Sessions_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > `[`Instances_Optional`](#structFRHAPI__MatchRequest_1a743d81929ccb16b1e331b1340b442dd8) <a id="structFRHAPI__MatchRequest_1a743d81929ccb16b1e331b1340b442dd8"></a>

List of MatchInstances for the match.

#### `public bool `[`Instances_IsSet`](#structFRHAPI__MatchRequest_1aa46141072f5e845418ce4da0cd1403f2) <a id="structFRHAPI__MatchRequest_1aa46141072f5e845418ce4da0cd1403f2"></a>

true if Instances_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > `[`Allocations_Optional`](#structFRHAPI__MatchRequest_1adc3909cdd7378f7951371fae64d3ff6a) <a id="structFRHAPI__MatchRequest_1adc3909cdd7378f7951371fae64d3ff6a"></a>

List of allocation IDs for the match.

#### `public bool `[`Allocations_IsSet`](#structFRHAPI__MatchRequest_1acd546371928307adf3beddcfbb2efb61) <a id="structFRHAPI__MatchRequest_1acd546371928307adf3beddcfbb2efb61"></a>

true if Allocations_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > `[`Players_Optional`](#structFRHAPI__MatchRequest_1a99281a383a8f16fd36c00efcb701613f) <a id="structFRHAPI__MatchRequest_1a99281a383a8f16fd36c00efcb701613f"></a>

List of players in the match.

#### `public bool `[`Players_IsSet`](#structFRHAPI__MatchRequest_1adc05ddd9cc82a1d8176d4e49af661f21) <a id="structFRHAPI__MatchRequest_1adc05ddd9cc82a1d8176d4e49af661f21"></a>

true if Players_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > `[`Segments_Optional`](#structFRHAPI__MatchRequest_1a753f5cdfee938552acc26905798d3a4f) <a id="structFRHAPI__MatchRequest_1a753f5cdfee938552acc26905798d3a4f"></a>

List of segments for the match.

#### `public bool `[`Segments_IsSet`](#structFRHAPI__MatchRequest_1a8e1f8809e17f337de345f9866bed6ec1) <a id="structFRHAPI__MatchRequest_1a8e1f8809e17f337de345f9866bed6ec1"></a>

true if Segments_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchRequest_1a1f939a058e9c9ea7ea523fcdcae52933)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchRequest_1a1f939a058e9c9ea7ea523fcdcae52933"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchRequest_1a334499f4e4b5473c56812031d5d222be)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchRequest_1a334499f4e4b5473c56812031d5d222be"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetType`](#structFRHAPI__MatchRequest_1a478c0f7a4261d6d27b9b8989a563d95c)`()` <a id="structFRHAPI__MatchRequest_1a478c0f7a4261d6d27b9b8989a563d95c"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__MatchRequest_1a7df64679f80a7e23b6b3d0f729b56c28)`() const` <a id="structFRHAPI__MatchRequest_1a7df64679f80a7e23b6b3d0f729b56c28"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__MatchRequest_1a5c392595cd099f3ad717aeec4284ebb9)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1a5c392595cd099f3ad717aeec4284ebb9"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetType`](#structFRHAPI__MatchRequest_1acbb1178e2c3e39dfbb6fd4aa3fda8e68)`(FString & OutValue) const` <a id="structFRHAPI__MatchRequest_1acbb1178e2c3e39dfbb6fd4aa3fda8e68"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetTypeOrNull`](#structFRHAPI__MatchRequest_1ab799f2bf246d31826ad81058bc867db8)`()` <a id="structFRHAPI__MatchRequest_1ab799f2bf246d31826ad81058bc867db8"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchRequest_1a54c7ca6e6fb5d5c9d440f343ab9e1bdb)`() const` <a id="structFRHAPI__MatchRequest_1a54c7ca6e6fb5d5c9d440f343ab9e1bdb"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__MatchRequest_1ab9cd964811c3f18141f301f0fb2bae73)`(const FString & NewValue)` <a id="structFRHAPI__MatchRequest_1ab9cd964811c3f18141f301f0fb2bae73"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__MatchRequest_1a2de02d8dd78cc25c41b8ce1b77289c89)`(FString && NewValue)` <a id="structFRHAPI__MatchRequest_1a2de02d8dd78cc25c41b8ce1b77289c89"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.

#### `public inline void `[`ClearType`](#structFRHAPI__MatchRequest_1af9c61838ea0b0186c0f1bd1754604ab4)`()` <a id="structFRHAPI__MatchRequest_1af9c61838ea0b0186c0f1bd1754604ab4"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

#### `public inline FORCEINLINE void `[`SetTypeToNull`](#structFRHAPI__MatchRequest_1a63190f5bd3f6cd6ed04de107e003f66b)`()` <a id="structFRHAPI__MatchRequest_1a63190f5bd3f6cd6ed04de107e003f66b"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsTypeNull`](#structFRHAPI__MatchRequest_1abaa571bbaaa95c5435d81704550b399e)`() const` <a id="structFRHAPI__MatchRequest_1abaa571bbaaa95c5435d81704550b399e"></a>

Checks whether Type_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchRequest_1a7da141fdf6875fc3a04edb639543193c)`()` <a id="structFRHAPI__MatchRequest_1a7da141fdf6875fc3a04edb639543193c"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchRequest_1a71aaa8f30af345fbad641b311792bb90)`() const` <a id="structFRHAPI__MatchRequest_1a71aaa8f30af345fbad641b311792bb90"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchRequest_1a828898e6028538eb9d2db436ba41a705)`(const ERHAPI_MatchState & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1a828898e6028538eb9d2db436ba41a705"></a>

Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetState`](#structFRHAPI__MatchRequest_1ac43c3155e690b52c6a3d1ebe60ed8fad)`(ERHAPI_MatchState & OutValue) const` <a id="structFRHAPI__MatchRequest_1ac43c3155e690b52c6a3d1ebe60ed8fad"></a>

Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchRequest_1a3272a8c8dbce6fd9e96a5f255e78de69)`()` <a id="structFRHAPI__MatchRequest_1a3272a8c8dbce6fd9e96a5f255e78de69"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchRequest_1a6afc5d1711f5b03eb5dc172c2aa899a9)`() const` <a id="structFRHAPI__MatchRequest_1a6afc5d1711f5b03eb5dc172c2aa899a9"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetState`](#structFRHAPI__MatchRequest_1adc3f43a90901bb5474f4e38251b353e1)`(const ERHAPI_MatchState & NewValue)` <a id="structFRHAPI__MatchRequest_1adc3f43a90901bb5474f4e38251b353e1"></a>

Sets the value of State_Optional and also sets State_IsSet to true.

#### `public inline FORCEINLINE void `[`SetState`](#structFRHAPI__MatchRequest_1aaea7841c31f8923e2d6cd763b1f9eece)`(ERHAPI_MatchState && NewValue)` <a id="structFRHAPI__MatchRequest_1aaea7841c31f8923e2d6cd763b1f9eece"></a>

Sets the value of State_Optional and also sets State_IsSet to true using move semantics.

#### `public inline void `[`ClearState`](#structFRHAPI__MatchRequest_1a9da60b903356716a501e0925f1d4685b)`()` <a id="structFRHAPI__MatchRequest_1a9da60b903356716a501e0925f1d4685b"></a>

Clears the value of State_Optional and sets State_IsSet to false.

#### `public inline FORCEINLINE void `[`SetStateToNull`](#structFRHAPI__MatchRequest_1a32e42f9ff5ad6b1e76038bc4080317f3)`()` <a id="structFRHAPI__MatchRequest_1a32e42f9ff5ad6b1e76038bc4080317f3"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStateNull`](#structFRHAPI__MatchRequest_1a7be15d732e8b8b29cb77ebb2eaa18295)`() const` <a id="structFRHAPI__MatchRequest_1a7be15d732e8b8b29cb77ebb2eaa18295"></a>

Checks whether State_Optional is set to null.

#### `public inline FORCEINLINE FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchRequest_1ab0c9c1a304513e3333e598c9aa34cd77)`()` <a id="structFRHAPI__MatchRequest_1ab0c9c1a304513e3333e598c9aa34cd77"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchRequest_1a3579e3383fcf6be0f3d679dd3331c56d)`() const` <a id="structFRHAPI__MatchRequest_1a3579e3383fcf6be0f3d679dd3331c56d"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchRequest_1ae05c0f0fef26e119983f08da56e94250)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1ae05c0f0fef26e119983f08da56e94250"></a>

Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStartTimestamp`](#structFRHAPI__MatchRequest_1a9f21a950219537b9a5d1a104b783efdb)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchRequest_1a9f21a950219537b9a5d1a104b783efdb"></a>

Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchRequest_1a8cd45c9043d6ca52c2c60cb1fb378051)`()` <a id="structFRHAPI__MatchRequest_1a8cd45c9043d6ca52c2c60cb1fb378051"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchRequest_1a71bcf4304d5f4e455a5b20e36aaec101)`() const` <a id="structFRHAPI__MatchRequest_1a71bcf4304d5f4e455a5b20e36aaec101"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStartTimestamp`](#structFRHAPI__MatchRequest_1ae2d4ae9ef7a4fe7a2fd25ff8dc23072e)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchRequest_1ae2d4ae9ef7a4fe7a2fd25ff8dc23072e"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStartTimestamp`](#structFRHAPI__MatchRequest_1a9e4549ad66ba864c2beb530aa64c885c)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchRequest_1a9e4549ad66ba864c2beb530aa64c885c"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchRequest_1aa739e4d9ed24db135bf6b2e7d6a430a9)`()` <a id="structFRHAPI__MatchRequest_1aa739e4d9ed24db135bf6b2e7d6a430a9"></a>

Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.

#### `public inline FORCEINLINE void `[`SetStartTimestampToNull`](#structFRHAPI__MatchRequest_1a47feb05fad7e791b974338959cb9ce4a)`()` <a id="structFRHAPI__MatchRequest_1a47feb05fad7e791b974338959cb9ce4a"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStartTimestampNull`](#structFRHAPI__MatchRequest_1a8b1fa6b4d25e7b67cceb3979d3def029)`() const` <a id="structFRHAPI__MatchRequest_1a8b1fa6b4d25e7b67cceb3979d3def029"></a>

Checks whether StartTimestamp_Optional is set to null.

#### `public inline FORCEINLINE FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchRequest_1a3b8a3c5b19e68237b7f4f4697efe5c15)`()` <a id="structFRHAPI__MatchRequest_1a3b8a3c5b19e68237b7f4f4697efe5c15"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchRequest_1a9039c8d220ab6d3572fa43f813647e66)`() const` <a id="structFRHAPI__MatchRequest_1a9039c8d220ab6d3572fa43f813647e66"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchRequest_1ab4dd659310b65f18671522b75724b4a1)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1ab4dd659310b65f18671522b75724b4a1"></a>

Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEndTimestamp`](#structFRHAPI__MatchRequest_1a3855f0b60adccf7d2e758fca3cc8ce2d)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchRequest_1a3855f0b60adccf7d2e758fca3cc8ce2d"></a>

Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchRequest_1a0ead3d02c560980bc8c430209a26d287)`()` <a id="structFRHAPI__MatchRequest_1a0ead3d02c560980bc8c430209a26d287"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchRequest_1a2c3e1d0eb40b356f9ec869f4ed448d6b)`() const` <a id="structFRHAPI__MatchRequest_1a2c3e1d0eb40b356f9ec869f4ed448d6b"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEndTimestamp`](#structFRHAPI__MatchRequest_1ae2ae9ad837601dd1cb9c633da2383da9)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchRequest_1ae2ae9ad837601dd1cb9c633da2383da9"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEndTimestamp`](#structFRHAPI__MatchRequest_1a7a45ffa4aa6123ce606f176e11ca1a62)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchRequest_1a7a45ffa4aa6123ce606f176e11ca1a62"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchRequest_1a8e7d61358ad58a7ad43f73e4c25d0d21)`()` <a id="structFRHAPI__MatchRequest_1a8e7d61358ad58a7ad43f73e4c25d0d21"></a>

Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.

#### `public inline FORCEINLINE void `[`SetEndTimestampToNull`](#structFRHAPI__MatchRequest_1aa59db4687e23fe8516b56edc379e0e4b)`()` <a id="structFRHAPI__MatchRequest_1aa59db4687e23fe8516b56edc379e0e4b"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsEndTimestampNull`](#structFRHAPI__MatchRequest_1a59f20a6331cb8064d716316e0a004634)`() const` <a id="structFRHAPI__MatchRequest_1a59f20a6331cb8064d716316e0a004634"></a>

Checks whether EndTimestamp_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchRequest_1aed028dffbaeac3254e57c5345640e279)`()` <a id="structFRHAPI__MatchRequest_1aed028dffbaeac3254e57c5345640e279"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchRequest_1a5efc01caab2a1a42823fc1069e417389)`() const` <a id="structFRHAPI__MatchRequest_1a5efc01caab2a1a42823fc1069e417389"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchRequest_1a193c979bb0d8daea03ded3d4312f8555)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1a193c979bb0d8daea03ded3d4312f8555"></a>

Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDurationSeconds`](#structFRHAPI__MatchRequest_1a0af26312f41215c803a682fbca7853f5)`(int32 & OutValue) const` <a id="structFRHAPI__MatchRequest_1a0af26312f41215c803a682fbca7853f5"></a>

Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchRequest_1a5be3a94be4159dc30ed855d4feb80d15)`()` <a id="structFRHAPI__MatchRequest_1a5be3a94be4159dc30ed855d4feb80d15"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchRequest_1a371ccebd16c42edc4af09aa80fb4535b)`() const` <a id="structFRHAPI__MatchRequest_1a371ccebd16c42edc4af09aa80fb4535b"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchRequest_1ae1d032815ab1bc142b7b30556da528a4)`(const int32 & NewValue)` <a id="structFRHAPI__MatchRequest_1ae1d032815ab1bc142b7b30556da528a4"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchRequest_1acca89d6efee5cfa29b9fedccda10b3fa)`(int32 && NewValue)` <a id="structFRHAPI__MatchRequest_1acca89d6efee5cfa29b9fedccda10b3fa"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchRequest_1a4531d9f94c88c0d046cc0666758574ef)`()` <a id="structFRHAPI__MatchRequest_1a4531d9f94c88c0d046cc0666758574ef"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_DurationSeconds`](#structFRHAPI__MatchRequest_1aa9e364c8664a02d37afd73514b49848e)`()` <a id="structFRHAPI__MatchRequest_1aa9e364c8664a02d37afd73514b49848e"></a>

Returns the default value of DurationSeconds.

#### `public inline FORCEINLINE void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchRequest_1a3fd8e2f87c5d07685d81c4e3d06be8cd)`()` <a id="structFRHAPI__MatchRequest_1a3fd8e2f87c5d07685d81c4e3d06be8cd"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchRequest_1a11a95784a6e51f8887c12934a7bc70c1)`() const` <a id="structFRHAPI__MatchRequest_1a11a95784a6e51f8887c12934a7bc70c1"></a>

Checks whether DurationSeconds_Optional is set to null.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchRequest_1ac5f47330eea414a02151434f08369701)`()` <a id="structFRHAPI__MatchRequest_1ac5f47330eea414a02151434f08369701"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchRequest_1a92c1454c8c5aaa02599f5e9748ca408e)`() const` <a id="structFRHAPI__MatchRequest_1a92c1454c8c5aaa02599f5e9748ca408e"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchRequest_1ae0a854aacefa81032e2966b82ec2f9cd)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1ae0a854aacefa81032e2966b82ec2f9cd"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchRequest_1afa6bc230f721351a3bbff5b860f46173)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchRequest_1afa6bc230f721351a3bbff5b860f46173"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchRequest_1a6eb60dab493e4e5b18d5750290f9c701)`()` <a id="structFRHAPI__MatchRequest_1a6eb60dab493e4e5b18d5750290f9c701"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchRequest_1a5a0a86619db0a74e4f68fc4a35d2c664)`() const` <a id="structFRHAPI__MatchRequest_1a5a0a86619db0a74e4f68fc4a35d2c664"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchRequest_1abbf698cacf9d3e0b583954fc794d7b3b)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchRequest_1abbf698cacf9d3e0b583954fc794d7b3b"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchRequest_1ae7ba1f0b5ba3d4b1356ade0421104036)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchRequest_1ae7ba1f0b5ba3d4b1356ade0421104036"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchRequest_1ae7113f8974c51027f09948d67cdcffba)`()` <a id="structFRHAPI__MatchRequest_1ae7113f8974c51027f09948d67cdcffba"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__MatchRequest_1a692c60e8caf97c750d363da5840a6ad9)`()` <a id="structFRHAPI__MatchRequest_1a692c60e8caf97c750d363da5840a6ad9"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__MatchRequest_1a00be3b66f1bf675d2ad4166197f68c4e)`() const` <a id="structFRHAPI__MatchRequest_1a00be3b66f1bf675d2ad4166197f68c4e"></a>

Checks whether CustomData_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetCorrelationId`](#structFRHAPI__MatchRequest_1a9bcd12dfdc525b1417bfdfa0424b1db2)`()` <a id="structFRHAPI__MatchRequest_1a9bcd12dfdc525b1417bfdfa0424b1db2"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__MatchRequest_1af479a33dbb091f1a5c3a51c8a02d8c76)`() const` <a id="structFRHAPI__MatchRequest_1af479a33dbb091f1a5c3a51c8a02d8c76"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__MatchRequest_1a6d6f345ff13dc2a98ec3985866d23137)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1a6d6f345ff13dc2a98ec3985866d23137"></a>

Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCorrelationId`](#structFRHAPI__MatchRequest_1abe99c2440e1eadae2f67f74376c06027)`(FString & OutValue) const` <a id="structFRHAPI__MatchRequest_1abe99c2440e1eadae2f67f74376c06027"></a>

Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchRequest_1acbeca380cf6e3e4042d634d596f5b190)`()` <a id="structFRHAPI__MatchRequest_1acbeca380cf6e3e4042d634d596f5b190"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchRequest_1a2285460c8b57316a47cf0c0fa6a5c115)`() const` <a id="structFRHAPI__MatchRequest_1a2285460c8b57316a47cf0c0fa6a5c115"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__MatchRequest_1a33077b76f4be90a35347abd2f2a5e1fe)`(const FString & NewValue)` <a id="structFRHAPI__MatchRequest_1a33077b76f4be90a35347abd2f2a5e1fe"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__MatchRequest_1aec296432c687581971fccf5aa1599855)`(FString && NewValue)` <a id="structFRHAPI__MatchRequest_1aec296432c687581971fccf5aa1599855"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.

#### `public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchRequest_1a48222b428b83d6591288b93689013771)`()` <a id="structFRHAPI__MatchRequest_1a48222b428b83d6591288b93689013771"></a>

Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCorrelationIdToNull`](#structFRHAPI__MatchRequest_1a60e73baddfa33212fbd404c1e6c079a9)`()` <a id="structFRHAPI__MatchRequest_1a60e73baddfa33212fbd404c1e6c079a9"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCorrelationIdNull`](#structFRHAPI__MatchRequest_1a83cf34c843f0792ef4fd759172b11481)`() const` <a id="structFRHAPI__MatchRequest_1a83cf34c843f0792ef4fd759172b11481"></a>

Checks whether CorrelationId_Optional is set to null.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchRequest_1a53cdf5618ad1a91f725133e1da6e1d27)`()` <a id="structFRHAPI__MatchRequest_1a53cdf5618ad1a91f725133e1da6e1d27"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchRequest_1a1f3de6e591c9c8ecff830ed223b23346)`() const` <a id="structFRHAPI__MatchRequest_1a1f3de6e591c9c8ecff830ed223b23346"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchRequest_1a3d0d6b19fa3c411a1ae92bb0d60ef2e4)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1a3d0d6b19fa3c411a1ae92bb0d60ef2e4"></a>

Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSessions`](#structFRHAPI__MatchRequest_1a5025a304e37b2319e295f94add28b9b8)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` <a id="structFRHAPI__MatchRequest_1a5025a304e37b2319e295f94add28b9b8"></a>

Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchRequest_1a835741ff97d62eed3dbc09a1c8b0e160)`()` <a id="structFRHAPI__MatchRequest_1a835741ff97d62eed3dbc09a1c8b0e160"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchRequest_1a697f7ac9ab54cfa1ae1d1243a99f801f)`() const` <a id="structFRHAPI__MatchRequest_1a697f7ac9ab54cfa1ae1d1243a99f801f"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchRequest_1ab67ac27c51cdd64de5c3c00293f23efc)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` <a id="structFRHAPI__MatchRequest_1ab67ac27c51cdd64de5c3c00293f23efc"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchRequest_1a4dd467191188494a0f548a22fc238c20)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` <a id="structFRHAPI__MatchRequest_1a4dd467191188494a0f548a22fc238c20"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.

#### `public inline void `[`ClearSessions`](#structFRHAPI__MatchRequest_1a2d5c977d4b55a58006f774fd8ab10b90)`()` <a id="structFRHAPI__MatchRequest_1a2d5c977d4b55a58006f774fd8ab10b90"></a>

Clears the value of Sessions_Optional and sets Sessions_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchRequest_1adf7b20498bf7de6a036707355122bee8)`()` <a id="structFRHAPI__MatchRequest_1adf7b20498bf7de6a036707355122bee8"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchRequest_1ad592b59fba6d94a7cf3952fa96272cff)`() const` <a id="structFRHAPI__MatchRequest_1ad592b59fba6d94a7cf3952fa96272cff"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchRequest_1adc38491194eadb61a5d0b3e8d6d550a4)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1adc38491194eadb61a5d0b3e8d6d550a4"></a>

Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstances`](#structFRHAPI__MatchRequest_1aaed2ae5636da3a919811b4ea57dea965)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` <a id="structFRHAPI__MatchRequest_1aaed2ae5636da3a919811b4ea57dea965"></a>

Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchRequest_1a74b995eb8f5a4efe03b6bc5e35f898ef)`()` <a id="structFRHAPI__MatchRequest_1a74b995eb8f5a4efe03b6bc5e35f898ef"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchRequest_1a1a254bf1f395d0cd0182c468886d2517)`() const` <a id="structFRHAPI__MatchRequest_1a1a254bf1f395d0cd0182c468886d2517"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstances`](#structFRHAPI__MatchRequest_1a0a3b8237d9549fdcd590145fcd17b8a8)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` <a id="structFRHAPI__MatchRequest_1a0a3b8237d9549fdcd590145fcd17b8a8"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstances`](#structFRHAPI__MatchRequest_1a4a16f449afec941dfa67dd74420db2f8)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` <a id="structFRHAPI__MatchRequest_1a4a16f449afec941dfa67dd74420db2f8"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.

#### `public inline void `[`ClearInstances`](#structFRHAPI__MatchRequest_1a0019195267b0da04fbe8bf9e97d47de9)`()` <a id="structFRHAPI__MatchRequest_1a0019195267b0da04fbe8bf9e97d47de9"></a>

Clears the value of Instances_Optional and sets Instances_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchRequest_1adafcc158f87481c86fb308d74449ed9c)`()` <a id="structFRHAPI__MatchRequest_1adafcc158f87481c86fb308d74449ed9c"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchRequest_1a03d693845e79dc5bc8ee9896ca7dc04e)`() const` <a id="structFRHAPI__MatchRequest_1a03d693845e79dc5bc8ee9896ca7dc04e"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchRequest_1a379383f2fd678176b8580e07de698798)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1a379383f2fd678176b8580e07de698798"></a>

Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAllocations`](#structFRHAPI__MatchRequest_1a48251cd8bbd93cc19afa7060da74b38a)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` <a id="structFRHAPI__MatchRequest_1a48251cd8bbd93cc19afa7060da74b38a"></a>

Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchRequest_1a4a29213016b57a2bb16b24597bcd0773)`()` <a id="structFRHAPI__MatchRequest_1a4a29213016b57a2bb16b24597bcd0773"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchRequest_1a261d55a5593ad539199cf596b8b5d7e0)`() const` <a id="structFRHAPI__MatchRequest_1a261d55a5593ad539199cf596b8b5d7e0"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAllocations`](#structFRHAPI__MatchRequest_1a40a25de115fb47c9670f90eb42703a8a)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` <a id="structFRHAPI__MatchRequest_1a40a25de115fb47c9670f90eb42703a8a"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAllocations`](#structFRHAPI__MatchRequest_1a157911ccf0e98de71ad809b29a11a5ab)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` <a id="structFRHAPI__MatchRequest_1a157911ccf0e98de71ad809b29a11a5ab"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.

#### `public inline void `[`ClearAllocations`](#structFRHAPI__MatchRequest_1a689d90c17bde84c3da9d5a528d3ad571)`()` <a id="structFRHAPI__MatchRequest_1a689d90c17bde84c3da9d5a528d3ad571"></a>

Clears the value of Allocations_Optional and sets Allocations_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchRequest_1af7fbac5ca909050a4c89b3eb609be855)`()` <a id="structFRHAPI__MatchRequest_1af7fbac5ca909050a4c89b3eb609be855"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchRequest_1a29f1d7554ee2fedcaa16bb94d4654f85)`() const` <a id="structFRHAPI__MatchRequest_1a29f1d7554ee2fedcaa16bb94d4654f85"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchRequest_1a095c18f69a0214ec9d9e0ddfba4c73dc)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1a095c18f69a0214ec9d9e0ddfba4c73dc"></a>

Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayers`](#structFRHAPI__MatchRequest_1a7a97bb1e3aad08e41cae99f9a570aa9f)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & OutValue) const` <a id="structFRHAPI__MatchRequest_1a7a97bb1e3aad08e41cae99f9a570aa9f"></a>

Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchRequest_1af76f5821a0bf8cb2e2ee0c513aa49826)`()` <a id="structFRHAPI__MatchRequest_1af76f5821a0bf8cb2e2ee0c513aa49826"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchRequest_1a89f7f114dc65a1f46a7dcb30fcdd5c28)`() const` <a id="structFRHAPI__MatchRequest_1a89f7f114dc65a1f46a7dcb30fcdd5c28"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__MatchRequest_1ab250a1018e7038fb4f27a7d1fdfb6217)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & NewValue)` <a id="structFRHAPI__MatchRequest_1ab250a1018e7038fb4f27a7d1fdfb6217"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__MatchRequest_1a1b6c48ab90d496ec94e4f3ce0bbcdf00)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > && NewValue)` <a id="structFRHAPI__MatchRequest_1a1b6c48ab90d496ec94e4f3ce0bbcdf00"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayers`](#structFRHAPI__MatchRequest_1a474a625b191c13b7cd9a95430f5a36d0)`()` <a id="structFRHAPI__MatchRequest_1a474a625b191c13b7cd9a95430f5a36d0"></a>

Clears the value of Players_Optional and sets Players_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & `[`GetSegments`](#structFRHAPI__MatchRequest_1a73943bd3e31e193a30711edbcec03aff)`()` <a id="structFRHAPI__MatchRequest_1a73943bd3e31e193a30711edbcec03aff"></a>

Gets the value of Segments_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & `[`GetSegments`](#structFRHAPI__MatchRequest_1a0e9b4b5ce05d078748c95f740ddfdbc0)`() const` <a id="structFRHAPI__MatchRequest_1a0e9b4b5ce05d078748c95f740ddfdbc0"></a>

Gets the value of Segments_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & `[`GetSegments`](#structFRHAPI__MatchRequest_1a13dbb6431db029be724fcbf6db81b752)`(const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & DefaultValue) const` <a id="structFRHAPI__MatchRequest_1a13dbb6431db029be724fcbf6db81b752"></a>

Gets the value of Segments_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSegments`](#structFRHAPI__MatchRequest_1a36231094e128600f6ed026b15ecc9d24)`(TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & OutValue) const` <a id="structFRHAPI__MatchRequest_1a36231094e128600f6ed026b15ecc9d24"></a>

Fills OutValue with the value of Segments_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > * `[`GetSegmentsOrNull`](#structFRHAPI__MatchRequest_1a78e3648856a6061c24d812df45554dd6)`()` <a id="structFRHAPI__MatchRequest_1a78e3648856a6061c24d812df45554dd6"></a>

Returns a pointer to Segments_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > * `[`GetSegmentsOrNull`](#structFRHAPI__MatchRequest_1a6089326a06eae7fa6e346449b3e33657)`() const` <a id="structFRHAPI__MatchRequest_1a6089326a06eae7fa6e346449b3e33657"></a>

Returns a pointer to Segments_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSegments`](#structFRHAPI__MatchRequest_1a57c697facfc87e1ab7d95d90f7238b4a)`(const TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > & NewValue)` <a id="structFRHAPI__MatchRequest_1a57c697facfc87e1ab7d95d90f7238b4a"></a>

Sets the value of Segments_Optional and also sets Segments_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSegments`](#structFRHAPI__MatchRequest_1acf85f218f6e65392d045966b316647ec)`(TArray< `[`FRHAPI_MatchSegmentRequest`](RHAPI_MatchSegmentRequest.md#structFRHAPI__MatchSegmentRequest)` > && NewValue)` <a id="structFRHAPI__MatchRequest_1acf85f218f6e65392d045966b316647ec"></a>

Sets the value of Segments_Optional and also sets Segments_IsSet to true using move semantics.

#### `public inline void `[`ClearSegments`](#structFRHAPI__MatchRequest_1a052cf015350c63d2e2d2c3f2df2633df)`()` <a id="structFRHAPI__MatchRequest_1a052cf015350c63d2e2d2c3f2df2633df"></a>

Clears the value of Segments_Optional and sets Segments_IsSet to false.

