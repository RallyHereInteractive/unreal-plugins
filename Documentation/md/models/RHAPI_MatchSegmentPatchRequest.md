# group `RHAPI_MatchSegmentPatchRequest` <a id="group__RHAPI__MatchSegmentPatchRequest"></a>

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
`public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a2a9ddc2003678c1d3fa5bcb141536603) | 
`public bool `[`State_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1ab24b008c4e39a0a75514906bfbd01d57) | true if State_Optional has been set to a value
`public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1aebd5a7db98afc205ff397a290255cdf8) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1aa8d3d5b7706866b07e2e80ae5998e05b) | true if StartTimestamp_Optional has been set to a value
`public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a8d99a5997317cfce133da60737f24914) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1ab857a47ff5337df3cd2ce079741be53a) | true if EndTimestamp_Optional has been set to a value
`public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a64f25dc08b60196f5d587f44c8da3f04) | 
`public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1a339612086f1bac76a62f6e1ec88116c0) | true if DurationSeconds_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a4c57bd86486f841439f4f5bb2531ad10) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1a03c89ad493b796225040cfd62c7b7ea3) | true if CustomData_Optional has been set to a value
`public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a42ea6e6e11a92376f1b1abd805117f76) | 
`public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1a6b5d1ae8fda27366e81ca60d74e86661) | true if CorrelationId_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > `[`Sessions_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a06841053c38eb12626995af56ed5045f) | List of session IDs for the match.
`public bool `[`Sessions_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1ab7e354a1fc5b885930a6bc9858ca31d8) | true if Sessions_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > `[`Instances_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1adb52c73b2d3c3292480472ed9001a2f6) | List of MatchInstances for the match.
`public bool `[`Instances_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1abdee7507026e04c5c1ded1547f31bde8) | true if Instances_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > `[`Allocations_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a5cb81c63c630a60f208339d2b31825d4) | List of allocation IDs for the match.
`public bool `[`Allocations_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1a21276e99ccd8ae47c70f9829a86da844) | true if Allocations_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > `[`Players_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a3312731841e4a94d04b7ca47b5c9fcd5) | List of players in the match.
`public bool `[`Players_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1ab5887e55232dfec06183d24dbaf1dbd6) | true if Players_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchSegmentPatchRequest_1a273b3d1226b733c1a5aca33c6d5edb68)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchSegmentPatchRequest_1acea6deebcf61beabacd3ade134a844be)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetType`](#structFRHAPI__MatchSegmentPatchRequest_1ad9bf90b65a1d4d69086ec78acb5142c6)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentPatchRequest_1acef180336e1c07a949df6feb5fa971e6)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentPatchRequest_1a5b4917223355a9059f0da9185ce22a15)`(const FString & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetType`](#structFRHAPI__MatchSegmentPatchRequest_1a2a74696532109cc84a585907e3bd0a7d)`(FString & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a4ca3ed76691569379f942934e8af23f2)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a79e01924d708b637c0f5224b5de95e7a)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetType`](#structFRHAPI__MatchSegmentPatchRequest_1acd40885089d3f6d0b22863c0959a25d0)`(const FString & NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline void `[`SetType`](#structFRHAPI__MatchSegmentPatchRequest_1a06a01763235d9c63a60af77341275a9a)`(FString && NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.
`public inline void `[`ClearType`](#structFRHAPI__MatchSegmentPatchRequest_1a16cd35cf507846a1a5c72acce6b11896)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentPatchRequest_1a84e807e86eb956664e2c05397b00ae39)`()` | Gets the value of State_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentPatchRequest_1a68467529b3a584918fefcf4340f27ed5)`() const` | Gets the value of State_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentPatchRequest_1a57a769ffdfdefb80e94d1270dfd9aa85)`(const ERHAPI_MatchState & DefaultValue) const` | Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetState`](#structFRHAPI__MatchSegmentPatchRequest_1ad961c90daccbc37885d8f5442c304f20)`(ERHAPI_MatchState & OutValue) const` | Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a09ae13333b3cf20ba1a5274e4bc4baa0)`()` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1aee150d8174e96f2d8e46cbb90df252ae)`() const` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetState`](#structFRHAPI__MatchSegmentPatchRequest_1ac6c14828145d82a7681e891b4f5c94ac)`(const ERHAPI_MatchState & NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true.
`public inline void `[`SetState`](#structFRHAPI__MatchSegmentPatchRequest_1afbb2431a92edfce73f5ae106634fd61a)`(ERHAPI_MatchState && NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true using move semantics.
`public inline void `[`ClearState`](#structFRHAPI__MatchSegmentPatchRequest_1a1ac6736c8994648c143f83c613070e52)`()` | Clears the value of State_Optional and sets State_IsSet to false.
`public inline FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1ae925685a0ffbd3acf644d6a9f71d7bfe)`()` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a0dfd541378f0281c82527a5770b3d94b)`() const` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a3a83b1bbf04d6ad50cc015dd4bc79adc)`(const FDateTime & DefaultValue) const` | Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a67f0ce8d55a80c2520b7f0462918409b)`(FDateTime & OutValue) const` | Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1acc2fdf0c89b176de51707dfad56965af)`()` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a95b078b237094297d89ad688175a1922)`() const` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a1448d13ae3116c809737dd4e86db287a)`(const FDateTime & NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.
`public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1acf0624edad188b7b042539f0164d2b4f)`(FDateTime && NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a3f80de3ff6daf670a34b781487e2f2d6)`()` | Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.
`public inline FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a23a9ac98aded93e87ca145ce89b91685)`()` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1ac2bce3df91a33b09fb79e649551f7d87)`() const` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a7e7a7f850e752b3aeeed1af7275be8d4)`(const FDateTime & DefaultValue) const` | Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a6dd6b509813298444a2aa9bc343afabd)`(FDateTime & OutValue) const` | Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1ae9bd2696cbd66f485a08927ec52eef28)`()` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a02b196a97a00a627e074813d606a0c85)`() const` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a24cebc7857f8438fd3580a9bbdfca1dd)`(const FDateTime & NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.
`public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a5aaf7a1c6ba7eead961ac08e2984775c)`(FDateTime && NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a362c7f19a723bcd801e61aba485419d3)`()` | Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.
`public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a2a3b66dc96b6b76170bc9491b10aa517)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1aaf95a3b210ca2add788c072f20a8a4eb)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a56881096fe3034f5b5691c95bb5c14dd)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a31f9fca187269d30efdae9b9fa60515d)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a88e3aaff799c12ba7a5d84648f96c5d9)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a85e2fc0af49bea9edd6c60cf00caecb9)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a88256b9fb921f8fd496f1c363df14158)`(const int32 & NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1aa4b2c0af5e6fc3dd2d4c41df10846f35)`(int32 && NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a218ccb2f457b3daf2bc1c97574ad79d3)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchSegmentPatchRequest_1a10447ebcc9952e9d866c0b7ef034cee5)`() const` | Returns true if DurationSeconds_Optional is set and matches the default value.
`public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchSegmentPatchRequest_1aace6b71ff12ec5ad607995be1b9418b8)`()` | Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1ac66e0ff02393a510994eda8362db657b)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1abde04ff4b405972648c881b2f3358a81)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1a593f3113acdbae43950b5ccd80070e78)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1aeba6fdeb43df9a7fe5549d2cf3b349fb)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a2c11b5b05c72df924662648f3ba57209)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1aca0295a0ae02d6774c516ba061acc70f)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1a7547f588fe01b61bbf3a023b1dd3b4b9)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1aac05425ad2b6a2a438d92d49490d0f97)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1a6d9bc923f704e913f7056cbf3e6c3616)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1aac9e0be380936fcd54a35de991a20790)`()` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a6d975810dd3c287b1ebda43869daaa36)`() const` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a67f04fbaf2f2e4daef5c68716e1437e6)`(const FString & DefaultValue) const` | Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a0526fb9e70b92bbfc276a94a63997c79)`(FString & OutValue) const` | Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a0934a7121be11c8f22f2cec8635769be)`()` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1ac592920d6c9265931b05cc4cb00a0093)`() const` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a563179f74cdcb6a4e946e1fb9a87a353)`(const FString & NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.
`public inline void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a536d0c1dbca8b2ff899451dbf1595f89)`(FString && NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.
`public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a81cc453b6b2531fc4a95500826fcf8b1)`()` | Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1ae86e144b726bad604c140216761c6aed)`()` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1aba855b8a993bb1007c0fdb6981c4773b)`() const` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1a5ab703ff6507531defa5b6b68d4f06ef)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` | Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1a4219b32b4b8c365cd5e06d9ffc1ddbd8)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` | Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a451572b169b19e2fe1e8f208d83bf00c)`()` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1af732932d033582a74f02d5afe20e0a42)`() const` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1a048c5b90dc687d2963cc0a31734cd565)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.
`public inline void `[`SetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1ae289593e2bfc8b0e600e38cde1676cd1)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.
`public inline void `[`ClearSessions`](#structFRHAPI__MatchSegmentPatchRequest_1ac73a2dacadc0065c4bd4976e71dc2234)`()` | Clears the value of Sessions_Optional and sets Sessions_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1a196737628c36f7ab42c52e457cccffce)`()` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1a9f6a6eb8fd5b641457b9b99712974171)`() const` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1a133a70fec724ca196b78a3eb301c445c)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` | Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1a64ab4a803005f5b55139979dc458efb5)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` | Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a5863af6450f35e6877af19f00dacc513)`()` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1ab6a0a69aed1a793756ee4f65dd564e9d)`() const` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1afb9db2aa867feec089f1594331c0cd89)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true.
`public inline void `[`SetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1aaab510fc2844f54fbde1a03335cbf410)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.
`public inline void `[`ClearInstances`](#structFRHAPI__MatchSegmentPatchRequest_1aba08455b31cbb849f6abf9f806fdec59)`()` | Clears the value of Instances_Optional and sets Instances_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1a2fbf1c4e9c0eec2e58bda79b231a1023)`()` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1a40adff708f691479eb83390c057a0c74)`() const` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1a4ca1b6503746c05823ca1dbba966d433)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` | Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1afcd5ad3a96affdc4bdce20aa8ad695d9)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` | Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1ab96a9685eb0be82c7d6022ddfc86b93b)`()` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1acea615429c5214a2628204af0bfe461c)`() const` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1ae541f5845e7250ed45490eb841c70a34)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.
`public inline void `[`SetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1aea04326119f040c7ec4886227d695c51)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.
`public inline void `[`ClearAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1aac741b53da2295fffa2bff80e21f0148)`()` | Clears the value of Allocations_Optional and sets Allocations_IsSet to false.
`public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1a456e550aab45487368e60f8b316820e0)`()` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1ac28b901563decbde9b1043d67923c0d1)`() const` | Gets the value of Players_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1ad73aed2cf52257fbee3921b55a9a1486)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & DefaultValue) const` | Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1ad4a4346778da157c5fd68b59e83b5bd2)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & OutValue) const` | Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a6a9cf772bd0968b2fad85650e3b7e44f)`()` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a0ca472881bf4563e7d4cc3a009445e6d)`() const` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1ae9812ba4dd7668bef9cb27f144d41ec6)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true.
`public inline void `[`SetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1a4e7046c9333bc259337fc65c0323839f)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > && NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.
`public inline void `[`ClearPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1aa6a63dd8627e54f28f49d00dbee501b8)`()` | Clears the value of Players_Optional and sets Players_IsSet to false.

### Members

#### `public FString `[`Type_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1ad83ec23959ddeca26bad677bc8ab6931) <a id="structFRHAPI__MatchSegmentPatchRequest_1ad83ec23959ddeca26bad677bc8ab6931"></a>

