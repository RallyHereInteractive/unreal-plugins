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
`public inline FORCEINLINE FString & `[`GetType`](#structFRHAPI__MatchSegmentPatchRequest_1a92de516612774324dda7d97640cc5dd3)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__MatchSegmentPatchRequest_1abbded39ffbf33a66dfa8d5b508b9d608)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__MatchSegmentPatchRequest_1a7fd0ebda53dee88aefd35e43fe5485db)`(const FString & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetType`](#structFRHAPI__MatchSegmentPatchRequest_1a958f539760818cbd7a5e82bd8c4585fb)`(FString & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a456784cd315347a6c34b633396e2163e)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a839c69b7dcd343a9b48ae718b7518bb1)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__MatchSegmentPatchRequest_1adaf893103164589379d6ab6aca8d935c)`(const FString & NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__MatchSegmentPatchRequest_1aca8179cd85dab294e3ee0185e3519e3c)`(FString && NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.
`public inline void `[`ClearType`](#structFRHAPI__MatchSegmentPatchRequest_1a16cd35cf507846a1a5c72acce6b11896)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline FORCEINLINE void `[`SetTypeToNull`](#structFRHAPI__MatchSegmentPatchRequest_1a1561f5e47e3625f90321ff394aee63bf)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsTypeNull`](#structFRHAPI__MatchSegmentPatchRequest_1af1d9ec0750287848d259457fee516f93)`() const` | Checks whether Type_Optional is set to null.
`public inline FORCEINLINE ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentPatchRequest_1a31fa4d8ccac9ea5221245b5b156674eb)`()` | Gets the value of State_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentPatchRequest_1a939f7834dd6e3d0d9328ba9fc8ded84d)`() const` | Gets the value of State_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentPatchRequest_1a9c463fda8da1d46721805e52aa15080d)`(const ERHAPI_MatchState & DefaultValue) const` | Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetState`](#structFRHAPI__MatchSegmentPatchRequest_1a37e49d5ac9ee15d0f09e411c76f5d85f)`(ERHAPI_MatchState & OutValue) const` | Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a6868de13b6d9717514082365ab71e5fb)`()` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1ab2eb405f189a9dd1d8984efd989c2828)`() const` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetState`](#structFRHAPI__MatchSegmentPatchRequest_1a5b3576766faf6075e17ba1e2951af66e)`(const ERHAPI_MatchState & NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true.
`public inline FORCEINLINE void `[`SetState`](#structFRHAPI__MatchSegmentPatchRequest_1aed0b59e068d7cb9342a0ce0de899c9c5)`(ERHAPI_MatchState && NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true using move semantics.
`public inline void `[`ClearState`](#structFRHAPI__MatchSegmentPatchRequest_1a1ac6736c8994648c143f83c613070e52)`()` | Clears the value of State_Optional and sets State_IsSet to false.
`public inline FORCEINLINE void `[`SetStateToNull`](#structFRHAPI__MatchSegmentPatchRequest_1adf98bf6dbf7b340d356fcd7258060adc)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStateNull`](#structFRHAPI__MatchSegmentPatchRequest_1a0cee381bf0c44b1817ae26d1b2c4092c)`() const` | Checks whether State_Optional is set to null.
`public inline FORCEINLINE FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a92b892e3fde1ec7b5db5305e1d6f95ac)`()` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a384df1167c0b32bb509e795057afa142)`() const` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a7082d62948fee37d92ab2b354b047771)`(const FDateTime & DefaultValue) const` | Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a237746e1c9c5db238c58bd0730ca19fe)`(FDateTime & OutValue) const` | Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a741bba633f0b8429874140bc7bba9575)`()` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1ae23303a1ed2307627ccffe3f57420c04)`() const` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1afa203b023340a5034d9fea0f97205b47)`(const FDateTime & NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1abbc86ba7a62bcadd00be21a2909bec61)`(FDateTime && NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a3f80de3ff6daf670a34b781487e2f2d6)`()` | Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.
`public inline FORCEINLINE void `[`SetStartTimestampToNull`](#structFRHAPI__MatchSegmentPatchRequest_1ae420e489c0ba4877d7c778135a26b059)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStartTimestampNull`](#structFRHAPI__MatchSegmentPatchRequest_1a0abd0410c53365fa3caf8e7eb377ca16)`() const` | Checks whether StartTimestamp_Optional is set to null.
`public inline FORCEINLINE FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1ad374140aceb56ab761f1adf5299feb73)`()` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a8929dd6a05d1b0edcd8c21df8b6e5d20)`() const` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a311b5f1f66ea7c2345cbc2e7af6b5156)`(const FDateTime & DefaultValue) const` | Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a4ff3eb8103ebc76bafd79b86581e0a0e)`(FDateTime & OutValue) const` | Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a903b3a12be722570f7435e040e43e3f8)`()` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1ab832669163202c142291ec66796cf783)`() const` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1aa1d7c8d5d207afda5005110c89e11c45)`(const FDateTime & NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a75de3ed2d4a381988178c0dfdd9109dc)`(FDateTime && NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a362c7f19a723bcd801e61aba485419d3)`()` | Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.
`public inline FORCEINLINE void `[`SetEndTimestampToNull`](#structFRHAPI__MatchSegmentPatchRequest_1a5dea3d0b08f2f61cc389e52bed2bdcc9)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsEndTimestampNull`](#structFRHAPI__MatchSegmentPatchRequest_1aaa1a1eb76071fc96a16867044b253678)`() const` | Checks whether EndTimestamp_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a0a28461895529721282b853cc6af7e45)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a1acd7f83f17e7ec297fb7fc93f2d3752)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a92cca9d8d7bc4fa2789cbae8b6352547)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a45b8c4a6581e2085e00f3c4173b9982e)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a03eeaf1807f59e3f3a7bf4158f1c7b39)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1ae138be03bb61d9f977f295db175813e1)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1aede9270227025bd1ab54e213e00e657e)`(const int32 & NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1abc96572a1b4de978331e5fa3982a6352)`(int32 && NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a218ccb2f457b3daf2bc1c97574ad79d3)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_DurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1aadade4f3f1921e4f4bd1214c849930e4)`()` | Returns the default value of DurationSeconds.
`public inline FORCEINLINE void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchSegmentPatchRequest_1a0d0b969d638802df6d5c08211180a609)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchSegmentPatchRequest_1a76b7779e5c9cbcd0352c099dbe5525f6)`() const` | Checks whether DurationSeconds_Optional is set to null.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1a33807577892260cf754b65789b0b914f)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1ae61b2aab02a148b2330ed8e6fc02c962)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1a3f72bca573dcbc5c077f48046cad7a4c)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1a94b516afc6b81a0cd86edac2f4316335)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a18baf0a72ee7cbb3a0cd9f7d4be3b32b)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a349c43bbfe735fdeb85c1ce46956c2ba)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1a2a1455d42cafb769941f1d8323cdc015)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1ad0c510c403ad908e673b65adc13c0448)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1a6d9bc923f704e913f7056cbf3e6c3616)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__MatchSegmentPatchRequest_1a9704eb699f5cd17c06d8993c19bb0ea3)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__MatchSegmentPatchRequest_1ae3a43c7a90a8bf9fe16f217b6bf441bb)`() const` | Checks whether CustomData_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1af2f6493e4b38f2c3fe4b57abcf03d705)`()` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1aeacb9da09c61495f53e0e6fc96f81b92)`() const` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a2de02821c2339793cb7d3c2fdbe87b93)`(const FString & DefaultValue) const` | Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a4cc85675fbe41c6d4102ddbd12bfc4b7)`(FString & OutValue) const` | Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a1e3a652fc5b0290b0e5c7c5acf47622f)`()` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a9e5216a7e008e16405c92b2d06181fcd)`() const` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1ada1b1682ceb35047012b3d18ab10c032)`(const FString & NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.
`public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1ae66ac0f16ad3207d6d0c19077b95d22c)`(FString && NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.
`public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a81cc453b6b2531fc4a95500826fcf8b1)`()` | Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.
`public inline FORCEINLINE void `[`SetCorrelationIdToNull`](#structFRHAPI__MatchSegmentPatchRequest_1ac0e2a9fba85211f2e4a529d1d5bf9115)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCorrelationIdNull`](#structFRHAPI__MatchSegmentPatchRequest_1a7f6fdebee39f0190e1e0af7ab5d2471f)`() const` | Checks whether CorrelationId_Optional is set to null.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1a7d6f7428c4d5036e238f502894cbb808)`()` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1a18076dbc245467ba637fbf25c2f75584)`() const` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1a791e9377a3a61e9f9393116d890d634b)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` | Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1a5618c1229d893496cedbb7eaf03a00ad)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` | Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a97736bfd426a5de3fcd1be0279ded509)`()` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a8baa4e331dc9d40ae6b2697e68c33f6f)`() const` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1a6388e806a67d3bbc6a1886d9a5b68f69)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.
`public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1a11b8be4983686f426892ecbd24ced36c)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.
`public inline void `[`ClearSessions`](#structFRHAPI__MatchSegmentPatchRequest_1ac73a2dacadc0065c4bd4976e71dc2234)`()` | Clears the value of Sessions_Optional and sets Sessions_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1a97f7249472b42832e640d13302965198)`()` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1a44e42ce08b222d64b8e562fdba635d03)`() const` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1a777e51f16eb6bd3682eed3cbefd82881)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` | Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1abe3c6830e02afd88392177960fe787a5)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` | Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a2cf2e49d0550d715414c0871cde965aa)`()` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a15321de22349b7779b9ba085afc1512e)`() const` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1af05da7b007bfadd0e62ff000b848f050)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true.
`public inline FORCEINLINE void `[`SetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1a54344101b04f2eb9cb8877b7b1cab3d0)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.
`public inline void `[`ClearInstances`](#structFRHAPI__MatchSegmentPatchRequest_1aba08455b31cbb849f6abf9f806fdec59)`()` | Clears the value of Instances_Optional and sets Instances_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1ac5481cbd8594438d68584fc27b1de934)`()` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1a903806d5a6428b5c83baa7d04ccf7d8b)`() const` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1ac2b4d713e11c23ef1aa5fecc1654f8c1)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` | Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1a8a47f5b392793ea5cff65424f2de0658)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` | Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a77e88d9c9990be87895d9f3a3d20a578)`()` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a5a30da9a6169272dfcba26c81f9438cb)`() const` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1acc08cb59c13c8eb1f9296aebce275498)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.
`public inline FORCEINLINE void `[`SetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1aeddecf3e7c5b4f64289aa8878b53e6cf)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.
`public inline void `[`ClearAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1aac741b53da2295fffa2bff80e21f0148)`()` | Clears the value of Allocations_Optional and sets Allocations_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1af2439010657ad9bf4db79fea1d1d182d)`()` | Gets the value of Players_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1a055cec6357df08595f5fb73a2f63f3fb)`() const` | Gets the value of Players_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1a761cbab71102f4563e50acdb346e4a01)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & DefaultValue) const` | Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1a617e7f376a27804913c41c36a7deb7c5)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & OutValue) const` | Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a8ed20484b2f65f9aa77fbfd76169ba51)`()` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1ae0ee6280cfe11e9b8ce581cb911af4e4)`() const` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1ab431042524a4da844d541ffb8ee81baa)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1af34680728d0e46a1db3e0b494d062a5d)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > && NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.
`public inline void `[`ClearPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1aa6a63dd8627e54f28f49d00dbee501b8)`()` | Clears the value of Players_Optional and sets Players_IsSet to false.

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

#### `public inline FORCEINLINE FString & `[`GetType`](#structFRHAPI__MatchSegmentPatchRequest_1a92de516612774324dda7d97640cc5dd3)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a92de516612774324dda7d97640cc5dd3"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__MatchSegmentPatchRequest_1abbded39ffbf33a66dfa8d5b508b9d608)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1abbded39ffbf33a66dfa8d5b508b9d608"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__MatchSegmentPatchRequest_1a7fd0ebda53dee88aefd35e43fe5485db)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a7fd0ebda53dee88aefd35e43fe5485db"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetType`](#structFRHAPI__MatchSegmentPatchRequest_1a958f539760818cbd7a5e82bd8c4585fb)`(FString & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a958f539760818cbd7a5e82bd8c4585fb"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a456784cd315347a6c34b633396e2163e)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a456784cd315347a6c34b633396e2163e"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a839c69b7dcd343a9b48ae718b7518bb1)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a839c69b7dcd343a9b48ae718b7518bb1"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__MatchSegmentPatchRequest_1adaf893103164589379d6ab6aca8d935c)`(const FString & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1adaf893103164589379d6ab6aca8d935c"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__MatchSegmentPatchRequest_1aca8179cd85dab294e3ee0185e3519e3c)`(FString && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1aca8179cd85dab294e3ee0185e3519e3c"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.

#### `public inline void `[`ClearType`](#structFRHAPI__MatchSegmentPatchRequest_1a16cd35cf507846a1a5c72acce6b11896)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a16cd35cf507846a1a5c72acce6b11896"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

#### `public inline FORCEINLINE void `[`SetTypeToNull`](#structFRHAPI__MatchSegmentPatchRequest_1a1561f5e47e3625f90321ff394aee63bf)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a1561f5e47e3625f90321ff394aee63bf"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsTypeNull`](#structFRHAPI__MatchSegmentPatchRequest_1af1d9ec0750287848d259457fee516f93)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1af1d9ec0750287848d259457fee516f93"></a>

Checks whether Type_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentPatchRequest_1a31fa4d8ccac9ea5221245b5b156674eb)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a31fa4d8ccac9ea5221245b5b156674eb"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentPatchRequest_1a939f7834dd6e3d0d9328ba9fc8ded84d)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a939f7834dd6e3d0d9328ba9fc8ded84d"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentPatchRequest_1a9c463fda8da1d46721805e52aa15080d)`(const ERHAPI_MatchState & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a9c463fda8da1d46721805e52aa15080d"></a>

Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetState`](#structFRHAPI__MatchSegmentPatchRequest_1a37e49d5ac9ee15d0f09e411c76f5d85f)`(ERHAPI_MatchState & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a37e49d5ac9ee15d0f09e411c76f5d85f"></a>

Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a6868de13b6d9717514082365ab71e5fb)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a6868de13b6d9717514082365ab71e5fb"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1ab2eb405f189a9dd1d8984efd989c2828)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1ab2eb405f189a9dd1d8984efd989c2828"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetState`](#structFRHAPI__MatchSegmentPatchRequest_1a5b3576766faf6075e17ba1e2951af66e)`(const ERHAPI_MatchState & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a5b3576766faf6075e17ba1e2951af66e"></a>

Sets the value of State_Optional and also sets State_IsSet to true.

#### `public inline FORCEINLINE void `[`SetState`](#structFRHAPI__MatchSegmentPatchRequest_1aed0b59e068d7cb9342a0ce0de899c9c5)`(ERHAPI_MatchState && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1aed0b59e068d7cb9342a0ce0de899c9c5"></a>

Sets the value of State_Optional and also sets State_IsSet to true using move semantics.

#### `public inline void `[`ClearState`](#structFRHAPI__MatchSegmentPatchRequest_1a1ac6736c8994648c143f83c613070e52)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a1ac6736c8994648c143f83c613070e52"></a>

Clears the value of State_Optional and sets State_IsSet to false.

#### `public inline FORCEINLINE void `[`SetStateToNull`](#structFRHAPI__MatchSegmentPatchRequest_1adf98bf6dbf7b340d356fcd7258060adc)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1adf98bf6dbf7b340d356fcd7258060adc"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStateNull`](#structFRHAPI__MatchSegmentPatchRequest_1a0cee381bf0c44b1817ae26d1b2c4092c)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a0cee381bf0c44b1817ae26d1b2c4092c"></a>

Checks whether State_Optional is set to null.

#### `public inline FORCEINLINE FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a92b892e3fde1ec7b5db5305e1d6f95ac)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a92b892e3fde1ec7b5db5305e1d6f95ac"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a384df1167c0b32bb509e795057afa142)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a384df1167c0b32bb509e795057afa142"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a7082d62948fee37d92ab2b354b047771)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a7082d62948fee37d92ab2b354b047771"></a>

Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a237746e1c9c5db238c58bd0730ca19fe)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a237746e1c9c5db238c58bd0730ca19fe"></a>

Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a741bba633f0b8429874140bc7bba9575)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a741bba633f0b8429874140bc7bba9575"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1ae23303a1ed2307627ccffe3f57420c04)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1ae23303a1ed2307627ccffe3f57420c04"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1afa203b023340a5034d9fea0f97205b47)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1afa203b023340a5034d9fea0f97205b47"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1abbc86ba7a62bcadd00be21a2909bec61)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1abbc86ba7a62bcadd00be21a2909bec61"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a3f80de3ff6daf670a34b781487e2f2d6)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a3f80de3ff6daf670a34b781487e2f2d6"></a>

Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.

