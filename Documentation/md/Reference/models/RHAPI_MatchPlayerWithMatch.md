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
`public inline FORCEINLINE FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a1ca923ecd7c3dfcda7c98c251ae78f0d)`()` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a2bf369f663fe9eb7ff9d4382da1b8e05)`() const` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1af21900e873db19aeb5bce6c51a23df21)`(const FDateTime & DefaultValue) const` | Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a8ed3c12c2c52eec6dd730c37698f4392)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a9eeb0ac35fc98fb40cdbdabbe10dd1e8)`()` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1aba7eb9dcc1eff76b0ecbb707ab7f3bf0)`() const` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a16dae653dd2ebdaccd678b74d7abbebf)`(const FDateTime & NewValue)` | Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1aab969c99455e8ae8e9c1e1c15a9b3ddb)`(FDateTime && NewValue)` | Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a8ce696255a3018379356e8c2fe0cc5a2)`()` | Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.
`public inline FORCEINLINE FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a20a759312e082ba9494ac3537b028f58)`()` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a91eb1003cedade4aaa6aae7fb3c46b20)`() const` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1aebc7ece90a2185761f6e40de0d34a13a)`(const FDateTime & DefaultValue) const` | Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a64f8b4dabf90e0eadd58b4ea2fa13ad5)`(FDateTime & OutValue) const` | Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a6a032911d83a9c48bb462b7287338e5e)`()` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a31b011fdd1b3681fa9b60ff56562c4ca)`() const` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a3d1409ccdda79cd496d46613a0c7464e)`(const FDateTime & NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a833006cb085b2962cb6ad4ff8d4b3a68)`(FDateTime && NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a314a508998777fc801cca1c11828fc24)`()` | Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1aa98ada397b805c0dbc665f7cd2519d8e)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1aaaca386af56f1b41e48d7651c46feacf)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1ab239c3273132e32929705e457e8d9a5f)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1a2c66852c9c25a59cff16c5940571b2f1)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a2c63c6eef3486f4cc5a64335bac9ac62)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a0dac1805d9830df62527bee1ebf57190)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1a2f097f8261a6d309b3c47eafff9abdc6)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1a659a4c61789a567911a25ee9f3339def)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1a3dbf12033fe77ebad938f4f8bd00e4b9)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline FORCEINLINE FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1a0f82e5cf3be1e56b000a1f08770e2083)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1a4a2f418ddd95c22edbec123c28f73d57)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1a7fb45833388d427afd5f2ef93c0f88e2)`(const FString & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1ab830d3d64216bf9fd7d39b8a7eda18a2)`(FString & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerWithMatch_1ad515d4fd89162dd454a02ff17f385592)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a8690f7a2ffc41d004c3b602277e75465)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1adceddf9642b4d48d21a12276127e24de)`(const FString & NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1a8f32bd1c0bbfd86a34c4d8393ef69fee)`(FString && NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.
`public inline void `[`ClearTeamId`](#structFRHAPI__MatchPlayerWithMatch_1ae786e20e4ef264737dfdd652ffa8dd53)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline FORCEINLINE void `[`SetTeamIdToNull`](#structFRHAPI__MatchPlayerWithMatch_1a6614b86919f957fb2b7f581777f1eb78)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsTeamIdNull`](#structFRHAPI__MatchPlayerWithMatch_1af56275fc91b390cc7b0f1ecd743f64f6)`() const` | Checks whether TeamId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1a398e8d9fbd9c6c66891f6790c72388f7)`()` | Gets the value of PartySessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1aee9c7deae16a9c769e6ba894d35813cc)`() const` | Gets the value of PartySessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1ac3896aacd471b873594e05b4295c9cb0)`(const FString & DefaultValue) const` | Gets the value of PartySessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1a142875a8eb8037fe5334d2221ac72ebf)`(FString & OutValue) const` | Fills OutValue with the value of PartySessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a5e930b87cf52d3ef8dc3e1cf35a6e984)`()` | Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a7163f10d36f1ee98406e33532e0a1d25)`() const` | Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1a095f7e3d08b3fe0095f9f5dbc97a46d2)`(const FString & NewValue)` | Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true.
`public inline FORCEINLINE void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1ab611e2cbb49c25ef53763f381e59cee4)`(FString && NewValue)` | Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true using move semantics.
`public inline void `[`ClearPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1ab0c9bafe1fe1b0857eae325acb587bb8)`()` | Clears the value of PartySessionId_Optional and sets PartySessionId_IsSet to false.
`public inline FORCEINLINE void `[`SetPartySessionIdToNull`](#structFRHAPI__MatchPlayerWithMatch_1a1747e215bac2a3349f68b2e76fccaf58)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPartySessionIdNull`](#structFRHAPI__MatchPlayerWithMatch_1a0da2b6f572c2e7e34e0117d465c825df)`() const` | Checks whether PartySessionId_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a1f543c20cce2f0c99dea157bcad927c0)`()` | Gets the value of Placement_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a80a202a065d9327d42c74cb7f80c60a5)`() const` | Gets the value of Placement_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a3b933a571823ec89cb877112582b6366)`(const int32 & DefaultValue) const` | Gets the value of Placement_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1acb866ad9ec69cd527d1fe0322a9249f0)`(int32 & OutValue) const` | Fills OutValue with the value of Placement_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a1eb86285ac1d613921907aef232145ed)`()` | Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a61771b61dfa6789954f2157ae286d356)`() const` | Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a6a18698bc5ca6ff10efaefba8a60d49a)`(const int32 & NewValue)` | Sets the value of Placement_Optional and also sets Placement_IsSet to true.
`public inline FORCEINLINE void `[`SetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a4ad0a503217762b2efe5edacc36b20c1)`(int32 && NewValue)` | Sets the value of Placement_Optional and also sets Placement_IsSet to true using move semantics.
`public inline void `[`ClearPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a5d88bbe1e747ed4fde8a09646bed27d6)`()` | Clears the value of Placement_Optional and sets Placement_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Placement`](#structFRHAPI__MatchPlayerWithMatch_1a2909afb8c9e793be297f30ffd8ddf90c)`()` | Returns the default value of Placement.
`public inline FORCEINLINE void `[`SetPlacementToNull`](#structFRHAPI__MatchPlayerWithMatch_1a1995db260293013396273153284419e3)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPlacementNull`](#structFRHAPI__MatchPlayerWithMatch_1a86d0e998d1df0075e1df6fe4a98e853d)`() const` | Checks whether Placement_Optional is set to null.
`public inline FORCEINLINE FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a9aa6f04321d6fe37357757c81bcc494e)`()` | Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1ad4d8f549ed1054a6990b3f6ae6455ce7)`() const` | Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1ae97ffd43ad12c1eed208c622ebd589c4)`(const FDateTime & DefaultValue) const` | Gets the value of JoinedMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1abd8ce9dfbb100d66b4d268a535b294c3)`(FDateTime & OutValue) const` | Fills OutValue with the value of JoinedMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a5303e7d6d7b100529c22b10d08b79805)`()` | Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1add7e73f7a94ce700196c51fae4180f1a)`() const` | Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a2848ca9696af2a483082f094fcbe6178)`(const FDateTime & NewValue)` | Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1abf89223c106bd2ef59c9fd0d1feeffe3)`(FDateTime && NewValue)` | Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1abae34d5cfc3bff2dd51e229e96a43855)`()` | Clears the value of JoinedMatchTimestamp_Optional and sets JoinedMatchTimestamp_IsSet to false.
`public inline FORCEINLINE void `[`SetJoinedMatchTimestampToNull`](#structFRHAPI__MatchPlayerWithMatch_1a7c02174f7433577c08af41b9ae6e6e15)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsJoinedMatchTimestampNull`](#structFRHAPI__MatchPlayerWithMatch_1a95bee824d52234321a4df97eab571433)`() const` | Checks whether JoinedMatchTimestamp_Optional is set to null.
`public inline FORCEINLINE FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a6a374d5315a5647f7a2a792ddce1bc12)`()` | Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1aca3fe7c264aad5c5f5503bd51fc46e0d)`() const` | Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a735148348fa17cd8a2f7672ca5d64302)`(const FDateTime & DefaultValue) const` | Gets the value of LeftMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a323634d7949326bfefb4288a5d351f8f)`(FDateTime & OutValue) const` | Fills OutValue with the value of LeftMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a63dbf29ca2919aac66f90665714fdc53)`()` | Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a7db1ed3a4c489152e9298e7aa2b01676)`() const` | Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a82b3309ea109ffae13ae23886b06f3fa)`(const FDateTime & NewValue)` | Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a4b1b72ae68b28e1e625abfa877523c3e)`(FDateTime && NewValue)` | Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a9824e1b54f752e7cc9936942826fd2d0)`()` | Clears the value of LeftMatchTimestamp_Optional and sets LeftMatchTimestamp_IsSet to false.
`public inline FORCEINLINE void `[`SetLeftMatchTimestampToNull`](#structFRHAPI__MatchPlayerWithMatch_1ac02859d1f3648a5d639eb2db786fab57)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsLeftMatchTimestampNull`](#structFRHAPI__MatchPlayerWithMatch_1adda6234861d05a1ff6957e360832b9e3)`() const` | Checks whether LeftMatchTimestamp_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a03cbd0655dc1d30ac36455c28cc614e6)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a40e604dd33bde6774d7b9e0a149e0a7f)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a3ab0145658fc30c3fa01b59c168fa19e)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a22c2293e987d13943fa8d013ab482239)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerWithMatch_1ad8903ccdc1bc129fd725cdb96e423e22)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a1504b2c4e65b688a4d2b0ba5bf1193a8)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1af97da361b87a11df3520c6f8ff53d582)`(const int32 & NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a25a183e13a66a965575817d6eedeebe9)`(int32 && NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a0ecdc5e12f71bc0d02f402229205d3c4)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_DurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a1debbd326316cd1c019aef611ba26215)`()` | Returns the default value of DurationSeconds.
`public inline FORCEINLINE void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchPlayerWithMatch_1a456acd82702e7ebf22fbc6dd231ebca4)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchPlayerWithMatch_1ad1fbf06bb054661310e4693cc00afacf)`() const` | Checks whether DurationSeconds_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1a1a3bf5d2fdb2ae191a1d4110a0f218bc)`()` | Gets the value of StartingRank_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1a945c352ee5e7418fb42ad84b7d936f44)`() const` | Gets the value of StartingRank_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1a7584a56d2a09204e67254c36d9d46418)`(const FString & DefaultValue) const` | Gets the value of StartingRank_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1a6c9fea5d2a488c4a18b6969e659d798a)`(FString & OutValue) const` | Fills OutValue with the value of StartingRank_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a9403f110bc2d31771076b4c5b36f307d)`()` | Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a0e641b34fed598abb95c949022de820c)`() const` | Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1ace66ea6a9dc2414662da6a9ec1772137)`(const FString & NewValue)` | Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true.
`public inline FORCEINLINE void `[`SetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1afdff02acbdd1b9770dbe97cfcb4cb0d1)`(FString && NewValue)` | Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true using move semantics.
`public inline void `[`ClearStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1aa3f553837d1d00f98f5b8288c5d9008f)`()` | Clears the value of StartingRank_Optional and sets StartingRank_IsSet to false.
`public inline FORCEINLINE void `[`SetStartingRankToNull`](#structFRHAPI__MatchPlayerWithMatch_1a003e9a5d0dade94ce350d2d4cf801b3d)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStartingRankNull`](#structFRHAPI__MatchPlayerWithMatch_1ae9a8139ef900374c62b8d8e01a2f03d6)`() const` | Checks whether StartingRank_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a1216db08f729f912063cf8ebe7ea885d)`()` | Gets the value of FinishingRank_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a2b6ffb3531d36947a1c876ecb28d8f1a)`() const` | Gets the value of FinishingRank_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1aa965d85ed767766688da80fcbb3791f2)`(const FString & DefaultValue) const` | Gets the value of FinishingRank_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a9ae897d0e2862312948f2615db686a5a)`(FString & OutValue) const` | Fills OutValue with the value of FinishingRank_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a405d46264c1e46cc1e8063943aa3c94e)`()` | Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a2af417c3dcfec74d6f1d6b972282795c)`() const` | Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1aab070329547c68c1da2cfa734b118d0e)`(const FString & NewValue)` | Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true.
`public inline FORCEINLINE void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1ab6fb9837514e9ca71678dbf11809e2ac)`(FString && NewValue)` | Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true using move semantics.
`public inline void `[`ClearFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a82d8cbc73e9caa7fb977cba81ec493f1)`()` | Clears the value of FinishingRank_Optional and sets FinishingRank_IsSet to false.
`public inline FORCEINLINE void `[`SetFinishingRankToNull`](#structFRHAPI__MatchPlayerWithMatch_1a5871b996af3c63119762037e4cbeb749)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsFinishingRankNull`](#structFRHAPI__MatchPlayerWithMatch_1a8f048a2f1362a44cdd7bd488c1efb160)`() const` | Checks whether FinishingRank_Optional is set to null.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1aa0e1ff10b05148e3b0da38a00534d30d)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1add39f555336ddc4904e073d787195732)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a81a0da70c29b48e636ddbee79b146bed)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a8b457c768d786ec3fc776aa834e73b0c)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a2961bd2497b39c0119ba9615b8aabf6f)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a3d0121e0f22adfb3b39ab31ffb372915)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1aacd41fb0eaf9472aeed9a9d29d211b3c)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1aa46e79ba53142f17a3d3ecf98b52f444)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a64ebb116326952d6dbcc9e93345e9132)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__MatchPlayerWithMatch_1ae0d18bcae79b22e9175f7dceae8cd114)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__MatchPlayerWithMatch_1ad1331527b34833a77184536cc8e68049)`() const` | Checks whether CustomData_Optional is set to null.
`public inline FORCEINLINE `[`FRHAPI_MatchValuesOnly`](RHAPI_MatchValuesOnly.md#structFRHAPI__MatchValuesOnly)` & `[`GetMatch`](#structFRHAPI__MatchPlayerWithMatch_1a9f3e9ba686d1e5386105628f99a7908f)`()` | Gets the value of Match.
`public inline FORCEINLINE const `[`FRHAPI_MatchValuesOnly`](RHAPI_MatchValuesOnly.md#structFRHAPI__MatchValuesOnly)` & `[`GetMatch`](#structFRHAPI__MatchPlayerWithMatch_1adf05e5df46f7644439a7b00c0c80c79e)`() const` | Gets the value of Match.
`public inline FORCEINLINE void `[`SetMatch`](#structFRHAPI__MatchPlayerWithMatch_1ae261a667f3d543d0a13ffaadb618bab0)`(const `[`FRHAPI_MatchValuesOnly`](RHAPI_MatchValuesOnly.md#structFRHAPI__MatchValuesOnly)` & NewValue)` | Sets the value of Match.
`public inline FORCEINLINE void `[`SetMatch`](#structFRHAPI__MatchPlayerWithMatch_1adb7eb51dfe7bfddb17484a66ce9b3823)`(`[`FRHAPI_MatchValuesOnly`](RHAPI_MatchValuesOnly.md#structFRHAPI__MatchValuesOnly)` && NewValue)` | Sets the value of Match using move semantics.

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

#### `public inline FORCEINLINE FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a1ca923ecd7c3dfcda7c98c251ae78f0d)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a1ca923ecd7c3dfcda7c98c251ae78f0d"></a>

Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a2bf369f663fe9eb7ff9d4382da1b8e05)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a2bf369f663fe9eb7ff9d4382da1b8e05"></a>

Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1af21900e873db19aeb5bce6c51a23df21)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1af21900e873db19aeb5bce6c51a23df21"></a>

Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a8ed3c12c2c52eec6dd730c37698f4392)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a8ed3c12c2c52eec6dd730c37698f4392"></a>

Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a9eeb0ac35fc98fb40cdbdabbe10dd1e8)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a9eeb0ac35fc98fb40cdbdabbe10dd1e8"></a>

Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1aba7eb9dcc1eff76b0ecbb707ab7f3bf0)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1aba7eb9dcc1eff76b0ecbb707ab7f3bf0"></a>

Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a16dae653dd2ebdaccd678b74d7abbebf)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a16dae653dd2ebdaccd678b74d7abbebf"></a>

Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1aab969c99455e8ae8e9c1e1c15a9b3ddb)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1aab969c99455e8ae8e9c1e1c15a9b3ddb"></a>

Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a8ce696255a3018379356e8c2fe0cc5a2)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a8ce696255a3018379356e8c2fe0cc5a2"></a>

Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.