#### `public bool `[`Type_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1a81b08dc937557aaee3ffc41ed66f111e) <a id="structFRHAPI__MatchSegmentPatchRequest_1a81b08dc937557aaee3ffc41ed66f111e"></a>

true if Type_Optional has been set to a value

#### `public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a2a9ddc2003678c1d3fa5bcb141536603) <a id="structFRHAPI__MatchSegmentPatchRequest_1a2a9ddc2003678c1d3fa5bcb141536603"></a>

#### `public bool `[`State_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1ab24b008c4e39a0a75514906bfbd01d57) <a id="structFRHAPI__MatchSegmentPatchRequest_1ab24b008c4e39a0a75514906bfbd01d57"></a>

true if State_Optional has been set to a value

#### `public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1aebd5a7db98afc205ff397a290255cdf8) <a id="structFRHAPI__MatchSegmentPatchRequest_1aebd5a7db98afc205ff397a290255cdf8"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1aa8d3d5b7706866b07e2e80ae5998e05b) <a id="structFRHAPI__MatchSegmentPatchRequest_1aa8d3d5b7706866b07e2e80ae5998e05b"></a>

true if StartTimestamp_Optional has been set to a value

#### `public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a8d99a5997317cfce133da60737f24914) <a id="structFRHAPI__MatchSegmentPatchRequest_1a8d99a5997317cfce133da60737f24914"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1ab857a47ff5337df3cd2ce079741be53a) <a id="structFRHAPI__MatchSegmentPatchRequest_1ab857a47ff5337df3cd2ce079741be53a"></a>