#### `public inline FORCEINLINE void `[`SetStartTimestampToNull`](#structFRHAPI__MatchSegmentPatchRequest_1ae420e489c0ba4877d7c778135a26b059)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1ae420e489c0ba4877d7c778135a26b059"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStartTimestampNull`](#structFRHAPI__MatchSegmentPatchRequest_1a0abd0410c53365fa3caf8e7eb377ca16)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a0abd0410c53365fa3caf8e7eb377ca16"></a>

Checks whether StartTimestamp_Optional is set to null.

#### `public inline FORCEINLINE FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1ad374140aceb56ab761f1adf5299feb73)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1ad374140aceb56ab761f1adf5299feb73"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a8929dd6a05d1b0edcd8c21df8b6e5d20)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a8929dd6a05d1b0edcd8c21df8b6e5d20"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a311b5f1f66ea7c2345cbc2e7af6b5156)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a311b5f1f66ea7c2345cbc2e7af6b5156"></a>

Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a4ff3eb8103ebc76bafd79b86581e0a0e)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a4ff3eb8103ebc76bafd79b86581e0a0e"></a>

Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a903b3a12be722570f7435e040e43e3f8)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a903b3a12be722570f7435e040e43e3f8"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1ab832669163202c142291ec66796cf783)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1ab832669163202c142291ec66796cf783"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1aa1d7c8d5d207afda5005110c89e11c45)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1aa1d7c8d5d207afda5005110c89e11c45"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a75de3ed2d4a381988178c0dfdd9109dc)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a75de3ed2d4a381988178c0dfdd9109dc"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchSegmentPatchRequest_1a362c7f19a723bcd801e61aba485419d3)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a362c7f19a723bcd801e61aba485419d3"></a>

Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.

