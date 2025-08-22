---
title: RHAPI_MatchPlayerResponse
---

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
`public virtual void `[`WriteJson`](#structFRHAPI__MatchPlayerResponse_1aaffe78811906fdd8af467e5d8d849dcf)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a49c94fe300140efa53e6229ccd00eef7)`()` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a01b9ae039193ff7f52906f511a2f27f0)`() const` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a9f6ae461ba6e1230910524b08232fd0c)`(const FDateTime & DefaultValue) const` | Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1ac8db90a349754b25e1e5e16fd9143189)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1a83ab2ae3639c1f2c26ca66b7be0b31b9)`()` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1a2c9482cc514e07e276af969907db159a)`() const` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a0256d5eb990715bb0df37738b8041e67)`(const FDateTime & NewValue)` | Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1ad89e8556dd7def9e32256960753d1e29)`(FDateTime && NewValue)` | Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a0f14ebff923dd715e1a4d3a44fa42e62)`()` | Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.
`public inline FORCEINLINE FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1adf9268c9a9966a24fc83c090449e4b6a)`()` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a66855f21706c859d886bc54b3b77af39)`() const` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1aa57f360dd9a715de01e5c113941c54cd)`(const FDateTime & DefaultValue) const` | Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a0027e1a93725c614b3fcb08400393b47)`(FDateTime & OutValue) const` | Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1a53d842b93cbd5c88944463f15a888ef1)`()` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1a643328c46b205edd75b19a21347a5510)`() const` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a1830e1a7e014d9f2c95e4f2d66455e3d)`(const FDateTime & NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1afbbacd8d376dcfdf52f7b415a0ad053c)`(FDateTime && NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a76039a236d9eb88426084df19a41ba98)`()` | Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1afb2454085499d72f956b7dc94f0f8e64)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1aa6f2d03147648bef5be9f12a0204158c)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a609dd4688150d05f971124fbbbb82cf9)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a3fd6d740dca81953401fbe86ff5b2253)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerResponse_1a66d23b246b5fd36a602e79796a4a4f24)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerResponse_1ab836aa38fead856403758e7c76db99d2)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a717fe42759d148b7b585a6757bc4dda3)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a074158248be76b5bd197ee58bed5f784)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a8484990b71c7101060572f5818ca3a86)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline FORCEINLINE FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerResponse_1a4e23c9023cba88e8a5993cadb92b3a63)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerResponse_1a6e4e42bd8c2958deb84a60cb19dc82ef)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerResponse_1a77f71a23690c18bff634bad52787e21f)`(const FString & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTeamId`](#structFRHAPI__MatchPlayerResponse_1a876359dea6fa604beb072d3bad95c16a)`(FString & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerResponse_1a6490e1fdfc8c05022aefe6cee0cc7a22)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerResponse_1ae8bbabcf1f3796f80bd325431f6a83d0)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__MatchPlayerResponse_1a7cb13a2686f3c584582ee89904282160)`(const FString & NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__MatchPlayerResponse_1a0e9ab40a9fb5c01d64631f03e16b0ba3)`(FString && NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.
`public inline void `[`ClearTeamId`](#structFRHAPI__MatchPlayerResponse_1ab408948bdafa1da264a78f7c3f8b5c30)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline FORCEINLINE void `[`SetTeamIdToNull`](#structFRHAPI__MatchPlayerResponse_1a1fbd9873d55b8c614f30bfe166e7cf96)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsTeamIdNull`](#structFRHAPI__MatchPlayerResponse_1a88d8f336eeea9ea177f8fda60986b12b)`() const` | Checks whether TeamId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1ae4b6c993971da7aabbf2f398dfea4f7a)`()` | Gets the value of PartySessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a356f448d5609b8155665e7fb07faa81e)`() const` | Gets the value of PartySessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a91814acbe99546489da4710c06240f0d)`(const FString & DefaultValue) const` | Gets the value of PartySessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a41d7d6d32990037582046f4c865c01af)`(FString & OutValue) const` | Fills OutValue with the value of PartySessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerResponse_1a8d5c2032c2fcdf0290b07e7cf2be649c)`()` | Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerResponse_1aaa0e5d32f6e836a6aa1b6934d49cec87)`() const` | Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1ae4a5a99cbf48406e5c6fa251c0d25eba)`(const FString & NewValue)` | Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true.
`public inline FORCEINLINE void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a94f7a96f9a5ac42eab221ef22c2d378e)`(FString && NewValue)` | Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true using move semantics.
`public inline void `[`ClearPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a7dd4998aec8bc75924fd7ed25f83eb00)`()` | Clears the value of PartySessionId_Optional and sets PartySessionId_IsSet to false.
`public inline FORCEINLINE void `[`SetPartySessionIdToNull`](#structFRHAPI__MatchPlayerResponse_1aba749adfa3f7aa35c14cfaf46b02b6b4)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPartySessionIdNull`](#structFRHAPI__MatchPlayerResponse_1addfc99a8a6e5a6ea8ea4706e8bbdf976)`() const` | Checks whether PartySessionId_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerResponse_1aa73dc0dda78735c9d75602619c84af0f)`()` | Gets the value of Placement_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerResponse_1a55d9811a6ee41b969682ea3fc55a7b7d)`() const` | Gets the value of Placement_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerResponse_1a9daa475b0dadcdfb864d5275f1d3ea33)`(const int32 & DefaultValue) const` | Gets the value of Placement_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlacement`](#structFRHAPI__MatchPlayerResponse_1aae1e2793c1e8c7a040e272ff9d79a1f5)`(int32 & OutValue) const` | Fills OutValue with the value of Placement_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerResponse_1a0554ad415a7eeb6b1c7da70b2aa54ab4)`()` | Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerResponse_1a1e18d8b1b6472e0b6f7d8af072ef25d3)`() const` | Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlacement`](#structFRHAPI__MatchPlayerResponse_1accb3f2d3f77b6724f32547ae0f239b81)`(const int32 & NewValue)` | Sets the value of Placement_Optional and also sets Placement_IsSet to true.
`public inline FORCEINLINE void `[`SetPlacement`](#structFRHAPI__MatchPlayerResponse_1a13e9d7b3a9f94ad34da369a359adb4bd)`(int32 && NewValue)` | Sets the value of Placement_Optional and also sets Placement_IsSet to true using move semantics.
`public inline void `[`ClearPlacement`](#structFRHAPI__MatchPlayerResponse_1af17f01916e8ae6719949d01fff147c80)`()` | Clears the value of Placement_Optional and sets Placement_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Placement`](#structFRHAPI__MatchPlayerResponse_1a12c19bc17a9740f693b3d95fff3f564c)`()` | Returns the default value of Placement.
`public inline FORCEINLINE void `[`SetPlacementToNull`](#structFRHAPI__MatchPlayerResponse_1acc0343132e8748afdea7b5204baadaaf)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPlacementNull`](#structFRHAPI__MatchPlayerResponse_1a4ff3aedddafeba4c18f1ece16756400d)`() const` | Checks whether Placement_Optional is set to null.
`public inline FORCEINLINE FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a814945d1f163052bb9e228989e0da526)`()` | Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1ace80556e0eaaf8d592074b0a83283fee)`() const` | Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a33ba0f62a375a1c973bbb2135758ed64)`(const FDateTime & DefaultValue) const` | Gets the value of JoinedMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a5623092af01fe54587412e4cf6dcbe36)`(FDateTime & OutValue) const` | Fills OutValue with the value of JoinedMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1ac3104d8429fdcf6910a84c7d6ea28985)`()` | Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1a32daebf2557db9c51589bf623723de20)`() const` | Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a048a731304aa0993a32853511502ef65)`(const FDateTime & NewValue)` | Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a7a57fc13855170c26bc9e565963da04c)`(FDateTime && NewValue)` | Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a714cc4de963e4dd7a8a4f620a44f473b)`()` | Clears the value of JoinedMatchTimestamp_Optional and sets JoinedMatchTimestamp_IsSet to false.
`public inline FORCEINLINE void `[`SetJoinedMatchTimestampToNull`](#structFRHAPI__MatchPlayerResponse_1a69229815cce0a02de95d0fd851462700)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsJoinedMatchTimestampNull`](#structFRHAPI__MatchPlayerResponse_1af603d0fc9a4ca2ab0d0efe7b5e4ff484)`() const` | Checks whether JoinedMatchTimestamp_Optional is set to null.
`public inline FORCEINLINE FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a97ced73f4b48f1a223183f82626e1b18)`()` | Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1aa78d385712e51007fa1fdefe57189dd7)`() const` | Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a1707538ff41894c7947a9620feb894d2)`(const FDateTime & DefaultValue) const` | Gets the value of LeftMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a8ade15dfb95c21804b35a8cef541ab56)`(FDateTime & OutValue) const` | Fills OutValue with the value of LeftMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1aac8eaa66e58fff91b7655ce293021827)`()` | Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1aa82b2e0f1015580b05b2b9ade8277998)`() const` | Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a72e2c7b551b0172b034c553258c52df6)`(const FDateTime & NewValue)` | Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1ae0f4c312bd99f71de6b1be9bed90c8dd)`(FDateTime && NewValue)` | Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1ad464648877f8dae5abacf94f29da4725)`()` | Clears the value of LeftMatchTimestamp_Optional and sets LeftMatchTimestamp_IsSet to false.
`public inline FORCEINLINE void `[`SetLeftMatchTimestampToNull`](#structFRHAPI__MatchPlayerResponse_1ad60fbaf5cbea6c91ccc4d643d0a2f7d1)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsLeftMatchTimestampNull`](#structFRHAPI__MatchPlayerResponse_1a0c660577ff05ddf6b8125ef64d1d3ad4)`() const` | Checks whether LeftMatchTimestamp_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1a92b734302a4a02f8632a3a98f5feddf1)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1a05b4ef491dcba5e5c0192161952d27b0)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1a8a238060d3d01ed13f0308c97c718210)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1a421bcfe88770c04f4b3e957802517188)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerResponse_1ab66e355890774e1b6ba6ba32c9d453a7)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerResponse_1a0f9c01755dd1730342e0d5bcf9d2e578)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1abcd341595912c239c54d00c1f4a9b014)`(const int32 & NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1a5985e4baefa452623a1a0b0c84b4fcba)`(int32 && NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1addff4d7cea40283e439f4587fd8dd5f0)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_DurationSeconds`](#structFRHAPI__MatchPlayerResponse_1aa3f971653f4ada2d797e4a3aa36864b2)`()` | Returns the default value of DurationSeconds.
`public inline FORCEINLINE void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchPlayerResponse_1a1e05b34ea9f07c15e5e613b0cefbe214)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchPlayerResponse_1a0fb327571361f4fea4d87741477aac8f)`() const` | Checks whether DurationSeconds_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerResponse_1a1eb29954f120d7edd0b7500c9ca609fc)`()` | Gets the value of StartingRank_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerResponse_1a8b2aa7b67d3d6ff7cd1b0ae7718f5d5d)`() const` | Gets the value of StartingRank_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerResponse_1a56a02763156065b031dabcde5004334e)`(const FString & DefaultValue) const` | Gets the value of StartingRank_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStartingRank`](#structFRHAPI__MatchPlayerResponse_1a0a4c2ed7ddb596d1ad11cb0dcf8f60f4)`(FString & OutValue) const` | Fills OutValue with the value of StartingRank_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerResponse_1a166922f5a918267fb2124966a91a325c)`()` | Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerResponse_1a5718f72ebd92c204f92aaa53208babfe)`() const` | Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStartingRank`](#structFRHAPI__MatchPlayerResponse_1a6f9869346f4bc3ff9a28c1442b74a97a)`(const FString & NewValue)` | Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true.
`public inline FORCEINLINE void `[`SetStartingRank`](#structFRHAPI__MatchPlayerResponse_1a6124286321d32401c141197cff665786)`(FString && NewValue)` | Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true using move semantics.
`public inline void `[`ClearStartingRank`](#structFRHAPI__MatchPlayerResponse_1add83305f33427b1363ecab1178e979bc)`()` | Clears the value of StartingRank_Optional and sets StartingRank_IsSet to false.
`public inline FORCEINLINE void `[`SetStartingRankToNull`](#structFRHAPI__MatchPlayerResponse_1af6395759deaf065864e852d63375174c)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStartingRankNull`](#structFRHAPI__MatchPlayerResponse_1a04d762b7dd9ad96ebf82b1b4d4f1ee81)`() const` | Checks whether StartingRank_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1a1f598d58d9ed9a4cf3c581bb5ba3b1b9)`()` | Gets the value of FinishingRank_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1a7476aab8749a23bee23ec3a6adcfd271)`() const` | Gets the value of FinishingRank_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1a3ca8fd1af5c6b7d3b6aff99916d5e7f2)`(const FString & DefaultValue) const` | Gets the value of FinishingRank_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1a4e5502ed3f1da3addbf90ee9ddece4c4)`(FString & OutValue) const` | Fills OutValue with the value of FinishingRank_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerResponse_1a9f7d109ccf0ec9cc2a12494e8e1b4d2c)`()` | Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerResponse_1a6875d4d2d2eacc13b5a90ca27ef44ca9)`() const` | Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1adcd04060748aad289c33f752a259ce34)`(const FString & NewValue)` | Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true.
`public inline FORCEINLINE void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1a60e8fb6305a7ba349fbf3a6071c98993)`(FString && NewValue)` | Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true using move semantics.
`public inline void `[`ClearFinishingRank`](#structFRHAPI__MatchPlayerResponse_1a1891eddfe78c0798aca9b36b10d9d394)`()` | Clears the value of FinishingRank_Optional and sets FinishingRank_IsSet to false.
`public inline FORCEINLINE void `[`SetFinishingRankToNull`](#structFRHAPI__MatchPlayerResponse_1a38911f0693fdd6d4be16470ac55c5078)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsFinishingRankNull`](#structFRHAPI__MatchPlayerResponse_1adc8eb6bcfe0bc33d4217487a3dc31c1a)`() const` | Checks whether FinishingRank_Optional is set to null.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerResponse_1a211306e5fcd1e145ae24daf6dc3481e3)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerResponse_1a2a0e97b16e68cdb6e2a3f413e4e8eeab)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerResponse_1a7e15fda200f5a35afc66f3488a712ff5)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchPlayerResponse_1a8d3ea710d2c0cf85e78c06b88a5480ea)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerResponse_1afa11d3b0100d046eeeec617a0ee4f715)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerResponse_1a826fae960c36cfeeb607bd76f972f234)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchPlayerResponse_1a0eea40f2654e4304f98d8262d52e94ab)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchPlayerResponse_1ae4c214123762d68d628f2eafa481864c)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchPlayerResponse_1a6e3f6713f85176398f037a160517bdf7)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__MatchPlayerResponse_1a0192028bf3c9abcb5081b70ec0584482)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__MatchPlayerResponse_1a0df5903612a75795be23ccc63e87326f)`() const` | Checks whether CustomData_Optional is set to null.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchPlayerResponse_1aaffe78811906fdd8af467e5d8d849dcf)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchPlayerResponse_1aaffe78811906fdd8af467e5d8d849dcf"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a49c94fe300140efa53e6229ccd00eef7)`()` <a id="structFRHAPI__MatchPlayerResponse_1a49c94fe300140efa53e6229ccd00eef7"></a>

Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a01b9ae039193ff7f52906f511a2f27f0)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a01b9ae039193ff7f52906f511a2f27f0"></a>

Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a9f6ae461ba6e1230910524b08232fd0c)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a9f6ae461ba6e1230910524b08232fd0c"></a>

Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1ac8db90a349754b25e1e5e16fd9143189)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchPlayerResponse_1ac8db90a349754b25e1e5e16fd9143189"></a>

Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1a83ab2ae3639c1f2c26ca66b7be0b31b9)`()` <a id="structFRHAPI__MatchPlayerResponse_1a83ab2ae3639c1f2c26ca66b7be0b31b9"></a>

Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1a2c9482cc514e07e276af969907db159a)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a2c9482cc514e07e276af969907db159a"></a>

Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a0256d5eb990715bb0df37738b8041e67)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a0256d5eb990715bb0df37738b8041e67"></a>

Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1ad89e8556dd7def9e32256960753d1e29)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1ad89e8556dd7def9e32256960753d1e29"></a>

Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a0f14ebff923dd715e1a4d3a44fa42e62)`()` <a id="structFRHAPI__MatchPlayerResponse_1a0f14ebff923dd715e1a4d3a44fa42e62"></a>

Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.

