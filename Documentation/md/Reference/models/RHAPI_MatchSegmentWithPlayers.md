---
title: RHAPI_MatchSegmentWithPlayers
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchSegmentWithPlayers`](#structFRHAPI__MatchSegmentWithPlayers) | 

## struct `FRHAPI_MatchSegmentWithPlayers` <a id="structFRHAPI__MatchSegmentWithPlayers"></a>

```
struct FRHAPI_MatchSegmentWithPlayers
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FDateTime `[`LastModifiedTimestamp_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a9eca2a5833de95e3ed72aba8c83dc9dc) | Timestamp of when the resource was last modified.
`public bool `[`LastModifiedTimestamp_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a78a113038c9fecab84e371028a42c6c1) | true if LastModifiedTimestamp_Optional has been set to a value
`public FDateTime `[`CreatedTimestamp_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1acc9f8a06bd40bafbf218000cc367763d) | Timestamp of when the resource was created.
`public bool `[`CreatedTimestamp_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1afda3956f96ed763b8409e79057c5b73b) | true if CreatedTimestamp_Optional has been set to a value
`public FString `[`Type_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a291e12ebbc251c23c1d0a858af118c85) | 
`public bool `[`Type_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a4b0a303cf56ef163e65cdc5001165606) | true if Type_Optional has been set to a value
`public bool `[`Type_IsNull`](#structFRHAPI__MatchSegmentWithPlayers_1ae1db9894abcc3136d6d664e777a376f5) | true if Type_Optional has been explicitly set to null
`public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a343239e117c881ef0babce8d33da22e5) | 
`public bool `[`State_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1ade4d132ca8f837385a57b209022a9516) | true if State_Optional has been set to a value
`public bool `[`State_IsNull`](#structFRHAPI__MatchSegmentWithPlayers_1a2ef8ce39a01c02d84ddc1b97fcc904d3) | true if State_Optional has been explicitly set to null
`public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1abbbae2f6e11c489c93b83f44d8c80981) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1ae4ed41700c0f1e95454fa7e818628f70) | true if StartTimestamp_Optional has been set to a value
`public bool `[`StartTimestamp_IsNull`](#structFRHAPI__MatchSegmentWithPlayers_1ac44ed3d3ce50a4e50aa2201ef3e78b02) | true if StartTimestamp_Optional has been explicitly set to null
`public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a03e28aa342550e7362804012a8b814dc) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a98fde9c4578a9e3a87dc35aacc09dd7f) | true if EndTimestamp_Optional has been set to a value
`public bool `[`EndTimestamp_IsNull`](#structFRHAPI__MatchSegmentWithPlayers_1a8b91c5b7fd3c07e62191ae2cdcf72531) | true if EndTimestamp_Optional has been explicitly set to null
`public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a71a7c957df8d10a7c598790bd36c451b) | 
`public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a15ef72098e5544655b697455c2d70728) | true if DurationSeconds_Optional has been set to a value
`public bool `[`DurationSeconds_IsNull`](#structFRHAPI__MatchSegmentWithPlayers_1abfbaeb1365876b82245f6df9ff9c0f42) | true if DurationSeconds_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a9baed3771da571a4763025931342fd86) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a702ee27225f5a4793a8bba1bc1021461) | true if CustomData_Optional has been set to a value
`public bool `[`CustomData_IsNull`](#structFRHAPI__MatchSegmentWithPlayers_1a72b924a586adf60ea908730bb6076964) | true if CustomData_Optional has been explicitly set to null
`public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a8b13aa7a271cf5c9a628d2fc41abb117) | 
`public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1ae0198259edd0be64a411dc7e0806fad7) | true if CorrelationId_Optional has been set to a value
`public bool `[`CorrelationId_IsNull`](#structFRHAPI__MatchSegmentWithPlayers_1a90b77bfdb6bbe30ea619a3ab4b403d30) | true if CorrelationId_Optional has been explicitly set to null
`public TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > `[`Sessions_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a88e0376c4953b9ee93c08c55b6058e86) | List of session IDs for the match.
`public bool `[`Sessions_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1aa91235d1ad813c404efa9d3b60fc7c8b) | true if Sessions_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > `[`Instances_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1ac31b50aca8ffc33afde7b17de66ccea4) | List of MatchInstances for the match.
`public bool `[`Instances_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a47c65c74525ae2e6ffc7a8b6da41ab8d) | true if Instances_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > `[`Allocations_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1ad241dbbbf02018e6d8fe7b14d74f6bf8) | List of allocation IDs for the match.
`public bool `[`Allocations_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a3a3d50f05d92e12aebdf821a7b6818e7) | true if Allocations_Optional has been set to a value
`public FString `[`MatchSegment`](#structFRHAPI__MatchSegmentWithPlayers_1a4f20d61ba3cb95fd9bb22795bbd219cc) | Segment ID of the match.
`public FString `[`MatchId_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1af86245279ec671847e8f2694ebf33c24) | 
`public bool `[`MatchId_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a1843958153ec0547171d4e430d94fe09) | true if MatchId_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > `[`Players_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1ac767b500554539f4f6964c3175bcc8c8) | List of players in the match.
`public bool `[`Players_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1ae80235257daf87efc2467d0f24ed4b7b) | true if Players_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchSegmentWithPlayers_1a12850c617ebd5e57e5f0ee45c0af7711)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchSegmentWithPlayers_1af7dd264872b7bf63c20286ff5d3e0de6)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1afc4354a9b40f909e2d9c2ed26eb1a0c6)`()` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ad09d60a7b6aa618f5c46d5cb46087a3d)`() const` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ab4a112811a8918e08db7c87a674352e7)`(const FDateTime & DefaultValue) const` | Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ac88a859409da55d7751360b1b10411a7)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1aa5b87a65d814fa98b73c058fa4e148cc)`()` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ab8a79e408778f40e3396d50d7d9c7293)`() const` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a9c0b4d58b0aa55f52b4bed439133d9d3)`(const FDateTime & NewValue)` | Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.
`public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a3e9034bcb45b9e1953ea1ee989539f26)`(FDateTime && NewValue)` | Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a5a057c0d69d7bd1191fe8c02dc18b874)`()` | Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.
`public inline bool `[`IsLastModifiedTimestampSet`](#structFRHAPI__MatchSegmentWithPlayers_1ab61aa8258537d7869d5566d7c8ca2950)`() const` | Checks whether LastModifiedTimestamp_Optional has been set.
`public inline FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ae999dff74dd52a49720f3a61a3c4e89c)`()` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1aaccb783a9776c07f9a2d74ed8dafebae)`() const` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ac5acd75e6614ee1f8e90531dfc3a638d)`(const FDateTime & DefaultValue) const` | Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1adacb31c1fe32898eb19fae3c66240ea0)`(FDateTime & OutValue) const` | Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a1e22001f145edf09c5f49c9d35c53181)`()` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a5f794623001576038b9c2e73a7993c8c)`() const` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1afc6b98483a36d35f87770b05228f8c27)`(const FDateTime & NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.
`public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1af310174a633da875bd8ca16cd3b8e8bb)`(FDateTime && NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a2a7b395e6ff81659ce695e0d72f0a84e)`()` | Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.
`public inline bool `[`IsCreatedTimestampSet`](#structFRHAPI__MatchSegmentWithPlayers_1ad9dc18fd83c2f378dc149dff1403722d)`() const` | Checks whether CreatedTimestamp_Optional has been set.
`public inline FString & `[`GetType`](#structFRHAPI__MatchSegmentWithPlayers_1af4f78a48b872f9b4c366c82ad5dfef2d)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentWithPlayers_1a9a686c2abcc73f810f445ac9f1e7cdc6)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentWithPlayers_1acee7943489d924453f3990796b66c517)`(const FString & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetType`](#structFRHAPI__MatchSegmentWithPlayers_1aa2695bf92ed22c3dfa1a166cd98c9613)`(FString & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a1203b310406efdd54bb24f07f61428cf)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a31f1a533fe6aa2c8c8f09eced894de69)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetType`](#structFRHAPI__MatchSegmentWithPlayers_1a130e823e5a0f19851a734af785d9e895)`(const FString & NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline void `[`SetType`](#structFRHAPI__MatchSegmentWithPlayers_1af76bb82a38fa2247c1be96b6efc7cc7c)`(FString && NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.
`public inline void `[`ClearType`](#structFRHAPI__MatchSegmentWithPlayers_1afe765a26c85d22c1b38da4cb84a71fde)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline bool `[`IsTypeSet`](#structFRHAPI__MatchSegmentWithPlayers_1ae7e2b1a48e6ae2ef7c484ee30c1bb8d4)`() const` | Checks whether Type_Optional has been set.
`public inline void `[`SetTypeToNull`](#structFRHAPI__MatchSegmentWithPlayers_1a6407e2468b0c1c517ae8321f5a1d26ef)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsTypeNull`](#structFRHAPI__MatchSegmentWithPlayers_1aacd1efccabd060a46ff6c132bea45e8e)`() const` | Checks whether Type_Optional is set to null.
`public inline ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentWithPlayers_1ab8ce9a66e688f572c141a9c917d7266e)`()` | Gets the value of State_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentWithPlayers_1a25bcf4d162a8319dc722e31bdf4c225a)`() const` | Gets the value of State_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentWithPlayers_1ae35d048cb75244b1a8c37512406629e0)`(const ERHAPI_MatchState & DefaultValue) const` | Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetState`](#structFRHAPI__MatchSegmentWithPlayers_1ad6328a671fd64e6ef8aca03ff1d28d71)`(ERHAPI_MatchState & OutValue) const` | Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a1236864ee18978a8500da3d6a29d6c00)`()` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a2f3609ee7b5d56c1a50e55f63b81c122)`() const` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetState`](#structFRHAPI__MatchSegmentWithPlayers_1a29d0f63646d4a1fd93facdd19af797a5)`(const ERHAPI_MatchState & NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true.
`public inline void `[`SetState`](#structFRHAPI__MatchSegmentWithPlayers_1aca7130828c8a04513398849ef6918743)`(ERHAPI_MatchState && NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true using move semantics.
`public inline void `[`ClearState`](#structFRHAPI__MatchSegmentWithPlayers_1afa393bb3409f6076f9945972f9f23659)`()` | Clears the value of State_Optional and sets State_IsSet to false.
`public inline bool `[`IsStateSet`](#structFRHAPI__MatchSegmentWithPlayers_1abff78475e1ebda27ffa491f54bad2190)`() const` | Checks whether State_Optional has been set.
`public inline void `[`SetStateToNull`](#structFRHAPI__MatchSegmentWithPlayers_1aa0540f6b9c3a0471b96f6766e1de070d)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStateNull`](#structFRHAPI__MatchSegmentWithPlayers_1a42ccd3b380e6417d06cafbbd15c3421b)`() const` | Checks whether State_Optional is set to null.
`public inline FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a7e9b78ca236b1db2c3a00ec123a71dd9)`()` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1aa9b04b9b7427421abadfcbea2357699c)`() const` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1aa1f67f3e3e6d9f881ca0cd1ce25a9549)`(const FDateTime & DefaultValue) const` | Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a85971b368ceb883b63e656a7d71854bf)`(FDateTime & OutValue) const` | Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a25ae655af8f58b68066b8ae3bed88dac)`()` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1aa37e1a4276952f73bb14fd31304429bf)`() const` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a093da2cc9a790e1d93f4e5739de3e5d8)`(const FDateTime & NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.
`public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a01a572f3ac477b8e9f29849a2fcb87c1)`(FDateTime && NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a99bdcedb9bbfb7a04d8c6a561aa69ca4)`()` | Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.
`public inline bool `[`IsStartTimestampSet`](#structFRHAPI__MatchSegmentWithPlayers_1aecbd4d50b5ef722c51c1dc3a9ce16221)`() const` | Checks whether StartTimestamp_Optional has been set.
`public inline void `[`SetStartTimestampToNull`](#structFRHAPI__MatchSegmentWithPlayers_1aeb89c70c86c87c43ba441f00cde6e81a)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStartTimestampNull`](#structFRHAPI__MatchSegmentWithPlayers_1ad2cf537b176881b0ce5b615c4cee01b7)`() const` | Checks whether StartTimestamp_Optional is set to null.
`public inline FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1af2f1943644e971ffd47c97cf6355e7fc)`()` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a8284b3032f6eb575a8ba702444b77b9f)`() const` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ac12cfe80a6ea97e3cc0acacb6a922ad7)`(const FDateTime & DefaultValue) const` | Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1aa5b2ff59590f4f64ca43f00717e2198d)`(FDateTime & OutValue) const` | Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a591573bf681107d052e9853599008014)`()` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1adb691f9117333bcaa2ddbf14e016e356)`() const` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ae84da7aed2e940665e3915d30be1a4b0)`(const FDateTime & NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.
`public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a6e938f38aa88641ad54b4f37408f3a3b)`(FDateTime && NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a0d8df68f97003699016115fabb307c88)`()` | Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.
`public inline bool `[`IsEndTimestampSet`](#structFRHAPI__MatchSegmentWithPlayers_1a12d7aa388e6811224696a98c327e1edd)`() const` | Checks whether EndTimestamp_Optional has been set.
`public inline void `[`SetEndTimestampToNull`](#structFRHAPI__MatchSegmentWithPlayers_1a7628c688d4b241ff732f5e703c1f57d0)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsEndTimestampNull`](#structFRHAPI__MatchSegmentWithPlayers_1a9664940655348be93bd6a4b605ea33c8)`() const` | Checks whether EndTimestamp_Optional is set to null.
`public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a1a4d83c04ee6ba6767b35ac38632cc64)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a958399136d73d66848344d1f2cb311c4)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a42967fd66558d55c64ac57d0aa31f230)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a356b2e5248fdb4e55df1571174b388ee)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a7d3b739a7ac10a17fd41b1379b3825f3)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a160cf8ec379257e4a5847d68622d6534)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1ace604230193b15ac6d63e10cce8d9d90)`(const int32 & NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a976ea1153878e69edcd89d3471a2ac0e)`(int32 && NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a859cad510bd50f14da7ec423a7c01fca)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline bool `[`IsDurationSecondsSet`](#structFRHAPI__MatchSegmentWithPlayers_1ad22c5e5e9b290b8a42a471561b9f10e8)`() const` | Checks whether DurationSeconds_Optional has been set.
`public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchSegmentWithPlayers_1abbb72031ca57070ac395d6f7ec36c679)`() const` | Returns true if DurationSeconds_Optional is set and matches the default value.
`public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchSegmentWithPlayers_1ad498f534581644269e95aaacc28bb0d0)`()` | Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.
`public inline void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchSegmentWithPlayers_1a46988466ada71c628547e6712c98e01b)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchSegmentWithPlayers_1ad771a00cb8c868265b9531d3261a7729)`() const` | Checks whether DurationSeconds_Optional is set to null.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1a735e7a29c959c667ded1bd8e84416218)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1a98c30f993aa8a0352fe409b430e2b012)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1a5ae46a468f848de6a0895d60a37f4f9a)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1a5ade724ffe505aec2215e2ae359a7785)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a7df3b75164a7ed0919eec815b97eb2b6)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a6876a6d303a4cc3a79408ecee07c71c0)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1a7ae5cd1bd46b179fae38150a0b271bb1)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1a27539c4880d9292c5ccf8a3affe31e02)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1af69bbc7dff23cd38b47e468eb12468a3)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchSegmentWithPlayers_1a79fb7100b3e3553e3a9f3b020623798a)`() const` | Checks whether CustomData_Optional has been set.
`public inline void `[`SetCustomDataToNull`](#structFRHAPI__MatchSegmentWithPlayers_1aa0fe99737d6c3484998d00326cbe65c7)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCustomDataNull`](#structFRHAPI__MatchSegmentWithPlayers_1a6e64951f947fbc94f9dad408af762024)`() const` | Checks whether CustomData_Optional is set to null.
`public inline FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1aeb38cb190d0982186edd6ae3b77937a8)`()` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1a5e8cfbbb6f338c98d3664b3207acb4bf)`() const` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1aa9122dba49f8f8eaf1b499c91f4e433e)`(const FString & DefaultValue) const` | Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1a6d1d580a4a2efde5f9be0de1acc84032)`(FString & OutValue) const` | Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a924659e6933f11e776ac73f16cda774a)`()` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a8ddabd3adc3c8b1b1c455247d625a94e)`() const` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1a5caff1b7ba9b9e8bcd4497a0367a8128)`(const FString & NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.
`public inline void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1a08ae68e62ad71d8932e5e0bc733dd9f8)`(FString && NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.
`public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1a70facbc24f55ecb933e183842b709e04)`()` | Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.
`public inline bool `[`IsCorrelationIdSet`](#structFRHAPI__MatchSegmentWithPlayers_1aac31895d7214e8ea684bbdddd0d4cb40)`() const` | Checks whether CorrelationId_Optional has been set.
`public inline void `[`SetCorrelationIdToNull`](#structFRHAPI__MatchSegmentWithPlayers_1abd9d5e6c4e9937efab8bdc4685fa0404)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCorrelationIdNull`](#structFRHAPI__MatchSegmentWithPlayers_1a9d02afe9e258eca98e4d7f905bae7cd7)`() const` | Checks whether CorrelationId_Optional is set to null.
`public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1a721c49a1eb064ef5b5fae484ac80bf6f)`()` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1a237d889cc877906ebce4a373c6ade5f6)`() const` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1a7e1ca57b88c467733331084aea9d04ec)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` | Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1aefb00e5d968181837820d7b9d8396ead)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` | Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a3173151ee0f1eb7f6f278b869c5da8f3)`()` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a2fd363b255e3974bed7a6449dbf10235)`() const` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1a795d71675f953c933ca4e56dc9611a92)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.
`public inline void `[`SetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1a1569fbd7c170461ab2d933d556b80e8b)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.
`public inline void `[`ClearSessions`](#structFRHAPI__MatchSegmentWithPlayers_1af45381b90e7f81345393fe1ec079b45a)`()` | Clears the value of Sessions_Optional and sets Sessions_IsSet to false.
`public inline bool `[`IsSessionsSet`](#structFRHAPI__MatchSegmentWithPlayers_1acdbc61fcbfa1df1594f1d608a79b9787)`() const` | Checks whether Sessions_Optional has been set.
`public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1aa68169f29bfd304a505a5c6c126018f9)`()` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1abc2833cd4b88542d462043ce06c9b572)`() const` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1af1f774fe93e16cabb07e686bfd39bcf0)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` | Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a3e45012cae3089c3f6c9fa260eca6ced)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` | Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a855c86479c7dbcce87390004ac370753)`()` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1af592c7980db20eb4f1fcacfacd1d3306)`() const` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a90c3191bbc346de2fa724db08ae970d3)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true.
`public inline void `[`SetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a01df7d7b82515ffa2a73c6bb96e47272)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.
`public inline void `[`ClearInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a6247bc3fbc11566e3249a4a00a740a8f)`()` | Clears the value of Instances_Optional and sets Instances_IsSet to false.
`public inline bool `[`IsInstancesSet`](#structFRHAPI__MatchSegmentWithPlayers_1a5168f09defe2abc220069fa64263e7ed)`() const` | Checks whether Instances_Optional has been set.
`public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1ad770e85cb80b948b65f51d12069c9d4e)`()` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a1879468a0ae408744cd9c645b0fcce8d)`() const` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a829634111512b888969a18d78667c320)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` | Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1aa83bc8c930dfd54e9066efc3b22cf512)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` | Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a6850370587c1243a8d7eec5dc7c2fadc)`()` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ac165f8d1a5eb9fcf0fffb6fe81fdf42a)`() const` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a8fd928d7f0240ab38120ab297f1948de)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.
`public inline void `[`SetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a62b5356d4d3f431473c15e770fd033b3)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.
`public inline void `[`ClearAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a861e5f93aa0c9c39fad6e569e0aa8763)`()` | Clears the value of Allocations_Optional and sets Allocations_IsSet to false.
`public inline bool `[`IsAllocationsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a703c35cda1f9ebbada3329cd471c6472)`() const` | Checks whether Allocations_Optional has been set.
`public inline FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentWithPlayers_1aee8ea5ce827d42a70d0bc07874346244)`()` | Gets the value of MatchSegment.
`public inline const FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentWithPlayers_1a39857eabaa82bb7f498c9063ed2d2702)`() const` | Gets the value of MatchSegment.
`public inline void `[`SetMatchSegment`](#structFRHAPI__MatchSegmentWithPlayers_1ac633353ba02ff2c7c383873fce7550aa)`(const FString & NewValue)` | Sets the value of MatchSegment.
`public inline void `[`SetMatchSegment`](#structFRHAPI__MatchSegmentWithPlayers_1a96692c9bc67d2295ba678a951f5aa03c)`(FString && NewValue)` | Sets the value of MatchSegment using move semantics.
`public inline FString & `[`GetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1a3c7853b14866bd42bb47877c449311ff)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1a67930e307344d437880709b2d9b6814b)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1a160bedd2638df952ee8f4e1c752fdfe6)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1a611846110c3cc227df68cfa09252c29f)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1aa53ca42d2b1ca7321d9b5e6f77c42ca8)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a578acc74a17cac672c44eb40698f0417)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1af8b7494249325cac7f01dd49edfc45dd)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline void `[`SetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1ae08616911e245cb35bb2d2c08f916adc)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1ada9fb5b63bc3e430f786d150021e532d)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline bool `[`IsMatchIdSet`](#structFRHAPI__MatchSegmentWithPlayers_1a188fd222e294dd4a535299e4632bf9b7)`() const` | Checks whether MatchId_Optional has been set.
`public inline TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1ab1fbe0c119f04f0f214a7a09da4bb699)`()` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a435382de2fdd58b5d6200ba3013efacb)`() const` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a2606c08a39a9243f58c8dd738c027038)`(const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & DefaultValue) const` | Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1afc4e5cd4c781b7fbb952f413a6a0f396)`(TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & OutValue) const` | Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a94a33848c5fa7be443e2e8aa466a51b7)`()` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a27d377ea9cf2d8f2c544d132f7a45c6e)`() const` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1abf398fe8e5af98af600cae10c042ce72)`(const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true.
`public inline void `[`SetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a4dad13b8171b716b0a11a565075903a2)`(TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > && NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.
`public inline void `[`ClearPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a942c9f48d6a439b1a1c55c698a90b4a2)`()` | Clears the value of Players_Optional and sets Players_IsSet to false.
`public inline bool `[`IsPlayersSet`](#structFRHAPI__MatchSegmentWithPlayers_1a793d291e506e35e9e6a7a5f4ff917a17)`() const` | Checks whether Players_Optional has been set.

### Members

#### `public FDateTime `[`LastModifiedTimestamp_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a9eca2a5833de95e3ed72aba8c83dc9dc) <a id="structFRHAPI__MatchSegmentWithPlayers_1a9eca2a5833de95e3ed72aba8c83dc9dc"></a>

Timestamp of when the resource was last modified.

#### `public bool `[`LastModifiedTimestamp_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a78a113038c9fecab84e371028a42c6c1) <a id="structFRHAPI__MatchSegmentWithPlayers_1a78a113038c9fecab84e371028a42c6c1"></a>

true if LastModifiedTimestamp_Optional has been set to a value

#### `public FDateTime `[`CreatedTimestamp_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1acc9f8a06bd40bafbf218000cc367763d) <a id="structFRHAPI__MatchSegmentWithPlayers_1acc9f8a06bd40bafbf218000cc367763d"></a>

Timestamp of when the resource was created.

#### `public bool `[`CreatedTimestamp_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1afda3956f96ed763b8409e79057c5b73b) <a id="structFRHAPI__MatchSegmentWithPlayers_1afda3956f96ed763b8409e79057c5b73b"></a>

true if CreatedTimestamp_Optional has been set to a value

#### `public FString `[`Type_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a291e12ebbc251c23c1d0a858af118c85) <a id="structFRHAPI__MatchSegmentWithPlayers_1a291e12ebbc251c23c1d0a858af118c85"></a>

#### `public bool `[`Type_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a4b0a303cf56ef163e65cdc5001165606) <a id="structFRHAPI__MatchSegmentWithPlayers_1a4b0a303cf56ef163e65cdc5001165606"></a>

true if Type_Optional has been set to a value

#### `public bool `[`Type_IsNull`](#structFRHAPI__MatchSegmentWithPlayers_1ae1db9894abcc3136d6d664e777a376f5) <a id="structFRHAPI__MatchSegmentWithPlayers_1ae1db9894abcc3136d6d664e777a376f5"></a>

true if Type_Optional has been explicitly set to null

#### `public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a343239e117c881ef0babce8d33da22e5) <a id="structFRHAPI__MatchSegmentWithPlayers_1a343239e117c881ef0babce8d33da22e5"></a>

#### `public bool `[`State_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1ade4d132ca8f837385a57b209022a9516) <a id="structFRHAPI__MatchSegmentWithPlayers_1ade4d132ca8f837385a57b209022a9516"></a>

true if State_Optional has been set to a value

#### `public bool `[`State_IsNull`](#structFRHAPI__MatchSegmentWithPlayers_1a2ef8ce39a01c02d84ddc1b97fcc904d3) <a id="structFRHAPI__MatchSegmentWithPlayers_1a2ef8ce39a01c02d84ddc1b97fcc904d3"></a>

true if State_Optional has been explicitly set to null

#### `public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1abbbae2f6e11c489c93b83f44d8c80981) <a id="structFRHAPI__MatchSegmentWithPlayers_1abbbae2f6e11c489c93b83f44d8c80981"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1ae4ed41700c0f1e95454fa7e818628f70) <a id="structFRHAPI__MatchSegmentWithPlayers_1ae4ed41700c0f1e95454fa7e818628f70"></a>

true if StartTimestamp_Optional has been set to a value

#### `public bool `[`StartTimestamp_IsNull`](#structFRHAPI__MatchSegmentWithPlayers_1ac44ed3d3ce50a4e50aa2201ef3e78b02) <a id="structFRHAPI__MatchSegmentWithPlayers_1ac44ed3d3ce50a4e50aa2201ef3e78b02"></a>

true if StartTimestamp_Optional has been explicitly set to null

#### `public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a03e28aa342550e7362804012a8b814dc) <a id="structFRHAPI__MatchSegmentWithPlayers_1a03e28aa342550e7362804012a8b814dc"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a98fde9c4578a9e3a87dc35aacc09dd7f) <a id="structFRHAPI__MatchSegmentWithPlayers_1a98fde9c4578a9e3a87dc35aacc09dd7f"></a>

true if EndTimestamp_Optional has been set to a value

#### `public bool `[`EndTimestamp_IsNull`](#structFRHAPI__MatchSegmentWithPlayers_1a8b91c5b7fd3c07e62191ae2cdcf72531) <a id="structFRHAPI__MatchSegmentWithPlayers_1a8b91c5b7fd3c07e62191ae2cdcf72531"></a>

true if EndTimestamp_Optional has been explicitly set to null

#### `public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a71a7c957df8d10a7c598790bd36c451b) <a id="structFRHAPI__MatchSegmentWithPlayers_1a71a7c957df8d10a7c598790bd36c451b"></a>

#### `public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a15ef72098e5544655b697455c2d70728) <a id="structFRHAPI__MatchSegmentWithPlayers_1a15ef72098e5544655b697455c2d70728"></a>

true if DurationSeconds_Optional has been set to a value

#### `public bool `[`DurationSeconds_IsNull`](#structFRHAPI__MatchSegmentWithPlayers_1abfbaeb1365876b82245f6df9ff9c0f42) <a id="structFRHAPI__MatchSegmentWithPlayers_1abfbaeb1365876b82245f6df9ff9c0f42"></a>

true if DurationSeconds_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a9baed3771da571a4763025931342fd86) <a id="structFRHAPI__MatchSegmentWithPlayers_1a9baed3771da571a4763025931342fd86"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a702ee27225f5a4793a8bba1bc1021461) <a id="structFRHAPI__MatchSegmentWithPlayers_1a702ee27225f5a4793a8bba1bc1021461"></a>