#### `public inline FORCEINLINE void `[`SetEndTimestampToNull`](#structFRHAPI__MatchSegmentPatchRequest_1a5dea3d0b08f2f61cc389e52bed2bdcc9)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a5dea3d0b08f2f61cc389e52bed2bdcc9"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsEndTimestampNull`](#structFRHAPI__MatchSegmentPatchRequest_1aaa1a1eb76071fc96a16867044b253678)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1aaa1a1eb76071fc96a16867044b253678"></a>

Checks whether EndTimestamp_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a0a28461895529721282b853cc6af7e45)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a0a28461895529721282b853cc6af7e45"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a1acd7f83f17e7ec297fb7fc93f2d3752)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a1acd7f83f17e7ec297fb7fc93f2d3752"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a92cca9d8d7bc4fa2789cbae8b6352547)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a92cca9d8d7bc4fa2789cbae8b6352547"></a>

Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a45b8c4a6581e2085e00f3c4173b9982e)`(int32 & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a45b8c4a6581e2085e00f3c4173b9982e"></a>

Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a03eeaf1807f59e3f3a7bf4158f1c7b39)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a03eeaf1807f59e3f3a7bf4158f1c7b39"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1ae138be03bb61d9f977f295db175813e1)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1ae138be03bb61d9f977f295db175813e1"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1aede9270227025bd1ab54e213e00e657e)`(const int32 & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1aede9270227025bd1ab54e213e00e657e"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1abc96572a1b4de978331e5fa3982a6352)`(int32 && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1abc96572a1b4de978331e5fa3982a6352"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1a218ccb2f457b3daf2bc1c97574ad79d3)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a218ccb2f457b3daf2bc1c97574ad79d3"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_DurationSeconds`](#structFRHAPI__MatchSegmentPatchRequest_1aadade4f3f1921e4f4bd1214c849930e4)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1aadade4f3f1921e4f4bd1214c849930e4"></a>

