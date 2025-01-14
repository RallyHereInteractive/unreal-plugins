---
title: RHAPI_MatchPlayerWithMatch
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchPlayerWithMatch`](#structFRHAPI__MatchPlayerWithMatch) | 

## struct `FRHAPI_MatchPlayerWithMatch` <a id="structFRHAPI__MatchPlayerWithMatch"></a>

```
struct FRHAPI_MatchPlayerWithMatch
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FDateTime `[`LastModifiedTimestamp_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a8f3d72b757e8cdc329c00eef6c84adbf) | Timestamp of when the resource was last modified.
`public bool `[`LastModifiedTimestamp_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a655231515385a05a2658201cdb48db76) | true if LastModifiedTimestamp_Optional has been set to a value
`public FDateTime `[`CreatedTimestamp_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a1a1d72a826c74444025747c8783ef4c5) | Timestamp of when the resource was created.
`public bool `[`CreatedTimestamp_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a2c1907e5c83e6b58ffffa372a6045ed2) | true if CreatedTimestamp_Optional has been set to a value
`public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__MatchPlayerWithMatch_1afcfd33f422d4b164440914ad78a91169) | 
`public bool `[`PlayerUuid_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1adc40603cee0df30e3b5912ccdf03fd43) | true if PlayerUuid_Optional has been set to a value
`public FString `[`TeamId_Optional`](#structFRHAPI__MatchPlayerWithMatch_1adb7e94958bc14d2ae43bfa3eb993be91) | 
`public bool `[`TeamId_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1aa0d3db755a44d6fe6e2f58ad95d1d33b) | true if TeamId_Optional has been set to a value
`public bool `[`TeamId_IsNull`](#structFRHAPI__MatchPlayerWithMatch_1afb0dba88b5177fcef7dc029bf347a62f) | true if TeamId_Optional has been explicitly set to null
`public FString `[`PartySessionId_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a33113c2d5725a1adc74d80f76185a088) | 
`public bool `[`PartySessionId_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1ae40280efae3736c53d0b5577303fcb9f) | true if PartySessionId_Optional has been set to a value
`public bool `[`PartySessionId_IsNull`](#structFRHAPI__MatchPlayerWithMatch_1a92c45f2edb4e883a8eb10032409076db) | true if PartySessionId_Optional has been explicitly set to null
`public int32 `[`Placement_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a468c203565f6fa49f9966520bde4d216) | 
`public bool `[`Placement_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a086fbb5cbce91eb0e14092ec37883887) | true if Placement_Optional has been set to a value
`public bool `[`Placement_IsNull`](#structFRHAPI__MatchPlayerWithMatch_1a0bd3938e10149c7553456932090a16bc) | true if Placement_Optional has been explicitly set to null
`public FDateTime `[`JoinedMatchTimestamp_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a0dfbc1fdc991d442dd78223dab75dbec) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`JoinedMatchTimestamp_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a5f30d808b4a4857d1529f90b85e2a86e) | true if JoinedMatchTimestamp_Optional has been set to a value
`public bool `[`JoinedMatchTimestamp_IsNull`](#structFRHAPI__MatchPlayerWithMatch_1a869e7c4efea3034013173a302de54175) | true if JoinedMatchTimestamp_Optional has been explicitly set to null
`public FDateTime `[`LeftMatchTimestamp_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a9c7e3fbc7f78f4f0a8b6ed640db4911e) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`LeftMatchTimestamp_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a49e709764291eb1d0534a201f6b2af28) | true if LeftMatchTimestamp_Optional has been set to a value
`public bool `[`LeftMatchTimestamp_IsNull`](#structFRHAPI__MatchPlayerWithMatch_1af31593a855d10b0eadc50151fcbeb304) | true if LeftMatchTimestamp_Optional has been explicitly set to null
`public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchPlayerWithMatch_1ac10fcb44774562dc81d1831e974358f4) | 
`public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a12c12511ca486db3b2d2174619779a84) | true if DurationSeconds_Optional has been set to a value
`public bool `[`DurationSeconds_IsNull`](#structFRHAPI__MatchPlayerWithMatch_1a9579cc1c3ad0d3f59de5285f082cccc0) | true if DurationSeconds_Optional has been explicitly set to null
`public FString `[`StartingRank_Optional`](#structFRHAPI__MatchPlayerWithMatch_1afe7bfaa286e20e0f3e3f40b2b5327986) | 
`public bool `[`StartingRank_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1aeec84d6aa59c65e6f9e6f8221db26a94) | true if StartingRank_Optional has been set to a value
`public bool `[`StartingRank_IsNull`](#structFRHAPI__MatchPlayerWithMatch_1ae8df11d26e026fd9a572a4b8376f20f3) | true if StartingRank_Optional has been explicitly set to null
`public FString `[`FinishingRank_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a9a7bb6bbd3a6c04c00acffdd690fd2ee) | 
`public bool `[`FinishingRank_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a0239721c1257495159b5a922e6a9c055) | true if FinishingRank_Optional has been set to a value
`public bool `[`FinishingRank_IsNull`](#structFRHAPI__MatchPlayerWithMatch_1ac11ccf0f9c745e4e08d73e311389fc93) | true if FinishingRank_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a9236a7a919027385f751990607ef828d) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a1d6bdbf177397a5d6c436d159aa0cd98) | true if CustomData_Optional has been set to a value
`public bool `[`CustomData_IsNull`](#structFRHAPI__MatchPlayerWithMatch_1a229e6efbe70354ef6f1ca7d62f2479c9) | true if CustomData_Optional has been explicitly set to null
`public `[`FRHAPI_MatchValuesOnly`](RHAPI_MatchValuesOnly.md#structFRHAPI__MatchValuesOnly)` `[`Match`](#structFRHAPI__MatchPlayerWithMatch_1ade22f8275e0227e90087168e4c044507) | 
`public virtual bool `[`FromJson`](#structFRHAPI__MatchPlayerWithMatch_1a73baa52cc061a63b165b01d05b144e33)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchPlayerWithMatch_1a0012a96fae5d1d9380ae4a7e1c527ec0)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1ae8435d6cb1f07966f589667dc00704a5)`()` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a5715575885556665cee02af1efc512d7)`() const` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a20df05a2e8e2fb1c22d8ded79a5785d8)`(const FDateTime & DefaultValue) const` | Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1aa4afabce04335565c0121bf0a57e6ea7)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1aa60e6e8e5a6dc1c58e8a5d8fd729e1d1)`()` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a5eb726026c75957d29c066b8ff9f7ce8)`() const` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1ac896deefbc8b4e6e7ca0e1e975fab9fe)`(const FDateTime & NewValue)` | Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.
`public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1af0000a1bfdfe02681a68885e77dedaff)`(FDateTime && NewValue)` | Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a8ce696255a3018379356e8c2fe0cc5a2)`()` | Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.
`public inline bool `[`IsLastModifiedTimestampSet`](#structFRHAPI__MatchPlayerWithMatch_1afb04a89782ed0e515ade68de8863eba8)`() const` | Checks whether LastModifiedTimestamp_Optional has been set.
`public inline FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1aeda91743bcfb61a6a99bdb29d41b3e3b)`()` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a0c9be9ea07f69ab4351eb52af838a563)`() const` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a28d074c4cd90212361c8ee1e2bc1e3c7)`(const FDateTime & DefaultValue) const` | Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a184ff0f198843fe340875d5b12c332d5)`(FDateTime & OutValue) const` | Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1aafc9108160f7f80fe749affd7bae5374)`()` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1af0c636a44c7977a12309f2bb190508af)`() const` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a49f01a9ff7ef49203ede3363a6724f3c)`(const FDateTime & NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.
`public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a2e38b08bfae81b59f446f3c4dd478fa2)`(FDateTime && NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a314a508998777fc801cca1c11828fc24)`()` | Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.
`public inline bool `[`IsCreatedTimestampSet`](#structFRHAPI__MatchPlayerWithMatch_1af3e1bcff056587910bd565f409d929a0)`() const` | Checks whether CreatedTimestamp_Optional has been set.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1aadd976ec70317acd54891b8aa6eaccff)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1a8dd1b91aa1799fab0dd9e5a4989cd773)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1aaac9c33951d8eb48043200116fde93d5)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1a291626fa4d01c1136eed79a881a2dae9)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerWithMatch_1ae7f326e41e3de113bb92bc3c8fd057e8)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a53a6cdfd4a8f4a1b5b9dc91c237924b3)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1a44d71c86b971e39d517c96fc1876b7aa)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1a07d8ef764e646f6c6426681dbe852d56)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1a3dbf12033fe77ebad938f4f8bd00e4b9)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__MatchPlayerWithMatch_1a24c66e91a1ab09d0b730fbf0c0bdd28b)`() const` | Checks whether PlayerUuid_Optional has been set.
`public inline FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1a38a51cf56f5f0dce074dffc7a74cdb6b)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1a7534f772d0224cf795407ac44d848832)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1a5602ca85db185205348f181900dae9c8)`(const FString & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1a86721154ff0747defe41825a5d1bc932)`(FString & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a387f8f9a807348d79680f49cd4553d6a)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a95daccf6cc5fef65432eeed52a40b804)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1a543342c78a3ec048e4a6f04c49ec8788)`(const FString & NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline void `[`SetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1a59f395d8164b4dd2141179d789955374)`(FString && NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.
`public inline void `[`ClearTeamId`](#structFRHAPI__MatchPlayerWithMatch_1ae786e20e4ef264737dfdd652ffa8dd53)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline bool `[`IsTeamIdSet`](#structFRHAPI__MatchPlayerWithMatch_1a6e619fd7259d7d392df6f6248046097f)`() const` | Checks whether TeamId_Optional has been set.
`public inline void `[`SetTeamIdToNull`](#structFRHAPI__MatchPlayerWithMatch_1ae083661b3e0ce148db311a9e33b062fa)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsTeamIdNull`](#structFRHAPI__MatchPlayerWithMatch_1ab528327a5665e74c324ffbb02390a267)`() const` | Checks whether TeamId_Optional is set to null.
`public inline FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1a54e34a784a95431b8463fdafea66bcf6)`()` | Gets the value of PartySessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1a7140b317897937c6953882919e7ecb28)`() const` | Gets the value of PartySessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1a282943979d67239e3e225695faf7944b)`(const FString & DefaultValue) const` | Gets the value of PartySessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1ad5a3639b61a7215e15b69c18a1467f65)`(FString & OutValue) const` | Fills OutValue with the value of PartySessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a324b24a122efbfa7cbeaec675ea168c2)`()` | Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a1b6e1b1fd6649abd538ab07d1e2d1f51)`() const` | Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1ab9b0cad7a58ec2060b0d0c054206cb3e)`(const FString & NewValue)` | Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true.
`public inline void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1a1053b144bcfd6551cb8db4981b92730f)`(FString && NewValue)` | Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true using move semantics.
`public inline void `[`ClearPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1ab0c9bafe1fe1b0857eae325acb587bb8)`()` | Clears the value of PartySessionId_Optional and sets PartySessionId_IsSet to false.
`public inline bool `[`IsPartySessionIdSet`](#structFRHAPI__MatchPlayerWithMatch_1a1a58ad700739cd13e6c22eb245987a99)`() const` | Checks whether PartySessionId_Optional has been set.
`public inline void `[`SetPartySessionIdToNull`](#structFRHAPI__MatchPlayerWithMatch_1ae4af270d7943fa342129ffae9ee13095)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPartySessionIdNull`](#structFRHAPI__MatchPlayerWithMatch_1ad808f5bd450cea92c9c9beffea54e837)`() const` | Checks whether PartySessionId_Optional is set to null.
`public inline int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a85ff7afecd63d99b936b77417f3f2803)`()` | Gets the value of Placement_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1acecef59e816ff90eec7403444158db14)`() const` | Gets the value of Placement_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a112a0a5a059122f24dab0f45580eccd4)`(const int32 & DefaultValue) const` | Gets the value of Placement_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a5bc2bdb587241bfe48df47c63cb15cd7)`(int32 & OutValue) const` | Fills OutValue with the value of Placement_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a56e4c66004fed51f42f8eba5789129a0)`()` | Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a16901e3fa7d564aa425f8cb1c77a0502)`() const` | Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1af3dad4578613aee6e6838c03bf632fa1)`(const int32 & NewValue)` | Sets the value of Placement_Optional and also sets Placement_IsSet to true.
`public inline void `[`SetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a286aebf583cfe4c3292697ecc1c18bed)`(int32 && NewValue)` | Sets the value of Placement_Optional and also sets Placement_IsSet to true using move semantics.
`public inline void `[`ClearPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a5d88bbe1e747ed4fde8a09646bed27d6)`()` | Clears the value of Placement_Optional and sets Placement_IsSet to false.
`public inline bool `[`IsPlacementSet`](#structFRHAPI__MatchPlayerWithMatch_1aea3af1b27f945c81e6a330c2b1047442)`() const` | Checks whether Placement_Optional has been set.
`public inline bool `[`IsPlacementDefaultValue`](#structFRHAPI__MatchPlayerWithMatch_1adbd55a069d0102cbe9e75d04dc874428)`() const` | Returns true if Placement_Optional is set and matches the default value.
`public inline void `[`SetPlacementToDefault`](#structFRHAPI__MatchPlayerWithMatch_1afe2d5e1393af77f79778e832a6e124e2)`()` | Sets the value of Placement_Optional to its default and also sets Placement_IsSet to true.
`public inline void `[`SetPlacementToNull`](#structFRHAPI__MatchPlayerWithMatch_1a152357afbbbd4c0656037a23867245d9)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPlacementNull`](#structFRHAPI__MatchPlayerWithMatch_1a2aabaddbafd7b0e9fbb53de1ed5ab714)`() const` | Checks whether Placement_Optional is set to null.
`public inline FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1ae11aa349ba26cd4441ba81968bfc114a)`()` | Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a43ca682cd76eca72e387c75d948ea885)`() const` | Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a455ef2b74ec33572f80c7553f39eaccb)`(const FDateTime & DefaultValue) const` | Gets the value of JoinedMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a9dbec70c5c63a41e27b2f6e093c54705)`(FDateTime & OutValue) const` | Fills OutValue with the value of JoinedMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1aec99a9a7db72abbda99ba5d8550d1fd4)`()` | Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a752165815729b912a3c643e59b744ba3)`() const` | Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a43617f01e00b3544107f389432254569)`(const FDateTime & NewValue)` | Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true.
`public inline void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1aa5730588451bc5c240f59fbe3ac12aba)`(FDateTime && NewValue)` | Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1abae34d5cfc3bff2dd51e229e96a43855)`()` | Clears the value of JoinedMatchTimestamp_Optional and sets JoinedMatchTimestamp_IsSet to false.
`public inline bool `[`IsJoinedMatchTimestampSet`](#structFRHAPI__MatchPlayerWithMatch_1a9c8460824d853ba2c2985aeb645c2923)`() const` | Checks whether JoinedMatchTimestamp_Optional has been set.
`public inline void `[`SetJoinedMatchTimestampToNull`](#structFRHAPI__MatchPlayerWithMatch_1aead749e49041dc9826524503db6ae7ca)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsJoinedMatchTimestampNull`](#structFRHAPI__MatchPlayerWithMatch_1aaeeb63db1b8a4911add3e77b4214fd35)`() const` | Checks whether JoinedMatchTimestamp_Optional is set to null.
`public inline FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a058719708858bd3007ed93e6a19a5181)`()` | Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1ab0dab02e22f80c1ae6f0c90071b1cc75)`() const` | Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a9dd9de7e8a29d867008ef3f836bae425)`(const FDateTime & DefaultValue) const` | Gets the value of LeftMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a9e52d9cd8e77028e90510cf9d7dbec39)`(FDateTime & OutValue) const` | Fills OutValue with the value of LeftMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a2106588f2ce553a8afd622e1bc7367d0)`()` | Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a04306aaa9505425c676ecdcee633428f)`() const` | Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a0b7b8bbc0f7c6c4b3622fc79b41b8446)`(const FDateTime & NewValue)` | Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true.
`public inline void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a674ea543a942f78d4b2da158b7a5cdac)`(FDateTime && NewValue)` | Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a9824e1b54f752e7cc9936942826fd2d0)`()` | Clears the value of LeftMatchTimestamp_Optional and sets LeftMatchTimestamp_IsSet to false.
`public inline bool `[`IsLeftMatchTimestampSet`](#structFRHAPI__MatchPlayerWithMatch_1aad2c47fdcb61d650db0d205bade3fd22)`() const` | Checks whether LeftMatchTimestamp_Optional has been set.
`public inline void `[`SetLeftMatchTimestampToNull`](#structFRHAPI__MatchPlayerWithMatch_1a38ab43d6de846916383d4b6e5a84d4d1)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsLeftMatchTimestampNull`](#structFRHAPI__MatchPlayerWithMatch_1af2d81cd3b1c3f9c32852452e9aba4995)`() const` | Checks whether LeftMatchTimestamp_Optional is set to null.
`public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a5fc80965dc248c328ae3c33bf3235bff)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a4153f552fbe8b24b2370bfb7727867c7)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a9d76640056c05a6eee018d91e7e6b050)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a2a7f8c81e681d721c99ff311c01c9c71)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerWithMatch_1aa485f048e53e5741c96349f973d423c0)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerWithMatch_1af821ac001bf979c2fcaf8098e14e0eac)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a128737ce3f6a7d9205182a2c9b68becc)`(const int32 & NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a468b67f772387f903d1a2dfd19685889)`(int32 && NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a0ecdc5e12f71bc0d02f402229205d3c4)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline bool `[`IsDurationSecondsSet`](#structFRHAPI__MatchPlayerWithMatch_1a0e015ad71e0d15540580b134fb73b7e4)`() const` | Checks whether DurationSeconds_Optional has been set.
`public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchPlayerWithMatch_1a29ba09c1078ffcf1f88a15634cdee9a2)`() const` | Returns true if DurationSeconds_Optional is set and matches the default value.
`public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchPlayerWithMatch_1ab273feafe8a95a5d26528a655a99dec6)`()` | Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.
`public inline void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchPlayerWithMatch_1a9041027bce8e4adc482f04cbbfff3550)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchPlayerWithMatch_1a745d4c2891de7a027a70bb963f00688d)`() const` | Checks whether DurationSeconds_Optional is set to null.
`public inline FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1a4b8bed811ed3222d76b4287b0172d0e2)`()` | Gets the value of StartingRank_Optional, regardless of it having been set.
`public inline const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1a883d989c23cd4d7dff71451c0a6a384a)`() const` | Gets the value of StartingRank_Optional, regardless of it having been set.
`public inline const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1a39d14d43f8de03c87c76a001e0f4bf22)`(const FString & DefaultValue) const` | Gets the value of StartingRank_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1a235f3a980254e68a2aa2c310790343f6)`(FString & OutValue) const` | Fills OutValue with the value of StartingRank_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a4b9fa660fa16fba23cd87d01994a8b1a)`()` | Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a969c32f934fafe5223b298c9caee2685)`() const` | Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1a9d4cb7e4a513ad834596c5e47be79644)`(const FString & NewValue)` | Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true.
`public inline void `[`SetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1af7794dcd90ba383e8765121711000ea4)`(FString && NewValue)` | Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true using move semantics.
`public inline void `[`ClearStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1aa3f553837d1d00f98f5b8288c5d9008f)`()` | Clears the value of StartingRank_Optional and sets StartingRank_IsSet to false.
`public inline bool `[`IsStartingRankSet`](#structFRHAPI__MatchPlayerWithMatch_1af01d4f3a21246f8b62d6ace7a5f4ffe2)`() const` | Checks whether StartingRank_Optional has been set.
`public inline void `[`SetStartingRankToNull`](#structFRHAPI__MatchPlayerWithMatch_1a895e0027c22723cce2d922468fb00472)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStartingRankNull`](#structFRHAPI__MatchPlayerWithMatch_1a4c1c1e3d76d70e288b29249f12fabebe)`() const` | Checks whether StartingRank_Optional is set to null.
`public inline FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a5b6e3dcbf017a66604b3fc1a500c42aa)`()` | Gets the value of FinishingRank_Optional, regardless of it having been set.
`public inline const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1aca1bd756ea4d2fafb5609264a6914531)`() const` | Gets the value of FinishingRank_Optional, regardless of it having been set.
`public inline const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a68da70c7d77f1a05e3fbe756229f5f60)`(const FString & DefaultValue) const` | Gets the value of FinishingRank_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a12da2ec0385822aff5fb80cf6a5b0f67)`(FString & OutValue) const` | Fills OutValue with the value of FinishingRank_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerWithMatch_1ab181ed2350754de6b00e114525ea7ab2)`()` | Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerWithMatch_1ad52976672bd302dea1d5b0fd0e4e972e)`() const` | Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1aee5982d705028644e7a64a69b31551e2)`(const FString & NewValue)` | Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true.
`public inline void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a21f4f6753ef98c8a52ccdc66a4831900)`(FString && NewValue)` | Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true using move semantics.
`public inline void `[`ClearFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a82d8cbc73e9caa7fb977cba81ec493f1)`()` | Clears the value of FinishingRank_Optional and sets FinishingRank_IsSet to false.
`public inline bool `[`IsFinishingRankSet`](#structFRHAPI__MatchPlayerWithMatch_1a21a97a5879089235f12fec80c13494ab)`() const` | Checks whether FinishingRank_Optional has been set.
`public inline void `[`SetFinishingRankToNull`](#structFRHAPI__MatchPlayerWithMatch_1acca887350208a2e84bac524780cebb5c)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFinishingRankNull`](#structFRHAPI__MatchPlayerWithMatch_1ad31f3d5d568d610cd5b1972f5c815798)`() const` | Checks whether FinishingRank_Optional is set to null.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a75866908821e563b2490d12b3f8a04cb)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a3dbbc9fa9b42a7390d745e3453caa158)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a5994482c0d065084c14c605cbb60a223)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a76e28c3e446b4e2a4d8b825299926e06)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerWithMatch_1ad8be9216376a41d3193d37f12cf25328)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a8b6cfdf57fb7fa877b8f44aff2944d4a)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a266d9cfe2304e45730a39632b837cc6f)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a08b041e111c8479e6480a119856f841e)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a64ebb116326952d6dbcc9e93345e9132)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchPlayerWithMatch_1a555ad34975502125e34b39a9919de463)`() const` | Checks whether CustomData_Optional has been set.
`public inline void `[`SetCustomDataToNull`](#structFRHAPI__MatchPlayerWithMatch_1a5f96e9cb61cf480c1092ce0003553d86)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCustomDataNull`](#structFRHAPI__MatchPlayerWithMatch_1abb8bd04666a8963fee4331c92337bc3d)`() const` | Checks whether CustomData_Optional is set to null.
`public inline `[`FRHAPI_MatchValuesOnly`](RHAPI_MatchValuesOnly.md#structFRHAPI__MatchValuesOnly)` & `[`GetMatch`](#structFRHAPI__MatchPlayerWithMatch_1a8f8e585396d7c8c24abff65707f51025)`()` | Gets the value of Match.
`public inline const `[`FRHAPI_MatchValuesOnly`](RHAPI_MatchValuesOnly.md#structFRHAPI__MatchValuesOnly)` & `[`GetMatch`](#structFRHAPI__MatchPlayerWithMatch_1af9ef846645ea10783d343b1829faf60d)`() const` | Gets the value of Match.
`public inline void `[`SetMatch`](#structFRHAPI__MatchPlayerWithMatch_1aca7f5fae110172a881481d5d0ff53afd)`(const `[`FRHAPI_MatchValuesOnly`](RHAPI_MatchValuesOnly.md#structFRHAPI__MatchValuesOnly)` & NewValue)` | Sets the value of Match.
`public inline void `[`SetMatch`](#structFRHAPI__MatchPlayerWithMatch_1a6537e66fb30973c75eb43b54ca47c5a7)`(`[`FRHAPI_MatchValuesOnly`](RHAPI_MatchValuesOnly.md#structFRHAPI__MatchValuesOnly)` && NewValue)` | Sets the value of Match using move semantics.

### Members

#### `public FDateTime `[`LastModifiedTimestamp_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a8f3d72b757e8cdc329c00eef6c84adbf) <a id="structFRHAPI__MatchPlayerWithMatch_1a8f3d72b757e8cdc329c00eef6c84adbf"></a>

Timestamp of when the resource was last modified.

#### `public bool `[`LastModifiedTimestamp_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a655231515385a05a2658201cdb48db76) <a id="structFRHAPI__MatchPlayerWithMatch_1a655231515385a05a2658201cdb48db76"></a>

true if LastModifiedTimestamp_Optional has been set to a value

#### `public FDateTime `[`CreatedTimestamp_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a1a1d72a826c74444025747c8783ef4c5) <a id="structFRHAPI__MatchPlayerWithMatch_1a1a1d72a826c74444025747c8783ef4c5"></a>

Timestamp of when the resource was created.

#### `public bool `[`CreatedTimestamp_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a2c1907e5c83e6b58ffffa372a6045ed2) <a id="structFRHAPI__MatchPlayerWithMatch_1a2c1907e5c83e6b58ffffa372a6045ed2"></a>

true if CreatedTimestamp_Optional has been set to a value

#### `public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__MatchPlayerWithMatch_1afcfd33f422d4b164440914ad78a91169) <a id="structFRHAPI__MatchPlayerWithMatch_1afcfd33f422d4b164440914ad78a91169"></a>

#### `public bool `[`PlayerUuid_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1adc40603cee0df30e3b5912ccdf03fd43) <a id="structFRHAPI__MatchPlayerWithMatch_1adc40603cee0df30e3b5912ccdf03fd43"></a>

true if PlayerUuid_Optional has been set to a value

#### `public FString `[`TeamId_Optional`](#structFRHAPI__MatchPlayerWithMatch_1adb7e94958bc14d2ae43bfa3eb993be91) <a id="structFRHAPI__MatchPlayerWithMatch_1adb7e94958bc14d2ae43bfa3eb993be91"></a>

#### `public bool `[`TeamId_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1aa0d3db755a44d6fe6e2f58ad95d1d33b) <a id="structFRHAPI__MatchPlayerWithMatch_1aa0d3db755a44d6fe6e2f58ad95d1d33b"></a>

true if TeamId_Optional has been set to a value

#### `public bool `[`TeamId_IsNull`](#structFRHAPI__MatchPlayerWithMatch_1afb0dba88b5177fcef7dc029bf347a62f) <a id="structFRHAPI__MatchPlayerWithMatch_1afb0dba88b5177fcef7dc029bf347a62f"></a>

true if TeamId_Optional has been explicitly set to null

#### `public FString `[`PartySessionId_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a33113c2d5725a1adc74d80f76185a088) <a id="structFRHAPI__MatchPlayerWithMatch_1a33113c2d5725a1adc74d80f76185a088"></a>

#### `public bool `[`PartySessionId_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1ae40280efae3736c53d0b5577303fcb9f) <a id="structFRHAPI__MatchPlayerWithMatch_1ae40280efae3736c53d0b5577303fcb9f"></a>

true if PartySessionId_Optional has been set to a value

#### `public bool `[`PartySessionId_IsNull`](#structFRHAPI__MatchPlayerWithMatch_1a92c45f2edb4e883a8eb10032409076db) <a id="structFRHAPI__MatchPlayerWithMatch_1a92c45f2edb4e883a8eb10032409076db"></a>

true if PartySessionId_Optional has been explicitly set to null

#### `public int32 `[`Placement_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a468c203565f6fa49f9966520bde4d216) <a id="structFRHAPI__MatchPlayerWithMatch_1a468c203565f6fa49f9966520bde4d216"></a>

#### `public bool `[`Placement_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a086fbb5cbce91eb0e14092ec37883887) <a id="structFRHAPI__MatchPlayerWithMatch_1a086fbb5cbce91eb0e14092ec37883887"></a>

true if Placement_Optional has been set to a value

#### `public bool `[`Placement_IsNull`](#structFRHAPI__MatchPlayerWithMatch_1a0bd3938e10149c7553456932090a16bc) <a id="structFRHAPI__MatchPlayerWithMatch_1a0bd3938e10149c7553456932090a16bc"></a>

true if Placement_Optional has been explicitly set to null

#### `public FDateTime `[`JoinedMatchTimestamp_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a0dfbc1fdc991d442dd78223dab75dbec) <a id="structFRHAPI__MatchPlayerWithMatch_1a0dfbc1fdc991d442dd78223dab75dbec"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`JoinedMatchTimestamp_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a5f30d808b4a4857d1529f90b85e2a86e) <a id="structFRHAPI__MatchPlayerWithMatch_1a5f30d808b4a4857d1529f90b85e2a86e"></a>

true if JoinedMatchTimestamp_Optional has been set to a value

#### `public bool `[`JoinedMatchTimestamp_IsNull`](#structFRHAPI__MatchPlayerWithMatch_1a869e7c4efea3034013173a302de54175) <a id="structFRHAPI__MatchPlayerWithMatch_1a869e7c4efea3034013173a302de54175"></a>

true if JoinedMatchTimestamp_Optional has been explicitly set to null

#### `public FDateTime `[`LeftMatchTimestamp_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a9c7e3fbc7f78f4f0a8b6ed640db4911e) <a id="structFRHAPI__MatchPlayerWithMatch_1a9c7e3fbc7f78f4f0a8b6ed640db4911e"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`LeftMatchTimestamp_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a49e709764291eb1d0534a201f6b2af28) <a id="structFRHAPI__MatchPlayerWithMatch_1a49e709764291eb1d0534a201f6b2af28"></a>

true if LeftMatchTimestamp_Optional has been set to a value

#### `public bool `[`LeftMatchTimestamp_IsNull`](#structFRHAPI__MatchPlayerWithMatch_1af31593a855d10b0eadc50151fcbeb304) <a id="structFRHAPI__MatchPlayerWithMatch_1af31593a855d10b0eadc50151fcbeb304"></a>

true if LeftMatchTimestamp_Optional has been explicitly set to null

#### `public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchPlayerWithMatch_1ac10fcb44774562dc81d1831e974358f4) <a id="structFRHAPI__MatchPlayerWithMatch_1ac10fcb44774562dc81d1831e974358f4"></a>

#### `public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a12c12511ca486db3b2d2174619779a84) <a id="structFRHAPI__MatchPlayerWithMatch_1a12c12511ca486db3b2d2174619779a84"></a>

true if DurationSeconds_Optional has been set to a value

#### `public bool `[`DurationSeconds_IsNull`](#structFRHAPI__MatchPlayerWithMatch_1a9579cc1c3ad0d3f59de5285f082cccc0) <a id="structFRHAPI__MatchPlayerWithMatch_1a9579cc1c3ad0d3f59de5285f082cccc0"></a>

true if DurationSeconds_Optional has been explicitly set to null

#### `public FString `[`StartingRank_Optional`](#structFRHAPI__MatchPlayerWithMatch_1afe7bfaa286e20e0f3e3f40b2b5327986) <a id="structFRHAPI__MatchPlayerWithMatch_1afe7bfaa286e20e0f3e3f40b2b5327986"></a>

#### `public bool `[`StartingRank_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1aeec84d6aa59c65e6f9e6f8221db26a94) <a id="structFRHAPI__MatchPlayerWithMatch_1aeec84d6aa59c65e6f9e6f8221db26a94"></a>

true if StartingRank_Optional has been set to a value

#### `public bool `[`StartingRank_IsNull`](#structFRHAPI__MatchPlayerWithMatch_1ae8df11d26e026fd9a572a4b8376f20f3) <a id="structFRHAPI__MatchPlayerWithMatch_1ae8df11d26e026fd9a572a4b8376f20f3"></a>

true if StartingRank_Optional has been explicitly set to null

#### `public FString `[`FinishingRank_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a9a7bb6bbd3a6c04c00acffdd690fd2ee) <a id="structFRHAPI__MatchPlayerWithMatch_1a9a7bb6bbd3a6c04c00acffdd690fd2ee"></a>

#### `public bool `[`FinishingRank_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a0239721c1257495159b5a922e6a9c055) <a id="structFRHAPI__MatchPlayerWithMatch_1a0239721c1257495159b5a922e6a9c055"></a>

true if FinishingRank_Optional has been set to a value

#### `public bool `[`FinishingRank_IsNull`](#structFRHAPI__MatchPlayerWithMatch_1ac11ccf0f9c745e4e08d73e311389fc93) <a id="structFRHAPI__MatchPlayerWithMatch_1ac11ccf0f9c745e4e08d73e311389fc93"></a>

true if FinishingRank_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a9236a7a919027385f751990607ef828d) <a id="structFRHAPI__MatchPlayerWithMatch_1a9236a7a919027385f751990607ef828d"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a1d6bdbf177397a5d6c436d159aa0cd98) <a id="structFRHAPI__MatchPlayerWithMatch_1a1d6bdbf177397a5d6c436d159aa0cd98"></a>

true if CustomData_Optional has been set to a value

#### `public bool `[`CustomData_IsNull`](#structFRHAPI__MatchPlayerWithMatch_1a229e6efbe70354ef6f1ca7d62f2479c9) <a id="structFRHAPI__MatchPlayerWithMatch_1a229e6efbe70354ef6f1ca7d62f2479c9"></a>

true if CustomData_Optional has been explicitly set to null

#### `public `[`FRHAPI_MatchValuesOnly`](RHAPI_MatchValuesOnly.md#structFRHAPI__MatchValuesOnly)` `[`Match`](#structFRHAPI__MatchPlayerWithMatch_1ade22f8275e0227e90087168e4c044507) <a id="structFRHAPI__MatchPlayerWithMatch_1ade22f8275e0227e90087168e4c044507"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchPlayerWithMatch_1a73baa52cc061a63b165b01d05b144e33)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a73baa52cc061a63b165b01d05b144e33"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchPlayerWithMatch_1a0012a96fae5d1d9380ae4a7e1c527ec0)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a0012a96fae5d1d9380ae4a7e1c527ec0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1ae8435d6cb1f07966f589667dc00704a5)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1ae8435d6cb1f07966f589667dc00704a5"></a>

Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a5715575885556665cee02af1efc512d7)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a5715575885556665cee02af1efc512d7"></a>

Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a20df05a2e8e2fb1c22d8ded79a5785d8)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a20df05a2e8e2fb1c22d8ded79a5785d8"></a>

Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1aa4afabce04335565c0121bf0a57e6ea7)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1aa4afabce04335565c0121bf0a57e6ea7"></a>

Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1aa60e6e8e5a6dc1c58e8a5d8fd729e1d1)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1aa60e6e8e5a6dc1c58e8a5d8fd729e1d1"></a>

Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a5eb726026c75957d29c066b8ff9f7ce8)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a5eb726026c75957d29c066b8ff9f7ce8"></a>

Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1ac896deefbc8b4e6e7ca0e1e975fab9fe)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1ac896deefbc8b4e6e7ca0e1e975fab9fe"></a>

Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.

#### `public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1af0000a1bfdfe02681a68885e77dedaff)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1af0000a1bfdfe02681a68885e77dedaff"></a>

Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a8ce696255a3018379356e8c2fe0cc5a2)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a8ce696255a3018379356e8c2fe0cc5a2"></a>

Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.

#### `public inline bool `[`IsLastModifiedTimestampSet`](#structFRHAPI__MatchPlayerWithMatch_1afb04a89782ed0e515ade68de8863eba8)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1afb04a89782ed0e515ade68de8863eba8"></a>

Checks whether LastModifiedTimestamp_Optional has been set.

#### `public inline FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1aeda91743bcfb61a6a99bdb29d41b3e3b)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1aeda91743bcfb61a6a99bdb29d41b3e3b"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a0c9be9ea07f69ab4351eb52af838a563)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a0c9be9ea07f69ab4351eb52af838a563"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a28d074c4cd90212361c8ee1e2bc1e3c7)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a28d074c4cd90212361c8ee1e2bc1e3c7"></a>

Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a184ff0f198843fe340875d5b12c332d5)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a184ff0f198843fe340875d5b12c332d5"></a>

Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1aafc9108160f7f80fe749affd7bae5374)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1aafc9108160f7f80fe749affd7bae5374"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1af0c636a44c7977a12309f2bb190508af)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1af0c636a44c7977a12309f2bb190508af"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a49f01a9ff7ef49203ede3363a6724f3c)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a49f01a9ff7ef49203ede3363a6724f3c"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.