#### `public inline FORCEINLINE FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a20a759312e082ba9494ac3537b028f58)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a20a759312e082ba9494ac3537b028f58"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a91eb1003cedade4aaa6aae7fb3c46b20)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a91eb1003cedade4aaa6aae7fb3c46b20"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1aebc7ece90a2185761f6e40de0d34a13a)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1aebc7ece90a2185761f6e40de0d34a13a"></a>

Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a64f8b4dabf90e0eadd58b4ea2fa13ad5)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a64f8b4dabf90e0eadd58b4ea2fa13ad5"></a>

Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a6a032911d83a9c48bb462b7287338e5e)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a6a032911d83a9c48bb462b7287338e5e"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a31b011fdd1b3681fa9b60ff56562c4ca)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a31b011fdd1b3681fa9b60ff56562c4ca"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a3d1409ccdda79cd496d46613a0c7464e)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a3d1409ccdda79cd496d46613a0c7464e"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a833006cb085b2962cb6ad4ff8d4b3a68)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a833006cb085b2962cb6ad4ff8d4b3a68"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a314a508998777fc801cca1c11828fc24)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a314a508998777fc801cca1c11828fc24"></a>

Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1aa98ada397b805c0dbc665f7cd2519d8e)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1aa98ada397b805c0dbc665f7cd2519d8e"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1aaaca386af56f1b41e48d7651c46feacf)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1aaaca386af56f1b41e48d7651c46feacf"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1ab239c3273132e32929705e457e8d9a5f)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1ab239c3273132e32929705e457e8d9a5f"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1a2c66852c9c25a59cff16c5940571b2f1)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a2c66852c9c25a59cff16c5940571b2f1"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a2c63c6eef3486f4cc5a64335bac9ac62)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a2c63c6eef3486f4cc5a64335bac9ac62"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a0dac1805d9830df62527bee1ebf57190)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a0dac1805d9830df62527bee1ebf57190"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1a2f097f8261a6d309b3c47eafff9abdc6)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a2f097f8261a6d309b3c47eafff9abdc6"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1a659a4c61789a567911a25ee9f3339def)`(FGuid && NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a659a4c61789a567911a25ee9f3339def"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1a3dbf12033fe77ebad938f4f8bd00e4b9)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a3dbf12033fe77ebad938f4f8bd00e4b9"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1a0f82e5cf3be1e56b000a1f08770e2083)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a0f82e5cf3be1e56b000a1f08770e2083"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1a4a2f418ddd95c22edbec123c28f73d57)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a4a2f418ddd95c22edbec123c28f73d57"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1a7fb45833388d427afd5f2ef93c0f88e2)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a7fb45833388d427afd5f2ef93c0f88e2"></a>

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1ab830d3d64216bf9fd7d39b8a7eda18a2)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1ab830d3d64216bf9fd7d39b8a7eda18a2"></a>

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerWithMatch_1ad515d4fd89162dd454a02ff17f385592)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1ad515d4fd89162dd454a02ff17f385592"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a8690f7a2ffc41d004c3b602277e75465)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a8690f7a2ffc41d004c3b602277e75465"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1adceddf9642b4d48d21a12276127e24de)`(const FString & NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1adceddf9642b4d48d21a12276127e24de"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1a8f32bd1c0bbfd86a34c4d8393ef69fee)`(FString && NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a8f32bd1c0bbfd86a34c4d8393ef69fee"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.

#### `public inline void `[`ClearTeamId`](#structFRHAPI__MatchPlayerWithMatch_1ae786e20e4ef264737dfdd652ffa8dd53)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1ae786e20e4ef264737dfdd652ffa8dd53"></a>

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetTeamIdToNull`](#structFRHAPI__MatchPlayerWithMatch_1a6614b86919f957fb2b7f581777f1eb78)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a6614b86919f957fb2b7f581777f1eb78"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsTeamIdNull`](#structFRHAPI__MatchPlayerWithMatch_1af56275fc91b390cc7b0f1ecd743f64f6)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1af56275fc91b390cc7b0f1ecd743f64f6"></a>

Checks whether TeamId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1a398e8d9fbd9c6c66891f6790c72388f7)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a398e8d9fbd9c6c66891f6790c72388f7"></a>

