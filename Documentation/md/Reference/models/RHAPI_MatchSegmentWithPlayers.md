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
`public inline FORCEINLINE FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ab5641d7316d93f6107da0b1217b42857)`()` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a313981d2948f3857ec33114e8437afa5)`() const` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ae9840e73beee5e519b8ed80874111e2a)`(const FDateTime & DefaultValue) const` | Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1afc3557562edb134721ee8783f64cb02e)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a6ba28398758d46b2aa33fbbaa1eb7c53)`()` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ab072d32bdbb7a73ef18d5d046a2c0301)`() const` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1aa9c038a7f36a8159ee965f3117aebfe0)`(const FDateTime & NewValue)` | Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ae0e7a9192c9e561985c3901fa975e035)`(FDateTime && NewValue)` | Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a5a057c0d69d7bd1191fe8c02dc18b874)`()` | Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.
`public inline FORCEINLINE FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a2051a189714e6c55e1650bcc12a963af)`()` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a6c62857569f54cabda58bb25887a4415)`() const` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a9379b8df89adc094c22de0f09570ada7)`(const FDateTime & DefaultValue) const` | Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a99e4d84bcd1458e37badde1dfd772c25)`(FDateTime & OutValue) const` | Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ada6a7055709b4c57ecbd3061473b579f)`()` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ad004bd1d1e614e076c19c367b373a514)`() const` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1afb5e8f7d53207ffdb25853360899b70a)`(const FDateTime & NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a79208606f47efb17fb6b8a6e596c24b7)`(FDateTime && NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a2a7b395e6ff81659ce695e0d72f0a84e)`()` | Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.
`public inline FORCEINLINE FString & `[`GetType`](#structFRHAPI__MatchSegmentWithPlayers_1a6ccf3267b17a88d08080124d6aa8daf0)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__MatchSegmentWithPlayers_1ab7f360052832bb11b8f493e29d5c4faf)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__MatchSegmentWithPlayers_1a6596ab3af86df93e7cb5ab33e901d16d)`(const FString & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetType`](#structFRHAPI__MatchSegmentWithPlayers_1af4dae49d7bdc7c46426533487a06cdc1)`(FString & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a95cf0c96d8a300560b84a97ccd101941)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a4302b3e7716f2979e32c0e95fd2f0d66)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__MatchSegmentWithPlayers_1a12f8780423281fa61130dbbb67f5d67c)`(const FString & NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__MatchSegmentWithPlayers_1a8fd4b0733b913d430334c916d8866669)`(FString && NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.
`public inline void `[`ClearType`](#structFRHAPI__MatchSegmentWithPlayers_1afe765a26c85d22c1b38da4cb84a71fde)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline FORCEINLINE void `[`SetTypeToNull`](#structFRHAPI__MatchSegmentWithPlayers_1ad9dc61f11c18c0f18690c0ce990c2e85)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsTypeNull`](#structFRHAPI__MatchSegmentWithPlayers_1affd70ec8c99239a8492ea2d6a6feb6b4)`() const` | Checks whether Type_Optional is set to null.
`public inline FORCEINLINE ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentWithPlayers_1a9ec25fb4c9450c3a1c19810a1c7b77c3)`()` | Gets the value of State_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentWithPlayers_1a8e891b0cf3ab933837e24ef46bfdeabe)`() const` | Gets the value of State_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentWithPlayers_1a4adf0743a8e38061a9a08657cbb27ed3)`(const ERHAPI_MatchState & DefaultValue) const` | Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetState`](#structFRHAPI__MatchSegmentWithPlayers_1ac69bf283c95113a7a7408223fa1b606a)`(ERHAPI_MatchState & OutValue) const` | Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ae665b723e589bc93830eda47c3c05c98)`()` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a28272f90cffb86d345a5a5e28e4ece46)`() const` | Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetState`](#structFRHAPI__MatchSegmentWithPlayers_1ae22479343afa2d8e6119cde82ec140c9)`(const ERHAPI_MatchState & NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true.
`public inline FORCEINLINE void `[`SetState`](#structFRHAPI__MatchSegmentWithPlayers_1a341c20786eadb09742c536b420f86988)`(ERHAPI_MatchState && NewValue)` | Sets the value of State_Optional and also sets State_IsSet to true using move semantics.
`public inline void `[`ClearState`](#structFRHAPI__MatchSegmentWithPlayers_1afa393bb3409f6076f9945972f9f23659)`()` | Clears the value of State_Optional and sets State_IsSet to false.
`public inline FORCEINLINE void `[`SetStateToNull`](#structFRHAPI__MatchSegmentWithPlayers_1adadee45ed615e99e441b9416cc2c17a1)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStateNull`](#structFRHAPI__MatchSegmentWithPlayers_1a80ebbfddf079f57893f5b65fff995d8b)`() const` | Checks whether State_Optional is set to null.
`public inline FORCEINLINE FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1abbadf9450029bb7d58dbf7fad8651553)`()` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a1de215926fa8479e87e0ee7902fa54e0)`() const` | Gets the value of StartTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a7a3e625fdea0cb0a8c541dcbe6acfca0)`(const FDateTime & DefaultValue) const` | Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a79fc8b03964a1017aff806e544e68d96)`(FDateTime & OutValue) const` | Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a995812cb5d3f64dff729771a234e800e)`()` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a53e50cb28c67a97a535c5f87dbd7575d)`() const` | Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1aefd947688e461fb0a9cac299017da43d)`(const FDateTime & NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a8ee87049739edb135dbbd56edc47c3c4)`(FDateTime && NewValue)` | Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a99bdcedb9bbfb7a04d8c6a561aa69ca4)`()` | Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.
`public inline FORCEINLINE void `[`SetStartTimestampToNull`](#structFRHAPI__MatchSegmentWithPlayers_1a97fc6837883f44d802c4a2d832ca9414)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStartTimestampNull`](#structFRHAPI__MatchSegmentWithPlayers_1af45471fb48c446220efedb8bf09e56b2)`() const` | Checks whether StartTimestamp_Optional is set to null.
`public inline FORCEINLINE FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a96778990903f9d7ab766e3ee5f5ea3d2)`()` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a55aeeab533d4e31f56a25c2e449c52b0)`() const` | Gets the value of EndTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ab6b8c2d9ad5ff6c47f9f6de00679db5f)`(const FDateTime & DefaultValue) const` | Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ade0cf20bda697c1507532a423f47e9c0)`(FDateTime & OutValue) const` | Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1aca3c38e922c0d424eb6718b9bcd777bc)`()` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1addbba73b3c87d2e453161a7ac93df6f4)`() const` | Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1afac6dc6b7cb0d15124e41ee9841bea04)`(const FDateTime & NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ab876d0327ca3f4f8711be1723cdac43b)`(FDateTime && NewValue)` | Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a0d8df68f97003699016115fabb307c88)`()` | Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.
`public inline FORCEINLINE void `[`SetEndTimestampToNull`](#structFRHAPI__MatchSegmentWithPlayers_1abe8da67a16c14f0e25c53f9e63a00f33)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsEndTimestampNull`](#structFRHAPI__MatchSegmentWithPlayers_1a9bd0d6b8ed21251da34e9ce18e351980)`() const` | Checks whether EndTimestamp_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1ac4e2696bacd472d25e9664066d5ac648)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a38ef0b79b64ed1ba79f19a25198fcccf)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1ae8c826dc39f7bbfaafec63b68093158f)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a276a733e36921070e936e417096e29f2)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a1d4d60d5e5d8d26368ae627c3e450fb6)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a16ab0fdb2903eb249b708846436a7124)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a983cffa1a9653809d5ab6dfb693904b1)`(const int32 & NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1ab252c28d47ea81a1a35ecf07d86a7fa4)`(int32 && NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a859cad510bd50f14da7ec423a7c01fca)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_DurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a59459a44383efe0b8e969a2fb29d8471)`()` | Returns the default value of DurationSeconds.
`public inline FORCEINLINE void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchSegmentWithPlayers_1af8ccfb902d75f8c85dba8d629731a6b3)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchSegmentWithPlayers_1a82cb8c7f3be594c5fa86baabb1c82b61)`() const` | Checks whether DurationSeconds_Optional is set to null.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1a36559a41fc2ea61464488aad34216703)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1a1e9d81abe320e239a13bce6f2d2268db)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1a740d9c3b40a77703217dafbe1931f71e)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1a874e50a2e383d888f9b730a623e4f1d3)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1aff62e1046174e45b7535f4bfdfce973e)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ab21e94c478b7161fe2d153fa825cb4b3)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1ab0bf9f4219f2c79031ee050b9d0a7bb6)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1ad402c029887ffbc28f2c3d79a9cc9c57)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1af69bbc7dff23cd38b47e468eb12468a3)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__MatchSegmentWithPlayers_1a99b709ae6909f5a84bfa2426d0b3881f)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__MatchSegmentWithPlayers_1afcbaf02dec20c4c5919804c58ed97c20)`() const` | Checks whether CustomData_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1a3b9822ce8e0445dc74aba01122649c36)`()` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1a579c1251c6f3374d873beba89b05b79f)`() const` | Gets the value of CorrelationId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1ab9a0c395edc921468d5a247433e75997)`(const FString & DefaultValue) const` | Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1abb42b67c81d961a07d984d1f0c957f9c)`(FString & OutValue) const` | Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ac084f3b8827fc601941fd07220b19d69)`()` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a5a29b6b72ce018fbd8588481f6c2dfa8)`() const` | Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1af1f98c942db2f32e56098d8afd7b1c08)`(const FString & NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.
`public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1ab1ec5613f6ea17ab392693f94243fe14)`(FString && NewValue)` | Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.
`public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1a70facbc24f55ecb933e183842b709e04)`()` | Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.
`public inline FORCEINLINE void `[`SetCorrelationIdToNull`](#structFRHAPI__MatchSegmentWithPlayers_1abdf8f5636d8af445b1d461fb41f2c909)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCorrelationIdNull`](#structFRHAPI__MatchSegmentWithPlayers_1ade5f4fdf4b1704031c4a9167a57490cf)`() const` | Checks whether CorrelationId_Optional is set to null.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1ab1433c140dd368b52f9c2490ebcb0ee0)`()` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1ac1e0248b39494a97c0c455e8f7cdb027)`() const` | Gets the value of Sessions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1ac4f1e5e2cb91a772a2c71e267684665e)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` | Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1a9e8dc919bf1b70d9fdcb7403700e6f0f)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` | Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ac5c3446fb78230427936e0706e8cebaf)`()` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a85cfcd605173ad35d5c53bfe994308d3)`() const` | Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1a833d5714a5b2b83d7cf3b279b10eb46f)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.
`public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1ae934b3b94df0ffd553da6af7e76c19e9)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` | Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.
`public inline void `[`ClearSessions`](#structFRHAPI__MatchSegmentWithPlayers_1af45381b90e7f81345393fe1ec079b45a)`()` | Clears the value of Sessions_Optional and sets Sessions_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a5c242efc908574966346b6bec08533f2)`()` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a37c2c1ad058dd494d8ad85f852ca7c77)`() const` | Gets the value of Instances_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1ad395c0cb6410153b6a074983c0dcc7c9)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` | Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a666a88c04e0abc3e35b13877bca0cbe3)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` | Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a30633c4df222cfc94bf945a4189d8960)`()` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a6651ba63a3743869109d8d28b052d98b)`() const` | Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a31174f1d495876b8ceb53b65717e9f8e)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true.
`public inline FORCEINLINE void `[`SetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a33758be54f12e366cb767da8b7a3084d)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` | Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.
`public inline void `[`ClearInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a6247bc3fbc11566e3249a4a00a740a8f)`()` | Clears the value of Instances_Optional and sets Instances_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a0f3d8766ea2afe04fd6302d9decc6da9)`()` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1ab4a09a979c78e60ae4e812fcfe397ee1)`() const` | Gets the value of Allocations_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a6d78907465546818ab0d794bae0e7e27)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` | Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a1be2327d3ce598908e582487c3b13740)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` | Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1afadf53d53df3f6918e5532e342855340)`()` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ac58777660bcb754b9d2c21b09b415256)`() const` | Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a69dab1bdbfbc333a235b83cff1c3eaf5)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.
`public inline FORCEINLINE void `[`SetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a5a0dd799644471b4a2a9680bdda913bd)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` | Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.
`public inline void `[`ClearAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a861e5f93aa0c9c39fad6e569e0aa8763)`()` | Clears the value of Allocations_Optional and sets Allocations_IsSet to false.
`public inline FORCEINLINE FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentWithPlayers_1add41956688c80b8f19a09bbcd50057cd)`()` | Gets the value of MatchSegment.
`public inline FORCEINLINE const FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentWithPlayers_1aefc8c7ba2cb73c0666178730a5c1ab51)`() const` | Gets the value of MatchSegment.
`public inline FORCEINLINE void `[`SetMatchSegment`](#structFRHAPI__MatchSegmentWithPlayers_1ad105623a08369bfe7a991180a6ce850a)`(const FString & NewValue)` | Sets the value of MatchSegment.
`public inline FORCEINLINE void `[`SetMatchSegment`](#structFRHAPI__MatchSegmentWithPlayers_1a84cd6ee9a4690c6f5c232efe2ec09468)`(FString && NewValue)` | Sets the value of MatchSegment using move semantics.
`public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1a102c26ed83c2176228554208b8000bad)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1ae1bc0fbbe73e75571385569c147244fc)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1a6f4e4d6cb6e08b100a295d1283322cee)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1a1e228239c227219480d9534e1fec2647)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a94a3ef2ef17b3042b8780efe672a67d8)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1aa06753d42e2dcf8108e8a3c83a16b534)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1a9c19630754a7b5a5a269af854c787ad2)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1a8c2efee0bd9026f38a94b6b2843344f3)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1ada9fb5b63bc3e430f786d150021e532d)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1af63be8dea4bd38f27357812dc513b591)`()` | Gets the value of Players_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a6c01c3fd4316d5e5916fbad495f982c7)`() const` | Gets the value of Players_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a1d95bbc9a42b5ab05307edb854e228fd)`(const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & DefaultValue) const` | Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a3320c07a066e7d1bb2274a3444f0f2b9)`(TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & OutValue) const` | Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a5792520b6b8e03f202e0819127c7377f)`()` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a185b7a83fe478435024acf75f3bef0f4)`() const` | Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a61c2f965ad1beb93fbd031c176f77a84)`(const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1ad27d866cf6c81d6a39f16bfdf400a13e)`(TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > && NewValue)` | Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.
`public inline void `[`ClearPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a942c9f48d6a439b1a1c55c698a90b4a2)`()` | Clears the value of Players_Optional and sets Players_IsSet to false.

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

#### `public inline FORCEINLINE FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ab5641d7316d93f6107da0b1217b42857)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1ab5641d7316d93f6107da0b1217b42857"></a>

Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a313981d2948f3857ec33114e8437afa5)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a313981d2948f3857ec33114e8437afa5"></a>

Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ae9840e73beee5e519b8ed80874111e2a)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ae9840e73beee5e519b8ed80874111e2a"></a>

Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1afc3557562edb134721ee8783f64cb02e)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1afc3557562edb134721ee8783f64cb02e"></a>

Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a6ba28398758d46b2aa33fbbaa1eb7c53)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a6ba28398758d46b2aa33fbbaa1eb7c53"></a>

Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ab072d32bdbb7a73ef18d5d046a2c0301)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ab072d32bdbb7a73ef18d5d046a2c0301"></a>

Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1aa9c038a7f36a8159ee965f3117aebfe0)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1aa9c038a7f36a8159ee965f3117aebfe0"></a>

Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ae0e7a9192c9e561985c3901fa975e035)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1ae0e7a9192c9e561985c3901fa975e035"></a>

Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a5a057c0d69d7bd1191fe8c02dc18b874)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a5a057c0d69d7bd1191fe8c02dc18b874"></a>

Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.