#### `public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a2e38b08bfae81b59f446f3c4dd478fa2)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a2e38b08bfae81b59f446f3c4dd478fa2"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a314a508998777fc801cca1c11828fc24)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a314a508998777fc801cca1c11828fc24"></a>

Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.

#### `public inline bool `[`IsCreatedTimestampSet`](#structFRHAPI__MatchPlayerWithMatch_1af3e1bcff056587910bd565f409d929a0)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1af3e1bcff056587910bd565f409d929a0"></a>

Checks whether CreatedTimestamp_Optional has been set.

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1aadd976ec70317acd54891b8aa6eaccff)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1aadd976ec70317acd54891b8aa6eaccff"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1a8dd1b91aa1799fab0dd9e5a4989cd773)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a8dd1b91aa1799fab0dd9e5a4989cd773"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1aaac9c33951d8eb48043200116fde93d5)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1aaac9c33951d8eb48043200116fde93d5"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1a291626fa4d01c1136eed79a881a2dae9)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a291626fa4d01c1136eed79a881a2dae9"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerWithMatch_1ae7f326e41e3de113bb92bc3c8fd057e8)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1ae7f326e41e3de113bb92bc3c8fd057e8"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a53a6cdfd4a8f4a1b5b9dc91c237924b3)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a53a6cdfd4a8f4a1b5b9dc91c237924b3"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1a44d71c86b971e39d517c96fc1876b7aa)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a44d71c86b971e39d517c96fc1876b7aa"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1a07d8ef764e646f6c6426681dbe852d56)`(FGuid && NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a07d8ef764e646f6c6426681dbe852d56"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1a3dbf12033fe77ebad938f4f8bd00e4b9)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a3dbf12033fe77ebad938f4f8bd00e4b9"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__MatchPlayerWithMatch_1a24c66e91a1ab09d0b730fbf0c0bdd28b)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a24c66e91a1ab09d0b730fbf0c0bdd28b"></a>

