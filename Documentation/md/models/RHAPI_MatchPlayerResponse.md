# group `RHAPI_MatchPlayerResponse` <a id="group__RHAPI__MatchPlayerResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchPlayerResponse`](#structFRHAPI__MatchPlayerResponse) | 

---
title: FRHAPI_MatchPlayerResponse
---

```
struct FRHAPI_MatchPlayerResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FDateTime `[`LastModifiedTimestamp_Optional`](#structFRHAPI__MatchPlayerResponse_1a0c2af65bdec76b09730bfd57038e913e) | Timestamp of when the resource was last modified.
`public bool `[`LastModifiedTimestamp_IsSet`](#structFRHAPI__MatchPlayerResponse_1aa1f1eb8dad0a489833bacea2089894c9) | true if LastModifiedTimestamp_Optional has been set to a value
`public FDateTime `[`CreatedTimestamp_Optional`](#structFRHAPI__MatchPlayerResponse_1a65e0b8c89ef4fab63b6c0620081f5fe2) | Timestamp of when the resource was created.
`public bool `[`CreatedTimestamp_IsSet`](#structFRHAPI__MatchPlayerResponse_1ae2c690d9634575d9b96c3351f3c3b8fd) | true if CreatedTimestamp_Optional has been set to a value
`public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__MatchPlayerResponse_1abd3a5527b8e5758bb591339ea7ed895c) | 
`public bool `[`PlayerUuid_IsSet`](#structFRHAPI__MatchPlayerResponse_1a5d660ba42944bf1576f87cbd7fc12bec) | true if PlayerUuid_Optional has been set to a value
`public FString `[`TeamId_Optional`](#structFRHAPI__MatchPlayerResponse_1a8fb1429516384d159301370aba9ae3b6) | 
`public bool `[`TeamId_IsSet`](#structFRHAPI__MatchPlayerResponse_1af8fb65b6b3ca49c4569e00c1f8cc939e) | true if TeamId_Optional has been set to a value
`public bool `[`TeamId_IsNull`](#structFRHAPI__MatchPlayerResponse_1a317895843cd9581160c4d8cf4bf9b65f) | true if TeamId_Optional has been explicitly set to null
`public FString `[`PartySessionId_Optional`](#structFRHAPI__MatchPlayerResponse_1ae6b37cf0a417d8dcbefeec9d1429f04d) | 
`public bool `[`PartySessionId_IsSet`](#structFRHAPI__MatchPlayerResponse_1a5a147aa469b05a567f26d48ac6ddf1fe) | true if PartySessionId_Optional has been set to a value
`public bool `[`PartySessionId_IsNull`](#structFRHAPI__MatchPlayerResponse_1a998486106191da60eeb85ad270a4c08c) | true if PartySessionId_Optional has been explicitly set to null
`public int32 `[`Placement_Optional`](#structFRHAPI__MatchPlayerResponse_1adac148331af051eb3ec2dbf63494690a) | 
`public bool `[`Placement_IsSet`](#structFRHAPI__MatchPlayerResponse_1a934a6bf994e704e596eb82f7521e9b08) | true if Placement_Optional has been set to a value
`public bool `[`Placement_IsNull`](#structFRHAPI__MatchPlayerResponse_1ae1b7c12309f73204deea8e5172aca713) | true if Placement_Optional has been explicitly set to null
`public FDateTime `[`JoinedMatchTimestamp_Optional`](#structFRHAPI__MatchPlayerResponse_1a86f6ca3a6462567aa6a2a1a9b760c0b6) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`JoinedMatchTimestamp_IsSet`](#structFRHAPI__MatchPlayerResponse_1ab8fa418103e0284669694cacd18d9c9e) | true if JoinedMatchTimestamp_Optional has been set to a value
`public bool `[`JoinedMatchTimestamp_IsNull`](#structFRHAPI__MatchPlayerResponse_1ac3033a1b6bc57c64a49f18da49f42242) | true if JoinedMatchTimestamp_Optional has been explicitly set to null
`public FDateTime `[`LeftMatchTimestamp_Optional`](#structFRHAPI__MatchPlayerResponse_1a30c30b183172a20d0a48859a5400d239) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`LeftMatchTimestamp_IsSet`](#structFRHAPI__MatchPlayerResponse_1a740ed7b206e70a98aa5ea2a2c4b1f6b1) | true if LeftMatchTimestamp_Optional has been set to a value
`public bool `[`LeftMatchTimestamp_IsNull`](#structFRHAPI__MatchPlayerResponse_1a9a1bb77f9b14458e87aafe3829e730cb) | true if LeftMatchTimestamp_Optional has been explicitly set to null
`public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchPlayerResponse_1a7b06e80d26cec97d490f6858ed34f093) | 
`public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchPlayerResponse_1ab65b987945e7224e77cbc71d39a82b1c) | true if DurationSeconds_Optional has been set to a value
`public bool `[`DurationSeconds_IsNull`](#structFRHAPI__MatchPlayerResponse_1ad4c984281b2a6d42b3764e45c4964144) | true if DurationSeconds_Optional has been explicitly set to null
`public FString `[`StartingRank_Optional`](#structFRHAPI__MatchPlayerResponse_1a22c3fb1c52eefb988a23b4e24cfa2e68) | 
`public bool `[`StartingRank_IsSet`](#structFRHAPI__MatchPlayerResponse_1a47984ce3b180a6f9f40279c40c6fc760) | true if StartingRank_Optional has been set to a value
`public bool `[`StartingRank_IsNull`](#structFRHAPI__MatchPlayerResponse_1a13e4cbe6f72e5eb1201a007ae3293b1e) | true if StartingRank_Optional has been explicitly set to null
`public FString `[`FinishingRank_Optional`](#structFRHAPI__MatchPlayerResponse_1a3dc6c40e24e835a9e4186214f8721224) | 
`public bool `[`FinishingRank_IsSet`](#structFRHAPI__MatchPlayerResponse_1a108ff6636a1d60b1230a2fbab8e22450) | true if FinishingRank_Optional has been set to a value
`public bool `[`FinishingRank_IsNull`](#structFRHAPI__MatchPlayerResponse_1a939e2d94d926dd72d6b02c2bd4d27b3f) | true if FinishingRank_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchPlayerResponse_1af13b541dba217e837736e391370aa8f7) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchPlayerResponse_1ae0493c2bc514a4a86c0b55fe121af688) | true if CustomData_Optional has been set to a value
`public bool `[`CustomData_IsNull`](#structFRHAPI__MatchPlayerResponse_1aeee488b76cb86d67b3f88767f8085592) | true if CustomData_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__MatchPlayerResponse_1a926ebf3b09aa21b9d03e7ea9e3d00d6e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchPlayerResponse_1a7f5f1a70b7bc80ff845caade73a8b886)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1abdb75604ae06c01bdd1c21282338735a)`()` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a189531bd58be8250cc44ad20c3af1833)`() const` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a47810ad04dbd24e89a96bb5436315fc0)`(const FDateTime & DefaultValue) const` | Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a0f50919f70e886d13c99b638d97bd503)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1a114c54c7b70d46824d77840e636c385d)`()` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1a736c97eb8b594884841bce7d37326171)`() const` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1abc62c6fb75e54c5690d08a1fa9ee8124)`(const FDateTime & NewValue)` | Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.
`public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1ac39e6c1c850bda5d7d4e7dc4b92566b0)`(FDateTime && NewValue)` | Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a0f14ebff923dd715e1a4d3a44fa42e62)`()` | Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.
`public inline bool `[`IsLastModifiedTimestampSet`](#structFRHAPI__MatchPlayerResponse_1a0684af7624a41a4b506c8a5f5a7b8c32)`() const` | Checks whether LastModifiedTimestamp_Optional has been set.
`public inline FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a8ffae927f1841db2cea2049d9f548574)`()` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a6f9b1bd78a01cf6de175209157bfc4c5)`() const` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1adab5117d9e058f36a3c9804c579b71a8)`(const FDateTime & DefaultValue) const` | Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a8fd17e404c9eb59756c279f457e518e0)`(FDateTime & OutValue) const` | Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1ac42b34029d347f583437328973dd2d2e)`()` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1a212e66aaf6a43ff0766788c1485f7185)`() const` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a19137861e64fe9c032b21b3ae0061b23)`(const FDateTime & NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.
`public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1aa96a671eb5d77d1dbe7a55ea9d2ab95a)`(FDateTime && NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a76039a236d9eb88426084df19a41ba98)`()` | Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.
`public inline bool `[`IsCreatedTimestampSet`](#structFRHAPI__MatchPlayerResponse_1ab5b996a9f6986e89705d03a0a06ab8a3)`() const` | Checks whether CreatedTimestamp_Optional has been set.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a58a9de319130e7e98fea41de1a6b45c1)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a863ace493ee54438aba9c28ff6a800aa)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a8fe4e0150898aa1d077b87ef74d96f6e)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a58fec54d4ab34734b6be8f88f384de57)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerResponse_1a6b84649562308949795e51bb266fd635)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerResponse_1a4d890d4daca28641979db5cc72f6dedf)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a92693dc6145bc98434b916efb57ba1d0)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1af2801efe844234932921a9861092b556)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a8484990b71c7101060572f5818ca3a86)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__MatchPlayerResponse_1af5c6eb23d8f0302158893974b95fe25d)`() const` | Checks whether PlayerUuid_Optional has been set.
`public inline FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerResponse_1ac5741040d542f5f68b27fedf5b478f4d)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerResponse_1afe335bf0473ac70ee13163e31340407f)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerResponse_1aa198be802adf987f0af0d9023734be14)`(const FString & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTeamId`](#structFRHAPI__MatchPlayerResponse_1a9f55f9b8087d1612d7852b5aadb0f78b)`(FString & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerResponse_1a9afbb2161c6e8afb1e90ee69c7efbdd3)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerResponse_1aa95dade5193bad517657907f718567bc)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTeamId`](#structFRHAPI__MatchPlayerResponse_1afb0857616f9116d424a8289788f69400)`(const FString & NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline void `[`SetTeamId`](#structFRHAPI__MatchPlayerResponse_1a53906efdf5d07fa44c99a069030eec1b)`(FString && NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.
`public inline void `[`ClearTeamId`](#structFRHAPI__MatchPlayerResponse_1ab408948bdafa1da264a78f7c3f8b5c30)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline bool `[`IsTeamIdSet`](#structFRHAPI__MatchPlayerResponse_1a9702d1d61805482fa1137b5e7fa9cb22)`() const` | Checks whether TeamId_Optional has been set.
`public inline void `[`SetTeamIdToNull`](#structFRHAPI__MatchPlayerResponse_1a4459dc51da066d03875f764417e6b827)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsTeamIdNull`](#structFRHAPI__MatchPlayerResponse_1a6d2c9eb0bcb76aadb20bdc2223e0c2bb)`() const` | Checks whether TeamId_Optional is set to null.
`public inline FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a2c104ca7bb3f4c564c0c5e1b2fa301f4)`()` | Gets the value of PartySessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a67d9c91e44acf057fb3370fcff0e5f02)`() const` | Gets the value of PartySessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a59d0bd652e266c87664c8403ceaf3ac8)`(const FString & DefaultValue) const` | Gets the value of PartySessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a91c0351701c872b49633495f48a51064)`(FString & OutValue) const` | Fills OutValue with the value of PartySessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerResponse_1a7808cd71b71f54d31c84a3ef3f8a8a4c)`()` | Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerResponse_1aaea294c620af9f919f11021c4e7cd148)`() const` | Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1acbdc3312630889d2c44cde14c2bb5f9f)`(const FString & NewValue)` | Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true.
`public inline void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1aa26f6e9c2c5805052f156faf5e678016)`(FString && NewValue)` | Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true using move semantics.
`public inline void `[`ClearPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a7dd4998aec8bc75924fd7ed25f83eb00)`()` | Clears the value of PartySessionId_Optional and sets PartySessionId_IsSet to false.
`public inline bool `[`IsPartySessionIdSet`](#structFRHAPI__MatchPlayerResponse_1ad661ae4a65f422d03436f4310f52e360)`() const` | Checks whether PartySessionId_Optional has been set.
`public inline void `[`SetPartySessionIdToNull`](#structFRHAPI__MatchPlayerResponse_1aacd4c61b5a7904c6e0721fe88a1ade2a)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPartySessionIdNull`](#structFRHAPI__MatchPlayerResponse_1a367ecbf149cc6370b7e95903ba17d54d)`() const` | Checks whether PartySessionId_Optional is set to null.
`public inline int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerResponse_1afeed3c498ea373083ba6bd8d43a3917f)`()` | Gets the value of Placement_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerResponse_1a9a8630a4d0837d0bc694d630cee5780d)`() const` | Gets the value of Placement_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerResponse_1a844cc844b9a4ad9aa75705fe4c5b788b)`(const int32 & DefaultValue) const` | Gets the value of Placement_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlacement`](#structFRHAPI__MatchPlayerResponse_1aa3f6490331e68b3024f0b86b578fbfab)`(int32 & OutValue) const` | Fills OutValue with the value of Placement_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerResponse_1a352d03f3f3c0c844467c211e557843b0)`()` | Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerResponse_1af1eb3a15805b653a47e80dbb5a820c82)`() const` | Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlacement`](#structFRHAPI__MatchPlayerResponse_1a7e0f1fdb22eca39e4f95cde4439dbc4d)`(const int32 & NewValue)` | Sets the value of Placement_Optional and also sets Placement_IsSet to true.
`public inline void `[`SetPlacement`](#structFRHAPI__MatchPlayerResponse_1accc529ef5214845479dc6951d3a3430e)`(int32 && NewValue)` | Sets the value of Placement_Optional and also sets Placement_IsSet to true using move semantics.
`public inline void `[`ClearPlacement`](#structFRHAPI__MatchPlayerResponse_1af17f01916e8ae6719949d01fff147c80)`()` | Clears the value of Placement_Optional and sets Placement_IsSet to false.
`public inline bool `[`IsPlacementSet`](#structFRHAPI__MatchPlayerResponse_1a6070519f6bac3ecaeefe0b0034cfa324)`() const` | Checks whether Placement_Optional has been set.
`public inline bool `[`IsPlacementDefaultValue`](#structFRHAPI__MatchPlayerResponse_1a28528fa531eae3c5427784c16e7b60ba)`() const` | Returns true if Placement_Optional is set and matches the default value.
`public inline void `[`SetPlacementToDefault`](#structFRHAPI__MatchPlayerResponse_1abea287d7aa6ceeb250e47aefd82fc185)`()` | Sets the value of Placement_Optional to its default and also sets Placement_IsSet to true.
`public inline void `[`SetPlacementToNull`](#structFRHAPI__MatchPlayerResponse_1a0b1f00a583366f2d2c6677f7c52b534a)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPlacementNull`](#structFRHAPI__MatchPlayerResponse_1a66df7ba9ff95af5c7eec0c4361b10003)`() const` | Checks whether Placement_Optional is set to null.
`public inline FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a1afef4833dc7c4f47b70e64e746ebe92)`()` | Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a052c2a026143ff56e6cc8b86168d0316)`() const` | Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a7e41c393cd5c30f8169c4b37ad282ba6)`(const FDateTime & DefaultValue) const` | Gets the value of JoinedMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a7dfc9555a469d46191a20f2a4129632a)`(FDateTime & OutValue) const` | Fills OutValue with the value of JoinedMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1a845d885b8ce435168f33de9b043cc3cf)`()` | Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1aea1e3bb2ffdf5c05aed6ffc5c4178ce9)`() const` | Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1aa314ebe25a3d3853791b388a5c52a28c)`(const FDateTime & NewValue)` | Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true.
`public inline void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1aec799bdeb75e69b995f8ac60f6535503)`(FDateTime && NewValue)` | Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a714cc4de963e4dd7a8a4f620a44f473b)`()` | Clears the value of JoinedMatchTimestamp_Optional and sets JoinedMatchTimestamp_IsSet to false.
`public inline bool `[`IsJoinedMatchTimestampSet`](#structFRHAPI__MatchPlayerResponse_1a16eead1eb53ed4418d294e8afccd381e)`() const` | Checks whether JoinedMatchTimestamp_Optional has been set.
`public inline void `[`SetJoinedMatchTimestampToNull`](#structFRHAPI__MatchPlayerResponse_1a960a65cdb7240a42f2f3cbbfb6b0a1aa)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsJoinedMatchTimestampNull`](#structFRHAPI__MatchPlayerResponse_1a79e91553fe8a482834a19aa3ae5b37ad)`() const` | Checks whether JoinedMatchTimestamp_Optional is set to null.
`public inline FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1ac86fc1bc6073ca471e147d7f1b70af3e)`()` | Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a883764f14b8a052c3e7a56d2e97d0553)`() const` | Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a6c71b1bb257229acb1aa579c045b6a9a)`(const FDateTime & DefaultValue) const` | Gets the value of LeftMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a2119fee299a7500812adc92dbd7a68b7)`(FDateTime & OutValue) const` | Fills OutValue with the value of LeftMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1a18ba4f245975831c6024ce240c190d0b)`()` | Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1aca8c3ef93b1ffd9689e965311ff5b83b)`() const` | Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1ac9134e9c245d5fa86eafa99267cbe907)`(const FDateTime & NewValue)` | Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true.
`public inline void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1aa6a63fe8eb897a49ea5b6435d57eccf0)`(FDateTime && NewValue)` | Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1ad464648877f8dae5abacf94f29da4725)`()` | Clears the value of LeftMatchTimestamp_Optional and sets LeftMatchTimestamp_IsSet to false.
`public inline bool `[`IsLeftMatchTimestampSet`](#structFRHAPI__MatchPlayerResponse_1a9eef36929eda6c26cff4dc0aa16ac30b)`() const` | Checks whether LeftMatchTimestamp_Optional has been set.
`public inline void `[`SetLeftMatchTimestampToNull`](#structFRHAPI__MatchPlayerResponse_1ae329b63242d91c035f5f8f5a146d0819)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsLeftMatchTimestampNull`](#structFRHAPI__MatchPlayerResponse_1a89264377fd7891ee60fc7e7039b50285)`() const` | Checks whether LeftMatchTimestamp_Optional is set to null.
`public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1ae1223bcb846a4c54f097fbb8bf465a1d)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1ac85fc9e64fe6ad8b8432f9d3abb75a51)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1a9470ca9fa77ae4e4393bc90ac7628774)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1aac6936555486e01d3a0f42a19ec181ab)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerResponse_1ae49bdcf5971bd957d4d4f89a0d94aa0d)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerResponse_1aba560808f36cede3ba694604630ec2ec)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1a5343611a8958a47038796067c3818dd2)`(const int32 & NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1abf434bc02a9705e3b159cefc06db5bcb)`(int32 && NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1addff4d7cea40283e439f4587fd8dd5f0)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline bool `[`IsDurationSecondsSet`](#structFRHAPI__MatchPlayerResponse_1a7de4f5e801ee7d195bdfadd46a9e8601)`() const` | Checks whether DurationSeconds_Optional has been set.
`public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchPlayerResponse_1ab85eaadfcebeb5f27a16a8910745f152)`() const` | Returns true if DurationSeconds_Optional is set and matches the default value.
`public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchPlayerResponse_1af4fc0cde5efe6b7f2efefa650edbb089)`()` | Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.
`public inline void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchPlayerResponse_1ae7808d220e7c336521653b99639c6bbb)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchPlayerResponse_1a2a67edeb467866fb56528f214db0c3de)`() const` | Checks whether DurationSeconds_Optional is set to null.
`public inline FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerResponse_1ab9a5e76c5b0e290f9f82c2359fdab211)`()` | Gets the value of StartingRank_Optional, regardless of it having been set.
`public inline const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerResponse_1a9e99e129836679c320ffd168ef0f5bee)`() const` | Gets the value of StartingRank_Optional, regardless of it having been set.
`public inline const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerResponse_1adb9630b462535701e02b7b9661928c83)`(const FString & DefaultValue) const` | Gets the value of StartingRank_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStartingRank`](#structFRHAPI__MatchPlayerResponse_1a98ab7c5b0d8ca5124ba6305c2732eca3)`(FString & OutValue) const` | Fills OutValue with the value of StartingRank_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerResponse_1a007da709b476ebc05b7df941f56ea230)`()` | Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerResponse_1aa776152becfbafe6e24781f3099dbf7f)`() const` | Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStartingRank`](#structFRHAPI__MatchPlayerResponse_1a60a9343d88e5398abc3d641fc32d80b3)`(const FString & NewValue)` | Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true.
`public inline void `[`SetStartingRank`](#structFRHAPI__MatchPlayerResponse_1ab9b6ca32769b4c713b3b54b58194e275)`(FString && NewValue)` | Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true using move semantics.
`public inline void `[`ClearStartingRank`](#structFRHAPI__MatchPlayerResponse_1add83305f33427b1363ecab1178e979bc)`()` | Clears the value of StartingRank_Optional and sets StartingRank_IsSet to false.
`public inline bool `[`IsStartingRankSet`](#structFRHAPI__MatchPlayerResponse_1a0827e05d0ac4e02954dfe5e45d2f3276)`() const` | Checks whether StartingRank_Optional has been set.
`public inline void `[`SetStartingRankToNull`](#structFRHAPI__MatchPlayerResponse_1a9361815a097a2f79f26d014210f854c2)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStartingRankNull`](#structFRHAPI__MatchPlayerResponse_1afde08bca2ad643b5da2837457319e2af)`() const` | Checks whether StartingRank_Optional is set to null.
`public inline FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1ad88453910ee279e015b62bc54aea3387)`()` | Gets the value of FinishingRank_Optional, regardless of it having been set.
`public inline const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1aa2230088871fd17c04c7e99c42d23280)`() const` | Gets the value of FinishingRank_Optional, regardless of it having been set.
`public inline const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1a8dd52def7523c90b56c0583a585ff095)`(const FString & DefaultValue) const` | Gets the value of FinishingRank_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1a1c5702097747a055dbab3fb62b05f3f4)`(FString & OutValue) const` | Fills OutValue with the value of FinishingRank_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerResponse_1ae26fc1e84fe40a3c10b39e142316082f)`()` | Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerResponse_1ade171ec7c01a44ed059383d760c55ab4)`() const` | Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1af9b4b2f54086dc0220c6c6c3fe1d2003)`(const FString & NewValue)` | Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true.
`public inline void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1aaf075ae2e6845f38c182d3c458be6216)`(FString && NewValue)` | Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true using move semantics.
`public inline void `[`ClearFinishingRank`](#structFRHAPI__MatchPlayerResponse_1a1891eddfe78c0798aca9b36b10d9d394)`()` | Clears the value of FinishingRank_Optional and sets FinishingRank_IsSet to false.
`public inline bool `[`IsFinishingRankSet`](#structFRHAPI__MatchPlayerResponse_1a7ad6fecfed42aa8c2611b6a1fece4cd1)`() const` | Checks whether FinishingRank_Optional has been set.
`public inline void `[`SetFinishingRankToNull`](#structFRHAPI__MatchPlayerResponse_1a01b71a2e6aca593d55e6a9e890940950)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFinishingRankNull`](#structFRHAPI__MatchPlayerResponse_1aaca460d3c33163e4deb900a636b5283e)`() const` | Checks whether FinishingRank_Optional is set to null.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerResponse_1a6d7602b23290d7247b01147f5b0ca682)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerResponse_1a414c426a22a073b5de9a8b5c9fa5e4ce)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerResponse_1a421180fbec7c3b20f105a79c9be4c093)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchPlayerResponse_1aa4c2a91ba8545575b1d8a37c2f24a15b)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerResponse_1a9641de9f92a9660fc328bb0ccbb2f355)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerResponse_1a217747f06462bd11c78a36392033f18c)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchPlayerResponse_1ad3cd88a1dbf95ea268c270dfc7b5898d)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchPlayerResponse_1a8da48ae39780af8516cf0550538dd85b)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchPlayerResponse_1a6e3f6713f85176398f037a160517bdf7)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchPlayerResponse_1aa9b5b38807512f1d16dc6b132527ebbc)`() const` | Checks whether CustomData_Optional has been set.
`public inline void `[`SetCustomDataToNull`](#structFRHAPI__MatchPlayerResponse_1aa83d0f2f25e5ef7a3d21039174c37950)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCustomDataNull`](#structFRHAPI__MatchPlayerResponse_1a0baffefecd769612a4be68b3a3faf2ba)`() const` | Checks whether CustomData_Optional is set to null.

### Members

#### `public FDateTime `[`LastModifiedTimestamp_Optional`](#structFRHAPI__MatchPlayerResponse_1a0c2af65bdec76b09730bfd57038e913e) <a id="structFRHAPI__MatchPlayerResponse_1a0c2af65bdec76b09730bfd57038e913e"></a>

Timestamp of when the resource was last modified.

#### `public bool `[`LastModifiedTimestamp_IsSet`](#structFRHAPI__MatchPlayerResponse_1aa1f1eb8dad0a489833bacea2089894c9) <a id="structFRHAPI__MatchPlayerResponse_1aa1f1eb8dad0a489833bacea2089894c9"></a>

true if LastModifiedTimestamp_Optional has been set to a value

#### `public FDateTime `[`CreatedTimestamp_Optional`](#structFRHAPI__MatchPlayerResponse_1a65e0b8c89ef4fab63b6c0620081f5fe2) <a id="structFRHAPI__MatchPlayerResponse_1a65e0b8c89ef4fab63b6c0620081f5fe2"></a>

Timestamp of when the resource was created.

#### `public bool `[`CreatedTimestamp_IsSet`](#structFRHAPI__MatchPlayerResponse_1ae2c690d9634575d9b96c3351f3c3b8fd) <a id="structFRHAPI__MatchPlayerResponse_1ae2c690d9634575d9b96c3351f3c3b8fd"></a>

true if CreatedTimestamp_Optional has been set to a value

#### `public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__MatchPlayerResponse_1abd3a5527b8e5758bb591339ea7ed895c) <a id="structFRHAPI__MatchPlayerResponse_1abd3a5527b8e5758bb591339ea7ed895c"></a>

#### `public bool `[`PlayerUuid_IsSet`](#structFRHAPI__MatchPlayerResponse_1a5d660ba42944bf1576f87cbd7fc12bec) <a id="structFRHAPI__MatchPlayerResponse_1a5d660ba42944bf1576f87cbd7fc12bec"></a>

true if PlayerUuid_Optional has been set to a value

#### `public FString `[`TeamId_Optional`](#structFRHAPI__MatchPlayerResponse_1a8fb1429516384d159301370aba9ae3b6) <a id="structFRHAPI__MatchPlayerResponse_1a8fb1429516384d159301370aba9ae3b6"></a>

#### `public bool `[`TeamId_IsSet`](#structFRHAPI__MatchPlayerResponse_1af8fb65b6b3ca49c4569e00c1f8cc939e) <a id="structFRHAPI__MatchPlayerResponse_1af8fb65b6b3ca49c4569e00c1f8cc939e"></a>

true if TeamId_Optional has been set to a value

#### `public bool `[`TeamId_IsNull`](#structFRHAPI__MatchPlayerResponse_1a317895843cd9581160c4d8cf4bf9b65f) <a id="structFRHAPI__MatchPlayerResponse_1a317895843cd9581160c4d8cf4bf9b65f"></a>

true if TeamId_Optional has been explicitly set to null

#### `public FString `[`PartySessionId_Optional`](#structFRHAPI__MatchPlayerResponse_1ae6b37cf0a417d8dcbefeec9d1429f04d) <a id="structFRHAPI__MatchPlayerResponse_1ae6b37cf0a417d8dcbefeec9d1429f04d"></a>

#### `public bool `[`PartySessionId_IsSet`](#structFRHAPI__MatchPlayerResponse_1a5a147aa469b05a567f26d48ac6ddf1fe) <a id="structFRHAPI__MatchPlayerResponse_1a5a147aa469b05a567f26d48ac6ddf1fe"></a>

true if PartySessionId_Optional has been set to a value

#### `public bool `[`PartySessionId_IsNull`](#structFRHAPI__MatchPlayerResponse_1a998486106191da60eeb85ad270a4c08c) <a id="structFRHAPI__MatchPlayerResponse_1a998486106191da60eeb85ad270a4c08c"></a>

true if PartySessionId_Optional has been explicitly set to null

#### `public int32 `[`Placement_Optional`](#structFRHAPI__MatchPlayerResponse_1adac148331af051eb3ec2dbf63494690a) <a id="structFRHAPI__MatchPlayerResponse_1adac148331af051eb3ec2dbf63494690a"></a>

#### `public bool `[`Placement_IsSet`](#structFRHAPI__MatchPlayerResponse_1a934a6bf994e704e596eb82f7521e9b08) <a id="structFRHAPI__MatchPlayerResponse_1a934a6bf994e704e596eb82f7521e9b08"></a>

true if Placement_Optional has been set to a value

#### `public bool `[`Placement_IsNull`](#structFRHAPI__MatchPlayerResponse_1ae1b7c12309f73204deea8e5172aca713) <a id="structFRHAPI__MatchPlayerResponse_1ae1b7c12309f73204deea8e5172aca713"></a>

true if Placement_Optional has been explicitly set to null

#### `public FDateTime `[`JoinedMatchTimestamp_Optional`](#structFRHAPI__MatchPlayerResponse_1a86f6ca3a6462567aa6a2a1a9b760c0b6) <a id="structFRHAPI__MatchPlayerResponse_1a86f6ca3a6462567aa6a2a1a9b760c0b6"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`JoinedMatchTimestamp_IsSet`](#structFRHAPI__MatchPlayerResponse_1ab8fa418103e0284669694cacd18d9c9e) <a id="structFRHAPI__MatchPlayerResponse_1ab8fa418103e0284669694cacd18d9c9e"></a>

true if JoinedMatchTimestamp_Optional has been set to a value

#### `public bool `[`JoinedMatchTimestamp_IsNull`](#structFRHAPI__MatchPlayerResponse_1ac3033a1b6bc57c64a49f18da49f42242) <a id="structFRHAPI__MatchPlayerResponse_1ac3033a1b6bc57c64a49f18da49f42242"></a>

true if JoinedMatchTimestamp_Optional has been explicitly set to null

#### `public FDateTime `[`LeftMatchTimestamp_Optional`](#structFRHAPI__MatchPlayerResponse_1a30c30b183172a20d0a48859a5400d239) <a id="structFRHAPI__MatchPlayerResponse_1a30c30b183172a20d0a48859a5400d239"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`LeftMatchTimestamp_IsSet`](#structFRHAPI__MatchPlayerResponse_1a740ed7b206e70a98aa5ea2a2c4b1f6b1) <a id="structFRHAPI__MatchPlayerResponse_1a740ed7b206e70a98aa5ea2a2c4b1f6b1"></a>

true if LeftMatchTimestamp_Optional has been set to a value

#### `public bool `[`LeftMatchTimestamp_IsNull`](#structFRHAPI__MatchPlayerResponse_1a9a1bb77f9b14458e87aafe3829e730cb) <a id="structFRHAPI__MatchPlayerResponse_1a9a1bb77f9b14458e87aafe3829e730cb"></a>

true if LeftMatchTimestamp_Optional has been explicitly set to null

#### `public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchPlayerResponse_1a7b06e80d26cec97d490f6858ed34f093) <a id="structFRHAPI__MatchPlayerResponse_1a7b06e80d26cec97d490f6858ed34f093"></a>

#### `public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchPlayerResponse_1ab65b987945e7224e77cbc71d39a82b1c) <a id="structFRHAPI__MatchPlayerResponse_1ab65b987945e7224e77cbc71d39a82b1c"></a>

true if DurationSeconds_Optional has been set to a value

#### `public bool `[`DurationSeconds_IsNull`](#structFRHAPI__MatchPlayerResponse_1ad4c984281b2a6d42b3764e45c4964144) <a id="structFRHAPI__MatchPlayerResponse_1ad4c984281b2a6d42b3764e45c4964144"></a>

true if DurationSeconds_Optional has been explicitly set to null

#### `public FString `[`StartingRank_Optional`](#structFRHAPI__MatchPlayerResponse_1a22c3fb1c52eefb988a23b4e24cfa2e68) <a id="structFRHAPI__MatchPlayerResponse_1a22c3fb1c52eefb988a23b4e24cfa2e68"></a>

#### `public bool `[`StartingRank_IsSet`](#structFRHAPI__MatchPlayerResponse_1a47984ce3b180a6f9f40279c40c6fc760) <a id="structFRHAPI__MatchPlayerResponse_1a47984ce3b180a6f9f40279c40c6fc760"></a>

true if StartingRank_Optional has been set to a value

#### `public bool `[`StartingRank_IsNull`](#structFRHAPI__MatchPlayerResponse_1a13e4cbe6f72e5eb1201a007ae3293b1e) <a id="structFRHAPI__MatchPlayerResponse_1a13e4cbe6f72e5eb1201a007ae3293b1e"></a>

true if StartingRank_Optional has been explicitly set to null

#### `public FString `[`FinishingRank_Optional`](#structFRHAPI__MatchPlayerResponse_1a3dc6c40e24e835a9e4186214f8721224) <a id="structFRHAPI__MatchPlayerResponse_1a3dc6c40e24e835a9e4186214f8721224"></a>

#### `public bool `[`FinishingRank_IsSet`](#structFRHAPI__MatchPlayerResponse_1a108ff6636a1d60b1230a2fbab8e22450) <a id="structFRHAPI__MatchPlayerResponse_1a108ff6636a1d60b1230a2fbab8e22450"></a>

true if FinishingRank_Optional has been set to a value

#### `public bool `[`FinishingRank_IsNull`](#structFRHAPI__MatchPlayerResponse_1a939e2d94d926dd72d6b02c2bd4d27b3f) <a id="structFRHAPI__MatchPlayerResponse_1a939e2d94d926dd72d6b02c2bd4d27b3f"></a>

true if FinishingRank_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchPlayerResponse_1af13b541dba217e837736e391370aa8f7) <a id="structFRHAPI__MatchPlayerResponse_1af13b541dba217e837736e391370aa8f7"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchPlayerResponse_1ae0493c2bc514a4a86c0b55fe121af688) <a id="structFRHAPI__MatchPlayerResponse_1ae0493c2bc514a4a86c0b55fe121af688"></a>

true if CustomData_Optional has been set to a value

#### `public bool `[`CustomData_IsNull`](#structFRHAPI__MatchPlayerResponse_1aeee488b76cb86d67b3f88767f8085592) <a id="structFRHAPI__MatchPlayerResponse_1aeee488b76cb86d67b3f88767f8085592"></a>

true if CustomData_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchPlayerResponse_1a926ebf3b09aa21b9d03e7ea9e3d00d6e)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchPlayerResponse_1a926ebf3b09aa21b9d03e7ea9e3d00d6e"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchPlayerResponse_1a7f5f1a70b7bc80ff845caade73a8b886)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchPlayerResponse_1a7f5f1a70b7bc80ff845caade73a8b886"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1abdb75604ae06c01bdd1c21282338735a)`()` <a id="structFRHAPI__MatchPlayerResponse_1abdb75604ae06c01bdd1c21282338735a"></a>

Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a189531bd58be8250cc44ad20c3af1833)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a189531bd58be8250cc44ad20c3af1833"></a>

Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a47810ad04dbd24e89a96bb5436315fc0)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a47810ad04dbd24e89a96bb5436315fc0"></a>

Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a0f50919f70e886d13c99b638d97bd503)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a0f50919f70e886d13c99b638d97bd503"></a>

Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1a114c54c7b70d46824d77840e636c385d)`()` <a id="structFRHAPI__MatchPlayerResponse_1a114c54c7b70d46824d77840e636c385d"></a>

Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1a736c97eb8b594884841bce7d37326171)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a736c97eb8b594884841bce7d37326171"></a>

Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1abc62c6fb75e54c5690d08a1fa9ee8124)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1abc62c6fb75e54c5690d08a1fa9ee8124"></a>

Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.

#### `public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1ac39e6c1c850bda5d7d4e7dc4b92566b0)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1ac39e6c1c850bda5d7d4e7dc4b92566b0"></a>

Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a0f14ebff923dd715e1a4d3a44fa42e62)`()` <a id="structFRHAPI__MatchPlayerResponse_1a0f14ebff923dd715e1a4d3a44fa42e62"></a>

Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.

#### `public inline bool `[`IsLastModifiedTimestampSet`](#structFRHAPI__MatchPlayerResponse_1a0684af7624a41a4b506c8a5f5a7b8c32)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a0684af7624a41a4b506c8a5f5a7b8c32"></a>

Checks whether LastModifiedTimestamp_Optional has been set.

#### `public inline FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a8ffae927f1841db2cea2049d9f548574)`()` <a id="structFRHAPI__MatchPlayerResponse_1a8ffae927f1841db2cea2049d9f548574"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a6f9b1bd78a01cf6de175209157bfc4c5)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a6f9b1bd78a01cf6de175209157bfc4c5"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1adab5117d9e058f36a3c9804c579b71a8)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchPlayerResponse_1adab5117d9e058f36a3c9804c579b71a8"></a>

Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a8fd17e404c9eb59756c279f457e518e0)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a8fd17e404c9eb59756c279f457e518e0"></a>

Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1ac42b34029d347f583437328973dd2d2e)`()` <a id="structFRHAPI__MatchPlayerResponse_1ac42b34029d347f583437328973dd2d2e"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1a212e66aaf6a43ff0766788c1485f7185)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a212e66aaf6a43ff0766788c1485f7185"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a19137861e64fe9c032b21b3ae0061b23)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a19137861e64fe9c032b21b3ae0061b23"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.

#### `public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1aa96a671eb5d77d1dbe7a55ea9d2ab95a)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1aa96a671eb5d77d1dbe7a55ea9d2ab95a"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a76039a236d9eb88426084df19a41ba98)`()` <a id="structFRHAPI__MatchPlayerResponse_1a76039a236d9eb88426084df19a41ba98"></a>

Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.

#### `public inline bool `[`IsCreatedTimestampSet`](#structFRHAPI__MatchPlayerResponse_1ab5b996a9f6986e89705d03a0a06ab8a3)`() const` <a id="structFRHAPI__MatchPlayerResponse_1ab5b996a9f6986e89705d03a0a06ab8a3"></a>

Checks whether CreatedTimestamp_Optional has been set.

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a58a9de319130e7e98fea41de1a6b45c1)`()` <a id="structFRHAPI__MatchPlayerResponse_1a58a9de319130e7e98fea41de1a6b45c1"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a863ace493ee54438aba9c28ff6a800aa)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a863ace493ee54438aba9c28ff6a800aa"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a8fe4e0150898aa1d077b87ef74d96f6e)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a8fe4e0150898aa1d077b87ef74d96f6e"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a58fec54d4ab34734b6be8f88f384de57)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a58fec54d4ab34734b6be8f88f384de57"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerResponse_1a6b84649562308949795e51bb266fd635)`()` <a id="structFRHAPI__MatchPlayerResponse_1a6b84649562308949795e51bb266fd635"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerResponse_1a4d890d4daca28641979db5cc72f6dedf)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a4d890d4daca28641979db5cc72f6dedf"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a92693dc6145bc98434b916efb57ba1d0)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a92693dc6145bc98434b916efb57ba1d0"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1af2801efe844234932921a9861092b556)`(FGuid && NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1af2801efe844234932921a9861092b556"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a8484990b71c7101060572f5818ca3a86)`()` <a id="structFRHAPI__MatchPlayerResponse_1a8484990b71c7101060572f5818ca3a86"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__MatchPlayerResponse_1af5c6eb23d8f0302158893974b95fe25d)`() const` <a id="structFRHAPI__MatchPlayerResponse_1af5c6eb23d8f0302158893974b95fe25d"></a>