#### `public inline FORCEINLINE FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a2051a189714e6c55e1650bcc12a963af)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a2051a189714e6c55e1650bcc12a963af"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a6c62857569f54cabda58bb25887a4415)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a6c62857569f54cabda58bb25887a4415"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a9379b8df89adc094c22de0f09570ada7)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a9379b8df89adc094c22de0f09570ada7"></a>

Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a99e4d84bcd1458e37badde1dfd772c25)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a99e4d84bcd1458e37badde1dfd772c25"></a>

Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ada6a7055709b4c57ecbd3061473b579f)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1ada6a7055709b4c57ecbd3061473b579f"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ad004bd1d1e614e076c19c367b373a514)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ad004bd1d1e614e076c19c367b373a514"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1afb5e8f7d53207ffdb25853360899b70a)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1afb5e8f7d53207ffdb25853360899b70a"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a79208606f47efb17fb6b8a6e596c24b7)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a79208606f47efb17fb6b8a6e596c24b7"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a2a7b395e6ff81659ce695e0d72f0a84e)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a2a7b395e6ff81659ce695e0d72f0a84e"></a>

Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetType`](#structFRHAPI__MatchSegmentWithPlayers_1a6ccf3267b17a88d08080124d6aa8daf0)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a6ccf3267b17a88d08080124d6aa8daf0"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__MatchSegmentWithPlayers_1ab7f360052832bb11b8f493e29d5c4faf)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ab7f360052832bb11b8f493e29d5c4faf"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__MatchSegmentWithPlayers_1a6596ab3af86df93e7cb5ab33e901d16d)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a6596ab3af86df93e7cb5ab33e901d16d"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetType`](#structFRHAPI__MatchSegmentWithPlayers_1af4dae49d7bdc7c46426533487a06cdc1)`(FString & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1af4dae49d7bdc7c46426533487a06cdc1"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a95cf0c96d8a300560b84a97ccd101941)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a95cf0c96d8a300560b84a97ccd101941"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetTypeOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a4302b3e7716f2979e32c0e95fd2f0d66)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a4302b3e7716f2979e32c0e95fd2f0d66"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__MatchSegmentWithPlayers_1a12f8780423281fa61130dbbb67f5d67c)`(const FString & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a12f8780423281fa61130dbbb67f5d67c"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__MatchSegmentWithPlayers_1a8fd4b0733b913d430334c916d8866669)`(FString && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a8fd4b0733b913d430334c916d8866669"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.

#### `public inline void `[`ClearType`](#structFRHAPI__MatchSegmentWithPlayers_1afe765a26c85d22c1b38da4cb84a71fde)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1afe765a26c85d22c1b38da4cb84a71fde"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

#### `public inline FORCEINLINE void `[`SetTypeToNull`](#structFRHAPI__MatchSegmentWithPlayers_1ad9dc61f11c18c0f18690c0ce990c2e85)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1ad9dc61f11c18c0f18690c0ce990c2e85"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsTypeNull`](#structFRHAPI__MatchSegmentWithPlayers_1affd70ec8c99239a8492ea2d6a6feb6b4)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1affd70ec8c99239a8492ea2d6a6feb6b4"></a>

Checks whether Type_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentWithPlayers_1a9ec25fb4c9450c3a1c19810a1c7b77c3)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a9ec25fb4c9450c3a1c19810a1c7b77c3"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentWithPlayers_1a8e891b0cf3ab933837e24ef46bfdeabe)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a8e891b0cf3ab933837e24ef46bfdeabe"></a>