#### `public inline FORCEINLINE FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1adf9268c9a9966a24fc83c090449e4b6a)`()` <a id="structFRHAPI__MatchPlayerResponse_1adf9268c9a9966a24fc83c090449e4b6a"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a66855f21706c859d886bc54b3b77af39)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a66855f21706c859d886bc54b3b77af39"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1aa57f360dd9a715de01e5c113941c54cd)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchPlayerResponse_1aa57f360dd9a715de01e5c113941c54cd"></a>

Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a0027e1a93725c614b3fcb08400393b47)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a0027e1a93725c614b3fcb08400393b47"></a>

Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1a53d842b93cbd5c88944463f15a888ef1)`()` <a id="structFRHAPI__MatchPlayerResponse_1a53d842b93cbd5c88944463f15a888ef1"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1a643328c46b205edd75b19a21347a5510)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a643328c46b205edd75b19a21347a5510"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a1830e1a7e014d9f2c95e4f2d66455e3d)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a1830e1a7e014d9f2c95e4f2d66455e3d"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1afbbacd8d376dcfdf52f7b415a0ad053c)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1afbbacd8d376dcfdf52f7b415a0ad053c"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchPlayerResponse_1a76039a236d9eb88426084df19a41ba98)`()` <a id="structFRHAPI__MatchPlayerResponse_1a76039a236d9eb88426084df19a41ba98"></a>

Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1afb2454085499d72f956b7dc94f0f8e64)`()` <a id="structFRHAPI__MatchPlayerResponse_1afb2454085499d72f956b7dc94f0f8e64"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1aa6f2d03147648bef5be9f12a0204158c)`() const` <a id="structFRHAPI__MatchPlayerResponse_1aa6f2d03147648bef5be9f12a0204158c"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a609dd4688150d05f971124fbbbb82cf9)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a609dd4688150d05f971124fbbbb82cf9"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a3fd6d740dca81953401fbe86ff5b2253)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a3fd6d740dca81953401fbe86ff5b2253"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerResponse_1a66d23b246b5fd36a602e79796a4a4f24)`()` <a id="structFRHAPI__MatchPlayerResponse_1a66d23b246b5fd36a602e79796a4a4f24"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerResponse_1ab836aa38fead856403758e7c76db99d2)`() const` <a id="structFRHAPI__MatchPlayerResponse_1ab836aa38fead856403758e7c76db99d2"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a717fe42759d148b7b585a6757bc4dda3)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a717fe42759d148b7b585a6757bc4dda3"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a074158248be76b5bd197ee58bed5f784)`(FGuid && NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a074158248be76b5bd197ee58bed5f784"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__MatchPlayerResponse_1a8484990b71c7101060572f5818ca3a86)`()` <a id="structFRHAPI__MatchPlayerResponse_1a8484990b71c7101060572f5818ca3a86"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerResponse_1a4e23c9023cba88e8a5993cadb92b3a63)`()` <a id="structFRHAPI__MatchPlayerResponse_1a4e23c9023cba88e8a5993cadb92b3a63"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerResponse_1a6e4e42bd8c2958deb84a60cb19dc82ef)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a6e4e42bd8c2958deb84a60cb19dc82ef"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerResponse_1a77f71a23690c18bff634bad52787e21f)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a77f71a23690c18bff634bad52787e21f"></a>

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTeamId`](#structFRHAPI__MatchPlayerResponse_1a876359dea6fa604beb072d3bad95c16a)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a876359dea6fa604beb072d3bad95c16a"></a>

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerResponse_1a6490e1fdfc8c05022aefe6cee0cc7a22)`()` <a id="structFRHAPI__MatchPlayerResponse_1a6490e1fdfc8c05022aefe6cee0cc7a22"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerResponse_1ae8bbabcf1f3796f80bd325431f6a83d0)`() const` <a id="structFRHAPI__MatchPlayerResponse_1ae8bbabcf1f3796f80bd325431f6a83d0"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__MatchPlayerResponse_1a7cb13a2686f3c584582ee89904282160)`(const FString & NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a7cb13a2686f3c584582ee89904282160"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__MatchPlayerResponse_1a0e9ab40a9fb5c01d64631f03e16b0ba3)`(FString && NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a0e9ab40a9fb5c01d64631f03e16b0ba3"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.

#### `public inline void `[`ClearTeamId`](#structFRHAPI__MatchPlayerResponse_1ab408948bdafa1da264a78f7c3f8b5c30)`()` <a id="structFRHAPI__MatchPlayerResponse_1ab408948bdafa1da264a78f7c3f8b5c30"></a>

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetTeamIdToNull`](#structFRHAPI__MatchPlayerResponse_1a1fbd9873d55b8c614f30bfe166e7cf96)`()` <a id="structFRHAPI__MatchPlayerResponse_1a1fbd9873d55b8c614f30bfe166e7cf96"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsTeamIdNull`](#structFRHAPI__MatchPlayerResponse_1a88d8f336eeea9ea177f8fda60986b12b)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a88d8f336eeea9ea177f8fda60986b12b"></a>

Checks whether TeamId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1ae4b6c993971da7aabbf2f398dfea4f7a)`()` <a id="structFRHAPI__MatchPlayerResponse_1ae4b6c993971da7aabbf2f398dfea4f7a"></a>