Gets the value of PartySessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1aee9c7deae16a9c769e6ba894d35813cc)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1aee9c7deae16a9c769e6ba894d35813cc"></a>

Gets the value of PartySessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1ac3896aacd471b873594e05b4295c9cb0)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1ac3896aacd471b873594e05b4295c9cb0"></a>

Gets the value of PartySessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1a142875a8eb8037fe5334d2221ac72ebf)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a142875a8eb8037fe5334d2221ac72ebf"></a>

Fills OutValue with the value of PartySessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a5e930b87cf52d3ef8dc3e1cf35a6e984)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a5e930b87cf52d3ef8dc3e1cf35a6e984"></a>

Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a7163f10d36f1ee98406e33532e0a1d25)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a7163f10d36f1ee98406e33532e0a1d25"></a>

Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1a095f7e3d08b3fe0095f9f5dbc97a46d2)`(const FString & NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a095f7e3d08b3fe0095f9f5dbc97a46d2"></a>

Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1ab611e2cbb49c25ef53763f381e59cee4)`(FString && NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1ab611e2cbb49c25ef53763f381e59cee4"></a>

Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1ab0c9bafe1fe1b0857eae325acb587bb8)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1ab0c9bafe1fe1b0857eae325acb587bb8"></a>

Clears the value of PartySessionId_Optional and sets PartySessionId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPartySessionIdToNull`](#structFRHAPI__MatchPlayerWithMatch_1a1747e215bac2a3349f68b2e76fccaf58)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a1747e215bac2a3349f68b2e76fccaf58"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPartySessionIdNull`](#structFRHAPI__MatchPlayerWithMatch_1a0da2b6f572c2e7e34e0117d465c825df)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a0da2b6f572c2e7e34e0117d465c825df"></a>

Checks whether PartySessionId_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a1f543c20cce2f0c99dea157bcad927c0)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a1f543c20cce2f0c99dea157bcad927c0"></a>