true if CustomData_Optional has been set to a value

#### `public bool `[`CustomData_IsNull`](#structFRHAPI__MatchSegmentWithPlayers_1a72b924a586adf60ea908730bb6076964) <a id="structFRHAPI__MatchSegmentWithPlayers_1a72b924a586adf60ea908730bb6076964"></a>

true if CustomData_Optional has been explicitly set to null

#### `public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a8b13aa7a271cf5c9a628d2fc41abb117) <a id="structFRHAPI__MatchSegmentWithPlayers_1a8b13aa7a271cf5c9a628d2fc41abb117"></a>

#### `public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1ae0198259edd0be64a411dc7e0806fad7) <a id="structFRHAPI__MatchSegmentWithPlayers_1ae0198259edd0be64a411dc7e0806fad7"></a>

true if CorrelationId_Optional has been set to a value

#### `public bool `[`CorrelationId_IsNull`](#structFRHAPI__MatchSegmentWithPlayers_1a90b77bfdb6bbe30ea619a3ab4b403d30) <a id="structFRHAPI__MatchSegmentWithPlayers_1a90b77bfdb6bbe30ea619a3ab4b403d30"></a>

true if CorrelationId_Optional has been explicitly set to null

#### `public TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > `[`Sessions_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1a88e0376c4953b9ee93c08c55b6058e86) <a id="structFRHAPI__MatchSegmentWithPlayers_1a88e0376c4953b9ee93c08c55b6058e86"></a>