Checks whether PlayerUuid_Optional has been set.

#### `public inline FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerResponse_1ac5741040d542f5f68b27fedf5b478f4d)`()` <a id="structFRHAPI__MatchPlayerResponse_1ac5741040d542f5f68b27fedf5b478f4d"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerResponse_1afe335bf0473ac70ee13163e31340407f)`() const` <a id="structFRHAPI__MatchPlayerResponse_1afe335bf0473ac70ee13163e31340407f"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerResponse_1aa198be802adf987f0af0d9023734be14)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerResponse_1aa198be802adf987f0af0d9023734be14"></a>

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTeamId`](#structFRHAPI__MatchPlayerResponse_1a9f55f9b8087d1612d7852b5aadb0f78b)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a9f55f9b8087d1612d7852b5aadb0f78b"></a>

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerResponse_1a9afbb2161c6e8afb1e90ee69c7efbdd3)`()` <a id="structFRHAPI__MatchPlayerResponse_1a9afbb2161c6e8afb1e90ee69c7efbdd3"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerResponse_1aa95dade5193bad517657907f718567bc)`() const` <a id="structFRHAPI__MatchPlayerResponse_1aa95dade5193bad517657907f718567bc"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTeamId`](#structFRHAPI__MatchPlayerResponse_1afb0857616f9116d424a8289788f69400)`(const FString & NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1afb0857616f9116d424a8289788f69400"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.

#### `public inline void `[`SetTeamId`](#structFRHAPI__MatchPlayerResponse_1a53906efdf5d07fa44c99a069030eec1b)`(FString && NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a53906efdf5d07fa44c99a069030eec1b"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.

#### `public inline void `[`ClearTeamId`](#structFRHAPI__MatchPlayerResponse_1ab408948bdafa1da264a78f7c3f8b5c30)`()` <a id="structFRHAPI__MatchPlayerResponse_1ab408948bdafa1da264a78f7c3f8b5c30"></a>

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.

#### `public inline bool `[`IsTeamIdSet`](#structFRHAPI__MatchPlayerResponse_1a9702d1d61805482fa1137b5e7fa9cb22)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a9702d1d61805482fa1137b5e7fa9cb22"></a>

Checks whether TeamId_Optional has been set.

#### `public inline void `[`SetTeamIdToNull`](#structFRHAPI__MatchPlayerResponse_1a4459dc51da066d03875f764417e6b827)`()` <a id="structFRHAPI__MatchPlayerResponse_1a4459dc51da066d03875f764417e6b827"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsTeamIdNull`](#structFRHAPI__MatchPlayerResponse_1a6d2c9eb0bcb76aadb20bdc2223e0c2bb)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a6d2c9eb0bcb76aadb20bdc2223e0c2bb"></a>

Checks whether TeamId_Optional is set to null.

#### `public inline FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a2c104ca7bb3f4c564c0c5e1b2fa301f4)`()` <a id="structFRHAPI__MatchPlayerResponse_1a2c104ca7bb3f4c564c0c5e1b2fa301f4"></a>

Gets the value of PartySessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a67d9c91e44acf057fb3370fcff0e5f02)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a67d9c91e44acf057fb3370fcff0e5f02"></a>