Gets the value of Placement_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a80a202a065d9327d42c74cb7f80c60a5)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a80a202a065d9327d42c74cb7f80c60a5"></a>

Gets the value of Placement_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a3b933a571823ec89cb877112582b6366)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a3b933a571823ec89cb877112582b6366"></a>

Gets the value of Placement_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1acb866ad9ec69cd527d1fe0322a9249f0)`(int32 & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1acb866ad9ec69cd527d1fe0322a9249f0"></a>

Fills OutValue with the value of Placement_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a1eb86285ac1d613921907aef232145ed)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a1eb86285ac1d613921907aef232145ed"></a>

Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a61771b61dfa6789954f2157ae286d356)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a61771b61dfa6789954f2157ae286d356"></a>

Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a6a18698bc5ca6ff10efaefba8a60d49a)`(const int32 & NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a6a18698bc5ca6ff10efaefba8a60d49a"></a>

Sets the value of Placement_Optional and also sets Placement_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a4ad0a503217762b2efe5edacc36b20c1)`(int32 && NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a4ad0a503217762b2efe5edacc36b20c1"></a>

Sets the value of Placement_Optional and also sets Placement_IsSet to true using move semantics.

#### `public inline void `[`ClearPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a5d88bbe1e747ed4fde8a09646bed27d6)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a5d88bbe1e747ed4fde8a09646bed27d6"></a>