List of session IDs for the match.

#### `public bool `[`Sessions_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1aa91235d1ad813c404efa9d3b60fc7c8b) <a id="structFRHAPI__MatchSegmentWithPlayers_1aa91235d1ad813c404efa9d3b60fc7c8b"></a>

true if Sessions_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > `[`Instances_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1ac31b50aca8ffc33afde7b17de66ccea4) <a id="structFRHAPI__MatchSegmentWithPlayers_1ac31b50aca8ffc33afde7b17de66ccea4"></a>

List of MatchInstances for the match.

#### `public bool `[`Instances_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a47c65c74525ae2e6ffc7a8b6da41ab8d) <a id="structFRHAPI__MatchSegmentWithPlayers_1a47c65c74525ae2e6ffc7a8b6da41ab8d"></a>

true if Instances_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > `[`Allocations_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1ad241dbbbf02018e6d8fe7b14d74f6bf8) <a id="structFRHAPI__MatchSegmentWithPlayers_1ad241dbbbf02018e6d8fe7b14d74f6bf8"></a>

List of allocation IDs for the match.

#### `public bool `[`Allocations_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a3a3d50f05d92e12aebdf821a7b6818e7) <a id="structFRHAPI__MatchSegmentWithPlayers_1a3a3d50f05d92e12aebdf821a7b6818e7"></a>

