# group `RHAPI_MatchPlayerResponse` <a id="group__RHAPI__MatchPlayerResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchPlayerResponse`](#structFRHAPI__MatchPlayerResponse) | 

## struct `FRHAPI_MatchPlayerResponse` <a id="structFRHAPI__MatchPlayerResponse"></a>

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
`public FString `[`PartySessionId_Optional`](#structFRHAPI__MatchPlayerResponse_1ae6b37cf0a417d8dcbefeec9d1429f04d) | 
`public bool `[`PartySessionId_IsSet`](#structFRHAPI__MatchPlayerResponse_1a5a147aa469b05a567f26d48ac6ddf1fe) | true if PartySessionId_Optional has been set to a value
`public int32 `[`Placement_Optional`](#structFRHAPI__MatchPlayerResponse_1adac148331af051eb3ec2dbf63494690a) | 
`public bool `[`Placement_IsSet`](#structFRHAPI__MatchPlayerResponse_1a934a6bf994e704e596eb82f7521e9b08) | true if Placement_Optional has been set to a value
`public FDateTime `[`JoinedMatchTimestamp_Optional`](#structFRHAPI__MatchPlayerResponse_1a86f6ca3a6462567aa6a2a1a9b760c0b6) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`JoinedMatchTimestamp_IsSet`](#structFRHAPI__MatchPlayerResponse_1ab8fa418103e0284669694cacd18d9c9e) | true if JoinedMatchTimestamp_Optional has been set to a value
`public FDateTime `[`LeftMatchTimestamp_Optional`](#structFRHAPI__MatchPlayerResponse_1a30c30b183172a20d0a48859a5400d239) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`LeftMatchTimestamp_IsSet`](#structFRHAPI__MatchPlayerResponse_1a740ed7b206e70a98aa5ea2a2c4b1f6b1) | true if LeftMatchTimestamp_Optional has been set to a value
`public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchPlayerResponse_1a7b06e80d26cec97d490f6858ed34f093) | 
`public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchPlayerResponse_1ab65b987945e7224e77cbc71d39a82b1c) | true if DurationSeconds_Optional has been set to a value
`public FString `[`StartingRank_Optional`](#structFRHAPI__MatchPlayerResponse_1a22c3fb1c52eefb988a23b4e24cfa2e68) | 
`public bool `[`StartingRank_IsSet`](#structFRHAPI__MatchPlayerResponse_1a47984ce3b180a6f9f40279c40c6fc760) | true if StartingRank_Optional has been set to a value
`public FString `[`FinishingRank_Optional`](#structFRHAPI__MatchPlayerResponse_1a3dc6c40e24e835a9e4186214f8721224) | 
`public bool `[`FinishingRank_IsSet`](#structFRHAPI__MatchPlayerResponse_1a108ff6636a1d60b1230a2fbab8e22450) | true if FinishingRank_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchPlayerResponse_1af13b541dba217e837736e391370aa8f7) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchPlayerResponse_1ae0493c2bc514a4a86c0b55fe121af688) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchPlayerResponse_1aa6e6538cb31748c69f83dc1605071dff)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchPlayerResponse_1a66f21de69687e2f5a35e8ff32d83dcce)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1abdb75604ae06c01bdd1c21282338735a)`()` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a189531bd58be8250cc44ad20c3af1833)`() const` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a47810ad04dbd24e89a96bb5436315fc0)`(const FDateTime & DefaultValue) const` | Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a0f50919f70e886d13c99b638d97bd503)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1a114c54c7b70d46824d77840e636c385d)`()` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1a736c97eb8b594884841bce7d37326171)`() const` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a70c9ff789aabbba9de1d728a8e6ad31d)`(FDateTime NewValue)` | Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.
`public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a0f14ebff923dd715e1a4d3a44fa42e62)`()` | Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.
`public inline FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a8ffae927f1841db2cea2049d9f548574)`()` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a6f9b1bd78a01cf6de175209157bfc4c5)`() const` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1adab5117d9e058f36a3c9804c579b71a8)`(const FDateTime & DefaultValue) const` | Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a8fd17e404c9eb59756c279f457e518e0)`(FDateTime & OutValue) const` | Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1ac42b34029d347f583437328973dd2d2e)`()` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1a212e66aaf6a43ff0766788c1485f7185)`() const` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a35b5f94c2106d19ad0b6e769527944e6)`(FDateTime NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.
`public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a76039a236d9eb88426084df19a41ba98)`()` | Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a58a9de319130e7e98fea41de1a6b45c1)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a863ace493ee54438aba9c28ff6a800aa)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a8fe4e0150898aa1d077b87ef74d96f6e)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a58fec54d4ab34734b6be8f88f384de57)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerResponse_1a6b84649562308949795e51bb266fd635)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerResponse_1a4d890d4daca28641979db5cc72f6dedf)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a45ab53a507259716732aae2ed62266be)`(FGuid NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a8484990b71c7101060572f5818ca3a86)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerResponse_1ac5741040d542f5f68b27fedf5b478f4d)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerResponse_1afe335bf0473ac70ee13163e31340407f)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerResponse_1aa198be802adf987f0af0d9023734be14)`(const FString & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTeamId`](#structFRHAPI__MatchPlayerResponse_1a9f55f9b8087d1612d7852b5aadb0f78b)`(FString & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerResponse_1a9afbb2161c6e8afb1e90ee69c7efbdd3)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerResponse_1aa95dade5193bad517657907f718567bc)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTeamId`](#structFRHAPI__MatchPlayerResponse_1aeb73adbd8980bf927bb8f552cceeb872)`(FString NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline void `[`ClearTeamId`](#structFRHAPI__MatchPlayerResponse_1ab408948bdafa1da264a78f7c3f8b5c30)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a2c104ca7bb3f4c564c0c5e1b2fa301f4)`()` | Gets the value of PartySessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a67d9c91e44acf057fb3370fcff0e5f02)`() const` | Gets the value of PartySessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a59d0bd652e266c87664c8403ceaf3ac8)`(const FString & DefaultValue) const` | Gets the value of PartySessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a91c0351701c872b49633495f48a51064)`(FString & OutValue) const` | Fills OutValue with the value of PartySessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerResponse_1a7808cd71b71f54d31c84a3ef3f8a8a4c)`()` | Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerResponse_1aaea294c620af9f919f11021c4e7cd148)`() const` | Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a7baa039dcf749b80e2a4ea82b5a3835f)`(FString NewValue)` | Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true.
`public inline void `[`ClearPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a7dd4998aec8bc75924fd7ed25f83eb00)`()` | Clears the value of PartySessionId_Optional and sets PartySessionId_IsSet to false.
`public inline int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerResponse_1afeed3c498ea373083ba6bd8d43a3917f)`()` | Gets the value of Placement_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerResponse_1a9a8630a4d0837d0bc694d630cee5780d)`() const` | Gets the value of Placement_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerResponse_1a844cc844b9a4ad9aa75705fe4c5b788b)`(const int32 & DefaultValue) const` | Gets the value of Placement_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlacement`](#structFRHAPI__MatchPlayerResponse_1aa3f6490331e68b3024f0b86b578fbfab)`(int32 & OutValue) const` | Fills OutValue with the value of Placement_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerResponse_1a352d03f3f3c0c844467c211e557843b0)`()` | Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerResponse_1af1eb3a15805b653a47e80dbb5a820c82)`() const` | Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlacement`](#structFRHAPI__MatchPlayerResponse_1a94a945fe35d37eeb1a42e19574442064)`(int32 NewValue)` | Sets the value of Placement_Optional and also sets Placement_IsSet to true.
`public inline void `[`ClearPlacement`](#structFRHAPI__MatchPlayerResponse_1af17f01916e8ae6719949d01fff147c80)`()` | Clears the value of Placement_Optional and sets Placement_IsSet to false.
`public inline bool `[`IsPlacementDefaultValue`](#structFRHAPI__MatchPlayerResponse_1a28528fa531eae3c5427784c16e7b60ba)`() const` | Returns true if Placement_Optional is set and matches the default value.
`public inline void `[`SetPlacementToDefault`](#structFRHAPI__MatchPlayerResponse_1abea287d7aa6ceeb250e47aefd82fc185)`()` | Sets the value of Placement_Optional to its default and also sets Placement_IsSet to true.
`public inline FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a1afef4833dc7c4f47b70e64e746ebe92)`()` | Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a052c2a026143ff56e6cc8b86168d0316)`() const` | Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a7e41c393cd5c30f8169c4b37ad282ba6)`(const FDateTime & DefaultValue) const` | Gets the value of JoinedMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a7dfc9555a469d46191a20f2a4129632a)`(FDateTime & OutValue) const` | Fills OutValue with the value of JoinedMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1a845d885b8ce435168f33de9b043cc3cf)`()` | Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1aea1e3bb2ffdf5c05aed6ffc5c4178ce9)`() const` | Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a15377814292481967c92fed70e43f8e2)`(FDateTime NewValue)` | Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true.
`public inline void `[`ClearJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a714cc4de963e4dd7a8a4f620a44f473b)`()` | Clears the value of JoinedMatchTimestamp_Optional and sets JoinedMatchTimestamp_IsSet to false.
`public inline FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1ac86fc1bc6073ca471e147d7f1b70af3e)`()` | Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a883764f14b8a052c3e7a56d2e97d0553)`() const` | Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a6c71b1bb257229acb1aa579c045b6a9a)`(const FDateTime & DefaultValue) const` | Gets the value of LeftMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a2119fee299a7500812adc92dbd7a68b7)`(FDateTime & OutValue) const` | Fills OutValue with the value of LeftMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1a18ba4f245975831c6024ce240c190d0b)`()` | Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1aca8c3ef93b1ffd9689e965311ff5b83b)`() const` | Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a9a442bd41a5501ba4684f75210d95e93)`(FDateTime NewValue)` | Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true.
`public inline void `[`ClearLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1ad464648877f8dae5abacf94f29da4725)`()` | Clears the value of LeftMatchTimestamp_Optional and sets LeftMatchTimestamp_IsSet to false.
`public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1ae1223bcb846a4c54f097fbb8bf465a1d)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1ac85fc9e64fe6ad8b8432f9d3abb75a51)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1a9470ca9fa77ae4e4393bc90ac7628774)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1aac6936555486e01d3a0f42a19ec181ab)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerResponse_1ae49bdcf5971bd957d4d4f89a0d94aa0d)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerResponse_1aba560808f36cede3ba694604630ec2ec)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1a7b0771b08272934db5c721d1668a0c79)`(int32 NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1addff4d7cea40283e439f4587fd8dd5f0)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchPlayerResponse_1ab85eaadfcebeb5f27a16a8910745f152)`() const` | Returns true if DurationSeconds_Optional is set and matches the default value.
`public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchPlayerResponse_1af4fc0cde5efe6b7f2efefa650edbb089)`()` | Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.
`public inline FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerResponse_1ab9a5e76c5b0e290f9f82c2359fdab211)`()` | Gets the value of StartingRank_Optional, regardless of it having been set.
`public inline const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerResponse_1a9e99e129836679c320ffd168ef0f5bee)`() const` | Gets the value of StartingRank_Optional, regardless of it having been set.
`public inline const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerResponse_1adb9630b462535701e02b7b9661928c83)`(const FString & DefaultValue) const` | Gets the value of StartingRank_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStartingRank`](#structFRHAPI__MatchPlayerResponse_1a98ab7c5b0d8ca5124ba6305c2732eca3)`(FString & OutValue) const` | Fills OutValue with the value of StartingRank_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerResponse_1a007da709b476ebc05b7df941f56ea230)`()` | Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerResponse_1aa776152becfbafe6e24781f3099dbf7f)`() const` | Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStartingRank`](#structFRHAPI__MatchPlayerResponse_1aaa68bc301b9fbb8e0a8f46218a760727)`(FString NewValue)` | Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true.
`public inline void `[`ClearStartingRank`](#structFRHAPI__MatchPlayerResponse_1add83305f33427b1363ecab1178e979bc)`()` | Clears the value of StartingRank_Optional and sets StartingRank_IsSet to false.
`public inline FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1ad88453910ee279e015b62bc54aea3387)`()` | Gets the value of FinishingRank_Optional, regardless of it having been set.
`public inline const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1aa2230088871fd17c04c7e99c42d23280)`() const` | Gets the value of FinishingRank_Optional, regardless of it having been set.
`public inline const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1a8dd52def7523c90b56c0583a585ff095)`(const FString & DefaultValue) const` | Gets the value of FinishingRank_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1a1c5702097747a055dbab3fb62b05f3f4)`(FString & OutValue) const` | Fills OutValue with the value of FinishingRank_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerResponse_1ae26fc1e84fe40a3c10b39e142316082f)`()` | Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerResponse_1ade171ec7c01a44ed059383d760c55ab4)`() const` | Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1acd93975fef3b4b6e450cf68fe1594e39)`(FString NewValue)` | Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true.
`public inline void `[`ClearFinishingRank`](#structFRHAPI__MatchPlayerResponse_1a1891eddfe78c0798aca9b36b10d9d394)`()` | Clears the value of FinishingRank_Optional and sets FinishingRank_IsSet to false.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerResponse_1a6d7602b23290d7247b01147f5b0ca682)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerResponse_1a414c426a22a073b5de9a8b5c9fa5e4ce)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerResponse_1a421180fbec7c3b20f105a79c9be4c093)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchPlayerResponse_1aa4c2a91ba8545575b1d8a37c2f24a15b)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerResponse_1a9641de9f92a9660fc328bb0ccbb2f355)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerResponse_1a217747f06462bd11c78a36392033f18c)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchPlayerResponse_1a89fd3b71d30af631cebe40316086ac66)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchPlayerResponse_1a6e3f6713f85176398f037a160517bdf7)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

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

#### `public FString `[`PartySessionId_Optional`](#structFRHAPI__MatchPlayerResponse_1ae6b37cf0a417d8dcbefeec9d1429f04d) <a id="structFRHAPI__MatchPlayerResponse_1ae6b37cf0a417d8dcbefeec9d1429f04d"></a>

#### `public bool `[`PartySessionId_IsSet`](#structFRHAPI__MatchPlayerResponse_1a5a147aa469b05a567f26d48ac6ddf1fe) <a id="structFRHAPI__MatchPlayerResponse_1a5a147aa469b05a567f26d48ac6ddf1fe"></a>

true if PartySessionId_Optional has been set to a value

#### `public int32 `[`Placement_Optional`](#structFRHAPI__MatchPlayerResponse_1adac148331af051eb3ec2dbf63494690a) <a id="structFRHAPI__MatchPlayerResponse_1adac148331af051eb3ec2dbf63494690a"></a>

#### `public bool `[`Placement_IsSet`](#structFRHAPI__MatchPlayerResponse_1a934a6bf994e704e596eb82f7521e9b08) <a id="structFRHAPI__MatchPlayerResponse_1a934a6bf994e704e596eb82f7521e9b08"></a>

true if Placement_Optional has been set to a value

#### `public FDateTime `[`JoinedMatchTimestamp_Optional`](#structFRHAPI__MatchPlayerResponse_1a86f6ca3a6462567aa6a2a1a9b760c0b6) <a id="structFRHAPI__MatchPlayerResponse_1a86f6ca3a6462567aa6a2a1a9b760c0b6"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`JoinedMatchTimestamp_IsSet`](#structFRHAPI__MatchPlayerResponse_1ab8fa418103e0284669694cacd18d9c9e) <a id="structFRHAPI__MatchPlayerResponse_1ab8fa418103e0284669694cacd18d9c9e"></a>

true if JoinedMatchTimestamp_Optional has been set to a value

#### `public FDateTime `[`LeftMatchTimestamp_Optional`](#structFRHAPI__MatchPlayerResponse_1a30c30b183172a20d0a48859a5400d239) <a id="structFRHAPI__MatchPlayerResponse_1a30c30b183172a20d0a48859a5400d239"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`LeftMatchTimestamp_IsSet`](#structFRHAPI__MatchPlayerResponse_1a740ed7b206e70a98aa5ea2a2c4b1f6b1) <a id="structFRHAPI__MatchPlayerResponse_1a740ed7b206e70a98aa5ea2a2c4b1f6b1"></a>

true if LeftMatchTimestamp_Optional has been set to a value

#### `public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchPlayerResponse_1a7b06e80d26cec97d490f6858ed34f093) <a id="structFRHAPI__MatchPlayerResponse_1a7b06e80d26cec97d490f6858ed34f093"></a>