Clears the value of Placement_Optional and sets Placement_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Placement`](#structFRHAPI__MatchPlayerWithMatch_1a2909afb8c9e793be297f30ffd8ddf90c)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a2909afb8c9e793be297f30ffd8ddf90c"></a>

Returns the default value of Placement.

#### `public inline FORCEINLINE void `[`SetPlacementToNull`](#structFRHAPI__MatchPlayerWithMatch_1a1995db260293013396273153284419e3)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a1995db260293013396273153284419e3"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPlacementNull`](#structFRHAPI__MatchPlayerWithMatch_1a86d0e998d1df0075e1df6fe4a98e853d)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a86d0e998d1df0075e1df6fe4a98e853d"></a>

Checks whether Placement_Optional is set to null.

#### `public inline FORCEINLINE FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a9aa6f04321d6fe37357757c81bcc494e)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a9aa6f04321d6fe37357757c81bcc494e"></a>

Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1ad4d8f549ed1054a6990b3f6ae6455ce7)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1ad4d8f549ed1054a6990b3f6ae6455ce7"></a>

Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1ae97ffd43ad12c1eed208c622ebd589c4)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1ae97ffd43ad12c1eed208c622ebd589c4"></a>

Gets the value of JoinedMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1abd8ce9dfbb100d66b4d268a535b294c3)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1abd8ce9dfbb100d66b4d268a535b294c3"></a>