Gets the value of PartySessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a356f448d5609b8155665e7fb07faa81e)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a356f448d5609b8155665e7fb07faa81e"></a>

Gets the value of PartySessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a91814acbe99546489da4710c06240f0d)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a91814acbe99546489da4710c06240f0d"></a>

Gets the value of PartySessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a41d7d6d32990037582046f4c865c01af)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a41d7d6d32990037582046f4c865c01af"></a>

Fills OutValue with the value of PartySessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerResponse_1a8d5c2032c2fcdf0290b07e7cf2be649c)`()` <a id="structFRHAPI__MatchPlayerResponse_1a8d5c2032c2fcdf0290b07e7cf2be649c"></a>

Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerResponse_1aaa0e5d32f6e836a6aa1b6934d49cec87)`() const` <a id="structFRHAPI__MatchPlayerResponse_1aaa0e5d32f6e836a6aa1b6934d49cec87"></a>

Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1ae4a5a99cbf48406e5c6fa251c0d25eba)`(const FString & NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1ae4a5a99cbf48406e5c6fa251c0d25eba"></a>

Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a94f7a96f9a5ac42eab221ef22c2d378e)`(FString && NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a94f7a96f9a5ac42eab221ef22c2d378e"></a>

Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearPartySessionId`](#structFRHAPI__MatchPlayerResponse_1a7dd4998aec8bc75924fd7ed25f83eb00)`()` <a id="structFRHAPI__MatchPlayerResponse_1a7dd4998aec8bc75924fd7ed25f83eb00"></a>

Clears the value of PartySessionId_Optional and sets PartySessionId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPartySessionIdToNull`](#structFRHAPI__MatchPlayerResponse_1aba749adfa3f7aa35c14cfaf46b02b6b4)`()` <a id="structFRHAPI__MatchPlayerResponse_1aba749adfa3f7aa35c14cfaf46b02b6b4"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPartySessionIdNull`](#structFRHAPI__MatchPlayerResponse_1addfc99a8a6e5a6ea8ea4706e8bbdf976)`() const` <a id="structFRHAPI__MatchPlayerResponse_1addfc99a8a6e5a6ea8ea4706e8bbdf976"></a>

Checks whether PartySessionId_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerResponse_1aa73dc0dda78735c9d75602619c84af0f)`()` <a id="structFRHAPI__MatchPlayerResponse_1aa73dc0dda78735c9d75602619c84af0f"></a>