Checks whether PlayerUuid_Optional has been set.

#### `public inline FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1a38a51cf56f5f0dce074dffc7a74cdb6b)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a38a51cf56f5f0dce074dffc7a74cdb6b"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1a7534f772d0224cf795407ac44d848832)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a7534f772d0224cf795407ac44d848832"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1a5602ca85db185205348f181900dae9c8)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a5602ca85db185205348f181900dae9c8"></a>

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1a86721154ff0747defe41825a5d1bc932)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a86721154ff0747defe41825a5d1bc932"></a>

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a387f8f9a807348d79680f49cd4553d6a)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a387f8f9a807348d79680f49cd4553d6a"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a95daccf6cc5fef65432eeed52a40b804)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a95daccf6cc5fef65432eeed52a40b804"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1a543342c78a3ec048e4a6f04c49ec8788)`(const FString & NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a543342c78a3ec048e4a6f04c49ec8788"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.

#### `public inline void `[`SetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1a59f395d8164b4dd2141179d789955374)`(FString && NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a59f395d8164b4dd2141179d789955374"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.

#### `public inline void `[`ClearTeamId`](#structFRHAPI__MatchPlayerWithMatch_1ae786e20e4ef264737dfdd652ffa8dd53)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1ae786e20e4ef264737dfdd652ffa8dd53"></a>

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.

#### `public inline bool `[`IsTeamIdSet`](#structFRHAPI__MatchPlayerWithMatch_1a6e619fd7259d7d392df6f6248046097f)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a6e619fd7259d7d392df6f6248046097f"></a>

Checks whether TeamId_Optional has been set.

#### `public inline void `[`SetTeamIdToNull`](#structFRHAPI__MatchPlayerWithMatch_1ae083661b3e0ce148db311a9e33b062fa)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1ae083661b3e0ce148db311a9e33b062fa"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsTeamIdNull`](#structFRHAPI__MatchPlayerWithMatch_1ab528327a5665e74c324ffbb02390a267)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1ab528327a5665e74c324ffbb02390a267"></a>

Checks whether TeamId_Optional is set to null.

#### `public inline FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1a54e34a784a95431b8463fdafea66bcf6)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a54e34a784a95431b8463fdafea66bcf6"></a>

Gets the value of PartySessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1a7140b317897937c6953882919e7ecb28)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a7140b317897937c6953882919e7ecb28"></a>