Fills OutValue with the value of JoinedMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a5303e7d6d7b100529c22b10d08b79805)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a5303e7d6d7b100529c22b10d08b79805"></a>

Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1add7e73f7a94ce700196c51fae4180f1a)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1add7e73f7a94ce700196c51fae4180f1a"></a>

Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a2848ca9696af2a483082f094fcbe6178)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a2848ca9696af2a483082f094fcbe6178"></a>

Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1abf89223c106bd2ef59c9fd0d1feeffe3)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1abf89223c106bd2ef59c9fd0d1feeffe3"></a>

Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1abae34d5cfc3bff2dd51e229e96a43855)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1abae34d5cfc3bff2dd51e229e96a43855"></a>

Clears the value of JoinedMatchTimestamp_Optional and sets JoinedMatchTimestamp_IsSet to false.

#### `public inline FORCEINLINE void `[`SetJoinedMatchTimestampToNull`](#structFRHAPI__MatchPlayerWithMatch_1a7c02174f7433577c08af41b9ae6e6e15)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a7c02174f7433577c08af41b9ae6e6e15"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsJoinedMatchTimestampNull`](#structFRHAPI__MatchPlayerWithMatch_1a95bee824d52234321a4df97eab571433)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a95bee824d52234321a4df97eab571433"></a>

Checks whether JoinedMatchTimestamp_Optional is set to null.

#### `public inline FORCEINLINE FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a6a374d5315a5647f7a2a792ddce1bc12)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a6a374d5315a5647f7a2a792ddce1bc12"></a>

Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1aca3fe7c264aad5c5f5503bd51fc46e0d)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1aca3fe7c264aad5c5f5503bd51fc46e0d"></a>

Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a735148348fa17cd8a2f7672ca5d64302)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a735148348fa17cd8a2f7672ca5d64302"></a>

Gets the value of LeftMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a323634d7949326bfefb4288a5d351f8f)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a323634d7949326bfefb4288a5d351f8f"></a>

Fills OutValue with the value of LeftMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a63dbf29ca2919aac66f90665714fdc53)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a63dbf29ca2919aac66f90665714fdc53"></a>

Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a7db1ed3a4c489152e9298e7aa2b01676)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a7db1ed3a4c489152e9298e7aa2b01676"></a>

Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a82b3309ea109ffae13ae23886b06f3fa)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a82b3309ea109ffae13ae23886b06f3fa"></a>

Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a4b1b72ae68b28e1e625abfa877523c3e)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a4b1b72ae68b28e1e625abfa877523c3e"></a>

Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a9824e1b54f752e7cc9936942826fd2d0)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a9824e1b54f752e7cc9936942826fd2d0"></a>

Clears the value of LeftMatchTimestamp_Optional and sets LeftMatchTimestamp_IsSet to false.