Gets the value of State_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_MatchState & `[`GetState`](#structFRHAPI__MatchSegmentWithPlayers_1a4adf0743a8e38061a9a08657cbb27ed3)`(const ERHAPI_MatchState & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a4adf0743a8e38061a9a08657cbb27ed3"></a>

Gets the value of State_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetState`](#structFRHAPI__MatchSegmentWithPlayers_1ac69bf283c95113a7a7408223fa1b606a)`(ERHAPI_MatchState & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ac69bf283c95113a7a7408223fa1b606a"></a>

Fills OutValue with the value of State_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ae665b723e589bc93830eda47c3c05c98)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1ae665b723e589bc93830eda47c3c05c98"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_MatchState * `[`GetStateOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a28272f90cffb86d345a5a5e28e4ece46)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a28272f90cffb86d345a5a5e28e4ece46"></a>

Returns a pointer to State_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetState`](#structFRHAPI__MatchSegmentWithPlayers_1ae22479343afa2d8e6119cde82ec140c9)`(const ERHAPI_MatchState & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1ae22479343afa2d8e6119cde82ec140c9"></a>

Sets the value of State_Optional and also sets State_IsSet to true.

#### `public inline FORCEINLINE void `[`SetState`](#structFRHAPI__MatchSegmentWithPlayers_1a341c20786eadb09742c536b420f86988)`(ERHAPI_MatchState && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a341c20786eadb09742c536b420f86988"></a>

Sets the value of State_Optional and also sets State_IsSet to true using move semantics.

#### `public inline void `[`ClearState`](#structFRHAPI__MatchSegmentWithPlayers_1afa393bb3409f6076f9945972f9f23659)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1afa393bb3409f6076f9945972f9f23659"></a>

Clears the value of State_Optional and sets State_IsSet to false.

#### `public inline FORCEINLINE void `[`SetStateToNull`](#structFRHAPI__MatchSegmentWithPlayers_1adadee45ed615e99e441b9416cc2c17a1)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1adadee45ed615e99e441b9416cc2c17a1"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStateNull`](#structFRHAPI__MatchSegmentWithPlayers_1a80ebbfddf079f57893f5b65fff995d8b)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a80ebbfddf079f57893f5b65fff995d8b"></a>

Checks whether State_Optional is set to null.

#### `public inline FORCEINLINE FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1abbadf9450029bb7d58dbf7fad8651553)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1abbadf9450029bb7d58dbf7fad8651553"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a1de215926fa8479e87e0ee7902fa54e0)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a1de215926fa8479e87e0ee7902fa54e0"></a>

Gets the value of StartTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a7a3e625fdea0cb0a8c541dcbe6acfca0)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a7a3e625fdea0cb0a8c541dcbe6acfca0"></a>

Gets the value of StartTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a79fc8b03964a1017aff806e544e68d96)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a79fc8b03964a1017aff806e544e68d96"></a>