Gets the value of PartySessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1a282943979d67239e3e225695faf7944b)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a282943979d67239e3e225695faf7944b"></a>

Gets the value of PartySessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1ad5a3639b61a7215e15b69c18a1467f65)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1ad5a3639b61a7215e15b69c18a1467f65"></a>

Fills OutValue with the value of PartySessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a324b24a122efbfa7cbeaec675ea168c2)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a324b24a122efbfa7cbeaec675ea168c2"></a>

Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a1b6e1b1fd6649abd538ab07d1e2d1f51)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a1b6e1b1fd6649abd538ab07d1e2d1f51"></a>

Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1ab9b0cad7a58ec2060b0d0c054206cb3e)`(const FString & NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1ab9b0cad7a58ec2060b0d0c054206cb3e"></a>

Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true.

#### `public inline void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1a1053b144bcfd6551cb8db4981b92730f)`(FString && NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a1053b144bcfd6551cb8db4981b92730f"></a>

Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1ab0c9bafe1fe1b0857eae325acb587bb8)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1ab0c9bafe1fe1b0857eae325acb587bb8"></a>

Clears the value of PartySessionId_Optional and sets PartySessionId_IsSet to false.

#### `public inline bool `[`IsPartySessionIdSet`](#structFRHAPI__MatchPlayerWithMatch_1a1a58ad700739cd13e6c22eb245987a99)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a1a58ad700739cd13e6c22eb245987a99"></a>

Checks whether PartySessionId_Optional has been set.

#### `public inline void `[`SetPartySessionIdToNull`](#structFRHAPI__MatchPlayerWithMatch_1ae4af270d7943fa342129ffae9ee13095)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1ae4af270d7943fa342129ffae9ee13095"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPartySessionIdNull`](#structFRHAPI__MatchPlayerWithMatch_1ad808f5bd450cea92c9c9beffea54e837)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1ad808f5bd450cea92c9c9beffea54e837"></a>

Checks whether PartySessionId_Optional is set to null.

#### `public inline int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a85ff7afecd63d99b936b77417f3f2803)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a85ff7afecd63d99b936b77417f3f2803"></a>

Gets the value of Placement_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1acecef59e816ff90eec7403444158db14)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1acecef59e816ff90eec7403444158db14"></a>