true if Allocations_Optional has been set to a value

#### `public FString `[`MatchSegment`](#structFRHAPI__MatchSegmentWithPlayers_1a4f20d61ba3cb95fd9bb22795bbd219cc) <a id="structFRHAPI__MatchSegmentWithPlayers_1a4f20d61ba3cb95fd9bb22795bbd219cc"></a>

Segment ID of the match.

#### `public FString `[`MatchId_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1af86245279ec671847e8f2694ebf33c24) <a id="structFRHAPI__MatchSegmentWithPlayers_1af86245279ec671847e8f2694ebf33c24"></a>

#### `public bool `[`MatchId_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a1843958153ec0547171d4e430d94fe09) <a id="structFRHAPI__MatchSegmentWithPlayers_1a1843958153ec0547171d4e430d94fe09"></a>

true if MatchId_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > `[`Players_Optional`](#structFRHAPI__MatchSegmentWithPlayers_1ac767b500554539f4f6964c3175bcc8c8) <a id="structFRHAPI__MatchSegmentWithPlayers_1ac767b500554539f4f6964c3175bcc8c8"></a>

List of players in the match.

#### `public bool `[`Players_IsSet`](#structFRHAPI__MatchSegmentWithPlayers_1ae80235257daf87efc2467d0f24ed4b7b) <a id="structFRHAPI__MatchSegmentWithPlayers_1ae80235257daf87efc2467d0f24ed4b7b"></a>

true if Players_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchSegmentWithPlayers_1a12850c617ebd5e57e5f0ee45c0af7711)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a12850c617ebd5e57e5f0ee45c0af7711"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchSegmentWithPlayers_1af7dd264872b7bf63c20286ff5d3e0de6)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1af7dd264872b7bf63c20286ff5d3e0de6"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1afc4354a9b40f909e2d9c2ed26eb1a0c6)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1afc4354a9b40f909e2d9c2ed26eb1a0c6"></a>

Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ad09d60a7b6aa618f5c46d5cb46087a3d)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ad09d60a7b6aa618f5c46d5cb46087a3d"></a>

Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ab4a112811a8918e08db7c87a674352e7)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ab4a112811a8918e08db7c87a674352e7"></a>

Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ac88a859409da55d7751360b1b10411a7)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ac88a859409da55d7751360b1b10411a7"></a>

Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1aa5b87a65d814fa98b73c058fa4e148cc)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1aa5b87a65d814fa98b73c058fa4e148cc"></a>

Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ab8a79e408778f40e3396d50d7d9c7293)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ab8a79e408778f40e3396d50d7d9c7293"></a>

Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a9c0b4d58b0aa55f52b4bed439133d9d3)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a9c0b4d58b0aa55f52b4bed439133d9d3"></a>

Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.

#### `public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a3e9034bcb45b9e1953ea1ee989539f26)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a3e9034bcb45b9e1953ea1ee989539f26"></a>

Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a5a057c0d69d7bd1191fe8c02dc18b874)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a5a057c0d69d7bd1191fe8c02dc18b874"></a>

Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.

