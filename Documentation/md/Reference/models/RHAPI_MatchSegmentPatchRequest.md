---
title: RHAPI_MatchSegmentPatchRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchSegmentPatchRequest`](#structFRHAPI__MatchSegmentPatchRequest) | 

## struct `FRHAPI_MatchSegmentPatchRequest` <a id="structFRHAPI__MatchSegmentPatchRequest"></a>

```
struct FRHAPI_MatchSegmentPatchRequest
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Type_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1ad83ec23959ddeca26bad677bc8ab6931) | 
`public bool `[`Type_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1a81b08dc937557aaee3ffc41ed66f111e) | true if Type_Optional has been set to a value
`public bool `[`Type_IsNull`](#structFRHAPI__MatchSegmentPatchRequest_1ac71b8bb65814e82d99f834dcf8561c43) | true if Type_Optional has been explicitly set to null
`public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a2a9ddc2003678c1d3fa5bcb141536603) | 
`public bool `[`State_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1ab24b008c4e39a0a75514906bfbd01d57) | true if State_Optional has been set to a value
`public bool `[`State_IsNull`](#structFRHAPI__MatchSegmentPatchRequest_1ad8837fd43d4c27b752a2e8314e62e170) | true if State_Optional has been explicitly set to null
`public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1aebd5a7db98afc205ff397a290255cdf8) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1aa8d3d5b7706866b07e2e80ae5998e05b) | true if StartTimestamp_Optional has been set to a value
`public bool `[`StartTimestamp_IsNull`](#structFRHAPI__MatchSegmentPatchRequest_1a99c6f12004a5147a700654929d9d262e) | true if StartTimestamp_Optional has been explicitly set to null
`public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a8d99a5997317cfce133da60737f24914) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1ab857a47ff5337df3cd2ce079741be53a) | true if EndTimestamp_Optional has been set to a value
`public bool `[`EndTimestamp_IsNull`](#structFRHAPI__MatchSegmentPatchRequest_1ab442dcb9fc0450a7c1e96b5d070ca699) | true if EndTimestamp_Optional has been explicitly set to null
`public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a64f25dc08b60196f5d587f44c8da3f04) | 
`public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1a339612086f1bac76a62f6e1ec88116c0) | true if DurationSeconds_Optional has been set to a value
`public bool `[`DurationSeconds_IsNull`](#structFRHAPI__MatchSegmentPatchRequest_1a5e30833d45542f81b7c44edeb31ac70d) | true if DurationSeconds_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a4c57bd86486f841439f4f5bb2531ad10) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1a03c89ad493b796225040cfd62c7b7ea3) | true if CustomData_Optional has been set to a value
`public bool `[`CustomData_IsNull`](#structFRHAPI__MatchSegmentPatchRequest_1afb2a288eb7791ff573fb7953a6c70001) | true if CustomData_Optional has been explicitly set to null
`public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a42ea6e6e11a92376f1b1abd805117f76) | 
`public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1a6b5d1ae8fda27366e81ca60d74e86661) | true if CorrelationId_Optional has been set to a value
`public bool `[`CorrelationId_IsNull`](#structFRHAPI__MatchSegmentPatchRequest_1ad9f4b1df99c7144fa1f50af0ee88b4f1) | true if CorrelationId_Optional has been explicitly set to null
`public TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > `[`Sessions_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a06841053c38eb12626995af56ed5045f) | List of session IDs for the match.
`public bool `[`Sessions_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1ab7e354a1fc5b885930a6bc9858ca31d8) | true if Sessions_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > `[`Instances_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1adb52c73b2d3c3292480472ed9001a2f6) | List of MatchInstances for the match.
`public bool `[`Instances_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1abdee7507026e04c5c1ded1547f31bde8) | true if Instances_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > `[`Allocations_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a5cb81c63c630a60f208339d2b31825d4) | List of allocation IDs for the match.
`public bool `[`Allocations_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1a21276e99ccd8ae47c70f9829a86da844) | true if Allocations_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > `[`Players_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a3312731841e4a94d04b7ca47b5c9fcd5) | List of players in the match.
`public bool `[`Players_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1ab5887e55232dfec06183d24dbaf1dbd6) | true if Players_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchSegmentPatchRequest_1afb20f0c19150b6369cdfa82daaff61de)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchSegmentPatchRequest_1a90b20a4e243516c047f89cf876ee9e9b)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetType`](#structFRHAPI__MatchSegmentPatchRequest_1a4bf34f8de5402739a328806c5e11e7f3)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentPatchRequest_1a69b72e623865d484e1da6dbf9b3544ad)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentPatchRequest_1a4d48b787a4f061361b45b6cfe7269cad)`(const FString & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetType`](#structFRHAPI__MatchSegmentPatchRequest_1a2a74696532109cc84a585907e3bd0a7d)`(FString & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a88bac8fc5a0adf7558cb39ba28f34fff)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1aa2c8cf8c7e73b10f3abe7c42c2c100fe)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetType`](#structFRHAPI__MatchSegmentPatchRequest_1acd40885089d3f6d0b22863c0959a25d0)`(const FString & NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline void `[`SetType`](#structFRHAPI__MatchSegmentPatchRequest_1a06a01763235d9c63a60af77341275a9a)`(FString && NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.
`public inline void `[`ClearType`](#structFRHAPI__MatchSegmentPatchRequest_1a16cd35cf507846a1a5c72acce6b11896)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline bool `[`IsTypeSet`](#structFRHAPI__MatchSegmentPatchRequest_1ad85faad7533f2cc462ed1d5e7d82fdcc)`() const` | Checks whether Type_Optional has been set.
`public inline void `[`SetTypeToNull`](#structFRHAPI__MatchSegmentPatchRequest_1aa7db3c1d30339269697e1baba6cc303f)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsTypeNull`](#structFRHAPI__MatchSegmentPatchRequest_1a8a081f4bf9454b9173da6b3aa1baf001)`() const` | Checks whether Type_Optional is set to null.
`public inline ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentPatchRequest_1a856fbff58a4cdb4c3246ac474fbc3c80)`()` | Gets the value of State_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentPatchRequest_1a12079d45317cbd975f8e12f2bd78c725)`() const` | Gets the value of State_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentPatchRequest_1afd32f83202ac67562dc4cfa20b03160d)`(const ERHAPI_MatchState & DefaultValue) const` | Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetState`](#structFRHAPI__MatchSegmentPatchRequest_1ad961c90daccbc37885d8f5442c304f20)`(ERHAPI_MatchState & OutValue) const` | Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a70b7a0e7e95eab5c77cecf86e292d7e1)`()` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1add6c9bb7c83b052a54c509d1ad2f6b3b)`() const` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetState`](#structFRHAPI__MatchSegmentPatchRequest_1ac6c14828145d82a7681e891b4f5c94ac)`(const ERHAPI_MatchState & NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true.
`public inline void `[`SetState`](#structFRHAPI__MatchSegmentPatchRequest_1afbb2431a92edfce73f5ae106634fd61a)`(ERHAPI_MatchState && NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true using move semantics.
`public inline void `[`ClearState`](#structFRHAPI__MatchSegmentPatchRequest_1a1ac6736c8994648c143f83c613070e52)`()` | Clears the value of State_Optional and sets State_IsSet to false.
`public inline bool `[`IsStateSet`](#structFRHAPI__MatchSegmentPatchRequest_1a1bbd42e2a288fd1aa9657282a993084c)`() const` | Checks whether State_Optional has been set.
`public inline void `[`SetStateToNull`](#structFRHAPI__MatchSegmentPatchRequest_1aa9a4c0d724fdbff26d7791e6d7c2c1a3)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStateNull`](#structFRHAPI__MatchSegmentPatchRequest_1aadc0eb539fbafc87925d900cc1496787)`() const` | Checks whether State_Optional is set to null.
`public inline FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a5cac49d52c4824e8de654cb5fda4bfeb)`()` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a3ef9dcb8098a8de82235eaef47c5a04d)`() const` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1aa133ec548ec5e7e634b8288cd381f412)`(const FDateTime & DefaultValue) const` | Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a67f0ce8d55a80c2520b7f0462918409b)`(FDateTime & OutValue) const` | Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1afe1463550cff318924ac6a1718dd77cd)`()` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a89361c8c0cfcccff07576cc3464d8535)`() const` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a1448d13ae3116c809737dd4e86db287a)`(const FDateTime & NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.
`public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1acf0624edad188b7b042539f0164d2b4f)`(FDateTime && NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a3f80de3ff6daf670a34b781487e2f2d6)`()` | Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.
`public inline bool `[`IsStartTimestampSet`](#structFRHAPI__MatchSegmentPatchRequest_1a89c0c8b24b87609a142d2ed7178c7593)`() const` | Checks whether StartTimestamp_Optional has been set.
`public inline void `[`SetStartTimestampToNull`](#structFRHAPI__MatchSegmentPatchRequest_1adc0daecee748b55b96c01eb55d943b65)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStartTimestampNull`](#structFRHAPI__MatchSegmentPatchRequest_1aef447db72bd28112cc82302fdbb9be90)`() const` | Checks whether StartTimestamp_Optional is set to null.
`public inline FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a9048e5c3555215556784a1647041106d)`()` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1aaaae5a3196cfb1d95a052d481222ce2d)`() const` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1ac5f0ce04bcffa7875dabda3764f2f86b)`(const FDateTime & DefaultValue) const` | Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a6dd6b509813298444a2aa9bc343afabd)`(FDateTime & OutValue) const` | Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a4b360e450f791669846e51e40531aeee)`()` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1ad6f48a2304589b49555de0e3c98e99b4)`() const` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a24cebc7857f8438fd3580a9bbdfca1dd)`(const FDateTime & NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.
`public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a5aaf7a1c6ba7eead961ac08e2984775c)`(FDateTime && NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a362c7f19a723bcd801e61aba485419d3)`()` | Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.
`public inline bool `[`IsEndTimestampSet`](#structFRHAPI__MatchSegmentPatchRequest_1a5bc110aab920d74ac9f37dd420bfeb5b)`() const` | Checks whether EndTimestamp_Optional has been set.
`public inline void `[`SetEndTimestampToNull`](#structFRHAPI__MatchSegmentPatchRequest_1a49a5d14d7f1d4415d7ef251ed8da5307)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsEndTimestampNull`](#structFRHAPI__MatchSegmentPatchRequest_1a8eee355d005d157a13da7acb76c18574)`() const` | Checks whether EndTimestamp_Optional is set to null.
`public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a97747fd5358ea8d969c9d23786da3c0c)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a051901a01a5508ea6d640a1de99eecc9)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1aa2b4e98d5fa8f90a8371aafa6cfba3f1)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a31f9fca187269d30efdae9b9fa60515d)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a854d8c2075dca70b709661e53a5b6e75)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a8273fa300aa63248782a5d1e188528a2)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a88256b9fb921f8fd496f1c363df14158)`(const int32 & NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1aa4b2c0af5e6fc3dd2d4c41df10846f35)`(int32 && NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a218ccb2f457b3daf2bc1c97574ad79d3)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline bool `[`IsDurationSecondsSet`](#structFRHAPI__MatchSegmentPatchRequest_1afde6849fbeb7ef3718032422404bc4db)`() const` | Checks whether DurationSeconds_Optional has been set.
`public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchSegmentPatchRequest_1a10447ebcc9952e9d866c0b7ef034cee5)`() const` | Returns true if DurationSeconds_Optional is set and matches the default value.
`public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchSegmentPatchRequest_1aace6b71ff12ec5ad607995be1b9418b8)`()` | Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.
`public inline void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchSegmentPatchRequest_1afb56762cd351d9ba0dbbad12bbc66808)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchSegmentPatchRequest_1ad37876d96a5400e7d50c4155b315847e)`() const` | Checks whether DurationSeconds_Optional is set to null.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1a8abe8313a137d929f7f67910c1d13390)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1ac38a83d3bcc0cc17cc8bd9f8f4649c45)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1a65801da7f911b9bcaf115976af26d56a)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1aeba6fdeb43df9a7fe5549d2cf3b349fb)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1aa1b60cf9201144c6cddd614b5132f64c)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a00e8946d52c249fdd50a1529ec98bfa5)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1a7547f588fe01b61bbf3a023b1dd3b4b9)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1aac05425ad2b6a2a438d92d49490d0f97)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1a6d9bc923f704e913f7056cbf3e6c3616)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchSegmentPatchRequest_1a3756fcf179c28abf21c11f5ac973d786)`() const` | Checks whether CustomData_Optional has been set.
`public inline void `[`SetCustomDataToNull`](#structFRHAPI__MatchSegmentPatchRequest_1a6290d9cd5fb226f8e1291a48c369603b)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCustomDataNull`](#structFRHAPI__MatchSegmentPatchRequest_1a56ec9a60a10c87a8913b6049ce2d5877)`() const` | Checks whether CustomData_Optional is set to null.
`public inline FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a886617227dc5f4f023742efafd0a533d)`()` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a92dfc5b6f31a34bfe95f0f98af137425)`() const` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1aaddc26c2aba81d35587734bd073cff18)`(const FString & DefaultValue) const` | Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a0526fb9e70b92bbfc276a94a63997c79)`(FString & OutValue) const` | Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a0b1efd0b5f41c858f7978900be8085fc)`()` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1adc70c193891b535d2899fb76cc5dfbdf)`() const` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a563179f74cdcb6a4e946e1fb9a87a353)`(const FString & NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.
`public inline void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a536d0c1dbca8b2ff899451dbf1595f89)`(FString && NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.
`public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a81cc453b6b2531fc4a95500826fcf8b1)`()` | Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.
`public inline bool `[`IsCorrelationIdSet`](#structFRHAPI__MatchSegmentPatchRequest_1ab702e1f8fee55224694054558e456ce4)`() const` | Checks whether CorrelationId_Optional has been set.
`public inline void `[`SetCorrelationIdToNull`](#structFRHAPI__MatchSegmentPatchRequest_1adca98e397c80ed70887439c07eb6d07b)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCorrelationIdNull`](#structFRHAPI__MatchSegmentPatchRequest_1a67b1540c32943ebbba15845097070a14)`() const` | Checks whether CorrelationId_Optional is set to null.
`public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1aa4bc209fe684916ce9cbacdd70e60084)`()` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1a932bf84e1e52cfe05a7cf08fe22dcf14)`() const` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1a9436bd604b9bd05b22e362033c1db152)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` | Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1a4219b32b4b8c365cd5e06d9ffc1ddbd8)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` | Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1af2daf49fb33891e78cb932f911a56a57)`()` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1aa31ce491aa8ceeced2dbad0662e3faf3)`() const` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1a048c5b90dc687d2963cc0a31734cd565)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.
`public inline void `[`SetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1ae289593e2bfc8b0e600e38cde1676cd1)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.
`public inline void `[`ClearSessions`](#structFRHAPI__MatchSegmentPatchRequest_1ac73a2dacadc0065c4bd4976e71dc2234)`()` | Clears the value of Sessions_Optional and sets Sessions_IsSet to false.
`public inline bool `[`IsSessionsSet`](#structFRHAPI__MatchSegmentPatchRequest_1ab18fb5b0aeabc465dea5a92660bf2bbb)`() const` | Checks whether Sessions_Optional has been set.
`public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1a3157d822c97ba17968d9a3bffc574204)`()` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1a1855de1d8b4f7f2bd161e410c813800e)`() const` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1ab966b26f82171c60b4a9d016b739bb49)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` | Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1a64ab4a803005f5b55139979dc458efb5)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` | Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1aa6f89aaba8c3195cbeff11582268dda4)`()` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1ab14ca0d894f9a2273de3617e71b7b7d3)`() const` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1afb9db2aa867feec089f1594331c0cd89)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true.
`public inline void `[`SetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1aaab510fc2844f54fbde1a03335cbf410)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.
`public inline void `[`ClearInstances`](#structFRHAPI__MatchSegmentPatchRequest_1aba08455b31cbb849f6abf9f806fdec59)`()` | Clears the value of Instances_Optional and sets Instances_IsSet to false.
`public inline bool `[`IsInstancesSet`](#structFRHAPI__MatchSegmentPatchRequest_1aa557d56417b85892b8fd41890409eab0)`() const` | Checks whether Instances_Optional has been set.
`public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1a98f79b9c43adc27371e4589b2b2a8498)`()` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1a53a75566fbda8dff096f59fceb011b39)`() const` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1aa8128929b4bab03ff46c2414303b038c)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` | Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1afcd5ad3a96affdc4bdce20aa8ad695d9)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` | Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a254648864c0534b67cb2ea6407ee738e)`()` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a82c3fe2ff5b07eacfa11770334a96467)`() const` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1ae541f5845e7250ed45490eb841c70a34)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.
`public inline void `[`SetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1aea04326119f040c7ec4886227d695c51)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.
`public inline void `[`ClearAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1aac741b53da2295fffa2bff80e21f0148)`()` | Clears the value of Allocations_Optional and sets Allocations_IsSet to false.
`public inline bool `[`IsAllocationsSet`](#structFRHAPI__MatchSegmentPatchRequest_1abaa0a53f4ae45a059e63410fc1ef6685)`() const` | Checks whether Allocations_Optional has been set.
`public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1a86d5ba1df051ccecfe17d02ed07a41ac)`()` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1a8387d7348c660eafdd1c171cb4b9bc19)`() const` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1a988bac85e82d2643fda359a48e47face)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & DefaultValue) const` | Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1ad4a4346778da157c5fd68b59e83b5bd2)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & OutValue) const` | Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1ae203dfe285cdcb9111df04ac9000e608)`()` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a411dfdf8141afd5a95f7b5148544ff31)`() const` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1ae9812ba4dd7668bef9cb27f144d41ec6)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true.
`public inline void `[`SetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1a4e7046c9333bc259337fc65c0323839f)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > && NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.
`public inline void `[`ClearPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1aa6a63dd8627e54f28f49d00dbee501b8)`()` | Clears the value of Players_Optional and sets Players_IsSet to false.
`public inline bool `[`IsPlayersSet`](#structFRHAPI__MatchSegmentPatchRequest_1a9c4d82b78ab45b3f6f8ea37934fd01ef)`() const` | Checks whether Players_Optional has been set.

### Members

#### `public FString `[`Type_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1ad83ec23959ddeca26bad677bc8ab6931) <a id="structFRHAPI__MatchSegmentPatchRequest_1ad83ec23959ddeca26bad677bc8ab6931"></a>

#### `public bool `[`Type_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1a81b08dc937557aaee3ffc41ed66f111e) <a id="structFRHAPI__MatchSegmentPatchRequest_1a81b08dc937557aaee3ffc41ed66f111e"></a>

true if Type_Optional has been set to a value

#### `public bool `[`Type_IsNull`](#structFRHAPI__MatchSegmentPatchRequest_1ac71b8bb65814e82d99f834dcf8561c43) <a id="structFRHAPI__MatchSegmentPatchRequest_1ac71b8bb65814e82d99f834dcf8561c43"></a>

true if Type_Optional has been explicitly set to null

#### `public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a2a9ddc2003678c1d3fa5bcb141536603) <a id="structFRHAPI__MatchSegmentPatchRequest_1a2a9ddc2003678c1d3fa5bcb141536603"></a>

#### `public bool `[`State_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1ab24b008c4e39a0a75514906bfbd01d57) <a id="structFRHAPI__MatchSegmentPatchRequest_1ab24b008c4e39a0a75514906bfbd01d57"></a>

true if State_Optional has been set to a value

#### `public bool `[`State_IsNull`](#structFRHAPI__MatchSegmentPatchRequest_1ad8837fd43d4c27b752a2e8314e62e170) <a id="structFRHAPI__MatchSegmentPatchRequest_1ad8837fd43d4c27b752a2e8314e62e170"></a>

true if State_Optional has been explicitly set to null

#### `public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1aebd5a7db98afc205ff397a290255cdf8) <a id="structFRHAPI__MatchSegmentPatchRequest_1aebd5a7db98afc205ff397a290255cdf8"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1aa8d3d5b7706866b07e2e80ae5998e05b) <a id="structFRHAPI__MatchSegmentPatchRequest_1aa8d3d5b7706866b07e2e80ae5998e05b"></a>

true if StartTimestamp_Optional has been set to a value

#### `public bool `[`StartTimestamp_IsNull`](#structFRHAPI__MatchSegmentPatchRequest_1a99c6f12004a5147a700654929d9d262e) <a id="structFRHAPI__MatchSegmentPatchRequest_1a99c6f12004a5147a700654929d9d262e"></a>

true if StartTimestamp_Optional has been explicitly set to null

#### `public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a8d99a5997317cfce133da60737f24914) <a id="structFRHAPI__MatchSegmentPatchRequest_1a8d99a5997317cfce133da60737f24914"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1ab857a47ff5337df3cd2ce079741be53a) <a id="structFRHAPI__MatchSegmentPatchRequest_1ab857a47ff5337df3cd2ce079741be53a"></a>

true if EndTimestamp_Optional has been set to a value

#### `public bool `[`EndTimestamp_IsNull`](#structFRHAPI__MatchSegmentPatchRequest_1ab442dcb9fc0450a7c1e96b5d070ca699) <a id="structFRHAPI__MatchSegmentPatchRequest_1ab442dcb9fc0450a7c1e96b5d070ca699"></a>

true if EndTimestamp_Optional has been explicitly set to null

#### `public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a64f25dc08b60196f5d587f44c8da3f04) <a id="structFRHAPI__MatchSegmentPatchRequest_1a64f25dc08b60196f5d587f44c8da3f04"></a>

#### `public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1a339612086f1bac76a62f6e1ec88116c0) <a id="structFRHAPI__MatchSegmentPatchRequest_1a339612086f1bac76a62f6e1ec88116c0"></a>

true if DurationSeconds_Optional has been set to a value

#### `public bool `[`DurationSeconds_IsNull`](#structFRHAPI__MatchSegmentPatchRequest_1a5e30833d45542f81b7c44edeb31ac70d) <a id="structFRHAPI__MatchSegmentPatchRequest_1a5e30833d45542f81b7c44edeb31ac70d"></a>

true if DurationSeconds_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a4c57bd86486f841439f4f5bb2531ad10) <a id="structFRHAPI__MatchSegmentPatchRequest_1a4c57bd86486f841439f4f5bb2531ad10"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1a03c89ad493b796225040cfd62c7b7ea3) <a id="structFRHAPI__MatchSegmentPatchRequest_1a03c89ad493b796225040cfd62c7b7ea3"></a>

true if CustomData_Optional has been set to a value

#### `public bool `[`CustomData_IsNull`](#structFRHAPI__MatchSegmentPatchRequest_1afb2a288eb7791ff573fb7953a6c70001) <a id="structFRHAPI__MatchSegmentPatchRequest_1afb2a288eb7791ff573fb7953a6c70001"></a>

true if CustomData_Optional has been explicitly set to null

#### `public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a42ea6e6e11a92376f1b1abd805117f76) <a id="structFRHAPI__MatchSegmentPatchRequest_1a42ea6e6e11a92376f1b1abd805117f76"></a>

#### `public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1a6b5d1ae8fda27366e81ca60d74e86661) <a id="structFRHAPI__MatchSegmentPatchRequest_1a6b5d1ae8fda27366e81ca60d74e86661"></a>

true if CorrelationId_Optional has been set to a value

#### `public bool `[`CorrelationId_IsNull`](#structFRHAPI__MatchSegmentPatchRequest_1ad9f4b1df99c7144fa1f50af0ee88b4f1) <a id="structFRHAPI__MatchSegmentPatchRequest_1ad9f4b1df99c7144fa1f50af0ee88b4f1"></a>

true if CorrelationId_Optional has been explicitly set to null

#### `public TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > `[`Sessions_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a06841053c38eb12626995af56ed5045f) <a id="structFRHAPI__MatchSegmentPatchRequest_1a06841053c38eb12626995af56ed5045f"></a>

List of session IDs for the match.

#### `public bool `[`Sessions_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1ab7e354a1fc5b885930a6bc9858ca31d8) <a id="structFRHAPI__MatchSegmentPatchRequest_1ab7e354a1fc5b885930a6bc9858ca31d8"></a>

true if Sessions_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > `[`Instances_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1adb52c73b2d3c3292480472ed9001a2f6) <a id="structFRHAPI__MatchSegmentPatchRequest_1adb52c73b2d3c3292480472ed9001a2f6"></a>

List of MatchInstances for the match.

#### `public bool `[`Instances_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1abdee7507026e04c5c1ded1547f31bde8) <a id="structFRHAPI__MatchSegmentPatchRequest_1abdee7507026e04c5c1ded1547f31bde8"></a>

true if Instances_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > `[`Allocations_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a5cb81c63c630a60f208339d2b31825d4) <a id="structFRHAPI__MatchSegmentPatchRequest_1a5cb81c63c630a60f208339d2b31825d4"></a>

List of allocation IDs for the match.

#### `public bool `[`Allocations_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1a21276e99ccd8ae47c70f9829a86da844) <a id="structFRHAPI__MatchSegmentPatchRequest_1a21276e99ccd8ae47c70f9829a86da844"></a>

true if Allocations_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > `[`Players_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a3312731841e4a94d04b7ca47b5c9fcd5) <a id="structFRHAPI__MatchSegmentPatchRequest_1a3312731841e4a94d04b7ca47b5c9fcd5"></a>

List of players in the match.

#### `public bool `[`Players_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1ab5887e55232dfec06183d24dbaf1dbd6) <a id="structFRHAPI__MatchSegmentPatchRequest_1ab5887e55232dfec06183d24dbaf1dbd6"></a>

true if Players_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchSegmentPatchRequest_1afb20f0c19150b6369cdfa82daaff61de)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1afb20f0c19150b6369cdfa82daaff61de"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchSegmentPatchRequest_1a90b20a4e243516c047f89cf876ee9e9b)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a90b20a4e243516c047f89cf876ee9e9b"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetType`](#structFRHAPI__MatchSegmentPatchRequest_1a4bf34f8de5402739a328806c5e11e7f3)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a4bf34f8de5402739a328806c5e11e7f3"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentPatchRequest_1a69b72e623865d484e1da6dbf9b3544ad)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a69b72e623865d484e1da6dbf9b3544ad"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentPatchRequest_1a4d48b787a4f061361b45b6cfe7269cad)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a4d48b787a4f061361b45b6cfe7269cad"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetType`](#structFRHAPI__MatchSegmentPatchRequest_1a2a74696532109cc84a585907e3bd0a7d)`(FString & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a2a74696532109cc84a585907e3bd0a7d"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a88bac8fc5a0adf7558cb39ba28f34fff)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a88bac8fc5a0adf7558cb39ba28f34fff"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1aa2c8cf8c7e73b10f3abe7c42c2c100fe)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1aa2c8cf8c7e73b10f3abe7c42c2c100fe"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetType`](#structFRHAPI__MatchSegmentPatchRequest_1acd40885089d3f6d0b22863c0959a25d0)`(const FString & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1acd40885089d3f6d0b22863c0959a25d0"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

#### `public inline void `[`SetType`](#structFRHAPI__MatchSegmentPatchRequest_1a06a01763235d9c63a60af77341275a9a)`(FString && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a06a01763235d9c63a60af77341275a9a"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.

#### `public inline void `[`ClearType`](#structFRHAPI__MatchSegmentPatchRequest_1a16cd35cf507846a1a5c72acce6b11896)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a16cd35cf507846a1a5c72acce6b11896"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

#### `public inline bool `[`IsTypeSet`](#structFRHAPI__MatchSegmentPatchRequest_1ad85faad7533f2cc462ed1d5e7d82fdcc)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1ad85faad7533f2cc462ed1d5e7d82fdcc"></a>

Checks whether Type_Optional has been set.

#### `public inline void `[`SetTypeToNull`](#structFRHAPI__MatchSegmentPatchRequest_1aa7db3c1d30339269697e1baba6cc303f)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1aa7db3c1d30339269697e1baba6cc303f"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsTypeNull`](#structFRHAPI__MatchSegmentPatchRequest_1a8a081f4bf9454b9173da6b3aa1baf001)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a8a081f4bf9454b9173da6b3aa1baf001"></a>

Checks whether Type_Optional is set to null.

#### `public inline ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentPatchRequest_1a856fbff58a4cdb4c3246ac474fbc3c80)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a856fbff58a4cdb4c3246ac474fbc3c80"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentPatchRequest_1a12079d45317cbd975f8e12f2bd78c725)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a12079d45317cbd975f8e12f2bd78c725"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentPatchRequest_1afd32f83202ac67562dc4cfa20b03160d)`(const ERHAPI_MatchState & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1afd32f83202ac67562dc4cfa20b03160d"></a>

Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetState`](#structFRHAPI__MatchSegmentPatchRequest_1ad961c90daccbc37885d8f5442c304f20)`(ERHAPI_MatchState & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1ad961c90daccbc37885d8f5442c304f20"></a>

Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a70b7a0e7e95eab5c77cecf86e292d7e1)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a70b7a0e7e95eab5c77cecf86e292d7e1"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1add6c9bb7c83b052a54c509d1ad2f6b3b)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1add6c9bb7c83b052a54c509d1ad2f6b3b"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetState`](#structFRHAPI__MatchSegmentPatchRequest_1ac6c14828145d82a7681e891b4f5c94ac)`(const ERHAPI_MatchState & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1ac6c14828145d82a7681e891b4f5c94ac"></a>

Sets the value of State_Optional and also sets State_IsSet to true.

#### `public inline void `[`SetState`](#structFRHAPI__MatchSegmentPatchRequest_1afbb2431a92edfce73f5ae106634fd61a)`(ERHAPI_MatchState && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1afbb2431a92edfce73f5ae106634fd61a"></a>

Sets the value of State_Optional and also sets State_IsSet to true using move semantics.

#### `public inline void `[`ClearState`](#structFRHAPI__MatchSegmentPatchRequest_1a1ac6736c8994648c143f83c613070e52)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a1ac6736c8994648c143f83c613070e52"></a>

Clears the value of State_Optional and sets State_IsSet to false.

#### `public inline bool `[`IsStateSet`](#structFRHAPI__MatchSegmentPatchRequest_1a1bbd42e2a288fd1aa9657282a993084c)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a1bbd42e2a288fd1aa9657282a993084c"></a>

Checks whether State_Optional has been set.

#### `public inline void `[`SetStateToNull`](#structFRHAPI__MatchSegmentPatchRequest_1aa9a4c0d724fdbff26d7791e6d7c2c1a3)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1aa9a4c0d724fdbff26d7791e6d7c2c1a3"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStateNull`](#structFRHAPI__MatchSegmentPatchRequest_1aadc0eb539fbafc87925d900cc1496787)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1aadc0eb539fbafc87925d900cc1496787"></a>

Checks whether State_Optional is set to null.

#### `public inline FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a5cac49d52c4824e8de654cb5fda4bfeb)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a5cac49d52c4824e8de654cb5fda4bfeb"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a3ef9dcb8098a8de82235eaef47c5a04d)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a3ef9dcb8098a8de82235eaef47c5a04d"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1aa133ec548ec5e7e634b8288cd381f412)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1aa133ec548ec5e7e634b8288cd381f412"></a>

Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a67f0ce8d55a80c2520b7f0462918409b)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a67f0ce8d55a80c2520b7f0462918409b"></a>

Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1afe1463550cff318924ac6a1718dd77cd)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1afe1463550cff318924ac6a1718dd77cd"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a89361c8c0cfcccff07576cc3464d8535)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a89361c8c0cfcccff07576cc3464d8535"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a1448d13ae3116c809737dd4e86db287a)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a1448d13ae3116c809737dd4e86db287a"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.

#### `public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1acf0624edad188b7b042539f0164d2b4f)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1acf0624edad188b7b042539f0164d2b4f"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a3f80de3ff6daf670a34b781487e2f2d6)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a3f80de3ff6daf670a34b781487e2f2d6"></a>

Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.

#### `public inline bool `[`IsStartTimestampSet`](#structFRHAPI__MatchSegmentPatchRequest_1a89c0c8b24b87609a142d2ed7178c7593)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a89c0c8b24b87609a142d2ed7178c7593"></a>

Checks whether StartTimestamp_Optional has been set.

#### `public inline void `[`SetStartTimestampToNull`](#structFRHAPI__MatchSegmentPatchRequest_1adc0daecee748b55b96c01eb55d943b65)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1adc0daecee748b55b96c01eb55d943b65"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStartTimestampNull`](#structFRHAPI__MatchSegmentPatchRequest_1aef447db72bd28112cc82302fdbb9be90)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1aef447db72bd28112cc82302fdbb9be90"></a>

Checks whether StartTimestamp_Optional is set to null.

#### `public inline FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a9048e5c3555215556784a1647041106d)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a9048e5c3555215556784a1647041106d"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1aaaae5a3196cfb1d95a052d481222ce2d)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1aaaae5a3196cfb1d95a052d481222ce2d"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1ac5f0ce04bcffa7875dabda3764f2f86b)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1ac5f0ce04bcffa7875dabda3764f2f86b"></a>

Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a6dd6b509813298444a2aa9bc343afabd)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a6dd6b509813298444a2aa9bc343afabd"></a>

Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a4b360e450f791669846e51e40531aeee)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a4b360e450f791669846e51e40531aeee"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1ad6f48a2304589b49555de0e3c98e99b4)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1ad6f48a2304589b49555de0e3c98e99b4"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a24cebc7857f8438fd3580a9bbdfca1dd)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a24cebc7857f8438fd3580a9bbdfca1dd"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.

