---
title: RHAPI_MatchValuesOnly
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchValuesOnly`](#structFRHAPI__MatchValuesOnly) | 

## struct `FRHAPI_MatchValuesOnly` <a id="structFRHAPI__MatchValuesOnly"></a>

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
`public virtual void `[`WriteJson`](#structFRHAPI__MatchValuesOnly_1a9ec06e97e26c8df86e3aa622ba7a2fa8)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1a1e41d42a831d7dddc1d50b0605f56efe)`()` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1ab9da2a8f023217103f5c4610e601e699)`() const` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1ab779cb38cf8c033e86c67ec6dea4fffc)`(const FDateTime & DefaultValue) const` | Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1a2e76455653992d20c41f9dd3b2e1948d)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1a74cec23f32e1520398b5fae7cd0cc45b)`()` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1ad6e38bda171b30f3fe65484c58c478b2)`() const` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1a9a268aee94a15010907cf3722e7808e6)`(const FDateTime & NewValue)` | Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1adabfe21a0266b27df1fd7972f72e731a)`(FDateTime && NewValue)` | Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1a18b61eaedacf6931db8d95b503ebf75b)`()` | Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.
`public inline FORCEINLINE FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1adc4c1be7cbce6619ca992dbd25c757d2)`()` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1a6b204510dd552eb5aa0b4a247e165c0b)`() const` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1a5636e1cb0a6694a966eaa34063428203)`(const FDateTime & DefaultValue) const` | Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1ac1cbd316ed94a634e9c74a4449efe27f)`(FDateTime & OutValue) const` | Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1a54d45e35a86523b1b2988b6bf8bcfb64)`()` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1aad5d7ec7c7a731350474e85b36a70616)`() const` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1a42c1e5b23e56a6a633b1e361398c34d5)`(const FDateTime & NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1a98374b894dd5f7545aaeb6ef9acc4c09)`(FDateTime && NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1a9e4e33dd1182aaaa7b3f31fdd063298d)`()` | Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.
`public inline FORCEINLINE FString & `[`GetType`](#structFRHAPI__MatchValuesOnly_1a5ce29bd5e62f2c6dd99148e58c74de0b)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__MatchValuesOnly_1a38a9761e504c05f685872b53f3783fcb)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__MatchValuesOnly_1a9cbf216e72c28ba6bc644eb5f8d0fff0)`(const FString & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetType`](#structFRHAPI__MatchValuesOnly_1a7995a55103e20a2d4ba1848247c09e55)`(FString & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetTypeOrNull`](#structFRHAPI__MatchValuesOnly_1a7ed1dc8907e91dfdf7cdf5a70730a2c9)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchValuesOnly_1aa3afc306d3b539ef03e9113367efd881)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__MatchValuesOnly_1ae80ccb753fa6161d991012eac09342c6)`(const FString & NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__MatchValuesOnly_1a3f6f0abbfbd257f566f60712717fbecf)`(FString && NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.
`public inline void `[`ClearType`](#structFRHAPI__MatchValuesOnly_1ac90be93bd8ca0d9f6365011b139aa4e3)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline FORCEINLINE void `[`SetTypeToNull`](#structFRHAPI__MatchValuesOnly_1a256f22cc5b38a55f38092bee0e72872e)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsTypeNull`](#structFRHAPI__MatchValuesOnly_1a0cd06b336eab5090187464c5ce664f12)`() const` | Checks whether Type_Optional is set to null.
`public inline FORCEINLINE ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchValuesOnly_1ae2b758b073d3417aec63697c0bed508d)`()` | Gets the value of State_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchValuesOnly_1ae63d79e130becbeeccf9d2e47d6fb180)`() const` | Gets the value of State_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchValuesOnly_1a4f77f4fc4e9ac08b4c533dfdfa9a0cf9)`(const ERHAPI_MatchState & DefaultValue) const` | Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetState`](#structFRHAPI__MatchValuesOnly_1a46c095f029cfd6860da3ef377867dc33)`(ERHAPI_MatchState & OutValue) const` | Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchValuesOnly_1ad8a7a432314572be7e2003c9031d30bd)`()` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchValuesOnly_1a3ac9344631afb911f507ec9c2fbbc026)`() const` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetState`](#structFRHAPI__MatchValuesOnly_1acfa4d9fdbea9ff36d272849a5cecbb17)`(const ERHAPI_MatchState & NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true.
`public inline FORCEINLINE void `[`SetState`](#structFRHAPI__MatchValuesOnly_1abcd157b386fa779eab3256b90d27fb54)`(ERHAPI_MatchState && NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true using move semantics.
`public inline void `[`ClearState`](#structFRHAPI__MatchValuesOnly_1a13d0bc0de8d329b8b0a9a4a8b358a00b)`()` | Clears the value of State_Optional and sets State_IsSet to false.
`public inline FORCEINLINE void `[`SetStateToNull`](#structFRHAPI__MatchValuesOnly_1a0d6c85bd0c25fa6adb9f70e287f80ff9)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStateNull`](#structFRHAPI__MatchValuesOnly_1a1d747fd781f88a53c232b13c4e08982b)`() const` | Checks whether State_Optional is set to null.
`public inline FORCEINLINE FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchValuesOnly_1a3414d14c1bbf24886330f62e26bf68d6)`()` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchValuesOnly_1a574f24decc4da6171849bf743fa222e8)`() const` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchValuesOnly_1a6e86e2d8f293e203e27cdd52eb7ec29c)`(const FDateTime & DefaultValue) const` | Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStartTimestamp`](#structFRHAPI__MatchValuesOnly_1a87a5a7e35b6bd0af00385f7494eccbf5)`(FDateTime & OutValue) const` | Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1a34c6fdba0215c7bdcc9ce13ab45c71aa)`()` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1ad6be22191bcf57bb46261c433b7dbf9b)`() const` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStartTimestamp`](#structFRHAPI__MatchValuesOnly_1aa6bd0f07b481fb6cb130dcb868599405)`(const FDateTime & NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetStartTimestamp`](#structFRHAPI__MatchValuesOnly_1a76b801745b174522cb390d6fdb463e50)`(FDateTime && NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchValuesOnly_1a94721ba1c93898774501cf5b578c1056)`()` | Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.
`public inline FORCEINLINE void `[`SetStartTimestampToNull`](#structFRHAPI__MatchValuesOnly_1a39202ce3baa9ea8d3996dd59aa7dbaf0)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStartTimestampNull`](#structFRHAPI__MatchValuesOnly_1a0c63bbbacea9db9caa39e0ae32e141ad)`() const` | Checks whether StartTimestamp_Optional is set to null.
`public inline FORCEINLINE FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchValuesOnly_1a649c0dac394cb5d57a5366a19fdc8214)`()` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchValuesOnly_1afb5c467ed4696756b68832dfe7f7cbb1)`() const` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchValuesOnly_1a0a33a9f7a63912c51bb9f1573f7380fb)`(const FDateTime & DefaultValue) const` | Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEndTimestamp`](#structFRHAPI__MatchValuesOnly_1abb4ece34a9842508b2d895dbbbd0d291)`(FDateTime & OutValue) const` | Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1adfeac4489cf367f5857f22139270c22a)`()` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1a3c64dacfe1da8bcdf109c8ff55baafaf)`() const` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEndTimestamp`](#structFRHAPI__MatchValuesOnly_1abfc7026714cfbf70b8390489dbb4311b)`(const FDateTime & NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetEndTimestamp`](#structFRHAPI__MatchValuesOnly_1ab114148770462b35a78b87e945a75edb)`(FDateTime && NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchValuesOnly_1aa8738167c7ed1d089256f0a0bd734c8d)`()` | Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.
`public inline FORCEINLINE void `[`SetEndTimestampToNull`](#structFRHAPI__MatchValuesOnly_1af439c803affffe35dec066a2b60132b7)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsEndTimestampNull`](#structFRHAPI__MatchValuesOnly_1a28a05f1aff1ca4d165f2af6abac0f71d)`() const` | Checks whether EndTimestamp_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchValuesOnly_1aa2331ac443d5c59975611e557de60efd)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchValuesOnly_1af8b5184c189ffddb1702d464127adc6f)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchValuesOnly_1a939cb2bda89bcb8622798956f61f777a)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDurationSeconds`](#structFRHAPI__MatchValuesOnly_1ad45744703b0b73d8dfccae7cc615ede4)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchValuesOnly_1ae458428134c3eac55000fc91a067c6ad)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchValuesOnly_1ada55ad267671b7ceb48fe2b2e9a3682c)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchValuesOnly_1a1b1cdafb3ff7b0b13089b135caf271b7)`(const int32 & NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchValuesOnly_1a44b764aaf96def702ab9606d4280bb15)`(int32 && NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchValuesOnly_1ab8390d99ce4f8549e1cd85e55dfb74f2)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_DurationSeconds`](#structFRHAPI__MatchValuesOnly_1aaa76704be0b12d5b1b40ddc86367ce34)`()` | Returns the default value of DurationSeconds.
`public inline FORCEINLINE void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchValuesOnly_1a17dd24d395bf50c441bb52fb57765b9f)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchValuesOnly_1acc58196b31aa88a07170e8eed9f74168)`() const` | Checks whether DurationSeconds_Optional is set to null.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchValuesOnly_1a562129019bf53c4cb09ca7046b87a7ea)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchValuesOnly_1af7593f1684e7e79ec2e6d3bdc78db07a)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchValuesOnly_1ab37af69b1a0249378335457f3dacf769)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchValuesOnly_1a46f9c5ac4bb8008504e95934f7c04c3e)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchValuesOnly_1a3bfd78fe60a05b141ff73d00cb050ad1)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchValuesOnly_1a0c85b1253efb9a49ab68e3dbe0f0dccd)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchValuesOnly_1a67029b15b01192c6471bebda7b0c9b76)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchValuesOnly_1acf28c8c37322d8ee98bb9ed6d6a3eee4)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchValuesOnly_1ac9834687b5f28148ff91e4f0c5addad2)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__MatchValuesOnly_1ac1820ef334af6ca1278b7d210ed936c0)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__MatchValuesOnly_1a1ff4930174ee3a163bcea0e5f8524f5a)`() const` | Checks whether CustomData_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetCorrelationId`](#structFRHAPI__MatchValuesOnly_1af35f3c62f10d54d3c7037c6224fd3a21)`()` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__MatchValuesOnly_1a32d71d310a9ae35cde4626ad609c565b)`() const` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__MatchValuesOnly_1aad7835ee588fd561d6d80df76e3628f9)`(const FString & DefaultValue) const` | Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCorrelationId`](#structFRHAPI__MatchValuesOnly_1a019a2fcb414a6425e5ad2d59768f49cd)`(FString & OutValue) const` | Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchValuesOnly_1a6297d82c10e4c26b017700dcedca17de)`()` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchValuesOnly_1a6417e22e8b93ddee6e54067b355f597e)`() const` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__MatchValuesOnly_1a23a94dd59941a8fa120719b132a1077a)`(const FString & NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.
`public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__MatchValuesOnly_1a62090604be1562d10cf766ce6d8a6fcd)`(FString && NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.
`public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchValuesOnly_1a8d78b3748f28a42e63b2fe28a6c34868)`()` | Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.
`public inline FORCEINLINE void `[`SetCorrelationIdToNull`](#structFRHAPI__MatchValuesOnly_1aa486bab3f39f437ee9870591fa0577a7)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCorrelationIdNull`](#structFRHAPI__MatchValuesOnly_1af45183d646a3427c5921854fbedfba8b)`() const` | Checks whether CorrelationId_Optional is set to null.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchValuesOnly_1a4c6ff3ec4d2f5c8f560d8189f8dd2764)`()` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchValuesOnly_1ae0ff5f3fcd3a71f38028ae2fd20f36cb)`() const` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchValuesOnly_1a631d7f124265683c3c9a9fbd8788cee1)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` | Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSessions`](#structFRHAPI__MatchValuesOnly_1a4c207251f0bc3cfb97b2e62154e29647)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` | Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchValuesOnly_1a64059830d51b368756138fc5cc776982)`()` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchValuesOnly_1a7c2ed57882680dd7c982ba602db20f84)`() const` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchValuesOnly_1a2218f691142a3e824280ac9a47caaedd)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.
`public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchValuesOnly_1acc4f99966fb8171ed24d36f1a03aa00d)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.
`public inline void `[`ClearSessions`](#structFRHAPI__MatchValuesOnly_1a2c86a4146366a9939c40956687e3a3a3)`()` | Clears the value of Sessions_Optional and sets Sessions_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchValuesOnly_1a82f885fe36972727438394fe1710ebe6)`()` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchValuesOnly_1ae4fb2379fb9ca9ff760bd7dfd98e3323)`() const` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchValuesOnly_1a598eb054f2128fe8399e05397914a95a)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` | Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstances`](#structFRHAPI__MatchValuesOnly_1ac8d8ddcc4665b2a59c254646e62fc9a2)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` | Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchValuesOnly_1a62f999821102695f1c3073765e4cc904)`()` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchValuesOnly_1a7590dba5fd6e3ac7b6a8090bbfd17450)`() const` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstances`](#structFRHAPI__MatchValuesOnly_1a68a3c0a4fd5dbb448805f99a3e82c0df)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true.
`public inline FORCEINLINE void `[`SetInstances`](#structFRHAPI__MatchValuesOnly_1ad451ff34debd196f142792fe33312730)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.
`public inline void `[`ClearInstances`](#structFRHAPI__MatchValuesOnly_1a52f9fcc56d7c1e697e436f2e817fd34e)`()` | Clears the value of Instances_Optional and sets Instances_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchValuesOnly_1a2231742c21fc3a44c183905dcda34c23)`()` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchValuesOnly_1a31dfea27c738d6feafb03fa038dee834)`() const` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchValuesOnly_1a5526cf627110cb12644deb416b9a0787)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` | Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAllocations`](#structFRHAPI__MatchValuesOnly_1a8147d454f7a9cf073af2107f9c04d36a)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` | Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchValuesOnly_1a1fbc15c114900fc2badfe26be8d28fd1)`()` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchValuesOnly_1af77e18124dc895236bb5de428ae112b4)`() const` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAllocations`](#structFRHAPI__MatchValuesOnly_1a80df591485d90e47c5bc3a824ea0c11b)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.
`public inline FORCEINLINE void `[`SetAllocations`](#structFRHAPI__MatchValuesOnly_1a820431fe02d52dcadeee9daa2357c898)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.
`public inline void `[`ClearAllocations`](#structFRHAPI__MatchValuesOnly_1a35802b59bc868c62ca67e62b67a85eef)`()` | Clears the value of Allocations_Optional and sets Allocations_IsSet to false.
`public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__MatchValuesOnly_1abaaa2cdc9d5f4cfe02d37b1d366ae3f2)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__MatchValuesOnly_1aa54b3dbc642c110f499ab7649f78d60b)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__MatchValuesOnly_1ac418192e44982fd2d8517c2bf5cd099e)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__MatchValuesOnly_1aaaaadd436e4a1d075fa0d107d507c378)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchValuesOnly_1a9adc8456b2d7396777b5ac22d0d97e3a)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchValuesOnly_1a5e2f2745774ed56a8eca574658ac20d5)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__MatchValuesOnly_1ae08c6cab4936ba83393fd9b23fde3be8)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__MatchValuesOnly_1a005e120a9dd70cb6ea2eee78b81bcf4d)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__MatchValuesOnly_1a971698d330b984c677f48a4e35dd9efd)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchValuesOnly_1a9ec06e97e26c8df86e3aa622ba7a2fa8)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchValuesOnly_1a9ec06e97e26c8df86e3aa622ba7a2fa8"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1a1e41d42a831d7dddc1d50b0605f56efe)`()` <a id="structFRHAPI__MatchValuesOnly_1a1e41d42a831d7dddc1d50b0605f56efe"></a>

Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1ab9da2a8f023217103f5c4610e601e699)`() const` <a id="structFRHAPI__MatchValuesOnly_1ab9da2a8f023217103f5c4610e601e699"></a>

Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1ab779cb38cf8c033e86c67ec6dea4fffc)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchValuesOnly_1ab779cb38cf8c033e86c67ec6dea4fffc"></a>

Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1a2e76455653992d20c41f9dd3b2e1948d)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchValuesOnly_1a2e76455653992d20c41f9dd3b2e1948d"></a>

Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1a74cec23f32e1520398b5fae7cd0cc45b)`()` <a id="structFRHAPI__MatchValuesOnly_1a74cec23f32e1520398b5fae7cd0cc45b"></a>

Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1ad6e38bda171b30f3fe65484c58c478b2)`() const` <a id="structFRHAPI__MatchValuesOnly_1ad6e38bda171b30f3fe65484c58c478b2"></a>

Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1a9a268aee94a15010907cf3722e7808e6)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a9a268aee94a15010907cf3722e7808e6"></a>

Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1adabfe21a0266b27df1fd7972f72e731a)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchValuesOnly_1adabfe21a0266b27df1fd7972f72e731a"></a>

Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchValuesOnly_1a18b61eaedacf6931db8d95b503ebf75b)`()` <a id="structFRHAPI__MatchValuesOnly_1a18b61eaedacf6931db8d95b503ebf75b"></a>

Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.