Gets the value of Placement_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerResponse_1a55d9811a6ee41b969682ea3fc55a7b7d)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a55d9811a6ee41b969682ea3fc55a7b7d"></a>

Gets the value of Placement_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerResponse_1a9daa475b0dadcdfb864d5275f1d3ea33)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a9daa475b0dadcdfb864d5275f1d3ea33"></a>

Gets the value of Placement_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlacement`](#structFRHAPI__MatchPlayerResponse_1aae1e2793c1e8c7a040e272ff9d79a1f5)`(int32 & OutValue) const` <a id="structFRHAPI__MatchPlayerResponse_1aae1e2793c1e8c7a040e272ff9d79a1f5"></a>

Fills OutValue with the value of Placement_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerResponse_1a0554ad415a7eeb6b1c7da70b2aa54ab4)`()` <a id="structFRHAPI__MatchPlayerResponse_1a0554ad415a7eeb6b1c7da70b2aa54ab4"></a>

Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerResponse_1a1e18d8b1b6472e0b6f7d8af072ef25d3)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a1e18d8b1b6472e0b6f7d8af072ef25d3"></a>

Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlacement`](#structFRHAPI__MatchPlayerResponse_1accb3f2d3f77b6724f32547ae0f239b81)`(const int32 & NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1accb3f2d3f77b6724f32547ae0f239b81"></a>

Sets the value of Placement_Optional and also sets Placement_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlacement`](#structFRHAPI__MatchPlayerResponse_1a13e9d7b3a9f94ad34da369a359adb4bd)`(int32 && NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a13e9d7b3a9f94ad34da369a359adb4bd"></a>

Sets the value of Placement_Optional and also sets Placement_IsSet to true using move semantics.

#### `public inline void `[`ClearPlacement`](#structFRHAPI__MatchPlayerResponse_1af17f01916e8ae6719949d01fff147c80)`()` <a id="structFRHAPI__MatchPlayerResponse_1af17f01916e8ae6719949d01fff147c80"></a>

Clears the value of Placement_Optional and sets Placement_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Placement`](#structFRHAPI__MatchPlayerResponse_1a12c19bc17a9740f693b3d95fff3f564c)`()` <a id="structFRHAPI__MatchPlayerResponse_1a12c19bc17a9740f693b3d95fff3f564c"></a>

Returns the default value of Placement.

#### `public inline FORCEINLINE void `[`SetPlacementToNull`](#structFRHAPI__MatchPlayerResponse_1acc0343132e8748afdea7b5204baadaaf)`()` <a id="structFRHAPI__MatchPlayerResponse_1acc0343132e8748afdea7b5204baadaaf"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPlacementNull`](#structFRHAPI__MatchPlayerResponse_1a4ff3aedddafeba4c18f1ece16756400d)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a4ff3aedddafeba4c18f1ece16756400d"></a>

Checks whether Placement_Optional is set to null.

#### `public inline FORCEINLINE FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a814945d1f163052bb9e228989e0da526)`()` <a id="structFRHAPI__MatchPlayerResponse_1a814945d1f163052bb9e228989e0da526"></a>

Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1ace80556e0eaaf8d592074b0a83283fee)`() const` <a id="structFRHAPI__MatchPlayerResponse_1ace80556e0eaaf8d592074b0a83283fee"></a>

Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a33ba0f62a375a1c973bbb2135758ed64)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a33ba0f62a375a1c973bbb2135758ed64"></a>