Returns the default value of DurationSeconds.

#### `public inline FORCEINLINE void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchSegmentPatchRequest_1a0d0b969d638802df6d5c08211180a609)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a0d0b969d638802df6d5c08211180a609"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchSegmentPatchRequest_1a76b7779e5c9cbcd0352c099dbe5525f6)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a76b7779e5c9cbcd0352c099dbe5525f6"></a>

Checks whether DurationSeconds_Optional is set to null.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1a33807577892260cf754b65789b0b914f)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a33807577892260cf754b65789b0b914f"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1ae61b2aab02a148b2330ed8e6fc02c962)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1ae61b2aab02a148b2330ed8e6fc02c962"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1a3f72bca573dcbc5c077f48046cad7a4c)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a3f72bca573dcbc5c077f48046cad7a4c"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1a94b516afc6b81a0cd86edac2f4316335)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a94b516afc6b81a0cd86edac2f4316335"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a18baf0a72ee7cbb3a0cd9f7d4be3b32b)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a18baf0a72ee7cbb3a0cd9f7d4be3b32b"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a349c43bbfe735fdeb85c1ce46956c2ba)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a349c43bbfe735fdeb85c1ce46956c2ba"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1a2a1455d42cafb769941f1d8323cdc015)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a2a1455d42cafb769941f1d8323cdc015"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1ad0c510c403ad908e673b65adc13c0448)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1ad0c510c403ad908e673b65adc13c0448"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchSegmentPatchRequest_1a6d9bc923f704e913f7056cbf3e6c3616)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a6d9bc923f704e913f7056cbf3e6c3616"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__MatchSegmentPatchRequest_1a9704eb699f5cd17c06d8993c19bb0ea3)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a9704eb699f5cd17c06d8993c19bb0ea3"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__MatchSegmentPatchRequest_1ae3a43c7a90a8bf9fe16f217b6bf441bb)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1ae3a43c7a90a8bf9fe16f217b6bf441bb"></a>