Fills OutValue with the value of StartTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a995812cb5d3f64dff729771a234e800e)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a995812cb5d3f64dff729771a234e800e"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetStartTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a53e50cb28c67a97a535c5f87dbd7575d)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a53e50cb28c67a97a535c5f87dbd7575d"></a>

Returns a pointer to StartTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1aefd947688e461fb0a9cac299017da43d)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1aefd947688e461fb0a9cac299017da43d"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a8ee87049739edb135dbbd56edc47c3c4)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a8ee87049739edb135dbbd56edc47c3c4"></a>

Sets the value of StartTimestamp_Optional and also sets StartTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearStartTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a99bdcedb9bbfb7a04d8c6a561aa69ca4)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a99bdcedb9bbfb7a04d8c6a561aa69ca4"></a>

Clears the value of StartTimestamp_Optional and sets StartTimestamp_IsSet to false.

#### `public inline FORCEINLINE void `[`SetStartTimestampToNull`](#structFRHAPI__MatchSegmentWithPlayers_1a97fc6837883f44d802c4a2d832ca9414)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a97fc6837883f44d802c4a2d832ca9414"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStartTimestampNull`](#structFRHAPI__MatchSegmentWithPlayers_1af45471fb48c446220efedb8bf09e56b2)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1af45471fb48c446220efedb8bf09e56b2"></a>