Gets the value of PartySessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a59d0bd652e266c87664c8403ceaf3ac8)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a59d0bd652e266c87664c8403ceaf3ac8"></a>

Gets the value of PartySessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a91c0351701c872b49633495f48a51064)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a91c0351701c872b49633495f48a51064"></a>

Fills OutValue with the value of PartySessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerResponse_1a7808cd71b71f54d31c84a3ef3f8a8a4c)`()` <a id="structFRHAPI__MatchPlayerResponse_1a7808cd71b71f54d31c84a3ef3f8a8a4c"></a>

Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerResponse_1aaea294c620af9f919f11021c4e7cd148)`() const` <a id="structFRHAPI__MatchPlayerResponse_1aaea294c620af9f919f11021c4e7cd148"></a>

Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1acbdc3312630889d2c44cde14c2bb5f9f)`(const FString & NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1acbdc3312630889d2c44cde14c2bb5f9f"></a>

Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true.

#### `public inline void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1aa26f6e9c2c5805052f156faf5e678016)`(FString && NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1aa26f6e9c2c5805052f156faf5e678016"></a>

Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a7dd4998aec8bc75924fd7ed25f83eb00)`()` <a id="structFRHAPI__MatchPlayerResponse_1a7dd4998aec8bc75924fd7ed25f83eb00"></a>

Clears the value of PartySessionId_Optional and sets PartySessionId_IsSet to false.

#### `public inline bool `[`IsPartySessionIdSet`](#structFRHAPI__MatchPlayerResponse_1ad661ae4a65f422d03436f4310f52e360)`() const` <a id="structFRHAPI__MatchPlayerResponse_1ad661ae4a65f422d03436f4310f52e360"></a>

Checks whether PartySessionId_Optional has been set.

#### `public inline void `[`SetPartySessionIdToNull`](#structFRHAPI__MatchPlayerResponse_1aacd4c61b5a7904c6e0721fe88a1ade2a)`()` <a id="structFRHAPI__MatchPlayerResponse_1aacd4c61b5a7904c6e0721fe88a1ade2a"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPartySessionIdNull`](#structFRHAPI__MatchPlayerResponse_1a367ecbf149cc6370b7e95903ba17d54d)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a367ecbf149cc6370b7e95903ba17d54d"></a>

Checks whether PartySessionId_Optional is set to null.

#### `public inline int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerResponse_1afeed3c498ea373083ba6bd8d43a3917f)`()` <a id="structFRHAPI__MatchPlayerResponse_1afeed3c498ea373083ba6bd8d43a3917f"></a>

Gets the value of Placement_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerResponse_1a9a8630a4d0837d0bc694d630cee5780d)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a9a8630a4d0837d0bc694d630cee5780d"></a>

