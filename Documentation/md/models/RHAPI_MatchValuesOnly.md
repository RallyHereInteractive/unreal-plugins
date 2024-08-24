# group `RHAPI_MatchValuesOnly` <a id="group__RHAPI__MatchValuesOnly"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchValuesOnly`](#structFRHAPI__MatchValuesOnly) | 

---
title: FRHAPI_MatchValuesOnly
---

```
struct FRHAPI_MatchValuesOnly
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FDateTime `[`LastModifiedTimestamp_Optional`](#structFRHAPI__MatchValuesOnly_1a680efe478538b00b84863d7ece52bbf1) | Timestamp of when the resource was last modified.
`public bool `[`LastModifiedTimestamp_IsSet`](#structFRHAPI__MatchValuesOnly_1a8c517e7bfeb8884a0e217e6dabe59b84) | true if LastModifiedTimestamp_Optional has been set to a value
`public FDateTime `[`CreatedTimestamp_Optional`](#structFRHAPI__MatchValuesOnly_1a7cc68a2a5e05d327cc901c059b8d785c) | Timestamp of when the resource was created.
`public bool `[`CreatedTimestamp_IsSet`](#structFRHAPI__MatchValuesOnly_1a715fff71a565c9e7563260d6383daf35) | true if CreatedTimestamp_Optional has been set to a value
`public FString `[`Type_Optional`](#structFRHAPI__MatchValuesOnly_1a0ec8bbdc0baef5ab14739216d928686d) | 
`public bool `[`Type_IsSet`](#structFRHAPI__MatchValuesOnly_1ac58d966e774ac8e81a40309eae2af906) | true if Type_Optional has been set to a value
`public bool `[`Type_IsNull`](#structFRHAPI__MatchValuesOnly_1a4c20054126c6aa1d45042b291c35e600) | true if Type_Optional has been explicitly set to null
`public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchValuesOnly_1ab4237d201acfd2190542adfa320fdd67) | 
`public bool `[`State_IsSet`](#structFRHAPI__MatchValuesOnly_1a0fd95494399702479e6bf02debf9f704) | true if State_Optional has been set to a value
`public bool `[`State_IsNull`](#structFRHAPI__MatchValuesOnly_1a948d933abfcaf098731986837fb7af24) | true if State_Optional has been explicitly set to null
`public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchValuesOnly_1a680b90f2cf64928349eda5c9e0c748e4) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchValuesOnly_1aa64756ac4c1a0852a338524f9c3c9d35) | true if StartTimestamp_Optional has been set to a value
`public bool `[`StartTimestamp_IsNull`](#structFRHAPI__MatchValuesOnly_1a13dc600148c808aac2294da847a835b0) | true if StartTimestamp_Optional has been explicitly set to null
`public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchValuesOnly_1a168f1807240cde87077ffb361e17d24b) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchValuesOnly_1a7a36b6dce6d8bac50e569a10c5f89812) | true if EndTimestamp_Optional has been set to a value
`public bool `[`EndTimestamp_IsNull`](#structFRHAPI__MatchValuesOnly_1a104203aebc81d9e0759b37aaab42f43e) | true if EndTimestamp_Optional has been explicitly set to null
`public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchValuesOnly_1a90c627300a79ef74ab309e795c861b16) | 
`public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchValuesOnly_1ac4dd632f0cf79d893b810ed022ae0177) | true if DurationSeconds_Optional has been set to a value
`public bool `[`DurationSeconds_IsNull`](#structFRHAPI__MatchValuesOnly_1ab699fb7e2c92f5e294a901d89fa9e3ac) | true if DurationSeconds_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchValuesOnly_1ac4998f09518a2479c6616a5d7de0c6e1) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchValuesOnly_1ac8b0245c6e4e407d7345ebd3fef69085) | true if CustomData_Optional has been set to a value
`public bool `[`CustomData_IsNull`](#structFRHAPI__MatchValuesOnly_1aeb23a95a989ef9daa26714c6e9523ccb) | true if CustomData_Optional has been explicitly set to null
`public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchValuesOnly_1ad1ef8dae71183e2963d4b9f3c0aac942) | 
`public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchValuesOnly_1a62c1c0a77f7728d30ba4ee00e249bb17) | true if CorrelationId_Optional has been set to a value
`public bool `[`CorrelationId_IsNull`](#structFRHAPI__MatchValuesOnly_1a0cbbd3c84339f60a3bab9fe3f2162c33) | true if CorrelationId_Optional has been explicitly set to null
`public TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > `[`Sessions_Optional`](#structFRHAPI__MatchValuesOnly_1ae56a831c860728f9f2a6b0a5e100c775) | List of session IDs for the match.
`public bool `[`Sessions_IsSet`](#structFRHAPI__MatchValuesOnly_1ad43c159b7132df0a045266ccfdcc09aa) | true if Sessions_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > `[`Instances_Optional`](#structFRHAPI__MatchValuesOnly_1a2f1bcb72041a5f251613e177559fdf34) | List of MatchInstances for the match.
`public bool `[`Instances_IsSet`](#structFRHAPI__MatchValuesOnly_1ac873226c74cb1396fc401f89a9077cdd) | true if Instances_Optional has been set to a value
`public TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > `[`Allocations_Optional`](#structFRHAPI__MatchValuesOnly_1a6b62b374d3a71d4c18fd636e27e739b3) | List of allocation IDs for the match.
`public bool `[`Allocations_IsSet`](#structFRHAPI__MatchValuesOnly_1aab49be0d178c1fb0ed769e5bb903217c) | true if Allocations_Optional has been set to a value
`public FString `[`MatchId_Optional`](#structFRHAPI__MatchValuesOnly_1a2f1459c3f11548da6a53089e8037d74d) | 
`public bool `[`MatchId_IsSet`](#structFRHAPI__MatchValuesOnly_1a2e710343938778af350b5d50610738aa) | true if MatchId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchValuesOnly_1a5ad83a6e8b3f25b5982ec63d3b56f2db)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchValuesOnly_1af24b45e625d37eb062a674339d5a2b1e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1a98f569bcfa4780f64b84e97ee77d4a8c)`()` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1a9e974013d9c87f5b6208ec0ef396f6f9)`() const` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1ac1e6484099ec76d2e781b0f693238be4)`(const FDateTime & DefaultValue) const` | Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1a1729f2453015fb2a1608c7eebbcbbe82)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1a810067469dbd3d3842d6d3e6a01361cf)`()` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1aadf61796b740d1ab877bc4f3bf72a739)`() const` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1a95920d3e4719d6562f3847ae8004226e)`(const FDateTime & NewValue)` | Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.
`public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1a3c363de099ea624d6efdf3428949dd46)`(FDateTime && NewValue)` | Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1a18b61eaedacf6931db8d95b503ebf75b)`()` | Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.
`public inline bool `[`IsLastModifiedTimestampSet`](#structFRHAPI__MatchValuesOnly_1a930a4db1d0b59dbfef4b8a321236897f)`() const` | Checks whether LastModifiedTimestamp_Optional has been set.
`public inline FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1ab204a7df6d7bcec2c173fda30dcbfe8e)`()` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1ac57a0f366112ab50d1cb654b7c432b6a)`() const` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1a1a795e1a6985015e2236ee1b6d15c604)`(const FDateTime & DefaultValue) const` | Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1a3e0e26c08fb27e58e4c42b6b52a99131)`(FDateTime & OutValue) const` | Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1a5612a79d8e8b173ebb7ebb3fcd6c7d84)`()` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1a1fa91efa6bbf89fd6f914b6f2cc8a81f)`() const` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1ab200303f679b9f05ba990d3110bc0eed)`(const FDateTime & NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.
`public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1a86f6956eaddeac569b4bb81b9c4ce7c0)`(FDateTime && NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1a9e4e33dd1182aaaa7b3f31fdd063298d)`()` | Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.
`public inline bool `[`IsCreatedTimestampSet`](#structFRHAPI__MatchValuesOnly_1a0743cdc6093e80d23e33d8920e36b49e)`() const` | Checks whether CreatedTimestamp_Optional has been set.
`public inline FString & `[`GetType`](#structFRHAPI__MatchValuesOnly_1a67aec674e495604814ddba349d907498)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const FString & `[`GetType`](#structFRHAPI__MatchValuesOnly_1a4498af90891e02d59b1b7564995d9ccf)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const FString & `[`GetType`](#structFRHAPI__MatchValuesOnly_1add10057e1dcb674499d1a970cada7a75)`(const FString & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetType`](#structFRHAPI__MatchValuesOnly_1ad30462aef852eebc9bc5b27af5ea11fd)`(FString & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTypeOrNull`](#structFRHAPI__MatchValuesOnly_1a158aa6b0793859ca3d73277379d22d5e)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchValuesOnly_1a5b2dd3de8f04e52af79155543afbf31d)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetType`](#structFRHAPI__MatchValuesOnly_1a92d5dc47bb19c01b7eb1aa2e8269f5d2)`(const FString & NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline void `[`SetType`](#structFRHAPI__MatchValuesOnly_1add3aa6f94b5bb163f892b03ba98e5e36)`(FString && NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.
`public inline void `[`ClearType`](#structFRHAPI__MatchValuesOnly_1ac90be93bd8ca0d9f6365011b139aa4e3)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline bool `[`IsTypeSet`](#structFRHAPI__MatchValuesOnly_1a0664f752f8d6cca3129aa08b066c4be1)`() const` | Checks whether Type_Optional has been set.
`public inline void `[`SetTypeToNull`](#structFRHAPI__MatchValuesOnly_1a5600c4e0f56f44dca841e0356de53c7e)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsTypeNull`](#structFRHAPI__MatchValuesOnly_1adb45a3e4795c04f335b80a4fd30e7153)`() const` | Checks whether Type_Optional is set to null.
`public inline ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchValuesOnly_1a1203b277f281cd4192d60c678cc3785d)`()` | Gets the value of State_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchValuesOnly_1a3347de291496537371eb1621513cf073)`() const` | Gets the value of State_Optional, regardless of it having been set.
`public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchValuesOnly_1a65740a7964fe11b56e5043fd10d3d862)`(const ERHAPI_MatchState & DefaultValue) const` | Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetState`](#structFRHAPI__MatchValuesOnly_1a7e34b868066993146d19a74a81ce1274)`(ERHAPI_MatchState & OutValue) const` | Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchValuesOnly_1a1b5aabca5a2893b73a3083394dc6b086)`()` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchValuesOnly_1a5c01a3bfb5b97cacbab8ecd2a5ec8060)`() const` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetState`](#structFRHAPI__MatchValuesOnly_1a7ede355cf10458fb33d030c2b9d71859)`(const ERHAPI_MatchState & NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true.
`public inline void `[`SetState`](#structFRHAPI__MatchValuesOnly_1af925b482e85a1e513ca4d548c84886d5)`(ERHAPI_MatchState && NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true using move semantics.
`public inline void `[`ClearState`](#structFRHAPI__MatchValuesOnly_1a13d0bc0de8d329b8b0a9a4a8b358a00b)`()` | Clears the value of State_Optional and sets State_IsSet to false.
`public inline bool `[`IsStateSet`](#structFRHAPI__MatchValuesOnly_1ac6d4b188404bb067658a6ce01deea413)`() const` | Checks whether State_Optional has been set.
`public inline void `[`SetStateToNull`](#structFRHAPI__MatchValuesOnly_1a3f020cf32f8af269c4fc39080cacdbf3)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStateNull`](#structFRHAPI__MatchValuesOnly_1ac56e86abaa2d1a1505339ab4e677b43e)`() const` | Checks whether State_Optional is set to null.
`public inline FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchValuesOnly_1a871fc66d25d72160d61da22790b0214b)`()` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchValuesOnly_1a56be887afd0d74e0f8581b68cfede4d4)`() const` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchValuesOnly_1a3580cb06904c3470746736274ca5f145)`(const FDateTime & DefaultValue) const` | Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStartTimestamp`](#structFRHAPI__MatchValuesOnly_1a1ab61497f611804cc8056622ef55d1d1)`(FDateTime & OutValue) const` | Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1ac3feaedd6a4fcf24231cb9c8ff19942a)`()` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1ad3d95aa298aee65bff906bb1d73c4750)`() const` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchValuesOnly_1a179b916e6c3a5d4aca13d33c144a48d5)`(const FDateTime & NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.
`public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchValuesOnly_1ae30cf99ca218b2232973901edaf3ea89)`(FDateTime && NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchValuesOnly_1a94721ba1c93898774501cf5b578c1056)`()` | Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.
`public inline bool `[`IsStartTimestampSet`](#structFRHAPI__MatchValuesOnly_1a1e456ed5f74a91ae641689d50ac5c639)`() const` | Checks whether StartTimestamp_Optional has been set.
`public inline void `[`SetStartTimestampToNull`](#structFRHAPI__MatchValuesOnly_1aa8d20cbb6eb977dfcca225bb11f4d7ad)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStartTimestampNull`](#structFRHAPI__MatchValuesOnly_1a575ec63fc0b751687f356d0ae4c3fd95)`() const` | Checks whether StartTimestamp_Optional is set to null.
`public inline FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchValuesOnly_1a31fac8691283304c8ad4f36c3e75a52f)`()` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchValuesOnly_1a98ffcef4bc761d2896c12d11412ab24c)`() const` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchValuesOnly_1aa8576e5f57dce94b487c01f0902e3a36)`(const FDateTime & DefaultValue) const` | Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEndTimestamp`](#structFRHAPI__MatchValuesOnly_1a0d786879ae0fc0659cdbf91a71043cac)`(FDateTime & OutValue) const` | Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1af86f897df3a395c783e80b126f2ec566)`()` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1a91a1774b55927be70685f0cec0c8d2ad)`() const` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchValuesOnly_1a9594ef55fd15208874c510cc1778f0a9)`(const FDateTime & NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.
`public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchValuesOnly_1a5ae570dd1d50962f69fc1f3ace5039ac)`(FDateTime && NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchValuesOnly_1aa8738167c7ed1d089256f0a0bd734c8d)`()` | Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.
`public inline bool `[`IsEndTimestampSet`](#structFRHAPI__MatchValuesOnly_1a4b63c8613bbc3ffdc133e5bebd5da506)`() const` | Checks whether EndTimestamp_Optional has been set.
`public inline void `[`SetEndTimestampToNull`](#structFRHAPI__MatchValuesOnly_1a9eeb6d9e5a3eef15d0885f446c60250d)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsEndTimestampNull`](#structFRHAPI__MatchValuesOnly_1a021780b51ceedc6ed323edf585c7fd42)`() const` | Checks whether EndTimestamp_Optional is set to null.
`public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchValuesOnly_1a76782597ca6655f346e3a8268d90924f)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchValuesOnly_1a117c1bb1ed2f0202142e0dd59788bb89)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchValuesOnly_1a5d633b7dfd517dba0782f78c9c79f461)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchValuesOnly_1a30c34f0d7e16847443f5d8d478f8a2d1)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchValuesOnly_1ad7e3bcd5121ab4ffc4e70835deccef46)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchValuesOnly_1a9d96ba9eb689a68c94081677993901d5)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchValuesOnly_1a4daba4d3c76c89ed50ed037a59138850)`(const int32 & NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchValuesOnly_1a8b9ea778b78ead08c7cfea6e0ec44ada)`(int32 && NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchValuesOnly_1ab8390d99ce4f8549e1cd85e55dfb74f2)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline bool `[`IsDurationSecondsSet`](#structFRHAPI__MatchValuesOnly_1ac68043253b0ac8e2d7091a0e9c93c60c)`() const` | Checks whether DurationSeconds_Optional has been set.
`public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchValuesOnly_1a9cf96ed101d589900dd6ef641c951549)`() const` | Returns true if DurationSeconds_Optional is set and matches the default value.
`public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchValuesOnly_1a72d2f066ffced97b89002f5e874adff6)`()` | Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.
`public inline void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchValuesOnly_1a49c3429afcd76227890383a9509865b2)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchValuesOnly_1aa585f034b1b89dfa2a45b1b9fbcd4231)`() const` | Checks whether DurationSeconds_Optional is set to null.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchValuesOnly_1a0e53c042b0053077de5d015298172aa7)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchValuesOnly_1a0cc2b75e6b897e10ac70e2d64fcce249)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchValuesOnly_1a34be577161646fb92db7fb9b46cf426b)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchValuesOnly_1a5ee7373b4c83e195706aa660a9842627)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchValuesOnly_1ab6aa30d5cb97b0b2f0639cd881b7f71d)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchValuesOnly_1aa917be5131fce6199a03ca344b4d9f2d)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchValuesOnly_1a68406a6ac6468a9f29f90afcfec897bf)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchValuesOnly_1a1e8a7773ca9301c0210912ffcfe09b62)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchValuesOnly_1ac9834687b5f28148ff91e4f0c5addad2)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchValuesOnly_1a6969697dc174e2fd52c1f1ae0cc11ad1)`() const` | Checks whether CustomData_Optional has been set.
`public inline void `[`SetCustomDataToNull`](#structFRHAPI__MatchValuesOnly_1acfd6edee7281af3435bbf5ce2773af38)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCustomDataNull`](#structFRHAPI__MatchValuesOnly_1a537218fc15c4e4f9938c4cf65513a149)`() const` | Checks whether CustomData_Optional is set to null.
`public inline FString & `[`GetCorrelationId`](#structFRHAPI__MatchValuesOnly_1a9682de1405979bd21deb32af4e686009)`()` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchValuesOnly_1a0adc7fc5787d015e01691bb5a29189a8)`() const` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchValuesOnly_1a6a60669fde7f0ceaa961654633c2e30c)`(const FString & DefaultValue) const` | Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCorrelationId`](#structFRHAPI__MatchValuesOnly_1a71e26af6ee353623fcf252f40144e096)`(FString & OutValue) const` | Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchValuesOnly_1a7ea3d9222bc695d74b091fd1bd976976)`()` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchValuesOnly_1ad4d17d00d1b79e985af264f28fd31dd2)`() const` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCorrelationId`](#structFRHAPI__MatchValuesOnly_1a7df21adff4c851175ecdd8643ca220d7)`(const FString & NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.
`public inline void `[`SetCorrelationId`](#structFRHAPI__MatchValuesOnly_1a6c796bc570dc1d29ef2d86f2edcff6fb)`(FString && NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.
`public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchValuesOnly_1a8d78b3748f28a42e63b2fe28a6c34868)`()` | Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.
`public inline bool `[`IsCorrelationIdSet`](#structFRHAPI__MatchValuesOnly_1ae4e17502639d4f5a523e65a2fa526d1a)`() const` | Checks whether CorrelationId_Optional has been set.
`public inline void `[`SetCorrelationIdToNull`](#structFRHAPI__MatchValuesOnly_1a4ffdb3c2ab76d5788dfc5188ffaf64a8)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCorrelationIdNull`](#structFRHAPI__MatchValuesOnly_1a2755cb840e53fa1d1716c9f744e068ae)`() const` | Checks whether CorrelationId_Optional is set to null.
`public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchValuesOnly_1af4d63a9447d5d4307572be9fc2e3666f)`()` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchValuesOnly_1a6d0ba7ab9835f069b0124876a9a7a8b5)`() const` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchValuesOnly_1a80262b93d27b8204abb8863169da2ad3)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` | Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessions`](#structFRHAPI__MatchValuesOnly_1a5ffd76eaffa7dc090a3156feddfbad39)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` | Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchValuesOnly_1ad9b6ef261d55d16fd6a34c743a658ab0)`()` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchValuesOnly_1a5207b50c860d865b41289a3d43dde7aa)`() const` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessions`](#structFRHAPI__MatchValuesOnly_1adbec4ab837d6ab990743b7ac332d3f7f)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.
`public inline void `[`SetSessions`](#structFRHAPI__MatchValuesOnly_1a415336e7e3e9dc10659bf251c44e72f9)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.
`public inline void `[`ClearSessions`](#structFRHAPI__MatchValuesOnly_1a2c86a4146366a9939c40956687e3a3a3)`()` | Clears the value of Sessions_Optional and sets Sessions_IsSet to false.
`public inline bool `[`IsSessionsSet`](#structFRHAPI__MatchValuesOnly_1a8b8884ac23cf55bf6f310afa825e614b)`() const` | Checks whether Sessions_Optional has been set.
`public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchValuesOnly_1a5ef5485e7fe10aa14bf4a7fc883af054)`()` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchValuesOnly_1aa30b87420f4a0399c5ba6d77ec477564)`() const` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchValuesOnly_1a41f423611438904ae5c4939c3badd070)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` | Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstances`](#structFRHAPI__MatchValuesOnly_1a24551232d2e4301145bc6446236b72c3)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` | Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchValuesOnly_1a57887bddc0200adaa9dce795eee004a1)`()` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchValuesOnly_1ad167063a7b9d39d0db4734d0ac656d26)`() const` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstances`](#structFRHAPI__MatchValuesOnly_1a25092365ea4d71af4c095dbf7149873b)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true.
`public inline void `[`SetInstances`](#structFRHAPI__MatchValuesOnly_1ad1344b24a9a321286f105761034d1bd1)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.
`public inline void `[`ClearInstances`](#structFRHAPI__MatchValuesOnly_1a52f9fcc56d7c1e697e436f2e817fd34e)`()` | Clears the value of Instances_Optional and sets Instances_IsSet to false.
`public inline bool `[`IsInstancesSet`](#structFRHAPI__MatchValuesOnly_1ac18bddd43db2e34df909e86937cfa0df)`() const` | Checks whether Instances_Optional has been set.
`public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchValuesOnly_1ab5b4a587682f62a73cffef926f2be32b)`()` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchValuesOnly_1a23e16292c50b32ddb0fe23b3d47c5c96)`() const` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchValuesOnly_1a7062a0c1569cca1d9124a5f3caa36540)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` | Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAllocations`](#structFRHAPI__MatchValuesOnly_1ab2451691985edccd6c02fcf9d32b62c0)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` | Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchValuesOnly_1a3c81d2bdfefe5fe6e99580a591cf3040)`()` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchValuesOnly_1a227d7ee5263217ad40c87b39a6b6851f)`() const` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAllocations`](#structFRHAPI__MatchValuesOnly_1a8071ae936e07f4887972669336e56b0d)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.
`public inline void `[`SetAllocations`](#structFRHAPI__MatchValuesOnly_1a1a5d149fa5fc4a93c5691af039f88d5b)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.
`public inline void `[`ClearAllocations`](#structFRHAPI__MatchValuesOnly_1a35802b59bc868c62ca67e62b67a85eef)`()` | Clears the value of Allocations_Optional and sets Allocations_IsSet to false.
`public inline bool `[`IsAllocationsSet`](#structFRHAPI__MatchValuesOnly_1aa616df26a894baf920cbeb3dad5b8b6f)`() const` | Checks whether Allocations_Optional has been set.
`public inline FString & `[`GetMatchId`](#structFRHAPI__MatchValuesOnly_1abae4bcdf8f7ef2ab9e981a543aeb650a)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchValuesOnly_1a75492c5f4adf093f7264c51164d18273)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchValuesOnly_1aa3a113390d75e47a585774d0c4b69927)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchId`](#structFRHAPI__MatchValuesOnly_1afb505cec56ab6fa74c9d6728e7c13439)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchValuesOnly_1a3cbf8e75a040fd310320f36d5efd0158)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchValuesOnly_1ad1b5f315da6d5dd7e195d9150811966f)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchId`](#structFRHAPI__MatchValuesOnly_1a2efdc7f0a6688aa9130ea950b004da4b)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline void `[`SetMatchId`](#structFRHAPI__MatchValuesOnly_1a35a78427a7b692545d1c736c8d48faa3)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__MatchValuesOnly_1a971698d330b984c677f48a4e35dd9efd)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline bool `[`IsMatchIdSet`](#structFRHAPI__MatchValuesOnly_1a821f736d707c657030dd19d2cc5a114c)`() const` | Checks whether MatchId_Optional has been set.

### Members

#### `public FDateTime `[`LastModifiedTimestamp_Optional`](#structFRHAPI__MatchValuesOnly_1a680efe478538b00b84863d7ece52bbf1) <a id="structFRHAPI__MatchValuesOnly_1a680efe478538b00b84863d7ece52bbf1"></a>

Timestamp of when the resource was last modified.

#### `public bool `[`LastModifiedTimestamp_IsSet`](#structFRHAPI__MatchValuesOnly_1a8c517e7bfeb8884a0e217e6dabe59b84) <a id="structFRHAPI__MatchValuesOnly_1a8c517e7bfeb8884a0e217e6dabe59b84"></a>

true if LastModifiedTimestamp_Optional has been set to a value

#### `public FDateTime `[`CreatedTimestamp_Optional`](#structFRHAPI__MatchValuesOnly_1a7cc68a2a5e05d327cc901c059b8d785c) <a id="structFRHAPI__MatchValuesOnly_1a7cc68a2a5e05d327cc901c059b8d785c"></a>

Timestamp of when the resource was created.

#### `public bool `[`CreatedTimestamp_IsSet`](#structFRHAPI__MatchValuesOnly_1a715fff71a565c9e7563260d6383daf35) <a id="structFRHAPI__MatchValuesOnly_1a715fff71a565c9e7563260d6383daf35"></a>

true if CreatedTimestamp_Optional has been set to a value

#### `public FString `[`Type_Optional`](#structFRHAPI__MatchValuesOnly_1a0ec8bbdc0baef5ab14739216d928686d) <a id="structFRHAPI__MatchValuesOnly_1a0ec8bbdc0baef5ab14739216d928686d"></a>

#### `public bool `[`Type_IsSet`](#structFRHAPI__MatchValuesOnly_1ac58d966e774ac8e81a40309eae2af906) <a id="structFRHAPI__MatchValuesOnly_1ac58d966e774ac8e81a40309eae2af906"></a>

true if Type_Optional has been set to a value

#### `public bool `[`Type_IsNull`](#structFRHAPI__MatchValuesOnly_1a4c20054126c6aa1d45042b291c35e600) <a id="structFRHAPI__MatchValuesOnly_1a4c20054126c6aa1d45042b291c35e600"></a>

true if Type_Optional has been explicitly set to null

#### `public ERHAPI_MatchState `[`State_Optional`](#structFRHAPI__MatchValuesOnly_1ab4237d201acfd2190542adfa320fdd67) <a id="structFRHAPI__MatchValuesOnly_1ab4237d201acfd2190542adfa320fdd67"></a>

#### `public bool `[`State_IsSet`](#structFRHAPI__MatchValuesOnly_1a0fd95494399702479e6bf02debf9f704) <a id="structFRHAPI__MatchValuesOnly_1a0fd95494399702479e6bf02debf9f704"></a>

true if State_Optional has been set to a value

#### `public bool `[`State_IsNull`](#structFRHAPI__MatchValuesOnly_1a948d933abfcaf098731986837fb7af24) <a id="structFRHAPI__MatchValuesOnly_1a948d933abfcaf098731986837fb7af24"></a>

true if State_Optional has been explicitly set to null

#### `public FDateTime `[`StartTimestamp_Optional`](#structFRHAPI__MatchValuesOnly_1a680b90f2cf64928349eda5c9e0c748e4) <a id="structFRHAPI__MatchValuesOnly_1a680b90f2cf64928349eda5c9e0c748e4"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`StartTimestamp_IsSet`](#structFRHAPI__MatchValuesOnly_1aa64756ac4c1a0852a338524f9c3c9d35) <a id="structFRHAPI__MatchValuesOnly_1aa64756ac4c1a0852a338524f9c3c9d35"></a>

true if StartTimestamp_Optional has been set to a value

#### `public bool `[`StartTimestamp_IsNull`](#structFRHAPI__MatchValuesOnly_1a13dc600148c808aac2294da847a835b0) <a id="structFRHAPI__MatchValuesOnly_1a13dc600148c808aac2294da847a835b0"></a>

true if StartTimestamp_Optional has been explicitly set to null

#### `public FDateTime `[`EndTimestamp_Optional`](#structFRHAPI__MatchValuesOnly_1a168f1807240cde87077ffb361e17d24b) <a id="structFRHAPI__MatchValuesOnly_1a168f1807240cde87077ffb361e17d24b"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`EndTimestamp_IsSet`](#structFRHAPI__MatchValuesOnly_1a7a36b6dce6d8bac50e569a10c5f89812) <a id="structFRHAPI__MatchValuesOnly_1a7a36b6dce6d8bac50e569a10c5f89812"></a>

true if EndTimestamp_Optional has been set to a value

#### `public bool `[`EndTimestamp_IsNull`](#structFRHAPI__MatchValuesOnly_1a104203aebc81d9e0759b37aaab42f43e) <a id="structFRHAPI__MatchValuesOnly_1a104203aebc81d9e0759b37aaab42f43e"></a>

true if EndTimestamp_Optional has been explicitly set to null

#### `public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchValuesOnly_1a90c627300a79ef74ab309e795c861b16) <a id="structFRHAPI__MatchValuesOnly_1a90c627300a79ef74ab309e795c861b16"></a>

#### `public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchValuesOnly_1ac4dd632f0cf79d893b810ed022ae0177) <a id="structFRHAPI__MatchValuesOnly_1ac4dd632f0cf79d893b810ed022ae0177"></a>

true if DurationSeconds_Optional has been set to a value

#### `public bool `[`DurationSeconds_IsNull`](#structFRHAPI__MatchValuesOnly_1ab699fb7e2c92f5e294a901d89fa9e3ac) <a id="structFRHAPI__MatchValuesOnly_1ab699fb7e2c92f5e294a901d89fa9e3ac"></a>

true if DurationSeconds_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchValuesOnly_1ac4998f09518a2479c6616a5d7de0c6e1) <a id="structFRHAPI__MatchValuesOnly_1ac4998f09518a2479c6616a5d7de0c6e1"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchValuesOnly_1ac8b0245c6e4e407d7345ebd3fef69085) <a id="structFRHAPI__MatchValuesOnly_1ac8b0245c6e4e407d7345ebd3fef69085"></a>

true if CustomData_Optional has been set to a value

#### `public bool `[`CustomData_IsNull`](#structFRHAPI__MatchValuesOnly_1aeb23a95a989ef9daa26714c6e9523ccb) <a id="structFRHAPI__MatchValuesOnly_1aeb23a95a989ef9daa26714c6e9523ccb"></a>

true if CustomData_Optional has been explicitly set to null

#### `public FString `[`CorrelationId_Optional`](#structFRHAPI__MatchValuesOnly_1ad1ef8dae71183e2963d4b9f3c0aac942) <a id="structFRHAPI__MatchValuesOnly_1ad1ef8dae71183e2963d4b9f3c0aac942"></a>

#### `public bool `[`CorrelationId_IsSet`](#structFRHAPI__MatchValuesOnly_1a62c1c0a77f7728d30ba4ee00e249bb17) <a id="structFRHAPI__MatchValuesOnly_1a62c1c0a77f7728d30ba4ee00e249bb17"></a>

true if CorrelationId_Optional has been set to a value

#### `public bool `[`CorrelationId_IsNull`](#structFRHAPI__MatchValuesOnly_1a0cbbd3c84339f60a3bab9fe3f2162c33) <a id="structFRHAPI__MatchValuesOnly_1a0cbbd3c84339f60a3bab9fe3f2162c33"></a>

true if CorrelationId_Optional has been explicitly set to null

#### `public TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > `[`Sessions_Optional`](#structFRHAPI__MatchValuesOnly_1ae56a831c860728f9f2a6b0a5e100c775) <a id="structFRHAPI__MatchValuesOnly_1ae56a831c860728f9f2a6b0a5e100c775"></a>

List of session IDs for the match.

#### `public bool `[`Sessions_IsSet`](#structFRHAPI__MatchValuesOnly_1ad43c159b7132df0a045266ccfdcc09aa) <a id="structFRHAPI__MatchValuesOnly_1ad43c159b7132df0a045266ccfdcc09aa"></a>

true if Sessions_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > `[`Instances_Optional`](#structFRHAPI__MatchValuesOnly_1a2f1bcb72041a5f251613e177559fdf34) <a id="structFRHAPI__MatchValuesOnly_1a2f1bcb72041a5f251613e177559fdf34"></a>

List of MatchInstances for the match.

#### `public bool `[`Instances_IsSet`](#structFRHAPI__MatchValuesOnly_1ac873226c74cb1396fc401f89a9077cdd) <a id="structFRHAPI__MatchValuesOnly_1ac873226c74cb1396fc401f89a9077cdd"></a>

true if Instances_Optional has been set to a value

#### `public TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > `[`Allocations_Optional`](#structFRHAPI__MatchValuesOnly_1a6b62b374d3a71d4c18fd636e27e739b3) <a id="structFRHAPI__MatchValuesOnly_1a6b62b374d3a71d4c18fd636e27e739b3"></a>

List of allocation IDs for the match.

#### `public bool `[`Allocations_IsSet`](#structFRHAPI__MatchValuesOnly_1aab49be0d178c1fb0ed769e5bb903217c) <a id="structFRHAPI__MatchValuesOnly_1aab49be0d178c1fb0ed769e5bb903217c"></a>

true if Allocations_Optional has been set to a value

#### `public FString `[`MatchId_Optional`](#structFRHAPI__MatchValuesOnly_1a2f1459c3f11548da6a53089e8037d74d) <a id="structFRHAPI__MatchValuesOnly_1a2f1459c3f11548da6a53089e8037d74d"></a>

#### `public bool `[`MatchId_IsSet`](#structFRHAPI__MatchValuesOnly_1a2e710343938778af350b5d50610738aa) <a id="structFRHAPI__MatchValuesOnly_1a2e710343938778af350b5d50610738aa"></a>

true if MatchId_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchValuesOnly_1a5ad83a6e8b3f25b5982ec63d3b56f2db)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchValuesOnly_1a5ad83a6e8b3f25b5982ec63d3b56f2db"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchValuesOnly_1af24b45e625d37eb062a674339d5a2b1e)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchValuesOnly_1af24b45e625d37eb062a674339d5a2b1e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1a98f569bcfa4780f64b84e97ee77d4a8c)`()` <a id="structFRHAPI__MatchValuesOnly_1a98f569bcfa4780f64b84e97ee77d4a8c"></a>

Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1a9e974013d9c87f5b6208ec0ef396f6f9)`() const` <a id="structFRHAPI__MatchValuesOnly_1a9e974013d9c87f5b6208ec0ef396f6f9"></a>

Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1ac1e6484099ec76d2e781b0f693238be4)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchValuesOnly_1ac1e6484099ec76d2e781b0f693238be4"></a>

Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1a1729f2453015fb2a1608c7eebbcbbe82)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchValuesOnly_1a1729f2453015fb2a1608c7eebbcbbe82"></a>

Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1a810067469dbd3d3842d6d3e6a01361cf)`()` <a id="structFRHAPI__MatchValuesOnly_1a810067469dbd3d3842d6d3e6a01361cf"></a>

Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1aadf61796b740d1ab877bc4f3bf72a739)`() const` <a id="structFRHAPI__MatchValuesOnly_1aadf61796b740d1ab877bc4f3bf72a739"></a>

Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1a95920d3e4719d6562f3847ae8004226e)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a95920d3e4719d6562f3847ae8004226e"></a>

Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.

#### `public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1a3c363de099ea624d6efdf3428949dd46)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a3c363de099ea624d6efdf3428949dd46"></a>

Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1a18b61eaedacf6931db8d95b503ebf75b)`()` <a id="structFRHAPI__MatchValuesOnly_1a18b61eaedacf6931db8d95b503ebf75b"></a>

Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.

#### `public inline bool `[`IsLastModifiedTimestampSet`](#structFRHAPI__MatchValuesOnly_1a930a4db1d0b59dbfef4b8a321236897f)`() const` <a id="structFRHAPI__MatchValuesOnly_1a930a4db1d0b59dbfef4b8a321236897f"></a>

Checks whether LastModifiedTimestamp_Optional has been set.

#### `public inline FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1ab204a7df6d7bcec2c173fda30dcbfe8e)`()` <a id="structFRHAPI__MatchValuesOnly_1ab204a7df6d7bcec2c173fda30dcbfe8e"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1ac57a0f366112ab50d1cb654b7c432b6a)`() const` <a id="structFRHAPI__MatchValuesOnly_1ac57a0f366112ab50d1cb654b7c432b6a"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1a1a795e1a6985015e2236ee1b6d15c604)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchValuesOnly_1a1a795e1a6985015e2236ee1b6d15c604"></a>

Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1a3e0e26c08fb27e58e4c42b6b52a99131)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchValuesOnly_1a3e0e26c08fb27e58e4c42b6b52a99131"></a>

Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1a5612a79d8e8b173ebb7ebb3fcd6c7d84)`()` <a id="structFRHAPI__MatchValuesOnly_1a5612a79d8e8b173ebb7ebb3fcd6c7d84"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1a1fa91efa6bbf89fd6f914b6f2cc8a81f)`() const` <a id="structFRHAPI__MatchValuesOnly_1a1fa91efa6bbf89fd6f914b6f2cc8a81f"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1ab200303f679b9f05ba990d3110bc0eed)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchValuesOnly_1ab200303f679b9f05ba990d3110bc0eed"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.

#### `public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1a86f6956eaddeac569b4bb81b9c4ce7c0)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a86f6956eaddeac569b4bb81b9c4ce7c0"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1a9e4e33dd1182aaaa7b3f31fdd063298d)`()` <a id="structFRHAPI__MatchValuesOnly_1a9e4e33dd1182aaaa7b3f31fdd063298d"></a>

Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.

#### `public inline bool `[`IsCreatedTimestampSet`](#structFRHAPI__MatchValuesOnly_1a0743cdc6093e80d23e33d8920e36b49e)`() const` <a id="structFRHAPI__MatchValuesOnly_1a0743cdc6093e80d23e33d8920e36b49e"></a>

Checks whether CreatedTimestamp_Optional has been set.

#### `public inline FString & `[`GetType`](#structFRHAPI__MatchValuesOnly_1a67aec674e495604814ddba349d907498)`()` <a id="structFRHAPI__MatchValuesOnly_1a67aec674e495604814ddba349d907498"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetType`](#structFRHAPI__MatchValuesOnly_1a4498af90891e02d59b1b7564995d9ccf)`() const` <a id="structFRHAPI__MatchValuesOnly_1a4498af90891e02d59b1b7564995d9ccf"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetType`](#structFRHAPI__MatchValuesOnly_1add10057e1dcb674499d1a970cada7a75)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchValuesOnly_1add10057e1dcb674499d1a970cada7a75"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetType`](#structFRHAPI__MatchValuesOnly_1ad30462aef852eebc9bc5b27af5ea11fd)`(FString & OutValue) const` <a id="structFRHAPI__MatchValuesOnly_1ad30462aef852eebc9bc5b27af5ea11fd"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetTypeOrNull`](#structFRHAPI__MatchValuesOnly_1a158aa6b0793859ca3d73277379d22d5e)`()` <a id="structFRHAPI__MatchValuesOnly_1a158aa6b0793859ca3d73277379d22d5e"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchValuesOnly_1a5b2dd3de8f04e52af79155543afbf31d)`() const` <a id="structFRHAPI__MatchValuesOnly_1a5b2dd3de8f04e52af79155543afbf31d"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetType`](#structFRHAPI__MatchValuesOnly_1a92d5dc47bb19c01b7eb1aa2e8269f5d2)`(const FString & NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a92d5dc47bb19c01b7eb1aa2e8269f5d2"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

#### `public inline void `[`SetType`](#structFRHAPI__MatchValuesOnly_1add3aa6f94b5bb163f892b03ba98e5e36)`(FString && NewValue)` <a id="structFRHAPI__MatchValuesOnly_1add3aa6f94b5bb163f892b03ba98e5e36"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.

#### `public inline void `[`ClearType`](#structFRHAPI__MatchValuesOnly_1ac90be93bd8ca0d9f6365011b139aa4e3)`()` <a id="structFRHAPI__MatchValuesOnly_1ac90be93bd8ca0d9f6365011b139aa4e3"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

#### `public inline bool `[`IsTypeSet`](#structFRHAPI__MatchValuesOnly_1a0664f752f8d6cca3129aa08b066c4be1)`() const` <a id="structFRHAPI__MatchValuesOnly_1a0664f752f8d6cca3129aa08b066c4be1"></a>

Checks whether Type_Optional has been set.

#### `public inline void `[`SetTypeToNull`](#structFRHAPI__MatchValuesOnly_1a5600c4e0f56f44dca841e0356de53c7e)`()` <a id="structFRHAPI__MatchValuesOnly_1a5600c4e0f56f44dca841e0356de53c7e"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsTypeNull`](#structFRHAPI__MatchValuesOnly_1adb45a3e4795c04f335b80a4fd30e7153)`() const` <a id="structFRHAPI__MatchValuesOnly_1adb45a3e4795c04f335b80a4fd30e7153"></a>

Checks whether Type_Optional is set to null.

#### `public inline ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchValuesOnly_1a1203b277f281cd4192d60c678cc3785d)`()` <a id="structFRHAPI__MatchValuesOnly_1a1203b277f281cd4192d60c678cc3785d"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchValuesOnly_1a3347de291496537371eb1621513cf073)`() const` <a id="structFRHAPI__MatchValuesOnly_1a3347de291496537371eb1621513cf073"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchValuesOnly_1a65740a7964fe11b56e5043fd10d3d862)`(const ERHAPI_MatchState & DefaultValue) const` <a id="structFRHAPI__MatchValuesOnly_1a65740a7964fe11b56e5043fd10d3d862"></a>

Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetState`](#structFRHAPI__MatchValuesOnly_1a7e34b868066993146d19a74a81ce1274)`(ERHAPI_MatchState & OutValue) const` <a id="structFRHAPI__MatchValuesOnly_1a7e34b868066993146d19a74a81ce1274"></a>

Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchValuesOnly_1a1b5aabca5a2893b73a3083394dc6b086)`()` <a id="structFRHAPI__MatchValuesOnly_1a1b5aabca5a2893b73a3083394dc6b086"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchValuesOnly_1a5c01a3bfb5b97cacbab8ecd2a5ec8060)`() const` <a id="structFRHAPI__MatchValuesOnly_1a5c01a3bfb5b97cacbab8ecd2a5ec8060"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetState`](#structFRHAPI__MatchValuesOnly_1a7ede355cf10458fb33d030c2b9d71859)`(const ERHAPI_MatchState & NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a7ede355cf10458fb33d030c2b9d71859"></a>

Sets the value of State_Optional and also sets State_IsSet to true.

#### `public inline void `[`SetState`](#structFRHAPI__MatchValuesOnly_1af925b482e85a1e513ca4d548c84886d5)`(ERHAPI_MatchState && NewValue)` <a id="structFRHAPI__MatchValuesOnly_1af925b482e85a1e513ca4d548c84886d5"></a>

Sets the value of State_Optional and also sets State_IsSet to true using move semantics.

#### `public inline void `[`ClearState`](#structFRHAPI__MatchValuesOnly_1a13d0bc0de8d329b8b0a9a4a8b358a00b)`()` <a id="structFRHAPI__MatchValuesOnly_1a13d0bc0de8d329b8b0a9a4a8b358a00b"></a>

Clears the value of State_Optional and sets State_IsSet to false.

#### `public inline bool `[`IsStateSet`](#structFRHAPI__MatchValuesOnly_1ac6d4b188404bb067658a6ce01deea413)`() const` <a id="structFRHAPI__MatchValuesOnly_1ac6d4b188404bb067658a6ce01deea413"></a>

Checks whether State_Optional has been set.

#### `public inline void `[`SetStateToNull`](#structFRHAPI__MatchValuesOnly_1a3f020cf32f8af269c4fc39080cacdbf3)`()` <a id="structFRHAPI__MatchValuesOnly_1a3f020cf32f8af269c4fc39080cacdbf3"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStateNull`](#structFRHAPI__MatchValuesOnly_1ac56e86abaa2d1a1505339ab4e677b43e)`() const` <a id="structFRHAPI__MatchValuesOnly_1ac56e86abaa2d1a1505339ab4e677b43e"></a>

Checks whether State_Optional is set to null.

#### `public inline FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchValuesOnly_1a871fc66d25d72160d61da22790b0214b)`()` <a id="structFRHAPI__MatchValuesOnly_1a871fc66d25d72160d61da22790b0214b"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchValuesOnly_1a56be887afd0d74e0f8581b68cfede4d4)`() const` <a id="structFRHAPI__MatchValuesOnly_1a56be887afd0d74e0f8581b68cfede4d4"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchValuesOnly_1a3580cb06904c3470746736274ca5f145)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchValuesOnly_1a3580cb06904c3470746736274ca5f145"></a>

Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStartTimestamp`](#structFRHAPI__MatchValuesOnly_1a1ab61497f611804cc8056622ef55d1d1)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchValuesOnly_1a1ab61497f611804cc8056622ef55d1d1"></a>

Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1ac3feaedd6a4fcf24231cb9c8ff19942a)`()` <a id="structFRHAPI__MatchValuesOnly_1ac3feaedd6a4fcf24231cb9c8ff19942a"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1ad3d95aa298aee65bff906bb1d73c4750)`() const` <a id="structFRHAPI__MatchValuesOnly_1ad3d95aa298aee65bff906bb1d73c4750"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchValuesOnly_1a179b916e6c3a5d4aca13d33c144a48d5)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a179b916e6c3a5d4aca13d33c144a48d5"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.

#### `public inline void `[`SetStartTimestamp`](#structFRHAPI__MatchValuesOnly_1ae30cf99ca218b2232973901edaf3ea89)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchValuesOnly_1ae30cf99ca218b2232973901edaf3ea89"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchValuesOnly_1a94721ba1c93898774501cf5b578c1056)`()` <a id="structFRHAPI__MatchValuesOnly_1a94721ba1c93898774501cf5b578c1056"></a>

Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.

#### `public inline bool `[`IsStartTimestampSet`](#structFRHAPI__MatchValuesOnly_1a1e456ed5f74a91ae641689d50ac5c639)`() const` <a id="structFRHAPI__MatchValuesOnly_1a1e456ed5f74a91ae641689d50ac5c639"></a>

Checks whether StartTimestamp_Optional has been set.

#### `public inline void `[`SetStartTimestampToNull`](#structFRHAPI__MatchValuesOnly_1aa8d20cbb6eb977dfcca225bb11f4d7ad)`()` <a id="structFRHAPI__MatchValuesOnly_1aa8d20cbb6eb977dfcca225bb11f4d7ad"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStartTimestampNull`](#structFRHAPI__MatchValuesOnly_1a575ec63fc0b751687f356d0ae4c3fd95)`() const` <a id="structFRHAPI__MatchValuesOnly_1a575ec63fc0b751687f356d0ae4c3fd95"></a>

Checks whether StartTimestamp_Optional is set to null.

#### `public inline FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchValuesOnly_1a31fac8691283304c8ad4f36c3e75a52f)`()` <a id="structFRHAPI__MatchValuesOnly_1a31fac8691283304c8ad4f36c3e75a52f"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchValuesOnly_1a98ffcef4bc761d2896c12d11412ab24c)`() const` <a id="structFRHAPI__MatchValuesOnly_1a98ffcef4bc761d2896c12d11412ab24c"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchValuesOnly_1aa8576e5f57dce94b487c01f0902e3a36)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchValuesOnly_1aa8576e5f57dce94b487c01f0902e3a36"></a>

Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEndTimestamp`](#structFRHAPI__MatchValuesOnly_1a0d786879ae0fc0659cdbf91a71043cac)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchValuesOnly_1a0d786879ae0fc0659cdbf91a71043cac"></a>

Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1af86f897df3a395c783e80b126f2ec566)`()` <a id="structFRHAPI__MatchValuesOnly_1af86f897df3a395c783e80b126f2ec566"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1a91a1774b55927be70685f0cec0c8d2ad)`() const` <a id="structFRHAPI__MatchValuesOnly_1a91a1774b55927be70685f0cec0c8d2ad"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchValuesOnly_1a9594ef55fd15208874c510cc1778f0a9)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a9594ef55fd15208874c510cc1778f0a9"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.

#### `public inline void `[`SetEndTimestamp`](#structFRHAPI__MatchValuesOnly_1a5ae570dd1d50962f69fc1f3ace5039ac)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a5ae570dd1d50962f69fc1f3ace5039ac"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchValuesOnly_1aa8738167c7ed1d089256f0a0bd734c8d)`()` <a id="structFRHAPI__MatchValuesOnly_1aa8738167c7ed1d089256f0a0bd734c8d"></a>

Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.

#### `public inline bool `[`IsEndTimestampSet`](#structFRHAPI__MatchValuesOnly_1a4b63c8613bbc3ffdc133e5bebd5da506)`() const` <a id="structFRHAPI__MatchValuesOnly_1a4b63c8613bbc3ffdc133e5bebd5da506"></a>

Checks whether EndTimestamp_Optional has been set.

#### `public inline void `[`SetEndTimestampToNull`](#structFRHAPI__MatchValuesOnly_1a9eeb6d9e5a3eef15d0885f446c60250d)`()` <a id="structFRHAPI__MatchValuesOnly_1a9eeb6d9e5a3eef15d0885f446c60250d"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsEndTimestampNull`](#structFRHAPI__MatchValuesOnly_1a021780b51ceedc6ed323edf585c7fd42)`() const` <a id="structFRHAPI__MatchValuesOnly_1a021780b51ceedc6ed323edf585c7fd42"></a>

Checks whether EndTimestamp_Optional is set to null.

#### `public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchValuesOnly_1a76782597ca6655f346e3a8268d90924f)`()` <a id="structFRHAPI__MatchValuesOnly_1a76782597ca6655f346e3a8268d90924f"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchValuesOnly_1a117c1bb1ed2f0202142e0dd59788bb89)`() const` <a id="structFRHAPI__MatchValuesOnly_1a117c1bb1ed2f0202142e0dd59788bb89"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchValuesOnly_1a5d633b7dfd517dba0782f78c9c79f461)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchValuesOnly_1a5d633b7dfd517dba0782f78c9c79f461"></a>

Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchValuesOnly_1a30c34f0d7e16847443f5d8d478f8a2d1)`(int32 & OutValue) const` <a id="structFRHAPI__MatchValuesOnly_1a30c34f0d7e16847443f5d8d478f8a2d1"></a>

Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchValuesOnly_1ad7e3bcd5121ab4ffc4e70835deccef46)`()` <a id="structFRHAPI__MatchValuesOnly_1ad7e3bcd5121ab4ffc4e70835deccef46"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchValuesOnly_1a9d96ba9eb689a68c94081677993901d5)`() const` <a id="structFRHAPI__MatchValuesOnly_1a9d96ba9eb689a68c94081677993901d5"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchValuesOnly_1a4daba4d3c76c89ed50ed037a59138850)`(const int32 & NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a4daba4d3c76c89ed50ed037a59138850"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchValuesOnly_1a8b9ea778b78ead08c7cfea6e0ec44ada)`(int32 && NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a8b9ea778b78ead08c7cfea6e0ec44ada"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchValuesOnly_1ab8390d99ce4f8549e1cd85e55dfb74f2)`()` <a id="structFRHAPI__MatchValuesOnly_1ab8390d99ce4f8549e1cd85e55dfb74f2"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

#### `public inline bool `[`IsDurationSecondsSet`](#structFRHAPI__MatchValuesOnly_1ac68043253b0ac8e2d7091a0e9c93c60c)`() const` <a id="structFRHAPI__MatchValuesOnly_1ac68043253b0ac8e2d7091a0e9c93c60c"></a>

Checks whether DurationSeconds_Optional has been set.

#### `public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchValuesOnly_1a9cf96ed101d589900dd6ef641c951549)`() const` <a id="structFRHAPI__MatchValuesOnly_1a9cf96ed101d589900dd6ef641c951549"></a>

Returns true if DurationSeconds_Optional is set and matches the default value.

#### `public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchValuesOnly_1a72d2f066ffced97b89002f5e874adff6)`()` <a id="structFRHAPI__MatchValuesOnly_1a72d2f066ffced97b89002f5e874adff6"></a>

Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.

#### `public inline void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchValuesOnly_1a49c3429afcd76227890383a9509865b2)`()` <a id="structFRHAPI__MatchValuesOnly_1a49c3429afcd76227890383a9509865b2"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchValuesOnly_1aa585f034b1b89dfa2a45b1b9fbcd4231)`() const` <a id="structFRHAPI__MatchValuesOnly_1aa585f034b1b89dfa2a45b1b9fbcd4231"></a>

Checks whether DurationSeconds_Optional is set to null.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchValuesOnly_1a0e53c042b0053077de5d015298172aa7)`()` <a id="structFRHAPI__MatchValuesOnly_1a0e53c042b0053077de5d015298172aa7"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchValuesOnly_1a0cc2b75e6b897e10ac70e2d64fcce249)`() const` <a id="structFRHAPI__MatchValuesOnly_1a0cc2b75e6b897e10ac70e2d64fcce249"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchValuesOnly_1a34be577161646fb92db7fb9b46cf426b)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchValuesOnly_1a34be577161646fb92db7fb9b46cf426b"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchValuesOnly_1a5ee7373b4c83e195706aa660a9842627)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchValuesOnly_1a5ee7373b4c83e195706aa660a9842627"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchValuesOnly_1ab6aa30d5cb97b0b2f0639cd881b7f71d)`()` <a id="structFRHAPI__MatchValuesOnly_1ab6aa30d5cb97b0b2f0639cd881b7f71d"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchValuesOnly_1aa917be5131fce6199a03ca344b4d9f2d)`() const` <a id="structFRHAPI__MatchValuesOnly_1aa917be5131fce6199a03ca344b4d9f2d"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchValuesOnly_1a68406a6ac6468a9f29f90afcfec897bf)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a68406a6ac6468a9f29f90afcfec897bf"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchValuesOnly_1a1e8a7773ca9301c0210912ffcfe09b62)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a1e8a7773ca9301c0210912ffcfe09b62"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchValuesOnly_1ac9834687b5f28148ff91e4f0c5addad2)`()` <a id="structFRHAPI__MatchValuesOnly_1ac9834687b5f28148ff91e4f0c5addad2"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchValuesOnly_1a6969697dc174e2fd52c1f1ae0cc11ad1)`() const` <a id="structFRHAPI__MatchValuesOnly_1a6969697dc174e2fd52c1f1ae0cc11ad1"></a>