#### `public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchPlayerResponse_1ab65b987945e7224e77cbc71d39a82b1c) <a id="structFRHAPI__MatchPlayerResponse_1ab65b987945e7224e77cbc71d39a82b1c"></a>

true if DurationSeconds_Optional has been set to a value

#### `public FString `[`StartingRank_Optional`](#structFRHAPI__MatchPlayerResponse_1a22c3fb1c52eefb988a23b4e24cfa2e68) <a id="structFRHAPI__MatchPlayerResponse_1a22c3fb1c52eefb988a23b4e24cfa2e68"></a>

#### `public bool `[`StartingRank_IsSet`](#structFRHAPI__MatchPlayerResponse_1a47984ce3b180a6f9f40279c40c6fc760) <a id="structFRHAPI__MatchPlayerResponse_1a47984ce3b180a6f9f40279c40c6fc760"></a>

true if StartingRank_Optional has been set to a value

#### `public FString `[`FinishingRank_Optional`](#structFRHAPI__MatchPlayerResponse_1a3dc6c40e24e835a9e4186214f8721224) <a id="structFRHAPI__MatchPlayerResponse_1a3dc6c40e24e835a9e4186214f8721224"></a>

#### `public bool `[`FinishingRank_IsSet`](#structFRHAPI__MatchPlayerResponse_1a108ff6636a1d60b1230a2fbab8e22450) <a id="structFRHAPI__MatchPlayerResponse_1a108ff6636a1d60b1230a2fbab8e22450"></a>