Gets the value of JoinedMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a5623092af01fe54587412e4cf6dcbe36)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a5623092af01fe54587412e4cf6dcbe36"></a>

Fills OutValue with the value of JoinedMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1ac3104d8429fdcf6910a84c7d6ea28985)`()` <a id="structFRHAPI__MatchPlayerResponse_1ac3104d8429fdcf6910a84c7d6ea28985"></a>

Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1a32daebf2557db9c51589bf623723de20)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a32daebf2557db9c51589bf623723de20"></a>

Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a048a731304aa0993a32853511502ef65)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a048a731304aa0993a32853511502ef65"></a>

Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a7a57fc13855170c26bc9e565963da04c)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a7a57fc13855170c26bc9e565963da04c"></a>

Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a714cc4de963e4dd7a8a4f620a44f473b)`()` <a id="structFRHAPI__MatchPlayerResponse_1a714cc4de963e4dd7a8a4f620a44f473b"></a>

Clears the value of JoinedMatchTimestamp_Optional and sets JoinedMatchTimestamp_IsSet to false.

#### `public inline FORCEINLINE void `[`SetJoinedMatchTimestampToNull`](#structFRHAPI__MatchPlayerResponse_1a69229815cce0a02de95d0fd851462700)`()` <a id="structFRHAPI__MatchPlayerResponse_1a69229815cce0a02de95d0fd851462700"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsJoinedMatchTimestampNull`](#structFRHAPI__MatchPlayerResponse_1af603d0fc9a4ca2ab0d0efe7b5e4ff484)`() const` <a id="structFRHAPI__MatchPlayerResponse_1af603d0fc9a4ca2ab0d0efe7b5e4ff484"></a>