true if EndTimestamp_Optional has been set to a value

#### `public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a64f25dc08b60196f5d587f44c8da3f04) <a id="structFRHAPI__MatchSegmentPatchRequest_1a64f25dc08b60196f5d587f44c8da3f04"></a>

#### `public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1a339612086f1bac76a62f6e1ec88116c0) <a id="structFRHAPI__MatchSegmentPatchRequest_1a339612086f1bac76a62f6e1ec88116c0"></a>

true if DurationSeconds_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a4c57bd86486f841439f4f5bb2531ad10) <a id="structFRHAPI__MatchSegmentPatchRequest_1a4c57bd86486f841439f4f5bb2531ad10"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1a03c89ad493b796225040cfd62c7b7ea3) <a id="structFRHAPI__MatchSegmentPatchRequest_1a03c89ad493b796225040cfd62c7b7ea3"></a>

true if CustomData_Optional has been set to a value

#### `public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchSegmentPatchRequest_1a42ea6e6e11a92376f1b1abd805117f76) <a id="structFRHAPI__MatchSegmentPatchRequest_1a42ea6e6e11a92376f1b1abd805117f76"></a>

#### `public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchSegmentPatchRequest_1a6b5d1ae8fda27366e81ca60d74e86661) <a id="structFRHAPI__MatchSegmentPatchRequest_1a6b5d1ae8fda27366e81ca60d74e86661"></a>