Checks whether CustomData_Optional has been set.

#### `public inline void `[`SetCustomDataToNull`](#structFRHAPI__MatchValuesOnly_1acfd6edee7281af3435bbf5ce2773af38)`()` <a id="structFRHAPI__MatchValuesOnly_1acfd6edee7281af3435bbf5ce2773af38"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCustomDataNull`](#structFRHAPI__MatchValuesOnly_1a537218fc15c4e4f9938c4cf65513a149)`() const` <a id="structFRHAPI__MatchValuesOnly_1a537218fc15c4e4f9938c4cf65513a149"></a>

Checks whether CustomData_Optional is set to null.

#### `public inline FString & `[`GetCorrelationId`](#structFRHAPI__MatchValuesOnly_1a9682de1405979bd21deb32af4e686009)`()` <a id="structFRHAPI__MatchValuesOnly_1a9682de1405979bd21deb32af4e686009"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchValuesOnly_1a0adc7fc5787d015e01691bb5a29189a8)`() const` <a id="structFRHAPI__MatchValuesOnly_1a0adc7fc5787d015e01691bb5a29189a8"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetCorrelationId`](#structFRHAPI__MatchValuesOnly_1a6a60669fde7f0ceaa961654633c2e30c)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchValuesOnly_1a6a60669fde7f0ceaa961654633c2e30c"></a>

Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCorrelationId`](#structFRHAPI__MatchValuesOnly_1a71e26af6ee353623fcf252f40144e096)`(FString & OutValue) const` <a id="structFRHAPI__MatchValuesOnly_1a71e26af6ee353623fcf252f40144e096"></a>

Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchValuesOnly_1a7ea3d9222bc695d74b091fd1bd976976)`()` <a id="structFRHAPI__MatchValuesOnly_1a7ea3d9222bc695d74b091fd1bd976976"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchValuesOnly_1ad4d17d00d1b79e985af264f28fd31dd2)`() const` <a id="structFRHAPI__MatchValuesOnly_1ad4d17d00d1b79e985af264f28fd31dd2"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCorrelationId`](#structFRHAPI__MatchValuesOnly_1a7df21adff4c851175ecdd8643ca220d7)`(const FString & NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a7df21adff4c851175ecdd8643ca220d7"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.

#### `public inline void `[`SetCorrelationId`](#structFRHAPI__MatchValuesOnly_1a6c796bc570dc1d29ef2d86f2edcff6fb)`(FString && NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a6c796bc570dc1d29ef2d86f2edcff6fb"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.

#### `public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchValuesOnly_1a8d78b3748f28a42e63b2fe28a6c34868)`()` <a id="structFRHAPI__MatchValuesOnly_1a8d78b3748f28a42e63b2fe28a6c34868"></a>

Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.

#### `public inline bool `[`IsCorrelationIdSet`](#structFRHAPI__MatchValuesOnly_1ae4e17502639d4f5a523e65a2fa526d1a)`() const` <a id="structFRHAPI__MatchValuesOnly_1ae4e17502639d4f5a523e65a2fa526d1a"></a>

Checks whether CorrelationId_Optional has been set.

#### `public inline void `[`SetCorrelationIdToNull`](#structFRHAPI__MatchValuesOnly_1a4ffdb3c2ab76d5788dfc5188ffaf64a8)`()` <a id="structFRHAPI__MatchValuesOnly_1a4ffdb3c2ab76d5788dfc5188ffaf64a8"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCorrelationIdNull`](#structFRHAPI__MatchValuesOnly_1a2755cb840e53fa1d1716c9f744e068ae)`() const` <a id="structFRHAPI__MatchValuesOnly_1a2755cb840e53fa1d1716c9f744e068ae"></a>

Checks whether CorrelationId_Optional is set to null.

#### `public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchValuesOnly_1af4d63a9447d5d4307572be9fc2e3666f)`()` <a id="structFRHAPI__MatchValuesOnly_1af4d63a9447d5d4307572be9fc2e3666f"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchValuesOnly_1a6d0ba7ab9835f069b0124876a9a7a8b5)`() const` <a id="structFRHAPI__MatchValuesOnly_1a6d0ba7ab9835f069b0124876a9a7a8b5"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchValuesOnly_1a80262b93d27b8204abb8863169da2ad3)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` <a id="structFRHAPI__MatchValuesOnly_1a80262b93d27b8204abb8863169da2ad3"></a>

Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessions`](#structFRHAPI__MatchValuesOnly_1a5ffd76eaffa7dc090a3156feddfbad39)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` <a id="structFRHAPI__MatchValuesOnly_1a5ffd76eaffa7dc090a3156feddfbad39"></a>

Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchValuesOnly_1ad9b6ef261d55d16fd6a34c743a658ab0)`()` <a id="structFRHAPI__MatchValuesOnly_1ad9b6ef261d55d16fd6a34c743a658ab0"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchValuesOnly_1a5207b50c860d865b41289a3d43dde7aa)`() const` <a id="structFRHAPI__MatchValuesOnly_1a5207b50c860d865b41289a3d43dde7aa"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessions`](#structFRHAPI__MatchValuesOnly_1adbec4ab837d6ab990743b7ac332d3f7f)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` <a id="structFRHAPI__MatchValuesOnly_1adbec4ab837d6ab990743b7ac332d3f7f"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.