Gets the value of Placement_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a112a0a5a059122f24dab0f45580eccd4)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a112a0a5a059122f24dab0f45580eccd4"></a>

Gets the value of Placement_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a5bc2bdb587241bfe48df47c63cb15cd7)`(int32 & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a5bc2bdb587241bfe48df47c63cb15cd7"></a>

Fills OutValue with the value of Placement_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a56e4c66004fed51f42f8eba5789129a0)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a56e4c66004fed51f42f8eba5789129a0"></a>

Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a16901e3fa7d564aa425f8cb1c77a0502)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a16901e3fa7d564aa425f8cb1c77a0502"></a>

Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1af3dad4578613aee6e6838c03bf632fa1)`(const int32 & NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1af3dad4578613aee6e6838c03bf632fa1"></a>

Sets the value of Placement_Optional and also sets Placement_IsSet to true.

#### `public inline void `[`SetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a286aebf583cfe4c3292697ecc1c18bed)`(int32 && NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a286aebf583cfe4c3292697ecc1c18bed"></a>

Sets the value of Placement_Optional and also sets Placement_IsSet to true using move semantics.

#### `public inline void `[`ClearPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a5d88bbe1e747ed4fde8a09646bed27d6)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a5d88bbe1e747ed4fde8a09646bed27d6"></a>

Clears the value of Placement_Optional and sets Placement_IsSet to false.

#### `public inline bool `[`IsPlacementSet`](#structFRHAPI__MatchPlayerWithMatch_1aea3af1b27f945c81e6a330c2b1047442)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1aea3af1b27f945c81e6a330c2b1047442"></a>

Checks whether Placement_Optional has been set.

#### `public inline bool `[`IsPlacementDefaultValue`](#structFRHAPI__MatchPlayerWithMatch_1adbd55a069d0102cbe9e75d04dc874428)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1adbd55a069d0102cbe9e75d04dc874428"></a>

Returns true if Placement_Optional is set and matches the default value.

#### `public inline void `[`SetPlacementToDefault`](#structFRHAPI__MatchPlayerWithMatch_1afe2d5e1393af77f79778e832a6e124e2)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1afe2d5e1393af77f79778e832a6e124e2"></a>

Sets the value of Placement_Optional to its default and also sets Placement_IsSet to true.

#### `public inline void `[`SetPlacementToNull`](#structFRHAPI__MatchPlayerWithMatch_1a152357afbbbd4c0656037a23867245d9)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a152357afbbbd4c0656037a23867245d9"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPlacementNull`](#structFRHAPI__MatchPlayerWithMatch_1a2aabaddbafd7b0e9fbb53de1ed5ab714)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a2aabaddbafd7b0e9fbb53de1ed5ab714"></a>

Checks whether Placement_Optional is set to null.

#### `public inline FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1ae11aa349ba26cd4441ba81968bfc114a)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1ae11aa349ba26cd4441ba81968bfc114a"></a>

Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a43ca682cd76eca72e387c75d948ea885)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a43ca682cd76eca72e387c75d948ea885"></a>

Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a455ef2b74ec33572f80c7553f39eaccb)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a455ef2b74ec33572f80c7553f39eaccb"></a>