Checks whether StartTimestamp_Optional is set to null.

#### `public inline FORCEINLINE FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a96778990903f9d7ab766e3ee5f5ea3d2)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a96778990903f9d7ab766e3ee5f5ea3d2"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a55aeeab533d4e31f56a25c2e449c52b0)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a55aeeab533d4e31f56a25c2e449c52b0"></a>

Gets the value of EndTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ab6b8c2d9ad5ff6c47f9f6de00679db5f)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ab6b8c2d9ad5ff6c47f9f6de00679db5f"></a>

Gets the value of EndTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ade0cf20bda697c1507532a423f47e9c0)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ade0cf20bda697c1507532a423f47e9c0"></a>

Fills OutValue with the value of EndTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1aca3c38e922c0d424eb6718b9bcd777bc)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1aca3c38e922c0d424eb6718b9bcd777bc"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetEndTimestampOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1addbba73b3c87d2e453161a7ac93df6f4)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1addbba73b3c87d2e453161a7ac93df6f4"></a>

Returns a pointer to EndTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1afac6dc6b7cb0d15124e41ee9841bea04)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1afac6dc6b7cb0d15124e41ee9841bea04"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1ab876d0327ca3f4f8711be1723cdac43b)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1ab876d0327ca3f4f8711be1723cdac43b"></a>