Gets the value of Placement_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerResponse_1a844cc844b9a4ad9aa75705fe4c5b788b)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a844cc844b9a4ad9aa75705fe4c5b788b"></a>

Gets the value of Placement_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlacement`](#structFRHAPI__MatchPlayerResponse_1aa3f6490331e68b3024f0b86b578fbfab)`(int32 & OutValue) const` <a id="structFRHAPI__MatchPlayerResponse_1aa3f6490331e68b3024f0b86b578fbfab"></a>

Fills OutValue with the value of Placement_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerResponse_1a352d03f3f3c0c844467c211e557843b0)`()` <a id="structFRHAPI__MatchPlayerResponse_1a352d03f3f3c0c844467c211e557843b0"></a>

Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerResponse_1af1eb3a15805b653a47e80dbb5a820c82)`() const` <a id="structFRHAPI__MatchPlayerResponse_1af1eb3a15805b653a47e80dbb5a820c82"></a>

Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlacement`](#structFRHAPI__MatchPlayerResponse_1a7e0f1fdb22eca39e4f95cde4439dbc4d)`(const int32 & NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a7e0f1fdb22eca39e4f95cde4439dbc4d"></a>

Sets the value of Placement_Optional and also sets Placement_IsSet to true.

#### `public inline void `[`SetPlacement`](#structFRHAPI__MatchPlayerResponse_1accc529ef5214845479dc6951d3a3430e)`(int32 && NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1accc529ef5214845479dc6951d3a3430e"></a>

Sets the value of Placement_Optional and also sets Placement_IsSet to true using move semantics.

#### `public inline void `[`ClearPlacement`](#structFRHAPI__MatchPlayerResponse_1af17f01916e8ae6719949d01fff147c80)`()` <a id="structFRHAPI__MatchPlayerResponse_1af17f01916e8ae6719949d01fff147c80"></a>

Clears the value of Placement_Optional and sets Placement_IsSet to false.

#### `public inline bool `[`IsPlacementSet`](#structFRHAPI__MatchPlayerResponse_1a6070519f6bac3ecaeefe0b0034cfa324)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a6070519f6bac3ecaeefe0b0034cfa324"></a>

Checks whether Placement_Optional has been set.

#### `public inline bool `[`IsPlacementDefaultValue`](#structFRHAPI__MatchPlayerResponse_1a28528fa531eae3c5427784c16e7b60ba)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a28528fa531eae3c5427784c16e7b60ba"></a>

Returns true if Placement_Optional is set and matches the default value.

#### `public inline void `[`SetPlacementToDefault`](#structFRHAPI__MatchPlayerResponse_1abea287d7aa6ceeb250e47aefd82fc185)`()` <a id="structFRHAPI__MatchPlayerResponse_1abea287d7aa6ceeb250e47aefd82fc185"></a>

Sets the value of Placement_Optional to its default and also sets Placement_IsSet to true.

#### `public inline void `[`SetPlacementToNull`](#structFRHAPI__MatchPlayerResponse_1a0b1f00a583366f2d2c6677f7c52b534a)`()` <a id="structFRHAPI__MatchPlayerResponse_1a0b1f00a583366f2d2c6677f7c52b534a"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPlacementNull`](#structFRHAPI__MatchPlayerResponse_1a66df7ba9ff95af5c7eec0c4361b10003)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a66df7ba9ff95af5c7eec0c4361b10003"></a>

Checks whether Placement_Optional is set to null.

#### `public inline FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a1afef4833dc7c4f47b70e64e746ebe92)`()` <a id="structFRHAPI__MatchPlayerResponse_1a1afef4833dc7c4f47b70e64e746ebe92"></a>

Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a052c2a026143ff56e6cc8b86168d0316)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a052c2a026143ff56e6cc8b86168d0316"></a>

Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a7e41c393cd5c30f8169c4b37ad282ba6)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a7e41c393cd5c30f8169c4b37ad282ba6"></a>