#### `public inline FORCEINLINE void `[`SetLeftMatchTimestampToNull`](#structFRHAPI__MatchPlayerWithMatch_1ac02859d1f3648a5d639eb2db786fab57)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1ac02859d1f3648a5d639eb2db786fab57"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsLeftMatchTimestampNull`](#structFRHAPI__MatchPlayerWithMatch_1adda6234861d05a1ff6957e360832b9e3)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1adda6234861d05a1ff6957e360832b9e3"></a>

Checks whether LeftMatchTimestamp_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a03cbd0655dc1d30ac36455c28cc614e6)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a03cbd0655dc1d30ac36455c28cc614e6"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a40e604dd33bde6774d7b9e0a149e0a7f)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a40e604dd33bde6774d7b9e0a149e0a7f"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a3ab0145658fc30c3fa01b59c168fa19e)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a3ab0145658fc30c3fa01b59c168fa19e"></a>

Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a22c2293e987d13943fa8d013ab482239)`(int32 & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a22c2293e987d13943fa8d013ab482239"></a>

Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerWithMatch_1ad8903ccdc1bc129fd725cdb96e423e22)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1ad8903ccdc1bc129fd725cdb96e423e22"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a1504b2c4e65b688a4d2b0ba5bf1193a8)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a1504b2c4e65b688a4d2b0ba5bf1193a8"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1af97da361b87a11df3520c6f8ff53d582)`(const int32 & NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1af97da361b87a11df3520c6f8ff53d582"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a25a183e13a66a965575817d6eedeebe9)`(int32 && NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a25a183e13a66a965575817d6eedeebe9"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a0ecdc5e12f71bc0d02f402229205d3c4)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a0ecdc5e12f71bc0d02f402229205d3c4"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_DurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a1debbd326316cd1c019aef611ba26215)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a1debbd326316cd1c019aef611ba26215"></a>

Returns the default value of DurationSeconds.

#### `public inline FORCEINLINE void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchPlayerWithMatch_1a456acd82702e7ebf22fbc6dd231ebca4)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a456acd82702e7ebf22fbc6dd231ebca4"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchPlayerWithMatch_1ad1fbf06bb054661310e4693cc00afacf)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1ad1fbf06bb054661310e4693cc00afacf"></a>

Checks whether DurationSeconds_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1a1a3bf5d2fdb2ae191a1d4110a0f218bc)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a1a3bf5d2fdb2ae191a1d4110a0f218bc"></a>

Gets the value of StartingRank_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1a945c352ee5e7418fb42ad84b7d936f44)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a945c352ee5e7418fb42ad84b7d936f44"></a>

Gets the value of StartingRank_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1a7584a56d2a09204e67254c36d9d46418)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a7584a56d2a09204e67254c36d9d46418"></a>

Gets the value of StartingRank_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1a6c9fea5d2a488c4a18b6969e659d798a)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a6c9fea5d2a488c4a18b6969e659d798a"></a>

Fills OutValue with the value of StartingRank_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a9403f110bc2d31771076b4c5b36f307d)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a9403f110bc2d31771076b4c5b36f307d"></a>

Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a0e641b34fed598abb95c949022de820c)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a0e641b34fed598abb95c949022de820c"></a>

Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1ace66ea6a9dc2414662da6a9ec1772137)`(const FString & NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1ace66ea6a9dc2414662da6a9ec1772137"></a>

Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1afdff02acbdd1b9770dbe97cfcb4cb0d1)`(FString && NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1afdff02acbdd1b9770dbe97cfcb4cb0d1"></a>

Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true using move semantics.

#### `public inline void `[`ClearStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1aa3f553837d1d00f98f5b8288c5d9008f)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1aa3f553837d1d00f98f5b8288c5d9008f"></a>

Clears the value of StartingRank_Optional and sets StartingRank_IsSet to false.

#### `public inline FORCEINLINE void `[`SetStartingRankToNull`](#structFRHAPI__MatchPlayerWithMatch_1a003e9a5d0dade94ce350d2d4cf801b3d)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a003e9a5d0dade94ce350d2d4cf801b3d"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStartingRankNull`](#structFRHAPI__MatchPlayerWithMatch_1ae9a8139ef900374c62b8d8e01a2f03d6)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1ae9a8139ef900374c62b8d8e01a2f03d6"></a>

Checks whether StartingRank_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a1216db08f729f912063cf8ebe7ea885d)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a1216db08f729f912063cf8ebe7ea885d"></a>

Gets the value of FinishingRank_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a2b6ffb3531d36947a1c876ecb28d8f1a)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a2b6ffb3531d36947a1c876ecb28d8f1a"></a>

Gets the value of FinishingRank_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1aa965d85ed767766688da80fcbb3791f2)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1aa965d85ed767766688da80fcbb3791f2"></a>