Checks whether CustomData_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1af2f6493e4b38f2c3fe4b57abcf03d705)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1af2f6493e4b38f2c3fe4b57abcf03d705"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1aeacb9da09c61495f53e0e6fc96f81b92)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1aeacb9da09c61495f53e0e6fc96f81b92"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a2de02821c2339793cb7d3c2fdbe87b93)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a2de02821c2339793cb7d3c2fdbe87b93"></a>

Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a4cc85675fbe41c6d4102ddbd12bfc4b7)`(FString & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a4cc85675fbe41c6d4102ddbd12bfc4b7"></a>

Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a1e3a652fc5b0290b0e5c7c5acf47622f)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a1e3a652fc5b0290b0e5c7c5acf47622f"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a9e5216a7e008e16405c92b2d06181fcd)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a9e5216a7e008e16405c92b2d06181fcd"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1ada1b1682ceb35047012b3d18ab10c032)`(const FString & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1ada1b1682ceb35047012b3d18ab10c032"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1ae66ac0f16ad3207d6d0c19077b95d22c)`(FString && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1ae66ac0f16ad3207d6d0c19077b95d22c"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.

#### `public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchSegmentPatchRequest_1a81cc453b6b2531fc4a95500826fcf8b1)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a81cc453b6b2531fc4a95500826fcf8b1"></a>

Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCorrelationIdToNull`](#structFRHAPI__MatchSegmentPatchRequest_1ac0e2a9fba85211f2e4a529d1d5bf9115)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1ac0e2a9fba85211f2e4a529d1d5bf9115"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCorrelationIdNull`](#structFRHAPI__MatchSegmentPatchRequest_1a7f6fdebee39f0190e1e0af7ab5d2471f)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a7f6fdebee39f0190e1e0af7ab5d2471f"></a>

Checks whether CorrelationId_Optional is set to null.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1a7d6f7428c4d5036e238f502894cbb808)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a7d6f7428c4d5036e238f502894cbb808"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1a18076dbc245467ba637fbf25c2f75584)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a18076dbc245467ba637fbf25c2f75584"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1a791e9377a3a61e9f9393116d890d634b)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a791e9377a3a61e9f9393116d890d634b"></a>

Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1a5618c1229d893496cedbb7eaf03a00ad)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a5618c1229d893496cedbb7eaf03a00ad"></a>

Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a97736bfd426a5de3fcd1be0279ded509)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a97736bfd426a5de3fcd1be0279ded509"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a8baa4e331dc9d40ae6b2697e68c33f6f)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a8baa4e331dc9d40ae6b2697e68c33f6f"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1a6388e806a67d3bbc6a1886d9a5b68f69)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a6388e806a67d3bbc6a1886d9a5b68f69"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchSegmentPatchRequest_1a11b8be4983686f426892ecbd24ced36c)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a11b8be4983686f426892ecbd24ced36c"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.