Gets the value of JoinedMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a7dfc9555a469d46191a20f2a4129632a)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a7dfc9555a469d46191a20f2a4129632a"></a>

Fills OutValue with the value of JoinedMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1a845d885b8ce435168f33de9b043cc3cf)`()` <a id="structFRHAPI__MatchPlayerResponse_1a845d885b8ce435168f33de9b043cc3cf"></a>

Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1aea1e3bb2ffdf5c05aed6ffc5c4178ce9)`() const` <a id="structFRHAPI__MatchPlayerResponse_1aea1e3bb2ffdf5c05aed6ffc5c4178ce9"></a>

Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1aa314ebe25a3d3853791b388a5c52a28c)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1aa314ebe25a3d3853791b388a5c52a28c"></a>

Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true.

#### `public inline void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1aec799bdeb75e69b995f8ac60f6535503)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1aec799bdeb75e69b995f8ac60f6535503"></a>

Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a714cc4de963e4dd7a8a4f620a44f473b)`()` <a id="structFRHAPI__MatchPlayerResponse_1a714cc4de963e4dd7a8a4f620a44f473b"></a>

Clears the value of JoinedMatchTimestamp_Optional and sets JoinedMatchTimestamp_IsSet to false.

#### `public inline bool `[`IsJoinedMatchTimestampSet`](#structFRHAPI__MatchPlayerResponse_1a16eead1eb53ed4418d294e8afccd381e)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a16eead1eb53ed4418d294e8afccd381e"></a>