#### `public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a5aaf7a1c6ba7eead961ac08e2984775c)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a5aaf7a1c6ba7eead961ac08e2984775c"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a362c7f19a723bcd801e61aba485419d3)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a362c7f19a723bcd801e61aba485419d3"></a>

Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.

#### `public inline bool `[`IsEndTimestampSet`](#structFRHAPI__MatchSegmentPatchRequest_1a5bc110aab920d74ac9f37dd420bfeb5b)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a5bc110aab920d74ac9f37dd420bfeb5b"></a>

Checks whether EndTimestamp_Optional has been set.

#### `public inline void `[`SetEndTimestampToNull`](#structFRHAPI__MatchSegmentPatchRequest_1a49a5d14d7f1d4415d7ef251ed8da5307)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a49a5d14d7f1d4415d7ef251ed8da5307"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsEndTimestampNull`](#structFRHAPI__MatchSegmentPatchRequest_1a8eee355d005d157a13da7acb76c18574)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a8eee355d005d157a13da7acb76c18574"></a>

Checks whether EndTimestamp_Optional is set to null.

#### `public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a97747fd5358ea8d969c9d23786da3c0c)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a97747fd5358ea8d969c9d23786da3c0c"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a051901a01a5508ea6d640a1de99eecc9)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a051901a01a5508ea6d640a1de99eecc9"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1aa2b4e98d5fa8f90a8371aafa6cfba3f1)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1aa2b4e98d5fa8f90a8371aafa6cfba3f1"></a>

Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a31f9fca187269d30efdae9b9fa60515d)`(int32 & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a31f9fca187269d30efdae9b9fa60515d"></a>

Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a854d8c2075dca70b709661e53a5b6e75)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a854d8c2075dca70b709661e53a5b6e75"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a8273fa300aa63248782a5d1e188528a2)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a8273fa300aa63248782a5d1e188528a2"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a88256b9fb921f8fd496f1c363df14158)`(const int32 & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a88256b9fb921f8fd496f1c363df14158"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1aa4b2c0af5e6fc3dd2d4c41df10846f35)`(int32 && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1aa4b2c0af5e6fc3dd2d4c41df10846f35"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a218ccb2f457b3daf2bc1c97574ad79d3)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a218ccb2f457b3daf2bc1c97574ad79d3"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