#### `public inline bool `[`IsLastModifiedTimestampSet`](#structFRHAPI__MatchSegmentWithPlayers_1ab61aa8258537d7869d5566d7c8ca2950)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ab61aa8258537d7869d5566d7c8ca2950"></a>

Checks whether LastModifiedTimestamp_Optional has been set.

#### `public inline FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ae999dff74dd52a49720f3a61a3c4e89c)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1ae999dff74dd52a49720f3a61a3c4e89c"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1aaccb783a9776c07f9a2d74ed8dafebae)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1aaccb783a9776c07f9a2d74ed8dafebae"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ac5acd75e6614ee1f8e90531dfc3a638d)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ac5acd75e6614ee1f8e90531dfc3a638d"></a>

Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1adacb31c1fe32898eb19fae3c66240ea0)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1adacb31c1fe32898eb19fae3c66240ea0"></a>

Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a1e22001f145edf09c5f49c9d35c53181)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a1e22001f145edf09c5f49c9d35c53181"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a5f794623001576038b9c2e73a7993c8c)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a5f794623001576038b9c2e73a7993c8c"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1afc6b98483a36d35f87770b05228f8c27)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1afc6b98483a36d35f87770b05228f8c27"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.

#### `public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1af310174a633da875bd8ca16cd3b8e8bb)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1af310174a633da875bd8ca16cd3b8e8bb"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a2a7b395e6ff81659ce695e0d72f0a84e)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a2a7b395e6ff81659ce695e0d72f0a84e"></a>

Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.

#### `public inline bool `[`IsCreatedTimestampSet`](#structFRHAPI__MatchSegmentWithPlayers_1ad9dc18fd83c2f378dc149dff1403722d)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ad9dc18fd83c2f378dc149dff1403722d"></a>

Checks whether CreatedTimestamp_Optional has been set.

#### `public inline FString & `[`GetType`](#structFRHAPI__MatchSegmentWithPlayers_1af4f78a48b872f9b4c366c82ad5dfef2d)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1af4f78a48b872f9b4c366c82ad5dfef2d"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentWithPlayers_1a9a686c2abcc73f810f445ac9f1e7cdc6)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a9a686c2abcc73f810f445ac9f1e7cdc6"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentWithPlayers_1acee7943489d924453f3990796b66c517)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1acee7943489d924453f3990796b66c517"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetType`](#structFRHAPI__MatchSegmentWithPlayers_1aa2695bf92ed22c3dfa1a166cd98c9613)`(FString & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1aa2695bf92ed22c3dfa1a166cd98c9613"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a1203b310406efdd54bb24f07f61428cf)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a1203b310406efdd54bb24f07f61428cf"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a31f1a533fe6aa2c8c8f09eced894de69)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a31f1a533fe6aa2c8c8f09eced894de69"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetType`](#structFRHAPI__MatchSegmentWithPlayers_1a130e823e5a0f19851a734af785d9e895)`(const FString & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a130e823e5a0f19851a734af785d9e895"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

#### `public inline void `[`SetType`](#structFRHAPI__MatchSegmentWithPlayers_1af76bb82a38fa2247c1be96b6efc7cc7c)`(FString && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1af76bb82a38fa2247c1be96b6efc7cc7c"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.