#### `public inline FORCEINLINE FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1adc4c1be7cbce6619ca992dbd25c757d2)`()` <a id="structFRHAPI__MatchValuesOnly_1adc4c1be7cbce6619ca992dbd25c757d2"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1a6b204510dd552eb5aa0b4a247e165c0b)`() const` <a id="structFRHAPI__MatchValuesOnly_1a6b204510dd552eb5aa0b4a247e165c0b"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1a5636e1cb0a6694a966eaa34063428203)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchValuesOnly_1a5636e1cb0a6694a966eaa34063428203"></a>

Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1ac1cbd316ed94a634e9c74a4449efe27f)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchValuesOnly_1ac1cbd316ed94a634e9c74a4449efe27f"></a>

Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1a54d45e35a86523b1b2988b6bf8bcfb64)`()` <a id="structFRHAPI__MatchValuesOnly_1a54d45e35a86523b1b2988b6bf8bcfb64"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1aad5d7ec7c7a731350474e85b36a70616)`() const` <a id="structFRHAPI__MatchValuesOnly_1aad5d7ec7c7a731350474e85b36a70616"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1a42c1e5b23e56a6a633b1e361398c34d5)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a42c1e5b23e56a6a633b1e361398c34d5"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1a98374b894dd5f7545aaeb6ef9acc4c09)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a98374b894dd5f7545aaeb6ef9acc4c09"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchValuesOnly_1a9e4e33dd1182aaaa7b3f31fdd063298d)`()` <a id="structFRHAPI__MatchValuesOnly_1a9e4e33dd1182aaaa7b3f31fdd063298d"></a>

Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetType`](#structFRHAPI__MatchValuesOnly_1a5ce29bd5e62f2c6dd99148e58c74de0b)`()` <a id="structFRHAPI__MatchValuesOnly_1a5ce29bd5e62f2c6dd99148e58c74de0b"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__MatchValuesOnly_1a38a9761e504c05f685872b53f3783fcb)`() const` <a id="structFRHAPI__MatchValuesOnly_1a38a9761e504c05f685872b53f3783fcb"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__MatchValuesOnly_1a9cbf216e72c28ba6bc644eb5f8d0fff0)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchValuesOnly_1a9cbf216e72c28ba6bc644eb5f8d0fff0"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetType`](#structFRHAPI__MatchValuesOnly_1a7995a55103e20a2d4ba1848247c09e55)`(FString & OutValue) const` <a id="structFRHAPI__MatchValuesOnly_1a7995a55103e20a2d4ba1848247c09e55"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetTypeOrNull`](#structFRHAPI__MatchValuesOnly_1a7ed1dc8907e91dfdf7cdf5a70730a2c9)`()` <a id="structFRHAPI__MatchValuesOnly_1a7ed1dc8907e91dfdf7cdf5a70730a2c9"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchValuesOnly_1aa3afc306d3b539ef03e9113367efd881)`() const` <a id="structFRHAPI__MatchValuesOnly_1aa3afc306d3b539ef03e9113367efd881"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__MatchValuesOnly_1ae80ccb753fa6161d991012eac09342c6)`(const FString & NewValue)` <a id="structFRHAPI__MatchValuesOnly_1ae80ccb753fa6161d991012eac09342c6"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__MatchValuesOnly_1a3f6f0abbfbd257f566f60712717fbecf)`(FString && NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a3f6f0abbfbd257f566f60712717fbecf"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.

#### `public inline void `[`ClearType`](#structFRHAPI__MatchValuesOnly_1ac90be93bd8ca0d9f6365011b139aa4e3)`()` <a id="structFRHAPI__MatchValuesOnly_1ac90be93bd8ca0d9f6365011b139aa4e3"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

#### `public inline FORCEINLINE void `[`SetTypeToNull`](#structFRHAPI__MatchValuesOnly_1a256f22cc5b38a55f38092bee0e72872e)`()` <a id="structFRHAPI__MatchValuesOnly_1a256f22cc5b38a55f38092bee0e72872e"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsTypeNull`](#structFRHAPI__MatchValuesOnly_1a0cd06b336eab5090187464c5ce664f12)`() const` <a id="structFRHAPI__MatchValuesOnly_1a0cd06b336eab5090187464c5ce664f12"></a>

Checks whether Type_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchValuesOnly_1ae2b758b073d3417aec63697c0bed508d)`()` <a id="structFRHAPI__MatchValuesOnly_1ae2b758b073d3417aec63697c0bed508d"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchValuesOnly_1ae63d79e130becbeeccf9d2e47d6fb180)`() const` <a id="structFRHAPI__MatchValuesOnly_1ae63d79e130becbeeccf9d2e47d6fb180"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchValuesOnly_1a4f77f4fc4e9ac08b4c533dfdfa9a0cf9)`(const ERHAPI_MatchState & DefaultValue) const` <a id="structFRHAPI__MatchValuesOnly_1a4f77f4fc4e9ac08b4c533dfdfa9a0cf9"></a>

Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetState`](#structFRHAPI__MatchValuesOnly_1a46c095f029cfd6860da3ef377867dc33)`(ERHAPI_MatchState & OutValue) const` <a id="structFRHAPI__MatchValuesOnly_1a46c095f029cfd6860da3ef377867dc33"></a>

Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchValuesOnly_1ad8a7a432314572be7e2003c9031d30bd)`()` <a id="structFRHAPI__MatchValuesOnly_1ad8a7a432314572be7e2003c9031d30bd"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchValuesOnly_1a3ac9344631afb911f507ec9c2fbbc026)`() const` <a id="structFRHAPI__MatchValuesOnly_1a3ac9344631afb911f507ec9c2fbbc026"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetState`](#structFRHAPI__MatchValuesOnly_1acfa4d9fdbea9ff36d272849a5cecbb17)`(const ERHAPI_MatchState & NewValue)` <a id="structFRHAPI__MatchValuesOnly_1acfa4d9fdbea9ff36d272849a5cecbb17"></a>

Sets the value of State_Optional and also sets State_IsSet to true.

#### `public inline FORCEINLINE void `[`SetState`](#structFRHAPI__MatchValuesOnly_1abcd157b386fa779eab3256b90d27fb54)`(ERHAPI_MatchState && NewValue)` <a id="structFRHAPI__MatchValuesOnly_1abcd157b386fa779eab3256b90d27fb54"></a>

Sets the value of State_Optional and also sets State_IsSet to true using move semantics.

#### `public inline void `[`ClearState`](#structFRHAPI__MatchValuesOnly_1a13d0bc0de8d329b8b0a9a4a8b358a00b)`()` <a id="structFRHAPI__MatchValuesOnly_1a13d0bc0de8d329b8b0a9a4a8b358a00b"></a>

Clears the value of State_Optional and sets State_IsSet to false.

#### `public inline FORCEINLINE void `[`SetStateToNull`](#structFRHAPI__MatchValuesOnly_1a0d6c85bd0c25fa6adb9f70e287f80ff9)`()` <a id="structFRHAPI__MatchValuesOnly_1a0d6c85bd0c25fa6adb9f70e287f80ff9"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStateNull`](#structFRHAPI__MatchValuesOnly_1a1d747fd781f88a53c232b13c4e08982b)`() const` <a id="structFRHAPI__MatchValuesOnly_1a1d747fd781f88a53c232b13c4e08982b"></a>

Checks whether State_Optional is set to null.

#### `public inline FORCEINLINE FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchValuesOnly_1a3414d14c1bbf24886330f62e26bf68d6)`()` <a id="structFRHAPI__MatchValuesOnly_1a3414d14c1bbf24886330f62e26bf68d6"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchValuesOnly_1a574f24decc4da6171849bf743fa222e8)`() const` <a id="structFRHAPI__MatchValuesOnly_1a574f24decc4da6171849bf743fa222e8"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchValuesOnly_1a6e86e2d8f293e203e27cdd52eb7ec29c)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchValuesOnly_1a6e86e2d8f293e203e27cdd52eb7ec29c"></a>

Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStartTimestamp`](#structFRHAPI__MatchValuesOnly_1a87a5a7e35b6bd0af00385f7494eccbf5)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchValuesOnly_1a87a5a7e35b6bd0af00385f7494eccbf5"></a>

Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1a34c6fdba0215c7bdcc9ce13ab45c71aa)`()` <a id="structFRHAPI__MatchValuesOnly_1a34c6fdba0215c7bdcc9ce13ab45c71aa"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1ad6be22191bcf57bb46261c433b7dbf9b)`() const` <a id="structFRHAPI__MatchValuesOnly_1ad6be22191bcf57bb46261c433b7dbf9b"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStartTimestamp`](#structFRHAPI__MatchValuesOnly_1aa6bd0f07b481fb6cb130dcb868599405)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchValuesOnly_1aa6bd0f07b481fb6cb130dcb868599405"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStartTimestamp`](#structFRHAPI__MatchValuesOnly_1a76b801745b174522cb390d6fdb463e50)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a76b801745b174522cb390d6fdb463e50"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchValuesOnly_1a94721ba1c93898774501cf5b578c1056)`()` <a id="structFRHAPI__MatchValuesOnly_1a94721ba1c93898774501cf5b578c1056"></a>

Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.

#### `public inline FORCEINLINE void `[`SetStartTimestampToNull`](#structFRHAPI__MatchValuesOnly_1a39202ce3baa9ea8d3996dd59aa7dbaf0)`()` <a id="structFRHAPI__MatchValuesOnly_1a39202ce3baa9ea8d3996dd59aa7dbaf0"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStartTimestampNull`](#structFRHAPI__MatchValuesOnly_1a0c63bbbacea9db9caa39e0ae32e141ad)`() const` <a id="structFRHAPI__MatchValuesOnly_1a0c63bbbacea9db9caa39e0ae32e141ad"></a>

Checks whether StartTimestamp_Optional is set to null.

#### `public inline FORCEINLINE FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchValuesOnly_1a649c0dac394cb5d57a5366a19fdc8214)`()` <a id="structFRHAPI__MatchValuesOnly_1a649c0dac394cb5d57a5366a19fdc8214"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchValuesOnly_1afb5c467ed4696756b68832dfe7f7cbb1)`() const` <a id="structFRHAPI__MatchValuesOnly_1afb5c467ed4696756b68832dfe7f7cbb1"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchValuesOnly_1a0a33a9f7a63912c51bb9f1573f7380fb)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchValuesOnly_1a0a33a9f7a63912c51bb9f1573f7380fb"></a>

Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEndTimestamp`](#structFRHAPI__MatchValuesOnly_1abb4ece34a9842508b2d895dbbbd0d291)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchValuesOnly_1abb4ece34a9842508b2d895dbbbd0d291"></a>

Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1adfeac4489cf367f5857f22139270c22a)`()` <a id="structFRHAPI__MatchValuesOnly_1adfeac4489cf367f5857f22139270c22a"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchValuesOnly_1a3c64dacfe1da8bcdf109c8ff55baafaf)`() const` <a id="structFRHAPI__MatchValuesOnly_1a3c64dacfe1da8bcdf109c8ff55baafaf"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEndTimestamp`](#structFRHAPI__MatchValuesOnly_1abfc7026714cfbf70b8390489dbb4311b)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchValuesOnly_1abfc7026714cfbf70b8390489dbb4311b"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEndTimestamp`](#structFRHAPI__MatchValuesOnly_1ab114148770462b35a78b87e945a75edb)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchValuesOnly_1ab114148770462b35a78b87e945a75edb"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchValuesOnly_1aa8738167c7ed1d089256f0a0bd734c8d)`()` <a id="structFRHAPI__MatchValuesOnly_1aa8738167c7ed1d089256f0a0bd734c8d"></a>

Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.

#### `public inline FORCEINLINE void `[`SetEndTimestampToNull`](#structFRHAPI__MatchValuesOnly_1af439c803affffe35dec066a2b60132b7)`()` <a id="structFRHAPI__MatchValuesOnly_1af439c803affffe35dec066a2b60132b7"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsEndTimestampNull`](#structFRHAPI__MatchValuesOnly_1a28a05f1aff1ca4d165f2af6abac0f71d)`() const` <a id="structFRHAPI__MatchValuesOnly_1a28a05f1aff1ca4d165f2af6abac0f71d"></a>

Checks whether EndTimestamp_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchValuesOnly_1aa2331ac443d5c59975611e557de60efd)`()` <a id="structFRHAPI__MatchValuesOnly_1aa2331ac443d5c59975611e557de60efd"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchValuesOnly_1af8b5184c189ffddb1702d464127adc6f)`() const` <a id="structFRHAPI__MatchValuesOnly_1af8b5184c189ffddb1702d464127adc6f"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchValuesOnly_1a939cb2bda89bcb8622798956f61f777a)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchValuesOnly_1a939cb2bda89bcb8622798956f61f777a"></a>

Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDurationSeconds`](#structFRHAPI__MatchValuesOnly_1ad45744703b0b73d8dfccae7cc615ede4)`(int32 & OutValue) const` <a id="structFRHAPI__MatchValuesOnly_1ad45744703b0b73d8dfccae7cc615ede4"></a>

Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchValuesOnly_1ae458428134c3eac55000fc91a067c6ad)`()` <a id="structFRHAPI__MatchValuesOnly_1ae458428134c3eac55000fc91a067c6ad"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchValuesOnly_1ada55ad267671b7ceb48fe2b2e9a3682c)`() const` <a id="structFRHAPI__MatchValuesOnly_1ada55ad267671b7ceb48fe2b2e9a3682c"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchValuesOnly_1a1b1cdafb3ff7b0b13089b135caf271b7)`(const int32 & NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a1b1cdafb3ff7b0b13089b135caf271b7"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchValuesOnly_1a44b764aaf96def702ab9606d4280bb15)`(int32 && NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a44b764aaf96def702ab9606d4280bb15"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchValuesOnly_1ab8390d99ce4f8549e1cd85e55dfb74f2)`()` <a id="structFRHAPI__MatchValuesOnly_1ab8390d99ce4f8549e1cd85e55dfb74f2"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_DurationSeconds`](#structFRHAPI__MatchValuesOnly_1aaa76704be0b12d5b1b40ddc86367ce34)`()` <a id="structFRHAPI__MatchValuesOnly_1aaa76704be0b12d5b1b40ddc86367ce34"></a>

Returns the default value of DurationSeconds.

#### `public inline FORCEINLINE void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchValuesOnly_1a17dd24d395bf50c441bb52fb57765b9f)`()` <a id="structFRHAPI__MatchValuesOnly_1a17dd24d395bf50c441bb52fb57765b9f"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchValuesOnly_1acc58196b31aa88a07170e8eed9f74168)`() const` <a id="structFRHAPI__MatchValuesOnly_1acc58196b31aa88a07170e8eed9f74168"></a>