#### `public inline void `[`SetSessions`](#structFRHAPI__MatchValuesOnly_1a415336e7e3e9dc10659bf251c44e72f9)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a415336e7e3e9dc10659bf251c44e72f9"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.

#### `public inline void `[`ClearSessions`](#structFRHAPI__MatchValuesOnly_1a2c86a4146366a9939c40956687e3a3a3)`()` <a id="structFRHAPI__MatchValuesOnly_1a2c86a4146366a9939c40956687e3a3a3"></a>

Clears the value of Sessions_Optional and sets Sessions_IsSet to false.

#### `public inline bool `[`IsSessionsSet`](#structFRHAPI__MatchValuesOnly_1a8b8884ac23cf55bf6f310afa825e614b)`() const` <a id="structFRHAPI__MatchValuesOnly_1a8b8884ac23cf55bf6f310afa825e614b"></a>

Checks whether Sessions_Optional has been set.

#### `public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchValuesOnly_1a5ef5485e7fe10aa14bf4a7fc883af054)`()` <a id="structFRHAPI__MatchValuesOnly_1a5ef5485e7fe10aa14bf4a7fc883af054"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchValuesOnly_1aa30b87420f4a0399c5ba6d77ec477564)`() const` <a id="structFRHAPI__MatchValuesOnly_1aa30b87420f4a0399c5ba6d77ec477564"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchValuesOnly_1a41f423611438904ae5c4939c3badd070)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` <a id="structFRHAPI__MatchValuesOnly_1a41f423611438904ae5c4939c3badd070"></a>

Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstances`](#structFRHAPI__MatchValuesOnly_1a24551232d2e4301145bc6446236b72c3)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` <a id="structFRHAPI__MatchValuesOnly_1a24551232d2e4301145bc6446236b72c3"></a>

Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchValuesOnly_1a57887bddc0200adaa9dce795eee004a1)`()` <a id="structFRHAPI__MatchValuesOnly_1a57887bddc0200adaa9dce795eee004a1"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchValuesOnly_1ad167063a7b9d39d0db4734d0ac656d26)`() const` <a id="structFRHAPI__MatchValuesOnly_1ad167063a7b9d39d0db4734d0ac656d26"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstances`](#structFRHAPI__MatchValuesOnly_1a25092365ea4d71af4c095dbf7149873b)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a25092365ea4d71af4c095dbf7149873b"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true.

#### `public inline void `[`SetInstances`](#structFRHAPI__MatchValuesOnly_1ad1344b24a9a321286f105761034d1bd1)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` <a id="structFRHAPI__MatchValuesOnly_1ad1344b24a9a321286f105761034d1bd1"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.