#### `public inline void `[`ClearType`](#structFRHAPI__MatchSegmentWithPlayers_1afe765a26c85d22c1b38da4cb84a71fde)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1afe765a26c85d22c1b38da4cb84a71fde"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

#### `public inline bool `[`IsTypeSet`](#structFRHAPI__MatchSegmentWithPlayers_1ae7e2b1a48e6ae2ef7c484ee30c1bb8d4)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ae7e2b1a48e6ae2ef7c484ee30c1bb8d4"></a>

Checks whether Type_Optional has been set.

#### `public inline void `[`SetTypeToNull`](#structFRHAPI__MatchSegmentWithPlayers_1a6407e2468b0c1c517ae8321f5a1d26ef)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a6407e2468b0c1c517ae8321f5a1d26ef"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsTypeNull`](#structFRHAPI__MatchSegmentWithPlayers_1aacd1efccabd060a46ff6c132bea45e8e)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1aacd1efccabd060a46ff6c132bea45e8e"></a>

Checks whether Type_Optional is set to null.

#### `public inline ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentWithPlayers_1ab8ce9a66e688f572c141a9c917d7266e)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1ab8ce9a66e688f572c141a9c917d7266e"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentWithPlayers_1a25bcf4d162a8319dc722e31bdf4c225a)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a25bcf4d162a8319dc722e31bdf4c225a"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentWithPlayers_1ae35d048cb75244b1a8c37512406629e0)`(const ERHAPI_MatchState & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ae35d048cb75244b1a8c37512406629e0"></a>

Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetState`](#structFRHAPI__MatchSegmentWithPlayers_1ad6328a671fd64e6ef8aca03ff1d28d71)`(ERHAPI_MatchState & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ad6328a671fd64e6ef8aca03ff1d28d71"></a>

Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a1236864ee18978a8500da3d6a29d6c00)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a1236864ee18978a8500da3d6a29d6c00"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a2f3609ee7b5d56c1a50e55f63b81c122)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a2f3609ee7b5d56c1a50e55f63b81c122"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetState`](#structFRHAPI__MatchSegmentWithPlayers_1a29d0f63646d4a1fd93facdd19af797a5)`(const ERHAPI_MatchState & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a29d0f63646d4a1fd93facdd19af797a5"></a>

Sets the value of State_Optional and also sets State_IsSet to true.

#### `public inline void `[`SetState`](#structFRHAPI__MatchSegmentWithPlayers_1aca7130828c8a04513398849ef6918743)`(ERHAPI_MatchState && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1aca7130828c8a04513398849ef6918743"></a>

Sets the value of State_Optional and also sets State_IsSet to true using move semantics.

#### `public inline void `[`ClearState`](#structFRHAPI__MatchSegmentWithPlayers_1afa393bb3409f6076f9945972f9f23659)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1afa393bb3409f6076f9945972f9f23659"></a>

Clears the value of State_Optional and sets State_IsSet to false.

#### `public inline bool `[`IsStateSet`](#structFRHAPI__MatchSegmentWithPlayers_1abff78475e1ebda27ffa491f54bad2190)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1abff78475e1ebda27ffa491f54bad2190"></a>

Checks whether State_Optional has been set.

#### `public inline void `[`SetStateToNull`](#structFRHAPI__MatchSegmentWithPlayers_1aa0540f6b9c3a0471b96f6766e1de070d)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1aa0540f6b9c3a0471b96f6766e1de070d"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStateNull`](#structFRHAPI__MatchSegmentWithPlayers_1a42ccd3b380e6417d06cafbbd15c3421b)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a42ccd3b380e6417d06cafbbd15c3421b"></a>

Checks whether State_Optional is set to null.

#### `public inline FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a7e9b78ca236b1db2c3a00ec123a71dd9)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a7e9b78ca236b1db2c3a00ec123a71dd9"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1aa9b04b9b7427421abadfcbea2357699c)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1aa9b04b9b7427421abadfcbea2357699c"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1aa1f67f3e3e6d9f881ca0cd1ce25a9549)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1aa1f67f3e3e6d9f881ca0cd1ce25a9549"></a>

Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a85971b368ceb883b63e656a7d71854bf)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a85971b368ceb883b63e656a7d71854bf"></a>

Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a25ae655af8f58b68066b8ae3bed88dac)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a25ae655af8f58b68066b8ae3bed88dac"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1aa37e1a4276952f73bb14fd31304429bf)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1aa37e1a4276952f73bb14fd31304429bf"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a093da2cc9a790e1d93f4e5739de3e5d8)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a093da2cc9a790e1d93f4e5739de3e5d8"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.

#### `public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a01a572f3ac477b8e9f29849a2fcb87c1)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a01a572f3ac477b8e9f29849a2fcb87c1"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a99bdcedb9bbfb7a04d8c6a561aa69ca4)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a99bdcedb9bbfb7a04d8c6a561aa69ca4"></a>

Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.

#### `public inline bool `[`IsStartTimestampSet`](#structFRHAPI__MatchSegmentWithPlayers_1aecbd4d50b5ef722c51c1dc3a9ce16221)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1aecbd4d50b5ef722c51c1dc3a9ce16221"></a>

Checks whether StartTimestamp_Optional has been set.

#### `public inline void `[`SetStartTimestampToNull`](#structFRHAPI__MatchSegmentWithPlayers_1aeb89c70c86c87c43ba441f00cde6e81a)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1aeb89c70c86c87c43ba441f00cde6e81a"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStartTimestampNull`](#structFRHAPI__MatchSegmentWithPlayers_1ad2cf537b176881b0ce5b615c4cee01b7)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ad2cf537b176881b0ce5b615c4cee01b7"></a>

Checks whether StartTimestamp_Optional is set to null.

#### `public inline FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1af2f1943644e971ffd47c97cf6355e7fc)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1af2f1943644e971ffd47c97cf6355e7fc"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a8284b3032f6eb575a8ba702444b77b9f)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a8284b3032f6eb575a8ba702444b77b9f"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ac12cfe80a6ea97e3cc0acacb6a922ad7)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ac12cfe80a6ea97e3cc0acacb6a922ad7"></a>

Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1aa5b2ff59590f4f64ca43f00717e2198d)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1aa5b2ff59590f4f64ca43f00717e2198d"></a>

Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a591573bf681107d052e9853599008014)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a591573bf681107d052e9853599008014"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1adb691f9117333bcaa2ddbf14e016e356)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1adb691f9117333bcaa2ddbf14e016e356"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ae84da7aed2e940665e3915d30be1a4b0)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1ae84da7aed2e940665e3915d30be1a4b0"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.

#### `public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a6e938f38aa88641ad54b4f37408f3a3b)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a6e938f38aa88641ad54b4f37408f3a3b"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a0d8df68f97003699016115fabb307c88)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a0d8df68f97003699016115fabb307c88"></a>

Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.

#### `public inline bool `[`IsEndTimestampSet`](#structFRHAPI__MatchSegmentWithPlayers_1a12d7aa388e6811224696a98c327e1edd)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a12d7aa388e6811224696a98c327e1edd"></a>

Checks whether EndTimestamp_Optional has been set.

#### `public inline void `[`SetEndTimestampToNull`](#structFRHAPI__MatchSegmentWithPlayers_1a7628c688d4b241ff732f5e703c1f57d0)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a7628c688d4b241ff732f5e703c1f57d0"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsEndTimestampNull`](#structFRHAPI__MatchSegmentWithPlayers_1a9664940655348be93bd6a4b605ea33c8)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a9664940655348be93bd6a4b605ea33c8"></a>