Checks whether DurationSeconds_Optional is set to null.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchValuesOnly_1a562129019bf53c4cb09ca7046b87a7ea)`()` <a id="structFRHAPI__MatchValuesOnly_1a562129019bf53c4cb09ca7046b87a7ea"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchValuesOnly_1af7593f1684e7e79ec2e6d3bdc78db07a)`() const` <a id="structFRHAPI__MatchValuesOnly_1af7593f1684e7e79ec2e6d3bdc78db07a"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchValuesOnly_1ab37af69b1a0249378335457f3dacf769)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchValuesOnly_1ab37af69b1a0249378335457f3dacf769"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchValuesOnly_1a46f9c5ac4bb8008504e95934f7c04c3e)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchValuesOnly_1a46f9c5ac4bb8008504e95934f7c04c3e"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchValuesOnly_1a3bfd78fe60a05b141ff73d00cb050ad1)`()` <a id="structFRHAPI__MatchValuesOnly_1a3bfd78fe60a05b141ff73d00cb050ad1"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchValuesOnly_1a0c85b1253efb9a49ab68e3dbe0f0dccd)`() const` <a id="structFRHAPI__MatchValuesOnly_1a0c85b1253efb9a49ab68e3dbe0f0dccd"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchValuesOnly_1a67029b15b01192c6471bebda7b0c9b76)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a67029b15b01192c6471bebda7b0c9b76"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchValuesOnly_1acf28c8c37322d8ee98bb9ed6d6a3eee4)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchValuesOnly_1acf28c8c37322d8ee98bb9ed6d6a3eee4"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchValuesOnly_1ac9834687b5f28148ff91e4f0c5addad2)`()` <a id="structFRHAPI__MatchValuesOnly_1ac9834687b5f28148ff91e4f0c5addad2"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__MatchValuesOnly_1ac1820ef334af6ca1278b7d210ed936c0)`()` <a id="structFRHAPI__MatchValuesOnly_1ac1820ef334af6ca1278b7d210ed936c0"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__MatchValuesOnly_1a1ff4930174ee3a163bcea0e5f8524f5a)`() const` <a id="structFRHAPI__MatchValuesOnly_1a1ff4930174ee3a163bcea0e5f8524f5a"></a>