Gets the value of JoinedMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a9dbec70c5c63a41e27b2f6e093c54705)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a9dbec70c5c63a41e27b2f6e093c54705"></a>

Fills OutValue with the value of JoinedMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1aec99a9a7db72abbda99ba5d8550d1fd4)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1aec99a9a7db72abbda99ba5d8550d1fd4"></a>

Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a752165815729b912a3c643e59b744ba3)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a752165815729b912a3c643e59b744ba3"></a>

Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a43617f01e00b3544107f389432254569)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a43617f01e00b3544107f389432254569"></a>

Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true.

#### `public inline void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1aa5730588451bc5c240f59fbe3ac12aba)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1aa5730588451bc5c240f59fbe3ac12aba"></a>

Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1abae34d5cfc3bff2dd51e229e96a43855)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1abae34d5cfc3bff2dd51e229e96a43855"></a>

Clears the value of JoinedMatchTimestamp_Optional and sets JoinedMatchTimestamp_IsSet to false.

#### `public inline bool `[`IsJoinedMatchTimestampSet`](#structFRHAPI__MatchPlayerWithMatch_1a9c8460824d853ba2c2985aeb645c2923)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a9c8460824d853ba2c2985aeb645c2923"></a>

Checks whether JoinedMatchTimestamp_Optional has been set.