true if FinishingRank_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchPlayerResponse_1af13b541dba217e837736e391370aa8f7) <a id="structFRHAPI__MatchPlayerResponse_1af13b541dba217e837736e391370aa8f7"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchPlayerResponse_1ae0493c2bc514a4a86c0b55fe121af688) <a id="structFRHAPI__MatchPlayerResponse_1ae0493c2bc514a4a86c0b55fe121af688"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchPlayerResponse_1aa6e6538cb31748c69f83dc1605071dff)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchPlayerResponse_1aa6e6538cb31748c69f83dc1605071dff"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchPlayerResponse_1a66f21de69687e2f5a35e8ff32d83dcce)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchPlayerResponse_1a66f21de69687e2f5a35e8ff32d83dcce"></a>

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

#### `public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a70c9ff789aabbba9de1d728a8e6ad31d)`(FDateTime NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a70c9ff789aabbba9de1d728a8e6ad31d"></a>

Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.

#### `public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a0f14ebff923dd715e1a4d3a44fa42e62)`()` <a id="structFRHAPI__MatchPlayerResponse_1a0f14ebff923dd715e1a4d3a44fa42e62"></a>

Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.

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

#### `public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a35b5f94c2106d19ad0b6e769527944e6)`(FDateTime NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a35b5f94c2106d19ad0b6e769527944e6"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.