#### `public inline void `[`ClearSessions`](#structFRHAPI__MatchSegmentPatchRequest_1ac73a2dacadc0065c4bd4976e71dc2234)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1ac73a2dacadc0065c4bd4976e71dc2234"></a>

Clears the value of Sessions_Optional and sets Sessions_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1a97f7249472b42832e640d13302965198)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a97f7249472b42832e640d13302965198"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1a44e42ce08b222d64b8e562fdba635d03)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a44e42ce08b222d64b8e562fdba635d03"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1a777e51f16eb6bd3682eed3cbefd82881)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a777e51f16eb6bd3682eed3cbefd82881"></a>

Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1abe3c6830e02afd88392177960fe787a5)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1abe3c6830e02afd88392177960fe787a5"></a>

Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a2cf2e49d0550d715414c0871cde965aa)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a2cf2e49d0550d715414c0871cde965aa"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a15321de22349b7779b9ba085afc1512e)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a15321de22349b7779b9ba085afc1512e"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1af05da7b007bfadd0e62ff000b848f050)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1af05da7b007bfadd0e62ff000b848f050"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstances`](#structFRHAPI__MatchSegmentPatchRequest_1a54344101b04f2eb9cb8877b7b1cab3d0)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1a54344101b04f2eb9cb8877b7b1cab3d0"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.