true if CorrelationId_Optional has been set to a value

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

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchSegmentPatchRequest_1a273b3d1226b733c1a5aca33c6d5edb68)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a273b3d1226b733c1a5aca33c6d5edb68"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchSegmentPatchRequest_1acea6deebcf61beabacd3ade134a844be)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1acea6deebcf61beabacd3ade134a844be"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetType`](#structFRHAPI__MatchSegmentPatchRequest_1ad9bf90b65a1d4d69086ec78acb5142c6)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1ad9bf90b65a1d4d69086ec78acb5142c6"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentPatchRequest_1acef180336e1c07a949df6feb5fa971e6)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1acef180336e1c07a949df6feb5fa971e6"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetType`](#structFRHAPI__MatchSegmentPatchRequest_1a5b4917223355a9059f0da9185ce22a15)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a5b4917223355a9059f0da9185ce22a15"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetType`](#structFRHAPI__MatchSegmentPatchRequest_1a2a74696532109cc84a585907e3bd0a7d)`(FString & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a2a74696532109cc84a585907e3bd0a7d"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a4ca3ed76691569379f942934e8af23f2)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a4ca3ed76691569379f942934e8af23f2"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a79e01924d708b637c0f5224b5de95e7a)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a79e01924d708b637c0f5224b5de95e7a"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetType`](#structFRHAPI__MatchSegmentPatchRequest_1acd40885089d3f6d0b22863c0959a25d0)`(const FString & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1acd40885089d3f6d0b22863c0959a25d0"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

#### `public inline void `[`SetType`](#structFRHAPI__MatchSegmentPatchRequest_1a06a01763235d9c63a60af77341275a9a)`(FString && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a06a01763235d9c63a60af77341275a9a"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.

#### `public inline void `[`ClearType`](#structFRHAPI__MatchSegmentPatchRequest_1a16cd35cf507846a1a5c72acce6b11896)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a16cd35cf507846a1a5c72acce6b11896"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

#### `public inline ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentPatchRequest_1a84e807e86eb956664e2c05397b00ae39)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a84e807e86eb956664e2c05397b00ae39"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentPatchRequest_1a68467529b3a584918fefcf4340f27ed5)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a68467529b3a584918fefcf4340f27ed5"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentPatchRequest_1a57a769ffdfdefb80e94d1270dfd9aa85)`(const ERHAPI_MatchState & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a57a769ffdfdefb80e94d1270dfd9aa85"></a>

Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetState`](#structFRHAPI__MatchSegmentPatchRequest_1ad961c90daccbc37885d8f5442c304f20)`(ERHAPI_MatchState & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1ad961c90daccbc37885d8f5442c304f20"></a>

Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a09ae13333b3cf20ba1a5274e4bc4baa0)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a09ae13333b3cf20ba1a5274e4bc4baa0"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1aee150d8174e96f2d8e46cbb90df252ae)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1aee150d8174e96f2d8e46cbb90df252ae"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetState`](#structFRHAPI__MatchSegmentPatchRequest_1ac6c14828145d82a7681e891b4f5c94ac)`(const ERHAPI_MatchState & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1ac6c14828145d82a7681e891b4f5c94ac"></a>

Sets the value of State_Optional and also sets State_IsSet to true.

#### `public inline void `[`SetState`](#structFRHAPI__MatchSegmentPatchRequest_1afbb2431a92edfce73f5ae106634fd61a)`(ERHAPI_MatchState && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1afbb2431a92edfce73f5ae106634fd61a"></a>

Sets the value of State_Optional and also sets State_IsSet to true using move semantics.

#### `public inline void `[`ClearState`](#structFRHAPI__MatchSegmentPatchRequest_1a1ac6736c8994648c143f83c613070e52)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a1ac6736c8994648c143f83c613070e52"></a>

Clears the value of State_Optional and sets State_IsSet to false.

#### `public inline FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1ae925685a0ffbd3acf644d6a9f71d7bfe)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1ae925685a0ffbd3acf644d6a9f71d7bfe"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a0dfd541378f0281c82527a5770b3d94b)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a0dfd541378f0281c82527a5770b3d94b"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a3a83b1bbf04d6ad50cc015dd4bc79adc)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a3a83b1bbf04d6ad50cc015dd4bc79adc"></a>

Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a67f0ce8d55a80c2520b7f0462918409b)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a67f0ce8d55a80c2520b7f0462918409b"></a>

Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1acc2fdf0c89b176de51707dfad56965af)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1acc2fdf0c89b176de51707dfad56965af"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a95b078b237094297d89ad688175a1922)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a95b078b237094297d89ad688175a1922"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a1448d13ae3116c809737dd4e86db287a)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a1448d13ae3116c809737dd4e86db287a"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.