Checks whether JoinedMatchTimestamp_Optional is set to null.

#### `public inline FORCEINLINE FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a97ced73f4b48f1a223183f82626e1b18)`()` <a id="structFRHAPI__MatchPlayerResponse_1a97ced73f4b48f1a223183f82626e1b18"></a>

Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1aa78d385712e51007fa1fdefe57189dd7)`() const` <a id="structFRHAPI__MatchPlayerResponse_1aa78d385712e51007fa1fdefe57189dd7"></a>

Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a1707538ff41894c7947a9620feb894d2)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a1707538ff41894c7947a9620feb894d2"></a>

Gets the value of LeftMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a8ade15dfb95c21804b35a8cef541ab56)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a8ade15dfb95c21804b35a8cef541ab56"></a>

Fills OutValue with the value of LeftMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1aac8eaa66e58fff91b7655ce293021827)`()` <a id="structFRHAPI__MatchPlayerResponse_1aac8eaa66e58fff91b7655ce293021827"></a>

Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerResponse_1aa82b2e0f1015580b05b2b9ade8277998)`() const` <a id="structFRHAPI__MatchPlayerResponse_1aa82b2e0f1015580b05b2b9ade8277998"></a>

Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1a72e2c7b551b0172b034c553258c52df6)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a72e2c7b551b0172b034c553258c52df6"></a>

Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1ae0f4c312bd99f71de6b1be9bed90c8dd)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1ae0f4c312bd99f71de6b1be9bed90c8dd"></a>

Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearLeftMatchTimestamp`](#structFRHAPI__MatchPlayerResponse_1ad464648877f8dae5abacf94f29da4725)`()` <a id="structFRHAPI__MatchPlayerResponse_1ad464648877f8dae5abacf94f29da4725"></a>

Clears the value of LeftMatchTimestamp_Optional and sets LeftMatchTimestamp_IsSet to false.

#### `public inline FORCEINLINE void `[`SetLeftMatchTimestampToNull`](#structFRHAPI__MatchPlayerResponse_1ad60fbaf5cbea6c91ccc4d643d0a2f7d1)`()` <a id="structFRHAPI__MatchPlayerResponse_1ad60fbaf5cbea6c91ccc4d643d0a2f7d1"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsLeftMatchTimestampNull`](#structFRHAPI__MatchPlayerResponse_1a0c660577ff05ddf6b8125ef64d1d3ad4)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a0c660577ff05ddf6b8125ef64d1d3ad4"></a>

Checks whether LeftMatchTimestamp_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1a92b734302a4a02f8632a3a98f5feddf1)`()` <a id="structFRHAPI__MatchPlayerResponse_1a92b734302a4a02f8632a3a98f5feddf1"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1a05b4ef491dcba5e5c0192161952d27b0)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a05b4ef491dcba5e5c0192161952d27b0"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1a8a238060d3d01ed13f0308c97c718210)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a8a238060d3d01ed13f0308c97c718210"></a>

Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1a421bcfe88770c04f4b3e957802517188)`(int32 & OutValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a421bcfe88770c04f4b3e957802517188"></a>

Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerResponse_1ab66e355890774e1b6ba6ba32c9d453a7)`()` <a id="structFRHAPI__MatchPlayerResponse_1ab66e355890774e1b6ba6ba32c9d453a7"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerResponse_1a0f9c01755dd1730342e0d5bcf9d2e578)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a0f9c01755dd1730342e0d5bcf9d2e578"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1abcd341595912c239c54d00c1f4a9b014)`(const int32 & NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1abcd341595912c239c54d00c1f4a9b014"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1a5985e4baefa452623a1a0b0c84b4fcba)`(int32 && NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a5985e4baefa452623a1a0b0c84b4fcba"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchPlayerResponse_1addff4d7cea40283e439f4587fd8dd5f0)`()` <a id="structFRHAPI__MatchPlayerResponse_1addff4d7cea40283e439f4587fd8dd5f0"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_DurationSeconds`](#structFRHAPI__MatchPlayerResponse_1aa3f971653f4ada2d797e4a3aa36864b2)`()` <a id="structFRHAPI__MatchPlayerResponse_1aa3f971653f4ada2d797e4a3aa36864b2"></a>

Returns the default value of DurationSeconds.

#### `public inline FORCEINLINE void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchPlayerResponse_1a1e05b34ea9f07c15e5e613b0cefbe214)`()` <a id="structFRHAPI__MatchPlayerResponse_1a1e05b34ea9f07c15e5e613b0cefbe214"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchPlayerResponse_1a0fb327571361f4fea4d87741477aac8f)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a0fb327571361f4fea4d87741477aac8f"></a>