Checks whether CustomData_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetCorrelationId`](#structFRHAPI__MatchValuesOnly_1af35f3c62f10d54d3c7037c6224fd3a21)`()` <a id="structFRHAPI__MatchValuesOnly_1af35f3c62f10d54d3c7037c6224fd3a21"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__MatchValuesOnly_1a32d71d310a9ae35cde4626ad609c565b)`() const` <a id="structFRHAPI__MatchValuesOnly_1a32d71d310a9ae35cde4626ad609c565b"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__MatchValuesOnly_1aad7835ee588fd561d6d80df76e3628f9)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchValuesOnly_1aad7835ee588fd561d6d80df76e3628f9"></a>

Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCorrelationId`](#structFRHAPI__MatchValuesOnly_1a019a2fcb414a6425e5ad2d59768f49cd)`(FString & OutValue) const` <a id="structFRHAPI__MatchValuesOnly_1a019a2fcb414a6425e5ad2d59768f49cd"></a>

Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchValuesOnly_1a6297d82c10e4c26b017700dcedca17de)`()` <a id="structFRHAPI__MatchValuesOnly_1a6297d82c10e4c26b017700dcedca17de"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchValuesOnly_1a6417e22e8b93ddee6e54067b355f597e)`() const` <a id="structFRHAPI__MatchValuesOnly_1a6417e22e8b93ddee6e54067b355f597e"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__MatchValuesOnly_1a23a94dd59941a8fa120719b132a1077a)`(const FString & NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a23a94dd59941a8fa120719b132a1077a"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__MatchValuesOnly_1a62090604be1562d10cf766ce6d8a6fcd)`(FString && NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a62090604be1562d10cf766ce6d8a6fcd"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.

#### `public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchValuesOnly_1a8d78b3748f28a42e63b2fe28a6c34868)`()` <a id="structFRHAPI__MatchValuesOnly_1a8d78b3748f28a42e63b2fe28a6c34868"></a>

Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCorrelationIdToNull`](#structFRHAPI__MatchValuesOnly_1aa486bab3f39f437ee9870591fa0577a7)`()` <a id="structFRHAPI__MatchValuesOnly_1aa486bab3f39f437ee9870591fa0577a7"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCorrelationIdNull`](#structFRHAPI__MatchValuesOnly_1af45183d646a3427c5921854fbedfba8b)`() const` <a id="structFRHAPI__MatchValuesOnly_1af45183d646a3427c5921854fbedfba8b"></a>

Checks whether CorrelationId_Optional is set to null.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchValuesOnly_1a4c6ff3ec4d2f5c8f560d8189f8dd2764)`()` <a id="structFRHAPI__MatchValuesOnly_1a4c6ff3ec4d2f5c8f560d8189f8dd2764"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchValuesOnly_1ae0ff5f3fcd3a71f38028ae2fd20f36cb)`() const` <a id="structFRHAPI__MatchValuesOnly_1ae0ff5f3fcd3a71f38028ae2fd20f36cb"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchValuesOnly_1a631d7f124265683c3c9a9fbd8788cee1)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` <a id="structFRHAPI__MatchValuesOnly_1a631d7f124265683c3c9a9fbd8788cee1"></a>

Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSessions`](#structFRHAPI__MatchValuesOnly_1a4c207251f0bc3cfb97b2e62154e29647)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` <a id="structFRHAPI__MatchValuesOnly_1a4c207251f0bc3cfb97b2e62154e29647"></a>

Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchValuesOnly_1a64059830d51b368756138fc5cc776982)`()` <a id="structFRHAPI__MatchValuesOnly_1a64059830d51b368756138fc5cc776982"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchValuesOnly_1a7c2ed57882680dd7c982ba602db20f84)`() const` <a id="structFRHAPI__MatchValuesOnly_1a7c2ed57882680dd7c982ba602db20f84"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchValuesOnly_1a2218f691142a3e824280ac9a47caaedd)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a2218f691142a3e824280ac9a47caaedd"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchValuesOnly_1acc4f99966fb8171ed24d36f1a03aa00d)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` <a id="structFRHAPI__MatchValuesOnly_1acc4f99966fb8171ed24d36f1a03aa00d"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.