#### `public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1acf0624edad188b7b042539f0164d2b4f)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1acf0624edad188b7b042539f0164d2b4f"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a3f80de3ff6daf670a34b781487e2f2d6)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a3f80de3ff6daf670a34b781487e2f2d6"></a>

Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.

#### `public inline FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a23a9ac98aded93e87ca145ce89b91685)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a23a9ac98aded93e87ca145ce89b91685"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1ac2bce3df91a33b09fb79e649551f7d87)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1ac2bce3df91a33b09fb79e649551f7d87"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a7e7a7f850e752b3aeeed1af7275be8d4)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a7e7a7f850e752b3aeeed1af7275be8d4"></a>

Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a6dd6b509813298444a2aa9bc343afabd)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a6dd6b509813298444a2aa9bc343afabd"></a>

Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1ae9bd2696cbd66f485a08927ec52eef28)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1ae9bd2696cbd66f485a08927ec52eef28"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a02b196a97a00a627e074813d606a0c85)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a02b196a97a00a627e074813d606a0c85"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a24cebc7857f8438fd3580a9bbdfca1dd)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a24cebc7857f8438fd3580a9bbdfca1dd"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.

#### `public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a5aaf7a1c6ba7eead961ac08e2984775c)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a5aaf7a1c6ba7eead961ac08e2984775c"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a362c7f19a723bcd801e61aba485419d3)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a362c7f19a723bcd801e61aba485419d3"></a>

Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.