Sets the value of EndTimestamp_Optional and also sets EndTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearEndTimestamp`](#structFRHAPI__MatchSegmentWithPlayers_1a0d8df68f97003699016115fabb307c88)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a0d8df68f97003699016115fabb307c88"></a>

Clears the value of EndTimestamp_Optional and sets EndTimestamp_IsSet to false.

#### `public inline FORCEINLINE void `[`SetEndTimestampToNull`](#structFRHAPI__MatchSegmentWithPlayers_1abe8da67a16c14f0e25c53f9e63a00f33)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1abe8da67a16c14f0e25c53f9e63a00f33"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsEndTimestampNull`](#structFRHAPI__MatchSegmentWithPlayers_1a9bd0d6b8ed21251da34e9ce18e351980)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a9bd0d6b8ed21251da34e9ce18e351980"></a>

Checks whether EndTimestamp_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1ac4e2696bacd472d25e9664066d5ac648)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1ac4e2696bacd472d25e9664066d5ac648"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a38ef0b79b64ed1ba79f19a25198fcccf)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a38ef0b79b64ed1ba79f19a25198fcccf"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1ae8c826dc39f7bbfaafec63b68093158f)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ae8c826dc39f7bbfaafec63b68093158f"></a>

Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a276a733e36921070e936e417096e29f2)`(int32 & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a276a733e36921070e936e417096e29f2"></a>

Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a1d4d60d5e5d8d26368ae627c3e450fb6)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a1d4d60d5e5d8d26368ae627c3e450fb6"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a16ab0fdb2903eb249b708846436a7124)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a16ab0fdb2903eb249b708846436a7124"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a983cffa1a9653809d5ab6dfb693904b1)`(const int32 & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a983cffa1a9653809d5ab6dfb693904b1"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1ab252c28d47ea81a1a35ecf07d86a7fa4)`(int32 && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1ab252c28d47ea81a1a35ecf07d86a7fa4"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a859cad510bd50f14da7ec423a7c01fca)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a859cad510bd50f14da7ec423a7c01fca"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_DurationSeconds`](#structFRHAPI__MatchSegmentWithPlayers_1a59459a44383efe0b8e969a2fb29d8471)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a59459a44383efe0b8e969a2fb29d8471"></a>

Returns the default value of DurationSeconds.

#### `public inline FORCEINLINE void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchSegmentWithPlayers_1af8ccfb902d75f8c85dba8d629731a6b3)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1af8ccfb902d75f8c85dba8d629731a6b3"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchSegmentWithPlayers_1a82cb8c7f3be594c5fa86baabb1c82b61)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a82cb8c7f3be594c5fa86baabb1c82b61"></a>

Checks whether DurationSeconds_Optional is set to null.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1a36559a41fc2ea61464488aad34216703)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a36559a41fc2ea61464488aad34216703"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1a1e9d81abe320e239a13bce6f2d2268db)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a1e9d81abe320e239a13bce6f2d2268db"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1a740d9c3b40a77703217dafbe1931f71e)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a740d9c3b40a77703217dafbe1931f71e"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1a874e50a2e383d888f9b730a623e4f1d3)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a874e50a2e383d888f9b730a623e4f1d3"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1aff62e1046174e45b7535f4bfdfce973e)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1aff62e1046174e45b7535f4bfdfce973e"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ab21e94c478b7161fe2d153fa825cb4b3)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ab21e94c478b7161fe2d153fa825cb4b3"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1ab0bf9f4219f2c79031ee050b9d0a7bb6)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1ab0bf9f4219f2c79031ee050b9d0a7bb6"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1ad402c029887ffbc28f2c3d79a9cc9c57)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1ad402c029887ffbc28f2c3d79a9cc9c57"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchSegmentWithPlayers_1af69bbc7dff23cd38b47e468eb12468a3)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1af69bbc7dff23cd38b47e468eb12468a3"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__MatchSegmentWithPlayers_1a99b709ae6909f5a84bfa2426d0b3881f)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a99b709ae6909f5a84bfa2426d0b3881f"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__MatchSegmentWithPlayers_1afcbaf02dec20c4c5919804c58ed97c20)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1afcbaf02dec20c4c5919804c58ed97c20"></a>

Checks whether CustomData_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1a3b9822ce8e0445dc74aba01122649c36)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a3b9822ce8e0445dc74aba01122649c36"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1a579c1251c6f3374d873beba89b05b79f)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a579c1251c6f3374d873beba89b05b79f"></a>

Gets the value of CorrelationId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1ab9a0c395edc921468d5a247433e75997)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ab9a0c395edc921468d5a247433e75997"></a>

Gets the value of CorrelationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1abb42b67c81d961a07d984d1f0c957f9c)`(FString & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1abb42b67c81d961a07d984d1f0c957f9c"></a>

Fills OutValue with the value of CorrelationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ac084f3b8827fc601941fd07220b19d69)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1ac084f3b8827fc601941fd07220b19d69"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetCorrelationIdOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a5a29b6b72ce018fbd8588481f6c2dfa8)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a5a29b6b72ce018fbd8588481f6c2dfa8"></a>

Returns a pointer to CorrelationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1af1f98c942db2f32e56098d8afd7b1c08)`(const FString & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1af1f98c942db2f32e56098d8afd7b1c08"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1ab1ec5613f6ea17ab392693f94243fe14)`(FString && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1ab1ec5613f6ea17ab392693f94243fe14"></a>

Sets the value of CorrelationId_Optional and also sets CorrelationId_IsSet to true using move semantics.

#### `public inline void `[`ClearCorrelationId`](#structFRHAPI__MatchSegmentWithPlayers_1a70facbc24f55ecb933e183842b709e04)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a70facbc24f55ecb933e183842b709e04"></a>

Clears the value of CorrelationId_Optional and sets CorrelationId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCorrelationIdToNull`](#structFRHAPI__MatchSegmentWithPlayers_1abdf8f5636d8af445b1d461fb41f2c909)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1abdf8f5636d8af445b1d461fb41f2c909"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCorrelationIdNull`](#structFRHAPI__MatchSegmentWithPlayers_1ade5f4fdf4b1704031c4a9167a57490cf)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ade5f4fdf4b1704031c4a9167a57490cf"></a>

Checks whether CorrelationId_Optional is set to null.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1ab1433c140dd368b52f9c2490ebcb0ee0)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1ab1433c140dd368b52f9c2490ebcb0ee0"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1ac1e0248b39494a97c0c455e8f7cdb027)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ac1e0248b39494a97c0c455e8f7cdb027"></a>