Checks whether DurationSeconds_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerResponse_1a1eb29954f120d7edd0b7500c9ca609fc)`()` <a id="structFRHAPI__MatchPlayerResponse_1a1eb29954f120d7edd0b7500c9ca609fc"></a>

Gets the value of StartingRank_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerResponse_1a8b2aa7b67d3d6ff7cd1b0ae7718f5d5d)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a8b2aa7b67d3d6ff7cd1b0ae7718f5d5d"></a>

Gets the value of StartingRank_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerResponse_1a56a02763156065b031dabcde5004334e)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a56a02763156065b031dabcde5004334e"></a>

Gets the value of StartingRank_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStartingRank`](#structFRHAPI__MatchPlayerResponse_1a0a4c2ed7ddb596d1ad11cb0dcf8f60f4)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a0a4c2ed7ddb596d1ad11cb0dcf8f60f4"></a>

Fills OutValue with the value of StartingRank_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerResponse_1a166922f5a918267fb2124966a91a325c)`()` <a id="structFRHAPI__MatchPlayerResponse_1a166922f5a918267fb2124966a91a325c"></a>

Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerResponse_1a5718f72ebd92c204f92aaa53208babfe)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a5718f72ebd92c204f92aaa53208babfe"></a>

Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStartingRank`](#structFRHAPI__MatchPlayerResponse_1a6f9869346f4bc3ff9a28c1442b74a97a)`(const FString & NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a6f9869346f4bc3ff9a28c1442b74a97a"></a>

Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStartingRank`](#structFRHAPI__MatchPlayerResponse_1a6124286321d32401c141197cff665786)`(FString && NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a6124286321d32401c141197cff665786"></a>

Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true using move semantics.

#### `public inline void `[`ClearStartingRank`](#structFRHAPI__MatchPlayerResponse_1add83305f33427b1363ecab1178e979bc)`()` <a id="structFRHAPI__MatchPlayerResponse_1add83305f33427b1363ecab1178e979bc"></a>

Clears the value of StartingRank_Optional and sets StartingRank_IsSet to false.

#### `public inline FORCEINLINE void `[`SetStartingRankToNull`](#structFRHAPI__MatchPlayerResponse_1af6395759deaf065864e852d63375174c)`()` <a id="structFRHAPI__MatchPlayerResponse_1af6395759deaf065864e852d63375174c"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStartingRankNull`](#structFRHAPI__MatchPlayerResponse_1a04d762b7dd9ad96ebf82b1b4d4f1ee81)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a04d762b7dd9ad96ebf82b1b4d4f1ee81"></a>

Checks whether StartingRank_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1a1f598d58d9ed9a4cf3c581bb5ba3b1b9)`()` <a id="structFRHAPI__MatchPlayerResponse_1a1f598d58d9ed9a4cf3c581bb5ba3b1b9"></a>

Gets the value of FinishingRank_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1a7476aab8749a23bee23ec3a6adcfd271)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a7476aab8749a23bee23ec3a6adcfd271"></a>