Checks whether EndTimestamp_Optional is set to null.

#### `public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a1a4d83c04ee6ba6767b35ac38632cc64)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a1a4d83c04ee6ba6767b35ac38632cc64"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a958399136d73d66848344d1f2cb311c4)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a958399136d73d66848344d1f2cb311c4"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a42967fd66558d55c64ac57d0aa31f230)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a42967fd66558d55c64ac57d0aa31f230"></a>

Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a356b2e5248fdb4e55df1571174b388ee)`(int32 & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a356b2e5248fdb4e55df1571174b388ee"></a>

Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a7d3b739a7ac10a17fd41b1379b3825f3)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a7d3b739a7ac10a17fd41b1379b3825f3"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a160cf8ec379257e4a5847d68622d6534)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a160cf8ec379257e4a5847d68622d6534"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1ace604230193b15ac6d63e10cce8d9d90)`(const int32 & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1ace604230193b15ac6d63e10cce8d9d90"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a976ea1153878e69edcd89d3471a2ac0e)`(int32 && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a976ea1153878e69edcd89d3471a2ac0e"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a859cad510bd50f14da7ec423a7c01fca)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a859cad510bd50f14da7ec423a7c01fca"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

#### `public inline bool `[`IsDurationSecondsSet`](#structFRHAPI__MatchSegmentWithPlayers_1ad22c5e5e9b290b8a42a471561b9f10e8)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ad22c5e5e9b290b8a42a471561b9f10e8"></a>

Checks whether DurationSeconds_Optional has been set.

#### `public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchSegmentWithPlayers_1abbb72031ca57070ac395d6f7ec36c679)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1abbb72031ca57070ac395d6f7ec36c679"></a>

Returns true if DurationSeconds_Optional is set and matches the default value.

#### `public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchSegmentWithPlayers_1ad498f534581644269e95aaacc28bb0d0)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1ad498f534581644269e95aaacc28bb0d0"></a>

Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.

#### `public inline void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchSegmentWithPlayers_1a46988466ada71c628547e6712c98e01b)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a46988466ada71c628547e6712c98e01b"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchSegmentWithPlayers_1ad771a00cb8c868265b9531d3261a7729)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ad771a00cb8c868265b9531d3261a7729"></a>

Checks whether DurationSeconds_Optional is set to null.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1a735e7a29c959c667ded1bd8e84416218)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a735e7a29c959c667ded1bd8e84416218"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1a98c30f993aa8a0352fe409b430e2b012)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a98c30f993aa8a0352fe409b430e2b012"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1a5ae46a468f848de6a0895d60a37f4f9a)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a5ae46a468f848de6a0895d60a37f4f9a"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1a5ade724ffe505aec2215e2ae359a7785)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a5ade724ffe505aec2215e2ae359a7785"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a7df3b75164a7ed0919eec815b97eb2b6)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a7df3b75164a7ed0919eec815b97eb2b6"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a6876a6d303a4cc3a79408ecee07c71c0)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a6876a6d303a4cc3a79408ecee07c71c0"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1a7ae5cd1bd46b179fae38150a0b271bb1)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a7ae5cd1bd46b179fae38150a0b271bb1"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1a27539c4880d9292c5ccf8a3affe31e02)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a27539c4880d9292c5ccf8a3affe31e02"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1af69bbc7dff23cd38b47e468eb12468a3)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1af69bbc7dff23cd38b47e468eb12468a3"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchSegmentWithPlayers_1a79fb7100b3e3553e3a9f3b020623798a)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a79fb7100b3e3553e3a9f3b020623798a"></a>

Checks whether CustomData_Optional has been set.

#### `public inline void `[`SetCustomDataToNull`](#structFRHAPI__MatchSegmentWithPlayers_1aa0fe99737d6c3484998d00326cbe65c7)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1aa0fe99737d6c3484998d00326cbe65c7"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCustomDataNull`](#structFRHAPI__MatchSegmentWithPlayers_1a6e64951f947fbc94f9dad408af762024)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a6e64951f947fbc94f9dad408af762024"></a>

Checks whether CustomData_Optional is set to null.

#### `public inline FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1aeb38cb190d0982186edd6ae3b77937a8)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1aeb38cb190d0982186edd6ae3b77937a8"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1a5e8cfbbb6f338c98d3664b3207acb4bf)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a5e8cfbbb6f338c98d3664b3207acb4bf"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1aa9122dba49f8f8eaf1b499c91f4e433e)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1aa9122dba49f8f8eaf1b499c91f4e433e"></a>

Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1a6d1d580a4a2efde5f9be0de1acc84032)`(FString & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a6d1d580a4a2efde5f9be0de1acc84032"></a>

Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a924659e6933f11e776ac73f16cda774a)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a924659e6933f11e776ac73f16cda774a"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a8ddabd3adc3c8b1b1c455247d625a94e)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a8ddabd3adc3c8b1b1c455247d625a94e"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1a5caff1b7ba9b9e8bcd4497a0367a8128)`(const FString & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a5caff1b7ba9b9e8bcd4497a0367a8128"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.

#### `public inline void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1a08ae68e62ad71d8932e5e0bc733dd9f8)`(FString && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a08ae68e62ad71d8932e5e0bc733dd9f8"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.

#### `public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1a70facbc24f55ecb933e183842b709e04)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a70facbc24f55ecb933e183842b709e04"></a>

Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.

#### `public inline bool `[`IsCorrelationIdSet`](#structFRHAPI__MatchSegmentWithPlayers_1aac31895d7214e8ea684bbdddd0d4cb40)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1aac31895d7214e8ea684bbdddd0d4cb40"></a>

Checks whether CorrelationId_Optional has been set.

#### `public inline void `[`SetCorrelationIdToNull`](#structFRHAPI__MatchSegmentWithPlayers_1abd9d5e6c4e9937efab8bdc4685fa0404)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1abd9d5e6c4e9937efab8bdc4685fa0404"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCorrelationIdNull`](#structFRHAPI__MatchSegmentWithPlayers_1a9d02afe9e258eca98e4d7f905bae7cd7)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a9d02afe9e258eca98e4d7f905bae7cd7"></a>

Checks whether CorrelationId_Optional is set to null.

#### `public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1a721c49a1eb064ef5b5fae484ac80bf6f)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a721c49a1eb064ef5b5fae484ac80bf6f"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1a237d889cc877906ebce4a373c6ade5f6)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a237d889cc877906ebce4a373c6ade5f6"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1a7e1ca57b88c467733331084aea9d04ec)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a7e1ca57b88c467733331084aea9d04ec"></a>

Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1aefb00e5d968181837820d7b9d8396ead)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1aefb00e5d968181837820d7b9d8396ead"></a>

Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a3173151ee0f1eb7f6f278b869c5da8f3)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a3173151ee0f1eb7f6f278b869c5da8f3"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a2fd363b255e3974bed7a6449dbf10235)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a2fd363b255e3974bed7a6449dbf10235"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1a795d71675f953c933ca4e56dc9611a92)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a795d71675f953c933ca4e56dc9611a92"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.

#### `public inline void `[`SetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1a1569fbd7c170461ab2d933d556b80e8b)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a1569fbd7c170461ab2d933d556b80e8b"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.

#### `public inline void `[`ClearSessions`](#structFRHAPI__MatchSegmentWithPlayers_1af45381b90e7f81345393fe1ec079b45a)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1af45381b90e7f81345393fe1ec079b45a"></a>