#### `public inline bool `[`IsDurationSecondsSet`](#structFRHAPI__MatchSegmentPatchRequest_1afde6849fbeb7ef3718032422404bc4db)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1afde6849fbeb7ef3718032422404bc4db"></a>

Checks whether DurationSeconds_Optional has been set.

#### `public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchSegmentPatchRequest_1a10447ebcc9952e9d866c0b7ef034cee5)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a10447ebcc9952e9d866c0b7ef034cee5"></a>

Returns true if DurationSeconds_Optional is set and matches the default value.

#### `public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchSegmentPatchRequest_1aace6b71ff12ec5ad607995be1b9418b8)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1aace6b71ff12ec5ad607995be1b9418b8"></a>

Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.

#### `public inline void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchSegmentPatchRequest_1afb56762cd351d9ba0dbbad12bbc66808)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1afb56762cd351d9ba0dbbad12bbc66808"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchSegmentPatchRequest_1ad37876d96a5400e7d50c4155b315847e)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1ad37876d96a5400e7d50c4155b315847e"></a>

Checks whether DurationSeconds_Optional is set to null.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1a8abe8313a137d929f7f67910c1d13390)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a8abe8313a137d929f7f67910c1d13390"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1ac38a83d3bcc0cc17cc8bd9f8f4649c45)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1ac38a83d3bcc0cc17cc8bd9f8f4649c45"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1a65801da7f911b9bcaf115976af26d56a)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a65801da7f911b9bcaf115976af26d56a"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1aeba6fdeb43df9a7fe5549d2cf3b349fb)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1aeba6fdeb43df9a7fe5549d2cf3b349fb"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1aa1b60cf9201144c6cddd614b5132f64c)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1aa1b60cf9201144c6cddd614b5132f64c"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a00e8946d52c249fdd50a1529ec98bfa5)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a00e8946d52c249fdd50a1529ec98bfa5"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1a7547f588fe01b61bbf3a023b1dd3b4b9)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a7547f588fe01b61bbf3a023b1dd3b4b9"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1aac05425ad2b6a2a438d92d49490d0f97)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1aac05425ad2b6a2a438d92d49490d0f97"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1a6d9bc923f704e913f7056cbf3e6c3616)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a6d9bc923f704e913f7056cbf3e6c3616"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchSegmentPatchRequest_1a3756fcf179c28abf21c11f5ac973d786)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a3756fcf179c28abf21c11f5ac973d786"></a>