Gets the value of FinishingRank_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1a3ca8fd1af5c6b7d3b6aff99916d5e7f2)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a3ca8fd1af5c6b7d3b6aff99916d5e7f2"></a>

Gets the value of FinishingRank_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1a4e5502ed3f1da3addbf90ee9ddece4c4)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a4e5502ed3f1da3addbf90ee9ddece4c4"></a>

Fills OutValue with the value of FinishingRank_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerResponse_1a9f7d109ccf0ec9cc2a12494e8e1b4d2c)`()` <a id="structFRHAPI__MatchPlayerResponse_1a9f7d109ccf0ec9cc2a12494e8e1b4d2c"></a>

Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerResponse_1a6875d4d2d2eacc13b5a90ca27ef44ca9)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a6875d4d2d2eacc13b5a90ca27ef44ca9"></a>

Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1adcd04060748aad289c33f752a259ce34)`(const FString & NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1adcd04060748aad289c33f752a259ce34"></a>

Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true.

#### `public inline FORCEINLINE void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerResponse_1a60e8fb6305a7ba349fbf3a6071c98993)`(FString && NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a60e8fb6305a7ba349fbf3a6071c98993"></a>

Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true using move semantics.

#### `public inline void `[`ClearFinishingRank`](#structFRHAPI__MatchPlayerResponse_1a1891eddfe78c0798aca9b36b10d9d394)`()` <a id="structFRHAPI__MatchPlayerResponse_1a1891eddfe78c0798aca9b36b10d9d394"></a>

Clears the value of FinishingRank_Optional and sets FinishingRank_IsSet to false.

#### `public inline FORCEINLINE void `[`SetFinishingRankToNull`](#structFRHAPI__MatchPlayerResponse_1a38911f0693fdd6d4be16470ac55c5078)`()` <a id="structFRHAPI__MatchPlayerResponse_1a38911f0693fdd6d4be16470ac55c5078"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsFinishingRankNull`](#structFRHAPI__MatchPlayerResponse_1adc8eb6bcfe0bc33d4217487a3dc31c1a)`() const` <a id="structFRHAPI__MatchPlayerResponse_1adc8eb6bcfe0bc33d4217487a3dc31c1a"></a>

Checks whether FinishingRank_Optional is set to null.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerResponse_1a211306e5fcd1e145ae24daf6dc3481e3)`()` <a id="structFRHAPI__MatchPlayerResponse_1a211306e5fcd1e145ae24daf6dc3481e3"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerResponse_1a2a0e97b16e68cdb6e2a3f413e4e8eeab)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a2a0e97b16e68cdb6e2a3f413e4e8eeab"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerResponse_1a7e15fda200f5a35afc66f3488a712ff5)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a7e15fda200f5a35afc66f3488a712ff5"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchPlayerResponse_1a8d3ea710d2c0cf85e78c06b88a5480ea)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchPlayerResponse_1a8d3ea710d2c0cf85e78c06b88a5480ea"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerResponse_1afa11d3b0100d046eeeec617a0ee4f715)`()` <a id="structFRHAPI__MatchPlayerResponse_1afa11d3b0100d046eeeec617a0ee4f715"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerResponse_1a826fae960c36cfeeb607bd76f972f234)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a826fae960c36cfeeb607bd76f972f234"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchPlayerResponse_1a0eea40f2654e4304f98d8262d52e94ab)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1a0eea40f2654e4304f98d8262d52e94ab"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchPlayerResponse_1ae4c214123762d68d628f2eafa481864c)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchPlayerResponse_1ae4c214123762d68d628f2eafa481864c"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchPlayerResponse_1a6e3f6713f85176398f037a160517bdf7)`()` <a id="structFRHAPI__MatchPlayerResponse_1a6e3f6713f85176398f037a160517bdf7"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__MatchPlayerResponse_1a0192028bf3c9abcb5081b70ec0584482)`()` <a id="structFRHAPI__MatchPlayerResponse_1a0192028bf3c9abcb5081b70ec0584482"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__MatchPlayerResponse_1a0df5903612a75795be23ccc63e87326f)`() const` <a id="structFRHAPI__MatchPlayerResponse_1a0df5903612a75795be23ccc63e87326f"></a>

Checks whether CustomData_Optional is set to null.