#### `public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a2a3b66dc96b6b76170bc9491b10aa517)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a2a3b66dc96b6b76170bc9491b10aa517"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1aaf95a3b210ca2add788c072f20a8a4eb)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1aaf95a3b210ca2add788c072f20a8a4eb"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a56881096fe3034f5b5691c95bb5c14dd)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a56881096fe3034f5b5691c95bb5c14dd"></a>

Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a31f9fca187269d30efdae9b9fa60515d)`(int32 & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a31f9fca187269d30efdae9b9fa60515d"></a>

Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a88e3aaff799c12ba7a5d84648f96c5d9)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a88e3aaff799c12ba7a5d84648f96c5d9"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a85e2fc0af49bea9edd6c60cf00caecb9)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a85e2fc0af49bea9edd6c60cf00caecb9"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a88256b9fb921f8fd496f1c363df14158)`(const int32 & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a88256b9fb921f8fd496f1c363df14158"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1aa4b2c0af5e6fc3dd2d4c41df10846f35)`(int32 && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1aa4b2c0af5e6fc3dd2d4c41df10846f35"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a218ccb2f457b3daf2bc1c97574ad79d3)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a218ccb2f457b3daf2bc1c97574ad79d3"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

#### `public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchSegmentPatchRequest_1a10447ebcc9952e9d866c0b7ef034cee5)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a10447ebcc9952e9d866c0b7ef034cee5"></a>

Returns true if DurationSeconds_Optional is set and matches the default value.

#### `public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchSegmentPatchRequest_1aace6b71ff12ec5ad607995be1b9418b8)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1aace6b71ff12ec5ad607995be1b9418b8"></a>

Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1ac66e0ff02393a510994eda8362db657b)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1ac66e0ff02393a510994eda8362db657b"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1abde04ff4b405972648c881b2f3358a81)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1abde04ff4b405972648c881b2f3358a81"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1a593f3113acdbae43950b5ccd80070e78)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a593f3113acdbae43950b5ccd80070e78"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1aeba6fdeb43df9a7fe5549d2cf3b349fb)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1aeba6fdeb43df9a7fe5549d2cf3b349fb"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a2c11b5b05c72df924662648f3ba57209)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a2c11b5b05c72df924662648f3ba57209"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1aca0295a0ae02d6774c516ba061acc70f)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1aca0295a0ae02d6774c516ba061acc70f"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1a7547f588fe01b61bbf3a023b1dd3b4b9)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a7547f588fe01b61bbf3a023b1dd3b4b9"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1aac05425ad2b6a2a438d92d49490d0f97)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1aac05425ad2b6a2a438d92d49490d0f97"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1a6d9bc923f704e913f7056cbf3e6c3616)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a6d9bc923f704e913f7056cbf3e6c3616"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1aac9e0be380936fcd54a35de991a20790)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1aac9e0be380936fcd54a35de991a20790"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a6d975810dd3c287b1ebda43869daaa36)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a6d975810dd3c287b1ebda43869daaa36"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a67f04fbaf2f2e4daef5c68716e1437e6)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a67f04fbaf2f2e4daef5c68716e1437e6"></a>

Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a0526fb9e70b92bbfc276a94a63997c79)`(FString & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a0526fb9e70b92bbfc276a94a63997c79"></a>

Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a0934a7121be11c8f22f2cec8635769be)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a0934a7121be11c8f22f2cec8635769be"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1ac592920d6c9265931b05cc4cb00a0093)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1ac592920d6c9265931b05cc4cb00a0093"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a563179f74cdcb6a4e946e1fb9a87a353)`(const FString & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a563179f74cdcb6a4e946e1fb9a87a353"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.

#### `public inline void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a536d0c1dbca8b2ff899451dbf1595f89)`(FString && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a536d0c1dbca8b2ff899451dbf1595f89"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.

#### `public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a81cc453b6b2531fc4a95500826fcf8b1)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a81cc453b6b2531fc4a95500826fcf8b1"></a>

Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.

#### `public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1ae86e144b726bad604c140216761c6aed)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1ae86e144b726bad604c140216761c6aed"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1aba855b8a993bb1007c0fdb6981c4773b)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1aba855b8a993bb1007c0fdb6981c4773b"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1a5ab703ff6507531defa5b6b68d4f06ef)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a5ab703ff6507531defa5b6b68d4f06ef"></a>

Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1a4219b32b4b8c365cd5e06d9ffc1ddbd8)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a4219b32b4b8c365cd5e06d9ffc1ddbd8"></a>

Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a451572b169b19e2fe1e8f208d83bf00c)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a451572b169b19e2fe1e8f208d83bf00c"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1af732932d033582a74f02d5afe20e0a42)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1af732932d033582a74f02d5afe20e0a42"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1a048c5b90dc687d2963cc0a31734cd565)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a048c5b90dc687d2963cc0a31734cd565"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.