#### `public inline void `[`ClearInstances`](#structFRHAPI__MatchSegmentPatchRequest_1aba08455b31cbb849f6abf9f806fdec59)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1aba08455b31cbb849f6abf9f806fdec59"></a>

Clears the value of Instances_Optional and sets Instances_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1ac5481cbd8594438d68584fc27b1de934)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1ac5481cbd8594438d68584fc27b1de934"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1a903806d5a6428b5c83baa7d04ccf7d8b)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a903806d5a6428b5c83baa7d04ccf7d8b"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1ac2b4d713e11c23ef1aa5fecc1654f8c1)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1ac2b4d713e11c23ef1aa5fecc1654f8c1"></a>

Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1a8a47f5b392793ea5cff65424f2de0658)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a8a47f5b392793ea5cff65424f2de0658"></a>

Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a77e88d9c9990be87895d9f3a3d20a578)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a77e88d9c9990be87895d9f3a3d20a578"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a5a30da9a6169272dfcba26c81f9438cb)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a5a30da9a6169272dfcba26c81f9438cb"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1acc08cb59c13c8eb1f9296aebce275498)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1acc08cb59c13c8eb1f9296aebce275498"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1aeddecf3e7c5b4f64289aa8878b53e6cf)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1aeddecf3e7c5b4f64289aa8878b53e6cf"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.

#### `public inline void `[`ClearAllocations`](#structFRHAPI__MatchSegmentPatchRequest_1aac741b53da2295fffa2bff80e21f0148)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1aac741b53da2295fffa2bff80e21f0148"></a>

Clears the value of Allocations_Optional and sets Allocations_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1af2439010657ad9bf4db79fea1d1d182d)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1af2439010657ad9bf4db79fea1d1d182d"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1a055cec6357df08595f5fb73a2f63f3fb)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a055cec6357df08595f5fb73a2f63f3fb"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1a761cbab71102f4563e50acdb346e4a01)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a761cbab71102f4563e50acdb346e4a01"></a>

Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1a617e7f376a27804913c41c36a7deb7c5)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentPatchRequest_1a617e7f376a27804913c41c36a7deb7c5"></a>

Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1a8ed20484b2f65f9aa77fbfd76169ba51)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1a8ed20484b2f65f9aa77fbfd76169ba51"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentPatchRequest_1ae0ee6280cfe11e9b8ce581cb911af4e4)`() const` <a id="structFRHAPI__MatchSegmentPatchRequest_1ae0ee6280cfe11e9b8ce581cb911af4e4"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1ab431042524a4da844d541ffb8ee81baa)`(const TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > & NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1ab431042524a4da844d541ffb8ee81baa"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1af34680728d0e46a1db3e0b494d062a5d)`(TArray< `[`FRHAPI_MatchPlayerRequest`](RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` > && NewValue)` <a id="structFRHAPI__MatchSegmentPatchRequest_1af34680728d0e46a1db3e0b494d062a5d"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayers`](#structFRHAPI__MatchSegmentPatchRequest_1aa6a63dd8627e54f28f49d00dbee501b8)`()` <a id="structFRHAPI__MatchSegmentPatchRequest_1aa6a63dd8627e54f28f49d00dbee501b8"></a>

Clears the value of Players_Optional and sets Players_IsSet to false.