Gets the value of Sessions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & `[`GetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1ac4f1e5e2cb91a772a2c71e267684665e)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ac4f1e5e2cb91a772a2c71e267684665e"></a>

Gets the value of Sessions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1a9e8dc919bf1b70d9fdcb7403700e6f0f)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a9e8dc919bf1b70d9fdcb7403700e6f0f"></a>

Fills OutValue with the value of Sessions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ac5c3446fb78230427936e0706e8cebaf)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1ac5c3446fb78230427936e0706e8cebaf"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > * `[`GetSessionsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a85cfcd605173ad35d5c53bfe994308d3)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a85cfcd605173ad35d5c53bfe994308d3"></a>

Returns a pointer to Sessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1a833d5714a5b2b83d7cf3b279b10eb46f)`(const TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a833d5714a5b2b83d7cf3b279b10eb46f"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSessions`](#structFRHAPI__MatchSegmentWithPlayers_1ae934b3b94df0ffd553da6af7e76c19e9)`(TArray< `[`FRHAPI_MatchSession`](RHAPI_MatchSession.md#structFRHAPI__MatchSession)` > && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1ae934b3b94df0ffd553da6af7e76c19e9"></a>

Sets the value of Sessions_Optional and also sets Sessions_IsSet to true using move semantics.

#### `public inline void `[`ClearSessions`](#structFRHAPI__MatchSegmentWithPlayers_1af45381b90e7f81345393fe1ec079b45a)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1af45381b90e7f81345393fe1ec079b45a"></a>

Clears the value of Sessions_Optional and sets Sessions_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a5c242efc908574966346b6bec08533f2)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a5c242efc908574966346b6bec08533f2"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a37c2c1ad058dd494d8ad85f852ca7c77)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a37c2c1ad058dd494d8ad85f852ca7c77"></a>

Gets the value of Instances_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & `[`GetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1ad395c0cb6410153b6a074983c0dcc7c9)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ad395c0cb6410153b6a074983c0dcc7c9"></a>

Gets the value of Instances_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a666a88c04e0abc3e35b13877bca0cbe3)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a666a88c04e0abc3e35b13877bca0cbe3"></a>

Fills OutValue with the value of Instances_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a30633c4df222cfc94bf945a4189d8960)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a30633c4df222cfc94bf945a4189d8960"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > * `[`GetInstancesOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a6651ba63a3743869109d8d28b052d98b)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a6651ba63a3743869109d8d28b052d98b"></a>

Returns a pointer to Instances_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a31174f1d495876b8ceb53b65717e9f8e)`(const TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a31174f1d495876b8ceb53b65717e9f8e"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a33758be54f12e366cb767da8b7a3084d)`(TArray< `[`FRHAPI_MatchInstance`](RHAPI_MatchInstance.md#structFRHAPI__MatchInstance)` > && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a33758be54f12e366cb767da8b7a3084d"></a>

Sets the value of Instances_Optional and also sets Instances_IsSet to true using move semantics.

#### `public inline void `[`ClearInstances`](#structFRHAPI__MatchSegmentWithPlayers_1a6247bc3fbc11566e3249a4a00a740a8f)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a6247bc3fbc11566e3249a4a00a740a8f"></a>

Clears the value of Instances_Optional and sets Instances_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a0f3d8766ea2afe04fd6302d9decc6da9)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a0f3d8766ea2afe04fd6302d9decc6da9"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1ab4a09a979c78e60ae4e812fcfe397ee1)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ab4a09a979c78e60ae4e812fcfe397ee1"></a>

Gets the value of Allocations_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & `[`GetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a6d78907465546818ab0d794bae0e7e27)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a6d78907465546818ab0d794bae0e7e27"></a>

Gets the value of Allocations_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a1be2327d3ce598908e582487c3b13740)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a1be2327d3ce598908e582487c3b13740"></a>

Fills OutValue with the value of Allocations_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1afadf53d53df3f6918e5532e342855340)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1afadf53d53df3f6918e5532e342855340"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > * `[`GetAllocationsOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1ac58777660bcb754b9d2c21b09b415256)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ac58777660bcb754b9d2c21b09b415256"></a>