#### `public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a76039a236d9eb88426084df19a41ba98)`()` <a id="structFRHAPI__MatchPlayerResponse_1a76039a236d9eb88426084df19a41ba98"></a>

Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.

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

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a45ab53a507259716732aae2ed62266be)`(FGuid NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a45ab53a507259716732aae2ed62266be"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a8484990b71c7101060572f5818ca3a86)`()` <a id="structFRHAPI__MatchPlayerResponse_1a8484990b71c7101060572f5818ca3a86"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

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

#### `public inline void `[`SetTeamId`](#structFRHAPI__MatchPlayerResponse_1aeb73adbd8980bf927bb8f552cceeb872)`(FString NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1aeb73adbd8980bf927bb8f552cceeb872"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.

#### `public inline void `[`ClearTeamId`](#structFRHAPI__MatchPlayerResponse_1ab408948bdafa1da264a78f7c3f8b5c30)`()` <a id="structFRHAPI__MatchPlayerResponse_1ab408948bdafa1da264a78f7c3f8b5c30"></a>

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.

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

#### `public inline void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a7baa039dcf749b80e2a4ea82b5a3835f)`(FString NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a7baa039dcf749b80e2a4ea82b5a3835f"></a>

Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true.

#### `public inline void `[`ClearPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a7dd4998aec8bc75924fd7ed25f83eb00)`()` <a id="structFRHAPI__MatchPlayerResponse_1a7dd4998aec8bc75924fd7ed25f83eb00"></a>

Clears the value of PartySessionId_Optional and sets PartySessionId_IsSet to false.

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

#### `public inline void `[`SetPlacement`](#structFRHAPI__MatchPlayerResponse_1a94a945fe35d37eeb1a42e19574442064)`(int32 NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a94a945fe35d37eeb1a42e19574442064"></a>

Sets the value of Placement_Optional and also sets Placement_IsSet to true.

#### `public inline void `[`ClearPlacement`](#structFRHAPI__MatchPlayerResponse_1af17f01916e8ae6719949d01fff147c80)`()` <a id="structFRHAPI__MatchPlayerResponse_1af17f01916e8ae6719949d01fff147c80"></a>

Clears the value of Placement_Optional and sets Placement_IsSet to false.

#### `public inline bool `[`IsPlacementDefaultValue`](#structFRHAPI__MatchPlayerResponse_1a28528fa531eae3c5427784c16e7b60ba)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a28528fa531eae3c5427784c16e7b60ba"></a>

Returns true if Placement_Optional is set and matches the default value.

#### `public inline void `[`SetPlacementToDefault`](#structFRHAPI__MatchPlayerResponse_1abea287d7aa6ceeb250e47aefd82fc185)`()` <a id="structFRHAPI__MatchPlayerResponse_1abea287d7aa6ceeb250e47aefd82fc185"></a>

Sets the value of Placement_Optional to its default and also sets Placement_IsSet to true.

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

#### `public inline void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a15377814292481967c92fed70e43f8e2)`(FDateTime NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a15377814292481967c92fed70e43f8e2"></a>

Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true.

#### `public inline void `[`ClearJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a714cc4de963e4dd7a8a4f620a44f473b)`()` <a id="structFRHAPI__MatchPlayerResponse_1a714cc4de963e4dd7a8a4f620a44f473b"></a>

Clears the value of JoinedMatchTimestamp_Optional and sets JoinedMatchTimestamp_IsSet to false.

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

#### `public inline void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a9a442bd41a5501ba4684f75210d95e93)`(FDateTime NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a9a442bd41a5501ba4684f75210d95e93"></a>

Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true.

#### `public inline void `[`ClearLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1ad464648877f8dae5abacf94f29da4725)`()` <a id="structFRHAPI__MatchPlayerResponse_1ad464648877f8dae5abacf94f29da4725"></a>

Clears the value of LeftMatchTimestamp_Optional and sets LeftMatchTimestamp_IsSet to false.

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

#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1a7b0771b08272934db5c721d1668a0c79)`(int32 NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a7b0771b08272934db5c721d1668a0c79"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1addff4d7cea40283e439f4587fd8dd5f0)`()` <a id="structFRHAPI__MatchPlayerResponse_1addff4d7cea40283e439f4587fd8dd5f0"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

#### `public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchPlayerResponse_1ab85eaadfcebeb5f27a16a8910745f152)`() const` <a id="structFRHAPI__MatchPlayerResponse_1ab85eaadfcebeb5f27a16a8910745f152"></a>

Returns true if DurationSeconds_Optional is set and matches the default value.

#### `public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchPlayerResponse_1af4fc0cde5efe6b7f2efefa650edbb089)`()` <a id="structFRHAPI__MatchPlayerResponse_1af4fc0cde5efe6b7f2efefa650edbb089"></a>

Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.

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

#### `public inline void `[`SetStartingRank`](#structFRHAPI__MatchPlayerResponse_1aaa68bc301b9fbb8e0a8f46218a760727)`(FString NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1aaa68bc301b9fbb8e0a8f46218a760727"></a>

Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true.

#### `public inline void `[`ClearStartingRank`](#structFRHAPI__MatchPlayerResponse_1add83305f33427b1363ecab1178e979bc)`()` <a id="structFRHAPI__MatchPlayerResponse_1add83305f33427b1363ecab1178e979bc"></a>

Clears the value of StartingRank_Optional and sets StartingRank_IsSet to false.

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

#### `public inline void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1acd93975fef3b4b6e450cf68fe1594e39)`(FString NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1acd93975fef3b4b6e450cf68fe1594e39"></a>

Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true.

#### `public inline void `[`ClearFinishingRank`](#structFRHAPI__MatchPlayerResponse_1a1891eddfe78c0798aca9b36b10d9d394)`()` <a id="structFRHAPI__MatchPlayerResponse_1a1891eddfe78c0798aca9b36b10d9d394"></a>

Clears the value of FinishingRank_Optional and sets FinishingRank_IsSet to false.

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

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchPlayerResponse_1a89fd3b71d30af631cebe40316086ac66)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a89fd3b71d30af631cebe40316086ac66"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchPlayerResponse_1a6e3f6713f85176398f037a160517bdf7)`()` <a id="structFRHAPI__MatchPlayerResponse_1a6e3f6713f85176398f037a160517bdf7"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