#### `public inline void `[`ClearSessions`](#structFRHAPI__MatchValuesOnly_1a2c86a4146366a9939c40956687e3a3a3)`()` <a id="structFRHAPI__MatchValuesOnly_1a2c86a4146366a9939c40956687e3a3a3"></a>

Clears the value of Sessions_Optional and sets Sessions_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchValuesOnly_1a82f885fe36972727438394fe1710ebe6)`()` <a id="structFRHAPI__MatchValuesOnly_1a82f885fe36972727438394fe1710ebe6"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchValuesOnly_1ae4fb2379fb9ca9ff760bd7dfd98e3323)`() const` <a id="structFRHAPI__MatchValuesOnly_1ae4fb2379fb9ca9ff760bd7dfd98e3323"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchValuesOnly_1a598eb054f2128fe8399e05397914a95a)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` <a id="structFRHAPI__MatchValuesOnly_1a598eb054f2128fe8399e05397914a95a"></a>

Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstances`](#structFRHAPI__MatchValuesOnly_1ac8d8ddcc4665b2a59c254646e62fc9a2)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` <a id="structFRHAPI__MatchValuesOnly_1ac8d8ddcc4665b2a59c254646e62fc9a2"></a>

Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchValuesOnly_1a62f999821102695f1c3073765e4cc904)`()` <a id="structFRHAPI__MatchValuesOnly_1a62f999821102695f1c3073765e4cc904"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchValuesOnly_1a7590dba5fd6e3ac7b6a8090bbfd17450)`() const` <a id="structFRHAPI__MatchValuesOnly_1a7590dba5fd6e3ac7b6a8090bbfd17450"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstances`](#structFRHAPI__MatchValuesOnly_1a68a3c0a4fd5dbb448805f99a3e82c0df)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a68a3c0a4fd5dbb448805f99a3e82c0df"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstances`](#structFRHAPI__MatchValuesOnly_1ad451ff34debd196f142792fe33312730)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` <a id="structFRHAPI__MatchValuesOnly_1ad451ff34debd196f142792fe33312730"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.

#### `public inline void `[`ClearInstances`](#structFRHAPI__MatchValuesOnly_1a52f9fcc56d7c1e697e436f2e817fd34e)`()` <a id="structFRHAPI__MatchValuesOnly_1a52f9fcc56d7c1e697e436f2e817fd34e"></a>

Clears the value of Instances_Optional and sets Instances_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchValuesOnly_1a2231742c21fc3a44c183905dcda34c23)`()` <a id="structFRHAPI__MatchValuesOnly_1a2231742c21fc3a44c183905dcda34c23"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchValuesOnly_1a31dfea27c738d6feafb03fa038dee834)`() const` <a id="structFRHAPI__MatchValuesOnly_1a31dfea27c738d6feafb03fa038dee834"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchValuesOnly_1a5526cf627110cb12644deb416b9a0787)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` <a id="structFRHAPI__MatchValuesOnly_1a5526cf627110cb12644deb416b9a0787"></a>

Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAllocations`](#structFRHAPI__MatchValuesOnly_1a8147d454f7a9cf073af2107f9c04d36a)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` <a id="structFRHAPI__MatchValuesOnly_1a8147d454f7a9cf073af2107f9c04d36a"></a>

Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchValuesOnly_1a1fbc15c114900fc2badfe26be8d28fd1)`()` <a id="structFRHAPI__MatchValuesOnly_1a1fbc15c114900fc2badfe26be8d28fd1"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchValuesOnly_1af77e18124dc895236bb5de428ae112b4)`() const` <a id="structFRHAPI__MatchValuesOnly_1af77e18124dc895236bb5de428ae112b4"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAllocations`](#structFRHAPI__MatchValuesOnly_1a80df591485d90e47c5bc3a824ea0c11b)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a80df591485d90e47c5bc3a824ea0c11b"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAllocations`](#structFRHAPI__MatchValuesOnly_1a820431fe02d52dcadeee9daa2357c898)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a820431fe02d52dcadeee9daa2357c898"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.

#### `public inline void `[`ClearAllocations`](#structFRHAPI__MatchValuesOnly_1a35802b59bc868c62ca67e62b67a85eef)`()` <a id="structFRHAPI__MatchValuesOnly_1a35802b59bc868c62ca67e62b67a85eef"></a>

Clears the value of Allocations_Optional and sets Allocations_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__MatchValuesOnly_1abaaa2cdc9d5f4cfe02d37b1d366ae3f2)`()` <a id="structFRHAPI__MatchValuesOnly_1abaaa2cdc9d5f4cfe02d37b1d366ae3f2"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__MatchValuesOnly_1aa54b3dbc642c110f499ab7649f78d60b)`() const` <a id="structFRHAPI__MatchValuesOnly_1aa54b3dbc642c110f499ab7649f78d60b"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__MatchValuesOnly_1ac418192e44982fd2d8517c2bf5cd099e)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchValuesOnly_1ac418192e44982fd2d8517c2bf5cd099e"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__MatchValuesOnly_1aaaaadd436e4a1d075fa0d107d507c378)`(FString & OutValue) const` <a id="structFRHAPI__MatchValuesOnly_1aaaaadd436e4a1d075fa0d107d507c378"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchValuesOnly_1a9adc8456b2d7396777b5ac22d0d97e3a)`()` <a id="structFRHAPI__MatchValuesOnly_1a9adc8456b2d7396777b5ac22d0d97e3a"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchValuesOnly_1a5e2f2745774ed56a8eca574658ac20d5)`() const` <a id="structFRHAPI__MatchValuesOnly_1a5e2f2745774ed56a8eca574658ac20d5"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__MatchValuesOnly_1ae08c6cab4936ba83393fd9b23fde3be8)`(const FString & NewValue)` <a id="structFRHAPI__MatchValuesOnly_1ae08c6cab4936ba83393fd9b23fde3be8"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__MatchValuesOnly_1a005e120a9dd70cb6ea2eee78b81bcf4d)`(FString && NewValue)` <a id="structFRHAPI__MatchValuesOnly_1a005e120a9dd70cb6ea2eee78b81bcf4d"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__MatchValuesOnly_1a971698d330b984c677f48a4e35dd9efd)`()` <a id="structFRHAPI__MatchValuesOnly_1a971698d330b984c677f48a4e35dd9efd"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