Checks whether JoinedMatchTimestamp_Optional has been set.

#### `public inline void `[`SetJoinedMatchTimestampToNull`](#structFRHAPI__MatchPlayerResponse_1a960a65cdb7240a42f2f3cbbfb6b0a1aa)`()` <a id="structFRHAPI__MatchPlayerResponse_1a960a65cdb7240a42f2f3cbbfb6b0a1aa"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsJoinedMatchTimestampNull`](#structFRHAPI__MatchPlayerResponse_1a79e91553fe8a482834a19aa3ae5b37ad)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a79e91553fe8a482834a19aa3ae5b37ad"></a>

Checks whether JoinedMatchTimestamp_Optional is set to null.

#### `public inline FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1ac86fc1bc6073ca471e147d7f1b70af3e)`()` <a id="structFRHAPI__MatchPlayerResponse_1ac86fc1bc6073ca471e147d7f1b70af3e"></a>

Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a883764f14b8a052c3e7a56d2e97d0553)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a883764f14b8a052c3e7a56d2e97d0553"></a>

Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a6c71b1bb257229acb1aa579c045b6a9a)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a6c71b1bb257229acb1aa579c045b6a9a"></a>

Gets the value of LeftMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a2119fee299a7500812adc92dbd7a68b7)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a2119fee299a7500812adc92dbd7a68b7"></a>