#### `public inline void `[`SetJoinedMatchTimestampToNull`](#structFRHAPI__MatchPlayerWithMatch_1aead749e49041dc9826524503db6ae7ca)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1aead749e49041dc9826524503db6ae7ca"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsJoinedMatchTimestampNull`](#structFRHAPI__MatchPlayerWithMatch_1aaeeb63db1b8a4911add3e77b4214fd35)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1aaeeb63db1b8a4911add3e77b4214fd35"></a>

Checks whether JoinedMatchTimestamp_Optional is set to null.

#### `public inline FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a058719708858bd3007ed93e6a19a5181)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a058719708858bd3007ed93e6a19a5181"></a>

Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1ab0dab02e22f80c1ae6f0c90071b1cc75)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1ab0dab02e22f80c1ae6f0c90071b1cc75"></a>

Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a9dd9de7e8a29d867008ef3f836bae425)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a9dd9de7e8a29d867008ef3f836bae425"></a>

Gets the value of LeftMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a9e52d9cd8e77028e90510cf9d7dbec39)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a9e52d9cd8e77028e90510cf9d7dbec39"></a>

Fills OutValue with the value of LeftMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a2106588f2ce553a8afd622e1bc7367d0)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a2106588f2ce553a8afd622e1bc7367d0"></a>

Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a04306aaa9505425c676ecdcee633428f)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a04306aaa9505425c676ecdcee633428f"></a>

Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a0b7b8bbc0f7c6c4b3622fc79b41b8446)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a0b7b8bbc0f7c6c4b3622fc79b41b8446"></a>

Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true.

#### `public inline void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a674ea543a942f78d4b2da158b7a5cdac)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a674ea543a942f78d4b2da158b7a5cdac"></a>

Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a9824e1b54f752e7cc9936942826fd2d0)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a9824e1b54f752e7cc9936942826fd2d0"></a>

Clears the value of LeftMatchTimestamp_Optional and sets LeftMatchTimestamp_IsSet to false.

#### `public inline bool `[`IsLeftMatchTimestampSet`](#structFRHAPI__MatchPlayerWithMatch_1aad2c47fdcb61d650db0d205bade3fd22)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1aad2c47fdcb61d650db0d205bade3fd22"></a>

Checks whether LeftMatchTimestamp_Optional has been set.

#### `public inline void `[`SetLeftMatchTimestampToNull`](#structFRHAPI__MatchPlayerWithMatch_1a38ab43d6de846916383d4b6e5a84d4d1)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a38ab43d6de846916383d4b6e5a84d4d1"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsLeftMatchTimestampNull`](#structFRHAPI__MatchPlayerWithMatch_1af2d81cd3b1c3f9c32852452e9aba4995)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1af2d81cd3b1c3f9c32852452e9aba4995"></a>

Checks whether LeftMatchTimestamp_Optional is set to null.

#### `public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a5fc80965dc248c328ae3c33bf3235bff)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a5fc80965dc248c328ae3c33bf3235bff"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a4153f552fbe8b24b2370bfb7727867c7)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a4153f552fbe8b24b2370bfb7727867c7"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a9d76640056c05a6eee018d91e7e6b050)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a9d76640056c05a6eee018d91e7e6b050"></a>

Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a2a7f8c81e681d721c99ff311c01c9c71)`(int32 & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a2a7f8c81e681d721c99ff311c01c9c71"></a>

Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerWithMatch_1aa485f048e53e5741c96349f973d423c0)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1aa485f048e53e5741c96349f973d423c0"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerWithMatch_1af821ac001bf979c2fcaf8098e14e0eac)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1af821ac001bf979c2fcaf8098e14e0eac"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a128737ce3f6a7d9205182a2c9b68becc)`(const int32 & NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a128737ce3f6a7d9205182a2c9b68becc"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a468b67f772387f903d1a2dfd19685889)`(int32 && NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a468b67f772387f903d1a2dfd19685889"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a0ecdc5e12f71bc0d02f402229205d3c4)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a0ecdc5e12f71bc0d02f402229205d3c4"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

#### `public inline bool `[`IsDurationSecondsSet`](#structFRHAPI__MatchPlayerWithMatch_1a0e015ad71e0d15540580b134fb73b7e4)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a0e015ad71e0d15540580b134fb73b7e4"></a>

Checks whether DurationSeconds_Optional has been set.

#### `public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchPlayerWithMatch_1a29ba09c1078ffcf1f88a15634cdee9a2)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a29ba09c1078ffcf1f88a15634cdee9a2"></a>

Returns true if DurationSeconds_Optional is set and matches the default value.

#### `public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchPlayerWithMatch_1ab273feafe8a95a5d26528a655a99dec6)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1ab273feafe8a95a5d26528a655a99dec6"></a>

Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.

#### `public inline void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchPlayerWithMatch_1a9041027bce8e4adc482f04cbbfff3550)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a9041027bce8e4adc482f04cbbfff3550"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchPlayerWithMatch_1a745d4c2891de7a027a70bb963f00688d)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a745d4c2891de7a027a70bb963f00688d"></a>

Checks whether DurationSeconds_Optional is set to null.

#### `public inline FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1a4b8bed811ed3222d76b4287b0172d0e2)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a4b8bed811ed3222d76b4287b0172d0e2"></a>

Gets the value of StartingRank_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1a883d989c23cd4d7dff71451c0a6a384a)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a883d989c23cd4d7dff71451c0a6a384a"></a>