Checks whether CustomData_Optional has been set.

#### `public inline void `[`SetCustomDataToNull`](#structFRHAPI__MatchSegmentPatchRequest_1a6290d9cd5fb226f8e1291a48c369603b)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a6290d9cd5fb226f8e1291a48c369603b"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCustomDataNull`](#structFRHAPI__MatchSegmentPatchRequest_1a56ec9a60a10c87a8913b6049ce2d5877)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a56ec9a60a10c87a8913b6049ce2d5877"></a>

Checks whether CustomData_Optional is set to null.

#### `public inline FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a886617227dc5f4f023742efafd0a533d)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a886617227dc5f4f023742efafd0a533d"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a92dfc5b6f31a34bfe95f0f98af137425)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a92dfc5b6f31a34bfe95f0f98af137425"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1aaddc26c2aba81d35587734bd073cff18)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1aaddc26c2aba81d35587734bd073cff18"></a>

Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a0526fb9e70b92bbfc276a94a63997c79)`(FString & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a0526fb9e70b92bbfc276a94a63997c79"></a>

Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a0b1efd0b5f41c858f7978900be8085fc)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a0b1efd0b5f41c858f7978900be8085fc"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1adc70c193891b535d2899fb76cc5dfbdf)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1adc70c193891b535d2899fb76cc5dfbdf"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a563179f74cdcb6a4e946e1fb9a87a353)`(const FString & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a563179f74cdcb6a4e946e1fb9a87a353"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.

#### `public inline void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a536d0c1dbca8b2ff899451dbf1595f89)`(FString && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a536d0c1dbca8b2ff899451dbf1595f89"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.

#### `public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a81cc453b6b2531fc4a95500826fcf8b1)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a81cc453b6b2531fc4a95500826fcf8b1"></a>

Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.

#### `public inline bool `[`IsCorrelationIdSet`](#structFRHAPI__MatchSegmentPatchRequest_1ab702e1f8fee55224694054558e456ce4)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1ab702e1f8fee55224694054558e456ce4"></a>

Checks whether CorrelationId_Optional has been set.

#### `public inline void `[`SetCorrelationIdToNull`](#structFRHAPI__MatchSegmentPatchRequest_1adca98e397c80ed70887439c07eb6d07b)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1adca98e397c80ed70887439c07eb6d07b"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCorrelationIdNull`](#structFRHAPI__MatchSegmentPatchRequest_1a67b1540c32943ebbba15845097070a14)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a67b1540c32943ebbba15845097070a14"></a>

Checks whether CorrelationId_Optional is set to null.

#### `public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1aa4bc209fe684916ce9cbacdd70e60084)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1aa4bc209fe684916ce9cbacdd70e60084"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1a932bf84e1e52cfe05a7cf08fe22dcf14)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a932bf84e1e52cfe05a7cf08fe22dcf14"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1a9436bd604b9bd05b22e362033c1db152)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a9436bd604b9bd05b22e362033c1db152"></a>

Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1a4219b32b4b8c365cd5e06d9ffc1ddbd8)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a4219b32b4b8c365cd5e06d9ffc1ddbd8"></a>

Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1af2daf49fb33891e78cb932f911a56a57)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1af2daf49fb33891e78cb932f911a56a57"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1aa31ce491aa8ceeced2dbad0662e3faf3)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1aa31ce491aa8ceeced2dbad0662e3faf3"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1a048c5b90dc687d2963cc0a31734cd565)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a048c5b90dc687d2963cc0a31734cd565"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.