#### `public inline void `[`ClearInstances`](#structFRHAPI__MatchValuesOnly_1a52f9fcc56d7c1e697e436f2e817fd34e)`()` <a id="structFRHAPI__MatchValuesOnly_1a52f9fcc56d7c1e697e436f2e817fd34e"></a>

Clears the value of Instances_Optional and sets Instances_IsSet to false.

#### `public inline bool `[`IsInstancesSet`](#structFRHAPI__MatchValuesOnly_1ac18bddd43db2e34df909e86937cfa0df)`() const` <a id="structFRHAPI__MatchValuesOnly_1ac18bddd43db2e34df909e86937cfa0df"></a>

Checks whether Instances_Optional has been set.

#### `public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchValuesOnly_1ab5b4a587682f62a73cffef926f2be32b)`()` <a id="structFRHAPI__MatchValuesOnly_1ab5b4a587682f62a73cffef926f2be32b"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchValuesOnly_1a23e16292c50b32ddb0fe23b3d47c5c96)`() const` <a id="structFRHAPI__MatchValuesOnly_1a23e16292c50b32ddb0fe23b3d47c5c96"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchValuesOnly_1a7062a0c1569cca1d9124a5f3caa36540)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` <a id="structFRHAPI__MatchValuesOnly_1a7062a0c1569cca1d9124a5f3caa36540"></a>

Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAllocations`](#structFRHAPI__MatchValuesOnly_1ab2451691985edccd6c02fcf9d32b62c0)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` <a id="structFRHAPI__MatchValuesOnly_1ab2451691985edccd6c02fcf9d32b62c0"></a>

Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchValuesOnly_1a3c81d2bdfefe5fe6e99580a591cf3040)`()` <a id="structFRHAPI__MatchValuesOnly_1a3c81d2bdfefe5fe6e99580a591cf3040"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchValuesOnly_1a227d7ee5263217ad40c87b39a6b6851f)`() const` <a id="structFRHAPI__MatchValuesOnly_1a227d7ee5263217ad40c87b39a6b6851f"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAllocations`](#structFRHAPI__MatchValuesOnly_1a8071ae936e07f4887972669336e56b0d)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a8071ae936e07f4887972669336e56b0d"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.

#### `public inline void `[`SetAllocations`](#structFRHAPI__MatchValuesOnly_1a1a5d149fa5fc4a93c5691af039f88d5b)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a1a5d149fa5fc4a93c5691af039f88d5b"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.

#### `public inline void `[`ClearAllocations`](#structFRHAPI__MatchValuesOnly_1a35802b59bc868c62ca67e62b67a85eef)`()` <a id="structFRHAPI__MatchValuesOnly_1a35802b59bc868c62ca67e62b67a85eef"></a>

Clears the value of Allocations_Optional and sets Allocations_IsSet to false.

#### `public inline bool `[`IsAllocationsSet`](#structFRHAPI__MatchValuesOnly_1aa616df26a894baf920cbeb3dad5b8b6f)`() const` <a id="structFRHAPI__MatchValuesOnly_1aa616df26a894baf920cbeb3dad5b8b6f"></a>

Checks whether Allocations_Optional has been set.

#### `public inline FString & `[`GetMatchId`](#structFRHAPI__MatchValuesOnly_1abae4bcdf8f7ef2ab9e981a543aeb650a)`()` <a id="structFRHAPI__MatchValuesOnly_1abae4bcdf8f7ef2ab9e981a543aeb650a"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchValuesOnly_1a75492c5f4adf093f7264c51164d18273)`() const` <a id="structFRHAPI__MatchValuesOnly_1a75492c5f4adf093f7264c51164d18273"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchValuesOnly_1aa3a113390d75e47a585774d0c4b69927)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchValuesOnly_1aa3a113390d75e47a585774d0c4b69927"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMatchId`](#structFRHAPI__MatchValuesOnly_1afb505cec56ab6fa74c9d6728e7c13439)`(FString & OutValue) const` <a id="structFRHAPI__MatchValuesOnly_1afb505cec56ab6fa74c9d6728e7c13439"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchValuesOnly_1a3cbf8e75a040fd310320f36d5efd0158)`()` <a id="structFRHAPI__MatchValuesOnly_1a3cbf8e75a040fd310320f36d5efd0158"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchValuesOnly_1ad1b5f315da6d5dd7e195d9150811966f)`() const` <a id="structFRHAPI__MatchValuesOnly_1ad1b5f315da6d5dd7e195d9150811966f"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMatchId`](#structFRHAPI__MatchValuesOnly_1a2efdc7f0a6688aa9130ea950b004da4b)`(const FString & NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a2efdc7f0a6688aa9130ea950b004da4b"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline void `[`SetMatchId`](#structFRHAPI__MatchValuesOnly_1a35a78427a7b692545d1c736c8d48faa3)`(FString && NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a35a78427a7b692545d1c736c8d48faa3"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__MatchValuesOnly_1a971698d330b984c677f48a4e35dd9efd)`()` <a id="structFRHAPI__MatchValuesOnly_1a971698d330b984c677f48a4e35dd9efd"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline bool `[`IsMatchIdSet`](#structFRHAPI__MatchValuesOnly_1a821f736d707c657030dd19d2cc5a114c)`() const` <a id="structFRHAPI__MatchValuesOnly_1a821f736d707c657030dd19d2cc5a114c"></a>

Checks whether MatchId_Optional has been set.