Returns a pointer to Allocations_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a69dab1bdbfbc333a235b83cff1c3eaf5)`(const TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a69dab1bdbfbc333a235b83cff1c3eaf5"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a5a0dd799644471b4a2a9680bdda913bd)`(TArray< `[`FRHAPI_MatchAllocation`](RHAPI_MatchAllocation.md#structFRHAPI__MatchAllocation)` > && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a5a0dd799644471b4a2a9680bdda913bd"></a>

Sets the value of Allocations_Optional and also sets Allocations_IsSet to true using move semantics.

#### `public inline void `[`ClearAllocations`](#structFRHAPI__MatchSegmentWithPlayers_1a861e5f93aa0c9c39fad6e569e0aa8763)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a861e5f93aa0c9c39fad6e569e0aa8763"></a>

Clears the value of Allocations_Optional and sets Allocations_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentWithPlayers_1add41956688c80b8f19a09bbcd50057cd)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1add41956688c80b8f19a09bbcd50057cd"></a>

Gets the value of MatchSegment.

#### `public inline FORCEINLINE const FString & `[`GetMatchSegment`](#structFRHAPI__MatchSegmentWithPlayers_1aefc8c7ba2cb73c0666178730a5c1ab51)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1aefc8c7ba2cb73c0666178730a5c1ab51"></a>

Gets the value of MatchSegment.

#### `public inline FORCEINLINE void `[`SetMatchSegment`](#structFRHAPI__MatchSegmentWithPlayers_1ad105623a08369bfe7a991180a6ce850a)`(const FString & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1ad105623a08369bfe7a991180a6ce850a"></a>

Sets the value of MatchSegment.

#### `public inline FORCEINLINE void `[`SetMatchSegment`](#structFRHAPI__MatchSegmentWithPlayers_1a84cd6ee9a4690c6f5c232efe2ec09468)`(FString && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a84cd6ee9a4690c6f5c232efe2ec09468"></a>

Sets the value of MatchSegment using move semantics.

#### `public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1a102c26ed83c2176228554208b8000bad)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a102c26ed83c2176228554208b8000bad"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1ae1bc0fbbe73e75571385569c147244fc)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1ae1bc0fbbe73e75571385569c147244fc"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1a6f4e4d6cb6e08b100a295d1283322cee)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a6f4e4d6cb6e08b100a295d1283322cee"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1a1e228239c227219480d9534e1fec2647)`(FString & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a1e228239c227219480d9534e1fec2647"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a94a3ef2ef17b3042b8780efe672a67d8)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a94a3ef2ef17b3042b8780efe672a67d8"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1aa06753d42e2dcf8108e8a3c83a16b534)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1aa06753d42e2dcf8108e8a3c83a16b534"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1a9c19630754a7b5a5a269af854c787ad2)`(const FString & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a9c19630754a7b5a5a269af854c787ad2"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1a8c2efee0bd9026f38a94b6b2843344f3)`(FString && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a8c2efee0bd9026f38a94b6b2843344f3"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__MatchSegmentWithPlayers_1ada9fb5b63bc3e430f786d150021e532d)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1ada9fb5b63bc3e430f786d150021e532d"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1af63be8dea4bd38f27357812dc513b591)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1af63be8dea4bd38f27357812dc513b591"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a6c01c3fd4316d5e5916fbad495f982c7)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a6c01c3fd4316d5e5916fbad495f982c7"></a>

Gets the value of Players_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & `[`GetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a1d95bbc9a42b5ab05307edb854e228fd)`(const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & DefaultValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a1d95bbc9a42b5ab05307edb854e228fd"></a>

Gets the value of Players_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a3320c07a066e7d1bb2274a3444f0f2b9)`(TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & OutValue) const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a3320c07a066e7d1bb2274a3444f0f2b9"></a>

Fills OutValue with the value of Players_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a5792520b6b8e03f202e0819127c7377f)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a5792520b6b8e03f202e0819127c7377f"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > * `[`GetPlayersOrNull`](#structFRHAPI__MatchSegmentWithPlayers_1a185b7a83fe478435024acf75f3bef0f4)`() const` <a id="structFRHAPI__MatchSegmentWithPlayers_1a185b7a83fe478435024acf75f3bef0f4"></a>

Returns a pointer to Players_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a61c2f965ad1beb93fbd031c176f77a84)`(const TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > & NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1a61c2f965ad1beb93fbd031c176f77a84"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1ad27d866cf6c81d6a39f16bfdf400a13e)`(TArray< `[`FRHAPI_MatchPlayerResponse`](RHAPI_MatchPlayerResponse.md#structFRHAPI__MatchPlayerResponse)` > && NewValue)` <a id="structFRHAPI__MatchSegmentWithPlayers_1ad27d866cf6c81d6a39f16bfdf400a13e"></a>

Sets the value of Players_Optional and also sets Players_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayers`](#structFRHAPI__MatchSegmentWithPlayers_1a942c9f48d6a439b1a1c55c698a90b4a2)`()` <a id="structFRHAPI__MatchSegmentWithPlayers_1a942c9f48d6a439b1a1c55c698a90b4a2"></a>

Clears the value of Players_Optional and sets Players_IsSet to false.