#### `public inline void `[`SetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1ae289593e2bfc8b0e600e38cde1676cd1)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1ae289593e2bfc8b0e600e38cde1676cd1"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.

#### `public inline void `[`ClearSessions`](#structFRHAPI__MatchSegmentPatchRequest_1ac73a2dacadc0065c4bd4976e71dc2234)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1ac73a2dacadc0065c4bd4976e71dc2234"></a>

Clears the value of Sessions_Optional and sets Sessions_IsSet to false.

#### `public inline bool `[`IsSessionsSet`](#structFRHAPI__MatchSegmentPatchRequest_1ab18fb5b0aeabc465dea5a92660bf2bbb)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1ab18fb5b0aeabc465dea5a92660bf2bbb"></a>

Checks whether Sessions_Optional has been set.

#### `public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1a3157d822c97ba17968d9a3bffc574204)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a3157d822c97ba17968d9a3bffc574204"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1a1855de1d8b4f7f2bd161e410c813800e)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a1855de1d8b4f7f2bd161e410c813800e"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1ab966b26f82171c60b4a9d016b739bb49)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1ab966b26f82171c60b4a9d016b739bb49"></a>

Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1a64ab4a803005f5b55139979dc458efb5)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a64ab4a803005f5b55139979dc458efb5"></a>

Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1aa6f89aaba8c3195cbeff11582268dda4)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1aa6f89aaba8c3195cbeff11582268dda4"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1ab14ca0d894f9a2273de3617e71b7b7d3)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1ab14ca0d894f9a2273de3617e71b7b7d3"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1afb9db2aa867feec089f1594331c0cd89)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1afb9db2aa867feec089f1594331c0cd89"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true.