Gets the value of StartingRank_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1a39d14d43f8de03c87c76a001e0f4bf22)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a39d14d43f8de03c87c76a001e0f4bf22"></a>

Gets the value of StartingRank_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1a235f3a980254e68a2aa2c310790343f6)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a235f3a980254e68a2aa2c310790343f6"></a>

Fills OutValue with the value of StartingRank_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a4b9fa660fa16fba23cd87d01994a8b1a)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a4b9fa660fa16fba23cd87d01994a8b1a"></a>

Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a969c32f934fafe5223b298c9caee2685)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a969c32f934fafe5223b298c9caee2685"></a>

Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1a9d4cb7e4a513ad834596c5e47be79644)`(const FString & NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a9d4cb7e4a513ad834596c5e47be79644"></a>

Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true.

#### `public inline void `[`SetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1af7794dcd90ba383e8765121711000ea4)`(FString && NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1af7794dcd90ba383e8765121711000ea4"></a>

Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true using move semantics.

#### `public inline void `[`ClearStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1aa3f553837d1d00f98f5b8288c5d9008f)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1aa3f553837d1d00f98f5b8288c5d9008f"></a>

Clears the value of StartingRank_Optional and sets StartingRank_IsSet to false.

#### `public inline bool `[`IsStartingRankSet`](#structFRHAPI__MatchPlayerWithMatch_1af01d4f3a21246f8b62d6ace7a5f4ffe2)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1af01d4f3a21246f8b62d6ace7a5f4ffe2"></a>

Checks whether StartingRank_Optional has been set.

#### `public inline void `[`SetStartingRankToNull`](#structFRHAPI__MatchPlayerWithMatch_1a895e0027c22723cce2d922468fb00472)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a895e0027c22723cce2d922468fb00472"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStartingRankNull`](#structFRHAPI__MatchPlayerWithMatch_1a4c1c1e3d76d70e288b29249f12fabebe)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a4c1c1e3d76d70e288b29249f12fabebe"></a>

Checks whether StartingRank_Optional is set to null.

#### `public inline FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a5b6e3dcbf017a66604b3fc1a500c42aa)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a5b6e3dcbf017a66604b3fc1a500c42aa"></a>

Gets the value of FinishingRank_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1aca1bd756ea4d2fafb5609264a6914531)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1aca1bd756ea4d2fafb5609264a6914531"></a>

Gets the value of FinishingRank_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a68da70c7d77f1a05e3fbe756229f5f60)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a68da70c7d77f1a05e3fbe756229f5f60"></a>

Gets the value of FinishingRank_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a12da2ec0385822aff5fb80cf6a5b0f67)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a12da2ec0385822aff5fb80cf6a5b0f67"></a>

Fills OutValue with the value of FinishingRank_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerWithMatch_1ab181ed2350754de6b00e114525ea7ab2)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1ab181ed2350754de6b00e114525ea7ab2"></a>

Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerWithMatch_1ad52976672bd302dea1d5b0fd0e4e972e)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1ad52976672bd302dea1d5b0fd0e4e972e"></a>

Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1aee5982d705028644e7a64a69b31551e2)`(const FString & NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1aee5982d705028644e7a64a69b31551e2"></a>

Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true.

#### `public inline void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a21f4f6753ef98c8a52ccdc66a4831900)`(FString && NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a21f4f6753ef98c8a52ccdc66a4831900"></a>

Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true using move semantics.

#### `public inline void `[`ClearFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a82d8cbc73e9caa7fb977cba81ec493f1)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a82d8cbc73e9caa7fb977cba81ec493f1"></a>

Clears the value of FinishingRank_Optional and sets FinishingRank_IsSet to false.

#### `public inline bool `[`IsFinishingRankSet`](#structFRHAPI__MatchPlayerWithMatch_1a21a97a5879089235f12fec80c13494ab)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a21a97a5879089235f12fec80c13494ab"></a>

Checks whether FinishingRank_Optional has been set.

#### `public inline void `[`SetFinishingRankToNull`](#structFRHAPI__MatchPlayerWithMatch_1acca887350208a2e84bac524780cebb5c)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1acca887350208a2e84bac524780cebb5c"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFinishingRankNull`](#structFRHAPI__MatchPlayerWithMatch_1ad31f3d5d568d610cd5b1972f5c815798)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1ad31f3d5d568d610cd5b1972f5c815798"></a>

Checks whether FinishingRank_Optional is set to null.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a75866908821e563b2490d12b3f8a04cb)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a75866908821e563b2490d12b3f8a04cb"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a3dbbc9fa9b42a7390d745e3453caa158)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a3dbbc9fa9b42a7390d745e3453caa158"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a5994482c0d065084c14c605cbb60a223)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a5994482c0d065084c14c605cbb60a223"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a76e28c3e446b4e2a4d8b825299926e06)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a76e28c3e446b4e2a4d8b825299926e06"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerWithMatch_1ad8be9216376a41d3193d37f12cf25328)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1ad8be9216376a41d3193d37f12cf25328"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a8b6cfdf57fb7fa877b8f44aff2944d4a)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a8b6cfdf57fb7fa877b8f44aff2944d4a"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a266d9cfe2304e45730a39632b837cc6f)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a266d9cfe2304e45730a39632b837cc6f"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a08b041e111c8479e6480a119856f841e)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a08b041e111c8479e6480a119856f841e"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a64ebb116326952d6dbcc9e93345e9132)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a64ebb116326952d6dbcc9e93345e9132"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchPlayerWithMatch_1a555ad34975502125e34b39a9919de463)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a555ad34975502125e34b39a9919de463"></a>

Checks whether CustomData_Optional has been set.

#### `public inline void `[`SetCustomDataToNull`](#structFRHAPI__MatchPlayerWithMatch_1a5f96e9cb61cf480c1092ce0003553d86)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a5f96e9cb61cf480c1092ce0003553d86"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCustomDataNull`](#structFRHAPI__MatchPlayerWithMatch_1abb8bd04666a8963fee4331c92337bc3d)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1abb8bd04666a8963fee4331c92337bc3d"></a>

Checks whether CustomData_Optional is set to null.

#### `public inline `[`FRHAPI_MatchValuesOnly`](RHAPI_MatchValuesOnly.md#structFRHAPI__MatchValuesOnly)` & `[`GetMatch`](#structFRHAPI__MatchPlayerWithMatch_1a8f8e585396d7c8c24abff65707f51025)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a8f8e585396d7c8c24abff65707f51025"></a>

Gets the value of Match.

#### `public inline const `[`FRHAPI_MatchValuesOnly`](RHAPI_MatchValuesOnly.md#structFRHAPI__MatchValuesOnly)` & `[`GetMatch`](#structFRHAPI__MatchPlayerWithMatch_1af9ef846645ea10783d343b1829faf60d)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1af9ef846645ea10783d343b1829faf60d"></a>

Gets the value of Match.

#### `public inline void `[`SetMatch`](#structFRHAPI__MatchPlayerWithMatch_1aca7f5fae110172a881481d5d0ff53afd)`(const `[`FRHAPI_MatchValuesOnly`](RHAPI_MatchValuesOnly.md#structFRHAPI__MatchValuesOnly)` & NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1aca7f5fae110172a881481d5d0ff53afd"></a>

Sets the value of Match.

#### `public inline void `[`SetMatch`](#structFRHAPI__MatchPlayerWithMatch_1a6537e66fb30973c75eb43b54ca47c5a7)`(`[`FRHAPI_MatchValuesOnly`](RHAPI_MatchValuesOnly.md#structFRHAPI__MatchValuesOnly)` && NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a6537e66fb30973c75eb43b54ca47c5a7"></a>

Sets the value of Match using move semantics.