Gets the value of FinishingRank_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a9ae897d0e2862312948f2615db686a5a)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a9ae897d0e2862312948f2615db686a5a"></a>

Fills OutValue with the value of FinishingRank_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a405d46264c1e46cc1e8063943aa3c94e)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a405d46264c1e46cc1e8063943aa3c94e"></a>

Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a2af417c3dcfec74d6f1d6b972282795c)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a2af417c3dcfec74d6f1d6b972282795c"></a>

Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1aab070329547c68c1da2cfa734b118d0e)`(const FString & NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1aab070329547c68c1da2cfa734b118d0e"></a>

Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true.

#### `public inline FORCEINLINE void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1ab6fb9837514e9ca71678dbf11809e2ac)`(FString && NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1ab6fb9837514e9ca71678dbf11809e2ac"></a>

Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true using move semantics.

#### `public inline void `[`ClearFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a82d8cbc73e9caa7fb977cba81ec493f1)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a82d8cbc73e9caa7fb977cba81ec493f1"></a>

Clears the value of FinishingRank_Optional and sets FinishingRank_IsSet to false.

#### `public inline FORCEINLINE void `[`SetFinishingRankToNull`](#structFRHAPI__MatchPlayerWithMatch_1a5871b996af3c63119762037e4cbeb749)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a5871b996af3c63119762037e4cbeb749"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsFinishingRankNull`](#structFRHAPI__MatchPlayerWithMatch_1a8f048a2f1362a44cdd7bd488c1efb160)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a8f048a2f1362a44cdd7bd488c1efb160"></a>

Checks whether FinishingRank_Optional is set to null.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1aa0e1ff10b05148e3b0da38a00534d30d)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1aa0e1ff10b05148e3b0da38a00534d30d"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1add39f555336ddc4904e073d787195732)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1add39f555336ddc4904e073d787195732"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a81a0da70c29b48e636ddbee79b146bed)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a81a0da70c29b48e636ddbee79b146bed"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a8b457c768d786ec3fc776aa834e73b0c)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a8b457c768d786ec3fc776aa834e73b0c"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a2961bd2497b39c0119ba9615b8aabf6f)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a2961bd2497b39c0119ba9615b8aabf6f"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a3d0121e0f22adfb3b39ab31ffb372915)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a3d0121e0f22adfb3b39ab31ffb372915"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1aacd41fb0eaf9472aeed9a9d29d211b3c)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1aacd41fb0eaf9472aeed9a9d29d211b3c"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1aa46e79ba53142f17a3d3ecf98b52f444)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1aa46e79ba53142f17a3d3ecf98b52f444"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a64ebb116326952d6dbcc9e93345e9132)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a64ebb116326952d6dbcc9e93345e9132"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__MatchPlayerWithMatch_1ae0d18bcae79b22e9175f7dceae8cd114)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1ae0d18bcae79b22e9175f7dceae8cd114"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__MatchPlayerWithMatch_1ad1331527b34833a77184536cc8e68049)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1ad1331527b34833a77184536cc8e68049"></a>

Checks whether CustomData_Optional is set to null.

#### `public inline FORCEINLINE `[`FRHAPI_MatchValuesOnly`](RHAPI_MatchValuesOnly.md#structFRHAPI__MatchValuesOnly)` & `[`GetMatch`](#structFRHAPI__MatchPlayerWithMatch_1a9f3e9ba686d1e5386105628f99a7908f)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a9f3e9ba686d1e5386105628f99a7908f"></a>

Gets the value of Match.

#### `public inline FORCEINLINE const `[`FRHAPI_MatchValuesOnly`](RHAPI_MatchValuesOnly.md#structFRHAPI__MatchValuesOnly)` & `[`GetMatch`](#structFRHAPI__MatchPlayerWithMatch_1adf05e5df46f7644439a7b00c0c80c79e)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1adf05e5df46f7644439a7b00c0c80c79e"></a>

Gets the value of Match.

#### `public inline FORCEINLINE void `[`SetMatch`](#structFRHAPI__MatchPlayerWithMatch_1ae261a667f3d543d0a13ffaadb618bab0)`(const `[`FRHAPI_MatchValuesOnly`](RHAPI_MatchValuesOnly.md#structFRHAPI__MatchValuesOnly)` & NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1ae261a667f3d543d0a13ffaadb618bab0"></a>

Sets the value of Match.

#### `public inline FORCEINLINE void `[`SetMatch`](#structFRHAPI__MatchPlayerWithMatch_1adb7eb51dfe7bfddb17484a66ce9b3823)`(`[`FRHAPI_MatchValuesOnly`](RHAPI_MatchValuesOnly.md#structFRHAPI__MatchValuesOnly)` && NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1adb7eb51dfe7bfddb17484a66ce9b3823"></a>

Sets the value of Match using move semantics.