#### `public inline void `[`SetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1aaab510fc2844f54fbde1a03335cbf410)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1aaab510fc2844f54fbde1a03335cbf410"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.

#### `public inline void `[`ClearInstances`](#structFRHAPI__MatchSegmentPatchRequest_1aba08455b31cbb849f6abf9f806fdec59)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1aba08455b31cbb849f6abf9f806fdec59"></a>

Clears the value of Instances_Optional and sets Instances_IsSet to false.

#### `public inline bool `[`IsInstancesSet`](#structFRHAPI__MatchSegmentPatchRequest_1aa557d56417b85892b8fd41890409eab0)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1aa557d56417b85892b8fd41890409eab0"></a>

Checks whether Instances_Optional has been set.

#### `public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1a98f79b9c43adc27371e4589b2b2a8498)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a98f79b9c43adc27371e4589b2b2a8498"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1a53a75566fbda8dff096f59fceb011b39)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a53a75566fbda8dff096f59fceb011b39"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1aa8128929b4bab03ff46c2414303b038c)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1aa8128929b4bab03ff46c2414303b038c"></a>

Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1afcd5ad3a96affdc4bdce20aa8ad695d9)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1afcd5ad3a96affdc4bdce20aa8ad695d9"></a>

Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a254648864c0534b67cb2ea6407ee738e)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a254648864c0534b67cb2ea6407ee738e"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a82c3fe2ff5b07eacfa11770334a96467)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a82c3fe2ff5b07eacfa11770334a96467"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1ae541f5845e7250ed45490eb841c70a34)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1ae541f5845e7250ed45490eb841c70a34"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.