#### `public inline void `[`SetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1ae289593e2bfc8b0e600e38cde1676cd1)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1ae289593e2bfc8b0e600e38cde1676cd1"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.

#### `public inline void `[`ClearSessions`](#structFRHAPI__MatchSegmentPatchRequest_1ac73a2dacadc0065c4bd4976e71dc2234)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1ac73a2dacadc0065c4bd4976e71dc2234"></a>

Clears the value of Sessions_Optional and sets Sessions_IsSet to false.

#### `public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1a196737628c36f7ab42c52e457cccffce)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a196737628c36f7ab42c52e457cccffce"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1a9f6a6eb8fd5b641457b9b99712974171)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a9f6a6eb8fd5b641457b9b99712974171"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1a133a70fec724ca196b78a3eb301c445c)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a133a70fec724ca196b78a3eb301c445c"></a>

Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1a64ab4a803005f5b55139979dc458efb5)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a64ab4a803005f5b55139979dc458efb5"></a>

Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a5863af6450f35e6877af19f00dacc513)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a5863af6450f35e6877af19f00dacc513"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1ab6a0a69aed1a793756ee4f65dd564e9d)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1ab6a0a69aed1a793756ee4f65dd564e9d"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1afb9db2aa867feec089f1594331c0cd89)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1afb9db2aa867feec089f1594331c0cd89"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true.

#### `public inline void `[`SetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1aaab510fc2844f54fbde1a03335cbf410)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1aaab510fc2844f54fbde1a03335cbf410"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.

#### `public inline void `[`ClearInstances`](#structFRHAPI__MatchSegmentPatchRequest_1aba08455b31cbb849f6abf9f806fdec59)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1aba08455b31cbb849f6abf9f806fdec59"></a>

Clears the value of Instances_Optional and sets Instances_IsSet to false.

#### `public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1a2fbf1c4e9c0eec2e58bda79b231a1023)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a2fbf1c4e9c0eec2e58bda79b231a1023"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1a40adff708f691479eb83390c057a0c74)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a40adff708f691479eb83390c057a0c74"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1a4ca1b6503746c05823ca1dbba966d433)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a4ca1b6503746c05823ca1dbba966d433"></a>

Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1afcd5ad3a96affdc4bdce20aa8ad695d9)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1afcd5ad3a96affdc4bdce20aa8ad695d9"></a>

Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1ab96a9685eb0be82c7d6022ddfc86b93b)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1ab96a9685eb0be82c7d6022ddfc86b93b"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1acea615429c5214a2628204af0bfe461c)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1acea615429c5214a2628204af0bfe461c"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1ae541f5845e7250ed45490eb841c70a34)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1ae541f5845e7250ed45490eb841c70a34"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.

#### `public inline void `[`SetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1aea04326119f040c7ec4886227d695c51)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1aea04326119f040c7ec4886227d695c51"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.

#### `public inline void `[`ClearAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1aac741b53da2295fffa2bff80e21f0148)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1aac741b53da2295fffa2bff80e21f0148"></a>

Clears the value of Allocations_Optional and sets Allocations_IsSet to false.

#### `public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1a456e550aab45487368e60f8b316820e0)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a456e550aab45487368e60f8b316820e0"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1ac28b901563decbde9b1043d67923c0d1)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1ac28b901563decbde9b1043d67923c0d1"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1ad73aed2cf52257fbee3921b55a9a1486)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1ad73aed2cf52257fbee3921b55a9a1486"></a>

Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1ad4a4346778da157c5fd68b59e83b5bd2)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1ad4a4346778da157c5fd68b59e83b5bd2"></a>

Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a6a9cf772bd0968b2fad85650e3b7e44f)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a6a9cf772bd0968b2fad85650e3b7e44f"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a0ca472881bf4563e7d4cc3a009445e6d)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a0ca472881bf4563e7d4cc3a009445e6d"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1ae9812ba4dd7668bef9cb27f144d41ec6)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1ae9812ba4dd7668bef9cb27f144d41ec6"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true.

#### `public inline void `[`SetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1a4e7046c9333bc259337fc65c0323839f)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a4e7046c9333bc259337fc65c0323839f"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1aa6a63dd8627e54f28f49d00dbee501b8)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1aa6a63dd8627e54f28f49d00dbee501b8"></a>

Clears the value of Players_Optional and sets Players_IsSet to false.