Fills OutValue with the value of LeftMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1a18ba4f245975831c6024ce240c190d0b)`()` <a id="structFRHAPI__MatchPlayerResponse_1a18ba4f245975831c6024ce240c190d0b"></a>

Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1aca8c3ef93b1ffd9689e965311ff5b83b)`() const` <a id="structFRHAPI__MatchPlayerResponse_1aca8c3ef93b1ffd9689e965311ff5b83b"></a>

Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1ac9134e9c245d5fa86eafa99267cbe907)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1ac9134e9c245d5fa86eafa99267cbe907"></a>

Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true.

#### `public inline void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1aa6a63fe8eb897a49ea5b6435d57eccf0)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1aa6a63fe8eb897a49ea5b6435d57eccf0"></a>

Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1ad464648877f8dae5abacf94f29da4725)`()` <a id="structFRHAPI__MatchPlayerResponse_1ad464648877f8dae5abacf94f29da4725"></a>

Clears the value of LeftMatchTimestamp_Optional and sets LeftMatchTimestamp_IsSet to false.

#### `public inline bool `[`IsLeftMatchTimestampSet`](#structFRHAPI__MatchPlayerResponse_1a9eef36929eda6c26cff4dc0aa16ac30b)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a9eef36929eda6c26cff4dc0aa16ac30b"></a>

Checks whether LeftMatchTimestamp_Optional has been set.

#### `public inline void `[`SetLeftMatchTimestampToNull`](#structFRHAPI__MatchPlayerResponse_1ae329b63242d91c035f5f8f5a146d0819)`()` <a id="structFRHAPI__MatchPlayerResponse_1ae329b63242d91c035f5f8f5a146d0819"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsLeftMatchTimestampNull`](#structFRHAPI__MatchPlayerResponse_1a89264377fd7891ee60fc7e7039b50285)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a89264377fd7891ee60fc7e7039b50285"></a>

Checks whether LeftMatchTimestamp_Optional is set to null.

#### `public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1ae1223bcb846a4c54f097fbb8bf465a1d)`()` <a id="structFRHAPI__MatchPlayerResponse_1ae1223bcb846a4c54f097fbb8bf465a1d"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1ac85fc9e64fe6ad8b8432f9d3abb75a51)`() const` <a id="structFRHAPI__MatchPlayerResponse_1ac85fc9e64fe6ad8b8432f9d3abb75a51"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1a9470ca9fa77ae4e4393bc90ac7628774)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a9470ca9fa77ae4e4393bc90ac7628774"></a>

Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1aac6936555486e01d3a0f42a19ec181ab)`(int32 & OutValue) const` <a id="structFRHAPI__MatchPlayerResponse_1aac6936555486e01d3a0f42a19ec181ab"></a>

Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerResponse_1ae49bdcf5971bd957d4d4f89a0d94aa0d)`()` <a id="structFRHAPI__MatchPlayerResponse_1ae49bdcf5971bd957d4d4f89a0d94aa0d"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerResponse_1aba560808f36cede3ba694604630ec2ec)`() const` <a id="structFRHAPI__MatchPlayerResponse_1aba560808f36cede3ba694604630ec2ec"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1a5343611a8958a47038796067c3818dd2)`(const int32 & NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a5343611a8958a47038796067c3818dd2"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1abf434bc02a9705e3b159cefc06db5bcb)`(int32 && NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1abf434bc02a9705e3b159cefc06db5bcb"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1addff4d7cea40283e439f4587fd8dd5f0)`()` <a id="structFRHAPI__MatchPlayerResponse_1addff4d7cea40283e439f4587fd8dd5f0"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

#### `public inline bool `[`IsDurationSecondsSet`](#structFRHAPI__MatchPlayerResponse_1a7de4f5e801ee7d195bdfadd46a9e8601)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a7de4f5e801ee7d195bdfadd46a9e8601"></a>

Checks whether DurationSeconds_Optional has been set.

#### `public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchPlayerResponse_1ab85eaadfcebeb5f27a16a8910745f152)`() const` <a id="structFRHAPI__MatchPlayerResponse_1ab85eaadfcebeb5f27a16a8910745f152"></a>

Returns true if DurationSeconds_Optional is set and matches the default value.

#### `public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchPlayerResponse_1af4fc0cde5efe6b7f2efefa650edbb089)`()` <a id="structFRHAPI__MatchPlayerResponse_1af4fc0cde5efe6b7f2efefa650edbb089"></a>

Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.

#### `public inline void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchPlayerResponse_1ae7808d220e7c336521653b99639c6bbb)`()` <a id="structFRHAPI__MatchPlayerResponse_1ae7808d220e7c336521653b99639c6bbb"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchPlayerResponse_1a2a67edeb467866fb56528f214db0c3de)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a2a67edeb467866fb56528f214db0c3de"></a>

Checks whether DurationSeconds_Optional is set to null.

#### `public inline FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerResponse_1ab9a5e76c5b0e290f9f82c2359fdab211)`()` <a id="structFRHAPI__MatchPlayerResponse_1ab9a5e76c5b0e290f9f82c2359fdab211"></a>

Gets the value of StartingRank_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerResponse_1a9e99e129836679c320ffd168ef0f5bee)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a9e99e129836679c320ffd168ef0f5bee"></a>