Clears the value of Sessions_Optional and sets Sessions_IsSet to false.

#### `public inline bool `[`IsSessionsSet`](#structFRHAPI__MatchSegmentWithPlayers_1acdbc61fcbfa1df1594f1d608a79b9787)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1acdbc61fcbfa1df1594f1d608a79b9787"></a>

Checks whether Sessions_Optional has been set.

#### `public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1aa68169f29bfd304a505a5c6c126018f9)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1aa68169f29bfd304a505a5c6c126018f9"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1abc2833cd4b88542d462043ce06c9b572)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1abc2833cd4b88542d462043ce06c9b572"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1af1f774fe93e16cabb07e686bfd39bcf0)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1af1f774fe93e16cabb07e686bfd39bcf0"></a>

Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a3e45012cae3089c3f6c9fa260eca6ced)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a3e45012cae3089c3f6c9fa260eca6ced"></a>

Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a855c86479c7dbcce87390004ac370753)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a855c86479c7dbcce87390004ac370753"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1af592c7980db20eb4f1fcacfacd1d3306)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1af592c7980db20eb4f1fcacfacd1d3306"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a90c3191bbc346de2fa724db08ae970d3)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a90c3191bbc346de2fa724db08ae970d3"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true.

#### `public inline void `[`SetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a01df7d7b82515ffa2a73c6bb96e47272)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a01df7d7b82515ffa2a73c6bb96e47272"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.

#### `public inline void `[`ClearInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a6247bc3fbc11566e3249a4a00a740a8f)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a6247bc3fbc11566e3249a4a00a740a8f"></a>

Clears the value of Instances_Optional and sets Instances_IsSet to false.

#### `public inline bool `[`IsInstancesSet`](#structFRHAPI__MatchSegmentWithPlayers_1a5168f09defe2abc220069fa64263e7ed)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a5168f09defe2abc220069fa64263e7ed"></a>

Checks whether Instances_Optional has been set.

#### `public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1ad770e85cb80b948b65f51d12069c9d4e)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1ad770e85cb80b948b65f51d12069c9d4e"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a1879468a0ae408744cd9c645b0fcce8d)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a1879468a0ae408744cd9c645b0fcce8d"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a829634111512b888969a18d78667c320)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a829634111512b888969a18d78667c320"></a>

Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1aa83bc8c930dfd54e9066efc3b22cf512)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1aa83bc8c930dfd54e9066efc3b22cf512"></a>

Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a6850370587c1243a8d7eec5dc7c2fadc)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a6850370587c1243a8d7eec5dc7c2fadc"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ac165f8d1a5eb9fcf0fffb6fe81fdf42a)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ac165f8d1a5eb9fcf0fffb6fe81fdf42a"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a8fd928d7f0240ab38120ab297f1948de)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a8fd928d7f0240ab38120ab297f1948de"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.

#### `public inline void `[`SetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a62b5356d4d3f431473c15e770fd033b3)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a62b5356d4d3f431473c15e770fd033b3"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.

#### `public inline void `[`ClearAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a861e5f93aa0c9c39fad6e569e0aa8763)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a861e5f93aa0c9c39fad6e569e0aa8763"></a>

Clears the value of Allocations_Optional and sets Allocations_IsSet to false.

#### `public inline bool `[`IsAllocationsSet`](#structFRHAPI__MatchSegmentWithPlayers_1a703c35cda1f9ebbada3329cd471c6472)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a703c35cda1f9ebbada3329cd471c6472"></a>

Checks whether Allocations_Optional has been set.

#### `public inline FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentWithPlayers_1aee8ea5ce827d42a70d0bc07874346244)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1aee8ea5ce827d42a70d0bc07874346244"></a>

Gets the value of MatchSegment.

#### `public inline const FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentWithPlayers_1a39857eabaa82bb7f498c9063ed2d2702)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a39857eabaa82bb7f498c9063ed2d2702"></a>

Gets the value of MatchSegment.

#### `public inline void `[`SetMatchSegment`](#structFRHAPI__MatchSegmentWithPlayers_1ac633353ba02ff2c7c383873fce7550aa)`(const FString & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1ac633353ba02ff2c7c383873fce7550aa"></a>

Sets the value of MatchSegment.

#### `public inline void `[`SetMatchSegment`](#structFRHAPI__MatchSegmentWithPlayers_1a96692c9bc67d2295ba678a951f5aa03c)`(FString && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a96692c9bc67d2295ba678a951f5aa03c"></a>

Sets the value of MatchSegment using move semantics.

#### `public inline FString & `[`GetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1a3c7853b14866bd42bb47877c449311ff)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a3c7853b14866bd42bb47877c449311ff"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1a67930e307344d437880709b2d9b6814b)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a67930e307344d437880709b2d9b6814b"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1a160bedd2638df952ee8f4e1c752fdfe6)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a160bedd2638df952ee8f4e1c752fdfe6"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1a611846110c3cc227df68cfa09252c29f)`(FString & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a611846110c3cc227df68cfa09252c29f"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1aa53ca42d2b1ca7321d9b5e6f77c42ca8)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1aa53ca42d2b1ca7321d9b5e6f77c42ca8"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a578acc74a17cac672c44eb40698f0417)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a578acc74a17cac672c44eb40698f0417"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1af8b7494249325cac7f01dd49edfc45dd)`(const FString & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1af8b7494249325cac7f01dd49edfc45dd"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline void `[`SetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1ae08616911e245cb35bb2d2c08f916adc)`(FString && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1ae08616911e245cb35bb2d2c08f916adc"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1ada9fb5b63bc3e430f786d150021e532d)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1ada9fb5b63bc3e430f786d150021e532d"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline bool `[`IsMatchIdSet`](#structFRHAPI__MatchSegmentWithPlayers_1a188fd222e294dd4a535299e4632bf9b7)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a188fd222e294dd4a535299e4632bf9b7"></a>

Checks whether MatchId_Optional has been set.

#### `public inline TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1ab1fbe0c119f04f0f214a7a09da4bb699)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1ab1fbe0c119f04f0f214a7a09da4bb699"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a435382de2fdd58b5d6200ba3013efacb)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a435382de2fdd58b5d6200ba3013efacb"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a2606c08a39a9243f58c8dd738c027038)`(const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a2606c08a39a9243f58c8dd738c027038"></a>

Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1afc4e5cd4c781b7fbb952f413a6a0f396)`(TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1afc4e5cd4c781b7fbb952f413a6a0f396"></a>

Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a94a33848c5fa7be443e2e8aa466a51b7)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a94a33848c5fa7be443e2e8aa466a51b7"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a27d377ea9cf2d8f2c544d132f7a45c6e)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a27d377ea9cf2d8f2c544d132f7a45c6e"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1abf398fe8e5af98af600cae10c042ce72)`(const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1abf398fe8e5af98af600cae10c042ce72"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true.

#### `public inline void `[`SetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a4dad13b8171b716b0a11a565075903a2)`(TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a4dad13b8171b716b0a11a565075903a2"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a942c9f48d6a439b1a1c55c698a90b4a2)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a942c9f48d6a439b1a1c55c698a90b4a2"></a>

Clears the value of Players_Optional and sets Players_IsSet to false.

#### `public inline bool `[`IsPlayersSet`](#structFRHAPI__MatchSegmentWithPlayers_1a793d291e506e35e9e6a7a5f4ff917a17)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a793d291e506e35e9e6a7a5f4ff917a17"></a>

Checks whether Players_Optional has been set.