#### `public inline void `[`SetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1aea04326119f040c7ec4886227d695c51)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1aea04326119f040c7ec4886227d695c51"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.

#### `public inline void `[`ClearAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1aac741b53da2295fffa2bff80e21f0148)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1aac741b53da2295fffa2bff80e21f0148"></a>

Clears the value of Allocations_Optional and sets Allocations_IsSet to false.

#### `public inline bool `[`IsAllocationsSet`](#structFRHAPI__MatchSegmentPatchRequest_1abaa0a53f4ae45a059e63410fc1ef6685)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1abaa0a53f4ae45a059e63410fc1ef6685"></a>

Checks whether Allocations_Optional has been set.

#### `public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1a86d5ba1df051ccecfe17d02ed07a41ac)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a86d5ba1df051ccecfe17d02ed07a41ac"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1a8387d7348c660eafdd1c171cb4b9bc19)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a8387d7348c660eafdd1c171cb4b9bc19"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1a988bac85e82d2643fda359a48e47face)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a988bac85e82d2643fda359a48e47face"></a>

Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1ad4a4346778da157c5fd68b59e83b5bd2)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1ad4a4346778da157c5fd68b59e83b5bd2"></a>

Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1ae203dfe285cdcb9111df04ac9000e608)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1ae203dfe285cdcb9111df04ac9000e608"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a411dfdf8141afd5a95f7b5148544ff31)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a411dfdf8141afd5a95f7b5148544ff31"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1ae9812ba4dd7668bef9cb27f144d41ec6)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1ae9812ba4dd7668bef9cb27f144d41ec6"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true.

#### `public inline void `[`SetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1a4e7046c9333bc259337fc65c0323839f)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a4e7046c9333bc259337fc65c0323839f"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1aa6a63dd8627e54f28f49d00dbee501b8)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1aa6a63dd8627e54f28f49d00dbee501b8"></a>

Clears the value of Players_Optional and sets Players_IsSet to false.

#### `public inline bool `[`IsPlayersSet`](#structFRHAPI__MatchSegmentPatchRequest_1a9c4d82b78ab45b3f6f8ea37934fd01ef)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a9c4d82b78ab45b3f6f8ea37934fd01ef"></a>

Checks whether Players_Optional has been set.