Gets the value of StartingRank_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerResponse_1adb9630b462535701e02b7b9661928c83)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerResponse_1adb9630b462535701e02b7b9661928c83"></a>

Gets the value of StartingRank_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStartingRank`](#structFRHAPI__MatchPlayerResponse_1a98ab7c5b0d8ca5124ba6305c2732eca3)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a98ab7c5b0d8ca5124ba6305c2732eca3"></a>

Fills OutValue with the value of StartingRank_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerResponse_1a007da709b476ebc05b7df941f56ea230)`()` <a id="structFRHAPI__MatchPlayerResponse_1a007da709b476ebc05b7df941f56ea230"></a>

Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerResponse_1aa776152becfbafe6e24781f3099dbf7f)`() const` <a id="structFRHAPI__MatchPlayerResponse_1aa776152becfbafe6e24781f3099dbf7f"></a>

Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStartingRank`](#structFRHAPI__MatchPlayerResponse_1a60a9343d88e5398abc3d641fc32d80b3)`(const FString & NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a60a9343d88e5398abc3d641fc32d80b3"></a>

Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true.

#### `public inline void `[`SetStartingRank`](#structFRHAPI__MatchPlayerResponse_1ab9b6ca32769b4c713b3b54b58194e275)`(FString && NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1ab9b6ca32769b4c713b3b54b58194e275"></a>

Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true using move semantics.

#### `public inline void `[`ClearStartingRank`](#structFRHAPI__MatchPlayerResponse_1add83305f33427b1363ecab1178e979bc)`()` <a id="structFRHAPI__MatchPlayerResponse_1add83305f33427b1363ecab1178e979bc"></a>

Clears the value of StartingRank_Optional and sets StartingRank_IsSet to false.

#### `public inline bool `[`IsStartingRankSet`](#structFRHAPI__MatchPlayerResponse_1a0827e05d0ac4e02954dfe5e45d2f3276)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a0827e05d0ac4e02954dfe5e45d2f3276"></a>

Checks whether StartingRank_Optional has been set.

#### `public inline void `[`SetStartingRankToNull`](#structFRHAPI__MatchPlayerResponse_1a9361815a097a2f79f26d014210f854c2)`()` <a id="structFRHAPI__MatchPlayerResponse_1a9361815a097a2f79f26d014210f854c2"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStartingRankNull`](#structFRHAPI__MatchPlayerResponse_1afde08bca2ad643b5da2837457319e2af)`() const` <a id="structFRHAPI__MatchPlayerResponse_1afde08bca2ad643b5da2837457319e2af"></a>

Checks whether StartingRank_Optional is set to null.

#### `public inline FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1ad88453910ee279e015b62bc54aea3387)`()` <a id="structFRHAPI__MatchPlayerResponse_1ad88453910ee279e015b62bc54aea3387"></a>

Gets the value of FinishingRank_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1aa2230088871fd17c04c7e99c42d23280)`() const` <a id="structFRHAPI__MatchPlayerResponse_1aa2230088871fd17c04c7e99c42d23280"></a>

Gets the value of FinishingRank_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1a8dd52def7523c90b56c0583a585ff095)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a8dd52def7523c90b56c0583a585ff095"></a>

Gets the value of FinishingRank_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1a1c5702097747a055dbab3fb62b05f3f4)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a1c5702097747a055dbab3fb62b05f3f4"></a>

Fills OutValue with the value of FinishingRank_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerResponse_1ae26fc1e84fe40a3c10b39e142316082f)`()` <a id="structFRHAPI__MatchPlayerResponse_1ae26fc1e84fe40a3c10b39e142316082f"></a>

Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerResponse_1ade171ec7c01a44ed059383d760c55ab4)`() const` <a id="structFRHAPI__MatchPlayerResponse_1ade171ec7c01a44ed059383d760c55ab4"></a>

Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1af9b4b2f54086dc0220c6c6c3fe1d2003)`(const FString & NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1af9b4b2f54086dc0220c6c6c3fe1d2003"></a>

Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true.

#### `public inline void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1aaf075ae2e6845f38c182d3c458be6216)`(FString && NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1aaf075ae2e6845f38c182d3c458be6216"></a>

Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true using move semantics.

#### `public inline void `[`ClearFinishingRank`](#structFRHAPI__MatchPlayerResponse_1a1891eddfe78c0798aca9b36b10d9d394)`()` <a id="structFRHAPI__MatchPlayerResponse_1a1891eddfe78c0798aca9b36b10d9d394"></a>

Clears the value of FinishingRank_Optional and sets FinishingRank_IsSet to false.

#### `public inline bool `[`IsFinishingRankSet`](#structFRHAPI__MatchPlayerResponse_1a7ad6fecfed42aa8c2611b6a1fece4cd1)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a7ad6fecfed42aa8c2611b6a1fece4cd1"></a>

Checks whether FinishingRank_Optional has been set.

#### `public inline void `[`SetFinishingRankToNull`](#structFRHAPI__MatchPlayerResponse_1a01b71a2e6aca593d55e6a9e890940950)`()` <a id="structFRHAPI__MatchPlayerResponse_1a01b71a2e6aca593d55e6a9e890940950"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFinishingRankNull`](#structFRHAPI__MatchPlayerResponse_1aaca460d3c33163e4deb900a636b5283e)`() const` <a id="structFRHAPI__MatchPlayerResponse_1aaca460d3c33163e4deb900a636b5283e"></a>

Checks whether FinishingRank_Optional is set to null.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerResponse_1a6d7602b23290d7247b01147f5b0ca682)`()` <a id="structFRHAPI__MatchPlayerResponse_1a6d7602b23290d7247b01147f5b0ca682"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerResponse_1a414c426a22a073b5de9a8b5c9fa5e4ce)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a414c426a22a073b5de9a8b5c9fa5e4ce"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerResponse_1a421180fbec7c3b20f105a79c9be4c093)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a421180fbec7c3b20f105a79c9be4c093"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchPlayerResponse_1aa4c2a91ba8545575b1d8a37c2f24a15b)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchPlayerResponse_1aa4c2a91ba8545575b1d8a37c2f24a15b"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerResponse_1a9641de9f92a9660fc328bb0ccbb2f355)`()` <a id="structFRHAPI__MatchPlayerResponse_1a9641de9f92a9660fc328bb0ccbb2f355"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerResponse_1a217747f06462bd11c78a36392033f18c)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a217747f06462bd11c78a36392033f18c"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchPlayerResponse_1ad3cd88a1dbf95ea268c270dfc7b5898d)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1ad3cd88a1dbf95ea268c270dfc7b5898d"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchPlayerResponse_1a8da48ae39780af8516cf0550538dd85b)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a8da48ae39780af8516cf0550538dd85b"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchPlayerResponse_1a6e3f6713f85176398f037a160517bdf7)`()` <a id="structFRHAPI__MatchPlayerResponse_1a6e3f6713f85176398f037a160517bdf7"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchPlayerResponse_1aa9b5b38807512f1d16dc6b132527ebbc)`() const` <a id="structFRHAPI__MatchPlayerResponse_1aa9b5b38807512f1d16dc6b132527ebbc"></a>

Checks whether CustomData_Optional has been set.

#### `public inline void `[`SetCustomDataToNull`](#structFRHAPI__MatchPlayerResponse_1aa83d0f2f25e5ef7a3d21039174c37950)`()` <a id="structFRHAPI__MatchPlayerResponse_1aa83d0f2f25e5ef7a3d21039174c37950"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCustomDataNull`](#structFRHAPI__MatchPlayerResponse_1a0baffefecd769612a4be68b3a3faf2ba)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a0baffefecd769612a4be68b3a3faf2ba"></a>

Checks whether CustomData_Optional is set to null.

